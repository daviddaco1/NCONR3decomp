#include "types.h"

// Translation unit: src/kib_eye.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern "C" float lbl_8049F750;

// Forward declarations
extern "C" void _restgpr_29();
extern "C" void _savegpr_29();
extern "C" void fn_800B5A0C();
extern "C" void fn_800B5A14();
extern "C" void fn_800B5FA0();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800B5A0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800B5A0C() {
    nofralloc
    li r5, 0x0
    b fn_800B5A14
}

// ----------------------------------------------------------------------------
// fn_800B5A14
// ----------------------------------------------------------------------------
extern "C" asm void fn_800B5A14() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x24
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800B5F7C
    cmpwi r31, 0x0
    beq lbl_800B5A58
    b lbl_800B5A6C
lbl_800B5A58:
    lwz r3, 0x110(r30)
    li r4, 0x7d0
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800B5A6C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x7d0
    bl memset
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r30
    li r4, 0xd8
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r30
    li r4, 0xd9
    bl fn_8018149C
    stw r3, 0x24(r31)
    mr r3, r30
    li r4, 0xd8
    bl fn_80181504
    stw r3, 0x28(r31)
    mr r3, r30
    li r4, 0xd9
    bl fn_80181504
    stw r3, 0x2c(r31)
    addi r3, r31, 0x30
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x90
    addi r4, r31, 0x30
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xf0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xf4(r31)
    mr r3, r30
    li r4, 0xce
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r30
    li r4, 0xcf
    bl fn_8018149C
    stw r3, 0xfc(r31)
    mr r3, r30
    li r4, 0xce
    bl fn_80181504
    stw r3, 0x100(r31)
    mr r3, r30
    li r4, 0xcf
    bl fn_80181504
    stw r3, 0x104(r31)
    addi r3, r31, 0x108
    lwz r4, 0xf4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xf8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x168
    addi r4, r31, 0x108
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x1c8(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x1cc(r31)
    mr r3, r30
    li r4, 0xcc
    bl fn_8018149C
    stw r3, 0x1d0(r31)
    mr r3, r30
    li r4, 0xcc
    bl fn_80181504
    stw r3, 0x1d4(r31)
    addi r3, r31, 0x1d8
    lwz r4, 0x1cc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1d0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x208
    addi r4, r31, 0x1d8
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x238(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x23c(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_8018149C
    stw r3, 0x240(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_8018149C
    stw r3, 0x244(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_80181504
    stw r3, 0x248(r31)
    mr r3, r30
    li r4, 0xcb
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
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x310(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x314(r31)
    mr r3, r30
    li r4, 0xda
    bl fn_8018149C
    stw r3, 0x318(r31)
    mr r3, r30
    li r4, 0xdb
    bl fn_8018149C
    stw r3, 0x31c(r31)
    mr r3, r30
    li r4, 0xda
    bl fn_80181504
    stw r3, 0x320(r31)
    mr r3, r30
    li r4, 0xdb
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
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x3e8(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x3ec(r31)
    mr r3, r30
    li r4, 0xd4
    bl fn_8018149C
    stw r3, 0x3f0(r31)
    mr r3, r30
    li r4, 0xd5
    bl fn_8018149C
    stw r3, 0x3f4(r31)
    mr r3, r30
    li r4, 0xd4
    bl fn_80181504
    stw r3, 0x3f8(r31)
    mr r3, r30
    li r4, 0xd5
    bl fn_80181504
    stw r3, 0x3fc(r31)
    addi r3, r31, 0x400
    lwz r4, 0x3ec(r31)
    addi r4, r4, 0x224
    lwz r5, 0x3f0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x460
    addi r4, r31, 0x400
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x4c0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x4c4(r31)
    mr r3, r30
    li r4, 0xd2
    bl fn_8018149C
    stw r3, 0x4c8(r31)
    mr r3, r30
    li r4, 0xd2
    bl fn_80181504
    stw r3, 0x4cc(r31)
    addi r3, r31, 0x4d0
    lwz r4, 0x4c4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x4c8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x500
    addi r4, r31, 0x4d0
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x530(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x534(r31)
    mr r3, r30
    li r4, 0xd0
    bl fn_8018149C
    stw r3, 0x538(r31)
    mr r3, r30
    li r4, 0xd1
    bl fn_8018149C
    stw r3, 0x53c(r31)
    mr r3, r30
    li r4, 0xd0
    bl fn_80181504
    stw r3, 0x540(r31)
    mr r3, r30
    li r4, 0xd1
    bl fn_80181504
    stw r3, 0x544(r31)
    addi r3, r31, 0x548
    lwz r4, 0x534(r31)
    addi r4, r4, 0x224
    lwz r5, 0x538(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x5a8
    addi r4, r31, 0x548
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x608(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x60c(r31)
    mr r3, r30
    li r4, 0xdc
    bl fn_8018149C
    stw r3, 0x610(r31)
    mr r3, r30
    li r4, 0xdd
    bl fn_8018149C
    stw r3, 0x614(r31)
    mr r3, r30
    li r4, 0xde
    bl fn_8018149C
    stw r3, 0x618(r31)
    mr r3, r30
    li r4, 0xdf
    bl fn_8018149C
    stw r3, 0x61c(r31)
    mr r3, r30
    li r4, 0xdc
    bl fn_80181504
    stw r3, 0x620(r31)
    mr r3, r30
    li r4, 0xdd
    bl fn_80181504
    stw r3, 0x624(r31)
    mr r3, r30
    li r4, 0xde
    bl fn_80181504
    stw r3, 0x628(r31)
    mr r3, r30
    li r4, 0xdf
    bl fn_80181504
    stw r3, 0x62c(r31)
    addi r3, r31, 0x630
    lwz r4, 0x60c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x610(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x6f0
    addi r4, r31, 0x630
    bl fn_801734E4
    mr r3, r30
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x7b8(r31)
    mr r3, r30
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x7bc(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x7c8(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x7cc(r31)
    mr r3, r30
    mr r4, r31
    li r5, 0x24
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800B5F88
lbl_800B5F7C:
    mr r3, r30
    mr r4, r29
    bl fn_800B5FA0
lbl_800B5F88:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800B5FA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800B5FA0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x30
    mr r12, r1
    stwux r1, r1, r11
    lfs f1, lbl_8049F750
    stfs f1, 0x20(r1)
    la r3, lbl_8049F750
    lfs f0, 0x8(r3)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    lfs f0, 0x4(r3)
    stfs f0, 0x2c(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r1, r10
    blr
}

