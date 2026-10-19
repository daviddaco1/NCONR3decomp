#include "types.h"

// Translation unit: src/nej_eye.cpp
// Total functions: 12

// Small Data symbols (@sda21)
extern "C" float lbl_804A0480;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80395728[];

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
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
extern "C" void fn_800F5DA4();
extern "C" void fn_800F5DAC();
extern "C" void fn_800F6570();
extern "C" void fn_800F6A08();
extern "C" void fn_800F7208();
extern "C" void fn_800F7ADC();
extern "C" void fn_800F8250();
extern "C" void fn_800F8A74();
extern "C" void fn_800F9348();
extern "C" void fn_800F9AE0();
extern "C" void fn_800FA318();
extern "C" void fn_800FA6DC();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_80181454();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void fn_80190874();
extern "C" void fn_801D0CD0();
extern "C" void fn_801D4A9C();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800F5DA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F5DA4() {
    nofralloc
    li r5, 0x0
    b fn_800F5DAC
}

// ----------------------------------------------------------------------------
// fn_800F5DAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F5DAC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0xc
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800F654C
    cmpwi r31, 0x0
    beq lbl_800F5DF0
    b lbl_800F5E04
lbl_800F5DF0:
    lwz r3, 0x110(r29)
    li r4, 0xca0
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800F5E04:
    mr r3, r31
    li r4, 0x0
    li r5, 0xca0
    bl memset
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x4e0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x4e4(r31)
    mr r3, r29
    li r4, 0xae
    bl fn_8018149C
    stw r3, 0x4e8(r31)
    mr r3, r29
    li r4, 0xaf
    bl fn_8018149C
    stw r3, 0x4ec(r31)
    mr r3, r29
    li r4, 0xb0
    bl fn_8018149C
    stw r3, 0x4f0(r31)
    mr r3, r29
    li r4, 0xae
    bl fn_80181504
    stw r3, 0x4f4(r31)
    mr r3, r29
    li r4, 0xaf
    bl fn_80181504
    stw r3, 0x4f8(r31)
    mr r3, r29
    li r4, 0xb0
    bl fn_80181504
    stw r3, 0x4fc(r31)
    addi r3, r31, 0x500
    lwz r4, 0x4e4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x4e8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x590
    addi r4, r31, 0x500
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x620(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x624(r31)
    mr r3, r29
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x628(r31)
    mr r3, r29
    li r4, 0xac
    bl fn_8018149C
    stw r3, 0x62c(r31)
    mr r3, r29
    li r4, 0xad
    bl fn_8018149C
    stw r3, 0x630(r31)
    mr r3, r29
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x634(r31)
    mr r3, r29
    li r4, 0xac
    bl fn_80181504
    stw r3, 0x638(r31)
    mr r3, r29
    li r4, 0xad
    bl fn_80181504
    stw r3, 0x63c(r31)
    addi r3, r31, 0x640
    lwz r4, 0x624(r31)
    addi r4, r4, 0x224
    lwz r5, 0x628(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x6d0
    addi r4, r31, 0x640
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x760(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x764(r31)
    mr r3, r29
    li r4, 0xb1
    bl fn_8018149C
    stw r3, 0x768(r31)
    mr r3, r29
    li r4, 0xb2
    bl fn_8018149C
    stw r3, 0x76c(r31)
    mr r3, r29
    li r4, 0xb3
    bl fn_8018149C
    stw r3, 0x770(r31)
    mr r3, r29
    li r4, 0xb1
    bl fn_80181504
    stw r3, 0x774(r31)
    mr r3, r29
    li r4, 0xb2
    bl fn_80181504
    stw r3, 0x778(r31)
    mr r3, r29
    li r4, 0xb3
    bl fn_80181504
    stw r3, 0x77c(r31)
    addi r3, r31, 0x780
    lwz r4, 0x764(r31)
    addi r4, r4, 0x224
    lwz r5, 0x768(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x810
    addi r4, r31, 0x780
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x8a0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x8a4(r31)
    mr r3, r29
    li r4, 0xb7
    bl fn_8018149C
    stw r3, 0x8a8(r31)
    mr r3, r29
    li r4, 0xb8
    bl fn_8018149C
    stw r3, 0x8ac(r31)
    mr r3, r29
    li r4, 0xb9
    bl fn_8018149C
    stw r3, 0x8b0(r31)
    mr r3, r29
    li r4, 0xb7
    bl fn_80181504
    stw r3, 0x8b4(r31)
    mr r3, r29
    li r4, 0xb8
    bl fn_80181504
    stw r3, 0x8b8(r31)
    mr r3, r29
    li r4, 0xb9
    bl fn_80181504
    stw r3, 0x8bc(r31)
    addi r3, r31, 0x8c0
    lwz r4, 0x8a4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x8a8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x950
    addi r4, r31, 0x8c0
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x9e0(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x9e4(r31)
    mr r3, r29
    li r4, 0xb4
    bl fn_8018149C
    stw r3, 0x9e8(r31)
    mr r3, r29
    li r4, 0xb5
    bl fn_8018149C
    stw r3, 0x9ec(r31)
    mr r3, r29
    li r4, 0xb6
    bl fn_8018149C
    stw r3, 0x9f0(r31)
    mr r3, r29
    li r4, 0xb4
    bl fn_80181504
    stw r3, 0x9f4(r31)
    mr r3, r29
    li r4, 0xb5
    bl fn_80181504
    stw r3, 0x9f8(r31)
    mr r3, r29
    li r4, 0xb6
    bl fn_80181504
    stw r3, 0x9fc(r31)
    addi r3, r31, 0xa00
    lwz r4, 0x9e4(r31)
    addi r4, r4, 0x224
    lwz r5, 0x9e8(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xa90
    addi r4, r31, 0xa00
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xb20(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xb24(r31)
    mr r3, r29
    li r4, 0xba
    bl fn_8018149C
    stw r3, 0xb28(r31)
    mr r3, r29
    li r4, 0xbb
    bl fn_8018149C
    stw r3, 0xb2c(r31)
    mr r3, r29
    li r4, 0xbc
    bl fn_8018149C
    stw r3, 0xb30(r31)
    mr r3, r29
    li r4, 0xba
    bl fn_80181504
    stw r3, 0xb34(r31)
    mr r3, r29
    li r4, 0xbb
    bl fn_80181504
    stw r3, 0xb38(r31)
    mr r3, r29
    li r4, 0xbc
    bl fn_80181504
    stw r3, 0xb3c(r31)
    addi r3, r31, 0xb40
    lwz r4, 0xb24(r31)
    addi r4, r4, 0x224
    lwz r5, 0xb28(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0xbd0
    addi r4, r31, 0xb40
    bl fn_801734E4
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xc60(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xc64(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_8018149C
    stw r3, 0xc68(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_8018149C
    stw r3, 0xc6c(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_8018149C
    stw r3, 0xc70(r31)
    mr r3, r29
    li r4, 0x12
    bl fn_80181504
    stw r3, 0xc74(r31)
    mr r3, r29
    li r4, 0x13
    bl fn_80181504
    stw r3, 0xc78(r31)
    mr r3, r29
    li r4, 0x14
    bl fn_80181504
    stw r3, 0xc7c(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0xc80(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0xc84(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_8018149C
    stw r3, 0xc88(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_8018149C
    stw r3, 0xc8c(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_8018149C
    stw r3, 0xc90(r31)
    mr r3, r29
    li r4, 0xf
    bl fn_80181504
    stw r3, 0xc94(r31)
    mr r3, r29
    li r4, 0x10
    bl fn_80181504
    stw r3, 0xc98(r31)
    mr r3, r29
    li r4, 0x11
    bl fn_80181504
    stw r3, 0xc9c(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x308(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x30c(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x310(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x314(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x318(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x31c(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x3e0(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x3e4(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_8018149C
    stw r3, 0x3e8(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x3ec(r31)
    mr r3, r29
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x3f0(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x3f4(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0xf8(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x104(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_8018149C
    stw r3, 0x108(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_8018149C
    stw r3, 0x10c(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_8018149C
    stw r3, 0x110(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_80181504
    stw r3, 0x114(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_80181504
    stw r3, 0x118(r31)
    mr r3, r29
    li r4, 0xa6
    bl fn_80181504
    stw r3, 0x11c(r31)
    mr r3, r29
    li r4, 0xa7
    bl fn_80181504
    stw r3, 0x120(r31)
    mr r3, r29
    li r4, 0xa8
    bl fn_80181504
    stw r3, 0x124(r31)
    addi r3, r31, 0x128
    lwz r4, 0xfc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x100(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x218
    addi r4, r31, 0x128
    bl fn_801734E4
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x4b8(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x4bc(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x4c0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x4c4(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x4c8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x4cc(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x4d0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x4d4(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x4d8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x4dc(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0xc
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800F6558
lbl_800F654C:
    mr r3, r29
    mr r4, r30
    bl fn_800F6570
lbl_800F6558:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800F6570
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F6570() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x190
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
    lfs f31, lbl_804A0480
    la r31, lbl_804A0480
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x140(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x144(r1)
    stfs f31, 0x148(r1)
    stfs f29, 0x14c(r1)
    stfs f29, 0x130(r1)
    stfs f31, 0x134(r1)
    stfs f31, 0x138(r1)
    stfs f29, 0x13c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x110(r1)
    stw r0, 0x114(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    addi r7, r1, 0x110
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x120(r1)
    stw r0, 0x124(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x128(r1)
    stw r0, 0x12c(r1)
    addi r6, r1, 0x120
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F6A08
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xf0(r1)
    stw r0, 0xf4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xf8(r1)
    stw r0, 0xfc(r1)
    addi r7, r1, 0xf0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x100(r1)
    stw r0, 0x104(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    addi r6, r1, 0x100
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F7208
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F7ADC
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F8250
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F8A74
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F9348
    lfs f1, lbl_804A0480
    stfs f1, 0x140(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x144(r1)
    stfs f1, 0x148(r1)
    fmr f0, f29
    stfs f0, 0x14c(r1)
    stfs f0, 0x130(r1)
    stfs f1, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x18(r31)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800F9AE0
    lfs f1, lbl_804A0480
    stfs f1, 0x140(r1)
    lfs f0, 0x14(r31)
    stfs f0, 0x144(r1)
    stfs f1, 0x148(r1)
    fmr f0, f29
    stfs f0, 0x14c(r1)
    stfs f0, 0x130(r1)
    stfs f1, 0x134(r1)
    stfs f1, 0x138(r1)
    stfs f0, 0x13c(r1)
    lfs f0, 0x1c(r31)
    fmuls f31, f0, f29
    lfs f30, 0x20(r31)
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FA318
    lwz r3, 0x130(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x138(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x140(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x148(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_800FA6DC
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
// fn_800F6A08
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F6A08() {
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
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xae
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0480
    lfs f19, 0x4(r31)
    lfs f20, 0x8(r31)
    lfs f21, lbl_804A0480
    lfs f18, 0x24(r31)
    lfs f17, 0xc(r31)
    lfs f24, 0x30(r31)
    lfs f25, 0x34(r31)
    lfs f26, 0x38(r31)
    lfs f27, 0x3c(r31)
    lfs f23, 0x2c(r31)
    lfs f22, 0x28(r31)
    lfs f28, 0x40(r31)
    lfs f29, 0x44(r31)
    lfs f30, 0x48(r31)
    lfs f31, 0x4c(r31)
lbl_800F6C00:
    add r3, r26, r24
    lwz r3, 0x4e8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    add r4, r26, r25
    addi r3, r4, 0x590
    addi r4, r4, 0x500
    bl fn_801734E4
    cmpwi r30, 0x0
    bne lbl_800F6C54
    addi r3, r1, 0xf0
    lwz r4, 0x4e4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x4e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    b lbl_800F6CD0
lbl_800F6C54:
    cmpwi r30, 0x2
    blt lbl_800F6CA8
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x4e8(r4)
    lwz r4, 0x4f4(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x4f4(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x4f4(r4)
    addi r4, r4, 0x224
    lwz r5, 0x4e8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F6CA8:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x4f4(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x4e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
lbl_800F6CD0:
    add r3, r26, r25
    addi r3, r3, 0x500
    addi r4, r1, 0xf0
    bl fn_801734E4
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x500
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x590
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
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
    cmpwi r30, 0x2
    bge lbl_800F6D88
    cmpwi r30, 0x0
    bge lbl_800F6D74
    b lbl_800F6D88
lbl_800F6D74:
    addi r3, r1, 0xc0
    lwz r4, 0xc78(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F6D98
lbl_800F6D88:
    addi r3, r1, 0xc0
    lwz r4, 0xc7c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800F6D98:
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
    stfs f21, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f21, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800F6E10
    cmpwi r30, 0x0
    bge lbl_800F6E08
    b lbl_800F6E10
lbl_800F6E08:
    stfs f17, 0x68(r1)
    b lbl_800F6E14
lbl_800F6E10:
    stfs f18, 0x68(r1)
lbl_800F6E14:
    cmpwi r27, 0x88
    bge lbl_800F6E78
    cmpwi r27, 0x2e
    beq lbl_800F6EBC
    bge lbl_800F6E50
    cmpwi r27, 0x2a
    bge lbl_800F6E44
    cmpwi r27, 0x12
    bge lbl_800F6F44
    cmpwi r27, 0x10
    bge lbl_800F6EBC
    b lbl_800F6F44
lbl_800F6E44:
    cmpwi r27, 0x2c
    bge lbl_800F6F44
    b lbl_800F6EBC
lbl_800F6E50:
    cmpwi r27, 0x84
    bge lbl_800F6E6C
    cmpwi r27, 0x6b
    bge lbl_800F6F44
    cmpwi r27, 0x66
    bge lbl_800F6EBC
    b lbl_800F6F44
lbl_800F6E6C:
    cmpwi r27, 0x86
    bge lbl_800F6F44
    b lbl_800F6EBC
lbl_800F6E78:
    cmpwi r27, 0x160
    beq lbl_800F6F10
    bge lbl_800F6E9C
    cmpwi r27, 0x8b
    beq lbl_800F6EBC
    bge lbl_800F6F44
    cmpwi r27, 0x8a
    bge lbl_800F6F44
    b lbl_800F6EBC
lbl_800F6E9C:
    cmpwi r27, 0x1b5
    beq lbl_800F6F44
    bge lbl_800F6EB4
    cmpwi r27, 0x1b4
    bge lbl_800F6EBC
    b lbl_800F6F44
lbl_800F6EB4:
    cmpwi r27, 0x1b7
    bge lbl_800F6F44
lbl_800F6EBC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800F6ED0
    stfs f19, 0x50(r1)
lbl_800F6ED0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F6EE4
    stfs f20, 0x54(r1)
lbl_800F6EE4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800F6EF8
    stfs f21, 0x54(r1)
lbl_800F6EF8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800F6FA8
    stfs f22, 0x58(r1)
    b lbl_800F6FA8
lbl_800F6F10:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F6F20
    stfs f19, 0x50(r1)
lbl_800F6F20:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F6F30
    stfs f20, 0x54(r1)
lbl_800F6F30:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    ble lbl_800F6FA8
    stfs f23, 0x54(r1)
    b lbl_800F6FA8
lbl_800F6F44:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800F6F58
    stfs f18, 0x50(r1)
lbl_800F6F58:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800F6F6C
    stfs f24, 0x54(r1)
lbl_800F6F6C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800F6F80
    stfs f25, 0x54(r1)
lbl_800F6F80:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F6F94
    stfs f26, 0x58(r1)
lbl_800F6F94:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F6FA8
    stfs f27, 0x58(r1)
lbl_800F6FA8:
    cmpwi r30, 0x0
    bne lbl_800F7048
    addi r3, r1, 0x30
    lwz r4, 0xc68(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f28
    fcmpo cr0, f0, f29
    ble lbl_800F7014
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f28
    stfs f0, 0xa0(r1)
    fcmpo cr0, f0, f29
    bge lbl_800F7018
    stfs f29, 0xa0(r1)
    b lbl_800F7018
lbl_800F7014:
    stfs f29, 0xa0(r1)
lbl_800F7018:
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f21, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800F7048:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F7064
    stfs f0, 0x58(r1)
lbl_800F7064:
    add r4, r26, r24
    lwz r3, 0x4e8(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4e8(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4e8(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4e8(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4e8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x4e8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_800F6C00
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F7208
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F7208() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2b0
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
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xab
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0480
    lfs f20, 0x4(r31)
    lfs f21, 0x54(r31)
    lfs f22, 0x24(r31)
    lfs f23, 0x58(r31)
    lfs f24, 0x8(r31)
    lfs f17, lbl_804A0480
    lfs f19, 0x34(r31)
    lfs f18, 0x50(r31)
    lfs f26, 0x5c(r31)
    lfs f27, 0x60(r31)
    lfs f28, 0x30(r31)
    lfs f0, 0x68(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0xc(r31)
    stfd f0, 0x158(r1)
    lfs f29, 0x64(r31)
    lfs f25, 0x2c(r31)
    lfs f30, 0x40(r31)
    lfs f31, 0x44(r31)
    lfs f0, 0x6c(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0x70(r31)
    stfd f0, 0x168(r1)
lbl_800F7420:
    add r3, r26, r24
    lwz r3, 0x628(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800F7484
    add r4, r26, r25
    addi r3, r4, 0x6d0
    addi r4, r4, 0x640
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x624(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x628(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x640
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800F7520
lbl_800F7484:
    add r4, r26, r25
    addi r3, r4, 0x6d0
    addi r4, r4, 0x640
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800F74E8
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x628(r4)
    lwz r4, 0x634(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x634(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x634(r4)
    addi r4, r4, 0x224
    lwz r5, 0x628(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F74E8:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x634(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x628(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x640
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800F7520:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x640
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x6d0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
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
    lwz r4, 0xc78(r26)
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
    stfs f17, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x60(r1)
    stfs f17, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800F7628
    cmpwi r30, 0x0
    bge lbl_800F761C
    b lbl_800F7628
lbl_800F761C:
    stfs f18, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800F7630
lbl_800F7628:
    stfs f19, 0x64(r1)
    stfs f22, 0x68(r1)
lbl_800F7630:
    cmpwi r27, 0x88
    bge lbl_800F7694
    cmpwi r27, 0x2e
    beq lbl_800F76D8
    bge lbl_800F766C
    cmpwi r27, 0x2a
    bge lbl_800F7660
    cmpwi r27, 0x12
    bge lbl_800F7760
    cmpwi r27, 0x10
    bge lbl_800F76D8
    b lbl_800F7760
lbl_800F7660:
    cmpwi r27, 0x2c
    bge lbl_800F7760
    b lbl_800F76D8
lbl_800F766C:
    cmpwi r27, 0x84
    bge lbl_800F7688
    cmpwi r27, 0x6b
    bge lbl_800F7760
    cmpwi r27, 0x66
    bge lbl_800F76D8
    b lbl_800F7760
lbl_800F7688:
    cmpwi r27, 0x86
    bge lbl_800F7760
    b lbl_800F76D8
lbl_800F7694:
    cmpwi r27, 0x160
    beq lbl_800F772C
    bge lbl_800F76B8
    cmpwi r27, 0x8b
    beq lbl_800F76D8
    bge lbl_800F7760
    cmpwi r27, 0x8a
    bge lbl_800F7760
    b lbl_800F76D8
lbl_800F76B8:
    cmpwi r27, 0x1b5
    beq lbl_800F7760
    bge lbl_800F76D0
    cmpwi r27, 0x1b4
    bge lbl_800F76D8
    b lbl_800F7760
lbl_800F76D0:
    cmpwi r27, 0x1b7
    bge lbl_800F7760
lbl_800F76D8:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F76E8
    stfs f20, 0x50(r1)
lbl_800F76E8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F76F8
    stfs f21, 0x54(r1)
lbl_800F76F8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F7708
    stfs f22, 0x54(r1)
lbl_800F7708:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F7718
    stfs f23, 0x58(r1)
lbl_800F7718:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F7834
    stfs f22, 0x58(r1)
    b lbl_800F7834
lbl_800F772C:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F773C
    stfs f20, 0x50(r1)
lbl_800F773C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    bge lbl_800F774C
    stfs f24, 0x54(r1)
lbl_800F774C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    ble lbl_800F7834
    stfs f25, 0x54(r1)
    b lbl_800F7834
lbl_800F7760:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F7774
    stfs f22, 0x50(r1)
lbl_800F7774:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F7788
    stfs f26, 0x54(r1)
lbl_800F7788:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F779C
    stfs f27, 0x54(r1)
lbl_800F779C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F77B0
    stfs f28, 0x58(r1)
lbl_800F77B0:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800F77C4
    stfs f19, 0x58(r1)
lbl_800F77C4:
    cmpwi r27, 0x1b1
    beq lbl_800F77E8
    bge lbl_800F7834
    cmpwi r27, 0x0
    beq lbl_800F77DC
    b lbl_800F7834
lbl_800F77DC:
    stfs f18, 0x64(r1)
    stfs f19, 0x68(r1)
    b lbl_800F7834
lbl_800F77E8:
    cmpwi r30, 0x1
    beq lbl_800F7818
    bge lbl_800F7800
    cmpwi r30, 0x0
    bge lbl_800F780C
    b lbl_800F7834
lbl_800F7800:
    cmpwi r30, 0x3
    bge lbl_800F7834
    b lbl_800F782C
lbl_800F780C:
    stfs f29, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800F7834
lbl_800F7818:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0x68(r1)
    b lbl_800F7834
lbl_800F782C:
    stfs f22, 0x64(r1)
    stfs f17, 0x68(r1)
lbl_800F7834:
    cmpwi r30, 0x0
    bne lbl_800F78E0
    addi r3, r1, 0x30
    lwz r4, 0xc68(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800F7894
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800F7898
lbl_800F7894:
    stfs f31, 0xa0(r1)
lbl_800F7898:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800F78A8
    stfs f31, 0xa0(r1)
lbl_800F78A8:
    lfd f0, 0x160(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800F78E0:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F790C
    stfs f0, 0x54(r1)
    cmpwi r30, 0x0
    bne lbl_800F790C
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800F790C:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F7938
    stfs f0, 0x58(r1)
    cmpwi r30, 0x0
    bne lbl_800F7938
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800F7938:
    add r4, r26, r24
    lwz r3, 0x628(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x628(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x628(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x628(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x628(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x628(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_800F7420
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F7ADC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F7ADC() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x250
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
    subi r11, r12, 0x110
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f15, f1
    fmr f16, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0480
    lfs f20, 0x4(r3)
    lfs f21, 0x54(r3)
    lfs f22, 0x24(r3)
    lfs f23, 0x58(r3)
    lfs f24, 0x8(r3)
    lfs f17, lbl_804A0480
    lfs f19, 0x34(r3)
    lfs f18, 0x50(r3)
    lfs f26, 0x3c(r3)
    lfs f27, 0x38(r3)
    lfs f28, 0x74(r3)
    lfs f29, 0x28(r3)
    lfs f30, 0x7c(r3)
    lfs f31, 0x78(r3)
    lfs f25, 0x2c(r3)
lbl_800F7C7C:
    add r3, r27, r24
    lwz r3, 0x768(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F7CE0
    add r4, r27, r25
    addi r3, r4, 0x810
    addi r4, r4, 0x780
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0x764(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x768(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x780
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800F7D7C
lbl_800F7CE0:
    add r4, r27, r25
    addi r3, r4, 0x810
    addi r4, r4, 0x780
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F7D44
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0x768(r4)
    lwz r4, 0x774(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0x774(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x774(r4)
    addi r4, r4, 0x224
    lwz r5, 0x768(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F7D44:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x774(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x768(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x780
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800F7D7C:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x780
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0x810
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f15
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
    lwz r4, 0xc78(r27)
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
    stfs f17, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x30(r1)
    stfs f17, 0x38(r1)
    stfs f17, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_800F7E94
    bge lbl_800F7E80
    cmpwi r31, 0x0
    bge lbl_800F7E8C
    b lbl_800F7EA0
lbl_800F7E80:
    cmpwi r31, 0x3
    bge lbl_800F7EA0
    b lbl_800F7E9C
lbl_800F7E8C:
    stfs f18, 0x34(r1)
    b lbl_800F7EA0
lbl_800F7E94:
    stfs f19, 0x34(r1)
    b lbl_800F7EA0
lbl_800F7E9C:
    stfs f22, 0x34(r1)
lbl_800F7EA0:
    cmpwi r28, 0x84
    bge lbl_800F7EF0
    cmpwi r28, 0x2e
    beq lbl_800F7F28
    bge lbl_800F7EDC
    cmpwi r28, 0x2a
    bge lbl_800F7ED0
    cmpwi r28, 0x12
    bge lbl_800F7FB0
    cmpwi r28, 0x10
    bge lbl_800F7F28
    b lbl_800F7FB0
lbl_800F7ED0:
    cmpwi r28, 0x2c
    bge lbl_800F7FB0
    b lbl_800F7F28
lbl_800F7EDC:
    cmpwi r28, 0x6b
    bge lbl_800F7FB0
    cmpwi r28, 0x66
    bge lbl_800F7F28
    b lbl_800F7FB0
lbl_800F7EF0:
    cmpwi r28, 0x8b
    beq lbl_800F7F28
    bge lbl_800F7F1C
    cmpwi r28, 0x88
    bge lbl_800F7F10
    cmpwi r28, 0x86
    bge lbl_800F7FB0
    b lbl_800F7F28
lbl_800F7F10:
    cmpwi r28, 0x8a
    bge lbl_800F7FB0
    b lbl_800F7F28
lbl_800F7F1C:
    cmpwi r28, 0x160
    beq lbl_800F7F7C
    b lbl_800F7FB0
lbl_800F7F28:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F7F38
    stfs f20, 0x20(r1)
lbl_800F7F38:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F7F48
    stfs f21, 0x24(r1)
lbl_800F7F48:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F7F58
    stfs f22, 0x24(r1)
lbl_800F7F58:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F7F68
    stfs f23, 0x28(r1)
lbl_800F7F68:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F8080
    stfs f22, 0x28(r1)
    b lbl_800F8080
lbl_800F7F7C:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F7F8C
    stfs f20, 0x20(r1)
lbl_800F7F8C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    bge lbl_800F7F9C
    stfs f24, 0x24(r1)
lbl_800F7F9C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    ble lbl_800F8080
    stfs f25, 0x24(r1)
    b lbl_800F8080
lbl_800F7FB0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F7FC4
    stfs f26, 0x20(r1)
lbl_800F7FC4:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800F7FD8
    stfs f27, 0x24(r1)
lbl_800F7FD8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800F7FEC
    stfs f28, 0x24(r1)
lbl_800F7FEC:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800F8000
    stfs f29, 0x28(r1)
lbl_800F8000:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800F8014
    stfs f26, 0x28(r1)
lbl_800F8014:
    cmpwi r28, 0x5
    beq lbl_800F8020
    b lbl_800F805C
lbl_800F8020:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800F8080
    cmpwi r31, 0x0
    bne lbl_800F8080
    add r4, r27, r24
    lwz r3, 0x768(r4)
    stfs f31, 0x10(r3)
    lwz r3, 0x768(r4)
    stfs f31, 0x14(r3)
    lwz r3, 0x768(r4)
    stfs f31, 0x18(r3)
    b lbl_800F8080
lbl_800F805C:
    cmpwi r31, 0x0
    bne lbl_800F8080
    add r4, r27, r24
    lwz r3, 0x768(r4)
    stfs f28, 0x10(r3)
    lwz r3, 0x768(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0x768(r4)
    stfs f31, 0x18(r3)
lbl_800F8080:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F809C
    stfs f0, 0x24(r1)
lbl_800F809C:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F80B8
    stfs f0, 0x28(r1)
lbl_800F80B8:
    add r4, r27, r24
    lwz r3, 0x768(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x768(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x768(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x768(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x768(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x768(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x3
    blt lbl_800F7C7C
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
    subi r11, r10, 0x110
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F8250
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F8250() {
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
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xb7
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0480
    lfs f19, 0x4(r31)
    lfs f20, 0x8(r31)
    lfs f21, lbl_804A0480
    lfs f18, 0x24(r31)
    lfs f17, 0xc(r31)
    lfs f24, 0x30(r31)
    lfs f25, 0x34(r31)
    lfs f26, 0x5c(r31)
    lfs f27, 0x1c(r31)
    lfs f23, 0x2c(r31)
    lfs f22, 0x80(r31)
    lfs f28, 0x40(r31)
    lfs f29, 0x44(r31)
    lfs f30, 0x48(r31)
    lfs f31, 0x84(r31)
lbl_800F8448:
    add r3, r26, r24
    lwz r3, 0x8a8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800F84AC
    add r4, r26, r25
    addi r3, r4, 0x950
    addi r4, r4, 0x8c0
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x8a4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x8a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x8c0
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800F8548
lbl_800F84AC:
    add r4, r26, r25
    addi r3, r4, 0x950
    addi r4, r4, 0x8c0
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800F8510
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x8a8(r4)
    lwz r4, 0x8b4(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x8b4(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x8b4(r4)
    addi r4, r4, 0x224
    lwz r5, 0x8a8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F8510:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x8b4(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x8a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x8c0
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800F8548:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0x8c0
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x950
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
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
    cmpwi r30, 0x2
    bge lbl_800F85F0
    cmpwi r30, 0x0
    bge lbl_800F85DC
    b lbl_800F85F0
lbl_800F85DC:
    addi r3, r1, 0xc0
    lwz r4, 0xc98(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F8600
lbl_800F85F0:
    addi r3, r1, 0xc0
    lwz r4, 0xc9c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800F8600:
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
    stfs f21, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x60(r1)
    stfs f21, 0x64(r1)
    stfs f21, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800F8678
    cmpwi r30, 0x0
    bge lbl_800F8670
    b lbl_800F8678
lbl_800F8670:
    stfs f17, 0x68(r1)
    b lbl_800F867C
lbl_800F8678:
    stfs f18, 0x68(r1)
lbl_800F867C:
    cmpwi r27, 0x88
    bge lbl_800F86E0
    cmpwi r27, 0x2e
    beq lbl_800F8724
    bge lbl_800F86B8
    cmpwi r27, 0x2a
    bge lbl_800F86AC
    cmpwi r27, 0x12
    bge lbl_800F87AC
    cmpwi r27, 0x10
    bge lbl_800F8724
    b lbl_800F87AC
lbl_800F86AC:
    cmpwi r27, 0x2c
    bge lbl_800F87AC
    b lbl_800F8724
lbl_800F86B8:
    cmpwi r27, 0x84
    bge lbl_800F86D4
    cmpwi r27, 0x6b
    bge lbl_800F87AC
    cmpwi r27, 0x66
    bge lbl_800F8724
    b lbl_800F87AC
lbl_800F86D4:
    cmpwi r27, 0x86
    bge lbl_800F87AC
    b lbl_800F8724
lbl_800F86E0:
    cmpwi r27, 0x160
    beq lbl_800F8778
    bge lbl_800F8704
    cmpwi r27, 0x8b
    beq lbl_800F8724
    bge lbl_800F87AC
    cmpwi r27, 0x8a
    bge lbl_800F87AC
    b lbl_800F8724
lbl_800F8704:
    cmpwi r27, 0x1b5
    beq lbl_800F87AC
    bge lbl_800F871C
    cmpwi r27, 0x1b4
    bge lbl_800F8724
    b lbl_800F87AC
lbl_800F871C:
    cmpwi r27, 0x1b7
    bge lbl_800F87AC
lbl_800F8724:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800F8738
    stfs f19, 0x50(r1)
lbl_800F8738:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800F874C
    stfs f20, 0x54(r1)
lbl_800F874C:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800F8760
    stfs f21, 0x54(r1)
lbl_800F8760:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F8810
    stfs f22, 0x58(r1)
    b lbl_800F8810
lbl_800F8778:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F8788
    stfs f19, 0x50(r1)
lbl_800F8788:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F8798
    stfs f20, 0x54(r1)
lbl_800F8798:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f23
    ble lbl_800F8810
    stfs f23, 0x54(r1)
    b lbl_800F8810
lbl_800F87AC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800F87C0
    stfs f18, 0x50(r1)
lbl_800F87C0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800F87D4
    stfs f24, 0x54(r1)
lbl_800F87D4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800F87E8
    stfs f25, 0x54(r1)
lbl_800F87E8:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F87FC
    stfs f26, 0x58(r1)
lbl_800F87FC:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F8810
    stfs f27, 0x58(r1)
lbl_800F8810:
    cmpwi r30, 0x0
    bne lbl_800F88B4
    addi r3, r1, 0x30
    lwz r4, 0xc88(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f28
    fcmpo cr0, f0, f29
    ble lbl_800F8870
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f28
    stfs f0, 0xa0(r1)
    b lbl_800F8874
lbl_800F8870:
    stfs f29, 0xa0(r1)
lbl_800F8874:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f29
    bge lbl_800F8884
    stfs f29, 0xa0(r1)
lbl_800F8884:
    stfs f30, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f21, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800F88B4:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F88D0
    stfs f0, 0x58(r1)
lbl_800F88D0:
    add r4, r26, r24
    lwz r3, 0x8a8(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x8a8(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x8a8(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x8a8(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x8a8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x8a8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_800F8448
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F8A74
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F8A74() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2b0
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
    bl _savegpr_24
    mr r24, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f15, f1
    fmr f16, f2
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
    li r4, 0xb4
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x20
    bl fn_801D0CD0
    stw r3, 0x10(r1)
    addi r4, r1, 0x10
    addi r3, r1, 0x1c
    bl fn_80031A74
    addi r3, r1, 0xb0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r31, lbl_804A0480
    lfs f20, 0x4(r31)
    lfs f21, 0x54(r31)
    lfs f22, 0x24(r31)
    lfs f23, 0x58(r31)
    lfs f24, 0x8(r31)
    lfs f17, lbl_804A0480
    lfs f19, 0x34(r31)
    lfs f18, 0x50(r31)
    lfs f26, 0x5c(r31)
    lfs f27, 0x60(r31)
    lfs f28, 0x30(r31)
    lfs f0, 0x68(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0xc(r31)
    stfd f0, 0x158(r1)
    lfs f29, 0x64(r31)
    lfs f25, 0x2c(r31)
    lfs f30, 0x40(r31)
    lfs f31, 0x44(r31)
    lfs f0, 0x6c(r31)
    stfd f0, 0x160(r1)
    lfs f0, 0x88(r31)
    stfd f0, 0x168(r1)
lbl_800F8C8C:
    add r3, r26, r24
    lwz r3, 0x9e8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_800F8CF0
    add r4, r26, r25
    addi r3, r4, 0xa90
    addi r4, r4, 0xa00
    bl fn_801734E4
    addi r3, r1, 0xf0
    lwz r4, 0x9e4(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x9e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa00
    addi r4, r1, 0xf0
    bl fn_801734E4
    b lbl_800F8D8C
lbl_800F8CF0:
    add r4, r26, r25
    addi r3, r4, 0xa90
    addi r4, r4, 0xa00
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800F8D54
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x9e8(r4)
    lwz r4, 0x9f4(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x9f4(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x9f4(r4)
    addi r4, r4, 0x224
    lwz r5, 0x9e8(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F8D54:
    addi r3, r1, 0xf0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x9f4(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x9e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0xa00
    addi r4, r1, 0xf0
    bl fn_801734E4
lbl_800F8D8C:
    addi r3, r1, 0xb0
    add r4, r26, r25
    addi r4, r4, 0xa00
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0xa90
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0xa0
    addi r5, r1, 0xb0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    fmr f1, f15
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
    lwz r4, 0xc98(r26)
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
    stfs f17, 0x4c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x120
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x60(r1)
    stfs f17, 0x6c(r1)
    cmpwi r30, 0x2
    bge lbl_800F8E94
    cmpwi r30, 0x0
    bge lbl_800F8E88
    b lbl_800F8E94
lbl_800F8E88:
    stfs f18, 0x64(r1)
    stfs f18, 0x68(r1)
    b lbl_800F8E9C
lbl_800F8E94:
    stfs f19, 0x64(r1)
    stfs f22, 0x68(r1)
lbl_800F8E9C:
    cmpwi r27, 0x88
    bge lbl_800F8F00
    cmpwi r27, 0x2e
    beq lbl_800F8F44
    bge lbl_800F8ED8
    cmpwi r27, 0x2a
    bge lbl_800F8ECC
    cmpwi r27, 0x12
    bge lbl_800F8FCC
    cmpwi r27, 0x10
    bge lbl_800F8F44
    b lbl_800F8FCC
lbl_800F8ECC:
    cmpwi r27, 0x2c
    bge lbl_800F8FCC
    b lbl_800F8F44
lbl_800F8ED8:
    cmpwi r27, 0x84
    bge lbl_800F8EF4
    cmpwi r27, 0x6b
    bge lbl_800F8FCC
    cmpwi r27, 0x66
    bge lbl_800F8F44
    b lbl_800F8FCC
lbl_800F8EF4:
    cmpwi r27, 0x86
    bge lbl_800F8FCC
    b lbl_800F8F44
lbl_800F8F00:
    cmpwi r27, 0x160
    beq lbl_800F8F98
    bge lbl_800F8F24
    cmpwi r27, 0x8b
    beq lbl_800F8F44
    bge lbl_800F8FCC
    cmpwi r27, 0x8a
    bge lbl_800F8FCC
    b lbl_800F8F44
lbl_800F8F24:
    cmpwi r27, 0x1b5
    beq lbl_800F8FCC
    bge lbl_800F8F3C
    cmpwi r27, 0x1b4
    bge lbl_800F8F44
    b lbl_800F8FCC
lbl_800F8F3C:
    cmpwi r27, 0x1b7
    bge lbl_800F8FCC
lbl_800F8F44:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F8F54
    stfs f20, 0x50(r1)
lbl_800F8F54:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f21
    bge lbl_800F8F64
    stfs f21, 0x54(r1)
lbl_800F8F64:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F8F74
    stfs f22, 0x54(r1)
lbl_800F8F74:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F8F84
    stfs f23, 0x58(r1)
lbl_800F8F84:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f22
    ble lbl_800F90A0
    stfs f22, 0x58(r1)
    b lbl_800F90A0
lbl_800F8F98:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F8FA8
    stfs f20, 0x50(r1)
lbl_800F8FA8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f24
    bge lbl_800F8FB8
    stfs f24, 0x54(r1)
lbl_800F8FB8:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f25
    ble lbl_800F90A0
    stfs f25, 0x54(r1)
    b lbl_800F90A0
lbl_800F8FCC:
    lfs f0, 0x50(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F8FE0
    stfs f22, 0x50(r1)
lbl_800F8FE0:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F8FF4
    stfs f26, 0x54(r1)
lbl_800F8FF4:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F9008
    stfs f27, 0x54(r1)
lbl_800F9008:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F901C
    stfs f28, 0x58(r1)
lbl_800F901C:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800F9030
    stfs f19, 0x58(r1)
lbl_800F9030:
    cmpwi r27, 0x1b1
    beq lbl_800F9054
    bge lbl_800F90A0
    cmpwi r27, 0x0
    beq lbl_800F9048
    b lbl_800F90A0
lbl_800F9048:
    stfs f18, 0x64(r1)
    stfs f19, 0x68(r1)
    b lbl_800F90A0
lbl_800F9054:
    cmpwi r30, 0x1
    beq lbl_800F9084
    bge lbl_800F906C
    cmpwi r30, 0x0
    bge lbl_800F9078
    b lbl_800F90A0
lbl_800F906C:
    cmpwi r30, 0x3
    bge lbl_800F90A0
    b lbl_800F9098
lbl_800F9078:
    stfs f29, 0x64(r1)
    stfs f20, 0x68(r1)
    b lbl_800F90A0
lbl_800F9084:
    lfd f0, 0x150(r1)
    stfs f0, 0x64(r1)
    lfd f0, 0x158(r1)
    stfs f0, 0x68(r1)
    b lbl_800F90A0
lbl_800F9098:
    stfs f22, 0x64(r1)
    stfs f17, 0x68(r1)
lbl_800F90A0:
    cmpwi r30, 0x0
    bne lbl_800F914C
    addi r3, r1, 0x30
    lwz r4, 0xc88(r26)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    fcmpo cr0, f0, f31
    ble lbl_800F9100
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    fmr f14, f1
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    fadds f0, f1, f14
    fdivs f0, f0, f30
    stfs f0, 0xa0(r1)
    b lbl_800F9104
lbl_800F9100:
    stfs f31, 0xa0(r1)
lbl_800F9104:
    lfs f0, 0xa0(r1)
    fcmpo cr0, f0, f31
    bge lbl_800F9114
    stfs f31, 0xa0(r1)
lbl_800F9114:
    lfd f0, 0x160(r1)
    stfs f0, 0xa4(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0xa8(r1)
    stfs f17, 0xac(r1)
    addi r3, r1, 0xa0
    mr r4, r3
    lfs f1, 0x24(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    lfs f1, 0xa0(r1)
    lfs f2, 0xa4(r1)
    lfs f3, 0xa8(r1)
    bl fn_801D4A9C
lbl_800F914C:
    lfs f2, 0x54(r1)
    lfs f1, 0x44(r1)
    lfs f0, 0x64(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F9178
    stfs f0, 0x54(r1)
    cmpwi r30, 0x0
    bne lbl_800F9178
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800F9178:
    lfs f2, 0x58(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x68(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F91A4
    stfs f0, 0x58(r1)
    cmpwi r30, 0x0
    bne lbl_800F91A4
    lfs f0, 0x40(r1)
    stfs f0, 0x50(r1)
lbl_800F91A4:
    add r4, r26, r24
    lwz r3, 0x9e8(r4)
    lfs f0, 0x50(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x9e8(r4)
    lfs f0, 0x54(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x9e8(r4)
    lfs f0, 0x58(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x9e8(r4)
    lfs f0, 0x5c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f16, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x9e8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x9e8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_800F8C8C
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F9348
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F9348() {
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
    bl _savegpr_24
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f14, f1
    fmr f15, f2
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0480
    lfs f19, 0x4(r3)
    lfs f20, 0x54(r3)
    lfs f21, 0x24(r3)
    lfs f22, 0x58(r3)
    lfs f23, 0x8(r3)
    lfs f16, lbl_804A0480
    lfs f18, 0x34(r3)
    lfs f17, 0x50(r3)
    lfs f25, 0x3c(r3)
    lfs f26, 0x38(r3)
    lfs f27, 0x74(r3)
    lfs f28, 0x5c(r3)
    lfs f29, 0x80(r3)
    lfs f0, 0x7c(r3)
    stfd f0, 0x120(r1)
    lfs f31, 0x8c(r3)
    lfs f30, 0x78(r3)
    lfs f24, 0x2c(r3)
lbl_800F94FC:
    add r3, r27, r24
    lwz r3, 0xb28(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800F9560
    add r4, r27, r25
    addi r3, r4, 0xbd0
    addi r4, r4, 0xb40
    bl fn_801734E4
    addi r3, r1, 0xc0
    lwz r4, 0xb24(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0xb28(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0xb40
    addi r4, r1, 0xc0
    bl fn_801734E4
    b lbl_800F95FC
lbl_800F9560:
    add r4, r27, r25
    addi r3, r4, 0xbd0
    addi r4, r4, 0xb40
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800F95C4
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r3, 0xb28(r4)
    lwz r4, 0xb34(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r3, 0xb34(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xb34(r4)
    addi r4, r4, 0x224
    lwz r5, 0xb28(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F95C4:
    addi r3, r1, 0xc0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0xb34(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0xb28(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0xb40
    addi r4, r1, 0xc0
    bl fn_801734E4
lbl_800F95FC:
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0xb40
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    add r4, r27, r25
    addi r4, r4, 0xbd0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    addi r5, r1, 0x80
    bl fn_80018AFC
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    fmr f1, f14
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
    lwz r4, 0xc98(r27)
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
    stfs f16, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f16, 0x30(r1)
    stfs f16, 0x38(r1)
    stfs f16, 0x3c(r1)
    cmpwi r31, 0x1
    beq lbl_800F9714
    bge lbl_800F9700
    cmpwi r31, 0x0
    bge lbl_800F970C
    b lbl_800F9720
lbl_800F9700:
    cmpwi r31, 0x3
    bge lbl_800F9720
    b lbl_800F971C
lbl_800F970C:
    stfs f17, 0x34(r1)
    b lbl_800F9720
lbl_800F9714:
    stfs f18, 0x34(r1)
    b lbl_800F9720
lbl_800F971C:
    stfs f21, 0x34(r1)
lbl_800F9720:
    cmpwi r28, 0x84
    bge lbl_800F9770
    cmpwi r28, 0x2e
    beq lbl_800F97A8
    bge lbl_800F975C
    cmpwi r28, 0x2a
    bge lbl_800F9750
    cmpwi r28, 0x12
    bge lbl_800F9830
    cmpwi r28, 0x10
    bge lbl_800F97A8
    b lbl_800F9830
lbl_800F9750:
    cmpwi r28, 0x2c
    bge lbl_800F9830
    b lbl_800F97A8
lbl_800F975C:
    cmpwi r28, 0x6b
    bge lbl_800F9830
    cmpwi r28, 0x66
    bge lbl_800F97A8
    b lbl_800F9830
lbl_800F9770:
    cmpwi r28, 0x8b
    beq lbl_800F97A8
    bge lbl_800F979C
    cmpwi r28, 0x88
    bge lbl_800F9790
    cmpwi r28, 0x86
    bge lbl_800F9830
    b lbl_800F97A8
lbl_800F9790:
    cmpwi r28, 0x8a
    bge lbl_800F9830
    b lbl_800F97A8
lbl_800F979C:
    cmpwi r28, 0x160
    beq lbl_800F97FC
    b lbl_800F9830
lbl_800F97A8:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F97B8
    stfs f19, 0x20(r1)
lbl_800F97B8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f20
    bge lbl_800F97C8
    stfs f20, 0x24(r1)
lbl_800F97C8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f21
    ble lbl_800F97D8
    stfs f21, 0x24(r1)
lbl_800F97D8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    bge lbl_800F97E8
    stfs f22, 0x28(r1)
lbl_800F97E8:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f21
    ble lbl_800F9904
    stfs f21, 0x28(r1)
    b lbl_800F9904
lbl_800F97FC:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f19
    bge lbl_800F980C
    stfs f19, 0x20(r1)
lbl_800F980C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    bge lbl_800F981C
    stfs f23, 0x24(r1)
lbl_800F981C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f24
    ble lbl_800F9904
    stfs f24, 0x24(r1)
    b lbl_800F9904
lbl_800F9830:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800F9844
    stfs f25, 0x20(r1)
lbl_800F9844:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800F9858
    stfs f26, 0x24(r1)
lbl_800F9858:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800F986C
    stfs f27, 0x24(r1)
lbl_800F986C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800F9880
    stfs f28, 0x28(r1)
lbl_800F9880:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800F9894
    stfs f29, 0x28(r1)
lbl_800F9894:
    cmpwi r28, 0x5
    beq lbl_800F98A0
    b lbl_800F98DC
lbl_800F98A0:
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800F9904
    cmpwi r31, 0x0
    bne lbl_800F9904
    add r4, r27, r24
    lwz r3, 0xb28(r4)
    stfs f30, 0x10(r3)
    lwz r3, 0xb28(r4)
    stfs f30, 0x14(r3)
    lwz r3, 0xb28(r4)
    stfs f31, 0x18(r3)
    b lbl_800F9904
lbl_800F98DC:
    cmpwi r31, 0x0
    bne lbl_800F9904
    add r4, r27, r24
    lwz r3, 0xb28(r4)
    stfs f27, 0x10(r3)
    lwz r3, 0xb28(r4)
    lfd f0, 0x120(r1)
    stfs f0, 0x14(r3)
    lwz r3, 0xb28(r4)
    stfs f31, 0x18(r3)
lbl_800F9904:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800F9920
    stfs f0, 0x24(r1)
lbl_800F9920:
    lfs f2, 0x28(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x38(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_800F993C
    stfs f0, 0x28(r1)
lbl_800F993C:
    add r4, r27, r24
    lwz r3, 0xb28(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0xb28(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0xb28(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0xb28(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f15, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0xb28(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0xb28(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x3
    blt lbl_800F94FC
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
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800F9AE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800F9AE0() {
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
    subi r11, r12, 0xf0
    bl _savegpr_24
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    fmr f17, f1
    fmr f18, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r4, lbl_804A0480
    lfs f21, 0x90(r4)
    lfs f22, 0x38(r4)
    lfs f23, 0x1c(r4)
    lfs f24, lbl_804A0480
    lfs f25, 0x24(r4)
    lfs f26, 0x9c(r4)
    lfs f27, 0xc(r4)
    lfs f28, 0x54(r4)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lfs f29, 0x4(r4)
    lfs f20, 0x60(r4)
    lfs f19, 0x68(r4)
    lfs f31, 0x98(r4)
    lfs f30, 0x94(r4)
lbl_800F9C6C:
    cmpwi r30, 0x0
    bne lbl_800F9CB4
    add r4, r26, r25
    addi r3, r4, 0x218
    addi r4, r4, 0x128
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0xfc(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x128
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800F9D50
lbl_800F9CB4:
    add r4, r26, r25
    addi r3, r4, 0x218
    addi r4, r4, 0x128
    bl fn_801734E4
    cmpwi r30, 0x2
    blt lbl_800F9D18
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r3, 0x100(r4)
    lwz r4, 0x114(r4)
    bl fn_80190874
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r3, 0x114(r5)
    addi r3, r3, 0x224
    subi r0, r30, 0x2
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x224
    lwz r5, 0x100(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800F9D18:
    addi r3, r1, 0xd0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x114(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x100(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x128
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800F9D50:
    addi r3, r1, 0x90
    add r4, r26, r25
    addi r4, r4, 0x128
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r26, r25
    addi r4, r4, 0x218
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    fmr f1, f17
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r28
    bl fn_80018B00
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r30, 0x3
    beq lbl_800F9E08
    bge lbl_800F9DE8
    cmpwi r30, 0x0
    bge lbl_800F9DF4
    b lbl_800F9E2C
lbl_800F9DE8:
    cmpwi r30, 0x5
    bge lbl_800F9E2C
    b lbl_800F9E1C
lbl_800F9DF4:
    addi r3, r1, 0xa0
    lwz r4, 0x4d4(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F9E2C
lbl_800F9E08:
    addi r3, r1, 0xa0
    lwz r4, 0x4d8(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800F9E2C
lbl_800F9E1C:
    addi r3, r1, 0xa0
    lwz r4, 0x4dc(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800F9E2C:
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x10(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x14(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x18(r1)
    stfs f24, 0x1c(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    stfs f24, 0x30(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r30, 0x3
    bge lbl_800F9EA0
    cmpwi r30, 0x0
    beq lbl_800F9EAC
    bge lbl_800F9EB4
    b lbl_800F9EC0
lbl_800F9EA0:
    cmpwi r30, 0x5
    bge lbl_800F9EC0
    b lbl_800F9EBC
lbl_800F9EAC:
    stfs f21, 0x34(r1)
    b lbl_800F9EC0
lbl_800F9EB4:
    stfs f19, 0x34(r1)
    b lbl_800F9EC0
lbl_800F9EBC:
    stfs f20, 0x34(r1)
lbl_800F9EC0:
    cmpwi r27, 0x88
    bge lbl_800F9F24
    cmpwi r27, 0x2e
    beq lbl_800F9F74
    bge lbl_800F9EFC
    cmpwi r27, 0x2a
    bge lbl_800F9EF0
    cmpwi r27, 0x12
    bge lbl_800FA0F0
    cmpwi r27, 0x10
    bge lbl_800F9F74
    b lbl_800FA0F0
lbl_800F9EF0:
    cmpwi r27, 0x2c
    bge lbl_800FA0F0
    b lbl_800F9F74
lbl_800F9EFC:
    cmpwi r27, 0x84
    bge lbl_800F9F18
    cmpwi r27, 0x6b
    bge lbl_800FA0F0
    cmpwi r27, 0x66
    bge lbl_800F9F74
    b lbl_800FA0F0
lbl_800F9F18:
    cmpwi r27, 0x86
    bge lbl_800FA0F0
    b lbl_800F9F74
lbl_800F9F24:
    cmpwi r27, 0xf8
    bge lbl_800F9F50
    cmpwi r27, 0x8b
    beq lbl_800F9F74
    bge lbl_800F9F44
    cmpwi r27, 0x8a
    bge lbl_800FA0F0
    b lbl_800F9F74
lbl_800F9F44:
    cmpwi r27, 0xf6
    bge lbl_800F9F74
    b lbl_800FA0F0
lbl_800F9F50:
    cmpwi r27, 0x241
    beq lbl_800FA0F0
    bge lbl_800F9F68
    cmpwi r27, 0x240
    bge lbl_800FA034
    b lbl_800FA0F0
lbl_800F9F68:
    cmpwi r27, 0x243
    bge lbl_800FA0F0
    b lbl_800FA034
lbl_800F9F74:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800F9F88
    stfs f21, 0x20(r1)
lbl_800F9F88:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F9F9C
    stfs f22, 0x24(r1)
lbl_800F9F9C:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800F9FB0
    stfs f23, 0x24(r1)
lbl_800F9FB0:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800F9FC4
    stfs f22, 0x28(r1)
lbl_800F9FC4:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800F9FD8
    stfs f23, 0x28(r1)
lbl_800F9FD8:
    cmpwi r27, 0xf8
    bge lbl_800FA154
    cmpwi r27, 0xf6
    bge lbl_800F9FEC
    b lbl_800FA154
lbl_800F9FEC:
    stfs f24, 0x30(r1)
    stfs f24, 0x38(r1)
    stfs f24, 0x3c(r1)
    cmpwi r30, 0x3
    bge lbl_800FA010
    cmpwi r30, 0x0
    beq lbl_800FA01C
    bge lbl_800FA024
    b lbl_800FA154
lbl_800FA010:
    cmpwi r30, 0x5
    bge lbl_800FA154
    b lbl_800FA02C
lbl_800FA01C:
    stfs f30, 0x34(r1)
    b lbl_800FA154
lbl_800FA024:
    stfs f31, 0x34(r1)
    b lbl_800FA154
lbl_800FA02C:
    stfs f23, 0x34(r1)
    b lbl_800FA154
lbl_800FA034:
    lwz r0, 0x4(r31)
    cmplwi r0, 0xe
    beq lbl_800FA0A8
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FA054
    stfs f25, 0x20(r1)
lbl_800FA054:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800FA068
    stfs f26, 0x24(r1)
lbl_800FA068:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800FA07C
    stfs f27, 0x24(r1)
lbl_800FA07C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FA090
    stfs f28, 0x28(r1)
lbl_800FA090:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800FA154
    stfs f27, 0x28(r1)
    b lbl_800FA154
lbl_800FA0A8:
    stfs f29, 0x20(r1)
    stfs f21, 0x24(r1)
    stfs f24, 0x28(r1)
    cmpwi r30, 0x3
    bge lbl_800FA0CC
    cmpwi r30, 0x0
    beq lbl_800FA0D8
    bge lbl_800FA0E0
    b lbl_800FA154
lbl_800FA0CC:
    cmpwi r30, 0x5
    bge lbl_800FA154
    b lbl_800FA0E8
lbl_800FA0D8:
    stfs f30, 0x34(r1)
    b lbl_800FA154
lbl_800FA0E0:
    stfs f31, 0x34(r1)
    b lbl_800FA154
lbl_800FA0E8:
    stfs f23, 0x34(r1)
    b lbl_800FA154
lbl_800FA0F0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800FA104
    stfs f25, 0x20(r1)
lbl_800FA104:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800FA118
    stfs f26, 0x24(r1)
lbl_800FA118:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800FA12C
    stfs f27, 0x24(r1)
lbl_800FA12C:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FA140
    stfs f28, 0x28(r1)
lbl_800FA140:
    lfs f0, 0x28(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800FA154
    stfs f27, 0x28(r1)
lbl_800FA154:
    lfs f2, 0x24(r1)
    lfs f1, 0x14(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_800FA170
    stfs f0, 0x24(r1)
lbl_800FA170:
    add r4, r26, r24
    lwz r3, 0x100(r4)
    lfs f0, 0x20(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x24(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x28(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x2c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f18, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x100(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r5, r26, r24
    lwz r3, 0x100(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r30, 0x4
    bge lbl_800FA230
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    lwz r5, 0x100(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_800515D8
lbl_800FA230:
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x5
    blt lbl_800F9C6C
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
// fn_800FA318
// ----------------------------------------------------------------------------
extern "C" asm void fn_800FA318() {
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
    stfd f26, -0x60(r12)
    opword 0xF34C0FA8
    subi r11, r12, 0x60
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f26, f1
    fmr f27, f2
    addi r3, r1, 0x70
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0480
    lfs f28, 0x24(r3)
    lfs f29, 0x5c(r3)
    lfs f30, 0x80(r3)
    lfs f31, 0x3c(r3)
lbl_800FA42C:
    cmpwi r31, 0x0
    bne lbl_800FA474
    add r4, r28, r27
    addi r3, r4, 0x458
    addi r4, r4, 0x3f8
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x3e4(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x3f8
    addi r4, r1, 0x80
    bl fn_801734E4
    b lbl_800FA4BC
lbl_800FA474:
    add r4, r28, r27
    addi r3, r4, 0x458
    addi r4, r4, 0x3f8
    bl fn_801734E4
    addi r3, r1, 0x80
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x3f0(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x3f8
    addi r4, r1, 0x80
    bl fn_801734E4
lbl_800FA4BC:
    addi r3, r1, 0x70
    add r4, r28, r27
    addi r4, r4, 0x3f8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0x458
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    addi r5, r1, 0x70
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x50
    fmr f1, f26
    bl fn_80018B08
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xb0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FA550
    stfs f28, 0x10(r1)
lbl_800FA550:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FA564
    stfs f29, 0x14(r1)
lbl_800FA564:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800FA578
    stfs f30, 0x14(r1)
lbl_800FA578:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FA58C
    stfs f29, 0x18(r1)
lbl_800FA58C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800FA5A0
    stfs f31, 0x18(r1)
lbl_800FA5A0:
    add r4, r28, r26
    lwz r3, 0x3e8(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x3e8(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x3e8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r5, r28, r26
    lwz r3, 0x3e8(r5)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    cmpwi r31, 0x1
    bge lbl_800FA660
    addi r3, r1, 0x20
    addi r4, r1, 0x80
    lwz r5, 0x3e8(r5)
    addi r5, r5, 0x30
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
lbl_800FA660:
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x2
    blt lbl_800FA42C
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
    subi r11, r10, 0x60
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_800FA6DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800FA6DC() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x150
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
    subi r11, r12, 0x60
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f26, f1
    fmr f27, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0480
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_804A0480
    lfs f28, 0x24(r3)
    lfs f29, 0x5c(r3)
    lfs f30, 0x80(r3)
    lfs f31, 0x3c(r3)
lbl_800FA7F0:
    cmpwi r31, 0x0
    bne lbl_800FA838
    add r4, r28, r27
    addi r3, r4, 0x380
    addi r4, r4, 0x320
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x30c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x310(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x320
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800FA880
lbl_800FA838:
    add r4, r28, r27
    addi r3, r4, 0x380
    addi r4, r4, 0x320
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x318(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x310(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x320
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800FA880:
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0x320
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r28, r27
    addi r4, r4, 0x380
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    fmr f1, f26
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x20
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800FA914
    stfs f28, 0x10(r1)
lbl_800FA914:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FA928
    stfs f29, 0x14(r1)
lbl_800FA928:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800FA93C
    stfs f30, 0x14(r1)
lbl_800FA93C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800FA950
    stfs f29, 0x18(r1)
lbl_800FA950:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800FA964
    stfs f31, 0x18(r1)
lbl_800FA964:
    add r4, r28, r26
    lwz r3, 0x310(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x310(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f27, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x310(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0x310(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x2
    blt lbl_800FA7F0
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
    subi r11, r10, 0x60
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

