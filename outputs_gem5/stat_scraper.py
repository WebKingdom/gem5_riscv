import sys
# import pandas as pd
import csv

# unique keys to search for in gem5 stats.txt output. 
# * should be in same order as stat output!
KEYS_temp = ['simSeconds', 'simTicks', 'hostSeconds', 'simInsts', 'simOps', 'numCycles', 'issueRate', 'fuBusyRate',
        'cpu.numInsts', 'cpu.cpi', 'cpu.ipc', 'branchPred.lookups', 'branchPred.condPredicted', 'branchPred.condIncorrect',
        'branchPred.BTBLookups', 'branchPred.BTBHits', 'branchPred.BTBHitRatio', 'branchPred.RASUsed',
        'branchPred.RASIncorrect', 'branchPred.indirectLookups', 'branchPred.indirectMisses',
        'branchPred.indirectMispredicted', 'dcache.overallMissRate::total', 'dcache.overallAvgMissLatency::total',
        'dcache.overallMshrMissRate::total', 'dcache.overallAvgMshrMissLatency::total', 'dcache.ReadReq.missRate::total',
        'dcache.ReadReq.avgMissLatency::total', 'dcache.ReadReq.mshrMissRate::total',
        'dcache.ReadReq.avgMshrMissLatency::total', 'dcache.WriteReq.missRate::total',
        'dcache.WriteReq.avgMissLatency::total', 'dcache.WriteReq.mshrMissRate::total', 'dcache.prefetcher.accuracy',
        'dcache.prefetcher.coverage', 'icache.overallMissRate::total', 'icache.overallAvgMissLatency::total',
        'icache.overallMshrMissRate::total', 'icache.overallAvgMshrMissLatency::total', 'icache.ReadReq.missRate::total',
        'icache.ReadReq.avgMissLatency::total', 'icache.ReadReq.mshrMissRate::total',
        'icache.ReadReq.avgMshrMissLatency::total',
        'l2.overallMissRate::cpu.inst', 'l2.overallMissRate::cpu.data', 'l2.overallMissRate::cpu.dcache.prefetcher',
        'l2.overallMissRate::total', 'l2.overallMshrMissRate::total',
        'l2.prefetcher.accuracy', 'l2.prefetcher.coverage']


KEYS = ['simSeconds', 'simTicks', 'hostSeconds', 'simInsts', 'simOps', 'numCycles', 'issueRate', 'fuBusyRate',
        'cpu.numInsts', 'cpu.cpi', 'cpu.ipc', 'branchPred.lookups', 'branchPred.condPredicted', 'branchPred.condIncorrect',
        'branchPred.BTBLookups', 'branchPred.BTBHits', 'branchPred.BTBHitRatio', 'branchPred.RASUsed',
        'branchPred.RASIncorrect', 'branchPred.indirectLookups', 'branchPred.indirectMisses',
        'branchPred.indirectMispredicted', 'dcache.overallMissRate::total', 'dcache.overallAvgMissLatency::total',
        'dcache.overallMshrMissRate::total', 'dcache.overallAvgMshrMissLatency::total', 'dcache.ReadReq.missRate::total',
        'dcache.ReadReq.avgMissLatency::total', 'dcache.ReadReq.mshrMissRate::total',
        'dcache.ReadReq.avgMshrMissLatency::total', 'dcache.WriteReq.missRate::total',
        'dcache.WriteReq.avgMissLatency::total', 'dcache.WriteReq.mshrMissRate::total', 'dcache.prefetcher.accuracy',
        'dcache.prefetcher.coverage', 'icache.overallMissRate::total', 'icache.overallAvgMissLatency::total',
        'icache.overallMshrMissRate::total', 'icache.overallAvgMshrMissLatency::total', 'icache.ReadReq.missRate::total',
        'icache.ReadReq.avgMissLatency::total', 'icache.ReadReq.mshrMissRate::total',
        'icache.ReadReq.avgMshrMissLatency::total', 'icache.prefetcher.accuracy', 'icache.prefetcher.coverage',
        'l2.overallMissRate::cpu.inst', 'l2.overallMissRate::cpu.data', 'l2.overallMissRate::cpu.dcache.prefetcher',
        'l2.overallMissRate::cpu.icache.prefetcher', 'l2.overallMissRate::total', 'l2.overallMshrMissRate::total',
        'l2.prefetcher.accuracy', 'l2.prefetcher.coverage']


FILE_PATHS_temp = [('matrix_prog', 'matrix_prog_boom_config1/stats.txt'), ('median', 'median_riscv_boom_config1/stats.txt'),
              ('multiply', 'multiply_riscv_boom_config1/stats.txt'), ('qsort', 'qsort_riscv_boom_config1/stats.txt'),
              ('rsort', 'rsort_riscv_boom_config1/stats.txt'), ('spmv', 'spmv_riscv_boom_config1/stats.txt'),
              ('towers', 'towers_riscv_boom_config1/stats.txt'), ('vvadd', 'vvadd_riscv_boom_config1/stats.txt')]


FILE_PATHS = [('matrix_prog', 'matrix_prog_boom_config2/stats.txt'), ('median', 'median_riscv_boom_config2/stats.txt'),
              ('multiply', 'multiply_riscv_boom_config2/stats.txt'), ('qsort', 'qsort_riscv_boom_config2/stats.txt'),
              ('rsort', 'rsort_riscv_boom_config2/stats.txt'), ('spmv', 'spmv_riscv_boom_config2/stats.txt'),
              ('towers', 'towers_riscv_boom_config2/stats.txt'), ('vvadd', 'vvadd_riscv_boom_config2/stats.txt')]


def print_regex_keys():
    res = ''
    for key in KEYS:
        res += (key + '|')
    print(res)
    return res


# check if input string contains any of the KEYS and return key index
def contains_any_key(string):
    for i in range(len(KEYS)):
        if (string.__contains__(KEYS[i])):
            return i
    return -1


# parses a given file at file_path
def parse_file(file_path):
    dict_list = []
    stat_list = []
    num_keys_found = 0
    key_idx = 0

    with open(file_path) as f:
        for line in f:
            line = line.strip()
            next_idx = contains_any_key(line)
            if (next_idx >= 0):
                if (int(key_idx + 1) != next_idx):
                    print("ERROR: KEYS found not sequential: " + KEYS[next_idx])
                key_idx = next_idx
                line_list = line.split()
                dict_list.append((str(KEYS[key_idx]), line_list[1]))
                stat_list.append(line_list[1])
                num_keys_found += 1

    return ((num_keys_found == len(stat_list)), stat_list)


# write parsed data to CSV
def write_csv(file_path):
    with open(file_path, 'w') as f:
        writer = csv.writer(f)
        header = KEYS
        header.insert(0, 'Benchmark')
        writer.writerow(header)

        # parse and write to csv all stats.txt
        for fp in FILE_PATHS:
            found_all_keys, stat_list = parse_file(fp[1])
            stat_list.insert(0, fp[0])
            
            if (found_all_keys):
                print('All ' + str(len(KEYS)) + ' KEYS found, writing data from: ' + str(fp[1]))
                writer.writerow(stat_list)
            else:
                print('ERROR: Not all KEYS found in: ' + str(fp[1]))


write_csv('gem5_stats.csv')
print('Done')
