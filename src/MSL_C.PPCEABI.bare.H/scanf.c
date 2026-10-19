#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/scanf.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
u8 jumptable_8035FE50[];
u8 jumptable_8035FF30[];
u8 jumptable_8035FF50[];
u8 jumptable_8035FF70[];
u8 lbl_8033B9C8[];
u8 lbl_8035FBD8[];
u8 lbl_803D7848[];
u8 lbl_8049C418[];

// Forward declarations
void __va_arg();
void _restgpr_15();
void _savegpr_15();
void exit();
void mbtowc();
void fn_8019B580();
void __sformatter();
void __StringRead();
void sscanf();
void raise();
void fn_8019D03C();
void __strtoul();
void __strtoull();

// ----------------------------------------------------------------------------
// fn_8019B580
// ----------------------------------------------------------------------------
asm void fn_8019B580() {
    nofralloc
    stwu r1, -0x40(r1)
    lis r6, lbl_8033B9C8@ha
    lwzu r0, lbl_8033B9C8@l(r6)
    stw r31, 0x3c(r1)
    lbzu r5, 0x1(r3)
    stw r30, 0x38(r1)
    extsb r5, r5
    lwz r30, 0x4(r6)
    lwz r31, 0x8(r6)
    cmpwi r5, 0x25
    lwz r12, 0xc(r6)
    lwz r11, 0x10(r6)
    lwz r10, 0x14(r6)
    lwz r9, 0x18(r6)
    lwz r8, 0x1c(r6)
    lwz r7, 0x20(r6)
    lwz r6, 0x24(r6)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    bne lbl_8019B628
    stb r5, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r30, 0x4(r4)
    stw r31, 0x8(r4)
    stw r12, 0xc(r4)
    stw r11, 0x10(r4)
    stw r10, 0x14(r4)
    stw r9, 0x18(r4)
    stw r8, 0x1c(r4)
    stw r7, 0x20(r4)
    stw r6, 0x24(r4)
    b lbl_8019BBF8
lbl_8019B628:
    cmpwi r5, 0x2a
    bne lbl_8019B640
    lbzu r5, 0x1(r3)
    li r0, 0x1
    stb r0, 0x8(r1)
    extsb r5, r5
lbl_8019B640:
    cmplwi r5, 0xff
    li r0, 0x1
    bgt lbl_8019B650
    li r0, 0x0
lbl_8019B650:
    cmpwi r0, 0x0
    beq lbl_8019B660
    li r0, 0x0
    b lbl_8019B67C
lbl_8019B660:
    lis r6, lbl_8035FBD8@ha
    slwi r0, r5, 1
    addi r6, r6, lbl_8035FBD8@l
    lwz r6, 0x38(r6)
    lwz r6, 0x8(r6)
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019B67C:
    cmpwi r0, 0x0
    beq lbl_8019B75C
    lis r6, lbl_8035FBD8@ha
    li r0, 0x0
    addi r6, r6, lbl_8035FBD8@l
    stw r0, 0xc(r1)
    lwz r7, 0x38(r6)
lbl_8019B698:
    lwz r0, 0xc(r1)
    li r8, 0x1
    mulli r0, r0, 0xa
    add r6, r5, r0
    lbzu r5, 0x1(r3)
    subi r0, r6, 0x30
    stw r0, 0xc(r1)
    extsb r5, r5
    cmplwi r5, 0xff
    bgt lbl_8019B6C4
    li r8, 0x0
lbl_8019B6C4:
    cmpwi r8, 0x0
    beq lbl_8019B6D4
    li r0, 0x0
    b lbl_8019B6E4
lbl_8019B6D4:
    lwz r6, 0x8(r7)
    slwi r0, r5, 1
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019B6E4:
    cmpwi r0, 0x0
    bne lbl_8019B698
    lwz r6, 0xc(r1)
    cmpwi r6, 0x0
    bne lbl_8019B754
    li r0, 0xff
    stb r0, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r6, 0x4(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
    b lbl_8019BBF8
lbl_8019B754:
    li r0, 0x1
    stb r0, 0x9(r1)
lbl_8019B75C:
    cmpwi r5, 0x68
    li r7, 0x1
    beq lbl_8019B794
    cmpwi r5, 0x6c
    beq lbl_8019B7C0
    cmpwi r5, 0x4c
    beq lbl_8019B7EC
    cmpwi r5, 0x6a
    beq lbl_8019B7F8
    cmpwi r5, 0x7a
    beq lbl_8019B804
    cmpwi r5, 0x74
    beq lbl_8019B810
    b lbl_8019B81C
lbl_8019B794:
    lbz r0, 0x1(r3)
    li r6, 0x2
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x68
    bne lbl_8019B820
    li r0, 0x1
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_8019B820
lbl_8019B7C0:
    lbz r0, 0x1(r3)
    li r6, 0x3
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x6c
    bne lbl_8019B820
    li r0, 0x7
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_8019B820
lbl_8019B7EC:
    li r0, 0x9
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B7F8:
    li r0, 0x4
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B804:
    li r0, 0x5
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B810:
    li r0, 0x6
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B81C:
    li r7, 0x0
lbl_8019B820:
    cmpwi r7, 0x0
    beq lbl_8019B830
    lbzu r5, 0x1(r3)
    extsb r5, r5
lbl_8019B830:
    subi r0, r5, 0x41
    stb r5, 0xb(r1)
    cmplwi r0, 0x37
    bgt lbl_8019BB9C
    lis r5, jumptable_8035FE50@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8035FE50@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lbz r0, 0xa(r1)
    cmplwi r0, 0x9
    bne lbl_8019BBA4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r5, 0xa(r1)
    addi r0, r5, 0xfc
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    ble lbl_8019B8A0
    addi r0, r5, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_8019B8A0
    cmplwi r5, 0x3
    beq lbl_8019B8AC
    b lbl_8019BBA4
lbl_8019B8A0:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
lbl_8019B8AC:
    li r0, 0x8
    stb r0, 0xa(r1)
    b lbl_8019BBA4
    li r5, 0x3
    li r0, 0x78
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B8E4
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019BBA4
lbl_8019B8E4:
    cmpwi r0, 0x0
    beq lbl_8019BBA4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B910
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019B920
lbl_8019B910:
    cmpwi r0, 0x0
    beq lbl_8019B920
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019B920:
    li r6, 0xff
    li r5, 0xc1
    li r0, 0xfe
    stb r6, 0x10(r1)
    stb r6, 0x12(r1)
    stb r6, 0x13(r1)
    stb r6, 0x15(r1)
    stb r6, 0x16(r1)
    stb r6, 0x17(r1)
    stb r6, 0x18(r1)
    stb r6, 0x19(r1)
    stb r6, 0x1a(r1)
    stb r6, 0x1b(r1)
    stb r6, 0x1c(r1)
    stb r6, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r6, 0x1f(r1)
    stb r6, 0x20(r1)
    stb r6, 0x21(r1)
    stb r6, 0x22(r1)
    stb r6, 0x23(r1)
    stb r6, 0x24(r1)
    stb r6, 0x25(r1)
    stb r6, 0x26(r1)
    stb r6, 0x27(r1)
    stb r6, 0x28(r1)
    stb r6, 0x29(r1)
    stb r6, 0x2a(r1)
    stb r6, 0x2b(r1)
    stb r6, 0x2c(r1)
    stb r6, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r6, 0x2f(r1)
    stb r5, 0x11(r1)
    stb r0, 0x14(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B9C8
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019B9D8
lbl_8019B9C8:
    cmpwi r0, 0x0
    beq lbl_8019B9D8
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019B9D8:
    lbzu r10, 0x1(r3)
    li r11, 0x0
    extsb r10, r10
    cmpwi r10, 0x5e
    bne lbl_8019B9F8
    lbzu r10, 0x1(r3)
    li r11, 0x1
    extsb r10, r10
lbl_8019B9F8:
    cmpwi r10, 0x5d
    bne lbl_8019BA14
    lbz r0, 0x1b(r1)
    lbzu r10, 0x1(r3)
    ori r0, r0, 0x20
    stb r0, 0x1b(r1)
    extsb r10, r10
lbl_8019BA14:
    addi r8, r1, 0x8
    li r5, 0x1
    b lbl_8019BA9C
lbl_8019BA20:
    extrwi r6, r10, 5, 24
    lbz r0, 0x1(r3)
    add r9, r8, r6
    clrlwi r6, r10, 29
    lbz r7, 0x8(r9)
    slw r6, r5, r6
    cmpwi r0, 0x2d
    or r6, r7, r6
    stb r6, 0x8(r9)
    bne lbl_8019BA94
    lbz r9, 0x2(r3)
    extsb. r9, r9
    beq lbl_8019BA94
    cmpwi r9, 0x5d
    beq lbl_8019BA94
    b lbl_8019BA7C
lbl_8019BA60:
    extrwi r6, r10, 5, 24
    clrlwi r0, r10, 29
    add r7, r8, r6
    lbz r6, 0x8(r7)
    slw r0, r5, r0
    or r0, r6, r0
    stb r0, 0x8(r7)
lbl_8019BA7C:
    addi r10, r10, 0x1
    cmpw r10, r9
    ble lbl_8019BA60
    lbzu r10, 0x3(r3)
    extsb r10, r10
    b lbl_8019BA9C
lbl_8019BA94:
    lbzu r10, 0x1(r3)
    extsb r10, r10
lbl_8019BA9C:
    cmpwi r10, 0x0
    beq lbl_8019BAB0
    cmpwi r10, 0x5d
    beq lbl_8019BABC
    b lbl_8019BA20
lbl_8019BAB0:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
lbl_8019BABC:
    cmpwi r11, 0x0
    beq lbl_8019BBA4
    li r0, 0x2
    addi r5, r1, 0x10
    mtctr r0
lbl_8019BAD0:
    lbz r0, 0x0(r5)
    nor r0, r0, r0
    stb r0, 0x0(r5)
    lbz r0, 0x1(r5)
    nor r0, r0, r0
    stb r0, 0x1(r5)
    lbz r0, 0x2(r5)
    nor r0, r0, r0
    stb r0, 0x2(r5)
    lbz r0, 0x3(r5)
    nor r0, r0, r0
    stb r0, 0x3(r5)
    lbz r0, 0x4(r5)
    nor r0, r0, r0
    stb r0, 0x4(r5)
    lbz r0, 0x5(r5)
    nor r0, r0, r0
    stb r0, 0x5(r5)
    lbz r0, 0x6(r5)
    nor r0, r0, r0
    stb r0, 0x6(r5)
    lbz r0, 0x7(r5)
    nor r0, r0, r0
    stb r0, 0x7(r5)
    lbz r0, 0x8(r5)
    nor r0, r0, r0
    stb r0, 0x8(r5)
    lbz r0, 0x9(r5)
    nor r0, r0, r0
    stb r0, 0x9(r5)
    lbz r0, 0xa(r5)
    nor r0, r0, r0
    stb r0, 0xa(r5)
    lbz r0, 0xb(r5)
    nor r0, r0, r0
    stb r0, 0xb(r5)
    lbz r0, 0xc(r5)
    nor r0, r0, r0
    stb r0, 0xc(r5)
    lbz r0, 0xd(r5)
    nor r0, r0, r0
    stb r0, 0xd(r5)
    lbz r0, 0xe(r5)
    nor r0, r0, r0
    stb r0, 0xe(r5)
    lbz r0, 0xf(r5)
    nor r0, r0, r0
    stb r0, 0xf(r5)
    addi r5, r5, 0x10
    bdnz lbl_8019BAD0
    b lbl_8019BBA4
lbl_8019BB9C:
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019BBA4:
    lwz r5, 0x8(r1)
    addi r3, r3, 0x1
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
lbl_8019BBF8:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __sformatter
// ----------------------------------------------------------------------------
asm void __sformatter() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    lis r8, lbl_8035FBD8@ha
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    mr r26, r3
    mr r27, r4
    stw r6, 0x8(r1)
    mr r17, r5
    mr r28, r7
    addi r25, r1, 0x20
    stw r0, 0x58(r1)
    addi r23, r8, lbl_8035FBD8@l
    li r29, 0x0
    li r21, 0x0
    li r20, 0x0
    li r19, 0x0
    li r24, 0x1
    b lbl_8019C848
lbl_8019BC64:
    cmplwi r22, 0xff
    li r0, 0x1
    bgt lbl_8019BC74
    li r0, 0x0
lbl_8019BC74:
    cmpwi r0, 0x0
    beq lbl_8019BC84
    li r0, 0x0
    b lbl_8019BC98
lbl_8019BC84:
    lwz r3, 0x38(r23)
    slwi r0, r22, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019BC98:
    cmpwi r0, 0x0
    beq lbl_8019BD70
    lwz r4, 0x38(r23)
lbl_8019BCA4:
    lbzu r0, 0x1(r17)
    li r3, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_8019BCBC
    li r3, 0x0
lbl_8019BCBC:
    cmpwi r3, 0x0
    beq lbl_8019BCCC
    li r0, 0x0
    b lbl_8019BCDC
lbl_8019BCCC:
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019BCDC:
    cmpwi r0, 0x0
    bne lbl_8019BCA4
    cmpwi r29, 0x0
    bne lbl_8019C848
    b lbl_8019BCF4
lbl_8019BCF0:
    addi r21, r21, 0x1
lbl_8019BCF4:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r0, r3
    stb r3, 0xc(r1)
    cmplwi r0, 0xff
    li r4, 0x1
    bgt lbl_8019BD24
    li r4, 0x0
lbl_8019BD24:
    cmpwi r4, 0x0
    beq lbl_8019BD34
    li r0, 0x0
    b lbl_8019BD48
lbl_8019BD34:
    lwz r4, 0x38(r23)
    slwi r0, r0, 1
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019BD48:
    cmpwi r0, 0x0
    bne lbl_8019BCF0
    clrlwi r4, r3, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    b lbl_8019C848
lbl_8019BD70:
    cmpwi r22, 0x25
    beq lbl_8019BDE8
    cmpwi r29, 0x0
    bne lbl_8019BDE8
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r4, r3
    clrlwi r0, r22, 24
    cmpw r0, r4
    stb r3, 0xc(r1)
    beq lbl_8019BDDC
    clrlwi r4, r3, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_8019C854
    li r29, 0x1
    addi r17, r17, 0x1
    b lbl_8019C848
lbl_8019BDDC:
    addi r21, r21, 0x1
    addi r17, r17, 0x1
    b lbl_8019C848
lbl_8019BDE8:
    mr r3, r17
    addi r4, r1, 0x20
    bl fn_8019B580
    lbz r0, 0x20(r1)
    mr r17, r3
    cmpwi r0, 0x0
    bne lbl_8019BE24
    lbz r0, 0x23(r1)
    cmplwi r0, 0x25
    beq lbl_8019BE24
    lwz r3, 0x8(r1)
    li r4, 0x1
    bl __va_arg
    lwz r22, 0x0(r3)
    b lbl_8019BE28
lbl_8019BE24:
    li r22, 0x0
lbl_8019BE28:
    lbz r0, 0x23(r1)
    cmplwi r0, 0x6e
    beq lbl_8019BE68
    cmpwi r29, 0x0
    bne lbl_8019BE68
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8019BE68
    cmpwi r28, 0x0
    beq lbl_8019C854
    li r29, 0x1
lbl_8019BE68:
    lbz r3, 0x23(r1)
    subi r0, r3, 0x25
    cmplwi r0, 0x53
    bgt lbl_8019C854
    lis r3, jumptable_8035FF70@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8035FF70@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0xa
    b lbl_8019BE9C
    li r3, 0x0
lbl_8019BE9C:
    cmpwi r29, 0x0
    beq lbl_8019BEBC
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    li r16, 0x0
    stw r0, 0x58(r1)
    b lbl_8019BFB0
lbl_8019BEBC:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_8019BED0
    cmplwi r0, 0x4
    bne lbl_8019BEF8
lbl_8019BED0:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl __strtoull
    stw r4, 0x54(r1)
    stw r3, 0x50(r1)
    b lbl_8019BF18
lbl_8019BEF8:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl __strtoul
    mr r15, r3
lbl_8019BF18:
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    bne lbl_8019BF48
    cmpwi r28, 0x0
    beq lbl_8019C854
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x58(r1)
    li r16, 0x0
    b lbl_8019BFB0
lbl_8019BF48:
    lbz r0, 0x22(r1)
    add r21, r21, r3
    cmplwi r0, 0x7
    beq lbl_8019BF60
    cmplwi r0, 0x4
    bne lbl_8019BF9C
lbl_8019BF60:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_8019BF88
    lwz r0, 0x54(r1)
    subfic r0, r0, 0x0
    stw r0, 0x5c(r1)
    lwz r0, 0x50(r1)
    subfze r0, r0
    stw r0, 0x58(r1)
    b lbl_8019BFB0
lbl_8019BF88:
    lwz r0, 0x54(r1)
    stw r0, 0x5c(r1)
    lwz r0, 0x50(r1)
    stw r0, 0x58(r1)
    b lbl_8019BFB0
lbl_8019BF9C:
    lwz r0, 0x14(r1)
    mr r16, r15
    cmpwi r0, 0x0
    beq lbl_8019BFB0
    neg r16, r15
lbl_8019BFB0:
    cmpwi r22, 0x0
    beq lbl_8019C03C
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bgt lbl_8019C030
    lis r3, jumptable_8035FF50@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8035FF50@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r16, 0x0(r22)
    b lbl_8019C030
    stb r16, 0x0(r22)
    b lbl_8019C030
    sth r16, 0x0(r22)
    b lbl_8019C030
    stw r16, 0x0(r22)
    b lbl_8019C030
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x58(r1)
    stw r0, 0x0(r22)
    b lbl_8019C030
    stw r16, 0x0(r22)
    b lbl_8019C030
    stw r16, 0x0(r22)
    b lbl_8019C030
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x58(r1)
    stw r0, 0x0(r22)
lbl_8019C030:
    cmpwi r29, 0x0
    bne lbl_8019C03C
    addi r20, r20, 0x1
lbl_8019C03C:
    addi r19, r19, 0x1
    b lbl_8019C848
    li r3, 0x8
    b lbl_8019C058
    li r3, 0xa
    b lbl_8019C058
    li r3, 0x10
lbl_8019C058:
    cmpwi r29, 0x0
    beq lbl_8019C078
    li r0, 0x0
    stw r0, 0x54(r1)
    li r0, 0x0
    li r15, 0x0
    stw r0, 0x50(r1)
    b lbl_8019C148
lbl_8019C078:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_8019C08C
    cmplwi r0, 0x4
    bne lbl_8019C0B4
lbl_8019C08C:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl __strtoull
    stw r4, 0x54(r1)
    stw r3, 0x50(r1)
    b lbl_8019C0D4
lbl_8019C0B4:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl __strtoul
    mr r15, r3
lbl_8019C0D4:
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    bne lbl_8019C104
    cmpwi r28, 0x0
    beq lbl_8019C854
    li r0, 0x0
    stw r0, 0x54(r1)
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x50(r1)
    li r15, 0x0
    b lbl_8019C148
lbl_8019C104:
    lwz r0, 0x14(r1)
    add r21, r21, r3
    cmpwi r0, 0x0
    beq lbl_8019C148
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bne lbl_8019C138
    lwz r0, 0x54(r1)
    subfic r0, r0, 0x0
    stw r0, 0x54(r1)
    lwz r0, 0x50(r1)
    subfze r0, r0
    stw r0, 0x50(r1)
lbl_8019C138:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_8019C148
    neg r15, r15
lbl_8019C148:
    cmpwi r22, 0x0
    beq lbl_8019C1D4
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bgt lbl_8019C1C8
    lis r3, jumptable_8035FF30@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8035FF30@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r15, 0x0(r22)
    b lbl_8019C1C8
    stb r15, 0x0(r22)
    b lbl_8019C1C8
    sth r15, 0x0(r22)
    b lbl_8019C1C8
    stw r15, 0x0(r22)
    b lbl_8019C1C8
    lwz r0, 0x54(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x50(r1)
    stw r0, 0x0(r22)
    b lbl_8019C1C8
    stw r15, 0x0(r22)
    b lbl_8019C1C8
    stw r15, 0x0(r22)
    b lbl_8019C1C8
    lwz r0, 0x54(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x50(r1)
    stw r0, 0x0(r22)
lbl_8019C1C8:
    cmpwi r29, 0x0
    bne lbl_8019C1D4
    addi r20, r20, 0x1
lbl_8019C1D4:
    addi r19, r19, 0x1
    b lbl_8019C848
    cmpwi r29, 0x0
    beq lbl_8019C1F0
    lis r3, lbl_8049C418@ha
    lfs f1, lbl_8049C418@l(r3)
    b lbl_8019C230
lbl_8019C1F0:
    lwz r3, 0x24(r1)
    mr r4, r26
    mr r5, r27
    addi r6, r1, 0x18
    addi r7, r1, 0x10
    bl fn_8019D03C
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_8019C22C
    cmpwi r28, 0x0
    beq lbl_8019C854
    lis r3, lbl_8049C418@ha
    li r29, 0x1
    lfs f1, lbl_8049C418@l(r3)
    b lbl_8019C230
lbl_8019C22C:
    add r21, r21, r0
lbl_8019C230:
    cmpwi r22, 0x0
    beq lbl_8019C27C
    lbz r0, 0x22(r1)
    cmpwi r0, 0x0
    beq lbl_8019C258
    cmpwi r0, 0x8
    beq lbl_8019C264
    cmpwi r0, 0x9
    beq lbl_8019C26C
    b lbl_8019C270
lbl_8019C258:
    frsp f0, f1
    stfs f0, 0x0(r22)
    b lbl_8019C270
lbl_8019C264:
    stfd f1, 0x0(r22)
    b lbl_8019C270
lbl_8019C26C:
    stfd f1, 0x0(r22)
lbl_8019C270:
    cmpwi r29, 0x0
    bne lbl_8019C27C
    addi r20, r20, 0x1
lbl_8019C27C:
    addi r19, r19, 0x1
    b lbl_8019C848
    lbz r0, 0x21(r1)
    cmpwi r0, 0x0
    bne lbl_8019C294
    stw r24, 0x24(r1)
lbl_8019C294:
    cmpwi r22, 0x0
    beq lbl_8019C3C4
    cmpwi r28, 0x0
    beq lbl_8019C2B8
    lwz r3, 0x8(r1)
    li r31, 0x1
    li r4, 0x1
    bl __va_arg
    lwz r30, 0x0(r3)
lbl_8019C2B8:
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x18(r1)
    beq lbl_8019C2DC
    cmpwi r30, 0x0
    beq lbl_8019C848
    li r0, 0x0
    stb r0, 0x0(r22)
    b lbl_8019C848
lbl_8019C2DC:
    stw r22, 0x4c(r1)
    b lbl_8019C320
lbl_8019C2E4:
    lbz r0, 0x22(r1)
    stb r3, 0xc(r1)
    cmplwi r0, 0xa
    bne lbl_8019C30C
    mr r3, r22
    addi r4, r1, 0xc
    li r5, 0x1
    bl mbtowc
    addi r22, r22, 0x2
    b lbl_8019C314
lbl_8019C30C:
    stb r3, 0x0(r22)
    addi r22, r22, 0x1
lbl_8019C314:
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_8019C320:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    stw r3, 0x24(r1)
    beq lbl_8019C374
    cmpwi r28, 0x0
    beq lbl_8019C350
    xor r0, r30, r0
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r31, r0, 31
    beq lbl_8019C374
lbl_8019C350:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_8019C2E4
lbl_8019C374:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_8019C394
    cmpwi r28, 0x0
    beq lbl_8019C3B8
    cmpwi r31, 0x0
    bne lbl_8019C3B8
lbl_8019C394:
    cmpwi r28, 0x0
    beq lbl_8019C854
    cmpwi r30, 0x0
    li r29, 0x1
    beq lbl_8019C848
    lwz r3, 0x4c(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_8019C848
lbl_8019C3B8:
    add r21, r21, r0
    addi r20, r20, 0x1
    b lbl_8019C428
lbl_8019C3C4:
    li r0, 0x0
    stw r0, 0x18(r1)
    b lbl_8019C3E0
lbl_8019C3D0:
    lwz r4, 0x18(r1)
    stb r3, 0xc(r1)
    addi r0, r4, 0x1
    stw r0, 0x18(r1)
lbl_8019C3E0:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x24(r1)
    beq lbl_8019C418
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_8019C3D0
lbl_8019C418:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_8019C854
lbl_8019C428:
    addi r19, r19, 0x1
    b lbl_8019C848
    cmpwi r29, 0x0
    bne lbl_8019C848
    b lbl_8019C440
lbl_8019C43C:
    addi r21, r21, 0x1
lbl_8019C440:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r0, r3
    stb r3, 0xc(r1)
    cmplwi r0, 0xff
    li r4, 0x1
    bgt lbl_8019C470
    li r4, 0x0
lbl_8019C470:
    cmpwi r4, 0x0
    beq lbl_8019C480
    li r0, 0x0
    b lbl_8019C494
lbl_8019C480:
    lwz r4, 0x38(r23)
    slwi r0, r0, 1
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019C494:
    cmpwi r0, 0x0
    bne lbl_8019C43C
    clrlwi r0, r3, 24
    extsb r4, r0
    cmpwi r4, 0x25
    beq lbl_8019C4D0
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_8019C854
    li r29, 0x1
    b lbl_8019C848
lbl_8019C4D0:
    addi r21, r21, 0x1
    b lbl_8019C848
    cmpwi r29, 0x0
    bne lbl_8019C57C
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    stb r3, 0xc(r1)
    b lbl_8019C520
lbl_8019C500:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r21, r21, 0x1
    bctrl
    stb r3, 0xc(r1)
lbl_8019C520:
    clrlwi r4, r3, 24
    li r3, 0x1
    extsb r0, r4
    cmplwi r0, 0xff
    bgt lbl_8019C538
    li r3, 0x0
lbl_8019C538:
    cmpwi r3, 0x0
    beq lbl_8019C548
    li r0, 0x0
    b lbl_8019C55C
lbl_8019C548:
    lwz r3, 0x38(r23)
    slwi r0, r0, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019C55C:
    cmpwi r0, 0x0
    bne lbl_8019C500
    mr r12, r26
    mr r3, r27
    extsb r4, r4
    li r5, 0x1
    mtctr r12
    bctrl
lbl_8019C57C:
    cmpwi r22, 0x0
    beq lbl_8019C710
    cmpwi r28, 0x0
    beq lbl_8019C5A4
    lwz r3, 0x8(r1)
    li r31, 0x1
    li r4, 0x1
    bl __va_arg
    lwz r3, 0x0(r3)
    subi r30, r3, 0x1
lbl_8019C5A4:
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x18(r1)
    beq lbl_8019C5C8
    cmpwi r30, 0x0
    beq lbl_8019C848
    li r0, 0x0
    stb r0, 0x0(r22)
    b lbl_8019C848
lbl_8019C5C8:
    stw r22, 0x48(r1)
    b lbl_8019C62C
lbl_8019C5D0:
    extrwi r0, r3, 5, 24
    clrlwi r5, r3, 29
    add r4, r25, r0
    stb r3, 0xc(r1)
    lbz r0, 0x8(r4)
    slw r4, r24, r5
    clrlwi r3, r3, 24
    and. r0, r4, r0
    beq lbl_8019C684
    lbz r0, 0x22(r1)
    cmplwi r0, 0xa
    bne lbl_8019C618
    mr r3, r22
    addi r4, r1, 0xc
    li r5, 0x1
    bl mbtowc
    addi r22, r22, 0x2
    b lbl_8019C620
lbl_8019C618:
    stb r3, 0x0(r22)
    addi r22, r22, 0x1
lbl_8019C620:
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_8019C62C:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    stw r3, 0x24(r1)
    beq lbl_8019C684
    cmpwi r28, 0x0
    beq lbl_8019C660
    subf r4, r0, r30
    orc r3, r30, r0
    srwi r0, r4, 1
    subf r0, r0, r3
    srwi. r31, r0, 31
    beq lbl_8019C684
lbl_8019C660:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_8019C5D0
lbl_8019C684:
    lwz r3, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_8019C6A4
    cmpwi r28, 0x0
    beq lbl_8019C6E4
    cmpwi r31, 0x0
    bne lbl_8019C6E4
lbl_8019C6A4:
    clrlwi r4, r18, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_8019C854
    cmpwi r30, 0x0
    li r29, 0x1
    beq lbl_8019C848
    lwz r3, 0x48(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_8019C848
lbl_8019C6E4:
    lbz r0, 0x22(r1)
    add r21, r21, r3
    cmplwi r0, 0xa
    bne lbl_8019C700
    li r0, 0x0
    sth r0, 0x0(r22)
    b lbl_8019C708
lbl_8019C700:
    li r0, 0x0
    stb r0, 0x0(r22)
lbl_8019C708:
    addi r20, r20, 0x1
    b lbl_8019C7B4
lbl_8019C710:
    li r0, 0x0
    stw r0, 0x18(r1)
    b lbl_8019C748
lbl_8019C71C:
    extrwi r0, r3, 5, 24
    clrlwi r5, r3, 29
    add r4, r25, r0
    stb r3, 0xc(r1)
    lbz r0, 0x8(r4)
    slw r3, r24, r5
    and. r0, r3, r0
    beq lbl_8019C780
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_8019C748:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x24(r1)
    beq lbl_8019C780
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_8019C71C
lbl_8019C780:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_8019C7B0
    clrlwi r4, r18, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    b lbl_8019C848
lbl_8019C7B0:
    add r21, r21, r0
lbl_8019C7B4:
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    blt lbl_8019C7DC
    lbz r4, 0xc(r1)
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
lbl_8019C7DC:
    addi r19, r19, 0x1
    b lbl_8019C848
    cmpwi r22, 0x0
    beq lbl_8019C848
    lbz r0, 0x22(r1)
    cmpwi r0, 0x0
    beq lbl_8019C81C
    cmpwi r0, 0x2
    beq lbl_8019C824
    cmpwi r0, 0x3
    beq lbl_8019C82C
    cmpwi r0, 0x1
    beq lbl_8019C834
    cmpwi r0, 0x7
    beq lbl_8019C83C
    b lbl_8019C848
lbl_8019C81C:
    stw r21, 0x0(r22)
    b lbl_8019C848
lbl_8019C824:
    sth r21, 0x0(r22)
    b lbl_8019C848
lbl_8019C82C:
    stw r21, 0x0(r22)
    b lbl_8019C848
lbl_8019C834:
    stb r21, 0x0(r22)
    b lbl_8019C848
lbl_8019C83C:
    stw r21, 0x4(r22)
    srawi r0, r21, 31
    stw r0, 0x0(r22)
lbl_8019C848:
    lbz r0, 0x0(r17)
    extsb. r22, r0
    bne lbl_8019BC64
lbl_8019C854:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8019C884
    cmpwi r19, 0x0
    bne lbl_8019C884
    li r3, -0x1
    b lbl_8019C888
lbl_8019C884:
    mr r3, r20
lbl_8019C888:
    addi r11, r1, 0xb0
    bl _restgpr_15
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// __StringRead
// ----------------------------------------------------------------------------
asm void __StringRead() {
    nofralloc
    cmpwi r5, 0x0
    beq lbl_8019C8BC
    cmpwi r5, 0x1
    beq lbl_8019C8EC
    cmpwi r5, 0x2
    beq lbl_8019C918
    b lbl_8019C920
lbl_8019C8BC:
    lwz r4, 0x0(r3)
    lbz r5, 0x0(r4)
    extsb. r0, r5
    bne lbl_8019C8DC
    li r0, 0x1
    stw r0, 0x4(r3)
    li r3, -0x1
    blr
lbl_8019C8DC:
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    mr r3, r5
    blr
lbl_8019C8EC:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_8019C908
    lwz r5, 0x0(r3)
    subi r0, r5, 0x1
    stw r0, 0x0(r3)
    b lbl_8019C910
lbl_8019C908:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_8019C910:
    mr r3, r4
    blr
lbl_8019C918:
    lwz r3, 0x4(r3)
    blr
lbl_8019C920:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// sscanf
// ----------------------------------------------------------------------------
asm void sscanf() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    bne cr1, lbl_8019C958
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8019C958:
    cmpwi r3, 0x0
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x70(r1)
    stw r11, 0x74(r1)
    stw r0, 0x78(r1)
    stw r3, 0x68(r1)
    beq lbl_8019CA1C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_8019CA1C
    lis r5, lbl_8035FBD8@ha
    addi r5, r5, lbl_8035FBD8@l
    lwz r6, 0x38(r5)
    b lbl_8019CA04
lbl_8019C9B8:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_8019C9D4
    li r5, 0x0
lbl_8019C9D4:
    cmpwi r5, 0x0
    beq lbl_8019C9E4
    li r0, 0x0
    b lbl_8019C9F4
lbl_8019C9E4:
    lwz r5, 0x8(r6)
    slwi r0, r0, 1
    lhzx r0, r5, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019C9F4:
    cmpwi r0, 0x0
    bne lbl_8019CA04
    li r0, 0x0
    b lbl_8019CA14
lbl_8019CA04:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_8019C9B8
    li r0, 0x1
lbl_8019CA14:
    cmpwi r0, 0x0
    beq lbl_8019CA24
lbl_8019CA1C:
    li r3, -0x1
    b lbl_8019CA48
lbl_8019CA24:
    li r0, 0x0
    lis r3, __StringRead@ha
    mr r5, r4
    stw r0, 0x6c(r1)
    addi r3, r3, __StringRead@l
    addi r4, r1, 0x68
    addi r6, r1, 0x70
    li r7, 0x0
    bl __sformatter
lbl_8019CA48:
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// raise
// ----------------------------------------------------------------------------
asm void raise() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_8019CA84
    li r3, -0x1
    b lbl_8019CAE8
lbl_8019CA84:
    lis r4, lbl_803D7848@ha
    slwi r5, r0, 2
    addi r4, r4, lbl_803D7848@l
    lwzx r31, r4, r5
    cmplwi r31, 0x1
    beq lbl_8019CAA4
    li r0, 0x0
    stwx r0, r4, r5
lbl_8019CAA4:
    cmplwi r31, 0x1
    beq lbl_8019CABC
    cmpwi r31, 0x0
    bne lbl_8019CAC4
    cmpwi r3, 0x1
    bne lbl_8019CAC4
lbl_8019CABC:
    li r3, 0x0
    b lbl_8019CAE8
lbl_8019CAC4:
    cmpwi r31, 0x0
    bne lbl_8019CAD4
    li r3, 0x0
    bl exit
lbl_8019CAD4:
    mr r12, r31
    mr r3, r30
    mtctr r12
    bctrl
    li r3, 0x0
lbl_8019CAE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

