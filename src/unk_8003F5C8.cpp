#include "types.h"

// Translation unit: src/unk_8003F5C8.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern "C" float lbl_8049E978;

// Forward declarations
extern "C" void _restfpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void _savefpr_29();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void fn_8002ADF8();
extern "C" void fn_8002B044();
extern "C" void fn_80030E80();
extern "C" void fn_800389F4();
extern "C" void fn_80039EE8();
extern "C" void fn_80039F10();
extern "C" void fn_80039F18();
extern "C" void fn_80039F2C();
extern "C" void fn_8003F5C8();
extern "C" void fn_8003F638();
extern "C" void fn_8003F794();
extern "C" void fn_8003F82C();
extern "C" void fn_8003F8A0();
extern "C" void fn_8003F934();
extern "C" void fn_8003FA5C();
extern "C" void fn_8003FADC();
extern "C" void fn_8003FB78();
extern "C" void fn_8003FBDC();
extern "C" void fn_8003FC9C();
extern "C" void fn_8003FD48();
extern "C" void fn_8003FDC0();
extern "C" void fn_8003FDF0();
extern "C" void fn_8003FE00();
extern "C" void fn_8003FE10();
extern "C" void fn_8003FE20();
extern "C" void fn_8003FE30();
extern "C" void fn_8003FE40();
extern "C" void fn_8003FE50();
extern "C" void fn_8003FE58();
extern "C" void fn_8003FE6C();
extern "C" void fn_8003FE80();
extern "C" void fn_8003FE94();
extern "C" void fn_8003FEEC();
extern "C" void fn_801EDD5C();
extern "C" void fn_801F4508();
extern "C" void fn_801F4550();
extern "C" void fn_801F458C();
extern "C" void fn_801F45CC();
extern "C" void fn_801F464C();
extern "C" void fn_801F46CC();
extern "C" void fn_801F470C();
extern "C" void fn_801F476C();
extern "C" void fn_801F47DC();
extern "C" void fn_801F484C();
extern "C" void fn_801F4F4C();
extern "C" void fn_801F4FA4();
extern "C" void fn_801F5064();

// ----------------------------------------------------------------------------
// fn_8003F5C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F5C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    bl fn_801EDD5C
    addi r3, r1, 0x8
    bl fn_80039EE8
    cmpwi r3, 0x0
    beq lbl_8003F61C
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_801F5064
    b lbl_8003F620
lbl_8003F61C:
    li r3, 0x0
lbl_8003F620:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F638
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F638() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x0(r4)
    cmplwi r0, 0xffff
    beq lbl_8003F778
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8003F674
    bl fn_8003FE40
    b lbl_8003F678
lbl_8003F674:
    bl fn_8003FE30
lbl_8003F678:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8003F690
    mr r3, r30
    bl fn_8003FE20
    b lbl_8003F698
lbl_8003F690:
    mr r3, r30
    bl fn_8003FE10
lbl_8003F698:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8003F6B0
    mr r3, r30
    bl fn_8003FE00
    b lbl_8003F6B8
lbl_8003F6B0:
    mr r3, r30
    bl fn_8003FDF0
lbl_8003F6B8:
    lwz r0, 0x28(r31)
    stw r0, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_801F4508
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_8003F6F0
    mr r3, r30
    lfs f1, 0x10(r31)
    lfs f2, 0x14(r31)
    lfs f3, 0x18(r31)
    bl fn_801F4550
    b lbl_8003F770
lbl_8003F6F0:
    cmplwi r0, 0x1
    bne lbl_8003F748
    mr r3, r30
    lfs f1, 0x10(r31)
    lfs f2, 0x14(r31)
    lfs f3, 0x18(r31)
    bl fn_801F4550
    mr r3, r30
    lfs f1, 0x1c(r31)
    lfs f2, 0x20(r31)
    lfs f3, 0x24(r31)
    bl fn_801F458C
    mr r3, r30
    lfs f1, 0x30(r31)
    lwz r4, 0x2c(r31)
    bl fn_801F45CC
    mr r3, r30
    lfs f1, 0x38(r31)
    lfs f2, 0x3c(r31)
    lwz r4, 0x34(r31)
    bl fn_801F464C
    b lbl_8003F770
lbl_8003F748:
    cmplwi r0, 0x2
    bne lbl_8003F770
    mr r3, r30
    lfs f1, 0x1c(r31)
    lfs f2, 0x20(r31)
    lfs f3, 0x24(r31)
    bl fn_801F46CC
    mr r3, r30
    lfs f1, 0x40(r31)
    bl fn_801F470C
lbl_8003F770:
    li r3, 0x1
    b lbl_8003F77C
lbl_8003F778:
    li r3, 0x0
lbl_8003F77C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F794
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F794() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_800389F4
    bl fn_8002ADF8
    bl fn_80039F2C
    mr r31, r3
    bl fn_80039F10
    cmplw r29, r3
    bge lbl_8003F810
    mr r3, r31
    bl fn_8003FE50
    slwi r0, r29, 2
    add r3, r3, r0
    lwz r0, 0x0(r30)
    cmplwi r0, 0x3
    bne lbl_8003F810
    lbz r0, 0x28(r30)
    stb r0, 0x0(r3)
    lbz r0, 0x29(r30)
    stb r0, 0x1(r3)
    lbz r0, 0x2a(r30)
    stb r0, 0x2(r3)
    lbz r0, 0x2b(r30)
    stb r0, 0x3(r3)
    li r3, 0x1
    b lbl_8003F814
lbl_8003F810:
    li r3, 0x0
lbl_8003F814:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F82C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F82C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r29
    bl fn_801EDD5C
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_801F4F4C
    cmpwi r3, 0x0
    beq lbl_8003F884
    mr r4, r31
    bl fn_8003F638
    b lbl_8003F888
lbl_8003F884:
    li r3, 0x0
lbl_8003F888:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F8A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F8A0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    bl fn_801EDD5C
    addi r3, r1, 0x8
    bl fn_801F4FA4
    cmpwi r3, 0x0
    beq lbl_8003F918
    lwz r0, 0x0(r31)
    cmplwi r0, 0x3
    bne lbl_8003F918
    lbz r0, 0x28(r31)
    stb r0, 0x0(r3)
    lbz r0, 0x29(r31)
    stb r0, 0x1(r3)
    lbz r0, 0x2a(r31)
    stb r0, 0x2(r3)
    lbz r0, 0x2b(r31)
    stb r0, 0x3(r3)
    li r3, 0x1
    b lbl_8003F91C
lbl_8003F918:
    li r3, 0x0
lbl_8003F91C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F934
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F934() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003FEEC
    cmplwi r3, 0x1
    bne lbl_8003F968
    li r0, 0x1
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F968:
    mr r3, r30
    bl fn_80039F18
    cmplwi r3, 0x1
    bne lbl_8003F984
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F984:
    mr r3, r30
    bl fn_8003FE94
    cmplwi r3, 0x1
    bne lbl_8003F9A0
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F9A0:
    lis r3, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_8003F9AC:
    lwz r0, 0x0(r31)
    cmplwi r0, 0xffff
    beq lbl_8003FA40
    mr r3, r30
    bl fn_8003FE80
    stw r3, 0x4(r31)
    mr r3, r30
    bl fn_8003FE6C
    stw r3, 0x8(r31)
    mr r3, r30
    bl fn_8003FE58
    stw r3, 0xc(r31)
    li r0, 0x0
    stw r0, 0x2c(r31)
    lfs f0, lbl_8049E978
    stfs f0, 0x30(r31)
    stw r0, 0x34(r31)
    stfs f0, 0x38(r31)
    stfs f0, 0x3c(r31)
    la r3, lbl_8049E978
    lfs f0, 0x4(r3)
    stfs f0, 0x40(r31)
    mr r3, r30
    addi r4, r31, 0x10
    addi r5, r31, 0x14
    addi r6, r31, 0x18
    bl fn_801F476C
    mr r3, r30
    addi r4, r31, 0x1c
    addi r5, r31, 0x20
    addi r6, r31, 0x24
    bl fn_801F47DC
    mr r3, r30
    addi r4, r31, 0x28
    bl fn_801F484C
    li r3, 0x1
    b lbl_8003FA44
lbl_8003FA40:
    li r3, 0x0
lbl_8003FA44:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FA5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FA5C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r29
    bl fn_801EDD5C
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_801F4F4C
    cmpwi r3, 0x0
    beq lbl_8003FAB4
    mr r4, r31
    bl fn_8003F934
    b lbl_8003FAC4
lbl_8003FAB4:
    lis r3, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    li r3, 0x0
lbl_8003FAC4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FADC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FADC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    bl fn_801EDD5C
    addi r3, r1, 0x8
    bl fn_801F4FA4
    cmpwi r3, 0x0
    beq lbl_8003FB50
    li r0, 0x3
    stw r0, 0x0(r31)
    lbz r0, 0x0(r3)
    stb r0, 0x28(r31)
    lbz r0, 0x1(r3)
    stb r0, 0x29(r31)
    lbz r0, 0x2(r3)
    stb r0, 0x2a(r31)
    lbz r0, 0x3(r3)
    stb r0, 0x2b(r31)
    li r3, 0x1
    b lbl_8003FB60
lbl_8003FB50:
    lis r3, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    li r3, 0x0
lbl_8003FB60:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FB78
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FB78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r5
    li r5, 0x0
    stw r5, 0x0(r3)
    li r0, 0x1
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r30, 0x10
    mr r4, r31
    bl fn_8002B044
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FBDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FBDC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r31, 0x0
    stw r31, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r27, 0x10
    mr r4, r28
    bl fn_8002B044
    addi r3, r27, 0x1c
    mr r4, r29
    bl fn_8002B044
    stw r30, 0x34(r27)
    stfs f30, 0x38(r27)
    stfs f31, 0x3c(r27)
    stw r31, 0x2c(r27)
    lfs f0, lbl_8049E978
    stfs f0, 0x30(r27)
    li r3, 0x1
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FC9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FC9C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savefpr_29
    addi r11, r1, 0x28
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f29, f1
    mr r31, r8
    fmr f30, f2
    fmr f31, f3
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r27, 0x10
    mr r4, r28
    bl fn_8002B044
    addi r3, r27, 0x1c
    mr r4, r29
    bl fn_8002B044
    stw r30, 0x2c(r27)
    stfs f29, 0x30(r27)
    stw r31, 0x34(r27)
    stfs f30, 0x38(r27)
    stfs f31, 0x3c(r27)
    li r3, 0x1
    addi r11, r1, 0x40
    bl _restfpr_29
    addi r11, r1, 0x28
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FD48
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FD48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    mr r31, r5
    fmr f31, f1
    li r0, 0x2
    stw r0, 0x0(r3)
    li r0, 0x1
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r30, 0x1c
    mr r4, r31
    bl fn_8002B044
    stfs f31, 0x40(r30)
    li r3, 0x1
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FDC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FDC0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x3
    stw r0, 0x0(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FDF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FDF0() {
    nofralloc
    lwz r0, 0x0(r3)
    ori r0, r0, 0x20
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE00
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE00() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE10
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE10() {
    nofralloc
    lwz r0, 0x0(r3)
    ori r0, r0, 0x10
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE20
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE20() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE30
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE30() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE40
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE40() {
    nofralloc
    lwz r0, 0x0(r3)
    ori r0, r0, 0x4
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE50
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE50() {
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE58
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE58() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 26, 26
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE6C() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE80
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE80() {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r3, r0, 0, 29, 29
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FE94
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FE94() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    bl fn_8003FEEC
    cmpwi r3, 0x0
    bne lbl_8003FED0
    mr r3, r30
    bl fn_80039F18
    cmpwi r3, 0x0
    bne lbl_8003FED0
    li r31, 0x1
lbl_8003FED0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003FEEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003FEEC() {
    nofralloc
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 31
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

