#include "types.h"

// Translation unit: src/nw4r/ut/ut_TagProcessorBase.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern "C" float lbl_804A22B0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362AE0[];
extern "C" u8 lbl_80362AF4[];

// Forward declarations
extern "C" void GetFontHeight__Q34nw4r2ut10CharWriterCFv();
extern "C" void GetFontWidth__Q34nw4r2ut10CharWriterCFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_802230EC();
extern "C" void fn_802230FC();
extern "C" void fn_8022313C();
extern "C" void fn_8022326C();
extern "C" void fn_80223454();
extern "C" void fn_80223464();
extern "C" void fn_802234A4();
extern "C" void fn_802235D4();
extern "C" void fn_80226594();
extern "C" void fn_802266C4();

// ----------------------------------------------------------------------------
// fn_802230EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802230EC() {
    nofralloc
    lis r4, lbl_80362AF4@ha
    addi r4, r4, lbl_80362AF4@l
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802230FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802230FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80223124
    cmpwi r4, 0x0
    ble lbl_80223124
    bl dtor_80136CFC
lbl_80223124:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8022313C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022313C() {
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
    beq lbl_80223180
    bge lbl_8022323C
    cmpwi r4, 0x9
    bge lbl_802231A8
    b lbl_8022323C
lbl_80223180:
    lwz r31, 0x0(r5)
    lfs f31, 0x8(r5)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_80226594
    fadds f0, f30, f1
    stfs f31, 0x2c(r31)
    li r3, 0x3
    stfs f0, 0x30(r31)
    b lbl_80223240
lbl_802231A8:
    lwz r31, 0x0(r5)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_80223234
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_802231CC
    lfs f1, 0x44(r31)
    b lbl_802231D4
lbl_802231CC:
    mr r3, r31
    bl GetFontWidth__Q34nw4r2ut10CharWriterCFv
lbl_802231D4:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22B0
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_80223234:
    li r3, 0x1
    b lbl_80223240
lbl_8022323C:
    li r3, 0x0
lbl_80223240:
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
// fn_8022326C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022326C() {
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
    beq lbl_802232B0
    bge lbl_80223428
    cmpwi r5, 0x9
    bge lbl_80223338
    b lbl_80223428
lbl_802232B0:
    lwz r30, 0x0(r6)
    lfs f0, 0x2c(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x4(r4)
    lwz r31, 0x0(r6)
    lfs f31, 0x8(r6)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_80226594
    fadds f0, f30, f1
    stfs f31, 0x2c(r31)
    stfs f0, 0x30(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x0(r27)
    lfs f30, 0x30(r30)
    lwz r3, 0x0(r28)
    bl GetFontHeight__Q34nw4r2ut10CharWriterCFv
    fadds f0, f30, f1
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
    b lbl_8022342C
lbl_80223338:
    lwz r29, 0x0(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x0(r4)
    lwz r31, 0x0(r6)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_802233D0
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_80223368
    lfs f1, 0x44(r31)
    b lbl_80223370
lbl_80223368:
    mr r3, r31
    bl GetFontWidth__Q34nw4r2ut10CharWriterCFv
lbl_80223370:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22B0
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r28)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_802233D0:
    lfs f0, 0x2c(r29)
    mr r3, r29
    stfs f0, 0x8(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x4(r27)
    bl GetFontHeight__Q34nw4r2ut10CharWriterCFv
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
    b lbl_8022342C
lbl_80223428:
    li r3, 0x0
lbl_8022342C:
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
// fn_80223454
// ----------------------------------------------------------------------------
extern "C" asm void fn_80223454() {
    nofralloc
    lis r4, lbl_80362AE0@ha
    addi r4, r4, lbl_80362AE0@l
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80223464
// ----------------------------------------------------------------------------
extern "C" asm void fn_80223464() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_8022348C
    cmpwi r4, 0x0
    ble lbl_8022348C
    bl dtor_80136CFC
lbl_8022348C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802234A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802234A4() {
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
    beq lbl_802234E8
    bge lbl_802235A4
    cmpwi r4, 0x9
    bge lbl_80223510
    b lbl_802235A4
lbl_802234E8:
    lwz r31, 0x0(r5)
    lfs f31, 0x8(r5)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_802266C4
    fadds f0, f30, f1
    stfs f31, 0x2c(r31)
    li r3, 0x3
    stfs f0, 0x30(r31)
    b lbl_802235A8
lbl_80223510:
    lwz r31, 0x0(r5)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_8022359C
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_80223534
    lfs f1, 0x44(r31)
    b lbl_8022353C
lbl_80223534:
    mr r3, r31
    bl GetFontWidth__Q34nw4r2ut10CharWriterCFv
lbl_8022353C:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22B0
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r29)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_8022359C:
    li r3, 0x1
    b lbl_802235A8
lbl_802235A4:
    li r3, 0x0
lbl_802235A8:
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
// fn_802235D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802235D4() {
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
    beq lbl_80223618
    bge lbl_80223790
    cmpwi r5, 0x9
    bge lbl_802236A0
    b lbl_80223790
lbl_80223618:
    lwz r30, 0x0(r6)
    lfs f0, 0x2c(r30)
    stfs f0, 0x8(r4)
    lfs f0, 0x30(r30)
    stfs f0, 0x4(r4)
    lwz r31, 0x0(r6)
    lfs f31, 0x8(r6)
    lfs f30, 0x30(r31)
    mr r3, r31
    bl fn_802266C4
    fadds f0, f30, f1
    stfs f31, 0x2c(r31)
    stfs f0, 0x30(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x0(r27)
    lfs f30, 0x30(r30)
    lwz r3, 0x0(r28)
    bl GetFontHeight__Q34nw4r2ut10CharWriterCFv
    fadds f0, f30, f1
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
    b lbl_80223794
lbl_802236A0:
    lwz r29, 0x0(r6)
    lfs f0, 0x2c(r29)
    stfs f0, 0x0(r4)
    lwz r31, 0x0(r6)
    lwz r30, 0x58(r31)
    cmpwi r30, 0x0
    ble lbl_80223738
    lbz r0, 0x43(r31)
    cmpwi r0, 0x0
    beq lbl_802236D0
    lfs f1, 0x44(r31)
    b lbl_802236D8
lbl_802236D0:
    mr r3, r31
    bl GetFontWidth__Q34nw4r2ut10CharWriterCFv
lbl_802236D8:
    lis r0, 0x4330
    xoris r3, r30, 0x8000
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22B0
    stw r0, 0x8(r1)
    lfs f4, 0x2c(r31)
    lfd f0, 0x8(r1)
    lfs f3, 0x8(r28)
    fsubs f0, f0, f2
    stw r0, 0x18(r1)
    fsubs f4, f4, f3
    fmuls f1, f0, f1
    fdivs f0, f4, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f2
    fmuls f0, f1, f0
    fadds f0, f3, f0
    stfs f0, 0x2c(r31)
lbl_80223738:
    lfs f0, 0x2c(r29)
    mr r3, r29
    stfs f0, 0x8(r27)
    lfs f0, 0x30(r29)
    stfs f0, 0x4(r27)
    bl GetFontHeight__Q34nw4r2ut10CharWriterCFv
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
    b lbl_80223794
lbl_80223790:
    li r3, 0x0
lbl_80223794:
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

