#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include <nvboard.h>

const vluint64_t sim_time = 1024;
static Vtop* top;
void nvboard_bind_all_pins(Vtop* top);

void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}

void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}

int main(int argc, char** argv, char** env) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    top = new Vtop{contextp};

    //trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 5);
    tfp->open("simx.vcd");

    nvboard_bind_all_pins(top);
    nvboard_init();

    reset(10);
    while (!contextp->gotFinish()) {
	contextp->timeInc(1);
	nvboard_update();
	single_cycle();
	tfp->dump(contextp->time());
    }
    tfp->close();
    nvboard_quit();
    delete contextp;
    delete top;
    return 0;
}
