#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include <nvboard.h>

VerilatedVcdC* tfp = NULL;
VerilatedContext* contextp = NULL;
static Vtop* top = NULL;

void nvboard_bind_all_pins(Vtop* top);

void step_and_dump_wave(){
  contextp->timeInc(1);
  nvboard_update();
  top->eval();
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 5);
  tfp->open("simx.vcd");
}

void sim_quit(){
  tfp->close();
  delete contextp;
  delete top;
}

int main(int argc, char** argv, char** env) {

  sim_init();
  nvboard_bind_all_pins(top);
  nvboard_init();
  
  while (!contextp->gotFinish()) {
    step_and_dump_wave();
  }

  nvboard_quit();
  sim_quit();
  return 0;
}
