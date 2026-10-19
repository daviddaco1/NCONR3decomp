#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_atan2.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A12E8;
float lbl_804A12F0;
float lbl_804A12F8;
float lbl_804A1300;
float lbl_804A1308;
float lbl_804A1310;
float lbl_804A1318;
float lbl_804A1320;
float lbl_804A1328;
float lbl_804A1330;
float lbl_804A1338;

// Forward declarations
void fn_8019F614();
void fn_801A2624();

// ----------------------------------------------------------------------------
// fn_8019F614
// ----------------------------------------------------------------------------
asm void fn_8019F614() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, 0x7ff0
    stfd f2, 0x10(r1)
    lwz r8, 0x14(r1)
    stw r0, 0x34(r1)
    neg r0, r8
    lwz r4, 0x10(r1)
    or r0, r8, r0
    stfd f1, 0x8(r1)
    clrlwi r6, r4, 1
    srwi r0, r0, 31
    lwz r5, 0x8(r1)
    or r0, r6, r0
    stw r31, 0x2c(r1)
    cmplw r0, r3
    lwz r9, 0xc(r1)
    clrlwi r7, r5, 1
    bgt lbl_8019F678
    neg r0, r9
    or r0, r9, r0
    srwi r0, r0, 31
    or r0, r7, r0
    cmplw r0, r3
    ble lbl_8019F680
lbl_8019F678:
    fadd f1, f2, f1
    b lbl_8019F858
lbl_8019F680:
    subis r0, r4, 0x3ff0
    or. r0, r0, r8
    bne lbl_8019F694
    bl fn_801A2624
    b lbl_8019F858
lbl_8019F694:
    or. r0, r7, r9
    rlwinm r31, r4, 2, 30, 30
    rlwimi r31, r5, 1, 31, 31
    bne lbl_8019F6D4
    cmplwi r31, 0x1
    ble lbl_8019F858
    cmpwi r31, 0x2
    beq lbl_8019F6C4
    cmpwi r31, 0x3
    beq lbl_8019F6CC
    b lbl_8019F6D4
    b lbl_8019F858
lbl_8019F6C4:
    lfd f1, lbl_804A12E8
    b lbl_8019F858
lbl_8019F6CC:
    lfd f1, lbl_804A12F0
    b lbl_8019F858
lbl_8019F6D4:
    or. r0, r6, r8
    bne lbl_8019F6F4
    cmpwi r5, 0x0
    bge lbl_8019F6EC
    lfd f1, lbl_804A12F8
    b lbl_8019F858
lbl_8019F6EC:
    lfd f1, lbl_804A1300
    b lbl_8019F858
lbl_8019F6F4:
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_8019F794
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_8019F750
    cmpwi r31, 0x0
    beq lbl_8019F730
    cmpwi r31, 0x1
    beq lbl_8019F738
    cmpwi r31, 0x2
    beq lbl_8019F740
    cmpwi r31, 0x3
    beq lbl_8019F748
    b lbl_8019F794
lbl_8019F730:
    lfd f1, lbl_804A1308
    b lbl_8019F858
lbl_8019F738:
    lfd f1, lbl_804A1310
    b lbl_8019F858
lbl_8019F740:
    lfd f1, lbl_804A1318
    b lbl_8019F858
lbl_8019F748:
    lfd f1, lbl_804A1320
    b lbl_8019F858
lbl_8019F750:
    cmpwi r31, 0x0
    beq lbl_8019F774
    cmpwi r31, 0x1
    beq lbl_8019F77C
    cmpwi r31, 0x2
    beq lbl_8019F784
    cmpwi r31, 0x3
    beq lbl_8019F78C
    b lbl_8019F794
lbl_8019F774:
    lfd f1, lbl_804A1328
    b lbl_8019F858
lbl_8019F77C:
    lfd f1, lbl_804A1330
    b lbl_8019F858
lbl_8019F784:
    lfd f1, lbl_804A12E8
    b lbl_8019F858
lbl_8019F78C:
    lfd f1, lbl_804A12F0
    b lbl_8019F858
lbl_8019F794:
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_8019F7B8
    cmpwi r5, 0x0
    bge lbl_8019F7B0
    lfd f1, lbl_804A12F8
    b lbl_8019F858
lbl_8019F7B0:
    lfd f1, lbl_804A1300
    b lbl_8019F858
lbl_8019F7B8:
    subf r0, r6, r7
    srawi r0, r0, 20
    cmpwi r0, 0x3c
    ble lbl_8019F7D4
    lfd f1, lbl_804A1300
    stfd f1, 0x18(r1)
    b lbl_8019F800
lbl_8019F7D4:
    cmpwi r4, 0x0
    bge lbl_8019F7F0
    cmpwi r0, -0x3c
    bge lbl_8019F7F0
    lfd f1, lbl_804A1328
    stfd f1, 0x18(r1)
    b lbl_8019F800
lbl_8019F7F0:
    fdiv f0, f1, f2
    fabs f1, f0
    bl fn_801A2624
    stfd f1, 0x18(r1)
lbl_8019F800:
    cmpwi r31, 0x0
    beq lbl_8019F858
    cmpwi r31, 0x1
    beq lbl_8019F820
    cmpwi r31, 0x2
    beq lbl_8019F834
    b lbl_8019F848
    b lbl_8019F858
lbl_8019F820:
    lwz r0, 0x18(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x18(r1)
    lfd f1, 0x18(r1)
    b lbl_8019F858
lbl_8019F834:
    lfd f2, lbl_804A1338
    lfd f0, lbl_804A12E8
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_8019F858
lbl_8019F848:
    lfd f2, lbl_804A1338
    lfd f0, lbl_804A12E8
    fsub f1, f1, f2
    fsub f1, f1, f0
lbl_8019F858:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

