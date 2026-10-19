#include "types.h"

// Translation unit: src/unk_8004ADC4.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern "C" float lbl_8049D674;
extern "C" float lbl_8049D6B0;
extern "C" float lbl_8049EB60;
extern "C" float lbl_8049EB68;
extern "C" float lbl_8049EB70;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_803C1A40[];

// Forward declarations
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void fn_800163E4();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80016B5C();
extern "C" void fn_80016CAC();
extern "C" void fn_80018AF4();
extern "C" void fn_80018B00();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018BD4();
extern "C" void fn_80018C2C();
extern "C" void fn_80019D1C();
extern "C" void fn_80019E14();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001D9AC();
extern "C" void fn_8001F9C8();
extern "C" void fn_8004ADC4();
extern "C" void fn_8004AF98();
extern "C" void fn_8004AF9C();
extern "C" void fn_8004B2C0();
extern "C" void fn_8004B2C4();
extern "C" void fn_8004B554();
extern "C" void fn_8004B558();
extern "C" void fn_8004BB9C();
extern "C" void fn_8004BBA0();
extern "C" void fn_8004BEE8();
extern "C" void fn_8004C048();
extern "C" void fn_8004C17C();
extern "C" void fn_8004C180();
extern "C" void fn_8004C190();
extern "C" void fn_8004C1B8();
extern "C" void fn_8005E564();
extern "C" void fn_8005E7D4();
extern "C" void fn_800609D8();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80173580();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017B074();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXBegin();
extern "C" void GXLoadTexObj();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_8004ADC4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004ADC4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r24, r3
    mr r23, r4
    mr r30, r5
    li r3, 0x12
    lis r4, fn_8004AF9C@ha
    addi r4, r4, fn_8004AF9C@l
    lwz r5, lbl_8049D674
    bl fn_80177280
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8004AE14
    li r3, 0x0
    b lbl_8004AF74
lbl_8004AE14:
    li r4, 0x0
    li r5, 0x1e28
    bl memset
    cmpwi r24, 0x0
    beq lbl_8004AE2C
    stw r24, 0xc(r31)
lbl_8004AE2C:
    lwz r0, 0x0(r30)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x8(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8004AECC
    li r24, 0x0
    li r29, 0x0
    li r28, 0x0
    li r27, 0x0
    lfs f31, lbl_8049EB70
    b lbl_8004AEC0
lbl_8004AE64:
    add r25, r30, r29
    lwz r4, 0x3c(r25)
    cmpwi r4, 0x0
    blt lbl_8004AECC
    add r26, r31, r27
    mr r3, r23
    bl fn_80019E14
    stw r3, 0x20(r26)
    add r3, r31, r28
    addi r3, r3, 0x1d6c
    lfs f0, 0x40(r25)
    fmuls f1, f31, f0
    lfs f0, 0x44(r25)
    fmuls f2, f31, f0
    lfs f0, 0x48(r25)
    fmuls f3, f31, f0
    bl fn_80018B0C
    lwz r0, 0x4c(r25)
    stw r0, 0x1df8(r26)
    addi r24, r24, 0x1
    addi r29, r29, 0x14
    addi r28, r28, 0xc
    addi r27, r27, 0x4
lbl_8004AEC0:
    lwz r0, 0x8(r30)
    cmpw r24, r0
    blt lbl_8004AE64
lbl_8004AECC:
    la r3, lbl_8049EB70
    lfs f0, 0x4(r3)
    stfs f0, 0x54(r31)
    lwz r0, 0x10(r30)
    extsh r0, r0
    sth r0, 0x48(r31)
    lwz r0, 0x14(r30)
    extsh r0, r0
    sth r0, 0x4a(r31)
    lwz r0, 0x18(r30)
    stw r0, 0x50(r31)
    lwz r0, 0x38(r30)
    stw r0, 0x4c(r31)
    lfs f0, 0x28(r30)
    stfs f0, 0x1de4(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x1de8(r31)
    lfs f0, 0x30(r30)
    lfs f1, lbl_8049EB70
    fmuls f0, f1, f0
    stfs f0, 0x1dec(r31)
    lfs f0, 0x34(r30)
    fmuls f0, f1, f0
    stfs f0, 0x1df0(r31)
    lfs f0, 0x8(r3)
    stfs f0, 0x1df4(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x1e20(r31)
    lwz r0, 0xc(r30)
    stw r0, 0x1e24(r31)
    li r3, 0x15
    lwz r4, 0x8(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8004AF70
    cmpwi r31, 0x0
    beq lbl_8004AF70
    mr r3, r31
    bl fn_8004AF98
lbl_8004AF70:
    mr r3, r31
lbl_8004AF74:
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
// fn_8004AF98
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AF98() {
    nofralloc
    b fn_8017776C
}

// ----------------------------------------------------------------------------
// fn_8004AF9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004AF9C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_8004B0E8
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8004AFD4
    li r0, 0xf1
    stw r0, 0x4(r3)
    li r3, 0x1
    b lbl_8004B2AC
lbl_8004AFD4:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8004B0E0
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_8004B048
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8004B00C
    cmpwi r0, 0xff
    beq lbl_8004B034
    b lbl_8004B048
lbl_8004B00C:
    bne cr1, lbl_8004B048
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8004B048
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004B2AC
lbl_8004B034:
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004B2AC
lbl_8004B048:
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8004B0E0
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8004B0E0
    lwz r3, 0x28(r4)
    lwz r0, 0x4c(r31)
    cmplw r3, r0
    bne lbl_8004B0E0
    lwz r0, 0x130(r4)
    cmpwi r0, 0x0
    bne lbl_8004B0B8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004B0A0
    cmpwi r0, 0x1
    beq lbl_8004B0AC
    b lbl_8004B0D4
lbl_8004B0A0:
    li r0, 0xf1
    stw r0, 0x4(r31)
    b lbl_8004B0D4
lbl_8004B0AC:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_8004B0D4
lbl_8004B0B8:
    extsh r0, r0
    sth r0, 0x4a(r31)
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    bne lbl_8004B0D4
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_8004B0D4:
    bl fn_8017742C
    li r3, 0x1
    b lbl_8004B2AC
lbl_8004B0E0:
    li r3, 0x0
    b lbl_8004B2AC
lbl_8004B0E8:
    lwz r3, 0xc(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8004B10C
    cmpwi r3, 0x2
    beq lbl_8004B118
    b lbl_8004B120
lbl_8004B10C:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_8004B120
lbl_8004B118:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8004B120:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_8004B134
    cmpwi r0, 0xf0
    bne lbl_8004B150
lbl_8004B134:
    lwz r3, 0xc(r31)
    lwz r4, 0x0(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8004B150
    li r3, 0x0
    b lbl_8004B2AC
lbl_8004B150:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004B180
    cmpwi r0, 0x1
    beq lbl_8004B1AC
    cmpwi r0, 0xef
    beq lbl_8004B1F8
    cmpwi r0, 0xf0
    beq lbl_8004B214
    cmpwi r0, 0xf1
    beq lbl_8004B294
    b lbl_8004B2A8
lbl_8004B180:
    lha r3, 0x48(r31)
    subi r0, r3, 0x1
    sth r0, 0x48(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bgt lbl_8004B1A0
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_8004B1A0:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_8004B2A8
lbl_8004B1AC:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8004B1C4
    mr r3, r31
    bl fn_8004B2C0
lbl_8004B1C4:
    lha r3, 0x4a(r31)
    cmpwi r3, -0x1
    ble lbl_8004B1D8
    subi r0, r3, 0x1
    sth r0, 0x4a(r31)
lbl_8004B1D8:
    lha r0, 0x4a(r31)
    cmpwi r0, 0x0
    bne lbl_8004B1EC
    li r0, 0xef
    stw r0, 0x4(r31)
lbl_8004B1EC:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x1
    beq lbl_8004B2A8
lbl_8004B1F8:
    li r0, 0xf0
    stw r0, 0x4(r31)
    lwz r0, 0x50(r31)
    extsh r0, r0
    sth r0, 0x4a(r31)
    li r0, 0x0
    stw r0, 0x4c(r31)
lbl_8004B214:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8004B22C
    mr r3, r31
    bl fn_8004B2C0
lbl_8004B22C:
    lha r4, 0x4a(r31)
    lfd f2, lbl_8049EB60
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x50(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x54(r31)
    subi r0, r4, 0x1
    sth r0, 0x4a(r31)
    extsh r0, r0
    cmpwi r0, 0x0
    bge lbl_8004B288
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_8004B288:
    lwz r0, 0x4(r31)
    cmpwi r0, 0xf0
    beq lbl_8004B2A8
lbl_8004B294:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_8004AF98
lbl_8004B2A8:
    li r3, 0x0
lbl_8004B2AC:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8004B2C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004B2C0() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004B2C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004B2C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8004B540
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004B300
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_8004B540
lbl_8004B300:
    rlwinm r0, r4, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8004B324
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8004B324
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_8004B540
lbl_8004B324:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8004B348
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8004B540
lbl_8004B348:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8004B374
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8004B374
    mr r3, r31
    bl fn_8004C048
    cmpwi r3, 0x0
    beq lbl_8004B540
lbl_8004B374:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 18, 19
    cmpwi r0, 0x0
    bne lbl_8004B398
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8004B540
lbl_8004B398:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x0(r31)
    li r4, 0x15
    bl fn_800163E4
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8004B448
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
    bl fn_8004B554
    b lbl_8004B530
lbl_8004B448:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8004B4DC
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
    bl fn_8004B558
    b lbl_8004B530
lbl_8004B4DC:
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
    bl fn_8004BB9C
lbl_8004B530:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8004B540:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004B554
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004B554() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004B558
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004B558() {
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
    subi r11, r12, 0x40
    bl _savegpr_24
    mr r26, r3
    lis r0, 0x4330
    stw r0, 0xb0(r1)
    lis r0, 0x4330
    stw r0, 0xb8(r1)
    li r27, 0x0
    li r3, 0x0
    bl fn_80016CAC
    mr r30, r3
    li r29, 0x0
    li r24, 0x0
    li r25, 0x0
    la r3, lbl_8049EB70
    lfd f29, lbl_8049EB60
    lfs f31, 0x4(r3)
    lfs f30, 0xc(r3)
    b lbl_8004B7B8
lbl_8004B5DC:
    cmpwi r29, 0x0
    bne lbl_8004B62C
    addi r3, r1, 0x58
    li r4, 0x3
    add r5, r26, r25
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x4c
    li r4, 0x3
    add r5, r26, r25
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x40
    li r4, 0x3
    addi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r5, 0x20(r5)
    bl fn_80173580
    b lbl_8004B6D0
lbl_8004B62C:
    lwz r3, 0x1e20(r26)
    subi r0, r3, 0x1
    cmpw r29, r0
    bne lbl_8004B684
    addi r3, r1, 0x58
    li r4, 0x3
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x4c
    li r4, 0x3
    add r5, r26, r25
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x40
    li r4, 0x3
    add r5, r26, r25
    lwz r5, 0x20(r5)
    bl fn_80173580
    b lbl_8004B6D0
lbl_8004B684:
    addi r3, r1, 0x58
    li r4, 0x3
    subi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x4c
    li r4, 0x3
    add r5, r26, r25
    lwz r5, 0x20(r5)
    bl fn_80173580
    addi r3, r1, 0x40
    li r4, 0x3
    addi r0, r29, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r5, 0x20(r5)
    bl fn_80173580
lbl_8004B6D0:
    li r28, 0x0
    li r3, 0x0
    add r5, r26, r24
    b lbl_8004B7A0
lbl_8004B6E0:
    lwz r0, 0x1e24(r26)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f29
    fdivs f1, f31, f0
    xoris r0, r28, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f29
    fmuls f2, f1, f0
    fsubs f1, f31, f2
    fmuls f0, f30, f1
    fmuls f3, f0, f1
    fmuls f0, f1, f2
    fadds f4, f30, f0
    fmuls f0, f30, f2
    fmuls f5, f0, f2
    lfs f0, 0x40(r1)
    fmuls f2, f0, f5
    lfs f0, 0x58(r1)
    fmuls f1, f0, f3
    lfs f0, 0x4c(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    add r4, r5, r3
    stfs f0, 0xf58(r4)
    lfs f0, 0x44(r1)
    fmuls f2, f0, f5
    lfs f0, 0x5c(r1)
    fmuls f1, f0, f3
    lfs f0, 0x50(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xf5c(r4)
    lfs f0, 0x48(r1)
    fmuls f2, f0, f5
    lfs f0, 0x60(r1)
    fmuls f1, f0, f3
    lfs f0, 0x54(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0xf60(r4)
    addi r28, r28, 0x1
    addi r3, r3, 0xc
lbl_8004B7A0:
    lwz r0, 0x1e24(r26)
    cmpw r28, r0
    blt lbl_8004B6E0
    addi r29, r29, 0x1
    addi r24, r24, 0x168
    addi r25, r25, 0x4
lbl_8004B7B8:
    lwz r0, 0x1e20(r26)
    cmpw r29, r0
    blt lbl_8004B5DC
    addi r3, r1, 0x80
    mr r4, r30
    bl fn_8017B074
    addi r3, r1, 0x64
    li r4, 0x2
    addi r5, r1, 0x80
    bl fn_80173580
    mr r3, r26
    addi r4, r1, 0x30
    addi r5, r1, 0x10
    bl fn_8004BBA0
    la r30, lbl_8049EB70
    lfs f29, 0x8(r30)
    lwz r3, 0x1e20(r26)
    lwz r0, 0x1e24(r26)
    mullw r0, r3, r0
    slwi r0, r0, 1
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r0, 16
    bl GXBegin
    li r29, 0x0
    li r25, 0x0
    fmr f30, f29
    lfd f31, lbl_8049EB60
    lfs f28, 0x10(r30)
    b lbl_8004BB40
lbl_8004B830:
    li r28, 0x0
    li r24, 0x0
    add r31, r26, r25
    b lbl_8004BB2C
lbl_8004B840:
    cmpwi r28, 0x0
    bne lbl_8004B870
    addi r3, r1, 0x70
    add r5, r26, r25
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    addi r4, r4, 0xf58
    add r5, r5, r24
    addi r5, r5, 0xf58
    bl fn_8001B8B8
    b lbl_8004B894
lbl_8004B870:
    addi r3, r1, 0x70
    add r5, r26, r25
    add r4, r5, r24
    addi r4, r4, 0xf58
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r5, r5, r0
    addi r5, r5, 0xf58
    bl fn_8001B8B8
lbl_8004B894:
    lfs f0, 0x70(r1)
    fcmpu cr0, f30, f0
    bne lbl_8004B8B8
    lfs f0, 0x74(r1)
    fcmpu cr0, f30, f0
    bne lbl_8004B8B8
    lfs f0, 0x78(r1)
    fcmpu cr0, f30, f0
    beq lbl_8004B930
lbl_8004B8B8:
    addi r3, r1, 0x70
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x70
    mr r4, r3
    addi r5, r1, 0x64
    bl fn_8001F9C8
    addi r3, r1, 0x70
    mr r4, r3
    lfs f0, 0x1df0(r26)
    lfs f3, 0x1dec(r26)
    fsubs f2, f0, f3
    lwz r5, 0x1e24(r26)
    mullw r0, r29, r5
    add r0, r28, r0
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f1, f0, f31
    lwz r0, 0x1e20(r26)
    mullw r5, r0, r5
    subi r0, r5, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fadds f1, f3, f0
    bl fn_80018B08
lbl_8004B930:
    addi r3, r1, 0x58
    li r4, 0x3
    addi r5, r1, 0x80
    bl fn_80173580
    mr r3, r26
    addi r4, r1, 0x58
    add r5, r31, r24
    addi r5, r5, 0xf58
    addi r6, r1, 0x30
    addi r7, r1, 0x20
    bl fn_8004BEE8
    addi r3, r1, 0x58
    add r4, r31, r24
    addi r4, r4, 0xf58
    addi r5, r1, 0x70
    bl fn_80018B00
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x60(r1)
    bl fn_8004C1B8
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
    lfs f0, 0x54(r26)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xd8(r1)
    lwz r0, 0xdc(r1)
    clrlwi r6, r0, 24
    bl fn_8004C190
    fmr f1, f29
    lfs f2, 0x8(r30)
    bl fn_8004C180
    addi r3, r1, 0x58
    add r4, r31, r24
    addi r4, r4, 0xf58
    addi r5, r1, 0x70
    bl fn_8001B8B8
    lfs f1, 0x58(r1)
    lfs f2, 0x5c(r1)
    lfs f3, 0x60(r1)
    bl fn_8004C1B8
    lfs f0, 0x20(r1)
    fctiwz f0, f0
    stfd f0, 0xe0(r1)
    lwz r0, 0xe4(r1)
    clrlwi r3, r0, 24
    lfs f0, 0x24(r1)
    fctiwz f0, f0
    stfd f0, 0xe8(r1)
    lwz r0, 0xec(r1)
    clrlwi r4, r0, 24
    lfs f0, 0x28(r1)
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r0, 0xf4(r1)
    clrlwi r5, r0, 24
    lfs f1, 0x2c(r1)
    lfs f0, 0x54(r26)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r0, 0xfc(r1)
    clrlwi r6, r0, 24
    bl fn_8004C190
    fmr f1, f29
    lfs f2, 0x4(r30)
    bl fn_8004C180
    addi r3, r1, 0x30
    mr r4, r3
    addi r5, r1, 0x10
    bl fn_80018AF4
    lwz r0, 0x0(r26)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8004BAB4
    lwz r0, 0x1e20(r26)
    xoris r0, r0, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f31
    fdivs f0, f28, f0
    fadds f29, f29, f0
    b lbl_8004BB24
lbl_8004BAB4:
    cmpwi r28, 0x0
    bne lbl_8004BAE0
    add r4, r26, r25
    add r3, r4, r24
    addi r3, r3, 0xf58
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    addi r4, r4, 0xf58
    bl fn_8001D9AC
    b lbl_8004BB00
lbl_8004BAE0:
    add r4, r26, r25
    add r3, r4, r24
    addi r3, r3, 0xf58
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    addi r4, r4, 0xf58
    bl fn_8001D9AC
lbl_8004BB00:
    cmpwi r27, 0x0
    bne lbl_8004BB18
    lfs f0, 0x1de4(r26)
    fmuls f0, f0, f1
    fadds f29, f29, f0
    b lbl_8004BB24
lbl_8004BB18:
    lfs f0, 0x1de4(r26)
    fmuls f0, f0, f1
    fsubs f29, f29, f0
lbl_8004BB24:
    addi r28, r28, 0x1
    addi r24, r24, 0xc
lbl_8004BB2C:
    lwz r0, 0x1e24(r26)
    cmpw r28, r0
    blt lbl_8004B840
    addi r29, r29, 0x1
    addi r25, r25, 0x168
lbl_8004BB40:
    lwz r0, 0x1e20(r26)
    cmpw r29, r0
    blt lbl_8004B830
    bl fn_8004C17C
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004BB9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004BB9C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004BBA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004BBA0() {
    nofralloc
    stwu r1, -0x40(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    lfd f1, lbl_8049EB68
    lfd f0, lbl_8049EB60
    b lbl_8004BED4
lbl_8004BBC8:
    cmpwi r6, 0x0
    bne lbl_8004BD50
    add r8, r3, r7
    lwz r0, 0x1df8(r8)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    stfs f3, 0x0(r4)
    lwz r0, 0x1df8(r8)
    extrwi r0, r0, 8, 8
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f1
    stfs f2, 0x4(r4)
    lwz r0, 0x1df8(r8)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f1
    stfs f2, 0x8(r4)
    lwz r0, 0x1df8(r8)
    clrlwi r0, r0, 24
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f1
    stfs f2, 0xc(r4)
    addi r0, r6, 0x1
    slwi r0, r0, 2
    add r9, r3, r0
    lwz r0, 0x1df8(r9)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f1
    fsubs f2, f2, f3
    fctiwz f2, f2
    stfd f2, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x0(r5)
    lwz r0, 0x1df8(r9)
    extrwi r0, r0, 8, 8
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0x4(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x20(r1)
    lwz r8, 0x24(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x4(r5)
    lwz r0, 0x1df8(r9)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0x8(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x28(r1)
    lwz r8, 0x2c(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x8(r5)
    lwz r0, 0x1df8(r9)
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0xc(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0xc(r5)
    b lbl_8004BECC
lbl_8004BD50:
    subi r0, r6, 0x1
    slwi r0, r0, 2
    add r8, r3, r0
    lwz r0, 0x1df8(r8)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    stfs f3, 0x0(r4)
    lwz r0, 0x1df8(r8)
    extrwi r0, r0, 8, 8
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f1
    stfs f2, 0x4(r4)
    lwz r0, 0x1df8(r8)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f1
    stfs f2, 0x8(r4)
    lwz r0, 0x1df8(r8)
    clrlwi r0, r0, 24
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f1
    stfs f2, 0xc(r4)
    add r9, r3, r7
    lwz r0, 0x1df8(r9)
    srwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f1
    fsubs f2, f2, f3
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r8, 0x34(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x0(r5)
    lwz r0, 0x1df8(r9)
    extrwi r0, r0, 8, 8
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0x4(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x28(r1)
    lwz r8, 0x2c(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x4(r5)
    lwz r0, 0x1df8(r9)
    extrwi r0, r0, 8, 16
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0x8(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x20(r1)
    lwz r8, 0x24(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0x8(r5)
    lwz r0, 0x1df8(r9)
    clrlwi r0, r0, 24
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f3, f2, f1
    lfs f2, 0xc(r4)
    fsubs f2, f3, f2
    fctiwz f2, f2
    stfd f2, 0x18(r1)
    lwz r8, 0x1c(r1)
    lwz r0, 0x1e24(r3)
    divw r0, r8, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f0
    stfs f2, 0xc(r5)
lbl_8004BECC:
    addi r6, r6, 0x1
    addi r7, r7, 0x4
lbl_8004BED4:
    lwz r0, 0x1e20(r3)
    cmpw r6, r0
    blt lbl_8004BBC8
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8004BEE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004BEE8() {
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
    beq lbl_8004C008
    addi r3, r1, 0x8
    mr r4, r5
    mr r5, r8
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    la r31, lbl_8049EB70
    lfs f2, 0x14(r31)
    lfs f0, 0x8(r1)
    fmuls f1, f2, f0
    lfs f0, 0x10(r1)
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80018C2C
    bl fn_80018BD4
    lfs f2, 0x18(r31)
    fmuls f1, f2, f1
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    xori r0, r0, 0xff
    lfd f1, lbl_8049EB60
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
    ble lbl_8004BFA4
    stfs f2, 0x0(r30)
lbl_8004BFA4:
    lfs f0, 0x4(r29)
    fadds f2, f0, f1
    stfs f2, 0x4(r30)
    la r3, lbl_8049EB70
    lfs f0, 0x18(r3)
    fcmpo cr0, f2, f0
    ble lbl_8004BFC4
    stfs f0, 0x4(r30)
lbl_8004BFC4:
    lfs f0, 0x8(r29)
    fadds f2, f0, f1
    stfs f2, 0x8(r30)
    la r3, lbl_8049EB70
    lfs f0, 0x18(r3)
    fcmpo cr0, f2, f0
    ble lbl_8004BFE4
    stfs f0, 0x8(r30)
lbl_8004BFE4:
    lfs f0, 0xc(r29)
    fadds f1, f0, f1
    stfs f1, 0xc(r30)
    la r3, lbl_8049EB70
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    ble lbl_8004C030
    stfs f0, 0xc(r30)
    b lbl_8004C030
lbl_8004C008:
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
lbl_8004C030:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C048
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C048() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    li r6, 0x0
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    bne lbl_8004C074
    li r3, 0x0
    b lbl_8004C168
lbl_8004C074:
    lwz r0, 0x18(r4)
    cmplwi r0, 0xb
    bne lbl_8004C148
    lwz r3, 0x0(r3)
    rlwinm r5, r3, 0, 11, 11
    cmpwi r5, 0x0
    beq lbl_8004C09C
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    bne lbl_8004C148
lbl_8004C09C:
    cmpwi r5, 0x0
    beq lbl_8004C0B8
    mr r3, r4
    li r4, 0xc
    bl fn_8005E564
    mr r6, r3
    b lbl_8004C0D4
lbl_8004C0B8:
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8004C0D4
    mr r3, r4
    li r4, 0xd
    bl fn_8005E564
    mr r6, r3
lbl_8004C0D4:
    cmpwi r6, 0x0
    bne lbl_8004C0E0
    li r31, 0x0
lbl_8004C0E0:
    cmpwi r6, 0x0
    beq lbl_8004C0FC
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8004C0FC
    li r31, 0x0
lbl_8004C0FC:
    cmpwi r6, 0x0
    beq lbl_8004C128
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8004C128
    lwz r0, 0x58(r6)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8004C128
    li r31, 0x0
lbl_8004C128:
    cmpwi r6, 0x0
    beq lbl_8004C164
    mr r3, r6
    bl fn_800609D8
    cmpwi r3, 0x0
    bne lbl_8004C164
    li r31, 0x0
    b lbl_8004C164
lbl_8004C148:
    lwz r3, 0x3908(r4)
    lwz r3, 0x8(r3)
    b lbl_8004C15C
lbl_8004C154:
    li r31, 0x0
    lwz r3, 0x8(r3)
lbl_8004C15C:
    cmpwi r3, 0x0
    bne lbl_8004C154
lbl_8004C164:
    mr r3, r31
lbl_8004C168:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C17C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C17C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C180
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C180() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8004C190
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C190() {
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
// fn_8004C1B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004C1B8() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

