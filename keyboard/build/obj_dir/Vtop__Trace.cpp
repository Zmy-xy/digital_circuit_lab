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
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__hex[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__hex[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__hex[2]),8);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__hex[3]),8);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__hex[4]),8);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__hex[5]),8);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__hex[6]),8);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__hex[7]),8);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__hex[8]),8);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__hex[9]),8);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__hex[10]),8);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__hex[11]),8);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__hex[12]),8);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__hex[13]),8);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__hex[14]),8);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__hex[15]),8);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT____Vcellout__my_led__hex[0]),8);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT____Vcellout__my_led__hex[1]),8);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT____Vcellout__my_led__hex[2]),8);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT____Vcellout__my_led__hex[3]),8);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT____Vcellout__my_led__hex[4]),8);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT____Vcellout__my_led__hex[5]),8);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT____Vcellout__my_led__hex[6]),8);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT____Vcellout__my_led__hex[7]),8);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT____Vcellout__my_led__hex[8]),8);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT____Vcellout__my_led__hex[9]),8);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT____Vcellout__my_led__hex[10]),8);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT____Vcellout__my_led__hex[11]),8);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT____Vcellout__my_led__hex[12]),8);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT____Vcellout__my_led__hex[13]),8);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT____Vcellout__my_led__hex[14]),8);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT____Vcellout__my_led__hex[15]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+32,(vlSelf->top__DOT__buffer),10);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__flag));
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__state),2);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
            tracep->chgBit(oldp+37,((IData)((4U == 
                                             (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
        }
        tracep->chgBit(oldp+38,(vlSelf->clk));
        tracep->chgBit(oldp+39,(vlSelf->rst));
        tracep->chgBit(oldp+40,(vlSelf->ps2_clk));
        tracep->chgBit(oldp+41,(vlSelf->ps2_data));
        tracep->chgCData(oldp+42,(vlSelf->seg0),8);
        tracep->chgCData(oldp+43,(vlSelf->seg1),8);
        tracep->chgCData(oldp+44,(vlSelf->seg2),8);
        tracep->chgBit(oldp+45,((1U & (~ (IData)(vlSelf->rst)))));
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
