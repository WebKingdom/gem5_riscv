// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__456(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__456\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value) 
           == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
            = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0xffffffU & (((IData)(0xfffU) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                 >> 3U)))
                              : 0U) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__457(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__457\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
            = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first)
                          ? (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                               ? 0U : 4U) ? 0U : (~ 
                                                  (0xffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                      >> 3U))))
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_RW0_rdata 
        = (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram
                            [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0])) 
            << 0x38U) | (((QData)((IData)(((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram
                                            [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                            << 0x18U) 
                                           | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram
                                               [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                               << 0x10U) 
                                              | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram
                                                  [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                  << 8U) 
                                                 | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram
                                                 [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                          << 0x18U) | (QData)((IData)(
                                                      ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram
                                                        [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                        << 0x10U) 
                                                       | ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram
                                                           [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                           << 8U) 
                                                          | vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram
                                                          [vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__458(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__458\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__459(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__459\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->reset)) & ((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
                                              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                                             & (0U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) 
                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___GEN_0)));
    if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param 
            = (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__460(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__460\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1)));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter 
                = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first)
                    ? 0U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first)
                          ? ((0x800000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__461(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__461\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1)));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first)
                          ? ((0x800000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1)));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_89 
        = (((0ULL == (0x1ffff0000ULL & (QData)((IData)(
                                                       (0x20000U 
                                                        ^ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
            | (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                         (0x10000000U 
                                                          ^ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
           | (0ULL == (0x1f0000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__462(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__462\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first)
                              ? ((4U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1)));
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first)
                              ? ((0x200000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__463(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__463\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__uart_sim_0__DOT__txBaudCount = 0U;
        vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_3) {
            vlSelf->TestHarness__DOT__uart_sim_0__DOT__txBaudCount 
                = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_1)
                    ? 0U : (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_3));
        }
        if (vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq) {
            vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value 
                = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_3;
        }
    }
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value) 
           == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__464(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__464\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) {
            vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
                = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___wrap_value_T_1;
        }
        if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
            vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst)
                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___acknum_T_1)));
        }
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1));
    if (((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd 
            = vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                   >> ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__465(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__465\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__REG 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__wen)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum = 0U;
    } else if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum 
            = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst)
                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)
                      : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___acknum_T_1)));
    }
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__466(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__466\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hd4e7577d__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size
        [vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0;
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1;
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
        = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3)) 
                    << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
        = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3)) 
                     << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                   >> 0x20U));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp_hd4e7577d__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hd4e7577d__0[0U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hd4e7577d__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hd4e7577d__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hd4e7577d__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hd4e7577d__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hd4e7577d__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hd4e7577d__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hd4e7577d__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hd4e7577d__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hd4e7577d__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hd4e7577d__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hd4e7577d__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hd4e7577d__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hd4e7577d__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hd4e7577d__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hd4e7577d__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp_hd4e7577d__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp_hd4e7577d__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp_hd4e7577d__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp_hd4e7577d__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp_hd4e7577d__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp_hd4e7577d__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp_hd4e7577d__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp_hd4e7577d__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp_hd4e7577d__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp_hd4e7577d__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp_hd4e7577d__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp_hd4e7577d__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp_hd4e7577d__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp_hd4e7577d__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp_hd4e7577d__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp_hd4e7577d__0[0x1fU];
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__467(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__467\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hef850117__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hef850117__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    if ((1U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))))) {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp_hef850117__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp_hef850117__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp_hef850117__0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp_hef850117__0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U] 
            = __Vtemp_hef850117__0[4U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U] 
            = __Vtemp_hef850117__0[5U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U] 
            = __Vtemp_hef850117__0[6U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U] 
            = __Vtemp_hef850117__0[7U];
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[4U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[5U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[6U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_set_wo_ready[7U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full))));
    vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
        = vlSelf->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg;
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h92310995_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f1ca9_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__468(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__468\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_h66fa1fde__0;
    VlWide<65>/*2079:0*/ __Vtemp_h093b0298__0;
    VlWide<65>/*2079:0*/ __Vtemp_h649d4e1e__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_h66fa1fde__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                   << 2U));
    VL_COND_WIWW(2063, __Vtemp_h093b0298__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))), __Vtemp_h66fa1fde__0, VTestHarness__ConstPool__CONST_h92310995_0);
    VL_AND_W(65, __Vtemp_h649d4e1e__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h093b0298__0);
    VL_ASSIGN_W(2063,vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23, __Vtemp_h649d4e1e__0);
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__469(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__469\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20 
        = ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                        (0x3000U 
                                                         ^ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__470(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__470\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter));
    if ((5U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      >> 0x15U)))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 = 2U;
    } else if ((4U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 0x15U)))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 = 1U;
    } else if ((3U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 0x15U)))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 = 1U;
    } else if ((2U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 0x15U)))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 = 1U;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__471(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__471\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param));
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                        >> 1U));
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param 
            = (7U & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      << 0xeU) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x12U)));
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
            = (7U & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      << 0xbU) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x15U)));
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask = 0xffU;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode 
            = (7U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask 
            = (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                        >> 1U));
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode 
            = (7U & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      << 0xbU) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x15U)));
    }
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 8U))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (0x3000000U == (0x7000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__472(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__472\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x1000U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x1800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x1000U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x1800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__473(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__473\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((0x800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((0x1000U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((0x1800U == (0x1800U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__474(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__474\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (0x3000000U == (0x7000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      << 0x12U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xeU))));
}

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__475(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__475\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h3aada89e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h38f875b5__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3ef648d2__0;
    VlWide<32>/*1023:0*/ __Vtemp_hedd45b60__0;
    VlWide<32>/*1023:0*/ __Vtemp_h94bc1491__0;
    VlWide<32>/*1023:0*/ __Vtemp_h02cf9452__0;
    VlWide<32>/*1023:0*/ __Vtemp_h21c01531__0;
    VlWide<32>/*1023:0*/ __Vtemp_h24786336__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                  ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size)
                  : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                      << 0x12U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                   >> 0xeU))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (0U == (0x7000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_1 
        = (0x363U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txBaudCount));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_3 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value) 
           == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value));
    __Vtemp_h3aada89e__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h3aada89e__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h3aada89e__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h3aada89e__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h38f875b5__0, __Vtemp_h3aada89e__0);
    __Vtemp_h3ef648d2__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h3ef648d2__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h3ef648d2__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h3ef648d2__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_hedd45b60__0, __Vtemp_h3ef648d2__0);
    __Vtemp_h94bc1491__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h94bc1491__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h94bc1491__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h94bc1491__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h02cf9452__0, __Vtemp_h94bc1491__0);
    __Vtemp_h21c01531__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h21c01531__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h21c01531__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h21c01531__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h24786336__0, __Vtemp_h21c01531__0);
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp_h38f875b5__0[0U])) ? 2U
            : ((4U == (7U & __Vtemp_hedd45b60__0[0U]))
                ? 1U : ((3U == (7U & __Vtemp_h02cf9452__0[0U]))
                         ? 1U : ((2U == (7U & __Vtemp_h24786336__0[0U]))
                                  ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__476(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__476\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T) 
                                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                                           ? ((0ULL 
                                               == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                                               ? 0U
                                               : 6U)
                                           : (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                                               ? 8U
                                               : (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3) 
                                                   & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                   ? 
                                                  (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                                                    | (0ULL 
                                                       == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                                                    ? 7U
                                                    : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32))
                                                   : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__477(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__477\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hfee5b904__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___acknum_T_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___GEN_24 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full)));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__wen 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___acknum_T_1 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum) 
                 - (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          | (1U & (((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   >> 3U))))));
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp_hfee5b904__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hfee5b904__0[0U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hfee5b904__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hfee5b904__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hfee5b904__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hfee5b904__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hfee5b904__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hfee5b904__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hfee5b904__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hfee5b904__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hfee5b904__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hfee5b904__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hfee5b904__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hfee5b904__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hfee5b904__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hfee5b904__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hfee5b904__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp_hfee5b904__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp_hfee5b904__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp_hfee5b904__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp_hfee5b904__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp_hfee5b904__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp_hfee5b904__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp_hfee5b904__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp_hfee5b904__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp_hfee5b904__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp_hfee5b904__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp_hfee5b904__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp_hfee5b904__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp_hfee5b904__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp_hfee5b904__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp_hfee5b904__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp_hfee5b904__0[0x1fU];
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= (0x3cU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                               >> 2U))) ? (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                                           >> (0x3cU 
                                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 2U)))
            : 0ULL);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1 
        = ((0x38U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
           & (0U != (7U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))));
}

extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h780cac3e_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9ca1_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h90baf80e_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9cad_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__478(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__478\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_hbfc53890__0;
    VlWide<65>/*2079:0*/ __Vtemp_h58aa484c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h084d8b1f__0;
    VlWide<65>/*2079:0*/ __Vtemp_h8037245b__0;
    VlWide<65>/*2079:0*/ __Vtemp_hc5e522b4__0;
    VlWide<65>/*2079:0*/ __Vtemp_hbddb10d6__0;
    VlWide<65>/*2079:0*/ __Vtemp_h738c4de6__0;
    VlWide<65>/*2079:0*/ __Vtemp_h534b33d1__0;
    VlWide<8>/*255:0*/ __Vtemp_hef850117__0;
    VlWide<8>/*255:0*/ __Vtemp_h76b3eed8__0;
    // Body
    VL_EXTEND_WI(2051,4, __Vtemp_hbfc53890__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp_h58aa484c__0, __Vtemp_hbfc53890__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    VL_COND_WIWW(2051, __Vtemp_h084d8b1f__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h58aa484c__0, VTestHarness__ConstPool__CONST_h780cac3e_0);
    VL_AND_W(65, __Vtemp_h8037245b__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_h084d8b1f__0);
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            | __Vtemp_h8037245b__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
            | __Vtemp_h8037245b__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
            | __Vtemp_h8037245b__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
            | __Vtemp_h8037245b__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
            | __Vtemp_h8037245b__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
            | __Vtemp_h8037245b__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
            | __Vtemp_h8037245b__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
            | __Vtemp_h8037245b__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
            | __Vtemp_h8037245b__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
            | __Vtemp_h8037245b__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | __Vtemp_h8037245b__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | __Vtemp_h8037245b__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | __Vtemp_h8037245b__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | __Vtemp_h8037245b__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | __Vtemp_h8037245b__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | __Vtemp_h8037245b__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | __Vtemp_h8037245b__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | __Vtemp_h8037245b__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | __Vtemp_h8037245b__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | __Vtemp_h8037245b__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | __Vtemp_h8037245b__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | __Vtemp_h8037245b__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | __Vtemp_h8037245b__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | __Vtemp_h8037245b__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | __Vtemp_h8037245b__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | __Vtemp_h8037245b__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | __Vtemp_h8037245b__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | __Vtemp_h8037245b__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | __Vtemp_h8037245b__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | __Vtemp_h8037245b__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | __Vtemp_h8037245b__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | __Vtemp_h8037245b__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_EXTEND_WI(2050,3, __Vtemp_hc5e522b4__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp_hbddb10d6__0, __Vtemp_hc5e522b4__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    VL_COND_WIWW(2050, __Vtemp_h738c4de6__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hbddb10d6__0, VTestHarness__ConstPool__CONST_h90baf80e_0);
    VL_AND_W(65, __Vtemp_h534b33d1__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_h738c4de6__0);
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            | __Vtemp_h534b33d1__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
            | __Vtemp_h534b33d1__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
            | __Vtemp_h534b33d1__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
            | __Vtemp_h534b33d1__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
            | __Vtemp_h534b33d1__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
            | __Vtemp_h534b33d1__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
            | __Vtemp_h534b33d1__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
            | __Vtemp_h534b33d1__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
            | __Vtemp_h534b33d1__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
            | __Vtemp_h534b33d1__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | __Vtemp_h534b33d1__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | __Vtemp_h534b33d1__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | __Vtemp_h534b33d1__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | __Vtemp_h534b33d1__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | __Vtemp_h534b33d1__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | __Vtemp_h534b33d1__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | __Vtemp_h534b33d1__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | __Vtemp_h534b33d1__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | __Vtemp_h534b33d1__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | __Vtemp_h534b33d1__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | __Vtemp_h534b33d1__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | __Vtemp_h534b33d1__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | __Vtemp_h534b33d1__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | __Vtemp_h534b33d1__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | __Vtemp_h534b33d1__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | __Vtemp_h534b33d1__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | __Vtemp_h534b33d1__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | __Vtemp_h534b33d1__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | __Vtemp_h534b33d1__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | __Vtemp_h534b33d1__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | __Vtemp_h534b33d1__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | __Vtemp_h534b33d1__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hef850117__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h76b3eed8__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hef850117__0[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_h76b3eed8__0[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__479(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__479\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__480(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__480\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__481(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__481\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__482(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__482\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag 
        = ((3U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum) 
                                              - (IData)(1U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__483(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__483\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & (0x10000000U ^ (
                                                   (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     << 0x16U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)))));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__484(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__484\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_heb8ee6b8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h54f36914__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4915f70a__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfbbed7c1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb7e2d461__0;
    VlWide<32>/*1023:0*/ __Vtemp_h384f5560__0;
    VlWide<32>/*1023:0*/ __Vtemp_h78f666b9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7e113b58__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlSelf->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlSelf->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__wen));
    __Vtemp_heb8ee6b8__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_heb8ee6b8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_heb8ee6b8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_heb8ee6b8__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h54f36914__0, __Vtemp_heb8ee6b8__0);
    __Vtemp_h4915f70a__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h4915f70a__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h4915f70a__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h4915f70a__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_hfbbed7c1__0, __Vtemp_h4915f70a__0);
    __Vtemp_hb7e2d461__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_hb7e2d461__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_hb7e2d461__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_hb7e2d461__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h384f5560__0, __Vtemp_hb7e2d461__0);
    __Vtemp_h78f666b9__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h78f666b9__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h78f666b9__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_h78f666b9__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_h7e113b58__0, __Vtemp_h78f666b9__0);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp_h54f36914__0[0U])) ? 2U
            : ((4U == (7U & __Vtemp_hfbbed7c1__0[0U]))
                ? 1U : ((3U == (7U & __Vtemp_h384f5560__0[0U]))
                         ? 1U : ((2U == (7U & __Vtemp_h7e113b58__0[0U]))
                                  ? 1U : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
}
