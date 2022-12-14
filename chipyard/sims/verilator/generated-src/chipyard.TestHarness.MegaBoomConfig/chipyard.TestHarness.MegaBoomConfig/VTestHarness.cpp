// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTestHarness::VTestHarness(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestHarness__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_success{vlSymsp->TOP.io_success}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestHarness::VTestHarness(const char* _vcname__)
    : VTestHarness(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestHarness::~VTestHarness() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTestHarness___024root___eval_initial(VTestHarness___024root* vlSelf);
void VTestHarness___024root___eval_settle(VTestHarness___024root* vlSelf);
void VTestHarness___024root___eval(VTestHarness___024root* vlSelf);
QData VTestHarness___024root___change_request(VTestHarness___024root* vlSelf);
#ifdef VL_DEBUG
void VTestHarness___024root___eval_debug_assertions(VTestHarness___024root* vlSelf);
#endif  // VL_DEBUG
void VTestHarness___024root___final(VTestHarness___024root* vlSelf);

static void _eval_initial_loop(VTestHarness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTestHarness___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTestHarness___024root___eval_settle(&(vlSymsp->TOP));
        VTestHarness___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VTestHarness___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 27639, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VTestHarness___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTestHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestHarness::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestHarness___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTestHarness___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VTestHarness___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/vm-user/chipyard/sims/verilator/generated-src/chipyard.TestHarness.MegaBoomConfig/chipyard.TestHarness.MegaBoomConfig.harness.v", 27639, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VTestHarness___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Utilities

const char* VTestHarness::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTestHarness::final() {
    VTestHarness___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestHarness::hierName() const { return vlSymsp->name(); }
const char* VTestHarness::modelName() const { return "VTestHarness"; }
unsigned VTestHarness::threads() const { return 1; }
