#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/uart_console_io_gcn.cpp
// Total functions: 2

// Small Data symbols (@sda21)
float lbl_8049D8D0;

// Forward declarations
void OSGetConsoleType();
void fn_8019EFD8();
void fn_8019F0A8();
void fn_801A6C2C();
void fn_802D992C();
void fn_802D9974();

// ----------------------------------------------------------------------------
// fn_8019EFD8
// ----------------------------------------------------------------------------
asm void fn_8019EFD8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 2, 2
    bne lbl_8019F070
    lwz r0, lbl_8049D8D0
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_8019F03C
    lis r3, 0x1
    subi r3, r3, 0x1f00
    bl fn_802D992C
    cmpwi r3, 0x0
    bne lbl_8019F03C
    li r0, 0x1
    stw r0, lbl_8049D8D0
lbl_8019F03C:
    cmpwi r3, 0x0
    beq lbl_8019F04C
    li r3, 0x1
    b lbl_8019F088
lbl_8019F04C:
    lwz r4, 0x0(r30)
    mr r3, r29
    bl fn_802D9974
    cmpwi r3, 0x0
    beq lbl_8019F070
    li r0, 0x0
    stw r0, 0x0(r30)
    li r3, 0x1
    b lbl_8019F088
lbl_8019F070:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801A6C2C
    li r3, 0x0
lbl_8019F088:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8019F0A8
// ----------------------------------------------------------------------------
asm void fn_8019F0A8() {
    nofralloc
    li r3, 0x0
    blr
}

