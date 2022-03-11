// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd__Syms.h"


void Vadd___024root__traceChgSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep);

void Vadd___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vadd___024root* const __restrict vlSelf = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vadd___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vadd___024root__traceChgSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->in_x),3);
        tracep->chgCData(oldp+1,(vlSelf->in_y),3);
        tracep->chgCData(oldp+2,(vlSelf->op),3);
        tracep->chgCData(oldp+3,(vlSelf->out_s),3);
        tracep->chgBit(oldp+4,(vlSelf->out_c));
        tracep->chgBit(oldp+5,(vlSelf->Overflow));
        tracep->chgCData(oldp+6,(vlSelf->top__DOT__out_s_1),3);
        tracep->chgCData(oldp+7,(vlSelf->top__DOT__out_s_2),3);
        tracep->chgCData(oldp+8,(vlSelf->in_y),3);
        tracep->chgCData(oldp+9,((7U & (~ (IData)(vlSelf->in_y)))),3);
    }
}

void Vadd___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vadd___024root* const __restrict vlSelf = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
