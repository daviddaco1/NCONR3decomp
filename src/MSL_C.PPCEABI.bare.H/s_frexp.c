#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_frexp.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A16A0;

// Forward declarations
void fn_801A2BE4();

// ----------------------------------------------------------------------------
// fn_801A2BE4
// ----------------------------------------------------------------------------
asm void fn_801A2BE4() {
    nofralloc
    stwu r1, -0x10(r1)
    li r4, 0x0
    lis r0, 0x7ff0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    stw r4, 0x0(r3)
    clrlwi r4, r5, 1
    lwz r6, 0xc(r1)
    cmpw r4, r0
    bge lbl_801A2C64
    or. r0, r4, r6
    bne lbl_801A2C18
    b lbl_801A2C64
lbl_801A2C18:
    lis r0, 0x10
    cmpw r4, r0
    bge lbl_801A2C40
    lfd f0, lbl_804A16A0
    li r0, -0x36
    stw r0, 0x0(r3)
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    clrlwi r4, r5, 1
lbl_801A2C40:
    rlwinm r0, r5, 0, 12, 0
    lwz r5, 0x0(r3)
    srawi r4, r4, 20
    oris r0, r0, 0x3fe0
    stw r0, 0x8(r1)
    add r4, r4, r5
    subi r0, r4, 0x3fe
    stw r0, 0x0(r3)
    lfd f1, 0x8(r1)
lbl_801A2C64:
    addi r1, r1, 0x10
    blr
}

