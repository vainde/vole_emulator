#include "instruction_set.h"

void instruction_set::load_0x1(struct machine* m, uint8_t register_number, uint8_t address) {
	bool use_register = m->CPU.registers.valid_register(register_number);
	bool use_address = m->cell.valid_address(address);

	if (use_register && use_address) {
		m->CPU.registers.registers[register_number] = m->cell.cells[address];
	}
}

void instruction_set::load_0x2(struct machine* m, uint8_t address) {
	bool use_register = m->CPU.registers.valid_register(0x1);
	bool use_address = m->cell.valid_address(address);

	if (use_register && use_address) {
		m->CPU.registers.registers[REGISTER_0] = m->cell.cells[address];
	}
}

void instruction_set::store_0x3(struct machine* m, uint8_t register_number, uint8_t address) {
	bool use_register = m->CPU.registers.valid_register(register_number);
	bool use_address = m->cell.valid_address(address);

	if (use_register && use_address) {
		uint8_t register_content = m->CPU.registers.registers[register_number];
		m->cell.cells[address] = register_content;
	}
}

void instruction_set::move_0x4(struct machine* m, uint8_t register_1, uint8_t register_2) {
	bool use_register1 = m->CPU.registers.valid_register(register_1);
	bool use_register2 = m->CPU.registers.valid_register(register_2);

	if (use_register1 && use_register2) {
		uint8_t register_1_content = m->CPU.registers.registers[register_1];
		m->CPU.registers.registers[register_2] = register_1_content;
	}
}

void instruction_set::add_0x5(struct machine* m, uint8_t register_1, uint8_t register_2, uint8_t register_3) {
	uint8_t val_1 = m->CPU.registers.registers[register_2];
	uint8_t val_2 = m->CPU.registers.registers[register_3];
	m->CPU.registers.registers[register_1] = val_1 + val_2;
}