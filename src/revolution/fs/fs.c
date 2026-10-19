#include "types.h"

// Translation unit: src/revolution/fs/fs.cpp
// Total functions: 29

// Small Data symbols (@sda21)
extern float __devfs_8049E16C;
extern float __fsFd_8049D050;
extern float __fsInitialized_8049E168;
extern float at_1688_8049D058;
extern float hId_8049E17C;
extern float hi_689_8049E178;
extern float lbl_8049E170;
extern float lo_688_8049E174;

// Global data symbols (@ha/@l)
extern u8 at_1687_8037A7E0[];

// Forward declarations
extern void IOS_Close();
extern void IOS_CloseAsync();
extern void IOS_Ioctl();
extern void IOS_IoctlAsync();
extern void IOS_Ioctlv();
extern void IOS_IoctlvAsync();
extern void IOS_Open();
extern void IOS_OpenAsync();
extern void IOS_Read();
extern void IOS_ReadAsync();
extern void IOS_Seek();
extern void IOS_SeekAsync();
extern void IOS_Write();
extern void IOS_WriteAsync();
extern void IPCGetBufferHi();
extern void IPCGetBufferLo();
extern void IPCSetBufferLo();
extern void ISFS_Close();
extern void ISFS_CloseAsync();
extern void ISFS_CreateDir();
extern void ISFS_CreateDirAsync();
extern void ISFS_CreateFile();
extern void ISFS_CreateFileAsync();
extern void ISFS_Delete();
extern void ISFS_DeleteAsync();
extern void ISFS_GetAttr();
extern void ISFS_GetAttrAsync();
extern void ISFS_GetUsage();
extern void ISFS_GetUsageAsync();
extern void ISFS_Open();
extern void ISFS_OpenAsync();
extern void ISFS_OpenLib();
extern void ISFS_Read();
extern void ISFS_ReadAsync();
extern void ISFS_ReadDir();
extern void ISFS_ReadDirAsync();
extern void ISFS_Rename();
extern void ISFS_RenameAsync();
extern void ISFS_Seek();
extern void ISFS_SeekAsync();
extern void ISFS_ShutdownAsync();
extern void ISFS_Write();
extern void ISFS_WriteAsync();
extern void OSReport();
extern void _isfsFuncCb();
extern void _restgpr_21();
extern void _restgpr_23();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_21();
extern void _savegpr_23();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_802DBB9C();
extern void fn_802DBC70();
extern void iosAllocAligned();
extern void iosCreateHeap();
extern void iosFree();
extern void memcpy();
extern void strcpy();
extern void strnlen();

// ----------------------------------------------------------------------------
// ISFS_OpenLib
// ----------------------------------------------------------------------------
asm void ISFS_OpenLib() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r0, __fsInitialized_8049E168
    cmpwi r0, 0x0
    bne lbl_802DB928
    bl IPCGetBufferLo
    stw r3, lo_688_8049E174
    bl IPCGetBufferHi
    stw r3, hi_689_8049E178
lbl_802DB928:
    lwz r3, lo_688_8049E174
    lwz r0, __fsInitialized_8049E168
    addi r3, r3, 0x1f
    clrrwi r3, r3, 5
    cmpwi r0, 0x0
    stw r3, __devfs_8049E16C
    bne lbl_802DB96C
    lwz r0, hi_689_8049E178
    addi r4, r3, 0x40
    cmplw r4, r0
    ble lbl_802DB96C
    lis r3, at_1687_8037A7E0@ha
    addi r3, r3, at_1687_8037A7E0@l
    opword 0x4CC63182
    bl OSReport
    li r31, -0x16
    b lbl_802DBA00
lbl_802DB96C:
    la r4, at_1688_8049D058
    bl strcpy
    lwz r3, __devfs_8049E16C
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, __fsFd_8049D050
    bge lbl_802DB994
    mr r31, r3
    b lbl_802DBA00
lbl_802DB994:
    lwz r4, __fsInitialized_8049E168
    lwz r30, __devfs_8049E16C
    cmpwi r4, 0x0
    bne lbl_802DB9CC
    lwz r0, hi_689_8049E178
    addi r3, r30, 0x1540
    cmplw r3, r0
    ble lbl_802DB9CC
    lis r3, at_1687_8037A7E0@ha
    addi r3, r3, at_1687_8037A7E0@l
    opword 0x4CC63182
    bl OSReport
    li r31, -0x16
    b lbl_802DBA00
lbl_802DB9CC:
    cmpwi r4, 0x0
    bne lbl_802DB9E4
    addi r3, r30, 0x1540
    bl IPCSetBufferLo
    li r0, 0x1
    stw r0, __fsInitialized_8049E168
lbl_802DB9E4:
    mr r3, r30
    li r4, 0x1540
    bl iosCreateHeap
    cmpwi r3, 0x0
    stw r3, hId_8049E17C
    bge lbl_802DBA00
    li r31, -0x16
lbl_802DBA00:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// _isfsFuncCb
// ----------------------------------------------------------------------------
asm void _isfsFuncCb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt cr1, lbl_802DBB48
    lwz r0, 0x108(r4)
    cmpwi r0, 0x3
    beq lbl_802DBAA8
    bge lbl_802DBA60
    cmpwi r0, 0x1
    beq lbl_802DBA70
    bge lbl_802DBA84
    b lbl_802DBB48
lbl_802DBA60:
    cmpwi r0, 0x5
    beq lbl_802DBB38
    bge lbl_802DBB48
    b lbl_802DBB00
lbl_802DBA70:
    bne cr1, lbl_802DBB48
    lwz r3, 0x10c(r4)
    li r5, 0x1c
    bl memcpy
    b lbl_802DBB48
lbl_802DBA84:
    bne cr1, lbl_802DBB48
    addi r0, r4, 0x3f
    lwz r3, 0x10c(r4)
    clrrwi r4, r0, 5
    addi r0, r4, 0x5f
    clrrwi r4, r0, 5
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    b lbl_802DBB48
lbl_802DBAA8:
    bne cr1, lbl_802DBB48
    addi r0, r4, 0x5f
    lwz r3, 0x10c(r4)
    clrrwi r5, r0, 5
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lhz r0, 0x4(r5)
    lwz r3, 0x110(r4)
    sth r0, 0x0(r3)
    lbz r0, 0x49(r5)
    lwz r3, 0x114(r4)
    stw r0, 0x0(r3)
    lbz r0, 0x46(r5)
    lwz r3, 0x118(r4)
    stw r0, 0x0(r3)
    lbz r0, 0x47(r5)
    lwz r3, 0x11c(r4)
    stw r0, 0x0(r3)
    lbz r0, 0x48(r5)
    lwz r3, 0x120(r4)
    stw r0, 0x0(r3)
    b lbl_802DBB48
lbl_802DBB00:
    bne cr1, lbl_802DBB48
    addi r0, r4, 0x3f
    lwz r3, 0x10c(r4)
    clrrwi r5, r0, 5
    addi r0, r5, 0x5f
    clrrwi r6, r0, 5
    lwz r5, 0x0(r6)
    addi r0, r6, 0x23
    clrrwi r6, r0, 5
    stw r5, 0x0(r3)
    lwz r0, 0x0(r6)
    lwz r3, 0x110(r4)
    stw r0, 0x0(r3)
    b lbl_802DBB48
lbl_802DBB38:
    bne cr1, lbl_802DBB48
    lwz r3, 0x10c(r4)
    li r5, 0x8
    bl memcpy
lbl_802DBB48:
    li r0, 0x0
    stw r0, lbl_8049E170
    lwz r12, 0x100(r31)
    cmpwi r12, 0x0
    beq lbl_802DBB6C
    mr r3, r30
    lwz r4, 0x104(r31)
    mtctr r12
    bctrl
lbl_802DBB6C:
    cmpwi r31, 0x0
    beq lbl_802DBB80
    lwz r3, hId_8049E17C
    mr r4, r31
    bl iosFree
lbl_802DBB80:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802DBB9C
// ----------------------------------------------------------------------------
asm void fn_802DBB9C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DBBD0
    cmpwi r3, 0x0
    bne lbl_802DBBD8
lbl_802DBBD0:
    li r31, -0x65
    b lbl_802DBC38
lbl_802DBBD8:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DBBFC
    li r31, -0x16
    b lbl_802DBC38
lbl_802DBBFC:
    stw r29, 0x10c(r3)
    mr r7, r30
    li r4, 0x2
    li r5, 0x0
    lwz r3, __fsFd_8049D050
    li r6, 0x0
    li r8, 0x1c
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802DBC38
    mr r3, r29
    mr r4, r30
    li r5, 0x1c
    bl memcpy
lbl_802DBC38:
    cmpwi r30, 0x0
    beq lbl_802DBC50
    beq lbl_802DBC50
    lwz r3, hId_8049E17C
    mr r4, r30
    bl iosFree
lbl_802DBC50:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802DBC70
// ----------------------------------------------------------------------------
asm void fn_802DBC70() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_802DBCA4
    li r3, -0x65
    b lbl_802DBD00
lbl_802DBCA4:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_802DBCC4
    li r3, -0x76
    b lbl_802DBD00
lbl_802DBCC4:
    stw r30, 0x100(r3)
    lis r9, _isfsFuncCb@ha
    li r0, 0x1
    mr r7, r3
    stw r31, 0x104(r3)
    mr r10, r3
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x2
    stw r0, 0x108(r3)
    li r5, 0x0
    li r6, 0x0
    li r8, 0x1c
    stw r29, 0x10c(r3)
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlAsync
lbl_802DBD00:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_CreateDir
// ----------------------------------------------------------------------------
asm void ISFS_CreateDir() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    li r30, 0x0
    beq lbl_802DBD70
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DBD70
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DBD78
lbl_802DBD70:
    li r31, -0x65
    b lbl_802DBDDC
lbl_802DBD78:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DBD9C
    li r31, -0x16
    b lbl_802DBDDC
lbl_802DBD9C:
    mr r4, r25
    addi r5, r31, 0x1
    addi r3, r3, 0x6
    bl memcpy
    stb r26, 0x49(r30)
    mr r5, r30
    li r4, 0x3
    li r6, 0x4c
    stb r27, 0x46(r30)
    li r7, 0x0
    li r8, 0x0
    stb r28, 0x47(r30)
    stb r29, 0x48(r30)
    lwz r3, __fsFd_8049D050
    bl IOS_Ioctl
    mr r31, r3
lbl_802DBDDC:
    cmpwi r30, 0x0
    beq lbl_802DBDF4
    beq lbl_802DBDF4
    lwz r3, hId_8049E17C
    mr r4, r30
    bl iosFree
lbl_802DBDF4:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_CreateDirAsync
// ----------------------------------------------------------------------------
asm void ISFS_CreateDirAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    beq lbl_802DBE68
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DBE68
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DBE70
lbl_802DBE68:
    li r3, -0x65
    b lbl_802DBEEC
lbl_802DBE70:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DBE94
    li r3, -0x76
    b lbl_802DBEEC
lbl_802DBE94:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r23
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    addi r3, r3, 0x6
    bl memcpy
    stb r24, 0x49(r30)
    lis r9, _isfsFuncCb@ha
    mr r5, r30
    mr r10, r30
    stb r25, 0x46(r30)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x3
    li r6, 0x4c
    stb r26, 0x47(r30)
    li r7, 0x0
    li r8, 0x0
    stb r27, 0x48(r30)
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlAsync
lbl_802DBEEC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_ReadDir
// ----------------------------------------------------------------------------
asm void ISFS_ReadDir() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
    beq lbl_802DBF60
    cmpwi r5, 0x0
    beq lbl_802DBF60
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DBF60
    clrlwi. r0, r4, 27
    bne lbl_802DBF60
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DBF68
lbl_802DBF60:
    li r31, -0x65
    b lbl_802DC024
lbl_802DBF68:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802DBF8C
    li r31, -0x16
    b lbl_802DC024
lbl_802DBF8C:
    addi r0, r3, 0x3f
    mr r4, r26
    clrrwi r30, r0, 5
    addi r5, r31, 0x1
    mr r3, r30
    bl memcpy
    stw r30, 0x0(r29)
    li r3, 0x40
    addi r0, r30, 0x5f
    cmpwi r27, 0x0
    stw r3, 0x4(r29)
    clrrwi r30, r0, 5
    li r3, 0x4
    stw r30, 0x8(r29)
    stw r3, 0xc(r29)
    beq lbl_802DBFF8
    lwz r0, 0x0(r28)
    li r5, 0x2
    li r6, 0x2
    stw r0, 0x0(r30)
    stw r27, 0x10(r29)
    lwz r0, 0x0(r28)
    mulli r0, r0, 0xd
    stw r0, 0x14(r29)
    stw r30, 0x18(r29)
    stw r3, 0x1c(r29)
    b lbl_802DC000
lbl_802DBFF8:
    li r5, 0x1
    li r6, 0x1
lbl_802DC000:
    lwz r3, __fsFd_8049D050
    mr r7, r29
    li r4, 0x4
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802DC024
    lwz r0, 0x0(r30)
    stw r0, 0x0(r28)
lbl_802DC024:
    cmpwi r29, 0x0
    beq lbl_802DC03C
    beq lbl_802DC03C
    lwz r3, hId_8049E17C
    mr r4, r29
    bl iosFree
lbl_802DC03C:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_ReadDirAsync
// ----------------------------------------------------------------------------
asm void ISFS_ReadDirAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    beq lbl_802DC0B8
    cmpwi r5, 0x0
    beq lbl_802DC0B8
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC0B8
    clrlwi. r0, r4, 27
    bne lbl_802DC0B8
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC0C0
lbl_802DC0B8:
    li r3, -0x65
    b lbl_802DC188
lbl_802DC0C0:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DC0E4
    li r3, -0x76
    b lbl_802DC188
lbl_802DC0E4:
    stw r28, 0x100(r3)
    li r6, 0x2
    addi r0, r3, 0x3f
    mr r4, r25
    stw r29, 0x104(r3)
    clrrwi r29, r0, 5
    addi r5, r31, 0x1
    stw r6, 0x108(r3)
    stw r27, 0x10c(r3)
    mr r3, r29
    bl memcpy
    stw r29, 0x0(r30)
    li r3, 0x40
    addi r0, r29, 0x5f
    cmpwi r26, 0x0
    stw r3, 0x4(r30)
    clrrwi r4, r0, 5
    li r3, 0x4
    stw r4, 0x8(r30)
    stw r3, 0xc(r30)
    beq lbl_802DC164
    lwz r0, 0x0(r27)
    li r5, 0x2
    li r6, 0x2
    stw r0, 0x0(r4)
    stw r26, 0x10(r30)
    lwz r0, 0x0(r27)
    mulli r0, r0, 0xd
    stw r0, 0x14(r30)
    stw r4, 0x18(r30)
    stw r3, 0x1c(r30)
    b lbl_802DC16C
lbl_802DC164:
    li r5, 0x1
    li r6, 0x1
lbl_802DC16C:
    lis r8, _isfsFuncCb@ha
    lwz r3, __fsFd_8049D050
    mr r7, r30
    mr r9, r30
    addi r8, r8, _isfsFuncCb@l
    li r4, 0x4
    bl IOS_IoctlvAsync
lbl_802DC188:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_GetAttr
// ----------------------------------------------------------------------------
asm void ISFS_GetAttr() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r30, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    li r29, 0x0
    beq lbl_802DC22C
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC22C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    beq lbl_802DC22C
    cmpwi r23, 0x0
    beq lbl_802DC22C
    cmpwi r24, 0x0
    beq lbl_802DC22C
    cmpwi r25, 0x0
    beq lbl_802DC22C
    cmpwi r26, 0x0
    beq lbl_802DC22C
    cmpwi r27, 0x0
    beq lbl_802DC22C
    cmpwi r28, 0x0
    bne lbl_802DC234
lbl_802DC22C:
    li r31, -0x65
    b lbl_802DC2C4
lbl_802DC234:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802DC258
    li r31, -0x16
    b lbl_802DC2C4
lbl_802DC258:
    mr r4, r30
    addi r5, r31, 0x1
    bl memcpy
    addi r0, r29, 0x5f
    lwz r3, __fsFd_8049D050
    clrrwi r30, r0, 5
    mr r5, r29
    mr r7, r30
    li r4, 0x6
    li r6, 0x40
    li r8, 0x4c
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802DC2C4
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lhz r0, 0x4(r30)
    sth r0, 0x0(r24)
    lbz r0, 0x49(r30)
    stw r0, 0x0(r25)
    lbz r0, 0x46(r30)
    stw r0, 0x0(r26)
    lbz r0, 0x47(r30)
    stw r0, 0x0(r27)
    lbz r0, 0x48(r30)
    stw r0, 0x0(r28)
lbl_802DC2C4:
    cmpwi r29, 0x0
    beq lbl_802DC2DC
    beq lbl_802DC2DC
    lwz r3, hId_8049E17C
    mr r4, r29
    bl iosFree
lbl_802DC2DC:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_GetAttrAsync
// ----------------------------------------------------------------------------
asm void ISFS_GetAttrAsync() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r3, 0x0
    lwz r29, 0x48(r1)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    beq lbl_802DC388
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC388
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    beq lbl_802DC388
    cmpwi r22, 0x0
    beq lbl_802DC388
    cmpwi r23, 0x0
    beq lbl_802DC388
    cmpwi r24, 0x0
    beq lbl_802DC388
    cmpwi r25, 0x0
    beq lbl_802DC388
    cmpwi r26, 0x0
    beq lbl_802DC388
    cmpwi r27, 0x0
    bne lbl_802DC390
lbl_802DC388:
    li r3, -0x65
    b lbl_802DC414
lbl_802DC390:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DC3B4
    li r3, -0x76
    b lbl_802DC414
lbl_802DC3B4:
    stw r22, 0x10c(r3)
    li r0, 0x3
    mr r4, r21
    addi r5, r31, 0x1
    stw r23, 0x110(r3)
    stw r24, 0x114(r3)
    stw r25, 0x118(r3)
    stw r26, 0x11c(r3)
    stw r27, 0x120(r3)
    stw r28, 0x100(r3)
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    addi r0, r30, 0x5f
    lis r9, _isfsFuncCb@ha
    lwz r3, __fsFd_8049D050
    mr r5, r30
    mr r10, r30
    clrrwi r7, r0, 5
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x6
    li r6, 0x40
    li r8, 0x4c
    bl IOS_IoctlAsync
lbl_802DC414:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Delete
// ----------------------------------------------------------------------------
asm void ISFS_Delete() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802DC474
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC474
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC47C
lbl_802DC474:
    li r31, -0x65
    b lbl_802DC4CC
lbl_802DC47C:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DC4A0
    li r31, -0x16
    b lbl_802DC4CC
lbl_802DC4A0:
    mr r4, r29
    addi r5, r31, 0x1
    bl memcpy
    lwz r3, __fsFd_8049D050
    mr r5, r30
    li r4, 0x7
    li r6, 0x40
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r31, r3
lbl_802DC4CC:
    cmpwi r30, 0x0
    beq lbl_802DC4E4
    beq lbl_802DC4E4
    lwz r3, hId_8049E17C
    mr r4, r30
    bl iosFree
lbl_802DC4E4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_DeleteAsync
// ----------------------------------------------------------------------------
asm void ISFS_DeleteAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    beq lbl_802DC54C
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC54C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC554
lbl_802DC54C:
    li r3, -0x65
    b lbl_802DC5BC
lbl_802DC554:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DC578
    li r3, -0x76
    b lbl_802DC5BC
lbl_802DC578:
    mr r4, r27
    addi r5, r31, 0x1
    bl memcpy
    stw r28, 0x100(r30)
    lis r9, _isfsFuncCb@ha
    li r0, 0x0
    mr r5, r30
    stw r29, 0x104(r30)
    mr r10, r30
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x7
    stw r0, 0x108(r30)
    li r6, 0x40
    li r7, 0x0
    li r8, 0x0
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlAsync
lbl_802DC5BC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Rename
// ----------------------------------------------------------------------------
asm void ISFS_Rename() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    beq lbl_802DC63C
    cmpwi r4, 0x0
    beq lbl_802DC63C
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC63C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    beq lbl_802DC63C
    mr r3, r28
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC644
lbl_802DC63C:
    li r30, -0x65
    b lbl_802DC6A4
lbl_802DC644:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802DC668
    li r30, -0x16
    b lbl_802DC6A4
lbl_802DC668:
    mr r4, r27
    addi r5, r30, 0x1
    bl memcpy
    mr r4, r28
    addi r3, r29, 0x40
    addi r5, r31, 0x1
    bl memcpy
    lwz r3, __fsFd_8049D050
    mr r5, r29
    li r4, 0x8
    li r6, 0x80
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r30, r3
lbl_802DC6A4:
    cmpwi r29, 0x0
    beq lbl_802DC6BC
    beq lbl_802DC6BC
    lwz r3, hId_8049E17C
    mr r4, r29
    bl iosFree
lbl_802DC6BC:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_RenameAsync
// ----------------------------------------------------------------------------
asm void ISFS_RenameAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    beq lbl_802DC744
    cmpwi r4, 0x0
    beq lbl_802DC744
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC744
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    beq lbl_802DC744
    mr r3, r26
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC74C
lbl_802DC744:
    li r3, -0x65
    b lbl_802DC7C4
lbl_802DC74C:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802DC770
    li r3, -0x76
    b lbl_802DC7C4
lbl_802DC770:
    stw r27, 0x100(r3)
    li r0, 0x0
    mr r4, r25
    addi r5, r30, 0x1
    stw r28, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    mr r4, r26
    addi r3, r29, 0x40
    addi r5, r31, 0x1
    bl memcpy
    lis r9, _isfsFuncCb@ha
    lwz r3, __fsFd_8049D050
    mr r5, r29
    mr r10, r29
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x8
    li r6, 0x80
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
lbl_802DC7C4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_GetUsage
// ----------------------------------------------------------------------------
asm void ISFS_GetUsage() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r30, r3
    mr r26, r4
    mr r27, r5
    li r28, 0x0
    beq lbl_802DC838
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC838
    cmpwi r4, 0x0
    beq lbl_802DC838
    cmpwi r5, 0x0
    beq lbl_802DC838
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DC840
lbl_802DC838:
    li r31, -0x65
    b lbl_802DC8E0
lbl_802DC840:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802DC864
    li r31, -0x16
    b lbl_802DC8E0
lbl_802DC864:
    addi r0, r3, 0x37
    mr r4, r30
    clrrwi r29, r0, 5
    addi r5, r31, 0x1
    mr r3, r29
    bl memcpy
    stw r29, 0x0(r28)
    li r4, 0x40
    addi r3, r29, 0x5f
    li r0, 0x4
    stw r4, 0x4(r28)
    clrrwi r30, r3, 5
    addi r3, r30, 0x23
    mr r7, r28
    stw r30, 0x8(r28)
    clrrwi r29, r3, 5
    li r4, 0xc
    li r5, 0x1
    stw r0, 0xc(r28)
    li r6, 0x2
    stw r29, 0x10(r28)
    stw r0, 0x14(r28)
    lwz r3, __fsFd_8049D050
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802DC8E0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r26)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r27)
lbl_802DC8E0:
    cmpwi r28, 0x0
    beq lbl_802DC8F8
    beq lbl_802DC8F8
    lwz r3, hId_8049E17C
    mr r4, r28
    bl iosFree
lbl_802DC8F8:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_GetUsageAsync
// ----------------------------------------------------------------------------
asm void ISFS_GetUsageAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r31, r6
    mr r28, r7
    beq lbl_802DC974
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DC974
    cmpwi r4, 0x0
    beq lbl_802DC974
    cmpwi r5, 0x0
    beq lbl_802DC974
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    bne lbl_802DC97C
lbl_802DC974:
    li r3, -0x65
    b lbl_802DCA20
lbl_802DC97C:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802DC9A0
    li r3, -0x76
    b lbl_802DCA20
lbl_802DC9A0:
    stw r31, 0x100(r3)
    li r31, 0x4
    addi r0, r3, 0x37
    mr r4, r25
    stw r28, 0x104(r3)
    clrrwi r28, r0, 5
    addi r5, r30, 0x1
    stw r31, 0x108(r3)
    stw r26, 0x10c(r3)
    stw r27, 0x110(r3)
    mr r3, r28
    bl memcpy
    stw r28, 0x0(r29)
    li r3, 0x40
    lis r8, _isfsFuncCb@ha
    addi r0, r28, 0x5f
    stw r3, 0x4(r29)
    clrrwi r3, r0, 5
    addi r0, r3, 0x23
    mr r7, r29
    stw r3, 0x8(r29)
    clrrwi r0, r0, 5
    mr r9, r29
    addi r8, r8, _isfsFuncCb@l
    stw r31, 0xc(r29)
    li r4, 0xc
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x10(r29)
    stw r31, 0x14(r29)
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlvAsync
lbl_802DCA20:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_CreateFile
// ----------------------------------------------------------------------------
asm void ISFS_CreateFile() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    li r30, 0x0
    beq lbl_802DCA8C
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DCA8C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DCA94
lbl_802DCA8C:
    li r31, -0x65
    b lbl_802DCAF8
lbl_802DCA94:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DCAB8
    li r31, -0x16
    b lbl_802DCAF8
lbl_802DCAB8:
    mr r4, r25
    addi r5, r31, 0x1
    addi r3, r3, 0x6
    bl memcpy
    stb r26, 0x49(r30)
    mr r5, r30
    li r4, 0x9
    li r6, 0x4c
    stb r27, 0x46(r30)
    li r7, 0x0
    li r8, 0x0
    stb r28, 0x47(r30)
    stb r29, 0x48(r30)
    lwz r3, __fsFd_8049D050
    bl IOS_Ioctl
    mr r31, r3
lbl_802DCAF8:
    cmpwi r30, 0x0
    beq lbl_802DCB10
    beq lbl_802DCB10
    lwz r3, hId_8049E17C
    mr r4, r30
    bl iosFree
lbl_802DCB10:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_CreateFileAsync
// ----------------------------------------------------------------------------
asm void ISFS_CreateFileAsync() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    beq lbl_802DCB84
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    blt lbl_802DCB84
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DCB8C
lbl_802DCB84:
    li r3, -0x65
    b lbl_802DCC08
lbl_802DCB8C:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DCBB0
    li r3, -0x76
    b lbl_802DCC08
lbl_802DCBB0:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r23
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    addi r3, r3, 0x6
    bl memcpy
    stb r24, 0x49(r30)
    lis r9, _isfsFuncCb@ha
    mr r5, r30
    mr r10, r30
    stb r25, 0x46(r30)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x9
    li r6, 0x4c
    stb r26, 0x47(r30)
    li r7, 0x0
    li r8, 0x0
    stb r27, 0x48(r30)
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlAsync
lbl_802DCC08:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Open
// ----------------------------------------------------------------------------
asm void ISFS_Open() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_802DCC64
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DCC6C
lbl_802DCC64:
    li r31, -0x65
    b lbl_802DCCAC
lbl_802DCC6C:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DCC90
    li r31, -0x16
    b lbl_802DCCAC
lbl_802DCC90:
    mr r4, r28
    addi r5, r31, 0x1
    bl memcpy
    mr r3, r30
    mr r4, r29
    bl IOS_Open
    mr r31, r3
lbl_802DCCAC:
    cmpwi r30, 0x0
    beq lbl_802DCCC4
    beq lbl_802DCCC4
    lwz r3, hId_8049E17C
    mr r4, r30
    bl iosFree
lbl_802DCCC4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_OpenAsync
// ----------------------------------------------------------------------------
asm void ISFS_OpenAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_802DCD28
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_802DCD30
lbl_802DCD28:
    li r3, -0x65
    b lbl_802DCD88
lbl_802DCD30:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802DCD54
    li r3, -0x76
    b lbl_802DCD88
lbl_802DCD54:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r26
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    lis r5, _isfsFuncCb@ha
    mr r3, r30
    mr r4, r27
    mr r6, r30
    addi r5, r5, _isfsFuncCb@l
    bl IOS_OpenAsync
lbl_802DCD88:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Seek
// ----------------------------------------------------------------------------
asm void ISFS_Seek() {
    nofralloc
    b IOS_Seek
}

// ----------------------------------------------------------------------------
// ISFS_SeekAsync
// ----------------------------------------------------------------------------
asm void ISFS_SeekAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lwz r3, hId_8049E17C
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_802DCDEC
    li r3, -0x76
    b lbl_802DCE18
lbl_802DCDEC:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl IOS_SeekAsync
lbl_802DCE18:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Read
// ----------------------------------------------------------------------------
asm void ISFS_Read() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_802DCE40
    clrlwi. r0, r4, 27
    beq lbl_802DCE48
lbl_802DCE40:
    li r3, -0x65
    blr
lbl_802DCE48:
    b IOS_Read
    blr
}

// ----------------------------------------------------------------------------
// ISFS_ReadAsync
// ----------------------------------------------------------------------------
asm void ISFS_ReadAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_802DCE88
    clrlwi. r0, r4, 27
    beq lbl_802DCE90
lbl_802DCE88:
    li r3, -0x65
    b lbl_802DCEDC
lbl_802DCE90:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_802DCEB0
    li r3, -0x76
    b lbl_802DCEDC
lbl_802DCEB0:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl IOS_ReadAsync
lbl_802DCEDC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Write
// ----------------------------------------------------------------------------
asm void ISFS_Write() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_802DCF04
    clrlwi. r0, r4, 27
    beq lbl_802DCF0C
lbl_802DCF04:
    li r3, -0x65
    blr
lbl_802DCF0C:
    b IOS_Write
    blr
}

// ----------------------------------------------------------------------------
// ISFS_WriteAsync
// ----------------------------------------------------------------------------
asm void ISFS_WriteAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_802DCF4C
    clrlwi. r0, r4, 27
    beq lbl_802DCF54
lbl_802DCF4C:
    li r3, -0x65
    b lbl_802DCFA0
lbl_802DCF54:
    lwz r3, hId_8049E17C
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_802DCF74
    li r3, -0x76
    b lbl_802DCFA0
lbl_802DCF74:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl IOS_WriteAsync
lbl_802DCFA0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_Close
// ----------------------------------------------------------------------------
asm void ISFS_Close() {
    nofralloc
    b IOS_Close
}

// ----------------------------------------------------------------------------
// ISFS_CloseAsync
// ----------------------------------------------------------------------------
asm void ISFS_CloseAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x20
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x140
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, hId_8049E17C
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_802DD000
    li r3, -0x76
    b lbl_802DD024
lbl_802DD000:
    stw r30, 0x100(r3)
    lis r4, _isfsFuncCb@ha
    li r0, 0x0
    mr r5, r3
    stw r31, 0x104(r3)
    addi r4, r4, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r29
    bl IOS_CloseAsync
lbl_802DD024:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ISFS_ShutdownAsync
// ----------------------------------------------------------------------------
asm void ISFS_ShutdownAsync() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x140
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, hId_8049E17C
    bl iosAllocAligned
    lwz r0, __fsFd_8049D050
    cmpwi r0, 0x0
    bge lbl_802DD080
    li r3, -0x65
    b lbl_802DD0B8
lbl_802DD080:
    stw r30, 0x100(r3)
    lis r9, _isfsFuncCb@ha
    li r0, 0x0
    mr r10, r3
    stw r31, 0x104(r3)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0xd
    li r5, 0x0
    stw r0, 0x108(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    lwz r3, __fsFd_8049D050
    bl IOS_IoctlAsync
lbl_802DD0B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

