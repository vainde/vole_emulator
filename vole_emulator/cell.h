#ifndef cell_h
#define cell_h
#define MIN_ADDRESS 0X0
#define MAX_ADDRESS 0XFF
#include <stdint.h>
#include <stdbool.h>

// represents the memory of the machine
extern uint8_t cell[MAX_ADDRESS];
bool valid_address(uint8_t address);
#endif