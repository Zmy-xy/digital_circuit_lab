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
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    if (vlSelf->top__DOT__flag) {
        if (VL_UNLIKELY((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                            >> 1U))))) {
            vlSelf->top__DOT__state = 1U;
            vlSelf->seg1 = 0xffU;
            vlSelf->seg0 = 0xffU;
            VL_WRITEF("state 1\n");
        } else if (VL_UNLIKELY(((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->top__DOT__buffer) 
                                            >> 1U))) 
                                & (0U == (IData)(vlSelf->top__DOT__state))))) {
            VL_WRITEF("state 0\n");
            vlSelf->top__DOT__state = 0U;
            vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__hex
                                     [(0xfU & ((IData)(vlSelf->top__DOT__buffer) 
                                               >> 5U))]));
            vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__hex
                                     [(0xfU & ((IData)(vlSelf->top__DOT__buffer) 
                                               >> 1U))]));
        } else if (VL_UNLIKELY(((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->top__DOT__buffer) 
                                            >> 1U))) 
                                & (1U == (IData)(vlSelf->top__DOT__state))))) {
            VL_WRITEF("state 2\n");
            vlSelf->top__DOT__state = 2U;
            vlSelf->seg1 = 0xffU;
            vlSelf->seg0 = 0xffU;
        } else if (VL_UNLIKELY(((0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                                 >> 1U))) 
                                & (2U == (IData)(vlSelf->top__DOT__state))))) {
            VL_WRITEF("state 0\n");
            vlSelf->top__DOT__state = 0U;
            vlSelf->seg1 = (0xffU & (~ vlSelf->top__DOT__hex
                                     [(0xfU & ((IData)(vlSelf->top__DOT__buffer) 
                                               >> 5U))]));
            vlSelf->seg0 = (0xffU & (~ vlSelf->top__DOT__hex
                                     [(0xfU & ((IData)(vlSelf->top__DOT__buffer) 
                                               >> 1U))]));
        }
    }
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
    } else {
        vlSelf->top__DOT__flag = 0U;
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("recieve %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__buffer) 
                                                   >> 1U)));
                    vlSelf->top__DOT__flag = 1U;
                }
                __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)))) {
                    vlSelf->top__DOT__buffer = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                                                 & (IData)(vlSelf->top__DOT__buffer)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1) 
                                                      << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
            }
        }
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
