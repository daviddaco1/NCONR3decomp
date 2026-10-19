#include "types.h"

// Translation unit: src/revolution/vi/i2c.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049CEB0;
extern float lbl_8049DD68;

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void WaitMicroTime();
extern void __OSGetSystemTime();
extern void __VISendI2CData();
extern void __div2i();
extern void _restgpr_22();
extern void _restgpr_25();
extern void _savegpr_22();
extern void _savegpr_25();
extern void sendSlaveAddr();

// ----------------------------------------------------------------------------
// WaitMicroTime
// ----------------------------------------------------------------------------
asm void WaitMicroTime() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl __OSGetSystemTime
    mr r30, r4
    mr r31, r3
lbl_8028493C:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r31, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    srawi r5, r29, 31
    xoris r0, r3, 0x8000
    xoris r5, r5, 0x8000
    subfc r3, r29, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_8028493C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// sendSlaveAddr
// ----------------------------------------------------------------------------
asm void sendSlaveAddr() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, lbl_8049CEB0
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_802849D8
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_802849E8
lbl_802849D8:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_802849E8:
    bl __OSGetSystemTime
    mr r28, r4
    mr r27, r3
    li r26, 0x2
    li r25, 0x0
lbl_802849FC:
    bl __OSGetSystemTime
    subfc r7, r28, r4
    li r6, 0x1e6
    subfe r0, r27, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r26, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_802849FC
    lis r31, 0xcd80
    li r30, 0x0
    lwz r0, 0xc0(r31)
    li r27, 0x2
    li r28, 0x0
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
lbl_80284A58:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_80284A90
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284A7C
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
    b lbl_80284ABC
lbl_80284A7C:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_80284ABC
lbl_80284A90:
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284AB0
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_80284ABC
lbl_80284AB0:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_80284ABC:
    bl __OSGetSystemTime
    mr r26, r4
    mr r25, r3
lbl_80284AC8:
    bl __OSGetSystemTime
    subfc r7, r26, r4
    li r6, 0x1e6
    subfe r0, r25, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284AC8
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r25, r4
    mr r26, r3
lbl_80284B24:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r26, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284B24
    lwz r0, 0xc0(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    clrlslwi r29, r29, 25, 1
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
    blt lbl_80284A58
    lis r3, 0xcd80
    lwz r0, 0xc4(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x4000
    stw r0, 0xc4(r3)
    bl __OSGetSystemTime
    mr r31, r4
    mr r30, r3
    li r29, 0x2
    li r28, 0x0
lbl_80284BA8:
    bl __OSGetSystemTime
    subfc r7, r31, r4
    li r6, 0x1e6
    subfe r0, r30, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r29, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284BA8
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r3)
    bl __OSGetSystemTime
    mr r28, r4
    mr r31, r3
    li r30, 0x2
    li r29, 0x0
lbl_80284C10:
    bl __OSGetSystemTime
    subfc r7, r28, r4
    li r6, 0x1e6
    subfe r0, r31, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r29, 0x8000
    subfc r3, r30, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284C10
    lwz r0, lbl_8049CEB0
    cmplwi r0, 0x1
    bne lbl_80284C74
    lis r3, 0xcd80
    lwz r0, 0xc8(r3)
    extrwi. r0, r0, 1, 16
    beq lbl_80284C74
    li r3, 0x0
    b lbl_80284CCC
lbl_80284C74:
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284C98
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_80284CA8
lbl_80284C98:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_80284CA8:
    lis r4, 0xcd80
    li r3, 0x1
    lwz r0, 0xc4(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r4)
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r4)
lbl_80284CCC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// __VISendI2CData
// ----------------------------------------------------------------------------
asm void __VISendI2CData() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r0, lbl_8049DD68
    mr r29, r3
    mr r26, r4
    mr r27, r5
    cmpwi r0, 0x0
    bne lbl_80284D1C
    li r0, 0x1
    stw r0, lbl_8049CEB0
    stw r0, lbl_8049DD68
lbl_80284D1C:
    bl OSDisableInterrupts
    lis r4, 0xcd80
    mr r28, r3
    lwz r0, 0xc4(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r4)
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r4)
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284D64
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r4)
    b lbl_80284D74
lbl_80284D64:
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r4)
lbl_80284D74:
    bl __OSGetSystemTime
    mr r25, r4
    mr r24, r3
    li r23, 0x2
    li r22, 0x0
lbl_80284D88:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r24, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r22, 0x8000
    subfc r3, r23, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284D88
    bl __OSGetSystemTime
    mr r25, r4
    mr r24, r3
    li r23, 0x2
    li r22, 0x0
lbl_80284DDC:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r24, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r22, 0x8000
    subfc r3, r23, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284DDC
    mr r3, r29
    bl sendSlaveAddr
    cmpwi r3, 0x0
    bne lbl_80284E3C
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80285200
lbl_80284E3C:
    lis r31, 0xcd80
    li r24, 0x2
    lwz r0, 0xc4(r31)
    li r25, 0x0
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r31)
    b lbl_802850BC
lbl_80284E5C:
    lbz r29, 0x0(r26)
    li r30, 0x0
    addi r26, r26, 0x1
lbl_80284E68:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_80284EA0
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284E8C
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
    b lbl_80284ECC
lbl_80284E8C:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_80284ECC
lbl_80284EA0:
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80284EC0
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_80284ECC
lbl_80284EC0:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_80284ECC:
    bl __OSGetSystemTime
    mr r23, r4
    mr r22, r3
lbl_80284ED8:
    bl __OSGetSystemTime
    subfc r7, r23, r4
    li r6, 0x1e6
    subfe r0, r22, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284ED8
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r22, r4
    mr r23, r3
lbl_80284F34:
    bl __OSGetSystemTime
    subfc r7, r22, r4
    li r6, 0x1e6
    subfe r0, r23, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284F34
    lwz r0, 0xc0(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    clrlslwi r29, r29, 25, 1
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
    blt lbl_80284E68
    lwz r0, 0xc4(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x4000
    stw r0, 0xc4(r31)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
lbl_80284FAC:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80284FAC
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
lbl_80285008:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80285008
    lwz r0, lbl_8049CEB0
    cmplwi r0, 0x1
    bne lbl_80285070
    lwz r0, 0xc8(r31)
    extrwi. r0, r0, 1, 16
    beq lbl_80285070
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80285200
lbl_80285070:
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_80285090
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_8028509C
lbl_80285090:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_8028509C:
    lwz r0, 0xc4(r31)
    subi r27, r27, 0x1
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r31)
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
lbl_802850BC:
    cmpwi r27, 0x0
    bne lbl_80284E5C
    lis r3, 0xcd80
    lwz r0, 0xc4(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r3)
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_802850F8
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_80285104
lbl_802850F8:
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_80285104:
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
    li r27, 0x2
    li r26, 0x0
lbl_80285118:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80285118
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r3)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
    li r27, 0x2
    li r26, 0x0
lbl_80285180:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_80285180
    lwz r0, lbl_8049CEB0
    cmpwi r0, 0x0
    bne lbl_802851E0
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
    b lbl_802851F4
lbl_802851E0:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
lbl_802851F4:
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_80285200:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

