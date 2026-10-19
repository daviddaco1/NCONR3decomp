#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_tan.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A16D8;

// Forward declarations
void fn_801A07C8();
void fn_801A23D4();
void fn_801A2FA0();

// ----------------------------------------------------------------------------
// fn_801A2FA0
// ----------------------------------------------------------------------------
asm void fn_801A2FA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_804A16D8
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_801A2FD8
    li r3, 0x1
    bl fn_801A23D4
    b lbl_801A3008
lbl_801A2FD8:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_801A2FEC
    fsub f1, f1, f1
    b lbl_801A3008
lbl_801A2FEC:
    addi r3, r1, 0x10
    bl fn_801A07C8
    clrlslwi r0, r3, 31, 1
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    subfic r3, r0, 0x1
    bl fn_801A23D4
lbl_801A3008:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

