#include "cell.h"

bool valid_address(uint8_t address) {
	return !(address < MIN_ADDRESS || address > MAX_ADDRESS);
}