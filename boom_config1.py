# gem5 configuration file for a more detailed BOOM core model
# Based on: configs\example\riscv\fs_linux.py

# ------------------------------- Notes ------------------------------- #

# Use to view options:
# $ ./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -h

# ------------------------------- Notes ------------------------------- #

import argparse
import sys
from os import path

import m5
from m5.defines import buildEnv
from m5.objects import *
from m5.objects.FuncUnit import *
from m5.objects.FuncUnitConfig import *
from m5.SimObject import *

from m5.util import addToPath, fatal, warn
from m5.util.fdthelper import *
from m5.params import *

addToPath('../../../')

from ruby import Ruby

from common.FSConfig import *
from common.SysPaths import *
from common.Benchmarks import *
from common import Simulation
from common import CacheConfig
from common import CpuConfig
from common import MemConfig
from common import ObjectList
from common.FileSystemConfig import config_filesystem
from common.Caches import *
from common import Options



# ----------------------------- FuncUnitConfig ---------------------------- #
class IntALU_1(FUDesc):
    opList = [ OpDesc(opClass='IntAlu') ]
    count = 4

class IntMultDiv_1(FUDesc):
    opList = [ OpDesc(opClass='IntMult', opLat=3),
               OpDesc(opClass='IntDiv', opLat=20, pipelined=False) ]

    # DIV and IDIV instructions in x86 are implemented using a loop which
    # issues division microops.  The latency of these microops should really be
    # one (or a small number) cycle each since each of these computes one bit
    # of the quotient.
    if buildEnv['TARGET_ISA'] in ('x86'):
        opList[1].opLat=1

    count=1

class FP_ALU_1(FUDesc):
    opList = [ OpDesc(opClass='FloatAdd', opLat=2),
               OpDesc(opClass='FloatCmp', opLat=2),
               OpDesc(opClass='FloatCvt', opLat=2) ]
    count = 2

class FP_Mult_1(FUDesc):
    opList = [ OpDesc(opClass='FloatMult', opLat=4),
               OpDesc(opClass='FloatMultAcc', opLat=5),
               OpDesc(opClass='FloatMisc', opLat=3) ]
    count = 2

class FP_Div_1(FUDesc):
    opList = [ OpDesc(opClass='FloatDiv', opLat=12, pipelined=False),
               OpDesc(opClass='FloatSqrt', opLat=24, pipelined=False) ]
    count = 1

class SIMD_Unit_1(FUDesc):
    opList = [ OpDesc(opClass='SimdAdd'),
               OpDesc(opClass='SimdAddAcc'),
               OpDesc(opClass='SimdAlu'),
               OpDesc(opClass='SimdCmp'),
               OpDesc(opClass='SimdCvt'),
               OpDesc(opClass='SimdMisc'),
               OpDesc(opClass='SimdMult'),
               OpDesc(opClass='SimdMultAcc'),
               OpDesc(opClass='SimdShift'),
               OpDesc(opClass='SimdShiftAcc'),
               OpDesc(opClass='SimdDiv'),
               OpDesc(opClass='SimdSqrt'),
               OpDesc(opClass='SimdFloatAdd'),
               OpDesc(opClass='SimdFloatAlu'),
               OpDesc(opClass='SimdFloatCmp'),
               OpDesc(opClass='SimdFloatCvt'),
               OpDesc(opClass='SimdFloatDiv'),
               OpDesc(opClass='SimdFloatMisc'),
               OpDesc(opClass='SimdFloatMult'),
               OpDesc(opClass='SimdFloatMultAcc'),
               OpDesc(opClass='SimdFloatSqrt'),
               OpDesc(opClass='SimdReduceAdd'),
               OpDesc(opClass='SimdReduceAlu'),
               OpDesc(opClass='SimdReduceCmp'),
               OpDesc(opClass='SimdFloatReduceAdd'),
               OpDesc(opClass='SimdFloatReduceCmp') ]
    count = 2

class PredALU_1(FUDesc):
    opList = [ OpDesc(opClass='SimdPredAlu') ]
    count = 1

class ReadPortInt_1(FUDesc):
    opList = [ OpDesc(opClass='MemRead') ]
    count = 6

class WritePortInt_1(FUDesc):
    opList = [ OpDesc(opClass='MemWrite') ]
    count = 3

class ReadPortFl_1(FUDesc):
    opList = [ OpDesc(opClass='FloatMemRead') ]
    count = 3

class WritePortFl_1(FUDesc):
    opList = [ OpDesc(opClass='FloatMemWrite') ]
    count = 2

class IprPort_1(FUDesc):
    opList = [ OpDesc(opClass='IprAccess', opLat = 3, pipelined = False) ]
    count = 1


# ----------------------------- BoomFUPool ---------------------------- #
# TODO ssz ensure correct latencies, pipelines, and count
class BoomFUPool_1(DefaultFUPool):
    FUList = [ IntALU_1(), IntMultDiv_1(), FP_ALU_1(), FP_Mult_1(), FP_Div_1(),
               SIMD_Unit_1(), PredALU_1(), ReadPortInt_1(), WritePortInt_1(),
               ReadPortFl_1(), WritePortFl_1(), IprPort_1() ]


# Used for parsing arguments and starting simulation
def get_processes(args):
    """Interprets provided args and returns a list of processes"""

    multiprocesses = []
    inputs = []
    outputs = []
    errouts = []
    pargs = []

    workloads = args.cmd.split(';')
    if args.input != "":
        inputs = args.input.split(';')
    if args.output != "":
        outputs = args.output.split(';')
    if args.errout != "":
        errouts = args.errout.split(';')
    if args.options != "":
        pargs = args.options.split(';')

    idx = 0
    for wrkld in workloads:
        process = Process(pid=100 + idx)
        process.executable = wrkld
        process.cwd = os.getcwd()
        process.gid = os.getgid()

        if args.env:
            with open(args.env, 'r') as f:
                process.env = [line.rstrip() for line in f]

        if len(pargs) > idx:
            process.cmd = [wrkld] + pargs[idx].split()
        else:
            process.cmd = [wrkld]

        if len(inputs) > idx:
            process.input = inputs[idx]
        if len(outputs) > idx:
            process.output = outputs[idx]
        if len(errouts) > idx:
            process.errout = errouts[idx]

        multiprocesses.append(process)
        idx += 1

    if args.smt:
        assert (args.cpu_type == "DerivO3CPU")
        return multiprocesses, idx
    else:
        return multiprocesses, 1


# ----------------------------- Add Options ---------------------------- #
parser = argparse.ArgumentParser()
Options.addCommonOptions(parser)
Options.addSEOptions(parser)


# ---------------------------- Parse Options --------------------------- #
args = parser.parse_args()
multiprocesses = []
numThreads = 1

if args.bench:
    apps = args.bench.split("-")
    if len(apps) != args.num_cpus:
        print("number of benchmarks not equal to set num_cpus!")
        sys.exit(1)

    for app in apps:
        try:
            if buildEnv['TARGET_ISA'] == 'arm':
                exec("workload = %s('arm_%s', 'linux', '%s')" % (
                        app, args.arm_iset, args.spec_input))
            else:
                exec("workload = %s(buildEnv['TARGET_ISA', 'linux', '%s')" % (
                        app, args.spec_input))
            multiprocesses.append(workload.makeProcess())
        except:
            print("Unable to find workload for %s: %s" %
                  (buildEnv['TARGET_ISA'], app),
                  file=sys.stderr)
            sys.exit(1)
elif args.cmd:
    multiprocesses, numThreads = get_processes(args)
    print("numThreads: " + str(numThreads))
else:
    print("No workload specified. Exiting!\n", file=sys.stderr)
    sys.exit(1)

# CPU and Memory
(CPUClass, mem_mode, FutureClass) = Simulation.setCPUClass(args)
CPUClass.numThreads = numThreads

# TODO configure RiscvO3CPU which extends BaseO3CPU, RiscvCPU, and BaseCPU
# check CPU type to ensure it is RiscvO3CPU
if (not CPUClass.type == "BaseO3CPU"):
    print("Error: CPU type is not 'BaseO3CPU'")
    sys.exit(1)

# Parameters worth considering: 
CPUClass.syscallRetryLatency = 10000       # Cycles to wait until retry

CPUClass.cacheStorePorts = 200
CPUClass.cacheLoadPorts = 200

CPUClass.fetchWidth = 4
CPUClass.fetchBufferSize = 16               # 32 entires in fetch buffer, 16B/cycle coming in (parametrizable, so can be changed in BOOM)
CPUClass.fetchQueueSize = 32                # 32 entries in fetch target queue (parametrizable, so can be changed in BOOM)
CPUClass.fetchToDecodeDelay = 4             # TODO? (down pipe) IF & pre-decode takes 4 cycles. Is this before or after fetch buffer?
CPUClass.decodeWidth = 4
CPUClass.decodeToRenameDelay = 1            # TODO? (down pipe)
CPUClass.renameWidth = 4
CPUClass.renameToIEWDelay = 2               # TODO? (down pipe)
CPUClass.issueToExecuteDelay = 1            # TODO? (down pipe)
CPUClass.dispatchWidth = 4
CPUClass.issueWidth = 4
CPUClass.wbWidth = 4
CPUClass.fuPool = BoomFUPool_1()
CPUClass.iewToCommitDelay = 1               # TODO?(down pipe)
CPUClass.commitWidth = 4
CPUClass.squashWidth = 4
CPUClass.trapLatency = 13                   # TODO? Left as default
CPUClass.LQEntries = 32
CPUClass.SQEntries = 32
CPUClass.store_set_clear_period = 250000    # TODO? Number of load/store insts before the dep predictor should be invalidated
CPUClass.LFSTSize = 1024                    # TODO? Last fetched store table size (left as default)
CPUClass.SSITSize = 1024                    # TODO? Store set ID table size (left as default)
CPUClass.numPhysIntRegs = 128               # parametrizable, so can be changed in BOOM
CPUClass.numPhysFloatRegs = 128             # parametrizable, so can be changed in BOOM
CPUClass.numPhysVecRegs = 48                # could be 48 based on an optional extension to BOOM (https://docs.boom-core.org/en/latest/sections/future-work.html?highlight=vector#the-vector-v-isa-extension)
CPUClass.numPhysVecPredRegs = 6             # No predicate registers in BOOM
CPUClass.numPhysCCRegs = 0                  # No conditional-code (cc) registers
CPUClass.numIQEntries = 32                  # TODO? Number of instruction queue entries
CPUClass.numROBEntries = 128                # parametrizable, so can be changed in BOOM


MemClass = Simulation.setMemClass(args)
np = args.num_cpus
mp0_path = multiprocesses[0].executable
print("mp0_path: " + str(mp0_path))

# Check -- do not allow SMT with multiple CPUs
if args.smt and args.num_cpus > 1:
    fatal("You cannot use SMT with multiple CPUs!")


# ---------------------------- Setup System ---------------------------- #
system = System()

system.mem_mode = mem_mode
system.mem_ranges = [AddrRange(start=0x40000000, size=args.mem_size)]

system.iobus = IOXBar()
system.membus = MemBus()    # TODO? difference between SystemXBar() and MemBus() ?

system.system_port = system.membus.cpu_side_ports

uncacheable_range = AddrRange(start=0x10000000, size=0x8)

system.bridge = Bridge(delay='50ns')
system.bridge.mem_side_port = system.iobus.cpu_side_ports
system.bridge.cpu_side_port = system.membus.mem_side_ports
system.bridge.ranges = [uncacheable_range]   # Should only include UART but we do not use it so it may have a range of 0. system.platform._off_chip_ranges() AddrRange[0x10000000, 0x8]


# ---------------------------- Default Setup --------------------------- #
# Set the cache line size for the entire system
system.cache_line_size = args.cacheline_size

# Create a top-level voltage domain (use: 'voltage = args.sys_voltage' to base it off of args)
system.voltage_domain = VoltageDomain()

# Create a source clock for the system and set the clock period
system.clk_domain = SrcClockDomain(clock=args.sys_clock, voltage_domain=system.voltage_domain)

# Create a CPU voltage domain
system.cpu_voltage_domain = VoltageDomain()

# Create a source clock for the CPUs and set the clock period
system.cpu_clk_domain = SrcClockDomain(clock=args.cpu_clock, voltage_domain=system.cpu_voltage_domain)

system.cpu = [CPUClass(clk_domain=system.cpu_clk_domain, cpu_id=i)
              for i in range(np)]

if args.caches or args.l2cache:
    # By default the IOCache runs at the system clock
    system.iocache = IOCache(addr_ranges=system.mem_ranges)
    system.iocache.cpu_side = system.iobus.mem_side_ports
    system.iocache.mem_side = system.membus.cpu_side_ports
elif not args.external_memory_system:
    print("Attaching iobridge since not external_memory_system")
    system.iobridge = Bridge(delay='50ns', ranges=system.mem_ranges)
    system.iobridge.cpu_side_port = system.iobus.mem_side_ports
    system.iobridge.mem_side_port = system.membus.cpu_side_ports

if numThreads > 1:
    system.multi_thread = True

# Sanity check (only applicable to SimPoints)
if args.simpoint_profile:
    if not ObjectList.is_noncaching_cpu(CPUClass):
        fatal("SimPoint generation should be done with atomic cpu")
    if np > 1:
        fatal("SimPoint generation not supported with more than one CPUs")


# TODO ssz incorporate branch predictor
# configs\common\ObjectList.py
for i in range(np):
    if args.smt:
        system.cpu[i].workload = multiprocesses
    elif len(multiprocesses) == 1:
        system.cpu[i].workload = multiprocesses[0]
    else:
        system.cpu[i].workload = multiprocesses[i]
    
    if args.simpoint_profile:
        system.cpu[i].addSimPointProbe(args.simpoint_interval)
    
    if args.checker:
        system.cpu[i].addCheckerCpu()
    
    if not ObjectList.is_kvm_cpu(CPUClass):
        if args.bp_type:
            bpClass = ObjectList.bp_list.get(args.bp_type)
            system.cpu[i].branchPred = bpClass()
        if args.indirect_bp_type:
            IndirectBPClass = ObjectList.indirect_bp_list.get(args.indirect_bp_type)
            system.cpu[i].branchPred.indirectBranchPred = IndirectBPClass()
    
    system.cpu[i].createThreads()


# ----------------------------- PMA Checker ---------------------------- #
# PMA checker can be defined at system-level (system.pma_checker)
# or MMU-level (system.cpu[0].mmu.pma_checker). It will be resolved
# by RiscvTLB's Parent.any proxy
for cpu in system.cpu:
    cpu.mmu.pma_checker = PMAChecker(uncacheable=[uncacheable_range])


# ---------------------------- Default Setup --------------------------- #
if args.elastic_trace_en and args.checkpoint_restore == None and not args.fast_forward:
    CpuConfig.config_etrace(CPUClass, system.cpu, args)

CacheConfig.config_cache(args, system)

MemConfig.config_mem(args, system)

config_filesystem(system, args)

system.workload = SEWorkload.init_compatible(mp0_path)

if args.wait_gdb:
    system.workload.wait_for_remote_gdb = True

root = Root(full_system = False, system = system)
Simulation.setWorkCountOptions(system, args)
Simulation.run(args, root, system, FutureClass)



"""
hello test:
./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -c configs/example/cpre581/gem5_riscv/tests/hello/bin/hello --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 

matrix_prog test:
./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -c configs/example/cpre581/gem5_riscv/tests/matrix_prog/bin/matrix_prog_riscv_static --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 


riscv-tests qsort test:
./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -c configs/example/cpre581/gem5_riscv/tests/riscv-tests/bin/qsort.riscv --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 


./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -c configs/example/cpre581/gem5_riscv/tests/riscv-tests/median/src/median_main.o --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 



BOOM with CPUClass edited matrix_prog test:
./build/RISCV/gem5.opt configs/example/cpre581/gem5_riscv/boom_config1.py -c configs/example/cpre581/gem5_riscv/tests/matrix_prog/bin/matrix_prog_riscv_static --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 



Test with default fs_linux.py
./build/RISCV/gem5.opt configs/example/riscv/fs_linux.py --num-cpus=1 --sys-clock=1GHz --mem-type=DDR4_2400_8x8 --mem-size=8GB --caches --l2cache --num-l2caches=1 --l1d_size=32kB --l1i_size=32kB --l2_size=512kB --l1d_assoc=8 --l1i_assoc=8 --l2_assoc=8 --cacheline_size=16 --cpu-type=RiscvO3CPU --bp-type=TAGE --indirect-bp-type=SimpleIndirectPredictor --l1i-hwp-type=BOPPrefetcher --l1d-hwp-type=BOPPrefetcher --l2-hwp-type=BOPPrefetcher --cpu-clock=1GHz 

# --num-l3caches 0 --l3_size 4MB --l3_assoc 16
DDR4_2400_4x16
DDR4_2400_16x4

# ------------------------------- Options ------------------------------- #
usage: boom_config1.py [-h] [-n NUM_CPUS] [--sys-voltage SYS_VOLTAGE] [--sys-clock SYS_CLOCK] [--list-mem-types]
                       [--mem-type {CfiMemory,DDR3_1600_8x8,DDR3_2133_8x8,DDR4_2400_16x4,DDR4_2400_4x16,DDR4_2400_8x8,DRAMInterface,GDDR5_4000_2x32,HBM_1000_4H_1x128,HBM_1000_4H_1x64,HBM_2000_4H_1x64,HMC_2500_1x32,LPDDR2_S4_1066_1x32,LPDDR3_1600_1x32,LPDDR5_5500_1x16_8B_BL32,LPDDR5_5500_1x16_BG_BL16,LPDDR5_5500_1x16_BG_BL32,LPDDR5_6400_1x16_8B_BL32,LPDDR5_6400_1x16_BG_BL16,LPDDR5_6400_1x16_BG_BL32,NVMInterface,NVM_2400_1x64,QoSMemSinkInterface,SimpleMemory,WideIO_200_1x128}]
                       [--mem-channels MEM_CHANNELS] [--mem-ranks MEM_RANKS] [--mem-size MEM_SIZE] [--enable-dram-powerdown]
                       [--mem-channels-intlv MEM_CHANNELS_INTLV] [--memchecker] [--external-memory-system EXTERNAL_MEMORY_SYSTEM]
                       [--tlm-memory TLM_MEMORY] [--caches] [--l2cache] [--num-dirs NUM_DIRS] [--num-l2caches NUM_L2CACHES]
                       [--num-l3caches NUM_L3CACHES] [--l1d_size L1D_SIZE] [--l1i_size L1I_SIZE] [--l2_size L2_SIZE] [--l3_size L3_SIZE]
                       [--l1d_assoc L1D_ASSOC] [--l1i_assoc L1I_ASSOC] [--l2_assoc L2_ASSOC] [--l3_assoc L3_ASSOC]
                       [--cacheline_size CACHELINE_SIZE] [--ruby] [-m TICKS] [--rel-max-tick TICKS] [--maxtime MAXTIME] [-P PARAM]
                       [--list-cpu-types]
                       [--cpu-type {AtomicSimpleCPU,BaseAtomicSimpleCPU,BaseMinorCPU,BaseNonCachingSimpleCPU,BaseO3CPU,BaseTimingSimpleCPU,DerivO3CPU,MinorCPU,NonCachingSimpleCPU,O3CPU,RiscvAtomicSimpleCPU,RiscvMinorCPU,RiscvNonCachingSimpleCPU,RiscvO3CPU,RiscvTimingSimpleCPU,TimingSimpleCPU,TraceCPU}]
                       [--list-bp-types] [--list-indirect-bp-types]
                       [--bp-type {BiModeBP,LTAGE,LocalBP,MultiperspectivePerceptron64KB,MultiperspectivePerceptron8KB,MultiperspectivePerceptronTAGE64KB,MultiperspectivePerceptronTAGE8KB,TAGE,TAGE_SC_L_64KB,TAGE_SC_L_8KB,TournamentBP}]
                       [--indirect-bp-type {SimpleIndirectPredictor}] [--list-rp-types] [--list-hwp-types]
                       [--l1i-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}]
                       [--l1d-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}]
                       [--l2-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}]
                       [--checker] [--cpu-clock CPU_CLOCK] [--smt] [--elastic-trace-en] [--inst-trace-file INST_TRACE_FILE]
                       [--data-trace-file DATA_TRACE_FILE] [--dist] [--dist-sync-on-pseudo-op] [--is-switch] [--dist-rank DIST_RANK]
                       [--dist-size DIST_SIZE] [--dist-server-name DIST_SERVER_NAME] [--dist-server-port DIST_SERVER_PORT]
                       [--dist-sync-repeat DIST_SYNC_REPEAT] [--dist-sync-start DIST_SYNC_START] [--ethernet-linkspeed ETHERNET_LINKSPEED]
                       [--ethernet-linkdelay ETHERNET_LINKDELAY] [-I MAXINSTS] [--work-item-id WORK_ITEM_ID] [--num-work-ids NUM_WORK_IDS]
                       [--work-begin-cpu-id-exit WORK_BEGIN_CPU_ID_EXIT] [--work-end-exit-count WORK_END_EXIT_COUNT]
                       [--work-begin-exit-count WORK_BEGIN_EXIT_COUNT] [--init-param INIT_PARAM] [--initialize-only] [--simpoint-profile]
                       [--simpoint-interval SIMPOINT_INTERVAL] [--take-simpoint-checkpoints TAKE_SIMPOINT_CHECKPOINTS]
                       [--restore-simpoint-checkpoint] [--take-checkpoints TAKE_CHECKPOINTS] [--max-checkpoints MAX_CHECKPOINTS]
                       [--checkpoint-dir CHECKPOINT_DIR] [-r CHECKPOINT_RESTORE] [--checkpoint-at-end]
                       [--work-begin-checkpoint-count WORK_BEGIN_CHECKPOINT_COUNT] [--work-end-checkpoint-count WORK_END_CHECKPOINT_COUNT]
                       [--work-cpus-checkpoint-count WORK_CPUS_CHECKPOINT_COUNT]
                       [--restore-with-cpu {AtomicSimpleCPU,BaseAtomicSimpleCPU,BaseMinorCPU,BaseNonCachingSimpleCPU,BaseO3CPU,BaseTimingSimpleCPU,DerivO3CPU,MinorCPU,NonCachingSimpleCPU,O3CPU,RiscvAtomicSimpleCPU,RiscvMinorCPU,RiscvNonCachingSimpleCPU,RiscvO3CPU,RiscvTimingSimpleCPU,TimingSimpleCPU,TraceCPU}]
                       [--repeat-switch REPEAT_SWITCH] [-s STANDARD_SWITCH] [-p PROG_INTERVAL] [-W WARMUP_INSTS] [--bench BENCH]
                       [-F FAST_FORWARD] [-S] [--at-instruction] [--spec-input {ref,test,train,smred,mdred,lgred}]
                       [--arm-iset {arm,thumb,aarch64}] [--stats-root STATS_ROOT] [-c CMD] [-o OPTIONS] [-e ENV] [-i INPUT]
                       [--output OUTPUT] [--errout ERROUT] [--chroot CHROOT] [--interp-dir INTERP_DIR] [--redirects REDIRECTS] [--wait-gdb]

optional arguments:
  -h, --help            show this help message and exit
  -n NUM_CPUS, --num-cpus NUM_CPUS
  --sys-voltage SYS_VOLTAGE
                        Top-level voltage for blocks running at system power supply
  --sys-clock SYS_CLOCK
                        Top-level clock for blocks running at system speed
  --list-mem-types      List available memory types
  --mem-type {CfiMemory,DDR3_1600_8x8,DDR3_2133_8x8,DDR4_2400_16x4,DDR4_2400_4x16,DDR4_2400_8x8,DRAMInterface,GDDR5_4000_2x32,HBM_1000_4H_1x128,HBM_1000_4H_1x64,HBM_2000_4H_1x64,HMC_2500_1x32,LPDDR2_S4_1066_1x32,LPDDR3_1600_1x32,LPDDR5_5500_1x16_8B_BL32,LPDDR5_5500_1x16_BG_BL16,LPDDR5_5500_1x16_BG_BL32,LPDDR5_6400_1x16_8B_BL32,LPDDR5_6400_1x16_BG_BL16,LPDDR5_6400_1x16_BG_BL32,NVMInterface,NVM_2400_1x64,QoSMemSinkInterface,SimpleMemory,WideIO_200_1x128}
                        type of memory to use
  --mem-channels MEM_CHANNELS
                        number of memory channels
  --mem-ranks MEM_RANKS
                        number of memory ranks per channel
  --mem-size MEM_SIZE   Specify the physical memory size (single memory)
  --enable-dram-powerdown
                        Enable low-power states in DRAMInterface
  --mem-channels-intlv MEM_CHANNELS_INTLV
                        Memory channels interleave
  --memchecker
  --external-memory-system EXTERNAL_MEMORY_SYSTEM
                        use external ports of this port_type for caches
  --tlm-memory TLM_MEMORY
                        use external port for SystemC TLM cosimulation
  --caches
  --l2cache
  --num-dirs NUM_DIRS
  --num-l2caches NUM_L2CACHES
  --num-l3caches NUM_L3CACHES
  --l1d_size L1D_SIZE
  --l1i_size L1I_SIZE
  --l2_size L2_SIZE
  --l3_size L3_SIZE
  --l1d_assoc L1D_ASSOC
  --l1i_assoc L1I_ASSOC
  --l2_assoc L2_ASSOC
  --l3_assoc L3_ASSOC
  --cacheline_size CACHELINE_SIZE
  --ruby
  -m TICKS, --abs-max-tick TICKS
                        Run to absolute simulated tick specified including ticks from a restored checkpoint
  --rel-max-tick TICKS  Simulate for specified number of ticks relative to the simulation start tick (e.g. if restoring a checkpoint)
  --maxtime MAXTIME     Run to the specified absolute simulated time in seconds
  -P PARAM, --param PARAM
                        Set a SimObject parameter relative to the root node. An extended Python multi range slicing syntax can be used for
                        arrays. For example: 'system.cpu[0,1,3:8:2].max_insts_all_threads = 42' sets max_insts_all_threads for cpus 0, 1,
                        3, 5 and 7 Direct parameters of the root object are not accessible, only parameters of its children.
  --list-cpu-types      List available CPU types
  --cpu-type {AtomicSimpleCPU,BaseAtomicSimpleCPU,BaseMinorCPU,BaseNonCachingSimpleCPU,BaseO3CPU,BaseTimingSimpleCPU,DerivO3CPU,MinorCPU,NonCachingSimpleCPU,O3CPU,RiscvAtomicSimpleCPU,RiscvMinorCPU,RiscvNonCachingSimpleCPU,RiscvO3CPU,RiscvTimingSimpleCPU,TimingSimpleCPU,TraceCPU}
                        type of cpu to run with
  --list-bp-types       List available branch predictor types
  --list-indirect-bp-types
                        List available indirect branch predictor types
  --bp-type {BiModeBP,LTAGE,LocalBP,MultiperspectivePerceptron64KB,MultiperspectivePerceptron8KB,MultiperspectivePerceptronTAGE64KB,MultiperspectivePerceptronTAGE8KB,TAGE,TAGE_SC_L_64KB,TAGE_SC_L_8KB,TournamentBP}
                        type of branch predictor to run with (if not set, use the default branch predictor of the selected CPU)
  --indirect-bp-type {SimpleIndirectPredictor}
                        type of indirect branch predictor to run with
  --list-rp-types       List available replacement policy types
  --list-hwp-types      List available hardware prefetcher types
  --l1i-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}
                        type of hardware prefetcher to use with the L1 instruction cache. (if not set, use the default prefetcher of the
                        selected cache)
  --l1d-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}
                        type of hardware prefetcher to use with the L1 data cache. (if not set, use the default prefetcher of the selected
                        cache)
  --l2-hwp-type {AMPMPrefetcher,BOPPrefetcher,DCPTPrefetcher,IndirectMemoryPrefetcher,IrregularStreamBufferPrefetcher,MultiPrefetcher,PIFPrefetcher,SBOOEPrefetcher,STeMSPrefetcher,SignaturePathPrefetcher,SignaturePathPrefetcherV2,SlimAMPMPrefetcher,StridePrefetcher,TaggedPrefetcher}
                        type of hardware prefetcher to use with the L2 cache. (if not set, use the default prefetcher of the selected
                        cache)
  --checker
  --cpu-clock CPU_CLOCK
                        Clock for blocks running at CPU speed
  --smt                 Only used if multiple programs are specified. If true, then the number of threads per cpu is same as the number of
                        programs.
  --elastic-trace-en    Enable capture of data dependency and instruction fetch traces using elastic trace probe.
  --inst-trace-file INST_TRACE_FILE
                        Instruction fetch trace file input to Elastic Trace probe in a capture simulation and Trace CPU in a replay
                        simulation
  --data-trace-file DATA_TRACE_FILE
                        Data dependency trace file input to Elastic Trace probe in a capture simulation and Trace CPU in a replay
                        simulation
  --dist                Parallel distributed gem5 simulation.
  --dist-sync-on-pseudo-op
                        Use a pseudo-op to start dist-gem5 synchronization.
  --is-switch           Select the network switch simulator process for adistributed gem5 run
  --dist-rank DIST_RANK
                        Rank of this system within the dist gem5 run.
  --dist-size DIST_SIZE
                        Number of gem5 processes within the dist gem5 run.
  --dist-server-name DIST_SERVER_NAME
                        Name of the message server host DEFAULT: localhost
  --dist-server-port DIST_SERVER_PORT
                        Message server listen port DEFAULT: 2200
  --dist-sync-repeat DIST_SYNC_REPEAT
                        Repeat interval for synchronisation barriers among dist-gem5 processes DEFAULT: --ethernet-linkdelay
  --dist-sync-start DIST_SYNC_START
                        Time to schedule the first dist synchronisation barrier DEFAULT:5200000000000t
  --ethernet-linkspeed ETHERNET_LINKSPEED
                        Link speed in bps DEFAULT: 10Gbps
  --ethernet-linkdelay ETHERNET_LINKDELAY
                        Link delay in seconds DEFAULT: 10us
  -I MAXINSTS, --maxinsts MAXINSTS
                        Total number of instructions to simulate (default: run forever)
  --work-item-id WORK_ITEM_ID
                        the specific work id for exit & checkpointing
  --num-work-ids NUM_WORK_IDS
                        Number of distinct work item types
  --work-begin-cpu-id-exit WORK_BEGIN_CPU_ID_EXIT
                        exit when work starts on the specified cpu
  --work-end-exit-count WORK_END_EXIT_COUNT
                        exit at specified work end count
  --work-begin-exit-count WORK_BEGIN_EXIT_COUNT
                        exit at specified work begin count
  --init-param INIT_PARAM
                        Parameter available in simulation with m5 initparam
  --initialize-only     Exit after initialization. Do not simulate time. Useful when gem5 is run as a library.
  --simpoint-profile    Enable basic block profiling for SimPoints
  --simpoint-interval SIMPOINT_INTERVAL
                        SimPoint interval in num of instructions
  --take-simpoint-checkpoints TAKE_SIMPOINT_CHECKPOINTS
                        <simpoint file,weight file,interval-length,warmup-length>
  --restore-simpoint-checkpoint
                        restore from a simpoint checkpoint taken with --take-simpoint-checkpoints
  --take-checkpoints TAKE_CHECKPOINTS
                        <M,N> take checkpoints at tick M and every N ticks thereafter
  --max-checkpoints MAX_CHECKPOINTS
                        the maximum number of checkpoints to drop
  --checkpoint-dir CHECKPOINT_DIR
                        Place all checkpoints in this absolute directory
  -r CHECKPOINT_RESTORE, --checkpoint-restore CHECKPOINT_RESTORE
                        restore from checkpoint <N>
  --checkpoint-at-end   take a checkpoint at end of run
  --work-begin-checkpoint-count WORK_BEGIN_CHECKPOINT_COUNT
                        checkpoint at specified work begin count
  --work-end-checkpoint-count WORK_END_CHECKPOINT_COUNT
                        checkpoint at specified work end count
  --work-cpus-checkpoint-count WORK_CPUS_CHECKPOINT_COUNT
                        checkpoint and exit when active cpu count is reached
  --restore-with-cpu {AtomicSimpleCPU,BaseAtomicSimpleCPU,BaseMinorCPU,BaseNonCachingSimpleCPU,BaseO3CPU,BaseTimingSimpleCPU,DerivO3CPU,MinorCPU,NonCachingSimpleCPU,O3CPU,RiscvAtomicSimpleCPU,RiscvMinorCPU,RiscvNonCachingSimpleCPU,RiscvO3CPU,RiscvTimingSimpleCPU,TimingSimpleCPU,TraceCPU}
                        cpu type for restoring from a checkpoint
  --repeat-switch REPEAT_SWITCH
                        switch back and forth between CPUs with period <N>
  -s STANDARD_SWITCH, --standard-switch STANDARD_SWITCH
                        switch from timing to Detailed CPU after warmup period of <N>
  -p PROG_INTERVAL, --prog-interval PROG_INTERVAL
                        CPU Progress Interval
  -W WARMUP_INSTS, --warmup-insts WARMUP_INSTS
                        Warmup period in total instructions (requires --standard-switch)
  --bench BENCH         base names for --take-checkpoint and --checkpoint-restore
  -F FAST_FORWARD, --fast-forward FAST_FORWARD
                        Number of instructions to fast forward before switching
  -S, --simpoint        Use workload simpoints as an instruction offset for --checkpoint-restore or --take-checkpoint.
  --at-instruction      Treat value of --checkpoint-restore or --take-checkpoint as a number of instructions.
  --spec-input {ref,test,train,smred,mdred,lgred}
                        Input set size for SPEC CPU2000 benchmarks.
  --arm-iset {arm,thumb,aarch64}
                        ARM instruction set.
  --stats-root STATS_ROOT
                        If given, dump only stats of objects under the given SimObject. SimObjects are identified with Python notation as
                        in: system.cpu[0].mmu. All elements of an array can be selected at once with: system.cpu[:].mmu. If given multiple
                        times, dump stats that are present under any of the roots. If not given, dump all stats.
  -c CMD, --cmd CMD     The binary to run in syscall emulation mode.
  -o OPTIONS, --options OPTIONS
                        The options to pass to the binary, use " " around the entire string
  -e ENV, --env ENV     Initialize workload environment from text file.
  -i INPUT, --input INPUT
                        Read stdin from a file.
  --output OUTPUT       Redirect stdout to a file.
  --errout ERROUT       Redirect stderr to a file.
  --chroot CHROOT       The chroot option allows a user to alter the search path for processes running in SE mode. Normally, the search
                        path would begin at the root of the filesystem (i.e. /). With chroot, a user can force the process to begin looking
                        atsome other location (i.e. /home/user/rand_dir).The intended use is to trick sophisticated software which queries
                        the __HOST__ filesystem for information or functionality. Instead of finding files on the __HOST__ filesystem, the
                        process will find the user's replacment files.
  --interp-dir INTERP_DIR
                        The interp-dir option is used for setting the interpreter's path. This will allow to load the guest dynamic
                        linker/loader itself from the elf binary. The option points to the parent folder of the guest /lib in the host fs
  --redirects REDIRECTS
                        A collection of one or more redirect paths to be used in syscall emulation.Usage: gem5.opt [...] --redirects
                        /dir1=/path/to/host/dir1 --redirects /dir2=/path/to/host/dir2
  --wait-gdb            Wait for remote GDB to connect.
# ------------------------------- Options ------------------------------- #
"""
