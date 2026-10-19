#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/arith.cpp
// Total functions: 1

// Forward declarations
void fn_80197BC8();

// ----------------------------------------------------------------------------
// fn_80197BC8
// ----------------------------------------------------------------------------
asm void fn_80197BC8() {
    nofralloc
    srawi r4, r3, 31
    xor r0, r4, r3
    subf r3, r4, r0
    blr
}

