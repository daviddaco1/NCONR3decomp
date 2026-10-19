#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/GCN_Mem_Alloc.cpp
// Total functions: 2

// Small Data symbols (@sda21)
float lbl_8049D1D8;
float lbl_8049D8B0;

// Global data symbols (@ha/@l)
u8 lbl_8033B330[];

// Forward declarations
void OSGetArenaHi();
void OSGetArenaLo();
void OSReport();
void OSSetArenaLo();
void exit();
void fn_80195AB0();
void fn_80195B68();
void fn_8019CA58();
void fn_803149A8();
void fn_80314A20();
void fn_80314A30();
void fn_80314AA0();

// ----------------------------------------------------------------------------
// fn_80195AB0
// ----------------------------------------------------------------------------
asm void fn_80195AB0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8049D1D8
    cmpwi r0, -0x1
    bne lbl_80195B40
    lis r31, lbl_8033B330@ha
    addi r3, r31, lbl_8033B330@l
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, lbl_8033B330@l
    addi r3, r3, 0x36
    opword 0x4CC63182
    bl OSReport
    bl OSGetArenaLo
    mr r30, r3
    bl OSGetArenaHi
    mr r31, r3
    mr r3, r30
    mr r4, r31
    li r5, 0x1
    bl fn_80314A30
    mr r30, r3
    bl OSSetArenaLo
    addi r0, r30, 0x1f
    clrrwi r30, r31, 5
    mr r4, r30
    clrrwi r3, r0, 5
    bl fn_80314AA0
    bl fn_80314A20
    mr r3, r30
    bl OSSetArenaLo
lbl_80195B40:
    lwz r3, lbl_8049D1D8
    mr r4, r29
    bl fn_803149A8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80195B68
// ----------------------------------------------------------------------------
asm void fn_80195B68() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    bl fn_8019CA58
    li r0, 0x1
    stw r0, lbl_8049D8B0
    li r3, 0x1
    bl exit
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

