#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
//#include <nvboard.h>

//VerilatedVcdC* tfp = NULL;
VerilatedContext* contextp = NULL;
static Vtop* top = NULL;

void nvboard_bind_all_pins(Vtop* top);

// static void single_cycle() {
//   top->clk = 0; top->eval();
//   top->clk = 1; top->eval();
// }

// static void reset(int n) {
//   top->rst = 1;
//   while (n -- > 0) single_cycle();
//   top->rst = 0;
// }


void step_and_dump_wave(){
    //contextp->timeInc(1);
    //nvboard_update();
    //single_cycle();
    top->eval();
    //tfp->dump(contextp->time());
    }

void sim_init(){
    contextp = new VerilatedContext;
    //tfp = new VerilatedVcdC;
    top = new Vtop;
    //contextp->traceEverOn(true);
    //top->trace(tfp, 5);
    //tfp->open("simx.vcd");
}

void sim_quit(){
    //tfp->close();
    delete contextp;
    delete top;
}

int main(int argc, char** argv, char** env) {

    sim_init();
    //nvboard_bind_all_pins(top);
    //nvboard_init();
    //reset(10);
    top->op = 1;
    top->in_x = 2;top->in_y = -128;step_and_dump_wave();
    
    printf("Result = %d,x = %d, y = %d, Overflow = %d\n",(int8_t)top->out_s,(int8_t)top->in_x,(int8_t)top->in_y,(int8_t)top->Overflow);
    //nvboard_quit();
    sim_quit();
    return 0;
}