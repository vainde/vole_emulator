#include "register.h"

bool registers::valid_register(uint8_t register_number) {
	if (register_number < 0x0 || register_number > 0xF) {
		return false;
	}
	else {
		return true;
	}
}