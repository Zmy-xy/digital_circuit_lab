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

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<6>/*191:0*/ __Vtemp2;
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f6d656dU;
    __Vtemp1[2U] = 0x75726365U;
    __Vtemp1[3U] = 0x7265736fU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 ,  &(vlSelf->top__DOT__my_ps2asc__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e747874U;
    __Vtemp2[1U] = 0x666f6e74U;
    __Vtemp2[2U] = 0x7667615fU;
    __Vtemp2[3U] = 0x7263652fU;
    __Vtemp2[4U] = 0x65736f75U;
    __Vtemp2[5U] = 0x72U;
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(6, __Vtemp2)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = (
                                                   (0x23U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                                   & (0x203U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = (
                                                   (0x90U 
                                                    < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                                   & (0x310U 
                                                      >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->top__DOT__asc = vlSelf->top__DOT__my_ps2asc__DOT__mem
        [(0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                   >> 1U))];
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
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
    vlSelf->button = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->top__DOT__state = 0;
    vlSelf->top__DOT__buffer = 0;
    vlSelf->top__DOT__flag = 0;
    vlSelf->top__DOT__cnt = 0;
    vlSelf->top__DOT__asc = 0;
    vlSelf->top__DOT__dout = 0;
    vlSelf->top__DOT__h_addr = 0;
    vlSelf->top__DOT__v_addr = 0;
    vlSelf->top__DOT__vga_data = 0;
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_ps2asc__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_ram__DOT__ram[__Vi0] = 0;
    }
    vlSelf->top__DOT__my_ram__DOT__addr = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__my_vmem__DOT__h_left = 0;
    vlSelf->top__DOT__my_keyboard__DOT__count = 0;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__my_keyboard__DOT____Vlvbound1 = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
