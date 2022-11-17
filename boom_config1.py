# gem5 configuration file for a more detailed BOOM core model
# Based on: configs\example\riscv\fs_linux.py

from common import Options
from common.Caches import *
from common import ObjectList
from common import MemConfig
from common import CpuConfig
from common import CacheConfig
from common import Simulation
from common.Benchmarks import *
from common.SysPaths import *
from common.FSConfig import *
from ruby import Ruby
import argparse
import sys
from os import path

import m5
from m5.defines import buildEnv
from m5.objects import *
from m5.util import addToPath, fatal, warn
from m5.util.fdthelper import *

addToPath('../../')


# may be useful for parsing arguments and starting simulation
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

# CPU and Memory
(CPUClass, mem_mode, FutureClass) = Simulation.setCPUClass(args)
MemClass = Simulation.setMemClass(args)
np = args.num_cpus


# ---------------------------- Setup System ---------------------------- #
system = System()

system.mem_mode = mem_mode
system.mem_ranges = [AddrRange(start=0x80000000, size='8GB')]

system.iobus = IOXBar()
system.membus = MemBus()

system.system_port = system.membus.cpu_side_ports

# HiFive Platform
system.platform = HiFive()

# RTCCLK (Set to 100MHz for faster simulation)
system.platform.rtc = RiscvRTC(frequency=Frequency("100MHz"))
system.platform.clint.int_pin = system.platform.rtc.int_pin

# VirtIORng
if args.virtio_rng:
    system.platform.rng = RiscvMmioVirtIO(
        vio=VirtIORng(),
        interrupt_id=0x8,
        pio_size=4096,
        pio_addr=0x10007000
    )

system.bridge = Bridge(delay='50ns')
system.bridge.mem_side_port = system.iobus.cpu_side_ports
system.bridge.cpu_side_port = system.membus.mem_side_ports
system.bridge.ranges = system.platform._off_chip_ranges()

system.platform.attachOnChipIO(system.membus)
system.platform.attachOffChipIO(system.iobus)
system.platform.attachPlic()
system.platform.setNumCores(np)


# ---------------------------- Default Setup --------------------------- #
# Set the cache line size for the entire system
system.cache_line_size = args.cacheline_size

# Create a top-level voltage domain (use: 'voltage = args.sys_voltage' to base it off of args)
system.voltage_domain = VoltageDomain()

# Create a source clock for the system and set the clock period
system.clk_domain = SrcClockDomain(
    clock='1GHz', voltage_domain=system.voltage_domain)

# Create a CPU voltage domain
system.cpu_voltage_domain = VoltageDomain()

# Create a source clock for the CPUs and set the clock period
system.cpu_clk_domain = SrcClockDomain(
    clock='2GHz', voltage_domain=system.cpu_voltage_domain)

system.cpu = [CPUClass(clk_domain=system.cpu_clk_domain, cpu_id=i)
              for i in range(np)]

if args.caches or args.l2cache:
    # By default the IOCache runs at the system clock
    system.iocache = IOCache(addr_ranges=system.mem_ranges)
    system.iocache.cpu_side = system.iobus.mem_side_ports
    system.iocache.mem_side = system.membus.cpu_side_ports
elif not args.external_memory_system:
    system.iobridge = Bridge(delay='50ns', ranges=system.mem_ranges)
    system.iobridge.cpu_side_port = system.iobus.mem_side_ports
    system.iobridge.mem_side_port = system.membus.cpu_side_ports

# Sanity check (only applicable to SimPoints)
if args.simpoint_profile:
    if not ObjectList.is_noncaching_cpu(CPUClass):
        fatal("SimPoint generation should be done with atomic cpu")
    if np > 1:
        fatal("SimPoint generation not supported with more than one CPUs")


# TODO ssz incorporate branch predictor
# configs\common\ObjectList.py
for i in range(np):
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
uncacheable_range = [
    *system.platform._on_chip_ranges(),
    *system.platform._off_chip_ranges()
]

# PMA checker can be defined at system-level (system.pma_checker)
# or MMU-level (system.cpu[0].mmu.pma_checker). It will be resolved
# by RiscvTLB's Parent.any proxy
for cpu in system.cpu:
    cpu.mmu.pma_checker = PMAChecker(uncacheable=uncacheable_range)


# ---------------------------- Default Setup --------------------------- #
if args.elastic_trace_en and args.checkpoint_restore == None and not args.fast_forward:
    CpuConfig.config_etrace(CPUClass, system.cpu, args)

CacheConfig.config_cache(args, system)

MemConfig.config_mem(args, system)

root = Root(full_system=False, system=system)

Simulation.setWorkCountOptions(system, args)
Simulation.run(args, root, system, FutureClass)
