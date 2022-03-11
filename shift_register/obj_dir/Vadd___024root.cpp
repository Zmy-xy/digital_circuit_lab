// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "Vadd___024root.h"
#include "Vadd__Syms.h"

//==========

VL_INLINE_OPT void Vadd___024root___combo__TOP__3(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->out_c = (1U & (((IData)(vlSelf->in_x) + (IData)(vlSelf->in_y)) 
                           >> 3U));
    vlSelf->out_c = (1U & (((IData)(vlSelf->in_x) + 
                            (7U & (~ (IData)(vlSelf->in_y)))) 
                           >> 3U));
    vlSelf->top__DOT__out_s_1 = (7U & ((IData)(vlSelf->in_x) 
                                       + (IData)(vlSelf->in_y)));
    vlSelf->top__DOT__out_s_2 = (7U & ((IData)(vlSelf->in_x) 
                                       + (~ (IData)(vlSelf->in_y))));
    vlSelf->Overflow = (((1U & ((IData)(vlSelf->in_x) 
                                >> 2U)) == (1U & ((IData)(vlSelf->in_y) 
                                                  >> 2U))) 
                        & ((1U & ((IData)(vlSelf->top__DOT__out_s_1) 
                                  >> 2U)) != (1U & 
                                              ((IData)(vlSelf->in_x) 
                                               >> 2U))));
    vlSelf->out_s = (7U & ((4U & (IData)(vlSelf->op))
                            ? ((2U & (IData)(vlSelf->op))
                                ? ((1U & (IData)(vlSelf->op))
                                    ? (((IData)(vlSelf->in_x) 
                                        == (IData)(vlSelf->in_y))
                                        ? 1U : 0U) : 
                                   (VL_LTS_III(1,3,3, (IData)(vlSelf->in_x), (IData)(vlSelf->in_y))
                                     ? 1U : 0U)) : 
                               ((1U & (IData)(vlSelf->op))
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
    vlSelf->Overflow = (((1U & ((IData)(vlSelf->in_x) 
                                >> 2U)) == (1U & (~ 
                                                  ((IData)(vlSelf->in_y) 
                                                   >> 2U)))) 
                        & ((1U & ((IData)(vlSelf->top__DOT__out_s_2) 
                                  >> 2U)) != (1U & 
                                              ((IData)(vlSelf->in_x) 
                                               >> 2U))));
}

void Vadd___024root___eval(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval\n"); );
    // Body
    Vadd___024root___combo__TOP__3(vlSelf);
}

QData Vadd___024root___change_request_1(Vadd___024root* vlSelf);

VL_INLINE_OPT QData Vadd___024root___change_request(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___change_request\n"); );
    // Body
    return (Vadd___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vadd___024root___change_request_1(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vadd___024root___eval_debug_assertions(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->in_x & 0xf8U))) {
        Verilated::overWidthError("in_x");}
    if (VL_UNLIKELY((vlSelf->in_y & 0xf8U))) {
        Verilated::overWidthError("in_y");}
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
