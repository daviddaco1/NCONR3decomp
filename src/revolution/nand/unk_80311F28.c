#include "types.h"

// Translation unit: src/revolution/nand/unk_80311F28.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
extern u8 lbl_8037F770[];
extern u8 lbl_8037F79C[];
extern u8 lbl_8037F7B4[];

// Forward declarations
extern void ISFS_GetUsage();
extern void ISFS_GetUsageAsync();
extern void OSReport();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80311F28();
extern void fn_80311FE0();
extern void fn_8031209C();
extern void fn_803121A4();
extern void fn_80312250();
extern void nandConvertErrorCode();
extern void nandGenerateAbsPath();
extern void nandGetHomeDir();
extern void nandIsInitialized();

// ----------------------------------------------------------------------------
// fn_80311F28
// ----------------------------------------------------------------------------
asm void fn_80311F28() {
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
    bne lbl_80311F60
    li r3, -0x80
    b lbl_80311FC4
lbl_80311F60:
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
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl ISFS_GetUsage
    bl nandConvertErrorCode
lbl_80311FC4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_80311FE0
// ----------------------------------------------------------------------------
asm void fn_80311FE0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r31, 0x0(r3)
    li r3, -0x75
    stw r31, 0x0(r4)
    b lbl_80312070
lbl_8031201C:
    stw r31, 0xc(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    stw r31, 0x8(r1)
    lwz r3, 0x0(r30)
    bl ISFS_GetUsage
    cmpwi r3, 0x0
    bne lbl_80312060
    lwz r4, 0x0(r28)
    lwz r0, 0xc(r1)
    add r0, r4, r0
    stw r0, 0x0(r28)
    lwz r4, 0x0(r29)
    lwz r0, 0x8(r1)
    add r0, r4, r0
    stw r0, 0x0(r29)
    b lbl_8031206C
lbl_80312060:
    cmpwi r3, -0x6a
    bne lbl_8031207C
    li r3, 0x0
lbl_8031206C:
    addi r30, r30, 0x4
lbl_80312070:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_8031201C
lbl_8031207C:
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
// fn_8031209C
// ----------------------------------------------------------------------------
asm void fn_8031209C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, -0x1
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_803120E8
    li r3, -0x80
    b lbl_80312188
lbl_803120E8:
    bl nandGetHomeDir
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    bl ISFS_GetUsage
    cmpwi r3, 0x0
    beq lbl_80312108
    bl nandConvertErrorCode
    b lbl_80312188
lbl_80312108:
    lis r5, lbl_8037F770@ha
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    addi r5, r5, lbl_8037F770@l
    bl fn_80311FE0
    cmpwi r3, 0x0
    beq lbl_8031212C
    bl nandConvertErrorCode
    b lbl_80312188
lbl_8031212C:
    lwz r0, 0x14(r1)
    li r5, 0x0
    lwz r4, 0x8(r1)
    add r0, r0, r29
    lwz r3, 0xc(r1)
    cmplwi r0, 0x400
    lwz r0, 0x10(r1)
    ble lbl_80312150
    ori r5, r5, 0x1
lbl_80312150:
    add r0, r0, r30
    cmplwi r0, 0x21
    ble lbl_80312160
    ori r5, r5, 0x2
lbl_80312160:
    add r0, r3, r29
    cmplwi r0, 0x4400
    ble lbl_80312170
    ori r5, r5, 0x4
lbl_80312170:
    add r0, r4, r30
    cmplwi r0, 0xfa0
    ble lbl_80312180
    ori r5, r5, 0x8
lbl_80312180:
    stw r5, 0x0(r31)
    li r3, 0x0
lbl_80312188:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_803121A4
// ----------------------------------------------------------------------------
asm void fn_803121A4() {
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
    bne lbl_803121E0
    li r3, -0x80
    b lbl_80312238
lbl_803121E0:
    lis r3, lbl_8037F770@ha
    li r4, 0x0
    addi r3, r3, lbl_8037F770@l
    li r0, 0x14
    stw r30, 0x4(r31)
    stw r27, 0x90(r31)
    stw r28, 0x94(r31)
    stw r29, 0x98(r31)
    stw r4, 0xa4(r31)
    stw r4, 0xa8(r31)
    stw r4, 0xac(r31)
    stw r4, 0xb0(r31)
    stw r3, 0xb4(r31)
    stw r0, 0x7c(r31)
    bl nandGetHomeDir
    lis r6, fn_80312250@ha
    mr r7, r31
    addi r4, r31, 0x9c
    addi r5, r31, 0xa0
    addi r6, r6, fn_80312250@l
    bl ISFS_GetUsageAsync
    bl nandConvertErrorCode
lbl_80312238:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80312250
// ----------------------------------------------------------------------------
asm void fn_80312250() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    beq lbl_80312274
    cmpwi r3, -0x6a
    bne lbl_8031245C
lbl_80312274:
    lwz r5, 0xb4(r4)
    cmpwi r3, 0x0
    lwz r3, 0x0(r5)
    bne lbl_803122A4
    lwz r7, 0xa4(r4)
    lwz r6, 0xac(r4)
    lwz r5, 0xa8(r4)
    lwz r0, 0xb0(r4)
    add r6, r7, r6
    stw r6, 0xa4(r4)
    add r0, r5, r0
    stw r0, 0xa8(r4)
lbl_803122A4:
    cmpwi r3, 0x0
    beq lbl_803122F0
    lwz r5, 0xb4(r4)
    lis r6, fn_80312250@ha
    mr r7, r31
    addi r0, r5, 0x4
    addi r5, r31, 0xb0
    stw r0, 0xb4(r4)
    addi r4, r4, 0xac
    addi r6, r6, fn_80312250@l
    bl ISFS_GetUsageAsync
    cmpwi r3, 0x0
    beq lbl_80312470
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80312470
lbl_803122F0:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x14
    bne lbl_8031237C
    lwz r3, 0x90(r4)
    li r8, 0x0
    lwz r0, 0x9c(r4)
    lwz r7, 0xa8(r4)
    add r0, r0, r3
    lwz r6, 0xa4(r4)
    cmplwi r0, 0x400
    lwz r0, 0xa0(r4)
    lwz r5, 0x94(r4)
    ble lbl_80312328
    ori r8, r8, 0x1
lbl_80312328:
    add r0, r0, r5
    cmplwi r0, 0x21
    ble lbl_80312338
    ori r8, r8, 0x2
lbl_80312338:
    add r0, r6, r3
    cmplwi r0, 0x4400
    ble lbl_80312348
    ori r8, r8, 0x4
lbl_80312348:
    add r0, r7, r5
    cmplwi r0, 0xfa0
    ble lbl_80312358
    ori r8, r8, 0x8
lbl_80312358:
    lwz r4, 0x98(r4)
    li r3, 0x0
    stw r8, 0x0(r4)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80312470
lbl_8031237C:
    cmpwi r0, 0x15
    bne lbl_80312428
    lwz r5, 0xa4(r4)
    li r3, 0x4400
    lwz r9, 0xa8(r4)
    li r0, 0xfa0
    subfc r3, r5, r3
    lwz r10, 0x9c(r4)
    subfe r8, r3, r3
    lwz r11, 0xa0(r4)
    subfic r6, r5, 0x4400
    li r3, 0x400
    subfc r5, r9, r0
    li r0, 0x21
    subfe r7, r5, r5
    andc r8, r6, r8
    subfic r6, r9, 0xfa0
    subfc r3, r10, r3
    subfe r5, r3, r3
    andc r6, r6, r7
    subfic r3, r10, 0x400
    andc r5, r3, r5
    subfc r0, r11, r0
    subfe r3, r0, r0
    subfic r0, r11, 0x21
    cmplw r8, r5
    andc r0, r0, r3
    bge lbl_803123F0
    mr r5, r8
lbl_803123F0:
    lwz r3, 0xc(r4)
    cmplw r6, r0
    stw r5, 0x0(r3)
    bge lbl_80312404
    mr r0, r6
lbl_80312404:
    lwz r4, 0x10(r4)
    li r3, 0x0
    stw r0, 0x0(r4)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80312470
lbl_80312428:
    lis r3, lbl_8037F7B4@ha
    lis r4, lbl_8037F79C@ha
    addi r3, r3, lbl_8037F7B4@l
    addi r4, r4, lbl_8037F79C@l
    opword 0x4CC63182
    bl OSReport
    li r3, -0x75
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_80312470
lbl_8031245C:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_80312470:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

