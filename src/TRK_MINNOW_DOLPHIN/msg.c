#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/msg.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D918;

// Global data symbols (@ha/@l)
u8 lbl_803602E0[];

// Forward declarations
void OSReport();
void fn_801A44A0();
void fn_801A53D0();

// ----------------------------------------------------------------------------
// fn_801A53D0
// ----------------------------------------------------------------------------
asm void fn_801A53D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, lbl_8049D918
    cmpwi r0, 0x0
    bne lbl_801A53EC
    li r0, 0x1
lbl_801A53EC:
    sth r0, 0x12(r3)
    clrlwi r4, r0, 16
    addi r0, r4, 0x1
    sth r0, lbl_8049D918
    lwz r4, 0x4(r3)
    addi r3, r3, 0xc
    bl fn_801A44A0
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_801A5420
    lis r3, lbl_803602E0@ha
    addi r3, r3, lbl_803602E0@l
    bl OSReport
lbl_801A5420:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

