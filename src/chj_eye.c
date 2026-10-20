#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034D638[];
extern float lbl_8049F658;

void _restgpr_26();
void _restgpr_29();
void _savegpr_26();
void _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800AE5B0(void);
s32 fn_800AE5B8(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800AE7A8(s32 arg0, s32 arg1, s32 arg2);
void fn_800AE91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800AEE30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_80165C74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800AE5B0
asm void fn_800AE5B0(void) {
    nofralloc
    li r5, 0x0
    b fn_800AE5B8
}

// asm_to_cpp: fn_800AE5B8
asm s32 fn_800AE5B8(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x44
    li r5, 0x0
    bl fn_800F5B78
    mr r5, r3
    cmpwi r3, 0x0
    bne lbl_800AE784
    cmpwi r31, 0x0
    beq lbl_800AE5FC
    b lbl_800AE610
lbl_800AE5FC:
    lwz r3, 0x110(r29)
    li r4, 0x298
    li r5, 0x0
    bl fn_80170E2C
    mr r31, r3
lbl_800AE610:
    mr r3, r31
    li r4, 0x0
    li r5, 0x298
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
    li r4, 0x6
    bl fn_8018149C
    stw r3, 0x158(r31)
    mr r3, r29
    li r4, 0x6
    bl fn_80181504
    stw r3, 0x15c(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_8018149C
    stw r3, 0x160(r31)
    mr r3, r29
    li r4, 0xa4
    bl fn_8018149C
    stw r3, 0x164(r31)
    mr r3, r29
    li r4, 0xa5
    bl fn_8018149C
    stw r3, 0x168(r31)
    mr r3, r29
    li r4, 0xa3
    bl fn_80181504
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
    lwz r4, 0x15c(r31)
    addi r4, r4, 0x224
    lwz r5, 0x160(r31)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r31, 0x208
    addi r4, r31, 0x178
    bl fn_801734E4
    mr r3, r29
    mr r4, r31
    li r5, 0x44
    li r6, 0x0
    bl fn_800F5B14
    li r3, 0x0
    b lbl_800AE790
lbl_800AE784:
    mr r3, r29
    mr r4, r30
    bl fn_800AE7A8
lbl_800AE790:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AE7A8
asm M2C_UNK fn_800AE7A8(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0xa0
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    stfd f30, -0x20(r12)
    opword 0xF3CC0FE8
    subi r11, r12, 0x20
    bl _savegpr_29
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_8049F658
    la r5, lbl_8049F658
    lfs f1, 0x4(r5)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0x60(r1)
    lfs f0, 0x8(r5)
    stfs f0, 0x64(r1)
    stfs f31, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f1, 0x5c(r1)
    lfs f0, 0xc(r5)
    fmuls f31, f0, f1
    lfs f30, 0x10(r5)
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
    fmr f1, f30
    fmr f2, f31
    bl fn_800AE91C
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
    fmr f1, f30
    fmr f2, f31
    bl fn_800AEE30
    li r3, 0x1
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    li r0, -0x18
    opword 0x13CA000C
    lfd f30, -0x20(r10)
    subi r11, r10, 0x20
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800AE91C
asm void fn_800AE91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1b0
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
    subi r11, r12, 0xc0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lis r3, lbl_8034D638@ha
    addi r3, r3, lbl_8034D638@l
    opword 0x4CC63182
    bl fn_80165C74
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_8049F658
    lfs f22, 0x14(r3)
    lfs f23, 0x18(r3)
    lfs f24, 0x1c(r3)
    lfs f25, 0x20(r3)
    lfs f26, 0x24(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x30(r3)
    lfs f30, 0x34(r3)
    lfs f31, 0x38(r3)
    lfs f27, 0x28(r3)
lbl_800AEA88:
    cmpwi r31, 0x0
    bne lbl_800AEAD0
    add r4, r28, r27
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800AEB6C
lbl_800AEAD0:
    add r4, r28, r27
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800AEB34
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r3, 0x20(r4)
    lwz r4, 0x2c(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r28, r0
    lwz r3, 0x2c(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x224
    lwz r5, 0x20(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800AEB34:
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800AEB6C:
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0x38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r28, r27
    addi r4, r4, 0xc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f20
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
    cmpwi r31, 0x0
    bne lbl_800AEC70
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800AEC08
    stfs f22, 0x10(r1)
lbl_800AEC08:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800AEC1C
    stfs f23, 0x10(r1)
lbl_800AEC1C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800AEC30
    stfs f24, 0x14(r1)
lbl_800AEC30:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800AEC44
    stfs f25, 0x14(r1)
lbl_800AEC44:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800AEC58
    stfs f26, 0x18(r1)
lbl_800AEC58:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800AECD4
    stfs f27, 0x18(r1)
    b lbl_800AECD4
lbl_800AEC70:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800AEC84
    stfs f22, 0x10(r1)
lbl_800AEC84:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800AEC98
    stfs f28, 0x14(r1)
lbl_800AEC98:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800AECAC
    stfs f29, 0x14(r1)
lbl_800AECAC:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800AECC0
    stfs f30, 0x18(r1)
lbl_800AECC0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800AECD4
    stfs f31, 0x18(r1)
lbl_800AECD4:
    add r4, r28, r26
    lwz r3, 0x20(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800AEA88
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
    subi r11, r10, 0xc0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800AEE30
asm void fn_800AEE30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1b0
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
    subi r11, r12, 0xc0
    bl _savegpr_26
    mr r28, r4
    mr r29, r6
    mr r30, r7
    fmr f20, f1
    fmr f21, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F658
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    la r3, lbl_8049F658
    lfs f22, 0x14(r3)
    lfs f23, 0x18(r3)
    lfs f24, 0x1c(r3)
    lfs f25, 0x20(r3)
    lfs f26, 0x34(r3)
    lfs f28, 0x2c(r3)
    lfs f29, 0x30(r3)
    lfs f30, 0x40(r3)
    lfs f31, 0x28(r3)
    lfs f27, 0x3c(r3)
lbl_800AEF8C:
    cmpwi r31, 0x0
    bne lbl_800AEFD4
    add r4, r28, r27
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x15c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x178
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800AF070
lbl_800AEFD4:
    add r4, r28, r27
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    cmpwi r31, 0x2
    blt lbl_800AF038
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r3, 0x160(r4)
    lwz r4, 0x16c(r4)
    bl fn_80190874
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r5, r28, r0
    lwz r3, 0x16c(r5)
    addi r3, r3, 0x224
    subi r0, r31, 0x2
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x16c(r4)
    addi r4, r4, 0x224
    lwz r5, 0x160(r5)
    addi r5, r5, 0xe0
    bl fn_8017375C
lbl_800AF038:
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x16c(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x178
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800AF070:
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0x178
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r28, r27
    addi r4, r4, 0x208
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_8001B8B8
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f20
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
    cmpwi r31, 0x0
    bne lbl_800AF174
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800AF10C
    stfs f22, 0x10(r1)
lbl_800AF10C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800AF120
    stfs f23, 0x10(r1)
lbl_800AF120:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800AF134
    stfs f24, 0x14(r1)
lbl_800AF134:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800AF148
    stfs f25, 0x14(r1)
lbl_800AF148:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800AF15C
    stfs f26, 0x18(r1)
lbl_800AF15C:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800AF1D8
    stfs f27, 0x18(r1)
    b lbl_800AF1D8
lbl_800AF174:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800AF188
    stfs f22, 0x10(r1)
lbl_800AF188:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800AF19C
    stfs f28, 0x14(r1)
lbl_800AF19C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800AF1B0
    stfs f29, 0x14(r1)
lbl_800AF1B0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800AF1C4
    stfs f30, 0x18(r1)
lbl_800AF1C4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800AF1D8
    stfs f31, 0x18(r1)
lbl_800AF1D8:
    add r4, r28, r26
    lwz r3, 0x160(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x160(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r28, r26
    lwz r3, 0x160(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x3
    blt lbl_800AEF8C
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
    subi r11, r10, 0xc0
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
