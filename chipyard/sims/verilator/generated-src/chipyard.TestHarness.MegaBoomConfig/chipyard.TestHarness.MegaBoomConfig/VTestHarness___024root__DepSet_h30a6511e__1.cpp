// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__80(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__80\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h7e000346__0;
    VlWide<32>/*1023:0*/ __Vtemp_hca420489__0;
    VlWide<32>/*1023:0*/ __Vtemp_h648baf43__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8018:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_h7e000346__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp_hca420489__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h7e000346__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_h7e000346__0[0U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h7e000346__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_h7e000346__0[1U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h7e000346__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_h7e000346__0[2U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h7e000346__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_h7e000346__0[3U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h7e000346__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_h7e000346__0[4U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h7e000346__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_h7e000346__0[5U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h7e000346__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_h7e000346__0[6U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h7e000346__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_h7e000346__0[7U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h7e000346__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_h7e000346__0[8U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_h7e000346__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_h7e000346__0[9U]) 
                                        >> 1U)));
        __Vtemp_hca420489__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_h7e000346__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_h7e000346__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_h7e000346__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_h7e000346__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_h7e000346__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_h7e000346__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_h7e000346__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_h7e000346__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_h7e000346__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_h7e000346__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_h7e000346__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_h7e000346__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_hca420489__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_h7e000346__0[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_h7e000346__0[0x10U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_h7e000346__0[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_h7e000346__0[0x11U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_h7e000346__0[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_h7e000346__0[0x12U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_h7e000346__0[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_h7e000346__0[0x13U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_h7e000346__0[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_h7e000346__0[0x14U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_h7e000346__0[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_h7e000346__0[0x15U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_h7e000346__0[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_h7e000346__0[0x16U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_h7e000346__0[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_h7e000346__0[0x17U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_h7e000346__0[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_h7e000346__0[0x18U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_h7e000346__0[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_h7e000346__0[0x19U]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_h7e000346__0[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_h7e000346__0[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_h7e000346__0[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_h7e000346__0[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_h7e000346__0[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_h7e000346__0[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_h7e000346__0[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_h7e000346__0[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_h7e000346__0[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_h7e000346__0[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hca420489__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_h7e000346__0[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h648baf43__0, __Vtemp_hca420489__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                            != (0xfU & __Vtemp_h648baf43__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8031:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                             | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready))) 
                         & ((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                             & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8034: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8034, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8042:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))) 
                           & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                              == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                               | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__81(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__81\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h76b3eed8__0;
    VlWide<8>/*255:0*/ __Vtemp_h76b3eed8__1;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8053:11
done_reset
    ) {
        VL_SHIFTL_WWI(256,256,8, __Vtemp_h76b3eed8__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY((1U & ((~ ((0U != ((((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                  ^ 
                                                  (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h76b3eed8__0[0U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                    ^ 
                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h76b3eed8__0[1U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                                   ^ 
                                                   (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp_h76b3eed8__0[2U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                                  ^ 
                                                  (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h76b3eed8__0[3U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U] 
                                                 ^ 
                                                 (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h76b3eed8__0[4U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U] 
                                                ^ (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h76b3eed8__0[5U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U] 
                                               ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h76b3eed8__0[6U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U] 
                                              ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp_h76b3eed8__0[7U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U])))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8056: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8056, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8064:11
verbose&&done_reset
    ) {
        VL_SHIFTL_WWI(256,256,8, __Vtemp_h76b3eed8__1, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((0U != (((((((
                                                   (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    ^ 
                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h76b3eed8__1[0U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                                   | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                      ^ 
                                                      (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                        ? 
                                                       __Vtemp_h76b3eed8__1[1U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                                     ^ 
                                                     (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h76b3eed8__1[2U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                                    ^ 
                                                    (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h76b3eed8__1[3U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U] 
                                                   ^ 
                                                   (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp_h76b3eed8__1[4U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U] 
                                                  ^ 
                                                  (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h76b3eed8__1[5U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U] 
                                                 ^ 
                                                 (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h76b3eed8__1[6U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U] 
                                                ^ (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h76b3eed8__1[7U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                          | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U])))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8077:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U]) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U])))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                      < vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8080: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8080, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8088:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                        < vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__82(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__82\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8101:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8112:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8125:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8136:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8149:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U]) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U])))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                      < vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8152: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8152, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8160:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  (((((((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
                                        < vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__83(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__83\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
        = vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    vlSelf->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:23991:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24002:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24013:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24016: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24016, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24024:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24037:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24040: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24040, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__84(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__84\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24048:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24061:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24072:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24075: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24075, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24083:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24096:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24099: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24099, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__85(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__85\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24107:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24120:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24131:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24134: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24134, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24142:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__86(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__86\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24155:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24166:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24169: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24169, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24177:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24190:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24193: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24193, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__87(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__87\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24201:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24214:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24225:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24228: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24228, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24236:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24249:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24252: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24252, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__88(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__88\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24260:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24273:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24284:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24287: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24287, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24295:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                          & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                     ? 1U : 4U))) & 
                         (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24308:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24311: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24311, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__89(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__89\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24319:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24332:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24343:11
done_reset
    ) {
        if (VL_UNLIKELY(((0xcU < (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24346: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24346, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24354:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xcU < (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24367:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                             | ((6U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                & ((((((((((0ULL == 
                                            (0x1ffffb000ULL 
                                             & (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                           | (0ULL 
                                              == (0x1ffff0000ULL 
                                                  & (QData)((IData)(
                                                                    (0x10000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (0ULL == 
                                             (0x1ffff0000ULL 
                                              & (QData)((IData)(
                                                                (0x20000U 
                                                                 ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (0ULL == 
                                            (0x1fffef000ULL 
                                             & (QData)((IData)(
                                                               (0x100000U 
                                                                ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (0ULL == 
                                           (0x1ffff0000ULL 
                                            & (QData)((IData)(
                                                              (0x2000000U 
                                                               ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (0ULL == (0x1fffff000ULL 
                                                   & (QData)((IData)(
                                                                     (0x2010000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (0ULL == (0x1fc000000ULL 
                                                  & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (0ULL == (0x1fffff000ULL 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (0ULL == (0x1fffff000ULL 
                                                & (QData)((IData)(
                                                                  (0x54000000U 
                                                                   ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                   | (0ULL == (0x1f0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24370: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24370, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__91(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__91\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24391:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24402:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24405: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24405, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24413:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24426:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24437:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24440: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24440, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__92(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__92\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24448:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24461:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24472:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((((((((0ULL == 
                                             (0x1ffffb000ULL 
                                              & (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (0ULL 
                                               == (0x1fffef000ULL 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (0ULL 
                                              == (0x1ffff0000ULL 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x2010000U 
                                                                 ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (0ULL == 
                                            (0x1fc000000ULL 
                                             & (QData)((IData)(
                                                               (0xc000000U 
                                                                ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x10000000U 
                                                               ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (0ULL == (0x1fffff000ULL 
                                                   & (QData)((IData)(
                                                                     (0x54000000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (0ULL == (0x1f0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24475: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24475, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__94(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__94\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24496:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24507:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24510: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24510, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24518:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24531:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24542:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24545: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24545, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__95(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__95\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24553:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24566:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((((((((0ULL == 
                                             (0x1ffffb000ULL 
                                              & (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                            | (0ULL 
                                               == (0x1fffef000ULL 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                           | (0ULL 
                                              == (0x1ffff0000ULL 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                          | (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x2010000U 
                                                                 ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                         | (0ULL == 
                                            (0x1fc000000ULL 
                                             & (QData)((IData)(
                                                               (0xc000000U 
                                                                ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x10000000U 
                                                               ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (0ULL == (0x1fffff000ULL 
                                                   & (QData)((IData)(
                                                                     (0x54000000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (0ULL == (0x1f0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24569: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24569, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__97(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__97\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24590:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24601:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24604: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24604, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24612:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24625:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24636:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24639: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24639, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__98(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__98\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24647:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24660:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & (((3U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((0ULL == (0x1ffffb000ULL 
                                                   & (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                         | (0ULL == 
                                            (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x3000U 
                                                                ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (0ULL == 
                                           (0x1fffef000ULL 
                                            & (QData)((IData)(
                                                              (0x100000U 
                                                               ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (0ULL == (0x1ffff0000ULL 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (0ULL == (0x1fc000000ULL 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (0ULL == (0x1fffff000ULL 
                                                & (QData)((IData)(
                                                                  (0x54000000U 
                                                                   ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))) 
                                | ((4U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((0ULL == (0x1fffff000ULL 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))) 
                                      | (0ULL == (0x1f0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24663: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24663, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__100(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__100\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24684:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24695:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24698: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24698, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24706:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24719:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24730:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24733: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24733, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__101(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__101\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24741:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24754:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & (((3U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                 & (((((((0ULL == (0x1ffffb000ULL 
                                                   & (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))) 
                                         | (0ULL == 
                                            (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x3000U 
                                                                ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                        | (0ULL == 
                                           (0x1fffef000ULL 
                                            & (QData)((IData)(
                                                              (0x100000U 
                                                               ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                       | (0ULL == (0x1ffff0000ULL 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                      | (0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                     | (0ULL == (0x1fc000000ULL 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
                                    | (0ULL == (0x1fffff000ULL 
                                                & (QData)((IData)(
                                                                  (0x54000000U 
                                                                   ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))) 
                                | ((4U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & ((0ULL == (0x1fffff000ULL 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))) 
                                      | (0ULL == (0x1f0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24757: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24757, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__103(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__103\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24778:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24789:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24792: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24792, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24800:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24813:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24824:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24827: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24827, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__104(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__104\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24835:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24848:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                             & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                | ((6U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24851: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24851, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24859:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398) 
                                  | ((6U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__105(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__105\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24872:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24883:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24886: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24886, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24894:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24907:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24918:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                        ? 1U : 4U))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24921: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24921, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__106(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__106\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24929:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                      ? 1U : 4U))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24942:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24953:11
done_reset
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24956: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24956, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24964:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24977:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:24980: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 24980, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__107(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__107\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:24988:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25001:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25004: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25004, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25012:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25025:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25028: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25028, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__108(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__108\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25036:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25049:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25052: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25052, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25060:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25073:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25076: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25076, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__109(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__109\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25084:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25097:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25100: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25100, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25108:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25121:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25132:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25135: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25135, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__110(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__110\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25143:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25156:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25159: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25159, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25167:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25180:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25183: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25183, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__111(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__111\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25191:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25204:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25207: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25207, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25215:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25228:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25239:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25242: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25242, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__112(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__112\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25250:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25263:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25274:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25277: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25277, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25285:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25298:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25301: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25301, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__113(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__113\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25309:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25322:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25325: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25325, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25333:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25346:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25349: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25349, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__114(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__114\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25357:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25370:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25381:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25384: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25384, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25392:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25405:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25408: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25408, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__115(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__115\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25416:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25429:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25432: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25432, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25440:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25453:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25464:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25467: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25467, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__116(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__116\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25475:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25488:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25491: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25491, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25499:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25512:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25515: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25515, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__117(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__117\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25523:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25536:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25547:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25550: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25550, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25558:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25571:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25574: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25574, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__118(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__118\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25582:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25595:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25598: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25598, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25606:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25619:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25630:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25641:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25652:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25663:11
done_reset
    ) {
        if (VL_UNLIKELY(((((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                            ? 1U : 4U) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25666: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25666, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__119(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__119\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25674:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                              ? 1U : 4U) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25687:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25698:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25701: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25701, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25709:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25722:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25733:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                          != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25736: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25736, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__120(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__120\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25744:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                            != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25757:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25760: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25760, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25768:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25781:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25784: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25784, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__121(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__121\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25792:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25805:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25808: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25808, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25816:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25829:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25832: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25832, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__122(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__122\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25840:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25853:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25856: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25856, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25864:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25877:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25880: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25880, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__123(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__123\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25888:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25901:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25904: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25904, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25912:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25925:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                              >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                             | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25928: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25928, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__124(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__124\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25936:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25949:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                           ? 1U : 4U))
                                   ? 4U : ((6U == (
                                                   (7U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                    ? 1U
                                                    : 4U))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                             ? 1U : 4U))
                                     ? 4U : ((6U == 
                                              ((7U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25952: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25952, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__125(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__125\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25960:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                             ? 1U : 4U))
                                     ? 4U : ((6U == 
                                              ((7U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                               ? 1U
                                               : 4U))
                                       ? 4U : ((6U 
                                                == 
                                                ((7U 
                                                  == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                  ? 1U
                                                  : 4U))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25973:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:25976: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 25976, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__126(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__126\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25984:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:25997:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                   ? 4U : ((6U == (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                      >> 1U)))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26000: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26000, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__128(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__128\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26021:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0x7fU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                        >> ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 3U)) 
                                       >> 1U))) & (
                                                   ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                                    & (~ 
                                                       (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                         & (0U 
                                                            == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                                                   & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26024: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26024, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26032:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0x7fU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                          >> ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__129(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__129\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26045:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                             | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26048: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26048, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26056:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready)) 
                               | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26067:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                      ? 1U : 0U) != 
                                    ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                      ? (1U & ((IData)(1U) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                      : 0U)) | (~ (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26070: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26070, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__130(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__130\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26078:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? 1U : 0U) 
                                      != ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                           ? (1U & 
                                              ((IData)(1U) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                           : 0U)) | 
                                     (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid) 
                                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                          ? 1U : 0U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26091:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26094: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26094, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26102:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                        < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__131(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__131\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26115:11
done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26118: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26118, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26126:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:467:39)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:26139:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0x7fU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
                                        >> ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 3U)) 
                                       >> 1U))) & (
                                                   (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (0U 
                                                        == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                                   & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:26142: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 26142, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__133(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__133\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13783:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13794:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:13797: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 13797, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13805:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13818:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:13821: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 13821, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__134(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__134\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13829:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                        | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13842:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:13845: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 13845, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:13853:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:23433:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:23444:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:23455:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:23458: Assertion failed in %NTestHarness.ram.fragmenter_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 23458, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__135(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__135\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:23466:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:20940:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:20951:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U))) & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:20954: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 20954, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:20962:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:20974:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:20977: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 20977, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__136(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__136\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:20985:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       << 0x1fU) 
                                                      | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14327:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14338:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14349:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14352: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14352, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14360:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14373:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14376: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14376, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__137(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__137\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14384:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14397:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14408:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14411: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14411, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14419:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14432:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14435: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14435, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__138(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__138\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14443:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14456:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14459: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14459, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14467:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14480:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14483: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14483, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__139(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__139\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14491:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14504:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14507: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14507, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14515:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14528:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14531: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14531, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__140(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__140\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14539:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14552:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14555: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14555, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14563:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14576:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14587:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14590: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14590, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14598:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__141(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__141\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14611:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14614: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14614, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14622:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14635:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14638: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14638, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__142(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__142\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14646:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14659:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14662: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14662, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14670:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14683:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14686: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14686, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__143(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__143\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14694:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14707:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14710: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14710, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14718:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14731:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14742:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14745: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14745, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__144(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__144\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14753:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14766:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14777:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14780: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14780, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14788:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__145(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__145\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14801:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14804: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14804, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14812:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14825:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14828: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14828, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14836:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__146(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__146\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14849:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14852: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14852, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14860:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14873:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14876: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14876, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14884:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__147(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__147\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14897:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14908:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14911: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14911, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14919:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14932:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14935: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14935, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__148(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__148\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14943:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14956:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14959: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14959, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14967:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14980:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:14983: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 14983, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__149(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__149\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:14991:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15004:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15015:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15018: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15018, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15026:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__150(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__150\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15039:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15042: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15042, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15050:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15063:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15066: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15066, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15074:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}
