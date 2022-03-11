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
    vlSelf->top__DOT__segs[0U] = 0x60U;
    vlSelf->top__DOT__segs[1U] = 0xdaU;
    vlSelf->top__DOT__segs[2U] = 0xf2U;
    vlSelf->top__DOT__segs[3U] = 0x66U;
    vlSelf->top__DOT__segs[4U] = 0xb6U;
    vlSelf->top__DOT__segs[5U] = 0xbeU;
    vlSelf->top__DOT__segs[6U] = 0xe0U;
    vlSelf->top__DOT__segs[7U] = 0xfeU;
    if (vlSelf->en) {
        vlSelf->y = 0U;
        vlSelf->y = (((((((((0x80U == (0x80U & (IData)(vlSelf->x))) 
                            | (0x40U == (0xc0U & (IData)(vlSelf->x)))) 
                           | (0x20U == (0xe0U & (IData)(vlSelf->x)))) 
                          | (0x10U == (0xf0U & (IData)(vlSelf->x)))) 
                         | (8U == (0xf8U & (IData)(vlSelf->x)))) 
                        | (4U == (0xfcU & (IData)(vlSelf->x)))) 
                       | (2U == (0xfeU & (IData)(vlSelf->x)))) 
                      | (1U == (IData)(vlSelf->x)))
                      ? ((0x80U == (0x80U & (IData)(vlSelf->x)))
                          ? 0xfU : ((0x40U == (0xc0U 
                                               & (IData)(vlSelf->x)))
                                     ? 0xeU : ((0x20U 
                                                == 
                                                (0xe0U 
                                                 & (IData)(vlSelf->x)))
                                                ? 0xdU
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelf->x)))
                                                    ? 0xcU
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0xf8U 
                                                      & (IData)(vlSelf->x)))
                                                     ? 0xbU
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0xfcU 
                                                       & (IData)(vlSelf->x)))
                                                      ? 0xaU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (0xfeU 
                                                        & (IData)(vlSelf->x)))
                                                       ? 9U
                                                       : 8U)))))))
                      : 0U);
    } else {
        vlSelf->y = 0U;
    }
    vlSelf->seg0 = ((8U & (IData)(vlSelf->y)) ? (0xffU 
                                                 & (~ 
                                                    vlSelf->top__DOT__segs
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->y))]))
                     : 3U);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
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
    vlSelf->en = 0;
    vlSelf->x = 0;
    vlSelf->y = 0;
    vlSelf->seg0 = 0;
    vlSelf->top__DOT__i = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__segs[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
