#include "types.h"

// Translation unit: src/revolution/bte/unk_802BA98C.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
extern u8 lbl_80375900[];
extern u8 lbl_80375918[];
extern u8 lbl_80375930[];
extern u8 lbl_80456AF0[];

// Forward declarations
extern void L2CA_ConnectReq();
extern void LogMsg_0();
extern void btu_start_timer();
extern void fn_802BA98C();
extern void fn_802BA9F4();
extern void fn_802BAAB4();
extern void memset();

// ----------------------------------------------------------------------------
// fn_802BA98C
// ----------------------------------------------------------------------------
asm void fn_802BA98C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x144
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456AF0@ha
    addi r3, r31, lbl_80456AF0@l
    bl memset
    lis r3, fn_802BAAB4@ha
    addi r5, r31, lbl_80456AF0@l
    li r6, 0x1
    li r4, 0x40
    addi r3, r3, fn_802BAAB4@l
    li r0, 0x0
    stb r6, 0xca(r5)
    sth r4, 0xcc(r5)
    stb r6, 0x106(r5)
    sth r4, 0x108(r5)
    stw r3, 0x2c(r5)
    stb r0, 0x141(r5)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802BA9F4
// ----------------------------------------------------------------------------
asm void fn_802BA9F4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80456AF0@ha
    addi r29, r29, lbl_80456AF0@l
    lbz r0, 0x141(r29)
    cmplwi r0, 0x4
    blt lbl_802BAA34
    lis r3, 0x1e
    lis r4, lbl_80375900@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375900@l
    bl LogMsg_0
lbl_802BAA34:
    li r0, 0x0
    li r30, 0x1
    lis r31, lbl_80456AF0@ha
    sth r0, 0x14(r29)
    addi r4, r31, lbl_80456AF0@l
    li r3, 0x11
    sth r0, 0x16(r29)
    stb r30, 0x11(r29)
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    sth r3, 0x14(r29)
    bne lbl_802BAA90
    addi r3, r31, lbl_80456AF0@l
    lbz r0, 0x141(r3)
    cmplwi r0, 0x2
    blt lbl_802BAA88
    lis r3, 0x1e
    lis r4, lbl_80375918@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375918@l
    bl LogMsg_0
lbl_802BAA88:
    li r3, 0xe
    b lbl_802BAA98
lbl_802BAA90:
    stb r30, 0x10(r29)
    li r3, 0x0
lbl_802BAA98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802BAAB4
// ----------------------------------------------------------------------------
asm void fn_802BAAB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80456AF0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80456AF0@l
    stw r31, 0xc(r1)
    lbz r0, 0x141(r3)
    cmplwi r0, 0x5
    blt lbl_802BAAEC
    lis r3, 0x1e
    lis r4, lbl_80375930@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_80375930@l
    bl LogMsg_0
lbl_802BAAEC:
    lis r31, lbl_80456AF0@ha
    addi r31, r31, lbl_80456AF0@l
    lbz r3, 0x9(r31)
    addi r0, r3, 0x1
    stb r0, 0x9(r31)
    bl fn_802BA9F4
    clrlwi. r0, r3, 24
    beq lbl_802BAB50
    lbz r0, 0x9(r31)
    cmplwi r0, 0xf
    ble lbl_802BAB3C
    lwz r12, 0xc4(r31)
    li r0, 0x0
    stb r0, 0x8(r31)
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_802BAB68
lbl_802BAB3C:
    addi r3, r31, 0x1c
    li r4, 0x16
    li r5, 0x1
    bl btu_start_timer
    b lbl_802BAB68
lbl_802BAB50:
    lwz r12, 0xc4(r31)
    li r3, 0x2
    lbz r4, 0x9(r31)
    li r5, 0x0
    mtctr r12
    bctrl
lbl_802BAB68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

