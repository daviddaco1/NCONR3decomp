#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/alloc.cpp
// Total functions: 4

// Small Data symbols (@sda21)
float lbl_8049D8C0;

// Global data symbols (@ha/@l)
u8 lbl_8033B3A0[];
u8 lbl_803D7510[];

// Forward declarations
void fn_80195AB0();
void fn_80195CA8();
void fn_80195DF8();
void fn_80195EA0();
void fn_8019608C();
void memset();

// ----------------------------------------------------------------------------
// fn_80195CA8
// ----------------------------------------------------------------------------
asm void fn_80195CA8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r4)
    clrrwi r6, r0, 3
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x0(r4)
    add r5, r4, r6
    lwzx r0, r4, r6
    rlwinm r0, r0, 0, 30, 28
    stwx r0, r4, r6
    stw r6, -0x4(r5)
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 3
    add r31, r3, r0
    lwzu r3, -0x4(r31)
    cmpwi r3, 0x0
    beq lbl_80195DB8
    lwz r5, 0x8(r3)
    mr r3, r4
    stw r5, 0x8(r4)
    stw r4, 0xc(r5)
    lwz r0, 0x0(r31)
    stw r0, 0xc(r4)
    lwz r5, 0x0(r31)
    stw r4, 0x8(r5)
    stw r4, 0x0(r31)
    lwz r0, 0x0(r4)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_80195DA8
    lwz r6, -0x4(r4)
    rlwinm. r0, r6, 0, 30, 30
    beq lbl_80195D3C
    b lbl_80195DA8
lbl_80195D3C:
    subf r3, r6, r4
    lwz r0, 0x0(r3)
    clrlwi r5, r0, 29
    stw r5, 0x0(r3)
    lwz r0, 0x0(r4)
    clrrwi r0, r0, 3
    add r0, r6, r0
    rlwimi r5, r0, 0, 0, 28
    stw r5, 0x0(r3)
    rlwinm. r0, r5, 0, 30, 30
    bne lbl_80195D7C
    lwz r0, 0x0(r4)
    clrrwi r0, r0, 3
    add r0, r6, r0
    add r5, r3, r0
    stw r0, -0x4(r5)
lbl_80195D7C:
    lwz r5, 0x0(r31)
    cmplw r5, r4
    bne lbl_80195D90
    lwz r0, 0xc(r5)
    stw r0, 0x0(r31)
lbl_80195D90:
    lwz r5, 0xc(r4)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r5)
    lwz r5, 0xc(r4)
    lwz r4, 0x8(r5)
    stw r5, 0xc(r4)
lbl_80195DA8:
    stw r3, 0x0(r31)
    mr r4, r31
    bl fn_80195DF8
    b lbl_80195DC4
lbl_80195DB8:
    stw r4, 0x0(r31)
    stw r4, 0x8(r4)
    stw r4, 0xc(r4)
lbl_80195DC4:
    lwz r3, 0x0(r31)
    lwz r0, 0x8(r30)
    lwz r3, 0x0(r3)
    clrrwi r3, r3, 3
    cmplw r0, r3
    bge lbl_80195DE0
    stw r3, 0x8(r30)
lbl_80195DE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80195DF8
// ----------------------------------------------------------------------------
asm void fn_80195DF8() {
    nofralloc
    lwz r6, 0x0(r3)
    clrrwi r7, r6, 3
    lwzx r5, r3, r7
    add r8, r3, r7
    rlwinm. r0, r5, 0, 30, 30
    bnelr
    clrrwi r5, r5, 3
    clrlwi r0, r6, 29
    add r6, r7, r5
    rlwimi r0, r6, 0, 0, 28
    stw r0, 0x0(r3)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_80195E34
    add r5, r3, r6
    stw r6, -0x4(r5)
lbl_80195E34:
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_80195E50
    lwzx r0, r3, r6
    rlwinm r0, r0, 0, 30, 28
    stwx r0, r3, r6
    b lbl_80195E5C
lbl_80195E50:
    lwzx r0, r3, r6
    ori r0, r0, 0x4
    stwx r0, r3, r6
lbl_80195E5C:
    lwz r3, 0x0(r4)
    cmplw r3, r8
    bne lbl_80195E70
    lwz r0, 0xc(r3)
    stw r0, 0x0(r4)
lbl_80195E70:
    lwz r0, 0x0(r4)
    cmplw r0, r8
    bne lbl_80195E84
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_80195E84:
    lwz r3, 0xc(r8)
    lwz r0, 0x8(r8)
    stw r0, 0x8(r3)
    lwz r3, 0x8(r8)
    lwz r0, 0xc(r8)
    stw r0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80195EA0
// ----------------------------------------------------------------------------
asm void fn_80195EA0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8033B3A0@ha
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_8033B3A0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    b lbl_80195ED0
lbl_80195EC8:
    addi r6, r6, 0x4
    addi r7, r7, 0x1
lbl_80195ED0:
    lwz r0, 0x0(r6)
    cmplw r5, r0
    bgt lbl_80195EC8
    subi r6, r4, 0x4
    lwz r4, -0x4(r4)
    slwi r0, r7, 3
    add r3, r3, r0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_80195F60
    lwz r5, 0x8(r3)
    cmplw r5, r4
    beq lbl_80195F60
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_80195F28
    lwz r0, 0x0(r5)
    stw r0, 0x8(r3)
    lwz r5, 0x4(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x4(r3)
    b lbl_80195F60
lbl_80195F28:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r5, 0x4(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r5, 0x8(r3)
    stw r5, 0x4(r4)
    lwz r5, 0x0(r5)
    stw r5, 0x0(r4)
    stw r4, 0x4(r5)
    lwz r5, 0x4(r4)
    stw r4, 0x0(r5)
    stw r4, 0x8(r3)
lbl_80195F60:
    lwz r0, 0xc(r4)
    stw r0, 0x4(r6)
    stw r6, 0xc(r4)
    lwz r0, 0x10(r4)
    subic. r0, r0, 0x1
    stw r0, 0x10(r4)
    bne lbl_80196074
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_80195F90
    lwz r0, 0x4(r4)
    stw r0, 0x8(r3)
lbl_80195F90:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_80195FA4
    lwz r0, 0x0(r4)
    stw r0, 0x4(r3)
lbl_80195FA4:
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    lwz r5, 0x4(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r5)
    lwz r0, 0x8(r3)
    cmplw r0, r4
    bne lbl_80195FD0
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_80195FD0:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_80195FE4
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_80195FE4:
    subi r4, r4, 0x8
    lwz r0, 0x4(r4)
    clrrwi r30, r0, 1
    mr r3, r30
    bl fn_80195CA8
    lwz r3, 0x10(r30)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_80196024
    lwz r0, 0xc(r30)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_80196024
    li r5, 0x1
lbl_80196024:
    cmpwi r5, 0x0
    beq lbl_80196074
    lwz r4, 0x4(r30)
    cmplw r4, r30
    bne lbl_8019603C
    li r4, 0x0
lbl_8019603C:
    lwz r0, 0x0(r31)
    cmplw r0, r30
    bne lbl_8019604C
    stw r4, 0x0(r31)
lbl_8019604C:
    cmpwi r4, 0x0
    beq lbl_80196060
    lwz r3, 0x0(r30)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_80196060:
    li r0, 0x0
    stw r0, 0x4(r30)
    mr r3, r30
    stw r0, 0x0(r30)
    bl fn_80195AB0
lbl_80196074:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8019608C
// ----------------------------------------------------------------------------
asm void fn_8019608C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lbz r0, lbl_8049D8C0
    cmpwi r0, 0x0
    bne lbl_801960CC
    lis r3, lbl_803D7510@ha
    li r4, 0x0
    addi r3, r3, lbl_803D7510@l
    li r5, 0x34
    bl memset
    li r0, 0x1
    stb r0, lbl_8049D8C0
lbl_801960CC:
    cmpwi r31, 0x0
    lis r30, lbl_803D7510@ha
    addi r30, r30, lbl_803D7510@l
    beq lbl_801961A4
    lwz r3, -0x4(r31)
    clrlwi. r0, r3, 31
    bne lbl_801960F0
    lwz r5, 0x8(r3)
    b lbl_801960FC
lbl_801960F0:
    lwz r0, -0x8(r31)
    clrrwi r3, r0, 3
    subi r5, r3, 0x8
lbl_801960FC:
    cmplwi r5, 0x44
    bgt lbl_80196114
    mr r3, r30
    mr r4, r31
    bl fn_80195EA0
    b lbl_801961A4
lbl_80196114:
    lwz r0, -0x4(r31)
    subi r4, r31, 0x8
    clrrwi r31, r0, 1
    mr r3, r31
    bl fn_80195CA8
    lwz r3, 0x10(r31)
    li r5, 0x0
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_80196154
    lwz r0, 0xc(r31)
    clrrwi r4, r3, 3
    clrrwi r3, r0, 3
    subi r0, r3, 0x18
    cmplw r4, r0
    bne lbl_80196154
    li r5, 0x1
lbl_80196154:
    cmpwi r5, 0x0
    beq lbl_801961A4
    lwz r4, 0x4(r31)
    cmplw r4, r31
    bne lbl_8019616C
    li r4, 0x0
lbl_8019616C:
    lwz r0, 0x0(r30)
    cmplw r0, r31
    bne lbl_8019617C
    stw r4, 0x0(r30)
lbl_8019617C:
    cmpwi r4, 0x0
    beq lbl_80196190
    lwz r3, 0x0(r31)
    stw r3, 0x0(r4)
    stw r4, 0x4(r3)
lbl_80196190:
    li r0, 0x0
    stw r0, 0x4(r31)
    mr r3, r31
    stw r0, 0x0(r31)
    bl fn_80195AB0
lbl_801961A4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

