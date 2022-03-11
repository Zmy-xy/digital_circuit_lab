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
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__i = (0x3ffU & ((IData)(0xaU) 
                                     + (IData)(vlSelf->top__DOT__i)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    // Body
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 
            ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))
              ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))));
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
    } else {
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 
            (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_BLANK_N = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
                           & (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__vga_data = ((((((IData)(vlSelf->top__DOT__h_addr) 
                                      < (0x3ffU & ((IData)(0x80U) 
                                                   + (IData)(vlSelf->top__DOT__i)))) 
                                     & ((IData)(vlSelf->top__DOT__h_addr) 
                                        > (IData)(vlSelf->top__DOT__i))) 
                                    & (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                         ? (0x1ffU 
                                            & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                               - (IData)(0x24U)))
                                         : 0U) < (0x1ffU 
                                                  & ((IData)(0x80U) 
                                                     + (IData)(vlSelf->top__DOT__i))))) 
                                   & (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                        ? (0x1ffU & 
                                           ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                            - (IData)(0x24U)))
                                        : 0U) > (0x1ffU 
                                                 & (IData)(vlSelf->top__DOT__i))))
                                   ? vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                  [((0x3f80U & (((IData)(vlSelf->top__DOT__h_addr) 
                                                 - (IData)(vlSelf->top__DOT__i)) 
                                                << 7U)) 
                                    | (0x7fU & (((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                     - (IData)(0x24U)))
                                                  : 0U) 
                                                - (IData)(vlSelf->top__DOT__i))))]
                                   : 0U);
    vlSelf->VGA_R = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->top__DOT__vga_data);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->button) & (~ (IData)(vlSelf->__Vclklast__TOP__button)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->button) & (~ (IData)(vlSelf->__Vclklast__TOP__button))) 
         | ((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))))) {
        Vtop___024root___multiclk__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__button = vlSelf->button;
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
    if (VL_UNLIKELY((vlSelf->button & 0xfeU))) {
        Verilated::overWidthError("button");}
}
#endif  // VL_DEBUG
