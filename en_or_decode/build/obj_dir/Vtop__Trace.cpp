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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__segs[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__segs[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__segs[2]),8);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__segs[3]),8);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__segs[4]),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__segs[5]),8);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__segs[6]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__segs[7]),8);
        }
        tracep->chgBit(oldp+8,(vlSelf->en));
        tracep->chgCData(oldp+9,(vlSelf->x),8);
        tracep->chgCData(oldp+10,(vlSelf->y),4);
        tracep->chgCData(oldp+11,(vlSelf->seg0),8);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    }
}
