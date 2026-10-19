#include "types.h"

// Translation unit: src/glib_physics_access.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern "C" float lbl_8049D4C8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80349570[];
extern "C" u8 lbl_803495A8[];

// Forward declarations
extern "C" void fn_80047D0C();
extern "C" void fn_80047D80();
extern "C" void fn_80047DF4();
extern "C" void fn_80047E74();
extern "C" void fn_80047F10();
extern "C" void fn_80047F24();
extern "C" void fn_80048540();
extern "C" void fn_80048600();
extern "C" void fn_80048634();
extern "C" void fn_80048680();
extern "C" void fn_800486D4();
extern "C" void fn_80048720();
extern "C" void fn_80048754();
extern "C" void fn_801A9384();

// ----------------------------------------------------------------------------
// fn_80048540
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048540() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4C8
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_800485C0
lbl_800485BC:
    li r6, 0x1
lbl_800485C0:
    cmpwi r6, 0x0
    bne lbl_800485E8
    lis r3, lbl_803495A8@ha
    addi r3, r3, lbl_803495A8@l
    li r4, 0x2a
    lis r5, lbl_80349570@ha
    addi r5, r5, lbl_80349570@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_800485E8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80048600
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048600() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80048540
    mr r4, r31
    bl fn_80047D0C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80048634
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048634() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80047DF4
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80048680
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048680() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    bl fn_80048754
    addi r4, r1, 0x8
    bl fn_80047F24
    mr r4, r31
    bl fn_80047F10
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800486D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800486D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80047E74
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80048720
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048720() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80048540
    mr r4, r31
    bl fn_80047D80
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80048754
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048754() {
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

