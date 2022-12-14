// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h4c3142bc_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e95a4_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c76_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hac7e6362_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19883(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19883\n"); );
    // Init
    VlWide<513>/*16415:0*/ __Vtemp_he3d0de50__0;
    VlWide<513>/*16415:0*/ __Vtemp_hcefe7995__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf1865032__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8de4ed95__0;
    VlWide<130>/*4159:0*/ __Vtemp_h66ec9e9a__0;
    VlWide<130>/*4159:0*/ __Vtemp_hfdce55e6__0;
    VlWide<130>/*4159:0*/ __Vtemp_h73bba86a__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb8da632b__0;
    VlWide<130>/*4159:0*/ __Vtemp_h324c0b88__0;
    VlWide<33>/*1055:0*/ __Vtemp_h8d22b773__0;
    VlWide<33>/*1055:0*/ __Vtemp_h4d8354ae__0;
    VlWide<33>/*1055:0*/ __Vtemp_hb021395d__0;
    VlWide<33>/*1055:0*/ __Vtemp_h39e64284__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_he3d0de50__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_hcefe7995__0, __Vtemp_he3d0de50__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_hf1865032__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hcefe7995__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_h8de4ed95__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_hf1865032__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h66ec9e9a__0, __Vtemp_h8de4ed95__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_hfdce55e6__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, __Vtemp_h66ec9e9a__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h73bba86a__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_hb8da632b__0, __Vtemp_h73bba86a__0);
    VL_AND_W(130, __Vtemp_h324c0b88__0, __Vtemp_hfdce55e6__0, __Vtemp_hb8da632b__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_h324c0b88__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__old_gennum1))) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(1027,4, __Vtemp_h8d22b773__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_h4d8354ae__0, __Vtemp_h8d22b773__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h4d8354ae__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
    VL_EXTEND_WI(1027,4, __Vtemp_hb021395d__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_h39e64284__0, __Vtemp_hb021395d__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h39e64284__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19884(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19884\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ade70a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h320e6a47__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3ade70a2__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h320e6a47__0, __Vtemp_hc961d23f__1, 
                  (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[0U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h320e6a47__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[1U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h320e6a47__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h3ade70a2__0[2U] : 0U)) 
                 & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                        ? __Vtemp_h320e6a47__0[2U] : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_197) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_190));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_197) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_190));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_180) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_173));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_180) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_173));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_214) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_207));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_214) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_207));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_163) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_156));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_163) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_156));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
           & (0x3ffU == (0x3ffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ff00000000ULL == (0x3ff00000000ULL 
                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345) 
           & (0x3ffU == (0x3ffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))));
}

extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_hd6e5c6ea_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h101b3c49_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e15b8_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19885(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19885\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_h2650e794__0;
    VlWide<64>/*2047:0*/ __Vtemp_h2650e794__1;
    VlWide<513>/*16415:0*/ __Vtemp_h6afaab22__0;
    VlWide<513>/*16415:0*/ __Vtemp_he2675fa3__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8b7cc3dc__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_a_valid));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_h2650e794__0, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_h2650e794__1, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[1U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[1U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[1U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[1U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[2U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[2U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[2U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[2U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[3U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[3U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[3U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[3U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[4U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[4U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[4U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[4U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[5U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[5U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[5U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[5U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[6U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[6U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[6U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[6U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[7U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[7U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[7U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[7U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[8U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[8U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[8U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[8U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[9U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[9U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[9U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[9U] : VTestHarness__ConstPool__CONST_h6be9aa18_0[9U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xaU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xaU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xaU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xaU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xbU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xbU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xbU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xbU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xcU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xcU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xcU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xcU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xdU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xdU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xdU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xdU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xeU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xeU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xeU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xeU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xfU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0xfU] : VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0xfU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0xfU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x10U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x10U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x10U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x10U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x11U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x11U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x11U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x11U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x11U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x12U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x12U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x12U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x12U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x12U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x13U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x13U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x13U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x13U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x13U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x14U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x14U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x14U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x14U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x14U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x15U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x15U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x15U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x15U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x15U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x16U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x16U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x16U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x16U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x16U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x17U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x17U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x17U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x17U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x17U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x18U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x18U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x18U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x18U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x18U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x19U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x19U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x19U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x19U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x19U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1aU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1aU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1aU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1aU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1aU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1bU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1bU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1bU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1bU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1bU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1cU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1cU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1cU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1cU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1cU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1dU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1dU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1dU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1dU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1dU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1eU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1eU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1eU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1eU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1eU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1fU] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1fU] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x1fU] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x1fU] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x1fU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x20U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x20U] 
               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp_h2650e794__0[0x20U] : 
                  VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U])) 
              & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1)))
                     ? __Vtemp_h2650e794__1[0x20U] : 
                    VTestHarness__ConstPool__CONST_h6be9aa18_0[0x20U]))));
    VL_SHIFTL_WWI(16399,16399,14, __Vtemp_h6afaab22__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16399, __Vtemp_he2675fa3__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1))), __Vtemp_h6afaab22__0, VTestHarness__ConstPool__CONST_h101b3c49_0);
    VL_AND_W(513, __Vtemp_h8b7cc3dc__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_he2675fa3__0);
    VL_ASSIGN_W(16399,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23, __Vtemp_h8b7cc3dc__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xffU == (0xffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff00ULL == (0xff00ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff0000ULL == (0xff0000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff000000ULL == (0xff000000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff00000000ULL == (0xff00000000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff0000000000ULL == (0xff0000000000ULL 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19886(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19886\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff000000000000ULL == (0xff000000000000ULL 
                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0) 
           & (0xff00000000000000ULL == (0xff00000000000000ULL 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xffU == (0xffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff00ULL == (0xff00ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff0000ULL == (0xff0000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff000000ULL == (0xff000000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff00000000ULL == (0xff00000000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff0000000000ULL == (0xff0000000000ULL 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff000000000000ULL == (0xff000000000000ULL 
                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8) 
           & (0xff00000000000000ULL == (0xff00000000000000ULL 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_a_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready 
        = ((((((((((0U == (0x46116000U & (0x2000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                  | ((0U == (0x46116000U & (0x2010000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_2) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
                | ((0U == (0x44000000U & (0x4000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
               | ((0U == (0x46110000U & (0x2000000U 
                                         ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
              | ((0U == (0x46116000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
             | ((0U == (0x46110000U & (0x10000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
            | ((0U == (0x46116000U & (0x100000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
           | ((0U == (0x46116000U & (0x110000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater_io_enq_ready)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19887(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19887\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready 
        = ((((((((((0U == (0x46116000U & (0x2000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))) 
                  | ((0U == (0x46116000U & (0x2010000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_2) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
                | ((0U == (0x44000000U & (0x4000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
               | ((0U == (0x46110000U & (0x2000000U 
                                         ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
              | ((0U == (0x46116000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
             | ((0U == (0x46110000U & (0x10000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
            | ((0U == (0x46116000U & (0x100000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater_io_enq_ready))) 
           | ((0U == (0x46116000U & (0x110000U ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater_io_enq_ready)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_1665 
        = ((0x9bU == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? (0U == (0x100U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
            : ((0x9aU == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((0x99U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                    : ((0x98U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? (0U == (0x100U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                        : ((0x97U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? (0U == (0x100U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                            : ((0x96U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? (0U == (0x100U & 
                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                                : ((0x95U == (0xffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? (0U == (0x100U 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_1658))))))));
}

extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h1ce4d640_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e95a0_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19888(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19888\n"); );
    // Init
    VlWide<513>/*16415:0*/ __Vtemp_hef203a1e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h794dd376__0;
    VlWide<513>/*16415:0*/ __Vtemp_hac0d04bb__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf6f5a405__0;
    VlWide<130>/*4159:0*/ __Vtemp_he152a14a__0;
    VlWide<130>/*4159:0*/ __Vtemp_h568e11be__0;
    VlWide<130>/*4159:0*/ __Vtemp_h791d8b6b__0;
    VlWide<130>/*4159:0*/ __Vtemp_h80190813__0;
    VlWide<130>/*4159:0*/ __Vtemp_h621841c0__0;
    VlWide<513>/*16415:0*/ __Vtemp_hde2b90b9__0;
    VlWide<513>/*16415:0*/ __Vtemp_hbd8253ba__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8287b993__0;
    VlWide<513>/*16415:0*/ __Vtemp_hff7645f5__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1b855784__0;
    VlWide<130>/*4159:0*/ __Vtemp_hd673eca4__0;
    VlWide<130>/*4159:0*/ __Vtemp_h791d8b6b__1;
    VlWide<130>/*4159:0*/ __Vtemp_h28cdf723__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf140d381__0;
    VlWide<513>/*16415:0*/ __Vtemp_h4f443b75__0;
    VlWide<513>/*16415:0*/ __Vtemp_hacbe8004__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3df55883__0;
    VlWide<513>/*16415:0*/ __Vtemp_h1b944f5f__0;
    VlWide<130>/*4159:0*/ __Vtemp_hddcc9868__0;
    VlWide<130>/*4159:0*/ __Vtemp_h80a89bfe__0;
    VlWide<130>/*4159:0*/ __Vtemp_h87dd9c00__0;
    VlWide<130>/*4159:0*/ __Vtemp_h95951abf__0;
    VlWide<130>/*4159:0*/ __Vtemp_haf729123__0;
    // Body
    VL_EXTEND_WI(16387,4, __Vtemp_hef203a1e__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp_h794dd376__0, __Vtemp_hef203a1e__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16387, __Vtemp_hac0d04bb__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h794dd376__0, VTestHarness__ConstPool__CONST_h1ce4d640_0);
    VL_AND_W(513, __Vtemp_hf6f5a405__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_hac0d04bb__0);
    VL_SEL_WWII(4160,16387, __Vtemp_he152a14a__0, __Vtemp_hf6f5a405__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h568e11be__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_he152a14a__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h791d8b6b__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h80190813__0, __Vtemp_h791d8b6b__0);
    VL_AND_W(130, __Vtemp_h621841c0__0, __Vtemp_h568e11be__0, __Vtemp_h80190813__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2, __Vtemp_h621841c0__0);
    VL_EXTEND_WI(16386,3, __Vtemp_hde2b90b9__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_hbd8253ba__0, __Vtemp_hde2b90b9__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_h8287b993__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hbd8253ba__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_hff7645f5__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h8287b993__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h1b855784__0, __Vtemp_hff7645f5__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_hd673eca4__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h1b855784__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h791d8b6b__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h28cdf723__0, __Vtemp_h791d8b6b__1);
    VL_AND_W(130, __Vtemp_hf140d381__0, __Vtemp_hd673eca4__0, __Vtemp_h28cdf723__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_hf140d381__0);
    VL_EXTEND_WI(16387,4, __Vtemp_h4f443b75__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp_hacbe8004__0, __Vtemp_h4f443b75__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16387, __Vtemp_h3df55883__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hacbe8004__0, VTestHarness__ConstPool__CONST_h1ce4d640_0);
    VL_AND_W(513, __Vtemp_h1b944f5f__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_h3df55883__0);
    VL_SEL_WWII(4160,16387, __Vtemp_hddcc9868__0, __Vtemp_h1b944f5f__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h80a89bfe__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hddcc9868__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h87dd9c00__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h95951abf__0, __Vtemp_h87dd9c00__0);
    VL_AND_W(130, __Vtemp_haf729123__0, __Vtemp_h80a89bfe__0, __Vtemp_h95951abf__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2, __Vtemp_haf729123__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19889(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19889\n"); );
    // Init
    VlWide<513>/*16415:0*/ __Vtemp_h70313260__0;
    VlWide<513>/*16415:0*/ __Vtemp_hd26ec309__0;
    VlWide<513>/*16415:0*/ __Vtemp_h9f5ceb45__0;
    VlWide<513>/*16415:0*/ __Vtemp_hbaf73f3a__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1265c1c0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4e0ab101__0;
    VlWide<130>/*4159:0*/ __Vtemp_h87dd9c00__0;
    VlWide<130>/*4159:0*/ __Vtemp_h95951abf__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2b9baa5c__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf5d9b91b__0;
    VlWide<513>/*16415:0*/ __Vtemp_h5e068e53__0;
    VlWide<513>/*16415:0*/ __Vtemp_h18899b48__0;
    VlWide<513>/*16415:0*/ __Vtemp_h9e55ff12__0;
    VlWide<130>/*4159:0*/ __Vtemp_hedfc086c__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6ad23dd4__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc905dadd__0;
    VlWide<130>/*4159:0*/ __Vtemp_h47a788bf__0;
    VlWide<130>/*4159:0*/ __Vtemp_h9939e105__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3167d4e4__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha48747af__0;
    VlWide<513>/*16415:0*/ __Vtemp_h807223ab__0;
    VlWide<513>/*16415:0*/ __Vtemp_h6d67e41b__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf94f9095__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6374327f__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc905dadd__1;
    VlWide<130>/*4159:0*/ __Vtemp_hd3b2d578__0;
    VlWide<130>/*4159:0*/ __Vtemp_hcc024093__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_h70313260__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_hd26ec309__0, __Vtemp_h70313260__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_h9f5ceb45__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hd26ec309__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_hbaf73f3a__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h9f5ceb45__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h1265c1c0__0, __Vtemp_hbaf73f3a__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h4e0ab101__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h1265c1c0__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h87dd9c00__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h95951abf__0, __Vtemp_h87dd9c00__0);
    VL_AND_W(130, __Vtemp_h2b9baa5c__0, __Vtemp_h4e0ab101__0, __Vtemp_h95951abf__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_h2b9baa5c__0);
    VL_EXTEND_WI(16387,4, __Vtemp_hf5d9b91b__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp_h5e068e53__0, __Vtemp_hf5d9b91b__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16387, __Vtemp_h18899b48__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h5e068e53__0, VTestHarness__ConstPool__CONST_h1ce4d640_0);
    VL_AND_W(513, __Vtemp_h9e55ff12__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_h18899b48__0);
    VL_SEL_WWII(4160,16387, __Vtemp_hedfc086c__0, __Vtemp_h9e55ff12__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h6ad23dd4__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hedfc086c__0);
    VL_SEL_WWII(4160,16399, __Vtemp_hc905dadd__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h47a788bf__0, __Vtemp_hc905dadd__0);
    VL_AND_W(130, __Vtemp_h9939e105__0, __Vtemp_h6ad23dd4__0, __Vtemp_h47a788bf__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2, __Vtemp_h9939e105__0);
    VL_EXTEND_WI(16386,3, __Vtemp_h3167d4e4__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_ha48747af__0, __Vtemp_h3167d4e4__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_h807223ab__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_ha48747af__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_h6d67e41b__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h807223ab__0);
    VL_SEL_WWII(4160,16386, __Vtemp_hf94f9095__0, __Vtemp_h6d67e41b__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h6374327f__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_hf94f9095__0);
    VL_SEL_WWII(4160,16399, __Vtemp_hc905dadd__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_hd3b2d578__0, __Vtemp_hc905dadd__1);
    VL_AND_W(130, __Vtemp_hcc024093__0, __Vtemp_h6374327f__0, __Vtemp_hd3b2d578__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_hcc024093__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19890(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19890\n"); );
    // Init
    VlWide<513>/*16415:0*/ __Vtemp_haa386ebf__0;
    VlWide<513>/*16415:0*/ __Vtemp_he02fc7c1__0;
    VlWide<513>/*16415:0*/ __Vtemp_hd0771f02__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha6270cb0__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4df6787d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h567b1284__0;
    VlWide<130>/*4159:0*/ __Vtemp_h3ad82643__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb76854c5__0;
    VlWide<130>/*4159:0*/ __Vtemp_hfa398b31__0;
    VlWide<513>/*16415:0*/ __Vtemp_h02a5f2b5__0;
    VlWide<513>/*16415:0*/ __Vtemp_hebf03433__0;
    VlWide<513>/*16415:0*/ __Vtemp_hbd65c481__0;
    VlWide<513>/*16415:0*/ __Vtemp_he93b51fc__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc1eeff3b__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5aa66a0e__0;
    VlWide<130>/*4159:0*/ __Vtemp_h3ad82643__1;
    VlWide<130>/*4159:0*/ __Vtemp_h9b17beba__0;
    VlWide<130>/*4159:0*/ __Vtemp_h89c69897__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h36815223__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT___T_10 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1) 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0));
    VL_EXTEND_WI(16387,4, __Vtemp_haa386ebf__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp_he02fc7c1__0, __Vtemp_haa386ebf__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16387, __Vtemp_hd0771f02__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_he02fc7c1__0, VTestHarness__ConstPool__CONST_h1ce4d640_0);
    VL_AND_W(513, __Vtemp_ha6270cb0__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_hd0771f02__0);
    VL_SEL_WWII(4160,16387, __Vtemp_h4df6787d__0, __Vtemp_ha6270cb0__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h567b1284__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h4df6787d__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h3ad82643__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_hb76854c5__0, __Vtemp_h3ad82643__0);
    VL_AND_W(130, __Vtemp_hfa398b31__0, __Vtemp_h567b1284__0, __Vtemp_hb76854c5__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_opcodes_T_2, __Vtemp_hfa398b31__0);
    VL_EXTEND_WI(16386,3, __Vtemp_h02a5f2b5__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_hebf03433__0, __Vtemp_h02a5f2b5__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_hbd65c481__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_hebf03433__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_he93b51fc__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_hbd65c481__0);
    VL_SEL_WWII(4160,16386, __Vtemp_hc1eeff3b__0, __Vtemp_he93b51fc__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h5aa66a0e__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, __Vtemp_hc1eeff3b__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h3ad82643__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h9b17beba__0, __Vtemp_h3ad82643__1);
    VL_AND_W(130, __Vtemp_h89c69897__0, __Vtemp_h5aa66a0e__0, __Vtemp_h9b17beba__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_h89c69897__0);
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36815223__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp_h36815223__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp_h36815223__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                  ? __Vtemp_h36815223__0[2U] : 0U)));
}

extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h81905067_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h99cb7c89_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19891(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19891\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h543c791f__0;
    VlWide<9>/*287:0*/ __Vtemp_h9cf24934__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a401ceb__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5edf7781__0;
    VlWide<9>/*287:0*/ __Vtemp_h087d0095__0;
    VlWide<33>/*1055:0*/ __Vtemp_hf2fb68af__0;
    VlWide<33>/*1055:0*/ __Vtemp_hf68781c2__0;
    // Body
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_h543c791f__0, VTestHarness__ConstPool__CONST_h81905067_0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[0U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[1U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[1U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[2U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[2U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[3U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[3U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[4U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[4U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[5U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[5U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[6U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[6U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[7U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[7U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[8U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[8U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[9U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[9U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[9U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xaU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xaU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xbU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xbU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xcU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xcU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xdU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xdU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xeU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xeU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0xfU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xfU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode)))
                     ? __Vtemp_h543c791f__0[0x10U] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0x10U]))));
    VL_SHIFTR_WWI(260,260,10, __Vtemp_h9cf24934__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & __Vtemp_h9cf24934__0[0U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & __Vtemp_h9cf24934__0[1U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & __Vtemp_h9cf24934__0[2U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & __Vtemp_h9cf24934__0[3U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & __Vtemp_h9cf24934__0[4U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & __Vtemp_h9cf24934__0[5U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & __Vtemp_h9cf24934__0[6U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & __Vtemp_h9cf24934__0[7U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & __Vtemp_h9cf24934__0[8U]);
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1a401ceb__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp_h1a401ceb__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp_h1a401ceb__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp_h1a401ceb__0[2U] : 0U)));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_h5edf7781__0, VTestHarness__ConstPool__CONST_h81905067_0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[0U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[1U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[1U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[2U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[2U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[3U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[3U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[4U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[4U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[5U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[5U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[6U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[6U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[7U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[7U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[8U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[8U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[9U] : VTestHarness__ConstPool__CONST_h99cb7c89_0[9U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xaU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xaU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xbU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xbU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xcU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xcU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xdU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xdU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xeU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xeU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0xfU] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0xfU]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
           & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))) 
                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp_h5edf7781__0[0x10U] : 
                    VTestHarness__ConstPool__CONST_h99cb7c89_0[0x10U]))));
    VL_SHIFTR_WWI(260,260,10, __Vtemp_h087d0095__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & __Vtemp_h087d0095__0[0U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & __Vtemp_h087d0095__0[1U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & __Vtemp_h087d0095__0[2U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & __Vtemp_h087d0095__0[3U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & __Vtemp_h087d0095__0[4U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & __Vtemp_h087d0095__0[5U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & __Vtemp_h087d0095__0[6U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & __Vtemp_h087d0095__0[7U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & __Vtemp_h087d0095__0[8U]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(1027,4, __Vtemp_hf2fb68af__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_hf68781c2__0, __Vtemp_hf2fb68af__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hf68781c2__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19892(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19892\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_hdef7170d__0;
    VlWide<33>/*1055:0*/ __Vtemp_h75992ad6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ade70a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h563428b0__0;
    VlWide<513>/*16415:0*/ __Vtemp_h7640ea3e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3494e73d__0;
    VlWide<513>/*16415:0*/ __Vtemp_he50ae235__0;
    VlWide<513>/*16415:0*/ __Vtemp_h1783d5fc__0;
    VlWide<130>/*4159:0*/ __Vtemp_he8323932__0;
    VlWide<130>/*4159:0*/ __Vtemp_h15970b9a__0;
    VlWide<130>/*4159:0*/ __Vtemp_he75aa0c6__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5ed75425__0;
    VlWide<130>/*4159:0*/ __Vtemp_h87f2f2be__0;
    // Body
    VL_EXTEND_WI(1027,4, __Vtemp_hdef7170d__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_h75992ad6__0, __Vtemp_hdef7170d__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h75992ad6__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3ade70a2__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h563428b0__0, __Vtemp_hc961d23f__1, 
                  (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[0U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h563428b0__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[1U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h563428b0__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h3ade70a2__0[2U] : 0U)) 
                 & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                        ? __Vtemp_h563428b0__0[2U] : 0U))));
    VL_EXTEND_WI(16387,4, __Vtemp_h7640ea3e__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_SHIFTL_WWI(16387,16387,14, __Vtemp_h3494e73d__0, __Vtemp_h7640ea3e__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16387, __Vtemp_he50ae235__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h3494e73d__0, VTestHarness__ConstPool__CONST_h1ce4d640_0);
    VL_AND_W(513, __Vtemp_h1783d5fc__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_he50ae235__0);
    VL_SEL_WWII(4160,16387, __Vtemp_he8323932__0, __Vtemp_h1783d5fc__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_h15970b9a__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_opcodes, __Vtemp_he8323932__0);
    VL_SEL_WWII(4160,16399, __Vtemp_he75aa0c6__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h5ed75425__0, __Vtemp_he75aa0c6__0);
    VL_AND_W(130, __Vtemp_h87f2f2be__0, __Vtemp_h15970b9a__0, __Vtemp_h5ed75425__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_opcodes_T_2, __Vtemp_h87f2f2be__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19893(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19893\n"); );
    // Init
    VlWide<513>/*16415:0*/ __Vtemp_h126c34bf__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3eef71be__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha88cfde8__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha5a0173d__0;
    VlWide<130>/*4159:0*/ __Vtemp_h95e4b022__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb5d2b5b5__0;
    VlWide<130>/*4159:0*/ __Vtemp_he75aa0c6__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5ed75425__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0889dc81__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_h126c34bf__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_SHIFTL_WWI(16386,16386,14, __Vtemp_h3eef71be__0, __Vtemp_h126c34bf__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_COND_WIWW(16386, __Vtemp_ha88cfde8__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1))), __Vtemp_h3eef71be__0, VTestHarness__ConstPool__CONST_h4c3142bc_0);
    VL_AND_W(513, __Vtemp_ha5a0173d__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_ha88cfde8__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h95e4b022__0, __Vtemp_ha5a0173d__0, 0U, 0x1040U);
    VL_OR_W(130, __Vtemp_hb5d2b5b5__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes, __Vtemp_h95e4b022__0);
    VL_SEL_WWII(4160,16399, __Vtemp_he75aa0c6__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23, 0U, 0x1040U);
    VL_NOT_W(130, __Vtemp_h5ed75425__0, __Vtemp_he75aa0c6__0);
    VL_AND_W(130, __Vtemp_h0889dc81__0, __Vtemp_hb5d2b5b5__0, __Vtemp_h5ed75425__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2, __Vtemp_h0889dc81__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___timecmp_0_T 
        = (((QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7)
                                ? (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                           >> 0x38U))
                                : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                           >> 0x38U))) 
                              << 0x18U) | ((0xff0000U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6)
                                                 ? (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                            >> 0x30U))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                               >> 0x28U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                                >> 0x20U))))))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3)
                                            ? (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                       >> 0x18U))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2)
                                                  ? (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                             >> 0x10U))
                                                  : (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready)
                                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0)))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19894(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19894\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_hb46d1b6e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h559b3653__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT___time_T_2 
        = (((QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15)
                                ? (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                           >> 0x38U))
                                : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                           >> 0x38U))) 
                              << 0x18U) | ((0xff0000U 
                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14)
                                                 ? (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                            >> 0x30U))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                               >> 0x28U))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                               >> 0x28U))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                                >> 0x20U))))))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11)
                                            ? (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                       >> 0x18U))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10)
                                                  ? (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                             >> 0x10U))
                                                  : (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                                >> 8U))
                                                     : (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8)
                                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_)))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    VL_EXTEND_WI(1027,4, __Vtemp_hb46d1b6e__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_h559b3653__0, __Vtemp_hb46d1b6e__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h559b3653__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19895(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19895\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h539b1bdf__0;
    VlWide<33>/*1055:0*/ __Vtemp_h8c6fc706__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ade70a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h787469a1__0;
    // Body
    VL_EXTEND_WI(1027,4, __Vtemp_h539b1bdf__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_h8c6fc706__0, __Vtemp_h539b1bdf__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h8c6fc706__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U])));
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3ade70a2__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h787469a1__0, __Vtemp_hc961d23f__1, 
                  (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                            >> 4U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[0U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h787469a1__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[1U] : 0U)) & 
           (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                ? __Vtemp_h787469a1__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h3ade70a2__0[2U] : 0U)) 
                 & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)))
                        ? __Vtemp_h787469a1__0[2U] : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_1672 
        = ((0xa2U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                               >> 3U))) ? (0U == (0x100U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
            : ((0xa1U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                   >> 3U))) ? (0U == 
                                               (0x100U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                : ((0xa0U == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 3U))) ? (0U 
                                                   == 
                                                   (0x100U 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                    : ((0x9fU == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                        ? (0U == (0x100U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U)))
                        : ((0x9eU == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                            ? (0U == (0x100U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 3U)))
                            : ((0x9dU == (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                ? (0U == (0x100U & 
                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U)))
                                : ((0x9cU == (0xffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    ? (0U == (0x100U 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 3U)))
                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_1665))))))));
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b6f_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h7e72c2c6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19896(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19896\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_he162ae24__0;
    VlWide<9>/*287:0*/ __Vtemp_h00eb0255__0;
    VlWide<9>/*287:0*/ __Vtemp_hb15fd381__0;
    VlWide<9>/*287:0*/ __Vtemp_h4bf33ce4__0;
    VlWide<9>/*287:0*/ __Vtemp_h31dc4d02__0;
    VlWide<9>/*287:0*/ __Vtemp_h4a66eba6__0;
    VlWide<9>/*287:0*/ __Vtemp_h70fbfe7d__0;
    VlWide<9>/*287:0*/ __Vtemp_h9d99cd53__0;
    VlWide<9>/*287:0*/ __Vtemp_h59e4f4ef__0;
    VlWide<9>/*287:0*/ __Vtemp_h17c9832b__0;
    VlWide<9>/*287:0*/ __Vtemp_h71ec715d__0;
    VlWide<9>/*287:0*/ __Vtemp_h64a5bce6__0;
    VlWide<9>/*287:0*/ __Vtemp_h2f24197b__0;
    VlWide<9>/*287:0*/ __Vtemp_h32a0a459__0;
    VlWide<9>/*287:0*/ __Vtemp_hc3e3e288__0;
    VlWide<9>/*287:0*/ __Vtemp_ha5d244b2__0;
    // Body
    __Vtemp_he162ae24__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_he162ae24__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h00eb0255__0, __Vtemp_he162ae24__0);
    __Vtemp_hb15fd381__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_hb15fd381__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h4bf33ce4__0, __Vtemp_hb15fd381__0);
    __Vtemp_h31dc4d02__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h31dc4d02__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h4a66eba6__0, __Vtemp_h31dc4d02__0);
    __Vtemp_h70fbfe7d__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h70fbfe7d__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h9d99cd53__0, __Vtemp_h70fbfe7d__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp_h00eb0255__0[0U])) ? 2U
            : ((4U == (7U & __Vtemp_h4bf33ce4__0[0U]))
                ? 1U : ((3U == (7U & __Vtemp_h4a66eba6__0[0U]))
                         ? 1U : ((2U == (7U & __Vtemp_h9d99cd53__0[0U]))
                                  ? 1U : 0U))));
    __Vtemp_h59e4f4ef__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h59e4f4ef__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h17c9832b__0, __Vtemp_h59e4f4ef__0);
    __Vtemp_h71ec715d__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h71ec715d__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h64a5bce6__0, __Vtemp_h71ec715d__0);
    __Vtemp_h2f24197b__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_h2f24197b__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_h32a0a459__0, __Vtemp_h2f24197b__0);
    __Vtemp_hc3e3e288__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                    << 0x1fU) | ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                                 >> 1U)));
    __Vtemp_hc3e3e288__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                   >> 1U));
    VL_EXTEND_WW(260,259, __Vtemp_ha5d244b2__0, __Vtemp_hc3e3e288__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp_h17c9832b__0[0U])) ? 2U
            : ((4U == (7U & __Vtemp_h64a5bce6__0[0U]))
                ? 1U : ((3U == (7U & __Vtemp_h32a0a459__0[0U]))
                         ? 1U : ((2U == (7U & __Vtemp_ha5d244b2__0[0U]))
                                  ? 1U : 0U))));
}

extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h3892cc72_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a540f1_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c4e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h003cb67b_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__19897(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__19897\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ade70a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h116ab4c3__0;
    VlWide<33>/*1055:0*/ __Vtemp_h2abd3d85__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc723df9a__0;
    VlWide<33>/*1055:0*/ __Vtemp_hbdbd6d79__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6982f515__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6515a157__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5edf7781__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3ade70a2__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h116ab4c3__0, __Vtemp_hc961d23f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[0U] : 0U)) & 
           (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                ? __Vtemp_h116ab4c3__0[0U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp_h3ade70a2__0[1U] : 0U)) & 
           (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                ? __Vtemp_h116ab4c3__0[1U] : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2[2U] 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight[2U] 
                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h3ade70a2__0[2U] : 0U)) 
                 & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h116ab4c3__0[2U] : 0U))));
    VL_EXTEND_WI(1027,4, __Vtemp_h2abd3d85__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp_hc723df9a__0, __Vtemp_h2abd3d85__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_hbdbd6d79__0, VTestHarness__ConstPool__CONST_h3892cc72_0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[0U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[0U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[0U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[1U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[1U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[1U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[1U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[2U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[2U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[2U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[2U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[3U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[3U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[3U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[3U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[4U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[4U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[4U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[4U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[5U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[5U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[5U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[5U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[6U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[6U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[6U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[6U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[7U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[7U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[7U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[7U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_hc723df9a__0[8U] : 
                     VTestHarness__ConstPool__CONST_hac7e6362_0[8U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_hbdbd6d79__0[8U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[8U])))));
    VL_EXTEND_WI(1028,5, __Vtemp_h6982f515__0, (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp_h6515a157__0, __Vtemp_h6982f515__0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp_h5edf7781__0, VTestHarness__ConstPool__CONST_h81905067_0, 
                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[1U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[1U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[1U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[1U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[1U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[1U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[2U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[2U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[2U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[2U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[2U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[2U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[3U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[3U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[3U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[3U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[3U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[3U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[4U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[4U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[4U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[4U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[4U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[4U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[5U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[5U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[5U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[5U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[5U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[5U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[6U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[6U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[6U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[6U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[6U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[6U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[7U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[7U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[7U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[7U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[7U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[7U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[8U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[8U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[8U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[8U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[8U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[9U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[9U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[9U] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[9U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[9U] : 
                       VTestHarness__ConstPool__CONST_h99cb7c89_0[9U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xaU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xaU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xaU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xaU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xaU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xbU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xbU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xbU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xbU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xbU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xcU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xcU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xcU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xcU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xcU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xdU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xdU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xdU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xdU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xdU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xeU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xeU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xeU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xeU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xeU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xfU] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0xfU] : 
                     VTestHarness__ConstPool__CONST_h003cb67b_0[0xfU]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0xfU]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0xfU])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0x10U] 
           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
               | (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)))
                      ? __Vtemp_h6515a157__0[0x10U]
                      : VTestHarness__ConstPool__CONST_h003cb67b_0[0x10U]))) 
              & (~ (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                    & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___d_first_T) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                        & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)))
                        ? __Vtemp_h5edf7781__0[0x10U]
                        : VTestHarness__ConstPool__CONST_h99cb7c89_0[0x10U])))));
}
