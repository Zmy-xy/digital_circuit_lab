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
        tracep->declBit(c+26,"clk", false,-1);
        tracep->declBit(c+27,"rst", false,-1);
        tracep->declBit(c+28,"button", false,-1);
        tracep->declBit(c+29,"ps2_clk", false,-1);
        tracep->declBit(c+30,"ps2_data", false,-1);
        tracep->declBit(c+31,"VGA_CLK", false,-1);
        tracep->declBit(c+32,"VGA_HSYNC", false,-1);
        tracep->declBit(c+33,"VGA_VSYNC", false,-1);
        tracep->declBit(c+34,"VGA_BLANK_N", false,-1);
        tracep->declBus(c+35,"VGA_R", false,-1, 7,0);
        tracep->declBus(c+36,"VGA_G", false,-1, 7,0);
        tracep->declBus(c+37,"VGA_B", false,-1, 7,0);
        tracep->declBit(c+26,"top clk", false,-1);
        tracep->declBit(c+27,"top rst", false,-1);
        tracep->declBit(c+28,"top button", false,-1);
        tracep->declBit(c+29,"top ps2_clk", false,-1);
        tracep->declBit(c+30,"top ps2_data", false,-1);
        tracep->declBit(c+31,"top VGA_CLK", false,-1);
        tracep->declBit(c+32,"top VGA_HSYNC", false,-1);
        tracep->declBit(c+33,"top VGA_VSYNC", false,-1);
        tracep->declBit(c+34,"top VGA_BLANK_N", false,-1);
        tracep->declBus(c+35,"top VGA_R", false,-1, 7,0);
        tracep->declBus(c+36,"top VGA_G", false,-1, 7,0);
        tracep->declBus(c+37,"top VGA_B", false,-1, 7,0);
        tracep->declBus(c+1,"top state", false,-1, 1,0);
        tracep->declBus(c+2,"top buffer", false,-1, 9,0);
        tracep->declBit(c+3,"top flag", false,-1);
        tracep->declBus(c+4,"top cnt", false,-1, 11,0);
        tracep->declBus(c+5,"top asc", false,-1, 7,0);
        tracep->declBus(c+6,"top dout", false,-1, 7,0);
        tracep->declBus(c+7,"top h_addr", false,-1, 9,0);
        tracep->declBus(c+8,"top v_addr", false,-1, 9,0);
        tracep->declBit(c+9,"top vga_data", false,-1);
        tracep->declBus(c+10,"top my_ps2asc ps2", false,-1, 7,0);
        tracep->declBus(c+5,"top my_ps2asc asc", false,-1, 7,0);
        tracep->declBit(c+26,"top my_ram clk", false,-1);
        tracep->declBus(c+1,"top my_ram state", false,-1, 1,0);
        tracep->declBit(c+3,"top my_ram wr", false,-1);
        tracep->declBus(c+7,"top my_ram h_addr", false,-1, 9,0);
        tracep->declBus(c+8,"top my_ram v_addr", false,-1, 9,0);
        tracep->declBus(c+5,"top my_ram din", false,-1, 7,0);
        tracep->declBus(c+6,"top my_ram dout", false,-1, 7,0);
        tracep->declBus(c+11,"top my_ram outaddr", false,-1, 11,0);
        tracep->declBus(c+12,"top my_ram h_mem", false,-1, 9,0);
        tracep->declBus(c+13,"top my_ram v_mem", false,-1, 9,0);
        tracep->declBus(c+38,"top my_ram addr", false,-1, 11,0);
        tracep->declBit(c+26,"top my_vmem clk", false,-1);
        tracep->declBus(c+1,"top my_vmem state", false,-1, 1,0);
        tracep->declBus(c+7,"top my_vmem h_addr", false,-1, 9,0);
        tracep->declBus(c+14,"top my_vmem v_addr", false,-1, 8,0);
        tracep->declBit(c+3,"top my_vmem flag", false,-1);
        tracep->declBus(c+6,"top my_vmem asc", false,-1, 7,0);
        tracep->declBit(c+9,"top my_vmem vga_data", false,-1);
        tracep->declBus(c+15,"top my_vmem h_left", false,-1, 9,0);
        tracep->declBus(c+16,"top my_vmem v_top", false,-1, 8,0);
        tracep->declBus(c+17,"top my_vmem read_rom", false,-1, 11,0);
        tracep->declBus(c+18,"top my_vmem font_data", false,-1, 11,0);
        tracep->declBit(c+26,"top my_keyboard clk", false,-1);
        tracep->declBit(c+39,"top my_keyboard resetn", false,-1);
        tracep->declBit(c+29,"top my_keyboard ps2_clk", false,-1);
        tracep->declBit(c+30,"top my_keyboard ps2_data", false,-1);
        tracep->declBus(c+2,"top my_keyboard buffer", false,-1, 9,0);
        tracep->declBit(c+3,"top my_keyboard flag", false,-1);
        tracep->declBus(c+4,"top my_keyboard cnt", false,-1, 11,0);
        tracep->declBus(c+1,"top my_keyboard state", false,-1, 1,0);
        tracep->declBus(c+19,"top my_keyboard count", false,-1, 3,0);
        tracep->declBus(c+20,"top my_keyboard ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+21,"top my_keyboard sampling", false,-1);
        tracep->declBit(c+26,"top my_vga_ctrl pclk", false,-1);
        tracep->declBit(c+27,"top my_vga_ctrl reset", false,-1);
        tracep->declBit(c+9,"top my_vga_ctrl vga_data", false,-1);
        tracep->declBus(c+7,"top my_vga_ctrl h_addr", false,-1, 9,0);
        tracep->declBus(c+8,"top my_vga_ctrl v_addr", false,-1, 9,0);
        tracep->declBit(c+32,"top my_vga_ctrl hsync", false,-1);
        tracep->declBit(c+33,"top my_vga_ctrl vsync", false,-1);
        tracep->declBit(c+34,"top my_vga_ctrl valid", false,-1);
        tracep->declBus(c+35,"top my_vga_ctrl vga_r", false,-1, 7,0);
        tracep->declBus(c+36,"top my_vga_ctrl vga_g", false,-1, 7,0);
        tracep->declBus(c+37,"top my_vga_ctrl vga_b", false,-1, 7,0);
        tracep->declBus(c+40,"top my_vga_ctrl h_frontporch", false,-1, 31,0);
        tracep->declBus(c+41,"top my_vga_ctrl h_active", false,-1, 31,0);
        tracep->declBus(c+42,"top my_vga_ctrl h_backporch", false,-1, 31,0);
        tracep->declBus(c+43,"top my_vga_ctrl h_total", false,-1, 31,0);
        tracep->declBus(c+44,"top my_vga_ctrl v_frontporch", false,-1, 31,0);
        tracep->declBus(c+45,"top my_vga_ctrl v_active", false,-1, 31,0);
        tracep->declBus(c+46,"top my_vga_ctrl v_backporch", false,-1, 31,0);
        tracep->declBus(c+47,"top my_vga_ctrl v_total", false,-1, 31,0);
        tracep->declBus(c+22,"top my_vga_ctrl x_cnt", false,-1, 9,0);
        tracep->declBus(c+23,"top my_vga_ctrl y_cnt", false,-1, 9,0);
        tracep->declBit(c+24,"top my_vga_ctrl h_valid", false,-1);
        tracep->declBit(c+25,"top my_vga_ctrl v_valid", false,-1);
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
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__state),2);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__buffer),10);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__flag));
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__cnt),12);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__asc),8);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__dout),8);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__h_addr),10);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__v_addr),10);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__vga_data));
        tracep->fullCData(oldp+10,((0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                             >> 1U))),8);
        tracep->fullSData(oldp+11,((0xfffU & ((0x3ffU 
                                               & VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U))) 
                                              + ((IData)(0x47U) 
                                                 * 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__v_addr) 
                                                     >> 4U)))))),12);
        tracep->fullSData(oldp+12,((0x3ffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__h_addr), (IData)(9U)))),10);
        tracep->fullSData(oldp+13,((0x3ffU & ((IData)(vlSelf->top__DOT__v_addr) 
                                              >> 4U))),10);
        tracep->fullSData(oldp+14,((0x1ffU & (IData)(vlSelf->top__DOT__v_addr))),9);
        tracep->fullSData(oldp+15,(vlSelf->top__DOT__my_vmem__DOT__h_left),10);
        tracep->fullSData(oldp+16,((0x1f0U & (IData)(vlSelf->top__DOT__v_addr))),9);
        tracep->fullSData(oldp+17,(((0U != (IData)(vlSelf->top__DOT__dout))
                                     ? (0xfffU & ((0x1ffU 
                                                   & ((IData)(vlSelf->top__DOT__v_addr) 
                                                      - 
                                                      (0x1f0U 
                                                       & (IData)(vlSelf->top__DOT__v_addr)))) 
                                                  + 
                                                  ((IData)(vlSelf->top__DOT__dout) 
                                                   << 4U)))
                                     : 0U)),12);
        tracep->fullSData(oldp+18,(vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                   [((0U != (IData)(vlSelf->top__DOT__dout))
                                      ? (0xfffU & (
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->top__DOT__v_addr) 
                                                       - 
                                                       (0x1f0U 
                                                        & (IData)(vlSelf->top__DOT__v_addr)))) 
                                                   + 
                                                   ((IData)(vlSelf->top__DOT__dout) 
                                                    << 4U)))
                                      : 0U)]),12);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__my_keyboard__DOT__count),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+21,((IData)((4U == (6U 
                                                 & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))));
        tracep->fullSData(oldp+22,(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt),10);
        tracep->fullSData(oldp+23,(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt),10);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__my_vga_ctrl__DOT__h_valid));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__my_vga_ctrl__DOT__v_valid));
        tracep->fullBit(oldp+26,(vlSelf->clk));
        tracep->fullBit(oldp+27,(vlSelf->rst));
        tracep->fullBit(oldp+28,(vlSelf->button));
        tracep->fullBit(oldp+29,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+30,(vlSelf->ps2_data));
        tracep->fullBit(oldp+31,(vlSelf->VGA_CLK));
        tracep->fullBit(oldp+32,(vlSelf->VGA_HSYNC));
        tracep->fullBit(oldp+33,(vlSelf->VGA_VSYNC));
        tracep->fullBit(oldp+34,(vlSelf->VGA_BLANK_N));
        tracep->fullCData(oldp+35,(vlSelf->VGA_R),8);
        tracep->fullCData(oldp+36,(vlSelf->VGA_G),8);
        tracep->fullCData(oldp+37,(vlSelf->VGA_B),8);
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__my_ram__DOT__addr),12);
        tracep->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->rst)))));
        tracep->fullIData(oldp+40,(0x60U),32);
        tracep->fullIData(oldp+41,(0x90U),32);
        tracep->fullIData(oldp+42,(0x310U),32);
        tracep->fullIData(oldp+43,(0x320U),32);
        tracep->fullIData(oldp+44,(2U),32);
        tracep->fullIData(oldp+45,(0x23U),32);
        tracep->fullIData(oldp+46,(0x203U),32);
        tracep->fullIData(oldp+47,(0x20dU),32);
    }
}
