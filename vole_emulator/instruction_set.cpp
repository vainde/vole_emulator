#include "instruction_set.h"

void instruction_set::load(struct machine m, uint8_t register_number, uint8_t address) {
	bool use_register = m.CPU.registers.valid_register(register_number);
	bool use_address = m.cell.valid_address(address);

	if (use_register && use_address) {
		std::cout << "0x1 - LOAD" << std::endl;
		m.CPU.registers.registers[register_number] = m.cell.cells[address];
		std::cout << "Contents of memory cell " << std::hex << (int)address;
		std::cout << " stored in register " << std::hex << (int)register_number;
	}
}