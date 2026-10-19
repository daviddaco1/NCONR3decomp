#include "types.h"

// Translation unit: src/krn_eye.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern "C" float lbl_804A02A8;

// Global data symbols (@ha/@l)

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001DA9C();
extern "C" void fn_80020D20();
extern "C" void fn_80054ECC();
extern "C" void fn_800E8D4C();
extern "C" void fn_800E8D54();
extern "C" void fn_800E9060();
extern "C" void fn_800E916C();
extern "C" void fn_800E9908();
extern "C" void fn_800E9CF4();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_800F5C60();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800E8D4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E8D4C() {
    nofralloc
    li r5, 0x0
    b fn_800E8D54
}

// ----------------------------------------------------------------------------
// fn_800E8D54
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E8D54() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x32
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800E903C
    cmpwi r31, 0x0
    beq lbl_800E8D98
    b lbl_800E8DAC
lbl_800E8D98:
    lwz r3, 0x110(r29)
    li r4, 0x340
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800E8DAC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x340
    bl memset
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x24(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x28(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x2c(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x30(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x34(r31)
    addi r3, r31, 0x38
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc8
    addi r4, r31, 0x38
    bl fn_801734E4
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x158(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x15c(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x160(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x164(r31)
    lwz r0, 0x160(r31)
    stw r0, 0x1c8(r31)
    stw r3, 0x1cc(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x1d0(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x1d4(r31)
    addi r3, r31, 0x168
    lwz r4, 0x15c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x160(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x198
    addi r4, r31, 0x168
    bl fn_801734E4
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x238(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x23c(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x240(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x244(r31)
    lwz r0, 0x240(r31)
    stw r0, 0x2a8(r31)
    stw r3, 0x2ac(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x2b0(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x2b4(r31)
    addi r3, r31, 0x248
    lwz r4, 0x23c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x240(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x278
    addi r4, r31, 0x248
    bl fn_801734E4
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x318(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x31c(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x320(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x324(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x328(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x32c(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x330(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x334(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x338(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x33c(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x32
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800E9048
lbl_800E903C:
    mr r3, r29
    mr r4, r30
    bl fn_800E9060
lbl_800E9048:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800E9060
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E9060() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x60
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lfs f2, lbl_804A02A8
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f2, 0x40(r1)
    la r3, lbl_804A02A8
    lfs f0, 0x4(r3)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    lfs f0, 0x8(r3)
    stfs f0, 0x4c(r1)
    stfs f0, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    lfs f2, 0xc(r3)
    lfs f1, 0x10(r3)
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x38(r1)
    lwz r0, 0x3c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_800E916C
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_800E9908
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_800E9CF4
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_28
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800E916C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E916C() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x270
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
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A02A8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A02A8
    lfs f17, 0x18(r3)
    lfs f18, 0x1c(r3)
    lfs f19, 0x20(r3)
    lfs f20, 0x24(r3)
    lfs f21, 0x28(r3)
    lfs f22, lbl_804A02A8
    lfs f24, 0x8(r3)
    lfs f25, 0x3c(r3)
    lfs f16, 0x14(r3)
    lfs f27, 0x40(r3)
    lfs f28, 0x44(r3)
    lfs f29, 0x48(r3)
    lfs f30, 0x4c(r3)
    lfs f31, 0x34(r3)
    lfs f26, 0xc(r3)
    lfs f23, 0x38(r3)
    lfs f0, 0x30(r3)
    stfd f0, 0x128(r1)
    lfs f0, 0x2c(r3)
    stfd f0, 0x120(r1)
lbl_800E9324:
    cmpwi r31, 0x0
    bne lbl_800E936C
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800E93B4
lbl_800E936C:
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800E93B4:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x60
    fmr f1, f14
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x3
    addi r3, r1, 0x90
    lwz r4, 0x334(r27)
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
    stfs f22, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x3
    bge lbl_800E94C0
    cmpwi r31, 0x0
    bge lbl_800E94B8
    b lbl_800E94C0
lbl_800E94B8:
    stfs f16, 0x34(r1)
    b lbl_800E94C4
lbl_800E94C0:
    stfs f22, 0x34(r1)
lbl_800E94C4:
    cmpwi r28, 0x84
    bge lbl_800E9524
    cmpwi r28, 0x2e
    beq lbl_800E9570
    bge lbl_800E9500
    cmpwi r28, 0x2a
    bge lbl_800E94F4
    cmpwi r28, 0x12
    bge lbl_800E9660
    cmpwi r28, 0x10
    bge lbl_800E9570
    b lbl_800E9660
lbl_800E94F4:
    cmpwi r28, 0x2c
    bge lbl_800E9660
    b lbl_800E9570
lbl_800E9500:
    cmpwi r28, 0x65
    beq lbl_800E9660
    bge lbl_800E9518
    cmpwi r28, 0x64
    bge lbl_800E964C
    b lbl_800E9660
lbl_800E9518:
    cmpwi r28, 0x6b
    bge lbl_800E9660
    b lbl_800E9570
lbl_800E9524:
    cmpwi r28, 0x8b
    beq lbl_800E9570
    bge lbl_800E9550
    cmpwi r28, 0x88
    bge lbl_800E9544
    cmpwi r28, 0x86
    bge lbl_800E9660
    b lbl_800E9570
lbl_800E9544:
    cmpwi r28, 0x8a
    bge lbl_800E9660
    b lbl_800E9570
lbl_800E9550:
    cmpwi r28, 0x23a
    beq lbl_800E9638
    bge lbl_800E9660
    cmpwi r28, 0xf8
    bge lbl_800E9660
    cmpwi r28, 0xf6
    bge lbl_800E9570
    b lbl_800E9660
lbl_800E9570:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800E9584
    stfs f17, 0x20(r1)
lbl_800E9584:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E9598
    stfs f18, 0x24(r1)
lbl_800E9598:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800E95AC
    stfs f19, 0x24(r1)
lbl_800E95AC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800E95C0
    stfs f20, 0x28(r1)
lbl_800E95C0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800E95D4
    stfs f21, 0x28(r1)
lbl_800E95D4:
    cmpwi r28, 0xf8
    bge lbl_800E9734
    cmpwi r28, 0xf6
    bge lbl_800E95E8
    b lbl_800E9734
lbl_800E95E8:
    stfs f22, 0x30(r1)
    stfs f22, 0x38(r1)
    stfs f22, 0x3c(r1)
    cmpwi r31, 0x3
    bge lbl_800E960C
    cmpwi r31, 0x0
    beq lbl_800E9618
    bge lbl_800E9624
    b lbl_800E9734
lbl_800E960C:
    cmpwi r31, 0x5
    bge lbl_800E9734
    b lbl_800E9630
lbl_800E9618:
    lfd f0, 0x120(r1)
    stfs f0, 0x34(r1)
    b lbl_800E9734
lbl_800E9624:
    lfd f0, 0x128(r1)
    stfs f0, 0x34(r1)
    b lbl_800E9734
lbl_800E9630:
    stfs f21, 0x34(r1)
    b lbl_800E9734
lbl_800E9638:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f31
    bge lbl_800E9734
    stfs f31, 0x20(r1)
    b lbl_800E9734
lbl_800E964C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f23
    bge lbl_800E9734
    stfs f23, 0x20(r1)
    b lbl_800E9734
lbl_800E9660:
    cmpwi r31, 0x0
    bne lbl_800E96D0
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800E967C
    stfs f24, 0x20(r1)
lbl_800E967C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800E9690
    stfs f25, 0x24(r1)
lbl_800E9690:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800E96A4
    stfs f22, 0x24(r1)
lbl_800E96A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800E96B8
    stfs f18, 0x28(r1)
lbl_800E96B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E9734
    stfs f26, 0x28(r1)
    b lbl_800E9734
lbl_800E96D0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800E96E4
    stfs f27, 0x20(r1)
lbl_800E96E4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800E96F8
    stfs f28, 0x24(r1)
lbl_800E96F8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800E970C
    stfs f29, 0x24(r1)
lbl_800E970C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800E9720
    stfs f30, 0x28(r1)
lbl_800E9720:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800E9734
    stfs f31, 0x28(r1)
lbl_800E9734:
    lfs f2, 0x24(r1)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_800E9764
    cmpwi r31, 0x0
    bne lbl_800E975C
    stfs f0, 0x24(r1)
    b lbl_800E9764
lbl_800E975C:
    fadds f0, f2, f1
    stfs f0, 0x24(r1)
lbl_800E9764:
    add r4, r27, r25
    lwz r3, 0x20(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800E9324
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800E9908
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E9908() {
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
    subi r11, r12, 0x70
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_804A02A8
    lfs f25, 0x34(r31)
    addi r29, r1, 0x10
    lfs f27, 0x8(r31)
    lfs f28, 0x5c(r31)
    lfs f29, 0x14(r31)
    lfs f30, 0x40(r31)
    lfs f26, 0x4(r31)
    lfs f31, lbl_804A02A8
lbl_800E99A0:
    addi r3, r1, 0x3c
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A02A8
    lfs f2, 0x4(r31)
    fmr f3, f1
    lfs f4, 0x8(r31)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r26, r25
    addi r4, r4, 0x158
    mr r5, r29
    lfs f1, 0x50(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A02A8
    lfs f2, 0x34(r30)
    lfs f3, 0x54(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x58(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x86
    bge lbl_800E9A88
    cmpwi r27, 0x2e
    beq lbl_800E9B28
    bge lbl_800E9A78
    cmpwi r27, 0x2a
    bge lbl_800E9B28
    cmpwi r27, 0x12
    bge lbl_800E9B28
    b lbl_800E9B28
    b lbl_800E9B28
lbl_800E9A78:
    cmpwi r27, 0x6b
    bge lbl_800E9B28
    b lbl_800E9B28
    b lbl_800E9B28
lbl_800E9A88:
    cmpwi r27, 0xf6
    bge lbl_800E9AA4
    cmpwi r27, 0x8a
    beq lbl_800E9B28
    bge lbl_800E9B28
    b lbl_800E9B28
    b lbl_800E9B28
lbl_800E9AA4:
    cmpwi r27, 0x231
    bge lbl_800E9AB0
    b lbl_800E9B28
lbl_800E9AB0:
    cmpwi r27, 0x233
    bge lbl_800E9B28
    lwz r3, 0x318(r26)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f26
    bge lbl_800E9B28
    addi r3, r1, 0x3c
    lfs f1, lbl_804A02A8
    lfs f0, 0x34(r30)
    fadds f2, f25, f0
    lfs f3, 0x54(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x58(r31)
    fmr f3, f2
    bl fn_80018B0C
    lwz r3, 0x318(r26)
    lfs f0, 0x3c(r3)
    fadds f0, f27, f0
    fmuls f1, f28, f0
    lfs f0, 0x64(r1)
    fsubs f0, f0, f1
    stfs f0, 0x64(r1)
    lfs f0, 0x3c(r3)
    fadds f0, f29, f0
    fmuls f1, f30, f0
    lfs f0, 0x68(r1)
    fadds f0, f0, f1
    stfs f0, 0x68(r1)
lbl_800E9B28:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E9B3C
    b lbl_800E9B50
lbl_800E9B3C:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E9B4C
    b lbl_800E9B50
lbl_800E9B4C:
    fmr f1, f0
lbl_800E9B50:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E9B68
    b lbl_800E9B7C
lbl_800E9B68:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E9B78
    b lbl_800E9B7C
lbl_800E9B78:
    fmr f1, f0
lbl_800E9B7C:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E9B94
    b lbl_800E9BA8
lbl_800E9B94:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E9BA4
    b lbl_800E9BA8
lbl_800E9BA4:
    fmr f2, f0
lbl_800E9BA8:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f27, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f31
    bge lbl_800E9BD0
    fmuls f1, f1, f26
lbl_800E9BD0:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x160(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f25, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f25, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f25, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f25, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x160(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x160(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x2
    blt lbl_800E99A0
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
    subi r11, r10, 0x70
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800E9CF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800E9CF4() {
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
    subi r11, r12, 0x80
    bl _savegpr_24
    mr r24, r4
    mr r25, r5
    mr r26, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    lwz r3, 0x3780(r24)
    lfs f0, 0x8(r3)
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r27, 0x74(r1)
    li r28, 0x0
    li r24, 0x0
    la r31, lbl_804A02A8
    lfs f24, 0x34(r31)
    addi r29, r1, 0x10
    lfs f27, 0x8(r31)
    lfs f28, 0x5c(r31)
    lfs f29, 0x14(r31)
    lfs f30, 0x40(r31)
    lfs f26, 0x4(r31)
    lfs f25, 0x60(r31)
    lfs f31, lbl_804A02A8
lbl_800E9DB0:
    addi r3, r1, 0x3c
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x50
    lfs f1, lbl_804A02A8
    lfs f2, 0x4(r31)
    fmr f3, f1
    lfs f4, 0x8(r31)
    bl fn_80020D20
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r25, r24
    addi r4, r4, 0x238
    mr r5, r29
    lfs f1, 0x50(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A02A8
    lfs f2, 0x34(r30)
    lfs f3, 0x54(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x58(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r26, 0x88
    bge lbl_800E9EA0
    cmpwi r26, 0x2e
    beq lbl_800E9F7C
    bge lbl_800E9E88
    cmpwi r26, 0x2a
    bge lbl_800E9F7C
    cmpwi r26, 0x12
    bge lbl_800E9F7C
    b lbl_800E9F7C
    b lbl_800E9F7C
lbl_800E9E88:
    cmpwi r26, 0x84
    bge lbl_800E9F7C
    cmpwi r26, 0x6b
    bge lbl_800E9F7C
    b lbl_800E9F7C
    b lbl_800E9F7C
lbl_800E9EA0:
    cmpwi r26, 0xf8
    bge lbl_800E9EBC
    cmpwi r26, 0x8b
    beq lbl_800E9F7C
    bge lbl_800E9F7C
    b lbl_800E9F7C
    b lbl_800E9F7C
lbl_800E9EBC:
    cmpwi r26, 0x231
    bge lbl_800E9ED0
    cmpwi r26, 0x1b3
    beq lbl_800E9EDC
    b lbl_800E9F7C
lbl_800E9ED0:
    cmpwi r26, 0x233
    bge lbl_800E9F7C
    b lbl_800E9F08
lbl_800E9EDC:
    cmpwi r27, 0x14a
    ble lbl_800E9F7C
    cmpwi r27, 0x18b
    bge lbl_800E9F7C
    lfs f0, 0x64(r1)
    fsubs f0, f0, f29
    stfs f0, 0x64(r1)
    lfs f0, 0x68(r1)
    fadds f0, f0, f25
    stfs f0, 0x68(r1)
    b lbl_800E9F7C
lbl_800E9F08:
    lwz r3, 0x318(r25)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800E9F7C
    addi r3, r1, 0x3c
    lfs f1, lbl_804A02A8
    lfs f0, 0x34(r30)
    fadds f2, f24, f0
    lfs f3, 0x54(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x58(r31)
    fmr f3, f2
    bl fn_80018B0C
    lwz r3, 0x318(r25)
    lfs f0, 0x3c(r3)
    fadds f0, f27, f0
    fmuls f1, f28, f0
    lfs f0, 0x64(r1)
    fadds f0, f0, f1
    stfs f0, 0x64(r1)
    lfs f0, 0x3c(r3)
    fadds f0, f29, f0
    fmuls f1, f30, f0
    lfs f0, 0x68(r1)
    fadds f0, f0, f1
    stfs f0, 0x68(r1)
lbl_800E9F7C:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E9F90
    b lbl_800E9FA4
lbl_800E9F90:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E9FA0
    b lbl_800E9FA4
lbl_800E9FA0:
    fmr f1, f0
lbl_800E9FA4:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800E9FBC
    b lbl_800E9FD0
lbl_800E9FBC:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800E9FCC
    b lbl_800E9FD0
lbl_800E9FCC:
    fmr f1, f0
lbl_800E9FD0:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_800E9FE8
    b lbl_800E9FFC
lbl_800E9FE8:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_800E9FF8
    b lbl_800E9FFC
lbl_800E9FF8:
    fmr f2, f0
lbl_800E9FFC:
    stfs f2, 0x68(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f27, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f31
    bge lbl_800EA024
    fmuls f1, f1, f26
lbl_800EA024:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r25, r24
    lwz r3, 0x240(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x240(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x240(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r25, r24
    lwz r3, 0x240(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r24, r24, 0x70
    cmpwi r28, 0x2
    blt lbl_800E9DB0
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
    subi r11, r10, 0x80
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

