// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd.h for the primary calling header

#ifndef VERILATED_VADD___024ROOT_H_
#define VERILATED_VADD___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vadd__Syms;
class Vadd_VerilatedVcd;


//----------

VL_MODULE(Vadd___024root) {
  public:

    // PORTS
    VL_IN8(in_x,2,0);
    VL_IN8(in_y,2,0);
    VL_IN8(op,2,0);
    VL_OUT8(out_s,2,0);
    VL_OUT8(out_c,0,0);
    VL_OUT8(Overflow,0,0);

    // LOCAL SIGNALS
    CData/*2:0*/ top__DOT__out_s_1;
    CData/*2:0*/ top__DOT__out_s_2;
    CData/*2:0*/ top__DOT__add1__DOT__x;
    CData/*2:0*/ top__DOT__divi__DOT__x;

    // INTERNAL VARIABLES
    Vadd__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vadd___024root);  ///< Copying not allowed
  public:
    Vadd___024root(const char* name);
    ~Vadd___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vadd__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
