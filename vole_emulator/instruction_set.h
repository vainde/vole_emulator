#ifndef instruction_set_h
#define instruction_set_h
#define REGISTER_0 0x1
#include <stdint.h>
#include <iostream>
#include "cell.h"
#include "machine.h"

// 16-bit instuction set for Vole
struct instruction_set {
	// 0X1: Load register r with the bit pattern found in the memory cell of address
	void load_0x1(struct machine m, uint8_t register_number, uint8_t address);

	// 0x2: Load register 0 with the bit pattern found in the memory cell of address
	void load_0x2(struct machine m, uint8_t address);
};

#endif