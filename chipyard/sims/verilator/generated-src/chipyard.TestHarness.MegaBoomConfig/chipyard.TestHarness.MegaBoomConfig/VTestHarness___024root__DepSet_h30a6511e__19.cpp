// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3238(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3238\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_he83218bb__0;
    VlWide<64>/*2047:0*/ __Vtemp_h97fd4585__0;
    VlWide<64>/*2047:0*/ __Vtemp_he83218bb__1;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88379:11
verbose&&done_reset
    ) {
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_he83218bb__0, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source));
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_h97fd4585__0, VTestHarness__ConstPool__CONST_ha056d847_0, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                      [0U]);
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_he83218bb__1, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((0U != (((((((((((((
                                                   (((((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_he83218bb__0[0U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                       ^ 
                                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                        & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                            & (6U 
                                                                               != 
                                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                               [0U]))
                                                                            ? 
                                                                           __Vtemp_h97fd4585__0[0U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0U]))) 
                                                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_he83218bb__0[1U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])) 
                                                                         ^ 
                                                                         (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                          & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                              & (6U 
                                                                                != 
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                                [0U]))
                                                                              ? 
                                                                             __Vtemp_h97fd4585__0[1U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])))) 
                                                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_he83218bb__0[2U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])) 
                                                                        ^ 
                                                                        (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                             & (6U 
                                                                                != 
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                                [0U]))
                                                                             ? 
                                                                            __Vtemp_h97fd4585__0[2U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])))) 
                                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_he83218bb__0[3U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])) 
                                                                       ^ 
                                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                        & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                            & (6U 
                                                                               != 
                                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                               [0U]))
                                                                            ? 
                                                                           __Vtemp_h97fd4585__0[3U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])))) 
                                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_he83218bb__0[4U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])) 
                                                                      ^ 
                                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                       & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                           & (6U 
                                                                              != 
                                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                              [0U]))
                                                                           ? 
                                                                          __Vtemp_h97fd4585__0[4U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])))) 
                                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_he83218bb__0[5U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])) 
                                                                     ^ 
                                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                      & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                          & (6U 
                                                                             != 
                                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                             [0U]))
                                                                          ? 
                                                                         __Vtemp_h97fd4585__0[5U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])))) 
                                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_he83218bb__0[6U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])) 
                                                                    ^ 
                                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                         & (6U 
                                                                            != 
                                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                            [0U]))
                                                                         ? 
                                                                        __Vtemp_h97fd4585__0[6U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])))) 
                                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_he83218bb__0[7U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])) 
                                                                   ^ 
                                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                        & (6U 
                                                                           != 
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                           [0U]))
                                                                        ? 
                                                                       __Vtemp_h97fd4585__0[7U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])))) 
                                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_he83218bb__0[8U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])) 
                                                                  ^ 
                                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                       & (6U 
                                                                          != 
                                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                          [0U]))
                                                                       ? 
                                                                      __Vtemp_h97fd4585__0[8U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])))) 
                                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_he83218bb__0[9U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])) 
                                                                 ^ 
                                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                      & (6U 
                                                                         != 
                                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                         [0U]))
                                                                      ? 
                                                                     __Vtemp_h97fd4585__0[9U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])))) 
                                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_he83218bb__0[0xaU]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                                                                ^ 
                                                                (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                     & (6U 
                                                                        != 
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                        [0U]))
                                                                     ? 
                                                                    __Vtemp_h97fd4585__0[0xaU]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])))) 
                                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_he83218bb__0[0xbU]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                                                               ^ 
                                                               (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                    & (6U 
                                                                       != 
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                       [0U]))
                                                                    ? 
                                                                   __Vtemp_h97fd4585__0[0xbU]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])))) 
                                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_he83218bb__0[0xcU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                                                              ^ 
                                                              (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                               & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                   & (6U 
                                                                      != 
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                      [0U]))
                                                                   ? 
                                                                  __Vtemp_h97fd4585__0[0xcU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])))) 
                                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_he83218bb__0[0xdU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                                                             ^ 
                                                             (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                              & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                  & (6U 
                                                                     != 
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                     [0U]))
                                                                  ? 
                                                                 __Vtemp_h97fd4585__0[0xdU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])))) 
                                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_he83218bb__0[0xeU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                                                            ^ 
                                                            (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                             & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                 & (6U 
                                                                    != 
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                    [0U]))
                                                                 ? 
                                                                __Vtemp_h97fd4585__0[0xeU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])))) 
                                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_he83218bb__0[0xfU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                                                           ^ 
                                                           (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                            & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                                & (6U 
                                                                   != 
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                   [0U]))
                                                                ? 
                                                               __Vtemp_h97fd4585__0[0xfU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])))) 
                                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_he83218bb__0[0x10U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                                                          ^ 
                                                          (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                           & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                               & (6U 
                                                                  != 
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                  [0U]))
                                                               ? 
                                                              __Vtemp_h97fd4585__0[0x10U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])))) 
                                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_he83218bb__0[0x11U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                                                         ^ 
                                                         (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                          & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                              & (6U 
                                                                 != 
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                 [0U]))
                                                              ? 
                                                             __Vtemp_h97fd4585__0[0x11U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])))) 
                                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_he83218bb__0[0x12U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                                                        ^ 
                                                        (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                             & (6U 
                                                                != 
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                                [0U]))
                                                             ? 
                                                            __Vtemp_h97fd4585__0[0x12U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])))) 
                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_he83218bb__0[0x13U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                                                       ^ 
                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                        & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                            & (6U 
                                                               != 
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                               [0U]))
                                                            ? 
                                                           __Vtemp_h97fd4585__0[0x13U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])))) 
                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_he83218bb__0[0x14U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                                                      ^ 
                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                       & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                           & (6U 
                                                              != 
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                              [0U]))
                                                           ? 
                                                          __Vtemp_h97fd4585__0[0x14U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])))) 
                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_he83218bb__0[0x15U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                                                     ^ 
                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                      & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                          & (6U 
                                                             != 
                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                             [0U]))
                                                          ? 
                                                         __Vtemp_h97fd4585__0[0x15U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])))) 
                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_he83218bb__0[0x16U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                                                    ^ 
                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                         & (6U 
                                                            != 
                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                            [0U]))
                                                         ? 
                                                        __Vtemp_h97fd4585__0[0x16U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])))) 
                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp_he83218bb__0[0x17U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                                                   ^ 
                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                        & (6U 
                                                           != 
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                           [0U]))
                                                        ? 
                                                       __Vtemp_h97fd4585__0[0x17U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])))) 
                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_he83218bb__0[0x18U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                                                  ^ 
                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                          [0U]))
                                                       ? 
                                                      __Vtemp_h97fd4585__0[0x18U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])))) 
                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp_he83218bb__0[0x19U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                                                 ^ 
                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                         [0U]))
                                                      ? 
                                                     __Vtemp_h97fd4585__0[0x19U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])))) 
                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_he83218bb__0[0x1aU]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                                                ^ (
                                                   VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                   & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                          [0U]))
                                                       ? 
                                                      __Vtemp_h97fd4585__0[0x1aU]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])))) 
                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp_he83218bb__0[0x1bU]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                                               ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                  & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                         [0U]))
                                                      ? 
                                                     __Vtemp_h97fd4585__0[0x1bU]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])))) 
                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp_he83218bb__0[0x1cU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                                              ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != 
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                        [0U]))
                                                     ? 
                                                    __Vtemp_h97fd4585__0[0x1cU]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])))) 
                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp_he83218bb__0[0x1dU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                                             ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                       [0U]))
                                                    ? 
                                                   __Vtemp_h97fd4585__0[0x1dU]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])))) 
                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp_he83218bb__0[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                                            ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                               & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != 
                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                      [0U]))
                                                   ? 
                                                  __Vtemp_h97fd4585__0[0x1eU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])))) 
                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp_he83218bb__0[0x1fU]
                                                : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                                           ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                              & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != 
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                     [0U]))
                                                  ? 
                                                 __Vtemp_h97fd4585__0[0x1fU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])))) 
                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                               ? __Vtemp_he83218bb__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                                          ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                             & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                                    [0U]))
                                                 ? 
                                                __Vtemp_h97fd4585__0[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))))) 
                               | (~ (IData)((0U != 
                                             (((((((((((((((((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_he83218bb__1[0U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_he83218bb__1[1U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[1U]))) 
                                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_he83218bb__1[2U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[2U]))) 
                                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_he83218bb__1[3U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[3U]))) 
                                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_he83218bb__1[4U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[4U]))) 
                                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                                ? 
                                                                               __Vtemp_he83218bb__1[5U]
                                                                                : 
                                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[5U]))) 
                                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                               ? 
                                                                              __Vtemp_he83218bb__1[6U]
                                                                               : 
                                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[6U]))) 
                                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_he83218bb__1[7U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[7U]))) 
                                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_he83218bb__1[8U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[8U]))) 
                                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_he83218bb__1[9U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[9U]))) 
                                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_he83218bb__1[0xaU]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU]))) 
                                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_he83218bb__1[0xbU]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU]))) 
                                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_he83218bb__1[0xcU]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU]))) 
                                                                 | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_he83218bb__1[0xdU]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU]))) 
                                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_he83218bb__1[0xeU]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU]))) 
                                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_he83218bb__1[0xfU]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU]))) 
                                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_he83218bb__1[0x10U]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U]))) 
                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_he83218bb__1[0x11U]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U]))) 
                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_he83218bb__1[0x12U]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U]))) 
                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_he83218bb__1[0x13U]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U]))) 
                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_he83218bb__1[0x14U]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U]))) 
                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_he83218bb__1[0x15U]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U]))) 
                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_he83218bb__1[0x16U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U]))) 
                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_he83218bb__1[0x17U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U]))) 
                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_he83218bb__1[0x18U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U]))) 
                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_he83218bb__1[0x19U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U]))) 
                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_he83218bb__1[0x1aU]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU]))) 
                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_he83218bb__1[0x1bU]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU]))) 
                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_he83218bb__1[0x1cU]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU]))) 
                                                 | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp_he83218bb__1[0x1dU]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU]))) 
                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_he83218bb__1[0x1eU]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU]))) 
                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp_he83218bb__1[0x1fU]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU]))) 
                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_he83218bb__1[0x20U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at Configs.scala:125:51)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88392:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != (((
                                                   (((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[5U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[6U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[7U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[8U]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[9U]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xaU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xbU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xcU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xdU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xeU]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xfU]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x10U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x11U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x12U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x13U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x14U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x15U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x16U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x17U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x18U]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x19U]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU]) 
                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU]) 
                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x20U])))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:88395: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 88395, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88403:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != (
                                                   (((((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[5U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[6U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[7U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[8U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[9U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xaU]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xbU]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xcU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xdU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xeU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xfU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x10U]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x11U]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x12U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x13U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x14U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x15U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x16U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x17U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x18U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x19U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x20U])))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:125:51)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_hfef87a1d_0;
extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_hc1c0c232_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3239(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3239\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h57c9495f__0;
    VlWide<33>/*1055:0*/ __Vtemp_h57c9495f__1;
    VlWide<130>/*4159:0*/ __Vtemp_h4e972b18__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha1898ce2__0;
    VlWide<130>/*4159:0*/ __Vtemp_he1c449b0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6adbb4d2__0;
    VlWide<130>/*4159:0*/ __Vtemp_hca22ebe2__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88416:11
done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h57c9495f__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY(((~ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                             & __Vtemp_h57c9495f__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:88419: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 88419, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88427:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h57c9495f__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                      [0U]);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                              [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                               & __Vtemp_h57c9495f__1[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:125:51)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88440:11
done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_h4e972b18__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                       [0U] << 2U));
        VL_AND_W(130, __Vtemp_ha1898ce2__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_h4e972b18__0);
        VL_SEL_WWII(4159,4160, __Vtemp_he1c449b0__0, __Vtemp_ha1898ce2__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h6adbb4d2__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_he1c449b0__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_hca22ebe2__0, __Vtemp_h6adbb4d2__0);
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
                          [0U] != (0xfU & __Vtemp_hca22ebe2__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:88443: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 88443, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3240(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3240\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h4e972b18__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha1898ce2__0;
    VlWide<130>/*4159:0*/ __Vtemp_he1c449b0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6adbb4d2__0;
    VlWide<130>/*4159:0*/ __Vtemp_hca22ebe2__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88451:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_h4e972b18__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                       [0U] << 2U));
        VL_AND_W(130, __Vtemp_ha1898ce2__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_h4e972b18__0);
        VL_SEL_WWII(4159,4160, __Vtemp_he1c449b0__0, __Vtemp_ha1898ce2__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h6adbb4d2__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_he1c449b0__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_hca22ebe2__0, __Vtemp_h6adbb4d2__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                              [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
                            [0U] != (0xfU & __Vtemp_hca22ebe2__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:125:51)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88464:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != (((
                                                   (((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[5U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[6U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[7U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[8U]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[9U]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x11U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x12U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x13U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x14U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x15U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x16U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x17U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x18U]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x19U]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1aU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1bU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1cU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1dU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1eU]) 
                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1fU]) 
                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x20U])))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:88467: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 88467, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:88475:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != (
                                                   (((((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[5U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[6U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[7U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[8U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[9U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x11U]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x12U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x13U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x14U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x15U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x16U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x17U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x18U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x19U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1aU]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1bU]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1cU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1dU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1eU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x1fU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x20U])))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:125:51)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3242(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3242\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580815:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580818: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580818, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580826:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580839:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580842: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580842, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580850:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3243(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3243\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580863:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580866: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580866, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580874:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580887:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580890: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580890, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580898:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3244(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3244\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580911:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580914: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580914, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580922:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580935:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580938: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580938, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3245(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3245\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580946:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580959:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580962: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580962, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580970:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580983:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:580986: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 580986, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3246(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3246\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:580994:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581007:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581010: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581010, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581018:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581031:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581034: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581034, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581042:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3247(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3247\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581055:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581058: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581058, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581066:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581079:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581082: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581082, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581090:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3248(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3248\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581103:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581106: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581106, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581114:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581127:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581130: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581130, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3249(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3249\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581138:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581151:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581154: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581154, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581162:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581175:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581178: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581178, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3250(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3250\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581186:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581199:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581202: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581202, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581210:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581223:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581226: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581226, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3251(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3251\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581234:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581247:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x1c000000U & (0xc000000U 
                                                ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581250: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581250, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581258:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x1c000000U & (0xc000000U 
                                                  ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581271:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581274: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581274, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3252(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3252\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581282:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581295:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581298: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581298, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581306:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581319:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581322: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581322, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3253(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3253\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581330:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581343:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581346: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581346, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581354:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581367:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581370: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581370, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3254(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3254\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581378:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581391:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0x40fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581394: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581394, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581402:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((0x40fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x1c000000U 
                                         & (0xc000000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581415:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581418: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581418, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3255(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3255\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581426:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581439:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581442: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581442, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581450:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581463:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581466: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581466, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3256(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3256\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581474:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581487:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581490: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581490, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581498:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581511:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0x40fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x1c000000U 
                                       & (0xc000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581514: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581514, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3257(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3257\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581522:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((0x40fU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x1c000000U 
                                         & (0xc000000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581535:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581538: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581538, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581546:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581559:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581562: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581562, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3258(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3258\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581570:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581583:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581586: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581586, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581594:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581607:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581610: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581610, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3259(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3259\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581618:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581631:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581634: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581634, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581642:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581655:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581658: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581658, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3260(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3260\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581666:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581679:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581682: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581682, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581690:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581703:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581706: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581706, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3261(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3261\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581714:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581727:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581730: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581730, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581738:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581751:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581754: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581754, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3262(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3262\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581762:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581775:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581778: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581778, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581786:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581799:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581802: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581802, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3263(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3263\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581810:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581823:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581826: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581826, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581834:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581847:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581850: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581850, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3264(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3264\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581858:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581871:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581874: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581874, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581882:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581895:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581898: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581898, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581906:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3265(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3265\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581919:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581922: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581922, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581930:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581943:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581946: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581946, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3266(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3266\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581954:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581967:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581970: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581970, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581978:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:581991:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:581994: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 581994, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3267(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3267\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582002:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582015:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582026:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582039:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582050:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582063:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582074:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582087:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582098:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582111:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582122:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582135:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582146:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582159:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582170:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582183:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582194:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582207:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582218:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582231:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                          [0U]) & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                       [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582234: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582234, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3268(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3268\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582242:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                              [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582255:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x40fU < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                          [0U]) & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                    [0U]) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582258: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582258, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582266:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                           [0U]) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x40fU < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582279:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582290:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582303:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582306: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582306, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3269(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3269\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582314:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582327:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582330: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582330, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582338:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582351:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582354: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582354, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3270(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3270\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582362:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582375:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582378: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582378, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582386:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582399:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                          != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582402: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582402, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3271(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3271\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582410:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_address 
                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582423:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                          [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__opcode_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582426: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582426, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582434:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                            [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582447:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                          [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582450: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582450, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3272(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3272\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h86b4da83__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582458:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                            [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582471:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                          [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582474: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582474, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582482:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                            [0U] != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582495:11
done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h86b4da83__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                          & __Vtemp_h86b4da83__0[0U]) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582498: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582498, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3273(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3273\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h86b4da83__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6e71036b__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6e71036b__1;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582506:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h86b4da83__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                            & __Vtemp_h86b4da83__0[0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Plic.scala:362:15)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582519:11
done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h6e71036b__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        if (VL_UNLIKELY(((~ ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                              & __Vtemp_h6e71036b__0[0U]) 
                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                   == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U])))) & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582522: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582522, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582530:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(1040,1040,11, __Vtemp_h6e71036b__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                & __Vtemp_h6e71036b__1[0U]) 
                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                     == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                     [0U]))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3274(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3274\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582543:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                              [0U] == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_30)))) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                [0U] == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                          ? 4U : ((6U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                   == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                   [0U]))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582546: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582546, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582554:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                 == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                 [0U]))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                [0U] == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                          ? 4U : ((6U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_30)))) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                  [0U] == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                            ? 4U : 
                                           ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3275(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3275\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1b94d5d8__0;
    VlWide<130>/*4159:0*/ __Vtemp_h458a7e12__0;
    VlWide<130>/*4159:0*/ __Vtemp_h9fcbe126__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__1;
    VlWide<130>/*4159:0*/ __Vtemp_h959c10cb__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0914d66c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h21cb052d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__2;
    VlWide<130>/*4159:0*/ __Vtemp_h5bcb8429__0;
    VlWide<130>/*4159:0*/ __Vtemp_h79356171__0;
    VlWide<130>/*4159:0*/ __Vtemp_hfacddbb0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__3;
    VlWide<130>/*4159:0*/ __Vtemp_ha5647842__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf3a508a3__0;
    VlWide<130>/*4159:0*/ __Vtemp_h254e147f__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582567:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)) 
                          != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                          [0U]) & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                          == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                          [0U]))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582570: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582570, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582578:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                 == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                 [0U]))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag)) 
                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582591:11
done_reset
    ) {
        VL_AND_W(130, __Vtemp_h7748ae6c__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h1b94d5d8__0, __Vtemp_h7748ae6c__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h458a7e12__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h1b94d5d8__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h9fcbe126__0, __Vtemp_h458a7e12__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__1, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h959c10cb__0, __Vtemp_h7748ae6c__1, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h0914d66c__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h959c10cb__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h21cb052d__0, __Vtemp_h0914d66c__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__2, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h5bcb8429__0, __Vtemp_h7748ae6c__2, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h79356171__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h5bcb8429__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_hfacddbb0__0, __Vtemp_h79356171__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__3, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_ha5647842__0, __Vtemp_h7748ae6c__3, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_hf3a508a3__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_ha5647842__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h254e147f__0, __Vtemp_hf3a508a3__0);
        if (VL_UNLIKELY(((~ ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                              [0U] == ((7U == (7U & 
                                               __Vtemp_h9fcbe126__0[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp_h21cb052d__0[0U]))
                                                 ? 4U
                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_46)))) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                [0U] == ((7U == (7U 
                                                 & __Vtemp_hfacddbb0__0[0U]))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp_h254e147f__0[0U]))
                                                   ? 5U
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                      == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                      [0U])))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582594: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582594, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3276(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3276\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1b94d5d8__0;
    VlWide<130>/*4159:0*/ __Vtemp_h458a7e12__0;
    VlWide<130>/*4159:0*/ __Vtemp_h9fcbe126__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__1;
    VlWide<130>/*4159:0*/ __Vtemp_h959c10cb__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0914d66c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h21cb052d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__2;
    VlWide<130>/*4159:0*/ __Vtemp_h5bcb8429__0;
    VlWide<130>/*4159:0*/ __Vtemp_h79356171__0;
    VlWide<130>/*4159:0*/ __Vtemp_hfacddbb0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7748ae6c__3;
    VlWide<130>/*4159:0*/ __Vtemp_ha5647842__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf3a508a3__0;
    VlWide<130>/*4159:0*/ __Vtemp_h254e147f__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf2cec877__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0b8b6658__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha34c0381__0;
    VlWide<130>/*4159:0*/ __Vtemp_h59fc2a8f__0;
    VlWide<130>/*4159:0*/ __Vtemp_h8a83a337__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582602:11
verbose&&done_reset
    ) {
        VL_AND_W(130, __Vtemp_h7748ae6c__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h1b94d5d8__0, __Vtemp_h7748ae6c__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h458a7e12__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h1b94d5d8__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h9fcbe126__0, __Vtemp_h458a7e12__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__1, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h959c10cb__0, __Vtemp_h7748ae6c__1, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h0914d66c__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h959c10cb__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h21cb052d__0, __Vtemp_h0914d66c__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__2, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_h5bcb8429__0, __Vtemp_h7748ae6c__2, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h79356171__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h5bcb8429__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_hfacddbb0__0, __Vtemp_h79356171__0);
        VL_AND_W(130, __Vtemp_h7748ae6c__3, VTestHarness__ConstPool__CONST_hfef87a1d_0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___a_opcode_lookup_T_1);
        VL_SEL_WWII(4159,4160, __Vtemp_ha5647842__0, __Vtemp_h7748ae6c__3, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_hf3a508a3__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_ha5647842__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h254e147f__0, __Vtemp_hf3a508a3__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                    == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                    [0U])))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                [0U] == ((7U == (7U 
                                                 & __Vtemp_h9fcbe126__0[0U]))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp_h21cb052d__0[0U]))
                                                   ? 4U
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_46)))) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                  [0U] == ((7U == (7U 
                                                   & __Vtemp_hfacddbb0__0[0U]))
                                            ? 4U : 
                                           ((6U == 
                                             (7U & 
                                              __Vtemp_h254e147f__0[0U]))
                                             ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582615:11
done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_hf2cec877__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, 
                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                       [0U] << 2U));
        VL_AND_W(130, __Vtemp_h0b8b6658__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_hf2cec877__0);
        VL_SEL_WWII(4159,4160, __Vtemp_ha34c0381__0, __Vtemp_h0b8b6658__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h59fc2a8f__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_ha34c0381__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h8a83a337__0, __Vtemp_h59fc2a8f__0);
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                          [0U] != (0xfU & __Vtemp_h8a83a337__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                      == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                      [0U])))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582618: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582618, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3277(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3277\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_hf2cec877__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0b8b6658__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha34c0381__0;
    VlWide<130>/*4159:0*/ __Vtemp_h59fc2a8f__0;
    VlWide<130>/*4159:0*/ __Vtemp_h8a83a337__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582626:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_hf2cec877__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, 
                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                       [0U] << 2U));
        VL_AND_W(130, __Vtemp_h0b8b6658__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_hf2cec877__0);
        VL_SEL_WWII(4159,4160, __Vtemp_ha34c0381__0, __Vtemp_h0b8b6658__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h59fc2a8f__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_ha34c0381__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h8a83a337__0, __Vtemp_h59fc2a8f__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                    == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                    [0U])))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                            [0U] != (0xfU & __Vtemp_h8a83a337__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582639:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
                             | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)))) 
                         & ((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                                == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582642: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582642, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582650:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                              == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                              [0U])) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready)) 
                               | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3278(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3278\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_hdd2c76fb__0;
    VlWide<64>/*2047:0*/ __Vtemp_h947155a3__0;
    VlWide<64>/*2047:0*/ __Vtemp_hdd2c76fb__1;
    VlWide<64>/*2047:0*/ __Vtemp_hdd2c76fb__2;
    VlWide<64>/*2047:0*/ __Vtemp_h947155a3__1;
    VlWide<64>/*2047:0*/ __Vtemp_hdd2c76fb__3;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582661:11
done_reset
    ) {
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hdd2c76fb__0, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_h947155a3__0, VTestHarness__ConstPool__CONST_ha056d847_0, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hdd2c76fb__1, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((~ ((0U != (((((((((((((((
                                                   (((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_hdd2c76fb__0[0U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                     ^ 
                                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_h947155a3__0[0U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0U]))) 
                                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_hdd2c76fb__0[1U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])) 
                                                                       ^ 
                                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_h947155a3__0[1U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])))) 
                                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_hdd2c76fb__0[2U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])) 
                                                                      ^ 
                                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_h947155a3__0[2U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])))) 
                                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_hdd2c76fb__0[3U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])) 
                                                                     ^ 
                                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_h947155a3__0[3U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])))) 
                                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_hdd2c76fb__0[4U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])) 
                                                                    ^ 
                                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_h947155a3__0[4U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])))) 
                                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_hdd2c76fb__0[5U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])) 
                                                                   ^ 
                                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_h947155a3__0[5U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])))) 
                                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_hdd2c76fb__0[6U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])) 
                                                                  ^ 
                                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_h947155a3__0[6U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])))) 
                                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_hdd2c76fb__0[7U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])) 
                                                                 ^ 
                                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_h947155a3__0[7U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])))) 
                                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_hdd2c76fb__0[8U]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])) 
                                                                ^ 
                                                                (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_h947155a3__0[8U]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])))) 
                                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_hdd2c76fb__0[9U]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])) 
                                                               ^ 
                                                               (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_h947155a3__0[9U]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])))) 
                                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_hdd2c76fb__0[0xaU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                                                              ^ 
                                                              (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_h947155a3__0[0xaU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])))) 
                                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_hdd2c76fb__0[0xbU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                                                             ^ 
                                                             (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_h947155a3__0[0xbU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])))) 
                                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_hdd2c76fb__0[0xcU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                                                            ^ 
                                                            (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_h947155a3__0[0xcU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])))) 
                                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_hdd2c76fb__0[0xdU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                                                           ^ 
                                                           (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                ? 
                                                               __Vtemp_h947155a3__0[0xdU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])))) 
                                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_hdd2c76fb__0[0xeU]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                                                          ^ 
                                                          (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                               ? 
                                                              __Vtemp_h947155a3__0[0xeU]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])))) 
                                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_hdd2c76fb__0[0xfU]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                                                         ^ 
                                                         (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                              ? 
                                                             __Vtemp_h947155a3__0[0xfU]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])))) 
                                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_hdd2c76fb__0[0x10U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                                                        ^ 
                                                        (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                             ? 
                                                            __Vtemp_h947155a3__0[0x10U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])))) 
                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_hdd2c76fb__0[0x11U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                                                       ^ 
                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                            ? 
                                                           __Vtemp_h947155a3__0[0x11U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])))) 
                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_hdd2c76fb__0[0x12U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                                                      ^ 
                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                           ? 
                                                          __Vtemp_h947155a3__0[0x12U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])))) 
                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_hdd2c76fb__0[0x13U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                                                     ^ 
                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                          ? 
                                                         __Vtemp_h947155a3__0[0x13U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])))) 
                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_hdd2c76fb__0[0x14U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                                                    ^ 
                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                         ? 
                                                        __Vtemp_h947155a3__0[0x14U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])))) 
                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp_hdd2c76fb__0[0x15U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                                                   ^ 
                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                        ? 
                                                       __Vtemp_h947155a3__0[0x15U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])))) 
                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_hdd2c76fb__0[0x16U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                                                  ^ 
                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h947155a3__0[0x16U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])))) 
                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp_hdd2c76fb__0[0x17U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                                                 ^ 
                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h947155a3__0[0x17U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])))) 
                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_hdd2c76fb__0[0x18U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                                                ^ (
                                                   VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h947155a3__0[0x18U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])))) 
                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp_hdd2c76fb__0[0x19U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                                               ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h947155a3__0[0x19U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])))) 
                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp_hdd2c76fb__0[0x1aU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                                              ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp_h947155a3__0[0x1aU]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])))) 
                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp_hdd2c76fb__0[0x1bU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                                             ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h947155a3__0[0x1bU]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])))) 
                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp_hdd2c76fb__0[0x1cU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                                            ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h947155a3__0[0x1cU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])))) 
                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp_hdd2c76fb__0[0x1dU]
                                                : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                                           ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp_h947155a3__0[0x1dU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])))) 
                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                               ? __Vtemp_hdd2c76fb__0[0x1eU]
                                               : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                                          ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp_h947155a3__0[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])))) 
                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp_hdd2c76fb__0[0x1fU]
                                              : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                                         ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                ? __Vtemp_h947155a3__0[0x1fU]
                                                : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])))) 
                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                             ? __Vtemp_hdd2c76fb__0[0x20U]
                                             : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                                        ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp_h947155a3__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))))) 
                             | (~ (IData)((0U != ((
                                                   (((((((((((((((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[0U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[1U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[1U]))) 
                                                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[2U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[2U]))) 
                                                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[3U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[3U]))) 
                                                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[4U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[4U]))) 
                                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[5U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[5U]))) 
                                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[6U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[6U]))) 
                                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[7U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[7U]))) 
                                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__1[8U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[8U]))) 
                                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                ? 
                                                                               __Vtemp_hdd2c76fb__1[9U]
                                                                                : 
                                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[9U]))) 
                                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                               ? 
                                                                              __Vtemp_hdd2c76fb__1[0xaU]
                                                                               : 
                                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU]))) 
                                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_hdd2c76fb__1[0xbU]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU]))) 
                                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_hdd2c76fb__1[0xcU]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU]))) 
                                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_hdd2c76fb__1[0xdU]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU]))) 
                                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_hdd2c76fb__1[0xeU]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU]))) 
                                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_hdd2c76fb__1[0xfU]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU]))) 
                                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_hdd2c76fb__1[0x10U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U]))) 
                                                                 | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_hdd2c76fb__1[0x11U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U]))) 
                                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_hdd2c76fb__1[0x12U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U]))) 
                                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_hdd2c76fb__1[0x13U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U]))) 
                                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_hdd2c76fb__1[0x14U]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U]))) 
                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_hdd2c76fb__1[0x15U]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U]))) 
                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_hdd2c76fb__1[0x16U]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U]))) 
                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_hdd2c76fb__1[0x17U]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U]))) 
                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_hdd2c76fb__1[0x18U]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U]))) 
                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_hdd2c76fb__1[0x19U]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U]))) 
                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_hdd2c76fb__1[0x1aU]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU]))) 
                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_hdd2c76fb__1[0x1bU]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU]))) 
                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_hdd2c76fb__1[0x1cU]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU]))) 
                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_hdd2c76fb__1[0x1dU]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU]))) 
                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_hdd2c76fb__1[0x1eU]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU]))) 
                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_hdd2c76fb__1[0x1fU]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU]))) 
                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_hdd2c76fb__1[0x20U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U])))))))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:582664: Assertion failed in %NTestHarness.chiptop.system.plicDomainWrapper.plic.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 582664, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:582672:11
verbose&&done_reset
    ) {
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hdd2c76fb__2, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_h947155a3__1, VTestHarness__ConstPool__CONST_ha056d847_0, 
                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                      [0U]);
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp_hdd2c76fb__3, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((0U != (((((((((((((
                                                   (((((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_hdd2c76fb__2[0U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                       ^ 
                                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_h947155a3__1[0U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0U]))) 
                                                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_hdd2c76fb__2[1U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])) 
                                                                         ^ 
                                                                         (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_h947155a3__1[1U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])))) 
                                                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_hdd2c76fb__2[2U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])) 
                                                                        ^ 
                                                                        (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_h947155a3__1[2U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])))) 
                                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_hdd2c76fb__2[3U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])) 
                                                                       ^ 
                                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_h947155a3__1[3U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])))) 
                                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_hdd2c76fb__2[4U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])) 
                                                                      ^ 
                                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_h947155a3__1[4U]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])))) 
                                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_hdd2c76fb__2[5U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])) 
                                                                     ^ 
                                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_h947155a3__1[5U]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])))) 
                                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_hdd2c76fb__2[6U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])) 
                                                                    ^ 
                                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_h947155a3__1[6U]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])))) 
                                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_hdd2c76fb__2[7U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])) 
                                                                   ^ 
                                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_h947155a3__1[7U]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])))) 
                                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_hdd2c76fb__2[8U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])) 
                                                                  ^ 
                                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_h947155a3__1[8U]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])))) 
                                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_hdd2c76fb__2[9U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])) 
                                                                 ^ 
                                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_h947155a3__1[9U]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])))) 
                                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_hdd2c76fb__2[0xaU]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                                                                ^ 
                                                                (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_h947155a3__1[0xaU]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])))) 
                                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_hdd2c76fb__2[0xbU]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                                                               ^ 
                                                               (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_h947155a3__1[0xbU]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])))) 
                                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_hdd2c76fb__2[0xcU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                                                              ^ 
                                                              (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_h947155a3__1[0xcU]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])))) 
                                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_hdd2c76fb__2[0xdU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                                                             ^ 
                                                             (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_h947155a3__1[0xdU]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])))) 
                                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_hdd2c76fb__2[0xeU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                                                            ^ 
                                                            (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_h947155a3__1[0xeU]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])))) 
                                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_hdd2c76fb__2[0xfU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                                                           ^ 
                                                           (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                                ? 
                                                               __Vtemp_h947155a3__1[0xfU]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])))) 
                                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_hdd2c76fb__2[0x10U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                                                          ^ 
                                                          (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                               ? 
                                                              __Vtemp_h947155a3__1[0x10U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])))) 
                                                      | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_hdd2c76fb__2[0x11U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                                                         ^ 
                                                         (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                              ? 
                                                             __Vtemp_h947155a3__1[0x11U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])))) 
                                                     | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_hdd2c76fb__2[0x12U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                                                        ^ 
                                                        (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                             ? 
                                                            __Vtemp_h947155a3__1[0x12U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])))) 
                                                    | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_hdd2c76fb__2[0x13U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                                                       ^ 
                                                       (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                            ? 
                                                           __Vtemp_h947155a3__1[0x13U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])))) 
                                                   | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_hdd2c76fb__2[0x14U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                                                      ^ 
                                                      (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                           ? 
                                                          __Vtemp_h947155a3__1[0x14U]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])))) 
                                                  | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_hdd2c76fb__2[0x15U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                                                     ^ 
                                                     (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                          ? 
                                                         __Vtemp_h947155a3__1[0x15U]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])))) 
                                                 | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_hdd2c76fb__2[0x16U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                                                    ^ 
                                                    (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                         ? 
                                                        __Vtemp_h947155a3__1[0x16U]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])))) 
                                                | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp_hdd2c76fb__2[0x17U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                                                   ^ 
                                                   (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                        ? 
                                                       __Vtemp_h947155a3__1[0x17U]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])))) 
                                               | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_hdd2c76fb__2[0x18U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                                                  ^ 
                                                  (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h947155a3__1[0x18U]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])))) 
                                              | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp_hdd2c76fb__2[0x19U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                                                 ^ 
                                                 (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h947155a3__1[0x19U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])))) 
                                             | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_hdd2c76fb__2[0x1aU]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                                                ^ (
                                                   VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h947155a3__1[0x1aU]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])))) 
                                            | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp_hdd2c76fb__2[0x1bU]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                                               ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                      ? 
                                                     __Vtemp_h947155a3__1[0x1bU]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])))) 
                                           | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp_hdd2c76fb__2[0x1cU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                                              ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                     ? 
                                                    __Vtemp_h947155a3__1[0x1cU]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])))) 
                                          | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp_hdd2c76fb__2[0x1dU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                                             ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                    ? 
                                                   __Vtemp_h947155a3__1[0x1dU]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])))) 
                                         | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp_hdd2c76fb__2[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                                            ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h947155a3__1[0x1eU]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])))) 
                                        | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp_hdd2c76fb__2[0x1fU]
                                                : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                                           ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                  ? 
                                                 __Vtemp_h947155a3__1[0x1fU]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])))) 
                                       | ((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                               ? __Vtemp_hdd2c76fb__2[0x20U]
                                               : VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                                          ^ (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_counter_1)))
                                                 ? 
                                                __Vtemp_h947155a3__1[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))))) 
                               | (~ (IData)((0U != 
                                             (((((((((((((((((((((((((((((((((VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__3[0U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
                                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__3[1U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[1U]))) 
                                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__3[2U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[2U]))) 
                                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__3[3U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[3U]))) 
                                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                 ? 
                                                                                __Vtemp_hdd2c76fb__3[4U]
                                                                                 : 
                                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[4U]))) 
                                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                                ? 
                                                                               __Vtemp_hdd2c76fb__3[5U]
                                                                                : 
                                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[5U]))) 
                                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                               ? 
                                                                              __Vtemp_hdd2c76fb__3[6U]
                                                                               : 
                                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[6U]))) 
                                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                              ? 
                                                                             __Vtemp_hdd2c76fb__3[7U]
                                                                              : 
                                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[7U]))) 
                                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                             ? 
                                                                            __Vtemp_hdd2c76fb__3[8U]
                                                                             : 
                                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[8U]))) 
                                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                            ? 
                                                                           __Vtemp_hdd2c76fb__3[9U]
                                                                            : 
                                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[9U]))) 
                                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                           ? 
                                                                          __Vtemp_hdd2c76fb__3[0xaU]
                                                                           : 
                                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU]))) 
                                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                          ? 
                                                                         __Vtemp_hdd2c76fb__3[0xbU]
                                                                          : 
                                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU]))) 
                                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                         ? 
                                                                        __Vtemp_hdd2c76fb__3[0xcU]
                                                                         : 
                                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU]))) 
                                                                 | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                        ? 
                                                                       __Vtemp_hdd2c76fb__3[0xdU]
                                                                        : 
                                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU]))) 
                                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                       ? 
                                                                      __Vtemp_hdd2c76fb__3[0xeU]
                                                                       : 
                                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU]))) 
                                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp_hdd2c76fb__3[0xfU]
                                                                      : 
                                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU]))) 
                                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                     ? 
                                                                    __Vtemp_hdd2c76fb__3[0x10U]
                                                                     : 
                                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U]))) 
                                                             | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                    ? 
                                                                   __Vtemp_hdd2c76fb__3[0x11U]
                                                                    : 
                                                                   VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U]))) 
                                                            | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                   ? 
                                                                  __Vtemp_hdd2c76fb__3[0x12U]
                                                                   : 
                                                                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U]))) 
                                                           | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                  ? 
                                                                 __Vtemp_hdd2c76fb__3[0x13U]
                                                                  : 
                                                                 VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U]))) 
                                                          | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                 ? 
                                                                __Vtemp_hdd2c76fb__3[0x14U]
                                                                 : 
                                                                VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U]))) 
                                                         | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                                ? 
                                                               __Vtemp_hdd2c76fb__3[0x15U]
                                                                : 
                                                               VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U]))) 
                                                        | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                               ? 
                                                              __Vtemp_hdd2c76fb__3[0x16U]
                                                               : 
                                                              VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U]))) 
                                                       | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                              ? 
                                                             __Vtemp_hdd2c76fb__3[0x17U]
                                                              : 
                                                             VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U]))) 
                                                      | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                             ? 
                                                            __Vtemp_hdd2c76fb__3[0x18U]
                                                             : 
                                                            VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U]))) 
                                                     | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp_hdd2c76fb__3[0x19U]
                                                            : 
                                                           VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U]))) 
                                                    | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp_hdd2c76fb__3[0x1aU]
                                                           : 
                                                          VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU]))) 
                                                   | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp_hdd2c76fb__3[0x1bU]
                                                          : 
                                                         VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU]))) 
                                                  | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp_hdd2c76fb__3[0x1cU]
                                                         : 
                                                        VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU]))) 
                                                 | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp_hdd2c76fb__3[0x1dU]
                                                        : 
                                                       VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU]))) 
                                                | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_hdd2c76fb__3[0x1eU]
                                                       : 
                                                      VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU]))) 
                                               | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp_hdd2c76fb__3[0x1fU]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU]))) 
                                              | (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_hdd2c76fb__3[0x20U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Plic.scala:362:15)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}
