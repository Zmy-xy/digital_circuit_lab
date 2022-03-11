// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(seg0,7,0);
    VL_OUT8(seg1,7,0);
    VL_OUT8(seg2,7,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__flag;
    CData/*1:0*/ top__DOT__state;
    CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
    SData/*9:0*/ top__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 16> top__DOT__hex;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*7:0*/, 16> top__DOT____Vcellout__my_led__hex;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
