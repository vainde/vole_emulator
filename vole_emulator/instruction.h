#ifndef instruction_h
#define instruction_h
#include <stdint.h>
#include "register.h"
#include "cell.h"
#include "stdio.h"

// loads register_number with the bit pattern found in the memory cell of the address
void load(registers registers, uint8_t register_number, uint8_t address);

#endif instruction_h