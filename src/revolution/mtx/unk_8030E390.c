#include "types.h"

// Translation unit: src/revolution/mtx/unk_8030E390.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
extern u8 nandCallback[];

// Forward declarations
extern void ISFS_CreateFile();
extern void ISFS_CreateFileAsync();
extern void NANDCreate();
extern void NANDPrivateCreate();
extern void NANDPrivateCreateAsync();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8030E618();
extern void nandConvertErrorCode();
extern void nandCreate();
extern void nandGenerateAbsPath();
extern void nandIsInitialized();
extern void nandIsPrivatePath();
extern void nandSplitPerm();

// ----------------------------------------------------------------------------
// nandCreate
// ----------------------------------------------------------------------------
asm void nandCreate() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_27
    li r0, 0x0
    mr r27, r4
    stw r0, 0x18(r1)
    mr r4, r3
    mr r28, r5
    mr r29, r6
    stw r0, 0x1c(r1)
    mr r30, r7
    mr r31, r8
    addi r3, r1, 0x18
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_8030E434
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030E434
    li r3, -0x66
    b lbl_8030E4A0
lbl_8030E434:
    rlwinm. r0, r27, 0, 27, 27
    bne lbl_8030E444
    li r3, -0x65
    b lbl_8030E4A0
lbl_8030E444:
    mr r3, r27
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    bl nandSplitPerm
    cmpwi r30, 0x0
    beq lbl_8030E488
    lis r8, nandCallback@ha
    lwz r5, 0x10(r1)
    lwz r6, 0xc(r1)
    mr r4, r28
    lwz r7, 0x8(r1)
    mr r9, r29
    addi r3, r1, 0x18
    addi r8, r8, nandCallback@l
    bl ISFS_CreateFileAsync
    b lbl_8030E4A0
lbl_8030E488:
    lwz r5, 0x10(r1)
    mr r4, r28
    lwz r6, 0xc(r1)
    addi r3, r1, 0x18
    lwz r7, 0x8(r1)
    bl ISFS_CreateFile
lbl_8030E4A0:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// NANDCreate
// ----------------------------------------------------------------------------
asm void NANDCreate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030E50C
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl nandCreate
    bl nandConvertErrorCode
    b lbl_8030E510
lbl_8030E50C:
    li r3, -0x80
lbl_8030E510:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateCreate
// ----------------------------------------------------------------------------
asm void NANDPrivateCreate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030E580
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl nandCreate
    bl nandConvertErrorCode
    b lbl_8030E584
lbl_8030E580:
    li r3, -0x80
lbl_8030E584:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateCreateAsync
// ----------------------------------------------------------------------------
asm void NANDPrivateCreateAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E5DC
    li r3, -0x80
    b lbl_8030E600
lbl_8030E5DC:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl nandCreate
    bl nandConvertErrorCode
lbl_8030E600:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8030E618
// ----------------------------------------------------------------------------
asm void fn_8030E618() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E654
    li r3, -0x80
    b lbl_8030E678
lbl_8030E654:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x1
    bl nandCreate
    bl nandConvertErrorCode
lbl_8030E678:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

