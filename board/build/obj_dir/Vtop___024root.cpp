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
    if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__flag) 
                     & ((IData)(vlSelf->top__DOT__state) 
                        >> 1U)))) {
        vlSelf->top__DOT__my_ram__DOT__ram[vlSelf->top__DOT__my_ram__DOT__addr] 
            = vlSelf->top__DOT__asc;
        VL_WRITEF("asc %x\n",8,vlSelf->top__DOT__asc);
        vlSelf->top__DOT__my_ram__DOT__addr = (0xfffU 
                                               & ((0xdU 
                                                   == (IData)(vlSelf->top__DOT__asc))
                                                   ? 
                                                  ((IData)(0x47U) 
                                                   + 
                                                   ((IData)(0x47U) 
                                                    * 
                                                    (0xfffU 
                                                     & VL_DIV_III(12, (IData)(vlSelf->top__DOT__my_ram__DOT__addr), (IData)(0x47U)))))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__my_ram__DOT__addr))));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->top__DOT__flag) {
        if ((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                >> 1U)))) {
            vlSelf->top__DOT__state = 2U;
        } else if (((0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                     >> 1U))) & (0U 
                                                 == (IData)(vlSelf->top__DOT__state)))) {
            vlSelf->top__DOT__state = 1U;
        } else if (((0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                     >> 1U))) & (1U 
                                                 == (IData)(vlSelf->top__DOT__state)))) {
            vlSelf->top__DOT__state = 2U;
        } else if (((0U != (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                     >> 1U))) & (2U 
                                                 == (IData)(vlSelf->top__DOT__state)))) {
            vlSelf->top__DOT__state = 0U;
            vlSelf->top__DOT__cnt = (0xfffU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__cnt)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        vlSelf->top__DOT__cnt = 0U;
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
    vlSelf->top__DOT__dout = vlSelf->top__DOT__my_ram__DOT__ram
        [(0xfffU & ((0x3ffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
                    + ((IData)(0x47U) * (0x1fU & ((IData)(vlSelf->top__DOT__v_addr) 
                                                  >> 4U)))))];
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
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->top__DOT__asc = vlSelf->top__DOT__my_ps2asc__DOT__mem
        [(0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                   >> 1U))];
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
    if (vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid) {
        vlSelf->top__DOT__v_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                              - (IData)(0x24U)));
        vlSelf->VGA_BLANK_N = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid) 
                               & 1U);
    } else {
        vlSelf->top__DOT__v_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
    vlSelf->top__DOT__h_addr = ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid)
                                 ? (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                              - (IData)(0x91U)))
                                 : 0U);
    vlSelf->top__DOT__my_vmem__DOT__h_left = (0x3ffU 
                                              & ((VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)) 
                                                  << 3U) 
                                                 + 
                                                 VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))));
    vlSelf->top__DOT__vga_data = ((0xbU >= (0xfU & 
                                            ((IData)(vlSelf->top__DOT__h_addr) 
                                             - (IData)(vlSelf->top__DOT__my_vmem__DOT__h_left)))) 
                                  & (vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                     [((0U != (IData)(vlSelf->top__DOT__dout))
                                        ? (0xfffU & 
                                           ((0x1ffU 
                                             & ((IData)(vlSelf->top__DOT__v_addr) 
                                                - (0x1f0U 
                                                   & (IData)(vlSelf->top__DOT__v_addr)))) 
                                            + ((IData)(vlSelf->top__DOT__dout) 
                                               << 4U)))
                                        : 0U)] >> (0xfU 
                                                   & ((IData)(vlSelf->top__DOT__h_addr) 
                                                      - (IData)(vlSelf->top__DOT__my_vmem__DOT__h_left)))));
    vlSelf->VGA_R = (0xffU & (((IData)(vlSelf->top__DOT__vga_data)
                                ? 0xffffffU : 0U) >> 0x10U));
    vlSelf->VGA_G = (0xffU & (((IData)(vlSelf->top__DOT__vga_data)
                                ? 0xffffffU : 0U) >> 8U));
    vlSelf->VGA_B = ((IData)(vlSelf->top__DOT__vga_data)
                      ? 0xffU : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->button & 0xfeU))) {
        Verilated::overWidthError("button");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
