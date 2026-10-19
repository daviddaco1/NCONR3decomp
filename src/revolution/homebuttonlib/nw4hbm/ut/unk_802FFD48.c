#include "types.h"

// Translation unit: src/revolution/homebuttonlib/nw4hbm/ut/unk_802FFD48.cpp
// Total functions: 41

// Global data symbols (@ha/@l)
extern u8 lbl_80341F00[];
extern u8 lbl_80341F08[];
extern u8 lbl_80341F10[];
extern u8 lbl_80341F18[];
extern u8 lbl_8037DEC0[];
extern u8 lbl_8037DF08[];
extern u8 lbl_8037DF48[];
extern u8 lbl_80462488[];
extern u8 lbl_80462494[];
extern u8 lbl_804624A0[];
extern u8 lbl_804624A4[];
extern u8 lbl_804624A8[];
extern u8 lbl_804624A9[];
extern u8 lbl_804624B0[];
extern u8 lbl_804624C0[];
extern u8 lbl_80462520[];
extern u8 lbl_80462524[];
extern u8 lbl_80462B70[];

// Forward declarations
extern void AXIsInit();
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __ptmf_scall();
extern void __register_global_object();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_27();
extern void dtor_80136CFC();
extern void fn_802FA69C();
extern void fn_802FD684();
extern void fn_802FD8B0();
extern void fn_802FD8F8();
extern void fn_802FE7EC();
extern void fn_802FE7F4();
extern void fn_802FE8CC();
extern void fn_802FE930();
extern void fn_802FE994();
extern void fn_802FE9F8();
extern void fn_802FEA00();
extern void fn_802FEA08();
extern void fn_802FEB44();
extern void fn_802FEB50();
extern void fn_802FEB58();
extern void fn_802FEB60();
extern void fn_802FEB70();
extern void fn_802FEB80();
extern void fn_802FEB88();
extern void fn_802FFD48();
extern void fn_802FFD58();
extern void fn_802FFD98();
extern void fn_802FFEF8();
extern void fn_80300130();
extern void fn_80300140();
extern void fn_80300180();
extern void fn_803002E0();
extern void fn_80300518();
extern void fn_803005A4();
extern void fn_803005AC();
extern void fn_80300608();
extern void fn_80300660();
extern void fn_803006EC();
extern void fn_803006F4();
extern void fn_803006FC();
extern void fn_80300704();
extern void fn_8030070C();
extern void fn_80300714();
extern void fn_8030071C();
extern void fn_80300938();
extern void fn_80300B70();
extern void fn_80300F4C();
extern void fn_80301064();
extern void fn_803017B4();
extern void fn_80301F04();
extern void fn_80301FA8();
extern void fn_80302048();
extern void fn_80302248();
extern void fn_80302254();
extern void fn_80302BA4();
extern void fn_80302BD0();
extern void fn_80302C08();
extern void fn_80302C40();
extern void fn_80302CC0();
extern void fn_80302CF8();
extern void fn_803037F4();
extern void fn_80303848();
extern void fn_8030385C();
extern void fn_80303884();
extern void fn_803038B0();
extern void memset();
extern void wcscpy();

// ----------------------------------------------------------------------------
// fn_802FFD48
// ----------------------------------------------------------------------------
asm void fn_802FFD48() {
    nofralloc
    lis r4, lbl_8037DF08@ha
    addi r4, r4, lbl_8037DF08@l
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802FFD58
// ----------------------------------------------------------------------------
asm void fn_802FFD58() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802FFD80
    cmpwi r4, 0x0
    ble lbl_802FFD80
    bl dtor_80136CFC
lbl_802FFD80:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802FFD98
// ----------------------------------------------------------------------------
asm void fn_802FFD98() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    cmpwi r4, 0xa
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_802FFDDC
    bge lbl_802FFEC8
    cmpwi r4, 0x9
    bge lbl_802FFE10
    b lbl_802FFEC8
lbl_802FFDDC:
    lwz r31, 0x0(r5)
    lfs f30, 0x8(r5)
    mr r3, r31
    bl fn_80300518
    fmr f31, f1
    mr r3, r31
    bl fn_802FEB88
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_802FEB44
    li r3, 0x3
    b lbl_802FFECC
lbl_802FFE10:
    lwz r30, 0x0(r5)
    mr r3, r30
    bl fn_803005A4
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_802FFEC0
    mr r3, r30
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_802FFE48
    mr r3, r30
    bl fn_802FEA00
    fmr f31, f1
    b lbl_802FFE54
lbl_802FFE48:
    mr r3, r30
    bl fn_802FE8CC
    fmr f31, f1
lbl_802FFE54:
    mr r3, r30
    bl fn_802FEB80
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80341F00@ha
    lfs f3, 0x8(r29)
    mr r3, r30
    stw r0, 0x8(r1)
    lfd f2, lbl_80341F00@l(r4)
    fsubs f4, f1, f3
    lfd f0, 0x8(r1)
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_802FEB50
lbl_802FFEC0:
    li r3, 0x1
    b lbl_802FFECC
lbl_802FFEC8:
    li r3, 0x0
lbl_802FFECC:
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x54(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_802FFEF8
// ----------------------------------------------------------------------------
asm void fn_802FFEF8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_802FFF3C
    bge lbl_80300104
    cmpwi r5, 0x9
    bge lbl_802FFFE4
    b lbl_80300104
lbl_802FFF3C:
    lwz r30, 0x0(r6)
    mr r3, r30
    bl fn_802FEB80
    stfs f1, 0x8(r27)
    mr r3, r30
    bl fn_802FEB88
    stfs f1, 0x4(r27)
    lwz r31, 0x0(r28)
    lfs f30, 0x8(r28)
    mr r3, r31
    bl fn_80300518
    fmr f31, f1
    mr r3, r31
    bl fn_802FEB88
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_802FEB44
    mr r3, r30
    bl fn_802FEB80
    stfs f1, 0x0(r27)
    lwz r3, 0x0(r28)
    bl fn_802FE930
    fmr f31, f1
    mr r3, r30
    bl fn_802FEB88
    fadds f0, f1, f31
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    fsel f0, f2, f0, f6
    stfs f1, 0x4(r27)
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_80300108
lbl_802FFFE4:
    lwz r29, 0x0(r6)
    mr r3, r29
    bl fn_802FEB80
    stfs f1, 0x0(r27)
    lwz r30, 0x0(r28)
    mr r3, r30
    bl fn_803005A4
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_803000A4
    mr r3, r30
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_8030002C
    mr r3, r30
    bl fn_802FEA00
    fmr f31, f1
    b lbl_80300038
lbl_8030002C:
    mr r3, r30
    bl fn_802FE8CC
    fmr f31, f1
lbl_80300038:
    mr r3, r30
    bl fn_802FEB80
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80341F00@ha
    lfs f3, 0x8(r28)
    mr r3, r30
    stw r0, 0x8(r1)
    lfd f2, lbl_80341F00@l(r4)
    fsubs f4, f1, f3
    lfd f0, 0x8(r1)
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_802FEB50
lbl_803000A4:
    mr r3, r29
    bl fn_802FEB80
    stfs f1, 0x8(r27)
    mr r3, r29
    bl fn_802FEB88
    stfs f1, 0x4(r27)
    mr r3, r29
    bl fn_802FE930
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    fsel f0, f3, f0, f2
    stfs f5, 0x0(r27)
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_80300108
lbl_80300104:
    li r3, 0x0
lbl_80300108:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_80300130
// ----------------------------------------------------------------------------
asm void fn_80300130() {
    nofralloc
    lis r4, lbl_8037DEC0@ha
    addi r4, r4, lbl_8037DEC0@l
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80300140
// ----------------------------------------------------------------------------
asm void fn_80300140() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80300168
    cmpwi r4, 0x0
    ble lbl_80300168
    bl dtor_80136CFC
lbl_80300168:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80300180
// ----------------------------------------------------------------------------
asm void fn_80300180() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    cmpwi r4, 0xa
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    beq lbl_803001C4
    bge lbl_803002B0
    cmpwi r4, 0x9
    bge lbl_803001F8
    b lbl_803002B0
lbl_803001C4:
    lwz r31, 0x0(r5)
    lfs f30, 0x8(r5)
    mr r3, r31
    bl fn_80300660
    fmr f31, f1
    mr r3, r31
    bl fn_802FEB88
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_802FEB44
    li r3, 0x3
    b lbl_803002B4
lbl_803001F8:
    lwz r30, 0x0(r5)
    mr r3, r30
    bl fn_80300704
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_803002A8
    mr r3, r30
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_80300230
    mr r3, r30
    bl fn_802FEA00
    fmr f31, f1
    b lbl_8030023C
lbl_80300230:
    mr r3, r30
    bl fn_802FE8CC
    fmr f31, f1
lbl_8030023C:
    mr r3, r30
    bl fn_802FEB80
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80341F00@ha
    lfs f3, 0x8(r29)
    mr r3, r30
    stw r0, 0x8(r1)
    lfd f2, lbl_80341F00@l(r4)
    fsubs f4, f1, f3
    lfd f0, 0x8(r1)
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_802FEB50
lbl_803002A8:
    li r3, 0x1
    b lbl_803002B4
lbl_803002B0:
    li r3, 0x0
lbl_803002B4:
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x54(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_803002E0
// ----------------------------------------------------------------------------
asm void fn_803002E0() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_27
    cmpwi r5, 0xa
    mr r27, r4
    mr r28, r6
    beq lbl_80300324
    bge lbl_803004EC
    cmpwi r5, 0x9
    bge lbl_803003CC
    b lbl_803004EC
lbl_80300324:
    lwz r30, 0x0(r6)
    mr r3, r30
    bl fn_802FEB80
    stfs f1, 0x8(r27)
    mr r3, r30
    bl fn_802FEB88
    stfs f1, 0x4(r27)
    lwz r31, 0x0(r28)
    lfs f30, 0x8(r28)
    mr r3, r31
    bl fn_80300660
    fmr f31, f1
    mr r3, r31
    bl fn_802FEB88
    fadds f2, f1, f31
    mr r3, r31
    fmr f1, f30
    bl fn_802FEB44
    mr r3, r30
    bl fn_802FEB80
    stfs f1, 0x0(r27)
    lwz r3, 0x0(r28)
    bl fn_802FE930
    fmr f31, f1
    mr r3, r30
    bl fn_802FEB88
    fadds f0, f1, f31
    lfs f6, 0x4(r27)
    lfs f7, 0x0(r27)
    li r3, 0x3
    lfs f5, 0x8(r27)
    fsubs f2, f0, f6
    fsubs f3, f5, f7
    fsel f1, f2, f6, f0
    fsel f4, f3, f7, f5
    fsel f3, f3, f5, f7
    fsel f0, f2, f0, f6
    stfs f1, 0x4(r27)
    stfs f4, 0x0(r27)
    stfs f3, 0x8(r27)
    stfs f0, 0xc(r27)
    b lbl_803004F0
lbl_803003CC:
    lwz r29, 0x0(r6)
    mr r3, r29
    bl fn_802FEB80
    stfs f1, 0x0(r27)
    lwz r30, 0x0(r28)
    mr r3, r30
    bl fn_80300704
    cmpwi r3, 0x0
    mr r31, r3
    ble lbl_8030048C
    mr r3, r30
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_80300414
    mr r3, r30
    bl fn_802FEA00
    fmr f31, f1
    b lbl_80300420
lbl_80300414:
    mr r3, r30
    bl fn_802FE8CC
    fmr f31, f1
lbl_80300420:
    mr r3, r30
    bl fn_802FEB80
    lis r0, 0x4330
    xoris r3, r31, 0x8000
    stw r3, 0xc(r1)
    lis r4, lbl_80341F00@ha
    lfs f3, 0x8(r28)
    mr r3, r30
    stw r0, 0x8(r1)
    lfd f2, lbl_80341F00@l(r4)
    fsubs f4, f1, f3
    lfd f0, 0x8(r1)
    stw r0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f1, f0, f31
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    addi r0, r4, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f1, f3, f0
    bl fn_802FEB50
lbl_8030048C:
    mr r3, r29
    bl fn_802FEB80
    stfs f1, 0x8(r27)
    mr r3, r29
    bl fn_802FEB88
    stfs f1, 0x4(r27)
    mr r3, r29
    bl fn_802FE930
    lfs f2, 0x4(r27)
    li r3, 0x1
    lfs f6, 0x0(r27)
    fadds f0, f2, f1
    lfs f4, 0x8(r27)
    fsubs f1, f4, f6
    fsubs f3, f0, f2
    fsel f5, f1, f6, f4
    fsel f4, f1, f4, f6
    fsel f1, f3, f2, f0
    fsel f0, f3, f0, f2
    stfs f5, 0x0(r27)
    stfs f4, 0x8(r27)
    stfs f1, 0x4(r27)
    stfs f0, 0xc(r27)
    b lbl_803004F0
lbl_803004EC:
    li r3, 0x0
lbl_803004F0:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_80300518
// ----------------------------------------------------------------------------
asm void fn_80300518() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_802FD8F8
    cmpwi r3, 0x0
    beq lbl_80300554
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_80300558
lbl_80300554:
    li r31, 0x0
lbl_80300558:
    mr r3, r30
    bl fn_802FE7F4
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r3, lbl_80341F10@ha
    lfd f3, lbl_80341F10@l(r3)
    stw r0, 0x8(r1)
    lfs f0, 0x50(r30)
    lfd f2, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f2, f2, f3
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803005A4
// ----------------------------------------------------------------------------
asm void fn_803005A4() {
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803005AC
// ----------------------------------------------------------------------------
asm void fn_803005AC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802FD684
    lis r3, lbl_80341F08@ha
    lis r4, lbl_804624A4@ha
    lfs f0, lbl_80341F08@l(r3)
    addi r4, r4, lbl_804624A4@l
    li r5, 0x4
    li r0, 0x0
    stfs f0, 0x4c(r31)
    mr r3, r31
    stfs f0, 0x50(r31)
    stw r5, 0x54(r31)
    stw r0, 0x58(r31)
    stw r4, 0x5c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80300608
// ----------------------------------------------------------------------------
asm void fn_80300608() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80300644
    li r4, 0x0
    bl fn_802FD8B0
    cmpwi r31, 0x0
    ble lbl_80300644
    mr r3, r30
    bl dtor_80136CFC
lbl_80300644:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80300660
// ----------------------------------------------------------------------------
asm void fn_80300660() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_802FD8F8
    cmpwi r3, 0x0
    beq lbl_8030069C
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_803006A0
lbl_8030069C:
    li r31, 0x0
lbl_803006A0:
    mr r3, r30
    bl fn_802FE7F4
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r3, lbl_80341F10@ha
    lfd f3, lbl_80341F10@l(r3)
    stw r0, 0x8(r1)
    lfs f0, 0x50(r30)
    lfd f2, 0x8(r1)
    lwz r31, 0x1c(r1)
    fsubs f2, f2, f3
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803006EC
// ----------------------------------------------------------------------------
asm void fn_803006EC() {
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803006F4
// ----------------------------------------------------------------------------
asm void fn_803006F4() {
    nofralloc
    stfs f1, 0x4c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803006FC
// ----------------------------------------------------------------------------
asm void fn_803006FC() {
    nofralloc
    lfs f1, 0x4c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80300704
// ----------------------------------------------------------------------------
asm void fn_80300704() {
    nofralloc
    lwz r3, 0x54(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030070C
// ----------------------------------------------------------------------------
asm void fn_8030070C() {
    nofralloc
    stw r4, 0x5c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80300714
// ----------------------------------------------------------------------------
asm void fn_80300714() {
    nofralloc
    lwz r3, 0x5c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030071C
// ----------------------------------------------------------------------------
asm void fn_8030071C() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stw r31, 0x6c(r1)
    lbz r0, 0x0(r3)
    mr r31, r3
    stb r0, 0x8(r1)
    lbz r0, 0x1(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r3)
    stb r0, 0xa(r1)
    lbz r0, 0x3(r3)
    stb r0, 0xb(r1)
    lbz r0, 0x4(r3)
    stb r0, 0xc(r1)
    lbz r0, 0x5(r3)
    stb r0, 0xd(r1)
    lbz r0, 0x6(r3)
    stb r0, 0xe(r1)
    lbz r0, 0x7(r3)
    stb r0, 0xf(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x10(r1)
    lbz r0, 0x9(r3)
    stb r0, 0x11(r1)
    lbz r0, 0xa(r3)
    stb r0, 0x12(r1)
    lbz r0, 0xb(r3)
    stb r0, 0x13(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x14(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x15(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x16(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x17(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x18(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x19(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x1a(r1)
    lbz r0, 0x13(r3)
    stb r0, 0x1b(r1)
    lbz r0, 0x14(r3)
    stb r0, 0x1c(r1)
    lbz r0, 0x15(r3)
    stb r0, 0x1d(r1)
    lbz r0, 0x16(r3)
    stb r0, 0x1e(r1)
    lbz r0, 0x17(r3)
    stb r0, 0x1f(r1)
    lbz r0, 0x18(r3)
    stb r0, 0x20(r1)
    lbz r0, 0x19(r3)
    stb r0, 0x21(r1)
    lbz r0, 0x1a(r3)
    stb r0, 0x22(r1)
    lbz r0, 0x1b(r3)
    stb r0, 0x23(r1)
    lbz r0, 0x1c(r3)
    stb r0, 0x24(r1)
    lbz r0, 0x1d(r3)
    stb r0, 0x25(r1)
    lbz r0, 0x1e(r3)
    stb r0, 0x26(r1)
    lbz r0, 0x1f(r3)
    stb r0, 0x27(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x28(r1)
    lwz r6, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r6, 0x2c(r1)
    stw r0, 0x30(r1)
    lwz r6, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r6, 0x34(r1)
    stw r0, 0x38(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x3c(r1)
    lwz r6, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    lbz r0, 0x40(r3)
    stb r0, 0x48(r1)
    lbz r0, 0x41(r3)
    stb r0, 0x49(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x4a(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x4b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x4c(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x50(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x58(r1)
    lwz r0, 0x54(r3)
    stw r0, 0x5c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x60(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0x8
    stw r0, 0x64(r1)
    bl fn_80301064
    fmr f30, f1
    addi r3, r1, 0x8
    bl fn_802FEB88
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_802FEB80
    fmr f2, f31
    mr r3, r31
    bl fn_802FEB44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_802FD8B0
    fmr f1, f30
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80300938
// ----------------------------------------------------------------------------
asm void fn_80300938() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    mr r3, r31
    bl wcscpy
    lbz r0, 0x0(r30)
    stb r0, 0x8(r1)
    lbz r0, 0x1(r30)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r30)
    stb r0, 0xa(r1)
    lbz r0, 0x3(r30)
    stb r0, 0xb(r1)
    lbz r0, 0x4(r30)
    stb r0, 0xc(r1)
    lbz r0, 0x5(r30)
    stb r0, 0xd(r1)
    lbz r0, 0x6(r30)
    stb r0, 0xe(r1)
    lbz r0, 0x7(r30)
    stb r0, 0xf(r1)
    lbz r0, 0x8(r30)
    stb r0, 0x10(r1)
    lbz r0, 0x9(r30)
    stb r0, 0x11(r1)
    lbz r0, 0xa(r30)
    stb r0, 0x12(r1)
    lbz r0, 0xb(r30)
    stb r0, 0x13(r1)
    lbz r0, 0xc(r30)
    stb r0, 0x14(r1)
    lbz r0, 0xd(r30)
    stb r0, 0x15(r1)
    lbz r0, 0xe(r30)
    stb r0, 0x16(r1)
    lbz r0, 0xf(r30)
    stb r0, 0x17(r1)
    lbz r0, 0x10(r30)
    stb r0, 0x18(r1)
    lbz r0, 0x11(r30)
    stb r0, 0x19(r1)
    lbz r0, 0x12(r30)
    stb r0, 0x1a(r1)
    lbz r0, 0x13(r30)
    stb r0, 0x1b(r1)
    lbz r0, 0x14(r30)
    stb r0, 0x1c(r1)
    lbz r0, 0x15(r30)
    stb r0, 0x1d(r1)
    lbz r0, 0x16(r30)
    stb r0, 0x1e(r1)
    lbz r0, 0x17(r30)
    stb r0, 0x1f(r1)
    lbz r0, 0x18(r30)
    stb r0, 0x20(r1)
    lbz r0, 0x19(r30)
    stb r0, 0x21(r1)
    lbz r0, 0x1a(r30)
    stb r0, 0x22(r1)
    lbz r0, 0x1b(r30)
    stb r0, 0x23(r1)
    lbz r0, 0x1c(r30)
    stb r0, 0x24(r1)
    lbz r0, 0x1d(r30)
    stb r0, 0x25(r1)
    lbz r0, 0x1e(r30)
    stb r0, 0x26(r1)
    lbz r0, 0x1f(r30)
    stb r0, 0x27(r1)
    lwz r0, 0x20(r30)
    stw r0, 0x28(r1)
    lwz r4, 0x24(r30)
    lwz r0, 0x28(r30)
    stw r4, 0x2c(r1)
    stw r0, 0x30(r1)
    lwz r4, 0x2c(r30)
    lwz r0, 0x30(r30)
    stw r4, 0x34(r1)
    stw r0, 0x38(r1)
    lwz r0, 0x34(r30)
    stw r0, 0x3c(r1)
    lwz r4, 0x38(r30)
    lwz r0, 0x3c(r30)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    lbz r0, 0x40(r30)
    stb r0, 0x48(r1)
    lbz r0, 0x41(r30)
    stb r0, 0x49(r1)
    lbz r0, 0x42(r30)
    stb r0, 0x4a(r1)
    lbz r0, 0x43(r30)
    stb r0, 0x4b(r1)
    lfs f0, 0x44(r30)
    stfs f0, 0x4c(r1)
    lwz r0, 0x48(r30)
    stw r0, 0x50(r1)
    lfs f0, 0x4c(r30)
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r30)
    stfs f0, 0x58(r1)
    lwz r0, 0x54(r30)
    stw r0, 0x5c(r1)
    lwz r0, 0x58(r30)
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    stw r0, 0x60(r1)
    lwz r0, 0x5c(r30)
    stw r0, 0x64(r1)
    bl fn_80301064
    fmr f30, f1
    addi r3, r1, 0x8
    bl fn_802FEB88
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_802FEB80
    fmr f2, f31
    mr r3, r30
    bl fn_802FEB44
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_802FD8B0
    fmr f1, f30
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80300B70
// ----------------------------------------------------------------------------
asm void fn_80300B70() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    stfd f28, 0x70(r1)
    opword 0xF3810078
    addi r11, r1, 0x70
    bl _savegpr_25
    li r26, 0x0
    stw r3, 0x28(r1)
    mr r27, r3
    mr r28, r4
    stw r26, 0x30(r1)
    mr r29, r5
    mr r30, r6
    stw r26, 0x34(r1)
    stw r26, 0x38(r1)
    stw r5, 0x2c(r1)
    bl fn_802FD8F8
    lis r25, lbl_80341F08@ha
    mr r4, r3
    lfs f31, lbl_80341F08@l(r25)
    addi r3, r1, 0x18
    li r31, 0x0
    bl fn_802FA69C
    fmr f0, f31
    mr r3, r27
    stfs f0, 0x0(r28)
    stfs f0, 0x8(r28)
    bl fn_802FD8F8
    cmpwi r3, 0x0
    beq lbl_80300C18
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r26, r3
lbl_80300C18:
    mr r3, r27
    bl fn_802FE7F4
    xoris r3, r26, 0x8000
    lis r0, 0x4330
    stw r3, 0x44(r1)
    lis r4, lbl_80341F10@ha
    lis r3, lbl_80341F08@ha
    lfd f4, lbl_80341F10@l(r4)
    stw r0, 0x40(r1)
    lfs f2, 0x50(r27)
    lfd f3, 0x40(r1)
    lfs f0, lbl_80341F08@l(r3)
    fsubs f3, f3, f4
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f0, f1
    ble lbl_80300C60
    b lbl_80300C64
lbl_80300C60:
    fmr f1, f0
lbl_80300C64:
    stfs f1, 0x4(r28)
    mr r3, r27
    bl fn_802FD8F8
    cmpwi r3, 0x0
    beq lbl_80300C90
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    mr r25, r3
    b lbl_80300C94
lbl_80300C90:
    li r25, 0x0
lbl_80300C94:
    mr r3, r27
    bl fn_802FE7F4
    xoris r3, r25, 0x8000
    lis r0, 0x4330
    stw r3, 0x4c(r1)
    lis r4, lbl_80341F10@ha
    lis r3, lbl_80341F08@ha
    lfd f4, lbl_80341F10@l(r4)
    stw r0, 0x48(r1)
    lfs f2, 0x50(r27)
    lfd f3, 0x48(r1)
    lfs f0, lbl_80341F08@l(r3)
    fsubs f3, f3, f4
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_80300CDC
    b lbl_80300CE0
lbl_80300CDC:
    fmr f1, f0
lbl_80300CE0:
    stfs f1, 0xc(r28)
    addi r3, r1, 0x18
    addi r12, r1, 0x1c
    stw r29, 0x18(r1)
    bl __ptmf_scall
    nop
    lis r5, lbl_80341F08@ha
    lis r4, lbl_80341F10@ha
    lfs f28, lbl_80341F08@l(r5)
    mr r25, r3
    lfd f30, lbl_80341F10@l(r4)
    lis r26, 0x4330
    b lbl_80300EE4
lbl_80300D14:
    clrlwi r0, r25, 16
    cmpwi r0, 0x20
    bge lbl_80300E30
    cntlzw r0, r31
    fmr f1, f31
    srwi r0, r0, 5
    stfs f31, 0x8(r1)
    mr r3, r27
    stfs f28, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f28, 0x14(r1)
    stw r4, 0x2c(r1)
    stw r0, 0x38(r1)
    bl fn_802FEB50
    lwz r3, 0x5c(r27)
    addi r4, r1, 0x8
    clrlwi r5, r25, 16
    addi r6, r1, 0x28
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x2c(r1)
    mr r25, r3
    lfs f1, 0x8(r1)
    stw r0, 0x18(r1)
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f1
    ble lbl_80300D8C
    b lbl_80300D90
lbl_80300D8C:
    fmr f1, f0
lbl_80300D90:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_80300DA8
    b lbl_80300DAC
lbl_80300DA8:
    fmr f1, f0
lbl_80300DAC:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_80300DC4
    b lbl_80300DC8
lbl_80300DC4:
    fmr f1, f0
lbl_80300DC8:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_80300DE0
    b lbl_80300DE4
lbl_80300DE0:
    fmr f1, f0
lbl_80300DE4:
    stfs f1, 0xc(r28)
    mr r3, r27
    bl fn_802FEB80
    cmpwi r25, 0x4
    fmr f31, f1
    bne lbl_80300E04
    mr r3, r30
    b lbl_80300F14
lbl_80300E04:
    cmpwi r25, 0x1
    bne lbl_80300E14
    li r31, 0x0
    b lbl_80300ED0
lbl_80300E14:
    cmpwi r25, 0x2
    bne lbl_80300E24
    li r31, 0x1
    b lbl_80300ED0
lbl_80300E24:
    cmpwi r25, 0x3
    beq lbl_80300F00
    b lbl_80300ED0
lbl_80300E30:
    cmpwi r31, 0x0
    beq lbl_80300E40
    lfs f0, 0x4c(r27)
    fadds f31, f31, f0
lbl_80300E40:
    mr r3, r27
    li r31, 0x1
    bl fn_802FE9F8
    cmpwi r3, 0x0
    beq lbl_80300E64
    mr r3, r27
    bl fn_802FEA00
    fadds f31, f31, f1
    b lbl_80300EA8
lbl_80300E64:
    mr r3, r27
    bl fn_802FE7EC
    fmr f29, f1
    mr r3, r27
    bl fn_802FD8F8
    lwz r12, 0x0(r3)
    clrlwi r4, r25, 16
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r26, 0x48(r1)
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f29
    fadds f31, f31, f0
lbl_80300EA8:
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f31
    ble lbl_80300EB8
    fmr f0, f31
lbl_80300EB8:
    lfs f1, 0x8(r28)
    stfs f0, 0x0(r28)
    fcmpo cr0, f1, f31
    bge lbl_80300ECC
    fmr f1, f31
lbl_80300ECC:
    stfs f1, 0x8(r28)
lbl_80300ED0:
    addi r3, r1, 0x18
    addi r12, r1, 0x1c
    bl __ptmf_scall
    nop
    mr r25, r3
lbl_80300EE4:
    lwz r4, 0x18(r1)
    subf r3, r29, r4
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r30
    ble lbl_80300D14
lbl_80300F00:
    lwz r0, 0x18(r1)
    subf r3, r29, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_80300F14:
    opword 0xE3E100A8
    lfd f31, 0xa0(r1)
    opword 0xE3C10098
    lfd f30, 0x90(r1)
    opword 0xE3A10088
    lfd f29, 0x80(r1)
    opword 0xE3810078
    addi r11, r1, 0x70
    lfd f28, 0x70(r1)
    bl _restgpr_25
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_80300F4C
// ----------------------------------------------------------------------------
asm void fn_80300F4C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_80341F08@ha
    mr r27, r3
    lfs f1, lbl_80341F08@l(r31)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    fmr f2, f1
    stfs f1, 0x0(r4)
    stfs f1, 0x8(r4)
    stfs f1, 0x4(r4)
    stfs f1, 0xc(r4)
    bl fn_802FEB44
    lfs f31, lbl_80341F08@l(r31)
lbl_80300F9C:
    stfs f31, 0x8(r1)
    mr r3, r27
    mr r5, r29
    mr r6, r30
    stfs f31, 0xc(r1)
    addi r4, r1, 0x8
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    bl fn_80300B70
    lfs f1, 0x8(r1)
    slwi r0, r3, 1
    lfs f0, 0x0(r28)
    add r29, r29, r0
    subf r30, r3, r30
    fcmpo cr0, f0, f1
    ble lbl_80300FE0
    b lbl_80300FE4
lbl_80300FE0:
    fmr f1, f0
lbl_80300FE4:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_80300FFC
    b lbl_80301000
lbl_80300FFC:
    fmr f1, f0
lbl_80301000:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_80301018
    b lbl_8030101C
lbl_80301018:
    fmr f1, f0
lbl_8030101C:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    bge lbl_80301034
    b lbl_80301038
lbl_80301034:
    fmr f1, f0
lbl_80301038:
    cmpwi r30, 0x0
    stfs f1, 0xc(r28)
    bgt lbl_80300F9C
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80301064
// ----------------------------------------------------------------------------
asm void fn_80301064() {
    nofralloc
    stwu r1, -0x1c0(r1)
    mflr r0
    stw r0, 0x1c4(r1)
    stfd f31, 0x1b0(r1)
    opword 0xF3E101B8
    stfd f30, 0x1a0(r1)
    opword 0xF3C101A8
    stfd f29, 0x190(r1)
    opword 0xF3A10198
    stfd f28, 0x180(r1)
    opword 0xF3810188
    stfd f27, 0x170(r1)
    opword 0xF3610178
    stfd f26, 0x160(r1)
    opword 0xF3410168
    stfd f25, 0x150(r1)
    opword 0xF3210158
    stfd f24, 0x140(r1)
    opword 0xF3010148
    addi r11, r1, 0x140
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_802FEB80
    stfs f1, 0xc(r1)
    mr r3, r28
    bl fn_802FEB88
    frsp f28, f1
    stfs f1, 0x8(r1)
    mr r3, r28
    mr r6, r29
    mr r7, r30
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r31, 0x0
    bl fn_803017B4
    fmr f29, f1
    mr r3, r28
    bl fn_802FEB80
    mr r3, r28
    bl fn_802FEB88
    li r0, 0x0
    lfs f2, 0xc(r1)
    stw r0, 0x48(r1)
    fsubs f30, f28, f1
    lfs f0, 0x8(r1)
    mr r3, r28
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r28, 0x40(r1)
    stw r29, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f0, 0x4c(r1)
    bl fn_802FD8F8
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_802FA69C
    stw r29, 0x30(r1)
    addi r3, r1, 0x30
    addi r12, r1, 0x34
    bl __ptmf_scall
    nop
    lis r4, lbl_80341F08@ha
    lis r5, lbl_80341F18@ha
    lfs f31, lbl_80341F08@l(r4)
    lis r4, lbl_80341F10@ha
    lfs f25, lbl_80341F18@l(r5)
    mr r26, r3
    lfd f27, lbl_80341F10@l(r4)
    lis r27, 0x4330
    b lbl_80301708
lbl_80301184:
    clrlwi r4, r26, 16
    cmpwi r4, 0x20
    bge lbl_80301668
    cntlzw r0, r31
    stw r5, 0x44(r1)
    srwi r0, r0, 5
    addi r5, r1, 0x40
    stw r0, 0x50(r1)
    lwz r3, 0x5c(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_80301634
    lwz r0, 0x58(r28)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    bne lbl_803013E4
    stfs f31, 0x20(r1)
    lwz r31, 0x44(r1)
    stfs f31, 0x24(r1)
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    lbz r0, 0x0(r28)
    stb r0, 0xb8(r1)
    lbz r0, 0x1(r28)
    stb r0, 0xb9(r1)
    lbz r0, 0x2(r28)
    stb r0, 0xba(r1)
    lbz r0, 0x3(r28)
    stb r0, 0xbb(r1)
    lbz r0, 0x4(r28)
    stb r0, 0xbc(r1)
    lbz r0, 0x5(r28)
    stb r0, 0xbd(r1)
    lbz r0, 0x6(r28)
    stb r0, 0xbe(r1)
    lbz r0, 0x7(r28)
    stb r0, 0xbf(r1)
    lbz r0, 0x8(r28)
    stb r0, 0xc0(r1)
    lbz r0, 0x9(r28)
    stb r0, 0xc1(r1)
    lbz r0, 0xa(r28)
    stb r0, 0xc2(r1)
    lbz r0, 0xb(r28)
    stb r0, 0xc3(r1)
    lbz r0, 0xc(r28)
    stb r0, 0xc4(r1)
    lbz r0, 0xd(r28)
    stb r0, 0xc5(r1)
    lbz r0, 0xe(r28)
    stb r0, 0xc6(r1)
    lbz r0, 0xf(r28)
    stb r0, 0xc7(r1)
    lbz r0, 0x10(r28)
    stb r0, 0xc8(r1)
    lbz r0, 0x11(r28)
    stb r0, 0xc9(r1)
    lbz r0, 0x12(r28)
    stb r0, 0xca(r1)
    lbz r0, 0x13(r28)
    stb r0, 0xcb(r1)
    lbz r0, 0x14(r28)
    stb r0, 0xcc(r1)
    lbz r0, 0x15(r28)
    stb r0, 0xcd(r1)
    lbz r0, 0x16(r28)
    stb r0, 0xce(r1)
    lbz r0, 0x17(r28)
    stb r0, 0xcf(r1)
    lbz r0, 0x18(r28)
    stb r0, 0xd0(r1)
    lbz r0, 0x19(r28)
    stb r0, 0xd1(r1)
    lbz r0, 0x1a(r28)
    stb r0, 0xd2(r1)
    lbz r0, 0x1b(r28)
    stb r0, 0xd3(r1)
    lbz r0, 0x1c(r28)
    stb r0, 0xd4(r1)
    lbz r0, 0x1d(r28)
    stb r0, 0xd5(r1)
    lbz r0, 0x1e(r28)
    stb r0, 0xd6(r1)
    lbz r0, 0x1f(r28)
    stb r0, 0xd7(r1)
    lwz r0, 0x20(r28)
    stw r0, 0xd8(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    stw r3, 0xdc(r1)
    stw r0, 0xe0(r1)
    lwz r3, 0x2c(r28)
    lwz r0, 0x30(r28)
    stw r3, 0xe4(r1)
    stw r0, 0xe8(r1)
    lwz r0, 0x34(r28)
    stw r0, 0xec(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lbz r0, 0x40(r28)
    stb r0, 0xf8(r1)
    lbz r0, 0x41(r28)
    stb r0, 0xf9(r1)
    lbz r0, 0x42(r28)
    stb r0, 0xfa(r1)
    lbz r0, 0x43(r28)
    fmr f1, f31
    fmr f2, f31
    addi r3, r1, 0xb8
    stb r0, 0xfb(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0xfc(r1)
    lwz r0, 0x48(r28)
    stw r0, 0x100(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0x104(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0x108(r1)
    lwz r0, 0x54(r28)
    stw r0, 0x10c(r1)
    lwz r0, 0x58(r28)
    stw r0, 0x110(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0x114(r1)
    bl fn_802FEB44
    subf r4, r29, r31
    mr r5, r31
    srwi r0, r4, 31
    addi r3, r1, 0xb8
    add r0, r0, r4
    addi r4, r1, 0x20
    srawi r0, r0, 1
    subf r6, r0, r30
    bl fn_80300B70
    lfs f1, 0x28(r1)
    addi r3, r1, 0xb8
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_802FD8B0
    fsubs f1, f29, f26
    lfs f0, 0x48(r1)
    mr r3, r28
    fmuls f1, f1, f25
    fadds f1, f0, f1
    bl fn_802FEB50
    b lbl_8030162C
lbl_803013E4:
    cmplwi r0, 0x2
    bne lbl_803015FC
    stfs f31, 0x10(r1)
    lwz r31, 0x44(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    lbz r0, 0x0(r28)
    stb r0, 0x58(r1)
    lbz r0, 0x1(r28)
    stb r0, 0x59(r1)
    lbz r0, 0x2(r28)
    stb r0, 0x5a(r1)
    lbz r0, 0x3(r28)
    stb r0, 0x5b(r1)
    lbz r0, 0x4(r28)
    stb r0, 0x5c(r1)
    lbz r0, 0x5(r28)
    stb r0, 0x5d(r1)
    lbz r0, 0x6(r28)
    stb r0, 0x5e(r1)
    lbz r0, 0x7(r28)
    stb r0, 0x5f(r1)
    lbz r0, 0x8(r28)
    stb r0, 0x60(r1)
    lbz r0, 0x9(r28)
    stb r0, 0x61(r1)
    lbz r0, 0xa(r28)
    stb r0, 0x62(r1)
    lbz r0, 0xb(r28)
    stb r0, 0x63(r1)
    lbz r0, 0xc(r28)
    stb r0, 0x64(r1)
    lbz r0, 0xd(r28)
    stb r0, 0x65(r1)
    lbz r0, 0xe(r28)
    stb r0, 0x66(r1)
    lbz r0, 0xf(r28)
    stb r0, 0x67(r1)
    lbz r0, 0x10(r28)
    stb r0, 0x68(r1)
    lbz r0, 0x11(r28)
    stb r0, 0x69(r1)
    lbz r0, 0x12(r28)
    stb r0, 0x6a(r1)
    lbz r0, 0x13(r28)
    stb r0, 0x6b(r1)
    lbz r0, 0x14(r28)
    stb r0, 0x6c(r1)
    lbz r0, 0x15(r28)
    stb r0, 0x6d(r1)
    lbz r0, 0x16(r28)
    stb r0, 0x6e(r1)
    lbz r0, 0x17(r28)
    stb r0, 0x6f(r1)
    lbz r0, 0x18(r28)
    stb r0, 0x70(r1)
    lbz r0, 0x19(r28)
    stb r0, 0x71(r1)
    lbz r0, 0x1a(r28)
    stb r0, 0x72(r1)
    lbz r0, 0x1b(r28)
    stb r0, 0x73(r1)
    lbz r0, 0x1c(r28)
    stb r0, 0x74(r1)
    lbz r0, 0x1d(r28)
    stb r0, 0x75(r1)
    lbz r0, 0x1e(r28)
    stb r0, 0x76(r1)
    lbz r0, 0x1f(r28)
    stb r0, 0x77(r1)
    lwz r0, 0x20(r28)
    stw r0, 0x78(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    lwz r3, 0x2c(r28)
    lwz r0, 0x30(r28)
    stw r3, 0x84(r1)
    stw r0, 0x88(r1)
    lwz r0, 0x34(r28)
    stw r0, 0x8c(r1)
    lwz r3, 0x38(r28)
    lwz r0, 0x3c(r28)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lbz r0, 0x40(r28)
    stb r0, 0x98(r1)
    lbz r0, 0x41(r28)
    stb r0, 0x99(r1)
    lbz r0, 0x42(r28)
    stb r0, 0x9a(r1)
    lbz r0, 0x43(r28)
    fmr f1, f31
    fmr f2, f31
    addi r3, r1, 0x58
    stb r0, 0x9b(r1)
    lfs f0, 0x44(r28)
    stfs f0, 0x9c(r1)
    lwz r0, 0x48(r28)
    stw r0, 0xa0(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0xa4(r1)
    lfs f0, 0x50(r28)
    stfs f0, 0xa8(r1)
    lwz r0, 0x54(r28)
    stw r0, 0xac(r1)
    lwz r0, 0x58(r28)
    stw r0, 0xb0(r1)
    lwz r0, 0x5c(r28)
    stw r0, 0xb4(r1)
    bl fn_802FEB44
    subf r4, r29, r31
    mr r5, r31
    srwi r0, r4, 31
    addi r3, r1, 0x58
    add r0, r0, r4
    addi r4, r1, 0x10
    srawi r0, r0, 1
    subf r6, r0, r30
    bl fn_80300B70
    lfs f1, 0x18(r1)
    addi r3, r1, 0x58
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f26, f1, f0
    bl fn_802FD8B0
    fsubs f1, f29, f26
    lfs f0, 0x48(r1)
    mr r3, r28
    fadds f1, f0, f1
    bl fn_802FEB50
    b lbl_8030162C
lbl_803015FC:
    mr r3, r28
    bl fn_802FEB80
    lfs f0, 0x48(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f29, f0
    bge lbl_80301618
    b lbl_8030161C
lbl_80301618:
    fmr f0, f29
lbl_8030161C:
    fmr f29, f0
    lfs f1, 0x48(r1)
    mr r3, r28
    bl fn_802FEB50
lbl_8030162C:
    li r31, 0x0
    b lbl_8030165C
lbl_80301634:
    cmpwi r3, 0x1
    bne lbl_80301644
    li r31, 0x0
    b lbl_8030165C
lbl_80301644:
    cmpwi r3, 0x2
    bne lbl_80301654
    li r31, 0x1
    b lbl_8030165C
lbl_80301654:
    cmpwi r3, 0x4
    beq lbl_80301724
lbl_8030165C:
    lwz r0, 0x44(r1)
    stw r0, 0x30(r1)
    b lbl_803016F4
lbl_80301668:
    mr r3, r28
    bl fn_802FEB88
    cmpwi r31, 0x0
    fmr f24, f1
    beq lbl_80301688
    lfs f1, 0x4c(r28)
    mr r3, r28
    bl fn_802FEB60
lbl_80301688:
    mr r3, r28
    li r31, 0x1
    bl fn_802FD8F8
    mr r25, r3
    mr r3, r28
    bl fn_802FE7F4
    lwz r12, 0x0(r25)
    fmr f26, f1
    mr r3, r25
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    neg r0, r3
    stw r27, 0x118(r1)
    xoris r0, r0, 0x8000
    mr r3, r28
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f27
    fmuls f1, f0, f26
    bl fn_802FEB70
    mr r3, r28
    clrlwi r4, r26, 16
    bl fn_802FEA08
    fmr f1, f24
    mr r3, r28
    bl fn_802FEB58
lbl_803016F4:
    addi r3, r1, 0x30
    addi r12, r1, 0x34
    bl __ptmf_scall
    nop
    mr r26, r3
lbl_80301708:
    lwz r5, 0x30(r1)
    subf r3, r29, r5
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r30
    ble lbl_80301184
lbl_80301724:
    lwz r0, 0x58(r28)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    beq lbl_8030173C
    cmplwi r0, 0x200
    bne lbl_8030174C
lbl_8030173C:
    fmr f1, f28
    mr r3, r28
    bl fn_802FEB58
    b lbl_80301758
lbl_8030174C:
    fmr f1, f30
    mr r3, r28
    bl fn_802FEB70
lbl_80301758:
    fmr f1, f29
    opword 0xE3E101B8
    lfd f31, 0x1b0(r1)
    opword 0xE3C101A8
    lfd f30, 0x1a0(r1)
    opword 0xE3A10198
    lfd f29, 0x190(r1)
    opword 0xE3810188
    lfd f28, 0x180(r1)
    opword 0xE3610178
    lfd f27, 0x170(r1)
    opword 0xE3410168
    lfd f26, 0x160(r1)
    opword 0xE3210158
    lfd f25, 0x150(r1)
    opword 0xE3010148
    lfd f24, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_25
    lwz r0, 0x1c4(r1)
    mtlr r0
    addi r1, r1, 0x1c0
    blr
}

// ----------------------------------------------------------------------------
// fn_803017B4
// ----------------------------------------------------------------------------
asm void fn_803017B4() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    addi r11, r1, 0x170
    bl _savegpr_27
    lwz r0, 0x58(r3)
    lis r8, lbl_80341F08@ha
    lfs f31, lbl_80341F08@l(r8)
    mr r27, r3
    andi. r0, r0, 0x333
    mr r28, r4
    fmr f2, f31
    mr r29, r5
    mr r30, r6
    mr r31, r7
    cmplwi r0, 0x300
    beq lbl_803019F0
    cmpwi r0, 0x0
    beq lbl_803019F0
    stfs f31, 0x28(r1)
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    lbz r0, 0x0(r3)
    stb r0, 0xf8(r1)
    lbz r0, 0x1(r3)
    stb r0, 0xf9(r1)
    lbz r0, 0x2(r3)
    stb r0, 0xfa(r1)
    lbz r0, 0x3(r3)
    stb r0, 0xfb(r1)
    lbz r0, 0x4(r3)
    stb r0, 0xfc(r1)
    lbz r0, 0x5(r3)
    stb r0, 0xfd(r1)
    lbz r0, 0x6(r3)
    stb r0, 0xfe(r1)
    lbz r0, 0x7(r3)
    stb r0, 0xff(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x100(r1)
    lbz r0, 0x9(r3)
    stb r0, 0x101(r1)
    lbz r0, 0xa(r3)
    stb r0, 0x102(r1)
    lbz r0, 0xb(r3)
    stb r0, 0x103(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x104(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x105(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x106(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x107(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x108(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x109(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x10a(r1)
    lbz r0, 0x13(r3)
    stb r0, 0x10b(r1)
    lbz r0, 0x14(r3)
    stb r0, 0x10c(r1)
    lbz r0, 0x15(r3)
    stb r0, 0x10d(r1)
    lbz r0, 0x16(r3)
    stb r0, 0x10e(r1)
    lbz r0, 0x17(r3)
    stb r0, 0x10f(r1)
    lbz r0, 0x18(r3)
    stb r0, 0x110(r1)
    lbz r0, 0x19(r3)
    stb r0, 0x111(r1)
    lbz r0, 0x1a(r3)
    stb r0, 0x112(r1)
    lbz r0, 0x1b(r3)
    stb r0, 0x113(r1)
    lbz r0, 0x1c(r3)
    stb r0, 0x114(r1)
    lbz r0, 0x1d(r3)
    stb r0, 0x115(r1)
    lbz r0, 0x1e(r3)
    stb r0, 0x116(r1)
    lbz r0, 0x1f(r3)
    stb r0, 0x117(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x118(r1)
    lwz r4, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r4, 0x11c(r1)
    stw r0, 0x120(r1)
    lwz r4, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r4, 0x124(r1)
    stw r0, 0x128(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x12c(r1)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r4, 0x130(r1)
    stw r0, 0x134(r1)
    lbz r0, 0x40(r3)
    stb r0, 0x138(r1)
    lbz r0, 0x41(r3)
    stb r0, 0x139(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x13a(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x13b(r1)
    lfs f0, 0x44(r3)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x28
    stfs f0, 0x13c(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x140(r1)
    lfs f0, 0x4c(r3)
    stfs f0, 0x144(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x148(r1)
    lwz r0, 0x54(r3)
    stw r0, 0x14c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x150(r1)
    lwz r0, 0x5c(r3)
    addi r3, r1, 0xf8
    stw r0, 0x154(r1)
    bl fn_80300F4C
    addi r3, r1, 0xf8
    li r4, 0x0
    bl fn_802FD8B0
    lfs f3, 0x28(r1)
    lfs f2, 0x30(r1)
    lfs f1, 0x2c(r1)
    lfs f0, 0x34(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_803019F0:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_80301A1C
    lis r3, lbl_80341F18@ha
    lfs f0, 0x0(r28)
    lfs f1, lbl_80341F18@l(r3)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_80301A30
lbl_80301A1C:
    cmplwi r0, 0x20
    bne lbl_80301A30
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_80301A30:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_80301A5C
    lis r3, lbl_80341F18@ha
    lfs f0, 0x0(r29)
    lfs f1, lbl_80341F18@l(r3)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_80301A70
lbl_80301A5C:
    cmplwi r0, 0x200
    bne lbl_80301A70
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_80301A70:
    lwz r0, 0x58(r27)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    bne lbl_80301C8C
    lis r3, lbl_80341F08@ha
    lfs f1, lbl_80341F08@l(r3)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    lbz r0, 0x0(r27)
    stb r0, 0x98(r1)
    lbz r0, 0x1(r27)
    stb r0, 0x99(r1)
    lbz r0, 0x2(r27)
    stb r0, 0x9a(r1)
    lbz r0, 0x3(r27)
    stb r0, 0x9b(r1)
    lbz r0, 0x4(r27)
    stb r0, 0x9c(r1)
    lbz r0, 0x5(r27)
    stb r0, 0x9d(r1)
    lbz r0, 0x6(r27)
    stb r0, 0x9e(r1)
    lbz r0, 0x7(r27)
    stb r0, 0x9f(r1)
    lbz r0, 0x8(r27)
    stb r0, 0xa0(r1)
    lbz r0, 0x9(r27)
    stb r0, 0xa1(r1)
    lbz r0, 0xa(r27)
    stb r0, 0xa2(r1)
    lbz r0, 0xb(r27)
    stb r0, 0xa3(r1)
    lbz r0, 0xc(r27)
    stb r0, 0xa4(r1)
    lbz r0, 0xd(r27)
    stb r0, 0xa5(r1)
    lbz r0, 0xe(r27)
    stb r0, 0xa6(r1)
    lbz r0, 0xf(r27)
    stb r0, 0xa7(r1)
    lbz r0, 0x10(r27)
    stb r0, 0xa8(r1)
    lbz r0, 0x11(r27)
    stb r0, 0xa9(r1)
    lbz r0, 0x12(r27)
    stb r0, 0xaa(r1)
    lbz r0, 0x13(r27)
    stb r0, 0xab(r1)
    lbz r0, 0x14(r27)
    stb r0, 0xac(r1)
    lbz r0, 0x15(r27)
    stb r0, 0xad(r1)
    lbz r0, 0x16(r27)
    stb r0, 0xae(r1)
    lbz r0, 0x17(r27)
    stb r0, 0xaf(r1)
    lbz r0, 0x18(r27)
    stb r0, 0xb0(r1)
    lbz r0, 0x19(r27)
    stb r0, 0xb1(r1)
    lbz r0, 0x1a(r27)
    stb r0, 0xb2(r1)
    lbz r0, 0x1b(r27)
    stb r0, 0xb3(r1)
    lbz r0, 0x1c(r27)
    stb r0, 0xb4(r1)
    lbz r0, 0x1d(r27)
    stb r0, 0xb5(r1)
    lbz r0, 0x1e(r27)
    stb r0, 0xb6(r1)
    lbz r0, 0x1f(r27)
    stb r0, 0xb7(r1)
    lwz r0, 0x20(r27)
    stw r0, 0xb8(r1)
    lwz r3, 0x24(r27)
    lwz r0, 0x28(r27)
    stw r3, 0xbc(r1)
    stw r0, 0xc0(r1)
    lwz r3, 0x2c(r27)
    lwz r0, 0x30(r27)
    stw r3, 0xc4(r1)
    stw r0, 0xc8(r1)
    lwz r0, 0x34(r27)
    stw r0, 0xcc(r1)
    lwz r3, 0x38(r27)
    lwz r0, 0x3c(r27)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lbz r0, 0x40(r27)
    stb r0, 0xd8(r1)
    lbz r0, 0x41(r27)
    stb r0, 0xd9(r1)
    lbz r0, 0x42(r27)
    stb r0, 0xda(r1)
    lbz r0, 0x43(r27)
    stb r0, 0xdb(r1)
    lfs f0, 0x44(r27)
    fmr f2, f1
    addi r3, r1, 0x98
    stfs f0, 0xdc(r1)
    lwz r0, 0x48(r27)
    stw r0, 0xe0(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0xe4(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xe8(r1)
    lwz r0, 0x54(r27)
    stw r0, 0xec(r1)
    lwz r0, 0x58(r27)
    stw r0, 0xf0(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0xf4(r1)
    bl fn_802FEB44
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x98
    addi r4, r1, 0x18
    bl fn_80300B70
    lfs f1, 0x20(r1)
    addi r3, r1, 0x98
    lfs f0, 0x18(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_802FD8B0
    lis r3, lbl_80341F18@ha
    fsubs f2, f31, f30
    lfs f1, lbl_80341F18@l(r3)
    mr r3, r27
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f1, f0, f1
    bl fn_802FEB50
    b lbl_80301EA0
lbl_80301C8C:
    cmplwi r0, 0x2
    bne lbl_80301E94
    lis r3, lbl_80341F08@ha
    lfs f1, lbl_80341F08@l(r3)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    lbz r0, 0x0(r27)
    stb r0, 0x38(r1)
    lbz r0, 0x1(r27)
    stb r0, 0x39(r1)
    lbz r0, 0x2(r27)
    stb r0, 0x3a(r1)
    lbz r0, 0x3(r27)
    stb r0, 0x3b(r1)
    lbz r0, 0x4(r27)
    stb r0, 0x3c(r1)
    lbz r0, 0x5(r27)
    stb r0, 0x3d(r1)
    lbz r0, 0x6(r27)
    stb r0, 0x3e(r1)
    lbz r0, 0x7(r27)
    stb r0, 0x3f(r1)
    lbz r0, 0x8(r27)
    stb r0, 0x40(r1)
    lbz r0, 0x9(r27)
    stb r0, 0x41(r1)
    lbz r0, 0xa(r27)
    stb r0, 0x42(r1)
    lbz r0, 0xb(r27)
    stb r0, 0x43(r1)
    lbz r0, 0xc(r27)
    stb r0, 0x44(r1)
    lbz r0, 0xd(r27)
    stb r0, 0x45(r1)
    lbz r0, 0xe(r27)
    stb r0, 0x46(r1)
    lbz r0, 0xf(r27)
    stb r0, 0x47(r1)
    lbz r0, 0x10(r27)
    stb r0, 0x48(r1)
    lbz r0, 0x11(r27)
    stb r0, 0x49(r1)
    lbz r0, 0x12(r27)
    stb r0, 0x4a(r1)
    lbz r0, 0x13(r27)
    stb r0, 0x4b(r1)
    lbz r0, 0x14(r27)
    stb r0, 0x4c(r1)
    lbz r0, 0x15(r27)
    stb r0, 0x4d(r1)
    lbz r0, 0x16(r27)
    stb r0, 0x4e(r1)
    lbz r0, 0x17(r27)
    stb r0, 0x4f(r1)
    lbz r0, 0x18(r27)
    stb r0, 0x50(r1)
    lbz r0, 0x19(r27)
    stb r0, 0x51(r1)
    lbz r0, 0x1a(r27)
    stb r0, 0x52(r1)
    lbz r0, 0x1b(r27)
    stb r0, 0x53(r1)
    lbz r0, 0x1c(r27)
    stb r0, 0x54(r1)
    lbz r0, 0x1d(r27)
    stb r0, 0x55(r1)
    lbz r0, 0x1e(r27)
    stb r0, 0x56(r1)
    lbz r0, 0x1f(r27)
    stb r0, 0x57(r1)
    lwz r0, 0x20(r27)
    stw r0, 0x58(r1)
    lwz r3, 0x24(r27)
    lwz r0, 0x28(r27)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    lwz r3, 0x2c(r27)
    lwz r0, 0x30(r27)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    lwz r0, 0x34(r27)
    stw r0, 0x6c(r1)
    lwz r3, 0x38(r27)
    lwz r0, 0x3c(r27)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lbz r0, 0x40(r27)
    stb r0, 0x78(r1)
    lbz r0, 0x41(r27)
    stb r0, 0x79(r1)
    lbz r0, 0x42(r27)
    stb r0, 0x7a(r1)
    lbz r0, 0x43(r27)
    stb r0, 0x7b(r1)
    lfs f0, 0x44(r27)
    fmr f2, f1
    addi r3, r1, 0x38
    stfs f0, 0x7c(r1)
    lwz r0, 0x48(r27)
    stw r0, 0x80(r1)
    lfs f0, 0x4c(r27)
    stfs f0, 0x84(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x88(r1)
    lwz r0, 0x54(r27)
    stw r0, 0x8c(r1)
    lwz r0, 0x58(r27)
    stw r0, 0x90(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0x94(r1)
    bl fn_802FEB44
    mr r5, r30
    mr r6, r31
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    bl fn_80300B70
    lfs f1, 0x10(r1)
    addi r3, r1, 0x38
    lfs f0, 0x8(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl fn_802FD8B0
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_802FEB50
    b lbl_80301EA0
lbl_80301E94:
    lfs f1, 0x0(r28)
    mr r3, r27
    bl fn_802FEB50
lbl_80301EA0:
    lwz r0, 0x58(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_80301EC0
    lfs f1, 0x0(r29)
    mr r3, r27
    bl fn_802FEB58
    b lbl_80301ED8
lbl_80301EC0:
    mr r3, r27
    bl fn_802FE994
    lfs f0, 0x0(r29)
    mr r3, r27
    fadds f1, f0, f1
    bl fn_802FEB58
lbl_80301ED8:
    fmr f1, f31
    opword 0xE3E10188
    lfd f31, 0x180(r1)
    opword 0xE3C10178
    lfd f30, 0x170(r1)
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_80301F04
// ----------------------------------------------------------------------------
asm void fn_80301F04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_804624A8@ha
    stw r30, 0x8(r1)
    lbz r0, lbl_804624A8@l(r31)
    extsb. r0, r0
    bne lbl_80301F54
    lis r30, lbl_804624A0@ha
    addi r3, r30, lbl_804624A0@l
    bl fn_802FFD48
    lis r4, fn_802FFD58@ha
    lis r5, lbl_80462488@ha
    addi r3, r30, lbl_804624A0@l
    addi r4, r4, fn_802FFD58@l
    addi r5, r5, lbl_80462488@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_804624A8@l(r31)
lbl_80301F54:
    lis r30, lbl_804624A9@ha
    lbz r0, lbl_804624A9@l(r30)
    extsb. r0, r0
    bne lbl_80301F90
    lis r31, lbl_804624A4@ha
    addi r3, r31, lbl_804624A4@l
    bl fn_80300130
    lis r4, fn_80300140@ha
    lis r5, lbl_80462494@ha
    addi r3, r31, lbl_804624A4@l
    addi r4, r4, fn_80300140@l
    addi r5, r5, lbl_80462494@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_804624A9@l(r30)
lbl_80301F90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80301FA8
// ----------------------------------------------------------------------------
asm void fn_80301FA8() {
    nofralloc
    lis r4, lbl_80462520@ha
    lis r7, lbl_8037DF48@ha
    lwz r0, lbl_80462520@l(r4)
    addi r7, r7, lbl_8037DF48@l
    lwz r5, 0x10(r3)
    cmplwi r0, 0x2
    subfic r4, r5, 0x7f
    bne lbl_8030200C
    slwi r8, r5, 1
    addi r5, r7, 0x990
    lhax r0, r5, r8
    slwi r6, r4, 1
    addi r4, r7, 0xa90
    stw r0, 0x18(r3)
    lhax r0, r5, r6
    stw r0, 0x1c(r3)
    lha r0, 0x990(r7)
    stw r0, 0x20(r3)
    lha r0, 0xfe(r5)
    stw r0, 0x24(r3)
    lhax r0, r4, r6
    stw r0, 0x28(r3)
    lhax r0, r4, r8
    stw r0, 0x2c(r3)
    blr
lbl_8030200C:
    slwi r0, r5, 2
    addi r6, r7, 0x790
    lwzx r5, r6, r0
    slwi r4, r4, 2
    li r0, 0x0
    stw r5, 0x18(r3)
    lwzx r4, r6, r4
    stw r4, 0x1c(r3)
    lwz r4, 0x790(r7)
    stw r4, 0x20(r3)
    lwz r4, 0x1fc(r6)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80302048
// ----------------------------------------------------------------------------
asm void fn_80302048() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r27, lbl_804624B0@ha
    addi r27, r27, lbl_804624B0@l
    bl AXIsInit
    cmpwi r3, 0x0
    beq lbl_80302230
    lwz r0, 0x6b8(r27)
    cmpwi r0, 0x0
    bne lbl_80302230
    addi r5, r27, 0x0
    li r3, -0x1
    stb r3, 0x0(r5)
    li r0, 0x2
    addi r4, r27, 0x10
    stb r3, 0x1(r5)
    stb r3, 0x2(r5)
    stb r3, 0x3(r5)
    stb r3, 0x4(r5)
    stb r3, 0x5(r5)
    stb r3, 0x6(r5)
    stb r3, 0x7(r5)
    stb r3, 0x8(r5)
    stb r3, 0x9(r5)
    stb r3, 0xa(r5)
    stb r3, 0xb(r5)
    stb r3, 0xc(r5)
    stb r3, 0xd(r5)
    stb r3, 0xe(r5)
    stb r3, 0xf(r5)
    mtctr r0
lbl_803020D0:
    stb r3, 0x0(r4)
    stb r3, 0x1(r4)
    stb r3, 0x2(r4)
    stb r3, 0x3(r4)
    stb r3, 0x4(r4)
    stb r3, 0x5(r4)
    stb r3, 0x6(r4)
    stb r3, 0x7(r4)
    stb r3, 0x8(r4)
    stb r3, 0x9(r4)
    stb r3, 0xa(r4)
    stb r3, 0xb(r4)
    stb r3, 0xc(r4)
    stb r3, 0xd(r4)
    stb r3, 0xe(r4)
    stb r3, 0xf(r4)
    stb r3, 0x10(r4)
    stb r3, 0x11(r4)
    stb r3, 0x12(r4)
    stb r3, 0x13(r4)
    stb r3, 0x14(r4)
    stb r3, 0x15(r4)
    stb r3, 0x16(r4)
    stb r3, 0x17(r4)
    stb r3, 0x18(r4)
    stb r3, 0x19(r4)
    stb r3, 0x1a(r4)
    stb r3, 0x1b(r4)
    stb r3, 0x1c(r4)
    stb r3, 0x1d(r4)
    stb r3, 0x1e(r4)
    stb r3, 0x1f(r4)
    stb r3, 0x20(r4)
    stb r3, 0x21(r4)
    stb r3, 0x22(r4)
    stb r3, 0x23(r4)
    stb r3, 0x24(r4)
    stb r3, 0x25(r4)
    stb r3, 0x26(r4)
    stb r3, 0x27(r4)
    stb r3, 0x28(r4)
    stb r3, 0x29(r4)
    stb r3, 0x2a(r4)
    stb r3, 0x2b(r4)
    stb r3, 0x2c(r4)
    stb r3, 0x2d(r4)
    stb r3, 0x2e(r4)
    stb r3, 0x2f(r4)
    addi r4, r4, 0x30
    bdnz lbl_803020D0
    addi r0, r27, 0x78
    li r25, 0x0
    stw r0, 0x74(r27)
    li r26, 0x0
    li r28, 0x0
    lis r29, 0x5000
    li r30, -0x3c0
    li r31, 0x40
lbl_803021B8:
    lwz r3, 0x74(r27)
    stwx r28, r3, r26
    lwz r0, 0x74(r27)
    add r3, r0, r26
    stw r29, 0x4(r3)
    stw r28, 0x8(r3)
    stw r30, 0xc(r3)
    stw r28, 0x14(r3)
    stw r31, 0x10(r3)
    sth r28, 0x60(r3)
    sth r28, 0x5c(r3)
    sth r28, 0x58(r3)
    sth r28, 0x54(r3)
    sth r28, 0x50(r3)
    sth r28, 0x4c(r3)
    sth r28, 0x48(r3)
    sth r28, 0x44(r3)
    sth r28, 0x40(r3)
    sth r28, 0x3c(r3)
    sth r28, 0x38(r3)
    sth r28, 0x34(r3)
    sth r28, 0x30(r3)
    bl fn_80301FA8
    addi r25, r25, 0x1
    addi r26, r26, 0x64
    cmpwi r25, 0x10
    blt lbl_803021B8
    li r0, 0x1
    stw r0, 0x70(r27)
    stw r0, 0x6b8(r27)
lbl_80302230:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80302248
// ----------------------------------------------------------------------------
asm void fn_80302248() {
    nofralloc
    lis r4, lbl_80462520@ha
    stw r3, lbl_80462520@l(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_80302254
// ----------------------------------------------------------------------------
asm void fn_80302254() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    lis r31, lbl_804624B0@ha
    addi r31, r31, lbl_804624B0@l
    stw r30, 0x18(r1)
    addi r8, r31, 0x10
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r9, 0x18(r3)
    lwz r10, 0x74(r31)
    lbzx r8, r8, r9
    extsb r8, r8
    mulli r8, r8, 0x64
    stwx r3, r10, r8
    add r30, r10, r8
    mr r3, r30
    stw r0, 0x4(r30)
    stw r4, 0x8(r30)
    stw r5, 0xc(r30)
    stw r6, 0x10(r30)
    stw r7, 0x14(r30)
    bl fn_80301FA8
    cmpwi r29, -0x388
    bgt lbl_803022D0
    li r0, 0x0
    b lbl_803022F8
lbl_803022D0:
    cmpwi r29, 0x3c
    blt lbl_803022E4
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803022F8
lbl_803022E4:
    addi r0, r29, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803022F8:
    sth r0, 0x30(r30)
    li r29, 0x0
    lwz r0, 0x70(r31)
    cmpwi r0, 0x1
    beq lbl_80302518
    bge lbl_8030231C
    cmpwi r0, 0x0
    bge lbl_80302328
    b lbl_803029E0
lbl_8030231C:
    cmpwi r0, 0x3
    bge lbl_803029E0
    b lbl_80302728
lbl_80302328:
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r30)
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302344
    li r0, 0x0
    b lbl_8030236C
lbl_80302344:
    cmpwi r3, 0x3c
    blt lbl_80302358
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_8030236C
lbl_80302358:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_8030236C:
    sth r0, 0x34(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x20(r30)
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030238C
    li r0, 0x0
    b lbl_803023B4
lbl_8030238C:
    cmpwi r3, 0x3c
    blt lbl_803023A0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803023B4
lbl_803023A0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803023B4:
    sth r0, 0x38(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x24(r30)
    add r3, r3, r0
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_803023D8
    li r0, 0x0
    b lbl_80302400
lbl_803023D8:
    cmpwi r3, 0x3c
    blt lbl_803023EC
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302400
lbl_803023EC:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302400:
    sth r0, 0x3c(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0xc(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302428
    li r0, 0x0
    b lbl_80302450
lbl_80302428:
    cmpwi r3, 0x3c
    blt lbl_8030243C
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302450
lbl_8030243C:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302450:
    sth r0, 0x40(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0xc(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302478
    li r0, 0x0
    b lbl_803024A0
lbl_80302478:
    cmpwi r3, 0x3c
    blt lbl_8030248C
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803024A0
lbl_8030248C:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803024A0:
    sth r0, 0x44(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    lwz r3, 0x24(r30)
    add r0, r4, r0
    add r3, r0, r3
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_803024CC
    li r0, 0x0
    b lbl_803024F4
lbl_803024CC:
    cmpwi r3, 0x3c
    blt lbl_803024E0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803024F4
lbl_803024E0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803024F4:
    sth r0, 0x48(r30)
    li r0, 0x0
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x58(r30)
    sth r0, 0x5c(r30)
    sth r0, 0x60(r30)
    b lbl_803029E0
lbl_80302518:
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x18(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030253C
    li r0, 0x0
    b lbl_80302564
lbl_8030253C:
    cmpwi r3, 0x3c
    blt lbl_80302550
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302564
lbl_80302550:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302564:
    sth r0, 0x34(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x1c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030258C
    li r0, 0x0
    b lbl_803025B4
lbl_8030258C:
    cmpwi r3, 0x3c
    blt lbl_803025A0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803025B4
lbl_803025A0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803025B4:
    sth r0, 0x38(r30)
    lwz r3, 0x14(r30)
    lwz r0, 0x24(r30)
    add r3, r3, r0
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_803025D8
    li r0, 0x0
    b lbl_80302600
lbl_803025D8:
    cmpwi r3, 0x3c
    blt lbl_803025EC
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302600
lbl_803025EC:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302600:
    sth r0, 0x3c(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x18(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302630
    li r0, 0x0
    b lbl_80302658
lbl_80302630:
    cmpwi r3, 0x3c
    blt lbl_80302644
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302658
lbl_80302644:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302658:
    sth r0, 0x40(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x1c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302688
    li r0, 0x0
    b lbl_803026B0
lbl_80302688:
    cmpwi r3, 0x3c
    blt lbl_8030269C
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803026B0
lbl_8030269C:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803026B0:
    sth r0, 0x44(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    lwz r3, 0x24(r30)
    add r0, r4, r0
    add r3, r0, r3
    subi r3, r3, 0x1e
    cmpwi r3, -0x388
    bgt lbl_803026DC
    li r0, 0x0
    b lbl_80302704
lbl_803026DC:
    cmpwi r3, 0x3c
    blt lbl_803026F0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302704
lbl_803026F0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302704:
    sth r0, 0x48(r30)
    li r0, 0x0
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x58(r30)
    sth r0, 0x5c(r30)
    sth r0, 0x60(r30)
    b lbl_803029E0
lbl_80302728:
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x18(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030274C
    li r0, 0x0
    b lbl_80302774
lbl_8030274C:
    cmpwi r3, 0x3c
    blt lbl_80302760
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302774
lbl_80302760:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302774:
    sth r0, 0x34(r30)
    lwz r4, 0x20(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x1c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030279C
    li r0, 0x0
    b lbl_803027C4
lbl_8030279C:
    cmpwi r3, 0x3c
    blt lbl_803027B0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803027C4
lbl_803027B0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803027C4:
    sth r0, 0x38(r30)
    lwz r4, 0x24(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x28(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_803027EC
    li r0, 0x0
    b lbl_80302814
lbl_803027EC:
    cmpwi r3, 0x3c
    blt lbl_80302800
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302814
lbl_80302800:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302814:
    sth r0, 0x3c(r30)
    lwz r4, 0x24(r30)
    lwz r0, 0x14(r30)
    lwz r3, 0x2c(r30)
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030283C
    li r0, 0x0
    b lbl_80302864
lbl_8030283C:
    cmpwi r3, 0x3c
    blt lbl_80302850
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302864
lbl_80302850:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302864:
    sth r0, 0x58(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x18(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302894
    li r0, 0x0
    b lbl_803028BC
lbl_80302894:
    cmpwi r3, 0x3c
    blt lbl_803028A8
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803028BC
lbl_803028A8:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803028BC:
    sth r0, 0x40(r30)
    lwz r5, 0x20(r30)
    lwz r3, 0x1c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_803028EC
    li r0, 0x0
    b lbl_80302914
lbl_803028EC:
    cmpwi r3, 0x3c
    blt lbl_80302900
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_80302914
lbl_80302900:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_80302914:
    sth r0, 0x44(r30)
    lwz r5, 0x24(r30)
    lwz r3, 0x28(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_80302944
    li r0, 0x0
    b lbl_8030296C
lbl_80302944:
    cmpwi r3, 0x3c
    blt lbl_80302958
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_8030296C
lbl_80302958:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_8030296C:
    sth r0, 0x48(r30)
    lwz r5, 0x24(r30)
    lwz r3, 0x2c(r30)
    lwz r4, 0x14(r30)
    lwz r0, 0xc(r30)
    add r3, r5, r3
    add r0, r4, r0
    add r3, r3, r0
    cmpwi r3, -0x388
    bgt lbl_8030299C
    li r0, 0x0
    b lbl_803029C4
lbl_8030299C:
    cmpwi r3, 0x3c
    blt lbl_803029B0
    lis r3, 0x1
    subi r0, r3, 0x9c
    b lbl_803029C4
lbl_803029B0:
    addi r0, r3, 0x388
    lis r3, lbl_8037DF48@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8037DF48@l
    lhzx r0, r3, r0
lbl_803029C4:
    sth r0, 0x5c(r30)
    li r0, 0x0
    oris r29, r29, 0x8000
    sth r0, 0x4c(r30)
    sth r0, 0x50(r30)
    sth r0, 0x54(r30)
    sth r0, 0x60(r30)
lbl_803029E0:
    bl OSDisableInterrupts
    lhz r4, 0x30(r30)
    li r0, 0x0
    mr r31, r3
    addi r3, r28, 0x3e
    sth r4, 0x92(r28)
    sth r0, 0x94(r28)
    lhz r0, 0x34(r30)
    cmpwi r0, 0x0
    sth r0, 0x3c(r28)
    beq lbl_80302A10
    ori r29, r29, 0x1
lbl_80302A10:
    li r0, 0x0
    sth r0, 0x0(r3)
    lhz r0, 0x38(r30)
    cmpwi r0, 0x0
    sth r0, 0x2(r3)
    beq lbl_80302A2C
    ori r29, r29, 0x2
lbl_80302A2C:
    li r0, 0x0
    sth r0, 0x4(r3)
    lhz r0, 0x40(r30)
    cmpwi r0, 0x0
    sth r0, 0x6(r3)
    beq lbl_80302A48
    oris r29, r29, 0x1
lbl_80302A48:
    li r0, 0x0
    sth r0, 0x8(r3)
    lhz r0, 0x44(r30)
    cmpwi r0, 0x0
    sth r0, 0xa(r3)
    beq lbl_80302A64
    oris r29, r29, 0x2
lbl_80302A64:
    li r0, 0x0
    sth r0, 0xc(r3)
    lhz r0, 0x4c(r30)
    cmpwi r0, 0x0
    sth r0, 0xe(r3)
    beq lbl_80302A80
    oris r29, r29, 0x20
lbl_80302A80:
    li r0, 0x0
    sth r0, 0x10(r3)
    lhz r0, 0x50(r30)
    cmpwi r0, 0x0
    sth r0, 0x12(r3)
    beq lbl_80302A9C
    oris r29, r29, 0x40
lbl_80302A9C:
    li r0, 0x0
    sth r0, 0x14(r3)
    lhz r0, 0x58(r30)
    cmpwi r0, 0x0
    sth r0, 0x16(r3)
    beq lbl_80302AB8
    oris r29, r29, 0x400
lbl_80302AB8:
    li r0, 0x0
    sth r0, 0x18(r3)
    lhz r0, 0x5c(r30)
    cmpwi r0, 0x0
    sth r0, 0x1a(r3)
    beq lbl_80302AD4
    oris r29, r29, 0x800
lbl_80302AD4:
    li r0, 0x0
    sth r0, 0x1c(r3)
    lhz r0, 0x3c(r30)
    cmpwi r0, 0x0
    sth r0, 0x1e(r3)
    beq lbl_80302AF0
    ori r29, r29, 0x8
lbl_80302AF0:
    li r0, 0x0
    sth r0, 0x20(r3)
    lhz r0, 0x48(r30)
    cmpwi r0, 0x0
    sth r0, 0x22(r3)
    beq lbl_80302B0C
    oris r29, r29, 0x8
lbl_80302B0C:
    li r0, 0x0
    sth r0, 0x24(r3)
    lhz r0, 0x54(r30)
    cmpwi r0, 0x0
    sth r0, 0x26(r3)
    beq lbl_80302B28
    oris r29, r29, 0x100
lbl_80302B28:
    li r0, 0x0
    sth r0, 0x28(r3)
    lhz r0, 0x60(r30)
    cmpwi r0, 0x0
    sth r0, 0x2a(r3)
    beq lbl_80302B44
    oris r29, r29, 0x2000
lbl_80302B44:
    lwz r0, 0x1c(r28)
    li r30, 0x0
    sth r30, 0x2c(r3)
    addi r3, r28, 0x102
    ori r0, r0, 0x112
    li r4, 0x0
    stw r29, 0x34(r28)
    li r5, 0x20
    stw r0, 0x1c(r28)
    bl memset
    lwz r0, 0x1c(r28)
    mr r3, r31
    sth r30, 0x100(r28)
    oris r0, r0, 0x300
    stw r0, 0x1c(r28)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80302BA4
// ----------------------------------------------------------------------------
asm void fn_80302BA4() {
    nofralloc
    lis r4, lbl_804624C0@ha
    lwz r0, 0x18(r3)
    addi r4, r4, lbl_804624C0@l
    lis r3, lbl_80462524@ha
    lbzx r0, r4, r0
    li r4, 0x0
    lwz r3, lbl_80462524@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    stwx r4, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80302BD0
// ----------------------------------------------------------------------------
asm void fn_80302BD0() {
    nofralloc
    lis r5, lbl_804624C0@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_804624C0@l
    lis r3, lbl_80462524@ha
    lbzx r0, r5, r0
    lwz r3, lbl_80462524@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0x8(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x1000
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80302C08
// ----------------------------------------------------------------------------
asm void fn_80302C08() {
    nofralloc
    lis r5, lbl_804624C0@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_804624C0@l
    lis r3, lbl_80462524@ha
    lbzx r0, r5, r0
    lwz r3, lbl_80462524@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0xc(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x4000
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80302C40
// ----------------------------------------------------------------------------
asm void fn_80302C40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_804624C0@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_804624C0@l
    stw r31, 0xc(r1)
    lwz r0, 0x18(r3)
    lis r3, lbl_80462524@ha
    lwz r3, lbl_80462524@l(r3)
    lbzx r0, r5, r0
    extsb r0, r0
    mulli r0, r0, 0x64
    add r31, r3, r0
    bge lbl_80302C84
    li r0, 0x0
    b lbl_80302C94
lbl_80302C84:
    cmpwi r4, 0x7f
    li r0, 0x7f
    bgt lbl_80302C94
    mr r0, r4
lbl_80302C94:
    stw r0, 0x10(r31)
    mr r3, r31
    bl fn_80301FA8
    lwz r0, 0x4(r31)
    oris r0, r0, 0x4000
    stw r0, 0x4(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80302CC0
// ----------------------------------------------------------------------------
asm void fn_80302CC0() {
    nofralloc
    lis r5, lbl_804624C0@ha
    lwz r0, 0x18(r3)
    addi r5, r5, lbl_804624C0@l
    lis r3, lbl_80462524@ha
    lbzx r0, r5, r0
    lwz r3, lbl_80462524@l(r3)
    extsb r0, r0
    mulli r0, r0, 0x64
    add r3, r3, r0
    stw r4, 0x14(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x4000
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80302CF8
// ----------------------------------------------------------------------------
asm void fn_80302CF8() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r6, lbl_804624B0@ha
    addi r6, r6, lbl_804624B0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, 0x6b8(r6)
    cmpwi r0, 0x0
    beq lbl_803037E0
    lis r3, lbl_8037DF48@ha
    li r8, 0x10
    addi r4, r3, lbl_8037DF48@l
    li r7, 0x0
    lis r5, 0x1
    li r0, 0x0
    lis r3, 0x2aab
    mtctr r8
lbl_80302D3C:
    lwz r10, 0x74(r6)
    li r9, 0x0
    lwzux r11, r10, r7
    li r8, 0x0
    cmpwi r11, 0x0
    beq lbl_803037D8
    lwz r29, 0x4(r10)
    li r12, 0x0
    rlwinm. r29, r29, 0, 2, 2
    beq lbl_80302D7C
    lhz r29, 0x32(r10)
    li r9, 0x1
    sth r29, 0x30(r10)
    lwz r29, 0x4(r10)
    rlwinm r29, r29, 0, 3, 1
    stw r29, 0x4(r10)
lbl_80302D7C:
    lwz r29, 0x4(r10)
    rlwinm. r29, r29, 0, 3, 3
    beq lbl_80302DD0
    lwz r9, 0x8(r10)
    cmpwi r9, -0x388
    bgt lbl_80302D9C
    li r9, 0x0
    b lbl_80302DB8
lbl_80302D9C:
    cmpwi r9, 0x3c
    blt lbl_80302DAC
    subi r9, r5, 0x9c
    b lbl_80302DB8
lbl_80302DAC:
    slwi r9, r9, 1
    add r9, r4, r9
    lhz r9, 0x710(r9)
lbl_80302DB8:
    sth r9, 0x32(r10)
    li r9, 0x1
    lwz r29, 0x4(r10)
    rlwinm r29, r29, 0, 4, 2
    oris r29, r29, 0x2000
    stw r29, 0x4(r10)
lbl_80302DD0:
    lwz r29, 0x4(r10)
    clrrwi. r29, r29, 31
    beq lbl_80302E4C
    lhz r29, 0x36(r10)
    li r8, 0x1
    sth r29, 0x34(r10)
    lhz r29, 0x3a(r10)
    sth r29, 0x38(r10)
    lhz r29, 0x3e(r10)
    sth r29, 0x3c(r10)
    lhz r29, 0x42(r10)
    sth r29, 0x40(r10)
    lhz r29, 0x46(r10)
    sth r29, 0x44(r10)
    lhz r29, 0x4a(r10)
    sth r29, 0x48(r10)
    lhz r29, 0x4e(r10)
    sth r29, 0x4c(r10)
    lhz r29, 0x52(r10)
    sth r29, 0x50(r10)
    lhz r29, 0x56(r10)
    sth r29, 0x54(r10)
    lhz r29, 0x5a(r10)
    sth r29, 0x58(r10)
    lhz r29, 0x5e(r10)
    sth r29, 0x5c(r10)
    lhz r29, 0x62(r10)
    sth r29, 0x60(r10)
    lwz r29, 0x4(r10)
    clrlwi r29, r29, 1
    stw r29, 0x4(r10)
lbl_80302E4C:
    lwz r29, 0x4(r10)
    rlwinm. r29, r29, 0, 1, 1
    beq lbl_80303450
    lwz r8, 0x70(r6)
    cmpwi r8, 0x1
    beq lbl_80303024
    bge lbl_80302E74
    cmpwi r8, 0x0
    bge lbl_80302E80
    b lbl_8030343C
lbl_80302E74:
    cmpwi r8, 0x3
    bge lbl_8030343C
    b lbl_803031E8
lbl_80302E80:
    lwz r29, 0x14(r10)
    lwz r8, 0x20(r10)
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80302E9C
    li r8, 0x0
    b lbl_80302EB8
lbl_80302E9C:
    cmpwi r8, 0x3c
    blt lbl_80302EAC
    subi r8, r5, 0x9c
    b lbl_80302EB8
lbl_80302EAC:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80302EB8:
    sth r8, 0x36(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x20(r10)
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80302ED8
    li r8, 0x0
    b lbl_80302EF4
lbl_80302ED8:
    cmpwi r8, 0x3c
    blt lbl_80302EE8
    subi r8, r5, 0x9c
    b lbl_80302EF4
lbl_80302EE8:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80302EF4:
    sth r8, 0x3a(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x24(r10)
    add r8, r29, r8
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_80302F18
    li r8, 0x0
    b lbl_80302F34
lbl_80302F18:
    cmpwi r8, 0x3c
    blt lbl_80302F28
    subi r8, r5, 0x9c
    b lbl_80302F34
lbl_80302F28:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80302F34:
    sth r8, 0x3e(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0xc(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80302F5C
    li r8, 0x0
    b lbl_80302F78
lbl_80302F5C:
    cmpwi r8, 0x3c
    blt lbl_80302F6C
    subi r8, r5, 0x9c
    b lbl_80302F78
lbl_80302F6C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80302F78:
    sth r8, 0x42(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0xc(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80302FA0
    li r8, 0x0
    b lbl_80302FBC
lbl_80302FA0:
    cmpwi r8, 0x3c
    blt lbl_80302FB0
    subi r8, r5, 0x9c
    b lbl_80302FBC
lbl_80302FB0:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80302FBC:
    sth r8, 0x46(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    lwz r29, 0x24(r10)
    add r8, r30, r8
    add r8, r8, r29
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_80302FE8
    li r8, 0x0
    b lbl_80303004
lbl_80302FE8:
    cmpwi r8, 0x3c
    blt lbl_80302FF8
    subi r8, r5, 0x9c
    b lbl_80303004
lbl_80302FF8:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303004:
    sth r8, 0x4a(r10)
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x5a(r10)
    sth r0, 0x5e(r10)
    sth r0, 0x62(r10)
    b lbl_8030343C
lbl_80303024:
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x18(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303048
    li r8, 0x0
    b lbl_80303064
lbl_80303048:
    cmpwi r8, 0x3c
    blt lbl_80303058
    subi r8, r5, 0x9c
    b lbl_80303064
lbl_80303058:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303064:
    sth r8, 0x36(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x1c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_8030308C
    li r8, 0x0
    b lbl_803030A8
lbl_8030308C:
    cmpwi r8, 0x3c
    blt lbl_8030309C
    subi r8, r5, 0x9c
    b lbl_803030A8
lbl_8030309C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803030A8:
    sth r8, 0x3a(r10)
    lwz r29, 0x14(r10)
    lwz r8, 0x24(r10)
    add r8, r29, r8
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_803030CC
    li r8, 0x0
    b lbl_803030E8
lbl_803030CC:
    cmpwi r8, 0x3c
    blt lbl_803030DC
    subi r8, r5, 0x9c
    b lbl_803030E8
lbl_803030DC:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803030E8:
    sth r8, 0x3e(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x18(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303118
    li r8, 0x0
    b lbl_80303134
lbl_80303118:
    cmpwi r8, 0x3c
    blt lbl_80303128
    subi r8, r5, 0x9c
    b lbl_80303134
lbl_80303128:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303134:
    sth r8, 0x42(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x1c(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303164
    li r8, 0x0
    b lbl_80303180
lbl_80303164:
    cmpwi r8, 0x3c
    blt lbl_80303174
    subi r8, r5, 0x9c
    b lbl_80303180
lbl_80303174:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303180:
    sth r8, 0x46(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    lwz r29, 0x24(r10)
    add r8, r30, r8
    add r8, r8, r29
    subi r8, r8, 0x1e
    cmpwi r8, -0x388
    bgt lbl_803031AC
    li r8, 0x0
    b lbl_803031C8
lbl_803031AC:
    cmpwi r8, 0x3c
    blt lbl_803031BC
    subi r8, r5, 0x9c
    b lbl_803031C8
lbl_803031BC:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803031C8:
    sth r8, 0x4a(r10)
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x5a(r10)
    sth r0, 0x5e(r10)
    sth r0, 0x62(r10)
    b lbl_8030343C
lbl_803031E8:
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x18(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_8030320C
    li r8, 0x0
    b lbl_80303228
lbl_8030320C:
    cmpwi r8, 0x3c
    blt lbl_8030321C
    subi r8, r5, 0x9c
    b lbl_80303228
lbl_8030321C:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303228:
    sth r8, 0x36(r10)
    lwz r30, 0x20(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x1c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303250
    li r8, 0x0
    b lbl_8030326C
lbl_80303250:
    cmpwi r8, 0x3c
    blt lbl_80303260
    subi r8, r5, 0x9c
    b lbl_8030326C
lbl_80303260:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_8030326C:
    sth r8, 0x3a(r10)
    lwz r30, 0x24(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x28(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303294
    li r8, 0x0
    b lbl_803032B0
lbl_80303294:
    cmpwi r8, 0x3c
    blt lbl_803032A4
    subi r8, r5, 0x9c
    b lbl_803032B0
lbl_803032A4:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803032B0:
    sth r8, 0x3e(r10)
    lwz r30, 0x24(r10)
    lwz r8, 0x14(r10)
    lwz r29, 0x2c(r10)
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_803032D8
    li r8, 0x0
    b lbl_803032F4
lbl_803032D8:
    cmpwi r8, 0x3c
    blt lbl_803032E8
    subi r8, r5, 0x9c
    b lbl_803032F4
lbl_803032E8:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803032F4:
    sth r8, 0x5a(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x18(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303324
    li r8, 0x0
    b lbl_80303340
lbl_80303324:
    cmpwi r8, 0x3c
    blt lbl_80303334
    subi r8, r5, 0x9c
    b lbl_80303340
lbl_80303334:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303340:
    sth r8, 0x42(r10)
    lwz r31, 0x20(r10)
    lwz r29, 0x1c(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_80303370
    li r8, 0x0
    b lbl_8030338C
lbl_80303370:
    cmpwi r8, 0x3c
    blt lbl_80303380
    subi r8, r5, 0x9c
    b lbl_8030338C
lbl_80303380:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_8030338C:
    sth r8, 0x46(r10)
    lwz r31, 0x24(r10)
    lwz r29, 0x28(r10)
    lwz r30, 0x14(r10)
    lwz r8, 0xc(r10)
    add r29, r31, r29
    add r8, r30, r8
    add r8, r29, r8
    cmpwi r8, -0x388
    bgt lbl_803033BC
    li r8, 0x0
    b lbl_803033D8
lbl_803033BC:
    cmpwi r8, 0x3c
    blt lbl_803033CC
    subi r8, r5, 0x9c
    b lbl_803033D8
lbl_803033CC:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_803033D8:
    sth r8, 0x4a(r10)
    lwz r29, 0x24(r10)
    lwz r30, 0x2c(r10)
    lwz r31, 0x14(r10)
    lwz r8, 0xc(r10)
    add r30, r29, r30
    add r8, r31, r8
    add r8, r30, r8
    cmpwi r8, -0x388
    bgt lbl_80303408
    li r8, 0x0
    b lbl_80303424
lbl_80303408:
    cmpwi r8, 0x3c
    blt lbl_80303418
    subi r8, r5, 0x9c
    b lbl_80303424
lbl_80303418:
    slwi r8, r8, 1
    add r8, r4, r8
    lhz r8, 0x710(r8)
lbl_80303424:
    sth r8, 0x5e(r10)
    oris r12, r12, 0x8000
    sth r0, 0x4e(r10)
    sth r0, 0x52(r10)
    sth r0, 0x56(r10)
    sth r0, 0x62(r10)
lbl_8030343C:
    lwz r30, 0x4(r10)
    li r8, 0x1
    rlwinm r30, r30, 0, 2, 0
    oris r30, r30, 0x8000
    stw r30, 0x4(r10)
lbl_80303450:
    cmpwi r9, 0x0
    beq lbl_80303490
    lhz r9, 0x30(r10)
    subi r30, r3, 0x5555
    sth r9, 0x92(r11)
    lhz r31, 0x30(r10)
    lhz r9, 0x32(r10)
    subf r9, r31, r9
    mulhw r9, r30, r9
    srawi r9, r9, 4
    srwi r31, r9, 31
    add r9, r9, r31
    sth r9, 0x94(r11)
    lwz r9, 0x1c(r11)
    ori r9, r9, 0x100
    stw r9, 0x1c(r11)
lbl_80303490:
    cmpwi r8, 0x0
    beq lbl_803037D8
    lhz r8, 0x34(r10)
    cmpwi r8, 0x0
    sth r8, 0x3c(r11)
    beq lbl_803034AC
    ori r12, r12, 0x1
lbl_803034AC:
    lhz r9, 0x34(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x36(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x3e(r11)
    beq lbl_803034DC
    ori r12, r12, 0x4
lbl_803034DC:
    lhz r8, 0x38(r10)
    cmpwi r8, 0x0
    sth r8, 0x40(r11)
    beq lbl_803034F0
    ori r12, r12, 0x2
lbl_803034F0:
    lhz r9, 0x38(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x3a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x42(r11)
    beq lbl_80303520
    ori r12, r12, 0x4
lbl_80303520:
    lhz r8, 0x40(r10)
    cmpwi r8, 0x0
    sth r8, 0x44(r11)
    beq lbl_80303534
    oris r12, r12, 0x1
lbl_80303534:
    lhz r9, 0x40(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x42(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x46(r11)
    beq lbl_80303564
    oris r12, r12, 0x4
lbl_80303564:
    lhz r8, 0x44(r10)
    cmpwi r8, 0x0
    sth r8, 0x48(r11)
    beq lbl_80303578
    oris r12, r12, 0x2
lbl_80303578:
    lhz r9, 0x44(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x46(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x4a(r11)
    beq lbl_803035A8
    oris r12, r12, 0x4
lbl_803035A8:
    lhz r8, 0x4c(r10)
    cmpwi r8, 0x0
    sth r8, 0x4c(r11)
    beq lbl_803035BC
    oris r12, r12, 0x20
lbl_803035BC:
    lhz r9, 0x4c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x4e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x4e(r11)
    beq lbl_803035EC
    oris r12, r12, 0x80
lbl_803035EC:
    lhz r8, 0x50(r10)
    cmpwi r8, 0x0
    sth r8, 0x50(r11)
    beq lbl_80303600
    oris r12, r12, 0x40
lbl_80303600:
    lhz r9, 0x50(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x52(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x52(r11)
    beq lbl_80303630
    oris r12, r12, 0x80
lbl_80303630:
    lhz r8, 0x58(r10)
    cmpwi r8, 0x0
    sth r8, 0x54(r11)
    beq lbl_80303644
    oris r12, r12, 0x400
lbl_80303644:
    lhz r9, 0x58(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x5a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x56(r11)
    beq lbl_80303674
    oris r12, r12, 0x1000
lbl_80303674:
    lhz r8, 0x5c(r10)
    cmpwi r8, 0x0
    sth r8, 0x58(r11)
    beq lbl_80303688
    oris r12, r12, 0x800
lbl_80303688:
    lhz r9, 0x5c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x5e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x5a(r11)
    beq lbl_803036B8
    oris r12, r12, 0x1000
lbl_803036B8:
    lhz r8, 0x3c(r10)
    cmpwi r8, 0x0
    sth r8, 0x5c(r11)
    beq lbl_803036CC
    ori r12, r12, 0x8
lbl_803036CC:
    lhz r9, 0x3c(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x3e(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x5e(r11)
    beq lbl_803036FC
    ori r12, r12, 0x10
lbl_803036FC:
    lhz r8, 0x48(r10)
    cmpwi r8, 0x0
    sth r8, 0x60(r11)
    beq lbl_80303710
    oris r12, r12, 0x8
lbl_80303710:
    lhz r9, 0x48(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x4a(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x62(r11)
    beq lbl_80303740
    oris r12, r12, 0x10
lbl_80303740:
    lhz r8, 0x54(r10)
    cmpwi r8, 0x0
    sth r8, 0x64(r11)
    beq lbl_80303754
    oris r12, r12, 0x100
lbl_80303754:
    lhz r9, 0x54(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x56(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x66(r11)
    beq lbl_80303784
    oris r12, r12, 0x200
lbl_80303784:
    lhz r8, 0x60(r10)
    cmpwi r8, 0x0
    sth r8, 0x68(r11)
    beq lbl_80303798
    oris r12, r12, 0x2000
lbl_80303798:
    lhz r9, 0x60(r10)
    subi r31, r3, 0x5555
    lhz r8, 0x62(r10)
    subf r8, r9, r8
    mulhw r8, r31, r8
    srawi r8, r8, 4
    srwi r9, r8, 31
    add r9, r8, r9
    clrlwi. r8, r9, 16
    sth r9, 0x6a(r11)
    beq lbl_803037C8
    oris r12, r12, 0x4000
lbl_803037C8:
    stw r12, 0x34(r11)
    lwz r8, 0x1c(r11)
    ori r8, r8, 0x12
    stw r8, 0x1c(r11)
lbl_803037D8:
    addi r7, r7, 0x64
    bdnz lbl_80302D3C
lbl_803037E0:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803037F4
// ----------------------------------------------------------------------------
asm void fn_803037F4() {
    nofralloc
    lis r4, lbl_804624B0@ha
    li r0, 0x10
    addi r4, r4, lbl_804624B0@l
    li r6, 0x0
    mtctr r0
lbl_80303808:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bge lbl_80303834
    lis r5, lbl_804624B0@ha
    lis r4, lbl_804624C0@ha
    addi r5, r5, lbl_804624B0@l
    addi r4, r4, lbl_804624C0@l
    stbx r3, r5, r6
    stbx r6, r4, r3
    mr r3, r6
    blr
lbl_80303834:
    addi r4, r4, 0x1
    addi r6, r6, 0x1
    bdnz lbl_80303808
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_80303848
// ----------------------------------------------------------------------------
asm void fn_80303848() {
    nofralloc
    lis r4, lbl_804624C0@ha
    addi r4, r4, lbl_804624C0@l
    lbzx r3, r4, r3
    extsb r3, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8030385C
// ----------------------------------------------------------------------------
asm void fn_8030385C() {
    nofralloc
    lis r5, lbl_804624B0@ha
    lis r4, lbl_804624C0@ha
    addi r5, r5, lbl_804624B0@l
    li r0, -0x1
    lbzx r6, r5, r3
    addi r4, r4, lbl_804624C0@l
    extsb r6, r6
    stbx r0, r5, r3
    stbx r0, r4, r6
    blr
}

// ----------------------------------------------------------------------------
// fn_80303884
// ----------------------------------------------------------------------------
asm void fn_80303884() {
    nofralloc
    lis r5, lbl_804624C0@ha
    addi r5, r5, lbl_804624C0@l
    lbzx r6, r5, r3
    extsb. r6, r6
    bltlr
    lis r4, lbl_804624B0@ha
    li r0, -0x1
    addi r4, r4, lbl_804624B0@l
    stbx r0, r5, r3
    stbx r0, r4, r6
    blr
}

// ----------------------------------------------------------------------------
// fn_803038B0
// ----------------------------------------------------------------------------
asm void fn_803038B0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_80462B70@ha
    li r5, 0x0
    lwz r6, lbl_80462B70@l(r4)
    li r4, 0x0
    b lbl_80303904
lbl_803038DC:
    cmplw r6, r31
    beq lbl_80303900
    cmpwi r5, 0x0
    beq lbl_803038F8
    stw r6, 0x0(r4)
    mr r4, r6
    b lbl_80303900
lbl_803038F8:
    mr r4, r6
    mr r5, r6
lbl_80303900:
    lwz r6, 0x0(r6)
lbl_80303904:
    cmpwi r6, 0x0
    bne lbl_803038DC
    cmpwi r4, 0x0
    beq lbl_8030391C
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_8030391C:
    lis r4, lbl_80462B70@ha
    stw r5, lbl_80462B70@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

