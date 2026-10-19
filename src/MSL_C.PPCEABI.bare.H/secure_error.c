#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/secure_error.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float __msl_constraint_handler_8049D8B8;

// Forward declarations
void __msl_runtime_constraint_violation_s();

// ----------------------------------------------------------------------------
// __msl_runtime_constraint_violation_s
// ----------------------------------------------------------------------------
asm void __msl_runtime_constraint_violation_s() {
    nofralloc
    lwz r12, __msl_constraint_handler_8049D8B8
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

