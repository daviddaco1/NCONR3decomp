#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_ldexp.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A16A8;
float lbl_804A16B0;
float lbl_804A16B8;
float lbl_804A16C0;
float lbl_804A16C8;

// Forward declarations
void fn_80195C2C();
void fn_801A29A0();
void fn_801A2C6C();

// ----------------------------------------------------------------------------
// fn_801A2C6C
// ----------------------------------------------------------------------------
asm void fn_801A2C6C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r3
    stfd f1, 0x8(r1)
    bl fn_80195C2C
    cmpwi r3, 0x2
    ble lbl_801A2CA4
    lfd f0, lbl_804A16A8
    fcmpu cr0, f0, f31
    bne lbl_801A2CAC
lbl_801A2CA4:
    fmr f1, f31
    b lbl_801A2DC0
lbl_801A2CAC:
    lwz r5, 0x8(r1)
    lwz r3, 0xc(r1)
    extrwi. r4, r5, 11, 1
    bne lbl_801A2D04
    clrlwi r0, r5, 1
    or. r0, r3, r0
    bne lbl_801A2CD0
    fmr f1, f31
    b lbl_801A2DC0
lbl_801A2CD0:
    lfd f0, lbl_804A16B0
    lis r3, 0xffff
    addi r0, r3, 0x3cb0
    fmul f31, f31, f0
    cmpw r31, r0
    stfd f31, 0x8(r1)
    lwz r5, 0x8(r1)
    extrwi r3, r5, 11, 1
    subi r4, r3, 0x36
    bge lbl_801A2D04
    lfd f0, lbl_804A16B8
    fmul f1, f0, f31
    b lbl_801A2DC0
lbl_801A2D04:
    cmpwi r4, 0x7ff
    bne lbl_801A2D14
    fadd f1, f31, f31
    b lbl_801A2DC0
lbl_801A2D14:
    add r4, r4, r31
    cmpwi r4, 0x7fe
    ble lbl_801A2D38
    fmr f2, f31
    lfd f1, lbl_804A16C0
    bl fn_801A29A0
    lfd f0, lbl_804A16C0
    fmul f1, f0, f1
    b lbl_801A2DC0
lbl_801A2D38:
    cmpwi r4, 0x0
    ble lbl_801A2D58
    rlwinm r3, r5, 0, 12, 0
    slwi r0, r4, 20
    or r0, r3, r0
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    b lbl_801A2DC0
lbl_801A2D58:
    cmpwi r4, -0x36
    bgt lbl_801A2DA0
    lis r3, 0x1
    subi r0, r3, 0x3cb0
    cmpw r31, r0
    ble lbl_801A2D88
    fmr f2, f31
    lfd f1, lbl_804A16C0
    bl fn_801A29A0
    lfd f0, lbl_804A16C0
    fmul f1, f0, f1
    b lbl_801A2DC0
lbl_801A2D88:
    fmr f2, f31
    lfd f1, lbl_804A16B8
    bl fn_801A29A0
    lfd f0, lbl_804A16B8
    fmul f1, f0, f1
    b lbl_801A2DC0
lbl_801A2DA0:
    addi r0, r4, 0x36
    rlwinm r3, r5, 0, 12, 0
    slwi r0, r0, 20
    lfd f1, lbl_804A16C8
    or r0, r3, r0
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fmul f1, f1, f0
lbl_801A2DC0:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

