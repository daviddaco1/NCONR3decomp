#include "types.h"

// Translation unit: src/nw4r/ut/unk_80222F68.cpp
// Total functions: 5

// Forward declarations
extern "C" void fn_80222F68();
extern "C" void fn_80222FDC();
extern "C" void fn_80223054();
extern "C" void fn_80223070();
extern "C" void fn_8022308C();

// ----------------------------------------------------------------------------
// fn_80222F68
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222F68() {
    nofralloc
    lwz r0, 0x0(r3)
    cmplw r0, r4
    beq lbl_80222F7C
    li r3, 0x0
    blr
lbl_80222F7C:
    lhz r0, 0x4(r3)
    cmplwi r0, 0xfeff
    beq lbl_80222F90
    li r3, 0x0
    blr
lbl_80222F90:
    lhz r0, 0x6(r3)
    cmplw r0, r5
    beq lbl_80222FA4
    li r3, 0x0
    blr
lbl_80222FA4:
    clrlslwi r4, r6, 16, 3
    lwz r5, 0x8(r3)
    addi r0, r4, 0x10
    cmplw r5, r0
    bge lbl_80222FC0
    li r3, 0x0
    blr
lbl_80222FC0:
    lhz r3, 0xe(r3)
    subf r0, r6, r3
    orc r3, r3, r6
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_80222FDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222FDC() {
    nofralloc
    lwz r7, 0x0(r3)
    lbz r6, 0x0(r7)
    rlwinm. r0, r6, 0, 24, 24
    bne lbl_80222FFC
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    b lbl_8022304C
lbl_80222FFC:
    rlwinm r0, r6, 0, 24, 26
    cmpwi r0, 0xc0
    bne lbl_80223028
    lwz r4, 0x0(r3)
    lbz r5, 0x1(r7)
    addi r0, r4, 0x2
    clrlwi r4, r5, 26
    stw r0, 0x0(r3)
    rlwimi r4, r6, 6, 21, 25
    mr r6, r4
    b lbl_8022304C
lbl_80223028:
    lwz r4, 0x0(r3)
    clrlslwi r5, r6, 27, 12
    lbz r6, 0x1(r7)
    lbz r7, 0x2(r7)
    addi r0, r4, 0x3
    rlwimi r5, r6, 6, 20, 25
    rlwimi r5, r7, 0, 26, 31
    stw r0, 0x0(r3)
    clrlwi r6, r5, 16
lbl_8022304C:
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// fn_80223054
// ----------------------------------------------------------------------------
extern "C" asm void fn_80223054() {
    nofralloc
    mr r5, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r5)
    lhz r3, 0x0(r3)
    addi r0, r4, 0x2
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_80223070
// ----------------------------------------------------------------------------
extern "C" asm void fn_80223070() {
    nofralloc
    mr r5, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r5)
    lbz r3, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_8022308C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022308C() {
    nofralloc
    lwz r6, 0x0(r3)
    li r0, 0x0
    lbz r5, 0x0(r6)
    cmplwi r5, 0x81
    blt lbl_802230A8
    cmplwi r5, 0xa0
    blt lbl_802230B0
lbl_802230A8:
    cmplwi r5, 0xe0
    blt lbl_802230B4
lbl_802230B0:
    li r0, 0x1
lbl_802230B4:
    cmpwi r0, 0x0
    beq lbl_802230D4
    lwz r4, 0x0(r3)
    lbz r6, 0x1(r6)
    rlwimi r6, r5, 8, 16, 23
    addi r0, r4, 0x2
    stw r0, 0x0(r3)
    b lbl_802230E4
lbl_802230D4:
    lwz r4, 0x0(r3)
    mr r6, r5
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_802230E4:
    mr r3, r6
    blr
}

