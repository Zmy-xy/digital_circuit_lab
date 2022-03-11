// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__segs[0U] = 0xfcU;
    vlSelf->top__DOT__segs[1U] = 0x60U;
    vlSelf->top__DOT__segs[2U] = 0xdaU;
    vlSelf->top__DOT__segs[3U] = 0xf2U;
    vlSelf->top__DOT__segs[4U] = 0x66U;
    vlSelf->top__DOT__segs[5U] = 0xb6U;
    vlSelf->top__DOT__segs[6U] = 0xbeU;
    vlSelf->top__DOT__segs[7U] = 0xe0U;
    vlSelf->top__DOT__segs[8U] = 0xfeU;
    vlSelf->top__DOT__segs[9U] = 0xf6U;
    vlSelf->top__DOT__segs[0xaU] = 0xeeU;
    vlSelf->top__DOT__segs[0xbU] = 0xfeU;
    vlSelf->top__DOT__segs[0xcU] = 0x9cU;
    vlSelf->top__DOT__segs[0xdU] = 0xfcU;
    vlSelf->top__DOT__segs[0xeU] = 0x9eU;
    vlSelf->top__DOT__segs[0xfU] = 0x8eU;
}

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    vlSelf->seg2 = 0xffU;
    vlSelf->Q = 1U;
}

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->x_8 = (1U & VL_REDXOR_32((0x1dU & (IData)(vlSelf->Q))));
    vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__segs
                             [(0xfU & ((IData)(vlSelf->Q) 
                                       >> 4U))]));
    vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__segs
                             [(0xfU & (IData)(vlSelf->Q))]));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__button = vlSelf->button;
    Vtop___024root___initial__TOP__3(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__4(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->button = 0;
    vlSelf->x_8 = 0;
    vlSelf->Q = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__segs[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
