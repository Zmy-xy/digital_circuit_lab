// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"en", false,-1);
        tracep->declBus(c+10,"x", false,-1, 7,0);
        tracep->declBus(c+11,"y", false,-1, 3,0);
        tracep->declBus(c+12,"seg0", false,-1, 7,0);
        tracep->declBit(c+9,"top en", false,-1);
        tracep->declBus(c+10,"top x", false,-1, 7,0);
        tracep->declBus(c+11,"top y", false,-1, 3,0);
        tracep->declBus(c+12,"top seg0", false,-1, 7,0);
        tracep->declBus(c+13,"top i", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"top segs", true,(i+0), 7,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__segs[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__segs[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__segs[2]),8);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__segs[3]),8);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__segs[4]),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__segs[5]),8);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__segs[6]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__segs[7]),8);
        tracep->fullBit(oldp+9,(vlSelf->en));
        tracep->fullCData(oldp+10,(vlSelf->x),8);
        tracep->fullCData(oldp+11,(vlSelf->y),4);
        tracep->fullCData(oldp+12,(vlSelf->seg0),8);
        tracep->fullIData(oldp+13,(vlSelf->top__DOT__i),32);
    }
}
