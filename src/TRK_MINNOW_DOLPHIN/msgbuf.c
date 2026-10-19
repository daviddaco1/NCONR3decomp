#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/msgbuf.cpp
// Total functions: 15

// Small Data symbols (@sda21)
float lbl_8049D908;

// Global data symbols (@ha/@l)
u8 lbl_80360308[];
u8 lbl_803D7DD8[];

// Forward declarations
void OSReport();
void TRKGetBuffer();
void TRKInitializeMessageBuffers();
void fn_801A3B2C();
void fn_801A3C68();
void fn_801A5454();
void fn_801A5514();
void fn_801A553C();
void fn_801A5564();
void fn_801A5594();
void fn_801A5638();
void fn_801A56C8();
void fn_801A5798();
void fn_801A588C();
void fn_801A58F0();
void fn_801A59E0();
void fn_801A5AC0();
void fn_801A5B58();

// ----------------------------------------------------------------------------
// TRKInitializeMessageBuffers
// ----------------------------------------------------------------------------
asm void TRKInitializeMessageBuffers() {
    nofralloc
    lis r3, lbl_803D7DD8@ha
    li r0, 0x0
    addi r4, r3, lbl_803D7DD8@l
    stw r0, lbl_803D7DD8@l(r3)
    li r3, 0x0
    stw r0, 0x88c(r4)
    stw r0, 0x1118(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5454
// ----------------------------------------------------------------------------
asm void fn_801A5454() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    li r30, 0x300
    li r29, 0x0
    li r31, 0x1
    stw r0, 0x0(r4)
    b lbl_801A54BC
lbl_801A5484:
    mr r3, r29
    bl TRKGetBuffer
    lwz r0, 0x0(r3)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_801A54B8
    li r4, 0x1
    bl fn_801A553C
    stw r31, 0x0(r28)
    li r30, 0x0
    stw r28, 0x0(r27)
    stw r29, 0x0(r26)
    li r29, 0x3
lbl_801A54B8:
    addi r29, r29, 0x1
lbl_801A54BC:
    cmpwi r29, 0x3
    blt lbl_801A5484
    cmpwi r30, 0x300
    bne lbl_801A54D8
    lis r3, lbl_80360308@ha
    addi r3, r3, lbl_80360308@l
    bl OSReport
lbl_801A54D8:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// TRKGetBuffer
// ----------------------------------------------------------------------------
asm void TRKGetBuffer() {
    nofralloc
    cmplwi r3, 0x2
    li r0, 0x0
    bgt lbl_801A550C
    mulli r0, r3, 0x88c
    lis r3, lbl_803D7DD8@ha
    addi r3, r3, lbl_803D7DD8@l
    add r0, r3, r0
lbl_801A550C:
    mr r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5514
// ----------------------------------------------------------------------------
asm void fn_801A5514() {
    nofralloc
    cmpwi r3, -0x1
    beqlr
    cmplwi r3, 0x2
    bgtlr
    mulli r0, r3, 0x88c
    lis r3, lbl_803D7DD8@ha
    li r4, 0x0
    addi r3, r3, lbl_803D7DD8@l
    stwx r4, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801A553C
// ----------------------------------------------------------------------------
asm void fn_801A553C() {
    nofralloc
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bnelr
    li r4, 0x0
    li r5, 0x880
    addi r3, r3, 0xc
    b fn_801A3C68
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5564
// ----------------------------------------------------------------------------
asm void fn_801A5564() {
    nofralloc
    cmplwi r4, 0x880
    li r5, 0x0
    ble lbl_801A5578
    li r5, 0x301
    b lbl_801A558C
lbl_801A5578:
    lwz r0, 0x4(r3)
    stw r4, 0x8(r3)
    cmplw r4, r0
    ble lbl_801A558C
    stw r4, 0x4(r3)
lbl_801A558C:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5594
// ----------------------------------------------------------------------------
asm void fn_801A5594() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_801A55C8
    li r3, 0x0
    b lbl_801A561C
lbl_801A55C8:
    lwz r0, 0x8(r3)
    subfic r6, r0, 0x880
    cmplw r6, r5
    bge lbl_801A55E0
    li r31, 0x301
    mr r30, r6
lbl_801A55E0:
    cmplwi r30, 0x1
    bne lbl_801A55F8
    add r3, r3, r0
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_801A5608
lbl_801A55F8:
    add r3, r3, r0
    mr r5, r30
    addi r3, r3, 0xc
    bl fn_801A3B2C
lbl_801A5608:
    lwz r0, 0x8(r29)
    mr r3, r31
    add r0, r0, r30
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
lbl_801A561C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5638
// ----------------------------------------------------------------------------
asm void fn_801A5638() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_801A566C
    li r3, 0x0
    b lbl_801A56AC
lbl_801A566C:
    lwz r6, 0x8(r3)
    lwz r0, 0x4(r3)
    subf r0, r6, r0
    cmplw r5, r0
    ble lbl_801A5688
    li r31, 0x302
    mr r30, r0
lbl_801A5688:
    add r6, r29, r6
    mr r3, r4
    mr r5, r30
    addi r4, r6, 0xc
    bl fn_801A3B2C
    lwz r0, 0x8(r29)
    mr r3, r31
    add r0, r0, r30
    stw r0, 0x8(r29)
lbl_801A56AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A56C8
// ----------------------------------------------------------------------------
asm void fn_801A56C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8049D908
    stw r4, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_801A56FC
    addi r4, r1, 0x8
    b lbl_801A5720
lbl_801A56FC:
    lbz r7, 0xb(r1)
    addi r4, r1, 0xc
    lbz r6, 0xa(r1)
    lbz r5, 0x9(r1)
    lbz r0, 0x8(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
lbl_801A5720:
    lwz r5, 0x8(r3)
    li r31, 0x4
    li r30, 0x0
    subfic r0, r5, 0x880
    cmplwi r0, 0x4
    bge lbl_801A5740
    li r30, 0x301
    mr r31, r0
lbl_801A5740:
    cmplwi r31, 0x1
    bne lbl_801A5758
    add r3, r3, r5
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_801A5768
lbl_801A5758:
    add r3, r3, r5
    mr r5, r31
    addi r3, r3, 0xc
    bl fn_801A3B2C
lbl_801A5768:
    lwz r0, 0x8(r29)
    mr r3, r30
    add r0, r0, r31
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5798
// ----------------------------------------------------------------------------
asm void fn_801A5798() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, lbl_8049D908
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r6, 0xc(r1)
    beq lbl_801A57D0
    addi r4, r1, 0x8
    b lbl_801A5814
lbl_801A57D0:
    lbz r11, 0xf(r1)
    addi r4, r1, 0x10
    lbz r10, 0xe(r1)
    lbz r9, 0xd(r1)
    lbz r8, 0xc(r1)
    lbz r7, 0xb(r1)
    lbz r6, 0xa(r1)
    lbz r5, 0x9(r1)
    lbz r0, 0x8(r1)
    stb r11, 0x10(r1)
    stb r10, 0x11(r1)
    stb r9, 0x12(r1)
    stb r8, 0x13(r1)
    stb r7, 0x14(r1)
    stb r6, 0x15(r1)
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
lbl_801A5814:
    lwz r5, 0x8(r3)
    li r30, 0x8
    li r29, 0x0
    subfic r0, r5, 0x880
    cmplwi r0, 0x8
    bge lbl_801A5834
    li r29, 0x301
    mr r30, r0
lbl_801A5834:
    cmplwi r30, 0x1
    bne lbl_801A584C
    add r3, r3, r5
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_801A585C
lbl_801A584C:
    add r3, r3, r5
    mr r5, r30
    addi r3, r3, 0xc
    bl fn_801A3B2C
lbl_801A585C:
    lwz r0, 0x8(r31)
    mr r3, r29
    add r0, r0, r30
    stw r0, 0x8(r31)
    stw r0, 0x4(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801A588C
// ----------------------------------------------------------------------------
asm void fn_801A588C() {
    nofralloc
    li r9, 0x0
    li r7, 0x0
    b lbl_801A58D8
lbl_801A5898:
    lwz r7, 0x8(r3)
    lbz r8, 0x0(r4)
    cmplwi r7, 0x880
    blt lbl_801A58B0
    li r7, 0x301
    b lbl_801A58D0
lbl_801A58B0:
    add r6, r3, r7
    addi r0, r7, 0x1
    stb r8, 0xc(r6)
    li r7, 0x0
    lwz r6, 0x4(r3)
    stw r0, 0x8(r3)
    addi r0, r6, 0x1
    stw r0, 0x4(r3)
lbl_801A58D0:
    addi r9, r9, 0x1
    addi r4, r4, 0x1
lbl_801A58D8:
    cmpwi r7, 0x0
    bne lbl_801A58E8
    cmpw r9, r5
    blt lbl_801A5898
lbl_801A58E8:
    mr r3, r7
    blr
}

// ----------------------------------------------------------------------------
// fn_801A58F0
// ----------------------------------------------------------------------------
asm void fn_801A58F0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r29, r3
    mr r27, r4
    mr r30, r5
    li r31, 0x0
    li r26, 0x0
    b lbl_801A59B8
lbl_801A5918:
    lwz r0, lbl_8049D908
    lwz r3, 0x0(r27)
    cmpwi r0, 0x0
    stw r3, 0xc(r1)
    beq lbl_801A5934
    addi r4, r1, 0xc
    b lbl_801A5958
lbl_801A5934:
    lbz r6, 0xf(r1)
    addi r4, r1, 0x8
    lbz r5, 0xe(r1)
    lbz r3, 0xd(r1)
    lbz r0, 0xc(r1)
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
lbl_801A5958:
    lwz r3, 0x8(r29)
    li r28, 0x4
    li r26, 0x0
    subfic r0, r3, 0x880
    cmplwi r0, 0x4
    bge lbl_801A5978
    li r26, 0x301
    mr r28, r0
lbl_801A5978:
    cmplwi r28, 0x1
    bne lbl_801A5990
    add r3, r29, r3
    lbz r0, 0x0(r4)
    stb r0, 0xc(r3)
    b lbl_801A59A0
lbl_801A5990:
    add r3, r29, r3
    mr r5, r28
    addi r3, r3, 0xc
    bl fn_801A3B2C
lbl_801A59A0:
    lwz r0, 0x8(r29)
    addi r27, r27, 0x4
    addi r31, r31, 0x1
    add r0, r0, r28
    stw r0, 0x8(r29)
    stw r0, 0x4(r29)
lbl_801A59B8:
    cmpwi r26, 0x0
    bne lbl_801A59C8
    cmpw r31, r30
    blt lbl_801A5918
lbl_801A59C8:
    mr r3, r26
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801A59E0
// ----------------------------------------------------------------------------
asm void fn_801A59E0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r29, r4
    lwz r0, lbl_8049D908
    cmpwi r0, 0x0
    beq lbl_801A5A0C
    mr r30, r29
    b lbl_801A5A10
lbl_801A5A0C:
    addi r30, r1, 0x8
lbl_801A5A10:
    lwz r4, 0x8(r3)
    li r28, 0x8
    lwz r0, 0x4(r3)
    li r31, 0x0
    subf r0, r4, r0
    cmplwi r0, 0x8
    bge lbl_801A5A34
    li r31, 0x302
    mr r28, r0
lbl_801A5A34:
    add r4, r27, r4
    mr r3, r30
    mr r5, r28
    addi r4, r4, 0xc
    bl fn_801A3B2C
    lwz r0, 0x8(r27)
    add r0, r0, r28
    stw r0, 0x8(r27)
    lwz r0, lbl_8049D908
    cmpwi r0, 0x0
    bne lbl_801A5AA8
    cmpwi r31, 0x0
    bne lbl_801A5AA8
    lbz r0, 0x7(r30)
    stb r0, 0x0(r29)
    lbz r0, 0x6(r30)
    stb r0, 0x1(r29)
    lbz r0, 0x5(r30)
    stb r0, 0x2(r29)
    lbz r0, 0x4(r30)
    stb r0, 0x3(r29)
    lbz r0, 0x3(r30)
    stb r0, 0x4(r29)
    lbz r0, 0x2(r30)
    stb r0, 0x5(r29)
    lbz r0, 0x1(r30)
    stb r0, 0x6(r29)
    lbz r0, 0x0(r30)
    stb r0, 0x7(r29)
lbl_801A5AA8:
    mr r3, r31
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5AC0
// ----------------------------------------------------------------------------
asm void fn_801A5AC0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
    li r30, 0x0
    b lbl_801A5B30
lbl_801A5AE8:
    lwz r3, 0x8(r26)
    li r31, 0x1
    lwz r0, 0x4(r26)
    li r30, 0x0
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_801A5B0C
    li r30, 0x302
    mr r31, r0
lbl_801A5B0C:
    add r4, r26, r3
    mr r5, r31
    add r3, r27, r29
    addi r4, r4, 0xc
    bl fn_801A3B2C
    lwz r0, 0x8(r26)
    addi r29, r29, 0x1
    add r0, r0, r31
    stw r0, 0x8(r26)
lbl_801A5B30:
    cmpwi r30, 0x0
    bne lbl_801A5B40
    cmpw r29, r28
    blt lbl_801A5AE8
lbl_801A5B40:
    mr r3, r30
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A5B58
// ----------------------------------------------------------------------------
asm void fn_801A5B58() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r3
    mr r31, r4
    mr r28, r5
    li r29, 0x0
    li r30, 0x0
    b lbl_801A5C18
lbl_801A5B80:
    lwz r0, lbl_8049D908
    cmpwi r0, 0x0
    beq lbl_801A5B94
    mr r26, r31
    b lbl_801A5B98
lbl_801A5B94:
    addi r26, r1, 0x8
lbl_801A5B98:
    lwz r3, 0x8(r27)
    li r25, 0x4
    lwz r0, 0x4(r27)
    li r30, 0x0
    subf r0, r3, r0
    cmplwi r0, 0x4
    bge lbl_801A5BBC
    li r30, 0x302
    mr r25, r0
lbl_801A5BBC:
    add r4, r27, r3
    mr r3, r26
    mr r5, r25
    addi r4, r4, 0xc
    bl fn_801A3B2C
    lwz r0, 0x8(r27)
    add r0, r0, r25
    stw r0, 0x8(r27)
    lwz r0, lbl_8049D908
    cmpwi r0, 0x0
    bne lbl_801A5C10
    cmpwi r30, 0x0
    bne lbl_801A5C10
    lbz r0, 0x3(r26)
    stb r0, 0x0(r31)
    lbz r0, 0x2(r26)
    stb r0, 0x1(r31)
    lbz r0, 0x1(r26)
    stb r0, 0x2(r31)
    lbz r0, 0x0(r26)
    stb r0, 0x3(r31)
lbl_801A5C10:
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_801A5C18:
    cmpwi r30, 0x0
    bne lbl_801A5C28
    cmpw r29, r28
    blt lbl_801A5B80
lbl_801A5C28:
    mr r3, r30
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

