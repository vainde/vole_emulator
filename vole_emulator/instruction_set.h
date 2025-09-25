#ifndef instruction_set_h
#define instruction_set_h
#include <stdint.h>
#include <stdio.h>
#include "register.h"
#include "cell.h"

struct instruction_set {
	void load(registers r, uint8_t register_number, uint8_t address);
};

#endif