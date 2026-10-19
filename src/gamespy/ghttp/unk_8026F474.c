#include "types.h"

// Translation unit: src/gamespy/ghttp/unk_8026F474.cpp
// Total functions: 1

// Forward declarations
extern void fn_8026EDD0();
extern void fn_8026F474();
extern void ghiAppendDataToBuffer();
extern void ghiDoSend();
extern void ghiEncryptDataToBuffer();
extern void ghiResetBuffer();

// ----------------------------------------------------------------------------
// fn_8026F474
// ----------------------------------------------------------------------------
asm void fn_8026F474() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_8026F518
    lwz r0, 0x1a0(r3)
    cmpwi r0, 0x1
    bne lbl_8026F518
    lwz r0, 0x1a4(r3)
    cmpwi r0, 0x1
    bne lbl_8026F518
    addi r3, r3, 0x54
    bl ghiEncryptDataToBuffer
    cmpwi r3, 0x0
    bne lbl_8026F4D8
    li r3, 0x0
    b lbl_8026F594
lbl_8026F4D8:
    mr r3, r29
    bl fn_8026EDD0
    cmpwi r3, 0x0
    bne lbl_8026F4F0
    li r3, 0x0
    b lbl_8026F594
lbl_8026F4F0:
    lwz r3, 0x64(r29)
    lwz r0, 0x60(r29)
    cmpw r3, r0
    blt lbl_8026F510
    addi r3, r29, 0x54
    bl ghiResetBuffer
    li r3, 0x1
    b lbl_8026F594
lbl_8026F510:
    li r3, 0x2
    b lbl_8026F594
lbl_8026F518:
    lwz r4, 0x64(r3)
    lwz r0, 0x60(r3)
    cmpw r4, r0
    blt lbl_8026F570
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl ghiDoSend
    cmpwi r3, -0x1
    mr r6, r3
    beq lbl_8026F554
    bge lbl_8026F560
    cmpwi r3, -0x2
    bge lbl_8026F55C
    b lbl_8026F560
lbl_8026F554:
    li r3, 0x0
    b lbl_8026F594
lbl_8026F55C:
    li r6, 0x0
lbl_8026F560:
    cmpw r6, r31
    bne lbl_8026F570
    li r3, 0x1
    b lbl_8026F594
lbl_8026F570:
    addi r3, r29, 0x54
    add r4, r30, r6
    subf r5, r6, r31
    bl ghiAppendDataToBuffer
    cmpwi r3, 0x0
    bne lbl_8026F590
    li r3, 0x0
    b lbl_8026F594
lbl_8026F590:
    li r3, 0x2
lbl_8026F594:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

