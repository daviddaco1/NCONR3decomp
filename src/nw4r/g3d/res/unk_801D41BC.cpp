#include "types.h"

// Translation unit: src/nw4r/g3d/res/unk_801D41BC.cpp
// Total functions: 1

// Forward declarations
extern "C" void fn_801D41BC();

// ----------------------------------------------------------------------------
// fn_801D41BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D41BC() {
    nofralloc
    cmpwi r4, 0x0
    lwz r3, 0x0(r3)
    beq lbl_801D41D0
    lwz r0, 0x14(r3)
    stw r0, 0x0(r4)
lbl_801D41D0:
    cmpwi r5, 0x0
    beq lbl_801D41E0
    lwz r0, 0x18(r3)
    stw r0, 0x0(r5)
lbl_801D41E0:
    cmpwi r6, 0x0
    beqlr
    lbz r0, 0x1c(r3)
    stb r0, 0x0(r6)
    blr
}

