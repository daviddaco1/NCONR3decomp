#include "types.h"

// Translation unit: src/nw4r/ut/ut_DvdFileStream.cpp
// Total functions: 18

// Small Data symbols (@sda21)
extern "C" float lbl_8049DAA8;
extern "C" float lbl_8049DAB0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362B08[];

// Forward declarations
extern "C" void CanCancel__Q34nw4r2ut13DvdFileStreamCFv();
extern "C" void CancelAsync__Q34nw4r2ut13DvdFileStreamFPFlPQ34nw4r2ut8IOStreamPv_vPv();
extern "C" void Cancel__Q34nw4r2ut13DvdFileStreamFv();
extern "C" void Close__Q34nw4r2ut13DvdFileStreamFv();
extern "C" void DVDCancelAsync();
extern "C" void DVDClose();
extern "C" void DVDFastOpen();
extern "C" void DVDReadAsyncPrio();
extern "C" void DVDReadPrio();
extern "C" void DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo();
extern "C" void DvdCBAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP15DVDCommandBlock();
extern "C" void GetBufferAlign__Q34nw4r2ut13DvdFileStreamCFv();
extern "C" void GetOffsetAlign__Q34nw4r2ut13DvdFileStreamCFv();
extern "C" void GetSizeAlign__Q34nw4r2ut13DvdFileStreamCFv();
extern "C" void PeekAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv();
extern "C" void Peek__Q34nw4r2ut13DvdFileStreamFPvUl();
extern "C" void ReadAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv();
extern "C" void Read__Q34nw4r2ut13DvdFileStreamFPvUl();
extern "C" void Seek__Q34nw4r2ut13DvdFileStreamFlUl();
extern "C" void __ct__Q34nw4r2ut13DvdFileStreamFPC11DVDFileInfob();
extern "C" void __ct__Q34nw4r2ut13DvdFileStreamFl();
extern "C" void __dt__Q34nw4r2ut13DvdFileStreamFv();
extern "C" void _restgpr_22();
extern "C" void _savegpr_22();
extern "C" void dtor_80136CFC();
extern "C" void fn_802237D8();
extern "C" void fn_8022383C();
extern "C" void fn_80223EAC();
extern "C" void fn_802D55B4();

// ----------------------------------------------------------------------------
// DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo
// ----------------------------------------------------------------------------
extern "C" asm void DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo() {
    nofralloc
    lwz r4, 0x3c(r4)
    li r0, 0x0
    stb r0, 0x6c(r4)
    stw r3, 0x8(r4)
    lwz r12, 0xc(r4)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x10(r4)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// DvdCBAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP15DVDCommandBlock
// ----------------------------------------------------------------------------
extern "C" asm void DvdCBAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP15DVDCommandBlock() {
    nofralloc
    lwz r4, 0x3c(r4)
    li r0, 0x0
    stb r0, 0x24(r4)
    lwz r12, 0x1c(r4)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x20(r4)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r2ut13DvdFileStreamFl
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r2ut13DvdFileStreamFl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80362B08@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80362B08@l
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    stb r6, 0x6c(r3)
    stw r5, 0x0(r3)
    stw r6, 0x14(r3)
    stw r6, 0x18(r3)
    stb r6, 0x6d(r3)
    stb r6, 0x6e(r3)
    stb r6, 0x4(r3)
    stw r0, 0x68(r3)
    stw r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x8(r3)
    stw r6, 0x1c(r3)
    stb r6, 0x24(r3)
    stw r6, 0x20(r3)
    stw r3, 0x64(r3)
    b lbl_8022399C
    bctrl
lbl_8022399C:
    mr r3, r4
    addi r4, r31, 0x28
    bl DVDFastOpen
    cmpwi r3, 0x0
    beq lbl_802239D8
    lwz r0, 0x5c(r31)
    addi r3, r31, 0x14
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r31)
    bl fn_8022383C
    li r0, 0x1
    stb r0, 0x6d(r31)
    stb r0, 0x6e(r31)
    stb r0, 0x4(r31)
lbl_802239D8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r2ut13DvdFileStreamFPC11DVDFileInfob
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r2ut13DvdFileStreamFPC11DVDFileInfob() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lis r6, lbl_80362B08@ha
    li r7, 0x0
    addi r6, r6, lbl_80362B08@l
    li r0, 0x2
    stb r7, 0x6c(r3)
    mr r30, r3
    mr r22, r4
    mr r31, r5
    stw r6, 0x0(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stb r7, 0x6d(r3)
    stb r7, 0x6e(r3)
    stb r7, 0x4(r3)
    stw r0, 0x68(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x8(r3)
    stw r7, 0x1c(r3)
    stb r7, 0x24(r3)
    stw r7, 0x20(r3)
    stw r3, 0x64(r3)
    b lbl_80223A64
    bctrl
lbl_80223A64:
    lwz r6, 0x34(r22)
    addi r3, r30, 0x14
    lwz r23, 0x0(r22)
    li r4, 0x0
    lwz r24, 0x4(r22)
    li r5, 0x0
    lwz r25, 0x8(r22)
    lwz r26, 0xc(r22)
    lwz r27, 0x10(r22)
    lwz r28, 0x14(r22)
    lwz r29, 0x18(r22)
    lwz r12, 0x1c(r22)
    lwz r11, 0x20(r22)
    lwz r10, 0x24(r22)
    lwz r9, 0x28(r22)
    lwz r8, 0x2c(r22)
    lwz r7, 0x30(r22)
    lwz r0, 0x38(r22)
    stw r23, 0x28(r30)
    stw r24, 0x2c(r30)
    stw r25, 0x30(r30)
    stw r26, 0x34(r30)
    stw r27, 0x38(r30)
    stw r28, 0x3c(r30)
    stw r29, 0x40(r30)
    stw r12, 0x44(r30)
    stw r11, 0x48(r30)
    stw r10, 0x4c(r30)
    stw r9, 0x50(r30)
    stw r8, 0x54(r30)
    stw r7, 0x58(r30)
    stw r6, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r6, 0x14(r30)
    bl fn_8022383C
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x6d(r30)
    addi r11, r1, 0x30
    mr r3, r30
    stb r31, 0x6e(r30)
    stb r0, 0x4(r30)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ut13DvdFileStreamFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ut13DvdFileStreamFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80223B7C
    lbz r0, 0x6d(r3)
    lis r4, lbl_80362B08@ha
    addi r4, r4, lbl_80362B08@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beq lbl_80223B6C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_80223B6C:
    cmpwi r31, 0x0
    ble lbl_80223B7C
    mr r3, r30
    bl dtor_80136CFC
lbl_80223B7C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Close__Q34nw4r2ut13DvdFileStreamFv
// ----------------------------------------------------------------------------
extern "C" asm void Close__Q34nw4r2ut13DvdFileStreamFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x6e(r3)
    cmpwi r0, 0x0
    beq lbl_80223BD4
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80223BD4
    addi r3, r3, 0x28
    bl DVDClose
    li r0, 0x0
    stb r0, 0x4(r31)
lbl_80223BD4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Read__Q34nw4r2ut13DvdFileStreamFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Read__Q34nw4r2ut13DvdFileStreamFPvUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x18(r3)
    lwz r8, 0x14(r3)
    add r7, r6, r5
    addi r7, r7, 0x1f
    addi r0, r8, 0x1f
    clrrwi r7, r7, 5
    clrrwi r0, r0, 5
    cmplw r7, r0
    ble lbl_80223C30
    subf r5, r6, r8
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_80223C30:
    lwz r7, 0x68(r3)
    addi r3, r3, 0x28
    bl DVDReadPrio
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_80223C54
    mr r4, r31
    addi r3, r30, 0x14
    bl fn_802237D8
lbl_80223C54:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ReadAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void ReadAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    lwz r8, 0x18(r3)
    lwz r9, 0x14(r3)
    add r5, r8, r5
    addi r5, r5, 0x1f
    addi r0, r9, 0x1f
    clrrwi r5, r5, 5
    clrrwi r0, r0, 5
    cmplw r5, r0
    ble lbl_80223CC0
    subf r5, r8, r9
    addi r0, r5, 0x1f
    clrrwi r30, r0, 5
lbl_80223CC0:
    lwz r11, 0x18(r3)
    li r9, 0x1
    lwz r10, 0x14(r3)
    mr r5, r30
    add r8, r11, r30
    stw r6, 0xc(r3)
    addi r6, r8, 0x1f
    addi r0, r10, 0x1f
    clrrwi r6, r6, 5
    stw r7, 0x10(r3)
    clrrwi r0, r0, 5
    cmplw r6, r0
    stb r9, 0x6c(r3)
    ble lbl_80223D04
    subf r5, r11, r10
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_80223D04:
    lwz r8, 0x68(r3)
    lis r7, DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo@ha
    mr r6, r11
    addi r3, r3, 0x28
    addi r7, r7, DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo@l
    bl DVDReadAsyncPrio
    neg r0, r3
    or r0, r0, r3
    srwi. r29, r0, 31
    beq lbl_80223D3C
    mr r4, r30
    addi r3, r31, 0x14
    bl fn_802237D8
    b lbl_80223D44
lbl_80223D3C:
    li r0, 0x0
    stb r0, 0x6c(r31)
lbl_80223D44:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Peek__Q34nw4r2ut13DvdFileStreamFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Peek__Q34nw4r2ut13DvdFileStreamFPvUl() {
    nofralloc
    lwz r6, 0x18(r3)
    lwz r8, 0x14(r3)
    add r7, r6, r5
    addi r7, r7, 0x1f
    addi r0, r8, 0x1f
    clrrwi r7, r7, 5
    clrrwi r0, r0, 5
    cmplw r7, r0
    ble lbl_80223D94
    subf r5, r6, r8
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_80223D94:
    lwz r7, 0x68(r3)
    addi r3, r3, 0x28
    b DVDReadPrio
}

// ----------------------------------------------------------------------------
// PeekAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void PeekAsync__Q34nw4r2ut13DvdFileStreamFPvUlPFlPQ34nw4r2ut8IOStreamPv_vPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r9, 0x1
    stw r0, 0x14(r1)
    lwz r11, 0x18(r3)
    lwz r10, 0x14(r3)
    add r8, r11, r5
    stw r6, 0xc(r3)
    addi r6, r8, 0x1f
    addi r0, r10, 0x1f
    clrrwi r6, r6, 5
    stw r7, 0x10(r3)
    clrrwi r0, r0, 5
    cmplw r6, r0
    stb r9, 0x6c(r3)
    ble lbl_80223DEC
    subf r5, r11, r10
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
lbl_80223DEC:
    lwz r8, 0x68(r3)
    lis r7, DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo@ha
    mr r6, r11
    addi r3, r3, 0x28
    addi r7, r7, DvdAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP11DVDFileInfo@l
    bl DVDReadAsyncPrio
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Seek__Q34nw4r2ut13DvdFileStreamFlUl
// ----------------------------------------------------------------------------
extern "C" asm void Seek__Q34nw4r2ut13DvdFileStreamFlUl() {
    nofralloc
    addi r3, r3, 0x14
    b fn_8022383C
}

// ----------------------------------------------------------------------------
// Cancel__Q34nw4r2ut13DvdFileStreamFv
// ----------------------------------------------------------------------------
extern "C" asm void Cancel__Q34nw4r2ut13DvdFileStreamFv() {
    nofralloc
    addi r3, r3, 0x28
    b fn_802D55B4
}

// ----------------------------------------------------------------------------
// CancelAsync__Q34nw4r2ut13DvdFileStreamFPFlPQ34nw4r2ut8IOStreamPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void CancelAsync__Q34nw4r2ut13DvdFileStreamFPFlPQ34nw4r2ut8IOStreamPv_vPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x1c(r3)
    lis r4, DvdCBAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP15DVDCommandBlock@ha
    addi r4, r4, DvdCBAsyncCallback___Q34nw4r2ut13DvdFileStreamFlP15DVDCommandBlock@l
    stw r5, 0x20(r3)
    addi r3, r3, 0x28
    bl DVDCancelAsync
    cmpwi r3, 0x0
    beq lbl_80223E6C
    li r0, 0x1
    stb r0, 0x24(r31)
lbl_80223E6C:
    neg r0, r3
    lwz r31, 0xc(r1)
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetBufferAlign__Q34nw4r2ut13DvdFileStreamCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBufferAlign__Q34nw4r2ut13DvdFileStreamCFv() {
    nofralloc
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// GetSizeAlign__Q34nw4r2ut13DvdFileStreamCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetSizeAlign__Q34nw4r2ut13DvdFileStreamCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetOffsetAlign__Q34nw4r2ut13DvdFileStreamCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetOffsetAlign__Q34nw4r2ut13DvdFileStreamCFv() {
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// CanCancel__Q34nw4r2ut13DvdFileStreamCFv
// ----------------------------------------------------------------------------
extern "C" asm void CanCancel__Q34nw4r2ut13DvdFileStreamCFv() {
    nofralloc
    la r3, lbl_8049DAB0
    blr
}

// ----------------------------------------------------------------------------
// fn_80223EAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80223EAC() {
    nofralloc
    la r0, lbl_8049DAA8
    stw r0, lbl_8049DAB0
    blr
}

