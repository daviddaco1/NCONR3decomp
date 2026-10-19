#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_sin.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A16D0;

// Forward declarations
void fn_801A07C8();
void fn_801A0B4C();
void fn_801A2314();
void fn_801A2ED4();

// ----------------------------------------------------------------------------
// fn_801A2ED4
// ----------------------------------------------------------------------------
asm void fn_801A2ED4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_804A16D0
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_801A2F0C
    li r3, 0x0
    bl fn_801A2314
    b lbl_801A2F90
lbl_801A2F0C:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_801A2F20
    fsub f1, f1, f1
    b lbl_801A2F90
lbl_801A2F20:
    addi r3, r1, 0x10
    bl fn_801A07C8
    clrlwi. r0, r3, 30
    beq lbl_801A2F44
    cmpwi r0, 0x1
    beq lbl_801A2F58
    cmpwi r0, 0x2
    beq lbl_801A2F68
    b lbl_801A2F80
lbl_801A2F44:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_801A2314
    b lbl_801A2F90
lbl_801A2F58:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_801A0B4C
    b lbl_801A2F90
lbl_801A2F68:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_801A2314
    fneg f1, f1
    b lbl_801A2F90
lbl_801A2F80:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_801A0B4C
    fneg f1, f1
lbl_801A2F90:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

