#include "types.h"

// Translation unit: src/unk_8004C1CC.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern "C" float lbl_8049D64C;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049EB90;
extern "C" float lbl_8049EB98;
extern "C" float lbl_8049EBA0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803396E0[];
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
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
extern "C" void fn_80018B0C();
extern "C" void fn_80018C2C();
extern "C" void fn_80018C3C();
extern "C" void fn_80019D1C();
extern "C" void fn_80019DAC();
extern "C" void fn_8001B8B0();
extern "C" void fn_80020D1C();
extern "C" void fn_80020D20();
extern "C" void fn_8004C1CC();
extern "C" void fn_8004C280();
extern "C" void fn_8004C284();
extern "C" void fn_8004C5E4();
extern "C" void fn_8004C6DC();
extern "C" void fn_8004C83C();
extern "C" void fn_8004D850();
extern "C" void fn_8004EAD0();
extern "C" void fn_8004EAD4();
extern "C" void fn_8004EAE4();
extern "C" void fn_8004EB0C();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80122E1C();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017B004();
extern "C" void fn_8017B074();
extern "C" void fn_8017B144();
extern "C" void fn_802DFDF8();
extern "C" void fn_802E0688();
extern "C" void fn_802E06BC();
extern "C" void fn_802E1ABC();
extern "C" void fn_802E37E0();
extern "C" void fn_802E5604();
extern "C" void fn_802E5918();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_8004C1CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C1CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r3, 0x12
    lis r4, fn_8004C284@ha
    addi r4, r4, fn_8004C284@l
    lwz r5, lbl_8049D64C
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8004C214
    li r3, 0x0
    b lbl_8004C268
lbl_8004C214:
    li r4, 0x0
    li r5, 0xb8
    bl memset
    ori r0, r29, 0x40
    stw r0, 0x4(r31)
    stw r30, 0x8(r31)
    stw r28, 0x10(r31)
    lfs f0, lbl_8049EBA0
    stfs f0, 0x80(r31)
    li r3, 0xa
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8004C264
    cmpwi r31, 0x0
    beq lbl_8004C264
    mr r3, r31
    bl fn_8004C280
lbl_8004C264:
    mr r3, r31
lbl_8004C268:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C280
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C280() {
    nofralloc
    b fn_8017776C
}

// ----------------------------------------------------------------------------
// fn_8004C284
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C284() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    cmpwi r4, 0x0
    beq lbl_8004C3D0
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8004C2CC
    li r0, 0xf1
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_8004C5D0
lbl_8004C2CC:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8004C3C8
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8004C330
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8004C304
    cmpwi r0, 0xff
    beq lbl_8004C31C
    b lbl_8004C330
lbl_8004C304:
    bne cr1, lbl_8004C330
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004C5D0
lbl_8004C31C:
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004C5D0
lbl_8004C330:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_8004C3C8
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8004C3C8
    lwz r3, 0x28(r4)
    lwz r0, 0x74(r31)
    cmplw r3, r0
    bne lbl_8004C3C8
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_8004C3A0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8004C388
    cmpwi r0, 0x1
    beq lbl_8004C394
    b lbl_8004C3BC
lbl_8004C388:
    li r0, 0xf1
    stw r0, 0xc(r31)
    b lbl_8004C3BC
lbl_8004C394:
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8004C3BC
lbl_8004C3A0:
    extsh r0, r0
    sth r0, 0x70(r31)
    lwz r0, 0xc(r31)
    cmpwi r0, 0xf0
    bne lbl_8004C3BC
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8004C3BC:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004C5D0
lbl_8004C3C8:
    li r3, 0x0
    b lbl_8004C5D0
lbl_8004C3D0:
    lwz r3, 0x10(r3)
    addi r4, r31, 0x4
    lwz r5, 0xc(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8004C3F4
    cmpwi r3, 0x2
    beq lbl_8004C400
    b lbl_8004C408
lbl_8004C3F4:
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8004C408
lbl_8004C400:
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8004C408:
    lwz r0, 0xc(r31)
    cmplwi r0, 0x2
    ble lbl_8004C41C
    cmpwi r0, 0xf0
    bne lbl_8004C438
lbl_8004C41C:
    li r3, 0x0
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8004C438
    li r3, 0x0
    b lbl_8004C5D0
lbl_8004C438:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8004C468
    cmpwi r0, 0x1
    beq lbl_8004C494
    cmpwi r0, 0xef
    beq lbl_8004C538
    cmpwi r0, 0xf0
    beq lbl_8004C554
    cmpwi r0, 0xf1
    beq lbl_8004C5B8
    b lbl_8004C5CC
lbl_8004C468:
    lha r3, 0x68(r31)
    subi r0, r3, 0x1
    sth r0, 0x68(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8004C488
    li r0, 0x1
    stw r0, 0xc(r31)
lbl_8004C488:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8004C5CC
lbl_8004C494:
    mr r3, r31
    bl fn_8004C5E4
    lwz r3, 0x78(r31)
    cmpwi r3, 0x0
    ble lbl_8004C4DC
    lwz r0, 0x6c(r31)
    lfd f1, lbl_8049EB90
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lfd f1, lbl_8049EB98
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x80(r31)
    b lbl_8004C4E4
lbl_8004C4DC:
    lfs f0, lbl_8049EBA0
    stfs f0, 0x80(r31)
lbl_8004C4E4:
    lfs f1, 0x80(r31)
    lfs f0, lbl_8049EBA0
    fcmpo cr0, f1, f0
    ble lbl_8004C4F8
    stfs f0, 0x80(r31)
lbl_8004C4F8:
    lha r3, 0x70(r31)
    cmpwi r3, -0x1
    ble lbl_8004C50C
    subi r0, r3, 0x1
    sth r0, 0x70(r31)
lbl_8004C50C:
    lha r0, 0x70(r31)
    cmpwi r0, 0x0
    bne lbl_8004C520
    li r0, 0xef
    stw r0, 0xc(r31)
lbl_8004C520:
    lwz r3, 0x6c(r31)
    addi r0, r3, 0x1
    stw r0, 0x6c(r31)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    beq lbl_8004C5CC
lbl_8004C538:
    li r0, 0xf0
    stw r0, 0xc(r31)
    lwz r0, 0x7c(r31)
    extsh r0, r0
    sth r0, 0x70(r31)
    li r0, 0x0
    stw r0, 0x74(r31)
lbl_8004C554:
    mr r3, r31
    bl fn_8004C5E4
    lha r3, 0x70(r31)
    lfd f2, lbl_8049EB98
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x7c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x80(r31)
    subi r0, r3, 0x1
    sth r0, 0x70(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8004C5AC
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8004C5AC:
    lwz r0, 0xc(r31)
    cmpwi r0, 0xf0
    beq lbl_8004C5CC
lbl_8004C5B8:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8004C280
lbl_8004C5CC:
    li r3, 0x0
lbl_8004C5D0:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C5E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C5E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    bne lbl_8004C620
    lwz r4, 0x1c(r3)
    cmpwi r4, 0x0
    beq lbl_8004C620
    addi r3, r3, 0x2c
    addi r5, r31, 0x20
    bl fn_80018AF8
lbl_8004C620:
    lfs f1, 0xa0(r31)
    lfs f0, 0xa4(r31)
    fadds f0, f1, f0
    stfs f0, 0xa0(r31)
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    ble lbl_8004C66C
    lwz r3, 0x54(r31)
    subi r0, r3, 0x1
    stw r0, 0x54(r31)
    cmpwi r0, 0x0
    bge lbl_8004C66C
    lfs f0, 0x84(r31)
    stfs f0, 0x98(r31)
    lfs f0, 0x88(r31)
    stfs f0, 0x9c(r31)
    lfs f0, 0x8c(r31)
    stfs f0, 0x90(r31)
    stw r4, 0x54(r31)
lbl_8004C66C:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8004C690
    lfs f1, 0x90(r31)
    lfs f0, 0x94(r31)
    fadds f0, f1, f0
    stfs f0, 0x90(r31)
    b lbl_8004C6B8
lbl_8004C690:
    lfs f0, 0x98(r31)
    lfs f1, 0x90(r31)
    fadds f0, f0, f1
    stfs f0, 0x98(r31)
    lfs f0, 0x9c(r31)
    fadds f0, f0, f1
    stfs f0, 0x9c(r31)
    lfs f0, 0x94(r31)
    fadds f0, f1, f0
    stfs f0, 0x90(r31)
lbl_8004C6B8:
    lfs f1, 0xac(r31)
    lfs f0, 0xb0(r31)
    fsubs f0, f1, f0
    stfs f0, 0xac(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C6DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C6DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8004C828
    lwz r4, 0x4(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004C718
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_8004C828
lbl_8004C718:
    li r3, 0x0
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_8004C828
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x4(r31)
    li r4, 0xa
    bl fn_800163E4
    lwz r3, 0x4(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004C818
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8004C76C
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_802E37E0
    b lbl_8004C784
lbl_8004C76C:
    lis r3, 0x80
    addi r3, r3, 0x1
    bl fn_80122E1C
    addi r3, r3, 0x4
    li r4, 0x0
    bl fn_802E37E0
lbl_8004C784:
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
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8004C810
    mr r3, r31
    bl fn_8004D850
    b lbl_8004C818
lbl_8004C810:
    mr r3, r31
    bl fn_8004C83C
lbl_8004C818:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8004C828:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C83C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C83C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2f0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_26
    mr r27, r3
    lis r0, 0x4330
    stw r0, 0x160(r1)
    lis r0, 0x4330
    stw r0, 0x168(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r26, r3
    addi r3, r1, 0x130
    mr r4, r26
    bl fn_8017B004
    addi r3, r1, 0xc0
    bl fn_802E5604
    addi r3, r1, 0x80
    bl fn_802E5918
    addi r3, r1, 0x100
    mr r4, r26
    bl fn_8017B074
    la r31, lbl_8049EBA0
    lwz r0, 0x14(r27)
    lfd f2, lbl_8049EB98
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f2
    lfs f0, 0x4(r31)
    fdivs f26, f0, f1
    lwz r0, 0x18(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f1, f0, f2
    lfs f0, 0x8(r31)
    fdivs f23, f0, f1
    lfs f27, 0xac(r27)
    lfs f24, 0xa8(r27)
    lfs f2, 0x9c(r27)
    lfs f0, 0x98(r27)
    fadds f1, f2, f0
    lfs f0, 0xc(r31)
    fmuls f31, f1, f0
    fsubs f30, f2, f31
    addi r3, r1, 0x50
    addi r4, r27, 0x44
    bl fn_80019DAC
    addi r3, r1, 0x5c
    addi r4, r27, 0x2c
    bl fn_80019DAC
    addi r3, r1, 0x68
    addi r4, r1, 0x5c
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    lfd f3, lbl_8049EB90
    stw r0, 0x164(r1)
    lfd f2, 0x160(r1)
    fsubs f2, f2, f3
    fdivs f29, f0, f2
    lhz r0, 0x10(r3)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f3
    fdivs f28, f1, f0
    li r3, 0xa0
    li r4, 0x0
    lwz r5, 0x14(r27)
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl fn_802E1ABC
    lfs f20, 0x10(r31)
    fmr f1, f20
    bl fn_80018C3C
    fmr f3, f1
    addi r3, r1, 0x74
    fmr f1, f20
    fmr f2, f1
    bl fn_80018B0C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    fmr f1, f27
    bl fn_80018B08
    lfs f1, 0x68(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x100
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x74
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x74(r1)
    lfs f2, 0x78(r1)
    lfs f3, 0x7c(r1)
    bl fn_8004EB0C
    lbz r3, 0x38(r27)
    lbz r4, 0x39(r27)
    lbz r5, 0x3a(r27)
    lbz r0, 0x3b(r27)
    lfd f1, lbl_8049EB90
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f1
    lfs f0, 0x80(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r6, 0x174(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    lfd f4, lbl_8049EB90
    stw r0, 0x16c(r1)
    lfd f2, 0x168(r1)
    fsubs f2, f2, f4
    fdivs f3, f0, f2
    stfs f3, 0x74(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f4
    fdivs f2, f1, f0
    stfs f2, 0x78(r1)
    lfs f0, lbl_8049EBA0
    fsubs f1, f3, f29
    fmuls f1, f0, f1
    fadds f1, f29, f1
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f28, f0
    bl fn_8004EAD4
    addi r3, r1, 0x40
    lbz r0, 0x38(r27)
    lfd f4, lbl_8049EB90
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f1, f0, f4
    lbz r0, 0x39(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3a(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3b(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r27)
    lfd f4, lbl_8049EB90
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f1, f0, f4
    lbz r0, 0x3d(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3e(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3f(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r27)
    lfd f1, lbl_8049EB98
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r31)
    fdivs f1, f0, f1
    bl fn_80020D1C
    fmr f1, f23
    bl fn_80018C2C
    fmr f18, f1
    fmr f1, f23
    bl fn_80018C3C
    fmr f22, f1
    li r29, 0x0
    lfd f15, lbl_8049EB98
    lfd f17, lbl_8049EB90
    lfs f16, 0x4(r31)
    lfs f14, lbl_8049EBA0
    b lbl_8004CEB0
lbl_8004CC54:
    xoris r0, r29, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f15
    fmuls f25, f26, f0
    fmr f1, f25
    bl fn_80018C2C
    fmuls f19, f18, f1
    fmr f1, f25
    bl fn_80018C3C
    fmuls f1, f18, f1
    addi r3, r1, 0x74
    fmr f2, f19
    fmr f3, f22
    bl fn_80018B0C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    fmr f1, f27
    bl fn_80018B08
    lfs f1, 0x68(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x100
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x74
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x74(r1)
    lfs f2, 0x78(r1)
    lfs f3, 0x7c(r1)
    bl fn_8004EB0C
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r3, 0x174(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r4, 0x17c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r5, 0x184(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x80(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x188(r1)
    lwz r6, 0x18c(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    stw r0, 0x16c(r1)
    lfd f2, 0x168(r1)
    fsubs f2, f2, f17
    fdivs f0, f0, f2
    stfs f0, 0x74(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f17
    fdivs f0, f1, f0
    stfs f0, 0x78(r1)
    xoris r0, r29, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f15
    fmuls f21, f24, f0
    fdivs f0, f21, f16
    fctiwz f0, f0
    stfd f0, 0x190(r1)
    lwz r0, 0x194(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f15
    fmuls f0, f16, f0
    fsubs f21, f21, f0
    lfs f20, 0x10(r31)
    li r26, 0x0
    b lbl_8004CE28
lbl_8004CDFC:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f15
    fmuls f1, f21, f0
    lfs f0, 0xa0(r27)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f20, f20, f1
    addi r26, r26, 0x1
lbl_8004CE28:
    lwz r0, 0x58(r27)
    cmpw r26, r0
    blt lbl_8004CDFC
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f15
    fdivs f20, f20, f0
    fmuls f0, f30, f20
    fadds f0, f31, f0
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004CE88
    fsubs f21, f14, f0
    lwz r3, 0x18(r27)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f1, 0x168(r1)
    fsubs f1, f1, f15
    fdivs f20, f14, f1
    fmuls f1, f21, f20
    fadds f0, f0, f1
lbl_8004CE88:
    lfs f1, 0x74(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f29, f1
    lfs f2, 0x78(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f28, f0
    bl fn_8004EAD4
    addi r29, r29, 0x1
lbl_8004CEB0:
    lwz r3, 0x14(r27)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_8004CC54
    bl fn_8004EAD0
    lwz r5, 0x18(r27)
    cmpwi r5, 0x2
    ble lbl_8004D75C
    li r3, 0x98
    li r4, 0x0
    subi r6, r5, 0x2
    lwz r5, 0x14(r27)
    addi r0, r5, 0x1
    slwi r0, r0, 1
    mullw r0, r6, r0
    clrlwi r5, r0, 16
    bl fn_802E1ABC
    li r28, 0x1
    lfd f19, lbl_8049EB98
    la r30, lbl_8049EBA0
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lfd f17, lbl_8049EB90
    lfs f18, 0x4(r30)
    lfs f0, lbl_8049EBA0
    stfd f0, 0x1a0(r1)
    lfs f16, 0x14(r30)
    b lbl_8004D748
lbl_8004CF20:
    xoris r0, r28, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fmuls f20, f23, f0
    fmr f1, f20
    bl fn_80018C2C
    fmr f14, f1
    fmr f1, f20
    bl fn_80018C3C
    stfs f1, 0x198(r1)
    addi r0, r28, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f20, f23, f0
    fmr f1, f20
    bl fn_80018C2C
    fmr f15, f1
    fmr f1, f20
    bl fn_80018C3C
    fmr f22, f1
    lwz r0, 0x18(r27)
    srawi r0, r0, 1
    addze r0, r0
    cmpw r28, r0
    bge lbl_8004D0A0
    addi r3, r1, 0x40
    lbz r0, 0x38(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f17
    lbz r0, 0x39(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3a(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3b(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f17
    lbz r0, 0x3d(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3e(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3f(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f1, f16, f0
    xoris r0, r28, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f1, f16, f0
    addi r0, r28, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f1, f0
    bl fn_80020D1C
    b lbl_8004D1CC
lbl_8004D0A0:
    addi r3, r1, 0x40
    lbz r0, 0x3c(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f17
    lbz r0, 0x3d(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3e(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3f(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x40(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f17
    lbz r0, 0x41(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f2, f0, f17
    lbz r0, 0x42(r27)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f3, f0, f17
    lbz r0, 0x43(r27)
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r27)
    xoris r0, r6, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f1, f16, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r0, r6, 0x1
    subf r0, r0, r28
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r27)
    xoris r0, r6, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f1, f16, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r6, r6, 0x1
    addi r0, r28, 0x1
    subf r0, r6, r0
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f1, f0
    bl fn_80020D1C
lbl_8004D1CC:
    li r29, 0x0
    b lbl_8004D734
lbl_8004D1D4:
    xoris r0, r29, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fmuls f25, f26, f0
    cmpwi r28, 0x0
    bne lbl_8004D27C
    lfs f1, 0x10(r30)
    bl fn_80018C3C
    fmr f3, f1
    addi r3, r1, 0x74
    lfs f1, 0x10(r30)
    fmr f2, f1
    bl fn_80018B0C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    fmr f1, f27
    bl fn_80018B08
    lfs f1, 0x68(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x100
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x74
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    b lbl_8004D310
lbl_8004D27C:
    fmr f1, f25
    bl fn_80018C2C
    fmuls f20, f14, f1
    fmr f1, f25
    bl fn_80018C3C
    fmuls f1, f14, f1
    addi r3, r1, 0x74
    fmr f2, f20
    lfs f3, 0x198(r1)
    bl fn_80018B0C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    fmr f1, f27
    bl fn_80018B08
    lfs f1, 0x68(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x100
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x74
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
lbl_8004D310:
    lfs f1, 0x74(r1)
    lfs f2, 0x78(r1)
    lfs f3, 0x7c(r1)
    bl fn_8004EB0C
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x190(r1)
    lwz r3, 0x194(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x188(r1)
    lwz r4, 0x18c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r5, 0x184(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x80(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r6, 0x17c(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x16c(r1)
    lfd f2, 0x168(r1)
    fsubs f2, f2, f17
    fdivs f0, f0, f2
    stfs f0, 0x74(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f17
    fdivs f0, f1, f0
    stfs f0, 0x78(r1)
    xoris r0, r29, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f21, f24, f0
    fdivs f0, f21, f18
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fmuls f0, f18, f0
    fsubs f21, f21, f0
    lfs f20, 0x10(r30)
    li r26, 0x0
    b lbl_8004D43C
lbl_8004D410:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f0
    lfs f0, 0xa0(r27)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f20, f20, f1
    addi r26, r26, 0x1
lbl_8004D43C:
    lwz r0, 0x58(r27)
    cmpw r26, r0
    blt lbl_8004D410
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f20, f20, f0
    fmuls f0, f30, f20
    fadds f0, f31, f0
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004D4B0
    lfd f1, 0x1a0(r1)
    fsubs f21, f1, f0
    xoris r0, r28, 0x8000
    stw r0, 0x16c(r1)
    lfd f1, 0x168(r1)
    fsubs f2, f1, f19
    lwz r3, 0x18(r27)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f1, 0x160(r1)
    fsubs f1, f1, f19
    fdivs f20, f2, f1
    fmuls f1, f21, f20
    fadds f0, f0, f1
lbl_8004D4B0:
    lfs f1, 0x74(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f29, f1
    lfs f2, 0x78(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f28, f0
    bl fn_8004EAD4
    fmr f1, f25
    bl fn_80018C2C
    fmuls f20, f15, f1
    fmr f1, f25
    bl fn_80018C3C
    fmuls f1, f15, f1
    addi r3, r1, 0x74
    fmr f2, f20
    fmr f3, f22
    bl fn_80018B0C
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    fmr f1, f27
    bl fn_80018B08
    lfs f1, 0x68(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x6c(r1)
    lfs f1, 0x70(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x70(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x100
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x74
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x74(r1)
    lfs f2, 0x78(r1)
    lfs f3, 0x7c(r1)
    bl fn_8004EB0C
    lfs f0, 0x10(r1)
    fctiwz f0, f0
    stfd f0, 0x190(r1)
    lwz r3, 0x194(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x14(r1)
    fctiwz f0, f0
    stfd f0, 0x188(r1)
    lwz r4, 0x18c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x18(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r5, 0x184(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x1c(r1)
    lfs f0, 0x80(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r6, 0x17c(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x68
    addi r4, r1, 0x74
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x68(r1)
    lfs f1, 0x6c(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x16c(r1)
    lfd f2, 0x168(r1)
    fsubs f2, f2, f17
    fdivs f0, f0, f2
    stfs f0, 0x74(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f17
    fdivs f0, f1, f0
    stfs f0, 0x78(r1)
    xoris r0, r29, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f21, f24, f0
    fdivs f0, f21, f18
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fmuls f0, f18, f0
    fsubs f21, f21, f0
    lfs f20, 0x10(r30)
    li r26, 0x0
    b lbl_8004D694
lbl_8004D668:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f0, 0x168(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f0
    lfs f0, 0xa0(r27)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f20, f20, f1
    addi r26, r26, 0x1
lbl_8004D694:
    lwz r0, 0x58(r27)
    cmpw r26, r0
    blt lbl_8004D668
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f0, f0, f19
    fdivs f20, f20, f0
    fmuls f0, f30, f20
    fadds f0, f31, f0
    lwz r0, 0x4(r27)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004D70C
    lfd f1, 0x1a0(r1)
    fsubs f21, f1, f0
    addi r0, r28, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x16c(r1)
    lfd f1, 0x168(r1)
    fsubs f2, f1, f19
    lwz r3, 0x18(r27)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x164(r1)
    lfd f1, 0x160(r1)
    fsubs f1, f1, f19
    fdivs f20, f2, f1
    fmuls f1, f21, f20
    fadds f0, f0, f1
lbl_8004D70C:
    lfs f1, 0x74(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f29, f1
    lfs f2, 0x78(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f28, f0
    bl fn_8004EAD4
    addi r29, r29, 0x1
lbl_8004D734:
    lwz r3, 0x14(r27)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_8004D1D4
    addi r28, r28, 0x1
lbl_8004D748:
    lwz r3, 0x18(r27)
    subi r0, r3, 0x1
    cmpw r28, r0
    blt lbl_8004CF20
    bl fn_8004EAD0
lbl_8004D75C:
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004D850
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004D850() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x390
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    stfd f28, -0x40(r12)
    opword 0xF38C0FC8
    stfd f27, -0x50(r12)
    opword 0xF36C0FB8
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    stfd f25, -0x70(r12)
    opword 0xF32C0F98
    stfd f24, -0x80(r12)
    opword 0xF30C0F88
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    stfd f22, -0xa0(r12)
    opword 0xF2CC0F68
    stfd f21, -0xb0(r12)
    opword 0xF2AC0F58
    stfd f20, -0xc0(r12)
    opword 0xF28C0F48
    stfd f19, -0xd0(r12)
    opword 0xF26C0F38
    stfd f18, -0xe0(r12)
    opword 0xF24C0F28
    stfd f17, -0xf0(r12)
    opword 0xF22C0F18
    stfd f16, -0x100(r12)
    opword 0xF20C0F08
    stfd f15, -0x110(r12)
    opword 0xF1EC0EF8
    stfd f14, -0x120(r12)
    opword 0xF1CC0EE8
    subi r11, r12, 0x120
    bl _savegpr_23
    mr r24, r3
    lis r0, 0x4330
    stw r0, 0x1f0(r1)
    lis r0, 0x4330
    stw r0, 0x1f8(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r23, r3
    addi r3, r1, 0x140
    mr r4, r23
    bl fn_8017B004
    addi r3, r1, 0xd0
    bl fn_802E5604
    addi r3, r1, 0x90
    bl fn_802E5918
    addi r3, r1, 0x110
    mr r4, r23
    bl fn_8017B074
    la r4, lbl_8049EBA0
    lwz r3, 0x14(r24)
    lfd f2, lbl_8049EB98
    xoris r0, r3, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f2
    lfs f0, 0x4(r4)
    fdivs f0, f0, f1
    stfs f0, 0x224(r1)
    lwz r0, 0x18(r24)
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f1, f0, f2
    lfs f0, 0x8(r4)
    fdivs f22, f0, f1
    srawi r0, r3, 3
    addze r25, r0
    cmpwi r25, 0x20
    ble lbl_8004D9A0
    li r25, 0x20
lbl_8004D9A0:
    lfs f25, 0xac(r24)
    lfs f23, 0xa8(r24)
    lfs f2, 0x9c(r24)
    lfs f0, 0x98(r24)
    fadds f1, f2, f0
    la r3, lbl_8049EBA0
    lfs f0, 0xc(r3)
    fmuls f31, f1, f0
    fsubs f30, f2, f31
    addi r3, r1, 0x50
    addi r4, r24, 0x44
    bl fn_80019DAC
    addi r3, r1, 0x5c
    addi r4, r24, 0x2c
    bl fn_80019DAC
    addi r3, r1, 0x74
    addi r4, r1, 0x5c
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x54(r3)
    lhz r0, 0xe(r3)
    lfd f3, lbl_8049EB90
    stw r0, 0x1f4(r1)
    lfd f2, 0x1f0(r1)
    fsubs f2, f2, f3
    fdivs f29, f0, f2
    lhz r0, 0x10(r3)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f3
    fdivs f28, f1, f0
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8004DA6C
    lfs f1, 0x64(r24)
    lis r3, lbl_803396E0@ha
    lfd f0, lbl_803396E0@l(r3)
    fcmpo cr0, f1, f0
    bge lbl_8004DA60
    stfs f29, 0x5c(r24)
    stfs f28, 0x60(r24)
    lfs f0, lbl_8049EBA0
    stfs f0, 0x64(r24)
lbl_8004DA60:
    lfs f27, 0x5c(r24)
    lfs f26, 0x60(r24)
    b lbl_8004DA74
lbl_8004DA6C:
    fmr f27, f29
    fmr f26, f28
lbl_8004DA74:
    li r3, 0xa0
    li r4, 0x0
    lwz r5, 0x14(r24)
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl fn_802E1ABC
    la r31, lbl_8049EBA0
    lfs f19, 0x10(r31)
    fmr f1, f19
    bl fn_80018C3C
    fmr f3, f1
    addi r3, r1, 0x80
    fmr f1, f19
    fmr f2, f1
    bl fn_80018B0C
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    lfs f1, 0x74(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x7c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x74
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_8004EB0C
    lbz r3, 0x38(r24)
    lbz r4, 0x39(r24)
    lbz r5, 0x3a(r24)
    lbz r0, 0x3b(r24)
    lfd f1, lbl_8049EB90
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x80(r24)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x200(r1)
    lwz r6, 0x204(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    lfd f4, lbl_8049EB90
    stw r0, 0x1fc(r1)
    lfd f2, 0x1f8(r1)
    fsubs f2, f2, f4
    fdivs f3, f0, f2
    stfs f3, 0x80(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f4
    fdivs f2, f1, f0
    stfs f2, 0x84(r1)
    lfs f0, lbl_8049EBA0
    fsubs f1, f3, f29
    fmuls f1, f0, f1
    fadds f1, f27, f1
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f26, f0
    bl fn_8004EAD4
    addi r3, r1, 0x40
    lbz r0, 0x38(r24)
    lfd f4, lbl_8049EB90
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f1, f0, f4
    lbz r0, 0x39(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3a(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3b(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r24)
    lfd f4, lbl_8049EB90
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f1, f0, f4
    lbz r0, 0x3d(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f2, f0, f4
    lbz r0, 0x3e(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f3, f0, f4
    lbz r0, 0x3f(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f4, f0, f4
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r24)
    lfd f1, lbl_8049EB98
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r31)
    fdivs f1, f0, f1
    bl fn_80020D1C
    fmr f1, f22
    bl fn_80018C2C
    fmr f18, f1
    fmr f1, f22
    bl fn_80018C3C
    fmr f21, f1
    li r28, 0x0
    li r23, 0x0
    lfd f16, lbl_8049EB98
    lfs f17, 0x4(r31)
    addi r29, r1, 0x170
    lfs f15, lbl_8049EBA0
    lfd f14, lbl_8049EB90
    b lbl_8004DFE8
lbl_8004DCE0:
    xoris r0, r28, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f16
    lfs f0, 0x224(r1)
    fmuls f24, f0, f1
    fmr f1, f24
    bl fn_80018C2C
    fmuls f19, f18, f1
    fmr f1, f24
    bl fn_80018C3C
    fmuls f1, f18, f1
    addi r3, r1, 0x80
    fmr f2, f19
    fmr f3, f21
    bl fn_80018B0C
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_8001B8B0
    xoris r0, r28, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f16
    fmuls f20, f23, f0
    fdivs f0, f20, f17
    fctiwz f0, f0
    stfd f0, 0x200(r1)
    lwz r0, 0x204(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f16
    fmuls f0, f17, f0
    fsubs f20, f20, f0
    lfs f19, 0x10(r31)
    li r26, 0x0
    b lbl_8004DDA0
lbl_8004DD74:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f16
    fmuls f1, f20, f0
    lfs f0, 0xa0(r24)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f19, f19, f1
    addi r26, r26, 0x1
lbl_8004DDA0:
    lwz r0, 0x58(r24)
    cmpw r26, r0
    blt lbl_8004DD74
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f16
    fdivs f19, f19, f0
    fmuls f0, f30, f19
    fadds f0, f31, f0
    cmpw r28, r25
    bge lbl_8004DDD4
    stfsx f0, r29, r23
lbl_8004DDD4:
    lwz r0, 0x14(r24)
    subf r26, r28, r0
    cmpw r26, r25
    bge lbl_8004DE38
    cmpwi r26, 0x0
    bne lbl_8004DDF8
    slwi r0, r26, 2
    lfsx f0, r29, r0
    b lbl_8004DE38
lbl_8004DDF8:
    subi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f1, 0x1f8(r1)
    fsubs f20, f1, f16
    xoris r0, r25, 0x8000
    stw r0, 0x1f4(r1)
    lfd f1, 0x1f0(r1)
    fsubs f1, f1, f16
    fdivs f20, f20, f1
    fmuls f2, f0, f20
    fsubs f1, f15, f20
    slwi r0, r26, 2
    lfsx f0, r29, r0
    fmuls f0, f1, f0
    fadds f0, f2, f0
lbl_8004DE38:
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmuls f1, f25, f0
    bl fn_80018B08
    addi r3, r1, 0x68
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    lfs f1, 0x74(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x7c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x74
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_8004EB0C
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x200(r1)
    lwz r3, 0x204(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x208(r1)
    lwz r4, 0x20c(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x210(r1)
    lwz r5, 0x214(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x80(r24)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x218(r1)
    lwz r6, 0x21c(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lwz r3, 0x54(r30)
    lhz r0, 0xe(r3)
    stw r0, 0x1fc(r1)
    lfd f2, 0x1f8(r1)
    fsubs f2, f2, f14
    fdivs f0, f0, f2
    stfs f0, 0x80(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f14
    fdivs f0, f1, f0
    stfs f0, 0x84(r1)
    lfs f0, 0x90(r24)
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004DFBC
    fsubs f20, f15, f0
    lwz r3, 0x18(r24)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f1, 0x1f8(r1)
    fsubs f1, f1, f16
    fdivs f19, f15, f1
    fmuls f1, f20, f19
    fadds f0, f0, f1
lbl_8004DFBC:
    lfs f1, 0x80(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f27, f1
    lfs f2, 0x84(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f26, f0
    bl fn_8004EAD4
    addi r28, r28, 0x1
    addi r23, r23, 0x4
lbl_8004DFE8:
    lwz r3, 0x14(r24)
    addi r0, r3, 0x1
    cmpw r28, r0
    blt lbl_8004DCE0
    bl fn_8004EAD0
    lwz r5, 0x18(r24)
    cmpwi r5, 0x2
    ble lbl_8004E9DC
    li r3, 0x98
    li r4, 0x0
    subi r6, r5, 0x2
    lwz r5, 0x14(r24)
    addi r0, r5, 0x1
    slwi r0, r0, 1
    mullw r0, r6, r0
    clrlwi r5, r0, 16
    bl fn_802E1ABC
    li r27, 0x1
    lfd f18, lbl_8049EB98
    la r29, lbl_8049EBA0
    lfs f15, 0x4(r29)
    addi r30, r1, 0x170
    lfs f16, lbl_8049EBA0
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lfd f17, lbl_8049EB90
    lfs f14, 0x14(r29)
    b lbl_8004E9C8
lbl_8004E058:
    xoris r0, r27, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fmuls f19, f22, f0
    fmr f1, f19
    bl fn_80018C2C
    stfd f1, 0x228(r1)
    fmr f1, f19
    bl fn_80018C3C
    stfs f1, 0x220(r1)
    addi r0, r27, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f19, f22, f0
    fmr f1, f19
    bl fn_80018C2C
    stfd f1, 0x230(r1)
    fmr f1, f19
    bl fn_80018C3C
    fmr f21, f1
    lwz r0, 0x18(r24)
    srawi r0, r0, 1
    addze r0, r0
    cmpw r27, r0
    bge lbl_8004E1D8
    addi r3, r1, 0x40
    lbz r0, 0x38(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f17
    lbz r0, 0x39(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3a(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3b(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x3c(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f17
    lbz r0, 0x3d(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3e(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3f(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r24)
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fdivs f1, f14, f0
    xoris r0, r27, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r0, 0x18(r24)
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fdivs f1, f14, f0
    addi r0, r27, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f1, f1, f0
    bl fn_80020D1C
    b lbl_8004E304
lbl_8004E1D8:
    addi r3, r1, 0x40
    lbz r0, 0x3c(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f17
    lbz r0, 0x3d(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f2, f0, f17
    lbz r0, 0x3e(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f3, f0, f17
    lbz r0, 0x3f(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x30
    lbz r0, 0x40(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f17
    lbz r0, 0x41(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f2, f0, f17
    lbz r0, 0x42(r24)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f3, f0, f17
    lbz r0, 0x43(r24)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f4, f0, f17
    bl fn_80020D20
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r24)
    xoris r0, r6, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fdivs f1, f14, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r0, r6, 0x1
    subf r0, r0, r27
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f1, f1, f0
    bl fn_80020D1C
    addi r3, r1, 0x10
    addi r4, r1, 0x40
    addi r5, r1, 0x30
    lwz r6, 0x18(r24)
    xoris r0, r6, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fdivs f1, f14, f0
    srawi r0, r6, 1
    addze r6, r0
    subi r6, r6, 0x1
    addi r0, r27, 0x1
    subf r0, r6, r0
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f1, f1, f0
    bl fn_80020D1C
lbl_8004E304:
    li r28, 0x0
    li r23, 0x0
    b lbl_8004E9B4
lbl_8004E310:
    xoris r0, r28, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f1, f0, f18
    lfs f0, 0x224(r1)
    fmuls f24, f0, f1
    cmpwi r27, 0x0
    bne lbl_8004E3CC
    lfs f1, 0x10(r29)
    bl fn_80018C3C
    fmr f3, f1
    addi r3, r1, 0x80
    lfs f1, 0x10(r29)
    fmr f2, f1
    bl fn_80018B0C
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    addi r3, r1, 0x68
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    lfs f1, 0x74(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x7c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x74
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    b lbl_8004E584
lbl_8004E3CC:
    fmr f1, f24
    bl fn_80018C2C
    lfd f0, 0x228(r1)
    fmuls f19, f0, f1
    fmr f1, f24
    bl fn_80018C3C
    lfd f0, 0x228(r1)
    fmuls f1, f0, f1
    addi r3, r1, 0x80
    fmr f2, f19
    lfs f3, 0x220(r1)
    bl fn_80018B0C
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_8001B8B0
    xoris r0, r28, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f20, f23, f0
    fdivs f0, f20, f15
    fctiwz f0, f0
    stfd f0, 0x218(r1)
    lwz r0, 0x21c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fmuls f0, f15, f0
    fsubs f20, f20, f0
    lfs f19, 0x10(r29)
    li r26, 0x0
    b lbl_8004E47C
lbl_8004E450:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f1, f20, f0
    lfs f0, 0xa0(r24)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f19, f19, f1
    addi r26, r26, 0x1
lbl_8004E47C:
    lwz r0, 0x58(r24)
    cmpw r26, r0
    blt lbl_8004E450
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fdivs f19, f19, f0
    fmuls f0, f30, f19
    fadds f0, f31, f0
    cmpw r28, r25
    bge lbl_8004E4B0
    stfsx f0, r30, r23
lbl_8004E4B0:
    lwz r0, 0x14(r24)
    subf r26, r28, r0
    cmpw r26, r25
    bge lbl_8004E514
    cmpwi r26, 0x0
    bne lbl_8004E4D4
    slwi r0, r26, 2
    lfsx f0, r30, r0
    b lbl_8004E514
lbl_8004E4D4:
    subi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f1, 0x1f8(r1)
    fsubs f20, f1, f18
    xoris r0, r25, 0x8000
    stw r0, 0x1f4(r1)
    lfd f1, 0x1f0(r1)
    fsubs f1, f1, f18
    fdivs f20, f20, f1
    fmuls f2, f0, f20
    fsubs f1, f16, f20
    slwi r0, r26, 2
    lfsx f0, r30, r0
    fmuls f0, f1, f0
    fadds f0, f2, f0
lbl_8004E514:
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmuls f1, f25, f0
    bl fn_80018B08
    addi r3, r1, 0x68
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    lfs f1, 0x74(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x7c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x74
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
lbl_8004E584:
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_8004EB0C
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x218(r1)
    lwz r3, 0x21c(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0x210(r1)
    lwz r4, 0x214(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0x208(r1)
    lwz r5, 0x20c(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x80(r24)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x200(r1)
    lwz r6, 0x204(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x1fc(r1)
    lfd f2, 0x1f8(r1)
    fsubs f2, f2, f17
    fdivs f0, f0, f2
    stfs f0, 0x80(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f17
    fdivs f0, f1, f0
    stfs f0, 0x84(r1)
    lfs f0, 0x90(r24)
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004E698
    fsubs f20, f16, f0
    lwz r3, 0x18(r24)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f1, 0x1f8(r1)
    fsubs f1, f1, f18
    fdivs f19, f16, f1
    fmuls f1, f20, f19
    fadds f0, f0, f1
lbl_8004E698:
    lfs f1, 0x80(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f27, f1
    lfs f2, 0x84(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f26, f0
    bl fn_8004EAD4
    fmr f1, f24
    bl fn_80018C2C
    lfd f0, 0x230(r1)
    fmuls f19, f0, f1
    fmr f1, f24
    bl fn_80018C3C
    lfd f0, 0x230(r1)
    fmuls f1, f0, f1
    addi r3, r1, 0x80
    fmr f2, f19
    fmr f3, f21
    bl fn_80018B0C
    addi r3, r1, 0x80
    mr r4, r3
    bl fn_8001B8B0
    xoris r0, r28, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fmuls f20, f23, f0
    fdivs f0, f20, f15
    fctiwz f0, f0
    stfd f0, 0x218(r1)
    lwz r0, 0x21c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fmuls f0, f15, f0
    fsubs f20, f20, f0
    lfs f19, 0x10(r29)
    li r26, 0x0
    b lbl_8004E76C
lbl_8004E740:
    addi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f0, 0x1f0(r1)
    fsubs f0, f0, f18
    fmuls f1, f20, f0
    lfs f0, 0xa0(r24)
    fadds f1, f0, f1
    bl fn_80018C2C
    fadds f19, f19, f1
    addi r26, r26, 0x1
lbl_8004E76C:
    lwz r0, 0x58(r24)
    cmpw r26, r0
    blt lbl_8004E740
    xoris r0, r0, 0x8000
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f18
    fdivs f19, f19, f0
    fmuls f0, f30, f19
    fadds f0, f31, f0
    cmpw r28, r25
    bge lbl_8004E7A0
    stfsx f0, r30, r23
lbl_8004E7A0:
    lwz r0, 0x14(r24)
    subf r26, r28, r0
    cmpw r26, r25
    bge lbl_8004E804
    cmpwi r26, 0x0
    bne lbl_8004E7C4
    slwi r0, r26, 2
    lfsx f0, r30, r0
    b lbl_8004E804
lbl_8004E7C4:
    subi r0, r26, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f1, 0x1f0(r1)
    fsubs f20, f1, f18
    xoris r0, r25, 0x8000
    stw r0, 0x1fc(r1)
    lfd f1, 0x1f8(r1)
    fsubs f1, f1, f18
    fdivs f20, f20, f1
    fmuls f2, f0, f20
    fsubs f1, f16, f20
    slwi r0, r26, 2
    lfsx f0, r30, r0
    fmuls f0, f1, f0
    fadds f0, f2, f0
lbl_8004E804:
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    fmuls f1, f25, f0
    bl fn_80018B08
    addi r3, r1, 0x68
    addi r4, r1, 0x80
    fmr f1, f25
    bl fn_80018B08
    lfs f1, 0x74(r1)
    lfs f0, 0x50(r1)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lfs f0, 0x54(r1)
    fmuls f0, f1, f0
    stfs f0, 0x78(r1)
    lfs f1, 0x7c(r1)
    lfs f0, 0x58(r1)
    fmuls f0, f1, f0
    stfs f0, 0x7c(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x74
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_8004EB0C
    lfs f0, 0x10(r1)
    fctiwz f0, f0
    stfd f0, 0x218(r1)
    lwz r3, 0x21c(r1)
    clrlwi r3, r3, 24
    lfs f0, 0x14(r1)
    fctiwz f0, f0
    stfd f0, 0x210(r1)
    lwz r4, 0x214(r1)
    clrlwi r4, r4, 24
    lfs f0, 0x18(r1)
    fctiwz f0, f0
    stfd f0, 0x208(r1)
    lwz r5, 0x20c(r1)
    clrlwi r5, r5, 24
    lfs f1, 0x1c(r1)
    lfs f0, 0x80(r24)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x200(r1)
    lwz r6, 0x204(r1)
    clrlwi r6, r6, 24
    bl fn_8004EAE4
    addi r3, r1, 0x80
    addi r4, r1, 0x110
    addi r5, r1, 0x68
    bl fn_80018B04
    addi r3, r1, 0x80
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_80018B00
    addi r3, r1, 0x74
    addi r4, r1, 0x80
    li r5, 0x0
    bl fn_8017B144
    lfs f0, 0x74(r1)
    lfs f1, 0x78(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0x1f4(r1)
    lfd f2, 0x1f0(r1)
    fsubs f2, f2, f17
    fdivs f0, f0, f2
    stfs f0, 0x80(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x1fc(r1)
    lfd f0, 0x1f8(r1)
    fsubs f0, f0, f17
    fdivs f0, f1, f0
    stfs f0, 0x84(r1)
    lfs f0, 0x90(r24)
    lwz r0, 0x4(r24)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004E988
    fsubs f20, f16, f0
    lwz r3, 0x18(r24)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1f4(r1)
    lfd f1, 0x1f0(r1)
    fsubs f1, f1, f18
    fdivs f19, f16, f1
    fmuls f1, f20, f19
    fadds f0, f0, f1
lbl_8004E988:
    lfs f1, 0x80(r1)
    fsubs f1, f1, f29
    fmuls f1, f0, f1
    fadds f1, f27, f1
    lfs f2, 0x84(r1)
    fsubs f2, f2, f28
    fmuls f0, f0, f2
    fadds f2, f26, f0
    bl fn_8004EAD4
    addi r28, r28, 0x1
    addi r23, r23, 0x4
lbl_8004E9B4:
    lwz r3, 0x14(r24)
    addi r0, r3, 0x1
    cmpw r28, r0
    blt lbl_8004E310
    addi r27, r27, 0x1
lbl_8004E9C8:
    lwz r3, 0x18(r24)
    subi r0, r3, 0x1
    cmpw r27, r0
    blt lbl_8004E058
    bl fn_8004EAD0
lbl_8004E9DC:
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    li r0, -0x28
    opword 0x13AA000C
    lfd f29, -0x30(r10)
    li r0, -0x38
    opword 0x138A000C
    lfd f28, -0x40(r10)
    li r0, -0x48
    opword 0x136A000C
    lfd f27, -0x50(r10)
    li r0, -0x58
    opword 0x134A000C
    lfd f26, -0x60(r10)
    li r0, -0x68
    opword 0x132A000C
    lfd f25, -0x70(r10)
    li r0, -0x78
    opword 0x130A000C
    lfd f24, -0x80(r10)
    li r0, -0x88
    opword 0x12EA000C
    lfd f23, -0x90(r10)
    li r0, -0x98
    opword 0x12CA000C
    lfd f22, -0xa0(r10)
    li r0, -0xa8
    opword 0x12AA000C
    lfd f21, -0xb0(r10)
    li r0, -0xb8
    opword 0x128A000C
    lfd f20, -0xc0(r10)
    li r0, -0xc8
    opword 0x126A000C
    lfd f19, -0xd0(r10)
    li r0, -0xd8
    opword 0x124A000C
    lfd f18, -0xe0(r10)
    li r0, -0xe8
    opword 0x122A000C
    lfd f17, -0xf0(r10)
    li r0, -0xf8
    opword 0x120A000C
    lfd f16, -0x100(r10)
    li r0, -0x108
    opword 0x11EA000C
    lfd f15, -0x110(r10)
    li r0, -0x118
    opword 0x11CA000C
    lfd f14, -0x120(r10)
    subi r11, r10, 0x120
    bl _restgpr_23
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004EAD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004EAD0() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004EAD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004EAD4() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8004EAE4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004EAE4() {
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
// fn_8004EB0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004EB0C() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

