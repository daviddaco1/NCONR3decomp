#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_ceil.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1678;
float lbl_804A1680;

// Forward declarations
void fn_801A2854();

// ----------------------------------------------------------------------------
// fn_801A2854
// ----------------------------------------------------------------------------
asm void fn_801A2854() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r3, r5, 11, 1
    subi r7, r3, 0x3ff
    cmpwi r7, 0x34
    bge lbl_801A2888
    cmpwi cr1, r7, 0x14
    bge cr1, lbl_801A2928
    cmpwi r7, 0x0
    bge lbl_801A28D0
    b lbl_801A2894
lbl_801A2888:
    cmpwi r7, 0x400
    beq lbl_801A291C
    b lbl_801A2998
lbl_801A2894:
    lfd f2, lbl_804A1678
    lfd f0, lbl_804A1680
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A298C
    cmpwi r5, 0x0
    bge lbl_801A28BC
    lis r5, 0x8000
    li r6, 0x0
    b lbl_801A298C
lbl_801A28BC:
    or. r0, r5, r6
    beq lbl_801A298C
    lis r5, 0x3ff0
    li r6, 0x0
    b lbl_801A298C
lbl_801A28D0:
    lis r3, 0x10
    subi r0, r3, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_801A28EC
    b lbl_801A2998
lbl_801A28EC:
    lfd f2, lbl_804A1678
    lfd f0, lbl_804A1680
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A298C
    cmpwi r5, 0x0
    ble lbl_801A2910
    sraw r0, r3, r7
    add r5, r5, r0
lbl_801A2910:
    andc r5, r5, r4
    li r6, 0x0
    b lbl_801A298C
lbl_801A291C:
    fadd f1, f1, f1
    b lbl_801A2998
    b lbl_801A2998
lbl_801A2928:
    subi r0, r7, 0x14
    li r3, -0x1
    srw r4, r3, r0
    and. r0, r6, r4
    bne lbl_801A2940
    b lbl_801A2998
lbl_801A2940:
    lfd f2, lbl_804A1678
    lfd f0, lbl_804A1680
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A298C
    cmpwi r5, 0x0
    ble lbl_801A2988
    bne cr1, lbl_801A2968
    addi r5, r5, 0x1
    b lbl_801A2988
lbl_801A2968:
    subfic r0, r7, 0x34
    li r3, 0x1
    slw r0, r3, r0
    add r0, r6, r0
    cmplw r0, r6
    bge lbl_801A2984
    addi r5, r5, 0x1
lbl_801A2984:
    mr r6, r0
lbl_801A2988:
    andc r6, r6, r4
lbl_801A298C:
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    lfd f1, 0x8(r1)
lbl_801A2998:
    addi r1, r1, 0x10
    blr
}

