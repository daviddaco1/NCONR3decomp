#include "types.h"

// Translation unit: src/unk_80048F04.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern "C" float lbl_8049D670;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049EB20;
extern "C" float lbl_8049EB28;
extern "C" float lbl_8049EB30;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_18();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_29();
extern "C" void _savegpr_18();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void fn_800163E4();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016CAC();
extern "C" void fn_80018AF4();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018BD4();
extern "C" void fn_80018C2C();
extern "C" void fn_80019D1C();
extern "C" void fn_80019DAC();
extern "C" void fn_80019E14();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001D9AC();
extern "C" void fn_8001D9D0();
extern "C" void fn_8001F9C8();
extern "C" void fn_80048F04();
extern "C" void fn_80049108();
extern "C" void fn_8004910C();
extern "C" void fn_800494E8();
extern "C" void fn_80049B10();
extern "C" void fn_80049DA0();
extern "C" void fn_8004A240();
extern "C" void fn_8004A63C();
extern "C" void fn_8004A928();
extern "C" void fn_8004AAE0();
extern "C" void fn_8004AC40();
extern "C" void fn_8004AD74();
extern "C" void fn_8004AD78();
extern "C" void fn_8004AD88();
extern "C" void fn_8004ADB0();
extern "C" void fn_8005E564();
extern "C" void fn_8005E7D4();
extern "C" void fn_800609D8();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80173580();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017B004();
extern "C" void fn_8017B074();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXBegin();
extern "C" void GXLoadTexObj();
extern "C" void GXProject();
extern "C" void GXGetProjectionv();
extern "C" void GXGetViewportv();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80048F04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048F04() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    mr r29, r4
    mr r30, r5
    li r3, 0x12
    lis r4, fn_8004910C@ha
    addi r4, r4, fn_8004910C@l
    lwz r5, lbl_8049D670
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80048F54
    li r3, 0x0
    b lbl_800490E4
lbl_80048F54:
    li r4, 0x0
    li r5, 0x1e38
    bl memset
    cmpwi r23, 0x0
    beq lbl_80048F6C
    stw r23, 0xc(r31)
lbl_80048F6C:
    lwz r0, 0x0(r30)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x8(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_80049010
    li r23, 0x0
    li r28, 0x0
    li r27, 0x0
    li r26, 0x0
    lfs f31, lbl_8049EB30
lbl_80048FA0:
    add r24, r30, r28
    lwz r4, 0x3c(r24)
    cmpwi r4, 0x0
    blt lbl_80049010
    add r25, r31, r26
    mr r3, r29
    bl fn_80019E14
    stw r3, 0x20(r25)
    add r3, r31, r27
    addi r3, r3, 0x1d6c
    lfs f0, 0x40(r24)
    fmuls f1, f31, f0
    lfs f0, 0x44(r24)
    fmuls f2, f31, f0
    lfs f0, 0x48(r24)
    fmuls f3, f31, f0
    bl fn_80018B0C
    lwz r0, 0x4c(r24)
    stw r0, 0x1e00(r25)
    lwz r3, 0x1e28(r31)
    addi r0, r3, 0x1
    stw r0, 0x1e28(r31)
    addi r23, r23, 0x1
    addi r28, r28, 0x14
    addi r27, r27, 0xc
    addi r26, r26, 0x4
    cmpwi r23, 0xa
    blt lbl_80048FA0
lbl_80049010:
    la r3, lbl_8049EB30
    lfs f0, 0x4(r3)
    stfs f0, 0x54(r31)
    lwz r0, 0x8(r30)
    extsh r0, r0
    sth r0, 0x48(r31)
    lwz r0, 0xc(r30)
    extsh r0, r0
    sth r0, 0x4a(r31)
    lwz r0, 0x10(r30)
    stw r0, 0x50(r31)
    lwz r0, 0x38(r30)
    stw r0, 0x4c(r31)
    lfs f0, 0x20(r30)
    stfs f0, 0x1de4(r31)
    lfs f0, 0x24(r30)
    stfs f0, 0x1de8(r31)
    lfs f0, 0x28(r30)
    lfs f1, lbl_8049EB30
    fmuls f0, f1, f0
    stfs f0, 0x1dec(r31)
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    stfs f0, 0x1df0(r31)
    lfs f0, 0x8(r3)
    stfs f0, 0x1df4(r31)
    lfs f0, 0x30(r30)
    fmuls f0, f1, f0
    stfs f0, 0x1df8(r31)
    lwz r0, 0x34(r30)
    stw r0, 0x1dfc(r31)
    lwz r3, 0x1e28(r31)
    subi r0, r3, 0x1
    stw r0, 0x1e2c(r31)
    li r0, 0x4
    stw r0, 0x1e34(r31)
    lwz r0, 0x1dfc(r31)
    cmpwi r0, 0x20
    ble lbl_800490B4
    li r0, 0x20
    stw r0, 0x1dfc(r31)
lbl_800490B4:
    li r3, 0x14
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_800490E0
    cmpwi r31, 0x0
    beq lbl_800490E0
    mr r3, r31
    bl fn_80049108
lbl_800490E0:
    mr r3, r31
lbl_800490E4:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80049108
// ----------------------------------------------------------------------------
extern "C" asm void fn_80049108() {
    nofralloc
    b fn_8017776C
}

// ----------------------------------------------------------------------------
// fn_8004910C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004910C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8004925C
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80049148
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_800494D0
lbl_80049148:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80049254
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_800491BC
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_80049180
    cmpwi r0, 0xff
    beq lbl_800491A8
    b lbl_800491BC
lbl_80049180:
    bne cr1, lbl_800491BC
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_800491BC
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800494D0
lbl_800491A8:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800494D0
lbl_800491BC:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_80049254
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_80049254
    lwz r3, 0x28(r4)
    lwz r0, 0x4c(r31)
    cmplw r3, r0
    bne lbl_80049254
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_8004922C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80049214
    cmpwi r0, 0x1
    beq lbl_80049220
    b lbl_80049248
lbl_80049214:
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_80049248
lbl_80049220:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80049248
lbl_8004922C:
    extsh r0, r0
    sth r0, 0x4a(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    bne lbl_80049248
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_80049248:
    bl fn_8017742C
    li r3, 0x1
    b lbl_800494D0
lbl_80049254:
    li r3, 0x0
    b lbl_800494D0
lbl_8004925C:
    lwz r3, 0xc(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80049280
    cmpwi r3, 0x2
    beq lbl_8004928C
    b lbl_80049294
lbl_80049280:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80049294
lbl_8004928C:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80049294:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_800492A8
    cmpwi r0, 0xf0
    bne lbl_800492C4
lbl_800492A8:
    lwz r3, 0xc(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_800492C4
    li r3, 0x0
    b lbl_800494D0
lbl_800492C4:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_800492F4
    cmpwi r0, 0x1
    beq lbl_800493D0
    cmpwi r0, 0xef
    beq lbl_8004941C
    cmpwi r0, 0xf0
    beq lbl_80049438
    cmpwi r0, 0xf1
    beq lbl_800494B8
    b lbl_800494CC
lbl_800492F4:
    li r25, 0x0
    li r30, 0x0
    li r29, 0x0
    la r27, lbl_8049EB30
    b lbl_80049394
lbl_80049308:
    add r28, r31, r29
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x20(r28)
    bl fn_80173580
    addi r3, r1, 0x8
    li r4, 0x3
    lwz r5, 0x24(r28)
    bl fn_80173580
    add r3, r31, r30
    addi r26, r3, 0x58
    mr r3, r26
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001B8B8
    mr r3, r26
    mr r4, r26
    lfs f1, 0xc(r27)
    bl fn_80018B08
    mr r3, r26
    addi r4, r1, 0x14
    mr r5, r26
    bl fn_8001B8B8
    li r24, 0x1
    li r28, 0xc
lbl_8004936C:
    add r3, r26, r28
    mr r4, r26
    bl fn_80019DAC
    addi r24, r24, 0x1
    addi r28, r28, 0xc
    cmpwi r24, 0x20
    blt lbl_8004936C
    addi r25, r25, 0x1
    addi r30, r30, 0x180
    addi r29, r29, 0x4
lbl_80049394:
    lwz r3, 0x1e28(r31)
    subi r0, r3, 0x1
    cmpw r25, r0
    blt lbl_80049308
    lha r3, 0x48(r31)
    subi r0, r3, 0x1
    sth r0, 0x48(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_800493C4
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_800493C4:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_800494CC
lbl_800493D0:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_800493E8
    mr r3, r31
    bl fn_800494E8
lbl_800493E8:
    lha r3, 0x4a(r31)
    cmpwi r3, -0x1
    ble lbl_800493FC
    subi r0, r3, 0x1
    sth r0, 0x4a(r31)
lbl_800493FC:
    lha r0, 0x4a(r31)
    cmpwi r0, 0x0
    bne lbl_80049410
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_80049410:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_800494CC
lbl_8004941C:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x50(r31)
    extsh r0, r0
    sth r0, 0x4a(r31)
    li r0, 0x0
    stw r0, 0x4c(r31)
lbl_80049438:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80049450
    mr r3, r31
    bl fn_800494E8
lbl_80049450:
    lha r4, 0x4a(r31)
    lfd f2, lbl_8049EB20
    xoris r0, r4, 0x8000
    stw r0, 0x24(r1)
    lis r3, 0x4330
    stw r3, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f2
    lwz r0, 0x50(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    stw r3, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x54(r31)
    subi r0, r4, 0x1
    sth r0, 0x4a(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_800494AC
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_800494AC:
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    beq lbl_800494CC
lbl_800494B8:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80049108
lbl_800494CC:
    li r3, 0x0
lbl_800494D0:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_800494E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800494E8() {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    opword 0xF3E100F8
    stfd f30, 0xe0(r1)
    opword 0xF3C100E8
    stfd f29, 0xd0(r1)
    opword 0xF3A100D8
    stfd f28, 0xc0(r1)
    opword 0xF38100C8
    stfd f27, 0xb0(r1)
    opword 0xF36100B8
    addi r11, r1, 0xb0
    bl _savegpr_18
    mr r24, r3
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    li r28, 0x0
    li r22, 0x0
    li r21, 0x0
    li r20, 0x0
    li r19, 0x0
    la r31, lbl_8049EB30
    lfd f28, lbl_8049EB20
    lfs f29, 0x10(r31)
    lfs f30, 0x4(r31)
    lfs f31, 0xc(r31)
    li r30, 0x0
    lfs f27, 0x14(r31)
    li r23, 0xa
    b lbl_80049AAC
lbl_80049570:
    cmpwi r28, 0x0
    bne lbl_80049580
    li r25, 0x1
    b lbl_800495A0
lbl_80049580:
    srwi r3, r28, 31
    clrlwi r0, r28, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x0
    li r25, -0x1
    bne lbl_800495A0
    li r25, 0x1
lbl_800495A0:
    li r26, 0x0
    add r18, r24, r19
    addi r3, r1, 0x50
    lwz r4, 0x20(r18)
    add r5, r24, r20
    addi r5, r5, 0x1d6c
    bl fn_80018AF8
    addi r3, r1, 0x44
    lwz r4, 0x24(r18)
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r5, r24, r0
    addi r5, r5, 0x1d6c
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    bl fn_8001D9AC
    stfs f1, 0x1df4(r24)
    add r3, r24, r22
    addi r29, r3, 0x58
    addi r3, r1, 0x38
    mr r4, r29
    bl fn_80019DAC
    li r27, 0x1d
    li r18, 0x15c
lbl_80049604:
    lwz r3, 0x1dfc(r24)
    subi r0, r3, 0x1
    cmpw r27, r0
    bgt lbl_8004962C
    add r3, r29, r18
    subi r0, r27, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    bl fn_80019DAC
    b lbl_8004963C
lbl_8004962C:
    add r3, r29, r18
    mulli r0, r0, 0xc
    add r4, r29, r0
    bl fn_80019DAC
lbl_8004963C:
    subi r27, r27, 0x1
    subi r18, r18, 0xc
    cmpwi r27, 0x0
    bgt lbl_80049604
    mr r3, r29
    addi r4, r1, 0x44
    addi r5, r1, 0x50
    lfs f1, 0xc(r31)
    bl fn_8001D9D0
    lwz r5, 0x1e34(r24)
    lwz r4, 0x1e30(r24)
    cmpw r4, r5
    bge lbl_800496CC
    add r3, r24, r22
    xoris r0, r4, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f2, f0, f28
    xoris r0, r25, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f0, f28
    lfs f0, 0x1df8(r24)
    fmuls f1, f0, f1
    lfs f0, 0x1df4(r24)
    fmuls f0, f0, f1
    fmuls f0, f29, f0
    fmuls f0, f29, f0
    fmuls f1, f2, f0
    lfs f0, 0x5c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x5c(r3)
    lwz r3, 0x1e30(r24)
    addi r0, r3, 0x1
    stw r0, 0x1e30(r24)
    b lbl_80049818
lbl_800496CC:
    slwi r6, r5, 1
    cmpw r4, r6
    bge lbl_80049738
    add r3, r24, r22
    xoris r0, r25, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f28
    lfs f0, 0x1df8(r24)
    fmuls f1, f0, f1
    lfs f0, 0x1df4(r24)
    fmuls f0, f0, f1
    fmuls f0, f29, f0
    fmuls f1, f29, f0
    subf r0, r4, r6
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fmuls f1, f1, f0
    lfs f0, 0x5c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x5c(r3)
    lwz r3, 0x1e30(r24)
    addi r0, r3, 0x1
    stw r0, 0x1e30(r24)
    b lbl_80049818
lbl_80049738:
    mulli r0, r5, 0x3
    cmpw r4, r0
    bge lbl_800497A4
    add r3, r24, r22
    xoris r0, r25, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f28
    lfs f0, 0x1df8(r24)
    fmuls f1, f0, f1
    lfs f0, 0x1df4(r24)
    fmuls f0, f0, f1
    fmuls f0, f29, f0
    fmuls f1, f29, f0
    subf r0, r4, r6
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fmuls f1, f1, f0
    lfs f0, 0x5c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x5c(r3)
    lwz r3, 0x1e30(r24)
    addi r0, r3, 0x1
    stw r0, 0x1e30(r24)
    b lbl_80049818
lbl_800497A4:
    add r3, r24, r22
    xoris r0, r25, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f28
    lfs f0, 0x1df8(r24)
    fmuls f1, f0, f1
    lfs f0, 0x1df4(r24)
    fmuls f0, f0, f1
    fmuls f0, f29, f0
    fmuls f1, f29, f0
    slwi r0, r5, 2
    subf r0, r0, r4
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fmuls f1, f1, f0
    lfs f0, 0x5c(r3)
    fsubs f0, f0, f1
    stfs f0, 0x5c(r3)
    lwz r3, 0x1e30(r24)
    addi r3, r3, 0x1
    stw r3, 0x1e30(r24)
    lwz r0, 0x1e34(r24)
    slwi r0, r0, 2
    cmpw r0, r3
    bgt lbl_80049818
    stw r30, 0x1e30(r24)
lbl_80049818:
    mr r3, r29
    addi r4, r1, 0x38
    bl fn_8001D9AC
    fcmpo cr0, f1, f27
    opword 0x4C411382
    bne lbl_80049854
    li r18, 0x1
    li r25, 0xc
lbl_80049838:
    add r3, r29, r25
    mr r4, r29
    bl fn_80019DAC
    addi r18, r18, 0x1
    addi r25, r25, 0xc
    cmpwi r18, 0x1e
    blt lbl_80049838
lbl_80049854:
    lwz r4, 0x0(r24)
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_800498DC
    lwz r3, 0xc(r24)
    cmpwi r3, 0x0
    beq lbl_800498DC
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_800498DC
    li r20, 0x0
    li r18, 0x0
    mulli r0, r28, 0x168
    add r3, r24, r0
    addi r19, r3, 0xf58
    lfd f28, lbl_8049EB20
    la r3, lbl_8049EB30
    lfs f27, 0x18(r3)
lbl_800498A0:
    add r3, r19, r18
    addi r4, r1, 0x44
    addi r5, r1, 0x50
    addi r0, r20, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x64(r1)
    lfd f0, 0x60(r1)
    fsubs f0, f0, f28
    fdivs f1, f0, f27
    bl fn_8001D9D0
    addi r20, r20, 0x1
    addi r18, r18, 0xc
    cmpwi r20, 0x1e
    blt lbl_800498A0
    b lbl_80049ABC
lbl_800498DC:
    rlwinm r0, r4, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80049920
    add r3, r24, r22
    addi r18, r3, 0x58
    addi r3, r1, 0x2c
    mr r4, r18
    lwz r5, 0x1dfc(r24)
    subi r0, r5, 0x1
    mulli r0, r0, 0xc
    add r5, r18, r0
    bl fn_8001B8B8
    addi r3, r1, 0x2c
    mr r4, r18
    mr r5, r3
    bl fn_80018B00
    b lbl_80049938
lbl_80049920:
    addi r3, r1, 0x2c
    lwz r4, 0x1dfc(r24)
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    bl fn_80019DAC
lbl_80049938:
    li r25, 0x0
    add r18, r24, r21
lbl_80049940:
    cmpwi r25, 0x0
    beq lbl_8004995C
    cmpwi r25, 0x1
    beq lbl_80049984
    cmpwi r25, 0x2
    beq lbl_800499AC
    b lbl_800499D0
lbl_8004995C:
    addi r3, r1, 0x20
    addi r4, r1, 0x50
    bl fn_80019DAC
    addi r3, r1, 0x14
    addi r4, r1, 0x50
    bl fn_80019DAC
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    bl fn_80019DAC
    b lbl_800499D0
lbl_80049984:
    addi r3, r1, 0x20
    addi r4, r1, 0x50
    bl fn_80019DAC
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    bl fn_80019DAC
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    bl fn_80019DAC
    b lbl_800499D0
lbl_800499AC:
    addi r3, r1, 0x20
    addi r4, r1, 0x2c
    bl fn_80019DAC
    addi r3, r1, 0x14
    addi r4, r1, 0x44
    bl fn_80019DAC
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    bl fn_80019DAC
lbl_800499D0:
    li r5, 0x0
    mulli r3, r26, 0xc
    mtctr r23
lbl_800499DC:
    xoris r0, r5, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fmuls f2, f29, f0
    fsubs f1, f30, f2
    fmuls f0, f31, f1
    fmuls f3, f0, f1
    fmuls f0, f1, f2
    fadds f4, f31, f0
    fmuls f0, f31, f2
    fmuls f5, f0, f2
    add r4, r18, r3
    lfs f0, 0x8(r1)
    fmuls f2, f0, f5
    lfs f0, 0x20(r1)
    fmuls f1, f0, f3
    lfs f0, 0x14(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xf58(r4)
    lfs f0, 0xc(r1)
    fmuls f2, f0, f5
    lfs f0, 0x24(r1)
    fmuls f1, f0, f3
    lfs f0, 0x18(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xf5c(r4)
    lfs f0, 0x10(r1)
    fmuls f2, f0, f5
    lfs f0, 0x28(r1)
    fmuls f1, f0, f3
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xf60(r4)
    addi r26, r26, 0x1
    addi r3, r3, 0xc
    addi r5, r5, 0x1
    bdnz lbl_800499DC
    addi r25, r25, 0x1
    cmpwi r25, 0x3
    blt lbl_80049940
    addi r28, r28, 0x1
    addi r22, r22, 0x180
    addi r21, r21, 0x168
    addi r20, r20, 0xc
    addi r19, r19, 0x4
lbl_80049AAC:
    lwz r3, 0x1e28(r24)
    subi r0, r3, 0x1
    cmpw r28, r0
    blt lbl_80049570
lbl_80049ABC:
    li r0, 0xf8
    opword 0x13E1000C
    lfd f31, 0xf0(r1)
    li r0, 0xe8
    opword 0x13C1000C
    lfd f30, 0xe0(r1)
    li r0, 0xd8
    opword 0x13A1000C
    lfd f29, 0xd0(r1)
    li r0, 0xc8
    opword 0x1381000C
    lfd f28, 0xc0(r1)
    li r0, 0xb8
    opword 0x1361000C
    lfd f27, 0xb0(r1)
    addi r11, r1, 0xb0
    bl _restgpr_18
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// ----------------------------------------------------------------------------
// fn_80049B10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80049B10() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80049D8C
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80049B4C
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_80049D8C
lbl_80049B4C:
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80049B70
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_80049B70
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_80049D8C
lbl_80049B70:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80049B94
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80049D8C
lbl_80049B94:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80049BC0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_80049BC0
    mr r3, r31
    bl fn_8004AC40
    cmpwi r3, 0x0
    beq lbl_80049D8C
lbl_80049BC0:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 19
    cmpwi r0, 0x0
    bne lbl_80049BE4
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_80049D8C
lbl_80049BE4:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0x14
    bl fn_800163E4
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80049C94
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
    mr r3, r31
    bl fn_80049DA0
    b lbl_80049D7C
lbl_80049C94:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80049D28
    lwz r3, 0x10(r31)
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
    mr r3, r31
    bl fn_8004A240
    b lbl_80049D7C
lbl_80049D28:
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
    mr r3, r31
    bl fn_8004A63C
lbl_80049D7C:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80049D8C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80049DA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80049DA0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1f0
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
    subi r11, r12, 0x40
    bl _savegpr_25
    mr r28, r3
    lis r0, 0x4330
    stw r0, 0x158(r1)
    lis r0, 0x4330
    stw r0, 0x160(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r25, r3
    addi r3, r1, 0xf8
    mr r4, r25
    bl fn_8017B004
    addi r3, r1, 0xb8
    bl GXGetProjectionv
    addi r3, r1, 0x78
    bl GXGetViewportv
    addi r3, r1, 0x128
    mr r4, r25
    bl fn_8017B074
    addi r3, r1, 0x5c
    li r4, 0x2
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r28
    addi r4, r1, 0x40
    addi r5, r1, 0x20
    bl fn_8004A928
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3c
    bl GXBegin
    li r30, 0x0
    li r27, 0x0
    lis r3, lbl_803C22B0@ha
    addi r25, r3, lbl_803C22B0@l
    lfd f28, lbl_8049EB28
    la r3, lbl_8049EB30
    lfs f29, 0x1c(r3)
    lfd f30, lbl_8049EB20
    lfs f31, 0x18(r3)
    b lbl_8004A1E4
lbl_80049E80:
    li r29, 0x0
    li r26, 0x0
    add r31, r28, r27
lbl_80049E8C:
    cmpwi r29, 0x0
    bne lbl_80049EBC
    addi r3, r1, 0x68
    add r5, r28, r27
    addi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    addi r4, r4, 0xf58
    add r5, r5, r26
    addi r5, r5, 0xf58
    bl fn_8001B8B8
    b lbl_80049EE0
lbl_80049EBC:
    addi r3, r1, 0x68
    add r5, r28, r27
    add r4, r5, r26
    addi r4, r4, 0xf58
    subi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r5, r5, r0
    addi r5, r5, 0xf58
    bl fn_8001B8B8
lbl_80049EE0:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_8001F9C8
    addi r3, r1, 0x68
    mr r4, r3
    xoris r0, r29, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x1df0(r28)
    lfs f1, 0x1dec(r28)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x50
    li r4, 0x3
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r28
    addi r4, r1, 0x50
    add r5, r31, r26
    addi r5, r5, 0xf58
    addi r6, r1, 0x40
    addi r7, r1, 0x30
    bl fn_8004AAE0
    addi r3, r1, 0x50
    add r4, r31, r26
    addi r4, r4, 0xf58
    addi r5, r1, 0x68
    bl fn_80018B00
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_8004ADB0
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r0, 0x16c(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x54(r28)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r0, 0x184(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    addi r3, r1, 0xf8
    addi r4, r1, 0xb8
    addi r5, r1, 0x78
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    bl GXProject
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004A054
    lwz r3, 0x54(r25)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f28
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f28
    lfs f0, 0x14(r1)
    fdivs f0, f0, f2
    fsubs f2, f0, f29
    bl fn_8004AD78
    b lbl_8004A08C
lbl_8004A054:
    lwz r3, 0x54(r25)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f28
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f28
    lfs f0, 0x14(r1)
    fdivs f2, f0, f2
    bl fn_8004AD78
lbl_8004A08C:
    addi r3, r1, 0x50
    add r4, r31, r26
    addi r4, r4, 0xf58
    addi r5, r1, 0x68
    bl fn_8001B8B8
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_8004ADB0
    lfs f0, 0x30(r1)
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r0, 0x184(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x34(r1)
    fctiwz f0, f0
    stfd f0, 0x178(r1)
    lwz r0, 0x17c(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x170(r1)
    lwz r0, 0x174(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x3c(r1)
    lfs f0, 0x54(r28)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r0, 0x16c(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    addi r3, r1, 0xf8
    addi r4, r1, 0xb8
    addi r5, r1, 0x78
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    bl GXProject
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8004A184
    lwz r3, 0x54(r25)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f28
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f28
    lfs f0, 0x14(r1)
    fdivs f0, f0, f2
    fsubs f2, f0, f29
    bl fn_8004AD78
    b lbl_8004A1BC
lbl_8004A184:
    lwz r3, 0x54(r25)
    lhz r0, 0xe(r3)
    stw r0, 0x164(r1)
    lfd f0, 0x160(r1)
    fsubs f1, f0, f28
    lfs f0, 0x18(r1)
    fdivs f1, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f2, f0, f28
    lfs f0, 0x14(r1)
    fdivs f2, f0, f2
    bl fn_8004AD78
lbl_8004A1BC:
    addi r3, r1, 0x40
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018AF4
    addi r29, r29, 0x1
    addi r26, r26, 0xc
    cmpwi r29, 0x1e
    blt lbl_80049E8C
    addi r30, r30, 0x1
    addi r27, r27, 0x168
lbl_8004A1E4:
    lwz r0, 0x1e2c(r28)
    cmpw r30, r0
    blt lbl_80049E80
    bl fn_8004AD74
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
    subi r11, r10, 0x40
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004A240
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004A240() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x160
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
    subi r11, r12, 0x50
    bl _savegpr_23
    mr r25, r3
    li r26, 0x0
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x68
    bl fn_8017B074
    addi r3, r1, 0x4c
    li r4, 0x2
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r25
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    bl fn_8004A928
    la r29, lbl_8049EB30
    lfs f28, 0x8(r29)
    lwz r3, 0x1e2c(r25)
    li r0, 0x3c
    mullw r0, r3, r0
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r0, 16
    bl GXBegin
    li r28, 0x0
    li r24, 0x0
    fmr f29, f28
    lfd f30, lbl_8049EB20
    lis r30, 0x4330
    lfs f31, 0x18(r29)
    lfs f27, 0x20(r29)
    b lbl_8004A5D4
lbl_8004A308:
    li r27, 0x0
    li r23, 0x0
    add r31, r25, r24
lbl_8004A314:
    cmpwi r27, 0x0
    bne lbl_8004A344
    addi r3, r1, 0x58
    add r5, r25, r24
    addi r0, r27, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    addi r4, r4, 0xf58
    add r5, r5, r23
    addi r5, r5, 0xf58
    bl fn_8001B8B8
    b lbl_8004A368
lbl_8004A344:
    addi r3, r1, 0x58
    add r5, r25, r24
    add r4, r5, r23
    addi r4, r4, 0xf58
    subi r0, r27, 0x1
    mulli r0, r0, 0xc
    add r5, r5, r0
    addi r5, r5, 0xf58
    bl fn_8001B8B8
lbl_8004A368:
    lfs f0, 0x58(r1)
    fcmpu cr0, f29, f0
    bne lbl_8004A38C
    lfs f0, 0x5c(r1)
    fcmpu cr0, f29, f0
    bne lbl_8004A38C
    lfs f0, 0x60(r1)
    fcmpu cr0, f29, f0
    beq lbl_8004A3E0
lbl_8004A38C:
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x58
    mr r4, r3
    addi r5, r1, 0x4c
    bl fn_8001F9C8
    addi r3, r1, 0x58
    mr r4, r3
    xoris r0, r27, 0x8000
    stw r0, 0x9c(r1)
    stw r30, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x1df0(r25)
    lfs f1, 0x1dec(r25)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
lbl_8004A3E0:
    addi r3, r1, 0x40
    li r4, 0x3
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r25
    addi r4, r1, 0x40
    add r5, r31, r23
    addi r5, r5, 0xf58
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    bl fn_8004AAE0
    addi r3, r1, 0x40
    add r4, r31, r23
    addi r4, r4, 0xf58
    addi r5, r1, 0x58
    bl fn_80018B00
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_8004ADB0
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r0, 0xac(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x54(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    fmr f1, f28
    lfs f2, 0x8(r29)
    bl fn_8004AD78
    addi r3, r1, 0x40
    add r4, r31, r23
    addi r4, r4, 0xf58
    addi r5, r1, 0x58
    bl fn_8001B8B8
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_8004ADB0
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0xc0(r1)
    lwz r0, 0xc4(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0xc8(r1)
    lwz r0, 0xcc(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x54(r25)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    fmr f1, f28
    lfs f2, 0x4(r29)
    bl fn_8004AD78
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x10
    bl fn_80018AF4
    lwz r0, 0x0(r25)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8004A54C
    fadds f28, f28, f27
    b lbl_8004A5BC
lbl_8004A54C:
    cmpwi r28, 0x0
    bne lbl_8004A578
    add r4, r25, r24
    add r3, r4, r23
    addi r3, r3, 0xf58
    addi r0, r27, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    addi r4, r4, 0xf58
    bl fn_8001D9AC
    b lbl_8004A598
lbl_8004A578:
    add r4, r25, r24
    add r3, r4, r23
    addi r3, r3, 0xf58
    subi r0, r27, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    addi r4, r4, 0xf58
    bl fn_8001D9AC
lbl_8004A598:
    cmpwi r26, 0x0
    bne lbl_8004A5B0
    lfs f0, 0x1de4(r25)
    fmuls f0, f0, f1
    fadds f28, f28, f0
    b lbl_8004A5BC
lbl_8004A5B0:
    lfs f0, 0x1de4(r25)
    fmuls f0, f0, f1
    fsubs f28, f28, f0
lbl_8004A5BC:
    addi r27, r27, 0x1
    addi r23, r23, 0xc
    cmpwi r27, 0x1e
    blt lbl_8004A314
    addi r28, r28, 0x1
    addi r24, r24, 0x168
lbl_8004A5D4:
    lwz r0, 0x1e2c(r25)
    cmpw r28, r0
    blt lbl_8004A308
    bl fn_8004AD74
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
    subi r11, r10, 0x50
    bl _restgpr_23
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004A63C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004A63C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x120
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_25
    mr r27, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x68
    bl fn_8017B074
    addi r3, r1, 0x4c
    li r4, 0x2
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r27
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    bl fn_8004A928
    lwz r3, 0x1e2c(r27)
    li r0, 0x3c
    mullw r0, r3, r0
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r0, 16
    bl GXBegin
    li r29, 0x0
    li r26, 0x0
    lfd f30, lbl_8049EB20
    lis r30, 0x4330
    la r3, lbl_8049EB30
    lfs f31, 0x18(r3)
    b lbl_8004A8E4
lbl_8004A6DC:
    li r28, 0x0
    li r25, 0x0
    add r31, r27, r26
lbl_8004A6E8:
    cmpwi r28, 0x0
    bne lbl_8004A718
    addi r3, r1, 0x58
    add r5, r27, r26
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    addi r4, r4, 0xf58
    add r5, r5, r25
    addi r5, r5, 0xf58
    bl fn_8001B8B8
    b lbl_8004A73C
lbl_8004A718:
    addi r3, r1, 0x58
    add r5, r27, r26
    add r4, r5, r25
    addi r4, r4, 0xf58
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r5, r5, r0
    addi r5, r5, 0xf58
    bl fn_8001B8B8
lbl_8004A73C:
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x58
    mr r4, r3
    addi r5, r1, 0x4c
    bl fn_8001F9C8
    addi r3, r1, 0x58
    mr r4, r3
    xoris r0, r28, 0x8000
    stw r0, 0x9c(r1)
    stw r30, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x1df0(r27)
    lfs f1, 0x1dec(r27)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x40
    li r4, 0x3
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r27
    addi r4, r1, 0x40
    add r5, r31, r25
    addi r5, r5, 0xf58
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    bl fn_8004AAE0
    addi r3, r1, 0x40
    add r4, r31, r25
    addi r4, r4, 0xf58
    addi r5, r1, 0x58
    bl fn_80018B00
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_8004ADB0
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0xa0(r1)
    lwz r0, 0xa4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0xa8(r1)
    lwz r0, 0xac(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x54(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    addi r3, r1, 0x40
    add r4, r31, r25
    addi r4, r4, 0xf58
    addi r5, r1, 0x58
    bl fn_8001B8B8
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_8004ADB0
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0xc0(r1)
    lwz r0, 0xc4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0xc8(r1)
    lwz r0, 0xcc(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x54(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r6, r0, 24
    bl fn_8004AD88
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x10
    bl fn_80018AF4
    addi r28, r28, 0x1
    addi r25, r25, 0xc
    cmpwi r28, 0x1e
    blt lbl_8004A6E8
    addi r29, r29, 0x1
    addi r26, r26, 0x168
lbl_8004A8E4:
    lwz r0, 0x1e2c(r27)
    cmpw r29, r0
    blt lbl_8004A6DC
    bl fn_8004AD74
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004A928
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004A928() {
    nofralloc
    stwu r1, -0x40(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    lfd f0, lbl_8049EB28
    li r9, 0x1e
    lfd f3, lbl_8049EB20
    b lbl_8004AAC8
lbl_8004A954:
    add r8, r3, r7
    lwz r0, 0x1e00(r8)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f2, f1, f0
    stfs f2, 0x0(r4)
    lwz r0, 0x1e00(r8)
    extrwi r0, r0, 8, 8
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f0
    stfs f1, 0x4(r4)
    lwz r0, 0x1e00(r8)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f0
    stfs f1, 0x8(r4)
    lwz r0, 0x1e00(r8)
    clrlwi r0, r0, 24
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f0
    stfs f1, 0xc(r4)
    addi r0, r6, 0x1
    slwi r0, r0, 2
    add r8, r3, r0
    lwz r0, 0x1e00(r8)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f0
    fsubs f1, f1, f2
    fctiwz f1, f1
    stfd f1, 0x18(r1)
    lwz r0, 0x1c(r1)
    divw r0, r0, r9
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    stfs f1, 0x0(r5)
    lwz r0, 0x1e00(r8)
    extrwi r0, r0, 8, 8
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f2, f1, f0
    lfs f1, 0x4(r4)
    fsubs f1, f2, f1
    fctiwz f1, f1
    stfd f1, 0x20(r1)
    lwz r0, 0x24(r1)
    divw r0, r0, r9
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    stfs f1, 0x4(r5)
    lwz r0, 0x1e00(r8)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f2, f1, f0
    lfs f1, 0x8(r4)
    fsubs f1, f2, f1
    fctiwz f1, f1
    stfd f1, 0x28(r1)
    lwz r0, 0x2c(r1)
    divw r0, r0, r9
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    stfs f1, 0x8(r5)
    lwz r0, 0x1e00(r8)
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f2, f1, f0
    lfs f1, 0xc(r4)
    fsubs f1, f2, f1
    fctiwz f1, f1
    stfd f1, 0x30(r1)
    lwz r0, 0x34(r1)
    divw r0, r0, r9
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f3
    stfs f1, 0xc(r5)
    addi r6, r6, 0x1
    addi r7, r7, 0x4
lbl_8004AAC8:
    lwz r8, 0x1e28(r3)
    subi r0, r8, 0x1
    cmpw r6, r0
    blt lbl_8004A954
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8004AAE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AAE0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r8, r4
    mr r29, r6
    mr r30, r7
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8004AC00
    addi r3, r1, 0x8
    mr r4, r5
    mr r5, r8
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    la r31, lbl_8049EB30
    lfs f2, 0x24(r31)
    lfs f0, 0x8(r1)
    fmuls f1, f2, f0
    lfs f0, 0x10(r1)
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018C2C
    bl fn_80018BD4
    lfs f2, 0x28(r31)
    fmuls f1, f2, f1
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    xori r0, r0, 0xff
    lfd f1, lbl_8049EB20
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x0(r29)
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    fcmpo cr0, f0, f2
    ble lbl_8004AB9C
    stfs f2, 0x0(r30)
lbl_8004AB9C:
    lfs f0, 0x4(r29)
    fadds f2, f0, f1
    stfs f2, 0x4(r30)
    la r3, lbl_8049EB30
    lfs f0, 0x28(r3)
    fcmpo cr0, f2, f0
    ble lbl_8004ABBC
    stfs f0, 0x4(r30)
lbl_8004ABBC:
    lfs f0, 0x8(r29)
    fadds f2, f0, f1
    stfs f2, 0x8(r30)
    la r3, lbl_8049EB30
    lfs f0, 0x28(r3)
    fcmpo cr0, f2, f0
    ble lbl_8004ABDC
    stfs f0, 0x8(r30)
lbl_8004ABDC:
    lfs f0, 0xc(r29)
    fadds f1, f0, f1
    stfs f1, 0xc(r30)
    la r3, lbl_8049EB30
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_8004AC28
    stfs f0, 0xc(r30)
    b lbl_8004AC28
lbl_8004AC00:
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f1, 0xc(r6)
    lfs f0, 0x54(r3)
    fmuls f0, f1, f0
    stfs f0, 0xc(r7)
lbl_8004AC28:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8004AC40
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AC40() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    li r6, 0x0
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    bne lbl_8004AC6C
    li r3, 0x0
    b lbl_8004AD60
lbl_8004AC6C:
    lwz r0, 0x18(r4)
    cmplwi r0, 0xb
    bne lbl_8004AD40
    lwz r3, 0x0(r3)
    rlwinm r5, r3, 0, 11, 11
    cmpwi r5, 0x0
    beq lbl_8004AC94
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_8004AD40
lbl_8004AC94:
    cmpwi r5, 0x0
    beq lbl_8004ACB0
    mr r3, r4
    li r4, 0xc
    bl fn_8005E564
    mr r6, r3
    b lbl_8004ACCC
lbl_8004ACB0:
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8004ACCC
    mr r3, r4
    li r4, 0xd
    bl fn_8005E564
    mr r6, r3
lbl_8004ACCC:
    cmpwi r6, 0x0
    bne lbl_8004ACD8
    li r31, 0x0
lbl_8004ACD8:
    cmpwi r6, 0x0
    beq lbl_8004ACF4
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8004ACF4
    li r31, 0x0
lbl_8004ACF4:
    cmpwi r6, 0x0
    beq lbl_8004AD20
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8004AD20
    lwz r0, 0x58(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8004AD20
    li r31, 0x0
lbl_8004AD20:
    cmpwi r6, 0x0
    beq lbl_8004AD5C
    mr r3, r6
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_8004AD5C
    li r31, 0x0
    b lbl_8004AD5C
lbl_8004AD40:
    lwz r3, 0x3908(r4)
    lwz r3, 0x8(r3)
    b lbl_8004AD54
lbl_8004AD4C:
    li r31, 0x0
    lwz r3, 0x8(r3)
lbl_8004AD54:
    cmpwi r3, 0x0
    bne lbl_8004AD4C
lbl_8004AD5C:
    mr r3, r31
lbl_8004AD60:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004AD74
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AD74() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004AD78
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AD78() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8004AD88
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AD88() {
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
// fn_8004ADB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004ADB0() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

