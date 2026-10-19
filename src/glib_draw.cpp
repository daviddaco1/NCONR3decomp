#include "types.h"

// Translation unit: src/glib_draw.cpp
// Total functions: 21

// Small Data symbols (@sda21)
extern "C" float lbl_8049D62C;
extern "C" float lbl_8049D67C;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049E640;
extern "C" float lbl_8049E648;
extern "C" float lbl_8049E650;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_800163E4();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016CAC();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B0C();
extern "C" void fn_80018C2C();
extern "C" void fn_80018C3C();
extern "C" void fn_80018C4C();
extern "C" void fn_80018DAC();
extern "C" void fn_80018DBC();
extern "C" void fn_80019290();
extern "C" void fn_800192E8();
extern "C" void fn_80019530();
extern "C" void fn_80019798();
extern "C" void fn_80019B10();
extern "C" void fn_80019C10();
extern "C" void fn_80019D1C();
extern "C" void fn_80019D38();
extern "C" void fn_80019D5C();
extern "C" void fn_80019D70();
extern "C" void fn_80019D94();
extern "C" void fn_80019DA8();
extern "C" void fn_80019DAC();
extern "C" void fn_80019DC8();
extern "C" void fn_80019DF0();
extern "C" void fn_80019E04();
extern "C" void fn_80019E14();
extern "C" void fn_80019E18();
extern "C" void fn_8005E564();
extern "C" void fn_8005E7D4();
extern "C" void fn_800609D8();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_8010F0E0();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017B004();
extern "C" void fn_8017B074();
extern "C" void fn_8017B144();
extern "C" void fn_80181568();
extern "C" void __cvt_fp2unsigned();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXBegin();
extern "C" void GXLoadTexObj();
extern "C" void GXGetProjectionv();
extern "C" void GXGetViewportv();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80018C4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018C4C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r7
    mr r3, r6
    lis r4, fn_80018DBC@ha
    addi r4, r4, fn_80018DBC@l
    lwz r5, lbl_8049D62C
    bl fn_80177280
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80018CA0
    li r3, 0x0
    b lbl_80018D88
lbl_80018CA0:
    li r4, 0x0
    li r5, 0x60
    bl memset
    addi r3, r30, 0xc
    bl fn_80019D5C
    li r28, 0x0
    li r31, 0x1
    lfs f31, lbl_8049E650
    b lbl_80018D04
lbl_80018CC4:
    lwz r3, lbl_8049D67C
    bl fn_80019D70
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80018D00
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x3c
    bl memset
    mr r3, r29
    addi r4, r29, 0x4
    addi r5, r30, 0xc
    bl fn_80019D38
    stw r31, 0x10(r29)
    stfs f31, 0x3c(r29)
lbl_80018D00:
    addi r28, r28, 0x1
lbl_80018D04:
    cmplw r28, r24
    blt lbl_80018CC4
    stw r24, 0x28(r30)
    cmpwi r25, 0x0
    beq lbl_80018D28
    stw r25, 0x1c(r30)
    mr r3, r25
    bl fn_80019D1C
    stw r3, 0x20(r30)
lbl_80018D28:
    stw r27, 0x18(r30)
    stw r26, 0x24(r30)
    li r0, 0x10
    stw r0, 0x2c(r30)
    lfs f0, lbl_8049E650
    stfs f0, 0x30(r30)
    stfs f0, 0x34(r30)
    li r0, 0x0
    sth r0, 0x48(r30)
    li r0, 0x8
    sth r0, 0x4a(r30)
    stfs f0, 0x4c(r30)
    li r3, 0x1
    lwz r4, 0x18(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80018D84
    cmpwi r30, 0x0
    beq lbl_80018D84
    mr r3, r30
    bl fn_80018DAC
lbl_80018D84:
    mr r3, r30
lbl_80018D88:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80018DAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018DAC() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    b fn_80019290
    blr
}

// ----------------------------------------------------------------------------
// fn_80018DBC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80018DBC() {
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
    beq lbl_80018EDC
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80018EB4
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r6, 0x28(r5)
    cmpwi cr1, r6, 0x3e9
    bne cr1, lbl_80018E5C
    lwz r0, 0x7b4(r5)
    cmplwi r0, 0x2
    ble lbl_80018E20
    cmpwi r0, 0xff
    beq lbl_80018E48
    b lbl_80018E5C
lbl_80018E20:
    bne cr1, lbl_80018E5C
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_80018E5C
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001927C
lbl_80018E48:
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001927C
lbl_80018E5C:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_80018E70
    li r3, 0x1
    b lbl_8001927C
lbl_80018E70:
    lwz r0, 0x8(r3)
    cmpwi r0, 0xf1
    beq lbl_80018EB4
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x24(r5)
    lwz r0, 0x20(r3)
    cmpw r5, r0
    bne lbl_80018EB4
    lwz r0, 0x44(r3)
    cmplw r6, r0
    bne lbl_80018EB4
    li r0, 0xef
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001927C
lbl_80018EB4:
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80018ED4
    mr r3, r31
    bl fn_80019290
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001927C
lbl_80018ED4:
    li r3, 0x0
    b lbl_8001927C
lbl_80018EDC:
    lwz r3, 0x1c(r3)
    mr r4, r31
    lwz r5, 0x8(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80018F00
    cmpwi r3, 0x2
    beq lbl_80018F0C
    b lbl_80018F14
lbl_80018F00:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_80018F14
lbl_80018F0C:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_80018F14:
    lwz r0, 0x8(r31)
    cmplwi r0, 0x2
    ble lbl_80018F28
    cmpwi r0, 0xf0
    bne lbl_80018F44
lbl_80018F28:
    lwz r3, 0x1c(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_80018F44
    li r3, 0x0
    b lbl_8001927C
lbl_80018F44:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80018F7C
    cmpwi r0, 0x1
    beq lbl_80018FBC
    cmpwi r0, 0x2
    beq lbl_8001906C
    cmpwi r0, 0xef
    beq lbl_800191FC
    cmpwi r0, 0xf0
    beq lbl_80019244
    cmpwi r0, 0xf1
    beq lbl_80019264
    b lbl_80019278
lbl_80018F7C:
    lha r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_80018FB4
    lfd f1, lbl_8049E640
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E650
    fdivs f0, f0, f1
    stfs f0, 0x50(r31)
    la r3, lbl_8049E650
    lfs f0, 0x4(r3)
    stfs f0, 0x4c(r31)
lbl_80018FB4:
    li r0, 0x1
    stw r0, 0x8(r31)
lbl_80018FBC:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_80019060
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_80019020
    lha r0, 0x4a(r31)
    cmpwi r0, 0x0
    bne lbl_80018FEC
    li r0, 0x1
    sth r0, 0x4a(r31)
lbl_80018FEC:
    lfs f1, 0x54(r31)
    lfs f0, 0x58(r31)
    fsubs f0, f1, f0
    fneg f2, f0
    lha r0, 0x4a(r31)
    lfd f1, lbl_8049E640
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x50(r31)
    b lbl_80019060
lbl_80019020:
    lha r3, 0x48(r31)
    cmpwi r3, 0x0
    beq lbl_80019058
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    fadds f1, f1, f0
    stfs f1, 0x4c(r31)
    subi r0, r3, 0x1
    sth r0, 0x48(r31)
    lfs f0, lbl_8049E650
    fcmpo cr0, f1, f0
    ble lbl_80019278
    stfs f0, 0x4c(r31)
    b lbl_80019278
lbl_80019058:
    lfs f0, lbl_8049E650
    stfs f0, 0x4c(r31)
lbl_80019060:
    li r0, 0x2
    stw r0, 0x8(r31)
    b lbl_80019278
lbl_8001906C:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_80019100
    lwz r4, 0x5c(r31)
    lha r0, 0x4a(r31)
    mulli r3, r0, 0x3
    slwi r0, r3, 2
    lfsx f0, r4, r0
    stfs f0, 0x4c(r31)
    addi r0, r3, 0x1
    slwi r0, r0, 2
    lfsx f1, r4, r0
    bl __cvt_fp2unsigned
    lwz r0, 0x0(r31)
    or r0, r0, r3
    stw r0, 0x0(r31)
    lwz r4, 0x5c(r31)
    lha r0, 0x4a(r31)
    mulli r3, r0, 0x3
    addi r0, r3, 0x2
    slwi r0, r0, 2
    lfsx f1, r4, r0
    bl __cvt_fp2unsigned
    lwz r0, 0x0(r31)
    andc r0, r0, r3
    stw r0, 0x0(r31)
    lha r3, 0x4a(r31)
    addi r0, r3, 0x1
    sth r0, 0x4a(r31)
    extsh r3, r0
    lha r0, 0x48(r31)
    cmpw r3, r0
    blt lbl_800191D4
    li r0, 0x0
    sth r0, 0x4a(r31)
    b lbl_800191D4
lbl_80019100:
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_800191D4
    lha r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_80019120
    li r0, 0x1
    sth r0, 0x48(r31)
lbl_80019120:
    lha r0, 0x4a(r31)
    cmpwi r0, 0x0
    bne lbl_80019134
    li r0, 0x1
    sth r0, 0x4a(r31)
lbl_80019134:
    lfs f0, 0x4c(r31)
    lfs f1, 0x50(r31)
    fadds f2, f0, f1
    stfs f2, 0x4c(r31)
    la r3, lbl_8049E650
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80019194
    lfs f1, 0x58(r31)
    fcmpo cr0, f2, f1
    opword 0x4C401382
    bne lbl_800191D4
    stfs f1, 0x4c(r31)
    lfs f0, 0x54(r31)
    fsubs f2, f0, f1
    lha r0, 0x48(r31)
    lfd f1, lbl_8049E640
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x50(r31)
    b lbl_800191D4
lbl_80019194:
    lfs f1, 0x54(r31)
    fcmpo cr0, f2, f1
    opword 0x4C411382
    bne lbl_800191D4
    stfs f1, 0x4c(r31)
    lfs f0, 0x58(r31)
    fsubs f0, f1, f0
    fneg f2, f0
    lha r0, 0x4a(r31)
    lfd f1, lbl_8049E640
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x50(r31)
lbl_800191D4:
    lwz r3, 0x40(r31)
    cmpwi r3, 0x0
    beq lbl_80019278
    subi r0, r3, 0x1
    stw r0, 0x40(r31)
    cmpwi r0, 0x0
    bne lbl_80019278
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_80019278
lbl_800191FC:
    lha r3, 0x4a(r31)
    cmpwi r3, 0x0
    beq lbl_80019238
    li r0, 0xf0
    stw r0, 0x8(r31)
    lfs f2, lbl_8049E650
    stfs f2, 0x4c(r31)
    lfd f1, lbl_8049E640
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f0, f2, f0
    stfs f0, 0x50(r31)
    b lbl_80019244
lbl_80019238:
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_80019278
lbl_80019244:
    lfs f1, 0x4c(r31)
    lfs f0, 0x50(r31)
    fsubs f1, f1, f0
    stfs f1, 0x4c(r31)
    la r3, lbl_8049E650
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bgt lbl_80019278
lbl_80019264:
    lwz r3, 0x18(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80019290
lbl_80019278:
    li r3, 0x0
lbl_8001927C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80019290
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019290() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x14(r3)
    b lbl_800192BC
lbl_800192B0:
    lwz r3, lbl_8049D67C
    bl fn_80019D94
    lwz r31, 0x8(r31)
lbl_800192BC:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_800192B0
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
// fn_800192E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800192E8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r31, r3
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_80019518
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80019334
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_80019518
lbl_80019334:
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80019358
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_80019358
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_80019518
lbl_80019358:
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8001937C
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80019518
lbl_8001937C:
    lwz r3, 0x1c(r30)
    cmpwi r3, 0x0
    beq lbl_800193A4
    lwz r0, 0x18(r3)
    cmplwi r0, 0xb
    bne lbl_800193A4
    mr r3, r30
    bl fn_80019C10
    cmpwi r3, 0x0
    beq lbl_80019518
lbl_800193A4:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r30)
    li r4, 0x1
    bl fn_800163E4
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80019484
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
    li r5, 0x1
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
    lwz r28, 0x14(r30)
    b lbl_80019474
lbl_80019450:
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_8017B074
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80019798
    lwz r28, 0x8(r28)
lbl_80019474:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_80019450
    b lbl_80019508
lbl_80019484:
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r28, 0x14(r30)
    b lbl_800194FC
lbl_800194D8:
    addi r3, r1, 0x8
    mr r4, r31
    bl fn_8017B074
    mr r3, r30
    mr r4, r29
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80019530
    lwz r28, 0x8(r28)
lbl_800194FC:
    lwz r29, 0x0(r28)
    cmplwi r29, 0x1
    bne lbl_800194D8
lbl_80019508:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80019518:
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80019530
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019530() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    stfd f26, 0x60(r1)
    opword 0xF3410068
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lis r0, 0x4330
    stw r0, 0x30(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    cmpwi r6, 0x0
    beq lbl_80019738
    addi r3, r1, 0x20
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_80019B10
    li r3, 0xa0
    li r4, 0x0
    lwz r5, 0x2c(r27)
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80019DF0
    lbz r3, 0x38(r27)
    lbz r4, 0x39(r27)
    lbz r5, 0x3a(r27)
    lbz r0, 0x3b(r27)
    lfd f1, lbl_8049E648
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4c(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r6, 0x44(r1)
    clrlwi r6, r6, 24
    bl fn_80019DC8
    la r31, lbl_8049E650
    lwz r0, 0x2c(r27)
    lfd f30, lbl_8049E648
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f30
    lfs f0, 0x8(r31)
    fdivs f29, f0, f1
    li r30, 0x0
    lfd f31, lbl_8049E640
    lfs f27, 0xc(r31)
    lfs f28, 0x4(r31)
    b lbl_80019724
lbl_80019644:
    xoris r0, r30, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f31
    fmuls f1, f29, f0
    bl fn_80018C2C
    fmr f26, f1
    xoris r0, r30, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f31
    fmuls f1, f29, f0
    bl fn_80018C3C
    addi r3, r1, 0x14
    fmr f2, f26
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    lfs f0, 0x14(r1)
    lfs f2, 0x38(r28)
    fmuls f0, f0, f2
    fmuls f1, f27, f0
    lfs f0, 0x3c(r28)
    fmuls f0, f0, f1
    stfs f0, 0x8(r1)
    lfs f0, 0x18(r1)
    fmuls f0, f0, f2
    fmuls f0, f27, f0
    stfs f0, 0xc(r1)
    stfs f28, 0x10(r1)
    addi r3, r1, 0x14
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80019DF0
    lbz r3, 0x3c(r27)
    lbz r4, 0x3d(r27)
    lbz r5, 0x3e(r27)
    lbz r0, 0x3f(r27)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f30
    lfs f0, 0x4c(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r6, 0x44(r1)
    clrlwi r6, r6, 24
    bl fn_80019DC8
    addi r30, r30, 0x1
lbl_80019724:
    lwz r3, 0x2c(r27)
    addi r0, r3, 0x1
    cmplw r30, r0
    blt lbl_80019644
    bl fn_80019DA8
lbl_80019738:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    li r0, 0x98
    opword 0x13A1000C
    lfd f29, 0x90(r1)
    li r0, 0x88
    opword 0x1381000C
    lfd f28, 0x80(r1)
    li r0, 0x78
    opword 0x1361000C
    lfd f27, 0x70(r1)
    li r0, 0x68
    opword 0x1341000C
    lfd f26, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_80019798
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019798() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    stfd f29, 0x160(r1)
    opword 0xF3A10168
    stfd f28, 0x150(r1)
    opword 0xF3810158
    stfd f27, 0x140(r1)
    opword 0xF3610148
    stfd f26, 0x130(r1)
    opword 0xF3410138
    stfd f25, 0x120(r1)
    opword 0xF3210128
    stfd f24, 0x110(r1)
    opword 0xF3010118
    addi r11, r1, 0x110
    bl _savegpr_26
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lis r0, 0x4330
    stw r0, 0xe0(r1)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    addi r3, r1, 0xb0
    mr r4, r6
    bl fn_8017B004
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    addi r3, r1, 0x20
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_80019B10
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    li r5, 0x0
    bl fn_8017B144
    lfs f2, 0x14(r1)
    lfs f3, 0x18(r1)
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    lfd f1, lbl_8049E648
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f1
    fdivs f27, f2, f0
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f1
    fdivs f26, f3, f0
    li r3, 0xa0
    li r4, 0x0
    lwz r5, 0x2c(r28)
    addi r0, r5, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_80019DF0
    lbz r3, 0x38(r28)
    lbz r4, 0x39(r28)
    lbz r5, 0x3a(r28)
    lbz r0, 0x3b(r28)
    lfd f1, lbl_8049E648
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f1
    lfs f0, 0x4c(r28)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r6, 0xf4(r1)
    clrlwi r6, r6, 24
    bl fn_80019DC8
    fmr f1, f27
    fmr f2, f26
    bl fn_80019E04
    la r27, lbl_8049E650
    lwz r0, 0x2c(r28)
    lfd f29, lbl_8049E648
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f29
    lfs f0, 0x8(r27)
    fdivs f28, f0, f1
    li r26, 0x0
    lfd f30, lbl_8049E640
    lfs f31, 0xc(r27)
    lfs f25, 0x14(r27)
    b lbl_80019A84
lbl_8001992C:
    xoris r0, r26, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    fmuls f1, f28, f0
    bl fn_80018C2C
    fmr f24, f1
    xoris r0, r26, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fmuls f1, f28, f0
    bl fn_80018C3C
    addi r3, r1, 0x14
    fmr f2, f24
    lfs f3, 0x4(r27)
    bl fn_80018B0C
    addi r3, r1, 0x8
    lfs f0, 0x14(r1)
    lfs f2, 0x38(r29)
    fmuls f0, f0, f2
    fmuls f1, f31, f0
    lfs f0, 0x3c(r29)
    fmuls f1, f0, f1
    lfs f0, 0x18(r1)
    fmuls f0, f0, f2
    fmuls f2, f31, f0
    lfs f3, 0x4(r27)
    bl fn_80018B0C
    addi r3, r1, 0x14
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80018B04
    addi r3, r1, 0x14
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_80019DF0
    lbz r3, 0x3c(r28)
    lbz r4, 0x3d(r28)
    lbz r5, 0x3e(r28)
    lbz r0, 0x3f(r28)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f29
    lfs f0, 0x4c(r28)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r6, 0xf4(r1)
    clrlwi r6, r6, 24
    bl fn_80019DC8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f3, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f2, f1, f0
    stfs f2, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f3, f3, f0
    stfs f3, 0x18(r1)
    lfs f0, 0x30(r28)
    fsubs f1, f25, f0
    fsubs f0, f2, f27
    fmuls f0, f1, f0
    fadds f1, f27, f0
    lfs f0, 0x34(r28)
    fsubs f2, f25, f0
    fsubs f0, f3, f26
    fmuls f0, f2, f0
    fadds f2, f26, f0
    bl fn_80019E04
    addi r26, r26, 0x1
lbl_80019A84:
    lwz r3, 0x2c(r28)
    addi r0, r3, 0x1
    cmplw r26, r0
    blt lbl_8001992C
    bl fn_80019DA8
    li r0, 0x188
    opword 0x13E1000C
    lfd f31, 0x180(r1)
    li r0, 0x178
    opword 0x13C1000C
    lfd f30, 0x170(r1)
    li r0, 0x168
    opword 0x13A1000C
    lfd f29, 0x160(r1)
    li r0, 0x158
    opword 0x1381000C
    lfd f28, 0x150(r1)
    li r0, 0x148
    opword 0x1361000C
    lfd f27, 0x140(r1)
    li r0, 0x138
    opword 0x1341000C
    lfd f26, 0x130(r1)
    li r0, 0x128
    opword 0x1321000C
    lfd f25, 0x120(r1)
    li r0, 0x118
    opword 0x1301000C
    lfd f24, 0x110(r1)
    addi r11, r1, 0x110
    bl _restgpr_26
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_80019B10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019B10() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lwz r7, 0x0(r4)
    rlwinm r0, r7, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_80019B4C
    addi r4, r5, 0x2c
    bl fn_80019DAC
    b lbl_80019BF8
lbl_80019B4C:
    rlwinm r0, r7, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80019B68
    mr r4, r6
    addi r5, r5, 0x20
    bl fn_80018AF8
    b lbl_80019BF8
lbl_80019B68:
    rlwinm r0, r7, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80019BC0
    rlwinm r0, r7, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_80019B98
    lwz r3, 0x1c(r4)
    lwz r3, 0x3780(r3)
    lwz r4, 0x24(r4)
    lwz r5, 0x14(r5)
    bl fn_80019E18
    b lbl_80019BA4
lbl_80019B98:
    lwz r3, 0x24(r4)
    lwz r4, 0x14(r5)
    bl fn_80019E14
lbl_80019BA4:
    mr r4, r3
    cmpwi r3, 0x0
    bne lbl_80019BB8
    lwz r4, 0x1c(r31)
    b lbl_80019BC4
lbl_80019BB8:
    stw r3, 0x1c(r31)
    b lbl_80019BC4
lbl_80019BC0:
    lwz r4, 0x1c(r5)
lbl_80019BC4:
    mr r3, r29
    addi r5, r31, 0x20
    bl fn_80018AF8
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80019BF8
    rlwinm r0, r3, 0, 15, 13
    oris r0, r0, 0x4000
    stw r0, 0x0(r30)
    addi r3, r31, 0x2c
    mr r4, r29
    bl fn_80019DAC
lbl_80019BF8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80019C10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019C10() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    li r6, 0x0
    lwz r5, 0x1c(r3)
    lwz r0, 0x18(r5)
    cmplwi r0, 0xb
    bne lbl_80019D00
    lwz r3, 0x0(r3)
    rlwinm r4, r3, 0, 4, 4
    cmpwi r4, 0x0
    bne lbl_80019C54
    rlwinm r0, r3, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80019D00
lbl_80019C54:
    cmpwi r4, 0x0
    beq lbl_80019C70
    mr r3, r5
    li r4, 0xc
    bl fn_8005E564
    mr r6, r3
    b lbl_80019C8C
lbl_80019C70:
    rlwinm r0, r3, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80019C8C
    mr r3, r5
    li r4, 0xd
    bl fn_8005E564
    mr r6, r3
lbl_80019C8C:
    cmpwi r6, 0x0
    bne lbl_80019C98
    li r31, 0x0
lbl_80019C98:
    cmpwi r6, 0x0
    beq lbl_80019CB4
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80019CB4
    li r31, 0x0
lbl_80019CB4:
    cmpwi r6, 0x0
    beq lbl_80019CE0
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80019CE0
    lwz r0, 0x58(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80019CE0
    li r31, 0x0
lbl_80019CE0:
    cmpwi r6, 0x0
    beq lbl_80019D04
    mr r3, r6
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_80019D04
    li r31, 0x0
    b lbl_80019D04
lbl_80019D00:
    li r31, 0x1
lbl_80019D04:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80019D1C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019D1C() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80019D2C
    li r3, -0x1
    blr
lbl_80019D2C:
    lwz r3, 0x4(r3)
    addi r3, r3, 0x64
    blr
}

// ----------------------------------------------------------------------------
// fn_80019D38
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019D38() {
    nofralloc
    lwz r6, 0x8(r5)
    stw r4, 0x4(r6)
    stw r3, 0x0(r4)
    stw r5, 0x4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    stw r4, 0x8(r5)
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_80019D5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019D5C() {
    nofralloc
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r3, 0x4(r3)
    stw r3, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80019D70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019D70() {
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_80019D84
    li r3, 0x0
    blr
lbl_80019D84:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    addi r3, r4, 0x4
    blr
}

// ----------------------------------------------------------------------------
// fn_80019D94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019D94() {
    nofralloc
    subi r4, r4, 0x4
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80019DA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019DA8() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80019DAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019DAC() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80019DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019DC8() {
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
// fn_80019DF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019DF0() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80019E04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019E04() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80019E14
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019E14() {
    nofralloc
    b fn_80181568
}

// ----------------------------------------------------------------------------
// fn_80019E18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80019E18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl fn_8010F0E0
    mr r4, r3
    mr r3, r31
    bl fn_80181568
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

