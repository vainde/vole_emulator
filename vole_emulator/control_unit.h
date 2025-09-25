#ifndef control_unit_h
#define control_unit_h
#include "instruction_set.h"

struct instruction_set;

struct control_unit {
	instruction_set* IS;
};

#endif