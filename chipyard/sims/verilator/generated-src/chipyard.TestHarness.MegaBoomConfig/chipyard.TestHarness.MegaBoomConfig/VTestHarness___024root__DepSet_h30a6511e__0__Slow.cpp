// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

void VTestHarness___024unit____Vdpiimwrap_uart_init_TOP____024unit(std::string filename, IData/*31:0*/ uartno);

VL_ATTR_COLD void VTestHarness___024root___initial__TOP__9(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___initial__TOP__9\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__0;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__1;
    VlWide<5>/*159:0*/ __Vtemp_h54d31e6c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4bf1a41d__0;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__2;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__3;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__4;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__5;
    VlWide<5>/*159:0*/ __Vtemp_h18c2d470__6;
    VlWide<3>/*95:0*/ __Vtemp_h8fdcb696__0;
    // Body
    __Vtemp_h18c2d470__0[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__0[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__0[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__0[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__0[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__0), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h18c2d470__1[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__1[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__1[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__1[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__1), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp_h54d31e6c__0[0U] = 0x6e3d2564U;
    __Vtemp_h54d31e6c__0[1U] = 0x745f7069U;
    __Vtemp_h54d31e6c__0[2U] = 0x5f626f6fU;
    __Vtemp_h54d31e6c__0[3U] = 0x73746f6dU;
    __Vtemp_h54d31e6c__0[4U] = 0x6375U;
    if ((! VL_VALUEPLUSARGS_INI(1, VL_CVT_PACK_STR_NW(5, __Vtemp_h54d31e6c__0), 
                                vlSelf->TestHarness__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestHarness__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp_h4bf1a41d__0[0U] = 0x783d2564U;
    __Vtemp_h4bf1a41d__0[1U] = 0x72745f74U;
    __Vtemp_h4bf1a41d__0[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_h4bf1a41d__0), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
    __Vtemp_h18c2d470__2[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__2[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__2[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__2[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__2), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h18c2d470__3[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__3[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__3[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__3[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__3), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h18c2d470__4[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__4[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__4[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__4[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__4), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h18c2d470__5[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__5[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__5[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__5[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__5), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h18c2d470__6[0U] = 0x743d2564U;
    __Vtemp_h18c2d470__6[1U] = 0x6d656f75U;
    __Vtemp_h18c2d470__6[2U] = 0x6b5f7469U;
    __Vtemp_h18c2d470__6[3U] = 0x656c696eU;
    __Vtemp_h18c2d470__6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_h18c2d470__6), 
                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_h8fdcb696__0[0U] = 0x673d2573U;
    __Vtemp_h8fdcb696__0[1U] = 0x72746c6fU;
    __Vtemp_h8fdcb696__0[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_h8fdcb696__0), 
                               vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog);VTestHarness___024unit____Vdpiimwrap_uart_init_TOP____024unit(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog, vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartno);
    vlSelf->TestHarness__DOT__simdram__DOT__initialized = 0U;
}
