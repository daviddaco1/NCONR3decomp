#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_atan.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1650;
float lbl_804A1658;
float lbl_804A1660;
float lbl_804A1668;
float lbl_804A1670;

// Global data symbols (@ha/@l)
u8 lbl_8033C280[];

// Forward declarations
void fn_801A2624();

// ----------------------------------------------------------------------------
// fn_801A2624
// ----------------------------------------------------------------------------
asm void fn_801A2624() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r5, lbl_8033C280@ha
    lis r0, 0x4410
    stfd f1, 0x8(r1)
    addi r5, r5, lbl_8033C280@l
    lwz r6, 0x8(r1)
    clrlwi r4, r6, 1
    cmpw r4, r0
    bge lbl_801A2664
    lis r0, 0x3fdc
    cmpw r4, r0
    bge lbl_801A26E8
    lis r0, 0x3e20
    cmpw r4, r0
    bge lbl_801A26E0
    b lbl_801A26C8
lbl_801A2664:
    lis r0, 0x7ff0
    cmpw r4, r0
    beq lbl_801A2678
    bge lbl_801A2684
    b lbl_801A268C
lbl_801A2678:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_801A268C
lbl_801A2684:
    fadd f1, f1, f1
    b lbl_801A284C
lbl_801A268C:
    cmpwi r6, 0x0
    ble lbl_801A26AC
    addi r4, r5, 0x0
    addi r3, r5, 0x20
    lfd f1, 0x18(r4)
    lfd f0, 0x18(r3)
    fadd f1, f1, f0
    b lbl_801A284C
lbl_801A26AC:
    addi r4, r5, 0x0
    addi r3, r5, 0x20
    lfd f1, 0x18(r4)
    lfd f0, 0x18(r3)
    fneg f1, f1
    fsub f1, f1, f0
    b lbl_801A284C
lbl_801A26C8:
    lfd f2, lbl_804A1650
    lfd f0, lbl_804A1658
    fadd f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_801A26E0
    b lbl_801A284C
lbl_801A26E0:
    li r0, -0x1
    b lbl_801A2778
lbl_801A26E8:
    lis r0, 0x3ff3
    fabs f3, f1
    cmpw r4, r0
    bge lbl_801A273C
    lis r0, 0x3fe6
    cmpw r4, r0
    bge lbl_801A2724
    lfd f0, lbl_804A1660
    li r0, 0x0
    lfd f1, lbl_804A1658
    fmul f2, f0, f3
    fadd f0, f0, f3
    fsub f1, f2, f1
    fdiv f1, f1, f0
    b lbl_801A2778
lbl_801A2724:
    lfd f0, lbl_804A1658
    li r0, 0x1
    fsub f1, f3, f0
    fadd f0, f0, f3
    fdiv f1, f1, f0
    b lbl_801A2778
lbl_801A273C:
    lis r3, 0x4004
    addi r0, r3, -0x8000
    cmpw r4, r0
    bge lbl_801A276C
    lfd f2, lbl_804A1668
    li r0, 0x2
    lfd f0, lbl_804A1658
    fmul f1, f2, f3
    fsub f2, f3, f2
    fadd f0, f0, f1
    fdiv f1, f2, f0
    b lbl_801A2778
lbl_801A276C:
    lfd f0, lbl_804A1670
    li r0, 0x3
    fdiv f1, f0, f3
lbl_801A2778:
    fmul f0, f1, f1
    addi r3, r5, 0x40
    lfd f3, 0x50(r3)
    cmpwi r0, 0x0
    lfd f2, 0x48(r3)
    lfd f11, 0x40(r3)
    fmul f13, f0, f0
    lfd f5, 0x38(r3)
    lfd f10, 0x30(r3)
    lfd f4, 0x28(r3)
    lfd f9, 0x20(r3)
    fmul f12, f13, f3
    lfd f3, 0x18(r3)
    fmul f6, f13, f2
    lfd f8, 0x10(r3)
    lfd f2, 0x8(r3)
    fadd f11, f11, f12
    lfd f7, 0x40(r5)
    fadd f5, f5, f6
    fmul f6, f13, f11
    fmul f5, f13, f5
    fadd f6, f10, f6
    fadd f4, f4, f5
    fmul f5, f13, f6
    fmul f4, f13, f4
    fadd f5, f9, f5
    fadd f3, f3, f4
    fmul f4, f13, f5
    fmul f3, f13, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f13, f4
    fmul f4, f13, f2
    fadd f2, f7, f3
    fmul f0, f0, f2
    bge lbl_801A2818
    fadd f0, f0, f4
    fmul f0, f1, f0
    fsub f1, f1, f0
    b lbl_801A284C
lbl_801A2818:
    fadd f0, f0, f4
    slwi r0, r0, 3
    addi r3, r5, 0x20
    addi r4, r5, 0x0
    lfdx f2, r3, r0
    cmpwi r6, 0x0
    fmul f3, f1, f0
    lfdx f0, r4, r0
    fsub f2, f3, f2
    fsub f1, f2, f1
    fsub f1, f0, f1
    bge lbl_801A284C
    fneg f1, f1
lbl_801A284C:
    addi r1, r1, 0x10
    blr
}

