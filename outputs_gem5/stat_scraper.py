import sys
# import pandas as pd
import csv

# should be in order of gem5 stats output
KEYS = ['simSeconds', 'simTicks', 'hostSeconds', 'simInsts', 'simOps', 'numCycles', 'issueRate', 'fuBusyRate',
        'cpu.numInsts', 'cpu.cpi', 'cpu.ipc', 'branchPred.lookups', 'branchPred.condPredicted', 'branchPred.condIncorrect',
        'branchPred.BTBLookups', 'branchPred.BTBHits', 'branchPred.BTBHitRatio', 'branchPred.RASUsed',
        'branchPred.RASIncorrect', 'branchPred.indirectLookups', 'branchPred.indirectMisses',
        'branchPred.indirectMispredicted', 'dcache.overallMissRate::total', 'dcache.overallAvgMissLatency::total',
        'dcache.overallMshrMissRate::total', 'dcache.overallAvgMshrMissLatency::total', 'dcache.ReadReq.missRate::total',
        'dcache.ReadReq.avgMissLatency::total', 'dcache.ReadReq.mshrMissRate::total',
        'dcache.ReadReq.avgMshrMissLatency::total', 'dcache.SwapReq.missRate::total', 'dcache.WriteReq.missRate::total',
        'dcache.WriteReq.avgMissLatency::total', 'dcache.WriteReq.mshrMissRate::total', 'dcache.prefetcher.accuracy',
        'dcache.prefetcher.coverage', 'icache.overallMissRate::total', 'icache.overallAvgMissLatency::total',
        'icache.overallMshrMissRate::total', 'icache.overallAvgMshrMissLatency::total', 'icache.ReadReq.missRate::total',
        'icache.ReadReq.avgMissLatency::total', 'icache.ReadReq.mshrMissRate::total',
        'icache.ReadReq.avgMshrMissLatency::total', 'icache.prefetcher.accuracy', 'icache.prefetcher.coverage',
        'l2.overallMissRate::cpu.inst', 'l2.overallMissRate::cpu.data', 'l2.overallMissRate::cpu.dcache.prefetcher',
        'l2.overallMissRate::cpu.icache.prefetcher', 'l2.overallMissRate::total', 'l2.overallMshrMissRate::total',
        'l2.prefetcher.accuracy', 'l2.prefetcher.coverage']
NUM_KEYS = len(KEYS)


# check if input string contains any of the KEYS and return key index
def contains_any_key(string):
    for i in range(NUM_KEYS):
        if (string.__contains__(KEYS[i])):
            return i
    return -1


# parses a given file at file_path
def parse_file(file_path):
    dict_list = []
    num_keys_found = 0
    
    with open(file_path) as f:
        for line in f:
            line = line.strip()
            key_idx = contains_any_key(line)
            if (key_idx >= 0):
                line_list = line.split()
                dict_list.append((str(KEYS[key_idx]), line_list[1]))
                num_keys_found += 1
    
    if (num_keys_found == len(dict_list)):
        print('Found all KEYS')
    print(dict_list)


parse_file("median_riscv_boom_config1/stats.txt")

print("Done")
