#include "instruction_set.h"

void instruction_set::load_0x1(struct machine m, uint8_t register_number, uint8_t address) {
	bool use_register = m.CPU.registers.valid_register(register_number);
	bool use_address = m.cell.valid_address(address);

	if (use_register && use_address) {
		std::cout << REGISTER_0 << " - LOAD" << std::endl;
		m.CPU.registers.registers[register_number] = m.cell.cells[address];
		std::cout << "Contents of memory cell " << std::hex << (int)address;
		std::cout << " stored in register " << std::hex << (int)register_number << std::endl;
	}
}

void instruction_set::load_0x2(struct machine m, uint8_t address) {
	bool use_register = m.CPU.registers.valid_register(0x1);
	bool use_address = m.cell.valid_address(address);

	if (use_register && use_address) {
		std::cout << "0x2 - LOAD" << std::endl;
		m.CPU.registers.registers[REGISTER_0] = m.cell.cells[address];
		std::cout << "Contents of memory cell " << std::hex << (int)address;
		std::cout << " stored in register " << std::hex << (int)0x1 << std::endl;;
	}
}

void instruction_set::store_0x3(struct machine m, uint8_t register_number, uint8_t address) {
	bool use_register = m.CPU.registers.valid_register(register_number);
	bool use_address = m.cell.valid_address(address);

	if (use_register && use_address) {
		uint8_t register_content = m.CPU.registers.registers[register_number];
		m.cell.cells[address] = register_content;
		std::cout << "0x3 - STORE called" << std::endl;
		std::cout << "Contents of register " << std::hex << (int)register_number;
		std::cout << " stored in memory cell " << std::hex << (int)address;
	}

}