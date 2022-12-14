// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__212(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__212\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h61f2568f__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9d1f5563__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9bbd5a2b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h61f2568f__1;
    VlWide<32>/*1023:0*/ __Vtemp_h9cc7b94b__0;
    VlWide<32>/*1023:0*/ __Vtemp_h55365a11__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10427:11
done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_h61f2568f__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp_h9d1f5563__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h61f2568f__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_h61f2568f__0[0U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h61f2568f__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h61f2568f__0[1U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h61f2568f__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h61f2568f__0[2U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h61f2568f__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h61f2568f__0[3U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h61f2568f__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h61f2568f__0[4U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h61f2568f__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h61f2568f__0[5U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h61f2568f__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h61f2568f__0[6U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h61f2568f__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h61f2568f__0[7U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h61f2568f__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h61f2568f__0[8U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_h61f2568f__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h61f2568f__0[9U]) 
                                        >> 1U)));
        __Vtemp_h9d1f5563__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_h61f2568f__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_h61f2568f__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_h61f2568f__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_h61f2568f__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_h61f2568f__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_h61f2568f__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_h61f2568f__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_h61f2568f__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_h61f2568f__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_h61f2568f__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_h61f2568f__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_h61f2568f__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_h9d1f5563__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_h61f2568f__0[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_h61f2568f__0[0x10U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_h61f2568f__0[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_h61f2568f__0[0x11U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_h61f2568f__0[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_h61f2568f__0[0x12U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_h61f2568f__0[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_h61f2568f__0[0x13U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_h61f2568f__0[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_h61f2568f__0[0x14U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_h61f2568f__0[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_h61f2568f__0[0x15U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_h61f2568f__0[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_h61f2568f__0[0x16U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_h61f2568f__0[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_h61f2568f__0[0x17U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_h61f2568f__0[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_h61f2568f__0[0x18U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_h61f2568f__0[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_h61f2568f__0[0x19U]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_h61f2568f__0[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_h61f2568f__0[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_h61f2568f__0[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_h61f2568f__0[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_h61f2568f__0[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_h61f2568f__0[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_h61f2568f__0[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_h61f2568f__0[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_h61f2568f__0[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_h61f2568f__0[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h9d1f5563__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_h61f2568f__0[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h9bbd5a2b__0, __Vtemp_h9d1f5563__0);
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (0xfU & __Vtemp_h9bbd5a2b__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10430: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10430, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10438:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_h61f2568f__1, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp_h9cc7b94b__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h61f2568f__1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_h61f2568f__1[0U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h61f2568f__1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h61f2568f__1[1U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h61f2568f__1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h61f2568f__1[2U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h61f2568f__1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h61f2568f__1[3U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h61f2568f__1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h61f2568f__1[4U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h61f2568f__1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h61f2568f__1[5U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h61f2568f__1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h61f2568f__1[6U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h61f2568f__1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h61f2568f__1[7U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h61f2568f__1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h61f2568f__1[8U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_h61f2568f__1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h61f2568f__1[9U]) 
                                        >> 1U)));
        __Vtemp_h9cc7b94b__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_h61f2568f__1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_h61f2568f__1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_h61f2568f__1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_h61f2568f__1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_h61f2568f__1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_h61f2568f__1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_h61f2568f__1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_h61f2568f__1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_h61f2568f__1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_h61f2568f__1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_h61f2568f__1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_h61f2568f__1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h9cc7b94b__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_h61f2568f__1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_h61f2568f__1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_h61f2568f__1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_h61f2568f__1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_h61f2568f__1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_h61f2568f__1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_h61f2568f__1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_h61f2568f__1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_h61f2568f__1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_h61f2568f__1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_h61f2568f__1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_h61f2568f__1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_h61f2568f__1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_h61f2568f__1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_h61f2568f__1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_h61f2568f__1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_h61f2568f__1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_h61f2568f__1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_h61f2568f__1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_h61f2568f__1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_h61f2568f__1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_h61f2568f__1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_h61f2568f__1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_h61f2568f__1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_h61f2568f__1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_h61f2568f__1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_h61f2568f__1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_h61f2568f__1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_h61f2568f__1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_h61f2568f__1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h9cc7b94b__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_h61f2568f__1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h55365a11__0, __Vtemp_h9cc7b94b__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (0xfU & __Vtemp_h55365a11__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10451:11
done_reset
    ) {
        if (VL_UNLIKELY((0xfffffffeU & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                                        & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10454: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10454, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__213(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__213\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10462:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((0xfffffffeU & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                                        & (~ (IData)(vlSelf->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10473:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                (((((((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U]) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U])))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                      < vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10476: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10476, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10484:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  (((((((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                        < vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10497:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21365:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21376:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21387:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21390: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21390, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__214(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__214\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21398:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21411:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21414: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21414, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21422:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21435:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21446:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xeU))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21449: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21449, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__215(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__215\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21457:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xeU)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21470:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xc00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21473: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21473, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21481:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__216(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__216\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21494:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21497: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21497, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21505:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21518:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xc00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21521: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21521, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__217(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__217\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21529:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                << 0x1fU) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                  >> 1U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21542:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                     & (0xc00000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21545: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21545, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21553:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21566:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21569: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21569, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__218(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__218\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21577:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21590:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21593: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21593, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21601:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21614:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21625:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xeU))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21628: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21628, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__219(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__219\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21636:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xeU)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21649:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xe00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21652: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21652, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21660:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__220(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__220\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21673:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21676: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21676, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21684:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21697:11
done_reset
    ) {
        if (VL_UNLIKELY((IData)((((0xe00000U == (0xfc0000U 
                                                 & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])) 
                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid)) 
                                 & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21700: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21700, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__221(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__221\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21708:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xe00000U == (0xfc0000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21721:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xe00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21724: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21724, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21732:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                << 0x1fU) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                  >> 1U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21745:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                     & (0xe00000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21748: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21748, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__222(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__222\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21756:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21769:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21780:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xeU))) 
                             & (0U == (0x30000U & (0x20000U 
                                                   ^ 
                                                   ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                     << 0x16U) 
                                                    | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xaU))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21783: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21783, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21791:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               & (0U == (0x30000U & 
                                         (0x20000U 
                                          ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__223(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__223\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21804:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21815:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21818: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21818, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21826:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21839:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21842: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21842, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__224(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__224\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21850:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21863:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21866: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21866, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21874:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21887:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                     & (0x800000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21890: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21890, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__225(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__225\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21898:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21911:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21914: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21914, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21922:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21935:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21946:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21949: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21949, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__226(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__226\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21957:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21970:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21973: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21973, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21981:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__227(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__227\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:21994:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:21997: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 21997, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22005:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22018:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x200000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22021: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22021, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22029:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x200000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__228(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__228\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22042:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22053:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22056: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22056, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22064:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22077:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22080: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22080, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__229(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__229\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22088:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22101:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22104: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22104, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22112:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U)) 
                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22125:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x400000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22128: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22128, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__230(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__230\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22136:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x400000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22149:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22160:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x400000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22163: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22163, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22171:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__231(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__231\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22184:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22187: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22187, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22195:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22208:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x400000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22211: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22211, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__232(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__232\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22219:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22232:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x600000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22235: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22235, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22243:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0x600000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22256:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22267:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x600000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22270: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22270, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__233(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__233\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22278:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22291:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22294: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22294, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22302:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__234(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__234\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22315:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0x600000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22318: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22318, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22326:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22339:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xa00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22342: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22342, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22350:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                          & (0xa00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__235(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__235\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22363:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22374:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xa00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22377: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22377, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22385:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xa00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22398:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xa00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22401: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22401, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__236(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__236\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22409:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xa00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22422:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0xa00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22425: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22425, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22433:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xa00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22446:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                     & (0xa00000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22449: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22449, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__237(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__237\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22457:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0xa00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22470:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22481:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22492:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22503:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22514:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22525:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22536:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22547:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22558:11
done_reset
    ) {
        if (VL_UNLIKELY((((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                 >> 0x15U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22561: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22561, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22569:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0x15U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__238(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__238\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22582:11
done_reset
    ) {
        if (VL_UNLIKELY((((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                 >> 0x12U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22585: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22585, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22593:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0x12U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22606:11
done_reset
    ) {
        if (VL_UNLIKELY((((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                 >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22609: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22609, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22617:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__239(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__239\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22630:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xaU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22633: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22633, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22641:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     >> 0xaU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22654:11
done_reset
    ) {
        if (VL_UNLIKELY((((0x3ffffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                       >> 0xaU)) != vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22657: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22657, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22665:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0x3ffffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)) 
                            != vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__240(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__240\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22678:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22689:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22700:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22703: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22703, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22711:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22724:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                   >> 4U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22727: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22727, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22735:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                     >> 4U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__241(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__241\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22748:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22759:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22770:11
done_reset
    ) {
        if (VL_UNLIKELY((0xffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                     >> (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU))) 
                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                       & (~ (IData)(vlSelf->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22773: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22773, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22781:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((0xffffU & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                     & (~ (IData)(vlSelf->reset))) 
                                    & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                       >> (0xfU & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0xaU))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22794:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                         >> (0xfU & 
                                             ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22797: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22797, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__242(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__242\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22805:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                               | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0xaU)) 
                                     == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                 >> 4U))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22818:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((1U == ((7U == (7U & (
                                                   vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 4U
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30)))) 
                             | (1U == ((7U == (7U & 
                                               (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 5U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22821: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22821, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__243(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__243\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22829:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU)) 
                                 == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                             >> 4U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((1U == ((7U == (7U & 
                                               (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x15U)))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30)))) 
                               | (1U == ((7U == (7U 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 0x15U)))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22842:11
done_reset
    ) {
        if (VL_UNLIKELY((((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                 >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xaU)) 
                                   == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                               >> 4U))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22845: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22845, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__244(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__244\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22853:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0xaU)) 
                                 == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                             >> 4U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22866:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((1U == ((7U == (7U & (IData)(
                                                          (7ULL 
                                                           & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & (IData)(
                                                          (7ULL 
                                                           & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))
                                               ? 4U
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46)))) 
                             | (1U == ((7U == (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 5U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U)))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22869: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22869, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__245(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__245\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22877:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)) 
                                    == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                >> 4U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((1U == ((7U == (7U & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46)))) 
                               | (1U == ((7U == (7U 
                                                 & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (7ULL 
                                                               & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                  >> 1U)))))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22890:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                          != (0xfU & (IData)((((0x3fU 
                                                >= 
                                                (0x3cU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                    >> 2U)))
                                                ? (0xfULL 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
                                                      >> 
                                                      (0x3cU 
                                                       & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                          >> 2U))))
                                                : 0ULL) 
                                              >> 1U)))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0xaU)) 
                                      == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U)))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22893: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22893, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__246(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__246\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22901:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xaU)) 
                                    == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                >> 4U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size) 
                            != (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  (0x3cU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                      >> 2U)))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     (0x3cU 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                         >> 2U))))
                                                  : 0ULL) 
                                                >> 1U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22914:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                             | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready))) 
                         & ((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid)) 
                             & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0xaU)) 
                                == (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                            >> 4U)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22917: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22917, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__247(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__247\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22925:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid)) 
                           & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0xaU)) == 
                              (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                       >> 4U)))) & 
                          (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                               | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22936:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
                                      < vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:22939: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 22939, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22947:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight)))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
                                        < vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:69)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:22960:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11097:11
done_reset
    ) {
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__248(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__248\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11108:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11119:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11122: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11122, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11130:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11143:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11146: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11146, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11154:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xc00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__249(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__249\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11167:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11178:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xeU))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11181: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11181, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11189:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xeU)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11202:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0xc00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11205: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11205, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__250(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__250\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11213:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11226:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11229: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11229, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11237:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__251(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__251\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11250:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0xc00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11253: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11253, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11261:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                << 0x1fU) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                  >> 1U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11274:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                     & (0xc00000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11277: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11277, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__252(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__252\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11285:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xc00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11298:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11301: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11301, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11309:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11322:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11325: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11325, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__253(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__253\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11333:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xe00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11346:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11357:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0xeU))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11360: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11360, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11368:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xeU)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11381:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0xe00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11384: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11384, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__254(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__254\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11392:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11405:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11408: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11408, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11416:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__255(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__255\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11429:11
done_reset
    ) {
        if (VL_UNLIKELY((IData)((((0xe00000U == (0xfc0000U 
                                                 & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])) 
                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid)) 
                                 & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11432: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11432, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11440:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xe00000U == (0xfc0000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11453:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0xe00000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11456: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11456, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__256(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__256\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11464:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                << 0x1fU) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                  >> 1U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11477:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                     & (0xe00000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11480: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11480, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11488:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0xe00000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11501:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11512:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xeU))) 
                             & ((0U == (0x1fff0000U 
                                        & (0x20000U 
                                           ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               << 0x16U) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 0xaU))))) 
                                | (0U == (0x1ffff000U 
                                          & (0x10000000U 
                                             ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11515: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11515, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__257(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__257\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11523:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               & ((0U == (0x1fff0000U 
                                          & (0x20000U 
                                             ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 << 0x16U) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU))))) 
                                  | (0U == (0x1ffff000U 
                                            & (0x10000000U 
                                               ^ ((
                                                   vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                     >> 0xaU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11536:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11547:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11550: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11550, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__258(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__258\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11558:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11571:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11574: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11574, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11582:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__259(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__259\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11595:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x800000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11598: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11598, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11606:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11619:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                          >> 9U) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                                     & (0x800000U == 
                                        (0xe00000U 
                                         & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                                    & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11622: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11622, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11630:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x800000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                            >> 9U)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__260(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__260\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11643:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xeU))) 
                             & (0U == (0x1ffff000U 
                                       & (0x10000000U 
                                          ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11646: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11646, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11654:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               & (0U == (0x1ffff000U 
                                         & (0x10000000U 
                                            ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                << 0x16U) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11667:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11678:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11681: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11681, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__261(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__261\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11689:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11702:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11705: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11705, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11713:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__262(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__262\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11726:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0U == (0xe00000U & 
                                       vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11729: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11729, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11737:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11750:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xeU))) 
                             & (0U == (0x1ffff000U 
                                       & (0x10000000U 
                                          ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11753: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11753, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__263(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__263\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11761:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((6U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0xeU))) 
                               & (0U == (0x1ffff000U 
                                         & (0x10000000U 
                                            ^ ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                << 0x16U) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11774:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11785:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11788: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11788, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11796:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__264(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__264\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11809:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11812: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11812, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11820:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11833:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                            << 0x1fU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x200000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11836: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11836, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__265(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__265\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11844:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x200000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              << 0x1fU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                >> 1U)) 
                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11857:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0x400000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11860: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11860, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11868:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0x400000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11881:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11892:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x400000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11895: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11895, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__266(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__266\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11903:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11916:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11919: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11919, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11927:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__267(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__267\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11940:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x400000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11943: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11943, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11951:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x400000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11964:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0x600000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:11967: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 11967, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11975:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0x600000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__268(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__268\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11988:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:11999:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0x16U) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                              >> 0xaU)) 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0xeU)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x600000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:12002: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 12002, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12010:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0x16U) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                >> 0xaU)) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12023:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      >> 0x12U))) & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:12026: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 12026, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__269(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__269\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12034:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12047:11
done_reset
    ) {
        if (VL_UNLIKELY((((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                    >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                             & (0x600000U == (0xe00000U 
                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:12050: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 12050, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12058:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                           & (0x600000U == (0xe00000U 
                                            & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:465:8)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:12071:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
                          & (0xa00000U == (0xe00000U 
                                           & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U]))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:12074: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 12074, "");
        }
    }
}
