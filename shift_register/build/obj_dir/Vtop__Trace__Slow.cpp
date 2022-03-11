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
        tracep->declBit(c+17,"clk", false,-1);
        tracep->declBit(c+18,"button", false,-1);
        tracep->declBit(c+19,"x_8", false,-1);
        tracep->declBus(c+20,"Q", false,-1, 7,0);
        tracep->declBus(c+21,"seg0", false,-1, 7,0);
        tracep->declBus(c+22,"seg1", false,-1, 7,0);
        tracep->declBus(c+23,"seg2", false,-1, 7,0);
        tracep->declBit(c+17,"top clk", false,-1);
        tracep->declBit(c+18,"top button", false,-1);
        tracep->declBit(c+19,"top x_8", false,-1);
        tracep->declBus(c+20,"top Q", false,-1, 7,0);
        tracep->declBus(c+21,"top seg0", false,-1, 7,0);
        tracep->declBus(c+22,"top seg1", false,-1, 7,0);
        tracep->declBus(c+23,"top seg2", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
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
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__segs[8]),8);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__segs[9]),8);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__segs[10]),8);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__segs[11]),8);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__segs[12]),8);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__segs[13]),8);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__segs[14]),8);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__segs[15]),8);
        tracep->fullBit(oldp+17,(vlSelf->clk));
        tracep->fullBit(oldp+18,(vlSelf->button));
        tracep->fullBit(oldp+19,(vlSelf->x_8));
        tracep->fullCData(oldp+20,(vlSelf->Q),8);
        tracep->fullCData(oldp+21,(vlSelf->seg0),8);
        tracep->fullCData(oldp+22,(vlSelf->seg1),8);
        tracep->fullCData(oldp+23,(vlSelf->seg2),8);
    }
}
