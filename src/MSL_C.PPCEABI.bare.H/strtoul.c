#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/strtoul.cpp
// Total functions: 5

// Small Data symbols (@sda21)
float lbl_8049D8C8;

// Global data symbols (@ha/@l)
u8 lbl_8035FBD8[];

// Forward declarations
void __div2u();
void __StringRead();
void __strtoul();
void __strtoull();
void strtoul();
void fn_8019ED1C();
void atoi();

// ----------------------------------------------------------------------------
// __strtoul
// ----------------------------------------------------------------------------
asm void __strtoul() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stmw r17, 0x14(r1)
    li r27, 0x0
    mr r17, r3
    mr r18, r4
    mr r19, r5
    mr r20, r6
    mr r21, r7
    mr r22, r8
    mr r23, r9
    li r28, 0x1
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    stw r27, 0x0(r9)
    stw r27, 0x0(r8)
    blt lbl_8019E420
    cmpwi r3, 0x1
    beq lbl_8019E420
    cmpwi r3, 0x24
    bgt lbl_8019E420
    cmpwi r4, 0x1
    bge lbl_8019E428
lbl_8019E420:
    li r28, 0x40
    b lbl_8019E448
lbl_8019E428:
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    li r27, 0x1
    bctrl
    mr r4, r3
lbl_8019E448:
    cmpwi r17, 0x0
    beq lbl_8019E458
    li r0, -0x1
    divwu r24, r0, r17
lbl_8019E458:
    lis r3, lbl_8035FBD8@ha
    li r30, 0x1
    li r31, -0x1
    addi r29, r3, lbl_8035FBD8@l
    b lbl_8019E768
lbl_8019E46C:
    cmpwi r28, 0x1
    beq lbl_8019E498
    cmpwi r28, 0x2
    beq lbl_8019E558
    cmpwi r28, 0x4
    beq lbl_8019E5A0
    cmpwi r28, 0x8
    beq lbl_8019E5F0
    cmpwi r28, 0x10
    beq lbl_8019E5F0
    b lbl_8019E768
lbl_8019E498:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019E4A8
    li r0, 0x0
lbl_8019E4A8:
    cmpwi r0, 0x0
    beq lbl_8019E4B8
    li r0, 0x0
    b lbl_8019E4CC
lbl_8019E4B8:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019E4CC:
    cmpwi r0, 0x0
    beq lbl_8019E4F8
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r4, r3
    addi r26, r26, 0x1
    b lbl_8019E768
lbl_8019E4F8:
    cmpwi r4, 0x2b
    bne lbl_8019E524
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_8019E550
lbl_8019E524:
    cmpwi r4, 0x2d
    bne lbl_8019E550
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    stw r30, 0x0(r22)
lbl_8019E550:
    li r28, 0x2
    b lbl_8019E768
lbl_8019E558:
    cmpwi r17, 0x0
    beq lbl_8019E568
    cmpwi r17, 0x10
    bne lbl_8019E598
lbl_8019E568:
    cmpwi r4, 0x30
    bne lbl_8019E598
    mr r12, r19
    mr r3, r20
    li r28, 0x4
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_8019E768
lbl_8019E598:
    li r28, 0x8
    b lbl_8019E768
lbl_8019E5A0:
    cmpwi r4, 0x58
    beq lbl_8019E5B0
    cmpwi r4, 0x78
    bne lbl_8019E5DC
lbl_8019E5B0:
    mr r12, r19
    mr r3, r20
    li r17, 0x10
    li r28, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_8019E768
lbl_8019E5DC:
    cmpwi r17, 0x0
    bne lbl_8019E5E8
    li r17, 0x8
lbl_8019E5E8:
    li r28, 0x10
    b lbl_8019E768
lbl_8019E5F0:
    cmpwi r17, 0x0
    bne lbl_8019E5FC
    li r17, 0xa
lbl_8019E5FC:
    cmpwi r24, 0x0
    bne lbl_8019E608
    divwu r24, r31, r17
lbl_8019E608:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019E618
    li r0, 0x0
lbl_8019E618:
    cmpwi r0, 0x0
    beq lbl_8019E628
    li r0, 0x0
    b lbl_8019E63C
lbl_8019E628:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019E63C:
    cmpwi r0, 0x0
    beq lbl_8019E668
    subi r4, r4, 0x30
    cmpw r4, r17
    blt lbl_8019E720
    cmpwi r28, 0x10
    li r28, 0x40
    bne lbl_8019E660
    li r28, 0x20
lbl_8019E660:
    addi r4, r4, 0x30
    b lbl_8019E768
lbl_8019E668:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019E678
    li r0, 0x0
lbl_8019E678:
    cmpwi r0, 0x0
    beq lbl_8019E688
    li r0, 0x0
    b lbl_8019E69C
lbl_8019E688:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_8019E69C:
    cmpwi r0, 0x0
    beq lbl_8019E6DC
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019E6B4
    li r0, 0x0
lbl_8019E6B4:
    cmpwi r0, 0x0
    beq lbl_8019E6C4
    mr r3, r4
    b lbl_8019E6D0
lbl_8019E6C4:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r3, r3, r4
lbl_8019E6D0:
    subi r0, r3, 0x37
    cmpw r0, r17
    blt lbl_8019E6F4
lbl_8019E6DC:
    cmpwi r28, 0x10
    bne lbl_8019E6EC
    li r28, 0x20
    b lbl_8019E768
lbl_8019E6EC:
    li r28, 0x40
    b lbl_8019E768
lbl_8019E6F4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019E704
    li r0, 0x0
lbl_8019E704:
    cmpwi r0, 0x0
    beq lbl_8019E710
    b lbl_8019E71C
lbl_8019E710:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_8019E71C:
    subi r4, r4, 0x37
lbl_8019E720:
    cmplw r25, r24
    ble lbl_8019E72C
    stw r30, 0x0(r23)
lbl_8019E72C:
    mullw r25, r25, r17
    subfic r0, r25, -0x1
    cmplw r4, r0
    ble lbl_8019E740
    stw r30, 0x0(r23)
lbl_8019E740:
    mr r12, r19
    add r25, r25, r4
    mr r3, r20
    li r28, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
lbl_8019E768:
    cmpw r27, r18
    bgt lbl_8019E780
    cmpwi r4, -0x1
    beq lbl_8019E780
    rlwinm. r0, r28, 0, 25, 26
    beq lbl_8019E46C
lbl_8019E780:
    andi. r0, r28, 0x34
    bne lbl_8019E794
    li r25, 0x0
    stw r25, 0x0(r21)
    b lbl_8019E7A0
lbl_8019E794:
    add r3, r27, r26
    subi r0, r3, 0x1
    stw r0, 0x0(r21)
lbl_8019E7A0:
    mr r12, r19
    mr r3, r20
    li r5, 0x1
    mtctr r12
    bctrl
    mr r3, r25
    lmw r17, 0x14(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// __strtoull
// ----------------------------------------------------------------------------
asm void __strtoull() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stmw r14, 0x18(r1)
    li r27, 0x0
    mr r15, r3
    mr r16, r4
    stw r7, 0x8(r1)
    mr r17, r5
    mr r18, r6
    mr r19, r8
    mr r20, r9
    li r28, 0x1
    li r26, 0x0
    li r24, 0x0
    li r25, 0x0
    li r22, 0x0
    li r23, 0x0
    stw r27, 0x0(r9)
    stw r27, 0x0(r8)
    blt lbl_8019E83C
    cmpwi r3, 0x1
    beq lbl_8019E83C
    cmpwi r3, 0x24
    bgt lbl_8019E83C
    cmpwi r4, 0x1
    bge lbl_8019E844
lbl_8019E83C:
    li r28, 0x40
    b lbl_8019E864
lbl_8019E844:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    li r27, 0x1
    bctrl
    mr r21, r3
lbl_8019E864:
    cmpwi r15, 0x0
    beq lbl_8019E888
    mr r6, r15
    srawi r5, r15, 31
    li r3, -0x1
    li r4, -0x1
    bl __div2u
    mr r22, r4
    mr r23, r3
lbl_8019E888:
    lis r3, lbl_8035FBD8@ha
    li r30, 0x1
    li r14, 0x0
    li r31, -0x1
    addi r29, r3, lbl_8035FBD8@l
    b lbl_8019EBFC
lbl_8019E8A0:
    cmpwi r28, 0x1
    beq lbl_8019E8CC
    cmpwi r28, 0x2
    beq lbl_8019E98C
    cmpwi r28, 0x4
    beq lbl_8019E9D4
    cmpwi r28, 0x8
    beq lbl_8019EA24
    cmpwi r28, 0x10
    beq lbl_8019EA24
    b lbl_8019EBFC
lbl_8019E8CC:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_8019E8DC
    li r0, 0x0
lbl_8019E8DC:
    cmpwi r0, 0x0
    beq lbl_8019E8EC
    li r0, 0x0
    b lbl_8019E900
lbl_8019E8EC:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019E900:
    cmpwi r0, 0x0
    beq lbl_8019E92C
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r21, r3
    addi r26, r26, 0x1
    b lbl_8019EBFC
lbl_8019E92C:
    cmpwi r21, 0x2b
    bne lbl_8019E958
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_8019E984
lbl_8019E958:
    cmpwi r21, 0x2d
    bne lbl_8019E984
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    stw r30, 0x0(r19)
lbl_8019E984:
    li r28, 0x2
    b lbl_8019EBFC
lbl_8019E98C:
    cmpwi r15, 0x0
    beq lbl_8019E99C
    cmpwi r15, 0x10
    bne lbl_8019E9CC
lbl_8019E99C:
    cmpwi r21, 0x30
    bne lbl_8019E9CC
    mr r12, r17
    mr r3, r18
    li r28, 0x4
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_8019EBFC
lbl_8019E9CC:
    li r28, 0x8
    b lbl_8019EBFC
lbl_8019E9D4:
    cmpwi r21, 0x58
    beq lbl_8019E9E4
    cmpwi r21, 0x78
    bne lbl_8019EA10
lbl_8019E9E4:
    mr r12, r17
    mr r3, r18
    li r15, 0x10
    li r28, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_8019EBFC
lbl_8019EA10:
    cmpwi r15, 0x0
    bne lbl_8019EA1C
    li r15, 0x8
lbl_8019EA1C:
    li r28, 0x10
    b lbl_8019EBFC
lbl_8019EA24:
    cmpwi r15, 0x0
    bne lbl_8019EA30
    li r15, 0xa
lbl_8019EA30:
    srawi r0, r14, 31
    xor r0, r23, r0
    or. r0, r22, r0
    bne lbl_8019EA5C
    mr r6, r15
    srawi r5, r15, 31
    li r3, -0x1
    li r4, -0x1
    bl __div2u
    mr r22, r4
    mr r23, r3
lbl_8019EA5C:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_8019EA6C
    li r0, 0x0
lbl_8019EA6C:
    cmpwi r0, 0x0
    beq lbl_8019EA7C
    li r0, 0x0
    b lbl_8019EA90
lbl_8019EA7C:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019EA90:
    cmpwi r0, 0x0
    beq lbl_8019EABC
    subi r21, r21, 0x30
    cmpw r21, r15
    blt lbl_8019EB74
    cmpwi r28, 0x10
    li r28, 0x40
    bne lbl_8019EAB4
    li r28, 0x20
lbl_8019EAB4:
    addi r21, r21, 0x30
    b lbl_8019EBFC
lbl_8019EABC:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_8019EACC
    li r0, 0x0
lbl_8019EACC:
    cmpwi r0, 0x0
    beq lbl_8019EADC
    li r0, 0x0
    b lbl_8019EAF0
lbl_8019EADC:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_8019EAF0:
    cmpwi r0, 0x0
    beq lbl_8019EB30
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_8019EB08
    li r0, 0x0
lbl_8019EB08:
    cmpwi r0, 0x0
    beq lbl_8019EB18
    mr r3, r21
    b lbl_8019EB24
lbl_8019EB18:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r3, r3, r21
lbl_8019EB24:
    subi r0, r3, 0x37
    cmpw r0, r15
    blt lbl_8019EB48
lbl_8019EB30:
    cmpwi r28, 0x10
    bne lbl_8019EB40
    li r28, 0x20
    b lbl_8019EBFC
lbl_8019EB40:
    li r28, 0x40
    b lbl_8019EBFC
lbl_8019EB48:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_8019EB58
    li r0, 0x0
lbl_8019EB58:
    cmpwi r0, 0x0
    beq lbl_8019EB64
    b lbl_8019EB70
lbl_8019EB64:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r21, r3, r21
lbl_8019EB70:
    subi r21, r21, 0x37
lbl_8019EB74:
    subfc r0, r24, r22
    subfe r0, r25, r23
    subfe r0, r22, r22
    neg. r0, r0
    beq lbl_8019EB8C
    stw r30, 0x0(r20)
lbl_8019EB8C:
    mulhwu r3, r24, r15
    srawi r5, r15, 31
    srawi r6, r21, 31
    mullw r4, r25, r15
    add r4, r3, r4
    mullw r3, r24, r5
    mullw r0, r24, r15
    add r7, r4, r3
    subfc r5, r0, r31
    subfe r4, r7, r31
    subfc r3, r21, r5
    subfe r3, r6, r4
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_8019EBCC
    stw r30, 0x0(r20)
lbl_8019EBCC:
    srawi r4, r21, 31
    mr r12, r17
    addc r24, r0, r21
    mr r3, r18
    adde r25, r7, r4
    li r28, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
lbl_8019EBFC:
    cmpw r27, r16
    bgt lbl_8019EC14
    cmpwi r21, -0x1
    beq lbl_8019EC14
    rlwinm. r0, r28, 0, 25, 26
    beq lbl_8019E8A0
lbl_8019EC14:
    andi. r0, r28, 0x34
    bne lbl_8019EC30
    lwz r3, 0x8(r1)
    li r24, 0x0
    li r25, 0x0
    stw r24, 0x0(r3)
    b lbl_8019EC40
lbl_8019EC30:
    add r3, r27, r26
    subi r0, r3, 0x1
    lwz r3, 0x8(r1)
    stw r0, 0x0(r3)
lbl_8019EC40:
    mr r12, r17
    mr r3, r18
    mr r4, r21
    li r5, 0x1
    mtctr r12
    bctrl
    mr r4, r24
    mr r3, r25
    lmw r14, 0x18(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// strtoul
// ----------------------------------------------------------------------------
asm void strtoul() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x8000
    lis r6, __StringRead@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    stw r31, 0x2c(r1)
    mr r31, r4
    subi r4, r7, 0x1
    addi r7, r1, 0x10
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r5
    addi r5, r6, __StringRead@l
    stw r30, 0x18(r1)
    addi r6, r1, 0x18
    stw r0, 0x1c(r1)
    bl __strtoul
    cmpwi r31, 0x0
    beq lbl_8019ECD8
    lwz r0, 0x10(r1)
    add r0, r30, r0
    stw r0, 0x0(r31)
lbl_8019ECD8:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8019ECF4
    li r0, 0x22
    stw r0, lbl_8049D8C8
    li r3, -0x1
    b lbl_8019ED04
lbl_8019ECF4:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_8019ED04
    neg r3, r3
lbl_8019ED04:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8019ED1C
// ----------------------------------------------------------------------------
asm void fn_8019ED1C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x8000
    lis r6, __StringRead@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    stw r31, 0x2c(r1)
    mr r31, r4
    subi r4, r7, 0x1
    addi r7, r1, 0x10
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r5
    addi r5, r6, __StringRead@l
    stw r30, 0x18(r1)
    addi r6, r1, 0x18
    stw r0, 0x1c(r1)
    bl __strtoul
    cmpwi r31, 0x0
    beq lbl_8019ED80
    lwz r0, 0x10(r1)
    add r0, r30, r0
    stw r0, 0x0(r31)
lbl_8019ED80:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8019EDBC
    lwz r5, 0xc(r1)
    cmpwi r5, 0x0
    bne lbl_8019EDA8
    lis r4, 0x8000
    subi r0, r4, 0x1
    cmplw r3, r0
    bgt lbl_8019EDBC
lbl_8019EDA8:
    cmpwi r5, 0x0
    beq lbl_8019EDE4
    lis r0, 0x8000
    cmplw r3, r0
    ble lbl_8019EDE4
lbl_8019EDBC:
    lwz r5, 0xc(r1)
    li r0, 0x22
    lis r3, 0x8000
    stw r0, lbl_8049D8C8
    neg r4, r5
    subi r0, r3, 0x1
    or r3, r4, r5
    srwi r3, r3, 31
    add r3, r3, r0
    b lbl_8019EDF0
lbl_8019EDE4:
    cmpwi r5, 0x0
    beq lbl_8019EDF0
    neg r3, r3
lbl_8019EDF0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// atoi
// ----------------------------------------------------------------------------
asm void atoi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, __StringRead@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r5, r5, __StringRead@l
    addi r6, r1, 0x18
    stw r31, 0x2c(r1)
    lis r31, 0x8000
    subi r4, r31, 0x1
    addi r7, r1, 0x8
    stw r3, 0x18(r1)
    addi r8, r1, 0xc
    addi r9, r1, 0x10
    li r3, 0xa
    stw r0, 0x1c(r1)
    bl __strtoul
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_8019EE84
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    bne lbl_8019EE70
    subi r0, r31, 0x1
    cmplw r3, r0
    bgt lbl_8019EE84
lbl_8019EE70:
    cmpwi r4, 0x0
    beq lbl_8019EEAC
    lis r0, 0x8000
    cmplw r3, r0
    ble lbl_8019EEAC
lbl_8019EE84:
    lwz r5, 0xc(r1)
    li r0, 0x22
    lis r3, 0x8000
    stw r0, lbl_8049D8C8
    neg r4, r5
    subi r0, r3, 0x1
    or r3, r4, r5
    srwi r3, r3, 31
    add r3, r3, r0
    b lbl_8019EEB8
lbl_8019EEAC:
    cmpwi r4, 0x0
    beq lbl_8019EEB8
    neg r3, r3
lbl_8019EEB8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

