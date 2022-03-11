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
        tracep->declBit(c+39,"clk", false,-1);
        tracep->declBit(c+40,"rst", false,-1);
        tracep->declBit(c+41,"ps2_clk", false,-1);
        tracep->declBit(c+42,"ps2_data", false,-1);
        tracep->declBus(c+43,"seg0", false,-1, 7,0);
        tracep->declBus(c+44,"seg1", false,-1, 7,0);
        tracep->declBus(c+45,"seg2", false,-1, 7,0);
        tracep->declBit(c+39,"top clk", false,-1);
        tracep->declBit(c+40,"top rst", false,-1);
        tracep->declBit(c+41,"top ps2_clk", false,-1);
        tracep->declBit(c+42,"top ps2_data", false,-1);
        tracep->declBus(c+43,"top seg0", false,-1, 7,0);
        tracep->declBus(c+44,"top seg1", false,-1, 7,0);
        tracep->declBus(c+45,"top seg2", false,-1, 7,0);
        tracep->declBus(c+33,"top buffer", false,-1, 9,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1+i*1,"top hex", true,(i+0), 7,0);}}
        tracep->declBit(c+34,"top flag", false,-1);
        tracep->declBus(c+35,"top state", false,-1, 1,0);
        tracep->declBit(c+39,"top my_keyboard clk", false,-1);
        tracep->declBit(c+46,"top my_keyboard resetn", false,-1);
        tracep->declBit(c+41,"top my_keyboard ps2_clk", false,-1);
        tracep->declBit(c+42,"top my_keyboard ps2_data", false,-1);
        tracep->declBus(c+33,"top my_keyboard buffer", false,-1, 9,0);
        tracep->declBit(c+34,"top my_keyboard flag", false,-1);
        tracep->declBus(c+36,"top my_keyboard count", false,-1, 3,0);
        tracep->declBus(c+37,"top my_keyboard ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+38,"top my_keyboard sampling", false,-1);
        tracep->declBit(c+39,"top my_led clk", false,-1);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+17+i*1,"top my_led hex", true,(i+0), 7,0);}}
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
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__hex[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__hex[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__hex[2]),8);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__hex[3]),8);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__hex[4]),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__hex[5]),8);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__hex[6]),8);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__hex[7]),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__hex[8]),8);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__hex[9]),8);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__hex[10]),8);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__hex[11]),8);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__hex[12]),8);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__hex[13]),8);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__hex[14]),8);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__hex[15]),8);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT____Vcellout__my_led__hex[0]),8);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT____Vcellout__my_led__hex[1]),8);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT____Vcellout__my_led__hex[2]),8);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT____Vcellout__my_led__hex[3]),8);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT____Vcellout__my_led__hex[4]),8);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT____Vcellout__my_led__hex[5]),8);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT____Vcellout__my_led__hex[6]),8);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT____Vcellout__my_led__hex[7]),8);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT____Vcellout__my_led__hex[8]),8);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT____Vcellout__my_led__hex[9]),8);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT____Vcellout__my_led__hex[10]),8);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT____Vcellout__my_led__hex[11]),8);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT____Vcellout__my_led__hex[12]),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT____Vcellout__my_led__hex[13]),8);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT____Vcellout__my_led__hex[14]),8);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT____Vcellout__my_led__hex[15]),8);
        tracep->fullSData(oldp+33,(vlSelf->top__DOT__buffer),10);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__flag));
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__state),2);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+38,((IData)((4U == (6U 
                                                 & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
        tracep->fullBit(oldp+39,(vlSelf->clk));
        tracep->fullBit(oldp+40,(vlSelf->rst));
        tracep->fullBit(oldp+41,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+42,(vlSelf->ps2_data));
        tracep->fullCData(oldp+43,(vlSelf->seg0),8);
        tracep->fullCData(oldp+44,(vlSelf->seg1),8);
        tracep->fullCData(oldp+45,(vlSelf->seg2),8);
        tracep->fullBit(oldp+46,((1U & (~ (IData)(vlSelf->rst)))));
    }
}
