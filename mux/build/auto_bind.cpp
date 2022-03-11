#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->x, false, false, 8, SW15, SW14, SW13, SW12, SW11, SW10, SW9, SW8);
	nvboard_bind_pin(&top->s, false, false, 2, SW1, SW0);
	nvboard_bind_pin(&top->y, false, true, 2, LD1, LD0);
}