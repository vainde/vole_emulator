#include "register.h"

bool _register::valid_register(uint8_t register_number) const {
	if (register_number < 0x0 || register_number > 0xF) {
		return false;
	}
	else {
		return true;
	}
}