#include "types.h"

// Translation unit: src/unk_80022180.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern "C" float lbl_8049D63C;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049E748;
extern "C" float lbl_8049E750;
extern "C" float lbl_8049E758;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803C1A40[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
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
extern "C" void fn_80022180();
extern "C" void fn_8002235C();
extern "C" void fn_80022360();
extern "C" void fn_80022740();
extern "C" void fn_80022C18();
extern "C" void fn_80022E90();
extern "C" void fn_80023304();
extern "C" void fn_80023654();
extern "C" void fn_80023908();
extern "C" void fn_80023A8C();
extern "C" void fn_80023C00();
extern "C" void fn_80023E04();
extern "C" void fn_80023E08();
extern "C" void fn_80023E18();
extern "C" void fn_80023E40();
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
// fn_80022180
// ----------------------------------------------------------------------------
extern "C" asm void fn_80022180() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r30, r5
    mr r29, r6
    li r3, 0x12
    lis r4, fn_80022360@ha
    addi r4, r4, fn_80022360@l
    lwz r5, lbl_8049D63C
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800221CC
    li r3, 0x0
    b lbl_80022344
lbl_800221CC:
    li r4, 0x0
    li r5, 0x358
    bl memset
    cmpwi r27, 0x0
    beq lbl_800221EC
    stw r27, 0x10(r31)
    lwz r0, 0x140(r27)
    stw r0, 0xc(r31)
lbl_800221EC:
    lwz r0, 0x0(r29)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x8(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8002222C
    mr r3, r28
    lwz r4, 0x3c(r29)
    bl fn_80019E14
    stw r3, 0x18(r31)
    mr r3, r30
    lwz r4, 0x50(r29)
    bl fn_80019E14
    stw r3, 0x1c(r31)
lbl_8002222C:
    lfs f0, lbl_8049E758
    stfs f0, 0x2c(r31)
    lwz r0, 0x8(r29)
    extsh r0, r0
    sth r0, 0x20(r31)
    lwz r0, 0xc(r29)
    extsh r0, r0
    sth r0, 0x22(r31)
    lwz r0, 0x10(r29)
    stw r0, 0x28(r31)
    lwz r0, 0x38(r29)
    stw r0, 0x24(r31)
    addi r3, r31, 0x31c
    la r30, lbl_8049E758
    lfs f0, 0x40(r29)
    lfs f3, 0x4(r30)
    fmuls f1, f3, f0
    lfs f0, 0x44(r29)
    fmuls f2, f3, f0
    lfs f0, 0x48(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    addi r3, r31, 0x328
    lfs f0, 0x54(r29)
    lfs f3, 0x4(r30)
    fmuls f1, f3, f0
    lfs f0, 0x58(r29)
    fmuls f2, f3, f0
    lfs f0, 0x5c(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    lfs f0, 0x20(r29)
    stfs f0, 0x334(r31)
    lfs f0, 0x24(r29)
    stfs f0, 0x338(r31)
    lfs f0, 0x28(r29)
    lfs f1, 0x4(r30)
    fmuls f0, f1, f0
    stfs f0, 0x33c(r31)
    lfs f0, 0x2c(r29)
    fmuls f0, f1, f0
    stfs f0, 0x340(r31)
    lfs f0, 0x8(r30)
    stfs f0, 0x344(r31)
    lfs f0, 0x30(r29)
    fmuls f0, f1, f0
    stfs f0, 0x348(r31)
    lwz r0, 0x34(r29)
    stw r0, 0x34c(r31)
    lwz r0, 0x4c(r29)
    stw r0, 0x350(r31)
    lwz r0, 0x60(r29)
    stw r0, 0x354(r31)
    lwz r0, 0x34c(r31)
    cmpwi r0, 0x20
    ble lbl_80022314
    li r0, 0x20
    stw r0, 0x34c(r31)
lbl_80022314:
    li r3, 0x6
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80022340
    cmpwi r31, 0x0
    beq lbl_80022340
    mr r3, r31
    bl fn_8002235C
lbl_80022340:
    mr r3, r31
lbl_80022344:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002235C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002235C() {
    nofralloc
    b fn_8017776C
}

// ----------------------------------------------------------------------------
// fn_80022360
// ----------------------------------------------------------------------------
extern "C" asm void fn_80022360() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_800224B0
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8002239C
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_80022728
lbl_8002239C:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800224A8
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_80022410
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_800223D4
    cmpwi r0, 0xff
    beq lbl_800223FC
    b lbl_80022410
lbl_800223D4:
    bne cr1, lbl_80022410
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80022410
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80022728
lbl_800223FC:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80022728
lbl_80022410:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_800224A8
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_800224A8
    lwz r3, 0x28(r4)
    lwz r0, 0x24(r31)
    cmplw r3, r0
    bne lbl_800224A8
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_80022480
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80022468
    cmpwi r0, 0x1
    beq lbl_80022474
    b lbl_8002249C
lbl_80022468:
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_8002249C
lbl_80022474:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_8002249C
lbl_80022480:
    extsh r0, r0
    sth r0, 0x22(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    bne lbl_8002249C
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_8002249C:
    bl fn_8017742C
    li r3, 0x1
    b lbl_80022728
lbl_800224A8:
    li r3, 0x0
    b lbl_80022728
lbl_800224B0:
    lwz r3, 0x10(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x0
    beq lbl_800224DC
    cmpwi r3, 0x1
    beq lbl_8002252C
    cmpwi r3, 0x2
    beq lbl_80022538
    b lbl_80022540
lbl_800224DC:
    lwz r5, 0x0(r31)
    rlwinm r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80022540
    lwz r4, 0xc(r31)
    lwz r3, 0x10(r31)
    lwz r0, 0x140(r3)
    cmpw r4, r0
    beq lbl_80022540
    rlwinm r0, r5, 0, 14, 12
    stw r0, 0x0(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_80022520
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_80022540
lbl_80022520:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80022540
lbl_8002252C:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80022540
lbl_80022538:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80022540:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_80022554
    cmpwi r0, 0xf0
    bne lbl_80022570
lbl_80022554:
    lwz r3, 0x10(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_80022570
    li r3, 0x0
    b lbl_80022728
lbl_80022570:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_800225A0
    cmpwi r0, 0x1
    beq lbl_80022648
    cmpwi r0, 0xef
    beq lbl_80022684
    cmpwi r0, 0xf0
    beq lbl_800226A0
    cmpwi r0, 0xf1
    beq lbl_80022710
    b lbl_80022724
lbl_800225A0:
    addi r3, r1, 0x14
    li r4, 0x3
    lwz r5, 0x18(r31)
    bl fn_80173580
    addi r3, r1, 0x8
    li r4, 0x3
    lwz r5, 0x1c(r31)
    bl fn_80173580
    addi r3, r31, 0x30
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8001B8B8
    addi r3, r31, 0x30
    mr r4, r3
    la r5, lbl_8049E758
    lfs f1, 0xc(r5)
    bl fn_80018B08
    addi r3, r31, 0x30
    addi r4, r1, 0x14
    mr r5, r3
    bl fn_8001B8B8
    li r29, 0x1
    li r30, 0xc
lbl_800225FC:
    add r3, r31, r30
    addi r3, r3, 0x30
    addi r4, r31, 0x30
    bl fn_80019DAC
    addi r29, r29, 0x1
    addi r30, r30, 0xc
    cmpwi r29, 0x20
    blt lbl_800225FC
    lha r3, 0x20(r31)
    subi r0, r3, 0x1
    sth r0, 0x20(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8002263C
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_8002263C:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80022724
lbl_80022648:
    mr r3, r31
    bl fn_80022740
    lha r3, 0x22(r31)
    cmpwi r3, -0x1
    ble lbl_80022664
    subi r0, r3, 0x1
    sth r0, 0x22(r31)
lbl_80022664:
    lha r0, 0x22(r31)
    cmpwi r0, 0x0
    bne lbl_80022678
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_80022678:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_80022724
lbl_80022684:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x28(r31)
    extsh r0, r0
    sth r0, 0x22(r31)
    li r0, 0x0
    stw r0, 0x24(r31)
lbl_800226A0:
    mr r3, r31
    bl fn_80022740
    lha r4, 0x22(r31)
    lfd f2, lbl_8049E748
    xoris r0, r4, 0x8000
    stw r0, 0x24(r1)
    lis r3, 0x4330
    stw r3, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f2
    lwz r0, 0x28(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    stw r3, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x2c(r31)
    subi r0, r4, 0x1
    sth r0, 0x22(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_80022704
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80022704:
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    beq lbl_80022724
lbl_80022710:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8002235C
lbl_80022724:
    li r3, 0x0
lbl_80022728:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80022740
// ----------------------------------------------------------------------------
extern "C" asm void fn_80022740() {
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
    addi r11, r1, 0xa0
    bl _savegpr_27
    mr r30, r3
    li r31, 0x0
    addi r3, r1, 0x74
    lwz r4, 0x18(r30)
    addi r5, r30, 0x31c
    bl fn_80018AF8
    addi r3, r1, 0x68
    lwz r4, 0x1c(r30)
    addi r5, r30, 0x328
    bl fn_80018AF8
    addi r3, r1, 0x74
    addi r4, r1, 0x68
    bl fn_8001D9AC
    stfs f1, 0x344(r30)
    addi r3, r1, 0x5c
    addi r4, r30, 0x30
    bl fn_80019DAC
    li r28, 0x1d
    li r29, 0x15c
lbl_800227C0:
    lwz r3, 0x34c(r30)
    subi r0, r3, 0x1
    cmpw r28, r0
    bgt lbl_800227F0
    add r3, r30, r29
    addi r3, r3, 0x30
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x30
    bl fn_80019DAC
    b lbl_80022808
lbl_800227F0:
    add r3, r30, r29
    addi r3, r3, 0x30
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x30
    bl fn_80019DAC
lbl_80022808:
    subi r28, r28, 0x1
    subi r29, r29, 0xc
    cmpwi r28, 0x0
    bgt lbl_800227C0
    addi r3, r30, 0x30
    addi r4, r1, 0x68
    addi r5, r1, 0x74
    la r28, lbl_8049E758
    lfs f1, 0xc(r28)
    bl fn_8001D9D0
    lfs f1, 0x348(r30)
    lfs f0, 0x344(r30)
    fmuls f1, f1, f0
    lfs f0, 0x10(r28)
    fmuls f1, f0, f1
    lfs f0, 0x34(r30)
    fsubs f0, f0, f1
    stfs f0, 0x34(r30)
    addi r3, r30, 0x30
    addi r4, r1, 0x5c
    bl fn_8001D9AC
    lfs f0, 0x14(r28)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80022894
    li r28, 0x1
    li r29, 0xc
lbl_80022874:
    add r3, r30, r29
    addi r3, r3, 0x30
    addi r4, r30, 0x30
    bl fn_80019DAC
    addi r28, r28, 0x1
    addi r29, r29, 0xc
    cmpwi r28, 0x1e
    blt lbl_80022874
lbl_80022894:
    lwz r4, 0x0(r30)
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8002291C
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_8002291C
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_8002291C
    li r31, 0x0
    li r29, 0x0
    lfd f29, lbl_8049E748
    lis r28, 0x4330
    la r3, lbl_8049E758
    lfs f28, 0x18(r3)
lbl_800228D8:
    add r3, r30, r29
    addi r3, r3, 0x1b0
    addi r4, r1, 0x68
    addi r5, r1, 0x74
    addi r0, r31, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    stw r28, 0x80(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f29
    fdivs f1, f0, f28
    bl fn_8001D9D0
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x1e
    blt lbl_800228D8
    b lbl_80022BD0
lbl_8002291C:
    rlwinm r0, r4, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_8002295C
    addi r3, r1, 0x50
    addi r4, r30, 0x30
    lwz r5, 0x34c(r30)
    subi r0, r5, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x30
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r30, 0x30
    mr r5, r3
    bl fn_80018B00
    b lbl_80022A54
lbl_8002295C:
    rlwinm r0, r4, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80022A38
    addi r3, r1, 0x20
    addi r4, r1, 0x68
    addi r5, r1, 0x74
    la r6, lbl_8049E758
    lfs f1, 0xc(r6)
    bl fn_8001D9D0
    addi r3, r1, 0x14
    addi r4, r30, 0x30
    addi r5, r1, 0x20
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    lwz r5, 0x34c(r30)
    subi r0, r5, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x30
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    lfs f5, 0x1c(r1)
    lfs f0, 0x8(r1)
    fmuls f2, f5, f0
    lfs f4, 0x14(r1)
    fmuls f1, f4, f0
    lfs f3, 0x18(r1)
    fmuls f0, f3, f0
    fadds f0, f1, f0
    fadds f1, f2, f0
    lfs f0, 0x20(r1)
    fadds f0, f0, f1
    stfs f0, 0x50(r1)
    lfs f0, 0xc(r1)
    fmuls f2, f5, f0
    fmuls f1, f4, f0
    fmuls f0, f3, f0
    fadds f0, f1, f0
    fadds f1, f2, f0
    lfs f0, 0x24(r1)
    fadds f0, f0, f1
    stfs f0, 0x54(r1)
    lfs f0, 0x10(r1)
    fmuls f2, f5, f0
    fmuls f1, f4, f0
    fmuls f0, f3, f0
    fadds f0, f1, f0
    fadds f1, f2, f0
    lfs f0, 0x28(r1)
    fadds f0, f0, f1
    stfs f0, 0x58(r1)
    b lbl_80022A54
lbl_80022A38:
    addi r3, r1, 0x50
    lwz r4, 0x34c(r30)
    subi r0, r4, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x30
    bl fn_80019DAC
lbl_80022A54:
    li r27, 0x0
    la r3, lbl_8049E758
    lfd f28, lbl_8049E748
    lis r28, 0x4330
    lfs f29, 0x10(r3)
    lfs f30, lbl_8049E758
    lfs f31, 0xc(r3)
    li r29, 0xa
lbl_80022A74:
    cmpwi r27, 0x0
    beq lbl_80022A90
    cmpwi r27, 0x1
    beq lbl_80022AB8
    cmpwi r27, 0x2
    beq lbl_80022AE0
    b lbl_80022B04
lbl_80022A90:
    addi r3, r1, 0x44
    addi r4, r1, 0x74
    bl fn_80019DAC
    addi r3, r1, 0x38
    addi r4, r1, 0x74
    bl fn_80019DAC
    addi r3, r1, 0x2c
    addi r4, r1, 0x50
    bl fn_80019DAC
    b lbl_80022B04
lbl_80022AB8:
    addi r3, r1, 0x44
    addi r4, r1, 0x74
    bl fn_80019DAC
    addi r3, r1, 0x38
    addi r4, r1, 0x50
    bl fn_80019DAC
    addi r3, r1, 0x2c
    addi r4, r1, 0x68
    bl fn_80019DAC
    b lbl_80022B04
lbl_80022AE0:
    addi r3, r1, 0x44
    addi r4, r1, 0x50
    bl fn_80019DAC
    addi r3, r1, 0x38
    addi r4, r1, 0x68
    bl fn_80019DAC
    addi r3, r1, 0x2c
    addi r4, r1, 0x68
    bl fn_80019DAC
lbl_80022B04:
    li r5, 0x0
    mulli r3, r31, 0xc
    mtctr r29
lbl_80022B10:
    xoris r0, r5, 0x8000
    stw r0, 0x84(r1)
    stw r28, 0x80(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f28
    fmuls f2, f29, f0
    fsubs f1, f30, f2
    fmuls f0, f31, f1
    fmuls f3, f0, f1
    fmuls f0, f1, f2
    fadds f4, f31, f0
    fmuls f0, f31, f2
    fmuls f5, f0, f2
    add r4, r30, r3
    lfs f0, 0x2c(r1)
    fmuls f2, f0, f5
    lfs f0, 0x44(r1)
    fmuls f1, f0, f3
    lfs f0, 0x38(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x1b0(r4)
    lfs f0, 0x30(r1)
    fmuls f2, f0, f5
    lfs f0, 0x48(r1)
    fmuls f1, f0, f3
    lfs f0, 0x3c(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x1b4(r4)
    lfs f0, 0x34(r1)
    fmuls f2, f0, f5
    lfs f0, 0x4c(r1)
    fmuls f1, f0, f3
    lfs f0, 0x40(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x1b8(r4)
    addi r31, r31, 0x1
    addi r3, r3, 0xc
    addi r5, r5, 0x1
    bdnz lbl_80022B10
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    blt lbl_80022A74
lbl_80022BD0:
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
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_80022C18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80022C18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80022E7C
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_80022E7C
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80022C60
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_80022E7C
lbl_80022C60:
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80022C84
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_80022C84
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_80022E7C
lbl_80022C84:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80022CA8
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80022E7C
lbl_80022CA8:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80022CD4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80022CD4
    mr r3, r31
    bl fn_80023C00
    cmpwi r3, 0x0
    beq lbl_80022E7C
lbl_80022CD4:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0x6
    bl fn_800163E4
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80022D84
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
    bl fn_80022E90
    b lbl_80022E6C
lbl_80022D84:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80022E18
    lwz r3, 0x14(r31)
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
    bl fn_80023304
    b lbl_80022E6C
lbl_80022E18:
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
    bl fn_80023654
lbl_80022E6C:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80022E7C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80022E90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80022E90() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1e0
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
    bl _savegpr_28
    mr r30, r3
    lis r0, 0x4330
    stw r0, 0x158(r1)
    lis r0, 0x4330
    stw r0, 0x160(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r28, r3
    addi r3, r1, 0xf8
    mr r4, r28
    bl fn_8017B004
    addi r3, r1, 0xb8
    bl GXGetProjectionv
    addi r3, r1, 0x78
    bl GXGetViewportv
    addi r3, r1, 0x128
    mr r4, r28
    bl fn_8017B074
    addi r3, r1, 0x5c
    li r4, 0x2
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x40
    addi r5, r1, 0x20
    bl fn_80023908
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3c
    bl GXBegin
    li r31, 0x0
    li r29, 0x0
    lis r3, lbl_803C22B0@ha
    addi r28, r3, lbl_803C22B0@l
    lfd f28, lbl_8049E750
    la r3, lbl_8049E758
    lfs f29, 0x1c(r3)
    lfd f30, lbl_8049E748
    lfs f31, 0x18(r3)
lbl_80022F6C:
    cmpwi r31, 0x0
    bne lbl_80022F98
    addi r3, r1, 0x68
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x1b0
    add r5, r30, r29
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
    b lbl_80022FB8
lbl_80022F98:
    addi r3, r1, 0x68
    add r4, r30, r29
    addi r4, r4, 0x1b0
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
lbl_80022FB8:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x68
    mr r4, r3
    addi r5, r1, 0x5c
    bl fn_8001F9C8
    addi r3, r1, 0x68
    mr r4, r3
    xoris r0, r31, 0x8000
    stw r0, 0x15c(r1)
    lfd f0, 0x158(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x340(r30)
    lfs f1, 0x33c(r30)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x50
    li r4, 0x3
    addi r5, r1, 0x128
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x50
    add r5, r30, r29
    addi r5, r5, 0x1b0
    addi r6, r1, 0x40
    addi r7, r1, 0x30
    bl fn_80023A8C
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x1b0
    addi r5, r1, 0x68
    bl fn_80018B00
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x180(r1)
    lwz r0, 0x184(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
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
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8002312C
    lwz r3, 0x54(r28)
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
    bl fn_80023E08
    b lbl_80023164
lbl_8002312C:
    lwz r3, 0x54(r28)
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
    bl fn_80023E08
lbl_80023164:
    addi r3, r1, 0x50
    add r4, r30, r29
    addi r4, r4, 0x1b0
    addi r5, r1, 0x68
    bl fn_8001B8B8
    lfs f1, 0x50(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x58(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x168(r1)
    lwz r0, 0x16c(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
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
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_8002325C
    lwz r3, 0x54(r28)
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
    bl fn_80023E08
    b lbl_80023294
lbl_8002325C:
    lwz r3, 0x54(r28)
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
    bl fn_80023E08
lbl_80023294:
    addi r3, r1, 0x40
    mr r4, r3
    addi r5, r1, 0x20
    bl fn_80018AF4
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x1e
    blt lbl_80022F6C
    bl fn_80023E04
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
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80023304
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023304() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x130
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
    subi r11, r12, 0x30
    bl _savegpr_26
    mr r27, r3
    li r28, 0x0
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
    bl fn_80023908
    la r30, lbl_8049E758
    lfs f29, 0x8(r30)
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3c
    bl GXBegin
    li r29, 0x0
    li r26, 0x0
    lfd f30, lbl_8049E748
    lis r31, 0x4330
    lfs f31, 0x18(r30)
lbl_800233A4:
    cmpwi r29, 0x0
    bne lbl_800233D0
    addi r3, r1, 0x58
    addi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x1b0
    add r5, r27, r26
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
    b lbl_800233F0
lbl_800233D0:
    addi r3, r1, 0x58
    add r4, r27, r26
    addi r4, r4, 0x1b0
    subi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r5, r27, r0
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
lbl_800233F0:
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x58
    mr r4, r3
    addi r5, r1, 0x4c
    bl fn_8001F9C8
    addi r3, r1, 0x58
    mr r4, r3
    xoris r0, r29, 0x8000
    stw r0, 0x9c(r1)
    stw r31, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x340(r27)
    lfs f1, 0x33c(r27)
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
    add r5, r27, r26
    addi r5, r5, 0x1b0
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    bl fn_80023A8C
    addi r3, r1, 0x40
    add r4, r27, r26
    addi r4, r4, 0x1b0
    addi r5, r1, 0x58
    bl fn_80018B00
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
    fmr f1, f29
    lfs f2, 0x8(r30)
    bl fn_80023E08
    addi r3, r1, 0x40
    add r4, r27, r26
    addi r4, r4, 0x1b0
    addi r5, r1, 0x58
    bl fn_8001B8B8
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r27)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
    fmr f1, f29
    lfs f2, lbl_8049E758
    bl fn_80023E08
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x10
    bl fn_80018AF4
    cmpwi r29, 0x0
    bne lbl_800235C0
    add r3, r27, r26
    addi r3, r3, 0x1b0
    addi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x1b0
    bl fn_8001D9AC
    b lbl_800235DC
lbl_800235C0:
    add r3, r27, r26
    addi r3, r3, 0x1b0
    subi r0, r29, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    addi r4, r4, 0x1b0
    bl fn_8001D9AC
lbl_800235DC:
    cmpwi r28, 0x0
    bne lbl_800235F4
    lfs f0, 0x334(r27)
    fmuls f0, f0, f1
    fadds f29, f29, f0
    b lbl_80023600
lbl_800235F4:
    lfs f0, 0x334(r27)
    fmuls f0, f0, f1
    fsubs f29, f29, f0
lbl_80023600:
    addi r29, r29, 0x1
    addi r26, r26, 0xc
    cmpwi r29, 0x1e
    blt lbl_800233A4
    bl fn_80023E04
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
    subi r11, r10, 0x30
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80023654
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023654() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x110
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_28
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x68
    bl fn_8017B074
    addi r3, r1, 0x4c
    li r4, 0x2
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    bl fn_80023908
    li r3, 0x98
    li r4, 0x0
    li r5, 0x3c
    bl GXBegin
    li r31, 0x0
    li r29, 0x0
    lfd f30, lbl_8049E748
    lis r28, 0x4330
    la r3, lbl_8049E758
    lfs f31, 0x18(r3)
lbl_800236E4:
    cmpwi r31, 0x0
    bne lbl_80023710
    addi r3, r1, 0x58
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    addi r4, r4, 0x1b0
    add r5, r30, r29
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
    b lbl_80023730
lbl_80023710:
    addi r3, r1, 0x58
    add r4, r30, r29
    addi r4, r4, 0x1b0
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r5, r30, r0
    addi r5, r5, 0x1b0
    bl fn_8001B8B8
lbl_80023730:
    addi r3, r1, 0x58
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x58
    mr r4, r3
    addi r5, r1, 0x4c
    bl fn_8001F9C8
    addi r3, r1, 0x58
    mr r4, r3
    xoris r0, r31, 0x8000
    stw r0, 0x9c(r1)
    stw r28, 0x98(r1)
    lfd f0, 0x98(r1)
    fsubs f0, f0, f30
    fdivs f2, f0, f31
    lfs f0, 0x340(r30)
    lfs f1, 0x33c(r30)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018B08
    addi r3, r1, 0x40
    li r4, 0x3
    addi r5, r1, 0x68
    bl fn_80173580
    mr r3, r30
    addi r4, r1, 0x40
    add r5, r30, r29
    addi r5, r5, 0x1b0
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    bl fn_80023A8C
    addi r3, r1, 0x40
    add r4, r30, r29
    addi r4, r4, 0x1b0
    addi r5, r1, 0x58
    bl fn_80018B00
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
    addi r3, r1, 0x40
    add r4, r30, r29
    addi r4, r4, 0x1b0
    addi r5, r1, 0x58
    bl fn_8001B8B8
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    bl fn_80023E40
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
    lfs f0, 0x2c(r30)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r6, r0, 24
    bl fn_80023E18
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x10
    bl fn_80018AF4
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x1e
    blt lbl_800236E4
    bl fn_80023E04
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80023908
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023908() {
    nofralloc
    stwu r1, -0x40(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lwz r0, 0x350(r3)
    srwi r0, r0, 24
    lfd f3, lbl_8049E750
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    stfs f1, 0x0(r4)
    lwz r0, 0x350(r3)
    extrwi r0, r0, 8, 8
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    stfs f0, 0x4(r4)
    lwz r0, 0x350(r3)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    stfs f0, 0x8(r4)
    lwz r0, 0x350(r3)
    clrlwi r0, r0, 24
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    stfs f0, 0xc(r4)
    lwz r0, 0x354(r3)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    li r6, 0x1e
    divw r0, r0, r6
    lfd f2, lbl_8049E748
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x0(r5)
    lwz r0, 0x354(r3)
    extrwi r0, r0, 8, 8
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0x4(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x4(r5)
    lwz r0, 0x354(r3)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0x8(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x8(r5)
    lwz r0, 0x354(r3)
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f3
    lfs f0, 0xc(r4)
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    divw r0, r0, r6
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0xc(r5)
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80023A8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023A8C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r28, r3
    mr r8, r4
    mr r29, r6
    mr r30, r7
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80023BC0
    addi r3, r1, 0x8
    mr r4, r5
    mr r5, r8
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    la r31, lbl_8049E758
    lfs f2, 0x20(r31)
    lfs f0, 0x8(r1)
    fmuls f1, f2, f0
    lfs f0, 0x10(r1)
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018C2C
    bl fn_80018BD4
    lfs f2, 0x24(r31)
    fmuls f1, f2, f1
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    xori r0, r0, 0xff
    lfd f1, lbl_8049E748
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
    ble lbl_80023B4C
    stfs f2, 0x0(r30)
lbl_80023B4C:
    lfs f0, 0x4(r29)
    fadds f2, f0, f1
    stfs f2, 0x4(r30)
    la r3, lbl_8049E758
    lfs f0, 0x24(r3)
    fcmpo cr0, f2, f0
    ble lbl_80023B6C
    stfs f0, 0x4(r30)
lbl_80023B6C:
    lfs f0, 0x8(r29)
    fadds f2, f0, f1
    stfs f2, 0x8(r30)
    la r3, lbl_8049E758
    lfs f0, 0x24(r3)
    fcmpo cr0, f2, f0
    ble lbl_80023B8C
    stfs f0, 0x8(r30)
lbl_80023B8C:
    lfs f0, 0xc(r29)
    fadds f1, f0, f1
    stfs f1, 0xc(r30)
    la r3, lbl_8049E758
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_80023BAC
    stfs f0, 0xc(r30)
lbl_80023BAC:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80023BE8
    b lbl_80023BE8
lbl_80023BC0:
    lfs f0, 0x0(r6)
    stfs f0, 0x0(r7)
    lfs f0, 0x4(r6)
    stfs f0, 0x4(r7)
    lfs f0, 0x8(r6)
    stfs f0, 0x8(r7)
    lfs f1, 0xc(r6)
    lfs f0, 0x2c(r3)
    fmuls f0, f1, f0
    stfs f0, 0xc(r7)
lbl_80023BE8:
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80023C00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023C00() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    li r8, 0x0
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    bne lbl_80023C2C
    li r3, 0x0
    b lbl_80023DF0
lbl_80023C2C:
    lwz r7, 0x18(r4)
    cmplwi r7, 0xb
    bne lbl_80023D00
    lwz r5, 0x0(r3)
    rlwinm r6, r5, 0, 11, 11
    cmpwi r6, 0x0
    beq lbl_80023C54
    rlwinm r0, r5, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_80023D00
lbl_80023C54:
    cmpwi r6, 0x0
    beq lbl_80023C70
    mr r3, r4
    li r4, 0xc
    bl fn_8005E564
    mr r8, r3
    b lbl_80023C8C
lbl_80023C70:
    rlwinm r0, r5, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_80023C8C
    mr r3, r4
    li r4, 0xd
    bl fn_8005E564
    mr r8, r3
lbl_80023C8C:
    cmpwi r8, 0x0
    bne lbl_80023C98
    li r31, 0x0
lbl_80023C98:
    cmpwi r8, 0x0
    beq lbl_80023CB4
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80023CB4
    li r31, 0x0
lbl_80023CB4:
    cmpwi r8, 0x0
    beq lbl_80023CE0
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80023CE0
    lwz r0, 0x58(r8)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80023CE0
    li r31, 0x0
lbl_80023CE0:
    cmpwi r8, 0x0
    beq lbl_80023DEC
    mr r3, r8
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_80023DEC
    li r31, 0x0
    b lbl_80023DEC
lbl_80023D00:
    cmplwi r7, 0x2c
    bne lbl_80023DD0
    lwz r3, 0x0(r3)
    rlwinm r5, r3, 0, 1, 1
    cmpwi r5, 0x0
    beq lbl_80023D24
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_80023DD0
lbl_80023D24:
    cmpwi r5, 0x0
    beq lbl_80023D40
    mr r3, r4
    li r4, 0x2d
    bl fn_8005E564
    mr r8, r3
    b lbl_80023D5C
lbl_80023D40:
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80023D5C
    mr r3, r4
    li r4, 0x2e
    bl fn_8005E564
    mr r8, r3
lbl_80023D5C:
    cmpwi r8, 0x0
    bne lbl_80023D68
    li r31, 0x0
lbl_80023D68:
    cmpwi r8, 0x0
    beq lbl_80023D84
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80023D84
    li r31, 0x0
lbl_80023D84:
    cmpwi r8, 0x0
    beq lbl_80023DB0
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80023DB0
    lwz r0, 0x58(r8)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80023DB0
    li r31, 0x0
lbl_80023DB0:
    cmpwi r8, 0x0
    beq lbl_80023DEC
    mr r3, r8
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_80023DEC
    li r31, 0x0
    b lbl_80023DEC
lbl_80023DD0:
    lwz r3, 0x3908(r4)
    lwz r3, 0x8(r3)
    b lbl_80023DE4
lbl_80023DDC:
    li r31, 0x0
    lwz r3, 0x8(r3)
lbl_80023DE4:
    cmpwi r3, 0x0
    bne lbl_80023DDC
lbl_80023DEC:
    mr r3, r31
lbl_80023DF0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80023E04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023E04() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80023E08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023E08() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80023E18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023E18() {
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
// fn_80023E40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80023E40() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

