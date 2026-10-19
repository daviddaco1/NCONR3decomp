#include "types.h"

// Translation unit: src/kir_eye.cpp
// Total functions: 3

// Forward declarations
extern "C" void _restgpr_29();
extern "C" void _savegpr_29();
extern "C" void fn_800E222C();
extern "C" void fn_800E2234();
extern "C" void fn_800E22DC();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_80170E2C();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800E222C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E222C() {
    nofralloc
    li r5, 0x0
    b fn_800E2234
}

// ----------------------------------------------------------------------------
// fn_800E2234
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E2234() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x26
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800E22B8
    cmpwi r31, 0x0
    beq lbl_800E2278
    b lbl_800E228C
lbl_800E2278:
    lwz r3, 0x110(r29)
    li r4, 0x18
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800E228C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x18
    bl memset
    mr r3, r29
    mr r4, r31
    li r5, 0x26
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800E22C4
lbl_800E22B8:
    mr r3, r29
    mr r4, r30
    bl fn_800E22DC
lbl_800E22C4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800E22DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E22DC() {
    nofralloc
    li r3, 0x1
    blr
}

