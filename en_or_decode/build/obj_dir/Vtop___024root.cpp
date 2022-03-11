// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
