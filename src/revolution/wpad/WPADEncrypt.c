#include "types.h"

// Translation unit: src/revolution/wpad/WPADEncrypt.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049DE18;
extern float lbl_8049DE19;
extern float lbl_8049DE1A;
extern float lbl_8049DE1B;

// Global data symbols (@ha/@l)
extern u8 lbl_8036CB58[];
extern u8 lbl_8040C450[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSGetTick();
extern void OSRestoreInterrupts();
extern void WPADiCreateKey();
extern void WPADiCreateKeyFor3rd();
extern void WPADiDecode();
extern void _restgpr_14();
extern void _savegpr_14();
extern void fn_80294360();
extern void memcpy();

// ----------------------------------------------------------------------------
// WPADiCreateKey
// ----------------------------------------------------------------------------
asm void WPADiCreateKey() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    lis r4, lbl_8040C450@ha
    lis r30, lbl_8036CB58@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    addi r30, r30, lbl_8036CB58@l
    lwzx r16, r4, r0
    bl OSGetTick
    extrwi r0, r3, 8, 16
    stb r0, lbl_8049DE1B
    bl OSGetTick
    extrwi r0, r3, 6, 10
    stb r0, lbl_8049DE1A
    bl OSGetTick
    lbz r6, lbl_8049DE1A
    srwi r3, r3, 24
    lbz r0, lbl_8049DE1B
    andi. r4, r3, 0x4c
    li r8, 0xff
    lis r5, 0x8081
    mullw r7, r0, r6
    lis r3, 0x9249
    subi r0, r5, 0x7f7f
    stb r8, lbl_8049DE18
    addi r8, r3, 0x2493
    li r5, 0x2
    add r10, r4, r7
    stb r4, lbl_8049DE19
    mulhwu r9, r0, r10
    addi r3, r30, 0x30
    li r7, 0x0
    srwi r9, r9, 7
    mulli r9, r9, 0xff
    subf r9, r9, r10
    clrlwi r10, r9, 24
    mulhw r8, r8, r10
    add r8, r8, r10
    srawi r8, r8, 2
    srwi r9, r8, 31
    add r8, r8, r9
    mulli r8, r8, 0x7
    subf r8, r8, r10
    clrlwi r15, r8, 24
    mulli r8, r15, 0x6
    clrlwi r14, r8, 24
    mtctr r5
lbl_802931BC:
    clrlwi r5, r10, 24
    clrlwi r8, r7, 24
    mullw r9, r5, r6
    addi r7, r7, 0x5
    addi r5, r1, 0x28
    add r5, r5, r8
    add r9, r4, r9
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x0(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x1(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x2(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x3(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r10, r8, 24
    lbzx r8, r3, r10
    stb r8, 0x4(r5)
    bdnz lbl_802931BC
    addi r19, r30, 0x0
    stb r10, lbl_8049DE1B
    add r17, r14, r19
    lbzx r4, r19, r14
    lbz r5, 0x1(r17)
    addi r3, r30, 0x1260
    lbz r6, 0x2(r17)
    lbz r7, 0x3(r17)
    lbz r8, 0x4(r17)
    lbz r9, 0x5(r17)
    opword 0x4CC63182
    bl fn_80294360
    lbz r27, 0x2f(r1)
    addi r3, r30, 0x127c
    lbz r26, 0x2e(r1)
    stw r27, 0x8(r1)
    lbz r28, 0x30(r1)
    mr r10, r26
    lbz r29, 0x31(r1)
    stw r28, 0xc(r1)
    lbz r25, 0x2d(r1)
    lbz r24, 0x2c(r1)
    lbz r23, 0x2b(r1)
    mr r9, r25
    lbz r22, 0x2a(r1)
    mr r8, r24
    lbz r21, 0x29(r1)
    mr r7, r23
    stw r29, 0x10(r1)
    mr r6, r22
    lbz r4, 0x28(r1)
    mr r5, r21
    opword 0x4CC63182
    bl fn_80294360
    addi r31, r30, 0x30
    lbz r18, 0x28(r1)
    lbzx r0, r31, r27
    addi r3, r30, 0x12a4
    stw r0, 0x8(r1)
    lbzx r0, r31, r28
    stw r0, 0xc(r1)
    lbzx r0, r31, r29
    stw r0, 0x10(r1)
    lbzx r4, r31, r18
    lbzx r5, r31, r21
    lbzx r6, r31, r22
    lbzx r7, r31, r23
    lbzx r8, r31, r24
    lbzx r9, r31, r25
    lbzx r10, r31, r26
    opword 0x4CC63182
    bl fn_80294360
    bl OSDisableInterrupts
    lbzx r4, r31, r22
    lbzx r5, r31, r18
    slwi r0, r4, 29
    srwi r9, r4, 31
    subf r0, r9, r0
    stw r3, 0x34(r1)
    rotlwi r7, r0, 3
    srwi r8, r5, 31
    slwi r0, r5, 29
    lbzx r10, r31, r25
    lbzx r11, r19, r14
    subf r0, r8, r0
    add r9, r7, r9
    lbzx r3, r31, r28
    rotlwi r7, r0, 3
    xor r12, r11, r10
    clrlwi r0, r9, 24
    slwi r9, r3, 29
    add r14, r7, r8
    srwi r3, r3, 31
    subf r18, r3, r9
    sraw r11, r12, r0
    subfic r9, r0, 0x8
    lbzx r7, r31, r21
    lbz r8, 0x1(r17)
    clrlwi r0, r14, 24
    lbzx r6, r31, r27
    slw r9, r12, r9
    xor r14, r8, r7
    rotlwi r18, r18, 3
    add r3, r18, r3
    lbz r18, 0x3(r17)
    sraw r8, r14, r0
    subfic r0, r0, 0x8
    clrlwi r3, r3, 24
    slw r0, r14, r0
    or r14, r11, r9
    or r8, r8, r0
    lbz r0, 0x4(r17)
    clrlwi r12, r8, 24
    srwi r9, r6, 31
    slwi r8, r6, 29
    stw r0, 0x40(r1)
    subf r8, r9, r8
    lbzx r11, r31, r26
    rotlwi r8, r8, 3
    lbz r0, 0x2(r17)
    add r9, r8, r9
    subf r12, r10, r12
    xor r8, r0, r11
    clrlwi r14, r14, 24
    xor r0, r6, r12
    stw r0, 0x3c(r1)
    sraw r12, r8, r3
    lbzx r0, r31, r24
    subfic r19, r3, 0x8
    slw r8, r8, r19
    clrlwi r19, r9, 24
    xor r18, r18, r0
    or r8, r12, r8
    lbzx r9, r31, r29
    sraw r20, r18, r19
    subfic r12, r19, 0x8
    clrlwi r8, r8, 24
    slw r12, r18, r12
    subf r18, r9, r14
    subf r14, r4, r8
    lbzx r8, r31, r23
    or r12, r20, r12
    clrlwi r19, r12, 24
    xor r5, r5, r14
    xor r12, r0, r18
    subf r18, r8, r19
    clrlwi r20, r5, 24
    xor r4, r4, r18
    clrlwi r12, r12, 24
    stb r12, 0x38(r1)
    clrlwi r19, r4, 24
    lwz r12, 0x3c(r1)
    lwz r4, 0x40(r1)
    clrlwi r14, r12, 24
    xor r5, r4, r7
    slwi r7, r11, 29
    srwi r4, r11, 31
    subf r11, r4, r7
    lbz r7, 0x5(r17)
    rotlwi r11, r11, 3
    clrlwi r12, r5, 24
    add r4, r11, r4
    xor r5, r7, r6
    clrlwi r6, r4, 24
    lbz r4, 0x38(r1)
    sraw r11, r12, r6
    clrlwi r17, r5, 24
    subfic r7, r6, 0x8
    mr r5, r14
    sraw r18, r17, r3
    mr r6, r20
    subfic r3, r3, 0x8
    slw r12, r12, r7
    slw r17, r17, r3
    mr r7, r19
    or r11, r11, r12
    addi r3, r30, 0x12cc
    or r12, r18, r17
    clrlwi r17, r11, 24
    clrlwi r11, r12, 24
    subf r12, r8, r17
    subf r8, r10, r11
    xor r10, r0, r12
    xor r0, r9, r8
    clrlwi r18, r10, 24
    clrlwi r17, r0, 24
    mr r8, r18
    mr r9, r17
    opword 0x4CC63182
    bl fn_80294360
    addi r3, r15, 0x1
    addi r0, r15, 0x2
    slwi r10, r3, 8
    lbz r11, 0x28(r1)
    slwi r0, r0, 8
    addi r3, r30, 0x12e8
    add r4, r18, r10
    add r6, r17, r10
    stw r4, 0x44(r1)
    add r4, r23, r0
    add r7, r27, r0
    add r5, r24, r0
    stw r4, 0x48(r1)
    add r15, r26, r0
    lbz r4, 0x38(r1)
    add r26, r21, r10
    add r12, r11, r10
    add r27, r28, r0
    add r4, r4, r10
    add r28, r11, r0
    stw r4, 0x4c(r1)
    add r4, r22, r0
    add r9, r25, r0
    add r8, r20, r10
    stw r4, 0x50(r1)
    add r4, r14, r10
    add r24, r19, r10
    add r11, r23, r10
    add r10, r22, r10
    lwz r22, 0x44(r1)
    add r25, r29, r0
    add r21, r21, r0
    lbzx r0, r22, r31
    lwz r22, 0x48(r1)
    lbzx r7, r7, r31
    lbzx r22, r22, r31
    xor r23, r0, r7
    lbzx r6, r6, r31
    xor r22, r0, r22
    lbzx r0, r4, r31
    xor r4, r6, r7
    lbzx r5, r5, r31
    lbzx r7, r27, r31
    xor r6, r6, r5
    xor r5, r0, r5
    xor r27, r0, r7
    lbzx r26, r26, r31
    lbzx r0, r9, r31
    xor r7, r26, r7
    lbzx r9, r8, r31
    lbzx r8, r25, r31
    lbzx r26, r24, r31
    xor r25, r9, r0
    lbzx r24, r28, r31
    xor r28, r9, r8
    lbzx r9, r11, r31
    xor r8, r26, r8
    xor r26, r26, r24
    lwz r11, 0x4c(r1)
    xor r0, r9, r0
    lwz r24, 0x50(r1)
    lbzx r11, r11, r31
    lbzx r24, r24, r31
    lbzx r9, r21, r31
    xor r21, r11, r24
    lbzx r15, r15, r31
    xor r11, r11, r9
    lbzx r9, r10, r31
    lbzx r12, r12, r31
    xor r9, r9, r15
    stb r22, 0x20(r1)
    xor r10, r12, r15
    stb r25, 0x21(r1)
    stb r4, 0x22(r1)
    stb r21, 0x23(r1)
    stb r5, 0x24(r1)
    stb r8, 0x25(r1)
    stb r10, 0x26(r1)
    stb r7, 0x27(r1)
    stb r11, 0x18(r1)
    stb r6, 0x19(r1)
    stb r26, 0x1a(r1)
    stb r28, 0x1b(r1)
    stb r23, 0x1c(r1)
    stb r27, 0x1d(r1)
    stb r0, 0x1e(r1)
    stb r9, 0x1f(r1)
    stw r7, 0x8(r1)
    lbz r4, 0x20(r1)
    lbz r5, 0x21(r1)
    lbz r6, 0x22(r1)
    lbz r7, 0x23(r1)
    lbz r8, 0x24(r1)
    lbz r9, 0x25(r1)
    lbz r10, 0x26(r1)
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x1f(r1)
    addi r3, r30, 0x1308
    stw r0, 0x8(r1)
    lbz r4, 0x18(r1)
    lbz r5, 0x19(r1)
    lbz r6, 0x1a(r1)
    lbz r7, 0x1b(r1)
    lbz r8, 0x1c(r1)
    lbz r9, 0x1d(r1)
    lbz r10, 0x1e(r1)
    opword 0x4CC63182
    bl fn_80294360
    li r3, 0x0
    addi r6, r1, 0x28
    subfic r4, r3, 0x9
    li r0, 0x2
    li r3, 0x1
    lbzx r5, r6, r4
    subfic r3, r3, 0x9
    lbzx r4, r6, r3
    subfic r3, r0, 0x9
    stb r5, 0x914(r16)
    li r0, 0x3
    lbzx r5, r6, r3
    subfic r3, r0, 0x9
    stb r4, 0x915(r16)
    li r0, 0x4
    lbzx r4, r6, r3
    subfic r0, r0, 0x9
    stb r5, 0x916(r16)
    li r3, 0x5
    lbzx r0, r6, r0
    stb r4, 0x917(r16)
    subfic r4, r3, 0x9
    li r3, 0x6
    lbzx r5, r6, r4
    stb r0, 0x918(r16)
    subfic r3, r3, 0x9
    li r0, 0x7
    lbzx r4, r6, r3
    stb r5, 0x919(r16)
    subfic r3, r0, 0x9
    li r0, 0x8
    lbzx r5, r6, r3
    stb r4, 0x91a(r16)
    subfic r3, r0, 0x9
    li r0, 0x9
    lbzx r4, r6, r3
    stb r5, 0x91b(r16)
    subfic r0, r0, 0x9
    lbzx r0, r6, r0
    addi r3, r16, 0x924
    stb r4, 0x91c(r16)
    addi r4, r1, 0x20
    li r5, 0x8
    stb r0, 0x91d(r16)
    lbz r0, 0x38(r1)
    stb r17, 0x91e(r16)
    stb r18, 0x91f(r16)
    stb r19, 0x920(r16)
    stb r20, 0x921(r16)
    stb r14, 0x922(r16)
    stb r0, 0x923(r16)
    bl memcpy
    addi r3, r16, 0x92c
    addi r4, r1, 0x18
    li r5, 0x8
    bl memcpy
    lwz r3, 0x34(r1)
    bl OSRestoreInterrupts
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// WPADiCreateKeyFor3rd
// ----------------------------------------------------------------------------
asm void WPADiCreateKeyFor3rd() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    lis r4, lbl_8040C450@ha
    lis r30, lbl_8036CB58@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_8040C450@l
    addi r30, r30, lbl_8036CB58@l
    lwzx r16, r4, r0
    bl OSGetTick
    extrwi r0, r3, 8, 16
    stb r0, lbl_8049DE1B
    bl OSGetTick
    extrwi r0, r3, 6, 10
    stb r0, lbl_8049DE1A
    bl OSGetTick
    lbz r6, lbl_8049DE1A
    srwi r3, r3, 24
    lbz r0, lbl_8049DE1B
    andi. r4, r3, 0x4c
    li r8, 0xff
    lis r5, 0x8081
    mullw r7, r0, r6
    lis r3, 0x9249
    subi r0, r5, 0x7f7f
    stb r8, lbl_8049DE18
    addi r8, r3, 0x2493
    li r5, 0x2
    add r10, r4, r7
    stb r4, lbl_8049DE19
    mulhwu r9, r0, r10
    addi r3, r30, 0x960
    li r7, 0x0
    srwi r9, r9, 7
    mulli r9, r9, 0xff
    subf r9, r9, r10
    clrlwi r10, r9, 24
    mulhw r8, r8, r10
    add r8, r8, r10
    srawi r8, r8, 2
    srwi r9, r8, 31
    add r8, r8, r9
    mulli r8, r8, 0x7
    subf r8, r8, r10
    clrlwi r15, r8, 24
    mulli r8, r15, 0x6
    clrlwi r14, r8, 24
    mtctr r5
lbl_802938AC:
    clrlwi r5, r10, 24
    clrlwi r8, r7, 24
    mullw r9, r5, r6
    addi r7, r7, 0x5
    addi r5, r1, 0x28
    add r5, r5, r8
    add r9, r4, r9
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x0(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x1(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x2(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r9, r8, 24
    mullw r8, r9, r6
    lbzx r9, r3, r9
    stb r9, 0x3(r5)
    add r9, r4, r8
    mulhwu r8, r0, r9
    srwi r8, r8, 7
    mulli r8, r8, 0xff
    subf r8, r8, r9
    clrlwi r10, r8, 24
    lbzx r8, r3, r10
    stb r8, 0x4(r5)
    bdnz lbl_802938AC
    addi r19, r30, 0x930
    stb r10, lbl_8049DE1B
    add r17, r14, r19
    lbzx r4, r19, r14
    lbz r5, 0x1(r17)
    addi r3, r30, 0x1260
    lbz r6, 0x2(r17)
    lbz r7, 0x3(r17)
    lbz r8, 0x4(r17)
    lbz r9, 0x5(r17)
    opword 0x4CC63182
    bl fn_80294360
    lbz r27, 0x2f(r1)
    addi r3, r30, 0x127c
    lbz r26, 0x2e(r1)
    stw r27, 0x8(r1)
    lbz r28, 0x30(r1)
    mr r10, r26
    lbz r29, 0x31(r1)
    stw r28, 0xc(r1)
    lbz r25, 0x2d(r1)
    lbz r24, 0x2c(r1)
    lbz r23, 0x2b(r1)
    mr r9, r25
    lbz r22, 0x2a(r1)
    mr r8, r24
    lbz r21, 0x29(r1)
    mr r7, r23
    stw r29, 0x10(r1)
    mr r6, r22
    lbz r4, 0x28(r1)
    mr r5, r21
    opword 0x4CC63182
    bl fn_80294360
    addi r31, r30, 0x960
    lbz r18, 0x28(r1)
    lbzx r0, r31, r27
    addi r3, r30, 0x12a4
    stw r0, 0x8(r1)
    lbzx r0, r31, r28
    stw r0, 0xc(r1)
    lbzx r0, r31, r29
    stw r0, 0x10(r1)
    lbzx r4, r31, r18
    lbzx r5, r31, r21
    lbzx r6, r31, r22
    lbzx r7, r31, r23
    lbzx r8, r31, r24
    lbzx r9, r31, r25
    lbzx r10, r31, r26
    opword 0x4CC63182
    bl fn_80294360
    bl OSDisableInterrupts
    lbzx r0, r31, r21
    lbzx r11, r31, r22
    stw r3, 0x34(r1)
    slwi r3, r0, 29
    srwi r7, r0, 31
    lbzx r8, r31, r28
    subf r3, r7, r3
    slwi r5, r11, 29
    rotlwi r6, r3, 3
    srwi r4, r11, 31
    add r7, r6, r7
    srwi r12, r8, 31
    subf r6, r4, r5
    slwi r5, r8, 29
    rotlwi r10, r6, 3
    clrlwi r9, r7, 24
    add r10, r10, r4
    subf r4, r12, r5
    rotlwi r5, r4, 3
    lbzx r18, r31, r18
    add r20, r5, r12
    lbzx r14, r19, r14
    lbzx r3, r31, r29
    subfic r6, r9, 0x8
    xor r7, r14, r18
    lbz r4, 0x2(r17)
    sraw r6, r7, r6
    lbzx r12, r31, r24
    slw r7, r7, r9
    lbz r5, 0x1(r17)
    or r6, r7, r6
    clrlwi r10, r10, 24
    xor r9, r5, r12
    slwi r14, r3, 29
    subfic r5, r10, 0x8
    srwi r19, r3, 31
    subf r14, r19, r14
    xor r11, r4, r11
    rotlwi r7, r14, 3
    sraw r5, r9, r5
    slw r10, r9, r10
    clrlwi r14, r20, 24
    subfic r4, r14, 0x8
    add r19, r7, r19
    or r5, r10, r5
    lbzx r7, r31, r26
    lbz r9, 0x3(r17)
    sraw r4, r11, r4
    clrlwi r10, r19, 24
    slw r11, r11, r14
    xor r9, r9, r7
    clrlwi r6, r6, 24
    or r4, r11, r4
    subfic r19, r10, 0x8
    slw r11, r9, r10
    sraw r10, r9, r19
    lbzx r9, r31, r27
    or r11, r11, r10
    clrlwi r10, r4, 24
    clrlwi r4, r11, 24
    add r11, r7, r6
    add r6, r9, r4
    clrlwi r7, r5, 24
    xor r5, r9, r11
    lbzx r4, r31, r23
    clrlwi r5, r5, 24
    add r10, r12, r10
    add r9, r4, r7
    xor r7, r18, r6
    xor r11, r0, r9
    lbzx r9, r31, r25
    lbz r6, 0x4(r17)
    clrlwi r14, r11, 24
    xor r10, r9, r10
    stb r5, 0x38(r1)
    clrlwi r19, r7, 24
    xor r6, r6, r9
    clrlwi r20, r10, 24
    slwi r7, r12, 29
    srwi r5, r12, 31
    subf r7, r5, r7
    lbz r11, 0x5(r17)
    rotlwi r12, r7, 3
    srwi r10, r4, 31
    xor r11, r11, r3
    slwi r7, r4, 29
    add r3, r12, r5
    clrlwi r5, r6, 24
    clrlwi r6, r3, 24
    subf r3, r10, r7
    clrlwi r7, r11, 24
    rotlwi r4, r3, 3
    subfic r11, r6, 0x8
    slw r3, r5, r6
    add r6, r4, r10
    sraw r12, r5, r11
    clrlwi r10, r6, 24
    lbz r4, 0x38(r1)
    or r3, r3, r12
    mr r5, r14
    subfic r11, r10, 0x8
    slw r12, r7, r10
    sraw r10, r7, r11
    clrlwi r3, r3, 24
    or r10, r12, r10
    mr r6, r20
    add r11, r8, r3
    mr r7, r19
    clrlwi r10, r10, 24
    addi r3, r30, 0x12cc
    add r8, r8, r10
    xor r10, r0, r11
    xor r0, r9, r8
    clrlwi r18, r10, 24
    clrlwi r17, r0, 24
    mr r8, r18
    mr r9, r17
    opword 0x4CC63182
    bl fn_80294360
    addi r3, r15, 0x1
    addi r0, r15, 0x2
    slwi r10, r3, 8
    lbz r11, 0x28(r1)
    slwi r0, r0, 8
    addi r3, r30, 0x12e8
    add r4, r18, r10
    add r6, r17, r10
    stw r4, 0x3c(r1)
    add r4, r23, r0
    add r7, r27, r0
    add r5, r24, r0
    stw r4, 0x40(r1)
    add r15, r26, r0
    lbz r4, 0x38(r1)
    add r26, r21, r10
    add r12, r11, r10
    add r27, r28, r0
    add r4, r4, r10
    add r28, r11, r0
    stw r4, 0x44(r1)
    add r4, r22, r0
    add r9, r25, r0
    add r8, r20, r10
    stw r4, 0x48(r1)
    add r4, r14, r10
    add r24, r19, r10
    add r11, r23, r10
    add r10, r22, r10
    lwz r22, 0x3c(r1)
    add r25, r29, r0
    add r21, r21, r0
    lbzx r0, r22, r31
    lwz r22, 0x40(r1)
    lbzx r7, r7, r31
    lbzx r22, r22, r31
    xor r23, r0, r7
    lbzx r6, r6, r31
    xor r22, r0, r22
    lbzx r0, r4, r31
    xor r4, r6, r7
    lbzx r5, r5, r31
    lbzx r7, r27, r31
    xor r6, r6, r5
    xor r5, r0, r5
    xor r27, r0, r7
    lbzx r26, r26, r31
    lbzx r0, r9, r31
    xor r7, r26, r7
    lbzx r9, r8, r31
    lbzx r8, r25, r31
    lbzx r26, r24, r31
    xor r25, r9, r0
    lbzx r24, r28, r31
    xor r28, r9, r8
    lbzx r9, r11, r31
    xor r8, r26, r8
    xor r26, r26, r24
    lwz r11, 0x44(r1)
    xor r0, r9, r0
    lwz r24, 0x48(r1)
    lbzx r11, r11, r31
    lbzx r24, r24, r31
    lbzx r9, r21, r31
    xor r21, r11, r24
    lbzx r15, r15, r31
    xor r11, r11, r9
    lbzx r9, r10, r31
    lbzx r12, r12, r31
    xor r9, r9, r15
    stb r22, 0x20(r1)
    xor r10, r12, r15
    stb r25, 0x21(r1)
    stb r4, 0x22(r1)
    stb r21, 0x23(r1)
    stb r5, 0x24(r1)
    stb r8, 0x25(r1)
    stb r10, 0x26(r1)
    stb r7, 0x27(r1)
    stb r11, 0x18(r1)
    stb r6, 0x19(r1)
    stb r26, 0x1a(r1)
    stb r28, 0x1b(r1)
    stb r23, 0x1c(r1)
    stb r27, 0x1d(r1)
    stb r0, 0x1e(r1)
    stb r9, 0x1f(r1)
    stw r7, 0x8(r1)
    lbz r4, 0x20(r1)
    lbz r5, 0x21(r1)
    lbz r6, 0x22(r1)
    lbz r7, 0x23(r1)
    lbz r8, 0x24(r1)
    lbz r9, 0x25(r1)
    lbz r10, 0x26(r1)
    opword 0x4CC63182
    bl fn_80294360
    lbz r0, 0x1f(r1)
    addi r3, r30, 0x1308
    stw r0, 0x8(r1)
    lbz r4, 0x18(r1)
    lbz r5, 0x19(r1)
    lbz r6, 0x1a(r1)
    lbz r7, 0x1b(r1)
    lbz r8, 0x1c(r1)
    lbz r9, 0x1d(r1)
    lbz r10, 0x1e(r1)
    opword 0x4CC63182
    bl fn_80294360
    li r3, 0x0
    addi r6, r1, 0x28
    subfic r4, r3, 0x9
    li r0, 0x2
    li r3, 0x1
    lbzx r5, r6, r4
    subfic r3, r3, 0x9
    lbzx r4, r6, r3
    subfic r3, r0, 0x9
    stb r5, 0x914(r16)
    li r0, 0x3
    lbzx r5, r6, r3
    subfic r3, r0, 0x9
    stb r4, 0x915(r16)
    li r0, 0x4
    lbzx r4, r6, r3
    subfic r0, r0, 0x9
    stb r5, 0x916(r16)
    li r3, 0x5
    lbzx r0, r6, r0
    stb r4, 0x917(r16)
    subfic r4, r3, 0x9
    li r3, 0x6
    lbzx r5, r6, r4
    stb r0, 0x918(r16)
    subfic r3, r3, 0x9
    li r0, 0x7
    lbzx r4, r6, r3
    stb r5, 0x919(r16)
    subfic r3, r0, 0x9
    li r0, 0x8
    lbzx r5, r6, r3
    stb r4, 0x91a(r16)
    subfic r3, r0, 0x9
    li r0, 0x9
    lbzx r4, r6, r3
    stb r5, 0x91b(r16)
    subfic r0, r0, 0x9
    lbzx r0, r6, r0
    addi r3, r16, 0x924
    stb r4, 0x91c(r16)
    addi r4, r1, 0x20
    li r5, 0x8
    stb r0, 0x91d(r16)
    lbz r0, 0x38(r1)
    stb r17, 0x91e(r16)
    stb r18, 0x91f(r16)
    stb r19, 0x920(r16)
    stb r20, 0x921(r16)
    stb r14, 0x922(r16)
    stb r0, 0x923(r16)
    bl memcpy
    addi r3, r16, 0x92c
    addi r4, r1, 0x18
    li r5, 0x8
    bl memcpy
    lwz r3, 0x34(r1)
    bl OSRestoreInterrupts
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// WPADiDecode
// ----------------------------------------------------------------------------
asm void WPADiDecode() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r8, lbl_8040C450@ha
    cmpwi r5, 0x0
    slwi r0, r3, 2
    stw r31, 0xc(r1)
    addi r8, r8, lbl_8040C450@l
    li r7, 0x0
    stw r30, 0x8(r1)
    lwzx r0, r8, r0
    beq lbl_8029418C
    cmplwi r5, 0x8
    addis r3, r5, 0x1
    subi r3, r3, 0x8
    ble lbl_80294134
    clrlwi r8, r3, 16
    addi r3, r8, 0x7
    srwi r3, r3, 3
    mtctr r3
    cmplwi r8, 0x0
    ble lbl_80294134
lbl_80293F2C:
    clrlwi r30, r7, 16
    addi r3, r7, 0x1
    add r11, r6, r30
    addi r8, r7, 0x2
    slwi r10, r11, 29
    clrlwi r9, r3, 16
    srwi r12, r11, 31
    add r3, r4, r30
    subf r10, r12, r10
    add r11, r6, r9
    rotlwi r10, r10, 3
    clrlwi r9, r8, 16
    add r10, r10, r12
    addi r8, r7, 0x3
    clrlwi r12, r10, 24
    lbz r31, 0x0(r3)
    add r30, r0, r12
    add r10, r6, r9
    lbz r12, 0x92c(r30)
    slwi r9, r11, 29
    srwi r11, r11, 31
    lbz r30, 0x924(r30)
    subf r9, r11, r9
    xor r12, r31, r12
    rotlwi r9, r9, 3
    clrlwi r8, r8, 16
    add r12, r30, r12
    add r9, r9, r11
    stb r12, 0x0(r3)
    clrlwi r9, r9, 24
    add r8, r6, r8
    add r30, r0, r9
    lbz r12, 0x1(r3)
    slwi r9, r10, 29
    srwi r10, r10, 31
    lbz r11, 0x92c(r30)
    subf r9, r10, r9
    rotlwi r9, r9, 3
    lbz r31, 0x924(r30)
    add r9, r9, r10
    xor r11, r12, r11
    add r11, r31, r11
    srwi r10, r8, 31
    stb r11, 0x1(r3)
    clrlwi r9, r9, 24
    add r30, r0, r9
    slwi r9, r8, 29
    addi r8, r7, 0x4
    subf r9, r10, r9
    lbz r12, 0x2(r3)
    rotlwi r9, r9, 3
    clrlwi r8, r8, 16
    lbz r11, 0x92c(r30)
    add r9, r9, r10
    lbz r31, 0x924(r30)
    add r8, r6, r8
    xor r10, r12, r11
    clrlwi r11, r9, 24
    add r10, r31, r10
    slwi r9, r8, 29
    stb r10, 0x2(r3)
    add r30, r0, r11
    srwi r10, r8, 31
    addi r8, r7, 0x5
    subf r9, r10, r9
    lbz r12, 0x3(r3)
    rotlwi r9, r9, 3
    lbz r11, 0x92c(r30)
    clrlwi r8, r8, 16
    lbz r31, 0x924(r30)
    add r10, r9, r10
    add r9, r6, r8
    xor r8, r12, r11
    clrlwi r11, r10, 24
    add r10, r31, r8
    slwi r8, r9, 29
    srwi r9, r9, 31
    stb r10, 0x3(r3)
    add r12, r0, r11
    subf r8, r9, r8
    lbz r10, 0x92c(r12)
    rotlwi r8, r8, 3
    lbz r11, 0x4(r3)
    add r8, r8, r9
    lbz r12, 0x924(r12)
    xor r9, r11, r10
    add r9, r12, r9
    clrlwi r10, r8, 24
    stb r9, 0x4(r3)
    addi r8, r7, 0x6
    add r30, r0, r10
    clrlwi r9, r8, 16
    lbz r12, 0x5(r3)
    add r10, r6, r9
    addi r8, r7, 0x7
    slwi r9, r10, 29
    lbz r31, 0x924(r30)
    srwi r11, r10, 31
    lbz r10, 0x92c(r30)
    subf r9, r11, r9
    clrlwi r8, r8, 16
    xor r12, r12, r10
    addi r7, r7, 0x8
    rotlwi r10, r9, 3
    add r9, r6, r8
    add r12, r31, r12
    add r8, r10, r11
    stb r12, 0x5(r3)
    clrlwi r10, r8, 24
    slwi r8, r9, 29
    srwi r9, r9, 31
    add r12, r0, r10
    lbz r11, 0x6(r3)
    subf r8, r9, r8
    lbz r10, 0x92c(r12)
    rotlwi r8, r8, 3
    lbz r12, 0x924(r12)
    add r8, r8, r9
    xor r9, r11, r10
    add r9, r12, r9
    clrlwi r8, r8, 24
    stb r9, 0x6(r3)
    add r10, r0, r8
    lbz r8, 0x92c(r10)
    lbz r9, 0x7(r3)
    lbz r10, 0x924(r10)
    xor r8, r9, r8
    add r8, r10, r8
    stb r8, 0x7(r3)
    bdnz lbl_80293F2C
lbl_80294134:
    clrlwi r8, r7, 16
    subf r3, r8, r5
    mtctr r3
    cmplw r8, r5
    bge lbl_8029418C
lbl_80294148:
    clrlwi r9, r7, 16
    addi r7, r7, 0x1
    add r8, r6, r9
    lbzx r5, r4, r9
    slwi r3, r8, 29
    srwi r8, r8, 31
    subf r3, r8, r3
    rotlwi r3, r3, 3
    add r3, r3, r8
    clrlwi r3, r3, 24
    add r8, r0, r3
    lbz r3, 0x92c(r8)
    lbz r8, 0x924(r8)
    xor r3, r5, r3
    add r3, r8, r3
    stbx r3, r4, r9
    bdnz lbl_80294148
lbl_8029418C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

