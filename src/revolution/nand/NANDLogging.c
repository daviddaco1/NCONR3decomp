#include "types.h"

// Translation unit: src/revolution/nand/NANDLogging.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049D1A0;
extern float s_callback_8049E268;
extern float s_stage_8049E26C;

// Global data symbols (@ha/@l)
extern u8 at_1208_8037F7D8[];
extern u8 lbl_8037F7F4[];
extern u8 s_message_80464940[];

// Forward declarations
extern void ISFS_CloseAsync();
extern void ISFS_OpenAsync();
extern void ISFS_ReadAsync();
extern void ISFS_SeekAsync();
extern void ISFS_WriteAsync();
extern void NANDLoggingAddMessageAsync();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSRestoreInterrupts();
extern void asyncRoutine();
extern void atoi();
extern void fn_8031DDE0();
extern void memset();
extern void nandGetHomeDir();
extern void reserveFileDescriptor();
extern void snprintf();
extern void strncpy();
extern void vsnprintf();

// ----------------------------------------------------------------------------
// reserveFileDescriptor
// ----------------------------------------------------------------------------
asm void reserveFileDescriptor() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8049D1A0
    cmpwi r0, -0xff
    bne lbl_803124B4
    li r0, -0xfe
    li r31, 0x0
    stw r0, lbl_8049D1A0
    b lbl_803124B8
lbl_803124B4:
    li r31, 0x1
lbl_803124B8:
    bl OSRestoreInterrupts
    cntlzw r0, r31
    lwz r31, 0xc(r1)
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NANDLoggingAddMessageAsync
// ----------------------------------------------------------------------------
asm void NANDLoggingAddMessageAsync() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    stw r30, 0x78(r1)
    mr r30, r3
    bne cr1, lbl_80312518
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80312518:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl reserveFileDescriptor
    cmpwi r3, 0x0
    bne lbl_8031254C
    li r3, 0x0
    b lbl_803125B8
lbl_8031254C:
    addi r4, r1, 0x88
    addi r0, r1, 0x8
    lis r5, 0x200
    lis r3, s_message_80464940@ha
    stw r5, 0x68(r1)
    addi r6, r1, 0x68
    mr r5, r31
    addi r3, r3, s_message_80464940@l
    stw r4, 0x6c(r1)
    li r4, 0x100
    stw r0, 0x70(r1)
    bl vsnprintf
    li r0, 0x1
    lis r3, at_1208_8037F7D8@ha
    lis r5, asyncRoutine@ha
    stw r30, s_callback_8049E268
    addi r3, r3, at_1208_8037F7D8@l
    li r4, 0x3
    stw r0, s_stage_8049E26C
    addi r5, r5, asyncRoutine@l
    li r6, 0x0
    bl ISFS_OpenAsync
    cmpwi r3, 0x0
    bne lbl_803125B4
    li r3, 0x1
    b lbl_803125B8
lbl_803125B4:
    li r3, 0x0
lbl_803125B8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// asyncRoutine
// ----------------------------------------------------------------------------
asm void asyncRoutine() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lis r30, s_message_80464940@ha
    addi r30, r30, s_message_80464940@l
    lwz r4, s_stage_8049E26C
    addi r0, r4, 0x1
    cmpwi r0, 0x2
    stw r0, s_stage_8049E26C
    bne lbl_80312668
    cmpwi r3, 0x0
    blt lbl_8031264C
    lis r6, asyncRoutine@ha
    stw r3, lbl_8049D1A0
    addi r6, r6, asyncRoutine@l
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl ISFS_SeekAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_8031264C:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312668:
    cmpwi r0, 0x3
    bne lbl_803126D4
    cmpwi r3, 0x0
    bne lbl_803126B8
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8049D1A0
    addi r4, r30, 0x100
    li r5, 0x100
    addi r6, r6, asyncRoutine@l
    li r7, 0x0
    bl ISFS_ReadAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_803126B8:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_803126D4:
    cmpwi r0, 0x4
    bne lbl_80312740
    cmpwi r3, 0x100
    bne lbl_80312724
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8049D1A0
    addi r6, r6, asyncRoutine@l
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    bl ISFS_SeekAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312724:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312740:
    cmpwi r0, 0x5
    bne lbl_8031289C
    cmpwi r3, 0x0
    bne lbl_80312880
    addi r3, r30, 0x100
    li r0, 0x0
    stb r0, 0xff(r3)
    bl atoi
    mr r31, r3
    addi r3, r30, 0x200
    li r4, 0x20
    li r5, 0xfe
    bl memset
    bl OSGetTime
    addi r5, r1, 0x58
    bl fn_8031DDE0
    bl nandGetHomeDir
    mr r4, r3
    addi r3, r1, 0x18
    addi r4, r4, 0x7
    li r5, 0x11
    bl strncpy
    li r0, 0x2d
    li r4, 0x0
    stb r4, 0x29(r1)
    lis r3, 0x8208
    lis r5, lbl_8037F7F4@ha
    addi r4, r1, 0x18
    stb r0, 0x20(r1)
    addi r0, r3, 0x2083
    lwz r3, 0x5c(r1)
    mulhw r0, r0, r31
    addi r6, r30, 0x0
    stw r3, 0x8(r1)
    addi r5, r5, lbl_8037F7F4@l
    lwz r3, 0x58(r1)
    add r0, r0, r31
    stw r3, 0xc(r1)
    srawi r0, r0, 5
    addi r3, r30, 0x200
    stw r4, 0x10(r1)
    srwi r4, r0, 31
    add r0, r0, r4
    stw r6, 0x14(r1)
    mulli r0, r0, 0x3f
    li r4, 0x100
    lwz r8, 0x68(r1)
    subf r6, r0, r31
    lwz r7, 0x6c(r1)
    lwz r9, 0x64(r1)
    addi r6, r6, 0x1
    lwz r10, 0x60(r1)
    addi r8, r8, 0x1
    opword 0x4CC63182
    bl snprintf
    cmpwi r3, 0x100
    bge lbl_80312830
    addi r4, r30, 0x200
    li r0, 0x20
    stbx r0, r4, r3
lbl_80312830:
    addi r4, r30, 0x200
    li r3, 0xd
    li r0, 0xa
    lis r6, asyncRoutine@ha
    stb r3, 0xfe(r4)
    addi r6, r6, asyncRoutine@l
    lwz r3, lbl_8049D1A0
    li r5, 0x100
    stb r0, 0xff(r4)
    li r7, 0x0
    bl ISFS_WriteAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312880:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_8031289C:
    cmpwi r0, 0x6
    bne lbl_80312914
    cmpwi r3, 0x100
    bne lbl_803128F8
    addi r3, r30, 0x100
    bl atoi
    mr r0, r3
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8049D1A0
    slwi r4, r0, 8
    addi r6, r6, asyncRoutine@l
    li r5, 0x0
    li r7, 0x0
    bl ISFS_SeekAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_803128F8:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312914:
    cmpwi r0, 0x7
    bne lbl_8031298C
    addi r3, r30, 0x100
    bl atoi
    slwi r0, r3, 8
    cmpw r31, r0
    bne lbl_80312970
    lis r6, asyncRoutine@ha
    lwz r3, lbl_8049D1A0
    addi r4, r30, 0x200
    li r5, 0x100
    addi r6, r6, asyncRoutine@l
    li r7, 0x0
    bl ISFS_WriteAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312970:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_8031298C:
    cmpwi r0, 0x8
    bne lbl_803129F0
    cmpwi r3, 0x100
    bne lbl_803129D4
    lis r4, asyncRoutine@ha
    lwz r3, lbl_8049D1A0
    addi r4, r4, asyncRoutine@l
    li r5, 0x0
    bl ISFS_CloseAsync
    cmpwi r3, 0x0
    beq lbl_80312A3C
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_803129D4:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_803129F0:
    cmpwi r0, 0x9
    bne lbl_80312A3C
    cmpwi r3, 0x0
    bne lbl_80312A24
    lwz r12, s_callback_8049E268
    li r0, -0xff
    stw r0, lbl_8049D1A0
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x1
    mtctr r12
    bctrl
    b lbl_80312A3C
lbl_80312A24:
    lwz r12, s_callback_8049E268
    cmpwi r12, 0x0
    beq lbl_80312A3C
    li r3, 0x0
    mtctr r12
    bctrl
lbl_80312A3C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

