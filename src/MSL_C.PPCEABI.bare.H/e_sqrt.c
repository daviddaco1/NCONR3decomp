#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_sqrt.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_804A16E0;

// Global data symbols (@ha/@l)
u8 lbl_8049C418[];

// Forward declarations
void fn_801A3030();

// ----------------------------------------------------------------------------
// fn_801A3030
// ----------------------------------------------------------------------------
asm void fn_801A3030() {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f1, 0x8(r1)
    lwz r6, 0x8(r1)
    lwz r0, 0xc(r1)
    rlwinm r3, r6, 0, 1, 11
    subis r3, r3, 0x7ff0
    cmplwi r3, 0x0
    bne lbl_801A3064
    fmul f0, f1, f1
    li r0, 0x21
    stw r0, lbl_8049D8C8
    fadd f1, f1, f0
    b lbl_801A3270
lbl_801A3064:
    cmpwi cr1, r6, 0x0
    bgt cr1, lbl_801A3094
    clrlwi r3, r6, 1
    or. r3, r0, r3
    bne lbl_801A307C
    b lbl_801A3270
lbl_801A307C:
    bge cr1, lbl_801A3094
    lis r3, lbl_8049C418@ha
    li r0, 0x21
    stw r0, lbl_8049D8C8
    lfs f1, lbl_8049C418@l(r3)
    b lbl_801A3270
lbl_801A3094:
    srawi. r3, r6, 20
    bne lbl_801A30E8
    b lbl_801A30B0
lbl_801A30A0:
    srwi r4, r0, 11
    slwi r0, r0, 21
    or r6, r6, r4
    subi r3, r3, 0x15
lbl_801A30B0:
    cmpwi r6, 0x0
    beq lbl_801A30A0
    li r7, 0x0
    b lbl_801A30C8
lbl_801A30C0:
    slwi r6, r6, 1
    addi r7, r7, 0x1
lbl_801A30C8:
    rlwinm. r4, r6, 0, 11, 11
    beq lbl_801A30C0
    subfic r4, r7, 0x20
    subi r5, r7, 0x1
    srw r4, r0, r4
    slw r0, r0, r7
    subf r3, r5, r3
    or r6, r6, r4
lbl_801A30E8:
    subi r4, r3, 0x3ff
    clrlwi r5, r6, 12
    clrlwi. r4, r4, 31
    oris r6, r5, 0x10
    beq lbl_801A310C
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
lbl_801A310C:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    li r9, 0x0
    li r11, 0x0
    li r10, 0x0
    li r12, 0x0
    lis r7, 0x20
    b lbl_801A3160
lbl_801A3134:
    add r4, r11, r7
    cmpw r4, r6
    bgt lbl_801A314C
    add r11, r4, r7
    subf r6, r4, r6
    add r12, r12, r7
lbl_801A314C:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    srwi r7, r7, 1
lbl_801A3160:
    cmpwi r7, 0x0
    bne lbl_801A3134
    lis r7, 0x8000
    b lbl_801A31D8
lbl_801A3170:
    cmpw r11, r6
    mr r5, r11
    add r8, r9, r7
    blt lbl_801A318C
    bne lbl_801A31C4
    cmplw r8, r0
    bgt lbl_801A31C4
lbl_801A318C:
    clrrwi r4, r8, 31
    add r9, r8, r7
    addis r4, r4, 0x8000
    cmplwi r4, 0x0
    bne lbl_801A31AC
    clrrwi. r4, r9, 31
    bne lbl_801A31AC
    addi r11, r11, 0x1
lbl_801A31AC:
    cmplw r0, r8
    subf r6, r5, r6
    bge lbl_801A31BC
    subi r6, r6, 0x1
lbl_801A31BC:
    subf r0, r8, r0
    add r10, r10, r7
lbl_801A31C4:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    srwi r7, r7, 1
lbl_801A31D8:
    cmpwi r7, 0x0
    bne lbl_801A3170
    or. r0, r6, r0
    beq lbl_801A323C
    lfd f0, lbl_804A16E0
    stfd f0, 0x10(r1)
    fcmpo cr0, f0, f0
    opword 0x4C411382
    bne lbl_801A323C
    addis r0, r10, 0x1
    stfd f0, 0x10(r1)
    cmplwi r0, 0xffff
    bne lbl_801A3218
    li r10, 0x0
    addi r12, r12, 0x1
    b lbl_801A323C
lbl_801A3218:
    fcmpo cr0, f0, f0
    ble lbl_801A3234
    cmplwi r0, 0xfffe
    bne lbl_801A322C
    addi r12, r12, 0x1
lbl_801A322C:
    addi r10, r10, 0x2
    b lbl_801A323C
lbl_801A3234:
    clrlwi r0, r10, 31
    add r10, r10, r0
lbl_801A323C:
    clrlwi r0, r12, 31
    srawi r4, r12, 1
    cmpwi r0, 0x1
    srwi r5, r10, 1
    addis r4, r4, 0x3fe0
    bne lbl_801A3258
    oris r5, r5, 0x8000
lbl_801A3258:
    subi r0, r3, 0x3ff
    stw r5, 0x14(r1)
    extlwi r0, r0, 12, 19
    add r4, r4, r0
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
lbl_801A3270:
    addi r1, r1, 0x20
    blr
}

