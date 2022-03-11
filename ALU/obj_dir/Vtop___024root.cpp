// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->out_c = (1U & (((IData)(vlSelf->in_x) + (IData)(vlSelf->in_y)) 
                           >> 8U));
    vlSelf->out_c = (1U & (((IData)(1U) + ((IData)(vlSelf->in_x) 
                                           + (0xffU 
                                              & (~ (IData)(vlSelf->in_y))))) 
                           >> 8U));
    vlSelf->top__DOT__out_s_2 = (0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->in_x) 
                                             + (~ (IData)(vlSelf->in_y)))));
    vlSelf->top__DOT__out_s_1 = (0xffU & ((IData)(vlSelf->in_x) 
                                          + (IData)(vlSelf->in_y)));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__out_s_2)))));
    vlSelf->Overflow = (((1U & ((IData)(vlSelf->in_x) 
                                >> 7U)) == (1U & ((IData)(vlSelf->in_y) 
                                                  >> 7U))) 
                        & ((1U & ((IData)(vlSelf->top__DOT__out_s_1) 
                                  >> 7U)) != (1U & 
                                              ((IData)(vlSelf->in_x) 
                                               >> 7U))));
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__out_s_1)))));
    vlSelf->out_s = (0xffU & ((4U & (IData)(vlSelf->op))
                               ? ((2U & (IData)(vlSelf->op))
                                   ? ((1U & (IData)(vlSelf->op))
                                       ? (((IData)(vlSelf->in_x) 
                                           == (IData)(vlSelf->in_y))
                                           ? 1U : 0U)
                                       : ((1U & (((IData)(vlSelf->top__DOT__out_s_2) 
                                                  >> 7U) 
                                                 ^ 
                                                 (((1U 
                                                    & ((IData)(vlSelf->in_x) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->in_y) 
                                                        >> 7U)))) 
                                                  & ((1U 
                                                      & ((IData)(vlSelf->top__DOT__out_s_2) 
                                                         >> 7U)) 
                                                     != 
                                                     (1U 
                                                      & ((IData)(vlSelf->in_x) 
                                                         >> 7U))))))
                                           ? 1U : 0U))
                                   : ((1U & (IData)(vlSelf->op))
                                       ? ((IData)(vlSelf->in_x) 
                                          ^ (IData)(vlSelf->in_y))
                                       : ((IData)(vlSelf->in_x) 
                                          | (IData)(vlSelf->in_y))))
                               : ((2U & (IData)(vlSelf->op))
                                   ? ((1U & (IData)(vlSelf->op))
                                       ? ((IData)(vlSelf->in_x) 
                                          & (IData)(vlSelf->in_y))
                                       : (~ (IData)(vlSelf->in_x)))
                                   : ((1U & (IData)(vlSelf->op))
                                       ? (IData)(vlSelf->top__DOT__out_s_2)
                                       : (IData)(vlSelf->top__DOT__out_s_1)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
