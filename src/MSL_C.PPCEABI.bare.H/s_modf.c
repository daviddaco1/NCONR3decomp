#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_modf.cpp
// Total functions: 1

// Forward declarations
void fn_801A2DD8();

// ----------------------------------------------------------------------------
// fn_801A2DD8
// ----------------------------------------------------------------------------
asm void fn_801A2DD8() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r4, r5, 11, 1
    subi r7, r4, 0x3ff
    cmpwi r7, 0x14
    bge lbl_801A2E64
    cmpwi r7, 0x0
    bge lbl_801A2E14
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    b lbl_801A2ECC
lbl_801A2E14:
    lis r4, 0x10
    subi r0, r4, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_801A2E48
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_801A2ECC
lbl_801A2E48:
    andc r4, r5, r4
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lfd f0, 0x0(r3)
    fsub f1, f1, f0
    b lbl_801A2ECC
lbl_801A2E64:
    cmpwi r7, 0x33
    ble lbl_801A2E88
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_801A2ECC
lbl_801A2E88:
    subi r0, r7, 0x14
    li r4, -0x1
    srw r4, r4, r0
    and. r0, r6, r4
    bne lbl_801A2EB8
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_801A2ECC
lbl_801A2EB8:
    andc r0, r6, r4
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lfd f0, 0x0(r3)
    fsub f1, f1, f0
lbl_801A2ECC:
    addi r1, r1, 0x10
    blr
}

