#include "types.h"

// Translation unit: src/unk_8003DB68.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern "C" float lbl_8049D654;
extern "C" float lbl_8049D694;
extern "C" float lbl_8049E930;
extern "C" float lbl_8049E938;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803C1A40[];

// Forward declarations
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_800163E4();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016C30();
extern "C" void fn_80016CAC();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80019D1C();
extern "C" void fn_80019D5C();
extern "C" void fn_80019D70();
extern "C" void fn_80019D94();
extern "C" void fn_80019DAC();
extern "C" void fn_80019E14();
extern "C" void fn_80019E18();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B4();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001B8BC();
extern "C" void fn_8001B9D4();
extern "C" void fn_8001D9A4();
extern "C" void fn_8001F9C8();
extern "C" void fn_8003DB68();
extern "C" void fn_8003DD34();
extern "C" void fn_8003DDA8();
extern "C" void fn_8003E26C();
extern "C" void fn_8003E55C();
extern "C" void fn_8003E600();
extern "C" void fn_8003EBA8();
extern "C" void fn_8003ECD8();
extern "C" void fn_8003F51C();
extern "C" void fn_8003F578();
extern "C" void fn_8003F57C();
extern "C" void fn_8003F58C();
extern "C" void fn_8003F5B4();
extern "C" void fn_8010E6AC();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_8010EFE8();
extern "C" void fn_80121D98();
extern "C" void fn_80170E2C();
extern "C" void fn_80170E84();
extern "C" void fn_80172608();
extern "C" void fn_80173580();
extern "C" void fn_801735E8();
extern "C" void fn_80173750();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017AE0C();
extern "C" void fn_802DFDF8();
extern "C" void fn_802E0688();
extern "C" void fn_802E06BC();
extern "C" void fn_802E1ABC();
extern "C" void fn_802E37E0();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_8003DB68
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003DB68() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r21, r3
    mr r30, r4
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r31, r8
    mr r25, r9
    mr r26, r10
    lwz r27, 0x48(r1)
    li r3, 0x12
    lis r4, fn_8003DDA8@ha
    addi r4, r4, fn_8003DDA8@l
    lwz r5, lbl_8049D654
    bl fn_80177280
    mr r28, r3
    cmpwi r3, 0x0
    bne lbl_8003DBC8
    li r3, 0x0
    b lbl_8003DD1C
lbl_8003DBC8:
    li r4, 0x0
    li r5, 0x90
    bl memset
    li r29, 0x0
    stw r29, 0x14(r28)
    addi r3, r28, 0x4
    bl fn_80019D5C
    cmpwi r21, 0x0
    beq lbl_8003DC00
    stw r21, 0x1c(r28)
    mr r3, r21
    bl fn_80019D1C
    stw r3, 0x20(r28)
    b lbl_8003DC08
lbl_8003DC00:
    stw r29, 0x1c(r28)
    stw r29, 0x20(r28)
lbl_8003DC08:
    ori r0, r26, 0x80
    stw r0, 0x10(r28)
    stw r27, 0x18(r28)
    stw r22, 0x30(r28)
    stw r23, 0x34(r28)
    extsh r0, r24
    sth r0, 0x5c(r28)
    extsh r0, r25
    sth r0, 0x60(r28)
    srawi r0, r25, 1
    addze r0, r0
    extsh r0, r0
    sth r0, 0x62(r28)
    li r0, -0x1
    stw r0, 0x88(r28)
    lfs f0, lbl_8049E938
    stfs f0, 0x80(r28)
    stw r30, 0x24(r28)
    li r30, 0x0
    b lbl_8003DC98
lbl_8003DC58:
    lwz r3, lbl_8049D694
    bl fn_80019D70
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8003DCA0
    li r4, 0x0
    li r5, 0x44
    bl memset
    mr r3, r29
    addi r4, r29, 0x4
    addi r5, r28, 0x4
    bl fn_8001D9A4
    lha r3, 0x5e(r28)
    addi r0, r3, 0x1
    sth r0, 0x5e(r28)
    addi r30, r30, 0x1
lbl_8003DC98:
    cmpw r30, r31
    blt lbl_8003DC58
lbl_8003DCA0:
    lha r0, 0x5e(r28)
    cmpwi r0, 0x0
    bne lbl_8003DCBC
    mr r3, r28
    bl fn_8017776C
    li r3, 0x0
    b lbl_8003DD1C
lbl_8003DCBC:
    mr r3, r28
    bl fn_8003E26C
    cmpwi r3, 0x0
    bne lbl_8003DCE4
    cmpwi r28, 0x0
    beq lbl_8003DCDC
    mr r3, r28
    bl fn_8003DD34
lbl_8003DCDC:
    li r3, 0x0
    b lbl_8003DD1C
lbl_8003DCE4:
    li r3, 0xc
    lwz r4, 0x18(r28)
    mr r5, r28
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8003DD18
    cmpwi r28, 0x0
    beq lbl_8003DD10
    mr r3, r28
    bl fn_8003DD34
lbl_8003DD10:
    li r3, 0x0
    b lbl_8003DD1C
lbl_8003DD18:
    mr r3, r28
lbl_8003DD1C:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8003DD34
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003DD34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0xc(r3)
    b lbl_8003DD60
lbl_8003DD54:
    lwz r3, lbl_8049D694
    bl fn_80019D94
    lwz r31, 0x8(r31)
lbl_8003DD60:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_8003DD54
    lwz r31, 0x2c(r30)
    cmpwi r31, 0x0
    beq lbl_8003DD88
    li r3, 0x0
    bl fn_8010E6AC
    mr r4, r31
    bl fn_80170E84
lbl_8003DD88:
    mr r3, r30
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003DDA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003DDA8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8003DEFC
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8003DDEC
    li r0, 0xf1
    stw r0, 0x14(r3)
    li r3, 0x1
    b lbl_8003E248
lbl_8003DDEC:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8003DEF4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi cr1, r5, 0x3e9
    bne cr1, lbl_8003DE60
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8003DE24
    cmpwi r0, 0xff
    beq lbl_8003DE4C
    b lbl_8003DE60
lbl_8003DE24:
    bne cr1, lbl_8003DE60
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_8003DE60
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8003E248
lbl_8003DE4C:
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8003E248
lbl_8003DE60:
    lwz r0, 0x14(r3)
    cmpwi r0, 0xf1
    beq lbl_8003DEF4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x24(r4)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bne lbl_8003DEF4
    lwz r0, 0x8c(r3)
    cmplw r5, r0
    bne lbl_8003DEF4
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8003DEAC
    li r0, 0x2
    stw r0, 0x14(r3)
    b lbl_8003DEE8
lbl_8003DEAC:
    lwz r5, 0xc(r3)
    li r0, 0xef
    b lbl_8003DEDC
lbl_8003DEB8:
    lhz r3, 0x0(r4)
    clrlwi r3, r3, 31
    cmpwi r3, 0x0
    bne lbl_8003DED8
    lhz r3, 0x2(r4)
    cmplwi r3, 0xef
    bge lbl_8003DED8
    sth r0, 0x2(r4)
lbl_8003DED8:
    lwz r5, 0x8(r5)
lbl_8003DEDC:
    lwz r4, 0x0(r5)
    cmplwi r4, 0x1
    bne lbl_8003DEB8
lbl_8003DEE8:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8003E248
lbl_8003DEF4:
    li r3, 0x0
    b lbl_8003E248
lbl_8003DEFC:
    lwz r3, 0x1c(r3)
    addi r4, r31, 0x10
    lwz r5, 0x14(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8003DF20
    cmpwi r3, 0x2
    beq lbl_8003DF2C
    b lbl_8003DF34
lbl_8003DF20:
    li r0, 0xef
    stw r0, 0x14(r31)
    b lbl_8003DF34
lbl_8003DF2C:
    li r0, 0xf1
    stw r0, 0x14(r31)
lbl_8003DF34:
    lwz r3, 0x14(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8003DF70
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8003DF70
    lwz r4, 0x24(r31)
    lwz r3, 0x1c(r31)
    lwz r0, 0x377c(r3)
    cmplw r4, r0
    beq lbl_8003DF70
    li r0, 0xf0
    stw r0, 0x14(r31)
lbl_8003DF70:
    lwz r0, 0x14(r31)
    cmplwi r0, 0x2
    ble lbl_8003DF84
    cmpwi r0, 0xf0
    bne lbl_8003DFA0
lbl_8003DF84:
    lwz r3, 0x1c(r31)
    lwz r4, 0x10(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8003DFA0
    li r3, 0x0
    b lbl_8003E248
lbl_8003DFA0:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_8003DFD0
    cmpwi r0, 0x1
    beq lbl_8003E028
    cmpwi r0, 0x2
    beq lbl_8003E1A8
    cmpwi r0, 0xf0
    beq lbl_8003E220
    cmpwi r0, 0xf1
    beq lbl_8003E230
    b lbl_8003E244
lbl_8003DFD0:
    lwz r28, 0xc(r31)
    la r3, lbl_8049E938
    lfs f31, 0x4(r3)
    b lbl_8003E010
lbl_8003DFE0:
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8003DFFC
    lhz r0, 0x0(r29)
    ori r0, r0, 0x1
    sth r0, 0x0(r29)
lbl_8003DFFC:
    lfs f2, 0x64(r31)
    fmuls f1, f2, f31
    bl fn_80172608
    stfs f1, 0x14(r29)
    lwz r28, 0x8(r28)
lbl_8003E010:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_8003DFE0
    li r0, 0x1
    stw r0, 0x14(r31)
    b lbl_8003E244
lbl_8003E028:
    lwz r3, 0x58(r31)
    li r4, 0x0
    lha r0, 0x5c(r31)
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8003E10C
    lha r3, 0x86(r31)
    addi r0, r3, 0x1
    sth r0, 0x86(r31)
    extsh r3, r0
    lha r0, 0x84(r31)
    cmpw r3, r0
    ble lbl_8003E10C
    lwz r3, 0xc(r31)
    b lbl_8003E100
lbl_8003E070:
    lhz r0, 0x0(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8003E0FC
    li r29, 0x0
    sth r29, 0x86(r31)
    sth r29, 0x0(r28)
    sth r29, 0x2(r28)
    la r30, lbl_8049E938
    lfs f2, 0x64(r31)
    lfs f0, 0x4(r30)
    fmuls f1, f2, f0
    bl fn_80172608
    stfs f1, 0x14(r28)
    lfs f1, 0x8(r30)
    stfs f1, 0x18(r28)
    stw r29, 0x1c(r28)
    stfs f1, 0x2c(r28)
    lfs f0, 0xc(r30)
    stfs f0, 0x30(r28)
    li r0, 0x1
    sth r0, 0x3e(r28)
    sth r29, 0x40(r28)
    lwz r3, 0x38(r28)
    sth r29, 0x0(r3)
    lwz r3, 0x20(r28)
    stfs f1, 0x0(r3)
    lwz r3, 0x28(r28)
    stfs f1, 0x0(r3)
    lfs f1, 0x10(r30)
    lfs f2, 0x14(r30)
    bl fn_80172608
    lwz r3, 0x24(r28)
    stfs f1, 0x0(r3)
    b lbl_8003E10C
lbl_8003E0FC:
    lwz r3, 0x8(r3)
lbl_8003E100:
    lwz r28, 0x0(r3)
    cmplwi r28, 0x1
    bne lbl_8003E070
lbl_8003E10C:
    lfs f1, 0x78(r31)
    lfs f0, 0x7c(r31)
    fadds f0, f1, f0
    stfs f0, 0x78(r31)
    li r29, 0x0
    lwz r28, 0xc(r31)
    b lbl_8003E148
lbl_8003E128:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8003E144
    mr r3, r31
    bl fn_8003E600
    addi r29, r29, 0x1
lbl_8003E144:
    lwz r28, 0x8(r28)
lbl_8003E148:
    lwz r4, 0x0(r28)
    cmplwi r4, 0x1
    bne lbl_8003E128
    lwz r0, 0x10(r31)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_8003E178
    cmpwi r29, 0x0
    bne lbl_8003E19C
    li r0, 0xf0
    stw r0, 0x14(r31)
    b lbl_8003E19C
lbl_8003E178:
    lwz r3, 0x88(r31)
    cmpwi r3, 0x0
    beq lbl_8003E19C
    subi r0, r3, 0x1
    stw r0, 0x88(r31)
    cmpwi r0, 0x0
    bne lbl_8003E19C
    li r0, 0x2
    stw r0, 0x14(r31)
lbl_8003E19C:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_8003E244
lbl_8003E1A8:
    lwz r3, 0x58(r31)
    li r4, 0x0
    lha r0, 0x5c(r31)
    slwi r5, r0, 2
    bl memset
    lfs f1, 0x78(r31)
    lfs f0, 0x7c(r31)
    fadds f0, f1, f0
    stfs f0, 0x78(r31)
    li r29, 0x0
    lwz r28, 0xc(r31)
    b lbl_8003E1F8
lbl_8003E1D8:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8003E1F4
    mr r3, r31
    bl fn_8003E600
    addi r29, r29, 0x1
lbl_8003E1F4:
    lwz r28, 0x8(r28)
lbl_8003E1F8:
    lwz r4, 0x0(r28)
    cmplwi r4, 0x1
    bne lbl_8003E1D8
    cmpwi r29, 0x0
    bne lbl_8003E214
    li r0, 0xf0
    stw r0, 0x14(r31)
lbl_8003E214:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x2
    beq lbl_8003E244
lbl_8003E220:
    li r0, 0xf1
    stw r0, 0x14(r31)
    cmpwi r0, 0xf0
    beq lbl_8003E244
lbl_8003E230:
    lwz r3, 0x18(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8003DD34
lbl_8003E244:
    li r3, 0x0
lbl_8003E248:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8003E26C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003E26C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r29, r3
    lwz r31, 0x30(r3)
    lwz r30, 0x34(r3)
    lha r0, 0x5c(r3)
    slwi r0, r0, 2
    mulli r5, r0, 0x3
    lha r0, 0x5e(r3)
    slwi r4, r0, 2
    lha r0, 0x60(r3)
    slwi r0, r0, 2
    mullw r0, r4, r0
    add r25, r5, r0
    li r3, 0x0
    bl fn_8010E6AC
    mr r4, r25
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_8003E2F0
    li r3, 0x0
    b lbl_8003E520
lbl_8003E2F0:
    li r4, 0x0
    mr r5, r25
    bl memset
    lwz r0, 0x8(r1)
    stw r0, 0x2c(r29)
    addi r3, r1, 0x8
    lha r0, 0x5c(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x50(r29)
    addi r3, r1, 0x8
    lha r0, 0x5c(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x54(r29)
    addi r3, r1, 0x8
    lha r0, 0x5c(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x58(r29)
    la r28, lbl_8049E938
    lha r0, 0x5e(r29)
    lfd f1, lbl_8049E930
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x18(r28)
    fdivs f31, f0, f1
    lfs f1, 0x8(r28)
    fmr f2, f31
    bl fn_80172608
    fmr f29, f1
    lwz r25, 0xc(r29)
    li r27, 0x0
    lfs f30, 0xc(r28)
    li r28, 0x1
    b lbl_8003E40C
lbl_8003E390:
    sth r27, 0x0(r26)
    sth r27, 0x2(r26)
    stw r29, 0x10(r26)
    addi r3, r1, 0x8
    lha r0, 0x60(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x20(r26)
    addi r3, r1, 0x8
    lha r0, 0x60(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x24(r26)
    addi r3, r1, 0x8
    lha r0, 0x60(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x28(r26)
    addi r3, r1, 0x8
    lha r0, 0x60(r29)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x38(r26)
    stfs f30, 0x30(r26)
    lha r0, 0x60(r29)
    sth r0, 0x3c(r26)
    sth r28, 0x3e(r26)
    lwz r3, 0x24(r26)
    stfs f29, 0x0(r3)
    fadds f29, f29, f31
    lwz r25, 0x8(r25)
lbl_8003E40C:
    lwz r26, 0x0(r25)
    cmplwi r26, 0x1
    bne lbl_8003E390
    lwz r0, 0x24(r29)
    cmpwi r0, 0x0
    bne lbl_8003E430
    lwz r3, 0x1c(r29)
    lwz r0, 0x377c(r3)
    stw r0, 0x24(r29)
lbl_8003E430:
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_8003E44C
    la r3, lbl_8049E938
    lfs f30, 0xc(r3)
    b lbl_8003E45C
lbl_8003E44C:
    lwz r3, 0x1c(r29)
    lwz r3, 0x18(r3)
    bl fn_80121D98
    fmr f30, f1
lbl_8003E45C:
    li r25, 0x0
    li r28, 0x0
    addi r31, r31, 0x4
    la r3, lbl_8049E938
    lfs f31, 0x1c(r3)
    b lbl_8003E508
lbl_8003E474:
    lwz r3, 0x1c(r29)
    cmpwi r3, 0x0
    beq lbl_8003E4A0
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_8003E4A0
    lwz r3, 0x3780(r3)
    lwz r4, 0x24(r29)
    bl fn_80019E18
    b lbl_8003E4AC
lbl_8003E4A0:
    lwz r3, 0x24(r29)
    mr r4, r5
    bl fn_80019E14
lbl_8003E4AC:
    cmpwi r3, 0x0
    beq lbl_8003E504
    lwz r4, 0x50(r29)
    stwx r3, r4, r28
    lwz r0, 0x10(r29)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8003E4E8
    lwz r0, 0x0(r31)
    slwi r0, r0, 2
    lfsx f0, r30, r0
    fmuls f0, f30, f0
    lwz r3, 0x54(r29)
    stfsx f0, r3, r28
    b lbl_8003E4FC
lbl_8003E4E8:
    lfsx f0, r30, r28
    fmuls f0, f31, f0
    fmuls f0, f30, f0
    lwz r3, 0x54(r29)
    stfsx f0, r3, r28
lbl_8003E4FC:
    addi r25, r25, 0x1
    addi r28, r28, 0x4
lbl_8003E504:
    addi r31, r31, 0x4
lbl_8003E508:
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    bge lbl_8003E474
    extsh r0, r25
    sth r0, 0x5c(r29)
    li r3, 0x1
lbl_8003E520:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    li r0, 0x48
    opword 0x13A1000C
    lfd f29, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_8003E55C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003E55C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    slwi r31, r4, 2
    lwz r4, 0x58(r3)
    la r3, lbl_8049E938
    lfs f0, 0x8(r3)
    lfsx f1, r4, r31
    fcmpu cr0, f0, f1
    beq lbl_8003E598
    b lbl_8003E5E8
lbl_8003E598:
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x50(r29)
    lwzx r5, r5, r31
    bl fn_80173580
    addi r3, r1, 0x8
    li r4, 0x3
    lwz r5, 0x50(r29)
    addi r0, r30, 0x1
    slwi r0, r0, 2
    lwzx r5, r5, r0
    bl fn_80173580
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    lwz r3, 0x58(r29)
    stfsx f1, r3, r31
lbl_8003E5E8:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8003E600
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003E600() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    stfd f30, 0xc0(r1)
    opword 0xF3C100C8
    stfd f29, 0xb0(r1)
    opword 0xF3A100B8
    stfd f28, 0xa0(r1)
    opword 0xF38100A8
    stfd f27, 0x90(r1)
    opword 0xF3610098
    stfd f26, 0x80(r1)
    opword 0xF3410088
    stfd f25, 0x70(r1)
    opword 0xF3210078
    stfd f24, 0x60(r1)
    opword 0xF3010068
    stfd f23, 0x50(r1)
    opword 0xF2E10058
    stfd f22, 0x40(r1)
    opword 0xF2C10048
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    lhz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_8003E69C
    cmpwi r0, 0x1
    beq lbl_8003E6A4
    cmpwi r0, 0xef
    beq lbl_8003EAA8
    cmpwi r0, 0xf0
    beq lbl_8003EADC
    cmpwi r0, 0xf1
    beq lbl_8003EB10
    b lbl_8003EB18
lbl_8003E69C:
    li r0, 0x1
    sth r0, 0x2(r4)
lbl_8003E6A4:
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8003E730
    addi r3, r1, 0x14
    lwz r4, 0x50(r26)
    lwz r4, 0x0(r4)
    addi r5, r26, 0x38
    bl fn_80018AF8
    addi r3, r1, 0x8
    lwz r4, 0x50(r26)
    lwz r4, 0x4(r4)
    addi r5, r26, 0x44
    bl fn_80018AF8
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r3
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    fmr f26, f1
    stfs f1, 0x18(r27)
    lwz r3, 0x20(r27)
    li r4, 0x0
    lha r0, 0x60(r26)
    slwi r5, r0, 2
    bl memset
    li r0, 0x0
    sth r0, 0x40(r27)
    sth r0, 0x3e(r27)
    lhz r0, 0x0(r27)
    rlwinm r0, r0, 0, 31, 29
    clrlwi r0, r0, 16
    sth r0, 0x0(r27)
    b lbl_8003E800
lbl_8003E730:
    mr r3, r26
    lwz r4, 0x1c(r4)
    bl fn_8003E55C
    lfs f0, 0x18(r27)
    fcmpo cr0, f1, f0
    ble lbl_8003E750
    fsubs f25, f1, f0
    b lbl_8003E758
lbl_8003E750:
    la r3, lbl_8049E938
    lfs f25, 0x8(r3)
lbl_8003E758:
    lwz r0, 0x10(r26)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8003E770
    lfs f1, 0x14(r27)
    b lbl_8003E784
lbl_8003E770:
    la r3, lbl_8049E938
    lfs f0, 0x4(r3)
    lfs f2, 0x14(r27)
    fmuls f1, f0, f2
    bl fn_80172608
lbl_8003E784:
    fmr f23, f1
    fmr f26, f1
    la r3, lbl_8049E938
    lfs f24, 0x8(r3)
    b lbl_8003E7E0
lbl_8003E798:
    lwz r4, 0x1c(r27)
    lha r3, 0x5c(r26)
    subi r0, r3, 0x2
    cmplw r4, r0
    bne lbl_8003E7C4
    mr r3, r26
    bl fn_8003E55C
    stfs f1, 0x18(r27)
    li r0, 0xef
    sth r0, 0x2(r27)
    b lbl_8003E7E8
lbl_8003E7C4:
    stfs f24, 0x18(r27)
    addi r4, r4, 0x1
    stw r4, 0x1c(r27)
    fsubs f23, f23, f25
    mr r3, r26
    bl fn_8003E55C
    fmr f25, f1
lbl_8003E7E0:
    fcmpo cr0, f23, f25
    bgt lbl_8003E798
lbl_8003E7E8:
    lhz r0, 0x2(r27)
    cmplwi r0, 0x1
    bne lbl_8003E800
    lfs f0, 0x18(r27)
    fadds f0, f0, f23
    stfs f0, 0x18(r27)
lbl_8003E800:
    lha r29, 0x40(r27)
    lfs f0, 0x2c(r27)
    fadds f26, f26, f0
    lwz r0, 0x10(r26)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8003E824
    lfs f1, 0x6c(r26)
    b lbl_8003E838
lbl_8003E824:
    la r3, lbl_8049E938
    lfs f2, 0x6c(r26)
    lfs f0, 0x4(r3)
    fmuls f1, f2, f0
    bl fn_80172608
lbl_8003E838:
    fmr f27, f1
    fmr f28, f1
    la r3, lbl_8049E938
    lfs f30, 0x4(r3)
    lfs f29, 0x1c(r3)
    lfs f24, 0x28(r3)
    lfs f25, 0x20(r3)
    lfs f31, 0x24(r3)
    b lbl_8003EA94
lbl_8003E85C:
    lwz r3, 0x20(r27)
    slwi r0, r29, 2
    lfsx f23, r3, r0
    lwz r3, 0x38(r27)
    slwi r0, r29, 1
    lhax r28, r3, r0
    mr r3, r26
    mr r4, r28
    bl fn_8003E55C
    fmr f22, f1
    fadds f23, f23, f27
    fcmpo cr0, f23, f1
    ble lbl_8003E8DC
    b lbl_8003E8CC
lbl_8003E894:
    addi r28, r28, 0x1
    fmr f28, f22
    lha r3, 0x5c(r26)
    subi r0, r3, 0x2
    cmpw r28, r0
    ble lbl_8003E8BC
    mr r28, r0
    fmr f27, f26
    fsubs f28, f23, f22
    b lbl_8003E8D4
lbl_8003E8BC:
    mr r3, r26
    mr r4, r28
    bl fn_8003E55C
    fadds f22, f22, f1
lbl_8003E8CC:
    fcmpo cr0, f23, f22
    bgt lbl_8003E894
lbl_8003E8D4:
    fsubs f28, f23, f28
    b lbl_8003E8E0
lbl_8003E8DC:
    fmr f28, f23
lbl_8003E8E0:
    mr r30, r29
    lha r3, 0x3e(r27)
    lha r0, 0x3c(r27)
    cmpw r3, r0
    bge lbl_8003E8FC
    addi r0, r3, 0x1
    sth r0, 0x3e(r27)
lbl_8003E8FC:
    lha r3, 0x40(r27)
    addi r4, r3, 0x1
    lha r3, 0x3c(r27)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r0, r0, r4
    extsh r29, r0
    sth r29, 0x40(r27)
    extsh r4, r28
    lwz r3, 0x38(r27)
    slwi r0, r29, 1
    sthx r4, r3, r0
    mr r3, r26
    mr r4, r28
    bl fn_8003E55C
    fcmpo cr0, f1, f29
    bge lbl_8003E964
    slwi r31, r29, 2
    lwz r3, 0x20(r27)
    stfsx f29, r3, r31
    lwz r3, 0x54(r26)
    slwi r0, r28, 2
    lfsx f0, r3, r0
    lwz r3, 0x28(r27)
    stfsx f0, r3, r31
    b lbl_8003E9A4
lbl_8003E964:
    slwi r31, r29, 2
    lwz r3, 0x20(r27)
    stfsx f28, r3, r31
    lwz r3, 0x54(r26)
    slwi r0, r28, 2
    add r4, r3, r0
    lwz r3, 0x20(r27)
    lfsx f0, r3, r31
    fdivs f2, f0, f1
    lfs f0, 0x4(r4)
    lfs f1, 0x0(r4)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f0, f1, f0
    lwz r3, 0x28(r27)
    stfsx f0, r3, r31
lbl_8003E9A4:
    lwz r0, 0x10(r26)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8003EA10
    lfs f2, 0x70(r26)
    fmuls f0, f30, f2
    fneg f1, f0
    bl fn_80172608
    lwz r3, 0x28(r27)
    lfsx f0, r3, r31
    fadds f0, f0, f1
    stfsx f0, r3, r31
    lfs f1, 0x80(r26)
    lwz r3, 0x28(r27)
    lfsx f0, r3, r31
    fdivs f0, f25, f0
    fadds f0, f25, f0
    fmuls f1, f1, f0
    fadds f0, f31, f27
    fdivs f0, f0, f31
    fmuls f1, f1, f0
    lwz r3, 0x24(r27)
    slwi r0, r30, 2
    lfsx f0, r3, r0
    fadds f0, f1, f0
    stfsx f0, r3, r31
    b lbl_8003EA5C
lbl_8003EA10:
    lfs f2, 0x70(r26)
    fmuls f0, f30, f2
    fneg f1, f0
    bl fn_80172608
    lwz r3, 0x28(r27)
    lfsx f0, r3, r31
    fadds f0, f0, f1
    stfsx f0, r3, r31
    lwz r3, 0x28(r27)
    lfsx f0, r3, r31
    fdivs f0, f24, f0
    fadds f2, f25, f0
    lwz r28, 0x24(r27)
    fneg f1, f2
    bl fn_80172608
    slwi r0, r30, 2
    lfsx f0, r28, r0
    fadds f0, f0, f1
    stfsx f0, r28, r31
lbl_8003EA5C:
    fsubs f26, f26, f27
    lwz r0, 0x10(r26)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8003EA94
    lhz r3, 0x0(r27)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8003EAA0
    fcmpo cr0, f26, f27
    bge lbl_8003EA94
    ori r0, r3, 0x2
    sth r0, 0x0(r27)
    fmr f27, f26
lbl_8003EA94:
    fcmpo cr0, f26, f27
    opword 0x4C411382
    beq lbl_8003E85C
lbl_8003EAA0:
    stfs f26, 0x2c(r27)
    b lbl_8003EB18
lbl_8003EAA8:
    li r0, 0xf0
    sth r0, 0x2(r4)
    lha r0, 0x62(r3)
    lfd f1, lbl_8049E930
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x30(r4)
    fdivs f0, f0, f1
    stfs f0, 0x34(r4)
lbl_8003EADC:
    lfs f1, 0x30(r4)
    lfs f0, 0x34(r4)
    fsubs f1, f1, f0
    stfs f1, 0x30(r4)
    la r3, lbl_8049E938
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_8003EB18
    li r0, 0xf1
    sth r0, 0x2(r4)
    li r0, 0x1
    sth r0, 0x0(r4)
    b lbl_8003EB18
lbl_8003EB10:
    li r0, 0x1
    sth r0, 0x0(r4)
lbl_8003EB18:
    li r0, 0xd8
    opword 0x13E1000C
    lfd f31, 0xd0(r1)
    li r0, 0xc8
    opword 0x13C1000C
    lfd f30, 0xc0(r1)
    li r0, 0xb8
    opword 0x13A1000C
    lfd f29, 0xb0(r1)
    li r0, 0xa8
    opword 0x1381000C
    lfd f28, 0xa0(r1)
    li r0, 0x98
    opword 0x1361000C
    lfd f27, 0x90(r1)
    li r0, 0x88
    opword 0x1341000C
    lfd f26, 0x80(r1)
    li r0, 0x78
    opword 0x1321000C
    lfd f25, 0x70(r1)
    li r0, 0x68
    opword 0x1301000C
    lfd f24, 0x60(r1)
    li r0, 0x58
    opword 0x12E1000C
    lfd f23, 0x50(r1)
    li r0, 0x48
    opword 0x12C1000C
    lfd f22, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_8003EBA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003EBA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r31, r3
    lwz r3, 0x1c(r30)
    lwz r4, 0x10(r30)
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_8003ECC0
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x10(r30)
    li r4, 0xc
    bl fn_800163E4
    lwz r3, 0x28(r30)
    li r4, 0x0
    bl fn_802E37E0
    bl fn_802E0688
    li r3, 0x9
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xb
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0xd
    li r4, 0x1
    bl fn_802DFDF8
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl fn_802E06BC
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl fn_802E06BC
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_8017AE0C
    lwz r31, 0xc(r30)
    b lbl_8003ECA4
lbl_8003EC84:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8003ECA0
    mr r3, r30
    addi r5, r1, 0x8
    bl fn_8003ECD8
lbl_8003ECA0:
    lwz r31, 0x8(r31)
lbl_8003ECA4:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_8003EC84
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8003ECC0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8003ECD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003ECD8() {
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    opword 0xF3E10168
    stfd f30, 0x150(r1)
    opword 0xF3C10158
    stfd f29, 0x140(r1)
    opword 0xF3A10148
    stfd f28, 0x130(r1)
    opword 0xF3810138
    stfd f27, 0x120(r1)
    opword 0xF3610128
    stfd f26, 0x110(r1)
    opword 0xF3410118
    stfd f25, 0x100(r1)
    opword 0xF3210108
    stfd f24, 0xf0(r1)
    opword 0xF30100F8
    stfd f23, 0xe0(r1)
    opword 0xF2E100E8
    stfd f22, 0xd0(r1)
    opword 0xF2C100D8
    addi r11, r1, 0xd0
    bl _savegpr_24
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lis r0, 0x4330
    stw r0, 0x98(r1)
    lis r0, 0x4330
    stw r0, 0xa0(r1)
    lha r0, 0x3e(r4)
    cmpwi r0, 0x2
    blt lbl_8003F48C
    lha r5, 0x3c(r4)
    cmpw r0, r5
    bne lbl_8003ED88
    lha r3, 0x40(r4)
    addi r3, r3, 0x1
    divw r0, r3, r5
    mullw r0, r0, r5
    subf r29, r0, r3
    b lbl_8003ED8C
lbl_8003ED88:
    li r29, 0x0
lbl_8003ED8C:
    addi r3, r1, 0x68
    bl fn_80173750
    la r4, lbl_8049E938
    lfs f1, 0x2c(r4)
    lfs f0, 0x68(r25)
    fmuls f23, f1, f0
    lfs f1, 0x30(r4)
    lfs f0, 0x74(r25)
    fmuls f1, f1, f0
    lfs f0, 0x30(r26)
    fmuls f27, f1, f0
    lwz r5, 0x10(r25)
    rlwinm r0, r5, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8003EDF0
    lha r3, 0x3e(r26)
    subi r0, r3, 0x1
    lfd f1, lbl_8049E930
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmuls f26, f1, f0
    b lbl_8003EDF4
lbl_8003EDF0:
    lfs f26, 0xc(r4)
lbl_8003EDF4:
    rlwinm r0, r5, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8003EE40
    li r24, 0x0
    addi r3, r1, 0x2c
    lwz r4, 0x50(r25)
    lwz r4, 0x0(r4)
    addi r5, r25, 0x38
    bl fn_80018AF8
    addi r3, r1, 0x20
    lwz r4, 0x50(r25)
    lwz r4, 0x4(r4)
    addi r5, r25, 0x44
    bl fn_80018AF8
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    addi r5, r1, 0x2c
    bl fn_8001B8B8
    b lbl_8003EE90
lbl_8003EE40:
    lwz r3, 0x38(r26)
    slwi r0, r29, 1
    lhax r24, r3, r0
    addi r3, r1, 0x2c
    li r4, 0x3
    lwz r5, 0x50(r25)
    slwi r0, r24, 2
    lwzx r5, r5, r0
    bl fn_80173580
    addi r3, r1, 0x20
    li r4, 0x3
    lwz r5, 0x50(r25)
    addi r0, r24, 0x1
    slwi r0, r0, 2
    lwzx r5, r5, r0
    bl fn_80173580
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    addi r5, r1, 0x2c
    bl fn_8001B8B8
lbl_8003EE90:
    addi r3, r1, 0x5c
    addi r4, r1, 0x14
    bl fn_8003F51C
    addi r3, r1, 0x14
    li r4, 0x1
    lwz r5, 0x50(r25)
    slwi r0, r24, 2
    lwzx r5, r5, r0
    bl fn_80173580
    addi r3, r1, 0x8
    addi r4, r1, 0x5c
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    li r4, 0x0
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x68
    li r4, 0x1
    addi r5, r1, 0x5c
    bl fn_801735E8
    addi r3, r1, 0x68
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801735E8
    slwi r28, r29, 2
    addi r3, r1, 0x14
    li r4, 0x4000
    la r31, lbl_8049E938
    lwz r5, 0x24(r26)
    lfs f1, 0x78(r25)
    lfsx f0, r5, r28
    fadds f1, f1, f0
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r5, 0xac(r1)
    bl fn_8010EFE8
    addi r3, r1, 0x8
    addi r4, r1, 0x68
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    lwz r5, 0x28(r26)
    lfsx f1, r5, r28
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x5c
    lwz r5, 0x20(r26)
    lfsx f1, r5, r28
    bl fn_80018B08
    addi r3, r1, 0x44
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r1, 0x38
    addi r4, r1, 0x44
    addi r5, r1, 0x2c
    bl fn_80018B00
    addi r4, r29, 0x1
    lha r3, 0x3c(r26)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r30, r0, r4
    li r3, 0x98
    li r4, 0x0
    lha r5, 0x3e(r26)
    subi r0, r5, 0x1
    slwi r5, r0, 1
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl fn_802E1ABC
    li r28, 0x0
    lfs f28, 0x34(r31)
    lfs f29, 0x38(r31)
    lfs f30, 0x8(r31)
    lfd f31, lbl_8049E930
    lfs f22, 0xc(r31)
    b lbl_8003F300
lbl_8003EFEC:
    addi r3, r1, 0x44
    addi r4, r1, 0x38
    bl fn_80019DAC
    lwz r3, 0x38(r26)
    slwi r0, r30, 1
    lhax r4, r3, r0
    slwi r0, r29, 1
    lhax r0, r3, r0
    cmpw r0, r4
    beq lbl_8003F0C0
    slwi r29, r4, 2
    addi r3, r1, 0x2c
    li r4, 0x3
    lwz r5, 0x50(r25)
    lwzx r5, r5, r29
    bl fn_80173580
    addi r3, r1, 0x20
    li r4, 0x3
    lwz r0, 0x50(r25)
    add r5, r0, r29
    lwz r5, 0x4(r5)
    bl fn_80173580
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    addi r5, r1, 0x2c
    bl fn_8001B8B8
    addi r3, r1, 0x5c
    addi r4, r1, 0x14
    bl fn_8003F51C
    addi r3, r1, 0x14
    li r4, 0x1
    lwz r5, 0x50(r25)
    lwzx r5, r5, r29
    bl fn_80173580
    addi r3, r1, 0x8
    addi r4, r1, 0x5c
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    li r4, 0x0
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x68
    li r4, 0x1
    addi r5, r1, 0x5c
    bl fn_801735E8
    addi r3, r1, 0x68
    li r4, 0x2
    addi r5, r1, 0x8
    bl fn_801735E8
lbl_8003F0C0:
    slwi r29, r30, 2
    addi r3, r1, 0x14
    li r4, 0x4000
    lwz r5, 0x24(r26)
    lfs f1, 0x78(r25)
    lfsx f0, r5, r29
    fadds f0, f1, f0
    fmuls f0, f28, f0
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r5, 0xac(r1)
    bl fn_8010EFE8
    addi r3, r1, 0x8
    addi r4, r1, 0x68
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_8001B8B0
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    lwz r5, 0x28(r26)
    lfsx f1, r5, r29
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x5c
    lwz r5, 0x20(r26)
    lfsx f1, r5, r29
    bl fn_80018B08
    addi r3, r1, 0x38
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_80018B00
    addi r3, r1, 0x38
    mr r4, r3
    addi r5, r1, 0x2c
    bl fn_80018B00
    mr r29, r30
    addi r4, r30, 0x1
    lha r3, 0x3c(r26)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r30, r0, r4
    addi r3, r1, 0x14
    addi r4, r1, 0x38
    addi r5, r1, 0x44
    bl fn_8001B8B8
    clrlwi r0, r28, 31
    cmpwi r0, 0x0
    bne lbl_8003F1C0
    addi r3, r1, 0x14
    bl fn_8001B8BC
    lfs f25, 0x8(r31)
    fdivs f0, f1, f23
    fmuls f0, f29, f0
    fmuls f24, f29, f0
    fcmpo cr0, f24, f30
    bge lbl_8003F1B0
    fmr f24, f25
    b lbl_8003F1BC
lbl_8003F1B0:
    fcmpo cr0, f24, f29
    ble lbl_8003F1BC
    lfs f24, 0x38(r31)
lbl_8003F1BC:
    fadds f24, f25, f24
lbl_8003F1C0:
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B8B0
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r27
    bl fn_8001F9C8
    addi r3, r1, 0x50
    addi r4, r1, 0x14
    bl fn_8001B8B0
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    lfs f1, 0x68(r25)
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x50
    lfs f0, 0x68(r25)
    fneg f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x44
    bl fn_80018B00
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x44
    bl fn_80018B00
    xoris r0, r28, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f26
    fcmpo cr0, f0, f30
    bge lbl_8003F250
    lfs f0, 0x8(r31)
    b lbl_8003F280
lbl_8003F250:
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f26
    fcmpo cr0, f0, f22
    ble lbl_8003F270
    lfs f0, 0xc(r31)
    b lbl_8003F280
lbl_8003F270:
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f31
    fdivs f0, f0, f26
lbl_8003F280:
    fmuls f0, f27, f0
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r24, 0xac(r1)
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r24, 24
    bl fn_8003F58C
    fmr f1, f25
    lfs f2, 0x8(r31)
    bl fn_8003F57C
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    clrlwi r6, r24, 24
    bl fn_8003F58C
    fmr f1, f25
    lfs f2, 0xc(r31)
    bl fn_8003F57C
    fsubs f25, f24, f25
    fsubs f24, f24, f25
    fadds f25, f25, f24
    addi r28, r28, 0x1
lbl_8003F300:
    lha r3, 0x3e(r26)
    subi r0, r3, 0x1
    cmpw r28, r0
    blt lbl_8003EFEC
    lwz r0, 0x10(r25)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8003F3E0
    addi r3, r1, 0x2c
    lwz r4, 0x50(r25)
    lwz r4, 0x4(r4)
    addi r5, r25, 0x44
    bl fn_80018AF8
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    lfs f1, 0x68(r25)
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x50
    lfs f0, 0x68(r25)
    fneg f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_8003F58C
    fmr f1, f25
    la r25, lbl_8049E938
    lfs f2, 0x8(r25)
    bl fn_8003F57C
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_8003F58C
    fmr f1, f25
    lfs f2, 0xc(r25)
    bl fn_8003F57C
    b lbl_8003F488
lbl_8003F3E0:
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    lfs f1, 0x68(r25)
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x50
    lfs f0, 0x68(r25)
    fneg f1, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x38
    bl fn_80018B00
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r1, 0x38
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_8003F58C
    fmr f1, f25
    la r25, lbl_8049E938
    lfs f2, 0x8(r25)
    bl fn_8003F57C
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_8003F5B4
    li r3, 0xff
    li r4, 0xff
    li r5, 0xff
    li r6, 0x0
    bl fn_8003F58C
    fmr f1, f25
    lfs f2, 0xc(r25)
    bl fn_8003F57C
lbl_8003F488:
    bl fn_8003F578
lbl_8003F48C:
    li r0, 0x168
    opword 0x13E1000C
    lfd f31, 0x160(r1)
    li r0, 0x158
    opword 0x13C1000C
    lfd f30, 0x150(r1)
    li r0, 0x148
    opword 0x13A1000C
    lfd f29, 0x140(r1)
    li r0, 0x138
    opword 0x1381000C
    lfd f28, 0x130(r1)
    li r0, 0x128
    opword 0x1361000C
    lfd f27, 0x120(r1)
    li r0, 0x118
    opword 0x1341000C
    lfd f26, 0x110(r1)
    li r0, 0x108
    opword 0x1321000C
    lfd f25, 0x100(r1)
    li r0, 0xf8
    opword 0x1301000C
    lfd f24, 0xf0(r1)
    li r0, 0xe8
    opword 0x12E1000C
    lfd f23, 0xe0(r1)
    li r0, 0xd8
    opword 0x12C1000C
    lfd f22, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_24
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F51C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F51C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    mr r3, r31
    bl fn_8001B8B4
    la r3, lbl_8049E938
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    bge lbl_8003F554
    stfs f0, 0x4(r31)
lbl_8003F554:
    mr r3, r30
    mr r4, r31
    bl fn_8001B8B0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F578
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F578() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F57C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F57C() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F58C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F58C() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r5, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r6, 24
    stb r0, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8003F5B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003F5B4() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

