#include "types.h"

// Translation unit: src/revolution/ax/unk_8029EE28.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float lbl_8049DFC0;
extern float lbl_8049DFC4;
extern float lbl_8049DFC8;
extern float lbl_8049DFCC;

// Forward declarations
extern void fn_8029EE28();

// ----------------------------------------------------------------------------
// fn_8029EE28
// ----------------------------------------------------------------------------
asm void fn_8029EE28() {
    nofralloc
    lwz r0, lbl_8049DFC0
    cmpwi r0, 0x0
    beq lbl_8029EE60
    lwz r5, lbl_8049DFC4
    lwz r3, lbl_8049DFC8
    addi r4, r5, 0x1
    lwz r6, lbl_8049DFCC
    divwu r0, r4, r3
    mullw r0, r0, r3
    mulli r3, r5, 0x38
    subf r0, r0, r4
    stw r0, lbl_8049DFC4
    add r3, r6, r3
    blr
lbl_8029EE60:
    li r3, 0x0
    blr
}

