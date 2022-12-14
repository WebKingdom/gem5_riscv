// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestHarness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS___024UNIT_H_
#define VERILATED_VTESTHARNESS___024UNIT_H_  // guard

#include "verilated.h"

class VTestHarness__Syms;

class VTestHarness___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestHarness__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestHarness___024unit(VTestHarness__Syms* symsp, const char* name);
    ~VTestHarness___024unit();
    VL_UNCOPYABLE(VTestHarness___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
