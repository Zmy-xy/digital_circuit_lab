#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->ps2_clk, true, false, 1, PS2_CLK);
	nvboard_bind_pin(&top->ps2_data, true, false, 1, PS2_DAT);
	nvboard_bind_pin(&top->seg2, false, true, 8, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G, DEC2P);
	nvboard_bind_pin(&top->seg1, false, true, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin(&top->seg0, false, true, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}