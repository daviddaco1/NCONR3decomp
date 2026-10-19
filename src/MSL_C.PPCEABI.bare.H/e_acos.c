#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_acos.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_804A11D8;
float lbl_804A11E0;
float lbl_804A11E8;
float lbl_804A11F0;
float lbl_804A11F8;
float lbl_804A1200;
float lbl_804A1208;
float lbl_804A1210;
float lbl_804A1218;
float lbl_804A1220;
float lbl_804A1228;
float lbl_804A1230;
float lbl_804A1238;
float lbl_804A1240;
float lbl_804A1248;
float lbl_804A1250;
float lbl_804A1258;

// Global data symbols (@ha/@l)
u8 lbl_8049C418[];

// Forward declarations
void fn_8019F0B0();
void fn_801A3374();

// ----------------------------------------------------------------------------
// fn_8019F0B0
// ----------------------------------------------------------------------------
asm void fn_8019F0B0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f1, 0x8(r1)
    lis r0, 0x3ff0
    lwz r4, 0x8(r1)
    clrlwi r3, r4, 1
    cmpw r3, r0
    blt lbl_8019F120
    lwz r0, 0xc(r1)
    subis r3, r3, 0x3ff0
    or. r0, r3, r0
    bne lbl_8019F10C
    cmpwi r4, 0x0
    ble lbl_8019F104
    lfd f1, lbl_804A11D8
    b lbl_8019F35C
lbl_8019F104:
    lfd f1, lbl_804A11E0
    b lbl_8019F35C
lbl_8019F10C:
    lis r3, lbl_8049C418@ha
    li r0, 0x21
    stw r0, lbl_8049D8C8
    lfs f1, lbl_8049C418@l(r3)
    b lbl_8019F35C
lbl_8019F120:
    lis r0, 0x3fe0
    cmpw r3, r0
    bge lbl_8019F1DC
    lis r0, 0x3c60
    cmpw r3, r0
    bgt lbl_8019F140
    lfd f1, lbl_804A11E8
    b lbl_8019F35C
lbl_8019F140:
    fmul f12, f1, f1
    lfd f0, lbl_804A1218
    lfd f2, lbl_804A1240
    lfd f3, lbl_804A1210
    lfd f10, lbl_804A1208
    fmul f4, f0, f12
    lfd f0, lbl_804A1238
    fmul f2, f2, f12
    lfd f5, lbl_804A1230
    lfd f9, lbl_804A1200
    fadd f3, f3, f4
    lfd f4, lbl_804A1228
    fadd f0, f0, f2
    fmul f11, f12, f3
    lfd f8, lbl_804A11F8
    lfd f3, lbl_804A1220
    fmul f6, f12, f0
    lfd f7, lbl_804A11F0
    lfd f2, lbl_804A1248
    fadd f10, f10, f11
    lfd f0, lbl_804A11E8
    fadd f5, f5, f6
    fmul f6, f12, f10
    fmul f5, f12, f5
    fadd f6, f9, f6
    fadd f4, f4, f5
    fmul f5, f12, f6
    fmul f4, f12, f4
    fadd f5, f8, f5
    fadd f4, f3, f4
    fmul f3, f12, f5
    fadd f3, f7, f3
    fmul f3, f12, f3
    fdiv f3, f3, f4
    fmul f3, f1, f3
    fsub f2, f2, f3
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_8019F35C
lbl_8019F1DC:
    cmpwi r4, 0x0
    bge lbl_8019F294
    lfd f11, lbl_804A1220
    lfd f0, lbl_804A1250
    fadd f1, f11, f1
    lfd f4, lbl_804A1218
    lfd f9, lbl_804A1210
    lfd f3, lbl_804A1238
    fmul f1, f0, f1
    lfd f0, lbl_804A1240
    lfd f8, lbl_804A1208
    lfd f2, lbl_804A1230
    lfd f7, lbl_804A1200
    fmul f10, f4, f1
    lfd f6, lbl_804A11F8
    fmul f4, f0, f1
    lfd f0, lbl_804A1228
    lfd f5, lbl_804A11F0
    fadd f9, f9, f10
    fadd f3, f3, f4
    fmul f4, f1, f9
    fmul f3, f1, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f1, f4
    fmul f2, f1, f2
    fadd f3, f7, f3
    fadd f0, f0, f2
    fmul f2, f1, f3
    fmul f0, f1, f0
    fadd f2, f6, f2
    fadd f30, f11, f0
    fmul f0, f1, f2
    fadd f0, f5, f0
    fmul f31, f1, f0
    bl fn_801A3374
    fdiv f4, f31, f30
    lfd f3, lbl_804A1248
    lfd f2, lbl_804A1258
    lfd f0, lbl_804A11E0
    fmul f4, f4, f1
    fsub f3, f4, f3
    fadd f1, f1, f3
    fmul f1, f2, f1
    fsub f1, f0, f1
    b lbl_8019F35C
lbl_8019F294:
    lfd f2, lbl_804A1220
    lfd f0, lbl_804A1250
    fsub f1, f2, f1
    fmul f31, f0, f1
    fmr f1, f31
    bl fn_801A3374
    lfd f2, lbl_804A1218
    li r0, 0x0
    stfd f1, 0x10(r1)
    fmul f4, f2, f31
    lfd f0, lbl_804A1240
    lfd f3, lbl_804A1210
    fmul f2, f0, f31
    lfd f0, lbl_804A1238
    stw r0, 0x14(r1)
    fadd f3, f3, f4
    lfd f11, 0x10(r1)
    fadd f0, f0, f2
    fmul f10, f11, f11
    lfd f6, lbl_804A1208
    lfd f8, lbl_804A1200
    fmul f2, f31, f3
    lfd f4, lbl_804A1230
    lfd f7, lbl_804A11F8
    fmul f5, f31, f0
    lfd f3, lbl_804A1228
    fadd f0, f6, f2
    lfd f6, lbl_804A11F0
    lfd f2, lbl_804A1220
    fsub f10, f31, f10
    fmul f9, f31, f0
    lfd f0, lbl_804A1258
    fadd f4, f4, f5
    fadd f5, f8, f9
    fmul f4, f31, f4
    fmul f5, f31, f5
    fadd f3, f3, f4
    fadd f8, f1, f11
    fadd f4, f7, f5
    fmul f3, f31, f3
    fmul f4, f31, f4
    fadd f3, f2, f3
    fdiv f5, f10, f8
    fadd f2, f6, f4
    fmul f2, f31, f2
    fdiv f2, f2, f3
    fmul f1, f2, f1
    fadd f1, f5, f1
    fadd f1, f11, f1
    fmul f1, f0, f1
lbl_8019F35C:
    lwz r0, 0x44(r1)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

