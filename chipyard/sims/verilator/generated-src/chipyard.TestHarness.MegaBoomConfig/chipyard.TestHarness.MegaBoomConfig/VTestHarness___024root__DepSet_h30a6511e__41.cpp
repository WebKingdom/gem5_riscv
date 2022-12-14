// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4662(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4662\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:132951:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:132964:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:132967: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 132967, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:132975:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:132988:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:132991: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 132991, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4663(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4663\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:132999:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133012:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0x13U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                             & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                & (0U == (0x1ffff000U 
                                          & (0x10000000U 
                                             ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133015: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133015, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133023:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((0x13U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                               & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                                  & (0U == (0x1ffff000U 
                                            & (0x10000000U 
                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4664(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4664\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133036:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133039: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133039, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133047:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133060:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133063: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133063, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133071:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4665(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4665\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133084:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133087: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133087, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133095:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133108:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133111: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133111, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133119:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4666(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4666\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133132:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133135: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133135, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133143:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133156:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133159: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133159, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133167:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133180:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133183: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133183, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4667(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4667\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133191:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133204:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133207: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133207, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133215:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133228:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133231: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133231, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4668(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4668\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133239:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133252:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133255: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133255, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133263:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133276:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133279: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133279, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133287:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4669(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4669\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133300:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133303: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133303, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133311:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133324:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133327: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133327, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4670(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4670\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133335:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133348:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133351: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133351, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133359:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133372:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133375: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133375, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4671(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4671\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133383:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133396:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133399: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133399, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133407:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133420:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133423: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133423, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4672(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4672\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133431:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133444:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133447: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133447, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133455:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133468:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133471: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133471, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4673(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4673\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133479:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133492:11
done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                           & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1])) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133495: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133495, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133503:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                             & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133516:11
done_reset
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133519: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133519, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4674(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4674\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133527:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133540:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133543: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133543, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133551:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133564:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133567: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133567, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4675(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4675\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133575:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133588:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133591: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133591, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133599:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133612:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133615: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133615, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4676(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4676\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133623:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133636:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133639: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133639, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133647:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133660:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133663: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133663, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4677(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4677\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133671:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133684:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133687: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133687, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133695:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133708:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133711: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133711, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4678(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4678\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133719:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133732:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133735: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133735, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133743:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133756:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133759: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133759, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4679(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4679\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133767:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133780:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133783: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133783, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133791:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133804:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133807: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133807, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4680(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4680\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133815:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133828:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133831: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133831, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133839:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133852:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133855: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133855, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4681(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4681\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133863:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133876:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133879: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133879, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133887:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133900:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133903: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133903, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4682(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4682\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133911:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133924:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133927: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133927, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133935:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133948:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133951: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133951, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4683(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4683\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133959:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133972:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133975: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133975, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133983:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:133996:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:133999: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 133999, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4684(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4684\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134007:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134020:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134023: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134023, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134031:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134044:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134047: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134047, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4685(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4685\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134055:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134068:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134071: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134071, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134079:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134092:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134095: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134095, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4686(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4686\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134103:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134116:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134119: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134119, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134127:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134140:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134143: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134143, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4687(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4687\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134151:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134164:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134167: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134167, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134175:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134188:11
done_reset
    ) {
        if (VL_UNLIKELY(((0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134191: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134191, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4688(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4688\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134199:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0x13U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134212:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134215: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134215, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134223:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134236:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134239: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134239, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4689(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4689\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134247:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134260:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134263: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134263, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134271:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134284:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134287: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134287, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4690(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4690\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134295:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134308:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134311: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134311, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134319:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134332:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134335: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134335, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4691(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4691\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134343:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134356:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134359: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134359, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134367:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134380:11
done_reset
    ) {
        if (VL_UNLIKELY((((0x1fffffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                          != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134383: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134383, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4692(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4692\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134391:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((0x1fffffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address) 
                            != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134404:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134407: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134407, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134415:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134428:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134431: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134431, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4693(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4693\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134439:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134452:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134455: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134455, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134463:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134476:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134479: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134479, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4694(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4694\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134487:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134500:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__sink)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134503: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134503, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134511:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134524:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__denied)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134527: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134527, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4695(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4695\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134535:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134548:11
done_reset
    ) {
        if (VL_UNLIKELY((0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight 
                                      >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)) 
                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134551: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134551, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134559:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((0xfffffU & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight 
                                        >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134572:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((0xfffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight 
                                          >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))) 
                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134575: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134575, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4696(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4696\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134583:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((0xfffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight 
                                            >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))) 
                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134596:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134599: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134599, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4697(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4697\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134607:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134620:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134623: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134623, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4698(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4698\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0456b8f9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0ef5aa7__0;
    VlWide<3>/*95:0*/ __Vtemp_h30565c73__0;
    VlWide<3>/*95:0*/ __Vtemp_h97cb31e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f50d3c6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb0714085__0;
    VlWide<3>/*95:0*/ __Vtemp_hab7e2480__0;
    VlWide<3>/*95:0*/ __Vtemp_h1328f703__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134631:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134644:11
done_reset
    ) {
        __Vtemp_h0456b8f9__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h0456b8f9__0[1U] = 0U;
        __Vtemp_h0456b8f9__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_hf0ef5aa7__0, __Vtemp_h0456b8f9__0);
        __Vtemp_h30565c73__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h30565c73__0[1U] = 0U;
        __Vtemp_h30565c73__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_h97cb31e8__0, __Vtemp_h30565c73__0);
        __Vtemp_h1f50d3c6__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h1f50d3c6__0[1U] = 0U;
        __Vtemp_h1f50d3c6__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_hb0714085__0, __Vtemp_h1f50d3c6__0);
        __Vtemp_hab7e2480__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_hab7e2480__0[1U] = 0U;
        __Vtemp_hab7e2480__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_h1328f703__0, __Vtemp_hab7e2480__0);
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & __Vtemp_hf0ef5aa7__0[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp_h97cb31e8__0[0U]))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp_hb0714085__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_h1328f703__0[0U]))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134647: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134647, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4699(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4699\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0456b8f9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0ef5aa7__0;
    VlWide<3>/*95:0*/ __Vtemp_h30565c73__0;
    VlWide<3>/*95:0*/ __Vtemp_h97cb31e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f50d3c6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb0714085__0;
    VlWide<3>/*95:0*/ __Vtemp_hab7e2480__0;
    VlWide<3>/*95:0*/ __Vtemp_h1328f703__0;
    VlWide<3>/*95:0*/ __Vtemp_h65822bf7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf2e8fc24__0;
    VlWide<3>/*95:0*/ __Vtemp_h0b9d94b4__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134655:11
verbose&&done_reset
    ) {
        __Vtemp_h0456b8f9__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h0456b8f9__0[1U] = 0U;
        __Vtemp_h0456b8f9__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_hf0ef5aa7__0, __Vtemp_h0456b8f9__0);
        __Vtemp_h30565c73__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h30565c73__0[1U] = 0U;
        __Vtemp_h30565c73__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_h97cb31e8__0, __Vtemp_h30565c73__0);
        __Vtemp_h1f50d3c6__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_h1f50d3c6__0[1U] = 0U;
        __Vtemp_h1f50d3c6__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_hb0714085__0, __Vtemp_h1f50d3c6__0);
        __Vtemp_hab7e2480__0[0U] = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                          >> 1U));
        __Vtemp_hab7e2480__0[1U] = 0U;
        __Vtemp_hab7e2480__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_h1328f703__0, __Vtemp_hab7e2480__0);
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp_hf0ef5aa7__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_h97cb31e8__0[0U]))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              __Vtemp_hb0714085__0[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp_h1328f703__0[0U]))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134668:11
done_reset
    ) {
        VL_SHIFTR_WWI(80,80,8, __Vtemp_h65822bf7__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp_hf2e8fc24__0[0U] = (7U & (__Vtemp_h65822bf7__0[0U] 
                                          >> 1U));
        __Vtemp_hf2e8fc24__0[1U] = 0U;
        __Vtemp_hf2e8fc24__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_h0b9d94b4__0, __Vtemp_hf2e8fc24__0);
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp_h0b9d94b4__0[0U])) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134671: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134671, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4700(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4700\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h65822bf7__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ab63a9d__0;
    VlWide<3>/*95:0*/ __Vtemp_hfbe31652__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134679:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(80,80,8, __Vtemp_h65822bf7__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp_h5ab63a9d__0[0U] = (7U & (__Vtemp_h65822bf7__0[0U] 
                                          >> 1U));
        __Vtemp_h5ab63a9d__0[1U] = 0U;
        __Vtemp_h5ab63a9d__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_hfbe31652__0, __Vtemp_h5ab63a9d__0);
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_hfbe31652__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134692:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_in_a_ready))) 
                         & (((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134695: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134695, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4701(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4701\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134703:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid)) 
                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source) 
                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_d_ready)) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_in_a_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134714:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? (0xfffffU & ((IData)(1U) 
                                               << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                : 0U) != ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                           ? (0xfffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                           : 0U)) | 
                             (~ (IData)((0U != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                                 ? 
                                                (0xfffffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                                 : 0U)))))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134717: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134717, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4702(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4702\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134725:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                  ? (0xfffffU & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                  : 0U) != ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                              & (0U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))) 
                                             & (6U 
                                                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                             ? (0xfffffU 
                                                & ((IData)(1U) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))
                                             : 0U)) 
                               | (~ (IData)((0U != 
                                             (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar_auto_out_1_a_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1)))
                                               ? (0xfffffU 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_source)))
                                               : 0U))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134738:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134741: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134741, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134749:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4703(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4703\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha73769c8__0;
    VlWide<3>/*95:0*/ __Vtemp_hce656370__0;
    VlWide<3>/*95:0*/ __Vtemp_he941bbf0__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134762:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (0xfffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1 
                                         >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data)))) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134765: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134765, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134773:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (0xfffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1 
                                           >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134786:11
done_reset
    ) {
        VL_SHIFTR_WWI(80,80,8, __Vtemp_ha73769c8__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp_hce656370__0[0U] = (7U & (__Vtemp_ha73769c8__0[0U] 
                                          >> 1U));
        __Vtemp_hce656370__0[1U] = 0U;
        __Vtemp_hce656370__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_he941bbf0__0, __Vtemp_hce656370__0);
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp_he941bbf0__0[0U])) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134789: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134789, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4704(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4704\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha73769c8__0;
    VlWide<3>/*95:0*/ __Vtemp_hce656370__0;
    VlWide<3>/*95:0*/ __Vtemp_he941bbf0__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134797:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(80,80,8, __Vtemp_ha73769c8__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__sourceIdMap_bundleIn_0_d_bits_source_MPORT_data) 
                       << 2U));
        __Vtemp_hce656370__0[0U] = (7U & (__Vtemp_ha73769c8__0[0U] 
                                          >> 1U));
        __Vtemp_hce656370__0[1U] = 0U;
        __Vtemp_hce656370__0[2U] = 0U;
        VL_EXTEND_WW(80,79, __Vtemp_he941bbf0__0, __Vtemp_hce656370__0);
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp_he941bbf0__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134810:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog_1 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:134813: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.picker.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 134813, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:134821:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__watchdog_1 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at MemoryBus.scala:47:50)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613089:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613092: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613092, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4705(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4705\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613100:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613113:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613116: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613116, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613124:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613137:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613140: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613140, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613148:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4706(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4706\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613161:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613164: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613164, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613172:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613185:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613188: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613188, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4707(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4707\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613196:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613209:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613212: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613212, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613220:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613233:11
done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                           & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1])) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613236: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613236, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4708(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4708\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613244:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                             & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613257:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613260: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613260, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613268:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613281:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613284: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613284, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4709(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4709\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613292:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613305:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613308: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613308, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613316:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613329:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613332: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613332, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4710(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4710\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613340:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613353:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613356: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613356, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613364:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613377:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613380: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613380, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4711(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4711\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613388:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613401:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613404: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613404, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613412:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613425:11
done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                           & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1])) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613428: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613428, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4712(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4712\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613436:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                             & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613449:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                             & ((0U == (0x1fff0000U 
                                        & (0x20000U 
                                           ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                | (0U == (0x1ffff000U 
                                          & (0x10000000U 
                                             ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613452: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613452, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613460:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               & ((0U == (0x1fff0000U 
                                          & (0x20000U 
                                             ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))) 
                                  | (0U == (0x1ffff000U 
                                            & (0x10000000U 
                                               ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4713(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4713\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613473:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613476: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613476, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613484:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613497:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613500: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613500, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4714(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4714\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613508:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613521:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613524: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613524, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613532:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613545:11
done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                           & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1])) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613548: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613548, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4715(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4715\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613556:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                             & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613569:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                             & (0U == (0x1ffff000U 
                                       & (0x10000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613572: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613572, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613580:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               & (0U == (0x1ffff000U 
                                         & (0x10000000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4716(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4716\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613593:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613596: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613596, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613604:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613617:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613620: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613620, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4717(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4717\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613628:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613641:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613644: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613644, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613652:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613665:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                             & (0U == (0x1ffff000U 
                                       & (0x10000000U 
                                          ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613668: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613668, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4718(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4718\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613676:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)) 
                               & (0U == (0x1ffff000U 
                                         & (0x10000000U 
                                            ^ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613689:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613692: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613692, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613700:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4719(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4719\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613713:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613716: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613716, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613724:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613737:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613740: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613740, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613748:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4720(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4720\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613761:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613764: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613764, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613772:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613785:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613788: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613788, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613796:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4721(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4721\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613809:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613812: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613812, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613820:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613833:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613836: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613836, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613844:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4722(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4722\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613857:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613860: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613860, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613868:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613881:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613884: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613884, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613892:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4723(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4723\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613905:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613908: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613908, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613916:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613929:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613932: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613932, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613940:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4724(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4724\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613953:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613956: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613956, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613964:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613977:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:613980: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 613980, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:613988:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4725(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4725\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614001:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614004: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614004, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614012:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614025:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614028: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614028, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614036:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4726(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4726\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614049:11
done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                           & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1])) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614052: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614052, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614060:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker_auto_out_a_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork_auto_out_a_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F0) 
                             & ((0xbU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)) 
                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_corrupt
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value])) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly___05F1) 
                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__io_a_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614073:11
done_reset
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614076: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614076, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4727(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4727\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614084:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614097:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614100: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614100, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614108:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614121:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614124: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614124, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4728(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4728\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614132:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614145:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614148: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614148, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614156:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614169:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614172: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614172, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4729(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4729\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614180:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614193:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614196: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614196, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614204:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614217:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614220: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614220, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4730(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4730\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614228:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614241:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614244: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614244, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614252:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614265:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614268: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614268, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4731(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4731\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614276:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614289:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614292: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614292, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614300:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614313:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614316: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614316, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4732(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4732\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614324:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614337:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614340: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614340, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614348:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614361:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614364: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614364, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4733(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4733\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614372:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614385:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614388: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614388, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614396:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614409:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614412: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614412, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4734(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4734\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614420:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614433:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614436: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614436, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614444:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614457:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614460: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614460, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4735(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4735\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614468:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614481:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614484: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614484, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614492:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:614505:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tsi_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:614508: Assertion failed in %NTestHarness.chiptop.system.tsi_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 614508, "");
        }
    }
}
