// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd__Syms.h"


void Vadd___024root__traceInitSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vadd___024root__traceInitTop(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vadd___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vadd___024root__traceInitSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"in_x", false,-1, 2,0);
        tracep->declBus(c+2,"in_y", false,-1, 2,0);
        tracep->declBus(c+3,"op", false,-1, 2,0);
        tracep->declBus(c+4,"out_s", false,-1, 2,0);
        tracep->declBit(c+5,"out_c", false,-1);
        tracep->declBit(c+6,"Overflow", false,-1);
        tracep->declBus(c+1,"top in_x", false,-1, 2,0);
        tracep->declBus(c+2,"top in_y", false,-1, 2,0);
        tracep->declBus(c+3,"top op", false,-1, 2,0);
        tracep->declBus(c+4,"top out_s", false,-1, 2,0);
        tracep->declBit(c+5,"top out_c", false,-1);
        tracep->declBit(c+6,"top Overflow", false,-1);
        tracep->declBus(c+7,"top out_s_1", false,-1, 2,0);
        tracep->declBus(c+8,"top out_s_2", false,-1, 2,0);
        tracep->declBus(c+1,"top add1 in_x", false,-1, 2,0);
        tracep->declBus(c+2,"top add1 in_y", false,-1, 2,0);
        tracep->declBit(c+11,"top add1 Cin", false,-1);
        tracep->declBus(c+7,"top add1 out_s", false,-1, 2,0);
        tracep->declBit(c+5,"top add1 out_c", false,-1);
        tracep->declBit(c+6,"top add1 Overflow", false,-1);
        tracep->declBus(c+9,"top add1 t_add_Cin", false,-1, 2,0);
        tracep->declBus(c+12,"top add1 x", false,-1, 2,0);
        tracep->declBus(c+1,"top divi in_x", false,-1, 2,0);
        tracep->declBus(c+2,"top divi in_y", false,-1, 2,0);
        tracep->declBit(c+13,"top divi Cin", false,-1);
        tracep->declBus(c+8,"top divi out_s", false,-1, 2,0);
        tracep->declBit(c+5,"top divi out_c", false,-1);
        tracep->declBit(c+6,"top divi Overflow", false,-1);
        tracep->declBus(c+10,"top divi t_add_Cin", false,-1, 2,0);
        tracep->declBus(c+12,"top divi x", false,-1, 2,0);
    }
}

void Vadd___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vadd___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vadd___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vadd___024root__traceRegister(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vadd___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vadd___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vadd___024root__traceCleanup, vlSelf);
    }
}

void Vadd___024root__traceFullSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vadd___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vadd___024root* const __restrict vlSelf = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vadd___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vadd___024root__traceFullSub0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->in_x),3);
        tracep->fullCData(oldp+2,(vlSelf->in_y),3);
        tracep->fullCData(oldp+3,(vlSelf->op),3);
        tracep->fullCData(oldp+4,(vlSelf->out_s),3);
        tracep->fullBit(oldp+5,(vlSelf->out_c));
        tracep->fullBit(oldp+6,(vlSelf->Overflow));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__out_s_1),3);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__out_s_2),3);
        tracep->fullCData(oldp+9,(vlSelf->in_y),3);
        tracep->fullCData(oldp+10,((7U & (~ (IData)(vlSelf->in_y)))),3);
        tracep->fullBit(oldp+11,(0U));
        tracep->fullCData(oldp+12,(0U),3);
        tracep->fullBit(oldp+13,(1U));
    }
}
