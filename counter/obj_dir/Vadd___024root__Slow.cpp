// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "Vadd___024root.h"
#include "Vadd__Syms.h"

//==========


void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf);

Vadd___024root::Vadd___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vadd___024root___ctor_var_reset(this);
}

void Vadd___024root::__Vconfigure(Vadd__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vadd___024root::~Vadd___024root() {
}

void Vadd___024root___settle__TOP__1(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__add1__DOT__x = (6U & (IData)(vlSelf->top__DOT__add1__DOT__x));
    vlSelf->top__DOT__divi__DOT__x = (1U | (IData)(vlSelf->top__DOT__divi__DOT__x));
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

void Vadd___024root___initial__TOP__2(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__add1__DOT__x = 0U;
    vlSelf->top__DOT__divi__DOT__x = 0U;
}

void Vadd___024root___eval_initial(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_initial\n"); );
    // Body
    Vadd___024root___initial__TOP__2(vlSelf);
}

void Vadd___024root___eval_settle(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_settle\n"); );
    // Body
    Vadd___024root___settle__TOP__1(vlSelf);
}

void Vadd___024root___final(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___final\n"); );
}

void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in_x = VL_RAND_RESET_I(3);
    vlSelf->in_y = VL_RAND_RESET_I(3);
    vlSelf->op = VL_RAND_RESET_I(3);
    vlSelf->out_s = VL_RAND_RESET_I(3);
    vlSelf->out_c = VL_RAND_RESET_I(1);
    vlSelf->Overflow = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__out_s_1 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__out_s_2 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__add1__DOT__x = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__divi__DOT__x = VL_RAND_RESET_I(3);
}
