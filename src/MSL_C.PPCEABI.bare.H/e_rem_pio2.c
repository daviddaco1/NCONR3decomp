#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_rem_pio2.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1500;
float lbl_804A1508;
float lbl_804A1510;
float lbl_804A1518;
float lbl_804A1520;
float lbl_804A1528;
float lbl_804A1530;
float lbl_804A1538;
float lbl_804A1540;
float lbl_804A1548;
float lbl_804A1550;

// Global data symbols (@ha/@l)
u8 lbl_8033C040[];
u8 lbl_8033C148[];

// Forward declarations
void fn_801A07C8();
void fn_801A0C5C();

// ----------------------------------------------------------------------------
// fn_801A07C8
// ----------------------------------------------------------------------------
asm void fn_801A07C8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, 0x3fe9
    stw r0, 0x64(r1)
    addi r0, r4, 0x21fb
    stw r31, 0x5c(r1)
    stfd f1, 0x8(r1)
    lwz r31, 0x8(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    clrlwi r6, r31, 1
    cmpw r6, r0
    bgt lbl_801A0810
    lfd f0, lbl_804A1500
    stfd f1, 0x0(r3)
    stfd f0, 0x8(r3)
    li r3, 0x0
    b lbl_801A0B34
lbl_801A0810:
    lis r4, 0x4003
    subi r0, r4, 0x2684
    cmpw r6, r0
    bge lbl_801A08D8
    cmpwi r31, 0x0
    ble lbl_801A0880
    lfd f0, lbl_804A1508
    subis r0, r6, 0x3ff9
    cmplwi r0, 0x21fb
    fsub f2, f1, f0
    beq lbl_801A0858
    lfd f1, lbl_804A1510
    fsub f0, f2, f1
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fsub f0, f0, f1
    stfd f0, 0x8(r3)
    b lbl_801A0878
lbl_801A0858:
    lfd f0, lbl_804A1518
    lfd f1, lbl_804A1520
    fsub f2, f2, f0
    fsub f0, f2, f1
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fsub f0, f0, f1
    stfd f0, 0x8(r3)
lbl_801A0878:
    li r3, 0x1
    b lbl_801A0B34
lbl_801A0880:
    lfd f0, lbl_804A1508
    subis r0, r6, 0x3ff9
    cmplwi r0, 0x21fb
    fadd f2, f0, f1
    beq lbl_801A08B0
    lfd f1, lbl_804A1510
    fadd f0, f1, f2
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fadd f0, f1, f0
    stfd f0, 0x8(r3)
    b lbl_801A08D0
lbl_801A08B0:
    lfd f0, lbl_804A1518
    lfd f1, lbl_804A1520
    fadd f2, f2, f0
    fadd f0, f1, f2
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fadd f0, f1, f0
    stfd f0, 0x8(r3)
lbl_801A08D0:
    li r3, -0x1
    b lbl_801A0B34
lbl_801A08D8:
    lis r4, 0x4139
    addi r0, r4, 0x21fb
    cmpw r6, r0
    bgt lbl_801A0A2C
    fabs f5, f1
    lfd f0, lbl_804A1530
    lis r0, 0x4330
    lfd f2, lbl_804A1528
    stw r0, 0x38(r1)
    fmul f4, f0, f5
    lfd f3, lbl_804A1550
    lfd f1, lbl_804A1508
    lfd f0, lbl_804A1510
    fadd f2, f2, f4
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r5, 0x34(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x3c(r1)
    cmpwi r5, 0x20
    lfd f2, 0x38(r1)
    fsub f6, f2, f3
    fmul f1, f1, f6
    fmul f2, f0, f6
    fsub f4, f5, f1
    bge lbl_801A0968
    subi r0, r5, 0x1
    lis r4, lbl_8033C148@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_8033C148@l
    lwzx r0, r4, r0
    cmpw r6, r0
    beq lbl_801A0968
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
    b lbl_801A09F4
lbl_801A0968:
    fsub f0, f4, f2
    srawi r4, r6, 20
    stfd f0, 0x0(r3)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 11, 1
    subf r0, r0, r4
    cmpwi r0, 0x10
    ble lbl_801A09F4
    lfd f1, lbl_804A1518
    fmr f2, f4
    lfd f0, lbl_804A1520
    fmul f3, f1, f6
    fmul f1, f0, f6
    fsub f4, f4, f3
    fsub f0, f2, f4
    fsub f0, f0, f3
    fsub f2, f1, f0
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 11, 1
    subf r0, r0, r4
    cmpwi r0, 0x31
    ble lbl_801A09F4
    lfd f1, lbl_804A1538
    fmr f2, f4
    lfd f0, lbl_804A1540
    fmul f3, f1, f6
    fmul f1, f0, f6
    fsub f4, f4, f3
    fsub f0, f2, f4
    fsub f0, f0, f3
    fsub f2, f1, f0
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
lbl_801A09F4:
    lfd f1, 0x0(r3)
    cmpwi r31, 0x0
    fsub f0, f4, f1
    fsub f0, f0, f2
    stfd f0, 0x8(r3)
    bge lbl_801A0A24
    fneg f1, f1
    fneg f0, f0
    stfd f1, 0x0(r3)
    stfd f0, 0x8(r3)
    neg r3, r5
    b lbl_801A0B34
lbl_801A0A24:
    mr r3, r5
    b lbl_801A0B34
lbl_801A0A2C:
    lis r0, 0x7ff0
    cmpw r6, r0
    blt lbl_801A0A4C
    fsub f0, f1, f1
    stfd f0, 0x8(r3)
    stfd f0, 0x0(r3)
    li r3, 0x0
    b lbl_801A0B34
lbl_801A0A4C:
    srawi r3, r6, 20
    lis r0, 0x4330
    subi r5, r3, 0x416
    lwz r4, 0xc(r1)
    slwi r3, r5, 20
    stw r4, 0x14(r1)
    subf r3, r3, r6
    lfd f4, lbl_804A1550
    stw r3, 0x10(r1)
    addi r3, r1, 0x30
    lfd f3, lbl_804A1548
    li r6, 0x3
    lfd f2, 0x10(r1)
    stw r0, 0x30(r1)
    fctiwz f0, f2
    lfd f1, lbl_804A1500
    stw r0, 0x48(r1)
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f4
    stfd f0, 0x18(r1)
    fsub f0, f2, f0
    fmul f2, f3, f0
    fctiwz f0, f2
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsub f0, f0, f4
    stfd f0, 0x20(r1)
    fsub f0, f2, f0
    fmul f0, f3, f0
    stfd f0, 0x28(r1)
    b lbl_801A0AEC
lbl_801A0AE4:
    subi r3, r3, 0x8
    subi r6, r6, 0x1
lbl_801A0AEC:
    lfd f0, -0x8(r3)
    fcmpu cr0, f1, f0
    beq lbl_801A0AE4
    lis r8, lbl_8033C040@ha
    mr r4, r30
    addi r3, r1, 0x18
    li r7, 0x2
    addi r8, r8, lbl_8033C040@l
    bl fn_801A0C5C
    cmpwi r31, 0x0
    bge lbl_801A0B34
    lfd f1, 0x0(r30)
    neg r3, r3
    lfd f0, 0x8(r30)
    fneg f1, f1
    fneg f0, f0
    stfd f1, 0x0(r30)
    stfd f0, 0x8(r30)
lbl_801A0B34:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

