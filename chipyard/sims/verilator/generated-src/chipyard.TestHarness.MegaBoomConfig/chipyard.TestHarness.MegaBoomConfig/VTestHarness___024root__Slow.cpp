// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

void VTestHarness___024root___ctor_var_reset(VTestHarness___024root* vlSelf);

VTestHarness___024root::VTestHarness___024root(VTestHarness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestHarness___024root___ctor_var_reset(this);
}

void VTestHarness___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestHarness___024root::~VTestHarness___024root() {
}
