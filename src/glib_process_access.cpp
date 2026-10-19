#include "types.h"

// Translation unit: src/glib_process_access.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern "C" float lbl_8049D4C0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80349190[];
extern "C" u8 lbl_803491C4[];
extern "C" u8 lbl_803491D8[];
extern "C" u8 lbl_80349210[];
extern "C" u8 lbl_80349228[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_28();
extern "C" void _savegpr_28();
extern "C" void fn_800379D4();
extern "C" void fn_80037B00();
extern "C" void fn_800389F4();
extern "C" void fn_80043334();
extern "C" void fn_8004352C();
extern "C" void fn_800443B8();
extern "C" void fn_80044478();
extern "C" void fn_80044500();
extern "C" void fn_80044540();
extern "C" void fn_800445B0();
extern "C" void fn_80044620();
extern "C" void fn_80044680();
extern "C" void fn_800447CC();
extern "C" void fn_801A9384();
extern "C" void fn_801EC748();
extern "C" void fn_801EC76C();

// ----------------------------------------------------------------------------
// fn_800443B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800443B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4C0
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80044434
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80044434
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80044434
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_80044434
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80044434
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80044434
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_80044438
lbl_80044434:
    li r6, 0x1
lbl_80044438:
    cmpwi r6, 0x0
    bne lbl_80044460
    lis r3, lbl_80349210@ha
    addi r3, r3, lbl_80349210@l
    li r4, 0x2d
    lis r5, lbl_803491D8@ha
    addi r5, r5, lbl_803491D8@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80044460:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80044478
// ----------------------------------------------------------------------------
extern "C" asm void fn_80044478() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r6
    bl fn_800443B8
    mr r4, r28
    mr r5, r29
    subic r0, r30, 0x1
    subfe r6, r0, r30
    subic r0, r31, 0x1
    subfe r7, r0, r31
    li r8, 0x0
    bl fn_8004352C
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800444E4
    lis r3, lbl_80349228@ha
    addi r3, r3, lbl_80349228@l
    li r4, 0x55
    addi r5, r3, 0x18
    opword 0x4CC63182
    bl fn_801A9384
lbl_800444E4:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80044500
// ----------------------------------------------------------------------------
extern "C" asm void fn_80044500() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800443B8
    mr r4, r31
    lwz r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80044540
// ----------------------------------------------------------------------------
extern "C" asm void fn_80044540() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    bl fn_800443B8
    mr r31, r3
    bl fn_800389F4
    mr r30, r3
    lwz r0, 0x0(r29)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_800447CC
    mr r5, r3
    mr r3, r30
    addi r4, r1, 0xc
    bl fn_800379D4
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800445B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800445B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    bl fn_800443B8
    mr r31, r3
    bl fn_800389F4
    mr r30, r3
    lwz r0, 0x0(r29)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r28)
    stw r0, 0xc(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_800447CC
    mr r5, r3
    mr r3, r30
    addi r4, r1, 0xc
    bl fn_80037B00
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80044620
// ----------------------------------------------------------------------------
extern "C" asm void fn_80044620() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r4
    bl fn_800443B8
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_800447CC
    mr r31, r3
    mr r4, r30
    bl fn_801EC748
    mr r3, r31
    mr r4, r30
    bl fn_801EC76C
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80044680
// ----------------------------------------------------------------------------
extern "C" asm void fn_80044680() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D4C0
    cmpwi r0, 0x0
    bne lbl_800447B4
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r31, r3, 0x60
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x80
    bl fn_80043334
    stw r3, lbl_8049D4C0
    cmpwi r31, 0x0
    beq lbl_800447AC
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_80044704
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80044704
    li r11, 0x0
lbl_80044704:
    cmpwi r11, 0x0
    bne lbl_80044720
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80044720
    li r10, 0x0
lbl_80044720:
    cmpwi r10, 0x0
    bne lbl_80044738
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_80044738
    li r9, 0x0
lbl_80044738:
    cmpwi r9, 0x0
    bne lbl_80044754
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80044754
    li r8, 0x0
lbl_80044754:
    cmpwi r8, 0x0
    bne lbl_80044770
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80044770
    li r7, 0x0
lbl_80044770:
    cmpwi r7, 0x0
    bne lbl_8004478C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8004478C
    li r5, 0x0
lbl_8004478C:
    cmpwi r5, 0x0
    bne lbl_800447AC
    lis r3, lbl_80349228@ha
    addi r3, r3, lbl_80349228@l
    li r4, 0xff
    addi r5, r3, 0x3d
    opword 0x4CC63182
    bl fn_801A9384
lbl_800447AC:
    li r3, 0x1
    b lbl_800447B8
lbl_800447B4:
    li r3, 0x0
lbl_800447B8:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800447CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800447CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lhz r4, 0x2(r4)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80044818
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_8004483C
lbl_80044818:
    lis r3, lbl_803491C4@ha
    addi r3, r3, lbl_803491C4@l
    li r4, 0x127
    lis r5, lbl_80349190@ha
    addi r5, r5, lbl_80349190@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8004483C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

