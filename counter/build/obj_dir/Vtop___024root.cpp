// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    IData/*25:0*/ __Vdly__top__DOT__count_clk;
    // Body
    __Vdly__top__DOT__count_clk = vlSelf->top__DOT__count_clk;
    if ((0x7a1200U == vlSelf->top__DOT__count_clk)) {
        vlSelf->clk_1s = (0x3fU & ((IData)(1U) + (IData)(vlSelf->clk_1s)));
        __Vdly__top__DOT__count_clk = 0U;
    } else {
        __Vdly__top__DOT__count_clk = (0x3ffffffU & 
                                       ((IData)(1U) 
                                        + vlSelf->top__DOT__count_clk));
    }
    vlSelf->top__DOT__count_clk = __Vdly__top__DOT__count_clk;
    vlSelf->seg1 = (0xffU & (~ ((9U >= (0xfU & VL_DIV_III(32, (IData)(vlSelf->clk_1s), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__segs
                                [(0xfU & VL_DIV_III(32, (IData)(vlSelf->clk_1s), (IData)(0xaU)))]
                                 : 0U)));
    vlSelf->seg0 = (0xffU & (~ ((9U >= (0xfU & VL_MODDIV_III(32, (IData)(vlSelf->clk_1s), (IData)(0xaU))))
                                 ? vlSelf->top__DOT__segs
                                [(0xfU & VL_MODDIV_III(32, (IData)(vlSelf->clk_1s), (IData)(0xaU)))]
                                 : 0U)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
