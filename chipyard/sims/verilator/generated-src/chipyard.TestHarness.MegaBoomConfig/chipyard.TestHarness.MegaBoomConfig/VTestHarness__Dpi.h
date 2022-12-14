// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTHARNESS__DPI_H_
#define VERILATED_VTESTHARNESS__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimJTAG.v:3:29
    extern int jtag_tick(svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimDRAM.v:1:33
    extern void* memory_init(long long mem_size, long long word_size, long long line_size, long long id_bits, long long clock_hz);
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimDRAM.v:10:30
    extern void memory_tick(void* channel, svBit reset, svBit ar_valid, svBit* ar_ready, int ar_addr, int ar_id, int ar_size, int ar_len, svBit aw_valid, svBit* aw_ready, int aw_addr, int aw_id, int aw_size, int aw_len, svBit w_valid, svBit* w_ready, int w_strb, long long w_data, svBit w_last, svBit* r_valid, svBit r_ready, int* r_id, int* r_resp, long long* r_data, svBit* r_last, svBit* b_valid, svBit b_ready, int* b_id, int* b_resp);
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimSerial.v:1:29
    extern int serial_tick(svBit serial_out_valid, svBit* serial_out_ready, int serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, int* serial_in_bits);
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimUART.v:3:30
    extern void uart_init(const char* filename, int uartno);
    // DPI import at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/SimUART.v:8:30
    extern void uart_tick(svBit serial_out_valid, svBit* serial_out_ready, char serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, char* serial_in_bits);

#ifdef __cplusplus
}
#endif

#endif  // guard
