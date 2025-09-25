#include "cpu.h"

int main() {
	uint8_t register_number = 0x4;
	uint8_t address = 0xA3;

	cpu vole_cpu = {};
	vole_cpu.CU.IS.load(vole_cpu.registers, register_number, address);
	return 0;
}