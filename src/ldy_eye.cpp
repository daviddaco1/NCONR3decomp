#include "types.h"

// Translation unit: src/ldy_eye.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern "C" float lbl_804A03F8;

// Global data symbols (@ha/@l)

// Forward declarations
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80018BD4();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001B8BC();
extern "C" void fn_8001DA9C();
extern "C" void fn_80020D20();
extern "C" void fn_80054ECC();
extern "C" void fn_800F37F8();
extern "C" void fn_800F3800();
extern "C" void fn_800F3BC8();
extern "C" void fn_800F3D60();
extern "C" void fn_800F4118();
extern "C" void fn_800F4A88();
extern "C" void fn_800F4EC0();
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
// fn_800F37F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F37F8() {
    nofralloc
    li r5, 0x0
    b fn_800F3800
}

// ----------------------------------------------------------------------------
// fn_800F3800
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F3800() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x3a
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800F3BA4
    cmpwi r31, 0x0
    beq lbl_800F3844
    b lbl_800F3858
lbl_800F3844:
    lwz r3, 0x110(r29)
    li r4, 0x490
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800F3858:
    mr r3, r31
    li r4, 0x0
    li r5, 0x490
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
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xa0
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
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x88(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x8c(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x94(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x98(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x9c(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0xa0(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0xa4(r31)
    addi r3, r31, 0xa8
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x138
    addi r4, r31, 0xa8
    bl fn_801734E4
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x1c8(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1cc(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x1d0(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x1d4(r31)
    lwz r0, 0x1d0(r31)
    stw r0, 0x238(r31)
    stw r3, 0x23c(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x240(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x244(r31)
    lwz r0, 0x240(r31)
    stw r0, 0x2a8(r31)
    stw r3, 0x2ac(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x2b0(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x2b4(r31)
    addi r3, r31, 0x1d8
    lwz r4, 0x1cc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1d0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x208
    addi r4, r31, 0x1d8
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
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x320(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x324(r31)
    lwz r0, 0x320(r31)
    stw r0, 0x388(r31)
    stw r3, 0x38c(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x390(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x394(r31)
    lwz r0, 0x390(r31)
    stw r0, 0x3f8(r31)
    stw r3, 0x3fc(r31)
    mr r3, r29
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0x400(r31)
    mr r3, r29
    li r4, 0xa9
    bl fn_80181504
    stw r3, 0x404(r31)
    addi r3, r31, 0x328
    lwz r4, 0x31c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x320(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x358
    addi r4, r31, 0x328
    bl fn_801734E4
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x468(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x46c(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x470(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x474(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x478(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x47c(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x480(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x484(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x488(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x48c(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x3a
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800F3BB0
lbl_800F3BA4:
    mr r3, r29
    mr r4, r30
    bl fn_800F3BC8
lbl_800F3BB0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800F3BC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F3BC8() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x90
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lfs f2, lbl_804A03F8
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f2, 0x60(r1)
    la r27, lbl_804A03F8
    lfs f0, 0x4(r27)
    stfs f0, 0x64(r1)
    stfs f2, 0x68(r1)
    lfs f0, 0x8(r27)
    stfs f0, 0x6c(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x5c(r1)
    lfs f2, 0xc(r27)
    lfs f1, 0x10(r27)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_800F3D60
    lfs f4, lbl_804A03F8
    lfs f3, 0x8(r27)
    stfs f3, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f4, 0x58(r1)
    stfs f3, 0x5c(r1)
    lfs f2, 0x14(r27)
    lfs f1, 0x18(r27)
    stfs f4, 0x60(r1)
    lfs f0, 0x1c(r27)
    stfs f0, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_800F4118
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_800F4A88
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_800F4EC0
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_27
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F3D60
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F3D60() {
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
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A03F8
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
    bge lbl_800F3F28
    cmpwi r28, 0x2c
    bge lbl_800F3F10
    cmpwi r28, 0x12
    bge lbl_800F3F04
    cmpwi r28, 0x10
    bge lbl_800F3F5C
    b lbl_800F3FA8
lbl_800F3F04:
    cmpwi r28, 0x2a
    bge lbl_800F3F5C
    b lbl_800F3FA8
lbl_800F3F10:
    cmpwi r28, 0x2e
    beq lbl_800F3F5C
    blt lbl_800F3FA8
    cmpwi r28, 0x66
    bge lbl_800F3F5C
    b lbl_800F3FA8
lbl_800F3F28:
    cmpwi r28, 0x8a
    beq lbl_800F3FA8
    bge lbl_800F3F54
    cmpwi r28, 0x86
    bge lbl_800F3F48
    cmpwi r28, 0x84
    bge lbl_800F3F5C
    b lbl_800F3FA8
lbl_800F3F48:
    cmpwi r28, 0x88
    bge lbl_800F3F5C
    b lbl_800F3FA8
lbl_800F3F54:
    cmpwi r28, 0x8c
    bge lbl_800F3FA8
lbl_800F3F5C:
    lfs f1, 0x10(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_800F3F74
    stfs f0, 0x10(r1)
lbl_800F3F74:
    lfs f1, 0x14(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    bge lbl_800F3F8C
    stfs f0, 0x14(r1)
lbl_800F3F8C:
    lfs f1, 0x14(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    ble lbl_800F4050
    stfs f0, 0x14(r1)
    b lbl_800F4050
lbl_800F3FA8:
    lfs f1, 0x10(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F3FC4
    stfs f0, 0x10(r1)
lbl_800F3FC4:
    lfs f1, 0x10(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F3FE0
    stfs f0, 0x10(r1)
lbl_800F3FE0:
    lfs f1, 0x14(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F3FFC
    stfs f0, 0x14(r1)
lbl_800F3FFC:
    lfs f1, 0x14(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F4018
    stfs f0, 0x14(r1)
lbl_800F4018:
    lfs f1, 0x18(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800F4034
    stfs f0, 0x18(r1)
lbl_800F4034:
    lfs f1, 0x18(r1)
    la r3, lbl_804A03F8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F4050
    stfs f0, 0x18(r1)
lbl_800F4050:
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

// ----------------------------------------------------------------------------
// fn_800F4118
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F4118() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x290
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_804A03F8
    lfs f15, 0x38(r3)
    lfs f16, 0x3c(r3)
    lfs f17, 0x40(r3)
    lfs f18, 0x44(r3)
    lfs f19, 0xc(r3)
    lfs f20, lbl_804A03F8
    lfs f22, 0x14(r3)
    lfs f23, 0x54(r3)
    lfs f25, 0x34(r3)
    lfs f26, 0x5c(r3)
    lfs f24, 0x58(r3)
    lfs f27, 0x60(r3)
    lfs f29, 0x68(r3)
    lfs f0, 0x20(r3)
    stfd f0, 0x140(r1)
    lfs f30, 0x6c(r3)
    lfs f31, 0x70(r3)
    lfs f28, 0x64(r3)
    lfs f21, 0x50(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x48(r3)
    stfd f0, 0x130(r1)
lbl_800F42DC:
    cmpwi r31, 0x0
    bne lbl_800F4324
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x8c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800F436C
lbl_800F4324:
    add r4, r27, r26
    addi r3, r4, 0x138
    addi r4, r4, 0xa8
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x9c(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x90(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xa8
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800F436C:
    addi r3, r1, 0x90
    add r4, r27, r26
    addi r4, r4, 0xa8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x138
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x70
    bl fn_8001B8BC
    bl fn_80018BD4
    fcmpo cr0, f1, f25
    opword 0x4C401382
    bne lbl_800F43D4
    addi r3, r1, 0x70
    lfs f1, lbl_804A03F8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
lbl_800F43D4:
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x3
    addi r3, r1, 0xa0
    lwz r4, 0x484(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f20, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f20, 0x40(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    stfs f22, 0x44(r1)
    cmpwi r28, 0x8a
    beq lbl_800F47E0
    bge lbl_800F451C
    cmpwi r28, 0x65
    beq lbl_800F47E0
    bge lbl_800F44E8
    cmpwi r28, 0x2c
    bge lbl_800F44D0
    cmpwi r28, 0x12
    bge lbl_800F44C4
    cmpwi r28, 0x10
    bge lbl_800F4578
    b lbl_800F47E0
lbl_800F44C4:
    cmpwi r28, 0x2a
    bge lbl_800F4578
    b lbl_800F47E0
lbl_800F44D0:
    cmpwi r28, 0x2e
    beq lbl_800F4578
    blt lbl_800F47E0
    cmpwi r28, 0x64
    bge lbl_800F4654
    b lbl_800F47E0
lbl_800F44E8:
    cmpwi r28, 0x84
    bge lbl_800F4508
    cmpwi r28, 0x7e
    beq lbl_800F466C
    bge lbl_800F47E0
    cmpwi r28, 0x6b
    bge lbl_800F47E0
    b lbl_800F4578
lbl_800F4508:
    cmpwi r28, 0x88
    bge lbl_800F4578
    cmpwi r28, 0x86
    bge lbl_800F47E0
    b lbl_800F4578
lbl_800F451C:
    cmpwi r28, 0x168
    beq lbl_800F466C
    bge lbl_800F4554
    cmpwi r28, 0xf2
    beq lbl_800F46A0
    bge lbl_800F4540
    cmpwi r28, 0x8c
    bge lbl_800F47E0
    b lbl_800F4578
lbl_800F4540:
    cmpwi r28, 0xf8
    bge lbl_800F47E0
    cmpwi r28, 0xf6
    bge lbl_800F4578
    b lbl_800F47E0
lbl_800F4554:
    cmpwi r28, 0x23a
    beq lbl_800F4640
    bge lbl_800F456C
    cmpwi r28, 0x209
    beq lbl_800F4718
    b lbl_800F47E0
lbl_800F456C:
    cmpwi r28, 0x261
    beq lbl_800F4778
    b lbl_800F47E0
lbl_800F4578:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_800F458C
    stfs f15, 0x30(r1)
lbl_800F458C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800F45A0
    stfs f16, 0x34(r1)
lbl_800F45A0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800F45B4
    stfs f17, 0x34(r1)
lbl_800F45B4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800F45C8
    stfs f18, 0x38(r1)
lbl_800F45C8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800F45DC
    stfs f19, 0x38(r1)
lbl_800F45DC:
    cmpwi r28, 0xf8
    bge lbl_800F48B4
    cmpwi r28, 0xf6
    bge lbl_800F45F0
    b lbl_800F48B4
lbl_800F45F0:
    stfs f20, 0x40(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r31, 0x3
    bge lbl_800F4614
    cmpwi r31, 0x0
    beq lbl_800F4620
    bge lbl_800F462C
    b lbl_800F48B4
lbl_800F4614:
    cmpwi r31, 0x5
    bge lbl_800F48B4
    b lbl_800F4638
lbl_800F4620:
    lfd f0, 0x130(r1)
    stfs f0, 0x44(r1)
    b lbl_800F48B4
lbl_800F462C:
    lfd f0, 0x138(r1)
    stfs f0, 0x44(r1)
    b lbl_800F48B4
lbl_800F4638:
    stfs f19, 0x44(r1)
    b lbl_800F48B4
lbl_800F4640:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f25
    bge lbl_800F48B4
    stfs f25, 0x30(r1)
    b lbl_800F48B4
lbl_800F4654:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800F48B4
    stfs f21, 0x30(r1)
    b lbl_800F48B4
lbl_800F466C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800F4680
    stfs f22, 0x34(r1)
lbl_800F4680:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    bge lbl_800F4690
    stfs f16, 0x34(r1)
lbl_800F4690:
    stfs f20, 0x30(r1)
    stfs f20, 0x38(r1)
    stfs f20, 0x44(r1)
    b lbl_800F48B4
lbl_800F46A0:
    cmpwi r31, 0x0
    bne lbl_800F46E8
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_800F46BC
    stfs f15, 0x30(r1)
lbl_800F46BC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800F46D0
    stfs f23, 0x34(r1)
lbl_800F46D0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800F4710
    stfs f24, 0x34(r1)
    b lbl_800F4710
lbl_800F46E8:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F46FC
    stfs f25, 0x30(r1)
lbl_800F46FC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800F4710
    stfs f26, 0x34(r1)
lbl_800F4710:
    stfs f20, 0x38(r1)
    b lbl_800F48B4
lbl_800F4718:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F472C
    stfs f25, 0x30(r1)
lbl_800F472C:
    cmpwi r31, 0x0
    bne lbl_800F474C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800F48B4
    stfs f16, 0x34(r1)
    b lbl_800F48B4
lbl_800F474C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F4760
    stfs f27, 0x34(r1)
lbl_800F4760:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F48B4
    stfs f28, 0x34(r1)
    b lbl_800F48B4
lbl_800F4778:
    cmpwi r31, 0x0
    bne lbl_800F47B0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800F4794
    stfs f23, 0x34(r1)
lbl_800F4794:
    lfs f1, 0x34(r1)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800F47D8
    stfs f0, 0x34(r1)
    b lbl_800F47D8
lbl_800F47B0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800F47C4
    stfs f29, 0x34(r1)
lbl_800F47C4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800F47D8
    stfs f24, 0x34(r1)
lbl_800F47D8:
    stfs f16, 0x38(r1)
    b lbl_800F48B4
lbl_800F47E0:
    cmpwi r31, 0x0
    bne lbl_800F4850
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_800F47FC
    stfs f15, 0x30(r1)
lbl_800F47FC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800F4810
    stfs f23, 0x34(r1)
lbl_800F4810:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800F4824
    stfs f24, 0x34(r1)
lbl_800F4824:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800F4838
    stfs f30, 0x38(r1)
lbl_800F4838:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800F48B4
    stfs f31, 0x38(r1)
    b lbl_800F48B4
lbl_800F4850:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F4864
    stfs f25, 0x30(r1)
lbl_800F4864:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800F4878
    stfs f29, 0x34(r1)
lbl_800F4878:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800F488C
    stfs f24, 0x34(r1)
lbl_800F488C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800F48A0
    stfs f30, 0x38(r1)
lbl_800F48A0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800F48B4
    stfs f31, 0x38(r1)
lbl_800F48B4:
    lfs f2, 0x34(r1)
    lfs f0, 0x24(r1)
    lfs f1, 0x44(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_800F48E4
    cmpwi r31, 0x0
    bne lbl_800F48DC
    stfs f0, 0x34(r1)
    b lbl_800F48E4
lbl_800F48DC:
    fadds f0, f2, f1
    stfs f0, 0x34(r1)
lbl_800F48E4:
    add r4, r27, r25
    lwz r3, 0x90(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x90(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800F42DC
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
// fn_800F4A88
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F4A88() {
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
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_804A03F8
    lfs f22, 0xc(r31)
    addi r29, r1, 0x10
    lfs f23, 0x3c(r31)
    lfs f24, 0x68(r31)
    lfs f25, 0x6c(r31)
    lfs f26, lbl_804A03F8
    lfs f28, 0x78(r31)
    lfs f29, 0x14(r31)
    lfs f27, 0x5c(r31)
    lfs f31, 0x4(r31)
    lfs f30, 0x8(r31)
lbl_800F4B44:
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
    lfs f1, lbl_804A03F8
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
    addi r4, r4, 0x1c8
    mr r5, r29
    lfs f1, 0x10(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A03F8
    lfs f2, 0x34(r30)
    lfs f3, 0x74(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x38(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x6b
    bge lbl_800F4C2C
    cmpwi r27, 0x2a
    bge lbl_800F4C18
    cmpwi r27, 0x10
    bge lbl_800F4C84
    cmpwi r27, 0x1
    beq lbl_800F4C58
    b lbl_800F4C84
    b lbl_800F4C84
lbl_800F4C18:
    cmpwi r27, 0x2e
    beq lbl_800F4C84
    bge lbl_800F4C84
    b lbl_800F4C84
    b lbl_800F4C84
lbl_800F4C2C:
    cmpwi r27, 0x8a
    beq lbl_800F4C84
    bge lbl_800F4C48
    cmpwi r27, 0x86
    bge lbl_800F4C84
    b lbl_800F4C84
    b lbl_800F4C84
lbl_800F4C48:
    cmpwi r27, 0xf6
    bge lbl_800F4C84
    b lbl_800F4C84
    b lbl_800F4C84
lbl_800F4C58:
    cmpwi r28, 0x0
    bne lbl_800F4C68
    stfs f23, 0x44(r1)
    stfs f24, 0x38(r1)
lbl_800F4C68:
    cmpwi r28, 0x1
    bne lbl_800F4C78
    stfs f23, 0x44(r1)
    stfs f25, 0x38(r1)
lbl_800F4C78:
    cmpwi r28, 0x2
    bne lbl_800F4C84
    stfs f26, 0x38(r1)
lbl_800F4C84:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F4C98
    b lbl_800F4CAC
lbl_800F4C98:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F4CA8
    b lbl_800F4CAC
lbl_800F4CA8:
    fmr f1, f0
lbl_800F4CAC:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F4CC4
    b lbl_800F4CD8
lbl_800F4CC4:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F4CD4
    b lbl_800F4CD8
lbl_800F4CD4:
    fmr f1, f0
lbl_800F4CD8:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F4CF0
    b lbl_800F4D04
lbl_800F4CF0:
    lfs f1, 0x38(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F4D00
    b lbl_800F4D04
lbl_800F4D00:
    fmr f1, f0
lbl_800F4D04:
    stfs f1, 0x68(r1)
    cmpwi r27, 0x1b1
    bne lbl_800F4D54
    cmpwi r28, 0x0
    bne lbl_800F4D34
    lfs f0, 0x64(r1)
    fadds f0, f0, f29
    stfs f0, 0x64(r1)
    frsp f0, f1
    fsubs f0, f0, f27
    stfs f0, 0x68(r1)
    b lbl_800F4D54
lbl_800F4D34:
    cmpwi r28, 0x1
    bne lbl_800F4D54
    lfs f0, 0x64(r1)
    fadds f0, f0, f28
    stfs f0, 0x64(r1)
    frsp f0, f1
    fsubs f0, f0, f29
    stfs f0, 0x68(r1)
lbl_800F4D54:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f30, f0
    lfs f0, 0x68(r1)
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f26
    bge lbl_800F4D78
    fmuls f1, f1, f31
lbl_800F4D78:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x1d0(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1d0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1d0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x1d0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x3
    blt lbl_800F4B44
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
// fn_800F4EC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F4EC0() {
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
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_804A03F8
    lfs f24, 0xc(r31)
    addi r29, r1, 0x10
    lfs f26, 0x24(r31)
    lfs f25, 0x14(r31)
    lfs f28, 0x78(r31)
    lfs f27, 0x5c(r31)
    lfs f31, 0x4(r31)
    lfs f29, 0x8(r31)
    lfs f30, lbl_804A03F8
lbl_800F4F64:
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
    lfs f1, lbl_804A03F8
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
    addi r4, r4, 0x318
    mr r5, r29
    lfs f1, 0x10(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A03F8
    lfs f2, 0x34(r30)
    lfs f3, 0x74(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x38(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x6b
    bge lbl_800F504C
    cmpwi r27, 0x2a
    bge lbl_800F5038
    cmpwi r27, 0x10
    bge lbl_800F5090
    cmpwi r27, 0x0
    beq lbl_800F5078
    b lbl_800F5090
    b lbl_800F5090
lbl_800F5038:
    cmpwi r27, 0x2e
    beq lbl_800F5090
    bge lbl_800F5090
    b lbl_800F5090
    b lbl_800F5090
lbl_800F504C:
    cmpwi r27, 0x8a
    beq lbl_800F5090
    bge lbl_800F5068
    cmpwi r27, 0x86
    bge lbl_800F5090
    b lbl_800F5090
    b lbl_800F5090
lbl_800F5068:
    cmpwi r27, 0xf6
    bge lbl_800F5090
    b lbl_800F5090
    b lbl_800F5090
lbl_800F5078:
    cmpwi r28, 0x1
    bne lbl_800F5088
    stfs f25, 0x68(r1)
    b lbl_800F508C
lbl_800F5088:
    stfs f26, 0x68(r1)
lbl_800F508C:
    stfs f26, 0x64(r1)
lbl_800F5090:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F50A4
    b lbl_800F50B8
lbl_800F50A4:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F50B4
    b lbl_800F50B8
lbl_800F50B4:
    fmr f1, f0
lbl_800F50B8:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F50D0
    b lbl_800F50E4
lbl_800F50D0:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F50E0
    b lbl_800F50E4
lbl_800F50E0:
    fmr f1, f0
lbl_800F50E4:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_800F50FC
    b lbl_800F5110
lbl_800F50FC:
    lfs f1, 0x38(r1)
    fcmpo cr0, f0, f1
    ble lbl_800F510C
    b lbl_800F5110
lbl_800F510C:
    fmr f1, f0
lbl_800F5110:
    stfs f1, 0x68(r1)
    cmpwi r27, 0x1b1
    bne lbl_800F5160
    cmpwi r28, 0x0
    bne lbl_800F5140
    lfs f0, 0x64(r1)
    fadds f0, f0, f25
    stfs f0, 0x64(r1)
    frsp f0, f1
    fadds f0, f0, f27
    stfs f0, 0x68(r1)
    b lbl_800F5160
lbl_800F5140:
    cmpwi r28, 0x1
    bne lbl_800F5160
    lfs f0, 0x64(r1)
    fadds f0, f0, f28
    stfs f0, 0x64(r1)
    frsp f0, f1
    fadds f0, f0, f25
    stfs f0, 0x68(r1)
lbl_800F5160:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    lfs f0, 0x68(r1)
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f30
    bge lbl_800F5184
    fmuls f1, f1, f31
lbl_800F5184:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x320(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x320(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x320(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x320(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f24, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x320(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x320(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x3
    blt lbl_800F4F64
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
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

