#include "types.h"

// Translation unit: src/revolution/si/unk_803260CC.cpp
// Total functions: 19

// Small Data symbols (@sda21)
extern float lbl_8049D398;
extern float lbl_8049D3A0;
extern float lbl_8049E420;
extern float lbl_8049E424;
extern float lbl_8049E428;
extern float lbl_8049E42C;
extern float lbl_8049E430;
extern float lbl_8049E440;
extern float lbl_8049E460;
extern float lbl_8049E480;
extern float lbl_8049E484;
extern float lbl_8049E488;
extern float lbl_8049E48C;
extern float lbl_8049E4A0;
extern float lbl_8049E4C0;
extern float lbl_8049E4E0;
extern float lbl_8049E500;
extern float lbl_8049E520;
extern float lbl_8049E540;
extern float lbl_804A27C8;
extern float lbl_804A27D0;
extern float lbl_804A27D4;
extern float lbl_804A27D8;
extern float lbl_804A27DC;
extern float lbl_804A27E0;

// Global data symbols (@ha/@l)
extern u8 lbl_80342130[];
extern u8 lbl_80342180[];
extern u8 lbl_8038DC10[];
extern u8 lbl_8046F200[];
extern u8 lbl_8046F218[];
extern u8 lbl_8046F240[];
extern u8 lbl_8046F340[];

// Forward declarations
extern void DCZeroRange();
extern void OSPanic();
extern void OSRegisterVersion();
extern void PPCMfhid2();
extern void _restgpr_14();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_80315344();
extern void fn_803153F0();
extern void fn_803260CC();
extern void fn_8032638C();
extern void fn_803264C0();
extern void fn_803265D4();
extern void fn_8032696C();
extern void fn_80326D30();
extern void fn_80326F78();
extern void fn_8032707C();
extern void fn_803272C8();
extern void fn_80327754();
extern void fn_80327BE8();
extern void fn_80327E38();
extern void fn_80328094();
extern void fn_803286F0();
extern void fn_80328D78();
extern void fn_80329400();
extern void fn_8032949C();
extern void fn_803299FC();
extern void fn_80329B10();

// ----------------------------------------------------------------------------
// fn_803260CC
// ----------------------------------------------------------------------------
asm void fn_803260CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    beq lbl_80326338
    cmpwi r4, 0x0
    beq lbl_80326340
    cmpwi r5, 0x0
    beq lbl_80326340
    cmpwi r6, 0x0
    beq lbl_80326340
    cmpwi r7, 0x0
    beq lbl_80326348
    bl PPCMfhid2
    rlwinm. r0, r3, 0, 3, 3
    beq lbl_80326368
    lwz r0, lbl_8049E420
    cmpwi r0, 0x0
    beq lbl_80326370
    addi r0, r30, 0x1f
    li r4, 0x6bc
    clrrwi r3, r0, 5
    addi r0, r3, 0x6bc
    stw r3, lbl_8049E424
    stw r0, lbl_8049E428
    bl DCZeroRange
    lwz r3, lbl_8049E424
    li r4, 0x21
    li r0, 0x0
    li r30, 0x0
    stw r4, 0x6a4(r3)
    li r31, 0x1
    lwz r3, lbl_8049E424
    sth r0, 0x698(r3)
    lwz r3, lbl_8049E424
    stw r26, 0x69c(r3)
lbl_80326178:
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xff
    bne lbl_80326358
    b lbl_803261A4
lbl_80326198:
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
lbl_803261A4:
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xff
    beq lbl_80326198
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0xd7
    bgt lbl_803261FC
    cmplwi r0, 0xc4
    bne lbl_803261E4
    bl fn_8032696C
    clrlwi. r0, r3, 24
    bne lbl_80326360
    b lbl_803262D8
lbl_803261E4:
    cmplwi r0, 0xc0
    bne lbl_80326350
    bl fn_8032638C
    clrlwi. r0, r3, 24
    bne lbl_80326360
    b lbl_803262D8
lbl_803261FC:
    cmplwi cr1, r0, 0xd8
    blt cr1, lbl_803262A0
    cmplwi r0, 0xdf
    bgt lbl_803262A0
    cmplwi r0, 0xdd
    bne lbl_80326264
    lwz r3, lbl_8049E424
    stb r31, 0x6a9(r3)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r5, lbl_8049E424
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x6aa(r5)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r3, lbl_8049E424
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    b lbl_803262D8
lbl_80326264:
    cmplwi r0, 0xdb
    bne lbl_8032627C
    bl fn_803265D4
    clrlwi. r0, r3, 24
    bne lbl_80326360
    b lbl_803262D8
lbl_8032627C:
    cmplwi r0, 0xda
    bne lbl_80326298
    bl fn_803264C0
    clrlwi. r0, r3, 24
    bne lbl_80326360
    li r30, 0x1
    b lbl_803262D8
lbl_80326298:
    beq cr1, lbl_803262D8
    b lbl_80326350
lbl_803262A0:
    cmplwi r0, 0xe0
    blt lbl_803262D8
    blt lbl_803262B4
    cmplwi r0, 0xef
    ble lbl_803262BC
lbl_803262B4:
    cmplwi r0, 0xfe
    bne lbl_80326350
lbl_803262BC:
    lwz r4, lbl_8049E424
    lwz r5, 0x69c(r4)
    lbz r3, 0x0(r5)
    lbz r0, 0x1(r5)
    rlwimi r0, r3, 8, 16, 23
    add r0, r5, r0
    stw r0, 0x69c(r4)
lbl_803262D8:
    cmpwi r30, 0x0
    beq lbl_80326178
    lwz r4, lbl_8049E428
    lis r6, lbl_8046F200@ha
    addi r9, r6, lbl_8046F200@l
    mr r3, r27
    addi r0, r4, 0x1f
    mr r4, r28
    clrrwi r11, r0, 5
    mr r5, r29
    addi r10, r11, 0x80
    stw r11, lbl_8046F200@l(r6)
    addi r8, r11, 0x100
    addi r7, r11, 0x180
    addi r6, r11, 0x200
    addi r0, r11, 0x280
    stw r10, 0x4(r9)
    stw r8, 0x8(r9)
    stw r7, 0xc(r9)
    stw r6, 0x10(r9)
    stw r0, 0x14(r9)
    bl fn_80326F78
    li r3, 0x0
    b lbl_80326374
lbl_80326338:
    li r3, 0x19
    b lbl_80326374
lbl_80326340:
    li r3, 0x1b
    b lbl_80326374
lbl_80326348:
    li r3, 0x1a
    b lbl_80326374
lbl_80326350:
    li r3, 0xb
    b lbl_80326374
lbl_80326358:
    li r3, 0x3
    b lbl_80326374
lbl_80326360:
    clrlwi r3, r3, 24
    b lbl_80326374
lbl_80326368:
    li r3, 0x1c
    b lbl_80326374
lbl_80326370:
    li r3, 0x1d
lbl_80326374:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8032638C
// ----------------------------------------------------------------------------
asm void fn_8032638C() {
    nofralloc
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x8
    beq lbl_803263C0
    li r3, 0xa
    blr
lbl_803263C0:
    lwz r5, lbl_8049E424
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x694(r5)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r5, lbl_8049E424
    lwz r4, 0x69c(r5)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    rlwimi r0, r3, 8, 16, 23
    sth r0, 0x692(r5)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x3
    beq lbl_80326434
    li r3, 0xc
    blr
lbl_80326434:
    li r0, 0x3
    li r7, 0x0
    mtctr r0
lbl_80326440:
    lwz r4, lbl_8049E424
    clrlwi. r0, r7, 24
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r3, 0x0(r3)
    bne lbl_80326474
    cmplwi r3, 0x22
    bne lbl_80326484
lbl_80326474:
    clrlwi. r0, r7, 24
    beq lbl_8032648C
    cmplwi r3, 0x11
    beq lbl_8032648C
lbl_80326484:
    li r3, 0x13
    blr
lbl_8032648C:
    lwz r6, lbl_8049E424
    clrlwi r0, r7, 24
    mulli r0, r0, 0x6
    addi r7, r7, 0x1
    lwz r5, 0x69c(r6)
    lbz r4, 0x0(r5)
    add r3, r6, r0
    addi r0, r5, 0x1
    stb r4, 0x680(r3)
    stw r0, 0x69c(r6)
    bdnz lbl_80326440
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_803264C0
// ----------------------------------------------------------------------------
asm void fn_803264C0() {
    nofralloc
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x2
    stw r0, 0x69c(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x69c(r4)
    addi r0, r3, 0x1
    stw r0, 0x69c(r4)
    lbz r0, 0x0(r3)
    cmplwi r0, 0x3
    beq lbl_803264F4
    li r3, 0xc
    blr
lbl_803264F4:
    li r0, 0x3
    li r8, 0x0
    li r3, 0x1
    mtctr r0
lbl_80326504:
    lwz r5, lbl_8049E424
    clrlwi r0, r8, 24
    mulli r6, r0, 0x6
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lwz r5, lbl_8049E424
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lbz r4, 0x0(r4)
    lwz r0, lbl_8049E424
    srawi r5, r4, 4
    clrlwi r7, r4, 28
    add r4, r0, r6
    stb r5, 0x681(r4)
    slw r0, r3, r5
    lwz r4, lbl_8049E424
    add r4, r4, r6
    stb r7, 0x682(r4)
    lwz r5, lbl_8049E424
    lbz r4, 0x6a8(r5)
    and. r0, r4, r0
    bne lbl_8032656C
    li r3, 0xf
    blr
lbl_8032656C:
    addi r0, r7, 0x1
    slw r0, r3, r0
    and. r0, r4, r0
    bne lbl_80326584
    li r3, 0xf
    blr
lbl_80326584:
    addi r8, r8, 0x1
    bdnz lbl_80326504
    lwz r4, 0x69c(r5)
    li r0, 0x0
    li r3, 0x0
    addi r4, r4, 0x3
    stw r4, 0x69c(r5)
    lwz r5, lbl_8049E424
    lhz r4, 0x692(r5)
    addi r4, r4, 0xf
    srawi r4, r4, 4
    addze r4, r4
    sth r4, 0x696(r5)
    lwz r4, lbl_8049E424
    sth r0, 0x684(r4)
    lwz r4, lbl_8049E424
    sth r0, 0x68a(r4)
    lwz r4, lbl_8049E424
    sth r0, 0x690(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_803265D4
// ----------------------------------------------------------------------------
asm void fn_803265D4() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    addi r11, r1, 0x140
    bl _savegpr_23
    lwz r8, lbl_8049E424
    lis r4, lbl_80342180@ha
    addi r3, r4, lbl_80342180@l
    lis r10, 0x4330
    lwz r6, 0x69c(r8)
    lis r9, lbl_80342130@ha
    stw r10, 0x108(r1)
    addi r9, r9, lbl_80342130@l
    lbz r0, 0x0(r6)
    addi r5, r6, 0x2
    lbz r6, 0x1(r6)
    addi r7, r1, 0x8
    rlwimi r6, r0, 8, 16, 23
    stw r10, 0x110(r1)
    subi r0, r6, 0x2
    lfd f3, lbl_804A27C8
    stw r5, 0x69c(r8)
    clrlwi r11, r0, 16
    lfd f1, lbl_80342180@l(r4)
    li r29, 0x8
    lfd f0, 0x8(r3)
    li r30, 0x8
    lfd f30, 0x10(r3)
    lfd f13, 0x18(r3)
    lfd f11, 0x20(r3)
    lfd f9, 0x28(r3)
    lfd f6, 0x30(r3)
    lfd f4, 0x38(r3)
lbl_80326668:
    lwz r5, lbl_8049E424
    li r31, 0x0
    lwz r4, 0x69c(r5)
    addi r0, r4, 0x1
    stw r0, 0x69c(r5)
    lbz r12, 0x0(r4)
    mtctr r30
lbl_80326684:
    lwz r6, lbl_8049E424
    clrlwi r0, r31, 16
    add r10, r9, r0
    lbzx r0, r9, r0
    lwz r23, 0x69c(r6)
    addi r31, r31, 0x8
    slwi r8, r0, 2
    lbz r27, 0x6(r10)
    addi r5, r23, 0x1
    lbz r4, 0x1(r10)
    stw r5, 0x69c(r6)
    slwi r27, r27, 2
    slwi r6, r4, 2
    lbz r0, 0x2(r10)
    lwz r24, lbl_8049E424
    lbz r4, 0x0(r23)
    slwi r5, r0, 2
    lwz r23, 0x69c(r24)
    stw r4, 0x10c(r1)
    addi r4, r23, 0x1
    lbz r0, 0x3(r10)
    stw r4, 0x69c(r24)
    slwi r4, r0, 2
    lfd f2, 0x108(r1)
    lwz r25, lbl_8049E424
    lbz r0, 0x0(r23)
    fsubs f8, f2, f3
    lwz r24, 0x69c(r25)
    stw r0, 0x114(r1)
    addi r23, r24, 0x1
    lbz r0, 0x4(r10)
    stw r23, 0x69c(r25)
    lfd f2, 0x110(r1)
    slwi r0, r0, 2
    lwz r26, lbl_8049E424
    lbz r23, 0x0(r24)
    fsubs f10, f2, f3
    lwz r24, 0x69c(r26)
    stw r23, 0x10c(r1)
    addi r23, r24, 0x1
    lbz r25, 0x5(r10)
    stw r23, 0x69c(r26)
    lfd f2, 0x108(r1)
    slwi r25, r25, 2
    lwz r26, lbl_8049E424
    lbz r23, 0x0(r24)
    fsubs f7, f2, f3
    lwz r24, 0x69c(r26)
    stw r23, 0x114(r1)
    addi r23, r24, 0x1
    stw r23, 0x69c(r26)
    lfd f2, 0x110(r1)
    lwz r28, lbl_8049E424
    stfsx f8, r7, r8
    fsubs f5, f2, f3
    lwz r26, 0x69c(r28)
    lbz r23, 0x0(r24)
    addi r24, r26, 0x1
    lbz r8, 0x7(r10)
    stw r24, 0x69c(r28)
    slwi r8, r8, 2
    lwz r28, lbl_8049E424
    lbz r24, 0x0(r26)
    lwz r26, 0x69c(r28)
    stw r23, 0x10c(r1)
    addi r10, r26, 0x1
    stw r10, 0x69c(r28)
    lfd f2, 0x108(r1)
    lwz r28, lbl_8049E424
    lbz r26, 0x0(r26)
    fsubs f8, f2, f3
    lwz r10, 0x69c(r28)
    stfsx f10, r7, r6
    addi r6, r10, 0x1
    stw r24, 0x114(r1)
    stfsx f7, r7, r5
    lfd f2, 0x110(r1)
    stw r6, 0x69c(r28)
    fsubs f7, f2, f3
    lbz r5, 0x0(r10)
    stw r26, 0x10c(r1)
    stfsx f5, r7, r4
    lfd f2, 0x108(r1)
    stfsx f8, r7, r0
    fsubs f5, f2, f3
    stw r5, 0x114(r1)
    lfd f2, 0x110(r1)
    stfsx f7, r7, r25
    fsubs f2, f2, f3
    stfsx f5, r7, r27
    stfsx f2, r7, r8
    bdnz lbl_80326684
    clrlslwi r23, r12, 16, 8
    li r4, 0x0
    li r5, 0x0
    mtctr r29
lbl_80326804:
    clrlslwi r8, r4, 16, 2
    clrlslwi r0, r5, 16, 3
    lfdx f2, r3, r0
    addi r4, r4, 0x1
    lfsx f7, r7, r8
    clrlslwi r10, r4, 16, 2
    lfsx f5, r7, r10
    addi r4, r4, 0x1
    fmul f10, f7, f2
    clrlslwi r12, r4, 16, 2
    lfsx f7, r7, r12
    addi r4, r4, 0x1
    clrlslwi r24, r4, 16, 2
    fmul f8, f5, f2
    fmul f12, f1, f10
    addi r4, r4, 0x1
    clrlslwi r25, r4, 16, 2
    lwz r6, lbl_8049E424
    fmul f10, f0, f8
    lfsx f5, r7, r24
    fmul f7, f7, f2
    add r0, r8, r23
    addi r4, r4, 0x1
    lfsx f8, r7, r25
    frsp f12, f12
    clrlslwi r8, r4, 16, 2
    stfsx f12, r6, r0
    fmul f31, f30, f7
    add r0, r10, r23
    addi r4, r4, 0x1
    fmul f7, f5, f2
    lfsx f5, r7, r8
    lwz r6, lbl_8049E424
    frsp f10, f10
    clrlslwi r26, r4, 16, 2
    fmul f12, f13, f7
    lfsx f7, r7, r26
    addi r4, r4, 0x1
    stfsx f10, r6, r0
    fmul f10, f8, f2
    add r0, r12, r23
    fmul f8, f5, f2
    clrlslwi r27, r4, 16, 2
    lwz r31, lbl_8049E424
    add r12, r24, r23
    frsp f31, f31
    lfsx f5, r7, r27
    fmul f10, f11, f10
    add r10, r25, r23
    stfsx f31, r31, r0
    add r8, r8, r23
    fmul f7, f7, f2
    add r6, r26, r23
    fmul f2, f5, f2
    lwz r31, lbl_8049E424
    add r0, r27, r23
    addi r5, r5, 0x1
    frsp f12, f12
    addi r4, r4, 0x1
    stfsx f12, r31, r12
    fmul f5, f6, f7
    fmul f8, f9, f8
    lwz r12, lbl_8049E424
    frsp f10, f10
    fmul f2, f4, f2
    stfsx f10, r12, r10
    frsp f7, f8
    frsp f5, f5
    lwz r10, lbl_8049E424
    frsp f2, f2
    stfsx f7, r10, r8
    lwz r8, lbl_8049E424
    stfsx f5, r8, r6
    lwz r6, lbl_8049E424
    stfsx f2, r6, r0
    bdnz lbl_80326804
    subi r0, r11, 0x41
    clrlwi. r11, r0, 16
    bne lbl_80326668
    li r3, 0x0
    opword 0xE3E10158
    lfd f31, 0x150(r1)
    opword 0xE3C10148
    lfd f30, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_23
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// ----------------------------------------------------------------------------
// fn_8032696C
// ----------------------------------------------------------------------------
asm void fn_8032696C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r4, lbl_8049E428
    lis r3, 0x10
    subi r11, r3, 0x1
    lwz r6, lbl_8049E424
    addi r3, r4, 0x101
    stw r4, lbl_8049E488
    li r12, -0x1
    li r0, 0x0
    stw r3, lbl_8049E484
    li r10, 0x1
    li r9, 0x8
    li r7, 0x2
    lwz r3, 0x69c(r6)
    lbz r5, 0x0(r3)
    addi r4, r3, 0x2
    lbz r3, 0x1(r3)
    rlwimi r3, r5, 8, 16, 23
    subi r3, r3, 0x2
    stw r4, 0x69c(r6)
    clrlwi r5, r3, 16
lbl_803269D0:
    lwz r30, lbl_8049E424
    li r6, 0x0
    li r3, 0x0
    lwz r8, 0x69c(r30)
    addi r4, r8, 0x1
    stw r4, 0x69c(r30)
    lbz r4, 0x0(r8)
    lwz r30, lbl_8049E424
    clrlslwi r8, r4, 28, 1
    srawi r4, r4, 4
    lwz r30, 0x69c(r30)
    add r4, r8, r4
    clrlwi r4, r4, 24
    stw r30, lbl_8049E48C
    mtctr r7
lbl_80326A0C:
    lwz r31, lbl_8049E424
    addi r3, r3, 0x8
    lwz r30, 0x69c(r31)
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lwz r31, lbl_8049E424
    lbz r8, 0x0(r30)
    lwz r30, 0x69c(r31)
    add r6, r6, r8
    addi r8, r30, 0x1
    stw r8, 0x69c(r31)
    lbz r8, 0x0(r30)
    add r6, r6, r8
    bdnz lbl_80326A0C
    lwz r27, lbl_8049E424
    mulli r3, r4, 0xe0
    clrlwi r8, r6, 16
    lwz r31, 0x69c(r27)
    li r28, 0x0
    add r30, r27, r3
    li r29, 0x1
    stw r31, 0x340(r30)
    lwz r31, lbl_8049E424
    lwz r30, 0x69c(r31)
    add r8, r30, r8
    stw r8, 0x69c(r31)
lbl_80326B04:
    lwz r8, lbl_8049E48C
    add r8, r8, r29
    lbz r30, -0x1(r8)
    cmpwi r30, 0x0
    beq lbl_80326BA4
    srwi. r8, r30, 3
    mtctr r8
    beq lbl_80326B90
lbl_80326B24:
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    bdnz lbl_80326B24
    andi. r30, r30, 0x7
    beq lbl_80326BA4
lbl_80326B90:
    mtctr r30
lbl_80326B94:
    lwz r8, lbl_8049E488
    stbx r29, r8, r28
    addi r28, r28, 0x1
    bdnz lbl_80326B94
lbl_80326BA4:
    addi r29, r29, 0x1
    cmpwi r29, 0x10
    ble lbl_80326B04
    lwz r8, lbl_8049E488
    li r27, 0x0
    li r29, 0x0
    stbx r0, r8, r28
    lwz r30, lbl_8049E488
    lbz r28, 0x0(r30)
    b lbl_80326C04
lbl_80326BCC:
    clrlwi r31, r28, 24
    b lbl_80326BE8
lbl_80326BD4:
    lwz r30, lbl_8049E484
    clrlslwi r8, r27, 16, 1
    addi r27, r27, 0x1
    sthx r29, r30, r8
    addi r29, r29, 0x1
lbl_80326BE8:
    lwz r30, lbl_8049E488
    clrlwi r8, r27, 16
    lbzx r8, r30, r8
    cmplw r31, r8
    beq lbl_80326BD4
    clrlslwi r29, r29, 17, 1
    addi r28, r28, 0x1
lbl_80326C04:
    clrlwi r8, r27, 16
    lbzx r8, r30, r8
    cmpwi r8, 0x0
    bne lbl_80326BCC
    lwz r8, lbl_8049E424
    li r28, 0x0
    li r27, 0x1
    add r31, r8, r3
    addi r29, r31, 0x304
    mtctr r9
lbl_80326C2C:
    lwz r3, lbl_8049E48C
    add r3, r3, r27
    lbz r3, -0x1(r3)
    cmpwi r3, 0x0
    beq lbl_80326C7C
    lwz r8, lbl_8049E484
    slwi r3, r28, 1
    lhzx r3, r8, r3
    subf r3, r3, r28
    stw r3, 0x8c(r29)
    lwz r3, lbl_8049E48C
    lwz r8, lbl_8049E484
    add r3, r3, r27
    lbz r3, -0x1(r3)
    add r28, r28, r3
    slwi r3, r28, 1
    add r3, r8, r3
    lhz r3, -0x2(r3)
    stw r3, 0x44(r29)
    b lbl_80326C84
lbl_80326C7C:
    stw r12, 0x44(r29)
    stw r12, 0x8c(r29)
lbl_80326C84:
    lwz r3, lbl_8049E48C
    addi r27, r27, 0x1
    add r3, r3, r27
    lbz r3, -0x1(r3)
    cmpwi r3, 0x0
    beq lbl_80326CD8
    lwz r8, lbl_8049E484
    slwi r3, r28, 1
    lhzx r3, r8, r3
    subf r3, r3, r28
    stw r3, 0x90(r29)
    lwz r3, lbl_8049E48C
    lwz r8, lbl_8049E484
    add r3, r3, r27
    lbz r3, -0x1(r3)
    add r28, r28, r3
    slwi r3, r28, 1
    add r3, r8, r3
    lhz r3, -0x2(r3)
    stw r3, 0x48(r29)
    b lbl_80326CE0
lbl_80326CD8:
    stw r12, 0x48(r29)
    stw r12, 0x90(r29)
lbl_80326CE0:
    addi r29, r29, 0x8
    addi r27, r27, 0x1
    bdnz lbl_80326C2C
    stw r11, 0x388(r31)
    addi r3, r6, 0x11
    subf r3, r3, r5
    slw r4, r10, r4
    lwz r6, lbl_8049E424
    clrlwi. r5, r3, 16
    lbz r3, 0x6a8(r6)
    or r3, r3, r4
    stb r3, 0x6a8(r6)
    bne lbl_803269D0
    addi r11, r1, 0x20
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80326D30
// ----------------------------------------------------------------------------
asm void fn_80326D30() {
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r4, lbl_8049E424
    lwz r3, 0x6a4(r4)
    lwz r0, 0x69c(r4)
    cmplwi r3, 0x21
    clrrwi r6, r0, 2
    clrlwi r0, r0, 30
    beq lbl_80326D6C
    subfic r0, r0, 0x3
    slwi r0, r0, 3
    subf r0, r0, r3
    stw r0, 0x6a4(r4)
    b lbl_80326D78
lbl_80326D6C:
    slwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
lbl_80326D78:
    lwz r5, lbl_8049E424
    li r3, 0x0
    li r4, 0x0
    li r10, 0xff
    stw r6, 0x69c(r5)
    li r11, 0x1
    li r0, 0x10
    lwz r6, 0x0(r6)
    lwz r5, lbl_8049E424
    stw r6, 0x6a0(r5)
lbl_80326DA0:
    lwz r6, lbl_8049E424
    slw r5, r11, r3
    lbz r6, 0x6a8(r6)
    and. r5, r6, r5
    beq lbl_80326EB8
    li r12, 0x0
    mtctr r0
lbl_80326DBC:
    lwz r5, lbl_8049E424
    li r31, 0x0
    add r5, r5, r4
    add r5, r5, r12
    stb r10, 0x300(r5)
    b lbl_80326E2C
lbl_80326DD4:
    lwz r5, lbl_8049E424
    subfic r6, r31, 0x4
    addi r8, r31, 0x1
    add r9, r5, r4
    srw r30, r12, r6
    slwi r5, r8, 2
    add r7, r9, r5
    lwz r5, 0x344(r7)
    cmpw r30, r5
    bgt lbl_80326E28
    lwz r6, 0x340(r9)
    add r5, r9, r12
    lwz r7, 0x38c(r7)
    li r31, 0x63
    add r6, r6, r30
    lbzx r6, r7, r6
    stb r6, 0x300(r5)
    lwz r5, lbl_8049E424
    add r5, r5, r4
    add r5, r5, r12
    stb r8, 0x320(r5)
lbl_80326E28:
    addi r31, r31, 0x1
lbl_80326E2C:
    cmplwi r31, 0x5
    blt lbl_80326DD4
    lwz r5, lbl_8049E424
    addi r12, r12, 0x1
    li r31, 0x0
    add r5, r5, r4
    add r5, r5, r12
    stb r10, 0x300(r5)
    b lbl_80326EA8
lbl_80326E50:
    lwz r5, lbl_8049E424
    subfic r6, r31, 0x4
    addi r8, r31, 0x1
    add r9, r5, r4
    srw r30, r12, r6
    slwi r5, r8, 2
    add r7, r9, r5
    lwz r5, 0x344(r7)
    cmpw r30, r5
    bgt lbl_80326EA4
    lwz r6, 0x340(r9)
    add r5, r9, r12
    lwz r7, 0x38c(r7)
    li r31, 0x63
    add r6, r6, r30
    lbzx r6, r7, r6
    stb r6, 0x300(r5)
    lwz r5, lbl_8049E424
    add r5, r5, r4
    add r5, r5, r12
    stb r8, 0x320(r5)
lbl_80326EA4:
    addi r31, r31, 0x1
lbl_80326EA8:
    cmplwi r31, 0x5
    blt lbl_80326E50
    addi r12, r12, 0x1
    bdnz lbl_80326DBC
lbl_80326EB8:
    addi r3, r3, 0x1
    addi r4, r4, 0xe0
    cmplwi r3, 0x4
    blt lbl_80326DA0
    lwz r8, lbl_8049E424
    lbz r4, 0x682(r8)
    lbz r7, 0x681(r8)
    lbz r6, 0x687(r8)
    slwi r5, r4, 1
    lbz r3, 0x688(r8)
    slwi r7, r7, 1
    lbz r0, 0x68e(r8)
    slwi r6, r6, 1
    slwi r4, r3, 1
    addi r9, r5, 0x1
    slwi r3, r0, 1
    lbz r0, 0x68d(r8)
    addi r11, r3, 0x1
    addi r10, r4, 0x1
    mulli r3, r7, 0xe0
    slwi r5, r0, 1
    add r4, r8, r3
    mulli r3, r5, 0xe0
    addi r5, r4, 0x300
    stw r5, lbl_8049E540
    mulli r0, r6, 0xe0
    add r4, r8, r0
    addi r5, r4, 0x300
    add r4, r8, r3
    stw r5, lbl_8049E520
    addi r5, r4, 0x300
    mulli r0, r9, 0xe0
    stw r5, lbl_8049E500
    add r4, r8, r0
    addi r5, r4, 0x300
    mulli r3, r10, 0xe0
    stw r5, lbl_8049E4E0
    add r4, r8, r3
    mulli r0, r11, 0xe0
    addi r4, r4, 0x300
    stw r4, lbl_8049E4C0
    add r3, r8, r0
    addi r0, r3, 0x300
    stw r0, lbl_8049E4A0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80326F78
// ----------------------------------------------------------------------------
asm void fn_80326F78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r6, lbl_8049E424
    stw r3, 0x6b0(r6)
    lwz r6, lbl_8049E424
    stw r4, 0x6b4(r6)
    lwz r4, lbl_8049E424
    stw r5, 0x6b8(r4)
    lwz r4, lbl_8049E424
    lhz r31, 0x698(r4)
    lhz r30, 0x694(r4)
    mfspr r4, GQR5
    mfspr r0, GQR6
    li r3, 0x7
    oris r3, r3, 0x7
    stw r4, lbl_8049E430
    stw r0, lbl_8049E42C
    mtspr GQR5, r3
    li r3, 0x3d04
    oris r3, r3, 0x3d04
    mtspr GQR6, r3
    bl fn_80326D30
    lwz r4, lbl_8049E424
    lhz r0, 0x692(r4)
    cmplwi r0, 0x200
    bne lbl_80327010
    cmplwi r30, 0x1c0
    bne lbl_80327010
    b lbl_80327004
lbl_80326FF8:
    bl fn_8032707C
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_80327004:
    cmplw r31, r30
    blt lbl_80326FF8
    b lbl_80327054
lbl_80327010:
    cmplwi r0, 0x280
    bne lbl_8032704C
    cmplwi r30, 0x1e0
    bne lbl_8032704C
    b lbl_80327030
lbl_80327024:
    bl fn_80327BE8
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_80327030:
    cmplw r31, r30
    blt lbl_80327024
    b lbl_80327054
    b lbl_8032704C
lbl_80327040:
    bl fn_80327E38
    addi r0, r31, 0x10
    clrlwi r31, r0, 16
lbl_8032704C:
    cmplw r31, r30
    blt lbl_80327040
lbl_80327054:
    lwz r4, lbl_8049E430
    lwz r0, lbl_8049E42C
    mtspr GQR5, r4
    mtspr GQR6, r0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032707C
// ----------------------------------------------------------------------------
asm void fn_8032707C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    li r3, 0x3
    bl fn_803153F0
    lis r26, lbl_8046F200@ha
    lis r28, lbl_8046F218@ha
    addi r27, r26, lbl_8046F200@l
    li r25, 0x0
    addi r30, r28, lbl_8046F218@l
    li r29, 0x200
    li r31, 0x100
    li r22, 0x21
    li r23, 0x0
    b lbl_8032722C
lbl_803270C0:
    lwz r3, lbl_8049E424
    lwz r4, lbl_8046F200@l(r26)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x4(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x8(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0xc(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x10(r27)
    bl fn_803286F0
    lwz r3, lbl_8049E424
    lwz r4, 0x14(r27)
    bl fn_80328D78
    lwz r0, lbl_8046F218@l(r28)
    clrlslwi r24, r25, 24, 4
    stw r29, lbl_8049E460
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, lbl_8046F200@l(r26)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r3, 0x4(r27)
    addi r4, r24, 0x8
    bl fn_803272C8
    lwz r3, 0x8(r27)
    mr r4, r24
    bl fn_80327754
    lwz r3, 0xc(r27)
    addi r4, r24, 0x8
    bl fn_80327754
    lwz r0, 0x4(r30)
    srwi r24, r24, 1
    stw r31, lbl_8049E460
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x10(r27)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r0, 0x8(r30)
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x14(r27)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r4, lbl_8049E424
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_80327228
    lhz r3, 0x6ac(r4)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0x6ac(r4)
    bne lbl_80327228
    lwz r3, lbl_8049E424
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8049E424
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8049E424
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x21
    ble lbl_80327210
    stw r22, 0x6a4(r3)
lbl_80327210:
    lwz r3, lbl_8049E424
    sth r23, 0x684(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x68a(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x690(r3)
lbl_80327228:
    addi r25, r25, 0x1
lbl_8032722C:
    lwz r3, lbl_8049E424
    clrlwi r4, r25, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_803270C0
    lis r24, lbl_8046F218@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_8046F218@l(r24)
    li r5, 0x2000
    bl fn_80315344
    lwz r3, lbl_8049E424
    addi r24, r24, lbl_8046F218@l
    lwz r4, 0x4(r24)
    li r5, 0x800
    lwz r3, 0x6b4(r3)
    bl fn_80315344
    lwz r3, lbl_8049E424
    li r5, 0x800
    lwz r4, 0x8(r24)
    lwz r3, 0x6b8(r3)
    bl fn_80315344
    lwz r4, lbl_8049E424
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r4)
    addi r0, r3, 0x2000
    stw r0, 0x6b0(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x6b4(r4)
    addi r0, r3, 0x800
    stw r0, 0x6b4(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x6b8(r4)
    addi r0, r3, 0x800
    stw r0, 0x6b8(r4)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_803272C8
// ----------------------------------------------------------------------------
asm void fn_803272C8() {
    nofralloc
    stwu r1, -0x80(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    stfd f28, 0x40(r1)
    opword 0xF3810048
    stfd f27, 0x30(r1)
    opword 0xF3610038
    stfd f26, 0x20(r1)
    opword 0xF3410028
    stfd f25, 0x10(r1)
    opword 0xF3210018
    lis r5, lbl_8046F240@ha
    li r7, 0x8
    addi r5, r5, lbl_8046F240@l
    lfs f29, lbl_804A27D0
    subi r10, r5, 0x8
    lfs f28, lbl_804A27D4
    lfs f27, lbl_804A27D8
    lfs f26, lbl_804A27DC
    lfs f25, lbl_804A27E0
    lwz r5, lbl_8049E440
    mtctr r7
lbl_80327330:
    opword 0xE1435000
    opword 0xE1650000
    lwz r0, 0xc(r3)
    lwz r8, 0x8(r3)
    opword 0x114A02F2
    lwz r6, 0x4(r3)
    or. r0, r0, r8
    lhz r7, 0x2(r3)
lbl_80327350:
    cmpwi r0, 0x0
    bne lbl_80327490
    opword 0x100A5420
    cmpwi r6, 0x0
    opword 0xF00A0008
    bne lbl_803273FC
    opword 0xF00A0010
    cmpwi r7, 0x0
    opword 0xF00A0018
    bne lbl_8032738C
    opword 0xF40A0020
    addi r3, r3, 0x10
    addi r5, r5, 0x20
    bdnz lbl_80327330
    b lbl_80327550
lbl_8032738C:
    opword 0x104A5738
    opword 0xE5650020
    opword 0x103CD828
    lwz r6, 0x14(r3)
    opword 0x112A5420
    lhz r7, 0x12(r3)
    opword 0x106A1778
    opword 0x10AA14E0
    opword 0x108A187C
    opword 0x10E9282A
    opword 0xE1435010
    lwz r0, 0x1c(r3)
    opword 0x10A92828
    opword 0x10C324E0
    lwz r8, 0x18(r3)
    opword 0x1109302A
    opword 0x10C93028
    opword 0xF4EA0008
    opword 0x10C634A0
    opword 0xF50A0008
    opword 0x10A52CA0
    or r0, r0, r8
    opword 0xF4CA0008
    opword 0x114A02F2
    opword 0xF4AA0008
    addi r3, r3, 0x10
    bdnz lbl_80327350
    b lbl_80327550
lbl_803273FC:
    opword 0xE0235004
    opword 0xE1250008
    lwz r0, 0x1c(r3)
    opword 0x10210272
    lwz r8, 0x18(r3)
    lwz r6, 0x14(r3)
    lhz r7, 0x12(r3)
    opword 0x106A0828
    opword 0x104A082A
    opword 0x11030732
    opword 0x10811F7A
    opword 0x10A1177C
    opword 0x10C146BC
    opword 0x10EA46FC
    opword 0x10822420
    opword 0x10C61028
    opword 0x10A51C20
    opword 0x11033778
    opword 0x104234E0
    opword 0xE5435010
    opword 0xE5650020
    opword 0x10E74028
    opword 0x1124102A
    opword 0x10841028
    opword 0x10683CE0
    opword 0xF52A0008
    or r0, r0, r8
    opword 0x1005182A
    opword 0x10251828
    opword 0xF40A0008
    opword 0x108424A0
    opword 0x10210CA0
    opword 0xF42A0008
    opword 0x114A02F2
    opword 0xF48A0008
    bdnz lbl_80327350
    b lbl_80327550
lbl_80327490:
    opword 0xE1235004
    opword 0xE0A50008
    opword 0x11290172
    opword 0xE0435008
    opword 0xE0C50010
    opword 0x100A4C60
    opword 0xE063500C
    opword 0x10295460
    opword 0xE0E50018
    lwz r0, 0x1c(r3)
    opword 0x108201BA
    opword 0x10A201BC
    lwz r8, 0x18(r3)
    opword 0x10C309FA
    lwz r6, 0x14(r3)
    opword 0x10E309FC
    lhz r7, 0x12(r3)
    opword 0x1004302A
    opword 0x11072828
    opword 0x10473778
    opword 0x10643028
    opword 0x11080732
    opword 0x1025102A
    opword 0x10451028
    opword 0x10C546BC
    opword 0x108746F8
    opword 0x10200C20
    opword 0x10C60028
    opword 0x10421C20
    opword 0x10A3377A
    opword 0x10E034E0
    opword 0xE5435010
    opword 0xE5650020
    opword 0x10842828
    opword 0x1061382A
    opword 0x10013828
    opword 0x108524E0
    opword 0x114A02F2
    opword 0x10A2202A
    opword 0x10C22028
    opword 0x10A52CA0
    opword 0xF46A0008
    opword 0x100004A0
    opword 0xF4CA0008
    opword 0xF4AA0008
    or r0, r0, r8
    opword 0xF40A0008
    bdnz lbl_80327350
lbl_80327550:
    lis r10, lbl_8046F240@ha
    lwz r0, lbl_8049E460
    addi r10, r10, lbl_8046F240@l
    slwi r4, r4, 2
    opword 0xE14A0000
    slwi r5, r0, 2
    opword 0xE16A0080
    add r5, r4, r5
    lwz r0, lbl_8049E480
    li r3, 0x3
    opword 0x10CA582A
    opword 0xE18A0040
    opword 0xE1AA00C0
    opword 0x110A5828
    add r6, r0, r4
    add r7, r0, r5
    opword 0x10C6C82A
    opword 0x10EC682A
    opword 0x112C6828
    opword 0x1108C82A
    opword 0x1006382A
    mtctr r3
lbl_803275A8:
    opword 0x11293F78
    opword 0xE08A0020
    opword 0x10663828
    opword 0xE0AA0060
    opword 0xE0CA00A0
    opword 0xE0EA00E0
    opword 0x1028482A
    opword 0xE14A0008
    opword 0x10484828
    opword 0xE16A0088
    opword 0x1106282A
    opword 0xE18A0048
    opword 0x1124382A
    opword 0xE1AA00C8
    opword 0x10C62828
    addi r10, r10, 0x8
    opword 0x10843828
    opword 0x10E9402A
    opword 0x10A94028
    opword 0x1106202A
    opword 0x1120382A
    opword 0x13C03828
    opword 0x11080732
    opword 0x10C646BA
    opword 0x10C63828
    opword 0xF1266000
    opword 0x108446F8
    opword 0x1121302A
    opword 0x10A53778
    opword 0x13E13028
    opword 0xF1266008
    opword 0x1102282A
    opword 0x1084282A
    opword 0xF1066010
    opword 0x11232028
    opword 0x1003202A
    opword 0xF1266018
    opword 0x10222828
    opword 0x10CA582A
    opword 0xF0076000
    opword 0x110A5828
    opword 0x10C6C82A
    opword 0xF0276008
    opword 0x10EC682A
    opword 0x112C6828
    opword 0xF3E76010
    addi r4, r4, 0x2
    add r6, r0, r4
    opword 0x1006382A
    opword 0xF3C76018
    addi r5, r5, 0x2
    opword 0x1108C82A
    add r7, r0, r5
    bdnz lbl_803275A8
    opword 0x11293F78
    opword 0xE08A0020
    opword 0x10663828
    opword 0xE0AA0060
    opword 0xE0CA00A0
    opword 0xE0EA00E0
    opword 0x1028482A
    opword 0x10484828
    opword 0x1106282A
    opword 0x1124382A
    opword 0x10C62828
    opword 0x10843828
    opword 0x10E9402A
    opword 0x10A94028
    opword 0x1106202A
    opword 0x1120382A
    opword 0x13C03828
    opword 0x11080732
    opword 0x10C646BA
    opword 0xF1266000
    opword 0x108446F8
    opword 0x10C63828
    opword 0xF3C76018
    opword 0x1121302A
    opword 0x10A53778
    opword 0x13E13028
    opword 0xF1266008
    opword 0x1102282A
    opword 0x1084282A
    opword 0xF3E76010
    opword 0xF1066010
    opword 0x11232028
    opword 0x1003202A
    opword 0xF1266018
    opword 0x10222828
    opword 0xF0076000
    opword 0xF0276008
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    lfd f29, 0x50(r1)
    opword 0xE3810048
    lfd f28, 0x40(r1)
    opword 0xE3610038
    lfd f27, 0x30(r1)
    opword 0xE3410028
    lfd f26, 0x20(r1)
    opword 0xE3210018
    lfd f25, 0x10(r1)
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_80327754
// ----------------------------------------------------------------------------
asm void fn_80327754() {
    nofralloc
    stwu r1, -0x80(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    stfd f28, 0x40(r1)
    opword 0xF3810048
    stfd f27, 0x30(r1)
    opword 0xF3610038
    stfd f26, 0x20(r1)
    opword 0xF3410028
    stfd f25, 0x10(r1)
    opword 0xF3210018
    lis r5, lbl_8046F240@ha
    li r7, 0x8
    addi r5, r5, lbl_8046F240@l
    lfs f29, lbl_804A27D0
    subi r10, r5, 0x8
    lfs f28, lbl_804A27D4
    lfs f27, lbl_804A27D8
    lfs f26, lbl_804A27DC
    lfs f25, lbl_804A27E0
    lwz r5, lbl_8049E440
    mtctr r7
lbl_803277BC:
    opword 0xE1435000
    opword 0xE1650000
    lwz r0, 0xc(r3)
    lwz r8, 0x8(r3)
    opword 0x114A02F2
    lwz r6, 0x4(r3)
    lhz r7, 0x2(r3)
    or r0, r0, r8
lbl_803277DC:
    cmpwi r0, 0x0
    bne lbl_8032791C
    opword 0x100A5420
    cmpwi r6, 0x0
    opword 0xF00A0008
    bne lbl_80327888
    opword 0xF00A0010
    cmpwi r7, 0x0
    opword 0xF00A0018
    bne lbl_80327818
    opword 0xF40A0020
    addi r3, r3, 0x10
    addi r5, r5, 0x20
    bdnz lbl_803277BC
    b lbl_803279DC
lbl_80327818:
    opword 0x104A5738
    opword 0xE5650020
    opword 0x103CD828
    lwz r6, 0x14(r3)
    opword 0x112A5420
    lhz r7, 0x12(r3)
    opword 0x106A1778
    opword 0x10AA14E0
    opword 0x108A187C
    opword 0x10E9282A
    opword 0xE1435010
    lwz r0, 0x1c(r3)
    opword 0x10A92828
    opword 0x10C324E0
    lwz r8, 0x18(r3)
    opword 0x1109302A
    opword 0x10C93028
    opword 0xF4EA0008
    opword 0x10C634A0
    opword 0xF50A0008
    opword 0x10A52CA0
    or r0, r0, r8
    opword 0xF4CA0008
    opword 0x114A02F2
    opword 0xF4AA0008
    addi r3, r3, 0x10
    bdnz lbl_803277DC
    b lbl_803279DC
lbl_80327888:
    opword 0xE0235004
    opword 0xE1250008
    lwz r0, 0x1c(r3)
    opword 0x10210272
    lwz r8, 0x18(r3)
    lwz r6, 0x14(r3)
    lhz r7, 0x12(r3)
    opword 0x106A0828
    opword 0x104A082A
    opword 0x11030732
    opword 0x10811F7A
    opword 0x10A1177C
    opword 0x10C146BC
    opword 0x10EA46FC
    opword 0x10822420
    opword 0x10C61028
    opword 0x10A51C20
    opword 0x11033778
    opword 0x104234E0
    opword 0xE5435010
    opword 0xE5650020
    opword 0x10E74028
    opword 0x1124102A
    opword 0x10841028
    opword 0x10683CE0
    opword 0xF52A0008
    or r0, r0, r8
    opword 0x1005182A
    opword 0x10251828
    opword 0xF40A0008
    opword 0x108424A0
    opword 0x10210CA0
    opword 0xF42A0008
    opword 0x114A02F2
    opword 0xF48A0008
    bdnz lbl_803277DC
    b lbl_803279DC
lbl_8032791C:
    opword 0xE1235004
    opword 0xE0A50008
    opword 0x11290172
    opword 0xE0435008
    opword 0xE0C50010
    opword 0x100A4C60
    opword 0xE063500C
    opword 0x10295460
    opword 0xE0E50018
    lwz r0, 0x1c(r3)
    opword 0x108201BA
    opword 0x10A201BC
    lwz r8, 0x18(r3)
    opword 0x10C309FA
    lwz r6, 0x14(r3)
    opword 0x10E309FC
    lhz r7, 0x12(r3)
    opword 0x1004302A
    opword 0x11072828
    opword 0x10473778
    opword 0x10643028
    opword 0x11080732
    opword 0x1025102A
    opword 0x10451028
    opword 0x10C546BC
    opword 0x108746F8
    opword 0x10200C20
    opword 0x10C60028
    opword 0x10421C20
    opword 0x10A3377A
    opword 0x10E034E0
    opword 0xE5435010
    opword 0xE5650020
    opword 0x10842828
    opword 0x1061382A
    opword 0x10013828
    opword 0x108524E0
    opword 0x114A02F2
    opword 0x10A2202A
    opword 0x10C22028
    opword 0x10A52CA0
    opword 0xF46A0008
    opword 0x100004A0
    opword 0xF4CA0008
    opword 0xF4AA0008
    or r0, r0, r8
    opword 0xF40A0008
    bdnz lbl_803277DC
lbl_803279DC:
    lis r10, lbl_8046F240@ha
    lwz r0, lbl_8049E460
    addi r10, r10, lbl_8046F240@l
    slwi r3, r4, 2
    opword 0xE14A0000
    slwi r4, r0, 3
    opword 0xE16A0080
    slwi r5, r0, 2
    add r4, r4, r3
    lwz r0, lbl_8049E480
    opword 0x10CA582A
    opword 0xE18A0040
    opword 0xE1AA00C0
    opword 0x110A5828
    add r5, r4, r5
    li r3, 0x3
    opword 0x10C6C82A
    add r6, r0, r4
    opword 0x10EC682A
    add r7, r0, r5
    opword 0x112C6828
    opword 0x1108C82A
    opword 0x1006382A
    mtctr r3
lbl_80327A3C:
    opword 0x11293F78
    opword 0xE08A0020
    opword 0x10663828
    opword 0xE0AA0060
    opword 0xE0CA00A0
    opword 0xE0EA00E0
    opword 0x1028482A
    opword 0xE14A0008
    opword 0x10484828
    opword 0xE16A0088
    opword 0x1106282A
    opword 0xE18A0048
    opword 0x1124382A
    opword 0xE1AA00C8
    opword 0x10C62828
    addi r10, r10, 0x8
    opword 0x10843828
    opword 0x10E9402A
    opword 0x10A94028
    opword 0x1106202A
    opword 0x1120382A
    opword 0x13C03828
    opword 0x11080732
    opword 0x10C646BA
    opword 0x10C63828
    opword 0xF1266000
    opword 0x108446F8
    opword 0x1121302A
    opword 0x10A53778
    opword 0x13E13028
    opword 0xF1266008
    opword 0x1102282A
    opword 0x1084282A
    opword 0xF1066010
    opword 0x11232028
    opword 0x1003202A
    opword 0xF1266018
    opword 0x10222828
    opword 0x10CA582A
    opword 0xF0076000
    opword 0x110A5828
    opword 0x10C6C82A
    opword 0xF0276008
    opword 0x10EC682A
    opword 0x112C6828
    opword 0xF3E76010
    addi r4, r4, 0x2
    add r6, r0, r4
    opword 0x1006382A
    opword 0xF3C76018
    addi r5, r5, 0x2
    opword 0x1108C82A
    add r7, r0, r5
    bdnz lbl_80327A3C
    opword 0x11293F78
    opword 0xE08A0020
    opword 0x10663828
    opword 0xE0AA0060
    opword 0xE0CA00A0
    opword 0xE0EA00E0
    opword 0x1028482A
    opword 0x10484828
    opword 0x1106282A
    opword 0x1124382A
    opword 0x10C62828
    opword 0x10843828
    opword 0x10E9402A
    opword 0x10A94028
    opword 0x1106202A
    opword 0x1120382A
    opword 0x13C03828
    opword 0x11080732
    opword 0x10C646BA
    opword 0xF1266000
    opword 0x108446F8
    opword 0x10C63828
    opword 0xF3C76018
    opword 0x1121302A
    opword 0x10A53778
    opword 0x13E13028
    opword 0xF1266008
    opword 0x1102282A
    opword 0x1084282A
    opword 0xF1066010
    opword 0x11232028
    opword 0xF3E76010
    opword 0x1003202A
    opword 0xF1266018
    opword 0x10222828
    opword 0xF0076000
    opword 0xF0276008
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    lfd f29, 0x50(r1)
    opword 0xE3810048
    lfd f28, 0x40(r1)
    opword 0xE3610038
    lfd f27, 0x30(r1)
    opword 0xE3410028
    lfd f26, 0x20(r1)
    opword 0xE3210018
    lfd f25, 0x10(r1)
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_80327BE8
// ----------------------------------------------------------------------------
asm void fn_80327BE8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    li r3, 0x3
    bl fn_803153F0
    lis r26, lbl_8046F200@ha
    lis r28, lbl_8046F340@ha
    addi r27, r26, lbl_8046F200@l
    li r25, 0x0
    addi r30, r28, lbl_8046F340@l
    li r29, 0x280
    li r31, 0x140
    li r22, 0x21
    li r23, 0x0
    b lbl_80327D9C
lbl_80327C2C:
    lwz r3, lbl_8049E424
    lwz r4, lbl_8046F200@l(r26)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x4(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x8(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0xc(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x10(r27)
    bl fn_803286F0
    lwz r3, lbl_8049E424
    lwz r4, 0x14(r27)
    bl fn_80328D78
    lwz r0, lbl_8046F340@l(r28)
    clrlslwi r24, r25, 24, 4
    stw r29, lbl_8049E460
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, lbl_8046F200@l(r26)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r3, 0x4(r27)
    addi r4, r24, 0x8
    bl fn_803272C8
    lwz r3, 0x8(r27)
    mr r4, r24
    bl fn_80327754
    lwz r3, 0xc(r27)
    addi r4, r24, 0x8
    bl fn_80327754
    lwz r0, 0x4(r30)
    srwi r24, r24, 1
    stw r31, lbl_8049E460
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x10(r27)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r0, 0x8(r30)
    mr r4, r24
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x14(r27)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r4, lbl_8049E424
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_80327D98
    lhz r3, 0x6ac(r4)
    subi r0, r3, 0x1
    sth r0, 0x6ac(r4)
    lwz r3, lbl_8049E424
    lhz r0, 0x6ac(r3)
    cmpwi r0, 0x0
    bne lbl_80327D98
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8049E424
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8049E424
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x20
    ble lbl_80327D80
    stw r22, 0x6a4(r3)
lbl_80327D80:
    lwz r3, lbl_8049E424
    sth r23, 0x684(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x68a(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x690(r3)
lbl_80327D98:
    addi r25, r25, 0x1
lbl_80327D9C:
    lwz r3, lbl_8049E424
    clrlwi r4, r25, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_80327C2C
    lis r24, lbl_8046F340@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_8046F340@l(r24)
    li r5, 0x2800
    bl fn_80315344
    lwz r3, lbl_8049E424
    addi r24, r24, lbl_8046F340@l
    lwz r4, 0x4(r24)
    li r5, 0xa00
    lwz r3, 0x6b4(r3)
    bl fn_80315344
    lwz r3, lbl_8049E424
    li r5, 0xa00
    lwz r4, 0x8(r24)
    lwz r3, 0x6b8(r3)
    bl fn_80315344
    lwz r4, lbl_8049E424
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r4)
    addi r0, r3, 0x2800
    stw r0, 0x6b0(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x6b4(r4)
    addi r0, r3, 0xa00
    stw r0, 0x6b4(r4)
    lwz r4, lbl_8049E424
    lwz r3, 0x6b8(r4)
    addi r0, r3, 0xa00
    stw r0, 0x6b8(r4)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80327E38
// ----------------------------------------------------------------------------
asm void fn_80327E38() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r4, lbl_8049E424
    li r3, 0x3
    lhz r24, 0x692(r4)
    bl fn_803153F0
    lis r27, lbl_8046F200@ha
    lis r29, lbl_8046F340@ha
    addi r28, r27, lbl_8046F200@l
    srwi r31, r24, 1
    addi r30, r29, lbl_8046F340@l
    li r26, 0x0
    li r22, 0x21
    li r23, 0x0
    b lbl_80327FF0
lbl_80327E80:
    lwz r3, lbl_8049E424
    lwz r4, lbl_8046F200@l(r27)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x4(r28)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x8(r28)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0xc(r28)
    bl fn_80328094
    lwz r3, lbl_8049E424
    lwz r4, 0x10(r28)
    bl fn_803286F0
    lwz r3, lbl_8049E424
    lwz r4, 0x14(r28)
    bl fn_80328D78
    lwz r0, lbl_8046F340@l(r29)
    clrlslwi r25, r26, 24, 4
    stw r24, lbl_8049E460
    mr r4, r25
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, lbl_8046F200@l(r27)
    lbz r0, 0x680(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r3, 0x4(r28)
    addi r4, r25, 0x8
    bl fn_803272C8
    lwz r3, 0x8(r28)
    mr r4, r25
    bl fn_80327754
    lwz r3, 0xc(r28)
    addi r4, r25, 0x8
    bl fn_80327754
    lwz r0, 0x4(r30)
    srwi r25, r25, 1
    stw r31, lbl_8049E460
    mr r4, r25
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x10(r28)
    lbz r0, 0x686(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r0, 0x8(r30)
    mr r4, r25
    lwz r5, lbl_8049E424
    stw r0, lbl_8049E480
    lwz r3, 0x14(r28)
    lbz r0, 0x68c(r5)
    slwi r0, r0, 8
    add r0, r5, r0
    stw r0, lbl_8049E440
    bl fn_803272C8
    lwz r4, lbl_8049E424
    lbz r0, 0x6a9(r4)
    cmpwi r0, 0x0
    beq lbl_80327FEC
    lhz r3, 0x6ac(r4)
    subi r0, r3, 0x1
    sth r0, 0x6ac(r4)
    lwz r3, lbl_8049E424
    lhz r0, 0x6ac(r3)
    cmpwi r0, 0x0
    bne lbl_80327FEC
    lhz r0, 0x6aa(r3)
    sth r0, 0x6ac(r3)
    lwz r4, lbl_8049E424
    lwz r3, 0x6a4(r4)
    addi r0, r3, 0x6
    clrrwi r3, r0, 3
    addi r0, r3, 0x1
    stw r0, 0x6a4(r4)
    lwz r3, lbl_8049E424
    lwz r0, 0x6a4(r3)
    cmplwi r0, 0x20
    ble lbl_80327FD4
    stw r22, 0x6a4(r3)
lbl_80327FD4:
    lwz r3, lbl_8049E424
    sth r23, 0x684(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x68a(r3)
    lwz r3, lbl_8049E424
    sth r23, 0x690(r3)
lbl_80327FEC:
    addi r26, r26, 0x1
lbl_80327FF0:
    lwz r3, lbl_8049E424
    clrlwi r4, r26, 24
    lhz r0, 0x696(r3)
    cmpw r4, r0
    blt lbl_80327E80
    lis r25, lbl_8046F340@ha
    lwz r3, 0x6b0(r3)
    lwz r4, lbl_8046F340@l(r25)
    extlwi r5, r24, 24, 4
    bl fn_80315344
    lwz r3, lbl_8049E424
    addi r25, r25, lbl_8046F340@l
    lwz r4, 0x4(r25)
    extlwi r5, r24, 26, 2
    lwz r3, 0x6b4(r3)
    bl fn_80315344
    lwz r3, lbl_8049E424
    extlwi r5, r24, 26, 2
    lwz r4, 0x8(r25)
    lwz r3, 0x6b8(r3)
    bl fn_80315344
    lwz r5, lbl_8049E424
    extlwi r0, r24, 24, 4
    extlwi r4, r24, 26, 2
    addi r11, r1, 0x30
    lwz r3, 0x6b0(r5)
    add r0, r3, r0
    stw r0, 0x6b0(r5)
    lwz r3, lbl_8049E424
    lwz r0, 0x6b4(r3)
    add r0, r0, r4
    stw r0, 0x6b4(r3)
    lwz r3, lbl_8049E424
    lwz r0, 0x6b8(r3)
    add r0, r0, r4
    stw r0, 0x6b8(r3)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80328094
// ----------------------------------------------------------------------------
asm void fn_80328094() {
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8049E540
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_80328184
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_803280E8
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_80328320
lbl_803280E8:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
lbl_803280F4:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_80328114
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_80328158
lbl_80328114:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_80328144
lbl_80328134:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_80328144:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_80328134
    b lbl_80328164
lbl_80328158:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_803280F4
lbl_80328164:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_80328320
lbl_80328184:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_80328238
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_803281C4
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_8032829C
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_8032829C
    mr r5, r9
    b lbl_80328320
lbl_803281C4:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r11, 0x6a0(r3)
    stw r10, 0x6a4(r3)
    beq lbl_803281F0
    mr r5, r9
    b lbl_80328320
lbl_803281F0:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
lbl_80328200:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_80328200
    stw r12, 0x6a4(r3)
lbl_8032821C:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_80328320
lbl_80328238:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_80328268
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_80328320
lbl_80328268:
    li r12, 0x5
    li r6, 0x14
lbl_80328270:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_80328270
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_8032821C
lbl_8032829C:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    add r7, r7, r6
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    stw r11, 0x6a0(r3)
    lwzu r6, 0x4(r7)
    b lbl_803282F8
lbl_803282E4:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_803282F8:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_803282E4
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_80328320:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_803283C0
    lwz r7, 0x6a4(r3)
    subfic r8, r7, 0x21
    lwz r6, 0x6a0(r3)
    subfc. r9, r8, r5
    subi r10, r7, 0x1
    bgt lbl_8032836C
    add r0, r7, r5
    slw r7, r6, r10
    stw r0, 0x6a4(r3)
    subfic r0, r5, 0x20
    srw r7, r7, r0
    b lbl_80328398
lbl_8032836C:
    slw r0, r6, r10
    lwz r7, 0x69c(r3)
    lwzu r6, 0x4(r7)
    addi r9, r9, 0x1
    stw r6, 0x6a0(r3)
    srw r6, r6, r8
    add r0, r6, r0
    stw r7, 0x69c(r3)
    stw r9, 0x6a4(r3)
    subfic r9, r5, 0x20
    srw r7, r0, r9
lbl_80328398:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_803283C0
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_803283C0:
    li r0, 0x60
    dcbz r4, r0
    lis r10, lbl_80342130@ha
    lha r0, 0x684(r3)
    addi r10, r10, lbl_80342130@l
    li r5, 0x1
    li r11, -0x1
    add r0, r0, r7
    sth r0, 0x684(r3)
    sth r0, 0x0(r4)
    lwz r8, lbl_8049E4E0
    lwz r6, 0x6a4(r3)
    lwz r0, 0x6a0(r3)
    addi r7, r8, 0x20
    b lbl_803286C8
lbl_803283FC:
    cmpwi r6, 0x1c
    addi r30, r6, 0x4
    rlwnm r29, r0, r30, 27, 31
    bgt lbl_803284B8
    lbzx r31, r8, r29
    lbzx r30, r7, r29
    cmpwi r31, 0xff
    beq lbl_80328424
    add r6, r6, r30
    b lbl_80328634
lbl_80328424:
    addi r9, r8, 0x58
    li r30, 0x5
    addi r6, r6, 0x5
lbl_80328430:
    cmpwi r6, 0x21
    slwi r29, r29, 1
    beq lbl_80328450
    rlwnm r31, r0, r6, 31, 31
    lwzu r12, 0x4(r9)
    or r29, r29, r31
    addi r6, r6, 0x1
    b lbl_80328490
lbl_80328450:
    lwz r31, 0x69c(r3)
    li r6, 0x1
    lwzu r0, 0x4(r31)
    lwzu r12, 0x4(r9)
    rlwimi r29, r0, 1, 31, 31
    stw r31, 0x69c(r3)
    b lbl_8032847C
lbl_8032846C:
    slwi r29, r29, 1
    rlwnm r31, r0, r6, 31, 31
    lwzu r12, 0x4(r9)
    or r29, r29, r31
lbl_8032847C:
    cmpw r29, r12
    addi r6, r6, 0x1
    addi r30, r30, 0x1
    bgt lbl_8032846C
    b lbl_8032849C
lbl_80328490:
    cmpw r29, r12
    addi r30, r30, 0x1
    bgt lbl_80328430
lbl_8032849C:
    slwi r9, r30, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r29
    lbzx r31, r12, r9
    b lbl_80328634
lbl_803284B8:
    cmpwi r6, 0x21
    lwz r29, 0x69c(r3)
    beq lbl_803284F4
    cmpwi r6, 0x20
    rlwnm r30, r0, r30, 27, 31
    beq lbl_80328558
    lbzx r31, r8, r30
    lbzx r28, r7, r30
    cmpwi r31, 0xff
    add r30, r6, r28
    beq lbl_803285BC
    cmpwi r30, 0x21
    bgt lbl_803285BC
    mr r6, r30
    b lbl_80328634
lbl_803284F4:
    lwzu r0, 0x4(r29)
    stw r29, 0x69c(r3)
    srwi r30, r0, 27
    lbzx r31, r8, r30
    lbzx r29, r7, r30
    cmpwi r31, 0xff
    addi r6, r29, 0x1
    beq lbl_80328518
    b lbl_80328634
lbl_80328518:
    li r31, 0x5
    li r6, 0x14
lbl_80328520:
    subfic r29, r31, 0x1f
    addi r6, r6, 0x4
    add r12, r8, r6
    addi r31, r31, 0x1
    lwz r9, 0x44(r12)
    srw r30, r0, r29
    cmpw cr1, r30, r9
    bgt cr1, lbl_80328520
    lwz r9, 0x40(r8)
    addi r6, r31, 0x1
    lwz r12, 0x8c(r12)
    add r9, r9, r30
    lbzx r31, r12, r9
    b lbl_80328634
lbl_80328558:
    lwzu r0, 0x4(r29)
    stw r29, 0x69c(r3)
    rlwimi r30, r0, 4, 28, 31
    lbzx r31, r8, r30
    lbzx r6, r7, r30
    cmpwi r31, 0xff
    beq lbl_80328578
    b lbl_80328634
lbl_80328578:
    slwi r29, r30, 27
    addi r9, r8, 0x58
    rlwimi r29, r0, 31, 1, 31
    li r6, 0x5
lbl_80328588:
    subfic r31, r6, 0x1f
    lwzu r12, 0x4(r9)
    srw r30, r29, r31
    addi r6, r6, 0x1
    cmpw r30, r12
    bgt lbl_80328588
    slwi r9, r6, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r30
    lbzx r31, r12, r9
    b lbl_80328634
lbl_803285BC:
    subfic r9, r6, 0x21
    lwz r29, 0x69c(r3)
    slw r9, r11, r9
    andc r30, r0, r9
    addi r9, r8, 0x44
    subfic r12, r6, 0x21
    lwzu r0, 0x4(r29)
    addi r31, r12, 0x1
    slwi r12, r12, 2
    slwi r30, r30, 1
    stw r29, 0x69c(r3)
    add r9, r9, r12
    rlwimi r30, r0, 1, 31, 31
    li r6, 0x2
    lwzu r12, 0x4(r9)
    b lbl_80328610
lbl_803285FC:
    slwi r30, r30, 1
    lwzu r12, 0x4(r9)
    add r30, r30, r28
    addi r6, r6, 0x1
    addi r31, r31, 0x1
lbl_80328610:
    cmpw r30, r12
    rlwnm r28, r0, r6, 31, 31
    bgt lbl_803285FC
    slwi r9, r31, 2
    lwz r31, 0x40(r8)
    add r9, r8, r9
    lwz r12, 0x8c(r9)
    add r9, r31, r30
    lbzx r31, r12, r9
lbl_80328634:
    andi. r28, r31, 0xf
    srawi r31, r31, 4
    beq lbl_803286B8
    add r5, r5, r31
    subfic r30, r6, 0x21
    subfc. r29, r30, r28
    subi r9, r6, 0x1
    bgt lbl_80328668
    add r6, r6, r28
    slw r12, r0, r9
    subfic r9, r28, 0x20
    srw r31, r12, r9
    b lbl_8032868C
lbl_80328668:
    slw r9, r0, r9
    lwz r12, 0x69c(r3)
    lwzu r0, 0x4(r12)
    addi r6, r29, 0x1
    stw r12, 0x69c(r3)
    srw r12, r0, r30
    add r9, r12, r9
    subfic r29, r28, 0x20
    srw r31, r9, r29
lbl_8032868C:
    cntlzw r12, r31
    subfic r9, r28, 0x20
    cmpw cr1, r12, r9
    ble cr1, lbl_803286A8
    slw r9, r11, r28
    add r9, r9, r31
    addi r31, r9, 0x1
lbl_803286A8:
    lbzx r9, r10, r5
    slwi r9, r9, 1
    sthx r31, r4, r9
    b lbl_803286C4
lbl_803286B8:
    cmpwi cr1, r31, 0xf
    bne cr1, lbl_803286D0
    addi r5, r5, 0xf
lbl_803286C4:
    addi r5, r5, 0x1
lbl_803286C8:
    cmpwi cr1, r5, 0x40
    blt cr1, lbl_803283FC
lbl_803286D0:
    stw r6, 0x6a4(r3)
    stw r0, 0x6a0(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803286F0
// ----------------------------------------------------------------------------
asm void fn_803286F0() {
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8049E520
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_803287DC
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_80328740
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_80328978
lbl_80328740:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
lbl_8032874C:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_8032876C
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_803287B0
lbl_8032876C:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_8032879C
lbl_8032878C:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_8032879C:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_8032878C
    b lbl_803287BC
lbl_803287B0:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_8032874C
lbl_803287BC:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_80328978
lbl_803287DC:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_80328890
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_8032881C
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_803288F4
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_803288F4
    mr r5, r9
    b lbl_80328978
lbl_8032881C:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r11, 0x6a0(r3)
    stw r10, 0x6a4(r3)
    beq lbl_80328848
    mr r5, r9
    b lbl_80328978
lbl_80328848:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
lbl_80328858:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_80328858
    stw r12, 0x6a4(r3)
lbl_80328874:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_80328978
lbl_80328890:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_803288C0
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_80328978
lbl_803288C0:
    li r12, 0x5
    li r6, 0x14
lbl_803288C8:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_803288C8
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_80328874
lbl_803288F4:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    add r7, r7, r6
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    stw r11, 0x6a0(r3)
    lwzu r6, 0x4(r7)
    b lbl_80328950
lbl_8032893C:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_80328950:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_8032893C
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_80328978:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_80328A18
    lwz r10, 0x6a4(r3)
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subfc. r12, r11, r5
    subi r29, r10, 0x1
    bgt lbl_803289C4
    add r0, r10, r5
    slw r10, r7, r29
    stw r0, 0x6a4(r3)
    subfic r0, r5, 0x20
    srw r7, r10, r0
    b lbl_803289F0
lbl_803289C4:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    add r0, r7, r0
    stw r10, 0x69c(r3)
    stw r12, 0x6a4(r3)
    subfic r12, r5, 0x20
    srw r7, r0, r12
lbl_803289F0:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_80328A18
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_80328A18:
    li r0, 0x60
    dcbz r4, r0
    lis r8, lbl_80342130@ha
    lha r0, 0x68a(r3)
    addi r8, r8, lbl_80342130@l
    li r6, 0x1
    li r9, -0x1
    add r0, r0, r7
    sth r0, 0x68a(r3)
    sth r0, 0x0(r4)
    b lbl_80328D5C
lbl_80328A44:
    lwz r29, 0x6a4(r3)
    lwz r11, lbl_8049E4C0
    cmpwi r29, 0x1c
    lwz r30, 0x6a0(r3)
    addi r5, r29, 0x4
    addi r31, r11, 0x20
    rlwnm r12, r30, r5, 27, 31
    bgt lbl_80328B1C
    lbzx r5, r11, r12
    lbzx r31, r31, r12
    cmpwi r5, 0xff
    beq lbl_80328A80
    add r29, r29, r31
    stw r29, 0x6a4(r3)
    b lbl_80328CB4
lbl_80328A80:
    addi r7, r11, 0x58
    li r5, 0x5
    addi r29, r29, 0x5
lbl_80328A8C:
    cmpwi r29, 0x21
    slwi r12, r12, 1
    beq lbl_80328AAC
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
    addi r29, r29, 0x1
    b lbl_80328AF0
lbl_80328AAC:
    lwz r31, 0x69c(r3)
    li r29, 0x1
    lwzu r30, 0x4(r31)
    lwzu r0, 0x4(r7)
    rlwimi r12, r30, 1, 31, 31
    stw r31, 0x69c(r3)
    stw r30, 0x6a0(r3)
    b lbl_80328ADC
lbl_80328ACC:
    slwi r12, r12, 1
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
lbl_80328ADC:
    cmpw r12, r0
    addi r29, r29, 0x1
    addi r5, r5, 0x1
    bgt lbl_80328ACC
    b lbl_80328AFC
lbl_80328AF0:
    cmpw r12, r0
    addi r5, r5, 0x1
    bgt lbl_80328A8C
lbl_80328AFC:
    stw r29, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r11, r0
    lwz r0, 0x40(r11)
    lwz r5, 0x8c(r5)
    add r0, r0, r12
    lbzx r5, r5, r0
    b lbl_80328CB4
lbl_80328B1C:
    cmpwi r29, 0x21
    lwz r12, 0x69c(r3)
    beq lbl_80328BD0
    cmpwi r29, 0x20
    rlwnm r5, r30, r5, 27, 31
    beq lbl_80328B5C
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    add r5, r29, r31
    beq lbl_80328C34
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_80328C34
    mr r5, r12
    b lbl_80328CB4
lbl_80328B5C:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 4, 28, 31
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    stw r30, 0x6a0(r3)
    stw r31, 0x6a4(r3)
    beq lbl_80328B88
    mr r5, r12
    b lbl_80328CB4
lbl_80328B88:
    slwi r12, r5, 27
    addi r7, r11, 0x58
    rlwimi r12, r30, 31, 1, 31
    li r29, 0x5
lbl_80328B98:
    subfic r30, r29, 0x1f
    lwzu r0, 0x4(r7)
    srw r5, r12, r30
    addi r29, r29, 0x1
    cmpw r5, r0
    bgt lbl_80328B98
    stw r29, 0x6a4(r3)
lbl_80328BB4:
    slwi r0, r29, 2
    lwz r10, 0x40(r11)
    add r7, r11, r0
    lwz r7, 0x8c(r7)
    add r0, r10, r5
    lbzx r5, r7, r0
    b lbl_80328CB4
lbl_80328BD0:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    srwi r5, r30, 27
    lbzx r29, r11, r5
    lbzx r31, r31, r5
    cmpwi r29, 0xff
    stw r30, 0x6a0(r3)
    addi r31, r31, 0x1
    beq lbl_80328C00
    stw r31, 0x6a4(r3)
    mr r5, r29
    b lbl_80328CB4
lbl_80328C00:
    li r29, 0x5
    li r7, 0x14
lbl_80328C08:
    subfic r12, r29, 0x1f
    addi r7, r7, 0x4
    add r5, r11, r7
    addi r29, r29, 0x1
    lwz r0, 0x44(r5)
    srw r5, r30, r12
    cmpw cr1, r5, r0
    bgt cr1, lbl_80328C08
    addi r0, r29, 0x1
    stw r0, 0x6a4(r3)
    b lbl_80328BB4
lbl_80328C34:
    subfic r0, r29, 0x21
    lwz r12, 0x69c(r3)
    slw r10, r9, r0
    andc r5, r30, r10
    addi r10, r11, 0x44
    subfic r7, r29, 0x21
    lwzu r30, 0x4(r12)
    addi r29, r7, 0x1
    slwi r7, r7, 2
    slwi r5, r5, 1
    stw r12, 0x69c(r3)
    add r10, r10, r7
    rlwimi r5, r30, 1, 31, 31
    li r12, 0x2
    stw r30, 0x6a0(r3)
    lwzu r7, 0x4(r10)
    b lbl_80328C8C
lbl_80328C78:
    slwi r5, r5, 1
    lwzu r7, 0x4(r10)
    add r5, r5, r31
    addi r12, r12, 0x1
    addi r29, r29, 0x1
lbl_80328C8C:
    cmpw r5, r7
    rlwnm r31, r30, r12, 31, 31
    bgt lbl_80328C78
    stw r12, 0x6a4(r3)
    slwi r0, r29, 2
    add r7, r11, r0
    lwz r0, 0x40(r11)
    lwz r7, 0x8c(r7)
    add r0, r0, r5
    lbzx r5, r7, r0
lbl_80328CB4:
    clrlwi. r30, r5, 28
    srawi r7, r5, 4
    beq lbl_80328D4C
    lwz r10, 0x6a4(r3)
    add r6, r6, r7
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r30
    subi r29, r10, 0x1
    bgt lbl_80328CF4
    add r0, r10, r30
    slw r10, r7, r29
    stw r0, 0x6a4(r3)
    subfic r0, r30, 0x20
    srw r7, r10, r0
    b lbl_80328D20
lbl_80328CF4:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    add r0, r7, r0
    stw r10, 0x69c(r3)
    stw r12, 0x6a4(r3)
    subfic r12, r30, 0x20
    srw r7, r0, r12
lbl_80328D20:
    cntlzw r5, r7
    subfic r0, r30, 0x20
    cmpw cr1, r5, r0
    ble cr1, lbl_80328D3C
    slw r0, r9, r30
    add r5, r0, r7
    addi r7, r5, 0x1
lbl_80328D3C:
    lbzx r0, r8, r6
    slwi r0, r0, 1
    sthx r7, r4, r0
    b lbl_80328D58
lbl_80328D4C:
    cmpwi cr1, r7, 0xf
    bne cr1, lbl_80328D64
    addi r6, r6, 0xf
lbl_80328D58:
    addi r6, r6, 0x1
lbl_80328D5C:
    cmpwi cr1, r6, 0x40
    blt cr1, lbl_80328A44
lbl_80328D64:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80328D78
// ----------------------------------------------------------------------------
asm void fn_80328D78() {
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8049E500
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_80328E64
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_80328DC8
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_80329000
lbl_80328DC8:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
lbl_80328DD4:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_80328DF4
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_80328E38
lbl_80328DF4:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_80328E24
lbl_80328E14:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_80328E24:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_80328E14
    b lbl_80328E44
lbl_80328E38:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_80328DD4
lbl_80328E44:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_80329000
lbl_80328E64:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_80328F18
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_80328EA4
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_80328F7C
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_80328F7C
    mr r5, r9
    b lbl_80329000
lbl_80328EA4:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r11, 0x6a0(r3)
    stw r10, 0x6a4(r3)
    beq lbl_80328ED0
    mr r5, r9
    b lbl_80329000
lbl_80328ED0:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
lbl_80328EE0:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_80328EE0
    stw r12, 0x6a4(r3)
lbl_80328EFC:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_80329000
lbl_80328F18:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_80328F48
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_80329000
lbl_80328F48:
    li r12, 0x5
    li r6, 0x14
lbl_80328F50:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_80328F50
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_80328EFC
lbl_80328F7C:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    add r7, r7, r6
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    stw r11, 0x6a0(r3)
    lwzu r6, 0x4(r7)
    b lbl_80328FD8
lbl_80328FC4:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_80328FD8:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_80328FC4
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_80329000:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_803290A0
    lwz r10, 0x6a4(r3)
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r5
    subi r29, r10, 0x1
    bgt lbl_8032904C
    add r0, r10, r5
    slw r10, r7, r29
    stw r0, 0x6a4(r3)
    subfic r0, r5, 0x20
    srw r7, r10, r0
    b lbl_80329078
lbl_8032904C:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    add r0, r7, r0
    stw r10, 0x69c(r3)
    stw r12, 0x6a4(r3)
    subfic r12, r5, 0x20
    srw r7, r0, r12
lbl_80329078:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_803290A0
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_803290A0:
    li r0, 0x60
    dcbz r4, r0
    lis r8, lbl_80342130@ha
    lha r0, 0x690(r3)
    addi r8, r8, lbl_80342130@l
    li r6, 0x1
    li r9, -0x1
    add r0, r0, r7
    sth r0, 0x690(r3)
    sth r0, 0x0(r4)
    b lbl_803293E4
lbl_803290CC:
    lwz r29, 0x6a4(r3)
    lwz r11, lbl_8049E4A0
    cmpwi r29, 0x1c
    lwz r30, 0x6a0(r3)
    addi r5, r29, 0x4
    addi r31, r11, 0x20
    rlwnm r12, r30, r5, 27, 31
    bgt lbl_803291A4
    lbzx r5, r11, r12
    lbzx r31, r31, r12
    cmpwi r5, 0xff
    beq lbl_80329108
    add r29, r29, r31
    stw r29, 0x6a4(r3)
    b lbl_8032933C
lbl_80329108:
    addi r7, r11, 0x58
    li r5, 0x5
    addi r29, r29, 0x5
lbl_80329114:
    cmpwi r29, 0x21
    slwi r12, r12, 1
    beq lbl_80329134
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
    addi r29, r29, 0x1
    b lbl_80329178
lbl_80329134:
    lwz r31, 0x69c(r3)
    li r29, 0x1
    lwzu r30, 0x4(r31)
    lwzu r0, 0x4(r7)
    rlwimi r12, r30, 1, 31, 31
    stw r31, 0x69c(r3)
    stw r30, 0x6a0(r3)
    b lbl_80329164
lbl_80329154:
    slwi r12, r12, 1
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
lbl_80329164:
    cmpw r12, r0
    addi r29, r29, 0x1
    addi r5, r5, 0x1
    bgt lbl_80329154
    b lbl_80329184
lbl_80329178:
    cmpw r12, r0
    addi r5, r5, 0x1
    bgt lbl_80329114
lbl_80329184:
    stw r29, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r11, r0
    lwz r0, 0x40(r11)
    lwz r5, 0x8c(r5)
    add r0, r0, r12
    lbzx r5, r5, r0
    b lbl_8032933C
lbl_803291A4:
    cmpwi r29, 0x21
    lwz r12, 0x69c(r3)
    beq lbl_80329258
    cmpwi r29, 0x20
    rlwnm r5, r30, r5, 27, 31
    beq lbl_803291E4
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    add r5, r29, r31
    beq lbl_803292BC
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_803292BC
    mr r5, r12
    b lbl_8032933C
lbl_803291E4:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 4, 28, 31
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    stw r30, 0x6a0(r3)
    stw r31, 0x6a4(r3)
    beq lbl_80329210
    mr r5, r12
    b lbl_8032933C
lbl_80329210:
    slwi r12, r5, 27
    addi r7, r11, 0x58
    rlwimi r12, r30, 31, 1, 31
    li r29, 0x5
lbl_80329220:
    subfic r30, r29, 0x1f
    lwzu r0, 0x4(r7)
    srw r5, r12, r30
    addi r29, r29, 0x1
    cmpw r5, r0
    bgt lbl_80329220
    stw r29, 0x6a4(r3)
lbl_8032923C:
    slwi r0, r29, 2
    lwz r10, 0x40(r11)
    add r7, r11, r0
    lwz r7, 0x8c(r7)
    add r0, r10, r5
    lbzx r5, r7, r0
    b lbl_8032933C
lbl_80329258:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    srwi r5, r30, 27
    lbzx r29, r11, r5
    lbzx r31, r31, r5
    cmpwi r29, 0xff
    stw r30, 0x6a0(r3)
    addi r31, r31, 0x1
    beq lbl_80329288
    stw r31, 0x6a4(r3)
    mr r5, r29
    b lbl_8032933C
lbl_80329288:
    li r29, 0x5
    li r7, 0x14
lbl_80329290:
    subfic r12, r29, 0x1f
    addi r7, r7, 0x4
    add r5, r11, r7
    addi r29, r29, 0x1
    lwz r0, 0x44(r5)
    srw r5, r30, r12
    cmpw cr1, r5, r0
    bgt cr1, lbl_80329290
    addi r0, r29, 0x1
    stw r0, 0x6a4(r3)
    b lbl_8032923C
lbl_803292BC:
    subfic r0, r29, 0x21
    lwz r12, 0x69c(r3)
    slw r10, r9, r0
    andc r5, r30, r10
    addi r10, r11, 0x44
    subfic r7, r29, 0x21
    lwzu r30, 0x4(r12)
    addi r29, r7, 0x1
    slwi r7, r7, 2
    slwi r5, r5, 1
    stw r12, 0x69c(r3)
    add r10, r10, r7
    rlwimi r5, r30, 1, 31, 31
    li r12, 0x2
    stw r30, 0x6a0(r3)
    lwzu r7, 0x4(r10)
    b lbl_80329314
lbl_80329300:
    slwi r5, r5, 1
    lwzu r7, 0x4(r10)
    add r5, r5, r31
    addi r12, r12, 0x1
    addi r29, r29, 0x1
lbl_80329314:
    cmpw r5, r7
    rlwnm r31, r30, r12, 31, 31
    bgt lbl_80329300
    stw r12, 0x6a4(r3)
    slwi r0, r29, 2
    add r7, r11, r0
    lwz r0, 0x40(r11)
    lwz r7, 0x8c(r7)
    add r0, r0, r5
    lbzx r5, r7, r0
lbl_8032933C:
    clrlwi. r30, r5, 28
    srawi r7, r5, 4
    beq lbl_803293D4
    lwz r10, 0x6a4(r3)
    add r6, r6, r7
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r30
    subi r29, r10, 0x1
    bgt lbl_8032937C
    add r0, r10, r30
    slw r10, r7, r29
    stw r0, 0x6a4(r3)
    subfic r0, r30, 0x20
    srw r7, r10, r0
    b lbl_803293A8
lbl_8032937C:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    add r0, r7, r0
    stw r10, 0x69c(r3)
    stw r12, 0x6a4(r3)
    subfic r12, r30, 0x20
    srw r7, r0, r12
lbl_803293A8:
    cntlzw r5, r7
    subfic r0, r30, 0x20
    cmpw cr1, r5, r0
    ble cr1, lbl_803293C4
    slw r0, r9, r30
    add r5, r0, r7
    addi r7, r5, 0x1
lbl_803293C4:
    lbzx r0, r8, r6
    slwi r0, r0, 1
    sthx r7, r4, r0
    b lbl_803293E0
lbl_803293D4:
    cmpwi cr1, r7, 0xf
    bne cr1, lbl_803293EC
    addi r6, r6, 0xf
lbl_803293E0:
    addi r6, r6, 0x1
lbl_803293E4:
    cmpwi cr1, r6, 0x40
    blt cr1, lbl_803290CC
lbl_803293EC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80329400
// ----------------------------------------------------------------------------
asm void fn_80329400() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049D398
    bl OSRegisterVersion
    lis r11, 0xe000
    lis r10, lbl_8046F218@ha
    lis r6, lbl_8046F340@ha
    li r3, 0x4
    addi r9, r11, 0x2000
    addi r8, r10, lbl_8046F218@l
    addi r7, r11, 0x2800
    addi r5, r11, 0x2a00
    addi r4, r6, lbl_8046F340@l
    addi r0, r11, 0x3480
    oris r3, r3, 0x4
    stw r11, lbl_8046F218@l(r10)
    stw r9, 0x4(r8)
    stw r7, 0x8(r8)
    stw r11, lbl_8046F340@l(r6)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    li r0, 0x1
    stw r0, lbl_8049E420
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8032949C
// ----------------------------------------------------------------------------
asm void fn_8032949C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    cmpwi r3, 0x0
    beq lbl_803294C0
    cmpwi r4, 0x0
    bne lbl_803294C8
lbl_803294C0:
    li r3, 0x0
    b lbl_803299E4
lbl_803294C8:
    clrlwi. r0, r5, 31
    lwz r7, 0x0(r4)
    addi r6, r4, 0x50
    add r8, r6, r7
    beq lbl_803294F4
    lwz r0, 0x4(r4)
    mr r19, r3
    li r9, 0x1
    slwi r0, r0, 1
    add r20, r3, r0
    b lbl_80329500
lbl_803294F4:
    mr r19, r3
    addi r20, r3, 0x2
    li r9, 0x2
lbl_80329500:
    rlwinm. r0, r5, 0, 30, 30
    li r17, 0x0
    beq lbl_80329510
    li r17, 0x1
lbl_80329510:
    cmpwi r7, 0x0
    bne lbl_803296F4
    lbz r0, 0x0(r6)
    li r23, 0x0
    lha r21, 0x48(r4)
    slwi r18, r9, 1
    addi r12, r6, 0x1
    lha r22, 0x4a(r4)
    extrwi r15, r0, 3, 25
    clrlwi r16, r0, 28
    xoris r8, r23, 0x8000
    li r14, 0x2
    li r11, 0x400
    li r10, 0x0
    li r9, 0x7fff
    li r7, -0x8000
    li r6, -0x1
    li r5, 0x5a82
    li r0, 0x4000
    b lbl_803296E4
lbl_80329560:
    clrlwi. r3, r14, 28
    bne lbl_8032957C
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    addi r14, r14, 0x2
    extrwi r15, r3, 3, 25
    clrlwi r16, r3, 28
lbl_8032957C:
    clrlwi. r3, r14, 31
    beq lbl_80329598
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    slwi r3, r3, 28
    srawi r25, r3, 28
    b lbl_803295A4
lbl_80329598:
    lbz r3, 0x0(r12)
    extlwi r3, r3, 4, 24
    srawi r25, r3, 28
lbl_803295A4:
    clrlslwi r24, r15, 24, 2
    clrlwi r3, r16, 24
    add r24, r4, r24
    extsh r26, r22
    lha r22, 0xa(r24)
    slw r3, r25, r3
    lha r24, 0x8(r24)
    extsh r25, r21
    mullw r26, r26, r22
    slwi r22, r3, 11
    addi r14, r14, 0x1
    mullw r25, r25, r24
    srawi r3, r26, 31
    srawi r24, r25, 31
    addc r25, r26, r25
    adde r24, r3, r24
    srawi r3, r22, 31
    addc r22, r25, r22
    adde r3, r24, r3
    addc r22, r22, r11
    adde r3, r3, r10
    rotrwi r24, r22, 11
    rlwimi r24, r3, 21, 0, 10
    srawi r3, r3, 11
    xoris r25, r3, 0x8000
    subfc r22, r24, r9
    subfe r25, r25, r8
    subfe r25, r8, r8
    neg. r25, r25
    beq lbl_80329628
    li r24, 0x7fff
    li r3, 0x0
    b lbl_8032964C
lbl_80329628:
    xoris r22, r3, 0x8000
    xoris r26, r6, 0x8000
    subfc r25, r7, r24
    subfe r26, r26, r22
    subfe r26, r22, r22
    neg. r26, r26
    beq lbl_8032964C
    li r24, -0x8000
    li r3, -0x1
lbl_8032964C:
    cmpwi r17, 0x0
    mr r22, r21
    mr r21, r24
    beq lbl_803296D0
    slwi r26, r24, 1
    slwi r25, r3, 1
    rlwimi r25, r24, 1, 31, 31
    xoris r3, r10, 0x8000
    mulhwu r24, r26, r5
    mullw r25, r25, r5
    mulli r26, r26, 0x5a82
    add r25, r24, r25
    addc r24, r26, r0
    adde r25, r25, r10
    rotrwi r24, r24, 15
    srawi r27, r25, 15
    rlwimi r24, r25, 17, 0, 14
    xoris r26, r27, 0x8000
    subfc r25, r24, r9
    subfe r26, r26, r3
    subfe r26, r3, r3
    neg. r26, r26
    beq lbl_803296B0
    li r24, 0x7fff
    b lbl_803296D0
lbl_803296B0:
    xoris r3, r27, 0x8000
    xoris r26, r6, 0x8000
    subfc r25, r7, r24
    subfe r26, r26, r3
    subfe r26, r3, r3
    neg. r26, r26
    beq lbl_803296D0
    li r24, -0x8000
lbl_803296D0:
    sth r24, 0x0(r20)
    add r20, r20, r18
    addi r23, r23, 0x1
    sth r24, 0x0(r19)
    add r19, r19, r18
lbl_803296E4:
    lwz r3, 0x4(r4)
    cmplw r23, r3
    blt lbl_80329560
    b lbl_803299E4
lbl_803296F4:
    lbz r0, 0x0(r6)
    slwi r31, r9, 1
    lbz r3, 0x0(r8)
    addi r9, r8, 0x1
    li r27, 0x0
    lha r29, 0x48(r4)
    addi r24, r6, 0x1
    lha r28, 0x4a(r4)
    extrwi r22, r0, 3, 25
    clrlwi r21, r0, 28
    lha r18, 0x4c(r4)
    extrwi r11, r3, 3, 25
    lha r0, 0x4e(r4)
    clrlwi r12, r3, 28
    xoris r6, r27, 0x8000
    li r23, 0x2
    li r10, 0x2
    li r8, 0x0
    li r7, 0x7fff
    li r5, -0x8000
    li r14, -0x1
    b lbl_803299D8
lbl_8032974C:
    clrlwi. r3, r23, 28
    bne lbl_80329768
    lbz r3, 0x0(r24)
    addi r24, r24, 0x1
    addi r23, r23, 0x2
    extrwi r22, r3, 3, 25
    clrlwi r21, r3, 28
lbl_80329768:
    clrlwi. r3, r23, 31
    beq lbl_80329784
    lbz r3, 0x0(r24)
    addi r24, r24, 0x1
    slwi r3, r3, 28
    srawi r15, r3, 28
    b lbl_80329790
lbl_80329784:
    lbz r3, 0x0(r24)
    extlwi r3, r3, 4, 24
    srawi r15, r3, 28
lbl_80329790:
    clrlslwi r3, r22, 24, 2
    clrlwi r16, r21, 24
    add r3, r4, r3
    extsh r26, r28
    lha r25, 0xa(r3)
    slw r15, r15, r16
    lha r3, 0x8(r3)
    extsh r16, r29
    mullw r25, r26, r25
    slwi r15, r15, 11
    addi r23, r23, 0x1
    mullw r16, r16, r3
    srawi r26, r25, 31
    srawi r3, r16, 31
    addc r25, r25, r16
    adde r16, r26, r3
    srawi r3, r15, 31
    addc r15, r25, r15
    adde r16, r16, r3
    li r3, 0x400
    addc r15, r15, r3
    adde r3, r16, r8
    rotrwi r25, r15, 11
    srawi r26, r3, 11
    rlwimi r25, r3, 21, 0, 10
    xoris r15, r26, 0x8000
    subfc r3, r25, r7
    subfe r15, r15, r6
    subfe r15, r6, r6
    neg. r15, r15
    beq lbl_80329818
    li r25, 0x7fff
    li r26, 0x0
    b lbl_8032983C
lbl_80329818:
    xoris r3, r26, 0x8000
    xoris r16, r14, 0x8000
    subfc r15, r5, r25
    subfe r16, r16, r3
    subfe r16, r3, r3
    neg. r16, r16
    beq lbl_8032983C
    li r25, -0x8000
    li r26, -0x1
lbl_8032983C:
    clrlwi. r3, r10, 28
    mr r28, r29
    mr r29, r25
    bne lbl_80329860
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    addi r10, r10, 0x2
    extrwi r11, r3, 3, 25
    clrlwi r12, r3, 28
lbl_80329860:
    clrlwi. r3, r10, 31
    beq lbl_8032987C
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    slwi r3, r3, 28
    srawi r15, r3, 28
    b lbl_80329888
lbl_8032987C:
    lbz r3, 0x0(r9)
    extlwi r3, r3, 4, 24
    srawi r15, r3, 28
lbl_80329888:
    clrlslwi r3, r11, 24, 2
    clrlwi r16, r12, 24
    add r30, r4, r3
    addi r10, r10, 0x1
    extsh r3, r0
    lha r0, 0x2a(r30)
    lha r30, 0x28(r30)
    slw r16, r15, r16
    extsh r15, r18
    mullw r0, r3, r0
    slwi r16, r16, 11
    mullw r30, r15, r30
    srawi r3, r0, 31
    srawi r15, r30, 31
    addc r0, r0, r30
    adde r3, r3, r15
    srawi r15, r16, 31
    addc r0, r0, r16
    adde r15, r3, r15
    li r3, 0x400
    addc r3, r0, r3
    adde r0, r15, r8
    rotrwi r15, r3, 11
    srawi r3, r0, 11
    rlwimi r15, r0, 21, 0, 10
    xoris r16, r3, 0x8000
    subfc r0, r15, r7
    subfe r16, r16, r6
    subfe r16, r6, r6
    neg. r16, r16
    beq lbl_80329910
    li r15, 0x7fff
    li r3, 0x0
    b lbl_80329934
lbl_80329910:
    xoris r0, r3, 0x8000
    xoris r16, r14, 0x8000
    subfc r30, r5, r15
    subfe r16, r16, r0
    subfe r16, r0, r0
    neg. r16, r16
    beq lbl_80329934
    li r15, -0x8000
    li r3, -0x1
lbl_80329934:
    cmpwi r17, 0x0
    mr r0, r18
    mr r18, r15
    beq lbl_803299C4
    addc r15, r25, r15
    xoris r16, r8, 0x8000
    adde r25, r26, r3
    li r3, 0x5a82
    mulhwu r3, r15, r3
    li r26, 0x5a82
    mullw r25, r25, r26
    add r25, r3, r25
    li r3, 0x4000
    mulli r15, r15, 0x5a82
    addc r15, r15, r3
    adde r3, r25, r8
    rotrwi r25, r15, 15
    srawi r26, r3, 15
    rlwimi r25, r3, 17, 0, 14
    xoris r15, r26, 0x8000
    subfc r3, r25, r7
    subfe r15, r15, r16
    subfe r15, r16, r16
    neg. r15, r15
    beq lbl_803299A0
    li r25, 0x7fff
    b lbl_803299C0
lbl_803299A0:
    xoris r3, r26, 0x8000
    xoris r16, r14, 0x8000
    subfc r15, r5, r25
    subfe r16, r16, r3
    subfe r16, r3, r3
    neg. r16, r16
    beq lbl_803299C0
    li r25, -0x8000
lbl_803299C0:
    mr r15, r25
lbl_803299C4:
    sth r25, 0x0(r20)
    add r20, r20, r31
    addi r27, r27, 0x1
    sth r15, 0x0(r19)
    add r19, r19, r31
lbl_803299D8:
    lwz r3, 0x4(r4)
    cmplw r27, r3
    blt lbl_8032974C
lbl_803299E4:
    addi r11, r1, 0x50
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_803299FC
// ----------------------------------------------------------------------------
asm void fn_803299FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    subis r0, r4, 0x20
    cmplwi r0, 0xaf30
    beq lbl_80329A38
    lis r5, lbl_8038DC10@ha
    la r3, lbl_8049D3A0
    addi r5, r5, lbl_8038DC10@l
    li r4, 0x19
    opword 0x4CC63182
    bl OSPanic
lbl_80329A38:
    lwz r0, 0x8(r31)
    li r3, 0x0
    li r5, 0x1
    add r0, r0, r31
    stw r0, 0x8(r31)
    b lbl_80329AEC
lbl_80329A50:
    lwz r4, 0x8(r31)
    clrlslwi r6, r3, 16, 3
    lwzx r0, r4, r6
    cmpwi r0, 0x0
    beq lbl_80329A98
    add r0, r31, r0
    stwx r0, r4, r6
    lwz r4, 0x8(r31)
    lwzx r4, r4, r6
    lbz r0, 0x23(r4)
    cmpwi r0, 0x0
    bne lbl_80329A98
    lwz r0, 0x8(r4)
    add r0, r31, r0
    stw r0, 0x8(r4)
    lwz r4, 0x8(r31)
    lwzx r4, r4, r6
    stb r5, 0x23(r4)
lbl_80329A98:
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_80329AE8
    add r0, r31, r0
    stw r0, 0x4(r4)
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r4, 0x4(r4)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    bne lbl_80329AE8
    lwz r0, 0x8(r4)
    add r0, r31, r0
    stw r0, 0x8(r4)
    lwz r0, 0x8(r31)
    add r4, r0, r6
    lwz r4, 0x4(r4)
    stb r5, 0x2(r4)
lbl_80329AE8:
    addi r3, r3, 0x1
lbl_80329AEC:
    lwz r0, 0x4(r31)
    clrlwi r4, r3, 16
    cmplw r4, r0
    blt lbl_80329A50
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80329B10
// ----------------------------------------------------------------------------
asm void fn_80329B10() {
    nofralloc
    lwz r5, 0x4(r3)
    lwz r3, 0x8(r3)
    divwu r0, r4, r5
    mullw r0, r0, r5
    subf r0, r0, r4
    slwi r0, r0, 3
    add r3, r3, r0
    blr
}

