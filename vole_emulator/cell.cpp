#include "cell.h"

bool cell::valid_address(uint8_t address) const {
	return !(address < MIN_ADDRESS || address > MAX_ADDRESS);
}