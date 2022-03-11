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
        tracep->declBus(c+1,"in_x", false,-1, 7,0);
        tracep->declBus(c+2,"in_y", false,-1, 7,0);
        tracep->declBus(c+3,"op", false,-1, 2,0);
        tracep->declBus(c+4,"out_s", false,-1, 7,0);
        tracep->declBit(c+5,"out_c", false,-1);
        tracep->declBit(c+6,"Overflow", false,-1);
        tracep->declBit(c+7,"zero", false,-1);
        tracep->declBus(c+1,"top in_x", false,-1, 7,0);
        tracep->declBus(c+2,"top in_y", false,-1, 7,0);
        tracep->declBus(c+3,"top op", false,-1, 2,0);
        tracep->declBus(c+4,"top out_s", false,-1, 7,0);
        tracep->declBit(c+5,"top out_c", false,-1);
        tracep->declBit(c+6,"top Overflow", false,-1);
        tracep->declBit(c+7,"top zero", false,-1);
        tracep->declBus(c+8,"top out_s_1", false,-1, 7,0);
        tracep->declBus(c+9,"top out_s_2", false,-1, 7,0);
        tracep->declBit(c+10,"top Overflow_2", false,-1);
        tracep->declBus(c+1,"top add1 in_x", false,-1, 7,0);
        tracep->declBus(c+2,"top add1 in_y", false,-1, 7,0);
        tracep->declBit(c+13,"top add1 Cin", false,-1);
        tracep->declBus(c+8,"top add1 Result", false,-1, 7,0);
        tracep->declBit(c+5,"top add1 carry", false,-1);
        tracep->declBit(c+6,"top add1 Overflow", false,-1);
        tracep->declBit(c+7,"top add1 zero", false,-1);
        tracep->declBus(c+11,"top add1 t_add_Cin", false,-1, 7,0);
        tracep->declBus(c+14,"top add1 x", false,-1, 7,0);
        tracep->declBus(c+1,"top divi in_x", false,-1, 7,0);
        tracep->declBus(c+2,"top divi in_y", false,-1, 7,0);
        tracep->declBit(c+15,"top divi Cin", false,-1);
        tracep->declBus(c+9,"top divi Result", false,-1, 7,0);
        tracep->declBit(c+5,"top divi carry", false,-1);
        tracep->declBit(c+10,"top divi Overflow", false,-1);
        tracep->declBit(c+7,"top divi zero", false,-1);
        tracep->declBus(c+12,"top divi t_add_Cin", false,-1, 7,0);
        tracep->declBus(c+16,"top divi x", false,-1, 7,0);
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
        tracep->fullCData(oldp+1,(vlSelf->in_x),8);
        tracep->fullCData(oldp+2,(vlSelf->in_y),8);
        tracep->fullCData(oldp+3,(vlSelf->op),3);
        tracep->fullCData(oldp+4,(vlSelf->out_s),8);
        tracep->fullBit(oldp+5,(vlSelf->out_c));
        tracep->fullBit(oldp+6,(vlSelf->Overflow));
        tracep->fullBit(oldp+7,(vlSelf->zero));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__out_s_1),8);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__out_s_2),8);
        tracep->fullBit(oldp+10,((((1U & ((IData)(vlSelf->in_x) 
                                          >> 7U)) == 
                                   (1U & (~ ((IData)(vlSelf->in_y) 
                                             >> 7U)))) 
                                  & ((1U & ((IData)(vlSelf->top__DOT__out_s_2) 
                                            >> 7U)) 
                                     != (1U & ((IData)(vlSelf->in_x) 
                                               >> 7U))))));
        tracep->fullCData(oldp+11,(vlSelf->in_y),8);
        tracep->fullCData(oldp+12,((0xffU & (~ (IData)(vlSelf->in_y)))),8);
        tracep->fullBit(oldp+13,(0U));
        tracep->fullCData(oldp+14,(0U),8);
        tracep->fullBit(oldp+15,(1U));
        tracep->fullCData(oldp+16,(1U),8);
    }
}
