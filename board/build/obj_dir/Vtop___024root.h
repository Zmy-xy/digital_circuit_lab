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
    VL_IN8(button,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(VGA_CLK,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);

    // LOCAL SIGNALS
    CData/*1:0*/ top__DOT__state;
    CData/*0:0*/ top__DOT__flag;
    CData/*7:0*/ top__DOT__asc;
    CData/*7:0*/ top__DOT__dout;
    CData/*0:0*/ top__DOT__vga_data;
    CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*9:0*/ top__DOT__buffer;
    SData/*11:0*/ top__DOT__cnt;
    SData/*9:0*/ top__DOT__h_addr;
    SData/*9:0*/ top__DOT__v_addr;
    SData/*11:0*/ top__DOT__my_ram__DOT__addr;
    SData/*9:0*/ top__DOT__my_vmem__DOT__h_left;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__y_cnt;
    VlUnpacked<CData/*7:0*/, 256> top__DOT__my_ps2asc__DOT__mem;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__my_ram__DOT__ram;
    VlUnpacked<SData/*11:0*/, 4096> top__DOT__my_vmem__DOT__vga_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
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
