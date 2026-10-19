#include "types.h"

// Translation unit: src/ssr_eye.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern "C" float lbl_8049FEB8;

// Forward declarations
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B04();
extern "C" void fn_80018B08();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001B8B8();
extern "C" void fn_80020D20();
extern "C" void fn_800D5598();
extern "C" void fn_800D55A0();
extern "C" void fn_800D5DE0();
extern "C" void fn_800D637C();
extern "C" void fn_800D6764();
extern "C" void fn_800D6B30();
extern "C" void fn_800D7520();
extern "C" void fn_800D7950();
extern "C" void fn_800D7F18();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void fn_80190874();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800D5598
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D5598() {
    nofralloc
    li r5, 0x0
    b fn_800D55A0
}

// ----------------------------------------------------------------------------
// fn_800D55A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D55A0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    mr r31, r5
    li r4, 0x16
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800D5DBC
    cmpwi r31, 0x0
    beq lbl_800D55E4
    b lbl_800D55F8
lbl_800D55E4:
    lwz r3, 0x110(r30)
    li r4, 0xd20
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800D55F8:
    mr r3, r31
    li r4, 0x0
    li r5, 0xd20
    bl memset
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x18(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1c(r31)
    mr r3, r30
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x20(r31)
    mr r3, r30
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
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x88(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x8c(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r30
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x94(r31)
    addi r3, r31, 0x98
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc8
    addi r4, r31, 0x98
    bl fn_801734E4
    mr r3, r30
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r30
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r30
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x104(r31)
    addi r3, r31, 0x108
    lwz r4, 0xfc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x100(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x138
    addi r4, r31, 0x108
    bl fn_801734E4
    mr r3, r30
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x168(r31)
    mr r3, r30
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x16c(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x170(r31)
    mr r3, r30
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x174(r31)
    addi r3, r31, 0x178
    lwz r4, 0x16c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x170(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x1a8
    addi r4, r31, 0x178
    bl fn_801734E4
    mr r3, r30
    li r4, 0xa9
    bl fn_8018149C
    stw r3, 0x1d8(r31)
    mr r3, r30
    li r4, 0xa9
    bl fn_80181504
    stw r3, 0x1dc(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_8018149C
    stw r3, 0x1e0(r31)
    mr r3, r30
    li r4, 0xaa
    bl fn_80181504
    stw r3, 0x1e4(r31)
    addi r3, r31, 0x1e8
    lwz r4, 0x1dc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1e0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x218
    addi r4, r31, 0x1e8
    bl fn_801734E4
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x248(r31)
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x24c(r31)
    mr r3, r30
    li r4, 0xad
    bl fn_8018149C
    stw r3, 0x250(r31)
    mr r3, r30
    li r4, 0xad
    bl fn_80181504
    stw r3, 0x254(r31)
    addi r3, r31, 0x258
    lwz r4, 0x24c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x250(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x288
    addi r4, r31, 0x258
    bl fn_801734E4
    mr r3, r30
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0x2b8(r31)
    mr r3, r30
    li r4, 0xae
    bl fn_80181504
    stw r3, 0x2bc(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0x2c0(r31)
    mr r3, r30
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0x2c4(r31)
    addi r3, r31, 0x2c8
    lwz r4, 0x2bc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x2c0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x2f8
    addi r4, r31, 0x2c8
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0x328(r31)
    mr r3, r30
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0x32c(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0x330(r31)
    mr r3, r30
    li r4, 0xb1
    bl fn_80181504
    stw r3, 0x334(r31)
    addi r3, r31, 0x338
    lwz r4, 0x32c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x330(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x368
    addi r4, r31, 0x338
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x398(r31)
    mr r3, r30
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x39c(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x3a0(r31)
    mr r3, r30
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x3a4(r31)
    addi r3, r31, 0x3a8
    lwz r4, 0x39c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x3a0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x3d8
    addi r4, r31, 0x3a8
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x408(r31)
    mr r3, r30
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x40c(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x410(r31)
    mr r3, r30
    li r4, 0xb5
    bl fn_80181504
    stw r3, 0x414(r31)
    addi r3, r31, 0x418
    lwz r4, 0x40c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x410(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x448
    addi r4, r31, 0x418
    bl fn_801734E4
    mr r3, r30
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x478(r31)
    mr r3, r30
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x47c(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0x480(r31)
    mr r3, r30
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0x484(r31)
    addi r3, r31, 0x488
    lwz r4, 0x47c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x480(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x4b8
    addi r4, r31, 0x488
    bl fn_801734E4
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x4e8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x4ec(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_8018149C
    stw r3, 0x4f0(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_8018149C
    stw r3, 0x4f4(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_8018149C
    stw r3, 0x4f8(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_8018149C
    stw r3, 0x4fc(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_8018149C
    stw r3, 0x500(r31)
    mr r3, r30
    li r4, 0xc3
    bl fn_8018149C
    stw r3, 0x504(r31)
    mr r3, r30
    li r4, 0xc4
    bl fn_8018149C
    stw r3, 0x508(r31)
    mr r3, r30
    li r4, 0xc5
    bl fn_8018149C
    stw r3, 0x50c(r31)
    mr r3, r30
    li r4, 0xc6
    bl fn_8018149C
    stw r3, 0x510(r31)
    mr r3, r30
    li r4, 0xc7
    bl fn_8018149C
    stw r3, 0x514(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_8018149C
    stw r3, 0x518(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_8018149C
    stw r3, 0x51c(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_8018149C
    stw r3, 0x520(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_8018149C
    stw r3, 0x524(r31)
    mr r3, r30
    li r4, 0xbe
    bl fn_80181504
    stw r3, 0x528(r31)
    mr r3, r30
    li r4, 0xbf
    bl fn_80181504
    stw r3, 0x52c(r31)
    mr r3, r30
    li r4, 0xc0
    bl fn_80181504
    stw r3, 0x530(r31)
    mr r3, r30
    li r4, 0xc1
    bl fn_80181504
    stw r3, 0x534(r31)
    mr r3, r30
    li r4, 0xc2
    bl fn_80181504
    stw r3, 0x538(r31)
    mr r3, r30
    li r4, 0xc3
    bl fn_80181504
    stw r3, 0x53c(r31)
    mr r3, r30
    li r4, 0xc4
    bl fn_80181504
    stw r3, 0x540(r31)
    mr r3, r30
    li r4, 0xc5
    bl fn_80181504
    stw r3, 0x544(r31)
    mr r3, r30
    li r4, 0xc6
    bl fn_80181504
    stw r3, 0x548(r31)
    mr r3, r30
    li r4, 0xc7
    bl fn_80181504
    stw r3, 0x54c(r31)
    mr r3, r30
    li r4, 0xc8
    bl fn_80181504
    stw r3, 0x550(r31)
    mr r3, r30
    li r4, 0xc9
    bl fn_80181504
    stw r3, 0x554(r31)
    mr r3, r30
    li r4, 0xca
    bl fn_80181504
    stw r3, 0x558(r31)
    mr r3, r30
    li r4, 0xcb
    bl fn_80181504
    stw r3, 0x55c(r31)
    addi r3, r31, 0x560
    lwz r4, 0x4ec(r31)
    addi r4, r4, 0x224
    lwz r5, 0x4f0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x800
    addi r4, r31, 0x560
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xaa0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xaa4(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0xaa8(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0xaac(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_8018149C
    stw r3, 0xab0(r31)
    mr r3, r30
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0xab4(r31)
    mr r3, r30
    li r4, 0xb9
    bl fn_80181504
    stw r3, 0xab8(r31)
    mr r3, r30
    li r4, 0xba
    bl fn_80181504
    stw r3, 0xabc(r31)
    addi r3, r31, 0xac0
    lwz r4, 0xaa4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xaa8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xb50
    addi r4, r31, 0xac0
    bl fn_801734E4
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0xbe0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0xbe4(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_8018149C
    stw r3, 0xbe8(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_8018149C
    stw r3, 0xbec(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_8018149C
    stw r3, 0xbf0(r31)
    mr r3, r30
    li r4, 0xbb
    bl fn_80181504
    stw r3, 0xbf4(r31)
    mr r3, r30
    li r4, 0xbc
    bl fn_80181504
    stw r3, 0xbf8(r31)
    mr r3, r30
    li r4, 0xbd
    bl fn_80181504
    stw r3, 0xbfc(r31)
    addi r3, r31, 0xc00
    lwz r4, 0xbe4(r31)
    addi r4, r4, 0x224
    lwz r5, 0xbe8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xc90
    addi r4, r31, 0xc00
    bl fn_801734E4
    mr r3, r30
    mr r4, r31
    li r5, 0x16
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800D5DC8
lbl_800D5DBC:
    mr r3, r30
    mr r4, r29
    bl fn_800D5DE0
lbl_800D5DC8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800D5DE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D5DE0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1a0
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
    lfs f30, lbl_8049FEB8
    la r31, lbl_8049FEB8
    lfs f31, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f30, 0x150(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x154(r1)
    stfs f30, 0x158(r1)
    stfs f31, 0x15c(r1)
    stfs f31, 0x140(r1)
    stfs f30, 0x144(r1)
    stfs f30, 0x148(r1)
    stfs f31, 0x14c(r1)
    lfs f0, 0xc(r31)
    fmuls f30, f0, f31
    lfs f29, 0x10(r31)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r7, r1, 0x120
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x130(r1)
    stw r0, 0x134(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    addi r6, r1, 0x130
    lwz r0, 0x104(r5)
    stw r0, 0x8(r1)
    addi r0, r5, 0x138
    stw r0, 0xc(r1)
    addi r0, r5, 0x108
    stw r0, 0x10(r1)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    lwz r8, 0xf8(r29)
    lwz r9, 0xfc(r29)
    lwz r10, 0x100(r29)
    bl fn_800D7520
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r7, r1, 0x100
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r6, r1, 0x110
    lwz r0, 0x174(r29)
    stw r0, 0x8(r1)
    addi r0, r29, 0x1a8
    stw r0, 0xc(r1)
    addi r0, r29, 0x178
    stw r0, 0x10(r1)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    lwz r8, 0x168(r29)
    lwz r9, 0x16c(r29)
    lwz r10, 0x170(r29)
    bl fn_800D7520
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r7, r1, 0xe0
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r6, r1, 0xf0
    lwz r0, 0x1e4(r29)
    stw r0, 0x8(r1)
    addi r0, r29, 0x218
    stw r0, 0xc(r1)
    addi r0, r29, 0x1e8
    stw r0, 0x10(r1)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    lwz r8, 0x1d8(r29)
    lwz r9, 0x1dc(r29)
    lwz r10, 0x1e0(r29)
    bl fn_800D7520
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r7, r1, 0xc0
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r6, r1, 0xd0
    lwz r0, 0x254(r29)
    stw r0, 0x8(r1)
    addi r0, r29, 0x288
    stw r0, 0xc(r1)
    addi r0, r29, 0x258
    stw r0, 0x10(r1)
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    lwz r8, 0x248(r29)
    lwz r9, 0x24c(r29)
    lwz r10, 0x250(r29)
    bl fn_800D7520
    lfs f2, lbl_8049FEB8
    stfs f2, 0x150(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x154(r1)
    stfs f2, 0x158(r1)
    fmr f1, f31
    stfs f1, 0x15c(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x140(r1)
    stfs f2, 0x144(r1)
    stfs f2, 0x148(r1)
    stfs f1, 0x14c(r1)
    lfs f0, 0x18(r31)
    fmuls f30, f0, f31
    lfs f29, 0x1c(r31)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r7, r1, 0xa0
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r6, r1, 0xb0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    bl fn_800D637C
    lfs f1, lbl_8049FEB8
    stfs f1, 0x150(r1)
    lfs f0, 0x20(r31)
    stfs f0, 0x154(r1)
    stfs f1, 0x158(r1)
    fmr f0, f31
    stfs f0, 0x15c(r1)
    stfs f0, 0x140(r1)
    stfs f1, 0x144(r1)
    stfs f1, 0x148(r1)
    stfs f0, 0x14c(r1)
    lfs f0, 0xc(r31)
    fmuls f30, f0, f31
    lfs f29, 0x10(r31)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r7, r1, 0x80
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r6, r1, 0x90
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    bl fn_800D7950
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r7, r1, 0x60
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r6, r1, 0x70
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    bl fn_800D7F18
    lfs f1, lbl_8049FEB8
    stfs f1, 0x150(r1)
    lfs f0, 0x24(r31)
    stfs f0, 0x154(r1)
    stfs f1, 0x158(r1)
    fmr f0, f31
    stfs f0, 0x15c(r1)
    stfs f0, 0x140(r1)
    stfs f1, 0x144(r1)
    stfs f1, 0x148(r1)
    stfs f0, 0x14c(r1)
    lfs f0, 0x18(r31)
    fmuls f30, f0, f31
    lfs f29, 0x1c(r31)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r7, r1, 0x40
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r6, r1, 0x50
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    bl fn_800D6764
    lfs f1, lbl_8049FEB8
    stfs f1, 0x150(r1)
    lfs f0, 0x20(r31)
    stfs f0, 0x154(r1)
    stfs f1, 0x158(r1)
    fmr f0, f31
    stfs f0, 0x15c(r1)
    stfs f0, 0x140(r1)
    stfs f1, 0x144(r1)
    stfs f1, 0x148(r1)
    stfs f0, 0x14c(r1)
    lfs f0, 0x28(r31)
    fmuls f30, f0, f31
    lfs f29, 0x2c(r31)
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r7, r1, 0x20
    lwz r3, 0x150(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x158(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r6, r1, 0x30
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f29
    fmr f2, f30
    bl fn_800D6B30
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
// fn_800D637C
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D637C() {
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
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FEB8
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
    bge lbl_800D6544
    cmpwi r28, 0x2c
    bge lbl_800D652C
    cmpwi r28, 0x12
    bge lbl_800D6520
    cmpwi r28, 0x10
    bge lbl_800D6578
    b lbl_800D65F4
lbl_800D6520:
    cmpwi r28, 0x2a
    bge lbl_800D6578
    b lbl_800D65F4
lbl_800D652C:
    cmpwi r28, 0x2e
    beq lbl_800D6578
    blt lbl_800D65F4
    cmpwi r28, 0x66
    bge lbl_800D6578
    b lbl_800D65F4
lbl_800D6544:
    cmpwi r28, 0x8a
    beq lbl_800D65F4
    bge lbl_800D6570
    cmpwi r28, 0x86
    bge lbl_800D6564
    cmpwi r28, 0x84
    bge lbl_800D6578
    b lbl_800D65F4
lbl_800D6564:
    cmpwi r28, 0x88
    bge lbl_800D6578
    b lbl_800D65F4
lbl_800D6570:
    cmpwi r28, 0x8c
    bge lbl_800D65F4
lbl_800D6578:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D6590
    stfs f0, 0x10(r1)
lbl_800D6590:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D65A8
    stfs f0, 0x14(r1)
lbl_800D65A8:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D65C0
    stfs f0, 0x14(r1)
lbl_800D65C0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D65D8
    stfs f0, 0x18(r1)
lbl_800D65D8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D669C
    stfs f0, 0x18(r1)
    b lbl_800D669C
lbl_800D65F4:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D6610
    stfs f0, 0x10(r1)
lbl_800D6610:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D662C
    stfs f0, 0x10(r1)
lbl_800D662C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D6648
    stfs f0, 0x14(r1)
lbl_800D6648:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D6664
    stfs f0, 0x14(r1)
lbl_800D6664:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D6680
    stfs f0, 0x18(r1)
lbl_800D6680:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x48(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D669C
    stfs f0, 0x18(r1)
lbl_800D669C:
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
// fn_800D6764
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D6764() {
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
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r31, 0xc8
    addi r4, r31, 0x98
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x8c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x90(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x98
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    addi r4, r31, 0x98
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r31, 0xc8
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
    bge lbl_800D692C
    cmpwi r28, 0x2c
    bge lbl_800D6914
    cmpwi r28, 0x12
    bge lbl_800D6908
    cmpwi r28, 0x10
    bge lbl_800D6960
    b lbl_800D69DC
lbl_800D6908:
    cmpwi r28, 0x2a
    bge lbl_800D6960
    b lbl_800D69DC
lbl_800D6914:
    cmpwi r28, 0x2e
    beq lbl_800D6960
    blt lbl_800D69DC
    cmpwi r28, 0x66
    bge lbl_800D6960
    b lbl_800D69DC
lbl_800D692C:
    cmpwi r28, 0x8a
    beq lbl_800D69DC
    bge lbl_800D6958
    cmpwi r28, 0x86
    bge lbl_800D694C
    cmpwi r28, 0x84
    bge lbl_800D6960
    b lbl_800D69DC
lbl_800D694C:
    cmpwi r28, 0x88
    bge lbl_800D6960
    b lbl_800D69DC
lbl_800D6958:
    cmpwi r28, 0x8c
    bge lbl_800D69DC
lbl_800D6960:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D6978
    stfs f0, 0x10(r1)
lbl_800D6978:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D6990
    stfs f0, 0x14(r1)
lbl_800D6990:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D69A8
    stfs f0, 0x14(r1)
lbl_800D69A8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D69C0
    stfs f0, 0x18(r1)
lbl_800D69C0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D6A68
    stfs f0, 0x18(r1)
    b lbl_800D6A68
lbl_800D69DC:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D69F8
    stfs f0, 0x10(r1)
lbl_800D69F8:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x4c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D6A14
    stfs f0, 0x14(r1)
lbl_800D6A14:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x50(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D6A30
    stfs f0, 0x14(r1)
lbl_800D6A30:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x30(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D6A4C
    stfs f0, 0x18(r1)
lbl_800D6A4C:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D6A68
    stfs f0, 0x18(r1)
lbl_800D6A68:
    lwz r3, 0x90(r31)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x90(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x90(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x90(r31)
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
// fn_800D6B30
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D6B30() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x240
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
    mr r25, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x70
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r0, 0x54(r25)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_800D6D50
    lwz r3, 0x50(r25)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_800D6D50
    rlwinm r0, r3, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_800D6D50
    andi. r0, r3, 0x820
    cmplwi r0, 0x820
    beq lbl_800D6D50
    cmpwi r28, 0x1f
    beq lbl_800D6D50
    cmpwi r28, 0xdc
    beq lbl_800D6D50
    cmpwi r28, 0xe0
    beq lbl_800D6D50
    cmpwi r28, 0xe6
    beq lbl_800D6D50
    cmpwi r28, 0xee
    beq lbl_800D6D50
    li r31, 0x0
    li r25, 0x0
    li r26, 0x0
lbl_800D6CF8:
    add r4, r27, r25
    addi r3, r4, 0x800
    addi r4, r4, 0x560
    bl fn_801734E4
    add r3, r27, r25
    addi r3, r3, 0x560
    add r4, r27, r26
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r26
    lwz r3, 0x4f0(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0xe
    blt lbl_800D6CF8
    li r3, 0x1
    b lbl_800D742C
lbl_800D6D50:
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FEB8
    lfs f15, 0x34(r3)
    lfs f16, 0x30(r3)
    lfs f17, 0x24(r3)
    lfs f18, 0x48(r3)
    lfs f19, 0x54(r3)
    lfs f20, 0x58(r3)
    lfs f21, 0x4c(r3)
    lfs f22, 0x50(r3)
    lfs f23, 0x5c(r3)
    lfs f25, 0x64(r3)
    lfs f26, 0xc(r3)
    lfs f27, 0x68(r3)
    lfs f29, 0x6c(r3)
    lfs f30, 0x28(r3)
    lfs f31, 0x70(r3)
    lfs f0, 0x44(r3)
    stfd f0, 0xe8(r1)
    lfs f0, 0x38(r3)
    stfd f0, 0xf0(r1)
    lfs f0, 0x3c(r3)
    stfd f0, 0xf8(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0xe0(r1)
    lfs f28, 0x40(r3)
    lfs f24, 0x60(r3)
lbl_800D6DC4:
    cmpwi r31, 0x0
    bne lbl_800D6E0C
    add r4, r27, r26
    addi r3, r4, 0x800
    addi r4, r4, 0x560
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x4ec(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x4f0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x560
    addi r4, r1, 0x80
    bl fn_801734E4
    b lbl_800D6EA8
lbl_800D6E0C:
    add r4, r27, r26
    addi r3, r4, 0x800
    addi r4, r4, 0x560
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D6E70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x4f0(r4)
    lwz r4, 0x528(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x528(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    lwz r5, 0x4f0(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D6E70:
    addi r3, r1, 0x80
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x528(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x4f0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x560
    addi r4, r1, 0x80
    bl fn_801734E4
lbl_800D6EA8:
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0x560
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x800
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    addi r5, r1, 0x70
    bl fn_8001B8B8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x40
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0xb0
    addi r5, r1, 0x40
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r28, 0x6b
    bge lbl_800D6F7C
    cmpwi r28, 0x2a
    bge lbl_800D6F58
    cmpwi r28, 0x1f
    beq lbl_800D70F8
    bge lbl_800D7238
    cmpwi r28, 0x12
    bge lbl_800D7238
    cmpwi r28, 0x10
    bge lbl_800D6FBC
    b lbl_800D7238
lbl_800D6F58:
    cmpwi r28, 0x2e
    beq lbl_800D6FBC
    bge lbl_800D6F70
    cmpwi r28, 0x2c
    bge lbl_800D7238
    b lbl_800D6FBC
lbl_800D6F70:
    cmpwi r28, 0x66
    bge lbl_800D6FBC
    b lbl_800D7238
lbl_800D6F7C:
    cmpwi r28, 0x8a
    beq lbl_800D7238
    bge lbl_800D6FA8
    cmpwi r28, 0x86
    bge lbl_800D6F9C
    cmpwi r28, 0x84
    bge lbl_800D6FBC
    b lbl_800D7238
lbl_800D6F9C:
    cmpwi r28, 0x88
    bge lbl_800D6FBC
    b lbl_800D7238
lbl_800D6FA8:
    cmpwi r28, 0xee
    beq lbl_800D70F8
    bge lbl_800D7238
    cmpwi r28, 0x8c
    bge lbl_800D7238
lbl_800D6FBC:
    cmpwi r31, 0x0
    bne lbl_800D7028
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D6FD4
    stfs f15, 0x20(r1)
lbl_800D6FD4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D6FE8
    stfs f16, 0x24(r1)
lbl_800D6FE8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800D6FFC
    stfs f17, 0x24(r1)
lbl_800D6FFC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D7010
    stfs f16, 0x28(r1)
lbl_800D7010:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D737C
    stfs f15, 0x28(r1)
    b lbl_800D737C
lbl_800D7028:
    cmpwi r31, 0x3
    bge lbl_800D7094
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D7040
    stfs f15, 0x20(r1)
lbl_800D7040:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D7054
    stfs f16, 0x24(r1)
lbl_800D7054:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800D7068
    stfs f18, 0x24(r1)
lbl_800D7068:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D707C
    stfs f16, 0x28(r1)
lbl_800D707C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D737C
    stfs f15, 0x28(r1)
    b lbl_800D737C
lbl_800D7094:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D70A4
    stfs f15, 0x20(r1)
lbl_800D70A4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D70B8
    stfs f19, 0x24(r1)
lbl_800D70B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800D70CC
    stfs f20, 0x24(r1)
lbl_800D70CC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800D70E0
    stfs f19, 0x28(r1)
lbl_800D70E0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800D737C
    stfs f20, 0x28(r1)
    b lbl_800D737C
lbl_800D70F8:
    cmpwi r31, 0x0
    bne lbl_800D7164
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D7110
    stfs f15, 0x20(r1)
lbl_800D7110:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800D7124
    stfs f21, 0x24(r1)
lbl_800D7124:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800D7138
    stfs f22, 0x24(r1)
lbl_800D7138:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800D714C
    stfs f23, 0x28(r1)
lbl_800D714C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800D737C
    stfs f24, 0x28(r1)
    b lbl_800D737C
lbl_800D7164:
    cmpwi r31, 0x3
    bge lbl_800D71D0
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D717C
    stfs f15, 0x20(r1)
lbl_800D717C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800D7190
    stfs f25, 0x24(r1)
lbl_800D7190:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800D71A4
    stfs f26, 0x24(r1)
lbl_800D71A4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800D71B8
    stfs f27, 0x28(r1)
lbl_800D71B8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800D737C
    stfs f28, 0x28(r1)
    b lbl_800D737C
lbl_800D71D0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D71E0
    stfs f15, 0x20(r1)
lbl_800D71E0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800D71F4
    stfs f29, 0x24(r1)
lbl_800D71F4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800D7208
    stfs f30, 0x24(r1)
lbl_800D7208:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800D721C
    stfs f31, 0x28(r1)
lbl_800D721C:
    lfs f1, 0x28(r1)
    lfd f0, 0xe0(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D737C
    stfs f0, 0x28(r1)
    b lbl_800D737C
lbl_800D7238:
    cmpwi r31, 0x0
    bne lbl_800D72A4
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D7250
    stfs f15, 0x20(r1)
lbl_800D7250:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D7264
    stfs f16, 0x24(r1)
lbl_800D7264:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D7278
    stfs f15, 0x24(r1)
lbl_800D7278:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D728C
    stfs f16, 0x28(r1)
lbl_800D728C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D737C
    stfs f15, 0x28(r1)
    b lbl_800D737C
lbl_800D72A4:
    cmpwi r31, 0x3
    bge lbl_800D7310
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D72BC
    stfs f15, 0x20(r1)
lbl_800D72BC:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D72D0
    stfs f16, 0x24(r1)
lbl_800D72D0:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D72E4
    stfs f15, 0x24(r1)
lbl_800D72E4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800D72F8
    stfs f16, 0x28(r1)
lbl_800D72F8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800D737C
    stfs f15, 0x28(r1)
    b lbl_800D737C
lbl_800D7310:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f15
    bge lbl_800D7320
    stfs f15, 0x20(r1)
lbl_800D7320:
    lfs f1, 0x24(r1)
    lfd f0, 0xe8(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D7338
    stfs f0, 0x24(r1)
lbl_800D7338:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800D734C
    stfs f18, 0x24(r1)
lbl_800D734C:
    lfs f1, 0x28(r1)
    lfd f0, 0xf0(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D7364
    stfs f0, 0x28(r1)
lbl_800D7364:
    lfs f1, 0x28(r1)
    lfd f0, 0xf8(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D737C
    stfs f0, 0x28(r1)
lbl_800D737C:
    add r4, r27, r25
    lwz r3, 0x4f0(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4f0(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4f0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0x4f0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0xe
    blt lbl_800D6DC4
    li r3, 0x1
lbl_800D742C:
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
// fn_800D7520
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D7520() {
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
    bl _savegpr_25
    mr r3, r12
    mr r25, r5
    mr r26, r6
    mr r27, r7
    fmr f30, f1
    fmr f31, f2
    mr r28, r9
    mr r31, r10
    lwz r29, 0xc(r3)
    lwz r30, 0x10(r3)
    addi r3, r1, 0x60
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    cmpwi r25, 0x201
    beq lbl_800D7650
    cmpwi r25, 0x202
    beq lbl_800D7650
    cmpwi r25, 0x203
    beq lbl_800D7650
    cmpwi r25, 0x204
    beq lbl_800D7650
    cmpwi r25, 0x205
    beq lbl_800D7650
    cmpwi r25, 0x206
    beq lbl_800D7650
    cmpwi r25, 0x207
    beq lbl_800D7650
    cmpwi r25, 0x208
    beq lbl_800D7650
    cmpwi r25, 0x209
    bne lbl_800D767C
lbl_800D7650:
    mr r3, r29
    mr r4, r30
    bl fn_801734E4
    mr r3, r30
    addi r4, r28, 0x224
    bl fn_801734E4
    lwz r0, 0x0(r31)
    clrrwi r0, r0, 1
    stw r0, 0x0(r31)
    li r3, 0x1
    b lbl_800D791C
lbl_800D767C:
    mr r3, r29
    mr r4, r30
    bl fn_801734E4
    addi r3, r1, 0x70
    addi r4, r28, 0x224
    addi r5, r31, 0x50
    bl fn_8017375C
    mr r3, r30
    addi r4, r1, 0x70
    bl fn_801734E4
    addi r3, r1, 0x60
    mr r4, r30
    mr r5, r27
    bl fn_80018AF8
    addi r3, r1, 0x50
    mr r4, r29
    mr r5, r27
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
    mr r5, r26
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
    cmpwi r25, 0x6b
    bge lbl_800D7764
    cmpwi r25, 0x2c
    bge lbl_800D774C
    cmpwi r25, 0x12
    bge lbl_800D7740
    cmpwi r25, 0x10
    bge lbl_800D7798
    b lbl_800D7814
lbl_800D7740:
    cmpwi r25, 0x2a
    bge lbl_800D7798
    b lbl_800D7814
lbl_800D774C:
    cmpwi r25, 0x2e
    beq lbl_800D7798
    blt lbl_800D7814
    cmpwi r25, 0x66
    bge lbl_800D7798
    b lbl_800D7814
lbl_800D7764:
    cmpwi r25, 0x8a
    beq lbl_800D7814
    bge lbl_800D7790
    cmpwi r25, 0x86
    bge lbl_800D7784
    cmpwi r25, 0x84
    bge lbl_800D7798
    b lbl_800D7814
lbl_800D7784:
    cmpwi r25, 0x88
    bge lbl_800D7798
    b lbl_800D7814
lbl_800D7790:
    cmpwi r25, 0x8c
    bge lbl_800D7814
lbl_800D7798:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D77B0
    stfs f0, 0x10(r1)
lbl_800D77B0:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x6c(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D77C8
    stfs f0, 0x14(r1)
lbl_800D77C8:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x28(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D77E0
    stfs f0, 0x14(r1)
lbl_800D77E0:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    bge lbl_800D77F8
    stfs f0, 0x18(r1)
lbl_800D77F8:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    ble lbl_800D78A0
    stfs f0, 0x18(r1)
    b lbl_800D78A0
lbl_800D7814:
    lfs f1, 0x10(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x34(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D7830
    stfs f0, 0x10(r1)
lbl_800D7830:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x40(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D784C
    stfs f0, 0x14(r1)
lbl_800D784C:
    lfs f1, 0x14(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x78(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D7868
    stfs f0, 0x14(r1)
lbl_800D7868:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x44(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800D7884
    stfs f0, 0x18(r1)
lbl_800D7884:
    lfs f1, 0x18(r1)
    la r3, lbl_8049FEB8
    lfs f0, 0x48(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800D78A0
    stfs f0, 0x18(r1)
lbl_800D78A0:
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r31)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r31)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r31)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r31)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r31)
    addi r3, r31, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r0, 0x0(r31)
    ori r0, r0, 0xe01
    stw r0, 0x0(r31)
    li r3, 0x1
lbl_800D791C:
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
// fn_800D7950
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D7950() {
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
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    cmpwi r28, 0x201
    beq lbl_800D7AD8
    cmpwi r28, 0x202
    beq lbl_800D7AD8
    cmpwi r28, 0x203
    beq lbl_800D7AD8
    cmpwi r28, 0x204
    beq lbl_800D7AD8
    cmpwi r28, 0x205
    beq lbl_800D7AD8
    cmpwi r28, 0x206
    beq lbl_800D7AD8
    cmpwi r28, 0x207
    beq lbl_800D7AD8
    cmpwi r28, 0x208
    bne lbl_800D7B3C
lbl_800D7AD8:
    li r31, 0x0
    li r25, 0x0
    li r26, 0x0
lbl_800D7AE4:
    add r4, r27, r25
    addi r3, r4, 0xb50
    addi r4, r4, 0xac0
    bl fn_801734E4
    add r3, r27, r25
    addi r3, r3, 0xac0
    add r4, r27, r26
    lwz r4, 0xab4(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r26
    lwz r3, 0xaa8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800D7AE4
    li r3, 0x1
    b lbl_800D7E84
lbl_800D7B3C:
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    lfs f24, lbl_8049FEB8
    la r3, lbl_8049FEB8
    lfs f25, 0x48(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x4c(r3)
    lfs f29, 0x50(r3)
    lfs f30, 0x8(r3)
    lfs f31, 0x3c(r3)
    lfs f26, 0x28(r3)
lbl_800D7B6C:
    cmpwi r31, 0x0
    bne lbl_800D7BB4
    add r4, r27, r26
    addi r3, r4, 0xb50
    addi r4, r4, 0xac0
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xaa4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xaa8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xac0
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800D7C50
lbl_800D7BB4:
    add r4, r27, r26
    addi r3, r4, 0xb50
    addi r4, r4, 0xac0
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D7C18
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0xaa8(r4)
    lwz r4, 0xab4(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0xab4(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xab4(r4)
    addi r4, r4, 0x224
    lwz r5, 0xaa8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D7C18:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xab4(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xaa8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xac0
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800D7C50:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xac0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xb50
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x90
    lwz r4, 0x174(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    cmpwi r28, 0x209
    beq lbl_800D7D4C
    b lbl_800D7D54
lbl_800D7D4C:
    stfs f26, 0x34(r1)
    b lbl_800D7DB8
lbl_800D7D54:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800D7D68
    stfs f27, 0x30(r1)
lbl_800D7D68:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800D7D7C
    stfs f28, 0x34(r1)
lbl_800D7D7C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800D7D90
    stfs f29, 0x34(r1)
lbl_800D7D90:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800D7DA4
    stfs f30, 0x38(r1)
lbl_800D7DA4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800D7DB8
    stfs f31, 0x38(r1)
lbl_800D7DB8:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800D7DD4
    stfs f0, 0x38(r1)
lbl_800D7DD4:
    add r4, r27, r25
    lwz r3, 0xaa8(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xaa8(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xaa8(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xaa8(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xaa8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0xaa8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800D7B6C
    li r3, 0x1
lbl_800D7E84:
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
// fn_800D7F18
// ----------------------------------------------------------------------------
extern "C" asm void fn_800D7F18() {
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
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049FEB8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    cmpwi r28, 0x201
    beq lbl_800D80A0
    cmpwi r28, 0x202
    beq lbl_800D80A0
    cmpwi r28, 0x203
    beq lbl_800D80A0
    cmpwi r28, 0x204
    beq lbl_800D80A0
    cmpwi r28, 0x205
    beq lbl_800D80A0
    cmpwi r28, 0x206
    beq lbl_800D80A0
    cmpwi r28, 0x207
    beq lbl_800D80A0
    cmpwi r28, 0x208
    bne lbl_800D8104
lbl_800D80A0:
    li r31, 0x0
    li r25, 0x0
    li r26, 0x0
lbl_800D80AC:
    add r4, r27, r25
    addi r3, r4, 0xc90
    addi r4, r4, 0xc00
    bl fn_801734E4
    add r3, r27, r25
    addi r3, r3, 0xc00
    add r4, r27, r26
    lwz r4, 0xbf4(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r3, r27, r26
    lwz r3, 0xbe8(r3)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800D80AC
    li r3, 0x1
    b lbl_800D844C
lbl_800D8104:
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    lfs f24, lbl_8049FEB8
    la r3, lbl_8049FEB8
    lfs f25, 0x48(r3)
    lfs f27, 0x34(r3)
    lfs f28, 0x4c(r3)
    lfs f29, 0x50(r3)
    lfs f30, 0x38(r3)
    lfs f31, 0x24(r3)
    lfs f26, 0x3c(r3)
lbl_800D8134:
    cmpwi r31, 0x0
    bne lbl_800D817C
    add r4, r27, r26
    addi r3, r4, 0xc90
    addi r4, r4, 0xc00
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xbe4(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xbe8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc00
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800D8218
lbl_800D817C:
    add r4, r27, r26
    addi r3, r4, 0xc90
    addi r4, r4, 0xc00
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800D81E0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0xbe8(r4)
    lwz r4, 0xbf4(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0xbf4(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xbf4(r4)
    addi r4, r4, 0x224
    lwz r5, 0xbe8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800D81E0:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xbf4(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0xbe8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0xc00
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800D8218:
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0xc00
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r26
    addi r4, r4, 0xc90
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    fmr f1, f22
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x90
    lwz r4, 0x254(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f24, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x10(r1)
    stfs f24, 0x14(r1)
    stfs f25, 0x18(r1)
    stfs f24, 0x1c(r1)
    cmpwi r28, 0x209
    beq lbl_800D8314
    b lbl_800D831C
lbl_800D8314:
    stfs f26, 0x34(r1)
    b lbl_800D8380
lbl_800D831C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800D8330
    stfs f27, 0x30(r1)
lbl_800D8330:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800D8344
    stfs f28, 0x34(r1)
lbl_800D8344:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800D8358
    stfs f29, 0x34(r1)
lbl_800D8358:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800D836C
    stfs f30, 0x38(r1)
lbl_800D836C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800D8380
    stfs f31, 0x38(r1)
lbl_800D8380:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x18(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800D839C
    stfs f0, 0x38(r1)
lbl_800D839C:
    add r4, r27, r25
    lwz r3, 0xbe8(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xbe8(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xbe8(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xbe8(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xbe8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r27, r25
    lwz r3, 0xbe8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800D8134
    li r3, 0x1
lbl_800D844C:
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

