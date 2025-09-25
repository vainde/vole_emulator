#include "machine.h"

int main() {
	uint8_t register_number = 0x4;
	uint8_t address = 0xA3;
	machine vole = {};
	vole.CPU.CU.IS->load(vole, register_number, address);
	return 0;
}