#include "types.h"

// Translation unit: src/band_eye.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern "C" float lbl_804A07E0;
extern "C" float lbl_804A07E8;

// Forward declarations
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_80018B04();
extern "C" void fn_80018B0C();
extern "C" void fn_8001B8B0();
extern "C" void fn_8001DA9C();
extern "C" void fn_80020D20();
extern "C" void fn_80054ECC();
extern "C" void fn_800F5B14();
extern "C" void fn_800F5B78();
extern "C" void fn_800F5C60();
extern "C" void fn_8010C34C();
extern "C" void fn_8010C354();
extern "C" void fn_8010C6E0();
extern "C" void fn_8010C7C0();
extern "C" void fn_8010CD30();
extern "C" void fn_8010D054();
extern "C" void fn_80170E2C();
extern "C" void fn_801734E4();
extern "C" void fn_80173754();
extern "C" void fn_8017375C();
extern "C" void fn_8018149C();
extern "C" void fn_80181504();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_8010C34C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010C34C() {
    nofralloc
    li r5, 0x0
    b fn_8010C354
}

// ----------------------------------------------------------------------------
// fn_8010C354
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010C354() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r27, r4
    mr r31, r5
    li r4, 0x34
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_8010C6BC
    cmpwi r31, 0x0
    beq lbl_8010C398
    b lbl_8010C3AC
lbl_8010C398:
    lwz r3, 0x110(r30)
    li r4, 0x510
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_8010C3AC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x510
    bl memset
    li r27, 0x0
    li r29, 0x0
lbl_8010C3C4:
    add r28, r31, r29
    mr r3, r30
    addi r4, r27, 0xa1
    bl fn_8018149C
    stw r3, 0x20(r28)
    mr r3, r30
    addi r4, r27, 0xa1
    bl fn_80181504
    stw r3, 0x24(r28)
    cmpwi r27, 0x0
    beq lbl_8010C3F8
    lwz r3, -0x50(r28)
    b lbl_8010C404
lbl_8010C3F8:
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
lbl_8010C404:
    stw r3, 0x18(r28)
    cmpwi r27, 0x0
    beq lbl_8010C418
    lwz r3, -0x4c(r28)
    b lbl_8010C424
lbl_8010C418:
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
lbl_8010C424:
    stw r3, 0x1c(r28)
    addi r27, r27, 0x1
    addi r29, r29, 0x70
    cmpwi r27, 0x4
    blt lbl_8010C3C4
    addi r3, r31, 0x28
    lwz r4, 0x1c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x20(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x58
    addi r4, r31, 0x28
    bl fn_801734E4
    li r27, 0x0
    li r29, 0x0
lbl_8010C464:
    add r28, r31, r29
    mr r3, r30
    addi r4, r27, 0xa5
    bl fn_8018149C
    stw r3, 0x1e0(r28)
    mr r3, r30
    addi r4, r27, 0xa5
    bl fn_80181504
    stw r3, 0x1e4(r28)
    cmpwi r27, 0x0
    beq lbl_8010C498
    lwz r3, 0x170(r28)
    b lbl_8010C4A4
lbl_8010C498:
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
lbl_8010C4A4:
    stw r3, 0x1d8(r28)
    cmpwi r27, 0x0
    beq lbl_8010C4B8
    lwz r3, 0x174(r28)
    b lbl_8010C4C4
lbl_8010C4B8:
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
lbl_8010C4C4:
    stw r3, 0x1dc(r28)
    addi r27, r27, 0x1
    addi r29, r29, 0x70
    cmpwi r27, 0x4
    blt lbl_8010C464
    addi r3, r31, 0x1e8
    lwz r4, 0x1dc(r31)
    addi r4, r4, 0x224
    lwz r5, 0x1e0(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x218
    addi r4, r31, 0x1e8
    bl fn_801734E4
    li r27, 0x0
    li r29, 0x0
lbl_8010C504:
    add r28, r31, r29
    mr r3, r30
    addi r4, r27, 0xa8
    bl fn_8018149C
    stw r3, 0x330(r28)
    mr r3, r30
    addi r4, r27, 0xa8
    bl fn_80181504
    stw r3, 0x334(r28)
    cmpwi r27, 0x0
    beq lbl_8010C538
    lwz r3, 0x2c0(r28)
    b lbl_8010C544
lbl_8010C538:
    mr r3, r30
    li r4, 0xac
    bl fn_8018149C
lbl_8010C544:
    stw r3, 0x328(r28)
    cmpwi r27, 0x0
    beq lbl_8010C558
    lwz r3, 0x2c4(r28)
    b lbl_8010C564
lbl_8010C558:
    mr r3, r30
    li r4, 0xac
    bl fn_80181504
lbl_8010C564:
    stw r3, 0x32c(r28)
    addi r27, r27, 0x1
    addi r29, r29, 0x70
    cmpwi r27, 0x4
    blt lbl_8010C504
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
    li r4, 0xab
    bl fn_8018149C
    stw r3, 0x480(r31)
    mr r3, r30
    li r4, 0xab
    bl fn_80181504
    stw r3, 0x484(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x478(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    mr r4, r3
    stw r3, 0x47c(r31)
    addi r3, r31, 0x488
    addi r4, r4, 0x224
    lwz r5, 0x480(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x4b8
    addi r4, r31, 0x488
    bl fn_801734E4
    mr r3, r30
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x4e8(r31)
    mr r3, r30
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x4ec(r31)
    mr r3, r30
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x4f0(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_8018149C
    stw r3, 0x4f4(r31)
    mr r3, r30
    li r4, 0x4
    bl fn_8018149C
    stw r3, 0x4f8(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_8018149C
    stw r3, 0x4fc(r31)
    mr r3, r30
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x500(r31)
    mr r3, r30
    li r4, 0x5
    bl fn_80181504
    stw r3, 0x504(r31)
    mr r3, r30
    li r4, 0x4
    bl fn_80181504
    stw r3, 0x508(r31)
    mr r3, r30
    li r4, 0x3
    bl fn_80181504
    stw r3, 0x50c(r31)
    mr r3, r30
    mr r4, r31
    li r5, 0x34
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_8010C6C8
lbl_8010C6BC:
    mr r3, r30
    mr r4, r27
    bl fn_8010C6E0
lbl_8010C6C8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8010C6E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010C6E0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x50
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lfs f1, lbl_804A07E8
    lwz r6, 0x3780(r4)
    lwz r30, 0x20(r6)
    stfs f1, 0x20(r1)
    la r31, lbl_804A07E8
    lfs f0, 0x4(r31)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x2c(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    mr r6, r30
    bl fn_8010C7C0
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8010CD30
    mr r3, r27
    mr r4, r28
    mr r5, r29
    mr r6, r30
    bl fn_8010D054
    lfs f1, lbl_804A07E8
    stfs f1, 0x20(r1)
    lfs f0, 0x4(r31)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x2c(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
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
// fn_8010C7C0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010C7C0() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x200
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
    subi r11, r12, 0xb0
    bl _savegpr_24
    mr r25, r5
    mr r26, r6
    li r4, 0x6
    bl fn_8018149C
    mr r29, r3
    li r27, 0x0
    li r24, 0x0
    la r31, lbl_804A07E8
    lfd f22, lbl_804A07E0
    lis r30, 0x4330
    lfs f23, 0x14(r31)
    lfs f24, 0xc(r31)
    addi r28, r1, 0x10
    lfs f25, lbl_804A07E8
    lfs f27, 0x2c(r31)
    lfs f26, 0x30(r31)
    lfs f30, 0x38(r31)
    lfs f28, 0x34(r31)
    lfs f29, 0x8(r31)
    lfs f31, 0x4(r31)
lbl_8010C888:
    addi r3, r1, 0x50
    lfs f1, 0x4(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x40
    lfs f1, 0x8(r31)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x60
    lfs f1, lbl_804A07E8
    lfs f2, 0x4(r31)
    fmr f3, f1
    lfs f4, 0x8(r31)
    bl fn_80020D20
    xoris r0, r27, 0x8000
    stw r0, 0x124(r1)
    stw r30, 0x120(r1)
    lfd f0, 0x120(r1)
    fsubs f0, f0, f22
    fmuls f0, f23, f0
    fsubs f21, f24, f0
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r3, r1, 0x20
    add r4, r25, r24
    addi r4, r4, 0x18
    mr r5, r28
    lfs f1, 0x18(r31)
    bl fn_800F5C60
    addi r3, r1, 0x70
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x50
    lfs f1, lbl_804A07E8
    lfs f2, 0x1c(r31)
    lfs f3, 0x20(r31)
    bl fn_80018B0C
    cmpwi r27, 0x0
    bne lbl_8010C95C
    addi r3, r1, 0x40
    lfs f1, 0x8(r31)
    lfs f2, 0x34(r29)
    lfs f3, 0x24(r31)
    bl fn_80018B0C
    b lbl_8010C970
lbl_8010C95C:
    addi r3, r1, 0x40
    lfs f1, 0x8(r31)
    lfs f2, 0x28(r31)
    lfs f3, 0x24(r31)
    bl fn_80018B0C
lbl_8010C970:
    cmpwi r27, 0x2
    beq lbl_8010C9B8
    bge lbl_8010C98C
    cmpwi r27, 0x0
    beq lbl_8010C998
    bge lbl_8010C9A8
    b lbl_8010C9D8
lbl_8010C98C:
    cmpwi r27, 0x4
    bge lbl_8010C9D8
    b lbl_8010C9C8
lbl_8010C998:
    addi r3, r1, 0x90
    lwz r4, 0x500(r25)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010C9A8:
    addi r3, r1, 0x90
    lwz r4, 0x508(r25)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010C9B8:
    addi r3, r1, 0x90
    lwz r4, 0x508(r25)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010C9C8:
    addi r3, r1, 0x90
    lwz r4, 0x508(r25)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010C9D8:
    addi r3, r1, 0x90
    lwz r4, 0x504(r25)
    addi r4, r4, 0x224
    bl fn_801734E4
    addi r3, r1, 0xc0
    add r4, r25, r24
    addi r4, r4, 0x28
    bl fn_801734E4
    lfs f1, 0x9c(r1)
    lfs f0, 0xcc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x30(r1)
    lfs f1, 0xac(r1)
    lfs f0, 0xdc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x34(r1)
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x38(r1)
    stfs f25, 0x3c(r1)
    addi r3, r1, 0xf0
    addi r4, r1, 0xc0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0xf0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x80
    lfs f1, lbl_804A07E8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r27, 0x1
    beq lbl_8010CA94
    bge lbl_8010CA80
    cmpwi r27, 0x0
    bge lbl_8010CA8C
    b lbl_8010CAA4
lbl_8010CA80:
    cmpwi r27, 0x3
    bge lbl_8010CAA4
    b lbl_8010CA9C
lbl_8010CA8C:
    stfs f27, 0x84(r1)
    b lbl_8010CAA8
lbl_8010CA94:
    stfs f26, 0x84(r1)
    b lbl_8010CAA8
lbl_8010CA9C:
    stfs f27, 0x84(r1)
    b lbl_8010CAA8
lbl_8010CAA4:
    stfs f27, 0x84(r1)
lbl_8010CAA8:
    cmpwi r26, 0x5
    beq lbl_8010CAE8
    bge lbl_8010CAC0
    cmpwi r26, 0x0
    beq lbl_8010CAD4
    b lbl_8010CB14
lbl_8010CAC0:
    cmpwi r26, 0x1b4
    bge lbl_8010CB14
    cmpwi r26, 0x1b1
    bge lbl_8010CB00
    b lbl_8010CB14
lbl_8010CAD4:
    cmpwi r27, 0x0
    bne lbl_8010CB14
    stfs f28, 0x58(r1)
    stfs f29, 0x48(r1)
    b lbl_8010CB14
lbl_8010CAE8:
    cmpwi r27, 0x0
    bne lbl_8010CB14
    lfs f0, 0x74(r1)
    fsubs f0, f0, f26
    stfs f0, 0x74(r1)
    b lbl_8010CB14
lbl_8010CB00:
    cmpwi r27, 0x0
    bne lbl_8010CB14
    lfs f0, 0x74(r1)
    fsubs f0, f0, f30
    stfs f0, 0x74(r1)
lbl_8010CB14:
    lfs f0, 0x70(r1)
    lfs f1, 0x50(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010CB28
    b lbl_8010CB3C
lbl_8010CB28:
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010CB38
    b lbl_8010CB3C
lbl_8010CB38:
    fmr f1, f0
lbl_8010CB3C:
    stfs f1, 0x70(r1)
    lfs f0, 0x74(r1)
    lfs f1, 0x54(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010CB54
    b lbl_8010CB68
lbl_8010CB54:
    lfs f1, 0x44(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010CB64
    b lbl_8010CB68
lbl_8010CB64:
    fmr f1, f0
lbl_8010CB68:
    stfs f1, 0x74(r1)
    lfs f0, 0x78(r1)
    lfs f1, 0x58(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010CB80
    b lbl_8010CB94
lbl_8010CB80:
    lfs f1, 0x48(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010CB90
    b lbl_8010CB94
lbl_8010CB90:
    fmr f1, f0
lbl_8010CB94:
    stfs f1, 0x78(r1)
    lfs f2, 0x74(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x84(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_8010CBB4
    stfs f0, 0x74(r1)
lbl_8010CBB4:
    stfs f25, 0x7c(r1)
    lfs f0, 0x74(r1)
    fmuls f0, f0, f0
    fsubs f1, f29, f0
    lfs f0, 0x78(r1)
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f25
    bge lbl_8010CBDC
    fmuls f1, f1, f31
lbl_8010CBDC:
    bl fn_8001DA9C
    stfs f1, 0x70(r1)
    add r4, r25, r24
    lwz r3, 0x20(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x74(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x78(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x7c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r25, r24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r27, r27, 0x1
    addi r24, r24, 0x70
    cmpwi r27, 0x4
    blt lbl_8010C888
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
    subi r11, r10, 0xb0
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8010CD30
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010CD30() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xd0
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
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_804A07E8
    lfs f28, 0x24(r31)
    addi r29, r1, 0x10
    lfs f31, 0x4(r31)
    lfs f29, lbl_804A07E8
    lfs f30, 0x8(r31)
lbl_8010CDA4:
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
    lfs f1, lbl_804A07E8
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
    addi r4, r4, 0x328
    mr r5, r29
    lfs f1, 0x18(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A07E8
    lfs f2, 0x34(r30)
    lfs f3, 0x3c(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x34(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x84
    bge lbl_8010CE88
    cmpwi r27, 0x2e
    beq lbl_8010CEA8
    bge lbl_8010CE7C
    cmpwi r27, 0x2a
    bge lbl_8010CEA8
    cmpwi r27, 0x12
    bge lbl_8010CEA8
    b lbl_8010CEA8
    b lbl_8010CEA8
lbl_8010CE7C:
    cmpwi r27, 0x6b
    bge lbl_8010CEA8
    b lbl_8010CEA8
lbl_8010CE88:
    cmpwi r27, 0x8b
    beq lbl_8010CEA8
    bge lbl_8010CEA4
    cmpwi r27, 0x88
    bge lbl_8010CEA8
    b lbl_8010CEA8
    b lbl_8010CEA8
lbl_8010CEA4:
    cmpwi r27, 0xf8
lbl_8010CEA8:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010CEBC
    b lbl_8010CED0
lbl_8010CEBC:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010CECC
    b lbl_8010CED0
lbl_8010CECC:
    fmr f1, f0
lbl_8010CED0:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010CEE8
    b lbl_8010CEFC
lbl_8010CEE8:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010CEF8
    b lbl_8010CEFC
lbl_8010CEF8:
    fmr f1, f0
lbl_8010CEFC:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_8010CF14
    b lbl_8010CF28
lbl_8010CF14:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_8010CF24
    b lbl_8010CF28
lbl_8010CF24:
    fmr f2, f0
lbl_8010CF28:
    stfs f2, 0x68(r1)
    stfs f29, 0x6c(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f30, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f29
    bge lbl_8010CF54
    fmuls f1, f1, f31
lbl_8010CF54:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x330(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x330(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x330(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x330(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x330(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x330(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x3
    blt lbl_8010CDA4
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
    subi r11, r10, 0x40
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// ----------------------------------------------------------------------------
// fn_8010D054
// ----------------------------------------------------------------------------
extern "C" asm void fn_8010D054() {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xd0
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
    bl _savegpr_25
    mr r26, r5
    mr r27, r6
    li r4, 0x6
    bl fn_8018149C
    mr r30, r3
    li r28, 0x0
    li r25, 0x0
    la r31, lbl_804A07E8
    lfs f28, 0x24(r31)
    addi r29, r1, 0x10
    lfs f31, 0x4(r31)
    lfs f29, lbl_804A07E8
    lfs f30, 0x8(r31)
lbl_8010D0C8:
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
    lfs f1, lbl_804A07E8
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
    addi r4, r4, 0x1d8
    mr r5, r29
    lfs f1, 0x18(r31)
    bl fn_800F5C60
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_80054ECC
    addi r3, r1, 0x3c
    lfs f1, lbl_804A07E8
    lfs f2, 0x34(r30)
    lfs f3, 0x3c(r31)
    bl fn_80018B0C
    addi r3, r1, 0x30
    lfs f1, 0x8(r31)
    lfs f2, 0x34(r31)
    fmr f3, f2
    bl fn_80018B0C
    cmpwi r27, 0x84
    bge lbl_8010D1AC
    cmpwi r27, 0x2e
    beq lbl_8010D1CC
    bge lbl_8010D1A0
    cmpwi r27, 0x2a
    bge lbl_8010D1CC
    cmpwi r27, 0x12
    bge lbl_8010D1CC
    b lbl_8010D1CC
    b lbl_8010D1CC
lbl_8010D1A0:
    cmpwi r27, 0x6b
    bge lbl_8010D1CC
    b lbl_8010D1CC
lbl_8010D1AC:
    cmpwi r27, 0x8b
    beq lbl_8010D1CC
    bge lbl_8010D1C8
    cmpwi r27, 0x88
    bge lbl_8010D1CC
    b lbl_8010D1CC
    b lbl_8010D1CC
lbl_8010D1C8:
    cmpwi r27, 0xf8
lbl_8010D1CC:
    lfs f0, 0x60(r1)
    lfs f1, 0x3c(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010D1E0
    b lbl_8010D1F4
lbl_8010D1E0:
    lfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010D1F0
    b lbl_8010D1F4
lbl_8010D1F0:
    fmr f1, f0
lbl_8010D1F4:
    stfs f1, 0x60(r1)
    lfs f0, 0x64(r1)
    lfs f1, 0x40(r1)
    fcmpo cr0, f0, f1
    bge lbl_8010D20C
    b lbl_8010D220
lbl_8010D20C:
    lfs f1, 0x34(r1)
    fcmpo cr0, f0, f1
    ble lbl_8010D21C
    b lbl_8010D220
lbl_8010D21C:
    fmr f1, f0
lbl_8010D220:
    stfs f1, 0x64(r1)
    lfs f0, 0x68(r1)
    lfs f2, 0x44(r1)
    fcmpo cr0, f0, f2
    bge lbl_8010D238
    b lbl_8010D24C
lbl_8010D238:
    lfs f2, 0x38(r1)
    fcmpo cr0, f0, f2
    ble lbl_8010D248
    b lbl_8010D24C
lbl_8010D248:
    fmr f2, f0
lbl_8010D24C:
    stfs f2, 0x68(r1)
    stfs f29, 0x6c(r1)
    lfs f0, 0x64(r1)
    fmuls f0, f0, f0
    fsubs f1, f30, f0
    frsp f0, f2
    fmuls f0, f0, f0
    fsubs f1, f1, f0
    fcmpo cr0, f1, f29
    bge lbl_8010D278
    fmuls f1, f1, f31
lbl_8010D278:
    bl fn_8001DA9C
    stfs f1, 0x60(r1)
    add r4, r26, r25
    lwz r3, 0x1e0(r4)
    frsp f0, f1
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x1e0(r4)
    lfs f0, 0x64(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x1e0(r4)
    lfs f0, 0x68(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x1e0(r4)
    lfs f0, 0x6c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x1e0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r26, r25
    lwz r3, 0x1e0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r25, r25, 0x70
    cmpwi r28, 0x3
    blt lbl_8010D0C8
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
    subi r11, r10, 0x40
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

