#ifndef register_h
#define register_h
#define MIN_REGISTER 0x0
#define MAX_REGISTER 0xF
#include <stdint.h>
#include <stdbool.h>


// vole has 16 8-bit general purpose registers
struct registers {
	uint8_t registers[MAX_REGISTER];
	bool valid_register(uint8_t register_number);
};

#endif