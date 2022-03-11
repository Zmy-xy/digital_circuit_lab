// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__state),2);
            tracep->chgSData(oldp+1,(vlSelf->top__DOT__buffer),10);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__flag));
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__cnt),12);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__asc),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__dout),8);
            tracep->chgSData(oldp+6,(vlSelf->top__DOT__h_addr),10);
            tracep->chgSData(oldp+7,(vlSelf->top__DOT__v_addr),10);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__vga_data));
            tracep->chgCData(oldp+9,((0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                               >> 1U))),8);
            tracep->chgSData(oldp+10,((0xfffU & ((0x3ffU 
                                                  & VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
                                                 + 
                                                 ((IData)(0x47U) 
                                                  * 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__v_addr) 
                                                      >> 4U)))))),12);
            tracep->chgSData(oldp+11,((0x3ffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))),10);
            tracep->chgSData(oldp+12,((0x3ffU & ((IData)(vlSelf->top__DOT__v_addr) 
                                                 >> 4U))),10);
            tracep->chgSData(oldp+13,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
            tracep->chgSData(oldp+14,(vlSelf->top__DOT__my_vmem__DOT__h_left),10);
            tracep->chgSData(oldp+15,((0x1f0U & (IData)(vlSelf->top__DOT__v_addr))),9);
            tracep->chgSData(oldp+16,(((0U != (IData)(vlSelf->top__DOT__dout))
                                        ? (0xfffU & 
                                           ((0x1ffU 
                                             & ((IData)(vlSelf->top__DOT__v_addr) 
                                                - (0x1f0U 
                                                   & (IData)(vlSelf->top__DOT__v_addr)))) 
                                            + ((IData)(vlSelf->top__DOT__dout) 
                                               << 4U)))
                                        : 0U)),12);
            tracep->chgSData(oldp+17,(vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                      [((0U != (IData)(vlSelf->top__DOT__dout))
                                         ? (0xfffU 
                                            & ((0x1ffU 
                                                & ((IData)(vlSelf->top__DOT__v_addr) 
                                                   - 
                                                   (0x1f0U 
                                                    & (IData)(vlSelf->top__DOT__v_addr)))) 
                                               + ((IData)(vlSelf->top__DOT__dout) 
                                                  << 4U)))
                                         : 0U)]),12);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+20,((IData)((4U == 
                                             (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
            tracep->chgSData(oldp+21,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
            tracep->chgSData(oldp+22,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        }
        tracep->chgBit(oldp+25,(vlSelf->clk));
        tracep->chgBit(oldp+26,(vlSelf->rst));
        tracep->chgBit(oldp+27,(vlSelf->button));
        tracep->chgBit(oldp+28,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+29,(vlSelf->ps2_data));
        tracep->chgBit(oldp+30,(vlSelf->VGA_CLK));
        tracep->chgBit(oldp+31,(vlSelf->VGA_HSYNC));
        tracep->chgBit(oldp+32,(vlSelf->VGA_VSYNC));
        tracep->chgBit(oldp+33,(vlSelf->VGA_BLANK_N));
        tracep->chgCData(oldp+34,(vlSelf->VGA_R),8);
        tracep->chgCData(oldp+35,(vlSelf->VGA_G),8);
        tracep->chgCData(oldp+36,(vlSelf->VGA_B),8);
        tracep->chgSData(oldp+37,(vlSelf->top__DOT__my_ram__DOT__addr),12);
        tracep->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->rst)))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
