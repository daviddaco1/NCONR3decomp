#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_asin.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_804A1260;
float lbl_804A1268;
float lbl_804A1270;
float lbl_804A1278;
float lbl_804A1280;
float lbl_804A1288;
float lbl_804A1290;
float lbl_804A1298;
float lbl_804A12A0;
float lbl_804A12A8;
float lbl_804A12B0;
float lbl_804A12B8;
float lbl_804A12C0;
float lbl_804A12C8;
float lbl_804A12D0;
float lbl_804A12D8;
float lbl_804A12E0;

// Global data symbols (@ha/@l)
u8 lbl_8049C418[];

// Forward declarations
void fn_8019F37C();
void fn_801A3374();

// ----------------------------------------------------------------------------
// fn_8019F37C
// ----------------------------------------------------------------------------
asm void fn_8019F37C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x3ff0
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    stw r31, 0x1c(r1)
    stfd f1, 0x8(r1)
    lwz r31, 0x8(r1)
    stw r30, 0x18(r1)
    clrlwi r30, r31, 1
    cmpw r30, r0
    blt lbl_8019F3FC
    lwz r0, 0xc(r1)
    subis r3, r30, 0x3ff0
    or. r0, r3, r0
    bne lbl_8019F3E8
    lfd f2, lbl_804A1260
    lfd f0, lbl_804A1268
    fmul f2, f2, f1
    fmul f0, f0, f1
    fadd f1, f2, f0
    b lbl_8019F5E4
lbl_8019F3E8:
    lis r3, lbl_8049C418@ha
    li r0, 0x21
    stw r0, lbl_8049D8C8
    lfs f1, lbl_8049C418@l(r3)
    b lbl_8019F5E4
lbl_8019F3FC:
    lis r0, 0x3fe0
    cmpw r30, r0
    bge lbl_8019F4B8
    lis r0, 0x3e40
    cmpw r30, r0
    bge lbl_8019F42C
    lfd f2, lbl_804A1270
    lfd f0, lbl_804A1278
    fadd f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_8019F430
    b lbl_8019F5E4
lbl_8019F42C:
    fmul f31, f1, f1
lbl_8019F430:
    lfd f2, lbl_804A12A8
    lfd f0, lbl_804A12C8
    fmul f4, f2, f31
    lfd f3, lbl_804A12A0
    lfd f8, lbl_804A1298
    fmul f2, f0, f31
    lfd f0, lbl_804A12C0
    lfd f7, lbl_804A1290
    fadd f4, f3, f4
    lfd f3, lbl_804A12B8
    fadd f0, f0, f2
    lfd f2, lbl_804A12B0
    fmul f9, f31, f4
    lfd f6, lbl_804A1288
    lfd f5, lbl_804A1280
    fmul f4, f31, f0
    lfd f0, lbl_804A1278
    fadd f8, f8, f9
    fadd f3, f3, f4
    fmul f4, f31, f8
    fmul f3, f31, f3
    fadd f4, f7, f4
    fadd f2, f2, f3
    fmul f3, f31, f4
    fmul f2, f31, f2
    fadd f3, f6, f3
    fadd f2, f0, f2
    fmul f0, f31, f3
    fadd f0, f5, f0
    fmul f0, f31, f0
    fdiv f0, f0, f2
    fmul f0, f1, f0
    fadd f1, f1, f0
    b lbl_8019F5E4
lbl_8019F4B8:
    fabs f1, f1
    lfd f11, lbl_804A1278
    lfd f2, lbl_804A12D0
    lfd f0, lbl_804A12A8
    fsub f3, f11, f1
    lfd f1, lbl_804A12C8
    lfd f9, lbl_804A12A0
    lfd f8, lbl_804A1298
    fmul f31, f2, f3
    lfd f3, lbl_804A12C0
    lfd f2, lbl_804A12B8
    lfd f7, lbl_804A1290
    lfd f6, lbl_804A1288
    fmul f10, f0, f31
    lfd f0, lbl_804A12B0
    fmul f4, f1, f31
    lfd f5, lbl_804A1280
    fadd f9, f9, f10
    fmr f1, f31
    fadd f3, f3, f4
    fmul f4, f31, f9
    fmul f3, f31, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f31, f4
    fmul f2, f31, f2
    fadd f3, f7, f3
    fadd f0, f0, f2
    fmul f2, f31, f3
    fmul f0, f31, f0
    fadd f2, f6, f2
    fadd f29, f11, f0
    fmul f0, f31, f2
    fadd f0, f5, f0
    fmul f30, f31, f0
    bl fn_801A3374
    lis r3, 0x3fef
    addi r0, r3, 0x3333
    cmpw r30, r0
    blt lbl_8019F580
    fdiv f4, f30, f29
    lfd f3, lbl_804A12D8
    lfd f2, lbl_804A1268
    lfd f0, lbl_804A1260
    fmul f4, f1, f4
    fadd f1, f1, f4
    fmul f1, f3, f1
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_8019F5D4
lbl_8019F580:
    stfd f1, 0x10(r1)
    li r0, 0x0
    lfd f5, lbl_804A12D8
    fdiv f8, f30, f29
    stw r0, 0x14(r1)
    lfd f3, lbl_804A1268
    lfd f7, 0x10(r1)
    lfd f2, lbl_804A12E0
    fmul f4, f5, f1
    fmul f0, f7, f7
    fadd f6, f1, f7
    fmul f4, f4, f8
    fsub f1, f31, f0
    fmul f0, f5, f7
    fdiv f1, f1, f6
    fmul f1, f5, f1
    fsub f1, f3, f1
    fsub f3, f2, f0
    fsub f0, f4, f1
    fsub f0, f0, f3
    fsub f1, f2, f0
lbl_8019F5D4:
    cmpwi r31, 0x0
    ble lbl_8019F5E0
    b lbl_8019F5E4
lbl_8019F5E0:
    fneg f1, f1
lbl_8019F5E4:
    lwz r0, 0x54(r1)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

