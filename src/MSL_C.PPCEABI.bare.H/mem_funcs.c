#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/mem_funcs.cpp
// Total functions: 4

// Forward declarations
void fn_80198C40();
void fn_80198CFC();
void fn_80198DA4();
void fn_80198E64();

// ----------------------------------------------------------------------------
// fn_80198C40
// ----------------------------------------------------------------------------
asm void fn_80198C40() {
    nofralloc
    neg r0, r3
    subi r7, r4, 0x1
    clrlwi. r6, r0, 30
    subi r3, r3, 0x1
    beq lbl_80198C68
    subf r5, r6, r5
lbl_80198C58:
    lbzu r0, 0x1(r7)
    subic. r6, r6, 0x1
    stbu r0, 0x1(r3)
    bne lbl_80198C58
lbl_80198C68:
    srwi. r4, r5, 5
    subi r6, r7, 0x3
    subi r3, r3, 0x3
    beq lbl_80198CC0
lbl_80198C78:
    lwz r0, 0x4(r6)
    subic. r4, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r6)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r6)
    stw r0, 0x1c(r3)
    lwzu r0, 0x20(r6)
    stwu r0, 0x20(r3)
    bne lbl_80198C78
lbl_80198CC0:
    extrwi. r4, r5, 3, 27
    beq lbl_80198CD8
lbl_80198CC8:
    lwzu r0, 0x4(r6)
    subic. r4, r4, 0x1
    stwu r0, 0x4(r3)
    bne lbl_80198CC8
lbl_80198CD8:
    clrlwi. r5, r5, 30
    addi r4, r6, 0x3
    addi r3, r3, 0x3
    beqlr
lbl_80198CE8:
    lbzu r0, 0x1(r4)
    subic. r5, r5, 0x1
    stbu r0, 0x1(r3)
    bne lbl_80198CE8
    blr
}

// ----------------------------------------------------------------------------
// fn_80198CFC
// ----------------------------------------------------------------------------
asm void fn_80198CFC() {
    nofralloc
    add r6, r3, r5
    add r4, r4, r5
    clrlwi. r3, r6, 30
    beq lbl_80198D20
    subf r5, r3, r5
lbl_80198D10:
    lbzu r0, -0x1(r4)
    subic. r3, r3, 0x1
    stbu r0, -0x1(r6)
    bne lbl_80198D10
lbl_80198D20:
    srwi. r3, r5, 5
    beq lbl_80198D70
lbl_80198D28:
    lwz r0, -0x4(r4)
    subic. r3, r3, 0x1
    stw r0, -0x4(r6)
    lwz r0, -0x8(r4)
    stw r0, -0x8(r6)
    lwz r0, -0xc(r4)
    stw r0, -0xc(r6)
    lwz r0, -0x10(r4)
    stw r0, -0x10(r6)
    lwz r0, -0x14(r4)
    stw r0, -0x14(r6)
    lwz r0, -0x18(r4)
    stw r0, -0x18(r6)
    lwz r0, -0x1c(r4)
    stw r0, -0x1c(r6)
    lwzu r0, -0x20(r4)
    stwu r0, -0x20(r6)
    bne lbl_80198D28
lbl_80198D70:
    extrwi. r3, r5, 3, 27
    beq lbl_80198D88
lbl_80198D78:
    lwzu r0, -0x4(r4)
    subic. r3, r3, 0x1
    stwu r0, -0x4(r6)
    bne lbl_80198D78
lbl_80198D88:
    clrlwi. r5, r5, 30
    beqlr
lbl_80198D90:
    lbzu r0, -0x1(r4)
    subic. r5, r5, 0x1
    stbu r0, -0x1(r6)
    bne lbl_80198D90
    blr
}

// ----------------------------------------------------------------------------
// fn_80198DA4
// ----------------------------------------------------------------------------
asm void fn_80198DA4() {
    nofralloc
    neg r0, r3
    subi r7, r4, 0x1
    clrlwi. r6, r0, 30
    subi r3, r3, 0x1
    beq lbl_80198DCC
    subf r5, r6, r5
lbl_80198DBC:
    lbzu r0, 0x1(r7)
    subic. r6, r6, 0x1
    stbu r0, 0x1(r3)
    bne lbl_80198DBC
lbl_80198DCC:
    addi r0, r7, 0x1
    subi r4, r3, 0x3
    clrlwi r10, r0, 30
    srwi r6, r5, 3
    subf r7, r10, r7
    clrlslwi r11, r0, 30, 3
    lwzu r8, 0x1(r7)
    subfic r12, r11, 0x20
lbl_80198DEC:
    lwz r9, 0x4(r7)
    slw r3, r8, r11
    subic. r6, r6, 0x1
    srw r0, r9, r12
    or r0, r3, r0
    stw r0, 0x4(r4)
    slw r3, r9, r11
    lwzu r8, 0x8(r7)
    srw r0, r8, r12
    or r0, r3, r0
    stwu r0, 0x8(r4)
    bne lbl_80198DEC
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_80198E38
    lwzu r0, 0x4(r7)
    slw r3, r8, r11
    srw r0, r0, r12
    or r0, r3, r0
    stwu r0, 0x4(r4)
lbl_80198E38:
    clrlwi. r5, r5, 30
    addi r6, r7, 0x3
    addi r3, r4, 0x3
    beqlr
    subfic r0, r10, 0x4
    subf r6, r0, r6
lbl_80198E50:
    lbzu r0, 0x1(r6)
    subic. r5, r5, 0x1
    stbu r0, 0x1(r3)
    bne lbl_80198E50
    blr
}

// ----------------------------------------------------------------------------
// fn_80198E64
// ----------------------------------------------------------------------------
asm void fn_80198E64() {
    nofralloc
    add r12, r3, r5
    add r4, r4, r5
    clrlwi. r3, r12, 30
    beq lbl_80198E88
    subf r5, r3, r5
lbl_80198E78:
    lbzu r0, -0x1(r4)
    subic. r3, r3, 0x1
    stbu r0, -0x1(r12)
    bne lbl_80198E78
lbl_80198E88:
    clrlslwi r10, r4, 30, 3
    clrlwi r9, r4, 30
    subfic r11, r10, 0x20
    srwi r6, r5, 3
    subfic r0, r9, 0x4
    add r4, r4, r0
    lwzu r7, -0x4(r4)
lbl_80198EA4:
    lwz r8, -0x4(r4)
    srw r0, r7, r11
    subic. r6, r6, 0x1
    slw r3, r8, r10
    or r0, r3, r0
    stw r0, -0x4(r12)
    srw r0, r8, r11
    lwzu r7, -0x8(r4)
    slw r3, r7, r10
    or r0, r3, r0
    stwu r0, -0x8(r12)
    bne lbl_80198EA4
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_80198EF0
    lwzu r3, -0x4(r4)
    srw r0, r7, r11
    slw r3, r3, r10
    or r0, r3, r0
    stwu r0, -0x4(r12)
lbl_80198EF0:
    clrlwi. r5, r5, 30
    beqlr
    add r3, r4, r9
lbl_80198EFC:
    lbzu r0, -0x1(r3)
    subic. r5, r5, 0x1
    stbu r0, -0x1(r12)
    bne lbl_80198EFC
    blr
}

