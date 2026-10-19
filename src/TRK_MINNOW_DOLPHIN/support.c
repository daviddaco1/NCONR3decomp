#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/support.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
u8 lbl_80360298[];

// Forward declarations
void OSReport();
void TRKGetBuffer();
void fn_801A3C68();
void fn_801A48EC();
void fn_801A49E4();
void fn_801A4A34();
void fn_801A4A50();
void fn_801A4C44();
void fn_801A4D6C();
void fn_801A4E84();
void fn_801A4F68();
void fn_801A53D0();
void fn_801A5454();
void fn_801A5514();
void fn_801A5564();
void fn_801A588C();
void fn_801A5AC0();

// ----------------------------------------------------------------------------
// fn_801A4A50
// ----------------------------------------------------------------------------
asm void fn_801A4A50() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x94(r1)
    stmw r19, 0x5c(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    beq lbl_801A4A8C
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_801A4A94
lbl_801A4A8C:
    li r3, 0x2
    b lbl_801A4C30
lbl_801A4A94:
    li r30, 0x0
    stw r30, 0x0(r6)
    li r31, 0x0
    li r23, 0x0
    b lbl_801A4C00
lbl_801A4AA8:
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x40
    bl fn_801A3C68
    lwz r0, 0x0(r26)
    li r21, 0x800
    subf r0, r31, r0
    cmplwi r0, 0x800
    bgt lbl_801A4AD0
    mr r21, r0
lbl_801A4AD0:
    cmpwi r29, 0x0
    li r0, 0xd0
    beq lbl_801A4AE0
    li r0, 0xd1
lbl_801A4AE0:
    cmpwi r29, 0x0
    stb r0, 0x1c(r1)
    li r0, 0x40
    bne lbl_801A4AF4
    addi r0, r21, 0x40
lbl_801A4AF4:
    stw r0, 0x18(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r24, 0x20(r1)
    sth r21, 0x24(r1)
    bl fn_801A5454
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_801A588C
    cmpwi r29, 0x0
    mr r23, r3
    bne lbl_801A4B44
    cmpwi r3, 0x0
    bne lbl_801A4B44
    lwz r3, 0x8(r1)
    mr r5, r21
    add r4, r25, r31
    bl fn_801A588C
    mr r23, r3
lbl_801A4B44:
    cmpwi r23, 0x0
    bne lbl_801A4BF4
    cmpwi r28, 0x0
    beq lbl_801A4BE8
    lwz r3, 0x8(r1)
    addi r4, r1, 0x10
    bl fn_801A4C44
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_801A4B78
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r22, r3
lbl_801A4B78:
    lwz r0, 0x1c(r22)
    cmpwi r29, 0x0
    lhz r19, 0x20(r22)
    clrlwi r20, r0, 24
    beq lbl_801A4BC8
    cmpwi r23, 0x0
    bne lbl_801A4BC8
    cmplw r19, r21
    bgt lbl_801A4BC8
    mr r3, r22
    li r4, 0x40
    bl fn_801A5564
    mr r3, r22
    mr r5, r19
    add r4, r25, r31
    bl fn_801A5AC0
    cmpwi r3, 0x302
    mr r23, r3
    bne lbl_801A4BC8
    li r23, 0x0
lbl_801A4BC8:
    cmplw r19, r21
    beq lbl_801A4BD8
    mr r21, r19
    li r30, 0x1
lbl_801A4BD8:
    stw r20, 0x0(r27)
    lwz r3, 0x10(r1)
    bl fn_801A5514
    b lbl_801A4BF4
lbl_801A4BE8:
    lwz r3, 0x8(r1)
    bl fn_801A53D0
    mr r23, r3
lbl_801A4BF4:
    lwz r3, 0xc(r1)
    bl fn_801A5514
    add r31, r31, r21
lbl_801A4C00:
    cmpwi r30, 0x0
    bne lbl_801A4C28
    lwz r0, 0x0(r26)
    cmplw r31, r0
    bge lbl_801A4C28
    cmpwi r23, 0x0
    bne lbl_801A4C28
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_801A4AA8
lbl_801A4C28:
    stw r31, 0x0(r26)
    mr r3, r23
lbl_801A4C30:
    lmw r19, 0x5c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4C44
// ----------------------------------------------------------------------------
asm void fn_801A4C44() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r4
    bl fn_801A53D0
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A4D30
    li r27, 0x0
    li r31, -0x1
lbl_801A4C70:
    bl fn_801A48EC
    cmpwi r3, -0x1
    stw r3, 0x0(r26)
    beq lbl_801A4C70
    bl TRKGetBuffer
    mr r29, r3
    li r4, 0x0
    bl fn_801A5564
    lbz r28, 0x10(r29)
    cmplwi r28, 0x80
    bge lbl_801A4CAC
    lwz r3, 0x0(r26)
    bl fn_801A49E4
    stw r31, 0x0(r26)
    b lbl_801A4C70
lbl_801A4CAC:
    lwz r0, 0x0(r26)
    cmpwi r0, -0x1
    beq lbl_801A4D30
    lwz r4, 0x4(r29)
    cmplwi r4, 0x40
    bge lbl_801A4CD8
    lis r3, lbl_80360298@ha
    addi r3, r3, lbl_80360298@l
    opword 0x4CC63182
    bl OSReport
    li r27, 0x1
lbl_801A4CD8:
    cmpwi r30, 0x0
    bne lbl_801A4CEC
    cmpwi r27, 0x0
    bne lbl_801A4CEC
    lbz r31, 0x14(r29)
lbl_801A4CEC:
    cmpwi r30, 0x0
    bne lbl_801A4D10
    cmpwi r27, 0x0
    bne lbl_801A4D10
    cmpwi r28, 0x80
    bne lbl_801A4D0C
    cmpwi r31, 0x0
    beq lbl_801A4D10
lbl_801A4D0C:
    li r27, 0x1
lbl_801A4D10:
    cmpwi r30, 0x0
    bne lbl_801A4D20
    cmpwi r27, 0x0
    beq lbl_801A4D30
lbl_801A4D20:
    lwz r3, 0x0(r26)
    bl fn_801A5514
    li r0, -0x1
    stw r0, 0x0(r26)
lbl_801A4D30:
    lwz r0, 0x0(r26)
    cmpwi r0, -0x1
    bne lbl_801A4D54
    lis r3, lbl_80360298@ha
    addi r3, r3, lbl_80360298@l
    addi r3, r3, 0x1f
    opword 0x4CC63182
    bl OSReport
    li r30, 0x800
lbl_801A4D54:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4D6C
// ----------------------------------------------------------------------------
asm void fn_801A4D6C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r27, 0x5c(r1)
    mr r27, r3
    mr r30, r4
    mr r28, r5
    mr r29, r6
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x40
    bl fn_801A3C68
    li r0, 0x0
    stw r0, 0x0(r28)
    li r0, 0xd2
    mr r3, r27
    stb r0, 0x1c(r1)
    bl fn_801A4A34
    addi r0, r3, 0x41
    stw r0, 0x18(r1)
    mr r3, r27
    stb r30, 0x20(r1)
    bl fn_801A4A34
    addi r0, r3, 0x1
    sth r0, 0x24(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801A5454
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_801A588C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A4E18
    mr r3, r27
    bl fn_801A4A34
    mr r5, r3
    lwz r3, 0x8(r1)
    mr r4, r27
    addi r5, r5, 0x1
    bl fn_801A588C
    mr r31, r3
lbl_801A4E18:
    cmpwi r31, 0x0
    bne lbl_801A4E64
    li r0, 0x0
    stw r0, 0x0(r29)
    addi r4, r1, 0x10
    lwz r3, 0x8(r1)
    bl fn_801A4C44
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A4E4C
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r30, r3
lbl_801A4E4C:
    lwz r0, 0x1c(r30)
    stw r0, 0x0(r29)
    lwz r0, 0x14(r30)
    stw r0, 0x0(r28)
    lwz r3, 0x10(r1)
    bl fn_801A5514
lbl_801A4E64:
    lwz r3, 0xc(r1)
    bl fn_801A5514
    mr r3, r31
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4E84
// ----------------------------------------------------------------------------
asm void fn_801A4E84() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r5, 0x40
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r29, 0x64(r1)
    mr r29, r4
    li r4, 0x0
    bl fn_801A3C68
    li r3, 0xd3
    li r0, 0x40
    stb r3, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x18(r1)
    stw r30, 0x20(r1)
    bl fn_801A5454
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A4EF4
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_801A588C
    mr r31, r3
lbl_801A4EF4:
    cmpwi r31, 0x0
    bne lbl_801A4F40
    li r0, 0x0
    stw r0, 0x0(r29)
    addi r4, r1, 0x10
    lwz r3, 0x8(r1)
    bl fn_801A4C44
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A4F28
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    mr r30, r3
lbl_801A4F28:
    cmpwi r31, 0x0
    bne lbl_801A4F38
    lwz r0, 0x1c(r30)
    stw r0, 0x0(r29)
lbl_801A4F38:
    lwz r3, 0x10(r1)
    bl fn_801A5514
lbl_801A4F40:
    lwz r3, 0xc(r1)
    bl fn_801A5514
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4F68
// ----------------------------------------------------------------------------
asm void fn_801A4F68() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r5
    li r5, 0x40
    stw r30, 0x68(r1)
    mr r30, r6
    stw r29, 0x64(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x60(r1)
    mr r28, r3
    addi r3, r1, 0x18
    bl fn_801A3C68
    li r3, 0xd4
    li r0, 0x40
    stb r3, 0x1c(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x18(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x0(r29)
    stw r0, 0x24(r1)
    stb r31, 0x28(r1)
    bl fn_801A5454
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A4FF0
    lwz r3, 0x8(r1)
    addi r4, r1, 0x18
    li r5, 0x40
    bl fn_801A588C
    mr r31, r3
lbl_801A4FF0:
    cmpwi r31, 0x0
    bne lbl_801A5048
    li r0, 0x0
    stw r0, 0x0(r30)
    li r0, -0x1
    addi r4, r1, 0x10
    stw r0, 0x0(r29)
    lwz r3, 0x8(r1)
    bl fn_801A4C44
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A5040
    lwz r3, 0x10(r1)
    bl TRKGetBuffer
    cmpwi r3, 0x0
    beq lbl_801A5040
    lwz r0, 0x1c(r3)
    stw r0, 0x0(r30)
    lwz r0, 0x24(r3)
    stw r0, 0x0(r29)
lbl_801A5040:
    lwz r3, 0x10(r1)
    bl fn_801A5514
lbl_801A5048:
    lwz r3, 0xc(r1)
    bl fn_801A5514
    mr r3, r31
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

