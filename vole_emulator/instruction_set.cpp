#include "instruction_set.h"

void instruction_set::load(machine m, uint8_t register_number, uint8_t address) {
	bool use_register = m.CPU.registers.valid_register(register_number);
	bool use_address = m.cell.valid_address(address);

	if (use_register && use_address) {
		printf("Valid register and valid address.");
		m.CPU.registers.registers[register_number] = m.cell.cells[address];
	}
}