#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/s_floor.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float lbl_804A1690;
float lbl_804A1698;

// Forward declarations
void fn_801A2A94();

// ----------------------------------------------------------------------------
// fn_801A2A94
// ----------------------------------------------------------------------------
asm void fn_801A2A94() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r3, r5, 11, 1
    subi r7, r3, 0x3ff
    cmpwi r7, 0x34
    bge lbl_801A2AC8
    cmpwi cr1, r7, 0x14
    bge cr1, lbl_801A2B6C
    cmpwi r7, 0x0
    bge lbl_801A2B14
    b lbl_801A2AD4
lbl_801A2AC8:
    cmpwi r7, 0x400
    beq lbl_801A2B60
    b lbl_801A2BDC
lbl_801A2AD4:
    lfd f2, lbl_804A1690
    lfd f0, lbl_804A1698
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A2BD0
    cmpwi r5, 0x0
    blt lbl_801A2AFC
    li r6, 0x0
    li r5, 0x0
    b lbl_801A2BD0
lbl_801A2AFC:
    clrlwi r0, r5, 1
    or. r0, r0, r6
    beq lbl_801A2BD0
    lis r5, 0xbff0
    li r6, 0x0
    b lbl_801A2BD0
lbl_801A2B14:
    lis r3, 0x10
    subi r0, r3, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_801A2B30
    b lbl_801A2BDC
lbl_801A2B30:
    lfd f2, lbl_804A1690
    lfd f0, lbl_804A1698
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A2BD0
    cmpwi r5, 0x0
    bge lbl_801A2B54
    sraw r0, r3, r7
    add r5, r5, r0
lbl_801A2B54:
    andc r5, r5, r4
    li r6, 0x0
    b lbl_801A2BD0
lbl_801A2B60:
    fadd f1, f1, f1
    b lbl_801A2BDC
    b lbl_801A2BDC
lbl_801A2B6C:
    subi r0, r7, 0x14
    li r3, -0x1
    srw r4, r3, r0
    and. r0, r6, r4
    bne lbl_801A2B84
    b lbl_801A2BDC
lbl_801A2B84:
    lfd f2, lbl_804A1690
    lfd f0, lbl_804A1698
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_801A2BD0
    cmpwi r5, 0x0
    bge lbl_801A2BCC
    bne cr1, lbl_801A2BAC
    addi r5, r5, 0x1
    b lbl_801A2BCC
lbl_801A2BAC:
    subfic r0, r7, 0x34
    li r3, 0x1
    slw r0, r3, r0
    add r0, r6, r0
    cmplw r0, r6
    bge lbl_801A2BC8
    addi r5, r5, 0x1
lbl_801A2BC8:
    mr r6, r0
lbl_801A2BCC:
    andc r6, r6, r4
lbl_801A2BD0:
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    lfd f1, 0x8(r1)
lbl_801A2BDC:
    addi r1, r1, 0x10
    blr
}

