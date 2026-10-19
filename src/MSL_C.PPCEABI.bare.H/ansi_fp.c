#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/ansi_fp.cpp
// Total functions: 10

// Small Data symbols (@sda21)
float lbl_804A1158;
float lbl_804A1160;
float lbl_804A1168;
float lbl_804A1170;
float lbl_804A1178;
float lbl_804A1180;
float lbl_804A1188;

// Global data symbols (@ha/@l)
u8 jumptable_8035F8C0[];
u8 lbl_8033B3B8[];
u8 lbl_8035F9E8[];
u8 lbl_8049C41C[];

// Forward declarations
void __div2u();
void __mod2u();
void _restgpr_21();
void _savegpr_21();
void __cvt_dbl_ull();
void fn_80195C14();
void fn_80195C2C();
void __ull2dec();
void __timesdec();
void __str2dec();
void __two_exp();
void __equals_dec();
void __less_dec();
void __minus_dec();
void __num2dec_internal();
void fn_801972E0();
void fn_80197480();
void copysign();
void frexp();
void ldexp();
void log10();

// ----------------------------------------------------------------------------
// __ull2dec
// ----------------------------------------------------------------------------
asm void __ull2dec() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    stb r0, 0x0(r3)
    stb r0, 0x4(r3)
    b lbl_801963C8
lbl_80196384:
    mr r3, r31
    mr r4, r30
    li r6, 0xa
    li r5, 0x0
    bl __mod2u
    lbz r8, 0x4(r29)
    mr r3, r31
    li r6, 0xa
    li r5, 0x0
    add r7, r29, r8
    addi r0, r8, 0x1
    stb r4, 0x5(r7)
    mr r4, r30
    stb r0, 0x4(r29)
    bl __div2u
    mr r30, r4
    mr r31, r3
lbl_801963C8:
    or. r0, r30, r31
    bne lbl_80196384
    lbz r0, 0x4(r29)
    addi r4, r29, 0x5
    add r3, r29, r0
    addi r3, r3, 0x5
    b lbl_801963F8
lbl_801963E4:
    lbz r5, 0x0(r4)
    lbz r0, 0x0(r3)
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r5, 0x0(r3)
lbl_801963F8:
    subi r3, r3, 0x1
    cmplw r4, r3
    blt lbl_801963E4
    lbz r3, 0x4(r29)
    subi r0, r3, 0x1
    sth r0, 0x2(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __timesdec
// ----------------------------------------------------------------------------
asm void __timesdec() {
    nofralloc
    stwu r1, -0x60(r1)
    lis r6, 0xcccd
    lbz r8, 0x4(r4)
    subi r9, r6, 0x3333
    stw r31, 0x5c(r1)
    addi r0, r1, 0x8
    lbz r7, 0x4(r5)
    li r11, 0x0
    stw r30, 0x58(r1)
    add r12, r8, r7
    stw r29, 0x54(r1)
    subi r12, r12, 0x1
    add r6, r0, r12
    addi r6, r6, 0x1
    stb r11, 0x0(r3)
    mr r0, r6
    b lbl_8019659C
lbl_80196470:
    lbz r7, 0x4(r5)
    subi r31, r7, 0x1
    subf r7, r31, r12
    subic. r30, r7, 0x1
    bge lbl_8019648C
    li r30, 0x0
    subi r31, r12, 0x1
lbl_8019648C:
    lbz r7, 0x4(r4)
    add r8, r5, r31
    addi r31, r31, 0x1
    add r10, r4, r30
    subf r7, r30, r7
    addi r29, r8, 0x5
    cmpw r31, r7
    addi r30, r10, 0x5
    ble lbl_801964B4
    mr r31, r7
lbl_801964B4:
    cmpwi r31, 0x0
    ble lbl_8019657C
    srwi. r7, r31, 3
    mtctr r7
    beq lbl_8019655C
lbl_801964C8:
    lbz r10, 0x0(r30)
    lbz r8, 0x0(r29)
    mullw r7, r10, r8
    lbz r10, 0x1(r30)
    lbz r8, -0x1(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x2(r30)
    lbz r8, -0x2(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x3(r30)
    lbz r8, -0x3(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x4(r30)
    lbz r8, -0x4(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x5(r30)
    lbz r8, -0x5(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x6(r30)
    lbz r8, -0x6(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x7(r30)
    lbz r8, -0x7(r29)
    addi r30, r30, 0x8
    subi r29, r29, 0x8
    add r11, r11, r7
    mullw r7, r10, r8
    add r11, r11, r7
    bdnz lbl_801964C8
    andi. r31, r31, 0x7
    beq lbl_8019657C
lbl_8019655C:
    mtctr r31
lbl_80196560:
    lbz r10, 0x0(r30)
    addi r30, r30, 0x1
    lbz r8, 0x0(r29)
    subi r29, r29, 0x1
    mullw r7, r10, r8
    add r11, r11, r7
    bdnz lbl_80196560
lbl_8019657C:
    mulhwu r8, r9, r11
    subi r12, r12, 0x1
    mr r7, r8
    srwi r8, r8, 3
    mulli r8, r8, 0xa
    subf r8, r8, r11
    stbu r8, -0x1(r6)
    srwi r11, r7, 3
lbl_8019659C:
    cmpwi r12, 0x0
    bgt lbl_80196470
    lha r7, 0x2(r4)
    cmpwi r11, 0x0
    lha r4, 0x2(r5)
    add r4, r7, r4
    sth r4, 0x2(r3)
    beq lbl_801965CC
    stbu r11, -0x1(r6)
    extsh r4, r4
    addi r4, r4, 0x1
    sth r4, 0x2(r3)
lbl_801965CC:
    li r7, 0x0
    b lbl_801965E8
lbl_801965D4:
    add r4, r3, r7
    lbz r5, 0x0(r6)
    stb r5, 0x5(r4)
    addi r7, r7, 0x1
    addi r6, r6, 0x1
lbl_801965E8:
    cmpwi r7, 0x24
    bge lbl_801965F8
    cmplw r6, r0
    blt lbl_801965D4
lbl_801965F8:
    cmplw r6, r0
    stb r7, 0x4(r3)
    bge lbl_801966A0
    lbz r4, 0x0(r6)
    cmplwi r4, 0x5
    blt lbl_801966A0
    bne lbl_80196648
    addi r5, r6, 0x1
    subf r4, r5, r0
    mtctr r4
    cmplw r5, r0
    bge lbl_8019663C
lbl_80196628:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_80196648
    addi r5, r5, 0x1
    bdnz lbl_80196628
lbl_8019663C:
    lbz r0, -0x1(r6)
    clrlwi. r0, r0, 31
    beq lbl_801966A0
lbl_80196648:
    lbz r4, 0x4(r3)
    addi r6, r3, 0x5
    li r0, 0x0
    add r5, r6, r4
    subi r5, r5, 0x1
lbl_8019665C:
    lbz r4, 0x0(r5)
    cmplwi r4, 0x9
    bge lbl_80196674
    addi r0, r4, 0x1
    stb r0, 0x0(r5)
    b lbl_801966A0
lbl_80196674:
    cmplw r5, r6
    bne lbl_80196694
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r4, 0x2(r3)
    addi r0, r4, 0x1
    sth r0, 0x2(r3)
    b lbl_801966A0
lbl_80196694:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_8019665C
lbl_801966A0:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// __str2dec
// ----------------------------------------------------------------------------
asm void __str2dec() {
    nofralloc
    li r0, 0x0
    sth r5, 0x2(r3)
    li r7, 0x0
    stb r0, 0x0(r3)
    b lbl_801966E0
lbl_801966C8:
    lbz r6, 0x0(r4)
    add r5, r3, r7
    addi r4, r4, 0x1
    addi r7, r7, 0x1
    subi r0, r6, 0x30
    stb r0, 0x5(r5)
lbl_801966E0:
    cmpwi r7, 0x24
    bge lbl_801966F4
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_801966C8
lbl_801966F4:
    lbz r0, 0x0(r4)
    stb r7, 0x4(r3)
    extsb. r0, r0
    beqlr
    cmpwi r0, 0x5
    bltlr
    bgt lbl_80196744
    addi r5, r4, 0x1
    b lbl_80196728
lbl_80196718:
    extsb r0, r4
    cmpwi r0, 0x30
    bne lbl_80196744
    addi r5, r5, 0x1
lbl_80196728:
    lbz r4, 0x0(r5)
    extsb. r0, r4
    bne lbl_80196718
    add r4, r7, r3
    lbz r0, 0x4(r4)
    clrlwi. r0, r0, 31
    beqlr
lbl_80196744:
    lbz r4, 0x4(r3)
    addi r6, r3, 0x5
    li r0, 0x0
    add r5, r6, r4
    subi r5, r5, 0x1
lbl_80196758:
    lbz r4, 0x0(r5)
    cmplwi r4, 0x9
    bge lbl_80196770
    addi r0, r4, 0x1
    stb r0, 0x0(r5)
    blr
lbl_80196770:
    cmplw r5, r6
    bne lbl_80196790
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r4, 0x2(r3)
    addi r0, r4, 0x1
    sth r0, 0x2(r3)
    blr
lbl_80196790:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_80196758
    blr
}

// ----------------------------------------------------------------------------
// __two_exp
// ----------------------------------------------------------------------------
asm void __two_exp() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r0, r4, 0x40
    cmplwi r0, 0x48
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    bgt lbl_801969D4
    lis r5, jumptable_8035F8C0@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8035F8C0@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lis r4, lbl_8033B3B8@ha
    li r5, -0x14
    addi r4, r4, lbl_8033B3B8@l
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x10
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x2e
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0xa
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x55
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x5
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x6d
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x3
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x7a
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x3
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x81
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x2
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x87
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x2
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x8d
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x2
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x92
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x96
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x9a
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, -0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x9d
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x0
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0x9f
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x0
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xa1
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x0
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xa3
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x0
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xa5
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xa7
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xaa
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x1
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xad
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x2
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xb0
    bl __str2dec
    b lbl_80196AA4
    lis r4, lbl_8033B3B8@ha
    li r5, 0x2
    addi r4, r4, lbl_8033B3B8@l
    addi r4, r4, 0xb4
    bl __str2dec
    b lbl_80196AA4
lbl_801969D4:
    srwi r0, r4, 31
    addi r3, r1, 0x34
    add r0, r0, r4
    srawi r4, r0, 1
    bl __two_exp
    addi r4, r1, 0x34
    mr r3, r31
    mr r5, r4
    bl __timesdec
    clrlwi. r0, r30, 31
    beq lbl_80196AA4
    lwz r3, 0x0(r31)
    cmpwi r30, 0x0
    lwz r0, 0x4(r31)
    stw r0, 0xc(r1)
    stw r3, 0x8(r1)
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r0, 0x24(r1)
    stw r3, 0x20(r1)
    lwz r3, 0x20(r31)
    lwz r0, 0x24(r31)
    stw r0, 0x2c(r1)
    stw r3, 0x28(r1)
    lhz r0, 0x28(r31)
    sth r0, 0x30(r1)
    ble lbl_80196A7C
    lis r4, lbl_8033B3B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_8033B3B8@l
    li r5, 0x0
    addi r4, r4, 0xa1
    bl __str2dec
    b lbl_80196A94
lbl_80196A7C:
    lis r4, lbl_8033B3B8@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_8033B3B8@l
    li r5, -0x1
    addi r4, r4, 0x9d
    bl __str2dec
lbl_80196A94:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x34
    bl __timesdec
lbl_80196AA4:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// __equals_dec
// ----------------------------------------------------------------------------
asm void __equals_dec() {
    nofralloc
    lbz r5, 0x5(r3)
    cmpwi r5, 0x0
    bne lbl_80196AD8
    lbz r0, 0x5(r4)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_80196AD8:
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    bne lbl_80196AF0
    cntlzw r0, r5
    srwi r3, r0, 5
    blr
lbl_80196AF0:
    lha r5, 0x2(r3)
    lha r0, 0x2(r4)
    cmpw r5, r0
    bne lbl_80196B98
    lbz r7, 0x4(r3)
    lbz r0, 0x4(r4)
    mr r9, r7
    cmpw r7, r0
    ble lbl_80196B18
    mr r9, r0
lbl_80196B18:
    li r8, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_80196B50
lbl_80196B28:
    add r6, r3, r8
    add r5, r4, r8
    lbz r6, 0x5(r6)
    lbz r0, 0x5(r5)
    cmplw r6, r0
    beq lbl_80196B48
    li r3, 0x0
    blr
lbl_80196B48:
    addi r8, r8, 0x1
    bdnz lbl_80196B28
lbl_80196B50:
    cmpw r9, r7
    bne lbl_80196B5C
    mr r3, r4
lbl_80196B5C:
    lbz r4, 0x4(r3)
    subf r0, r8, r4
    mtctr r0
    cmpw r8, r4
    bge lbl_80196B90
lbl_80196B70:
    add r4, r3, r8
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    beq lbl_80196B88
    li r3, 0x0
    blr
lbl_80196B88:
    addi r8, r8, 0x1
    bdnz lbl_80196B70
lbl_80196B90:
    li r3, 0x1
    blr
lbl_80196B98:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// __less_dec
// ----------------------------------------------------------------------------
asm void __less_dec() {
    nofralloc
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bne lbl_80196BC0
    lbz r3, 0x5(r4)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
lbl_80196BC0:
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    bne lbl_80196BD4
    li r3, 0x0
    blr
lbl_80196BD4:
    lha r5, 0x2(r4)
    lha r0, 0x2(r3)
    cmpw r0, r5
    bne lbl_80196C88
    lbz r7, 0x4(r3)
    lbz r0, 0x4(r4)
    mr r9, r7
    cmpw r7, r0
    ble lbl_80196BFC
    mr r9, r0
lbl_80196BFC:
    li r8, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_80196C44
lbl_80196C0C:
    add r6, r4, r8
    add r5, r3, r8
    lbz r6, 0x5(r6)
    lbz r0, 0x5(r5)
    cmplw r0, r6
    bge lbl_80196C2C
    li r3, 0x1
    blr
lbl_80196C2C:
    cmplw r6, r0
    bge lbl_80196C3C
    li r3, 0x0
    blr
lbl_80196C3C:
    addi r8, r8, 0x1
    bdnz lbl_80196C0C
lbl_80196C44:
    cmpw r9, r7
    bne lbl_80196C80
    lbz r3, 0x4(r4)
    subf r0, r8, r3
    mtctr r0
    cmpw r8, r3
    bge lbl_80196C80
lbl_80196C60:
    add r3, r4, r8
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    beq lbl_80196C78
    li r3, 0x1
    blr
lbl_80196C78:
    addi r8, r8, 0x1
    bdnz lbl_80196C60
lbl_80196C80:
    li r3, 0x0
    blr
lbl_80196C88:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// __minus_dec
// ----------------------------------------------------------------------------
asm void __minus_dec() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r12, 0xc(r4)
    stw r31, 0x1c(r1)
    lwz r31, 0x8(r4)
    stw r30, 0x18(r1)
    lwz r30, 0x4(r4)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    lwz r11, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r9, 0x18(r4)
    lwz r8, 0x1c(r4)
    lwz r7, 0x20(r4)
    lwz r6, 0x24(r4)
    lhz r0, 0x28(r4)
    stw r29, 0x0(r3)
    stw r30, 0x4(r3)
    stw r31, 0x8(r3)
    stw r12, 0xc(r3)
    stw r11, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r6, 0x24(r3)
    sth r0, 0x28(r3)
    lbz r0, 0x5(r5)
    cmpwi r0, 0x0
    beq lbl_80197168
    lbz r8, 0x4(r3)
    lbz r0, 0x4(r5)
    cmpw r8, r0
    bge lbl_80196D28
    mr r8, r0
lbl_80196D28:
    lha r4, 0x2(r5)
    lha r0, 0x2(r3)
    subf r0, r4, r0
    add r8, r8, r0
    cmpwi r8, 0x24
    ble lbl_80196D44
    li r8, 0x24
lbl_80196D44:
    li r7, 0x0
    b lbl_80196D60
lbl_80196D4C:
    lbz r6, 0x4(r3)
    add r4, r3, r6
    addi r6, r6, 0x1
    stb r7, 0x5(r4)
    stb r6, 0x4(r3)
lbl_80196D60:
    lbz r4, 0x4(r3)
    cmpw r4, r8
    blt lbl_80196D4C
    lbz r7, 0x4(r5)
    addi r4, r3, 0x5
    add r6, r4, r8
    add r7, r7, r0
    cmpw r7, r8
    bge lbl_80196D88
    add r6, r4, r7
lbl_80196D88:
    subf r7, r4, r6
    addi r9, r5, 0x5
    subf r7, r0, r7
    add r10, r9, r7
    mr r11, r10
    b lbl_80196EC0
lbl_80196DA0:
    lbzu r8, -0x1(r6)
    lbzu r7, -0x1(r10)
    cmplw r8, r7
    bge lbl_80196EB0
    subi r12, r6, 0x1
    b lbl_80196DBC
lbl_80196DB8:
    subi r12, r12, 0x1
lbl_80196DBC:
    lbz r7, 0x0(r12)
    cmpwi r7, 0x0
    beq lbl_80196DB8
    cmplw r12, r6
    subf r8, r12, r6
    beq lbl_80196EB0
    srwi. r7, r8, 3
    mtctr r7
    beq lbl_80196E90
lbl_80196DE0:
    lbz r7, 0x0(r12)
    subi r7, r7, 0x1
    stb r7, 0x0(r12)
    lbz r7, 0x1(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x1(r12)
    lbz r7, 0x2(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x2(r12)
    lbz r7, 0x3(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x3(r12)
    lbz r7, 0x4(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x4(r12)
    lbz r7, 0x5(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x5(r12)
    lbz r7, 0x6(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x6(r12)
    lbz r7, 0x7(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x7(r12)
    lbz r7, 0x8(r12)
    addi r7, r7, 0xa
    stbu r7, 0x8(r12)
    bdnz lbl_80196DE0
    andi. r8, r8, 0x7
    beq lbl_80196EB0
lbl_80196E90:
    mtctr r8
lbl_80196E94:
    lbz r7, 0x0(r12)
    subi r7, r7, 0x1
    stb r7, 0x0(r12)
    lbz r7, 0x1(r12)
    addi r7, r7, 0xa
    stbu r7, 0x1(r12)
    bdnz lbl_80196E94
lbl_80196EB0:
    lbz r8, 0x0(r10)
    lbz r7, 0x0(r6)
    subf r7, r8, r7
    stb r7, 0x0(r6)
lbl_80196EC0:
    cmplw r6, r4
    ble lbl_80196ED0
    cmplw r10, r9
    bgt lbl_80196DA0
lbl_80196ED0:
    lbz r8, 0x4(r5)
    subf r9, r9, r11
    cmpw r9, r8
    bge lbl_80197064
    lbz r7, 0x0(r11)
    li r10, 0x0
    cmplwi r7, 0x5
    bge lbl_80196EF8
    li r10, 0x1
    b lbl_80196F44
lbl_80196EF8:
    bne lbl_80196F44
    add r5, r5, r8
    addi r6, r11, 0x1
    addi r7, r5, 0x5
    subf r5, r6, r7
    mtctr r5
    cmplw r6, r7
    bge lbl_80196F2C
lbl_80196F18:
    lbz r5, 0x0(r6)
    cmpwi r5, 0x0
    bne lbl_80197064
    addi r6, r6, 0x1
    bdnz lbl_80196F18
lbl_80196F2C:
    add r5, r4, r9
    add r6, r0, r5
    lbzu r0, -0x1(r6)
    clrlwi. r0, r0, 31
    beq lbl_80196F44
    li r10, 0x1
lbl_80196F44:
    cmpwi r10, 0x0
    beq lbl_80197064
    lbz r0, 0x0(r6)
    cmplwi r0, 0x1
    bge lbl_80197058
    subi r8, r6, 0x1
    b lbl_80196F64
lbl_80196F60:
    subi r8, r8, 0x1
lbl_80196F64:
    lbz r0, 0x0(r8)
    cmpwi r0, 0x0
    beq lbl_80196F60
    cmplw r8, r6
    subf r5, r8, r6
    beq lbl_80197058
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_80197038
lbl_80196F88:
    lbz r7, 0x0(r8)
    subi r0, r7, 0x1
    stb r0, 0x0(r8)
    lbz r7, 0x1(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x1(r8)
    lbz r7, 0x2(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x2(r8)
    lbz r7, 0x3(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x3(r8)
    lbz r7, 0x4(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x4(r8)
    lbz r7, 0x5(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x5(r8)
    lbz r7, 0x6(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x6(r8)
    lbz r7, 0x7(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x7(r8)
    lbz r7, 0x8(r8)
    addi r0, r7, 0xa
    stbu r0, 0x8(r8)
    bdnz lbl_80196F88
    andi. r5, r5, 0x7
    beq lbl_80197058
lbl_80197038:
    mtctr r5
lbl_8019703C:
    lbz r7, 0x0(r8)
    subi r0, r7, 0x1
    stb r0, 0x0(r8)
    lbz r7, 0x1(r8)
    addi r0, r7, 0xa
    stbu r0, 0x1(r8)
    bdnz lbl_8019703C
lbl_80197058:
    lbz r5, 0x0(r6)
    subi r0, r5, 0x1
    stb r0, 0x0(r6)
lbl_80197064:
    mr r7, r4
    b lbl_80197070
lbl_8019706C:
    addi r7, r7, 0x1
lbl_80197070:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x0
    beq lbl_8019706C
    cmplw r7, r4
    ble lbl_80197130
    lbz r0, 0x4(r3)
    subf r6, r4, r7
    clrlwi r8, r6, 24
    lha r5, 0x2(r3)
    add r6, r4, r0
    cmplw r7, r6
    subf r0, r8, r5
    sth r0, 0x2(r3)
    subf r5, r7, r6
    bge lbl_80197124
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_8019710C
lbl_801970B8:
    lbz r0, 0x0(r7)
    stb r0, 0x0(r4)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_801970B8
    andi. r5, r5, 0x7
    beq lbl_80197124
lbl_8019710C:
    mtctr r5
lbl_80197110:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_80197110
lbl_80197124:
    lbz r0, 0x4(r3)
    subf r0, r8, r0
    stb r0, 0x4(r3)
lbl_80197130:
    lbz r0, 0x4(r3)
    addi r4, r3, 0x5
    add r5, r4, r0
    subf r0, r4, r5
    mtctr r0
    cmplw r5, r4
    ble lbl_8019715C
lbl_8019714C:
    lbzu r0, -0x1(r5)
    cmpwi r0, 0x0
    bne lbl_8019715C
    bdnz lbl_8019714C
lbl_8019715C:
    subf r4, r4, r5
    addi r0, r4, 0x1
    stb r0, 0x4(r3)
lbl_80197168:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __num2dec_internal
// ----------------------------------------------------------------------------
asm void __num2dec_internal() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x88(r1)
    fmr f31, f1
    stw r31, 0x84(r1)
    stw r30, 0x80(r1)
    mr r30, r3
    stw r29, 0x7c(r1)
    bl fn_80195C14
    lfd f0, lbl_804A1158
    neg r0, r3
    or r0, r0, r3
    fcmpu cr0, f0, f31
    srwi r0, r0, 31
    extsb r31, r0
    bne lbl_801971DC
    li r3, 0x0
    li r0, 0x1
    stb r31, 0x0(r30)
    sth r3, 0x2(r30)
    stb r0, 0x4(r30)
    stb r3, 0x5(r30)
    b lbl_801972C0
lbl_801971DC:
    fmr f1, f31
    bl fn_80195C2C
    cmpwi r3, 0x2
    bgt lbl_80197220
    fmr f1, f31
    li r3, 0x0
    li r0, 0x1
    stb r31, 0x0(r30)
    sth r3, 0x2(r30)
    stb r0, 0x4(r30)
    bl fn_80195C2C
    cmpwi r3, 0x1
    li r0, 0x49
    bne lbl_80197218
    li r0, 0x4e
lbl_80197218:
    stb r0, 0x5(r30)
    b lbl_801972C0
lbl_80197220:
    cmpwi r31, 0x0
    beq lbl_8019722C
    fneg f31, f31
lbl_8019722C:
    fmr f1, f31
    addi r3, r1, 0x8
    bl frexp
    stfd f1, 0x10(r1)
    fmr f31, f1
    lwz r4, 0x14(r1)
    lwz r3, 0x10(r1)
    subi r0, r4, 0x1
    cmpwi r4, 0x0
    andc r0, r0, r4
    oris r3, r3, 0x10
    cntlzw r0, r0
    subfic r4, r0, 0x20
    bne lbl_80197278
    subi r0, r3, 0x1
    andc r0, r0, r3
    cntlzw r0, r0
    subfic r3, r0, 0x20
    addi r4, r3, 0x20
lbl_80197278:
    lwz r0, 0x8(r1)
    subfic r29, r4, 0x35
    addi r3, r1, 0x18
    subf r4, r29, r0
    bl __two_exp
    fmr f1, f31
    mr r3, r29
    bl ldexp
    bl __cvt_dbl_ull
    mr r5, r3
    mr r6, r4
    addi r3, r1, 0x44
    bl __ull2dec
    mr r3, r30
    addi r4, r1, 0x44
    addi r5, r1, 0x18
    bl __timesdec
    stb r31, 0x0(r30)
lbl_801972C0:
    lwz r0, 0x94(r1)
    lfd f31, 0x88(r1)
    lwz r31, 0x84(r1)
    lwz r30, 0x80(r1)
    lwz r29, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801972E0
// ----------------------------------------------------------------------------
asm void fn_801972E0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lha r31, 0x2(r3)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl __num2dec_internal
    lbz r0, 0x5(r30)
    cmplwi r0, 0x9
    bgt lbl_80197468
    cmpwi r31, 0x24
    ble lbl_8019731C
    li r31, 0x24
lbl_8019731C:
    cmpwi r31, 0x0
    ble lbl_80197408
    lbz r0, 0x4(r30)
    cmpw r31, r0
    bge lbl_80197408
    addi r4, r30, 0x5
    lbzx r0, r4, r31
    add r3, r4, r31
    cmplwi r0, 0x5
    ble lbl_8019734C
    li r4, 0x1
    b lbl_801973A8
lbl_8019734C:
    bge lbl_80197358
    li r4, -0x1
    b lbl_801973A8
lbl_80197358:
    lbz r0, 0x4(r30)
    addi r3, r3, 0x1
    add r4, r4, r0
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_80197390
lbl_80197374:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80197388
    li r4, 0x1
    b lbl_801973A8
lbl_80197388:
    addi r3, r3, 0x1
    bdnz lbl_80197374
lbl_80197390:
    add r3, r31, r30
    li r4, -0x1
    lbz r0, 0x4(r3)
    clrlwi. r0, r0, 31
    beq lbl_801973A8
    li r4, 0x1
lbl_801973A8:
    cmpwi r4, 0x0
    stb r31, 0x4(r30)
    blt lbl_80197408
    addi r4, r30, 0x5
    li r0, 0x0
    add r5, r4, r31
    subi r5, r5, 0x1
lbl_801973C4:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x9
    bge lbl_801973DC
    addi r0, r3, 0x1
    stb r0, 0x0(r5)
    b lbl_80197408
lbl_801973DC:
    cmplw r5, r4
    bne lbl_801973FC
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r3, 0x2(r30)
    addi r0, r3, 0x1
    sth r0, 0x2(r30)
    b lbl_80197408
lbl_801973FC:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_801973C4
lbl_80197408:
    li r5, 0x0
    b lbl_80197424
lbl_80197410:
    lbz r4, 0x4(r30)
    add r3, r30, r4
    addi r0, r4, 0x1
    stb r5, 0x5(r3)
    stb r0, 0x4(r30)
lbl_80197424:
    lbz r3, 0x4(r30)
    cmpw r3, r31
    blt lbl_80197410
    lha r0, 0x2(r30)
    subi r3, r3, 0x1
    li r5, 0x0
    subf r0, r3, r0
    sth r0, 0x2(r30)
    b lbl_8019745C
lbl_80197448:
    add r4, r30, r5
    addi r5, r5, 0x1
    lbz r3, 0x5(r4)
    addi r0, r3, 0x30
    stb r0, 0x5(r4)
lbl_8019745C:
    lbz r0, 0x4(r30)
    cmpw r5, r0
    blt lbl_80197448
lbl_80197468:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80197480
// ----------------------------------------------------------------------------
asm void fn_80197480() {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x170
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    bl _savegpr_21
    lbz r0, 0x4(r3)
    lis r4, 0x4330
    stw r4, 0x128(r1)
    mr r27, r3
    cmpwi r0, 0x0
    stw r4, 0x130(r1)
    bne lbl_801974DC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_801974CC
    lfd f2, lbl_804A1160
    b lbl_801974D0
lbl_801974CC:
    lfd f2, lbl_804A1168
lbl_801974D0:
    lfd f1, lbl_804A1158
    bl copysign
    b lbl_80197BA8
lbl_801974DC:
    lbz r0, 0x5(r3)
    cmpwi r0, 0x30
    beq lbl_801974FC
    cmpwi r0, 0x49
    beq lbl_80197520
    cmpwi r0, 0x4e
    beq lbl_80197548
    b lbl_80197588
lbl_801974FC:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80197510
    lfd f2, lbl_804A1160
    b lbl_80197514
lbl_80197510:
    lfd f2, lbl_804A1168
lbl_80197514:
    lfd f1, lbl_804A1158
    bl copysign
    b lbl_80197BA8
lbl_80197520:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80197534
    lfd f2, lbl_804A1160
    b lbl_80197538
lbl_80197534:
    lfd f2, lbl_804A1168
lbl_80197538:
    lis r3, lbl_8049C41C@ha
    lfs f1, lbl_8049C41C@l(r3)
    bl copysign
    b lbl_80197BA8
lbl_80197548:
    lbz r0, 0x0(r3)
    li r4, 0x0
    lis r3, 0x7ff0
    stw r4, 0x1c(r1)
    extsb. r0, r0
    stw r3, 0x18(r1)
    beq lbl_80197574
    lis r0, 0x8000
    stw r4, 0x1c(r1)
    oris r0, r0, 0x7ff0
    stw r0, 0x18(r1)
lbl_80197574:
    lwz r0, 0x18(r1)
    oris r0, r0, 0x8
    stw r0, 0x18(r1)
    lfd f1, 0x18(r1)
    b lbl_80197BA8
lbl_80197588:
    lwz r0, 0x4(r3)
    addi r4, r1, 0x101
    stw r0, 0x100(r1)
    lwz r21, 0x0(r3)
    lbz r0, 0x100(r1)
    lwz r12, 0x8(r3)
    add r28, r4, r0
    lwz r11, 0xc(r3)
    lwz r10, 0x10(r3)
    cmplw cr1, r4, r28
    lwz r9, 0x14(r3)
    lwz r8, 0x18(r3)
    lwz r7, 0x1c(r3)
    lwz r6, 0x20(r3)
    lwz r5, 0x24(r3)
    lhz r0, 0x28(r3)
    stw r21, 0xfc(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    sth r0, 0x124(r1)
    bge cr1, lbl_801976AC
    subf r0, r4, r28
    subi r3, r28, 0x8
    cmpwi r0, 0x8
    ble lbl_80197688
    bgt cr1, lbl_80197688
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r4, r3
    bge lbl_80197688
lbl_80197620:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    lbz r3, 0x1(r4)
    subi r0, r3, 0x30
    stb r0, 0x1(r4)
    lbz r3, 0x2(r4)
    subi r0, r3, 0x30
    stb r0, 0x2(r4)
    lbz r3, 0x3(r4)
    subi r0, r3, 0x30
    stb r0, 0x3(r4)
    lbz r3, 0x4(r4)
    subi r0, r3, 0x30
    stb r0, 0x4(r4)
    lbz r3, 0x5(r4)
    subi r0, r3, 0x30
    stb r0, 0x5(r4)
    lbz r3, 0x6(r4)
    subi r0, r3, 0x30
    stb r0, 0x6(r4)
    lbz r3, 0x7(r4)
    subi r0, r3, 0x30
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_80197620
lbl_80197688:
    subf r0, r4, r28
    mtctr r0
    cmplw r4, r28
    bge lbl_801976AC
lbl_80197698:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_80197698
lbl_801976AC:
    lha r6, 0xfe(r1)
    lis r4, lbl_8033B3B8@ha
    lbz r0, 0x100(r1)
    addi r4, r4, lbl_8033B3B8@l
    addi r3, r1, 0xd0
    li r5, 0x134
    add r6, r0, r6
    addi r4, r4, 0xb8
    subi r0, r6, 0x1
    sth r0, 0xfe(r1)
    extsh r29, r0
    bl __str2dec
    addi r3, r1, 0xd0
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197718
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_80197704
    lfd f2, lbl_804A1160
    b lbl_80197708
lbl_80197704:
    lfd f2, lbl_804A1168
lbl_80197708:
    lis r3, lbl_8049C41C@ha
    lfs f1, lbl_8049C41C@l(r3)
    bl copysign
    b lbl_80197BA8
lbl_80197718:
    lbz r0, 0x101(r1)
    lis r7, lbl_8035F9E8@ha
    stw r0, 0x12c(r1)
    addi r4, r1, 0x102
    lfd f2, lbl_804A1180
    addi r7, r7, lbl_8035F9E8@l
    lfd f0, 0x128(r1)
    lis r3, 0x8000
    fsub f31, f0, f2
    b lbl_8019787C
lbl_80197740:
    subf r5, r4, r28
    li r10, 0x0
    slwi r0, r5, 29
    srwi r5, r5, 31
    subf r0, r5, r0
    rotlwi r0, r0, 3
    add. r6, r0, r5
    bne lbl_80197764
    li r6, 0x8
lbl_80197764:
    cmpwi cr1, r6, 0x0
    li r5, 0x0
    ble cr1, lbl_80197844
    cmpwi r6, 0x8
    subi r8, r6, 0x8
    ble lbl_8019781C
    li r9, 0x0
    blt cr1, lbl_80197794
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_80197794
    li r9, 0x1
lbl_80197794:
    cmpwi r9, 0x0
    beq lbl_8019781C
    addi r0, r8, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r8, 0x0
    ble lbl_8019781C
lbl_801977B0:
    mulli r0, r10, 0xa
    lbz r9, 0x0(r4)
    lbz r8, 0x1(r4)
    addi r5, r5, 0x8
    lbz r21, 0x2(r4)
    add r0, r9, r0
    mulli r0, r0, 0xa
    lbz r12, 0x3(r4)
    lbz r11, 0x4(r4)
    lbz r10, 0x5(r4)
    add r0, r8, r0
    lbz r9, 0x6(r4)
    mulli r0, r0, 0xa
    lbz r8, 0x7(r4)
    addi r4, r4, 0x8
    add r0, r21, r0
    mulli r0, r0, 0xa
    add r0, r12, r0
    mulli r0, r0, 0xa
    add r0, r11, r0
    mulli r0, r0, 0xa
    add r0, r10, r0
    mulli r0, r0, 0xa
    add r0, r9, r0
    mulli r0, r0, 0xa
    add r10, r8, r0
    bdnz lbl_801977B0
lbl_8019781C:
    subf r0, r5, r6
    mtctr r0
    cmpw r5, r6
    bge lbl_80197844
lbl_8019782C:
    mulli r0, r10, 0xa
    lbz r8, 0x0(r4)
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    add r10, r8, r0
    bdnz lbl_8019782C
lbl_80197844:
    slwi r0, r6, 3
    stw r10, 0x134(r1)
    add r5, r7, r0
    cmpwi r10, 0x0
    lfd f1, -0x8(r5)
    lfd f0, 0x130(r1)
    fmul f1, f31, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    beq lbl_80197874
    fcmpu cr0, f1, f0
    beq lbl_80197884
lbl_80197874:
    fmr f31, f0
    subf r29, r6, r29
lbl_8019787C:
    cmplw r4, r28
    blt lbl_80197740
lbl_80197884:
    cmpwi r29, 0x0
    bge lbl_801978B4
    neg r0, r29
    lfd f2, lbl_804A1188
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f1, lbl_804A1170
    lfd f0, 0x128(r1)
    fsub f2, f0, f2
    bl log10
    fdiv f31, f31, f1
    b lbl_801978D4
lbl_801978B4:
    xoris r0, r29, 0x8000
    stw r0, 0x134(r1)
    lfd f2, lbl_804A1188
    lfd f0, 0x130(r1)
    lfd f1, lbl_804A1170
    fsub f2, f0, f2
    bl log10
    fmul f31, f31, f1
lbl_801978D4:
    fmr f1, f31
    mr r3, r29
    bl ldexp
    fmr f31, f1
    stfd f1, 0x10(r1)
    bl fn_80195C2C
    cmpwi r3, 0x2
    bne lbl_801978FC
    lfd f31, lbl_804A1178
    stfd f31, 0x10(r1)
lbl_801978FC:
    fmr f1, f31
    addi r3, r1, 0xa4
    li r27, 0x0
    bl __num2dec_internal
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl __equals_dec
    cmpwi r3, 0x0
    bne lbl_80197B94
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197938
    li r27, 0x1
lbl_80197938:
    cntlzw r0, r27
    stfd f31, 0x8(r1)
    srwi r28, r0, 5
    li r29, 0x1
    li r30, 0x0
    li r31, -0x1
lbl_80197950:
    cmpwi r28, 0x0
    bne lbl_80197984
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r29
    stw r0, 0xc(r1)
    adde r0, r3, r30
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    bl fn_80195C2C
    cmpwi r3, 0x2
    beq lbl_80197B94
    b lbl_8019799C
lbl_80197984:
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r31
    stw r0, 0xc(r1)
    adde r0, r3, r31
    stw r0, 0x8(r1)
lbl_8019799C:
    lfd f1, 0x8(r1)
    addi r3, r1, 0x78
    bl __num2dec_internal
    cmpwi r27, 0x0
    beq lbl_801979C4
    addi r3, r1, 0x78
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197B34
lbl_801979C4:
    cmpwi r27, 0x0
    bne lbl_80197AD0
    addi r3, r1, 0xfc
    addi r4, r1, 0x78
    bl __less_dec
    cmpwi r3, 0x0
    bne lbl_80197AD0
    fmr f0, f31
    lfd f31, 0x8(r1)
    lwz r21, 0xa4(r1)
    lwz r12, 0x78(r1)
    lwz r22, 0xa8(r1)
    lwz r11, 0x7c(r1)
    lwz r23, 0xac(r1)
    lwz r10, 0x80(r1)
    lwz r24, 0xb0(r1)
    lwz r9, 0x84(r1)
    lwz r25, 0xb4(r1)
    lwz r8, 0x88(r1)
    lwz r26, 0xb8(r1)
    lwz r7, 0x8c(r1)
    lwz r31, 0xbc(r1)
    lwz r6, 0x90(r1)
    lwz r30, 0xc0(r1)
    lwz r5, 0x94(r1)
    lwz r29, 0xc4(r1)
    lwz r4, 0x98(r1)
    lwz r28, 0xc8(r1)
    lwz r3, 0x9c(r1)
    lhz r27, 0xcc(r1)
    lhz r0, 0xa0(r1)
    stw r21, 0x4c(r1)
    stw r22, 0x50(r1)
    stw r23, 0x54(r1)
    stw r24, 0x58(r1)
    stw r25, 0x5c(r1)
    stw r26, 0x60(r1)
    stw r31, 0x64(r1)
    stw r30, 0x68(r1)
    stw r29, 0x6c(r1)
    stw r28, 0x70(r1)
    sth r27, 0x74(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stw r21, 0x78(r1)
    stw r22, 0x7c(r1)
    stw r23, 0x80(r1)
    stw r24, 0x84(r1)
    stw r25, 0x88(r1)
    stw r26, 0x8c(r1)
    stw r31, 0x90(r1)
    stw r30, 0x94(r1)
    stw r29, 0x98(r1)
    stw r28, 0x9c(r1)
    sth r27, 0xa0(r1)
    stfd f31, 0x10(r1)
    stfd f0, 0x8(r1)
    b lbl_80197B34
lbl_80197AD0:
    lwz r12, 0x78(r1)
    lwz r11, 0x7c(r1)
    lwz r10, 0x80(r1)
    lwz r9, 0x84(r1)
    lwz r8, 0x88(r1)
    lwz r7, 0x8c(r1)
    lwz r6, 0x90(r1)
    lwz r5, 0x94(r1)
    lwz r4, 0x98(r1)
    lwz r3, 0x9c(r1)
    lhz r0, 0xa0(r1)
    lfd f31, 0x8(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stfd f31, 0x10(r1)
    b lbl_80197950
lbl_80197B34:
    addi r3, r1, 0x4c
    addi r4, r1, 0xfc
    addi r5, r1, 0xa4
    bl __minus_dec
    addi r3, r1, 0x20
    addi r4, r1, 0x78
    addi r5, r1, 0xfc
    bl __minus_dec
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl __equals_dec
    cmpwi r3, 0x0
    beq lbl_80197B7C
    lwz r0, 0x14(r1)
    clrlwi. r0, r0, 31
    beq lbl_80197B94
    lfd f31, 0x8(r1)
    b lbl_80197B94
lbl_80197B7C:
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl __less_dec
    cmpwi r3, 0x0
    bne lbl_80197B94
    lfd f31, 0x8(r1)
lbl_80197B94:
    lbz r0, 0xfc(r1)
    extsb. r0, r0
    beq lbl_80197BA4
    fneg f31, f31
lbl_80197BA4:
    fmr f1, f31
lbl_80197BA8:
    addi r11, r1, 0x170
    opword 0xE3E10178
    lfd f31, 0x170(r1)
    bl _restgpr_21
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

