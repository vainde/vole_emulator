#include "instruction_set.h"

void instruction_set::load(registers r, uint8_t register_number, uint8_t address) {
	bool use_register = r.valid_register(register_number);
	bool use_address = valid_address(address);

	if (use_register && use_address) {
		printf("Valid register and valid address.");
	}
}