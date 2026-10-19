#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/ptmf.cpp
// Total functions: 1

// Forward declarations
void fn_80193C64();

// ----------------------------------------------------------------------------
// fn_80193C64
// ----------------------------------------------------------------------------
asm void fn_80193C64() {
    nofralloc
    lwz r0, 0x0(r12)
    lwz r11, 0x4(r12)
    lwz r12, 0x8(r12)
    add r3, r3, r0
    cmpwi r11, 0x0
    blt lbl_80193C84
    lwzx r12, r3, r12
    lwzx r12, r12, r11
lbl_80193C84:
    mtctr r12
    bctr
}

