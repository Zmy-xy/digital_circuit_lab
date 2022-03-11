#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->clk, false, false, 1, CLK);
	nvboard_bind_pin(&top->rst, false, false, 1, RST);
	nvboard_bind_pin(&top->a, false, false, 1, SW15);
	nvboard_bind_pin(&top->b, false, false, 1, SW14);
	nvboard_bind_pin(&top->led, false, true, 1, LD13);
}