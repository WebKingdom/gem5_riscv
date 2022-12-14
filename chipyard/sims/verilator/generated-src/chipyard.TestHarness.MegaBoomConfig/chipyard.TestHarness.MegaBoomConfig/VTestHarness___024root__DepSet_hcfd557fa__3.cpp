// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h92310995_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f1ca9_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h780cac3e_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9ca1_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h90baf80e_0;
extern const VlWide<65>/*2079:0*/ VTestHarness__ConstPool__CONST_h614f9cad_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__518(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__518\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_h3cd4b501__0;
    VlWide<65>/*2079:0*/ __Vtemp_h4de789b0__0;
    VlWide<65>/*2079:0*/ __Vtemp_h6003909b__0;
    VlWide<65>/*2079:0*/ __Vtemp_hcb8e8a3a__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf9727a84__0;
    VlWide<65>/*2079:0*/ __Vtemp_hf223466c__0;
    VlWide<65>/*2079:0*/ __Vtemp_h9aa2df18__0;
    VlWide<65>/*2079:0*/ __Vtemp_h82825843__0;
    VlWide<65>/*2079:0*/ __Vtemp_h5010d78a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h9c15df9a__0;
    VlWide<65>/*2079:0*/ __Vtemp_h1a94f484__0;
    // Body
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_h3cd4b501__0, VTestHarness__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    VL_COND_WIWW(2063, __Vtemp_h4de789b0__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))), __Vtemp_h3cd4b501__0, VTestHarness__ConstPool__CONST_h92310995_0);
    VL_AND_W(65, __Vtemp_h6003909b__0, VTestHarness__ConstPool__CONST_h614f1ca9_0, __Vtemp_h4de789b0__0);
    VL_ASSIGN_W(2063,vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23, __Vtemp_h6003909b__0);
    VL_EXTEND_WI(2051,4, __Vtemp_hcb8e8a3a__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp_hf9727a84__0, __Vtemp_hcb8e8a3a__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(2051, __Vtemp_hf223466c__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hf9727a84__0, VTestHarness__ConstPool__CONST_h780cac3e_0);
    VL_AND_W(65, __Vtemp_h9aa2df18__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_hf223466c__0);
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
            | __Vtemp_h9aa2df18__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[1U] 
            | __Vtemp_h9aa2df18__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[2U] 
            | __Vtemp_h9aa2df18__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[3U] 
            | __Vtemp_h9aa2df18__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[4U] 
            | __Vtemp_h9aa2df18__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[5U] 
            | __Vtemp_h9aa2df18__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[6U] 
            | __Vtemp_h9aa2df18__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[7U] 
            | __Vtemp_h9aa2df18__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[8U] 
            | __Vtemp_h9aa2df18__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[9U] 
            | __Vtemp_h9aa2df18__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | __Vtemp_h9aa2df18__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | __Vtemp_h9aa2df18__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | __Vtemp_h9aa2df18__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | __Vtemp_h9aa2df18__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | __Vtemp_h9aa2df18__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | __Vtemp_h9aa2df18__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | __Vtemp_h9aa2df18__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | __Vtemp_h9aa2df18__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | __Vtemp_h9aa2df18__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | __Vtemp_h9aa2df18__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | __Vtemp_h9aa2df18__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | __Vtemp_h9aa2df18__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | __Vtemp_h9aa2df18__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | __Vtemp_h9aa2df18__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | __Vtemp_h9aa2df18__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | __Vtemp_h9aa2df18__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | __Vtemp_h9aa2df18__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | __Vtemp_h9aa2df18__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | __Vtemp_h9aa2df18__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | __Vtemp_h9aa2df18__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | __Vtemp_h9aa2df18__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | __Vtemp_h9aa2df18__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_EXTEND_WI(2050,3, __Vtemp_h82825843__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp_h5010d78a__0, __Vtemp_h82825843__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(2050, __Vtemp_h9c15df9a__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h5010d78a__0, VTestHarness__ConstPool__CONST_h90baf80e_0);
    VL_AND_W(65, __Vtemp_h1a94f484__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_h9c15df9a__0);
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
            | __Vtemp_h1a94f484__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
            | __Vtemp_h1a94f484__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
            | __Vtemp_h1a94f484__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
            | __Vtemp_h1a94f484__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
            | __Vtemp_h1a94f484__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
            | __Vtemp_h1a94f484__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
            | __Vtemp_h1a94f484__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
            | __Vtemp_h1a94f484__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
            | __Vtemp_h1a94f484__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
            | __Vtemp_h1a94f484__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | __Vtemp_h1a94f484__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | __Vtemp_h1a94f484__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | __Vtemp_h1a94f484__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | __Vtemp_h1a94f484__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | __Vtemp_h1a94f484__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | __Vtemp_h1a94f484__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | __Vtemp_h1a94f484__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | __Vtemp_h1a94f484__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | __Vtemp_h1a94f484__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | __Vtemp_h1a94f484__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | __Vtemp_h1a94f484__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | __Vtemp_h1a94f484__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | __Vtemp_h1a94f484__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | __Vtemp_h1a94f484__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | __Vtemp_h1a94f484__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | __Vtemp_h1a94f484__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | __Vtemp_h1a94f484__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | __Vtemp_h1a94f484__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | __Vtemp_h1a94f484__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | __Vtemp_h1a94f484__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | __Vtemp_h1a94f484__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | __Vtemp_h1a94f484__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
            & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1))) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__519(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__519\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2a588790__0;
    VlWide<5>/*159:0*/ __Vtemp_hce007781__0;
    VlWide<5>/*159:0*/ __Vtemp_h14e9101d__0;
    VlWide<5>/*159:0*/ __Vtemp_hcc091936__0;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_h2a588790__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0x14U)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_hce007781__0, __Vtemp_h2a588790__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_hce007781__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_hce007781__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp_h14e9101d__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xdU)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_hcc091936__0, __Vtemp_h14e9101d__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_hcc091936__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_hcc091936__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U])))));
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (0xfU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU)))
                           : 0U)) & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
                                         ? ((IData)(1U) 
                                            << (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                   >> 4U)))
                                         : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__520(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__520\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_36) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_37));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_39) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_40));
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_size 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_39) 
           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_40));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_45) 
           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
               ? 1U : 0U));
    vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_opcode 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___T_45) 
           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
               ? 1U : 0U));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__521(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__521\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_hdcb1bcb2__0;
    VlWide<65>/*2079:0*/ __Vtemp_hed98bfcc__0;
    VlWide<65>/*2079:0*/ __Vtemp_h74109943__0;
    VlWide<65>/*2079:0*/ __Vtemp_h58b51565__0;
    VlWide<65>/*2079:0*/ __Vtemp_h7db3297a__0;
    VlWide<65>/*2079:0*/ __Vtemp_hb1b183c5__0;
    VlWide<65>/*2079:0*/ __Vtemp_h0975060d__0;
    VlWide<65>/*2079:0*/ __Vtemp_ha756e759__0;
    // Body
    VL_EXTEND_WI(2051,4, __Vtemp_hdcb1bcb2__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp_hed98bfcc__0, __Vtemp_hdcb1bcb2__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(2051, __Vtemp_h74109943__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hed98bfcc__0, VTestHarness__ConstPool__CONST_h780cac3e_0);
    VL_AND_W(65, __Vtemp_h58b51565__0, VTestHarness__ConstPool__CONST_h614f9ca1_0, __Vtemp_h74109943__0);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            | __Vtemp_h58b51565__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
            | __Vtemp_h58b51565__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
            | __Vtemp_h58b51565__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
            | __Vtemp_h58b51565__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
            | __Vtemp_h58b51565__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
            | __Vtemp_h58b51565__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
            | __Vtemp_h58b51565__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
            | __Vtemp_h58b51565__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
            | __Vtemp_h58b51565__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
            | __Vtemp_h58b51565__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | __Vtemp_h58b51565__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | __Vtemp_h58b51565__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | __Vtemp_h58b51565__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | __Vtemp_h58b51565__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | __Vtemp_h58b51565__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | __Vtemp_h58b51565__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | __Vtemp_h58b51565__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | __Vtemp_h58b51565__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | __Vtemp_h58b51565__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | __Vtemp_h58b51565__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | __Vtemp_h58b51565__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | __Vtemp_h58b51565__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | __Vtemp_h58b51565__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | __Vtemp_h58b51565__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | __Vtemp_h58b51565__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | __Vtemp_h58b51565__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | __Vtemp_h58b51565__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | __Vtemp_h58b51565__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | __Vtemp_h58b51565__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | __Vtemp_h58b51565__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | __Vtemp_h58b51565__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | __Vtemp_h58b51565__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_EXTEND_WI(2050,3, __Vtemp_h7db3297a__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp_hb1b183c5__0, __Vtemp_h7db3297a__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(2050, __Vtemp_h0975060d__0, ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hb1b183c5__0, VTestHarness__ConstPool__CONST_h90baf80e_0);
    VL_AND_W(65, __Vtemp_ha756e759__0, VTestHarness__ConstPool__CONST_h614f9cad_0, __Vtemp_h0975060d__0);
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            | __Vtemp_ha756e759__0[0U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
            | __Vtemp_ha756e759__0[1U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[1U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
            | __Vtemp_ha756e759__0[2U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[2U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
            | __Vtemp_ha756e759__0[3U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[3U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
            | __Vtemp_ha756e759__0[4U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[4U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
            | __Vtemp_ha756e759__0[5U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[5U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
            | __Vtemp_ha756e759__0[6U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[6U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
            | __Vtemp_ha756e759__0[7U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[7U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
            | __Vtemp_ha756e759__0[8U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[8U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
            | __Vtemp_ha756e759__0[9U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[9U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | __Vtemp_ha756e759__0[0xaU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | __Vtemp_ha756e759__0[0xbU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | __Vtemp_ha756e759__0[0xcU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | __Vtemp_ha756e759__0[0xdU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | __Vtemp_ha756e759__0[0xeU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | __Vtemp_ha756e759__0[0xfU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xfU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | __Vtemp_ha756e759__0[0x10U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x10U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | __Vtemp_ha756e759__0[0x11U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x11U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | __Vtemp_ha756e759__0[0x12U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x12U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | __Vtemp_ha756e759__0[0x13U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x13U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | __Vtemp_ha756e759__0[0x14U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x14U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | __Vtemp_ha756e759__0[0x15U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x15U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | __Vtemp_ha756e759__0[0x16U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x16U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | __Vtemp_ha756e759__0[0x17U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x17U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | __Vtemp_ha756e759__0[0x18U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x18U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | __Vtemp_ha756e759__0[0x19U]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x19U]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | __Vtemp_ha756e759__0[0x1aU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | __Vtemp_ha756e759__0[0x1bU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | __Vtemp_ha756e759__0[0x1cU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | __Vtemp_ha756e759__0[0x1dU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | __Vtemp_ha756e759__0[0x1eU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | __Vtemp_ha756e759__0[0x1fU]) & (~ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__522(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__522\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h2fe58071__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__1;
    VlWide<5>/*159:0*/ __Vtemp_h74031c88__0;
    // Body
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h2fe58071__0, __Vtemp_h7c30b3f9__0, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp_h2fe58071__0[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp_h2fe58071__0[0U]
                                     : 0U))))));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (0xfU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU)))
                           : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
    __Vtemp_h7c30b3f9__1[0U] = 0xfU;
    __Vtemp_h7c30b3f9__1[1U] = 0U;
    __Vtemp_h7c30b3f9__1[2U] = 0U;
    __Vtemp_h7c30b3f9__1[3U] = 0U;
    __Vtemp_h7c30b3f9__1[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp_h74031c88__0, __Vtemp_h7c30b3f9__1, 
                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))) {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp_h74031c88__0[0U];
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp_h74031c88__0[1U];
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp_h74031c88__0[2U];
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp_h74031c88__0[3U];
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp_h74031c88__0[4U]);
    } else {
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_bits_last 
        = ((4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))
            ? ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4)) 
               | (0U == ((4U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                          ? 0U : (7U & (~ (0x3ffffU 
                                           & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                              >> 3U)))))))
            : ((3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
               | ((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                  | ((1U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                     | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1)) 
                        | (0U == ((1U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_opcode))
                                   ? (7U & (~ (0x3ffU 
                                               & (((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_size)) 
                                                  >> 3U))))
                                   : 0U)))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__523(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__523\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h23e87273__0;
    VlWide<5>/*159:0*/ __Vtemp_hd21a7346__0;
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    VL_EXTEND_WI(131,4, __Vtemp_h23e87273__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0x14U)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_hd21a7346__0, __Vtemp_h23e87273__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_hd21a7346__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_hd21a7346__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U])))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__524(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__524\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h6789ac90__0;
    VlWide<5>/*159:0*/ __Vtemp_heb4e3d90__0;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_h6789ac90__0, (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xdU)))
                                                : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp_heb4e3d90__0, __Vtemp_h6789ac90__0, 
                  (0x3cU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp_heb4e3d90__0[1U]
                                  : 0U))) << 0x20U) 
               | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp_heb4e3d90__0[0U]
                                   : 0U))))) & (~ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_23[0U])))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__532(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__532\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__533(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__533\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    if (vlSelf->reset) {
        vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
                                            != (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q))));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                             ^ (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                                   >> 1U))) 
                                            != (0xcU 
                                                ^ (
                                                   (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__534(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__534\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__535(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__535\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink_io_deq_valid 
        = ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg) 
           & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__536(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__536\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source_io_enq_ready 
        = ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving) 
           & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink_io_deq_valid));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin) 
                   + ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving) 
                      & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink_io_deq_valid))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___GEN_11 
        = ((((4U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))) & ((3U == (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                     >> 0x18U)))
                                           ? (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full))
                                           : ((2U != 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x18U))) 
                                              & ((1U 
                                                  != 
                                                  (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                      >> 0x18U))) 
                                                 & (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x7000000U 
                                                              & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])) 
                                                            & (((0U 
                                                                 == 
                                                                 (0x10000000U 
                                                                  & (0x10000000U 
                                                                     ^ 
                                                                     ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                                       << 0x16U) 
                                                                      | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                         >> 0xaU))))) 
                                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
                                                               | ((0U 
                                                                   == 
                                                                   (0x10000000U 
                                                                    & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                                        << 0x16U) 
                                                                       | (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                          >> 0xaU)))) 
                                                                  & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready))))))))) 
            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving))) 
           | ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) 
                  & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount)))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__537(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__537\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                         >> 3U));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                               >> 2U)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray) 
                                               >> 1U)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__538(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__538\n"); );
    // Body
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_out_queue__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestHarness___024root___combo__TOP__0(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out 
        = vlSelf->clock;
    vlSelf->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate_out 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__gated_clock_debug_clock_gate__DOT__en_latched) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__567(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__567\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:627948:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:627959:11
verbose&&done_reset
    ) {
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__568(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__568\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:627704:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:627715:11
verbose&&done_reset
    ) {
    }
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__716(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__716\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:595746:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (7U & (IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x28U))))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x23U)))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x28U))) 
                                == ((7U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_46)))) 
                               | ((7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 0x28U))) 
                                  == ((7U == (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                    >> 1U)))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Debug.scala:652:46)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__721(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__721\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:595888:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0x60000000000ULL == (0x70000000000ULL 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x24U))) 
                            != (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> (4U & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x23U)) 
                                                 << 2U))) 
                                      >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Debug.scala:652:46)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)
            ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_sizes_T_5));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_opcodes_T_2;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1_3));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3 = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight) 
                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))
                         ? 1U : 0U)) & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) 
                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)))
                                            ? 1U : 0U)))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__722(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__722\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))
                   ? 1U : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode)))
                                      ? 1U : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight) 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? 1U : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode)))
                                      ? 1U : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))
                   ? 1U : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                      ? (3U & ((IData)(1U) 
                                               << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
                                      : 0U))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_data 
                = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg) 
                    | (0U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))
                    ? 0U : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                    >> 2U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__723(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__723\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch)) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft) 
                 - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___beatsLeft_T_2))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_1 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__latch) 
             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___readys_mask_T) 
                            << 1U)));
        }
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_1;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_0;
        }
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid;
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter1));
        }
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
            = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__latch)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft) 
                        - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___beatsLeft_T_2))));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask = 3U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__state_0 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__724(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__724\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
        if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg)))) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg) 
                 | (0U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op = 0U;
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr 
                    = (0x7fU & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                        >> 0x22U)));
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op 
                    = (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits));
            }
        }
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass_io_bypass;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))
                   ? 1U : 0U)) & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (7U 
                                                & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x28U)))))
                                      ? (3U & ((IData)(1U) 
                                               << (1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x23U)))))
                                      : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__726(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__726\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft 
        = vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter1));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___GEN_12)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__727(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__727\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done))
                ? 0U : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___watchdog_T_1);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address 
            = (0x7fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_opcodes_T_2;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done))
                ? 0U : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___watchdog_T_1);
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__728(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__728\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hbcde99b1__0;
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__denied 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__size_1 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
                ? 2U : 0U);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
        VL_EXTEND_WI(128,9, __Vtemp_hbcde99b1__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp_hbcde99b1__0[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp_hbcde99b1__0[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp_hbcde99b1__0[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp_hbcde99b1__0[3U];
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T_5;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done))
                ? 0U : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1);
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog = 0U;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_param;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__729(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__729\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_sink;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__denied 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_denied;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_opcodes_T_2;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_2));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done))
                ? 0U : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___watchdog_T_1);
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog = 0U;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__denied 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__730(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__730\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__param_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_param;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__sink 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_sink;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__size_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_sizes_T_5;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_2));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done))
                ? 0U : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___watchdog_T_1);
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog = 0U;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode_1 
            = (7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x28U)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__731(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__731\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param_1 
            = (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x26U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size_1 
            = (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x24U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__source_1 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x23U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__sink 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x22U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__denied 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x21U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___inflight_sizes_T_5 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter1_3 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__732(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__732\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__733(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__733\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1_1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_1));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__735(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__735\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__736(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__736\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__737(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__737\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__738(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__738\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog);
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_opcode) 
                                  << 5U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_size) 
                                             << 1U) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_source))))) 
                << 0x23U) | ((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__mem_0_data)) 
                             << 1U));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__739(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__739\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__740(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__740\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__741(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__741\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x23U)) << 2U))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__742(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__742\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__743(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__743\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__744(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__744\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__745(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__745\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__746(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__746\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31 
            = ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
               & (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__758(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__758\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive;
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_ackhavereset) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_resumereq) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_valid) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready))));
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1))));
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__759(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__759\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1))) 
                 != (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((0xfU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_update_valid)
                  ? ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits 
                         >> 0x10U)) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_5))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_5))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState = 0xfU;
    } else if ((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
            = ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                ? 0xfU : 0xcU);
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_capture) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg 
                = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__nonzeroResp));
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg = 0U;
        }
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
            = ((0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))
                ? ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                    ? 7U : 0xcU) : ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))
                                     ? ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                         ? 4U : 6U)
                                     : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))
                                         ? ((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS)
                                             ? 1U : 2U)
                                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT___GEN_11))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((0xfU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
              & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm_io_dmi_resp_ready) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_0))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__760(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__760\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1))) 
                 != (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_ridx_bin) 
                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT___ridx_T_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented) 
                 != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
    } else {
        if ((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg = 0U;
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_4) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg = 0U;
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid) {
            if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg)))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_13;
            }
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) {
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset 
                    = (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                             >> 1U));
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq 
                    = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                       >> 0x1fU);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset = 0U;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq = 0U;
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
              & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                        >> 2U))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___GEN_23))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__761(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__761\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive 
            = (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data);
    } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive)))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((0xfU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState)) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_update_valid)
                  ? ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits 
                         >> 0x10U)) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_4))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_4))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__762(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__762\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_gray));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_gray));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_gray));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__764(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__764\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)) 
           & ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState))
               ? ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0)
                   : ((0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0)
                       : ((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction))
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0)
                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_))))
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2516(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2516\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_0__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_1__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_2__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_3__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_4__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_5__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_6__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB0Way_7__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_0__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_1__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_2__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_3__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_4__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_5__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_6__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__dataArrayB1Way_7__DOT__dataArrayB0Way_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2517(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2517\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__next__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2518(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2518\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2519(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2519\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT__table___DOT__table_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2520(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2520\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT__table___DOT__table_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT__table___DOT__table_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__hi_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__lo_us__DOT__hi_us_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT__table___DOT__table_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2521(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2521\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT__table___DOT__table_1_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__hi_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__lo_us__DOT__hi_us_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT__table___DOT__table_1_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2523(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2523\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2524(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2524\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2528(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2528\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_0_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_0_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_1_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_1_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_2_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_2_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_3_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_3_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_4_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_4_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_5_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_5_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_6_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_6_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_7_0__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_7_0__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_0_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_0_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_1_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_1_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_2_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_2_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_3_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2529(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2529\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_3_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_4_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_4_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_5_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_5_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_6_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_6_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_7_1__DOT__array_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__data__DOT__array_7_1__DOT__array_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_1__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2530(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2530\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_is_repair_update__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_target__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_is_jal__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_is_mispredict_update__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_taken__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_mispredicted__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2531(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2531\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_is_br__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_meta_1__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_meta_0__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_br_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_mask__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2532(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2532\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_idx_valid__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_cfi_idx_bits__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_btb_mispredicts__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2533(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2533\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2536(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2536\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2537(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2537\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_param__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2538(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2538\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2540(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2540\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2541(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2541\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2542(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2542\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2543(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2543\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2544(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2544\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2545(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2545\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__next__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2546(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2546\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2547(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2547\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2548(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2548\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__next__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_mask__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2555(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2555\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2556(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2556\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_index__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2557(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2557\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2559(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2559\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2560(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2560\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__queue__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2562(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2562\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2563(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2563\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2564(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2564\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
}

extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_hfef87a1d_0;
extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_hc1c0c232_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2600(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2600\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h07dab176__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5118dde7__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb585f3e1__0;
    VlWide<130>/*4159:0*/ __Vtemp_h17a07a8a__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5275d448__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:624914:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_h07dab176__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        VL_AND_W(130, __Vtemp_h5118dde7__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_h07dab176__0);
        VL_SEL_WWII(4159,4160, __Vtemp_hb585f3e1__0, __Vtemp_h5118dde7__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_h17a07a8a__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_hb585f3e1__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_h5275d448__0, __Vtemp_h17a07a8a__0);
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_h5275d448__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at TileResetSetter.scala:69:75)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:624927:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:624938:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((0xfffffffeU & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__a_first_counter_1))) 
                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2636(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2636\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h0dd9a7ad__0;
    VlWide<130>/*4159:0*/ __Vtemp_had5bdd92__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6d261a2b__0;
    VlWide<130>/*4159:0*/ __Vtemp_ha6b63d0a__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf1242f69__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:622142:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp_h0dd9a7ad__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        VL_AND_W(130, __Vtemp_had5bdd92__0, VTestHarness__ConstPool__CONST_hfef87a1d_0, __Vtemp_h0dd9a7ad__0);
        VL_SEL_WWII(4159,4160, __Vtemp_h6d261a2b__0, __Vtemp_had5bdd92__0, 1U, 0x103fU);
        VL_AND_W(130, __Vtemp_ha6b63d0a__0, VTestHarness__ConstPool__CONST_hc1c0c232_0, __Vtemp_h6d261a2b__0);
        VL_EXTEND_WW(4160,4159, __Vtemp_hf1242f69__0, __Vtemp_ha6b63d0a__0);
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_hf1242f69__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at TileClockGater.scala:52:68)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:622155:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:622166:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((0xfffffffeU & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__a_first_counter_1))) 
                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2703(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2703\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:52937:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_398) 
                               | ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                  & ((((((((((0ULL 
                                              == (0x1ffffb000ULL 
                                                  & (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                             | (0ULL 
                                                == 
                                                (0x1ffff0000ULL 
                                                 & (QData)((IData)(
                                                                   (0x10000U 
                                                                    ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                            | (0ULL 
                                               == (0x1ffff0000ULL 
                                                   & (QData)((IData)(
                                                                     (0x20000U 
                                                                      ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                           | (0ULL 
                                              == (0x1fffef000ULL 
                                                  & (QData)((IData)(
                                                                    (0x100000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (0ULL == 
                                             (0x1ffff0000ULL 
                                              & (QData)((IData)(
                                                                (0x2000000U 
                                                                 ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (0ULL == 
                                            (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x2010000U 
                                                                ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (0ULL == 
                                           (0x1fc000000ULL 
                                            & (QData)((IData)(
                                                              (0xc000000U 
                                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (0ULL == (0x1fffff000ULL 
                                                   & (QData)((IData)(
                                                                     (0x10000000U 
                                                                      ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                     | (0ULL == (0x1f0000000ULL 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2713(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2713\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:53321:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_20) 
                               & (((3U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((0ULL == 
                                            (0x1ffffb000ULL 
                                             & (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                           | (0ULL 
                                              == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (0ULL == 
                                             (0x1fffef000ULL 
                                              & (QData)((IData)(
                                                                (0x100000U 
                                                                 ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (0ULL == 
                                            (0x1ffff0000ULL 
                                             & (QData)((IData)(
                                                               (0x2000000U 
                                                                ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x2010000U 
                                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (0ULL == (0x1fc000000ULL 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                                  | ((4U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                     & ((0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                                        | (0ULL == 
                                           (0x1f0000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2717(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2717\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:53441:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___T_20) 
                               & (((3U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   & (((((((0ULL == 
                                            (0x1ffffb000ULL 
                                             & (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))) 
                                           | (0ULL 
                                              == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x3000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                          | (0ULL == 
                                             (0x1fffef000ULL 
                                              & (QData)((IData)(
                                                                (0x100000U 
                                                                 ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                         | (0ULL == 
                                            (0x1ffff0000ULL 
                                             & (QData)((IData)(
                                                               (0x2000000U 
                                                                ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                        | (0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x2010000U 
                                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                       | (0ULL == (0x1fc000000ULL 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) 
                                      | (0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))) 
                                  | ((4U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                     & ((0ULL == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))) 
                                        | (0ULL == 
                                           (0x1f0000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2745(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2745\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:54665:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                    >> 1U)))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2750(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2750\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:54807:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0x7fU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2802(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2802\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:58395:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser_auto_client_out_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0xaU)) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                  >> 1U)))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                >> 1U)))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                    >> 1U)))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:390:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2807(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2807\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:58537:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0x7fU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                              << 3U)) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:390:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2853(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2853\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:611576:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x15U)))) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0xaU)))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x15U)) == 
                                ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___GEN_46)))) 
                               | ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                         >> 0x15U)) 
                                  == ((7U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__serdesser__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2859(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2859\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2862(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2862\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:181879:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__valid) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__REG)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__select) 
                            != ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                 ? 0U : ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                          ? 1U : ((4U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                    ? 3U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                     ? 4U
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                      ? 5U
                                                      : 
                                                     ((0x40U 
                                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__pool__DOT__bitmap))
                                                       ? 6U
                                                       : 7U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at IDPool.scala:52 assert (select === PriorityEncoder(bitmap))\n");
        }
    }
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_taken__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_old_history__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2863(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2863\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__rob__DOT__pnr_maybe_at_tail 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__rob__DOT__pnr_maybe_at_tail;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__meta_hazard 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__meta_hazard;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__enq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__enq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2864(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2864\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2865(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2865\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__deq_ptr_value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2867(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2867\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2868(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2868\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__value_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2870(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2870\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2874(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2874\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2875(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2875\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2884(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2884\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:386535:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_4_valid)) 
                                       | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_5_valid))) 
                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__alu_exe_unit_io_iresp_bits_uop_pdst) 
                                         != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__alu_exe_unit_1_io_iresp_bits_uop_pdst))) 
                                     | (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__alu_exe_unit_io_iresp_bits_uop_pdst)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: [regfile] too many writers a register\n    at regfile.scala:171 assert(!io.write_ports(i).valid ||\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2886(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2886\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v4 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v5 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2952(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2952\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2953(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2953\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_4__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2955(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2955\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_set__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2956(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2956\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_1__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_1__DOT__state_0;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2957(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2957\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_2__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_2__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_3__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__alloc_lfsr_prng_3__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_1__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_1__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_2__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_2__DOT__state_0;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_3__DOT__state_0 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__alloc_lfsr_prng_3__DOT__state_0;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_0__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_7__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_6__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_5__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_4__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_5__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_6__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_7__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_4__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bpd_meta_1__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bpd_meta_0__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_0__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2958(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2958\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_2__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_2__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_1__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_0__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_3__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_3__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_1__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_ras_idx__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_0__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_1__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_7__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_5__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_2__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_3__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_4__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_6__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ras_top__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2959(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2959\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_old_history__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_new_saw_branch_taken__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_current_saw_branch_not_taken__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2973(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2973\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3035(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3035\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3038(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3038\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3043(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3043\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3047(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3047\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:162186:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__ren1)) 
                               | (1U == (0xfU & ((7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 1U)))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 2U)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 3U)))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 4U)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 5U)))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 6U)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__victimWayOH) 
                                                             >> 7U)))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Directory.scala:121 assert (!ren2 || PopCount(victimWayOH) === UInt(1))\n");
        }
    }
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__tail__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3048(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3048\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3091(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3091\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:155168:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != (
                                                   (((((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[1U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[2U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[3U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[4U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[5U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[6U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[7U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[8U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[9U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xaU]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xbU]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xcU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xdU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xeU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0xfU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x10U]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x11U]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x12U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x13U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x14U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x15U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x16U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x17U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x18U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x19U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1aU]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1bU]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1cU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1dU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1eU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x1fU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__inflight_1[0x20U])))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog_1 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:125:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3092(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3092\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_corrupt__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3093(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3093\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3095(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3095\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3096(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3096\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__lb__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3172(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3172\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:50728:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((((((((((((((((((((((((((((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0U] 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[1U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[2U]) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[3U]) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[4U]) 
                                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[5U]) 
                                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[6U]) 
                                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[7U]) 
                                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[8U]) 
                                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[9U]) 
                                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xaU]) 
                                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xbU]) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xcU]) 
                                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xdU]) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xeU]) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0xfU]) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x10U]) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x11U]) 
                                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x12U]) 
                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x13U]) 
                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x14U]) 
                                                              | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x15U]) 
                                                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x16U]) 
                                                            | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x17U]) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x18U]) 
                                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x19U]) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1aU]) 
                                                        | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1bU]) 
                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1cU]) 
                                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1dU]) 
                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1eU]) 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x1fU]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1[0x20U])))) 
                                      | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog_1 
                                        < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:264:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3173(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3173\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_br_mask__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3180(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3180\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:44969:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)) 
                               & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | (0xffU == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full)
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
}
