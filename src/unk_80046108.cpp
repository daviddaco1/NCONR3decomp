#include "types.h"

// Translation unit: src/unk_80046108.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern "C" float lbl_8049D660;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049EA80;
extern "C" float lbl_8049EA88;
extern "C" float lbl_8049EA90;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_23();
extern "C" void _savegpr_23();
extern "C" void fn_800163E4();
extern "C" void fn_80016964();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016C30();
extern "C" void fn_80019D1C();
extern "C" void fn_80019D5C();
extern "C" void fn_80041290();
extern "C" void fn_80046108();
extern "C" void fn_800461A8();
extern "C" void fn_800461AC();
extern "C" void fn_800464E0();
extern "C" void fn_80046610();
extern "C" void fn_80046724();
extern "C" void fn_80046B54();
extern "C" void fn_80046B58();
extern "C" void fn_80046B68();
extern "C" void fn_80046B90();
extern "C" void fn_8005CF48();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017C2CC();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXBegin();
extern "C" void GXLoadTexObj();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80046108
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046108() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x12
    lis r4, fn_800461AC@ha
    addi r4, r4, fn_800461AC@l
    lwz r5, lbl_8049D660
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80046148
    li r3, 0x0
    b lbl_80046190
lbl_80046148:
    li r4, 0x0
    li r5, 0x7c
    bl memset
    addi r3, r31, 0xc
    bl fn_80019D5C
    stw r30, 0x8(r31)
    li r3, 0xf
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8004618C
    cmpwi r31, 0x0
    beq lbl_8004618C
    mr r3, r31
    bl fn_800461A8
lbl_8004618C:
    mr r3, r31
lbl_80046190:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800461A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800461A8() {
    nofralloc
    b fn_8017776C
}

// ----------------------------------------------------------------------------
// fn_800461AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800461AC() {
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
    beq lbl_800462CC
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800461F4
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_800464CC
lbl_800461F4:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800462C4
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_80046258
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8004622C
    cmpwi r0, 0xff
    beq lbl_80046244
    b lbl_80046258
lbl_8004622C:
    bne cr1, lbl_80046258
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800464CC
lbl_80046244:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800464CC
lbl_80046258:
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    beq lbl_800462C4
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_800462C4
    lwz r3, 0x28(r4)
    lwz r0, 0x28(r31)
    cmplw r3, r0
    bne lbl_800462C4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_800462A4
    cmpwi r0, 0x1
    beq lbl_800462B0
    b lbl_800462B8
lbl_800462A4:
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_800462B8
lbl_800462B0:
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_800462B8:
    bl fn_8017742C
    li r3, 0x1
    b lbl_800464CC
lbl_800462C4:
    li r3, 0x0
    b lbl_800464CC
lbl_800462CC:
    lwz r3, 0x18(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_800462F0
    cmpwi r3, 0x2
    beq lbl_800462FC
    b lbl_80046304
lbl_800462F0:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80046304
lbl_800462FC:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80046304:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_80046318
    cmpwi r0, 0xf0
    bne lbl_80046334
lbl_80046318:
    lwz r3, 0x18(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_80046334
    li r3, 0x0
    b lbl_800464CC
lbl_80046334:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80046364
    cmpwi r0, 0x1
    beq lbl_80046390
    cmpwi r0, 0xef
    beq lbl_80046434
    cmpwi r0, 0xf0
    beq lbl_80046450
    cmpwi r0, 0xf1
    beq lbl_800464B4
    b lbl_800464C8
lbl_80046364:
    lha r3, 0x1c(r31)
    subi r0, r3, 0x1
    sth r0, 0x1c(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_80046384
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_80046384:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_800464C8
lbl_80046390:
    mr r3, r31
    bl fn_800464E0
    lwz r3, 0x2c(r31)
    cmpwi r3, 0x0
    ble lbl_800463D8
    lwz r0, 0x20(r31)
    lfd f1, lbl_8049EA80
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    lfd f1, lbl_8049EA88
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x34(r31)
    b lbl_800463E0
lbl_800463D8:
    lfs f0, lbl_8049EA90
    stfs f0, 0x34(r31)
lbl_800463E0:
    lfs f1, 0x34(r31)
    lfs f0, lbl_8049EA90
    fcmpo cr0, f1, f0
    ble lbl_800463F4
    stfs f0, 0x34(r31)
lbl_800463F4:
    lha r3, 0x24(r31)
    cmpwi r3, -0x1
    ble lbl_80046408
    subi r0, r3, 0x1
    sth r0, 0x24(r31)
lbl_80046408:
    lha r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_8004641C
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_8004641C:
    lwz r3, 0x20(r31)
    addi r0, r3, 0x1
    stw r0, 0x20(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_800464C8
lbl_80046434:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x30(r31)
    extsh r0, r0
    sth r0, 0x24(r31)
    li r0, 0x0
    stw r0, 0x28(r31)
lbl_80046450:
    mr r3, r31
    bl fn_800464E0
    lha r3, 0x24(r31)
    lfd f2, lbl_8049EA88
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x30(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x34(r31)
    subi r0, r3, 0x1
    sth r0, 0x24(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_800464A8
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_800464A8:
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    beq lbl_800464C8
lbl_800464B4:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_800461A8
lbl_800464C8:
    li r3, 0x0
lbl_800464CC:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800464E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800464E0() {
    nofralloc
    lfs f1, 0x38(r3)
    lfs f0, 0x48(r3)
    fadds f2, f1, f0
    stfs f2, 0x38(r3)
    lfs f1, 0x3c(r3)
    lfs f0, 0x4c(r3)
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lfs f1, 0x40(r3)
    lfs f0, 0x50(r3)
    fadds f0, f1, f0
    stfs f0, 0x40(r3)
    lfs f1, 0x44(r3)
    lfs f0, 0x54(r3)
    fadds f0, f1, f0
    stfs f0, 0x44(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x4(r4)
    fcmpo cr0, f2, f0
    bge lbl_8004653C
    lfs f0, 0x8(r4)
    fadds f0, f2, f0
    stfs f0, 0x38(r3)
lbl_8004653C:
    lfs f1, 0x38(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x8(r4)
    fcmpo cr0, f1, f0
    ble lbl_80046558
    fsubs f0, f1, f0
    stfs f0, 0x38(r3)
lbl_80046558:
    lfs f1, 0x3c(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    bge lbl_80046578
    lfs f0, 0x8(r4)
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
lbl_80046578:
    lfs f1, 0x3c(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x8(r4)
    fcmpo cr0, f1, f0
    ble lbl_80046594
    fsubs f0, f1, f0
    stfs f0, 0x3c(r3)
lbl_80046594:
    lfs f1, 0x40(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    bge lbl_800465B4
    lfs f0, 0x8(r4)
    fadds f0, f1, f0
    stfs f0, 0x40(r3)
lbl_800465B4:
    lfs f1, 0x40(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x8(r4)
    fcmpo cr0, f1, f0
    ble lbl_800465D0
    fsubs f0, f1, f0
    stfs f0, 0x40(r3)
lbl_800465D0:
    lfs f1, 0x44(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x4(r4)
    fcmpo cr0, f1, f0
    bge lbl_800465F0
    lfs f0, 0x8(r4)
    fadds f0, f1, f0
    stfs f0, 0x44(r3)
lbl_800465F0:
    lfs f1, 0x44(r3)
    la r4, lbl_8049EA90
    lfs f0, 0x8(r4)
    fcmpo cr0, f1, f0
    blelr
    fsubs f0, f1, f0
    stfs f0, 0x44(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80046610
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046610() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80046710
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004664C
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_80046710
lbl_8004664C:
    lwz r3, 0x18(r3)
    bl fn_80016C30
    cmpwi r3, 0x0
    bne lbl_80046710
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0xf
    bl fn_800163E4
    bl fn_80016964
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
    li r4, 0x0
    bl GXLoadTexObj
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    mr r3, r31
    bl fn_80046724
    li r3, 0x0
    bl fn_80016A44
    bl fn_8017C2CC
    li r3, 0x0
    bl fn_80016A94
lbl_80046710:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80046724
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046724() {
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
    stfd f27, 0x60(r1)
    opword 0xF3610068
    stfd f26, 0x50(r1)
    opword 0xF3410058
    addi r11, r1, 0x50
    bl _savegpr_23
    mr r23, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r24, 0x0
    lfd f28, lbl_8049EA88
    la r27, lbl_8049EA90
    lfs f29, 0xc(r27)
    lfs f30, 0x10(r27)
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    li r29, 0x14
    lfd f31, lbl_8049EA80
lbl_800467A0:
    li r3, 0x98
    li r4, 0x0
    li r5, 0x2a
    bl GXBegin
    li r25, 0x0
    xoris r26, r24, 0x8000
    addi r30, r24, 0x1
    xoris r31, r30, 0x8000
lbl_800467C0:
    stw r26, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f28
    lfs f0, 0x6c(r23)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x5c(r23)
    fmuls f26, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f28
    lfs f0, 0x68(r23)
    fmuls f1, f0, f1
    lfs f0, 0x38(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x58(r23)
    fmuls f1, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f0, f1
    fadds f27, f0, f26
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f28
    lfs f0, 0x74(r23)
    fmuls f1, f0, f1
    lfs f0, 0x44(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x64(r23)
    fmuls f26, f0, f1
    stw r26, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f28
    lfs f0, 0x70(r23)
    fmuls f1, f0, f1
    lfs f0, 0x40(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x60(r23)
    fmuls f1, f0, f1
    stw r26, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f28
    fmuls f0, f30, f0
    fadds f0, f0, f1
    fadds f26, f0, f26
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_800468C8
    lfs f1, 0x14(r27)
    lfs f2, 0x18(r27)
    bl fn_8005CF48
    fadds f27, f27, f1
    lfs f1, 0x14(r27)
    lfs f2, 0x18(r27)
    bl fn_8005CF48
    fadds f26, f26, f1
lbl_800468C8:
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    divw r0, r0, r29
    mullw r0, r0, r25
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f28
    lhz r0, 0x10(r3)
    srwi r0, r0, 4
    mullw r0, r0, r24
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f2, f0, f28
    bl fn_80046B90
    lbz r3, 0x78(r23)
    lbz r4, 0x79(r23)
    lbz r5, 0x7a(r23)
    lbz r0, 0x7b(r23)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f31
    lfs f0, 0x34(r23)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    clrlwi r6, r0, 24
    bl fn_80046B68
    fmr f1, f27
    fmr f2, f26
    bl fn_80046B58
    stw r31, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f28
    lfs f0, 0x6c(r23)
    fmuls f1, f0, f1
    lfs f0, 0x3c(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x5c(r23)
    fmuls f26, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f28
    lfs f0, 0x68(r23)
    fmuls f1, f0, f1
    lfs f0, 0x38(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x58(r23)
    fmuls f1, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f0, f1
    fadds f27, f0, f26
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f28
    lfs f0, 0x74(r23)
    fmuls f1, f0, f1
    lfs f0, 0x44(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x64(r23)
    fmuls f26, f0, f1
    stw r31, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f28
    lfs f0, 0x70(r23)
    fmuls f1, f0, f1
    lfs f0, 0x40(r23)
    fadds f1, f0, f1
    bl fn_80041290
    lfs f0, 0x60(r23)
    fmuls f1, f0, f1
    stw r31, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fmuls f0, f30, f0
    fadds f0, f0, f1
    fadds f26, f0, f26
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80046A54
    lfs f1, 0x14(r27)
    lfs f2, 0x18(r27)
    bl fn_8005CF48
    fadds f27, f27, f1
    lfs f1, 0x14(r27)
    lfs f2, 0x18(r27)
    bl fn_8005CF48
    fadds f26, f26, f1
lbl_80046A54:
    lwz r3, 0x54(r28)
    lhz r0, 0xe(r3)
    divw r0, r0, r29
    mullw r0, r0, r25
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f28
    lhz r0, 0x10(r3)
    srwi r0, r0, 4
    mullw r0, r0, r30
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f28
    bl fn_80046B90
    lbz r3, 0x78(r23)
    lbz r4, 0x79(r23)
    lbz r5, 0x7a(r23)
    lbz r0, 0x7b(r23)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f31
    lfs f0, 0x34(r23)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    clrlwi r6, r0, 24
    bl fn_80046B68
    fmr f1, f27
    fmr f2, f26
    bl fn_80046B58
    addi r25, r25, 0x1
    cmpwi r25, 0x15
    blt lbl_800467C0
    bl fn_80046B54
    addi r24, r24, 0x1
    cmpwi r24, 0x10
    blt lbl_800467A0
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    li r0, 0x78
    opword 0x1381000C
    lfd f28, 0x70(r1)
    li r0, 0x68
    opword 0x1361000C
    lfd f27, 0x60(r1)
    li r0, 0x58
    opword 0x1341000C
    lfd f26, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_80046B54
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046B54() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80046B58
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046B58() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80046B68
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046B68() {
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
// fn_80046B90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046B90() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

