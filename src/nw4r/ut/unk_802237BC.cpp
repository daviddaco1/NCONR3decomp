#include "types.h"

// Translation unit: src/nw4r/ut/unk_802237BC.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern "C" float lbl_8049DAA0;
extern "C" float lbl_8049DAA8;

// Forward declarations
extern "C" void fn_802237BC();
extern "C" void fn_802237C4();
extern "C" void fn_802237CC();
extern "C" void fn_802237D8();
extern "C" void fn_8022383C();
extern "C" void fn_802238D4();

// ----------------------------------------------------------------------------
// fn_802237BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802237BC() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802237C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802237C4() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802237CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802237CC() {
    nofralloc
    li r0, 0x0
    stw r0, lbl_8049DAA0
    blr
}

// ----------------------------------------------------------------------------
// fn_802237D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_802237D8() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_80223834
    lwz r0, 0x4(r3)
    li r5, 0x0
    lwz r6, 0x0(r3)
    xoris r5, r5, 0x8000
    add r7, r0, r4
    subfc r0, r7, r6
    subfe r0, r5, r5
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_8022380C
    b lbl_80223830
lbl_8022380C:
    li r6, 0x0
    xoris r4, r6, 0x8000
    subfc r0, r6, r7
    subfe r4, r4, r5
    subfe r4, r5, r5
    neg. r4, r4
    beq lbl_8022382C
    b lbl_80223830
lbl_8022382C:
    mr r6, r7
lbl_80223830:
    stw r6, 0x4(r3)
lbl_80223834:
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8022383C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022383C() {
    nofralloc
    cmpwi r5, 0x1
    beq lbl_80223874
    bge lbl_80223854
    cmpwi r5, 0x0
    bge lbl_80223860
    b lbl_80223874
lbl_80223854:
    cmpwi r5, 0x3
    bge lbl_80223874
    b lbl_8022386C
lbl_80223860:
    li r0, 0x0
    stw r0, 0x4(r3)
    b lbl_80223874
lbl_8022386C:
    lwz r0, 0x0(r3)
    stw r0, 0x4(r3)
lbl_80223874:
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x4(r3)
    li r5, 0x0
    lwz r6, 0x0(r3)
    xoris r5, r5, 0x8000
    add r7, r0, r4
    subfc r0, r7, r6
    subfe r0, r5, r5
    subfe r0, r5, r5
    neg. r0, r0
    beq lbl_802238A8
    b lbl_802238CC
lbl_802238A8:
    li r6, 0x0
    xoris r4, r6, 0x8000
    subfc r0, r6, r7
    subfe r4, r4, r5
    subfe r4, r5, r5
    neg. r4, r4
    beq lbl_802238C8
    b lbl_802238CC
lbl_802238C8:
    mr r6, r7
lbl_802238CC:
    stw r6, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802238D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802238D4() {
    nofralloc
    la r0, lbl_8049DAA0
    stw r0, lbl_8049DAA8
    blr
}

