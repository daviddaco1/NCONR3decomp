#include "types.h"

// Translation unit: src/gamespy/ghttp/unk_8026EDD0.cpp
// Total functions: 1

// Forward declarations
extern void GOAGetLastError();
extern void GSISocketSelect();
extern void fn_8026EDD0();
extern void ghiDoSend();

// ----------------------------------------------------------------------------
// fn_8026EDD0
// ----------------------------------------------------------------------------
asm void fn_8026EDD0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
lbl_8026EDE4:
    lwz r0, 0x194(r31)
    cmpwi r0, 0x0
    beq lbl_8026EDFC
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x1
    bne lbl_8026EE80
lbl_8026EDFC:
    lwz r3, 0x4c(r31)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    li r4, 0x0
    bl GSISocketSelect
    cmpwi r3, -0x1
    beq lbl_8026EE2C
    cmpwi r3, 0x1
    bne lbl_8026EE64
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026EE64
lbl_8026EE2C:
    li r4, 0x1
    li r0, 0x5
    cmpwi r3, -0x1
    stw r4, 0x120(r31)
    stw r0, 0x3c(r31)
    bne lbl_8026EE54
    lwz r3, 0x4c(r31)
    bl GOAGetLastError
    stw r3, 0x50(r31)
    b lbl_8026EE5C
lbl_8026EE54:
    li r0, 0x0
    stw r0, 0x50(r31)
lbl_8026EE5C:
    li r3, 0x0
    b lbl_8026EEE0
lbl_8026EE64:
    cmpwi r3, 0x1
    blt lbl_8026EE78
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_8026EE80
lbl_8026EE78:
    li r3, 0x1
    b lbl_8026EEE0
lbl_8026EE80:
    lwz r5, 0x64(r31)
    mr r3, r31
    lwz r4, 0x58(r31)
    lwz r0, 0x60(r31)
    add r4, r4, r5
    subf r5, r5, r0
    bl ghiDoSend
    cmpwi r3, -0x1
    beq lbl_8026EEB4
    bge lbl_8026EEC4
    cmpwi r3, -0x2
    bge lbl_8026EEBC
    b lbl_8026EEC4
lbl_8026EEB4:
    li r3, 0x0
    b lbl_8026EEE0
lbl_8026EEBC:
    li r3, 0x1
    b lbl_8026EEE0
lbl_8026EEC4:
    lwz r4, 0x64(r31)
    lwz r0, 0x60(r31)
    add r3, r4, r3
    cmpw r3, r0
    stw r3, 0x64(r31)
    blt lbl_8026EDE4
    li r3, 0x1
lbl_8026EEE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

