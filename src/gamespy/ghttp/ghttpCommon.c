#include "types.h"

// Translation unit: src/gamespy/ghttp/ghttpCommon.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float lbl_8049CD00;
extern float lbl_8049CD04;

// Forward declarations
extern void GOAGetLastError();
extern void fn_802565F0();
extern void fn_80270018();
extern void fn_80270098();
extern void ghiCreateLock();
extern void ghiDecryptReceivedData();
extern void ghiDoReceive();
extern void ghiDoSend();
extern void ghiFreeLock();
extern void ghiLock();
extern void ghiResetBuffer();
extern void ghiResizeBuffer();
extern void ghiUnlock();
extern void memmove();
extern void recv();
extern void send();

// ----------------------------------------------------------------------------
// ghiCreateLock
// ----------------------------------------------------------------------------
asm void ghiCreateLock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// ghiFreeLock
// ----------------------------------------------------------------------------
asm void ghiFreeLock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// ghiLock
// ----------------------------------------------------------------------------
asm void ghiLock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// ghiUnlock
// ----------------------------------------------------------------------------
asm void ghiUnlock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// ghiDecryptReceivedData
// ----------------------------------------------------------------------------
asm void ghiDecryptReceivedData() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
lbl_8026F048:
    lwz r7, 0xd0(r31)
    mr r3, r31
    lwz r0, 0xcc(r31)
    addi r4, r31, 0x190
    lwz r5, 0xc4(r31)
    addi r6, r1, 0xc
    subf r0, r7, r0
    addi r8, r1, 0x8
    stw r0, 0xc(r1)
    add r5, r5, r7
    lwz r9, 0xa8(r31)
    lwz r0, 0xa4(r31)
    lwz r7, 0xa0(r31)
    subf r0, r9, r0
    stw r0, 0x8(r1)
    add r7, r7, r9
    lwz r12, 0x1c0(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x2
    mr r30, r3
    bne lbl_8026F0BC
    lwz r4, 0xb0(r31)
    addi r3, r31, 0x9c
    bl ghiResizeBuffer
    cmpwi r3, 0x0
    bne lbl_8026F0CC
    li r3, 0x0
    b lbl_8026F15C
lbl_8026F0BC:
    cmpwi r3, 0x3
    bne lbl_8026F0CC
    li r3, 0x0
    b lbl_8026F15C
lbl_8026F0CC:
    cmpwi r30, 0x2
    bne lbl_8026F0E0
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026F048
lbl_8026F0E0:
    lwz r4, 0xc(r1)
    lwz r5, 0xcc(r31)
    cmpw r4, r5
    ble lbl_8026F0F8
    li r3, 0x0
    b lbl_8026F15C
lbl_8026F0F8:
    lwz r0, 0xd0(r31)
    lwz r3, 0xa8(r31)
    add r4, r0, r4
    stw r4, 0xd0(r31)
    lwz r0, 0x8(r1)
    add r0, r3, r0
    stw r0, 0xa8(r31)
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bgt lbl_8026F048
    cmpwi r4, 0xff
    ble lbl_8026F158
    subf. r30, r4, r5
    bne lbl_8026F13C
    addi r3, r31, 0xc0
    bl ghiResetBuffer
    b lbl_8026F158
lbl_8026F13C:
    lwz r3, 0xc4(r31)
    mr r5, r30
    add r4, r3, r4
    bl memmove
    li r0, 0x0
    stw r30, 0xcc(r31)
    stw r0, 0xd0(r31)
lbl_8026F158:
    li r3, 0x1
lbl_8026F15C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ghiDoReceive
// ----------------------------------------------------------------------------
asm void ghiDoReceive() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x158(r3)
    lwz r3, 0x0(r5)
    cmpwi r0, 0x0
    subi r30, r3, 0x1
    beq lbl_8026F1E8
    bl fn_802565F0
    lwz r4, 0x15c(r31)
    lwz r0, lbl_8049CD04
    add r0, r4, r0
    cmplw r3, r0
    bge lbl_8026F1D0
    li r3, 0x1
    b lbl_8026F310
lbl_8026F1D0:
    stw r3, 0x15c(r31)
    lwz r0, lbl_8049CD00
    cmpw r30, r0
    bge lbl_8026F1E4
    mr r0, r30
lbl_8026F1E4:
    mr r30, r0
lbl_8026F1E8:
    lwz r0, 0x194(r31)
    cmpwi r0, 0x0
    beq lbl_8026F268
    lwz r0, 0x1a0(r31)
    cmpwi r0, 0x1
    bne lbl_8026F268
    lwz r0, 0x1a8(r31)
    cmpwi r0, 0x1
    bne lbl_8026F268
    stw r30, 0x8(r1)
    mr r3, r31
    mr r5, r28
    addi r4, r31, 0x190
    addi r6, r1, 0x8
    bl fn_80270098
    cmpwi r3, 0x1
    bne lbl_8026F244
    lwz r4, 0x8(r1)
    cmpwi r4, -0x1
    bne lbl_8026F2E8
    li r3, 0x1
    b lbl_8026F310
    b lbl_8026F2E8
lbl_8026F244:
    li r5, 0x1
    li r4, 0x5
    li r0, 0x0
    stw r5, 0x120(r31)
    li r3, 0x3
    stw r4, 0x3c(r31)
    stw r0, 0x50(r31)
    stw r5, 0x154(r31)
    b lbl_8026F310
lbl_8026F268:
    lwz r3, 0x4c(r31)
    mr r4, r28
    mr r5, r30
    li r6, 0x0
    bl recv
    cmpwi r3, -0x1
    mr r4, r3
    bne lbl_8026F2E8
    lwz r3, 0x4c(r31)
    bl GOAGetLastError
    cmpwi r3, -0x38
    bne lbl_8026F2A8
    li r0, 0x1
    li r3, 0x2
    stw r0, 0x154(r31)
    b lbl_8026F310
lbl_8026F2A8:
    cmpwi r3, -0x6
    beq lbl_8026F2C0
    cmpwi r3, -0x1a
    beq lbl_8026F2C0
    cmpwi r3, -0x4c
    bne lbl_8026F2C8
lbl_8026F2C0:
    li r3, 0x1
    b lbl_8026F310
lbl_8026F2C8:
    li r4, 0x1
    li r0, 0x5
    stw r3, 0x50(r31)
    li r3, 0x3
    stw r4, 0x120(r31)
    stw r0, 0x3c(r31)
    stw r4, 0x154(r31)
    b lbl_8026F310
lbl_8026F2E8:
    cmpwi r4, 0x0
    bne lbl_8026F300
    li r0, 0x1
    li r3, 0x2
    stw r0, 0x154(r31)
    b lbl_8026F310
lbl_8026F300:
    li r0, 0x0
    li r3, 0x0
    stbx r0, r28, r4
    stw r4, 0x0(r29)
lbl_8026F310:
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
// ghiDoSend
// ----------------------------------------------------------------------------
asm void ghiDoSend() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    mr r6, r5
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_8026F35C
    cmpwi r5, 0x0
    bne lbl_8026F364
lbl_8026F35C:
    li r3, 0x0
    b lbl_8026F45C
lbl_8026F364:
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_8026F3DC
    lwz r0, 0x1a0(r3)
    cmpwi r0, 0x1
    bne lbl_8026F3DC
    lwz r0, 0x1a8(r3)
    cmpwi r0, 0x1
    bne lbl_8026F3DC
    li r31, 0x0
    mr r5, r4
    stw r31, 0x8(r1)
    addi r4, r3, 0x190
    addi r7, r1, 0x8
    bl fn_80270018
    cmpwi r3, 0x1
    bne lbl_8026F3C0
    lwz r3, 0x8(r1)
    cmpwi r3, -0x1
    bne lbl_8026F438
    li r3, -0x2
    b lbl_8026F45C
    b lbl_8026F438
lbl_8026F3C0:
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x120(r30)
    li r3, -0x1
    stw r0, 0x3c(r30)
    stw r31, 0x50(r30)
    b lbl_8026F45C
lbl_8026F3DC:
    lwz r3, 0x4c(r3)
    mr r5, r6
    li r6, 0x0
    bl send
    cmpwi r3, -0x1
    bne lbl_8026F438
    lwz r3, 0x4c(r30)
    bl GOAGetLastError
    cmpwi r3, -0x6
    beq lbl_8026F414
    cmpwi r3, -0x1a
    beq lbl_8026F414
    cmpwi r3, -0x4c
    bne lbl_8026F41C
lbl_8026F414:
    li r3, 0x0
    b lbl_8026F45C
lbl_8026F41C:
    li r4, 0x1
    li r0, 0x5
    stw r3, 0x50(r30)
    li r3, -0x1
    stw r4, 0x120(r30)
    stw r0, 0x3c(r30)
    b lbl_8026F45C
lbl_8026F438:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x6
    bne lbl_8026F45C
    lwz r0, 0x17c(r30)
    cmpwi r0, 0x0
    bne lbl_8026F45C
    lwz r0, 0x16c(r30)
    add r0, r0, r3
    stw r0, 0x16c(r30)
lbl_8026F45C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

