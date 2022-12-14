// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3587(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3587\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77567:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77570: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77570, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77578:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77591:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77594: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77594, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77602:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3588(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3588\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77615:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77618: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77618, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77626:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77639:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77642: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77642, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77650:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3589(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3589\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77663:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77666: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77666, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77674:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77687:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77690: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77690, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77698:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3590(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3590\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he1daaea2__0;
    VlWide<3>/*95:0*/ __Vtemp_he1daaea2__1;
    VlWide<3>/*95:0*/ __Vtemp_h66dadeec__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77711:11
done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_he1daaea2__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp_he1daaea2__0[0U] & 
                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77714: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77714, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77722:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_he1daaea2__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & __Vtemp_he1daaea2__1[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77735:11
done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_h66dadeec__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ (__Vtemp_h66dadeec__0[0U] 
                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77738: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77738, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3591(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3591\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h66dadeec__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77746:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_h66dadeec__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (__Vtemp_h66dadeec__0[0U] 
                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77759:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                              == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77762: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77762, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3592(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3592\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77770:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                  == ((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77783:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_size) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77786: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77786, "");
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b6f_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h7e72c2c6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3593(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3593\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h4174d6bf__0;
    VlWide<9>/*287:0*/ __Vtemp_h529eef51__0;
    VlWide<9>/*287:0*/ __Vtemp_h56fff178__0;
    VlWide<9>/*287:0*/ __Vtemp_hd9024863__0;
    VlWide<9>/*287:0*/ __Vtemp_h5570fbc3__0;
    VlWide<9>/*287:0*/ __Vtemp_h88927f22__0;
    VlWide<9>/*287:0*/ __Vtemp_h3af90174__0;
    VlWide<9>/*287:0*/ __Vtemp_hb6826617__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77794:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_size) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77807:11
done_reset
    ) {
        __Vtemp_h4174d6bf__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_h529eef51__0, __Vtemp_h4174d6bf__0);
        __Vtemp_h56fff178__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_hd9024863__0, __Vtemp_h56fff178__0);
        __Vtemp_h5570fbc3__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_h88927f22__0, __Vtemp_h5570fbc3__0);
        __Vtemp_h3af90174__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_hb6826617__0, __Vtemp_h3af90174__0);
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                              == ((7U == (7U & __Vtemp_h529eef51__0[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp_hd9024863__0[0U]))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                == ((7U == (7U & __Vtemp_h88927f22__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_hb6826617__0[0U]))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77810: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77810, "");
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a54071_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h68a4b29f_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3594(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3594\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h4174d6bf__0;
    VlWide<9>/*287:0*/ __Vtemp_h529eef51__0;
    VlWide<9>/*287:0*/ __Vtemp_h56fff178__0;
    VlWide<9>/*287:0*/ __Vtemp_hd9024863__0;
    VlWide<9>/*287:0*/ __Vtemp_h5570fbc3__0;
    VlWide<9>/*287:0*/ __Vtemp_h88927f22__0;
    VlWide<9>/*287:0*/ __Vtemp_h3af90174__0;
    VlWide<9>/*287:0*/ __Vtemp_hb6826617__0;
    VlWide<17>/*543:0*/ __Vtemp_h8bc4405e__0;
    VlWide<17>/*543:0*/ __Vtemp_he8c71d1d__0;
    VlWide<17>/*543:0*/ __Vtemp_hdafdf13a__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77818:11
verbose&&done_reset
    ) {
        __Vtemp_h4174d6bf__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h4174d6bf__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_h529eef51__0, __Vtemp_h4174d6bf__0);
        __Vtemp_h56fff178__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h56fff178__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_hd9024863__0, __Vtemp_h56fff178__0);
        __Vtemp_h5570fbc3__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h5570fbc3__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_h88927f22__0, __Vtemp_h5570fbc3__0);
        __Vtemp_h3af90174__0[0U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[0U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[1U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[1U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[2U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[2U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[3U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[3U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[4U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[4U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[5U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[5U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[6U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[6U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[7U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[7U] 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3af90174__0[8U] = (VTestHarness__ConstPool__CONST_h52851b6f_0[8U] 
                                    & ((VTestHarness__ConstPool__CONST_h7e72c2c6_0[8U] 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U));
        VL_EXTEND_WW(260,259, __Vtemp_hb6826617__0, __Vtemp_h3af90174__0);
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                == ((7U == (7U & __Vtemp_h529eef51__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_hd9024863__0[0U]))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                                  == ((7U == (7U & 
                                              __Vtemp_h88927f22__0[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp_hb6826617__0[0U]))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77831:11
done_reset
    ) {
        VL_SHIFTR_WWI(520,520,10, __Vtemp_h8bc4405e__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp_he8c71d1d__0[0U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_h8bc4405e__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0U] 
                                         & __Vtemp_h8bc4405e__0[0U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[1U] = (VTestHarness__ConstPool__CONST_h00a54071_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_h8bc4405e__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_h8bc4405e__0[1U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[2U] = (VTestHarness__ConstPool__CONST_h00a54071_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_h8bc4405e__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_h8bc4405e__0[2U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[3U] = (VTestHarness__ConstPool__CONST_h00a54071_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_h8bc4405e__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_h8bc4405e__0[3U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[4U] = (VTestHarness__ConstPool__CONST_h00a54071_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_h8bc4405e__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_h8bc4405e__0[4U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[5U] = (VTestHarness__ConstPool__CONST_h00a54071_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_h8bc4405e__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_h8bc4405e__0[5U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[6U] = (VTestHarness__ConstPool__CONST_h00a54071_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_h8bc4405e__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_h8bc4405e__0[6U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[7U] = (VTestHarness__ConstPool__CONST_h00a54071_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_h8bc4405e__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_h8bc4405e__0[7U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[8U] = (VTestHarness__ConstPool__CONST_h00a54071_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_h8bc4405e__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_h8bc4405e__0[8U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[9U] = (VTestHarness__ConstPool__CONST_h00a54071_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                         & __Vtemp_h8bc4405e__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_h8bc4405e__0[9U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                           & __Vtemp_h8bc4405e__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                             & __Vtemp_h8bc4405e__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                           & __Vtemp_h8bc4405e__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                             & __Vtemp_h8bc4405e__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                           & __Vtemp_h8bc4405e__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                             & __Vtemp_h8bc4405e__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                           & __Vtemp_h8bc4405e__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                             & __Vtemp_h8bc4405e__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                           & __Vtemp_h8bc4405e__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                             & __Vtemp_h8bc4405e__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_h8bc4405e__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                             & __Vtemp_h8bc4405e__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0x10U] 
                                       & ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_h8bc4405e__0[0x10U]) 
                                          >> 1U));
        VL_EXTEND_WW(520,519, __Vtemp_hdafdf13a__0, __Vtemp_he8c71d1d__0);
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp_hdafdf13a__0[0U])) 
                         & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                    & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77834: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77834, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3595(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3595\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h8bc4405e__0;
    VlWide<17>/*543:0*/ __Vtemp_he8c71d1d__0;
    VlWide<17>/*543:0*/ __Vtemp_hdafdf13a__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77842:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(520,520,10, __Vtemp_h8bc4405e__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp_he8c71d1d__0[0U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_h8bc4405e__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0U] 
                                         & __Vtemp_h8bc4405e__0[0U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[1U] = (VTestHarness__ConstPool__CONST_h00a54071_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_h8bc4405e__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_h8bc4405e__0[1U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[2U] = (VTestHarness__ConstPool__CONST_h00a54071_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_h8bc4405e__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_h8bc4405e__0[2U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[3U] = (VTestHarness__ConstPool__CONST_h00a54071_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_h8bc4405e__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_h8bc4405e__0[3U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[4U] = (VTestHarness__ConstPool__CONST_h00a54071_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_h8bc4405e__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_h8bc4405e__0[4U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[5U] = (VTestHarness__ConstPool__CONST_h00a54071_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_h8bc4405e__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_h8bc4405e__0[5U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[6U] = (VTestHarness__ConstPool__CONST_h00a54071_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_h8bc4405e__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_h8bc4405e__0[6U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[7U] = (VTestHarness__ConstPool__CONST_h00a54071_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_h8bc4405e__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_h8bc4405e__0[7U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[8U] = (VTestHarness__ConstPool__CONST_h00a54071_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_h8bc4405e__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_h8bc4405e__0[8U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[9U] = (VTestHarness__ConstPool__CONST_h00a54071_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                         & __Vtemp_h8bc4405e__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_h8bc4405e__0[9U]) 
                                        >> 1U)));
        __Vtemp_he8c71d1d__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                           & __Vtemp_h8bc4405e__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                             & __Vtemp_h8bc4405e__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                           & __Vtemp_h8bc4405e__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                             & __Vtemp_h8bc4405e__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                           & __Vtemp_h8bc4405e__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                             & __Vtemp_h8bc4405e__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                           & __Vtemp_h8bc4405e__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                             & __Vtemp_h8bc4405e__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                           & __Vtemp_h8bc4405e__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                             & __Vtemp_h8bc4405e__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_h8bc4405e__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                             & __Vtemp_h8bc4405e__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_he8c71d1d__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0x10U] 
                                       & ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_h8bc4405e__0[0x10U]) 
                                          >> 1U));
        VL_EXTEND_WW(520,519, __Vtemp_hdafdf13a__0, __Vtemp_he8c71d1d__0);
        if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                  & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp_hdafdf13a__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77855:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_d_ready)) 
                             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_a_ready))) 
                         & (((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                 & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid)) 
                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77858: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77858, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77866:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid)) 
                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source) 
                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_d_ready)) 
                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_a_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3596(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3596\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h22dd098e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h3a8b96be__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_h8e2cef48__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__3;
    VlWide<4>/*127:0*/ __Vtemp_h52b935a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__4;
    VlWide<4>/*127:0*/ __Vtemp_h6f72d8fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__5;
    VlWide<4>/*127:0*/ __Vtemp_h7f127a78__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77877:11
done_reset
    ) {
        __Vtemp_hc961d23f__0[0U] = 1U;
        __Vtemp_hc961d23f__0[1U] = 0U;
        __Vtemp_hc961d23f__0[2U] = 0U;
        __Vtemp_hc961d23f__0[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h22dd098e__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        __Vtemp_hc961d23f__1[0U] = 1U;
        __Vtemp_hc961d23f__1[1U] = 0U;
        __Vtemp_hc961d23f__1[2U] = 0U;
        __Vtemp_hc961d23f__1[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h3a8b96be__0, __Vtemp_hc961d23f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp_hc961d23f__2[0U] = 1U;
        __Vtemp_hc961d23f__2[1U] = 0U;
        __Vtemp_hc961d23f__2[2U] = 0U;
        __Vtemp_hc961d23f__2[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h8e2cef48__0, __Vtemp_hc961d23f__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        if (VL_UNLIKELY(((~ ((0U != ((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                         ? __Vtemp_h22dd098e__0[0U]
                                         : 0U) ^ ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h3a8b96be__0[0U]
                                                   : 0U)) 
                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                           ? __Vtemp_h22dd098e__0[1U]
                                           : 0U) ^ 
                                         ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                           ? __Vtemp_h3a8b96be__0[1U]
                                           : 0U))) 
                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (1U & __Vtemp_h22dd098e__0[2U])
                                          : 0U) ^ (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   (1U 
                                                    & __Vtemp_h3a8b96be__0[2U])
                                                    : 0U)))) 
                             | (~ (IData)((0U != ((
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp_h8e2cef48__0[0U]
                                                     : 0U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp_h8e2cef48__0[1U]
                                                       : 0U)) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     (1U 
                                                      & __Vtemp_h8e2cef48__0[2U])
                                                      : 0U))))))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77880: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77880, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77888:11
verbose&&done_reset
    ) {
        __Vtemp_hc961d23f__3[0U] = 1U;
        __Vtemp_hc961d23f__3[1U] = 0U;
        __Vtemp_hc961d23f__3[2U] = 0U;
        __Vtemp_hc961d23f__3[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h52b935a1__0, __Vtemp_hc961d23f__3, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        __Vtemp_hc961d23f__4[0U] = 1U;
        __Vtemp_hc961d23f__4[1U] = 0U;
        __Vtemp_hc961d23f__4[2U] = 0U;
        __Vtemp_hc961d23f__4[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h6f72d8fb__0, __Vtemp_hc961d23f__4, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp_hc961d23f__5[0U] = 1U;
        __Vtemp_hc961d23f__5[1U] = 0U;
        __Vtemp_hc961d23f__5[2U] = 0U;
        __Vtemp_hc961d23f__5[3U] = 0U;
        VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f127a78__0, __Vtemp_hc961d23f__5, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source));
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((0U != ((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                           ? __Vtemp_h52b935a1__0[0U]
                                           : 0U) ^ 
                                         ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                           ? __Vtemp_h6f72d8fb__0[0U]
                                           : 0U)) | 
                                        ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                           ? __Vtemp_h52b935a1__0[1U]
                                           : 0U) ^ 
                                         ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                           ? __Vtemp_h6f72d8fb__0[1U]
                                           : 0U))) 
                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                            ? (1U & 
                                               __Vtemp_h52b935a1__0[2U])
                                            : 0U) ^ 
                                          ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                             & (0U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                            & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                            ? (1U & 
                                               __Vtemp_h6f72d8fb__0[2U])
                                            : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp_h7f127a78__0[0U]
                                                 : 0U) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp_h7f127a78__0[1U]
                                                   : 0U)) 
                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_valid) 
                                                  & (0U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 (1U 
                                                  & __Vtemp_h7f127a78__0[2U])
                                                  : 0U)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3597(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3597\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6afc251d__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77901:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U])))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77904: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77904, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77912:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != (
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U])))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77925:11
done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_h6afc251d__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ __Vtemp_h6afc251d__0[0U]) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77928: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77928, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3598(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3598\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6afc251d__0;
    VlWide<17>/*543:0*/ __Vtemp_hae3d5b92__0;
    VlWide<17>/*543:0*/ __Vtemp_hebe2f40d__0;
    VlWide<17>/*543:0*/ __Vtemp_h559235dd__0;
    VlWide<17>/*543:0*/ __Vtemp_hae3d5b92__1;
    VlWide<17>/*543:0*/ __Vtemp_h856b837d__0;
    VlWide<17>/*543:0*/ __Vtemp_h6701c2c5__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77936:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(65,65,7, __Vtemp_h6afc251d__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & (~ __Vtemp_h6afc251d__0[0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77949:11
done_reset
    ) {
        VL_SHIFTR_WWI(520,520,10, __Vtemp_hae3d5b92__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp_hebe2f40d__0[0U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_hae3d5b92__0[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0U] 
                                         & __Vtemp_hae3d5b92__0[0U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[1U] = (VTestHarness__ConstPool__CONST_h00a54071_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_hae3d5b92__0[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_hae3d5b92__0[1U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[2U] = (VTestHarness__ConstPool__CONST_h00a54071_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_hae3d5b92__0[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_hae3d5b92__0[2U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[3U] = (VTestHarness__ConstPool__CONST_h00a54071_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_hae3d5b92__0[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_hae3d5b92__0[3U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[4U] = (VTestHarness__ConstPool__CONST_h00a54071_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_hae3d5b92__0[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_hae3d5b92__0[4U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[5U] = (VTestHarness__ConstPool__CONST_h00a54071_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_hae3d5b92__0[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_hae3d5b92__0[5U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[6U] = (VTestHarness__ConstPool__CONST_h00a54071_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_hae3d5b92__0[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_hae3d5b92__0[6U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[7U] = (VTestHarness__ConstPool__CONST_h00a54071_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_hae3d5b92__0[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_hae3d5b92__0[7U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[8U] = (VTestHarness__ConstPool__CONST_h00a54071_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_hae3d5b92__0[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_hae3d5b92__0[8U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[9U] = (VTestHarness__ConstPool__CONST_h00a54071_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                         & __Vtemp_hae3d5b92__0[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_hae3d5b92__0[9U]) 
                                        >> 1U)));
        __Vtemp_hebe2f40d__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                           & __Vtemp_hae3d5b92__0[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                             & __Vtemp_hae3d5b92__0[0xaU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                           & __Vtemp_hae3d5b92__0[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                             & __Vtemp_hae3d5b92__0[0xbU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                           & __Vtemp_hae3d5b92__0[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                             & __Vtemp_hae3d5b92__0[0xcU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                           & __Vtemp_hae3d5b92__0[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                             & __Vtemp_hae3d5b92__0[0xdU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                           & __Vtemp_hae3d5b92__0[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                             & __Vtemp_hae3d5b92__0[0xeU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_hae3d5b92__0[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                             & __Vtemp_hae3d5b92__0[0xfU]) 
                                            >> 1U)));
        __Vtemp_hebe2f40d__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0x10U] 
                                       & ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_hae3d5b92__0[0x10U]) 
                                          >> 1U));
        VL_EXTEND_WW(520,519, __Vtemp_h559235dd__0, __Vtemp_hebe2f40d__0);
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp_h559235dd__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77952: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77952, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77960:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(520,520,10, __Vtemp_hae3d5b92__1, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp_h856b837d__0[0U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_hae3d5b92__1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0U] 
                                         & __Vtemp_hae3d5b92__1[0U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[1U] = (VTestHarness__ConstPool__CONST_h00a54071_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_hae3d5b92__1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[1U] 
                                         & __Vtemp_hae3d5b92__1[1U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[2U] = (VTestHarness__ConstPool__CONST_h00a54071_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_hae3d5b92__1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[2U] 
                                         & __Vtemp_hae3d5b92__1[2U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[3U] = (VTestHarness__ConstPool__CONST_h00a54071_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_hae3d5b92__1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[3U] 
                                         & __Vtemp_hae3d5b92__1[3U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[4U] = (VTestHarness__ConstPool__CONST_h00a54071_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_hae3d5b92__1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[4U] 
                                         & __Vtemp_hae3d5b92__1[4U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[5U] = (VTestHarness__ConstPool__CONST_h00a54071_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_hae3d5b92__1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[5U] 
                                         & __Vtemp_hae3d5b92__1[5U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[6U] = (VTestHarness__ConstPool__CONST_h00a54071_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_hae3d5b92__1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[6U] 
                                         & __Vtemp_hae3d5b92__1[6U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[7U] = (VTestHarness__ConstPool__CONST_h00a54071_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_hae3d5b92__1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[7U] 
                                         & __Vtemp_hae3d5b92__1[7U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[8U] = (VTestHarness__ConstPool__CONST_h00a54071_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_hae3d5b92__1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[8U] 
                                         & __Vtemp_hae3d5b92__1[8U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[9U] = (VTestHarness__ConstPool__CONST_h00a54071_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                         & __Vtemp_hae3d5b92__1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h68a4b29f_0[9U] 
                                         & __Vtemp_hae3d5b92__1[9U]) 
                                        >> 1U)));
        __Vtemp_h856b837d__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                           & __Vtemp_hae3d5b92__1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xaU] 
                                             & __Vtemp_hae3d5b92__1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                           & __Vtemp_hae3d5b92__1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xbU] 
                                             & __Vtemp_hae3d5b92__1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                           & __Vtemp_hae3d5b92__1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xcU] 
                                             & __Vtemp_hae3d5b92__1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                           & __Vtemp_hae3d5b92__1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xdU] 
                                             & __Vtemp_hae3d5b92__1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                           & __Vtemp_hae3d5b92__1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xeU] 
                                             & __Vtemp_hae3d5b92__1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a54071_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_hae3d5b92__1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0xfU] 
                                             & __Vtemp_hae3d5b92__1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h856b837d__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a54071_0[0x10U] 
                                       & ((VTestHarness__ConstPool__CONST_h68a4b29f_0[0x10U] 
                                           & __Vtemp_hae3d5b92__1[0x10U]) 
                                          >> 1U));
        VL_EXTEND_WW(520,519, __Vtemp_h6701c2c5__0, __Vtemp_h856b837d__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp_h6701c2c5__0[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3599(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3599\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77973:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((~ (IData)((0U != ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[2U])))) 
                              | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:77976: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 77976, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:77984:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ (((~ (IData)((0U != (
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[2U])))) 
                                | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28618:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28621: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28621, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28629:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3600(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3600\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28642:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6) 
                              & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28645: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28645, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28653:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6) 
                                & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28666:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28669: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28669, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3601(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3601\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28677:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28690:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28693: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28693, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28701:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28714:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28717: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28717, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3602(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3602\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28725:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28738:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28741: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28741, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28749:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28762:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28765: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28765, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3603(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3603\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28773:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28786:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28789: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28789, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28797:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28810:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28813: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28813, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3604(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3604\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28821:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28834:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6) 
                              & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28837: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28837, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28845:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6) 
                                & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28858:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28861: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28861, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3605(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3605\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28869:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28882:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28885: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28885, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28893:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28906:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28909: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28909, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3606(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3606\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28917:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28930:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28933: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28933, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28941:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28954:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28957: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28957, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3607(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3607\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28965:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28978:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:28981: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 28981, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:28989:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29002:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29005: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29005, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3608(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3608\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29013:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29026:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29029: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29029, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29037:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3609(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3609\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29050:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29053: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29053, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29061:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29074:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29077: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29077, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3610(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3610\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29085:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29098:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29101: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29101, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29109:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3611(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3611\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29122:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29125: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29125, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29133:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29146:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29149: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29149, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29157:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3612(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3612\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29170:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29173: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29173, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29181:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29194:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29197: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29197, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3613(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3613\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29205:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                  | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29218:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29221: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29221, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29229:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3614(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3614\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29242:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29245: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29245, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29253:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29266:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29269: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29269, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3615(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3615\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29277:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29290:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29293: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29293, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29301:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29314:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29317: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29317, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3616(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3616\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29325:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                  | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               & ((6U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_87))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29338:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29341: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29341, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29349:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3617(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3617\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29362:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29365: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29365, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29373:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29386:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29389: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29389, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3618(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3618\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29397:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29410:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29413: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29413, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29421:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29434:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29437: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29437, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3619(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3619\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29445:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29458:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29461: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29461, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29469:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3620(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3620\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29482:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29485: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29485, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29493:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29506:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29509: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29509, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3621(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3621\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29517:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29530:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29533: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29533, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29541:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29554:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29557: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29557, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3622(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3622\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29565:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29578:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29581: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29581, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29589:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3623(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3623\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29602:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29605: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29605, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29613:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29626:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29629: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29629, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3624(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3624\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29637:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (3U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29650:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29653: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29653, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29661:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29674:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29677: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29677, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3625(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3625\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29685:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29698:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29701: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29701, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29709:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___source_ok_T_6)) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3626(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3626\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29722:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          & (~ (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29725: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29725, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29733:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29746:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29749: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29749, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3627(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3627\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29757:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (1U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29770:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29773: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29773, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29781:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29794:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29797: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29797, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3628(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3628\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29805:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29818:11
done_reset
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode)) 
                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29821: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29821, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29829:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29842:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)) 
                                | (IData)(((0U == (0x70U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                           & (8U >= 
                                              (0xfU 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))))) 
                               | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                              | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                             | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29845: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29845, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3629(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3629\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29853:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)) 
                                  | (IData)(((0U == 
                                              (0x70U 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                             & (8U 
                                                >= 
                                                (0xfU 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))))) 
                                 | (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29866:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.top.v:29869: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.out_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v", 29869, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.top.v:29877:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:53:7)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}
