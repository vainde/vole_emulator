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
	void load_0x1(struct machine* m, uint8_t register_number, uint8_t address);

	// 0x2: Load register 0 with the bit pattern found in the memory cell of address
	void load_0x2(struct machine* m, uint8_t address);

	// 0x3: Store the bit pattern found in register R in the memory cell of address XY
	void store_0x3(struct machine* m, uint8_t register_number, uint8_t address);

	// 0x4: Move the bit pattern found in register R to S
	void move_0x4(struct machine* m, uint8_t register_1, uint8_t register2);

	/* 0x5: ADD the bit patterns in registers S and T 
	 as though they were two’s complement representations and leave the result in register R. */
	void add_0x5(struct machine* m, uint8_t register_1, uint8_t register_2, uint8_t register_3);

	//0x7: OR the bit patterns in registers S and T and place the result in register R
	void or_0x7(struct machine*m, uint8_t register_1, uint8_t register_2, uint8_t register_3);
};

#endif