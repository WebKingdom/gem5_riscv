// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024unit.h"

extern "C" void* memory_init(long long mem_size, long long word_size, long long line_size, long long id_bits, long long clock_hz);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_memory_init_TOP____024unit(QData/*63:0*/ mem_size, QData/*63:0*/ word_size, QData/*63:0*/ line_size, QData/*63:0*/ id_bits, QData/*63:0*/ clock_hz, QData/*63:0*/ &memory_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_memory_init_TOP____024unit\n"); );
    // Body
    long long mem_size__Vcvt;
    for (size_t mem_size__Vidx = 0; mem_size__Vidx < 1; ++mem_size__Vidx) mem_size__Vcvt = mem_size;
    long long word_size__Vcvt;
    for (size_t word_size__Vidx = 0; word_size__Vidx < 1; ++word_size__Vidx) word_size__Vcvt = word_size;
    long long line_size__Vcvt;
    for (size_t line_size__Vidx = 0; line_size__Vidx < 1; ++line_size__Vidx) line_size__Vcvt = line_size;
    long long id_bits__Vcvt;
    for (size_t id_bits__Vidx = 0; id_bits__Vidx < 1; ++id_bits__Vidx) id_bits__Vcvt = id_bits;
    long long clock_hz__Vcvt;
    for (size_t clock_hz__Vidx = 0; clock_hz__Vidx < 1; ++clock_hz__Vidx) clock_hz__Vcvt = clock_hz;
    void* memory_init__Vfuncrtn__Vcvt;
    memory_init__Vfuncrtn__Vcvt = memory_init(mem_size__Vcvt, word_size__Vcvt, line_size__Vcvt, id_bits__Vcvt, clock_hz__Vcvt);
    memory_init__Vfuncrtn = VL_CVT_VP_Q(memory_init__Vfuncrtn__Vcvt);
}

extern "C" void memory_tick(void* channel, svBit reset, svBit ar_valid, svBit* ar_ready, int ar_addr, int ar_id, int ar_size, int ar_len, svBit aw_valid, svBit* aw_ready, int aw_addr, int aw_id, int aw_size, int aw_len, svBit w_valid, svBit* w_ready, int w_strb, long long w_data, svBit w_last, svBit* r_valid, svBit r_ready, int* r_id, int* r_resp, long long* r_data, svBit* r_last, svBit* b_valid, svBit b_ready, int* b_id, int* b_resp);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_memory_tick_TOP____024unit(QData/*63:0*/ channel, CData/*0:0*/ reset, CData/*0:0*/ ar_valid, CData/*0:0*/ &ar_ready, IData/*31:0*/ ar_addr, IData/*31:0*/ ar_id, IData/*31:0*/ ar_size, IData/*31:0*/ ar_len, CData/*0:0*/ aw_valid, CData/*0:0*/ &aw_ready, IData/*31:0*/ aw_addr, IData/*31:0*/ aw_id, IData/*31:0*/ aw_size, IData/*31:0*/ aw_len, CData/*0:0*/ w_valid, CData/*0:0*/ &w_ready, IData/*31:0*/ w_strb, QData/*63:0*/ w_data, CData/*0:0*/ w_last, CData/*0:0*/ &r_valid, CData/*0:0*/ r_ready, IData/*31:0*/ &r_id, IData/*31:0*/ &r_resp, QData/*63:0*/ &r_data, CData/*0:0*/ &r_last, CData/*0:0*/ &b_valid, CData/*0:0*/ b_ready, IData/*31:0*/ &b_id, IData/*31:0*/ &b_resp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_memory_tick_TOP____024unit\n"); );
    // Body
    void* channel__Vcvt;
    for (size_t channel__Vidx = 0; channel__Vidx < 1; ++channel__Vidx) channel__Vcvt = VL_CVT_Q_VP(channel);
    svBit reset__Vcvt;
    for (size_t reset__Vidx = 0; reset__Vidx < 1; ++reset__Vidx) reset__Vcvt = reset;
    svBit ar_valid__Vcvt;
    for (size_t ar_valid__Vidx = 0; ar_valid__Vidx < 1; ++ar_valid__Vidx) ar_valid__Vcvt = ar_valid;
    svBit ar_ready__Vcvt;
    int ar_addr__Vcvt;
    for (size_t ar_addr__Vidx = 0; ar_addr__Vidx < 1; ++ar_addr__Vidx) ar_addr__Vcvt = ar_addr;
    int ar_id__Vcvt;
    for (size_t ar_id__Vidx = 0; ar_id__Vidx < 1; ++ar_id__Vidx) ar_id__Vcvt = ar_id;
    int ar_size__Vcvt;
    for (size_t ar_size__Vidx = 0; ar_size__Vidx < 1; ++ar_size__Vidx) ar_size__Vcvt = ar_size;
    int ar_len__Vcvt;
    for (size_t ar_len__Vidx = 0; ar_len__Vidx < 1; ++ar_len__Vidx) ar_len__Vcvt = ar_len;
    svBit aw_valid__Vcvt;
    for (size_t aw_valid__Vidx = 0; aw_valid__Vidx < 1; ++aw_valid__Vidx) aw_valid__Vcvt = aw_valid;
    svBit aw_ready__Vcvt;
    int aw_addr__Vcvt;
    for (size_t aw_addr__Vidx = 0; aw_addr__Vidx < 1; ++aw_addr__Vidx) aw_addr__Vcvt = aw_addr;
    int aw_id__Vcvt;
    for (size_t aw_id__Vidx = 0; aw_id__Vidx < 1; ++aw_id__Vidx) aw_id__Vcvt = aw_id;
    int aw_size__Vcvt;
    for (size_t aw_size__Vidx = 0; aw_size__Vidx < 1; ++aw_size__Vidx) aw_size__Vcvt = aw_size;
    int aw_len__Vcvt;
    for (size_t aw_len__Vidx = 0; aw_len__Vidx < 1; ++aw_len__Vidx) aw_len__Vcvt = aw_len;
    svBit w_valid__Vcvt;
    for (size_t w_valid__Vidx = 0; w_valid__Vidx < 1; ++w_valid__Vidx) w_valid__Vcvt = w_valid;
    svBit w_ready__Vcvt;
    int w_strb__Vcvt;
    for (size_t w_strb__Vidx = 0; w_strb__Vidx < 1; ++w_strb__Vidx) w_strb__Vcvt = w_strb;
    long long w_data__Vcvt;
    for (size_t w_data__Vidx = 0; w_data__Vidx < 1; ++w_data__Vidx) w_data__Vcvt = w_data;
    svBit w_last__Vcvt;
    for (size_t w_last__Vidx = 0; w_last__Vidx < 1; ++w_last__Vidx) w_last__Vcvt = w_last;
    svBit r_valid__Vcvt;
    svBit r_ready__Vcvt;
    for (size_t r_ready__Vidx = 0; r_ready__Vidx < 1; ++r_ready__Vidx) r_ready__Vcvt = r_ready;
    int r_id__Vcvt;
    int r_resp__Vcvt;
    long long r_data__Vcvt;
    svBit r_last__Vcvt;
    svBit b_valid__Vcvt;
    svBit b_ready__Vcvt;
    for (size_t b_ready__Vidx = 0; b_ready__Vidx < 1; ++b_ready__Vidx) b_ready__Vcvt = b_ready;
    int b_id__Vcvt;
    int b_resp__Vcvt;
    memory_tick(channel__Vcvt, reset__Vcvt, ar_valid__Vcvt, &ar_ready__Vcvt, ar_addr__Vcvt, ar_id__Vcvt, ar_size__Vcvt, ar_len__Vcvt, aw_valid__Vcvt, &aw_ready__Vcvt, aw_addr__Vcvt, aw_id__Vcvt, aw_size__Vcvt, aw_len__Vcvt, w_valid__Vcvt, &w_ready__Vcvt, w_strb__Vcvt, w_data__Vcvt, w_last__Vcvt, &r_valid__Vcvt, r_ready__Vcvt, &r_id__Vcvt, &r_resp__Vcvt, &r_data__Vcvt, &r_last__Vcvt, &b_valid__Vcvt, b_ready__Vcvt, &b_id__Vcvt, &b_resp__Vcvt);
    ar_ready = (1U & ar_ready__Vcvt);
    aw_ready = (1U & aw_ready__Vcvt);
    w_ready = (1U & w_ready__Vcvt);
    r_valid = (1U & r_valid__Vcvt);
    r_id = r_id__Vcvt;
    r_resp = r_resp__Vcvt;
    r_data = r_data__Vcvt;
    r_last = (1U & r_last__Vcvt);
    b_valid = (1U & b_valid__Vcvt);
    b_id = b_id__Vcvt;
    b_resp = b_resp__Vcvt;
}

extern "C" int jtag_tick(svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/ &jtag_TCK, CData/*0:0*/ &jtag_TMS, CData/*0:0*/ &jtag_TDI, CData/*0:0*/ &jtag_TRSTn, CData/*0:0*/ jtag_TDO, IData/*31:0*/ &jtag_tick__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    svBit jtag_TCK__Vcvt;
    svBit jtag_TMS__Vcvt;
    svBit jtag_TDI__Vcvt;
    svBit jtag_TRSTn__Vcvt;
    svBit jtag_TDO__Vcvt;
    for (size_t jtag_TDO__Vidx = 0; jtag_TDO__Vidx < 1; ++jtag_TDO__Vidx) jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt;
    jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}

extern "C" int serial_tick(svBit serial_out_valid, svBit* serial_out_ready, int serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, int* serial_in_bits);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_serial_tick_TOP____024unit(CData/*0:0*/ serial_out_valid, CData/*0:0*/ &serial_out_ready, IData/*31:0*/ serial_out_bits, CData/*0:0*/ &serial_in_valid, CData/*0:0*/ serial_in_ready, IData/*31:0*/ &serial_in_bits, IData/*31:0*/ &serial_tick__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_serial_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    for (size_t serial_out_valid__Vidx = 0; serial_out_valid__Vidx < 1; ++serial_out_valid__Vidx) serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    int serial_out_bits__Vcvt;
    for (size_t serial_out_bits__Vidx = 0; serial_out_bits__Vidx < 1; ++serial_out_bits__Vidx) serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    for (size_t serial_in_ready__Vidx = 0; serial_in_ready__Vidx < 1; ++serial_in_ready__Vidx) serial_in_ready__Vcvt = serial_in_ready;
    int serial_in_bits__Vcvt;
    int serial_tick__Vfuncrtn__Vcvt;
    serial_tick__Vfuncrtn__Vcvt = serial_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = serial_in_bits__Vcvt;
    serial_tick__Vfuncrtn = serial_tick__Vfuncrtn__Vcvt;
}

extern "C" void uart_init(const char* filename, int uartno);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_uart_init_TOP____024unit(std::string filename, IData/*31:0*/ uartno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_uart_init_TOP____024unit\n"); );
    // Body
    const char* filename__Vcvt;
    for (size_t filename__Vidx = 0; filename__Vidx < 1; ++filename__Vidx) filename__Vcvt = filename.c_str();
    int uartno__Vcvt;
    for (size_t uartno__Vidx = 0; uartno__Vidx < 1; ++uartno__Vidx) uartno__Vcvt = uartno;
    uart_init(filename__Vcvt, uartno__Vcvt);
}

extern "C" void uart_tick(svBit serial_out_valid, svBit* serial_out_ready, char serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, char* serial_in_bits);

VL_INLINE_OPT void VTestHarness___024unit____Vdpiimwrap_uart_tick_TOP____024unit(CData/*0:0*/ serial_out_valid, CData/*0:0*/ &serial_out_ready, CData/*7:0*/ serial_out_bits, CData/*0:0*/ &serial_in_valid, CData/*0:0*/ serial_in_ready, CData/*7:0*/ &serial_in_bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit____Vdpiimwrap_uart_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    for (size_t serial_out_valid__Vidx = 0; serial_out_valid__Vidx < 1; ++serial_out_valid__Vidx) serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    char serial_out_bits__Vcvt;
    for (size_t serial_out_bits__Vidx = 0; serial_out_bits__Vidx < 1; ++serial_out_bits__Vidx) serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    for (size_t serial_in_ready__Vidx = 0; serial_in_ready__Vidx < 1; ++serial_in_ready__Vidx) serial_in_ready__Vcvt = serial_in_ready;
    char serial_in_bits__Vcvt;
    uart_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = (0xffU & serial_in_bits__Vcvt);
}
