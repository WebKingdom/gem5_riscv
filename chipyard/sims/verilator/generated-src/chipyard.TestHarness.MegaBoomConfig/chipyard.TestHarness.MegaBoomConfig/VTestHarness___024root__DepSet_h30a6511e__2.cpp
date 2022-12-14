// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__151(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__151\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15087:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15090: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15090, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15098:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15111:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15122:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15125: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15125, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15133:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__152(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__152\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15146:11
done_reset
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15149: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15149, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15157:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15170:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15173: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15173, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15181:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__153(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__153\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15194:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15197: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15197, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15205:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15218:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15229:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15232: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15232, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15240:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__154(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__154\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15253:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15256: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15256, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15264:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15277:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15280: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15280, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15288:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__155(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__155\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15301:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15304: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15304, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15312:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15325:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15336:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15339: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15339, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15347:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__156(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__156\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15360:11
done_reset
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15363: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15363, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15371:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15384:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15387: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15387, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15395:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__157(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__157\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15408:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15411: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15411, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15419:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15432:11
done_reset
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15435: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15435, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15443:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (6U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__158(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__158\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15456:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15467:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15470: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15470, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15478:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15491:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15494: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15494, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15502:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__159(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__159\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15515:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15518: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15518, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15526:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15539:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15542: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15542, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15550:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15563:11
done_reset
    ) {
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__160(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__160\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15574:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15577: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15577, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15585:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15598:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15601: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15601, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15609:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15622:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15625: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15625, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__161(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__161\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15633:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15646:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15649: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15649, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15657:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15670:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15673: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15673, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__162(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__162\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15681:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15694:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15697: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15697, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15705:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15718:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15729:11
done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15732: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15732, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__163(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__163\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15740:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15753:11
done_reset
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15756: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15756, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15764:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15777:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15780: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15780, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__164(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__164\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15788:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U < (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15801:11
done_reset
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15804: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15804, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15812:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15825:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15828: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15828, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__165(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__165\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15836:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15849:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15852: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15852, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15860:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15873:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15884:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15887: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15887, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__166(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__166\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15895:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15908:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15911: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15911, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15919:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15932:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15935: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15935, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__167(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__167\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15943:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15956:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15967:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15970: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15970, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15978:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:15991:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:15994: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 15994, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__168(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__168\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16002:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16015:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16018: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16018, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16026:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16039:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16050:11
done_reset
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16053: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16053, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__169(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__169\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16061:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16074:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16077: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16077, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16085:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16098:11
done_reset
    ) {
        if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16101: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16101, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__170(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__170\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16109:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16122:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16133:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16144:11
done_reset
    ) {
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16155:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16158: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16158, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16166:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16179:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16182: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16182, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__171(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__171\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16190:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16203:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16206: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16206, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16214:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16227:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16230: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16230, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__172(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__172\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16238:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16251:11
done_reset
    ) {
        if (VL_UNLIKELY(((vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                          != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address) 
                         & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16254: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16254, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16262:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                            != vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16275:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16278: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16278, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16286:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__173(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__173\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16299:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16302: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16302, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16310:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16323:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16326: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16326, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16334:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16347:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16350: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16350, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__174(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__174\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16358:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16371:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16374: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16374, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16382:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16395:11
done_reset
    ) {
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16398: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16398, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16406:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__175(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__175\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hc775439e__0;
    VlWide<8>/*255:0*/ __Vtemp_hc775439e__1;
    VlWide<8>/*255:0*/ __Vtemp_h765efe11__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16419:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hc775439e__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp_hc775439e__0[0U] & 
                         (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16422: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16422, "");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16430:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_hc775439e__1, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & __Vtemp_hc775439e__1[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16443:11
done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_h765efe11__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ (__Vtemp_h765efe11__0[0U] 
                             | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16446: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16446, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__176(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__176\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h765efe11__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16454:11
verbose&&done_reset
    ) {
        VL_SHIFTR_WWI(256,256,8, __Vtemp_h765efe11__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (__Vtemp_h765efe11__0[0U] 
                               | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                     == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16467:11
done_reset
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16470: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16470, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__177(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__177\n"); );
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16478:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16491:11
done_reset
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16494: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16494, "");
        }
    }
}

extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h26258237_0;
extern const VlWide<32>/*1023:0*/ VTestHarness__ConstPool__CONST_h2f04fed6_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__178(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__178\n"); );
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
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16502:11
verbose&&done_reset
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16515:11
done_reset
    ) {
        __Vtemp_heb8ee6b8__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h7e113b58__0, __Vtemp_h78f666b9__0);
        if (VL_UNLIKELY(((~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & __Vtemp_h54f36914__0[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp_hfbbed7c1__0[0U]))
                                            ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp_h384f5560__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_h7e113b58__0[0U]))
                                              ? 5U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16518: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16518, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__179(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__179\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_heb8ee6b8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h54f36914__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4915f70a__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfbbed7c1__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb7e2d461__0;
    VlWide<32>/*1023:0*/ __Vtemp_h384f5560__0;
    VlWide<32>/*1023:0*/ __Vtemp_h78f666b9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7e113b58__0;
    VlWide<32>/*1023:0*/ __Vtemp_hfe84c414__0;
    VlWide<32>/*1023:0*/ __Vtemp_h02d68dc8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h881184f6__0;
    // Body
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16526:11
verbose&&done_reset
    ) {
        __Vtemp_heb8ee6b8__0[0U] = (VTestHarness__ConstPool__CONST_h26258237_0[0U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_heb8ee6b8__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_heb8ee6b8__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_heb8ee6b8__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h4915f70a__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h4915f70a__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h4915f70a__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_hb7e2d461__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_hb7e2d461__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_hb7e2d461__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
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
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[1U] = (VTestHarness__ConstPool__CONST_h26258237_0[1U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[1U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[2U] = (VTestHarness__ConstPool__CONST_h26258237_0[2U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[2U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[3U] = (VTestHarness__ConstPool__CONST_h26258237_0[3U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[3U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[4U] = (VTestHarness__ConstPool__CONST_h26258237_0[4U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[4U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[5U] = (VTestHarness__ConstPool__CONST_h26258237_0[5U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[5U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[6U] = (VTestHarness__ConstPool__CONST_h26258237_0[6U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[6U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[7U] = (VTestHarness__ConstPool__CONST_h26258237_0[7U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[7U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[8U] = (VTestHarness__ConstPool__CONST_h26258237_0[8U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[8U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[9U] = (VTestHarness__ConstPool__CONST_h26258237_0[9U] 
                                    & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        << 0x1fU) | 
                                       ((VTestHarness__ConstPool__CONST_h2f04fed6_0[9U] 
                                         & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
        __Vtemp_h78f666b9__0[0xaU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xaU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xaU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xbU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xbU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xbU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xcU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xcU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xcU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xdU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xdU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xdU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xeU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xeU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xeU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0xfU] = (VTestHarness__ConstPool__CONST_h26258237_0[0xfU] 
                                      & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                          << 0x1fU) 
                                         | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0xfU] 
                                             & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                            >> 1U)));
        __Vtemp_h78f666b9__0[0x10U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x10U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x10U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x11U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x11U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x11U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x12U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x12U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x12U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x13U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x13U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x13U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x14U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x14U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x14U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x14U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x15U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x15U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x15U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x15U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x16U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x16U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x16U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x16U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x17U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x17U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x17U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x17U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x18U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x18U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x18U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x18U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x19U] = (VTestHarness__ConstPool__CONST_h26258237_0[0x19U] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x19U] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x19U]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1aU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1aU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1aU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1aU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1bU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1bU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1bU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1bU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1cU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1cU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1cU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1cU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1dU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1dU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1dU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1dU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1eU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1eU] 
                                       & (((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                            & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                           << 0x1fU) 
                                          | ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1eU] 
                                              & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1eU]) 
                                             >> 1U)));
        __Vtemp_h78f666b9__0[0x1fU] = (VTestHarness__ConstPool__CONST_h26258237_0[0x1fU] 
                                       & ((VTestHarness__ConstPool__CONST_h2f04fed6_0[0x1fU] 
                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x1fU]) 
                                          >> 1U));
        VL_EXTEND_WW(1024,1023, __Vtemp_h7e113b58__0, __Vtemp_h78f666b9__0);
        if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp_h54f36914__0[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp_hfbbed7c1__0[0U]))
                                              ? 4U : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              __Vtemp_h384f5560__0[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp_h7e113b58__0[0U]))
                                                ? 5U
                                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v:16539:11
done_reset
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
        if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp_h881184f6__0[0U])) 
                         & (((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlSelf->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.MegaBoomConfig.harness.v:16542: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 16542, "");
        }
    }
}
