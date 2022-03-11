#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->en, false, false, 1, SW8);
	nvboard_bind_pin(&top->x, false, false, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin(&top->y, false, true, 4, LD4, LD2, LD1, LD0);
	nvboard_bind_pin(&top->seg0, false, true, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}