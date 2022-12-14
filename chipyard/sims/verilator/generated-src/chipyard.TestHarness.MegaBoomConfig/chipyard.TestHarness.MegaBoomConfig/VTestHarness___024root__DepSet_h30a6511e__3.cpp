// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__180(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__180\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hfe84c414__0;
    VlWide<32>/*1023:0*/ __Vtemp_h02d68dc8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h881184f6__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16550:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_hfe84c414__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp_h02d68dc8__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_hfe84c414__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_hfe84c414__0[0U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_hfe84c414__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_hfe84c414__0[1U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_hfe84c414__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_hfe84c414__0[2U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_hfe84c414__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_hfe84c414__0[3U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_hfe84c414__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_hfe84c414__0[4U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_hfe84c414__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_hfe84c414__0[5U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_hfe84c414__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_hfe84c414__0[6U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_hfe84c414__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_hfe84c414__0[7U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_hfe84c414__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_hfe84c414__0[8U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_hfe84c414__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_hfe84c414__0[9U]) 
                                        >> 1U)));
        __Vtemp_h02d68dc8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_hfe84c414__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_hfe84c414__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_hfe84c414__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_hfe84c414__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_hfe84c414__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_hfe84c414__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_hfe84c414__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_hfe84c414__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_hfe84c414__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_hfe84c414__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_hfe84c414__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_hfe84c414__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_h02d68dc8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_hfe84c414__0[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_hfe84c414__0[0x10U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_hfe84c414__0[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_hfe84c414__0[0x11U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_hfe84c414__0[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_hfe84c414__0[0x12U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_hfe84c414__0[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_hfe84c414__0[0x13U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_hfe84c414__0[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_hfe84c414__0[0x14U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_hfe84c414__0[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_hfe84c414__0[0x15U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_hfe84c414__0[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_hfe84c414__0[0x16U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_hfe84c414__0[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_hfe84c414__0[0x17U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_hfe84c414__0[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_hfe84c414__0[0x18U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_hfe84c414__0[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_hfe84c414__0[0x19U]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_hfe84c414__0[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_hfe84c414__0[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_hfe84c414__0[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_hfe84c414__0[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_hfe84c414__0[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_hfe84c414__0[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_hfe84c414__0[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_hfe84c414__0[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_hfe84c414__0[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_hfe84c414__0[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h02d68dc8__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_hfe84c414__0[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h881184f6__0, __Vtemp_h02d68dc8__0);
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_h881184f6__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16563:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                             | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16566: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16566, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16574:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                            & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                               == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                               | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__181(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__181\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hf5db681e__0;
    VlWide<8>/*255:0*/ __Vtemp_hf5db681e__1;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16585:11
done_reset
    ) {
        VL_SHIFTL_WWI(256,256,8, __Vtemp_hf5db681e__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & ((~ ((0U != ((((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                  ^ 
                                                  ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp_hf5db681e__0[0U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                    ^ 
                                                    ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                      ? 
                                                     __Vtemp_hf5db681e__0[1U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                                   ^ 
                                                   ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                     ? 
                                                    __Vtemp_hf5db681e__0[2U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                                  ^ 
                                                  ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp_hf5db681e__0[3U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U] 
                                                 ^ 
                                                 ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp_hf5db681e__0[4U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U] 
                                                ^ (
                                                   (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp_hf5db681e__0[5U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U] 
                                               ^ ((
                                                   ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp_hf5db681e__0[6U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U] 
                                              ^ (((
                                                   (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 __Vtemp_hf5db681e__0[7U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U])))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16588: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16588, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16596:11
verbose&&done_reset
    ) {
        VL_SHIFTL_WWI(256,256,8, __Vtemp_hf5db681e__1, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((0U != (((((((
                                                   (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                    ^ 
                                                    ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                      ? 
                                                     __Vtemp_hf5db681e__1[0U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                                   | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                                      ^ 
                                                      ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                        & (6U 
                                                           != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                        ? 
                                                       __Vtemp_hf5db681e__1[1U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                                     ^ 
                                                     ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                       ? 
                                                      __Vtemp_hf5db681e__1[2U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                                    ^ 
                                                    ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                      ? 
                                                     __Vtemp_hf5db681e__1[3U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                                | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U] 
                                                   ^ 
                                                   ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                     ? 
                                                    __Vtemp_hf5db681e__1[4U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                               | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U] 
                                                  ^ 
                                                  ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp_hf5db681e__1[5U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                              | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U] 
                                                 ^ 
                                                 ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp_hf5db681e__1[6U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U] 
                                                ^ (
                                                   (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp_hf5db681e__1[7U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                          | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U])))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16609:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U]) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U])))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16612: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16612, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__182(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__182\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hcb720670__0;
    VlWide<8>/*255:0*/ __Vtemp_hcb720670__1;
    VlWide<32>/*1023:0*/ __Vtemp_he6f36e3d__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc251ad68__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9eebeb1e__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16620:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                        < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16633:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcb720670__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ __Vtemp_hcb720670__0[0U]) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16636: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16636, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16644:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcb720670__1, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ __Vtemp_hcb720670__1[0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16657:11
done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_he6f36e3d__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp_hc251ad68__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_he6f36e3d__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_he6f36e3d__0[0U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_he6f36e3d__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_he6f36e3d__0[1U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_he6f36e3d__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_he6f36e3d__0[2U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_he6f36e3d__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_he6f36e3d__0[3U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_he6f36e3d__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_he6f36e3d__0[4U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_he6f36e3d__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_he6f36e3d__0[5U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_he6f36e3d__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_he6f36e3d__0[6U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_he6f36e3d__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_he6f36e3d__0[7U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_he6f36e3d__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_he6f36e3d__0[8U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_he6f36e3d__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_he6f36e3d__0[9U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_he6f36e3d__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_he6f36e3d__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_he6f36e3d__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_he6f36e3d__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_he6f36e3d__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_he6f36e3d__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_he6f36e3d__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_he6f36e3d__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_he6f36e3d__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_he6f36e3d__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_he6f36e3d__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_he6f36e3d__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_he6f36e3d__0[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_he6f36e3d__0[0x10U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_he6f36e3d__0[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_he6f36e3d__0[0x11U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_he6f36e3d__0[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_he6f36e3d__0[0x12U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_he6f36e3d__0[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_he6f36e3d__0[0x13U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_he6f36e3d__0[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_he6f36e3d__0[0x14U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_he6f36e3d__0[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_he6f36e3d__0[0x15U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_he6f36e3d__0[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_he6f36e3d__0[0x16U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_he6f36e3d__0[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_he6f36e3d__0[0x17U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_he6f36e3d__0[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_he6f36e3d__0[0x18U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_he6f36e3d__0[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_he6f36e3d__0[0x19U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_he6f36e3d__0[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_he6f36e3d__0[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_he6f36e3d__0[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_he6f36e3d__0[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_he6f36e3d__0[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_he6f36e3d__0[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_he6f36e3d__0[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_he6f36e3d__0[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_he6f36e3d__0[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_he6f36e3d__0[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_he6f36e3d__0[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h9eebeb1e__0, __Vtemp_hc251ad68__0);
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp_h9eebeb1e__0[0U])) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16660: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16660, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__183(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__183\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_he6f36e3d__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc251ad68__0;
    VlWide<32>/*1023:0*/ __Vtemp_h9eebeb1e__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16668:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp_he6f36e3d__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp_hc251ad68__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_he6f36e3d__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & __Vtemp_he6f36e3d__0[0U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_he6f36e3d__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & __Vtemp_he6f36e3d__0[1U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_he6f36e3d__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & __Vtemp_he6f36e3d__0[2U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_he6f36e3d__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & __Vtemp_he6f36e3d__0[3U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_he6f36e3d__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & __Vtemp_he6f36e3d__0[4U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_he6f36e3d__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & __Vtemp_he6f36e3d__0[5U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_he6f36e3d__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & __Vtemp_he6f36e3d__0[6U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_he6f36e3d__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & __Vtemp_he6f36e3d__0[7U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_he6f36e3d__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & __Vtemp_he6f36e3d__0[8U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & __Vtemp_he6f36e3d__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & __Vtemp_he6f36e3d__0[9U]) 
                                        >> 1U)));
        __Vtemp_hc251ad68__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & __Vtemp_he6f36e3d__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & __Vtemp_he6f36e3d__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & __Vtemp_he6f36e3d__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & __Vtemp_he6f36e3d__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & __Vtemp_he6f36e3d__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & __Vtemp_he6f36e3d__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & __Vtemp_he6f36e3d__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & __Vtemp_he6f36e3d__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & __Vtemp_he6f36e3d__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & __Vtemp_he6f36e3d__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & __Vtemp_he6f36e3d__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & __Vtemp_he6f36e3d__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_hc251ad68__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & __Vtemp_he6f36e3d__0[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & __Vtemp_he6f36e3d__0[0x10U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & __Vtemp_he6f36e3d__0[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & __Vtemp_he6f36e3d__0[0x11U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & __Vtemp_he6f36e3d__0[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & __Vtemp_he6f36e3d__0[0x12U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & __Vtemp_he6f36e3d__0[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & __Vtemp_he6f36e3d__0[0x13U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & __Vtemp_he6f36e3d__0[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & __Vtemp_he6f36e3d__0[0x14U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & __Vtemp_he6f36e3d__0[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & __Vtemp_he6f36e3d__0[0x15U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & __Vtemp_he6f36e3d__0[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & __Vtemp_he6f36e3d__0[0x16U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & __Vtemp_he6f36e3d__0[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & __Vtemp_he6f36e3d__0[0x17U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & __Vtemp_he6f36e3d__0[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & __Vtemp_he6f36e3d__0[0x18U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & __Vtemp_he6f36e3d__0[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & __Vtemp_he6f36e3d__0[0x19U]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & __Vtemp_he6f36e3d__0[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & __Vtemp_he6f36e3d__0[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & __Vtemp_he6f36e3d__0[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & __Vtemp_he6f36e3d__0[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & __Vtemp_he6f36e3d__0[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & __Vtemp_he6f36e3d__0[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & __Vtemp_he6f36e3d__0[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & __Vtemp_he6f36e3d__0[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & __Vtemp_he6f36e3d__0[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & __Vtemp_he6f36e3d__0[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hc251ad68__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & __Vtemp_he6f36e3d__0[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h9eebeb1e__0, __Vtemp_hc251ad68__0);
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_h9eebeb1e__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16681:11
done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U]) 
                                                  | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U]) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U])))) 
                                    | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16684: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16684, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16692:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  (((((((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                         | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                        | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                       | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                      | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U]) 
                                                     | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U]) 
                                                    | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U]) 
                                                   | vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                        < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__184(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__184\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8902:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8913:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8924:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8927: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8927, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8935:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8948:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8951: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8951, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8959:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__185(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__185\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8972:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8983:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8986: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8986, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8994:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9007:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9010: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9010, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__186(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__186\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9018:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9031:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0xeU) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9034: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9034, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9042:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             << 0xeU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9055:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9058: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9058, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__187(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__187\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9066:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9079:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9082: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9082, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9090:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9103:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9106: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9106, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__188(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__188\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9114:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9127:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9130: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9130, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9138:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9151:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9162:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9165: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9165, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9173:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__189(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__189\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9186:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9189: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9189, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9197:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9210:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0xeU) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9213: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9213, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__190(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__190\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9221:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             << 0xeU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9234:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0xeU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9237: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9237, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9245:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0xeU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9258:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9261: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9261, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__191(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__191\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9269:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9282:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9285: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9285, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9293:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9306:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9317:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x70000U & (0x20000U 
                                             ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9320: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9320, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__192(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__192\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9328:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x70000U & (0x20000U 
                                               ^ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9341:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9352:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9355: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9355, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9363:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__193(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__193\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9376:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0xeU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9379: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9379, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9387:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0xeU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9400:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9403: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9403, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9411:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__194(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__194\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9424:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9427: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9427, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9435:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9448:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9451: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9451, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9459:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__195(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__195\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9472:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9483:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9486: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9486, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9494:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9507:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0xeU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9510: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9510, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__196(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__196\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9518:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0xeU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9531:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9534: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9534, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9542:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9555:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9558: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9558, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__197(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__197\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9566:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9579:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9590:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9593: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9593, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9601:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9614:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            << 0xeU) 
                                           | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9617: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9617, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__198(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__198\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9625:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              << 0xeU) 
                                             | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9638:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9641: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9641, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9649:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9662:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9665: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9665, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__199(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__199\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9673:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9686:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9697:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9700: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9700, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9708:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9721:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0xeU) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9724: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9724, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__200(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__200\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9732:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             << 0xeU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9745:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9748: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9748, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9756:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9769:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9772: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9772, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__201(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__201\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9780:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9793:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9804:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9807: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9807, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9815:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9828:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0xeU) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9831: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9831, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__202(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__202\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9839:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             << 0xeU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9852:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9855: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9855, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9863:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9876:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9879: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9879, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__203(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__203\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9887:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9900:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9911:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9914: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9914, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9922:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9935:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           << 0xeU) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9938: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9938, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__204(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__204\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9946:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             << 0xeU) 
                                            | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                               >> 0x12U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9959:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9962: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9962, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9970:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9983:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:9986: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 9986, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__205(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__205\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:9994:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10007:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10018:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10029:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10040:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10051:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10062:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10073:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10084:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10095:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10098: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10098, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10106:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10119:11
done_reset
    ) {
        if (VL_UNLIKELY((((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                  ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                  : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      << 0xeU) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x12U)))) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10122: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10122, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__206(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__206\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10130:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                    : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        << 0xeU) | 
                                       (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0x12U)))) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10143:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10146: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10146, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10154:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10167:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10170: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10170, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__207(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__207\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10178:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10191:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                          != vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10194: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10194, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10202:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                            != vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10215:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10226:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10237:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10240: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10240, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__208(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__208\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hcde16db2__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10248:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10261:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10264: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10264, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10272:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10285:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10296:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10307:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcde16db2__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp_hcde16db2__0[0U] & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10310: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__209(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__209\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hcde16db2__0;
    VlWide<8>/*255:0*/ __Vtemp_hcde16db2__1;
    VlWide<8>/*255:0*/ __Vtemp_hcde16db2__2;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10318:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcde16db2__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & __Vtemp_hcde16db2__0[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10331:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcde16db2__1, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((~ (__Vtemp_hcde16db2__1[0U] 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10334: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10334, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10342:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hcde16db2__2, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (__Vtemp_hcde16db2__2[0U] 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10355:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                             | (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10358: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10358, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__210(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__210\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10366:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                               | (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                          ? 4U : ((6U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10379:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10382: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10382, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10390:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__211(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__211\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h8dae5ea9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h901b270d__0;
    VlWide<32>/*1023:0*/ __Vtemp_heba65f9c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1745101c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hec6f63d8__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc77833c7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd252ff8c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hee01405a__0;
    VlWide<32>/*1023:0*/ __Vtemp_h52b80579__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb77c6af3__0;
    VlWide<32>/*1023:0*/ __Vtemp_h84faa6dc__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb91e386e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1889f500__0;
    VlWide<32>/*1023:0*/ __Vtemp_h14dd11d6__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd06f1197__0;
    VlWide<32>/*1023:0*/ __Vtemp_h5c8fb8f8__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10403:11
done_reset
    ) {
        __Vtemp_h8dae5ea9__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h8dae5ea9__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h8dae5ea9__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h8dae5ea9__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h901b270d__0, __Vtemp_h8dae5ea9__0);
        __Vtemp_heba65f9c__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_heba65f9c__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_heba65f9c__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_heba65f9c__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h1745101c__0, __Vtemp_heba65f9c__0);
        __Vtemp_hec6f63d8__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_hec6f63d8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_hec6f63d8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hec6f63d8__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_hc77833c7__0, __Vtemp_hec6f63d8__0);
        __Vtemp_hd252ff8c__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_hd252ff8c__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_hd252ff8c__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hd252ff8c__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_hee01405a__0, __Vtemp_hd252ff8c__0);
        if (VL_UNLIKELY(((~ ((1U == ((7U == (7U & __Vtemp_h901b270d__0[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp_h1745101c__0[0U]))
                                               ? 4U
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                             | (1U == ((7U == (7U & 
                                               __Vtemp_hc77833c7__0[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp_hee01405a__0[0U]))
                                                 ? 5U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:10406: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 10406, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:10414:11
verbose&&done_reset
    ) {
        __Vtemp_h52b80579__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h52b80579__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h52b80579__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h52b80579__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_hb77c6af3__0, __Vtemp_h52b80579__0);
        __Vtemp_h84faa6dc__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h84faa6dc__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h84faa6dc__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h84faa6dc__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_hb91e386e__0, __Vtemp_h84faa6dc__0);
        __Vtemp_h1889f500__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h1889f500__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h1889f500__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h1889f500__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h14dd11d6__0, __Vtemp_h1889f500__0);
        __Vtemp_hd06f1197__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_hd06f1197__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_hd06f1197__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_hd06f1197__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h5c8fb8f8__0, __Vtemp_hd06f1197__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((1U == ((7U == (7U & 
                                               __Vtemp_hb77c6af3__0[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp_hb91e386e__0[0U]))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                               | (1U == ((7U == (7U 
                                                 & __Vtemp_h14dd11d6__0[0U]))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp_h5c8fb8f8__0[0U]))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}
