#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/targimpl.cpp
// Total functions: 34

// Global data symbols (@ha/@l)
u8 TRK_saved_exceptionID_8049D928[];
u8 gTRKCPUState[];
u8 gTRKExceptionStatus_80360398[];
u8 gTRKRestoreFlags[];
u8 gTRKSaveState[];
u8 gTRKState[];
u8 lbl_8033C318[];
u8 lbl_8033C328[];
u8 lbl_8033C350[];
u8 lbl_8033C378[];
u8 lbl_803D9790[];
u8 lbl_803D9840[];

// Forward declarations
void TRKExceptionHandler();
void TRKInterruptHandler();
void TRKInterruptHandlerEnableInterrupts();
void TRKPostInterruptEvent();
void TRKRestoreExtended1Block();
void TRKSaveExtended1Block();
void TRKSwapAndGo();
void TRKTargetInterrupt();
void TRKTargetSetInputPendingPtr();
void TRKTargetSetStopped();
void TRKTargetStopped();
void TRKTargetSupportRequest();
void TRKUARTInterruptHandler();
void fn_801A39CC();
void fn_801A3C68();
void fn_801A3FE0();
void fn_801A4570();
void fn_801A46B0();
void fn_801A477C();
void fn_801A4A50();
void fn_801A4D6C();
void fn_801A4E84();
void fn_801A4F68();
void fn_801A5594();
void fn_801A56C8();
void fn_801A5798();
void fn_801A588C();
void fn_801A58F0();
void fn_801A59E0();
void fn_801A5B58();
void fn_801A6D50();
void fn_801A6D58();
void fn_801A6D60();
void fn_801A6E58();
void fn_801A6F24();
void fn_801A7074();
void fn_801A716C();
void fn_801A72A8();
void fn_801A740C();
void fn_801A79D8();
void fn_801A7BD8();
void fn_801A7C74();
void fn_801A7D98();
void fn_801A7E20();
void fn_801A7E94();
void fn_801A80B8();
void fn_801A80D0();
void fn_801A81AC();
void fn_801A8254();
void fn_801A8278();
void fn_801A829C();
void fn_801A8464();
void fn_801A84DC();
void fn_801A84E4();

// ----------------------------------------------------------------------------
// fn_801A6D50
// ----------------------------------------------------------------------------
asm void fn_801A6D50() {
    nofralloc
    mfmsr r3
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6D58
// ----------------------------------------------------------------------------
asm void fn_801A6D58() {
    nofralloc
    mtmsr r3
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6D60
// ----------------------------------------------------------------------------
asm void fn_801A6D60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    li r6, 0x700
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    subi r31, r4, 0x1
    cmplw r31, r3
    stw r30, 0x8(r1)
    mr r30, r5
    bge lbl_801A6D94
    li r3, 0x700
    b lbl_801A6E40
lbl_801A6D94:
    lis r4, lbl_8033C318@ha
    addi r4, r4, lbl_8033C318@l
    lwz r0, 0x4(r4)
    cmplw r3, r0
    bgt lbl_801A6E3C
    lwz r0, 0x0(r4)
    cmplw r31, r0
    blt lbl_801A6E3C
    cmpwi r5, 0x0
    bne lbl_801A6DC8
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_801A6DE4
lbl_801A6DC8:
    cmpwi r5, 0x1
    bne lbl_801A6DEC
    lis r4, lbl_8033C318@ha
    addi r4, r4, lbl_8033C318@l
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_801A6DEC
lbl_801A6DE4:
    li r6, 0x700
    b lbl_801A6E3C
lbl_801A6DEC:
    lis r4, lbl_8033C318@ha
    li r6, 0x0
    lwz r0, lbl_8033C318@l(r4)
    cmplw r3, r0
    bge lbl_801A6E10
    mr r5, r30
    subf r4, r3, r0
    bl fn_801A6D60
    mr r6, r3
lbl_801A6E10:
    cmpwi r6, 0x0
    bne lbl_801A6E3C
    lis r3, lbl_8033C318@ha
    addi r3, r3, lbl_8033C318@l
    lwz r3, 0x4(r3)
    cmplw r31, r3
    ble lbl_801A6E3C
    mr r5, r30
    subf r4, r3, r31
    bl fn_801A6D60
    mr r6, r3
lbl_801A6E3C:
    mr r3, r6
lbl_801A6E40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6E58
// ----------------------------------------------------------------------------
asm void fn_801A6E58() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r24, 0x10(r1)
    mr r29, r3
    mr r30, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl fn_801A6D50
    mr r31, r3
    li r25, 0xff
    b lbl_801A6F00
lbl_801A6E8C:
    mr r3, r28
    bl fn_801A6D58
    clrrwi r3, r30, 2
    subf r0, r3, r30
    lwz r3, 0x0(r3)
    subfic r0, r0, 0x3
    slwi r0, r0, 3
    srw r0, r3, r0
    clrlwi r24, r0, 24
    sync
    mr r3, r27
    bl fn_801A6D58
    clrrwi r6, r29, 2
    subf r0, r6, r29
    lwz r5, 0x0(r6)
    subfic r3, r0, 0x3
    subfic r0, r0, 0x3
    slwi r3, r3, 3
    slwi r0, r0, 3
    slw r4, r25, r3
    slw r0, r24, r0
    andc r3, r5, r4
    and r0, r4, r0
    or r0, r3, r0
    stw r0, 0x0(r6)
    sync
    addi r30, r30, 0x1
    addi r29, r29, 0x1
    subi r26, r26, 0x1
lbl_801A6F00:
    cmpwi r26, 0x0
    bne lbl_801A6E8C
    mr r3, r31
    bl fn_801A6D58
    lmw r24, 0x10(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801A6F24
// ----------------------------------------------------------------------------
asm void fn_801A6F24() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r8, gTRKExceptionStatus_80360398@ha
    stw r0, 0x44(r1)
    addi r8, r8, gTRKExceptionStatus_80360398@l
    stmw r25, 0x24(r1)
    mr r26, r4
    mr r31, r5
    mr r25, r3
    li r30, 0x0
    mr r27, r7
    mr r3, r26
    lwz r0, 0xc(r8)
    lwz r6, 0x0(r8)
    lwz r5, 0x4(r8)
    lwz r4, 0x8(r8)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    stb r30, 0xd(r8)
    bl fn_801A3FE0
    cntlzw r0, r27
    lwz r4, 0x0(r31)
    mr r28, r3
    srwi r5, r0, 5
    bl fn_801A6D60
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_801A6FA4
    stw r30, 0x0(r31)
    b lbl_801A7018
lbl_801A6FA4:
    bl fn_801A6D50
    lis r4, gTRKCPUState@ha
    cmpwi r27, 0x0
    addi r4, r4, gTRKCPUState@l
    mr r8, r3
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 27, 27
    or r7, r3, r0
    beq lbl_801A6FE0
    lwz r5, 0x0(r31)
    mr r3, r25
    mr r4, r28
    mr r6, r8
    bl fn_801A6E58
    b lbl_801A7018
lbl_801A6FE0:
    lwz r5, 0x0(r31)
    mr r6, r7
    mr r3, r28
    mr r4, r25
    mr r7, r8
    bl fn_801A6E58
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_801A39CC
    cmplw r26, r28
    beq lbl_801A7018
    lwz r4, 0x0(r31)
    mr r3, r26
    bl fn_801A39CC
lbl_801A7018:
    lis r3, gTRKExceptionStatus_80360398@ha
    addi r3, r3, gTRKExceptionStatus_80360398@l
    lbz r0, 0xd(r3)
    cmpwi r0, 0x0
    beq lbl_801A7038
    li r0, 0x0
    stw r0, 0x0(r31)
    li r29, 0x702
lbl_801A7038:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_80360398@ha
    stwu r6, gTRKExceptionStatus_80360398@l(r7)
    mr r3, r29
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
    lmw r25, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7074
// ----------------------------------------------------------------------------
asm void fn_801A7074() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x24
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    ble lbl_801A709C
    li r3, 0x701
    b lbl_801A7154
lbl_801A709C:
    lis r12, gTRKExceptionStatus_80360398@ha
    subf r4, r3, r4
    addi r12, r12, gTRKExceptionStatus_80360398@l
    cmpwi r7, 0x0
    lwz r9, 0xc(r12)
    lis r8, gTRKCPUState@ha
    lwz r11, 0x0(r12)
    li r0, 0x0
    lwz r10, 0x4(r12)
    addi r31, r4, 0x1
    lwz r7, 0x8(r12)
    slwi r3, r3, 2
    stb r0, 0xd(r12)
    addi r8, r8, gTRKCPUState@l
    slwi r0, r31, 2
    stw r11, 0x8(r1)
    add r4, r8, r3
    stw r10, 0xc(r1)
    stw r7, 0x10(r1)
    stw r9, 0x14(r1)
    stw r0, 0x0(r6)
    beq lbl_801A7104
    mr r3, r5
    mr r5, r31
    bl fn_801A58F0
    b lbl_801A7110
lbl_801A7104:
    mr r3, r5
    mr r5, r31
    bl fn_801A5B58
lbl_801A7110:
    lis r4, gTRKExceptionStatus_80360398@ha
    addi r4, r4, gTRKExceptionStatus_80360398@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_801A7130
    li r0, 0x0
    stw r0, 0x0(r30)
    li r3, 0x702
lbl_801A7130:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_80360398@ha
    stwu r6, gTRKExceptionStatus_80360398@l(r7)
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_801A7154:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A716C
// ----------------------------------------------------------------------------
asm void fn_801A716C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x21
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_801A71A0
    li r3, 0x701
    b lbl_801A7294
lbl_801A71A0:
    lis r6, gTRKExceptionStatus_80360398@ha
    li r31, 0x0
    addi r6, r6, gTRKExceptionStatus_80360398@l
    lwz r0, 0xc(r6)
    lwz r5, 0x0(r6)
    lwz r4, 0x4(r6)
    lwz r3, 0x8(r6)
    stw r5, 0x10(r1)
    stw r4, 0x14(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    stb r31, 0xd(r6)
    bl fn_801A6D50
    ori r3, r3, 0x2000
    bl fn_801A6D58
    stw r31, 0x0(r29)
    li r3, 0x0
    b lbl_801A7240
lbl_801A71E8:
    cmpwi r30, 0x0
    beq lbl_801A7214
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_801A829C
    lwz r5, 0x8(r1)
    mr r3, r28
    lwz r6, 0xc(r1)
    bl fn_801A5798
    b lbl_801A7230
lbl_801A7214:
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_801A59E0
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x8
    bl fn_801A829C
lbl_801A7230:
    lwz r4, 0x0(r29)
    addi r26, r26, 0x1
    addi r0, r4, 0x8
    stw r0, 0x0(r29)
lbl_801A7240:
    cmplw r26, r27
    bgt lbl_801A7250
    cmpwi r3, 0x0
    beq lbl_801A71E8
lbl_801A7250:
    lis r4, gTRKExceptionStatus_80360398@ha
    addi r4, r4, gTRKExceptionStatus_80360398@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_801A7270
    li r0, 0x0
    stw r0, 0x0(r29)
    li r3, 0x702
lbl_801A7270:
    lwz r6, 0x10(r1)
    lis r7, gTRKExceptionStatus_80360398@ha
    stwu r6, gTRKExceptionStatus_80360398@l(r7)
    lwz r5, 0x14(r1)
    lwz r4, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_801A7294:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A72A8
// ----------------------------------------------------------------------------
asm void fn_801A72A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r4, 0x60
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    ble lbl_801A72CC
    li r3, 0x701
    b lbl_801A73F8
lbl_801A72CC:
    lis r12, gTRKExceptionStatus_80360398@ha
    cmplw r3, r4
    addi r12, r12, gTRKExceptionStatus_80360398@l
    li r0, 0x0
    lwz r8, 0xc(r12)
    lwz r11, 0x0(r12)
    lwz r10, 0x4(r12)
    lwz r9, 0x8(r12)
    stb r0, 0xd(r12)
    stw r11, 0x8(r1)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r0, 0x0(r6)
    bgt lbl_801A73B4
    subf r4, r3, r4
    lis r8, gTRKCPUState@ha
    addi r9, r4, 0x1
    cmpwi r7, 0x0
    slwi r7, r9, 2
    addi r8, r8, gTRKCPUState@l
    slwi r0, r3, 2
    stw r7, 0x0(r6)
    add r3, r8, r0
    addi r4, r3, 0x1a8
    beq lbl_801A7344
    mr r3, r5
    mr r5, r9
    bl fn_801A58F0
    b lbl_801A73B4
lbl_801A7344:
    addi r0, r8, 0x1ec
    cmplw r4, r0
    bgt lbl_801A7370
    add r3, r4, r7
    addi r0, r8, 0x1e8
    subi r3, r3, 0x4
    cmplw r3, r0
    blt lbl_801A7370
    lis r3, gTRKRestoreFlags@ha
    li r0, 0x1
    stb r0, gTRKRestoreFlags@l(r3)
lbl_801A7370:
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    addi r6, r3, 0x278
    cmplw r4, r6
    bgt lbl_801A73A8
    slwi r0, r9, 2
    add r3, r4, r0
    subi r0, r3, 0x4
    cmplw r0, r6
    blt lbl_801A73A8
    lis r3, gTRKRestoreFlags@ha
    li r0, 0x1
    addi r3, r3, gTRKRestoreFlags@l
    stb r0, 0x1(r3)
lbl_801A73A8:
    mr r3, r5
    mr r5, r9
    bl fn_801A5B58
lbl_801A73B4:
    lis r4, gTRKExceptionStatus_80360398@ha
    addi r4, r4, gTRKExceptionStatus_80360398@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_801A73D4
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x702
lbl_801A73D4:
    lwz r6, 0x8(r1)
    lis r7, gTRKExceptionStatus_80360398@ha
    stwu r6, gTRKExceptionStatus_80360398@l(r7)
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_801A73F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A740C
// ----------------------------------------------------------------------------
asm void fn_801A740C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x1f
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    ble lbl_801A7440
    li r3, 0x701
    b lbl_801A7568
lbl_801A7440:
    lis r9, gTRKExceptionStatus_80360398@ha
    li r31, 0x0
    addi r9, r9, gTRKExceptionStatus_80360398@l
    addi r3, r1, 0x8
    lwz r0, 0xc(r9)
    li r4, 0x398
    lwz r8, 0x0(r9)
    li r5, 0x1
    lwz r7, 0x4(r9)
    lwz r6, 0x8(r9)
    stw r8, 0x18(r1)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    stb r31, 0xd(r9)
    bl fn_801A80D0
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x398
    li r5, 0x0
    oris r0, r0, 0xa000
    stw r0, 0x8(r1)
    bl fn_801A80D0
    stw r31, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x390
    li r5, 0x0
    bl fn_801A80D0
    stw r31, 0x0(r29)
    li r3, 0x0
    b lbl_801A7514
lbl_801A74BC:
    cmpwi r30, 0x0
    beq lbl_801A74E8
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x10
    bl fn_801A81AC
    lwz r5, 0x10(r1)
    mr r3, r28
    lwz r6, 0x14(r1)
    bl fn_801A5798
    b lbl_801A7504
lbl_801A74E8:
    mr r3, r28
    addi r4, r1, 0x10
    bl fn_801A59E0
    mr r4, r26
    mr r5, r30
    addi r3, r1, 0x10
    bl fn_801A81AC
lbl_801A7504:
    lwz r4, 0x0(r29)
    addi r26, r26, 0x1
    addi r0, r4, 0x8
    stw r0, 0x0(r29)
lbl_801A7514:
    cmplw r26, r27
    bgt lbl_801A7524
    cmpwi r3, 0x0
    beq lbl_801A74BC
lbl_801A7524:
    lis r4, gTRKExceptionStatus_80360398@ha
    addi r4, r4, gTRKExceptionStatus_80360398@l
    lbz r0, 0xd(r4)
    cmpwi r0, 0x0
    beq lbl_801A7544
    li r0, 0x0
    stw r0, 0x0(r29)
    li r3, 0x702
lbl_801A7544:
    lwz r6, 0x18(r1)
    lis r7, gTRKExceptionStatus_80360398@ha
    stwu r6, gTRKExceptionStatus_80360398@l(r7)
    lwz r5, 0x1c(r1)
    lwz r4, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r0, 0xc(r7)
lbl_801A7568:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// TRKInterruptHandler
// ----------------------------------------------------------------------------
asm void TRKInterruptHandler() {
    nofralloc
    mtsrr0 r2
    mtsrr1 r4
    mfsprg r4, 3
    mfcr r2
    mtsprg 3, r2
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0x8c(r2)
    ori r2, r2, 0x8002
    xori r2, r2, 0x8002
    sync
    mtmsr r2
    sync
    lis r2, TRK_saved_exceptionID_8049D928@h
    ori r2, r2, TRK_saved_exceptionID_8049D928@l
    sth r3, 0x0(r2)
    cmpwi r3, 0x500
    bne lbl_801A7644
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    mflr r3
    stw r3, 0x42c(r2)
    bl TRKUARTInterruptHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lwz r3, 0x42c(r2)
    mtlr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq lbl_801A7628
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x1
    beq lbl_801A7628
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b lbl_801A7644
lbl_801A7628:
    lis r2, gTRKSaveState@h
    ori r2, r2, gTRKSaveState@l
    lwz r3, 0x88(r2)
    mtcrf 255, r3
    lwz r3, 0xc(r2)
    lwz r2, 0x8(r2)
    rfi
lbl_801A7644:
    lis r2, TRK_saved_exceptionID_8049D928@h
    ori r2, r2, TRK_saved_exceptionID_8049D928@l
    lhz r3, 0x0(r2)
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    lbz r2, 0xc(r2)
    cmpwi r2, 0x0
    bne TRKExceptionHandler
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    stw r0, 0x0(r2)
    stw r1, 0x4(r2)
    mfsprg r0, 1
    stw r0, 0x8(r2)
    sth r3, 0x2f8(r2)
    sth r3, 0x2fa(r2)
    mfsprg r0, 2
    stw r0, 0xc(r2)
    stmw r4, 0x10(r2)
    mfsrr0 r27
    mflr r28
    mfsprg r29, 3
    mfctr r30
    mfxer r31
    stmw r27, 0x80(r2)
    bl TRKSaveExtended1Block
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    li r3, 0x1
    stb r3, 0xc(r2)
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}

// ----------------------------------------------------------------------------
// TRKExceptionHandler
// ----------------------------------------------------------------------------
asm void TRKExceptionHandler() {
    nofralloc
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    sth r3, 0x8(r2)
    mfsrr0 r3
    stw r3, 0x0(r2)
    lhz r3, 0x8(r2)
    cmpwi r3, 0x200
    beq lbl_801A777C
    cmpwi r3, 0x300
    beq lbl_801A777C
    cmpwi r3, 0x400
    beq lbl_801A777C
    cmpwi r3, 0x600
    beq lbl_801A777C
    cmpwi r3, 0x700
    beq lbl_801A777C
    cmpwi r3, 0x800
    beq lbl_801A777C
    cmpwi r3, 0x1000
    beq lbl_801A777C
    cmpwi r3, 0x1100
    beq lbl_801A777C
    cmpwi r3, 0x1200
    beq lbl_801A777C
    cmpwi r3, 0x1300
    beq lbl_801A777C
    b lbl_801A7788
lbl_801A777C:
    mfsrr0 r3
    addi r3, r3, 0x4
    mtsrr0 r3
lbl_801A7788:
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    li r3, 0x1
    stb r3, 0xd(r2)
    mfsprg r3, 3
    mtcrf 255, r3
    mfsprg r2, 1
    mfsprg r3, 2
    rfi
}

// ----------------------------------------------------------------------------
// TRKPostInterruptEvent
// ----------------------------------------------------------------------------
asm void TRKPostInterruptEvent() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, gTRKState@ha
    stw r0, 0x24(r1)
    addi r3, r3, gTRKState@l
    lwz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_801A77D8
    li r0, 0x0
    stw r0, 0x9c(r3)
    b lbl_801A7854
lbl_801A77D8:
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x2f8(r3)
    clrlwi r0, r0, 16
    cmpwi r0, 0x700
    beq lbl_801A77F8
    cmpwi r0, 0xd00
    bne lbl_801A7840
lbl_801A77F8:
    lis r3, gTRKCPUState@ha
    li r0, 0x4
    addi r3, r3, gTRKCPUState@l
    stw r0, 0x8(r1)
    lwz r4, 0x80(r3)
    addi r3, r1, 0xc
    addi r5, r1, 0x8
    li r6, 0x0
    li r7, 0x1
    bl fn_801A6F24
    lwz r3, 0xc(r1)
    subis r0, r3, 0xfe0
    cmplwi r0, 0x0
    bne lbl_801A7838
    li r4, 0x5
    b lbl_801A7844
lbl_801A7838:
    li r4, 0x3
    b lbl_801A7844
lbl_801A7840:
    li r4, 0x4
lbl_801A7844:
    addi r3, r1, 0x10
    bl fn_801A477C
    addi r3, r1, 0x10
    bl fn_801A46B0
lbl_801A7854:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// TRKSwapAndGo
// ----------------------------------------------------------------------------
asm void TRKSwapAndGo() {
    nofralloc
    lis r3, gTRKState@h
    ori r3, r3, gTRKState@l
    stmw r0, 0x0(r3)
    mfmsr r0
    stw r0, 0x8c(r3)
    mflr r0
    stw r0, 0x80(r3)
    mfctr r0
    stw r0, 0x84(r3)
    mfxer r0
    stw r0, 0x88(r3)
    mfdsisr r0
    stw r0, 0x94(r3)
    mfdar r0
    stw r0, 0x90(r3)
    li r1, -0x7ffe
    nor r1, r1, r1
    mfmsr r3
    and r3, r3, r1
    mtmsr r3
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r2, 0xa0(r2)
    lbz r2, 0x0(r2)
    cmpwi r2, 0x0
    beq lbl_801A78E0
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    li r3, 0x1
    stb r3, 0x9c(r2)
    b TRKInterruptHandlerEnableInterrupts
lbl_801A78E0:
    lis r2, gTRKExceptionStatus_80360398@h
    ori r2, r2, gTRKExceptionStatus_80360398@l
    li r3, 0x0
    stb r3, 0xc(r2)
    bl TRKRestoreExtended1Block
    lis r2, gTRKCPUState@h
    ori r2, r2, gTRKCPUState@l
    lmw r27, 0x80(r2)
    mtsrr0 r27
    mtlr r28
    mtcrf 255, r29
    mtctr r30
    mtxer r31
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    rfi
}

// ----------------------------------------------------------------------------
// TRKInterruptHandlerEnableInterrupts
// ----------------------------------------------------------------------------
asm void TRKInterruptHandlerEnableInterrupts() {
    nofralloc
    lis r2, gTRKState@h
    ori r2, r2, gTRKState@l
    lwz r0, 0x8c(r2)
    sync
    mtmsr r0
    sync
    lwz r0, 0x80(r2)
    mtlr r0
    lwz r0, 0x84(r2)
    mtctr r0
    lwz r0, 0x88(r2)
    mtxer r0
    lwz r0, 0x94(r2)
    mtdsisr r0
    lwz r0, 0x90(r2)
    mtdar r0
    lmw r3, 0xc(r2)
    lwz r0, 0x0(r2)
    lwz r1, 0x4(r2)
    lwz r2, 0x8(r2)
    b TRKPostInterruptEvent
}

// ----------------------------------------------------------------------------
// TRKTargetInterrupt
// ----------------------------------------------------------------------------
asm void TRKTargetInterrupt() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, 0x0(r3)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_801A79C0
    bl fn_801A7C74
    cmpwi r3, 0x0
    bne lbl_801A79C0
    li r3, 0x1
    bl TRKTargetSetStopped
    li r3, 0x90
    bl fn_801A4570
    mr r31, r3
lbl_801A79C0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A79D8
// ----------------------------------------------------------------------------
asm void fn_801A79D8() {
    nofralloc
    stwu r1, -0x470(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x474(r1)
    stw r31, 0x46c(r1)
    stw r30, 0x468(r1)
    stw r29, 0x464(r1)
    mr r29, r3
    addi r3, r1, 0x20
    bl fn_801A3C68
    lis r31, gTRKCPUState@ha
    li r4, 0x4e8
    addi r31, r31, gTRKCPUState@l
    li r5, 0x90
    lwz r0, 0x80(r31)
    addi r3, r1, 0x14
    stw r4, 0x20(r1)
    addi r4, r1, 0x10
    stb r5, 0x24(r1)
    stw r0, 0x28(r1)
    bl fn_801A84E4
    lwz r0, 0x14(r1)
    li r3, 0xe4
    stw r0, 0x34(r1)
    bl fn_801A84DC
    lwz r3, 0x0(r3)
    li r0, 0x4
    stw r3, 0x38(r1)
    addi r3, r1, 0x18
    lwz r4, 0x80(r31)
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    li r6, 0x0
    li r7, 0x1
    bl fn_801A6F24
    lwz r0, 0x2f8(r31)
    mr r3, r29
    lwz r5, 0x18(r1)
    addi r4, r1, 0x20
    clrlwi r0, r0, 16
    stw r5, 0x2c(r1)
    li r5, 0x40
    stw r0, 0x30(r1)
    bl fn_801A588C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A7B00
    li r30, 0x0
lbl_801A7A9C:
    lwz r4, 0x0(r31)
    mr r3, r29
    bl fn_801A56C8
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x20
    blt lbl_801A7A9C
    lis r31, gTRKCPUState@ha
    mr r3, r29
    addi r31, r31, gTRKCPUState@l
    lwz r4, 0x80(r31)
    bl fn_801A56C8
    lwz r4, 0x84(r31)
    mr r3, r29
    bl fn_801A56C8
    lwz r4, 0x88(r31)
    mr r3, r29
    bl fn_801A56C8
    lwz r4, 0x8c(r31)
    mr r3, r29
    bl fn_801A56C8
    lwz r4, 0x90(r31)
    mr r3, r29
    bl fn_801A56C8
    mr r30, r3
lbl_801A7B00:
    cmpwi r30, 0x0
    bne lbl_801A7B70
    li r3, 0xd4
    bl fn_801A84DC
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_801A56C8
    li r3, 0xd8
    bl fn_801A84DC
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_801A56C8
    li r3, 0xdc
    bl fn_801A84DC
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_801A56C8
    li r3, 0xe0
    bl fn_801A84DC
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_801A56C8
    li r3, 0xe4
    bl fn_801A84DC
    lwz r4, 0x0(r3)
    mr r3, r29
    bl fn_801A56C8
    mr r30, r3
lbl_801A7B70:
    cmpwi r30, 0x0
    bne lbl_801A7BB8
    lis r3, gTRKCPUState@ha
    li r0, 0x400
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r1)
    lwz r0, 0x80(r3)
    addi r3, r1, 0x60
    addi r5, r1, 0xc
    li r6, 0x0
    clrrwi r4, r0, 10
    li r7, 0x1
    bl fn_801A6F24
    mr r30, r3
    mr r3, r29
    addi r4, r1, 0x60
    li r5, 0x400
    bl fn_801A5594
lbl_801A7BB8:
    mr r3, r30
    lwz r31, 0x46c(r1)
    lwz r30, 0x468(r1)
    lwz r29, 0x464(r1)
    lwz r0, 0x474(r1)
    mtlr r0
    addi r1, r1, 0x470
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7BD8
// ----------------------------------------------------------------------------
asm void fn_801A7BD8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x40
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    addi r3, r1, 0x10
    bl fn_801A3C68
    lis r31, gTRKExceptionStatus_80360398@ha
    li r3, 0x40
    lwz r4, gTRKExceptionStatus_80360398@l(r31)
    li r5, 0x91
    li r0, 0x4
    stw r3, 0x10(r1)
    addi r3, r1, 0xc
    li r6, 0x0
    stb r5, 0x14(r1)
    addi r5, r1, 0x8
    li r7, 0x1
    stw r4, 0x18(r1)
    stw r0, 0x8(r1)
    bl fn_801A6F24
    addi r3, r31, gTRKExceptionStatus_80360398@l
    lwz r4, 0xc(r1)
    lhz r0, 0x8(r3)
    mr r3, r30
    stw r4, 0x1c(r1)
    addi r4, r1, 0x10
    li r5, 0x40
    stw r0, 0x20(r1)
    bl fn_801A588C
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7C74
// ----------------------------------------------------------------------------
asm void fn_801A7C74() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_803D9790@ha
    stw r0, 0x14(r1)
    lwz r0, lbl_803D9790@l(r3)
    cmpwi r0, 0x0
    beq lbl_801A7D80
    lis r4, gTRKCPUState@ha
    li r5, 0x1
    addi r4, r4, gTRKCPUState@l
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 22, 20
    ori r0, r0, 0x8000
    stw r0, 0x1f8(r4)
    beq lbl_801A7D10
    lwz r0, 0x2f8(r4)
    clrlwi r0, r0, 16
    cmplwi r0, 0xd00
    bne lbl_801A7D10
    addi r3, r3, lbl_803D9790@l
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_801A7CDC
    cmpwi r0, 0x1
    beq lbl_801A7CF0
    b lbl_801A7D10
lbl_801A7CDC:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_801A7D10
    li r5, 0x0
    b lbl_801A7D10
lbl_801A7CF0:
    lwz r4, 0x80(r4)
    lwz r0, 0xc(r3)
    cmplw r4, r0
    blt lbl_801A7D10
    lwz r0, 0x10(r3)
    cmplw r4, r0
    bgt lbl_801A7D10
    li r5, 0x0
lbl_801A7D10:
    cmpwi r5, 0x0
    beq lbl_801A7D28
    lis r3, lbl_803D9790@ha
    li r0, 0x0
    stw r0, lbl_803D9790@l(r3)
    b lbl_801A7D80
lbl_801A7D28:
    lis r5, lbl_803D9790@ha
    lis r4, gTRKCPUState@ha
    addi r4, r4, gTRKCPUState@l
    li r6, 0x1
    addi r3, r5, lbl_803D9790@l
    lwz r0, 0x1f8(r4)
    lwz r3, 0x4(r3)
    ori r0, r0, 0x400
    stw r6, lbl_803D9790@l(r5)
    rlwinm r0, r0, 0, 17, 15
    cmpwi r3, 0x0
    stw r0, 0x1f8(r4)
    beq lbl_801A7D64
    cmpwi r3, 0x10
    bne lbl_801A7D78
lbl_801A7D64:
    lis r4, lbl_803D9790@ha
    addi r4, r4, lbl_803D9790@l
    lwz r3, 0x8(r4)
    subi r0, r3, 0x1
    stw r0, 0x8(r4)
lbl_801A7D78:
    li r3, 0x0
    bl TRKTargetSetStopped
lbl_801A7D80:
    lwz r0, 0x14(r1)
    lis r3, lbl_803D9790@ha
    lwz r3, lbl_803D9790@l(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7D98
// ----------------------------------------------------------------------------
asm void fn_801A7D98() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_801A7DB4
    li r3, 0x703
    b lbl_801A7E10
lbl_801A7DB4:
    lis r4, gTRKCPUState@ha
    lis r7, lbl_803D9790@ha
    addi r4, r4, gTRKCPUState@l
    li r5, 0x1
    lwz r0, 0x1f8(r4)
    addi r6, r7, lbl_803D9790@l
    li r8, 0x0
    stw r8, 0x4(r6)
    ori r0, r0, 0x400
    rlwinm r0, r0, 0, 17, 15
    stw r3, 0x8(r6)
    stw r5, lbl_803D9790@l(r7)
    stw r0, 0x1f8(r4)
    b lbl_801A7DF0
    bne lbl_801A7E04
lbl_801A7DF0:
    lis r4, lbl_803D9790@ha
    addi r4, r4, lbl_803D9790@l
    lwz r3, 0x8(r4)
    subi r0, r3, 0x1
    stw r0, 0x8(r4)
lbl_801A7E04:
    li r3, 0x0
    bl TRKTargetSetStopped
    li r3, 0x0
lbl_801A7E10:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7E20
// ----------------------------------------------------------------------------
asm void fn_801A7E20() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    beq lbl_801A7E3C
    li r3, 0x703
    b lbl_801A7E84
lbl_801A7E3C:
    lis r5, gTRKCPUState@ha
    lis r7, lbl_803D9790@ha
    addi r5, r5, gTRKCPUState@l
    li r8, 0x1
    lwz r0, 0x1f8(r5)
    addi r6, r7, lbl_803D9790@l
    stw r8, 0x4(r6)
    ori r0, r0, 0x400
    rlwinm r0, r0, 0, 17, 15
    stw r3, 0xc(r6)
    stw r4, 0x10(r6)
    stw r8, lbl_803D9790@l(r7)
    stw r0, 0x1f8(r5)
    b lbl_801A7E78
    stw r0, 0x8(r4)
lbl_801A7E78:
    li r3, 0x0
    bl TRKTargetSetStopped
    li r3, 0x0
lbl_801A7E84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A7E94
// ----------------------------------------------------------------------------
asm void fn_801A7E94() {
    nofralloc
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r3, 0x80(r3)
    blr
}

// ----------------------------------------------------------------------------
// TRKTargetSupportRequest
// ----------------------------------------------------------------------------
asm void TRKTargetSupportRequest() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, gTRKCPUState@ha
    stw r0, 0x34(r1)
    addi r7, r7, gTRKCPUState@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r29, 0xc(r7)
    subi r0, r29, 0xd0
    cmplwi r0, 0x1
    ble lbl_801A7FF8
    cmpwi r29, 0xd2
    beq lbl_801A7F08
    cmpwi r29, 0xd3
    beq lbl_801A7F54
    cmpwi r29, 0xd4
    beq lbl_801A7F94
    addi r3, r1, 0x10
    li r4, 0x4
    bl fn_801A477C
    addi r3, r1, 0x10
    bl fn_801A46B0
    li r3, 0x0
    b lbl_801A807C
lbl_801A7F08:
    lwz r0, 0x14(r7)
    addi r6, r1, 0xc
    lwz r3, 0x10(r7)
    lwz r5, 0x18(r7)
    clrlwi r4, r0, 24
    bl fn_801A4D6C
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_801A7F40
    cmpwi r3, 0x0
    beq lbl_801A7F40
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_801A7F40:
    lis r3, gTRKCPUState@ha
    lwz r0, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r3)
    b lbl_801A8064
lbl_801A7F54:
    lwz r3, 0x10(r7)
    addi r4, r1, 0xc
    bl fn_801A4E84
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_801A7F80
    cmpwi r3, 0x0
    beq lbl_801A7F80
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_801A7F80:
    lis r3, gTRKCPUState@ha
    lwz r0, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    stw r0, 0xc(r3)
    b lbl_801A8064
lbl_801A7F94:
    lwz r3, 0x14(r7)
    addi r4, r1, 0x8
    lwz r0, 0x18(r7)
    addi r6, r1, 0xc
    lwz r3, 0x0(r3)
    stw r3, 0x8(r1)
    clrlwi r5, r0, 24
    lwz r3, 0x10(r7)
    bl fn_801A4F68
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_801A7FD8
    cmpwi r3, 0x0
    beq lbl_801A7FD8
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_801A7FD8:
    lis r3, gTRKCPUState@ha
    lwz r4, 0xc(r1)
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x8(r1)
    stw r4, 0xc(r3)
    lwz r3, 0x14(r3)
    stw r0, 0x0(r3)
    b lbl_801A8064
lbl_801A7FF8:
    subi r0, r29, 0xd1
    lwz r30, 0x14(r7)
    cntlzw r0, r0
    lwz r3, 0x10(r7)
    lwz r4, 0x18(r7)
    mr r5, r30
    addi r6, r1, 0xc
    srwi r8, r0, 5
    li r7, 0x1
    bl fn_801A4A50
    lwz r0, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_801A8040
    cmpwi r3, 0x0
    beq lbl_801A8040
    li r0, 0x1
    stw r0, 0xc(r1)
lbl_801A8040:
    lis r3, gTRKCPUState@ha
    cmpwi r29, 0xd1
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0xc(r1)
    stw r0, 0xc(r3)
    bne lbl_801A8064
    lwz r3, 0x18(r3)
    lwz r4, 0x0(r30)
    bl fn_801A39CC
lbl_801A8064:
    lis r5, gTRKCPUState@ha
    mr r3, r31
    addi r5, r5, gTRKCPUState@l
    lwz r4, 0x80(r5)
    addi r0, r4, 0x4
    stw r0, 0x80(r5)
lbl_801A807C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// TRKTargetStopped
// ----------------------------------------------------------------------------
asm void TRKTargetStopped() {
    nofralloc
    lis r3, gTRKState@ha
    addi r3, r3, gTRKState@l
    lwz r3, 0x98(r3)
    blr
}

// ----------------------------------------------------------------------------
// TRKTargetSetStopped
// ----------------------------------------------------------------------------
asm void TRKTargetSetStopped() {
    nofralloc
    lis r4, gTRKState@ha
    addi r4, r4, gTRKState@l
    stw r3, 0x98(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A80B8
// ----------------------------------------------------------------------------
asm void fn_801A80B8() {
    nofralloc
    lis r4, gTRKState@ha
    li r0, 0x1
    addi r4, r4, gTRKState@l
    li r3, 0x0
    stw r0, 0x98(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A80D0
// ----------------------------------------------------------------------------
asm void fn_801A80D0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lis r29, lbl_8033C328@ha
    lwzu r30, lbl_8033C328@l(r29)
    stw r30, 0x8(r1)
    lwz r31, 0x4(r29)
    lwz r12, 0x8(r29)
    lwz r11, 0xc(r29)
    lwz r10, 0x10(r29)
    lwz r9, 0x14(r29)
    lwz r8, 0x18(r29)
    lwz r7, 0x1c(r29)
    lwz r6, 0x20(r29)
    lwz r0, 0x24(r29)
    stw r31, 0xc(r1)
    stw r12, 0x10(r1)
    stw r11, 0x14(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_801A8168
    rlwinm r0, r4, 6, 14, 20
    clrlslwi r4, r4, 27, 16
    oris r6, r0, 0x7c80
    lis r0, 0x9083
    ori r4, r4, 0x2a6
    stw r0, 0xc(r1)
    or r0, r6, r4
    stw r0, 0x8(r1)
    b lbl_801A8188
lbl_801A8168:
    clrlslwi r0, r4, 27, 16
    rlwinm r6, r4, 6, 14, 20
    oris r4, r6, 0x7c80
    ori r0, r0, 0x3a6
    lis r6, 0x8083
    or r0, r4, r0
    stw r6, 0x8(r1)
    stw r0, 0xc(r1)
lbl_801A8188:
    addi r4, r1, 0x8
    bl fn_801A8464
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A81AC
// ----------------------------------------------------------------------------
asm void fn_801A81AC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r6, lbl_8033C350@ha
    cmpwi r5, 0x0
    stw r0, 0x44(r1)
    slwi r0, r4, 21
    oris r4, r0, 0xe003
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    lwzu r29, lbl_8033C350@l(r6)
    stw r29, 0x8(r1)
    lwz r30, 0x4(r6)
    lwz r31, 0x8(r6)
    lwz r12, 0xc(r6)
    lwz r11, 0x10(r6)
    lwz r10, 0x14(r6)
    lwz r9, 0x18(r6)
    lwz r8, 0x1c(r6)
    lwz r7, 0x20(r6)
    lwz r6, 0x24(r6)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    beq lbl_801A822C
    oris r4, r0, 0xf003
lbl_801A822C:
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_801A8464
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A8254
// ----------------------------------------------------------------------------
asm void fn_801A8254() {
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10020
    mffs f31
    stfd f31, 0x0(r3)
    opword 0xE3E10020
    lfd f31, 0x10(r1)
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A8278
// ----------------------------------------------------------------------------
asm void fn_801A8278() {
    nofralloc
    stwu r1, -0x40(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10020
    lfd f31, 0x0(r3)
    mtfsf 255, f31
    opword 0xE3E10020
    lfd f31, 0x10(r1)
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801A829C
// ----------------------------------------------------------------------------
asm void fn_801A829C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmplwi r4, 0x20
    stw r0, 0x74(r1)
    stmw r26, 0x58(r1)
    lis r26, lbl_8033C378@ha
    mr r29, r3
    mr r30, r5
    li r31, 0x0
    lwzu r27, lbl_8033C378@l(r26)
    stw r27, 0x30(r1)
    lwz r28, 0x4(r26)
    lwz r12, 0x8(r26)
    lwz r11, 0xc(r26)
    lwz r10, 0x10(r26)
    lwz r9, 0x14(r26)
    lwz r8, 0x18(r26)
    lwz r7, 0x1c(r26)
    lwz r6, 0x20(r26)
    lwz r0, 0x24(r26)
    stw r28, 0x34(r1)
    stw r12, 0x38(r1)
    stw r11, 0x3c(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r0, 0x54(r1)
    bge lbl_801A8344
    cmpwi r5, 0x0
    slwi r0, r4, 21
    oris r3, r0, 0xc803
    beq lbl_801A8328
    oris r3, r0, 0xd803
lbl_801A8328:
    stw r3, 0x30(r1)
    mr r3, r29
    mr r5, r30
    addi r4, r1, 0x30
    bl fn_801A8464
    mr r31, r3
    b lbl_801A844C
lbl_801A8344:
    bne lbl_801A8378
    cmpwi r5, 0x0
    beq lbl_801A8358
    bl fn_801A8254
    b lbl_801A835C
lbl_801A8358:
    bl fn_801A8278
lbl_801A835C:
    lwz r4, 0x4(r29)
    li r0, 0x0
    li r3, -0x1
    stw r0, 0x0(r29)
    and r0, r4, r3
    stw r0, 0x4(r29)
    b lbl_801A844C
lbl_801A8378:
    cmplwi r4, 0x21
    bne lbl_801A844C
    cmpwi r5, 0x0
    bne lbl_801A8390
    lwz r0, 0x4(r3)
    stw r0, 0x0(r3)
lbl_801A8390:
    lis r12, lbl_8033C328@ha
    lwzu r11, lbl_8033C328@l(r12)
    cmpwi r5, 0x0
    stw r11, 0x8(r1)
    lwz r10, 0x4(r12)
    lwz r9, 0x8(r12)
    lwz r8, 0xc(r12)
    lwz r7, 0x10(r12)
    lwz r6, 0x14(r12)
    lwz r5, 0x18(r12)
    lwz r4, 0x1c(r12)
    lwz r3, 0x20(r12)
    lwz r0, 0x24(r12)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_801A8404
    lis r3, 0x7c9f
    lis r0, 0x9083
    subi r3, r3, 0x55a
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    b lbl_801A8418
lbl_801A8404:
    lis r3, 0x7c9f
    lis r4, 0x8083
    subi r0, r3, 0x45a
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
lbl_801A8418:
    mr r3, r29
    mr r5, r30
    addi r4, r1, 0x8
    bl fn_801A8464
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_801A844C
    lwz r4, 0x0(r29)
    li r3, -0x1
    li r0, 0x0
    and r3, r4, r3
    stw r3, 0x4(r29)
    stw r0, 0x0(r29)
lbl_801A844C:
    mr r3, r31
    lmw r26, 0x58(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801A8464
// ----------------------------------------------------------------------------
asm void fn_801A8464() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x4e80
    stw r0, 0x14(r1)
    addi r0, r5, 0x20
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    stw r0, 0x24(r4)
    li r4, 0x28
    bl fn_801A39CC
    lis r4, lbl_803D9840@ha
    mr r12, r31
    mr r3, r30
    addi r4, r4, lbl_803D9840@l
    mtctr r12
    bctrl
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// TRKTargetSetInputPendingPtr
// ----------------------------------------------------------------------------
asm void TRKTargetSetInputPendingPtr() {
    nofralloc
    lis r4, gTRKState@ha
    addi r4, r4, gTRKState@l
    stw r3, 0xa0(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A84DC
// ----------------------------------------------------------------------------
asm void fn_801A84DC() {
    nofralloc
    oris r3, r3, 0x8000
    blr
}

// ----------------------------------------------------------------------------
// fn_801A84E4
// ----------------------------------------------------------------------------
asm void fn_801A84E4() {
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r3)
    li r0, 0x0
    lis r5, 0x8000
    stw r0, 0x0(r4)
    lwz r7, 0xdc(r5)
    addis r0, r7, 0x1
    cmplwi r0, 0xffff
    beqlr
    cmpwi r7, 0x0
    beqlr
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    bne lbl_801A8520
    blr
lbl_801A8520:
    li r6, 0x0
    b lbl_801A8564
lbl_801A8528:
    lwz r0, 0xe4(r5)
    cmplw r7, r0
    bne lbl_801A8538
    stw r6, 0x0(r4)
lbl_801A8538:
    lwz r0, 0x2fc(r7)
    addi r6, r6, 0x1
    oris r7, r0, 0x8000
    addis r0, r7, 0x1
    cmplwi r0, 0xffff
    beq lbl_801A856C
    cmpwi r7, 0x0
    beq lbl_801A856C
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    beq lbl_801A856C
lbl_801A8564:
    cmpwi r7, 0x0
    bne lbl_801A8528
lbl_801A856C:
    stw r6, 0x0(r3)
    blr
}

