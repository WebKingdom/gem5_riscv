// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__485(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__485\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__486(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__486\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__487(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__487\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                  & (0xc00000U == (0xe00000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])))
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << (8U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                              >> 7U))))
                  : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__488(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__488\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           << 0x16U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xaU))) 
                     << 4U)) | ((8U & ((~ ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r))) 
                                       << 3U)) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
        = (0x1fffffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                            ? vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                            : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                << 0x16U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                             >> 0xaU))) 
                          | (0x3fU & (~ (7U | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1) 
                                                 << 3U) 
                                                | (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                               | (7U 
                                                  & (~ 
                                                     (0x3ffU 
                                                      & ((IData)(7U) 
                                                         << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
        = (0x3ffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address
                         : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                             << 0x16U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                          >> 0xaU))) 
                       | (0x3fU & (~ (7U | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1) 
                                              << 3U) 
                                             | (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)))) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                       : ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           << 0x16U) | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                        >> 0xaU))) 
                     << 4U)) | ((8U & ((~ ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                                            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle)
                                            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r))) 
                                       << 3U)) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__489(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__489\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9fc19d3e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f7c80cf__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0xaU))))
            : 0U);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_3 
        = ((1U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_1 
        = ((2U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap 
        = ((~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (0x363U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___idx_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)));
    VL_EXTEND_WI(95,32, __Vtemp_h9fc19d3e__0, vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp_h0f7c80cf__0, __Vtemp_h9fc19d3e__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   << 5U));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U] 
        = __Vtemp_h0f7c80cf__0[0U];
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U] 
        = __Vtemp_h0f7c80cf__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U] 
        = (0x7fffffffU & __Vtemp_h0f7c80cf__0[2U]);
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3 
        = (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T 
        = (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T 
        = (8U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30 
        = ((5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                    ? 1U : 4U)) ? 2U : ((4U == ((7U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                 ? 1U
                                                 : 4U))
                                         ? 1U : ((3U 
                                                  == 
                                                  ((7U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                    ? 1U
                                                    : 4U))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   ((7U 
                                                     == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                     ? 1U
                                                     : 4U))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__490(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__490\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___T_6 
        = ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg));
    if (((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23 
            = (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24 
            = (IData)((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
                       >> 0x20U));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_0;
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__body_1;
    }
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40 
        = (3U & (((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                  ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid) 
                     | ((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                  : (((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                      ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                          ? ((1U == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                              ? 0U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                      : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30 
        = (1U & (((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
                  ? ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx))
                  : (((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                      ? (IData)((vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                 >> 2U)) : (((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                             & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                             ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                                 ? (IData)(
                                                           (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                            >> 2U))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                             : (((1U 
                                                  == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                 & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                 ? 
                                                ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                                 : 
                                                ((~ 
                                                  ((0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                   & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__491(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__491\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid 
        = ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6 
        = (((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? 1U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready 
        = ((8U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len 
        = (((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__492(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__492\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                        >> 2U))))));
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__493(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__493\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_ha9dfb30e__0;
    VlWide<8>/*255:0*/ __Vtemp_h24efa779__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                     >> 2U)))));
    VL_SHIFTR_WWI(1024,1024,11, __Vtemp_ha9dfb30e__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_ha9dfb30e__0[0U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_ha9dfb30e__0[1U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_ha9dfb30e__0[2U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_ha9dfb30e__0[3U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_ha9dfb30e__0[4U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_ha9dfb30e__0[5U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_ha9dfb30e__0[6U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_ha9dfb30e__0[7U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_ha9dfb30e__0[8U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_ha9dfb30e__0[9U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_ha9dfb30e__0[0xaU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_ha9dfb30e__0[0xbU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_ha9dfb30e__0[0xcU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_ha9dfb30e__0[0xdU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_ha9dfb30e__0[0xeU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_ha9dfb30e__0[0xfU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp_ha9dfb30e__0[0x10U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp_ha9dfb30e__0[0x11U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp_ha9dfb30e__0[0x12U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp_ha9dfb30e__0[0x13U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U] 
        = __Vtemp_ha9dfb30e__0[0x14U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U] 
        = __Vtemp_ha9dfb30e__0[0x15U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U] 
        = __Vtemp_ha9dfb30e__0[0x16U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U] 
        = __Vtemp_ha9dfb30e__0[0x17U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U] 
        = __Vtemp_ha9dfb30e__0[0x18U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U] 
        = __Vtemp_ha9dfb30e__0[0x19U];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU] 
        = __Vtemp_ha9dfb30e__0[0x1aU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU] 
        = __Vtemp_ha9dfb30e__0[0x1bU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU] 
        = __Vtemp_ha9dfb30e__0[0x1cU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU] 
        = __Vtemp_ha9dfb30e__0[0x1dU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU] 
        = __Vtemp_ha9dfb30e__0[0x1eU];
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU] 
        = __Vtemp_ha9dfb30e__0[0x1fU];
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= (0x3cU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                               >> 2U))) ? (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes 
                                           >> (0x3cU 
                                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                  >> 2U)))
            : 0ULL);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1 
        = ((0x38U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h24efa779__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
    if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp_h24efa779__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp_h24efa779__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp_h24efa779__0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp_h24efa779__0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U] 
            = __Vtemp_h24efa779__0[4U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U] 
            = __Vtemp_h24efa779__0[5U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U] 
            = __Vtemp_h24efa779__0[6U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U] 
            = __Vtemp_h24efa779__0[7U];
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[4U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[5U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[6U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set_wo_ready[7U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__494(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__494\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h664dded6__0;
    VlWide<3>/*95:0*/ __Vtemp_h78593fed__0;
    VlWide<3>/*95:0*/ __Vtemp_h0af6d478__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0) 
            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)) 
           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_1) 
           & (7U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_16 
        = (((2U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
            & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
    VL_EXTEND_WI(95,32, __Vtemp_h664dded6__0, (((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                           >> 3U))) 
                                               << 3U));
    VL_EXTEND_WQ(95,64, __Vtemp_h78593fed__0, vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    VL_EXTEND_WQ(95,64, __Vtemp_h0af6d478__0, (((0U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                ? 0ULL
                                                : vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr));
    if (((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
            = __Vtemp_h664dded6__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
            = __Vtemp_h664dded6__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
            = __Vtemp_h664dded6__0[2U];
    } else if (((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
            = (__Vtemp_h78593fed__0[0U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U]);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
            = (__Vtemp_h78593fed__0[1U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U]);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
            = (__Vtemp_h78593fed__0[2U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U]);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
            = __Vtemp_h0af6d478__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
            = __Vtemp_h0af6d478__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
            = __Vtemp_h0af6d478__0[2U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11 
        = (((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? 2U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6))
            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__495(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__495\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8))))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5))));
}

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__496(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__496\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h8dae5ea9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h901b270d__0;
    VlWide<32>/*1023:0*/ __Vtemp_heba65f9c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1745101c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hec6f63d8__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc77833c7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd252ff8c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hee01405a__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp_h8dae5ea9__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_h8dae5ea9__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_h8dae5ea9__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_h8dae5ea9__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_heba65f9c__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_heba65f9c__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_heba65f9c__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_hec6f63d8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_hec6f63d8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_hec6f63d8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                     & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                                 >> 1U)));
    __Vtemp_hd252ff8c__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                  & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                      << 0x1fU) | (
                                                   (VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                                   >> 1U)));
    __Vtemp_hd252ff8c__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                   & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                       << 0x1fU) | 
                                      ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                        & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                       >> 1U)));
    __Vtemp_hd252ff8c__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                   & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                       & vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                      >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp_hee01405a__0, __Vtemp_hd252ff8c__0);
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp_h901b270d__0[0U])) ? 2U
            : ((4U == (7U & __Vtemp_h1745101c__0[0U]))
                ? 1U : ((3U == (7U & __Vtemp_hc77833c7__0[0U]))
                         ? 1U : ((2U == (7U & __Vtemp_hee01405a__0[0U]))
                                  ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__497(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__497\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1)));
    if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10;
        vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3;
        vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid) 
             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask))) 
            << 2U) | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                       << 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__498(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__498\n"); );
    // Body
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap 
        = ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT___T_16) 
           & (7U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27 
        = (((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? 5U : (((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                     ? 4U : (((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                              & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                              ? ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                  ? ((1U == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                      ? 6U : ((0U == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                               ? 3U
                                               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11)))
                                  : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))
                              : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                        << 3U))) : 0U)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                    | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                        ? (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                            ? (1U | (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                       ? 1U : 4U) << 1U))
                            : 0U) : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? (0x7fffffffU 
                                                   & ((IData)(0xfU) 
                                                      << 
                                                      ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                       << 2U)))
                                                : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__499(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__499\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h664dded6__0;
    VlWide<3>/*95:0*/ __Vtemp_h72fb0160__0;
    VlWide<3>/*95:0*/ __Vtemp_h6ed11bd3__0;
    VlWide<3>/*95:0*/ __Vtemp_h090e7806__0;
    VlWide<3>/*95:0*/ __Vtemp_hd38d9978__0;
    VlWide<3>/*95:0*/ __Vtemp_h78f93b63__0;
    VlWide<3>/*95:0*/ __Vtemp_h78f93b63__1;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48 
        = ((0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
           & (((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
               & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
               ? (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   | (0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                   ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                   : ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    VL_EXTEND_WI(95,32, __Vtemp_h664dded6__0, (((IData)(1U) 
                                                + (IData)(
                                                          (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                           >> 3U))) 
                                               << 3U));
    if (((8U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))) {
        if ((0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U];
        } else {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
                = __Vtemp_h664dded6__0[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
                = __Vtemp_h664dded6__0[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
                = __Vtemp_h664dded6__0[2U];
        }
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U];
    }
    VL_EXTEND_WQ(95,64, __Vtemp_h72fb0160__0, (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                               - 1ULL));
    VL_EXTEND_WQ(95,64, __Vtemp_h6ed11bd3__0, vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len);
    VL_EXTEND_WQ(95,64, __Vtemp_h090e7806__0, (((0U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                ? 0ULL
                                                : vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len));
    if (((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
            = __Vtemp_h72fb0160__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
            = __Vtemp_h72fb0160__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
            = __Vtemp_h72fb0160__0[2U];
    } else if (((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
            = (__Vtemp_h6ed11bd3__0[0U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U]);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
            = (__Vtemp_h6ed11bd3__0[1U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U]);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
            = (__Vtemp_h6ed11bd3__0[2U] | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U]);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
            = __Vtemp_h090e7806__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
            = __Vtemp_h090e7806__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
            = __Vtemp_h090e7806__0[2U];
    }
    __Vtemp_hd38d9978__0[0U] = ((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                << 2U);
    __Vtemp_hd38d9978__0[1U] = (((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                 >> 0x1eU) | ((IData)(
                                                      ((1ULL 
                                                        + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hd38d9978__0[2U] = ((IData)(((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                         >> 0x20U)) 
                                >> 0x1eU);
    VL_EXTEND_WQ(66,64, __Vtemp_h78f93b63__0, vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp_h78f93b63__1, vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    if (VL_LT_W(3, __Vtemp_hd38d9978__0, __Vtemp_h78f93b63__0)) {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
            = ((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
               << 2U);
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
            = (((IData)((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                >> 0x1eU) | ((IData)(((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                      >> 0x20U)) << 2U));
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
            = ((IData)(((1ULL + vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                        >> 0x20U)) >> 0x1eU);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
            = __Vtemp_h78f93b63__1[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
            = __Vtemp_h78f93b63__1[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
            = __Vtemp_h78f93b63__1[2U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__500(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__500\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__501(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__501\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h72fb0160__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)
            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx)
            : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                ? 1U : 4U));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready 
        = ((7U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask) 
                                                << 2U));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT___GEN_28 
        = (((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap) 
            & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap))
            ? 0U : (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq 
        = (((((2U == (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
              & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap)) 
             & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap)) 
            & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32 
        = (((5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? ((0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? 0U : ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                         ? 3U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27)))
            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27));
    VL_EXTEND_WQ(95,64, __Vtemp_h72fb0160__0, (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                               - 1ULL));
    if (((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (IData)(vlSelf->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) {
        if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
             | (0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len))) {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U];
        } else {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
                = __Vtemp_h72fb0160__0[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
                = __Vtemp_h72fb0160__0[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
                = __Vtemp_h72fb0160__0[2U];
        }
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize 
        = ((0U == (((4U ^ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                    | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                   | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
            ? 2U : ((0U == (((2U ^ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                             | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                            | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                     ? 1U : ((0U == (((1U ^ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                                      | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                                     | vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                              ? 0U : 3U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__502(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__502\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_94 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                                           + (1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 1U)))) 
                                    + (3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 2U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 3U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 4U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 5U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 6U)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 7U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 8U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 9U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0xaU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xbU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0xcU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xdU)))) 
                                        + (3U & ((1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xeU)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xfU))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__503(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__503\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_126 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                  >> 0x10U)) 
                                           + (1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x11U)))) 
                                    + (3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x12U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x13U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x14U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x15U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x16U)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x17U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x18U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x19U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x1aU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1bU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x1cU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1dU)))) 
                                        + (3U & ((1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1eU)) 
                                                 + 
                                                 ((vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x1fU) 
                                                  + 
                                                  (1U 
                                                   & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__504(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__504\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_158 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                  >> 1U)) 
                                           + (1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 2U)))) 
                                    + (3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 3U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 4U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 5U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 6U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 7U)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 8U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 9U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xaU)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xbU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xcU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xdU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xeU)))) 
                                        + (3U & ((1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xfU)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x10U))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__505(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__505\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_190 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                  >> 0x11U)) 
                                           + (1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x12U)))) 
                                    + (3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x13U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x14U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x15U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x16U)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x17U)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x18U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x19U)) 
                                             + (1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1aU)))) 
                                      + (3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1bU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x1cU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1dU)) 
                                               + (1U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x1eU)))) 
                                        + (3U & ((vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                  >> 0x1fU) 
                                                 + 
                                                 ((1U 
                                                   & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]) 
                                                  + 
                                                  (1U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
                                                      >> 1U)))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__506(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__506\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h72fb0160__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8))))));
    if ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))) {
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_valid 
            = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready 
            = (1U & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)));
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_valid 
            = (1U & ((3U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                     & ((2U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                        & ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)))));
        vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready = 0U;
    }
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready)));
    VL_EXTEND_WQ(95,64, __Vtemp_h72fb0160__0, (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                               - 1ULL));
    if (((8U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))) {
        if ((0ULL == vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__len)) {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[2U] 
                = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U];
        } else {
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U] 
                = __Vtemp_h72fb0160__0[0U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U] 
                = __Vtemp_h72fb0160__0[1U];
            vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[2U] 
                = __Vtemp_h72fb0160__0[2U];
        }
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U];
        vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[2U] 
            = vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U];
    }
    vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size 
        = ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? 3U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__507(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__507\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
        = (((IData)((vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                     >> 3U)) << 3U) | ((1U == (0x7fU 
                                               & ((0x3fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_94) 
                                                      + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_126))) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_158) 
                                                      + (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_190))))))
                                        ? (7U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr))
                                        : 0U));
    if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig;
    }
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__latch 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___beatsLeft_T_4 
        = (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft) 
                 - ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
                    & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                        ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
                        : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2))
               : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__508(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__508\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                     | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                         ? (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                             ? (1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                      << 1U)) : 0U)
                         : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                       ? (0x7fffffffU 
                                          & ((IData)(0xffU) 
                                             << ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__509(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__509\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                        >> 2U))))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                     >> 2U)))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
        = ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? ((IData)((vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                        >> 3U)) << 3U) : vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address);
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                    | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                        ? (0x7ffffU & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                  << 1U))
                                         : 0U) << ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   << 2U)))
                        : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (7U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U))))
                                      ? (0x7fffffffU 
                                         & ((IData)(0xfU) 
                                            << (4U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 8U))))
                                      : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__510(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__510\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                     | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                         ? (0xfffffU & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (1U | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U))
                                          : 0U) << 
                                        ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                         << 3U))) : 0U)) 
                    & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U))))
                           ? (0x7fffffffU & ((IData)(0xffU) 
                                             << (8U 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 7U))))
                           : 0U))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
            | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__511(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__511\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_1;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0 
            = vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__state_0;
    }
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89 
        = (((0ULL == (0x1ffff0000ULL & (QData)((IData)(
                                                       (0x20000U 
                                                        ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))) 
            | (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                         (0x10000000U 
                                                          ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
           | (0ULL == (0x1f0000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__512(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__512\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
           & (0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                        (0x3000U 
                                                         ^ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__513(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__513\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h3b38c739__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__1;
    VlWide<5>/*159:0*/ __Vtemp_h6fdee5b0__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? ((IData)(1U) << (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             >> 4U)))
                  : 0U)));
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h3b38c739__0, __Vtemp_h7c30b3f9__0, 
                  (0x3cU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            >> 2U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                    ? __Vtemp_h3b38c739__0[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                     ? __Vtemp_h3b38c739__0[0U]
                                     : 0U))))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (0xfU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU)))
                           : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                         ? ((IData)(1U) 
                                            << (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))
                                         : 0U))));
    __Vtemp_h7c30b3f9__1[0U] = 0xfU;
    __Vtemp_h7c30b3f9__1[1U] = 0U;
    __Vtemp_h7c30b3f9__1[2U] = 0U;
    __Vtemp_h7c30b3f9__1[3U] = 0U;
    __Vtemp_h7c30b3f9__1[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h6fdee5b0__0, __Vtemp_h7c30b3f9__1, 
                  (0x3cU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            >> 2U)));
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp_h6fdee5b0__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp_h6fdee5b0__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp_h6fdee5b0__0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp_h6fdee5b0__0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp_h6fdee5b0__0[4U]);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
}

extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h92310995_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f1ca9_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__514(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__514\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h0f16c1a5__0;
    VlWide<8>/*255:0*/ __Vtemp_hf727f26a__0;
    VlWide<8>/*255:0*/ __Vtemp_hf727f26a__1;
    VlWide<65>/*2079:0*/ __Vtemp_hed207b28__0;
    VlWide<65>/*2079:0*/ __Vtemp_h62d4c17a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h07da558f__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h0f16c1a5__0, __Vtemp_h7c30b3f9__0, 
                  (0x3cU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            >> 2U)));
    if (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))) {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp_h0f16c1a5__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp_h0f16c1a5__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp_h0f16c1a5__0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp_h0f16c1a5__0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp_h0f16c1a5__0[4U]);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hf727f26a__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hf727f26a__1, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_hf727f26a__0[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                  ? __Vtemp_hf727f26a__1[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_hed207b28__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(2063, __Vtemp_h62d4c17a__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))), __Vtemp_hed207b28__0, VTestHarness__ConstPool__CONST_h92310995_0);
    VL_AND_W(65, __Vtemp_h07da558f__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h62d4c17a__0);
    VL_ASSIGN_W(2063,vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23, __Vtemp_h07da558f__0);
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready 
        = (((0U == (0x10000000U & (0x10000000U ^ ((
                                                   vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                     >> 0xaU))))) 
            & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
           | ((0U == (0x10000000U & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      << 0x16U) | (
                                                   vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__515(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__515\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_37 
            = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       >> 4U));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_40 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_37 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_40 = 0U;
    }
    if (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param 
            = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_36 
            = (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       >> 4U));
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_39 
            = vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_45 
            = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink 
            = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_36 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_39 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_45 = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied = 0U;
    }
    vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask 
        = ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? ((((2U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                  ? 0xfU : 0U) << 4U) | ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                          ? 0xfU : 0U))
            : ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                    & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                               & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                           << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                          & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                      << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                                     & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                                                 << 4U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                        & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                                    << 3U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                              & vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                               & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__516(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__516\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hdee4819b__0;
    VlWide<5>/*159:0*/ __Vtemp_h9343174b__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))));
    VL_EXTEND_WI(131,4, __Vtemp_hdee4819b__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0x14U)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_h9343174b__0, __Vtemp_hdee4819b__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_h9343174b__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_h9343174b__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__517(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__517\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h9374cab6__0;
    VlWide<5>/*159:0*/ __Vtemp_h662f6799__0;
    VlWide<8>/*255:0*/ __Vtemp_hf5db681e__0;
    VlWide<65>/*2079:0*/ __Vtemp_h3cd4b501__0;
    VlWide<65>/*2079:0*/ __Vtemp_h36d2ccca__0;
    VlWide<65>/*2079:0*/ __Vtemp_h0574601c__0;
    VlWide<8>/*255:0*/ __Vtemp_h24efa779__0;
    VlWide<8>/*255:0*/ __Vtemp_hf5db681e__1;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_h9374cab6__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xdU)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_h662f6799__0, __Vtemp_h9374cab6__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_h662f6799__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_h662f6799__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])))));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hf5db681e__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[3U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[4U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[5U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[6U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[7U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__0[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_h3cd4b501__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    VL_COND_WIWW(2063, __Vtemp_h36d2ccca__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                              & (6U 
                                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))), __Vtemp_h3cd4b501__0, VTestHarness__ConstPool__CONST_h92310995_0);
    VL_AND_W(65, __Vtemp_h0574601c__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h36d2ccca__0);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ __Vtemp_h0574601c__0[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ __Vtemp_h0574601c__0[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ __Vtemp_h0574601c__0[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ __Vtemp_h0574601c__0[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ __Vtemp_h0574601c__0[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ __Vtemp_h0574601c__0[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ __Vtemp_h0574601c__0[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ __Vtemp_h0574601c__0[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ __Vtemp_h0574601c__0[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
           & (~ __Vtemp_h0574601c__0[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
           & (~ __Vtemp_h0574601c__0[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
           & (~ __Vtemp_h0574601c__0[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
           & (~ __Vtemp_h0574601c__0[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
           & (~ __Vtemp_h0574601c__0[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
           & (~ __Vtemp_h0574601c__0[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
           & (~ __Vtemp_h0574601c__0[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
           & (~ __Vtemp_h0574601c__0[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
           & (~ __Vtemp_h0574601c__0[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
           & (~ __Vtemp_h0574601c__0[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
           & (~ __Vtemp_h0574601c__0[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
           & (~ __Vtemp_h0574601c__0[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
           & (~ __Vtemp_h0574601c__0[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
           & (~ __Vtemp_h0574601c__0[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
           & (~ __Vtemp_h0574601c__0[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
           & (~ __Vtemp_h0574601c__0[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
           & (~ __Vtemp_h0574601c__0[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
           & (~ __Vtemp_h0574601c__0[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
           & (~ __Vtemp_h0574601c__0[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
           & (~ __Vtemp_h0574601c__0[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
           & (~ __Vtemp_h0574601c__0[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
           & (~ __Vtemp_h0574601c__0[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
           & (~ __Vtemp_h0574601c__0[0x1fU]));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h24efa779__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hf5db681e__1, VTestHarness__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[0U] : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[1U] : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[2U] : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[3U] : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[4U] : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[5U] : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[6U] : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h24efa779__0[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                  & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp_hf5db681e__1[7U] : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
}
