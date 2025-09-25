#ifndef cpu_h
#define cpu_h
#include "register.h"
#include "control_unit.h"

struct cpu {
	registers registers;
	control_unit CU;
};

#endif cpu_h