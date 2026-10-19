#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801EDA40.cpp
// Total functions: 2

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C738[];

// Forward declarations
extern "C" void fn_801EDA40();
extern "C" void fn_801EDA70();

// ----------------------------------------------------------------------------
// fn_801EDA40
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EDA40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    addi r3, r3, 0x4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801EDA70
// ----------------------------------------------------------------------------
extern "C" asm void fn_801EDA70() {
    nofralloc
    lis r3, lbl_8033C738@ha
    addi r3, r3, lbl_8033C738@l
    blr
}

