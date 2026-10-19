#include "types.h"

// Translation unit: src/g_cam_sub.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern "C" float lbl_8049F4F0;
extern "C" float lbl_8049F4F8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8034C384[];
extern "C" u8 lbl_8034C3A0[];
extern "C" u8 lbl_8034C3BC[];
extern "C" u8 lbl_8034C3D8[];
extern "C" u8 lbl_80395728[];

// Forward declarations
extern "C" void fn_80094700();
extern "C" void fn_80094734();
extern "C" void fn_80094790();
extern "C" void fn_800947C0();
extern "C" void fn_800947FC();
extern "C" void fn_8009488C();
extern "C" void fn_800948EC();
extern "C" void fn_8009494C();
extern "C" void fn_8009498C();
extern "C" void fn_800949CC();
extern "C" void fn_80094A0C();
extern "C" void fn_80094A4C();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80094734
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094734() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    addi r4, r4, 0xfd8
    cmplwi r3, 0x32
    bgt lbl_80094784
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r0, 0x20(r3)
    lfd f1, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    b lbl_80094788
lbl_80094784:
    li r3, 0x0
lbl_80094788:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80094790
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094790() {
    nofralloc
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    addi r5, r5, 0xfd8
    cmplwi r3, 0x32
    ble lbl_800947AC
    li r3, 0x0
    blr
lbl_800947AC:
    slwi r0, r3, 2
    add r3, r5, r0
    stw r4, 0x20(r3)
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_800947C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800947C0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80094734
    mr r4, r3
    mr r3, r31
    addi r4, r4, 0x1
    bl fn_80094790
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800947FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800947FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    addi r31, r3, 0xfd8
    bl fn_80094700
    cmpwi r3, 0x0
    bgt lbl_80094834
    lfs f1, lbl_8049F4F8
    b lbl_80094874
lbl_80094834:
    slwi r0, r30, 2
    add r4, r31, r0
    lwz r0, 0x20(r4)
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_80094874:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8009488C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009488C() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0x11a4(r3)
    cmpwi r4, 0x0
    bgt lbl_800948AC
    lfs f1, lbl_8049F4F8
    b lbl_800948E4
lbl_800948AC:
    lwz r0, 0x11a8(r3)
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_800948E4:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800948EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800948EC() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r0, 0x11b4(r4)
    cmpwi r0, 0x0
    bgt lbl_8009490C
    lfs f1, lbl_8049F4F8
    b lbl_80094944
lbl_8009490C:
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x11b8(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_80094944:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8009494C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009494C() {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C384@ha
    addi r5, r5, lbl_8034C384@l
    li r0, 0x7
    mtctr r0
lbl_80094964:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_80094978
    mr r3, r6
    blr
lbl_80094978:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80094964
    li r3, 0x6
    blr
}

// ----------------------------------------------------------------------------
// fn_8009498C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009498C() {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3A0@ha
    addi r5, r5, lbl_8034C3A0@l
    li r0, 0x7
    mtctr r0
lbl_800949A4:
    lwzx r0, r5, r4
    cmpw r3, r0
    bge lbl_800949B8
    mr r3, r6
    blr
lbl_800949B8:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800949A4
    li r3, 0x6
    blr
}

// ----------------------------------------------------------------------------
// fn_800949CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800949CC() {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3BC@ha
    addi r5, r5, lbl_8034C3BC@l
    li r0, 0x7
    mtctr r0
lbl_800949E4:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_800949F8
    mr r3, r6
    blr
lbl_800949F8:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800949E4
    li r3, 0x6
    blr
}

// ----------------------------------------------------------------------------
// fn_80094A0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094A0C() {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3D8@ha
    addi r5, r5, lbl_8034C3D8@l
    li r0, 0x7
    mtctr r0
lbl_80094A24:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_80094A38
    mr r3, r6
    blr
lbl_80094A38:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80094A24
    li r3, 0x6
    blr
}

// ----------------------------------------------------------------------------
// fn_80094A4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094A4C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    addi r3, r31, 0xc0c
    li r4, 0x0
    li r5, 0x8c
    bl memset
    li r3, 0x0
    la r4, lbl_8049F4F8
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    li r0, 0x4
    mtctr r0
lbl_80094A8C:
    add r4, r31, r3
    stfs f1, 0xc2c(r4)
    stfs f0, 0xc3c(r4)
    addi r3, r3, 0x4
    bdnz lbl_80094A8C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

