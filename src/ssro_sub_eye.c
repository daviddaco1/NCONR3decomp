#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034D7F0[];
extern float lbl_8049FDA8;

s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
void fn_800D2184(s32 arg0, s32 arg1);
s32 fn_800D218C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_800D2380(s32 arg0, s8 *arg1, s8 *arg2);
void fn_800D2A8C(f32 *arg0, f32 *arg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80173580();
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
f32 fn_801A32A0(f64 farg0, f64 farg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800D2184(s32 arg0, s32 arg1) {
    fn_800D218C((s8 *) (arg0), (s8 *) (arg1), (s8 *) (NULL));
}

// asm_to_cpp: fn_800D218C
asm s32 fn_800D218C(s8 *arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    mr r28, r5
    li r4, 0x2
    li r5, 0x0
    bl fn_800F5B78
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_800D22D4
    cmpwi r28, 0x0
    beq lbl_800D21D0
    b lbl_800D21E4
lbl_800D21D0:
    lwz r3, 0x110(r29)
    li r4, 0x38
    li r5, 0x0
    bl fn_80170E2C
    mr r28, r3
lbl_800D21E4:
    mr r31, r28
    cmpwi r28, 0x0
    bne lbl_800D21F8
    li r3, 0x0
    b lbl_800D2368
lbl_800D21F8:
    mr r3, r28
    li r4, 0x0
    li r5, 0x38
    bl memset
    mr r3, r29
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x14(r28)
    mr r3, r29
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x18(r28)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x1c(r28)
    mr r3, r29
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x20(r28)
    lwz r3, 0x3854(r30)
    cmpwi r3, 0x0
    beq lbl_800D22A8
    lwz r3, 0x377c(r3)
    cmpwi r3, 0x0
    beq lbl_800D22A8
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x24(r28)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x28(r28)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x2c(r28)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x30(r28)
lbl_800D22A8:
    mr r3, r29
    mr r4, r31
    li r5, 0x2
    li r6, 0x0
    bl fn_800F5B14
    lwz r0, 0x18(r30)
    slwi r0, r0, 2
    lis r3, lbl_8034D7F0@ha
    addi r3, r3, lbl_8034D7F0@l
    lfsx f0, r3, r0
    stfs f0, 0x34(r28)
lbl_800D22D4:
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 15, 15
    cmpwi r0, 0x0
    beq lbl_800D2344
    lwz r4, 0x50(r30)
    lis r3, 0xffc0
    subi r0, r3, 0x228
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_800D2320
    lwz r0, 0x58(r30)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_800D2320
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_800D2380
    b lbl_800D2364
lbl_800D2320:
    lwz r3, 0x14(r31)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    lwz r3, 0x18(r31)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    b lbl_800D2364
lbl_800D2344:
    lwz r3, 0x14(r31)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    lwz r3, 0x18(r31)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_800D2364:
    li r3, 0x1
lbl_800D2368:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800D2380
asm s32 fn_800D2380(s32 arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r4
    mr r31, r5
    cmpwi r4, 0x0
    beq lbl_800D23C0
    lwz r3, 0x3854(r4)
    cmpwi r3, 0x0
    bne lbl_800D23C8
lbl_800D23C0:
    li r3, 0x0
    b lbl_800D2A5C
lbl_800D23C8:
    lwz r3, 0x377c(r3)
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x24(r31)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x15
    bl fn_8018149C
    stw r3, 0x28(r31)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x2c(r31)
    lwz r3, 0x3854(r30)
    lwz r3, 0x377c(r3)
    li r4, 0x15
    bl fn_80181504
    stw r3, 0x30(r31)
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_800D2428
    li r3, 0x2
    b lbl_800D2A5C
lbl_800D2428:
    lwz r4, 0x20(r31)
    cmpwi r4, 0x0
    beq lbl_800D243C
    cmpwi r3, 0x0
    bne lbl_800D2444
lbl_800D243C:
    li r3, 0x3
    b lbl_800D2A5C
lbl_800D2444:
    addi r3, r1, 0x38
    addi r4, r4, 0x224
    lwz r5, 0x14(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0x8
    li r4, 0x3
    addi r5, r1, 0x38
    bl fn_80173580
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    bl fn_80173754
    addi r3, r1, 0x38
    lwz r4, 0x30(r31)
    addi r4, r4, 0x224
    lwz r5, 0x24(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r1, 0x2c
    li r4, 0x3
    addi r5, r1, 0x38
    bl fn_80173580
    lfs f1, 0x2c(r1)
    lfs f0, 0x8(r1)
    fcmpu cr0, f1, f0
    bne lbl_800D24D4
    lfs f1, 0x30(r1)
    lfs f0, 0xc(r1)
    fcmpu cr0, f1, f0
    bne lbl_800D24D4
    lfs f1, 0x34(r1)
    lfs f0, 0x10(r1)
    fcmpu cr0, f1, f0
    bne lbl_800D24D4
    li r3, 0x4
    b lbl_800D2A5C
lbl_800D24D4:
    addi r3, r1, 0x2c
    addi r4, r1, 0x68
    mr r5, r3
    bl fn_80018AF8
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8001B8B0
    lfs f0, 0x2c(r1)
    fneg f1, f0
    lfs f2, 0x30(r1)
    bl fn_801A32A0
    lfs f0, lbl_8049FDA8
    fmuls f31, f0, f1
    lfs f1, 0x34(r1)
    lfs f2, 0x30(r1)
    bl fn_801A32A0
    lfs f0, lbl_8049FDA8
    fmuls f30, f0, f1
    lfs f1, 0x2c(r1)
    lfs f2, 0x34(r1)
    bl fn_801A32A0
    lfs f0, lbl_8049FDA8
    fmuls f0, f0, f1
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_800D2580
    lwz r0, 0x18(r30)
    cmplwi r0, 0x1
    bne lbl_800D2570
    lwz r0, 0x164c(r30)
    cmpwi r0, 0x1
    bne lbl_800D2564
    la r3, lbl_8049FDA8
    lfs f31, 0x4(r3)
    b lbl_800D2578
lbl_800D2564:
    la r3, lbl_8049FDA8
    lfs f31, 0x8(r3)
    b lbl_800D2578
lbl_800D2570:
    la r3, lbl_8049FDA8
    lfs f31, 0x8(r3)
lbl_800D2578:
    la r3, lbl_8049FDA8
    lfs f0, 0x8(r3)
lbl_800D2580:
    lwz r0, 0x18(r30)
    cmplwi r0, 0xb
    bne lbl_800D25F8
    lwz r3, 0x3780(r30)
    lwz r3, 0x0(r3)
    rlwinm r3, r3, 0, 29, 29
    cmpwi r3, 0x0
    beq lbl_800D25CC
    la r3, lbl_8049FDA8
    lfs f1, 0xc(r3)
    fcmpo cr0, f0, f1
    bge lbl_800D25B4
    fmr f0, f1
lbl_800D25B4:
    la r3, lbl_8049FDA8
    lfs f1, 0x10(r3)
    fcmpo cr0, f0, f1
    ble lbl_800D2620
    fmr f0, f1
    b lbl_800D2620
lbl_800D25CC:
    la r3, lbl_8049FDA8
    lfs f1, 0x8(r3)
    fcmpo cr0, f0, f1
    bge lbl_800D25E0
    fmr f0, f1
lbl_800D25E0:
    la r3, lbl_8049FDA8
    lfs f1, 0x14(r3)
    fcmpo cr0, f0, f1
    ble lbl_800D2620
    fmr f0, f1
    b lbl_800D2620
lbl_800D25F8:
    la r3, lbl_8049FDA8
    lfs f1, 0x18(r3)
    fcmpo cr0, f0, f1
    bge lbl_800D260C
    fmr f0, f1
lbl_800D260C:
    la r3, lbl_8049FDA8
    lfs f1, 0x1c(r3)
    fcmpo cr0, f0, f1
    ble lbl_800D2620
    fmr f0, f1
lbl_800D2620:
    cmplwi r0, 0x1
    beq lbl_800D2654
    cmplwi r0, 0xb
    beq lbl_800D26E0
    cmplwi r0, 0x8
    beq lbl_800D2774
    cmplwi r0, 0x2
    beq lbl_800D27C8
    cmplwi r0, 0x4
    beq lbl_800D27C8
    cmplwi r0, 0x28
    beq lbl_800D281C
    b lbl_800D292C
lbl_800D2654:
    lwz r3, 0x164c(r30)
    cmpwi r3, 0x1
    bne lbl_800D268C
    la r3, lbl_8049FDA8
    lfs f1, 0x20(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D2674
    fmr f31, f1
lbl_800D2674:
    la r3, lbl_8049FDA8
    lfs f1, 0x4(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D26B4
    fmr f31, f1
    b lbl_800D26B4
lbl_800D268C:
    la r3, lbl_8049FDA8
    lfs f1, 0x24(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D26A0
    fmr f31, f1
lbl_800D26A0:
    la r3, lbl_8049FDA8
    lfs f1, 0x28(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D26B4
    fmr f31, f1
lbl_800D26B4:
    la r3, lbl_8049FDA8
    lfs f1, 0x24(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D26C8
    fmr f30, f1
lbl_800D26C8:
    la r3, lbl_8049FDA8
    lfs f1, 0x2c(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D26E0:
    la r3, lbl_8049FDA8
    lfs f1, 0x10(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D26F4
    fmr f31, f1
lbl_800D26F4:
    la r3, lbl_8049FDA8
    lfs f1, 0x28(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2708
    fmr f31, f1
lbl_800D2708:
    lwz r3, 0x3780(r30)
    lwz r3, 0x0(r3)
    rlwinm r3, r3, 0, 29, 29
    cmpwi r3, 0x0
    beq lbl_800D2748
    la r3, lbl_8049FDA8
    lfs f1, 0xc(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D2730
    fmr f30, f1
lbl_800D2730:
    la r3, lbl_8049FDA8
    lfs f1, 0x30(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D2748:
    la r3, lbl_8049FDA8
    lfs f1, 0x34(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D275C
    fmr f30, f1
lbl_800D275C:
    la r3, lbl_8049FDA8
    lfs f1, 0x38(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D2774:
    la r3, lbl_8049FDA8
    lfs f1, 0x34(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D2788
    fmr f31, f1
lbl_800D2788:
    la r3, lbl_8049FDA8
    lfs f1, 0x30(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D279C
    fmr f31, f1
lbl_800D279C:
    la r3, lbl_8049FDA8
    lfs f1, 0x24(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D27B0
    fmr f30, f1
lbl_800D27B0:
    la r3, lbl_8049FDA8
    lfs f1, 0x2c(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D27C8:
    la r3, lbl_8049FDA8
    lfs f1, 0x10(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D27DC
    fmr f31, f1
lbl_800D27DC:
    la r3, lbl_8049FDA8
    lfs f1, 0x28(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D27F0
    fmr f31, f1
lbl_800D27F0:
    la r3, lbl_8049FDA8
    lfs f1, 0x24(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D2804
    fmr f30, f1
lbl_800D2804:
    la r3, lbl_8049FDA8
    lfs f1, 0x2c(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D281C:
    la r3, lbl_8049FDA8
    lfs f1, 0x3c(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D2830
    fmr f31, f1
lbl_800D2830:
    la r3, lbl_8049FDA8
    lfs f1, 0x1c(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2844
    fmr f31, f1
lbl_800D2844:
    lwz r4, 0x50(r30)
    clrlwi r3, r4, 31
    cmpwi r3, 0x0
    beq lbl_800D28D8
    lwz r3, 0x3854(r30)
    lwz r3, 0x50(r3)
    rlwinm r3, r3, 0, 20, 20
    cmpwi r3, 0x0
    bne lbl_800D28D8
    rlwinm r3, r4, 0, 29, 29
    cmpwi r3, 0x0
    bne lbl_800D2880
    rlwinm r3, r4, 0, 30, 30
    cmpwi r3, 0x0
    beq lbl_800D28AC
lbl_800D2880:
    la r3, lbl_8049FDA8
    lfs f1, 0x40(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D2894
    fmr f31, f1
lbl_800D2894:
    la r3, lbl_8049FDA8
    lfs f1, 0x1c(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2900
    fmr f31, f1
    b lbl_800D2900
lbl_800D28AC:
    la r3, lbl_8049FDA8
    lfs f1, 0x8(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D28C0
    fmr f31, f1
lbl_800D28C0:
    la r3, lbl_8049FDA8
    lfs f1, 0x1c(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2900
    fmr f31, f1
    b lbl_800D2900
lbl_800D28D8:
    la r3, lbl_8049FDA8
    lfs f1, 0x40(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D28EC
    fmr f31, f1
lbl_800D28EC:
    la r3, lbl_8049FDA8
    lfs f1, 0x28(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2900
    fmr f31, f1
lbl_800D2900:
    la r3, lbl_8049FDA8
    lfs f1, 0x20(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D2914
    fmr f30, f1
lbl_800D2914:
    la r3, lbl_8049FDA8
    lfs f1, 0x44(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
    b lbl_800D297C
lbl_800D292C:
    la r3, lbl_8049FDA8
    lfs f1, 0x34(r3)
    fcmpo cr0, f31, f1
    bge lbl_800D2940
    fmr f31, f1
lbl_800D2940:
    la r3, lbl_8049FDA8
    lfs f1, 0x28(r3)
    fcmpo cr0, f31, f1
    ble lbl_800D2954
    fmr f31, f1
lbl_800D2954:
    la r3, lbl_8049FDA8
    lfs f1, 0x24(r3)
    fcmpo cr0, f30, f1
    bge lbl_800D2968
    fmr f30, f1
lbl_800D2968:
    la r3, lbl_8049FDA8
    lfs f1, 0x2c(r3)
    fcmpo cr0, f30, f1
    ble lbl_800D297C
    fmr f30, f1
lbl_800D297C:
    cmplwi r0, 0xb
    bne lbl_800D299C
    stfs f31, 0x20(r1)
    stfs f0, 0x24(r1)
    la r3, lbl_8049FDA8
    lfs f0, 0x8(r3)
    stfs f0, 0x28(r1)
    b lbl_800D29B0
lbl_800D299C:
    stfs f31, 0x20(r1)
    la r3, lbl_8049FDA8
    lfs f0, 0x8(r3)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_800D29B0:
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    bl fn_800D2A8C
    lwz r3, 0x14(r31)
    lfs f0, 0x14(r1)
    lfs f2, 0x30(r3)
    fsubs f1, f0, f2
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x14(r31)
    lfs f0, 0x18(r1)
    lfs f2, 0x34(r3)
    fsubs f1, f0, f2
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x14(r31)
    lfs f0, 0x1c(r1)
    lfs f2, 0x38(r3)
    fsubs f1, f0, f2
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x14(r31)
    lfs f2, 0x3c(r3)
    fsubs f1, f30, f2
    lfs f0, 0x34(r31)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x14(r31)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    lwz r3, 0x14(r31)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    li r3, 0x5
lbl_800D2A5C:
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_800D2A8C
asm void fn_800D2A8C(f32 *arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    la r31, lbl_8049FDA8
    lfs f1, 0x0(r4)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_800412A0
    fmr f28, f1
    lfs f1, 0x0(r30)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_80041290
    fmr f29, f1
    lfs f1, 0x4(r30)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_800412A0
    fmr f30, f1
    lfs f1, 0x4(r30)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_80041290
    fmr f31, f1
    lfs f1, 0x8(r30)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_800412A0
    lfs f1, 0x8(r30)
    lfs f0, 0x4c(r31)
    fmuls f1, f0, f1
    bl fn_80041290
    stfs f28, 0x0(r29)
    fmuls f0, f29, f30
    stfs f0, 0x4(r29)
    fmuls f0, f29, f31
    stfs f0, 0x8(r29)
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    li r0, 0x28
    opword 0x1381000C
    lfd f28, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

} // extern "C"
