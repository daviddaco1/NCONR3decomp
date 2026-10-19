#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_log.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_8049D8D8;
float lbl_804A1340;
float lbl_804A1348;
float lbl_804A1350;
float lbl_804A1358;
float lbl_804A1360;
float lbl_804A1368;
float lbl_804A1370;
float lbl_804A1378;
float lbl_804A1380;
float lbl_804A1388;
float lbl_804A1390;
float lbl_804A1398;
float lbl_804A13A0;
float lbl_804A13A8;
float lbl_804A13B0;
float lbl_804A13B8;

// Forward declarations
void fn_8019FBEC();

// ----------------------------------------------------------------------------
// fn_8019FBEC
// ----------------------------------------------------------------------------
asm void fn_8019FBEC() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x10
    li r7, 0x0
    stfd f1, 0x8(r1)
    lwz r8, 0x8(r1)
    lwz r3, 0xc(r1)
    cmpw r8, r0
    bge lbl_8019FC5C
    clrlwi r0, r8, 1
    or. r0, r0, r3
    bne lbl_8019FC28
    lfd f1, lbl_804A1340
    lfd f0, lbl_8049D8D8
    fdiv f1, f1, f0
    b lbl_8019FE98
lbl_8019FC28:
    cmpwi r8, 0x0
    bge lbl_8019FC48
    fsub f1, f1, f1
    lfd f0, lbl_8049D8D8
    li r0, 0x21
    stw r0, lbl_8049D8C8
    fdiv f1, f1, f0
    b lbl_8019FE98
lbl_8019FC48:
    lfd f0, lbl_804A1348
    li r7, -0x36
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r8, 0x8(r1)
lbl_8019FC5C:
    lis r0, 0x7ff0
    cmpw r8, r0
    blt lbl_8019FC70
    fadd f1, f1, f1
    b lbl_8019FE98
lbl_8019FC70:
    srawi r5, r8, 20
    clrlwi r8, r8, 12
    addis r3, r8, 0x9
    lfd f0, lbl_804A1350
    addi r4, r3, 0x5f64
    addi r0, r8, 0x2
    rlwinm r3, r4, 0, 11, 11
    add r5, r7, r5
    xoris r3, r3, 0x3ff0
    clrlwi r0, r0, 12
    or r3, r8, r3
    stw r3, 0x8(r1)
    cmpwi r0, 0x3
    subi r7, r5, 0x3ff
    lfd f1, 0x8(r1)
    extrwi r0, r4, 1, 11
    add r7, r7, r0
    fsub f0, f1, f0
    bge lbl_8019FD6C
    lfd f1, lbl_8049D8D8
    fcmpu cr0, f0, f1
    bne lbl_8019FD08
    cmpwi r7, 0x0
    bne lbl_8019FCD4
    b lbl_8019FE98
lbl_8019FCD4:
    xoris r3, r7, 0x8000
    lis r0, 0x4330
    stw r3, 0x14(r1)
    lfd f3, lbl_804A13B8
    stw r0, 0x10(r1)
    lfd f1, lbl_804A1358
    lfd f2, 0x10(r1)
    lfd f0, lbl_804A1360
    fsub f2, f2, f3
    fmul f1, f1, f2
    fmul f0, f0, f2
    fadd f1, f1, f0
    b lbl_8019FE98
lbl_8019FD08:
    lfd f3, lbl_804A1370
    fmul f1, f0, f0
    lfd f2, lbl_804A1368
    cmpwi r7, 0x0
    fmul f3, f3, f0
    fsub f2, f2, f3
    fmul f5, f2, f1
    bne lbl_8019FD30
    fsub f1, f0, f5
    b lbl_8019FE98
lbl_8019FD30:
    xoris r3, r7, 0x8000
    lis r0, 0x4330
    stw r3, 0x14(r1)
    lfd f4, lbl_804A13B8
    stw r0, 0x10(r1)
    lfd f1, lbl_804A1360
    lfd f3, 0x10(r1)
    lfd f2, lbl_804A1358
    fsub f3, f3, f4
    fmul f1, f1, f3
    fmul f2, f2, f3
    fsub f1, f5, f1
    fsub f0, f1, f0
    fsub f1, f2, f0
    b lbl_8019FE98
lbl_8019FD6C:
    lfd f1, lbl_804A1378
    xoris r5, r7, 0x8000
    lis r4, 0x4330
    lis r3, 0x7
    fadd f1, f1, f0
    subis r6, r8, 0x6
    subi r0, r3, 0x47af
    lfd f5, lbl_804A13B0
    lfd f4, lbl_804A13A8
    subf r0, r8, r0
    fdiv f1, f0, f1
    subi r6, r6, 0x147a
    lfd f8, lbl_804A1390
    or. r6, r6, r0
    lfd f7, lbl_804A1388
    lfd f3, lbl_804A13A0
    fmul f11, f1, f1
    lfd f6, lbl_804A1380
    lfd f2, lbl_804A1398
    stw r5, 0x14(r1)
    lfd f10, lbl_804A13B8
    fmul f12, f11, f11
    stw r4, 0x10(r1)
    lfd f9, 0x10(r1)
    fmul f5, f5, f12
    fmul f8, f8, f12
    fadd f4, f4, f5
    fsub f9, f9, f10
    fadd f5, f7, f8
    fmul f4, f12, f4
    fmul f5, f12, f5
    fadd f3, f3, f4
    fadd f4, f6, f5
    fmul f3, f12, f3
    fmul f4, f12, f4
    fadd f2, f2, f3
    fmul f2, f11, f2
    fadd f3, f2, f4
    ble lbl_8019FE5C
    lfd f2, lbl_804A1368
    cmpwi r7, 0x0
    fmul f2, f2, f0
    fmul f5, f2, f0
    bne lbl_8019FE30
    fadd f2, f5, f3
    fmul f1, f1, f2
    fsub f1, f5, f1
    fsub f1, f0, f1
    b lbl_8019FE98
lbl_8019FE30:
    fadd f3, f5, f3
    lfd f2, lbl_804A1360
    lfd f4, lbl_804A1358
    fmul f2, f2, f9
    fmul f1, f1, f3
    fmul f3, f4, f9
    fadd f1, f1, f2
    fsub f1, f5, f1
    fsub f0, f1, f0
    fsub f1, f3, f0
    b lbl_8019FE98
lbl_8019FE5C:
    cmpwi r7, 0x0
    bne lbl_8019FE74
    fsub f2, f0, f3
    fmul f1, f1, f2
    fsub f1, f0, f1
    b lbl_8019FE98
lbl_8019FE74:
    fsub f3, f0, f3
    lfd f2, lbl_804A1360
    lfd f4, lbl_804A1358
    fmul f2, f2, f9
    fmul f1, f1, f3
    fmul f3, f4, f9
    fsub f1, f1, f2
    fsub f0, f1, f0
    fsub f1, f3, f0
lbl_8019FE98:
    addi r1, r1, 0x20
    blr
}

