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
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__h_addr),10);
            tracep->chgSData(oldp+1,(((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U)),10);
            tracep->chgSData(oldp+2,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
            tracep->chgSData(oldp+3,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
            tracep->chgSData(oldp+6,(((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid)
                                       ? (0x1ffU & 
                                          ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U)),9);
        }
        tracep->chgBit(oldp+7,(vlSelf->clk));
        tracep->chgBit(oldp+8,(vlSelf->rst));
        tracep->chgBit(oldp+9,(vlSelf->button));
        tracep->chgBit(oldp+10,(vlSelf->VGA_CLK));
        tracep->chgBit(oldp+11,(vlSelf->VGA_HSYNC));
        tracep->chgBit(oldp+12,(vlSelf->VGA_VSYNC));
        tracep->chgBit(oldp+13,(vlSelf->VGA_BLANK_N));
        tracep->chgCData(oldp+14,(vlSelf->VGA_R),8);
        tracep->chgCData(oldp+15,(vlSelf->VGA_G),8);
        tracep->chgCData(oldp+16,(vlSelf->VGA_B),8);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__vga_data),24);
        tracep->chgSData(oldp+18,(vlSelf->top__DOT__i),10);
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
