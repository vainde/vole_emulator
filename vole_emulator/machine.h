#ifndef machine_h
#define machine_h

#include "cpu.h"

struct machine {
	cpu CPU;
	cell cell;
};

#endif