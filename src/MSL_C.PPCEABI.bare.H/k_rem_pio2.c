#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/k_rem_pio2.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A15A0;
float lbl_804A15A8;
float lbl_804A15B0;
float lbl_804A15B8;
float lbl_804A15C0;
float lbl_804A15C8;
float lbl_804A15D0;
float lbl_804A15D8;

// Global data symbols (@ha/@l)
u8 lbl_8033C1C8[];
u8 lbl_8033C1D8[];

// Forward declarations
void _restfpr_23();
void _savefpr_23();
void fn_801A0C5C();
void fn_801A2A94();
void fn_801A3370();

// ----------------------------------------------------------------------------
// fn_801A0C5C
// ----------------------------------------------------------------------------
asm void fn_801A0C5C() {
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x370
    bl _savefpr_23
    stmw r14, 0x2e0(r1)
    lis r9, 0x2aab
    lis r12, 0x4330
    subi r0, r5, 0x3
    lis r10, lbl_8033C1C8@ha
    subi r9, r9, 0x5555
    slwi r11, r7, 2
    mulhw r0, r9, r0
    addi r10, r10, lbl_8033C1C8@l
    mr r17, r4
    lwzx r21, r10, r11
    stw r12, 0x240(r1)
    mr r16, r3
    srawi r0, r0, 2
    stw r12, 0x248(r1)
    srwi r4, r0, 31
    subi r22, r6, 0x1
    add. r10, r0, r4
    stw r7, 0x8(r1)
    bge lbl_801A0CC4
    li r10, 0x0
lbl_801A0CC4:
    addi r0, r10, 0x1
    add. r9, r22, r21
    mulli r6, r0, 0x18
    subf r7, r22, r10
    lfd f1, lbl_804A15D8
    slwi r4, r7, 2
    subf r19, r6, r5
    addi r0, r9, 0x1
    add r4, r8, r4
    addi r5, r1, 0x1a0
    mtctr r0
    blt lbl_801A0D2C
lbl_801A0CF4:
    cmpwi r7, 0x0
    bge lbl_801A0D04
    lfd f0, lbl_804A15A0
    b lbl_801A0D18
lbl_801A0D04:
    lwz r0, 0x0(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f1
lbl_801A0D18:
    stfd f0, 0x0(r5)
    addi r5, r5, 0x8
    addi r4, r4, 0x4
    addi r7, r7, 0x1
    bdnz lbl_801A0CF4
lbl_801A0D2C:
    addi r0, r22, 0x1
    addi r5, r1, 0x60
    clrrwi r25, r22, 31
    addi r12, r1, 0x1a0
    clrrwi r24, r0, 31
    li r9, 0x0
    lis r4, 0x8000
    b lbl_801A0F10
lbl_801A0D4C:
    cmpwi cr1, r22, 0x0
    lfd f6, lbl_804A15A0
    li r7, 0x0
    blt cr1, lbl_801A0F04
    addi r0, r22, 0x1
    subi r14, r22, 0x8
    cmpwi r0, 0x8
    ble lbl_801A0EC0
    li r6, 0x0
    li r11, 0x0
    blt cr1, lbl_801A0D88
    subi r0, r4, 0x2
    cmpw r22, r0
    bgt lbl_801A0D88
    li r11, 0x1
lbl_801A0D88:
    cmpwi r11, 0x0
    beq lbl_801A0DB4
    cmpwi r25, 0x0
    li r0, 0x1
    bne lbl_801A0DA8
    cmpwi r24, 0x0
    beq lbl_801A0DA8
    li r0, 0x0
lbl_801A0DA8:
    cmpwi r0, 0x0
    beq lbl_801A0DB4
    li r6, 0x1
lbl_801A0DB4:
    cmpwi r6, 0x0
    beq lbl_801A0EC0
    addi r11, r14, 0x8
    mr r6, r16
    srwi r11, r11, 3
    add r0, r22, r9
    mtctr r11
    cmpwi r14, 0x0
    blt lbl_801A0EC0
lbl_801A0DD8:
    subf r11, r7, r0
    addi r14, r7, 0x1
    slwi r15, r11, 3
    lfd f1, 0x0(r6)
    lfdx f0, r12, r15
    subf r14, r14, r0
    slwi r15, r14, 3
    addi r11, r7, 0x2
    fmul f2, f1, f0
    subf r14, r11, r0
    lfdx f0, r12, r15
    slwi r15, r14, 3
    lfd f1, 0x8(r6)
    addi r11, r7, 0x3
    fmul f3, f1, f0
    subf r14, r11, r0
    lfd f1, 0x10(r6)
    slwi r14, r14, 3
    fadd f6, f6, f2
    lfdx f0, r12, r15
    fmul f2, f1, f0
    addi r11, r7, 0x4
    lfdx f0, r12, r14
    subf r11, r11, r0
    fadd f6, f6, f3
    lfd f1, 0x18(r6)
    slwi r18, r11, 3
    fmul f1, f1, f0
    addi r11, r7, 0x5
    addi r14, r7, 0x6
    fadd f6, f6, f2
    subf r11, r11, r0
    slwi r15, r11, 3
    addi r11, r7, 0x7
    fadd f6, f6, f1
    subf r14, r14, r0
    lfd f2, 0x20(r6)
    lfdx f0, r12, r18
    subf r11, r11, r0
    lfd f1, 0x28(r6)
    fmul f5, f2, f0
    lfdx f0, r12, r15
    slwi r14, r14, 3
    lfd f3, 0x30(r6)
    fmul f4, f1, f0
    lfdx f2, r12, r14
    fadd f6, f6, f5
    slwi r11, r11, 3
    lfd f1, 0x38(r6)
    fmul f2, f3, f2
    lfdx f0, r12, r11
    addi r7, r7, 0x8
    fadd f6, f6, f4
    addi r6, r6, 0x40
    fmul f0, f1, f0
    fadd f6, f6, f2
    fadd f6, f6, f0
    bdnz lbl_801A0DD8
lbl_801A0EC0:
    addi r0, r22, 0x1
    slwi r6, r7, 3
    subf r0, r7, r0
    add r11, r22, r9
    add r6, r3, r6
    mtctr r0
    cmpw r7, r22
    bgt lbl_801A0F04
lbl_801A0EE0:
    subf r0, r7, r11
    lfd f1, 0x0(r6)
    slwi r0, r0, 3
    addi r6, r6, 0x8
    lfdx f0, r12, r0
    addi r7, r7, 0x1
    fmul f0, f1, f0
    fadd f6, f6, f0
    bdnz lbl_801A0EE0
lbl_801A0F04:
    stfd f6, 0x0(r5)
    addi r5, r5, 0x8
    addi r9, r9, 0x1
lbl_801A0F10:
    cmpw r9, r21
    ble lbl_801A0D4C
    subfic r28, r19, 0x18
    neg r5, r21
    slwi r4, r10, 2
    subfic r0, r19, 0x17
    slwi r3, r22, 3
    addi r26, r1, 0x1a0
    lfd f24, lbl_804A15A8
    mr r23, r21
    lfd f25, lbl_804A15D8
    clrrwi r14, r5, 31
    lfd f26, lbl_804A15B0
    add r27, r8, r4
    stw r0, 0x2d0(r1)
    add r26, r26, r3
    lfd f27, lbl_804A15C0
    addi r29, r1, 0x10
    lfd f28, lbl_804A15B8
    addi r15, r1, 0x1a0
    lfd f29, lbl_804A15C8
    lis r30, 0x100
    lfd f30, lbl_804A15D0
    lis r31, 0x8000
    lfd f31, lbl_804A15A0
lbl_801A0F74:
    slwi r0, r23, 3
    addi r3, r1, 0x60
    cmpwi r23, 0x0
    lfdx f1, r3, r0
    mr r4, r23
    li r5, 0x0
    li r6, 0x0
    ble lbl_801A128C
    cmpwi r23, 0x8
    ble lbl_801A121C
    cmpwi r23, -0x1
    li r0, 0x0
    ble lbl_801A0FAC
    li r0, 0x1
lbl_801A0FAC:
    cmpwi r0, 0x0
    beq lbl_801A121C
    subi r0, r23, 0x1
    slwi r7, r23, 3
    addi r3, r1, 0x60
    srwi r0, r0, 3
    add r3, r3, r7
    mtctr r0
    cmpwi r23, 0x8
    ble lbl_801A121C
lbl_801A0FD4:
    fmul f0, f24, f1
    addi r0, r5, 0x1
    addi r9, r5, 0x2
    addi r8, r5, 0x3
    addi r7, r5, 0x4
    lfd f4, -0x8(r3)
    fctiwz f0, f0
    lfd f3, -0x10(r3)
    lfd f2, -0x18(r3)
    slwi r0, r0, 2
    stfd f0, 0x250(r1)
    slwi r9, r9, 2
    lwz r10, 0x254(r1)
    slwi r8, r8, 2
    lfd f0, -0x20(r3)
    slwi r7, r7, 2
    xoris r10, r10, 0x8000
    stw r10, 0x24c(r1)
    lfd f5, 0x248(r1)
    fsub f5, f5, f25
    fadd f6, f5, f4
    fmul f5, f26, f5
    fmul f4, f24, f6
    fsub f5, f1, f5
    fctiwz f1, f4
    fctiwz f4, f5
    stfd f1, 0x260(r1)
    lwz r10, 0x264(r1)
    stfd f4, 0x258(r1)
    xoris r10, r10, 0x8000
    stw r10, 0x244(r1)
    lwz r10, 0x25c(r1)
    lfd f1, 0x240(r1)
    stwx r10, r29, r6
    fsub f1, f1, f25
    fadd f4, f1, f3
    fmul f3, f26, f1
    fmul f1, f24, f4
    fsub f3, f6, f3
    fctiwz f1, f1
    fctiwz f3, f3
    stfd f1, 0x270(r1)
    lwz r10, 0x274(r1)
    stfd f3, 0x268(r1)
    xoris r10, r10, 0x8000
    stw r10, 0x24c(r1)
    lwz r10, 0x26c(r1)
    lfd f1, 0x248(r1)
    stwx r10, r29, r0
    fsub f1, f1, f25
    fadd f3, f1, f2
    fmul f2, f26, f1
    fmul f1, f24, f3
    fsub f2, f4, f2
    fctiwz f1, f1
    fctiwz f2, f2
    stfd f1, 0x280(r1)
    lwz r0, 0x284(r1)
    stfd f2, 0x278(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lwz r0, 0x27c(r1)
    lfd f1, 0x240(r1)
    stwx r0, r29, r9
    fsub f1, f1, f25
    fadd f2, f1, f0
    fmul f1, f26, f1
    fmul f0, f24, f2
    fsub f1, f3, f1
    fctiwz f0, f0
    fctiwz f1, f1
    stfd f0, 0x290(r1)
    lwz r0, 0x294(r1)
    stfd f1, 0x288(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lwz r0, 0x28c(r1)
    lfd f0, 0x248(r1)
    stwx r0, r29, r8
    fsub f1, f0, f25
    fmul f0, f26, f1
    fsub f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x298(r1)
    lwz r0, 0x29c(r1)
    stwx r0, r29, r7
    lfd f0, -0x28(r3)
    addi r8, r5, 0x5
    addi r0, r5, 0x7
    addi r7, r5, 0x6
    fadd f5, f1, f0
    slwi r9, r8, 2
    slwi r8, r7, 2
    lfd f2, -0x30(r3)
    lfd f1, -0x38(r3)
    slwi r0, r0, 2
    fmul f3, f24, f5
    lfdu f0, -0x40(r3)
    addi r5, r5, 0x8
    addi r6, r6, 0x20
    subi r4, r4, 0x8
    fctiwz f3, f3
    stfd f3, 0x2a0(r1)
    lwz r7, 0x2a4(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x244(r1)
    lfd f3, 0x240(r1)
    fsub f3, f3, f25
    fadd f4, f3, f2
    fmul f3, f26, f3
    fmul f2, f24, f4
    fsub f3, f5, f3
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f2, 0x2b0(r1)
    lwz r7, 0x2b4(r1)
    stfd f3, 0x2a8(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x24c(r1)
    lwz r7, 0x2ac(r1)
    lfd f2, 0x248(r1)
    stwx r7, r29, r9
    fsub f2, f2, f25
    fadd f3, f2, f1
    fmul f2, f26, f2
    fmul f1, f24, f3
    fsub f2, f4, f2
    fctiwz f1, f1
    fctiwz f2, f2
    stfd f1, 0x2c0(r1)
    lwz r7, 0x2c4(r1)
    stfd f2, 0x2b8(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x244(r1)
    lwz r7, 0x2bc(r1)
    lfd f1, 0x240(r1)
    stwx r7, r29, r8
    fsub f1, f1, f25
    fmul f2, f26, f1
    fadd f1, f1, f0
    fsub f0, f3, f2
    fctiwz f0, f0
    stfd f0, 0x2c8(r1)
    lwz r7, 0x2cc(r1)
    stwx r7, r29, r0
    bdnz lbl_801A0FD4
lbl_801A121C:
    slwi r3, r5, 2
    addi r5, r1, 0x10
    slwi r0, r4, 3
    addi r6, r1, 0x60
    add r5, r5, r3
    add r6, r6, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_801A128C
lbl_801A1240:
    fmul f2, f24, f1
    lfdu f0, -0x8(r6)
    subi r4, r4, 0x1
    fctiwz f2, f2
    stfd f2, 0x2c8(r1)
    lwz r0, 0x2cc(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f2, 0x248(r1)
    fsub f3, f2, f25
    fmul f2, f26, f3
    fsub f2, f1, f2
    fadd f1, f3, f0
    fctiwz f0, f2
    stfd f0, 0x2c0(r1)
    lwz r0, 0x2c4(r1)
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_801A1240
lbl_801A128C:
    mr r3, r19
    bl fn_801A3370
    fmr f23, f1
    fmul f1, f27, f1
    bl fn_801A2A94
    fmul f0, f28, f1
    cmpwi r19, 0x0
    li r18, 0x0
    fsub f23, f23, f0
    fctiwz f0, f23
    stfd f0, 0x2c8(r1)
    lwz r20, 0x2cc(r1)
    xoris r0, r20, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f25
    fsub f23, f23, f0
    ble lbl_801A1300
    slwi r0, r23, 2
    add r4, r29, r0
    lwz r3, -0x4(r4)
    sraw r5, r3, r28
    slw r0, r5, r28
    subf r3, r0, r3
    lwz r0, 0x2d0(r1)
    stw r3, -0x4(r4)
    add r20, r20, r5
    sraw r18, r3, r0
    b lbl_801A1328
lbl_801A1300:
    bne lbl_801A1318
    slwi r0, r23, 2
    add r3, r29, r0
    lwz r0, -0x4(r3)
    srawi r18, r0, 23
    b lbl_801A1328
lbl_801A1318:
    fcmpo cr0, f23, f29
    opword 0x4C411382
    bne lbl_801A1328
    li r18, 0x2
lbl_801A1328:
    cmpwi r18, 0x0
    ble lbl_801A13E4
    addi r5, r1, 0x10
    subi r4, r30, 0x1
    li r0, 0x0
    mtctr r23
    cmpwi r23, 0x0
    addi r20, r20, 0x1
    ble lbl_801A1380
lbl_801A134C:
    cmpwi r0, 0x0
    lwz r3, 0x0(r5)
    bne lbl_801A1370
    cmpwi r3, 0x0
    beq lbl_801A1378
    subf r0, r3, r30
    stw r0, 0x0(r5)
    li r0, 0x1
    b lbl_801A1378
lbl_801A1370:
    subf r3, r3, r4
    stw r3, 0x0(r5)
lbl_801A1378:
    addi r5, r5, 0x4
    bdnz lbl_801A134C
lbl_801A1380:
    cmpwi r19, 0x1
    beq lbl_801A1394
    cmpwi r19, 0x2
    beq lbl_801A13AC
    b lbl_801A13C0
lbl_801A1394:
    slwi r3, r23, 2
    add r4, r29, r3
    lwz r3, -0x4(r4)
    clrlwi r3, r3, 9
    stw r3, -0x4(r4)
    b lbl_801A13C0
lbl_801A13AC:
    slwi r3, r23, 2
    add r4, r29, r3
    lwz r3, -0x4(r4)
    clrlwi r3, r3, 10
    stw r3, -0x4(r4)
lbl_801A13C0:
    cmpwi r18, 0x2
    bne lbl_801A13E4
    cmpwi r0, 0x0
    fsub f23, f30, f23
    beq lbl_801A13E4
    fmr f1, f30
    mr r3, r19
    bl fn_801A3370
    fsub f23, f23, f1
lbl_801A13E4:
    fcmpu cr0, f31, f23
    bne lbl_801A17BC
    subi r10, r23, 0x1
    li r9, 0x0
    cmpw cr1, r10, r21
    blt cr1, lbl_801A157C
    subf r7, r21, r10
    addi r0, r21, 0x8
    addi r8, r7, 0x1
    cmpwi r8, 0x8
    ble lbl_801A1548
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r12, 0x0
    blt cr1, lbl_801A1438
    addi r11, r31, 0x1
    cmpw r21, r11
    blt lbl_801A1438
    li r12, 0x1
lbl_801A1438:
    cmpwi r12, 0x0
    beq lbl_801A1454
    subi r12, r23, 0x1
    addi r11, r31, 0x1
    cmpw r12, r11
    blt lbl_801A1454
    li r6, 0x1
lbl_801A1454:
    cmpwi r6, 0x0
    beq lbl_801A146C
    addis r6, r21, 0x8000
    cmplwi r6, 0x0
    beq lbl_801A146C
    li r5, 0x1
lbl_801A146C:
    cmpwi r5, 0x0
    beq lbl_801A14A4
    subi r5, r23, 0x1
    li r6, 0x1
    clrrwi r11, r5, 31
    cmpw r11, r14
    bne lbl_801A1498
    clrrwi r5, r7, 31
    cmpw r11, r5
    beq lbl_801A1498
    li r6, 0x0
lbl_801A1498:
    cmpwi r6, 0x0
    beq lbl_801A14A4
    li r4, 0x1
lbl_801A14A4:
    cmpwi r4, 0x0
    beq lbl_801A14D0
    clrrwi. r4, r7, 31
    li r5, 0x1
    bne lbl_801A14C4
    clrrwi. r4, r8, 31
    beq lbl_801A14C4
    li r5, 0x0
lbl_801A14C4:
    cmpwi r5, 0x0
    beq lbl_801A14D0
    li r3, 0x1
lbl_801A14D0:
    cmpwi r3, 0x0
    beq lbl_801A1548
    addi r4, r10, 0x8
    slwi r5, r10, 2
    subf r4, r0, r4
    addi r3, r1, 0x10
    srwi r4, r4, 3
    add r3, r3, r5
    mtctr r4
    cmpw r10, r0
    blt lbl_801A1548
lbl_801A14FC:
    lwz r4, 0x0(r3)
    subi r10, r10, 0x8
    lwz r0, -0x4(r3)
    or r9, r9, r4
    lwz r4, -0x8(r3)
    or r9, r9, r0
    lwz r0, -0xc(r3)
    or r9, r9, r4
    lwz r4, -0x10(r3)
    or r9, r9, r0
    lwz r0, -0x14(r3)
    or r9, r9, r4
    lwz r4, -0x18(r3)
    or r9, r9, r0
    lwz r0, -0x1c(r3)
    or r9, r9, r4
    subi r3, r3, 0x20
    or r9, r9, r0
    bdnz lbl_801A14FC
lbl_801A1548:
    addi r0, r10, 0x1
    slwi r3, r10, 2
    addi r4, r1, 0x10
    subf r0, r21, r0
    add r4, r4, r3
    mtctr r0
    cmpw r10, r21
    blt lbl_801A157C
lbl_801A1568:
    lwz r0, 0x0(r4)
    subi r4, r4, 0x4
    subi r10, r10, 0x1
    or r9, r9, r0
    bdnz lbl_801A1568
lbl_801A157C:
    cmpwi r9, 0x0
    bne lbl_801A17BC
    li r18, 0x1
    b lbl_801A1590
lbl_801A158C:
    addi r18, r18, 0x1
lbl_801A1590:
    subf r0, r18, r21
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_801A158C
    addi r12, r23, 0x1
    addi r7, r1, 0x60
    slwi r3, r12, 3
    add r8, r23, r18
    slwi r0, r12, 2
    add r5, r27, r0
    add r6, r26, r3
    add r7, r7, r3
    b lbl_801A17AC
lbl_801A15C8:
    lwz r0, 0x0(r5)
    cmpwi cr1, r22, 0x0
    lfd f0, lbl_804A15A0
    li r11, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f1, 0x248(r1)
    fsub f1, f1, f25
    stfd f1, 0x0(r6)
    blt cr1, lbl_801A1798
    addi r0, r22, 0x1
    subi r3, r22, 0x8
    cmpwi r0, 0x8
    ble lbl_801A1754
    li r4, 0x0
    li r9, 0x0
    blt cr1, lbl_801A161C
    subi r0, r31, 0x2
    cmpw r22, r0
    bgt lbl_801A161C
    li r9, 0x1
lbl_801A161C:
    cmpwi r9, 0x0
    beq lbl_801A1648
    cmpwi r25, 0x0
    li r0, 0x1
    bne lbl_801A163C
    cmpwi r24, 0x0
    beq lbl_801A163C
    li r0, 0x0
lbl_801A163C:
    cmpwi r0, 0x0
    beq lbl_801A1648
    li r4, 0x1
lbl_801A1648:
    cmpwi r4, 0x0
    beq lbl_801A1754
    addi r0, r3, 0x8
    mr r9, r16
    srwi r0, r0, 3
    add r10, r22, r12
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_801A1754
lbl_801A166C:
    subf r0, r11, r10
    addi r4, r11, 0x1
    slwi r0, r0, 3
    addi r3, r11, 0x2
    lfd f2, 0x0(r9)
    subf r3, r3, r10
    lfdx f1, r15, r0
    subf r4, r4, r10
    slwi r0, r4, 3
    addi r20, r11, 0x7
    fmul f3, f2, f1
    lfd f2, 0x8(r9)
    lfdx f1, r15, r0
    addi r4, r11, 0x3
    slwi r3, r3, 3
    subf r20, r20, r10
    fmul f4, f2, f1
    subf r0, r4, r10
    lfdx f1, r15, r3
    addi r4, r11, 0x4
    fadd f0, f0, f3
    lfd f2, 0x10(r9)
    fmul f3, f2, f1
    slwi r0, r0, 3
    lfdx f1, r15, r0
    subf r4, r4, r10
    fadd f0, f0, f4
    lfd f2, 0x18(r9)
    addi r3, r11, 0x5
    addi r0, r11, 0x6
    fadd f0, f0, f3
    subf r3, r3, r10
    fmul f2, f2, f1
    slwi r4, r4, 3
    subf r0, r0, r10
    lfd f3, 0x20(r9)
    lfdx f1, r15, r4
    slwi r3, r3, 3
    fmul f6, f3, f1
    slwi r0, r0, 3
    lfdx f1, r15, r3
    slwi r20, r20, 3
    fadd f0, f0, f2
    lfd f2, 0x28(r9)
    fmul f5, f2, f1
    lfd f4, 0x30(r9)
    lfdx f3, r15, r0
    addi r11, r11, 0x8
    fadd f0, f0, f6
    lfd f2, 0x38(r9)
    lfdx f1, r15, r20
    fmul f3, f4, f3
    addi r9, r9, 0x40
    fadd f0, f0, f5
    fmul f1, f2, f1
    fadd f0, f0, f3
    fadd f0, f0, f1
    bdnz lbl_801A166C
lbl_801A1754:
    addi r4, r22, 0x1
    slwi r3, r11, 3
    subf r4, r11, r4
    add r0, r22, r12
    add r3, r16, r3
    mtctr r4
    cmpw r11, r22
    bgt lbl_801A1798
lbl_801A1774:
    subf r4, r11, r0
    lfd f2, 0x0(r3)
    slwi r4, r4, 3
    addi r3, r3, 0x8
    lfdx f1, r15, r4
    addi r11, r11, 0x1
    fmul f1, f2, f1
    fadd f0, f0, f1
    bdnz lbl_801A1774
lbl_801A1798:
    stfd f0, 0x0(r7)
    addi r5, r5, 0x4
    addi r6, r6, 0x8
    addi r7, r7, 0x8
    addi r12, r12, 0x1
lbl_801A17AC:
    cmpw r12, r8
    ble lbl_801A15C8
    add r23, r23, r18
    b lbl_801A0F74
lbl_801A17BC:
    lfd f0, lbl_804A15A0
    fcmpu cr0, f0, f23
    bne lbl_801A17FC
    subi r23, r23, 0x1
    addi r3, r1, 0x10
    slwi r0, r23, 2
    subi r19, r19, 0x18
    add r3, r3, r0
    b lbl_801A17EC
lbl_801A17E0:
    subi r3, r3, 0x4
    subi r23, r23, 0x1
    subi r19, r19, 0x18
lbl_801A17EC:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801A17E0
    b lbl_801A1898
lbl_801A17FC:
    fmr f1, f23
    neg r3, r19
    bl fn_801A3370
    lfd f3, lbl_804A15B0
    fcmpo cr0, f1, f3
    opword 0x4C411382
    bne lbl_801A1880
    lfd f0, lbl_804A15A8
    slwi r5, r23, 2
    addi r23, r23, 0x1
    lfd f2, lbl_804A15D8
    fmul f0, f0, f1
    addi r4, r1, 0x10
    slwi r0, r23, 2
    addi r19, r19, 0x18
    fctiwz f0, f0
    stfd f0, 0x2c8(r1)
    lwz r3, 0x2cc(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f2
    fmul f2, f3, f0
    fctiwz f0, f0
    fsub f1, f1, f2
    stfd f0, 0x2b8(r1)
    lwz r3, 0x2bc(r1)
    fctiwz f0, f1
    stfd f0, 0x2c0(r1)
    lwz r6, 0x2c4(r1)
    stwx r6, r4, r5
    stwx r3, r4, r0
    b lbl_801A1898
lbl_801A1880:
    fctiwz f0, f1
    slwi r0, r23, 2
    addi r3, r1, 0x10
    stfd f0, 0x2c8(r1)
    lwz r4, 0x2cc(r1)
    stwx r4, r3, r0
lbl_801A1898:
    lfd f1, lbl_804A15D0
    mr r3, r19
    bl fn_801A3370
    cmpwi r23, 0x0
    mr r3, r23
    blt lbl_801A1AA4
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_801A1A48
    cmpwi r23, -0x1
    li r4, 0x0
    li r0, 0x0
    ble lbl_801A18D0
    li r0, 0x1
lbl_801A18D0:
    cmpwi r0, 0x0
    beq lbl_801A1900
    clrrwi. r0, r23, 31
    li r5, 0x1
    bne lbl_801A18F4
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_801A18F4
    li r5, 0x0
lbl_801A18F4:
    cmpwi r5, 0x0
    beq lbl_801A1900
    li r4, 0x1
lbl_801A1900:
    cmpwi r4, 0x0
    beq lbl_801A1A48
    slwi r5, r23, 2
    addi r6, r1, 0x10
    slwi r4, r23, 3
    addi r7, r1, 0x60
    srwi r0, r23, 3
    add r6, r6, r5
    add r7, r7, r4
    lfd f9, lbl_804A15D8
    lfd f8, lbl_804A15A8
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_801A1A48
lbl_801A1938:
    lwz r4, 0x0(r6)
    subi r3, r3, 0x8
    lwz r0, -0x4(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x24c(r1)
    xoris r4, r0, 0x8000
    lwz r0, -0x8(r6)
    lfd f0, 0x248(r1)
    stw r4, 0x244(r1)
    xoris r4, r0, 0x8000
    fsub f0, f0, f9
    lwz r0, -0xc(r6)
    lfd f2, 0x240(r1)
    xoris r0, r0, 0x8000
    stw r4, 0x24c(r1)
    fmul f5, f1, f0
    lfd f0, 0x248(r1)
    fmul f1, f1, f8
    stw r0, 0x244(r1)
    lwz r0, -0x10(r6)
    fsub f3, f2, f9
    fsub f4, f0, f9
    xoris r0, r0, 0x8000
    fmul f7, f1, f3
    lfd f2, 0x240(r1)
    stw r0, 0x24c(r1)
    fmul f1, f1, f8
    lwz r0, -0x14(r6)
    stfd f5, 0x0(r7)
    fsub f3, f2, f9
    lfd f0, 0x248(r1)
    fmul f6, f1, f4
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    fmul f1, f1, f8
    lwz r0, -0x18(r6)
    fsub f4, f0, f9
    xoris r4, r0, 0x8000
    stw r4, 0x24c(r1)
    lwz r0, -0x1c(r6)
    fmul f5, f1, f3
    lfd f2, 0x240(r1)
    stfd f7, -0x8(r7)
    xoris r0, r0, 0x8000
    fmul f1, f1, f8
    lfd f0, 0x248(r1)
    fsub f3, f2, f9
    stfd f6, -0x10(r7)
    fmul f4, f1, f4
    subi r6, r6, 0x20
    stfd f5, -0x18(r7)
    fmul f1, f1, f8
    stw r0, 0x244(r1)
    fsub f2, f0, f9
    lfd f0, 0x240(r1)
    fmul f3, f1, f3
    stfd f4, -0x20(r7)
    fmul f1, f1, f8
    stfd f3, -0x28(r7)
    fsub f0, f0, f9
    fmul f2, f1, f2
    fmul f1, f1, f8
    stfd f2, -0x30(r7)
    fmul f0, f1, f0
    fmul f1, f1, f8
    stfd f0, -0x38(r7)
    subi r7, r7, 0x40
    bdnz lbl_801A1938
lbl_801A1A48:
    slwi r5, r3, 2
    addi r6, r1, 0x10
    slwi r4, r3, 3
    addi r7, r1, 0x60
    addi r0, r3, 0x1
    add r6, r6, r5
    add r7, r7, r4
    lfd f3, lbl_804A15D8
    lfd f0, lbl_804A15A8
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_801A1AA4
lbl_801A1A78:
    lwz r0, 0x0(r6)
    subi r6, r6, 0x4
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f2, 0x248(r1)
    fsub f2, f2, f3
    fmul f2, f1, f2
    fmul f1, f1, f0
    stfd f2, 0x0(r7)
    subi r7, r7, 0x8
    bdnz lbl_801A1A78
lbl_801A1AA4:
    addi r0, r23, 0x1
    mr r8, r23
    addi r4, r1, 0x100
    slwi r3, r23, 3
    lis r5, lbl_8033C1D8@ha
    mtctr r0
    cmpwi r23, 0x0
    blt lbl_801A1B20
lbl_801A1AC4:
    addi r6, r1, 0x60
    lfd f2, lbl_804A15A0
    add r6, r6, r3
    addi r7, r5, lbl_8033C1D8@l
    subf r0, r8, r23
    li r9, 0x0
    b lbl_801A1AFC
lbl_801A1AE0:
    lfd f1, 0x0(r7)
    addi r7, r7, 0x8
    lfd f0, 0x0(r6)
    addi r6, r6, 0x8
    addi r9, r9, 0x1
    fmul f0, f1, f0
    fadd f2, f2, f0
lbl_801A1AFC:
    cmpw r9, r21
    bgt lbl_801A1B0C
    cmpw r9, r0
    ble lbl_801A1AE0
lbl_801A1B0C:
    slwi r0, r0, 3
    subi r3, r3, 0x8
    stfdx f2, r4, r0
    subi r8, r8, 0x1
    bdnz lbl_801A1AC4
lbl_801A1B20:
    lwz r3, 0x8(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_801A1C54
    mr. r0, r3
    beq lbl_801A1B44
    cmpwi r0, 0x3
    beq lbl_801A1ECC
    b lbl_801A22F4
lbl_801A1B44:
    cmpwi r23, 0x0
    lfd f6, lbl_804A15A0
    blt lbl_801A1C3C
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_801A1C10
    cmpwi r23, -0x1
    li r3, 0x0
    li r0, 0x0
    ble lbl_801A1B70
    li r0, 0x1
lbl_801A1B70:
    cmpwi r0, 0x0
    beq lbl_801A1BA0
    clrrwi. r0, r23, 31
    li r4, 0x1
    bne lbl_801A1B94
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_801A1B94
    li r4, 0x0
lbl_801A1B94:
    cmpwi r4, 0x0
    beq lbl_801A1BA0
    li r3, 0x1
lbl_801A1BA0:
    cmpwi r3, 0x0
    beq lbl_801A1C10
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r23, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_801A1C10
lbl_801A1BC4:
    lfd f1, 0x0(r4)
    subi r23, r23, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_801A1BC4
lbl_801A1C10:
    slwi r3, r23, 3
    addi r4, r1, 0x100
    addi r0, r23, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x0
    blt lbl_801A1C3C
lbl_801A1C2C:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_801A1C2C
lbl_801A1C3C:
    cmpwi r18, 0x0
    bne lbl_801A1C48
    b lbl_801A1C4C
lbl_801A1C48:
    fneg f6, f6
lbl_801A1C4C:
    stfd f6, 0x0(r17)
    b lbl_801A22F4
lbl_801A1C54:
    cmpwi r23, 0x0
    lfd f6, lbl_804A15A0
    mr r5, r23
    blt lbl_801A1D50
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_801A1D24
    cmpwi r23, -0x1
    li r3, 0x0
    li r0, 0x0
    ble lbl_801A1C84
    li r0, 0x1
lbl_801A1C84:
    cmpwi r0, 0x0
    beq lbl_801A1CB4
    clrrwi. r0, r23, 31
    li r4, 0x1
    bne lbl_801A1CA8
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_801A1CA8
    li r4, 0x0
lbl_801A1CA8:
    cmpwi r4, 0x0
    beq lbl_801A1CB4
    li r3, 0x1
lbl_801A1CB4:
    cmpwi r3, 0x0
    beq lbl_801A1D24
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r23, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_801A1D24
lbl_801A1CD8:
    lfd f1, 0x0(r4)
    subi r5, r5, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_801A1CD8
lbl_801A1D24:
    slwi r3, r5, 3
    addi r4, r1, 0x100
    addi r0, r5, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r5, 0x0
    blt lbl_801A1D50
lbl_801A1D40:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_801A1D40
lbl_801A1D50:
    cmpwi r18, 0x0
    bne lbl_801A1D60
    fmr f1, f6
    b lbl_801A1D64
lbl_801A1D60:
    fneg f1, f6
lbl_801A1D64:
    lfd f0, 0x100(r1)
    cmpwi cr1, r23, 0x1
    stfd f1, 0x0(r17)
    li r8, 0x1
    fsub f6, f0, f6
    blt cr1, lbl_801A1EB4
    cmpwi r23, 0x8
    subi r4, r23, 0x8
    ble lbl_801A1E84
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    blt cr1, lbl_801A1DAC
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r23, r0
    bgt lbl_801A1DAC
    li r7, 0x1
lbl_801A1DAC:
    cmpwi r7, 0x0
    beq lbl_801A1DE8
    clrrwi r7, r23, 31
    li r3, 0x1
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    bne lbl_801A1DDC
    subi r0, r23, 0x1
    clrrwi r0, r0, 31
    cmpw r7, r0
    beq lbl_801A1DDC
    li r3, 0x0
lbl_801A1DDC:
    cmpwi r3, 0x0
    beq lbl_801A1DE8
    li r6, 0x1
lbl_801A1DE8:
    cmpwi r6, 0x0
    beq lbl_801A1E18
    subi r0, r23, 0x1
    li r3, 0x1
    clrrwi. r0, r0, 31
    bne lbl_801A1E0C
    clrrwi. r0, r23, 31
    beq lbl_801A1E0C
    li r3, 0x0
lbl_801A1E0C:
    cmpwi r3, 0x0
    beq lbl_801A1E18
    li r5, 0x1
lbl_801A1E18:
    cmpwi r5, 0x0
    beq lbl_801A1E84
    addi r0, r4, 0x7
    addi r3, r1, 0x108
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x1
    blt lbl_801A1E84
lbl_801A1E38:
    lfd f1, 0x0(r3)
    addi r8, r8, 0x8
    lfd f0, 0x8(r3)
    fadd f6, f6, f1
    lfd f5, 0x10(r3)
    lfd f4, 0x18(r3)
    lfd f3, 0x20(r3)
    fadd f6, f6, f0
    lfd f2, 0x28(r3)
    lfd f1, 0x30(r3)
    lfd f0, 0x38(r3)
    addi r3, r3, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_801A1E38
lbl_801A1E84:
    addi r0, r23, 0x1
    slwi r3, r8, 3
    addi r4, r1, 0x100
    subf r0, r8, r0
    add r4, r4, r3
    mtctr r0
    cmpw r8, r23
    bgt lbl_801A1EB4
lbl_801A1EA4:
    lfd f0, 0x0(r4)
    addi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_801A1EA4
lbl_801A1EB4:
    cmpwi r18, 0x0
    bne lbl_801A1EC0
    b lbl_801A1EC4
lbl_801A1EC0:
    fneg f6, f6
lbl_801A1EC4:
    stfd f6, 0x8(r17)
    b lbl_801A22F4
lbl_801A1ECC:
    cmpwi r23, 0x0
    mr r5, r23
    ble lbl_801A2000
    cmpwi r23, 0x8
    ble lbl_801A1FC8
    cmpwi r23, -0x1
    li r0, 0x0
    ble lbl_801A1EF0
    li r0, 0x1
lbl_801A1EF0:
    cmpwi r0, 0x0
    beq lbl_801A1FC8
    subi r0, r23, 0x1
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    ble lbl_801A1FC8
lbl_801A1F18:
    lfd f0, -0x8(r4)
    subi r5, r5, 0x8
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    lfd f0, -0x10(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x8(r4)
    lfd f0, -0x18(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x10(r4)
    lfd f0, -0x20(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x18(r4)
    lfd f0, -0x28(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x20(r4)
    lfd f0, -0x30(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x28(r4)
    lfd f0, -0x38(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x30(r4)
    lfd f0, -0x40(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x38(r4)
    stfdu f1, -0x40(r4)
    bdnz lbl_801A1F18
lbl_801A1FC8:
    slwi r0, r5, 3
    addi r3, r1, 0x100
    add r3, r3, r0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_801A2000
lbl_801A1FE0:
    lfd f0, -0x8(r3)
    lfd f1, 0x0(r3)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r3)
    stfdu f2, -0x8(r3)
    bdnz lbl_801A1FE0
lbl_801A2000:
    cmpwi cr1, r23, 0x1
    mr r6, r23
    ble cr1, lbl_801A2178
    subi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_801A213C
    li r3, 0x0
    li r0, 0x0
    blt cr1, lbl_801A2028
    li r0, 0x1
lbl_801A2028:
    cmpwi r0, 0x0
    beq lbl_801A2064
    clrrwi r5, r23, 31
    li r4, 0x1
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    bne lbl_801A2058
    subi r0, r23, 0x1
    clrrwi r0, r0, 31
    cmpw r5, r0
    beq lbl_801A2058
    li r4, 0x0
lbl_801A2058:
    cmpwi r4, 0x0
    beq lbl_801A2064
    li r3, 0x1
lbl_801A2064:
    cmpwi r3, 0x0
    beq lbl_801A213C
    subi r0, r23, 0x2
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x9
    ble lbl_801A213C
lbl_801A208C:
    lfd f0, -0x8(r4)
    subi r6, r6, 0x8
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    lfd f0, -0x10(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x8(r4)
    lfd f0, -0x18(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x10(r4)
    lfd f0, -0x20(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x18(r4)
    lfd f0, -0x28(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x20(r4)
    lfd f0, -0x30(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x28(r4)
    lfd f0, -0x38(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x30(r4)
    lfd f0, -0x40(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x38(r4)
    stfdu f1, -0x40(r4)
    bdnz lbl_801A208C
lbl_801A213C:
    slwi r3, r6, 3
    addi r4, r1, 0x100
    subi r0, r6, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_801A2178
lbl_801A2158:
    lfd f0, -0x8(r4)
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    stfdu f2, -0x8(r4)
    bdnz lbl_801A2158
lbl_801A2178:
    cmpwi cr1, r23, 0x2
    lfd f6, lbl_804A15A0
    blt cr1, lbl_801A22B4
    subi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_801A2288
    li r3, 0x0
    li r4, 0x0
    li r0, 0x0
    blt cr1, lbl_801A21A4
    li r0, 0x1
lbl_801A21A4:
    cmpwi r0, 0x0
    beq lbl_801A21E0
    clrrwi r6, r23, 31
    li r5, 0x1
    addis r0, r6, 0x8000
    cmplwi r0, 0x0
    bne lbl_801A21D4
    subi r0, r23, 0x2
    clrrwi r0, r0, 31
    cmpw r6, r0
    beq lbl_801A21D4
    li r5, 0x0
lbl_801A21D4:
    cmpwi r5, 0x0
    beq lbl_801A21E0
    li r4, 0x1
lbl_801A21E0:
    cmpwi r4, 0x0
    beq lbl_801A2214
    subi r0, r23, 0x2
    li r4, 0x1
    clrrwi. r0, r0, 31
    bne lbl_801A2208
    subi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_801A2208
    li r4, 0x0
lbl_801A2208:
    cmpwi r4, 0x0
    beq lbl_801A2214
    li r3, 0x1
lbl_801A2214:
    cmpwi r3, 0x0
    beq lbl_801A2288
    subi r0, r23, 0x2
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0xa
    blt lbl_801A2288
lbl_801A223C:
    lfd f1, 0x0(r4)
    subi r23, r23, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_801A223C
lbl_801A2288:
    slwi r3, r23, 3
    addi r4, r1, 0x100
    subi r0, r23, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x2
    blt lbl_801A22B4
lbl_801A22A4:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_801A22A4
lbl_801A22B4:
    cmpwi r18, 0x0
    bne lbl_801A22D4
    lfd f1, 0x100(r1)
    lfd f0, 0x108(r1)
    stfd f1, 0x0(r17)
    stfd f0, 0x8(r17)
    stfd f6, 0x10(r17)
    b lbl_801A22F4
lbl_801A22D4:
    lfd f2, 0x100(r1)
    fneg f0, f6
    lfd f1, 0x108(r1)
    fneg f2, f2
    stfd f0, 0x10(r17)
    fneg f0, f1
    stfd f2, 0x0(r17)
    stfd f0, 0x8(r17)
lbl_801A22F4:
    addi r11, r1, 0x370
    clrlwi r3, r20, 29
    bl _restfpr_23
    lmw r14, 0x2e0(r1)
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

