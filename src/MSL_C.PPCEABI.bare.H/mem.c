#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/mem.cpp
// Total functions: 4

// Forward declarations
void __memrchr();
void fn_80198BF4();
void fn_80198C40();
void fn_80198CFC();
void fn_80198DA4();
void fn_80198E64();
void memchr();
void memmove();

// ----------------------------------------------------------------------------
// memmove
// ----------------------------------------------------------------------------
asm void memmove() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    xor r6, r3, r4
    cmplwi r5, 0x20
    stw r0, 0x14(r1)
    cntlzw r0, r6
    slw r0, r3, r0
    stw r31, 0xc(r1)
    mr r31, r3
    srwi r7, r0, 31
    blt lbl_80198B38
    clrlwi. r0, r6, 30
    beq lbl_80198B1C
    cmpwi r7, 0x0
    bne lbl_80198B14
    bl fn_80198DA4
    b lbl_80198B30
lbl_80198B14:
    bl fn_80198E64
    b lbl_80198B30
lbl_80198B1C:
    cmpwi r7, 0x0
    bne lbl_80198B2C
    bl fn_80198C40
    b lbl_80198B30
lbl_80198B2C:
    bl fn_80198CFC
lbl_80198B30:
    mr r3, r31
    b lbl_80198B88
lbl_80198B38:
    cmpwi r7, 0x0
    bne lbl_80198B64
    subi r4, r4, 0x1
    subi r3, r3, 0x1
    addi r5, r5, 0x1
    b lbl_80198B58
lbl_80198B50:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r3)
lbl_80198B58:
    subic. r5, r5, 0x1
    bne lbl_80198B50
    b lbl_80198B84
lbl_80198B64:
    add r4, r4, r5
    add r3, r3, r5
    addi r5, r5, 0x1
    b lbl_80198B7C
lbl_80198B74:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r3)
lbl_80198B7C:
    subic. r5, r5, 0x1
    bne lbl_80198B74
lbl_80198B84:
    mr r3, r31
lbl_80198B88:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// memchr
// ----------------------------------------------------------------------------
asm void memchr() {
    nofralloc
    clrlwi r4, r4, 24
    subi r3, r3, 0x1
    addi r5, r5, 0x1
    b lbl_80198BB8
lbl_80198BAC:
    lbzu r0, 0x1(r3)
    cmplw r0, r4
    beqlr
lbl_80198BB8:
    subic. r5, r5, 0x1
    bne lbl_80198BAC
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __memrchr
// ----------------------------------------------------------------------------
asm void __memrchr() {
    nofralloc
    add r3, r3, r5
    clrlwi r4, r4, 24
    addi r5, r5, 0x1
    b lbl_80198BE4
lbl_80198BD8:
    lbzu r0, -0x1(r3)
    cmplw r0, r4
    beqlr
lbl_80198BE4:
    subic. r5, r5, 0x1
    bne lbl_80198BD8
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80198BF4
// ----------------------------------------------------------------------------
asm void fn_80198BF4() {
    nofralloc
    subi r7, r4, 0x1
    subi r6, r3, 0x1
    addi r4, r5, 0x1
    b lbl_80198C30
lbl_80198C04:
    lbzu r3, 0x1(r6)
    lbzu r0, 0x1(r7)
    cmplw r3, r0
    beq lbl_80198C30
    lbz r4, 0x0(r6)
    li r3, 0x1
    lbz r0, 0x0(r7)
    cmplw r4, r0
    bgelr
    li r3, -0x1
    blr
lbl_80198C30:
    subic. r4, r4, 0x1
    bne lbl_80198C04
    li r3, 0x0
    blr
}

