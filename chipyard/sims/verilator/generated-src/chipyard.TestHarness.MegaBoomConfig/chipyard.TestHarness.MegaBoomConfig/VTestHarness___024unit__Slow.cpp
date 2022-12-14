// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024unit.h"

void VTestHarness___024unit___ctor_var_reset(VTestHarness___024unit* vlSelf);

VTestHarness___024unit::VTestHarness___024unit(VTestHarness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestHarness___024unit___ctor_var_reset(this);
}

void VTestHarness___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestHarness___024unit::~VTestHarness___024unit() {
}
