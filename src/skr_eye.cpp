#include "types.h"

// Translation unit: src/skr_eye.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern "C" float lbl_804A0608;

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF4();
extern "C" void fn_80018AF8();
extern "C" void fn_80018AFC();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018BD4();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_80020D20();
extern "C" void fn_8002AE00();
extern "C" void fn_8002E628();
extern "C" void fn_80031A74();
extern "C" void fn_8003452C();
extern "C" void fn_800515D8();
extern "C" void fn_800515DC();
extern "C" void fn_800CA050();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_801011BC();
extern "C" void fn_801011C4();
extern "C" void fn_801015A0();
extern "C" void fn_8010187C();
extern "C" void fn_80101FB4();
extern "C" void fn_8010254C();
extern "C" void fn_80102C84();
extern "C" void fn_8010321C();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_80181454();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void fn_801D0CD0();
extern "C" void fn_801D4A9C();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_801011BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801011BC() {
    nofralloc
    li r5, 0x0
    b fn_801011C4
}

// ----------------------------------------------------------------------------
// fn_801011C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801011C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x6
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_8010157C
    cmpwi r31, 0x0
    beq lbl_80101208
    b lbl_8010121C
lbl_80101208:
    lwz r3, 0x110(r29)
    li r4, 0x418
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_8010121C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x418
    bl memset
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x24(r31)
    addi r3, r31, 0x28
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x88(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x8c(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x94(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x98(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x9c(r31)
    addi r3, r31, 0xa0
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x100
    addi r4, r31, 0xa0
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x160(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x164(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x168(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x16c(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x170(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x174(r31)
    addi r3, r31, 0x178
    lwz r4, 0x164(r31)
    addi r4, r4, 0x224
    lwz r5, 0x168(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1d8
    addi r4, r31, 0x178
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x238(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x23c(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x240(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x244(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x248(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x24c(r31)
    addi r3, r31, 0x250
    lwz r4, 0x23c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x240(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x2b0
    addi r4, r31, 0x250
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x310(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x314(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x318(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x31c(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x320(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x324(r31)
    addi r3, r31, 0x328
    lwz r4, 0x314(r31)
    addi r4, r4, 0x224
    lwz r5, 0x318(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x388
    addi r4, r31, 0x328
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x3e8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x3ec(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0x3f0(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0x3f4(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_80181504
    stw r3, 0x3f8(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_80181504
    stw r3, 0x3fc(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x400(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x404(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0x408(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0x40c(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0x410(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0x414(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x6
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_80101588
lbl_8010157C:
    mr r3, r29
    mr r4, r30
    bl fn_801015A0
lbl_80101588:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801015A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801015A0() {
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
    stfd f29, -0x30(r12)
    opword 0xF3AC0FD8
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_804A0608
    la r31, lbl_804A0608
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0xc0(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f29, 0xcc(r1)
    stfs f29, 0xb0(r1)
    stfs f31, 0xb4(r1)
    stfs f31, 0xb8(r1)
    stfs f29, 0xbc(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010187C
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80101FB4
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010254C
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_80102C84
    lfs f1, lbl_804A0608
    stfs f1, 0xc0(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0xc4(r1)
    stfs f1, 0xc8(r1)
    fmr f0, f29
    stfs f0, 0xcc(r1)
    stfs f0, 0xb0(r1)
    stfs f1, 0xb4(r1)
    stfs f1, 0xb8(r1)
    stfs f0, 0xbc(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lwz r3, 0xb0(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xb8(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0xc8(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010321C
    li r3, 0x1
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
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8010187C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010187C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x260
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
    subi r11, r12, 0xf0
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f18, f1
    fmr f19, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xa0
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0608
    lfs f22, 0x4(r31)
    lfs f23, 0x1c(r31)
    lfs f24, 0x24(r31)
    lfs f20, lbl_804A0608
    lfs f21, 0x18(r31)
    lfs f26, 0x20(r31)
    lfs f27, 0x2c(r31)
    lfs f25, 0x28(r31)
    lfs f28, 0x30(r31)
    lfs f29, 0x34(r31)
    lfs f30, 0x38(r31)
    lfs f31, 0x3c(r31)
lbl_80101A68:
    add r3, r26, r24
    lwz r3, 0x90(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_80101ACC
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0xa0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x8c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_80101B14
lbl_80101ACC:
    add r4, r26, r25
    addi r3, r4, 0x100
    addi r4, r4, 0xa0
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x98(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_80101B14:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0xa0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x100
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f18
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0x3fc(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f20, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f20, 0x68(r1)
    stfs f20, 0x6c(r1)
    cmpwi r27, 0x84
    bge lbl_80101C54
    cmpwi r27, 0x2e
    beq lbl_80101C8C
    bge lbl_80101C40
    cmpwi r27, 0x2a
    bge lbl_80101C34
    cmpwi r27, 0x12
    bge lbl_80101CF4
    cmpwi r27, 0x10
    bge lbl_80101C8C
    b lbl_80101CF4
lbl_80101C34:
    cmpwi r27, 0x2c
    bge lbl_80101CF4
    b lbl_80101C8C
lbl_80101C40:
    cmpwi r27, 0x6b
    bge lbl_80101CF4
    cmpwi r27, 0x66
    bge lbl_80101C8C
    b lbl_80101CF4
lbl_80101C54:
    cmpwi r27, 0x8b
    beq lbl_80101C8C
    bge lbl_80101C80
    cmpwi r27, 0x88
    bge lbl_80101C74
    cmpwi r27, 0x86
    bge lbl_80101CF4
    b lbl_80101C8C
lbl_80101C74:
    cmpwi r27, 0x8a
    bge lbl_80101CF4
    b lbl_80101C8C
lbl_80101C80:
    cmpwi r27, 0x160
    beq lbl_80101CC0
    b lbl_80101CF4
lbl_80101C8C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_80101C9C
    stfs f22, 0x50(r1)
lbl_80101C9C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_80101CAC
    stfs f23, 0x54(r1)
lbl_80101CAC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    ble lbl_80101D58
    stfs f26, 0x54(r1)
    b lbl_80101D58
lbl_80101CC0:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_80101CD0
    stfs f22, 0x50(r1)
lbl_80101CD0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    bge lbl_80101CE0
    stfs f24, 0x54(r1)
lbl_80101CE0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    ble lbl_80101D58
    stfs f25, 0x54(r1)
    b lbl_80101D58
lbl_80101CF4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_80101D08
    stfs f26, 0x50(r1)
lbl_80101D08:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80101D1C
    stfs f24, 0x54(r1)
lbl_80101D1C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80101D30
    stfs f27, 0x54(r1)
lbl_80101D30:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80101D44
    stfs f24, 0x58(r1)
lbl_80101D44:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80101D58
    stfs f26, 0x58(r1)
lbl_80101D58:
    cmpwi r30, 0x0
    bne lbl_80101DFC
    addi r3, r1, 0x30
    lwz r4, 0x3f0(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f17, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f17
    fdivs f0, f0, f28
    fcmpo cr0, f0, f29
    ble lbl_80101DB8
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f17, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f17
    fdivs f0, f0, f28
    stfs f0, 0xa0(r1)
    b lbl_80101DBC
lbl_80101DB8:
    stfs f29, 0xa0(r1)
lbl_80101DBC:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f29
    bge lbl_80101DCC
    stfs f29, 0xa0(r1)
lbl_80101DCC:
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f20, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_80101DFC:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80101E18
    stfs f0, 0x54(r1)
lbl_80101E18:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_80101E34
    stfs f0, 0x58(r1)
lbl_80101E34:
    add r4, r26, r24
    lwz r3, 0x90(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x90(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_80101A68
    li r3, 0x1
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
    subi r11, r10, 0xf0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80101FB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80101FB4() {
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
    subi r11, r12, 0xa0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0608
    lfs f26, 0x4(r3)
    lfs f27, 0x1c(r3)
    lfs f24, lbl_804A0608
    lfs f25, 0x40(r3)
    lfs f29, 0x20(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x18(r3)
    lfs f28, 0x28(r3)
lbl_801020FC:
    add r3, r27, r25
    lwz r3, 0x168(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80102160
    add r4, r27, r26
    addi r3, r4, 0x1d8
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x164(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x168(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x178
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_801021A8
lbl_80102160:
    add r4, r27, r26
    addi r3, r4, 0x1d8
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x170(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x168(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x178
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_801021A8:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x178
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x1d8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f22
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0x3fc(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f24, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_801022E8
    cmpwi r28, 0x2e
    beq lbl_80102320
    bge lbl_801022D4
    cmpwi r28, 0x2a
    bge lbl_801022C8
    cmpwi r28, 0x12
    bge lbl_80102388
    cmpwi r28, 0x10
    bge lbl_80102320
    b lbl_80102388
lbl_801022C8:
    cmpwi r28, 0x2c
    bge lbl_80102388
    b lbl_80102320
lbl_801022D4:
    cmpwi r28, 0x6b
    bge lbl_80102388
    cmpwi r28, 0x66
    bge lbl_80102320
    b lbl_80102388
lbl_801022E8:
    cmpwi r28, 0x8b
    beq lbl_80102320
    bge lbl_80102314
    cmpwi r28, 0x88
    bge lbl_80102308
    cmpwi r28, 0x86
    bge lbl_80102388
    b lbl_80102320
lbl_80102308:
    cmpwi r28, 0x8a
    bge lbl_80102388
    b lbl_80102320
lbl_80102314:
    cmpwi r28, 0x160
    beq lbl_80102354
    b lbl_80102388
lbl_80102320:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80102330
    stfs f26, 0x20(r1)
lbl_80102330:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_80102340
    stfs f27, 0x24(r1)
lbl_80102340:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    ble lbl_801023EC
    stfs f29, 0x24(r1)
    b lbl_801023EC
lbl_80102354:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80102364
    stfs f26, 0x20(r1)
lbl_80102364:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_80102374
    stfs f27, 0x24(r1)
lbl_80102374:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_801023EC
    stfs f28, 0x24(r1)
    b lbl_801023EC
lbl_80102388:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_8010239C
    stfs f29, 0x20(r1)
lbl_8010239C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_801023B0
    stfs f30, 0x24(r1)
lbl_801023B0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_801023C4
    stfs f29, 0x24(r1)
lbl_801023C4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_801023D8
    stfs f30, 0x28(r1)
lbl_801023D8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_801023EC
    stfs f31, 0x28(r1)
lbl_801023EC:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_80102408
    stfs f0, 0x24(r1)
lbl_80102408:
    add r4, r27, r25
    lwz r3, 0x168(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x168(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x168(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x168(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x168(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x168(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_801020FC
    li r3, 0x1
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
    subi r11, r10, 0xa0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8010254C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010254C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x260
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
    subi r11, r12, 0xf0
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f18, f1
    fmr f19, f2
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r4, r1, 0x14
    addi r3, r1, 0x20
    bl fn_8002E628
    lwz r3, 0x377c(r24)
    li r4, 0xa2
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0608
    lfs f22, 0x4(r31)
    lfs f23, 0x1c(r31)
    lfs f24, 0x24(r31)
    lfs f20, lbl_804A0608
    lfs f21, 0x18(r31)
    lfs f26, 0x20(r31)
    lfs f27, 0x2c(r31)
    lfs f25, 0x28(r31)
    lfs f28, 0x30(r31)
    lfs f29, 0x34(r31)
    lfs f30, 0x38(r31)
    lfs f31, 0x48(r31)
lbl_80102738:
    add r3, r26, r24
    lwz r3, 0x240(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_8010279C
    add r4, r26, r25
    addi r3, r4, 0x2b0
    addi r4, r4, 0x250
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x23c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x240(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x250
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_801027E4
lbl_8010279C:
    add r4, r26, r25
    addi r3, r4, 0x2b0
    addi r4, r4, 0x250
    bl fn_801734E4
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x248(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x240(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x250
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_801027E4:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x250
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x2b0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f18
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_80173754
    addi r3, r1, 0x50
    addi r4, r1, 0x120
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0xc0
    lwz r4, 0x414(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x40(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x44(r1)
    lfs f1, 0xec(r1)
    lfs f0, 0x11c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x48(r1)
    stfs f20, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f20, 0x68(r1)
    stfs f20, 0x6c(r1)
    cmpwi r27, 0x84
    bge lbl_80102924
    cmpwi r27, 0x2e
    beq lbl_8010295C
    bge lbl_80102910
    cmpwi r27, 0x2a
    bge lbl_80102904
    cmpwi r27, 0x12
    bge lbl_801029C4
    cmpwi r27, 0x10
    bge lbl_8010295C
    b lbl_801029C4
lbl_80102904:
    cmpwi r27, 0x2c
    bge lbl_801029C4
    b lbl_8010295C
lbl_80102910:
    cmpwi r27, 0x6b
    bge lbl_801029C4
    cmpwi r27, 0x66
    bge lbl_8010295C
    b lbl_801029C4
lbl_80102924:
    cmpwi r27, 0x8b
    beq lbl_8010295C
    bge lbl_80102950
    cmpwi r27, 0x88
    bge lbl_80102944
    cmpwi r27, 0x86
    bge lbl_801029C4
    b lbl_8010295C
lbl_80102944:
    cmpwi r27, 0x8a
    bge lbl_801029C4
    b lbl_8010295C
lbl_80102950:
    cmpwi r27, 0x160
    beq lbl_80102990
    b lbl_801029C4
lbl_8010295C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_8010296C
    stfs f22, 0x50(r1)
lbl_8010296C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    bge lbl_8010297C
    stfs f23, 0x54(r1)
lbl_8010297C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    ble lbl_80102A28
    stfs f26, 0x54(r1)
    b lbl_80102A28
lbl_80102990:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    bge lbl_801029A0
    stfs f22, 0x50(r1)
lbl_801029A0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    bge lbl_801029B0
    stfs f24, 0x54(r1)
lbl_801029B0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    ble lbl_80102A28
    stfs f25, 0x54(r1)
    b lbl_80102A28
lbl_801029C4:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_801029D8
    stfs f26, 0x50(r1)
lbl_801029D8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_801029EC
    stfs f24, 0x54(r1)
lbl_801029EC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_80102A00
    stfs f27, 0x54(r1)
lbl_80102A00:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_80102A14
    stfs f24, 0x58(r1)
lbl_80102A14:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_80102A28
    stfs f26, 0x58(r1)
lbl_80102A28:
    cmpwi r30, 0x0
    bne lbl_80102ACC
    addi r3, r1, 0x30
    lwz r4, 0x408(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f17, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f17
    fdivs f0, f0, f28
    fcmpo cr0, f0, f29
    ble lbl_80102A88
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f17, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f17
    fdivs f0, f0, f28
    stfs f0, 0xa0(r1)
    b lbl_80102A8C
lbl_80102A88:
    stfs f29, 0xa0(r1)
lbl_80102A8C:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f29
    bge lbl_80102A9C
    stfs f29, 0xa0(r1)
lbl_80102A9C:
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f20, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x20(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_80102ACC:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80102AE8
    stfs f0, 0x54(r1)
lbl_80102AE8:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_80102B04
    stfs f0, 0x58(r1)
lbl_80102B04:
    add r4, r26, r24
    lwz r3, 0x240(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x240(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x240(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x2
    blt lbl_80102738
    li r3, 0x1
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
    subi r11, r10, 0xf0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80102C84
// ----------------------------------------------------------------------------
extern "C" asm void fn_80102C84() {
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
    subi r11, r12, 0xa0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f22, f1
    fmr f23, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A0608
    lfs f26, 0x4(r3)
    lfs f27, 0x1c(r3)
    lfs f24, lbl_804A0608
    lfs f25, 0x40(r3)
    lfs f29, 0x20(r3)
    lfs f30, 0x44(r3)
    lfs f31, 0x18(r3)
    lfs f28, 0x28(r3)
lbl_80102DCC:
    add r3, r27, r25
    lwz r3, 0x318(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_80102E30
    add r4, r27, r26
    addi r3, r4, 0x388
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x314(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x318(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x328
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_80102E78
lbl_80102E30:
    add r4, r27, r26
    addi r3, r4, 0x388
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x320(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x318(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x328
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_80102E78:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x328
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x388
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f22
    bl fn_800515DC
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_800515D8
    addi r3, r1, 0x90
    lwz r4, 0x414(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f24, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x30(r1)
    stfs f25, 0x34(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r28, 0x84
    bge lbl_80102FB8
    cmpwi r28, 0x2e
    beq lbl_80102FF0
    bge lbl_80102FA4
    cmpwi r28, 0x2a
    bge lbl_80102F98
    cmpwi r28, 0x12
    bge lbl_80103058
    cmpwi r28, 0x10
    bge lbl_80102FF0
    b lbl_80103058
lbl_80102F98:
    cmpwi r28, 0x2c
    bge lbl_80103058
    b lbl_80102FF0
lbl_80102FA4:
    cmpwi r28, 0x6b
    bge lbl_80103058
    cmpwi r28, 0x66
    bge lbl_80102FF0
    b lbl_80103058
lbl_80102FB8:
    cmpwi r28, 0x8b
    beq lbl_80102FF0
    bge lbl_80102FE4
    cmpwi r28, 0x88
    bge lbl_80102FD8
    cmpwi r28, 0x86
    bge lbl_80103058
    b lbl_80102FF0
lbl_80102FD8:
    cmpwi r28, 0x8a
    bge lbl_80103058
    b lbl_80102FF0
lbl_80102FE4:
    cmpwi r28, 0x160
    beq lbl_80103024
    b lbl_80103058
lbl_80102FF0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80103000
    stfs f26, 0x20(r1)
lbl_80103000:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_80103010
    stfs f27, 0x24(r1)
lbl_80103010:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    ble lbl_801030BC
    stfs f29, 0x24(r1)
    b lbl_801030BC
lbl_80103024:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    bge lbl_80103034
    stfs f26, 0x20(r1)
lbl_80103034:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    bge lbl_80103044
    stfs f27, 0x24(r1)
lbl_80103044:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    ble lbl_801030BC
    stfs f28, 0x24(r1)
    b lbl_801030BC
lbl_80103058:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_8010306C
    stfs f29, 0x20(r1)
lbl_8010306C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_80103080
    stfs f30, 0x24(r1)
lbl_80103080:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_80103094
    stfs f29, 0x24(r1)
lbl_80103094:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_801030A8
    stfs f30, 0x28(r1)
lbl_801030A8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_801030BC
    stfs f31, 0x28(r1)
lbl_801030BC:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_801030D8
    stfs f0, 0x24(r1)
lbl_801030D8:
    add r4, r27, r25
    lwz r3, 0x318(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x318(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x318(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x318(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x318(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x318(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_80102DCC
    li r3, 0x1
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
    subi r11, r10, 0xa0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8010321C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010321C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x100
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
    mr r31, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0608
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x28
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x28
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0x58
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f30
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_801033E4
    cmpwi r28, 0x2c
    bge lbl_801033CC
    cmpwi r28, 0x12
    bge lbl_801033C0
    cmpwi r28, 0x10
    bge lbl_80103418
    b lbl_80103464
lbl_801033C0:
    cmpwi r28, 0x2a
    bge lbl_80103418
    b lbl_80103464
lbl_801033CC:
    cmpwi r28, 0x2e
    beq lbl_80103418
    blt lbl_80103464
    cmpwi r28, 0x66
    bge lbl_80103418
    b lbl_80103464
lbl_801033E4:
    cmpwi r28, 0x8a
    beq lbl_80103464
    bge lbl_80103410
    cmpwi r28, 0x86
    bge lbl_80103404
    cmpwi r28, 0x84
    bge lbl_80103418
    b lbl_80103464
lbl_80103404:
    cmpwi r28, 0x88
    bge lbl_80103418
    b lbl_80103464
lbl_80103410:
    cmpwi r28, 0x8c
    bge lbl_80103464
lbl_80103418:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0608
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80103430
    stfs f0, 0x10(r1)
lbl_80103430:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0608
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    bge lbl_80103448
    stfs f0, 0x14(r1)
lbl_80103448:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0608
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    ble lbl_8010350C
    stfs f0, 0x14(r1)
    b lbl_8010350C
lbl_80103464:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0608
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80103480
    stfs f0, 0x10(r1)
lbl_80103480:
    lfs f1, 0x10(r1)
    la r3, lbl_804A0608
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8010349C
    stfs f0, 0x10(r1)
lbl_8010349C:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0608
    lfs f0, 0x4c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801034B8
    stfs f0, 0x14(r1)
lbl_801034B8:
    lfs f1, 0x14(r1)
    la r3, lbl_804A0608
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801034D4
    stfs f0, 0x14(r1)
lbl_801034D4:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0608
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801034F0
    stfs f0, 0x18(r1)
lbl_801034F0:
    lfs f1, 0x18(r1)
    la r3, lbl_804A0608
    lfs f0, 0x54(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8010350C
    stfs f0, 0x18(r1)
lbl_8010350C:
    lwz r3, 0x20(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x20(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x1
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

