#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/math_ppc.cpp
// Total functions: 1

// Forward declarations
extern void ldexp();
extern void nan();

// ----------------------------------------------------------------------------
// nan
// ----------------------------------------------------------------------------
asm void nan() {
    nofralloc
    b ldexp
}

