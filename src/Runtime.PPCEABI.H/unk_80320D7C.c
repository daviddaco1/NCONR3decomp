#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/unk_80320D7C.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern float lbl_804A27C0;

// Forward declarations
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80320D7C();
extern void fn_80320E98();
extern void sqrt();

// ----------------------------------------------------------------------------
// fn_80320D7C
// ----------------------------------------------------------------------------
asm void fn_80320D7C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lbz r31, 0x0(r3)
    extsb r0, r6
    lbz r30, 0x0(r4)
    neg r7, r0
    extsb r31, r31
    mr r27, r3
    cmpw r7, r31
    mr r28, r4
    mr r29, r5
    extsb r30, r30
    bge lbl_80320DCC
    cmpw r31, r0
    bge lbl_80320DCC
    li r31, 0x0
    b lbl_80320DE4
lbl_80320DCC:
    cmpwi r31, 0x0
    extsb r0, r6
    add r3, r31, r0
    ble lbl_80320DE0
    subf r3, r0, r31
lbl_80320DE0:
    mr r31, r3
lbl_80320DE4:
    cmpw r7, r30
    bge lbl_80320E00
    extsb r0, r6
    cmpw r30, r0
    bge lbl_80320E00
    li r30, 0x0
    b lbl_80320E18
lbl_80320E00:
    cmpwi r30, 0x0
    extsb r0, r6
    add r3, r30, r0
    ble lbl_80320E14
    subf r3, r0, r30
lbl_80320E14:
    mr r30, r3
lbl_80320E18:
    extsb r0, r5
    mullw r4, r31, r31
    mullw r3, r30, r30
    mullw r0, r0, r0
    add r3, r4, r3
    cmpw r0, r3
    bge lbl_80320E78
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f1, lbl_804A27C0
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    bl sqrt
    frsp f0, f1
    extsb r0, r29
    mullw r3, r31, r0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    mullw r0, r30, r0
    lwz r4, 0x14(r1)
    divw r31, r3, r4
    divw r30, r0, r4
lbl_80320E78:
    stb r31, 0x0(r27)
    addi r11, r1, 0x30
    stb r30, 0x0(r28)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80320E98
// ----------------------------------------------------------------------------
asm void fn_80320E98() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0xb4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_80320EC4:
    lbz r0, 0xa(r28)
    extsb. r0, r0
    bne lbl_80320F50
    addi r3, r28, 0x2
    addi r4, r28, 0x3
    li r5, 0x38
    li r6, 0xf
    bl fn_80320D7C
    addi r3, r28, 0x4
    addi r4, r28, 0x5
    li r5, 0x2c
    li r6, 0xf
    bl fn_80320D7C
    lbz r0, 0x6(r28)
    cmplwi r0, 0x1e
    bgt lbl_80320F0C
    stb r30, 0x6(r28)
    b lbl_80320F24
lbl_80320F0C:
    cmplwi r0, 0xb4
    ble lbl_80320F18
    stb r31, 0x6(r28)
lbl_80320F18:
    lbz r3, 0x6(r28)
    subi r0, r3, 0x1e
    stb r0, 0x6(r28)
lbl_80320F24:
    lbz r0, 0x7(r28)
    cmplwi r0, 0x1e
    bgt lbl_80320F38
    stb r30, 0x7(r28)
    b lbl_80320F50
lbl_80320F38:
    cmplwi r0, 0xb4
    ble lbl_80320F44
    stb r31, 0x7(r28)
lbl_80320F44:
    lbz r3, 0x7(r28)
    subi r0, r3, 0x1e
    stb r0, 0x7(r28)
lbl_80320F50:
    addi r29, r29, 0x1
    addi r28, r28, 0xc
    cmpwi r29, 0x4
    blt lbl_80320EC4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

