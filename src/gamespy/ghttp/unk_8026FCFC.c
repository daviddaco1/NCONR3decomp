#include "types.h"

// Translation unit: src/gamespy/ghttp/unk_8026FCFC.cpp
// Total functions: 6

// Global data symbols (@ha/@l)
extern u8 ghiIsPostAutoFree[];
extern u8 ghiPostSetAutoFree[];
extern u8 lbl_8036AF10[];

// Forward declarations
extern void fn_80256C4C();
extern void fn_80256C70();
extern void fn_8026FCFC();
extern void fn_8026FE28();
extern void fn_8026FF08();
extern void fn_8026FF78();
extern void fn_80270018();
extern void fn_80270098();
extern void fn_803377F8();
extern void fn_80337950();
extern void fn_80337A18();
extern void fn_80337AC4();
extern void fn_80337D94();
extern void fn_80338054();
extern void fn_803383B4();
extern void fn_8033847C();
extern void ghiRequestToConnection();
extern void memset();
extern void strncmp();

// ----------------------------------------------------------------------------
// fn_8026FCFC
// ----------------------------------------------------------------------------
asm void fn_8026FCFC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8026FD2C
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD2C:
    cmpwi r30, 0x4
    bne lbl_8026FD38
    li r30, 0x3
lbl_8026FD38:
    lwz r0, 0x194(r3)
    cmpw cr1, r0, r30
    bne cr1, lbl_8026FD4C
    li r3, 0x1
    b lbl_8026FE10
lbl_8026FD4C:
    lwz r0, 0x190(r3)
    cmpwi r0, 0x0
    beq lbl_8026FD64
    beq cr1, lbl_8026FD64
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD64:
    cmpwi r30, 0x0
    bne lbl_8026FD90
    lis r4, lbl_8036AF10@ha
    lwz r3, 0x14(r3)
    addi r4, r4, lbl_8036AF10@l
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8026FD90
    li r3, 0x0
    b lbl_8026FE10
lbl_8026FD90:
    cmpwi r30, 0x0
    stw r30, 0x194(r31)
    bne lbl_8026FDAC
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x190(r31)
    b lbl_8026FE10
lbl_8026FDAC:
    li r7, 0x0
    lis r4, fn_8026FE28@ha
    stw r7, 0x190(r31)
    addi r4, r4, fn_8026FE28@l
    lis r6, fn_8026FF78@ha
    lis r3, fn_8026FF08@ha
    stw r4, 0x1b0(r31)
    addi r6, r6, fn_8026FF78@l
    lis r5, ghiPostSetAutoFree@ha
    lis r4, ghiIsPostAutoFree@ha
    stw r6, 0x1b8(r31)
    addi r3, r3, fn_8026FF08@l
    addi r5, r5, ghiPostSetAutoFree@l
    addi r4, r4, ghiIsPostAutoFree@l
    stw r3, 0x1b4(r31)
    li r0, 0x1
    li r3, 0x1
    stw r5, 0x1bc(r31)
    stw r4, 0x1c0(r31)
    stw r7, 0x198(r31)
    stw r7, 0x19c(r31)
    stw r7, 0x1a0(r31)
    stw r0, 0x1a4(r31)
    stw r7, 0x1a8(r31)
    stw r7, 0x1ac(r31)
lbl_8026FE10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8026FE28
// ----------------------------------------------------------------------------
asm void fn_8026FE28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x10
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_8026FE64
    li r3, 0x3
    b lbl_8026FEEC
lbl_8026FE64:
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r31, 0x0(r30)
    li r3, 0xb
    lwz r4, 0x18(r29)
    bl fn_803377F8
    stw r3, 0x0(r31)
    li r4, 0x1
    bl fn_803383B4
    cmpwi r3, 0x0
    beq lbl_8026FEA4
    lwz r3, 0x0(r31)
    bl fn_80338054
    li r3, 0x3
    b lbl_8026FEEC
lbl_8026FEA4:
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_8033847C
    cmpwi r3, 0x0
    beq lbl_8026FEC8
    lwz r3, 0x0(r31)
    bl fn_80338054
    li r3, 0x3
    b lbl_8026FEEC
lbl_8026FEC8:
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x8(r30)
    li r3, 0x1
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
    stw r0, 0x14(r30)
    stw r4, 0x18(r30)
    stw r4, 0x1c(r30)
lbl_8026FEEC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026FF08
// ----------------------------------------------------------------------------
asm void fn_8026FF08() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_8026FF5C
    lwz r31, 0x0(r4)
    cmpwi r31, 0x0
    beq lbl_8026FF4C
    lwz r3, 0x0(r31)
    bl fn_80338054
    mr r3, r31
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_8026FF4C:
    li r0, 0x0
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
lbl_8026FF5C:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8026FF78
// ----------------------------------------------------------------------------
asm void fn_8026FF78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, 0x0(r4)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_8026FFC8
    lwz r3, 0x0(r31)
    lwz r4, 0x4c(r5)
    bl fn_80337950
    cmpwi r3, 0x0
    beq lbl_8026FFC0
    li r3, 0x3
    b lbl_80270000
lbl_8026FFC0:
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8026FFC8:
    lwz r3, 0x0(r31)
    bl fn_80337A18
    cmpwi r3, 0x0
    beq lbl_8026FFF0
    addi r0, r3, 0x3
    li r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_80270000
    li r3, 0x1
    b lbl_80270000
lbl_8026FFF0:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0xc(r30)
    stw r0, 0x10(r30)
lbl_80270000:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80270018
// ----------------------------------------------------------------------------
asm void fn_80270018() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    stw r31, 0xc(r1)
    mr r31, r7
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
    bl fn_80337D94
    cmpwi r3, -0x6
    bne lbl_80270058
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_80270080
lbl_80270058:
    cmpwi r3, -0x3
    bne lbl_8027006C
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_80270080
lbl_8027006C:
    cmpwi r3, 0x0
    bge lbl_8027007C
    li r3, 0x3
    b lbl_80270084
lbl_8027007C:
    stw r3, 0x0(r31)
lbl_80270080:
    li r3, 0x1
lbl_80270084:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80270098
// ----------------------------------------------------------------------------
asm void fn_80270098() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    lwz r3, 0x0(r3)
    lwz r5, 0x0(r6)
    lwz r3, 0x0(r3)
    bl fn_80337AC4
    cmpwi r3, -0x6
    bne lbl_802700D8
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_80270100
lbl_802700D8:
    cmpwi r3, -0x2
    bne lbl_802700EC
    li r0, -0x1
    stw r0, 0x0(r31)
    b lbl_80270100
lbl_802700EC:
    cmpwi r3, 0x0
    bge lbl_802700FC
    li r3, 0x3
    b lbl_80270104
lbl_802700FC:
    stw r3, 0x0(r31)
lbl_80270100:
    li r3, 0x1
lbl_80270104:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

