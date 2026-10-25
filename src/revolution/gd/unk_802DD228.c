#include "types.h"

// Translation unit: src/revolution/gd/unk_802DD228.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049E180;

// Global data symbols (@ha/@l)
extern u8 jumptable_8037A808[];
extern u8 jumptable_8037A870[];

// Forward declarations
extern void GDOverflowed();
extern void _restgpr_14();
extern void _restgpr_15();
extern void _savegpr_14();
extern void _savegpr_15();
extern void fn_802DD228();
extern void fn_802DD804();
extern void fn_802DDE28();
extern void fn_802DE02C();

// ----------------------------------------------------------------------------
// fn_802DD228
// ----------------------------------------------------------------------------
asm void fn_802DD228() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_15
    li r31, 0x0
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x1
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    li r21, 0x0
    li r20, 0x0
    li r19, 0x0
    li r18, 0x0
    li r17, 0x0
    li r16, 0x0
    li r15, 0x0
    lis r4, jumptable_8037A808@ha
    b lbl_802DD470
lbl_802DD288:
    cmplwi r0, 0x19
    bgt lbl_802DD46C
    addi r5, r4, jumptable_8037A808@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r28, 0x4(r3)
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    clrrwi r5, r27, 1
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 31, 29
    slwi r0, r0, 1
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 30, 28
    slwi r0, r0, 2
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 29, 27
    slwi r0, r0, 3
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 28, 26
    slwi r0, r0, 4
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 27, 25
    slwi r0, r0, 5
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 26, 24
    slwi r0, r0, 6
    or r27, r5, r0
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    rlwinm r5, r27, 0, 25, 23
    slwi r0, r0, 7
    or r27, r5, r0
    b lbl_802DD46C
    lwz r26, 0x4(r3)
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_802DD46C
    mr r25, r0
    li r31, 0x1
    b lbl_802DD46C
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_802DD46C
    mr r25, r0
    li r31, 0x2
    b lbl_802DD46C
    lwz r24, 0x4(r3)
    neg r0, r24
    or r0, r0, r24
    srwi r0, r0, 31
    add r30, r30, r0
    b lbl_802DD46C
    lwz r23, 0x4(r3)
    neg r0, r23
    or r0, r0, r23
    srwi r0, r0, 31
    add r30, r30, r0
    b lbl_802DD46C
    lwz r22, 0x4(r3)
    neg r0, r22
    or r0, r0, r22
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r21, 0x4(r3)
    neg r0, r21
    or r0, r0, r21
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r20, 0x4(r3)
    neg r0, r20
    or r0, r0, r20
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r19, 0x4(r3)
    neg r0, r19
    or r0, r0, r19
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r18, 0x4(r3)
    neg r0, r18
    or r0, r0, r18
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r17, 0x4(r3)
    neg r0, r17
    or r0, r0, r17
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r16, 0x4(r3)
    neg r0, r16
    or r0, r0, r16
    srwi r0, r0, 31
    add r29, r29, r0
    b lbl_802DD46C
    lwz r15, 0x4(r3)
    neg r0, r15
    or r0, r0, r15
    srwi r0, r0, 31
    add r29, r29, r0
lbl_802DD46C:
    addi r3, r3, 0x8
lbl_802DD470:
    lwz r0, 0x0(r3)
    cmpwi r0, 0xff
    bne lbl_802DD288
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DD498
    bl GDOverflowed
lbl_802DD498:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DD4CC
    bl GDOverflowed
lbl_802DD4CC:
    lwz r4, lbl_8049E180
    li r0, 0x50
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DD500
    bl GDOverflowed
lbl_802DD500:
    slwi r0, r26, 9
    slwi r5, r24, 13
    slwi r4, r25, 11
    lwz r6, lbl_8049E180
    or r3, r0, r28
    slwi r0, r27, 1
    or r5, r5, r4
    slwi r7, r23, 15
    or r0, r3, r0
    lwz r4, 0x8(r6)
    or r0, r5, r0
    or r7, r7, r0
    addi r3, r4, 0x1
    srwi r0, r7, 24
    stb r0, 0x0(r4)
    extrwi r5, r7, 8, 8
    extrwi r0, r7, 8, 16
    stw r3, 0x8(r6)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r7, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DD5A0
    bl GDOverflowed
lbl_802DD5A0:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DD5D4
    bl GDOverflowed
lbl_802DD5D4:
    lwz r4, lbl_8049E180
    li r0, 0x60
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DD608
    bl GDOverflowed
lbl_802DD608:
    slwi r0, r20, 4
    lwz r6, lbl_8049E180
    or r3, r0, r22
    slwi r9, r16, 12
    slwi r8, r17, 10
    slwi r0, r21, 2
    slwi r7, r18, 8
    slwi r5, r19, 6
    slwi r10, r15, 14
    or r8, r9, r8
    or r5, r7, r5
    or r0, r3, r0
    lwz r4, 0x8(r6)
    or r7, r10, r8
    or r0, r5, r0
    or r7, r7, r0
    addi r3, r4, 0x1
    srwi r0, r7, 24
    stb r0, 0x0(r4)
    extrwi r5, r7, 8, 8
    extrwi r0, r7, 8, 16
    stw r3, 0x8(r6)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r7, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DD6B8
    bl GDOverflowed
lbl_802DD6B8:
    lwz r4, lbl_8049E180
    li r0, 0x10
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x2
    cmplw r3, r0
    ble lbl_802DD6EC
    bl GDOverflowed
lbl_802DD6EC:
    lwz r4, lbl_8049E180
    li r5, 0x0
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x2
    cmplw r3, r0
    ble lbl_802DD734
    bl GDOverflowed
lbl_802DD734:
    lwz r4, lbl_8049E180
    li r5, 0x10
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DD780
    bl GDOverflowed
lbl_802DD780:
    slwi r0, r29, 4
    lwz r4, lbl_8049E180
    or r3, r0, r30
    addi r11, r1, 0x50
    slwi r0, r31, 2
    or r6, r3, r0
    lwz r3, 0x8(r4)
    srwi r0, r6, 24
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    extrwi r5, r6, 8, 8
    extrwi r0, r6, 8, 16
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r6, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    bl _restgpr_15
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_802DD804
// ----------------------------------------------------------------------------
asm void fn_802DD804() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    li r0, 0x1
    stw r3, 0x8(r1)
    li r31, 0x0
    li r30, 0x0
    stw r0, 0x48(r1)
    li r0, 0x4
    li r14, 0x0
    li r29, 0x1
    stw r0, 0x44(r1)
    li r0, 0x0
    li r28, 0x4
    li r27, 0x0
    stw r0, 0x40(r1)
    li r0, 0x4
    li r26, 0x1
    li r25, 0x4
    stw r0, 0x3c(r1)
    li r0, 0x1
    li r24, 0x0
    li r23, 0x1
    stw r0, 0x38(r1)
    li r0, 0x5
    li r22, 0x4
    li r21, 0x0
    stw r0, 0x34(r1)
    li r0, 0x1
    li r20, 0x1
    li r19, 0x4
    stw r0, 0x30(r1)
    li r0, 0x5
    li r18, 0x0
    li r17, 0x1
    stw r0, 0x2c(r1)
    li r0, 0x1
    li r16, 0x4
    li r15, 0x0
    stw r0, 0x28(r1)
    li r0, 0x4
    lis r3, jumptable_8037A870@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r0, 0x20(r1)
    li r0, 0x1
    stw r0, 0x1c(r1)
    li r0, 0x4
    stw r0, 0x18(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r0, 0x10(r1)
    li r0, 0x4
    stw r0, 0xc(r1)
    b lbl_802DDA18
lbl_802DD8EC:
    subi r0, r5, 0x9
    cmplwi r0, 0x10
    bgt lbl_802DDA14
    addi r5, r3, jumptable_8037A870@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r0, 0x4(r4)
    stw r0, 0x48(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x44(r1)
    lbz r0, 0xc(r4)
    stw r0, 0x40(r1)
    b lbl_802DDA14
    lwz r31, 0x4(r4)
    lwz r0, 0x8(r4)
    cmpwi r31, 0x2
    stw r0, 0x3c(r1)
    bne lbl_802DD948
    li r31, 0x1
    li r30, 0x1
    b lbl_802DDA14
lbl_802DD948:
    li r30, 0x0
    b lbl_802DDA14
    lwz r0, 0x4(r4)
    stw r0, 0x38(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x34(r1)
    b lbl_802DDA14
    lwz r0, 0x4(r4)
    stw r0, 0x30(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x2c(r1)
    b lbl_802DDA14
    lwz r0, 0x4(r4)
    stw r0, 0x28(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x24(r1)
    lbz r0, 0xc(r4)
    stw r0, 0x20(r1)
    b lbl_802DDA14
    lwz r0, 0x4(r4)
    stw r0, 0x1c(r1)
    lwz r0, 0x8(r4)
    stw r0, 0x18(r1)
    lbz r0, 0xc(r4)
    stw r0, 0x14(r1)
    b lbl_802DDA14
    lwz r0, 0x4(r4)
    lbz r14, 0xc(r4)
    stw r0, 0x10(r1)
    lwz r0, 0x8(r4)
    stw r0, 0xc(r1)
    b lbl_802DDA14
    lwz r29, 0x4(r4)
    lwz r28, 0x8(r4)
    lbz r27, 0xc(r4)
    b lbl_802DDA14
    lwz r26, 0x4(r4)
    lwz r25, 0x8(r4)
    lbz r24, 0xc(r4)
    b lbl_802DDA14
    lwz r23, 0x4(r4)
    lwz r22, 0x8(r4)
    lbz r21, 0xc(r4)
    b lbl_802DDA14
    lwz r20, 0x4(r4)
    lwz r19, 0x8(r4)
    lbz r18, 0xc(r4)
    b lbl_802DDA14
    lwz r17, 0x4(r4)
    lwz r16, 0x8(r4)
    lbz r15, 0xc(r4)
lbl_802DDA14:
    addi r4, r4, 0x10
lbl_802DDA18:
    lwz r5, 0x0(r4)
    cmpwi r5, 0xff
    bne lbl_802DD8EC
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDA40
    bl GDOverflowed
lbl_802DDA40:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDA74
    bl GDOverflowed
lbl_802DDA74:
    lwz r3, 0x8(r1)
    lwz r4, lbl_8049E180
    addi r0, r3, 0x70
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DDAAC
    bl GDOverflowed
lbl_802DDAAC:
    lwz r0, 0x40(r1)
    slwi r8, r31, 9
    slwi r6, r0, 4
    lwz r0, 0x34(r1)
    slwi r5, r0, 14
    lwz r0, 0x38(r1)
    slwi r3, r0, 13
    lwz r0, 0x30(r1)
    or r3, r5, r3
    lwz r5, 0x48(r1)
    slwi r4, r0, 17
    lwz r0, 0x3c(r1)
    or r7, r6, r5
    lwz r5, 0x44(r1)
    slwi r0, r0, 10
    or r9, r4, r3
    slwi r6, r5, 1
    lwz r5, 0x2c(r1)
    or r4, r0, r8
    lwz r0, 0x28(r1)
    or r3, r7, r6
    slwi r5, r5, 18
    slwi r6, r0, 21
    lwz r0, 0x24(r1)
    or r5, r5, r9
    or r3, r4, r3
    slwi r8, r0, 22
    lwz r7, lbl_8049E180
    or r0, r5, r3
    slwi r5, r30, 31
    or r3, r6, r0
    lwz r0, 0x20(r1)
    or r3, r8, r3
    lwz r4, 0x8(r7)
    slwi r0, r0, 25
    or r0, r0, r3
    addi r3, r4, 0x1
    oris r0, r0, 0x4000
    or r0, r5, r0
    srwi r5, r0, 24
    stb r5, 0x0(r4)
    extrwi r6, r0, 8, 8
    extrwi r5, r0, 8, 16
    stw r3, 0x8(r7)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r6, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDBB4
    bl GDOverflowed
lbl_802DDBB4:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDBE8
    bl GDOverflowed
lbl_802DDBE8:
    lwz r3, 0x8(r1)
    lwz r4, lbl_8049E180
    addi r0, r3, 0x80
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DDC20
    bl GDOverflowed
lbl_802DDC20:
    lwz r0, 0x14(r1)
    slwi r4, r29, 18
    slwi r7, r28, 19
    slwi r8, r27, 22
    slwi r3, r0, 4
    slwi r0, r14, 13
    or r6, r4, r0
    lwz r0, 0xc(r1)
    or r7, r7, r6
    lwz r6, lbl_8049E180
    slwi r5, r0, 10
    lwz r0, 0x10(r1)
    slwi r4, r0, 9
    lwz r0, 0x1c(r1)
    or r5, r5, r4
    lwz r4, 0x8(r6)
    or r3, r3, r0
    lwz r0, 0x18(r1)
    slwi r0, r0, 1
    or r0, r3, r0
    or r3, r8, r7
    or r0, r5, r0
    slwi r5, r26, 27
    or r0, r3, r0
    slwi r7, r25, 28
    or r0, r5, r0
    addi r3, r4, 0x1
    or r0, r7, r0
    oris r7, r0, 0x8000
    srwi r0, r7, 24
    stb r0, 0x0(r4)
    extrwi r5, r7, 8, 8
    extrwi r0, r7, 8, 16
    stw r3, 0x8(r6)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r7, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDD00
    bl GDOverflowed
lbl_802DDD00:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDD34
    bl GDOverflowed
lbl_802DDD34:
    lwz r3, 0x8(r1)
    lwz r4, lbl_8049E180
    addi r0, r3, 0x90
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DDD6C
    bl GDOverflowed
lbl_802DDD6C:
    slwi r0, r22, 6
    slwi r4, r18, 18
    slwi r3, r19, 15
    slwi r9, r17, 23
    or r8, r4, r3
    slwi r7, r20, 14
    slwi r5, r21, 9
    or r3, r0, r24
    slwi r0, r23, 5
    or r8, r9, r8
    lwz r6, lbl_8049E180
    slwi r10, r16, 24
    or r5, r7, r5
    or r0, r3, r0
    lwz r4, 0x8(r6)
    or r7, r10, r8
    or r0, r5, r0
    slwi r9, r15, 27
    or r0, r7, r0
    addi r3, r4, 0x1
    or r7, r9, r0
    addi r11, r1, 0xa0
    srwi r0, r7, 24
    stb r0, 0x0(r4)
    extrwi r5, r7, 8, 8
    extrwi r0, r7, 8, 16
    stw r3, 0x8(r6)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r7, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_802DDE28
// ----------------------------------------------------------------------------
asm void fn_802DDE28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x19
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x1
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_802DDE58
    subi r31, r3, 0x9
lbl_802DDE58:
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDE74
    bl GDOverflowed
lbl_802DDE74:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDEA8
    bl GDOverflowed
lbl_802DDEA8:
    lwz r4, lbl_8049E180
    addi r0, r31, 0xa0
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DDEDC
    bl GDOverflowed
lbl_802DDEDC:
    lwz r4, lbl_8049E180
    srwi r6, r29, 24
    extrwi r5, r29, 8, 8
    extrwi r0, r29, 8, 16
    lwz r3, 0x8(r4)
    stb r6, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r29, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDF54
    bl GDOverflowed
lbl_802DDF54:
    lwz r4, lbl_8049E180
    li r0, 0x8
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x1
    cmplw r3, r0
    ble lbl_802DDF88
    bl GDOverflowed
lbl_802DDF88:
    lwz r4, lbl_8049E180
    addi r0, r31, 0xb0
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DDFBC
    bl GDOverflowed
lbl_802DDFBC:
    lwz r4, lbl_8049E180
    li r5, 0x0
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r30, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802DE02C
// ----------------------------------------------------------------------------
asm void fn_802DE02C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    lwz r0, 0xc(r4)
    addi r3, r3, 0x4
    cmplw r3, r0
    ble lbl_802DE05C
    bl GDOverflowed
lbl_802DE05C:
    lwz r4, lbl_8049E180
    addis r7, r31, 0x8000
    srwi r6, r7, 24
    lwz r3, 0x8(r4)
    extrwi r5, r7, 8, 8
    extrwi r0, r7, 8, 16
    stb r6, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r3, r3, 0x1
    stw r3, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r0, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r7, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

