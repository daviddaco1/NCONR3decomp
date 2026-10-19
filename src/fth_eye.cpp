#include "types.h"

// Translation unit: src/fth_eye.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern "C" float lbl_8049ECE0;

// Forward declarations
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void fn_80018B0C();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001DA9C();
extern "C" void fn_80020D20();
extern "C" void fn_800543C4();
extern "C" void fn_800543CC();
extern "C" void fn_80054634();
extern "C" void fn_800546D4();
extern "C" void fn_80054AD0();
extern "C" void fn_80054ECC();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_800F5C60();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_800543C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800543C4() {
    nofralloc
    li r5, 0x0
    b fn_800543CC
}

// ----------------------------------------------------------------------------
// fn_800543CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800543CC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x5c
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_80054610
    cmpwi r31, 0x0
    beq lbl_80054410
    b lbl_80054424
lbl_80054410:
    lwz r3, 0x110(r29)
    li r4, 0x200
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_80054424:
    mr r3, r31
    li r4, 0x0
    li r5, 0x200
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
    li r4, 0xa0
    bl fn_80181504
    stw r3, 0x24(r31)
    lwz r0, 0x20(r31)
    stw r0, 0x88(r31)
    stw r3, 0x8c(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_8018149C
    stw r3, 0x90(r31)
    mr r3, r29
    li r4, 0xa1
    bl fn_80181504
    stw r3, 0x94(r31)
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
    stw r3, 0xf8(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0xfc(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_8018149C
    stw r3, 0x100(r31)
    mr r3, r29
    li r4, 0xa2
    bl fn_80181504
    stw r3, 0x104(r31)
    lwz r0, 0x100(r31)
    stw r0, 0x168(r31)
    stw r3, 0x16c(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x170(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
    stw r3, 0x174(r31)
    addi r3, r31, 0x108
    lwz r4, 0xfc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x100(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x138
    addi r4, r31, 0x108
    bl fn_801734E4
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x1d8(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1dc(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x1e0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x1e4(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x1e8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x1ec(r31)
    mr r3, r29
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x1f0(r31)
    mr r3, r29
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x1f4(r31)
    mr r3, r29
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x1f8(r31)
    mr r3, r29
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x1fc(r31)
    mr r3, r29
    mr r4, r31
    li r5, 0x5c
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_8005461C
lbl_80054610:
    mr r3, r29
    mr r4, r30
    bl fn_80054634
lbl_8005461C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80054634
// ----------------------------------------------------------------------------
extern "C" asm void fn_80054634() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x40
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lfs f2, lbl_8049ECE0
    lwz r6, 0x3780(r4)
    lwz r31, 0x20(r6)
    la r6, lbl_8049ECE0
    lfs f1, 0x8(r6)
    stfs f1, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f2, 0x20(r1)
    lfs f0, 0x14(r6)
    stfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f1, 0x2c(r1)
    mr r6, r31
    bl fn_800546D4
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80054AD0
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
// fn_800546D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800546D4() {
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
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_8049ECE0
    lfs f23, 0x18(r31)
    addi r29, r1, 0x10
    lfs f24, 0x28(r31)
    lfs f25, 0x2c(r31)
    lfs f27, 0x34(r31)
    lfs f28, 0xc(r31)
    lfs f26, 0x30(r31)
    lfs f31, 0x4(r31)
    lfs f29, 0x8(r31)
    lfs f30, lbl_8049ECE0
lbl_80054784:
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
    lfs f1, lbl_8049ECE0
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
    addi r4, r4, 0x18
    mr r5, r29
    lfs f1, 0x1c(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_8049ECE0
    lfs f2, 0x34(r30)
    lfs f3, 0x20(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x24(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x86
    bge lbl_8005486C
    cmpwi r27, 0x2e
    beq lbl_800548A0
    bge lbl_8005485C
    cmpwi r27, 0x2a
    bge lbl_800548A0
    cmpwi r27, 0x12
    bge lbl_800548A0
    b lbl_800548A0
    b lbl_800548A0
lbl_8005485C:
    cmpwi r27, 0x6b
    bge lbl_800548A0
    b lbl_800548A0
    b lbl_800548A0
lbl_8005486C:
    cmpwi r27, 0xf6
    bge lbl_80054888
    cmpwi r27, 0x8a
    beq lbl_800548A0
    bge lbl_800548A0
    b lbl_800548A0
    b lbl_800548A0
lbl_80054888:
    cmpwi r27, 0x100
    beq lbl_80054898
    bge lbl_800548A0
    b lbl_800548A0
lbl_80054898:
    stfs f24, 0x44(r1)
    stfs f25, 0x38(r1)
lbl_800548A0:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_800548B4
    b lbl_800548C8
lbl_800548B4:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_800548C4
    b lbl_800548C8
lbl_800548C4:
    fmr f1, f0
lbl_800548C8:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_800548E0
    b lbl_800548F4
lbl_800548E0:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_800548F0
    b lbl_800548F4
lbl_800548F0:
    fmr f1, f0
lbl_800548F4:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_8005490C
    b lbl_80054920
lbl_8005490C:
    lfs f1, 0x38(r1)
    fcmpo cr0, f0, f1
    ble lbl_8005491C
    b lbl_80054920
lbl_8005491C:
    fmr f1, f0
lbl_80054920:
    stfs f1, 0x68(r1)
    cmpwi r27, 0x1b1
    bne lbl_80054970
    cmpwi r28, 0x0
    bne lbl_80054950
    lfs f0, 0x64(r1)
    fadds f0, f0, f28
    stfs f0, 0x64(r1)
    frsp f0, f1
    fsubs f0, f0, f26
    stfs f0, 0x68(r1)
    b lbl_80054970
lbl_80054950:
    cmpwi r28, 0x1
    bne lbl_80054970
    lfs f0, 0x64(r1)
    fadds f0, f0, f27
    stfs f0, 0x64(r1)
    frsp f0, f1
    fsubs f0, f0, f28
    stfs f0, 0x68(r1)
lbl_80054970:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    lfs f0, 0x68(r1)
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f30
    bge lbl_80054994
    fmuls f1, f1, f31
lbl_80054994:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x20(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x2
    blt lbl_80054784
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80054AD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80054AD0() {
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
    stfd f23, -0x90(r12)
    opword 0xF2EC0F78
    subi r11, r12, 0x90
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_8049ECE0
    lfs f23, 0x18(r31)
    addi r29, r1, 0x10
    lfs f24, 0x28(r31)
    lfs f25, 0x2c(r31)
    lfs f27, 0x34(r31)
    lfs f28, 0xc(r31)
    lfs f26, 0x30(r31)
    lfs f31, 0x4(r31)
    lfs f29, 0x8(r31)
    lfs f30, lbl_8049ECE0
lbl_80054B80:
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
    lfs f1, lbl_8049ECE0
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
    addi r4, r4, 0xf8
    mr r5, r29
    lfs f1, 0x1c(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_8049ECE0
    lfs f2, 0x34(r30)
    lfs f3, 0x20(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x24(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x86
    bge lbl_80054C68
    cmpwi r27, 0x2e
    beq lbl_80054C9C
    bge lbl_80054C58
    cmpwi r27, 0x2a
    bge lbl_80054C9C
    cmpwi r27, 0x12
    bge lbl_80054C9C
    b lbl_80054C9C
    b lbl_80054C9C
lbl_80054C58:
    cmpwi r27, 0x6b
    bge lbl_80054C9C
    b lbl_80054C9C
    b lbl_80054C9C
lbl_80054C68:
    cmpwi r27, 0xf6
    bge lbl_80054C84
    cmpwi r27, 0x8a
    beq lbl_80054C9C
    bge lbl_80054C9C
    b lbl_80054C9C
    b lbl_80054C9C
lbl_80054C84:
    cmpwi r27, 0x100
    beq lbl_80054C94
    bge lbl_80054C9C
    b lbl_80054C9C
lbl_80054C94:
    stfs f24, 0x44(r1)
    stfs f25, 0x38(r1)
lbl_80054C9C:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_80054CB0
    b lbl_80054CC4
lbl_80054CB0:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_80054CC0
    b lbl_80054CC4
lbl_80054CC0:
    fmr f1, f0
lbl_80054CC4:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_80054CDC
    b lbl_80054CF0
lbl_80054CDC:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_80054CEC
    b lbl_80054CF0
lbl_80054CEC:
    fmr f1, f0
lbl_80054CF0:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    bge lbl_80054D08
    b lbl_80054D1C
lbl_80054D08:
    lfs f1, 0x38(r1)
    fcmpo cr0, f0, f1
    ble lbl_80054D18
    b lbl_80054D1C
lbl_80054D18:
    fmr f1, f0
lbl_80054D1C:
    stfs f1, 0x68(r1)
    cmpwi r27, 0x1b1
    bne lbl_80054D6C
    cmpwi r28, 0x0
    bne lbl_80054D4C
    lfs f0, 0x64(r1)
    fadds f0, f0, f28
    stfs f0, 0x64(r1)
    frsp f0, f1
    fadds f0, f0, f26
    stfs f0, 0x68(r1)
    b lbl_80054D6C
lbl_80054D4C:
    cmpwi r28, 0x1
    bne lbl_80054D6C
    lfs f0, 0x64(r1)
    fadds f0, f0, f27
    stfs f0, 0x64(r1)
    frsp f0, f1
    fadds f0, f0, f28
    stfs f0, 0x68(r1)
lbl_80054D6C:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    lfs f0, 0x68(r1)
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f30
    bge lbl_80054D90
    fmuls f1, f1, f31
lbl_80054D90:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x100(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x100(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f23, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x100(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x100(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x2
    blt lbl_80054B80
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
    subi r11, r10, 0x90
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_80054ECC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80054ECC() {
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    blr
}

