#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_cos.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1688;

// Forward declarations
void fn_801A07C8();
void fn_801A0B4C();
void fn_801A2314();
void fn_801A29CC();

// ----------------------------------------------------------------------------
// fn_801A29CC
// ----------------------------------------------------------------------------
asm void fn_801A29CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_804A1688
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_801A2A00
    bl fn_801A0B4C
    b lbl_801A2A84
lbl_801A2A00:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_801A2A14
    fsub f1, f1, f1
    b lbl_801A2A84
lbl_801A2A14:
    addi r3, r1, 0x10
    bl fn_801A07C8
    clrlwi. r0, r3, 30
    beq lbl_801A2A38
    cmpwi r0, 0x1
    beq lbl_801A2A48
    cmpwi r0, 0x2
    beq lbl_801A2A60
    b lbl_801A2A74
lbl_801A2A38:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_801A0B4C
    b lbl_801A2A84
lbl_801A2A48:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_801A2314
    fneg f1, f1
    b lbl_801A2A84
lbl_801A2A60:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_801A0B4C
    fneg f1, f1
    b lbl_801A2A84
lbl_801A2A74:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_801A2314
lbl_801A2A84:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

