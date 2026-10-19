#include "types.h"

// Translation unit: src/kkz_eye.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern "C" float lbl_8049ED18;

// Forward declarations
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_80020D20();
extern "C" void fn_80054EF0();
extern "C" void fn_80054EF8();
extern "C" void fn_80055004();
extern "C" void fn_800550CC();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80054EF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80054EF0() {
    nofralloc
    li r5, 0x0
    b fn_80054EF8
}

// ----------------------------------------------------------------------------
// fn_80054EF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80054EF8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x5e
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80054FE0
    cmpwi r31, 0x0
    beq lbl_80054F3C
    b lbl_80054F50
lbl_80054F3C:
    lwz r3, 0x110(r29)
    li r4, 0x88
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_80054F50:
    mr r3, r31
    li r4, 0x0
    li r5, 0x88
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
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r29
    li r4, 0xc8
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
    mr r4, r31
    li r5, 0x5e
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_80054FEC
lbl_80054FE0:
    mr r3, r29
    mr r4, r30
    bl fn_80055004
lbl_80054FEC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80055004
// ----------------------------------------------------------------------------
extern "C" asm void fn_80055004() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x50
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    lfs f2, lbl_8049ED18
    lwz r3, 0x3780(r4)
    lwz r8, 0x20(r3)
    stfs f2, 0x40(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x8(r3)
    stfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    lfs f0, 0x4(r3)
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
    mr r3, r4
    mr r4, r5
    mr r5, r8
    bl fn_800550CC
    li r3, 0x1
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800550CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800550CC() {
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
    lfs f1, lbl_8049ED18
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049ED18
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049ED18
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049ED18
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049ED18
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049ED18
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
    bge lbl_80055294
    cmpwi r28, 0x2c
    bge lbl_8005527C
    cmpwi r28, 0x12
    bge lbl_80055270
    cmpwi r28, 0x10
    bge lbl_800552C8
    b lbl_80055334
lbl_80055270:
    cmpwi r28, 0x2a
    bge lbl_800552C8
    b lbl_80055334
lbl_8005527C:
    cmpwi r28, 0x2e
    beq lbl_800552C8
    blt lbl_80055334
    cmpwi r28, 0x66
    bge lbl_800552C8
    b lbl_80055334
lbl_80055294:
    cmpwi r28, 0x8a
    beq lbl_80055334
    bge lbl_800552C0
    cmpwi r28, 0x86
    bge lbl_800552B4
    cmpwi r28, 0x84
    bge lbl_800552C8
    b lbl_80055334
lbl_800552B4:
    cmpwi r28, 0x88
    bge lbl_800552C8
    b lbl_80055334
lbl_800552C0:
    cmpwi r28, 0x8c
    bge lbl_80055334
lbl_800552C8:
    lfs f1, 0x10(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800552E4
    stfs f0, 0x10(r1)
lbl_800552E4:
    lfs f1, 0x10(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80055300
    stfs f0, 0x10(r1)
lbl_80055300:
    lfs f1, 0x14(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    bge lbl_80055318
    stfs f0, 0x14(r1)
lbl_80055318:
    lfs f1, 0x14(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x1c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800553DC
    stfs f0, 0x14(r1)
    b lbl_800553DC
lbl_80055334:
    lfs f1, 0x10(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80055350
    stfs f0, 0x10(r1)
lbl_80055350:
    lfs f1, 0x10(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8005536C
    stfs f0, 0x10(r1)
lbl_8005536C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80055388
    stfs f0, 0x14(r1)
lbl_80055388:
    lfs f1, 0x14(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800553A4
    stfs f0, 0x14(r1)
lbl_800553A4:
    lfs f1, 0x18(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800553C0
    stfs f0, 0x18(r1)
lbl_800553C0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049ED18
    lfs f0, 0x2c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800553DC
    stfs f0, 0x18(r1)
lbl_800553DC:
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

