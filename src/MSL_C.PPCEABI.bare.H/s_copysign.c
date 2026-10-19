#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_copysign.cpp
// Total functions: 1

// Forward declarations
void fn_801A29A0();

// ----------------------------------------------------------------------------
// fn_801A29A0
// ----------------------------------------------------------------------------
asm void fn_801A29A0() {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f1, 0x8(r1)
    stfd f2, 0x10(r1)
    lwz r3, 0x8(r1)
    lwz r0, 0x10(r1)
    clrrwi r0, r0, 31
    rlwimi r0, r3, 0, 1, 31
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    addi r1, r1, 0x20
    blr
}

