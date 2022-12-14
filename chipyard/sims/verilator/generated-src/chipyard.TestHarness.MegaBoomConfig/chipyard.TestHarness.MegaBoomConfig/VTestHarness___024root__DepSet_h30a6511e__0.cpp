// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__47(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__47\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:28065:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((2U <= vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"*** FAILED *** (exit code = %10#)\n",
                       32,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                           >> 1U));
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:28076:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U <= vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:28079: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 28079, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__49(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__49\n"); );
    // Body
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState 
        = vlSelf->TestHarness__DOT__uart_sim_0__DOT__txState;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8512:11
done_reset
    ) {
    }
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6094:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6105:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6116:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6119: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6119, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__50(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__50\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6127:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6140:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6143: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6143, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6151:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6164:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6175:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6178: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6178, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6186:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__51(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__51\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6199:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6202: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6202, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6210:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6223:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6226: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6226, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__52(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__52\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6234:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6247:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6250: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6250, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6258:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6271:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6274: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6274, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__53(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__53\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6282:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6295:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6298: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6298, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6306:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6319:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6322: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6322, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6330:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__54(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__54\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6343:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6354:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6357: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6357, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6365:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6378:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6381: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6381, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6389:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__55(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__55\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6402:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6405: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6405, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6413:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6426:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6429: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6429, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6437:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__56(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__56\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6450:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6453: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6453, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6461:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6474:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6477: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6477, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6485:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__57(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__57\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6498:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6509:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6512: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6512, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6520:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6533:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6544:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6547: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6547, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__58(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__58\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6555:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6568:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6571: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6571, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6579:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6592:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6595: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6595, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__59(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__59\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6603:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6616:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6619: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6619, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6627:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6640:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6643: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6643, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__60(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__60\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6651:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6664:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6675:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6678: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6678, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6686:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__61(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__61\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6699:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6702: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6702, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6710:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6723:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6726: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6726, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6734:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__62(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__62\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6747:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6750: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6750, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6758:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6771:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6782:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6785: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6785, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__63(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__63\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6793:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6806:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6809: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6809, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6817:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6830:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6833: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6833, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__64(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__64\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6841:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6854:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6857: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6857, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6865:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6878:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6889:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6892: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6892, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__65(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__65\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6900:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6913:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6916: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6916, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6924:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6937:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6940: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6940, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__66(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__66\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6948:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6961:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6964: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6964, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6972:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6985:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:6996:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:6999: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 6999, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__67(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__67\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7007:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7020:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7023: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7023, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7031:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7044:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7047: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7047, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__68(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__68\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7055:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7068:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7071: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7071, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7079:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7092:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7103:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))))))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7106: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7106, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__69(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__69\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7114:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7127:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7130: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7130, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7138:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7151:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7154: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7154, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__70(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__70\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7162:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7175:11
done_reset
    ) {
        if (VL_UNLIKELY((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7178: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7178, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7186:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                         [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7199:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7210:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7223:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7234:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7245:11
verbose&&done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7258:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7269:11
done_reset
    ) {
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__72(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__72\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7629:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7640:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7651:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7662:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7665: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7665, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7673:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7686:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                          [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7689: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7689, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7697:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                            [vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1] 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__73(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__73\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7710:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7713: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7713, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7721:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7734:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7737: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7737, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7745:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7758:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                          != vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7761: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7761, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__74(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__74\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7769:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                            != vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7782:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7785: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7785, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7793:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7806:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7817:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7820: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7820, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__75(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__75\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hf5e95804__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7828:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7841:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7844: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7844, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7852:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7865:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7876:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7887:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hf5e95804__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((__Vtemp_hf5e95804__0[0U] & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7890: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7890, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__76(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__76\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hf5e95804__0;
    VlWide<8>/*255:0*/ __Vtemp_h7cbdc5c1__0;
    VlWide<8>/*255:0*/ __Vtemp_h7cbdc5c1__1;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7898:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hf5e95804__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & __Vtemp_hf5e95804__0[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7911:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_h7cbdc5c1__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY(((~ (__Vtemp_h7cbdc5c1__0[0U] 
                             | (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7914: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7914, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7922:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_h7cbdc5c1__1, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (__Vtemp_h7cbdc5c1__1[0U] 
                               | (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                     == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__77(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__77\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7935:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                              == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                   ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7938: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7938, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7946:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                  == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 4U : ((6U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__78(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__78\n"); );
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
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7959:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7962: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7962, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7970:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7983:11
done_reset
    ) {
        __Vtemp_h3aada89e__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h24786336__0, __Vtemp_h21c01531__0);
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                              == ((7U == (7U & __Vtemp_h38f875b5__0[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp_hedd45b60__0[0U]))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (7U & __Vtemp_h02cf9452__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_h24786336__0[0U]))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:7986: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 7986, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__79(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__79\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h3aada89e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h38f875b5__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3ef648d2__0;
    VlWide<32>/*1023:0*/ __Vtemp_hedd45b60__0;
    VlWide<32>/*1023:0*/ __Vtemp_h94bc1491__0;
    VlWide<32>/*1023:0*/ __Vtemp_h02cf9452__0;
    VlWide<32>/*1023:0*/ __Vtemp_h21c01531__0;
    VlWide<32>/*1023:0*/ __Vtemp_h24786336__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7e000346__0;
    VlWide<32>/*1023:0*/ __Vtemp_hca420489__0;
    VlWide<32>/*1023:0*/ __Vtemp_h648baf43__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:7994:11
verbose&&done_reset
    ) {
        __Vtemp_h3aada89e__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h3aada89e__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h3aada89e__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h3aada89e__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h3ef648d2__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h3ef648d2__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h3ef648d2__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h94bc1491__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h94bc1491__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h94bc1491__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h21c01531__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h21c01531__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h21c01531__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h24786336__0, __Vtemp_h21c01531__0);
        if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                == ((7U == (7U & __Vtemp_h38f875b5__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_hedd45b60__0[0U]))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_read) 
                                  == ((7U == (7U & 
                                              __Vtemp_h02cf9452__0[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp_h24786336__0[0U]))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:31)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:8007:11
done_reset
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
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size) 
                          != (0xfU & __Vtemp_h648baf43__0[0U])) 
                         & ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                      == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_source))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:8010: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 8010, "");
        }
    }
}
