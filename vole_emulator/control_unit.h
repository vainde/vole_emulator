#ifndef control_unit_h
#define control_unit_h
#include <stdint.h>
#include "instruction.h"

struct control_unit {
	void load(registers r, uint8_t register_number, uint8_t address);
};

#endif