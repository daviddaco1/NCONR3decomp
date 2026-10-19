#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_pow.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_804A13F0;
float lbl_804A13F8;
float lbl_804A1400;
float lbl_804A1408;
float lbl_804A1410;
float lbl_804A1418;
float lbl_804A1420;
float lbl_804A1428;
float lbl_804A1430;
float lbl_804A1438;
float lbl_804A1440;
float lbl_804A1448;
float lbl_804A1450;
float lbl_804A1458;
float lbl_804A1460;
float lbl_804A1468;
float lbl_804A1470;
float lbl_804A1478;
float lbl_804A1480;
float lbl_804A1488;
float lbl_804A1490;
float lbl_804A1498;
float lbl_804A14A0;
float lbl_804A14A8;
float lbl_804A14B0;
float lbl_804A14B8;
float lbl_804A14C0;
float lbl_804A14C8;
float lbl_804A14D0;
float lbl_804A14D8;
float lbl_804A14E0;
float lbl_804A14E8;
float lbl_804A14F0;
float lbl_804A14F8;

// Global data symbols (@ha/@l)
u8 lbl_8033C010[];
u8 lbl_8049C418[];

// Forward declarations
void fn_8019FFB4();
void fn_801A3370();
void fn_801A3374();

// ----------------------------------------------------------------------------
// fn_8019FFB4
// ----------------------------------------------------------------------------
asm void fn_8019FFB4() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    stfd f26, 0x60(r1)
    opword 0xF3410068
    stfd f2, 0x10(r1)
    lis r3, lbl_8033C010@ha
    addi r3, r3, lbl_8033C010@l
    lwz r5, 0x10(r1)
    stfd f1, 0x8(r1)
    lwz r11, 0x14(r1)
    clrlwi r7, r5, 1
    lwz r9, 0x8(r1)
    or. r0, r7, r11
    lwz r10, 0xc(r1)
    clrlwi r6, r9, 1
    bne lbl_801A0028
    lfd f1, lbl_804A13F0
    b lbl_801A0788
lbl_801A0028:
    lis r0, 0x7ff0
    cmpw r6, r0
    bgt lbl_801A0068
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_801A0048
    cmpwi r10, 0x0
    bne lbl_801A0068
lbl_801A0048:
    lis r0, 0x7ff0
    cmpw r7, r0
    bgt lbl_801A0068
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_801A0070
    cmpwi r11, 0x0
    beq lbl_801A0070
lbl_801A0068:
    fadd f1, f1, f2
    b lbl_801A0788
lbl_801A0070:
    cmpwi r9, 0x0
    li r4, 0x0
    bge lbl_801A00F0
    lis r0, 0x4340
    cmpw r7, r0
    blt lbl_801A0090
    li r4, 0x2
    b lbl_801A00F0
lbl_801A0090:
    lis r0, 0x3ff0
    cmpw r7, r0
    blt lbl_801A00F0
    srawi r8, r7, 20
    subi r0, r8, 0x3ff
    cmpwi r0, 0x14
    ble lbl_801A00CC
    subfic r0, r0, 0x34
    srw r8, r11, r0
    slw r0, r8, r0
    cmplw r11, r0
    bne lbl_801A00F0
    clrlwi r0, r8, 31
    subfic r4, r0, 0x2
    b lbl_801A00F0
lbl_801A00CC:
    cmpwi r11, 0x0
    bne lbl_801A00F0
    subfic r0, r0, 0x14
    sraw r8, r7, r0
    slw r0, r8, r0
    cmpw r7, r0
    bne lbl_801A00F0
    clrlwi r0, r8, 31
    subfic r4, r0, 0x2
lbl_801A00F0:
    cmpwi r11, 0x0
    bne lbl_801A01A4
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_801A0154
    subis r0, r6, 0x3ff0
    or. r0, r0, r10
    bne lbl_801A0118
    fsub f1, f2, f2
    b lbl_801A0788
lbl_801A0118:
    lis r0, 0x3ff0
    cmpw r6, r0
    blt lbl_801A013C
    cmpwi r5, 0x0
    blt lbl_801A0134
    fmr f1, f2
    b lbl_801A0788
lbl_801A0134:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A013C:
    cmpwi r5, 0x0
    bge lbl_801A014C
    fneg f1, f2
    b lbl_801A0788
lbl_801A014C:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A0154:
    subis r0, r7, 0x3ff0
    cmplwi r0, 0x0
    bne lbl_801A0174
    cmpwi r5, 0x0
    bge lbl_801A0788
    lfd f0, lbl_804A13F0
    fdiv f1, f0, f1
    b lbl_801A0788
lbl_801A0174:
    subis r0, r5, 0x4000
    cmplwi r0, 0x0
    bne lbl_801A0188
    fmul f1, f1, f1
    b lbl_801A0788
lbl_801A0188:
    subis r0, r5, 0x3fe0
    cmplwi r0, 0x0
    bne lbl_801A01A4
    cmpwi r9, 0x0
    blt lbl_801A01A4
    bl fn_801A3374
    b lbl_801A0788
lbl_801A01A4:
    fabs f0, f1
    cmpwi r10, 0x0
    stfd f0, 0x48(r1)
    bne lbl_801A0218
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    beq lbl_801A01D4
    cmpwi r6, 0x0
    beq lbl_801A01D4
    subis r0, r6, 0x3ff0
    cmplwi r0, 0x0
    bne lbl_801A0218
lbl_801A01D4:
    cmpwi r5, 0x0
    bge lbl_801A01E4
    lfd f1, lbl_804A13F0
    fdiv f0, f1, f0
lbl_801A01E4:
    cmpwi r9, 0x0
    bge lbl_801A0210
    subis r0, r6, 0x3ff0
    or. r0, r0, r4
    bne lbl_801A0204
    fsub f0, f0, f0
    fdiv f0, f0, f0
    b lbl_801A0210
lbl_801A0204:
    cmpwi r4, 0x1
    bne lbl_801A0210
    fneg f0, f0
lbl_801A0210:
    fmr f1, f0
    b lbl_801A0788
lbl_801A0218:
    srawi r8, r9, 31
    addi r0, r8, 0x1
    or. r8, r0, r4
    bne lbl_801A023C
    lis r3, lbl_8049C418@ha
    li r0, 0x21
    stw r0, lbl_8049D8C8
    lfs f1, lbl_8049C418@l(r3)
    b lbl_801A0788
lbl_801A023C:
    lis r8, 0x41e0
    cmpw r7, r8
    ble lbl_801A0340
    lis r3, 0x43f0
    cmpw r7, r3
    ble lbl_801A0290
    lis r0, 0x3ff0
    cmpw r6, r0
    bge lbl_801A0278
    cmpwi r5, 0x0
    bge lbl_801A0270
    lfd f1, lbl_804A1400
    b lbl_801A0788
lbl_801A0270:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A0278:
    cmpwi r5, 0x0
    ble lbl_801A0288
    lfd f1, lbl_804A1400
    b lbl_801A0788
lbl_801A0288:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A0290:
    lis r3, 0x3ff0
    subi r7, r3, 0x1
    cmpw r6, r7
    bge lbl_801A02B8
    cmpwi r5, 0x0
    bge lbl_801A02B0
    lfd f1, lbl_804A1400
    b lbl_801A0788
lbl_801A02B0:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A02B8:
    cmpw r6, r3
    ble lbl_801A02D8
    cmpwi r5, 0x0
    ble lbl_801A02D0
    lfd f1, lbl_804A1400
    b lbl_801A0788
lbl_801A02D0:
    lfd f1, lbl_804A13F8
    b lbl_801A0788
lbl_801A02D8:
    lfd f3, lbl_804A13F0
    li r3, 0x0
    lfd f0, lbl_804A1418
    fsub f8, f1, f3
    lfd f1, lbl_804A1428
    lfd f5, lbl_804A1410
    lfd f3, lbl_804A1420
    fmul f6, f0, f8
    lfd f4, lbl_804A1408
    lfd f0, lbl_804A1430
    fmul f7, f8, f8
    fsub f5, f5, f6
    fmul f6, f3, f8
    fmul f5, f8, f5
    fmul f1, f1, f8
    fsub f3, f4, f5
    fmul f3, f7, f3
    fmul f0, f0, f3
    fsub f1, f1, f0
    fadd f0, f6, f1
    stfd f0, 0x30(r1)
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f6
    fsub f0, f1, f0
    b lbl_801A0548
lbl_801A0340:
    lis r5, 0x10
    li r11, 0x0
    cmpw r6, r5
    bge lbl_801A0364
    lfd f1, lbl_804A1438
    li r11, -0x35
    fmul f0, f0, f1
    stfd f0, 0x48(r1)
    lwz r6, 0x48(r1)
lbl_801A0364:
    lis r5, 0x4
    clrlwi r8, r6, 12
    subi r5, r5, 0x6772
    srawi r6, r6, 20
    cmpw r8, r5
    oris r7, r8, 0x3ff0
    add r5, r11, r6
    subi r11, r5, 0x3ff
    bgt lbl_801A0390
    li r6, 0x0
    b lbl_801A03B4
lbl_801A0390:
    lis r5, 0xc
    subi r5, r5, 0x4986
    cmpw r8, r5
    bge lbl_801A03A8
    li r6, 0x1
    b lbl_801A03B4
lbl_801A03A8:
    subis r7, r7, 0x10
    li r6, 0x0
    addi r11, r11, 0x1
lbl_801A03B4:
    stw r7, 0x48(r1)
    srawi r9, r7, 1
    slwi r10, r6, 3
    addi r5, r3, 0x0
    lfdx f8, r5, r10
    slwi r8, r6, 18
    lfd f10, 0x48(r1)
    xoris r6, r11, 0x8000
    lfd f0, lbl_804A13F8
    lis r5, 0x4330
    fadd f3, f10, f8
    lfd f1, lbl_804A13F0
    fsub f26, f10, f8
    lfd f7, lbl_804A1468
    lfd f6, lbl_804A1458
    oris r9, r9, 0x2000
    fdiv f1, f1, f3
    addis r8, r8, 0x8
    add r8, r9, r8
    stfd f0, 0x18(r1)
    lfd f3, lbl_804A1460
    li r9, 0x0
    fmul f4, f26, f1
    stw r8, 0x18(r1)
    lfd f13, lbl_804A1450
    addi r7, r3, 0x20
    lfd f9, 0x18(r1)
    stfd f4, 0x20(r1)
    fmul f5, f4, f4
    stw r9, 0x24(r1)
    lfd f30, lbl_804A1448
    fsub f8, f9, f8
    lfd f0, 0x20(r1)
    stw r6, 0x5c(r1)
    fmul f7, f7, f5
    stw r5, 0x58(r1)
    lfd f31, lbl_804A1440
    fsub f8, f10, f8
    lfd f12, lbl_804A1470
    fmul f28, f0, f9
    fadd f7, f3, f7
    lfd f10, lbl_804A1480
    fmul f27, f0, f8
    lfd f9, lbl_804A1488
    lfd f11, lbl_804A1478
    fmul f7, f5, f7
    lfdx f8, r7, r10
    fsub f28, f26, f28
    fmul f3, f0, f0
    fadd f29, f6, f7
    lfd f7, lbl_804A14F8
    fsub f27, f28, f27
    lfd f6, 0x58(r1)
    fmul f28, f5, f5
    fmul f29, f5, f29
    fmul f27, f1, f27
    fadd f13, f13, f29
    fadd f1, f12, f3
    fmul f29, f5, f13
    fadd f13, f0, f4
    fadd f30, f30, f29
    fmul f13, f27, f13
    fmul f30, f5, f30
    fsub f5, f6, f7
    fadd f6, f31, f30
    fmul f26, f28, f6
    fadd f26, f26, f13
    fadd f1, f1, f26
    stfd f1, 0x18(r1)
    stw r9, 0x1c(r1)
    lfd f7, 0x18(r1)
    fsub f6, f7, f12
    fmul f1, f27, f7
    fsub f3, f6, f3
    fmul f6, f0, f7
    fsub f0, f26, f3
    fmul f0, f0, f4
    fadd f4, f1, f0
    fadd f3, f6, f4
    stfd f3, 0x40(r1)
    stw r9, 0x44(r1)
    lfd f3, 0x40(r1)
    fsub f0, f3, f6
    fmul f1, f10, f3
    fsub f0, f4, f0
    fmul f3, f11, f3
    fmul f0, f9, f0
    fadd f0, f1, f0
    fadd f4, f8, f0
    addi r3, r3, 0x10
    fadd f0, f3, f4
    lfdx f1, r3, r10
    fadd f0, f0, f1
    fadd f0, f5, f0
    stfd f0, 0x30(r1)
    stw r9, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f5
    fsub f0, f0, f1
    fsub f0, f0, f3
    fsub f0, f4, f0
lbl_801A0548:
    subi r3, r4, 0x1
    lfd f31, lbl_804A13F0
    or. r0, r0, r3
    bne lbl_801A055C
    lfd f31, lbl_804A1490
lbl_801A055C:
    stfd f2, 0x38(r1)
    li r0, 0x0
    fmul f0, f2, f0
    lfd f1, 0x30(r1)
    stw r0, 0x3c(r1)
    lis r0, 0x4090
    lfd f3, 0x38(r1)
    fsub f2, f2, f3
    fmul f3, f3, f1
    fmul f1, f1, f2
    fadd f10, f1, f0
    fadd f0, f10, f3
    stfd f0, 0x50(r1)
    lwz r6, 0x50(r1)
    lwz r5, 0x54(r1)
    cmpw r6, r0
    blt lbl_801A05E0
    subis r0, r6, 0x4090
    or. r0, r0, r5
    beq lbl_801A05BC
    lfd f1, lbl_804A1498
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_801A0788
lbl_801A05BC:
    lfd f1, lbl_804A14A0
    fsub f0, f0, f3
    fadd f1, f1, f10
    fcmpo cr0, f1, f0
    ble lbl_801A0634
    lfd f1, lbl_804A1498
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_801A0788
lbl_801A05E0:
    lis r3, 0x4091
    clrlwi r4, r6, 1
    subi r0, r3, 0x3400
    cmpw r4, r0
    blt lbl_801A0634
    addis r3, r6, 0x3f6f
    addi r0, r3, 0x3400
    or. r0, r0, r5
    beq lbl_801A0614
    lfd f1, lbl_804A14A8
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_801A0788
lbl_801A0614:
    fsub f0, f0, f3
    fcmpo cr0, f10, f0
    opword 0x4C401382
    bne lbl_801A0634
    lfd f1, lbl_804A14A8
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_801A0788
lbl_801A0634:
    clrlwi r3, r6, 1
    lis r0, 0x3fe0
    cmpw r3, r0
    extrwi r4, r6, 11, 1
    li r3, 0x0
    ble lbl_801A06A4
    lis r3, 0x10
    subi r0, r4, 0x3fe
    sraw r0, r3, r0
    lfd f0, lbl_804A13F8
    add r7, r6, r0
    stfd f0, 0x28(r1)
    clrlwi r0, r7, 1
    subi r3, r3, 0x1
    srawi r4, r0, 20
    cmpwi r6, 0x0
    subi r5, r4, 0x3ff
    clrlwi r0, r7, 12
    sraw r4, r3, r5
    oris r3, r0, 0x10
    subfic r0, r5, 0x14
    andc r4, r7, r4
    stw r4, 0x28(r1)
    sraw r3, r3, r0
    bge lbl_801A069C
    neg r3, r3
lbl_801A069C:
    lfd f0, 0x28(r1)
    fsub f3, f3, f0
lbl_801A06A4:
    fadd f0, f10, f3
    li r0, 0x0
    lfd f2, lbl_804A14B8
    slwi r4, r3, 20
    stfd f0, 0x28(r1)
    lfd f0, lbl_804A14C0
    stw r0, 0x2c(r1)
    lfd f9, lbl_804A14B0
    lfd f8, 0x28(r1)
    lfd f6, lbl_804A14E8
    fsub f3, f8, f3
    lfd f1, lbl_804A14E0
    fmul f7, f0, f8
    lfd f5, lbl_804A14D8
    lfd f4, lbl_804A14D0
    fsub f0, f10, f3
    fmul f10, f9, f8
    lfd f3, lbl_804A14C8
    fmul f8, f2, f0
    lfd f2, lbl_804A14F0
    lfd f0, lbl_804A13F0
    fadd f11, f8, f7
    fadd f9, f10, f11
    fmul f7, f9, f9
    fsub f8, f9, f10
    fmul f6, f6, f7
    fsub f8, f11, f8
    fadd f6, f1, f6
    fmul f1, f9, f8
    fmul f6, f7, f6
    fadd f1, f8, f1
    fadd f5, f5, f6
    fmul f5, f7, f5
    fadd f4, f4, f5
    fmul f4, f7, f4
    fadd f3, f3, f4
    fmul f3, f7, f3
    fsub f4, f9, f3
    fmul f3, f9, f4
    fsub f2, f4, f2
    fdiv f2, f3, f2
    fsub f1, f2, f1
    fsub f1, f1, f9
    fsub f1, f0, f1
    stfd f1, 0x50(r1)
    lwz r0, 0x50(r1)
    add r0, r0, r4
    srawi. r0, r0, 20
    bgt lbl_801A0774
    bl fn_801A3370
    stfd f1, 0x50(r1)
    b lbl_801A0780
lbl_801A0774:
    lwz r0, 0x50(r1)
    add r0, r0, r4
    stw r0, 0x50(r1)
lbl_801A0780:
    lfd f0, 0x50(r1)
    fmul f1, f31, f0
lbl_801A0788:
    lwz r0, 0xc4(r1)
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    opword 0xE3C100A8
    lfd f30, 0xa0(r1)
    opword 0xE3A10098
    lfd f29, 0x90(r1)
    opword 0xE3810088
    lfd f28, 0x80(r1)
    opword 0xE3610078
    lfd f27, 0x70(r1)
    opword 0xE3410068
    lfd f26, 0x60(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

