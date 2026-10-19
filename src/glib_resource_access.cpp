#include "types.h"

// Translation unit: src/glib_resource_access.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern "C" float lbl_8049C288;
extern "C" float lbl_8049C290;
extern "C" float lbl_8049E898;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803480B0[];
extern "C" u8 lbl_803480D0[];
extern "C" u8 lbl_803480E0[];

// Forward declarations
extern "C" void _restgpr_29();
extern "C" void _savegpr_29();
extern "C" void fn_80016D48();
extern "C" void fn_80016E44();
extern "C" void fn_80035E80();
extern "C" void fn_80035EE0();
extern "C" void fn_80035F10();
extern "C" void fn_80035F40();
extern "C" void fn_80035F70();
extern "C" void fn_80035FA0();
extern "C" void fn_80035FD0();
extern "C" void fn_8003611C();
extern "C" void fn_80036148();
extern "C" void fn_8003617C();
extern "C" void fn_80036184();
extern "C" void fn_800361B4();
extern "C" void fn_800361C0();
extern "C" void fn_800361F0();
extern "C" void fn_80036254();
extern "C" void fn_801A9384();
extern "C" void fn_801CF024();
extern "C" void fn_801CF2A0();
extern "C" void fn_801CF4A8();
extern "C" void fn_801CF5AC();
extern "C" void fn_801CF6B0();
extern "C" void fn_801CFA94();
extern "C" void fn_801CFCC8();
extern "C" void fn_801CFEC8();
extern "C" void fn_801D018C();
extern "C" void fn_801D02AC();
extern "C" void fn_801D45F0();
extern "C" void fn_801D46AC();
extern "C" void fn_802E3184();
extern "C" void fn_802E3390();
extern "C" void fn_802E33D8();

// ----------------------------------------------------------------------------
// fn_80035E80
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035E80() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_801D02AC
    cmpwi r3, 0x0
    bne lbl_80035EC0
    lis r3, lbl_803480E0@ha
    addi r3, r3, lbl_803480E0@l
    li r4, 0x21
    addi r5, r3, 0x19
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035EC0:
    addi r3, r1, 0x8
    bl fn_801CFEC8
    addi r3, r1, 0x8
    bl fn_8003611C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035EE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035EE0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_80036148
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035F10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035F10() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_801CF2A0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035F40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035F40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_801CF4A8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035F70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035F70() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_801CF5AC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035FA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035FA0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl fn_801CF6B0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80035FD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80035FD0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r31, r6
    addi r3, r1, 0x34
    bl fn_80016E44
    addi r3, r1, 0x34
    mr r4, r30
    bl fn_801CF024
    stw r3, 0x18(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    bl fn_80036184
    addi r3, r1, 0x30
    bl fn_80016D48
    cmpwi r3, 0x0
    beq lbl_80036100
    addi r3, r1, 0x30
    bl fn_800361C0
    cmpwi r3, 0x0
    beq lbl_80036088
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    addi r5, r1, 0x14
    addi r6, r1, 0x12
    addi r7, r1, 0x20
    addi r8, r1, 0x28
    addi r9, r1, 0x24
    addi r10, r1, 0x10
    bl fn_801D46AC
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r29
    lwz r4, 0x2c(r1)
    lhz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    lwz r7, 0x20(r1)
    mr r8, r31
    mr r9, r31
    lbz r10, 0x10(r1)
    bl fn_802E3390
    b lbl_800360D0
lbl_80036088:
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    addi r5, r1, 0x14
    addi r6, r1, 0x12
    addi r7, r1, 0x1c
    addi r8, r1, 0x28
    addi r9, r1, 0x24
    addi r10, r1, 0x10
    bl fn_801D45F0
    mr r3, r29
    lwz r4, 0x2c(r1)
    lhz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    lwz r7, 0x1c(r1)
    mr r8, r31
    mr r9, r31
    lbz r10, 0x10(r1)
    bl fn_802E3184
lbl_800360D0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    lfs f1, 0x28(r1)
    lfs f2, 0x24(r1)
    lfs f3, lbl_8049E898
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E33D8
    li r3, 0x1
    b lbl_80036104
lbl_80036100:
    li r3, 0x0
lbl_80036104:
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8003611C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003611C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_801CFA94
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036148
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036148() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801CFCC8
    mr r3, r31
    bl fn_801D018C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003617C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003617C() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80036184
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036184() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800361B4
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800361B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800361B4() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800361C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800361C0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800361F0
    lwz r0, 0x18(r3)
    clrlwi r3, r0, 31
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800361F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800361F0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80016D48
    cmpwi r3, 0x0
    bne lbl_80036238
    bl fn_80036254
    mr r6, r3
    lis r3, lbl_803480D0@ha
    addi r3, r3, lbl_803480D0@l
    li r4, 0x26
    lis r5, lbl_803480B0@ha
    addi r5, r5, lbl_803480B0@l
    la r7, lbl_8049C290
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036238:
    mr r3, r31
    bl fn_8003617C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036254
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036254() {
    nofralloc
    la r3, lbl_8049C288
    blr
}

