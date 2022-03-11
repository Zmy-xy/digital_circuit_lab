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
    vlSelf->top__DOT____Vcellout__my_led__hex[0U] = 0xfcU;
    vlSelf->top__DOT____Vcellout__my_led__hex[1U] = 0x60U;
    vlSelf->top__DOT____Vcellout__my_led__hex[2U] = 0xdaU;
    vlSelf->top__DOT____Vcellout__my_led__hex[3U] = 0xf2U;
    vlSelf->top__DOT____Vcellout__my_led__hex[4U] = 0x66U;
    vlSelf->top__DOT____Vcellout__my_led__hex[5U] = 0xb6U;
    vlSelf->top__DOT____Vcellout__my_led__hex[6U] = 0xbeU;
    vlSelf->top__DOT____Vcellout__my_led__hex[7U] = 0xe0U;
    vlSelf->top__DOT____Vcellout__my_led__hex[8U] = 0xfeU;
    vlSelf->top__DOT____Vcellout__my_led__hex[9U] = 0xf6U;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xaU] = 0xeeU;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xbU] = 0x3eU;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xcU] = 0x9cU;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xdU] = 0x7aU;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xeU] = 0x9eU;
    vlSelf->top__DOT____Vcellout__my_led__hex[0xfU] = 0x8eU;
    vlSelf->top__DOT__hex[0xfU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xfU];
    vlSelf->top__DOT__hex[0xeU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xeU];
    vlSelf->top__DOT__hex[0xdU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xdU];
    vlSelf->top__DOT__hex[0xcU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xcU];
    vlSelf->top__DOT__hex[0xbU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xbU];
    vlSelf->top__DOT__hex[0xaU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xaU];
    vlSelf->top__DOT__hex[9U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [9U];
    vlSelf->top__DOT__hex[8U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [8U];
    vlSelf->top__DOT__hex[7U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [7U];
    vlSelf->top__DOT__hex[6U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [6U];
    vlSelf->top__DOT__hex[5U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [5U];
    vlSelf->top__DOT__hex[4U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [4U];
    vlSelf->top__DOT__hex[3U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [3U];
    vlSelf->top__DOT__hex[2U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [2U];
    vlSelf->top__DOT__hex[1U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [1U];
    vlSelf->top__DOT__hex[0U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0U];
    vlSelf->top__DOT__hex[0xfU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xfU];
    vlSelf->top__DOT__hex[0xeU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xeU];
    vlSelf->top__DOT__hex[0xdU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xdU];
    vlSelf->top__DOT__hex[0xcU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xcU];
    vlSelf->top__DOT__hex[0xbU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xbU];
    vlSelf->top__DOT__hex[0xaU] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0xaU];
    vlSelf->top__DOT__hex[9U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [9U];
    vlSelf->top__DOT__hex[8U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [8U];
    vlSelf->top__DOT__hex[7U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [7U];
    vlSelf->top__DOT__hex[6U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [6U];
    vlSelf->top__DOT__hex[5U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [5U];
    vlSelf->top__DOT__hex[4U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [4U];
    vlSelf->top__DOT__hex[3U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [3U];
    vlSelf->top__DOT__hex[2U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [2U];
    vlSelf->top__DOT__hex[1U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [1U];
    vlSelf->top__DOT__hex[0U] = vlSelf->top__DOT____Vcellout__my_led__hex
        [0U];
}

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__state = 0U;
    vlSelf->seg2 = 0xffU;
    vlSelf->seg1 = 0xffU;
    vlSelf->seg0 = 0xffU;
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->top__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__hex[__Vi0] = 0;
    }
    vlSelf->top__DOT__flag = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__my_led__hex[__Vi0] = 0;
    }
    vlSelf->top__DOT__state = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
