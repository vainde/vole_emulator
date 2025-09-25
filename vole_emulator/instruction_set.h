#ifndef instruction_set_h
#define instruction_set_h
#include <stdint.h>
#include <iostream>
#include "cell.h"
#include "machine.h"

// 16-bit instuction set for Vole
struct instruction_set {
	// 0X1: Load register r with the bit pattern found in the memory cell of address
	void load(struct machine m, uint8_t register_number, uint8_t address);
};

#endif