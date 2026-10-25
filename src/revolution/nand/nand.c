#include "types.h"

// Translation unit: src/revolution/nand/nand.cpp
// Total functions: 29

// Small Data symbols (@sda21)
extern float lbl_8049D150;
extern float lbl_8049D154;

// Global data symbols (@ha/@l)
extern u8 nandCallback[];

// Forward declarations
extern void ISFS_CreateDir();
extern void ISFS_CreateDirAsync();
extern void ISFS_Delete();
extern void ISFS_DeleteAsync();
extern void ISFS_GetAttr();
extern void ISFS_GetAttrAsync();
extern void ISFS_Read();
extern void ISFS_ReadAsync();
extern void ISFS_ReadDir();
extern void ISFS_ReadDirAsync();
extern void ISFS_Rename();
extern void ISFS_RenameAsync();
extern void ISFS_Seek();
extern void ISFS_SeekAsync();
extern void ISFS_Write();
extern void ISFS_WriteAsync();
extern void NANDDelete();
extern void NANDDeleteAsync();
extern void NANDMove();
extern void NANDMoveAsync();
extern void NANDPrivateCreateDir();
extern void NANDPrivateCreateDirAsync();
extern void NANDPrivateDelete();
extern void NANDPrivateDeleteAsync();
extern void NANDPrivateGetStatus();
extern void NANDPrivateGetStatusAsync();
extern void NANDRead();
extern void NANDReadAsync();
extern void NANDReadDirAsync();
extern void NANDSeek();
extern void NANDSeekAsync();
extern void NANDTellAsync();
extern void NANDWrite();
extern void NANDWriteAsync();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_802DBB9C();
extern void fn_802DBC70();
extern void fn_8030EC80();
extern void fn_8030F048();
extern void fn_8030F3DC();
extern void fn_8030F458();
extern void fn_8030F7DC();
extern void nandComposePerm();
extern void nandConvertErrorCode();
extern void nandCreateDir();
extern void nandGenerateAbsPath();
extern void nandGetRelativeName();
extern void nandGetStatus();
extern void nandGetStatusCallback();
extern void nandIsInitialized();
extern void nandIsPrivatePath();
extern void nandIsUnderPrivatePath();
extern void nandMove();
extern void nandSplitPerm();
extern void sprintf();
extern void strcat();
extern void strcmp();

// ----------------------------------------------------------------------------
// NANDDelete
// ----------------------------------------------------------------------------
asm void NANDDelete() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E6B8
    li r3, -0x80
    b lbl_8030E72C
lbl_8030E6B8:
    li r0, 0x0
    mr r4, r31
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030E720
    li r3, -0x66
    b lbl_8030E728
lbl_8030E720:
    addi r3, r1, 0x8
    bl ISFS_Delete
lbl_8030E728:
    bl nandConvertErrorCode
lbl_8030E72C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateDelete
// ----------------------------------------------------------------------------
asm void NANDPrivateDelete() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E768
    li r3, -0x80
    b lbl_8030E7C4
lbl_8030E768:
    li r0, 0x0
    mr r4, r31
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl ISFS_Delete
    bl nandConvertErrorCode
lbl_8030E7C4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// NANDDeleteAsync
// ----------------------------------------------------------------------------
asm void NANDDeleteAsync() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E810
    li r3, -0x80
    b lbl_8030E894
lbl_8030E810:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r29
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030E87C
    li r3, -0x66
    b lbl_8030E890
lbl_8030E87C:
    lis r4, nandCallback@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, nandCallback@l
    bl ISFS_DeleteAsync
lbl_8030E890:
    bl nandConvertErrorCode
lbl_8030E894:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateDeleteAsync
// ----------------------------------------------------------------------------
asm void NANDPrivateDeleteAsync() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030E8E8
    li r3, -0x80
    b lbl_8030E954
lbl_8030E8E8:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r29
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    lis r4, nandCallback@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, nandCallback@l
    bl ISFS_DeleteAsync
    bl nandConvertErrorCode
lbl_8030E954:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// NANDRead
// ----------------------------------------------------------------------------
asm void NANDRead() {
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
    beq lbl_8030E9B8
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl ISFS_Read
    bl nandConvertErrorCode
    b lbl_8030E9BC
lbl_8030E9B8:
    li r3, -0x80
lbl_8030E9BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDReadAsync
// ----------------------------------------------------------------------------
asm void NANDReadAsync() {
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
    bne lbl_8030EA14
    li r3, -0x80
    b lbl_8030EA38
lbl_8030EA14:
    stw r30, 0x4(r31)
    lis r6, nandCallback@ha
    mr r4, r28
    mr r5, r29
    lwz r3, 0x0(r27)
    mr r7, r31
    addi r6, r6, nandCallback@l
    bl ISFS_ReadAsync
    bl nandConvertErrorCode
lbl_8030EA38:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDWrite
// ----------------------------------------------------------------------------
asm void NANDWrite() {
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
    beq lbl_8030EA98
    lwz r3, 0x0(r29)
    mr r4, r30
    mr r5, r31
    bl ISFS_Write
    bl nandConvertErrorCode
    b lbl_8030EA9C
lbl_8030EA98:
    li r3, -0x80
lbl_8030EA9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDWriteAsync
// ----------------------------------------------------------------------------
asm void NANDWriteAsync() {
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
    bne lbl_8030EAF4
    li r3, -0x80
    b lbl_8030EB18
lbl_8030EAF4:
    stw r30, 0x4(r31)
    lis r6, nandCallback@ha
    mr r4, r28
    mr r5, r29
    lwz r3, 0x0(r27)
    mr r7, r31
    addi r6, r6, nandCallback@l
    bl ISFS_WriteAsync
    bl nandConvertErrorCode
lbl_8030EB18:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDSeek
// ----------------------------------------------------------------------------
asm void NANDSeek() {
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
    bne lbl_8030EB68
    li r3, -0x80
    b lbl_8030EBB4
lbl_8030EB68:
    cmpwi r31, 0x1
    lwz r3, 0x0(r29)
    li r5, -0x1
    beq lbl_8030EB9C
    bge lbl_8030EB88
    cmpwi r31, 0x0
    bge lbl_8030EB94
    b lbl_8030EBA8
lbl_8030EB88:
    cmpwi r31, 0x3
    bge lbl_8030EBA8
    b lbl_8030EBA4
lbl_8030EB94:
    li r5, 0x0
    b lbl_8030EBA8
lbl_8030EB9C:
    li r5, 0x1
    b lbl_8030EBA8
lbl_8030EBA4:
    li r5, 0x2
lbl_8030EBA8:
    mr r4, r30
    bl ISFS_Seek
    bl nandConvertErrorCode
lbl_8030EBB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDSeekAsync
// ----------------------------------------------------------------------------
asm void NANDSeekAsync() {
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
    bne lbl_8030EC0C
    li r3, -0x80
    b lbl_8030EC68
lbl_8030EC0C:
    stw r30, 0x4(r31)
    cmpwi r29, 0x1
    li r5, -0x1
    lwz r3, 0x0(r27)
    beq lbl_8030EC44
    bge lbl_8030EC30
    cmpwi r29, 0x0
    bge lbl_8030EC3C
    b lbl_8030EC50
lbl_8030EC30:
    cmpwi r29, 0x3
    bge lbl_8030EC50
    b lbl_8030EC4C
lbl_8030EC3C:
    li r5, 0x0
    b lbl_8030EC50
lbl_8030EC44:
    li r5, 0x1
    b lbl_8030EC50
lbl_8030EC4C:
    li r5, 0x2
lbl_8030EC50:
    lis r6, nandCallback@ha
    mr r4, r28
    mr r7, r31
    addi r6, r6, nandCallback@l
    bl ISFS_SeekAsync
    bl nandConvertErrorCode
lbl_8030EC68:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8030EC80
// ----------------------------------------------------------------------------
asm void fn_8030EC80() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030ECB8
    li r3, -0x80
    b lbl_8030ED34
lbl_8030ECB8:
    li r0, 0x0
    mr r4, r29
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030ED20
    li r3, -0x66
    b lbl_8030ED30
lbl_8030ED20:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl ISFS_ReadDir
lbl_8030ED30:
    bl nandConvertErrorCode
lbl_8030ED34:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// NANDReadDirAsync
// ----------------------------------------------------------------------------
asm void NANDReadDirAsync() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030ED8C
    li r3, -0x80
    b lbl_8030EE18
lbl_8030ED8C:
    stw r30, 0x4(r31)
    li r0, 0x0
    mr r4, r27
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030EDF8
    li r3, -0x66
    b lbl_8030EE14
lbl_8030EDF8:
    lis r6, nandCallback@ha
    mr r4, r28
    mr r5, r29
    mr r7, r31
    addi r3, r1, 0x8
    addi r6, r6, nandCallback@l
    bl ISFS_ReadDirAsync
lbl_8030EE14:
    bl nandConvertErrorCode
lbl_8030EE18:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// nandCreateDir
// ----------------------------------------------------------------------------
asm void nandCreateDir() {
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
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_8030EEC8
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030EEC8
    li r3, -0x66
    b lbl_8030EF44
lbl_8030EEC8:
    rlwinm. r0, r27, 0, 27, 27
    bne lbl_8030EED8
    li r3, -0x65
    b lbl_8030EF44
lbl_8030EED8:
    li r0, 0x0
    mr r3, r27
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl nandSplitPerm
    cmpwi r30, 0x0
    beq lbl_8030EF2C
    lis r8, nandCallback@ha
    lwz r5, 0x10(r1)
    lwz r6, 0xc(r1)
    mr r4, r28
    lwz r7, 0x8(r1)
    mr r9, r29
    addi r3, r1, 0x18
    addi r8, r8, nandCallback@l
    bl ISFS_CreateDirAsync
    b lbl_8030EF44
lbl_8030EF2C:
    lwz r5, 0x10(r1)
    mr r4, r28
    lwz r6, 0xc(r1)
    addi r3, r1, 0x18
    lwz r7, 0x8(r1)
    bl ISFS_CreateDir
lbl_8030EF44:
    addi r11, r1, 0x70
    bl _restgpr_27
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateCreateDir
// ----------------------------------------------------------------------------
asm void NANDPrivateCreateDir() {
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
    beq lbl_8030EFB0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl nandCreateDir
    bl nandConvertErrorCode
    b lbl_8030EFB4
lbl_8030EFB0:
    li r3, -0x80
lbl_8030EFB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateCreateDirAsync
// ----------------------------------------------------------------------------
asm void NANDPrivateCreateDirAsync() {
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
    bne lbl_8030F00C
    li r3, -0x80
    b lbl_8030F030
lbl_8030F00C:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x0
    bl nandCreateDir
    bl nandConvertErrorCode
lbl_8030F030:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8030F048
// ----------------------------------------------------------------------------
asm void fn_8030F048() {
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
    bne lbl_8030F084
    li r3, -0x80
    b lbl_8030F0A8
lbl_8030F084:
    stw r30, 0x4(r31)
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r31
    li r7, 0x1
    li r8, 0x1
    bl nandCreateDir
    bl nandConvertErrorCode
lbl_8030F0A8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// nandMove
// ----------------------------------------------------------------------------
asm void nandMove() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    li r0, 0x0
    stw r31, 0xac(r1)
    mr r31, r7
    stw r30, 0xa8(r1)
    mr r30, r6
    stw r29, 0xa4(r1)
    mr r29, r5
    stw r28, 0xa0(r1)
    mr r28, r4
    mr r4, r3
    addi r3, r1, 0x58
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r0, 0x94(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
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
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stb r0, 0x14(r1)
    bl nandGenerateAbsPath
    addi r3, r1, 0x8
    addi r4, r1, 0x58
    bl nandGetRelativeName
    mr r4, r28
    addi r3, r1, 0x18
    bl nandGenerateAbsPath
    addi r3, r1, 0x18
    la r4, lbl_8049D150
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8030F1D0
    addi r3, r1, 0x18
    addi r5, r1, 0x8
    la r4, lbl_8049D154
    opword 0x4CC63182
    bl sprintf
    b lbl_8030F1E8
lbl_8030F1D0:
    addi r3, r1, 0x18
    la r4, lbl_8049D150
    bl strcat
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl strcat
lbl_8030F1E8:
    cmpwi r31, 0x0
    bne lbl_8030F218
    addi r3, r1, 0x58
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    bne lbl_8030F210
    addi r3, r1, 0x18
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030F218
lbl_8030F210:
    li r3, -0x66
    b lbl_8030F248
lbl_8030F218:
    cmpwi r30, 0x0
    beq lbl_8030F23C
    lis r5, nandCallback@ha
    mr r6, r29
    addi r3, r1, 0x58
    addi r4, r1, 0x18
    addi r5, r5, nandCallback@l
    bl ISFS_RenameAsync
    b lbl_8030F248
lbl_8030F23C:
    addi r3, r1, 0x58
    addi r4, r1, 0x18
    bl ISFS_Rename
lbl_8030F248:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// NANDMove
// ----------------------------------------------------------------------------
asm void NANDMove() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030F2B0
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandMove
    bl nandConvertErrorCode
    b lbl_8030F2B4
lbl_8030F2B0:
    li r3, -0x80
lbl_8030F2B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDMoveAsync
// ----------------------------------------------------------------------------
asm void NANDMoveAsync() {
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F30C
    li r3, -0x80
    b lbl_8030F32C
lbl_8030F30C:
    stw r30, 0x4(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r31
    li r6, 0x1
    li r7, 0x0
    bl nandMove
    bl nandConvertErrorCode
lbl_8030F32C:
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
// NANDTellAsync
// ----------------------------------------------------------------------------
asm void NANDTellAsync() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r4
    stw r30, -0x8(r12)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F388
    li r3, -0x80
    b lbl_8030F3C0
lbl_8030F388:
    addi r3, r1, 0x20
    bl fn_802DBB9C
    cmpwi r3, 0x0
    bne lbl_8030F3BC
    cmpwi r30, 0x0
    beq lbl_8030F3AC
    lwz r0, 0x24(r1)
    slwi r0, r0, 14
    stw r0, 0x0(r30)
lbl_8030F3AC:
    cmpwi r31, 0x0
    beq lbl_8030F3BC
    lwz r0, 0x34(r1)
    stw r0, 0x0(r31)
lbl_8030F3BC:
    bl nandConvertErrorCode
lbl_8030F3C0:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8030F3DC
// ----------------------------------------------------------------------------
asm void fn_8030F3DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    addi r0, r6, 0x53
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    clrrwi r31, r0, 5
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F41C
    li r3, -0x80
    b lbl_8030F440
lbl_8030F41C:
    lis r4, fn_8030F458@ha
    stw r29, 0x4(r30)
    mr r3, r31
    mr r5, r30
    stw r27, 0xc(r30)
    addi r4, r4, fn_8030F458@l
    stw r28, 0x10(r30)
    bl fn_802DBC70
    bl nandConvertErrorCode
lbl_8030F440:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8030F458
// ----------------------------------------------------------------------------
asm void fn_8030F458() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r0, r4, 0x53
    clrrwi r5, r0, 5
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_8030F4A8
    lwz r6, 0xc(r4)
    lwz r4, 0x10(r4)
    cmpwi r6, 0x0
    beq lbl_8030F498
    lwz r0, 0x4(r5)
    slwi r0, r0, 14
    stw r0, 0x0(r6)
lbl_8030F498:
    cmpwi r4, 0x0
    beq lbl_8030F4A8
    lwz r0, 0x14(r5)
    stw r0, 0x0(r4)
lbl_8030F4A8:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// nandComposePerm
// ----------------------------------------------------------------------------
asm void nandComposePerm() {
    nofralloc
    clrlwi. r0, r4, 31
    li r7, 0x0
    beq lbl_8030F4E0
    ori r7, r7, 0x10
lbl_8030F4E0:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_8030F4EC
    ori r7, r7, 0x20
lbl_8030F4EC:
    clrlwi. r0, r5, 31
    beq lbl_8030F4F8
    ori r7, r7, 0x4
lbl_8030F4F8:
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_8030F504
    ori r7, r7, 0x8
lbl_8030F504:
    clrlwi. r0, r6, 31
    beq lbl_8030F510
    ori r7, r7, 0x1
lbl_8030F510:
    rlwinm. r0, r6, 0, 30, 30
    beq lbl_8030F51C
    ori r7, r7, 0x2
lbl_8030F51C:
    stb r7, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// nandSplitPerm
// ----------------------------------------------------------------------------
asm void nandSplitPerm() {
    nofralloc
    li r7, 0x0
    rlwinm. r0, r3, 0, 27, 27
    stw r7, 0x0(r4)
    stw r7, 0x0(r5)
    stw r7, 0x0(r6)
    beq lbl_8030F548
    lwz r0, 0x0(r4)
    ori r0, r0, 0x1
    stw r0, 0x0(r4)
lbl_8030F548:
    rlwinm. r0, r3, 0, 26, 26
    beq lbl_8030F55C
    lwz r0, 0x0(r4)
    ori r0, r0, 0x2
    stw r0, 0x0(r4)
lbl_8030F55C:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_8030F570
    lwz r0, 0x0(r5)
    ori r0, r0, 0x1
    stw r0, 0x0(r5)
lbl_8030F570:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_8030F584
    lwz r0, 0x0(r5)
    ori r0, r0, 0x2
    stw r0, 0x0(r5)
lbl_8030F584:
    clrlwi. r0, r3, 31
    beq lbl_8030F598
    lwz r0, 0x0(r6)
    ori r0, r0, 0x1
    stw r0, 0x0(r6)
lbl_8030F598:
    rlwinm. r0, r3, 0, 30, 30
    beqlr
    lwz r0, 0x0(r6)
    ori r0, r0, 0x2
    stw r0, 0x0(r6)
    blr
}

// ----------------------------------------------------------------------------
// nandGetStatus
// ----------------------------------------------------------------------------
asm void nandGetStatus() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r7
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r5
    stw r28, 0x60(r1)
    mr r28, r4
    mr r4, r3
    addi r3, r1, 0x20
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
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    bl nandGenerateAbsPath
    cmpwi r31, 0x0
    bne lbl_8030F64C
    addi r3, r1, 0x20
    bl nandIsUnderPrivatePath
    cmpwi r3, 0x0
    beq lbl_8030F64C
    li r3, -0x66
    b lbl_8030F6E4
lbl_8030F64C:
    cmpwi r30, 0x0
    beq lbl_8030F684
    lis r10, nandGetStatusCallback@ha
    stw r29, 0x8(r1)
    mr r4, r28
    addi r3, r1, 0x20
    addi r5, r28, 0x4
    addi r6, r29, 0x20
    addi r7, r29, 0x24
    addi r8, r29, 0x28
    addi r9, r29, 0x2c
    addi r10, r10, nandGetStatusCallback@l
    bl ISFS_GetAttrAsync
    b lbl_8030F6E4
lbl_8030F684:
    li r0, 0x0
    mr r4, r28
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    addi r5, r28, 0x4
    addi r6, r1, 0x1c
    stw r0, 0x18(r1)
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    bl ISFS_GetAttr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8030F6E0
    lwz r4, 0x18(r1)
    addi r3, r28, 0x7
    lwz r5, 0x14(r1)
    lwz r6, 0x10(r1)
    bl nandComposePerm
    lwz r0, 0x1c(r1)
    stb r0, 0x6(r28)
lbl_8030F6E0:
    mr r3, r31
lbl_8030F6E4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// nandGetStatusCallback
// ----------------------------------------------------------------------------
asm void nandGetStatusCallback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_8030F748
    lwz r5, 0x14(r4)
    lwz r0, 0x20(r4)
    addi r3, r5, 0x7
    stb r0, 0x6(r5)
    lwz r4, 0x24(r4)
    lwz r5, 0x28(r31)
    lwz r6, 0x2c(r31)
    bl nandComposePerm
lbl_8030F748:
    mr r3, r30
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateGetStatus
// ----------------------------------------------------------------------------
asm void NANDPrivateGetStatus() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030F7C0
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl nandGetStatus
    bl nandConvertErrorCode
    b lbl_8030F7C4
lbl_8030F7C0:
    li r3, -0x80
lbl_8030F7C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8030F7DC
// ----------------------------------------------------------------------------
asm void fn_8030F7DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    beq lbl_8030F824
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl nandGetStatus
    bl nandConvertErrorCode
    b lbl_8030F828
lbl_8030F824:
    li r3, -0x80
lbl_8030F828:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDPrivateGetStatusAsync
// ----------------------------------------------------------------------------
asm void NANDPrivateGetStatusAsync() {
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_8030F880
    li r3, -0x80
    b lbl_8030F8A4
lbl_8030F880:
    stw r30, 0x4(r31)
    mr r3, r28
    mr r4, r29
    mr r5, r31
    stw r29, 0x14(r31)
    li r6, 0x1
    li r7, 0x1
    bl nandGetStatus
    bl nandConvertErrorCode
lbl_8030F8A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

