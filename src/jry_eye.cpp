#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern float lbl_8049FFE8;

s32 _restgpr_20();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_20();
s32 _savegpr_25();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018BD4(f32 farg0);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8002AE00(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s8 * fn_8003144C(s8 *arg0, s8 *arg1);
s8 * fn_800322B4(s8 *arg0, s32 arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_800CA050(s8 *arg0, s8 *arg1);
void fn_800DCDD4(s32 arg0, s32 arg1);
s32 fn_800DCDDC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800DD214(s32 arg0, s32 arg1, s32 arg2);
void fn_800DD434(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800DDED8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800DEBA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
s8 * fn_801D0CD0(s8 **arg0, s32 arg1);
void fn_801D4A9C(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800DCDD4(s32 arg0, s32 arg1) {
    fn_800DCDDC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800DCDDC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x2A), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x5B8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x5B8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x2C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x30) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x34) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x38) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x3C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x40) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x44) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x48) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x50)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x170)), (s32) ((s32) (var_r31 + 0x50)));
        M2C_FIELD(var_r31, s8 **, 0x290) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x294) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x298) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x29C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2A0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x294) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x298) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2D0)), (s32) ((s32) (var_r31 + 0x2A0)));
        M2C_FIELD(var_r31, s8 **, 0x300) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x304) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x30C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x314) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x320)), (s32) (M2C_FIELD(var_r31, s32 *, 0x304) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x308) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3B0)), (s32) ((s32) (var_r31 + 0x320)));
        M2C_FIELD(var_r31, s8 **, 0x440) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x444) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x448) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x44C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0x450) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x454) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x458) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x45C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x460)), (s32) (M2C_FIELD(var_r31, s32 *, 0x444) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x448) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x4F0)), (s32) ((s32) (var_r31 + 0x460)));
        M2C_FIELD(var_r31, s8 **, 0x580) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x584) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x588) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x58C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x590) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x594) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x598) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x59C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x5A0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x5A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x5A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x5AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x5B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x5B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x2A), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800DD214((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800DD214
asm M2C_UNK fn_800DD214(s32 arg0, s32 arg1, s32 arg2) {
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
    subi r11, r12, 0x30
    bl _savegpr_28
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_8049FFE8
    la r28, lbl_8049FFE8
    lfs f29, 0x4(r28)
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0x80(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f29, 0x8c(r1)
    stfs f29, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f29, 0x7c(r1)
    lfs f0, 0xc(r28)
    fmuls f31, f0, f29
    lfs f30, 0x10(r28)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800DD434
    lfs f1, lbl_8049FFE8
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    fmr f0, f29
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f0, 0xc(r28)
    fmuls f31, f0, f29
    lfs f30, 0x14(r28)
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800DDED8
    lwz r3, 0x70(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x88(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800DEBA4
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

// asm_to_cpp: fn_800DD434
asm void fn_800DD434(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2d0
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
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049FFE8
    lfs f15, 0x1c(r3)
    lfs f16, 0x20(r3)
    lfs f17, 0x24(r3)
    lfs f18, 0x28(r3)
    lfs f19, 0x2c(r3)
    lfs f20, lbl_8049FFE8
    lfs f21, 0x38(r3)
    lfs f22, 0x3c(r3)
    lfs f23, 0xc(r3)
    lfs f24, 0x40(r3)
    lfs f25, 0x18(r3)
    lfs f27, 0x48(r3)
    lfs f28, 0x8(r3)
    lfs f29, 0x50(r3)
    lfs f30, 0x54(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x140(r1)
    lfs f26, 0x44(r3)
    lfs f31, 0x4c(r3)
    lfs f0, 0x34(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x30(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x10(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x150(r1)
    lfs f0, 0x60(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x70(r3)
    stfd f0, 0x178(r1)
    lfs f0, 0x6c(r3)
    stfd f0, 0x170(r1)
    lfs f0, 0x68(r3)
    stfd f0, 0x168(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x180(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x188(r1)
lbl_800DD640:
    cmpwi r31, 0x0
    bne lbl_800DD688
    add r4, r27, r26
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x50
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800DD6D0
lbl_800DD688:
    add r4, r27, r26
    addi r3, r4, 0x170
    addi r4, r4, 0x50
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x38(r4)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x50
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800DD6D0:
    addi r3, r1, 0x90
    add r4, r27, r26
    addi r4, r4, 0x50
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r26
    addi r4, r4, 0x170
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x60
    mr r4, r3
    mr r5, r29
    bl fn_80018B00
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x60
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x2
    bge lbl_800DD764
    cmpwi r31, 0x0
    bge lbl_800DD770
    b lbl_800DD794
lbl_800DD764:
    cmpwi r31, 0x6
    bge lbl_800DD794
    b lbl_800DD784
lbl_800DD770:
    addi r3, r1, 0xa0
    lwz r4, 0x598(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800DD794
lbl_800DD784:
    addi r3, r1, 0xa0
    lwz r4, 0x5a0(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800DD794:
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
    cmpwi r31, 0x3
    bge lbl_800DD808
    cmpwi r31, 0x0
    beq lbl_800DD814
    bge lbl_800DD81C
    b lbl_800DD828
lbl_800DD808:
    cmpwi r31, 0x6
    bge lbl_800DD828
    b lbl_800DD824
lbl_800DD814:
    stfs f20, 0x44(r1)
    b lbl_800DD828
lbl_800DD81C:
    stfs f23, 0x44(r1)
    b lbl_800DD828
lbl_800DD824:
    stfs f25, 0x44(r1)
lbl_800DD828:
    cmpwi r28, 0x86
    bge lbl_800DD890
    cmpwi r28, 0x2e
    beq lbl_800DD8DC
    bge lbl_800DD864
    cmpwi r28, 0x2a
    bge lbl_800DD858
    cmpwi r28, 0x12
    bge lbl_800DDA74
    cmpwi r28, 0x10
    bge lbl_800DD8DC
    b lbl_800DDA74
lbl_800DD858:
    cmpwi r28, 0x2c
    bge lbl_800DDA74
    b lbl_800DD8DC
lbl_800DD864:
    cmpwi r28, 0x65
    beq lbl_800DDA74
    bge lbl_800DD87C
    cmpwi r28, 0x64
    bge lbl_800DD9A4
    b lbl_800DDA74
lbl_800DD87C:
    cmpwi r28, 0x84
    bge lbl_800DD8DC
    cmpwi r28, 0x6b
    bge lbl_800DDA74
    b lbl_800DD8DC
lbl_800DD890:
    cmpwi r28, 0xf8
    bge lbl_800DD8C4
    cmpwi r28, 0x8b
    beq lbl_800DD8DC
    bge lbl_800DD8B8
    cmpwi r28, 0x8a
    bge lbl_800DDA74
    cmpwi r28, 0x88
    bge lbl_800DD8DC
    b lbl_800DDA74
lbl_800DD8B8:
    cmpwi r28, 0xf6
    bge lbl_800DD8DC
    b lbl_800DDA74
lbl_800DD8C4:
    cmpwi r28, 0x23b
    beq lbl_800DD8DC
    bge lbl_800DDA74
    cmpwi r28, 0x209
    beq lbl_800DDA0C
    b lbl_800DDA74
lbl_800DD8DC:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_800DD8F0
    stfs f15, 0x30(r1)
lbl_800DD8F0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800DD904
    stfs f16, 0x34(r1)
lbl_800DD904:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800DD918
    stfs f17, 0x34(r1)
lbl_800DD918:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800DD92C
    stfs f18, 0x38(r1)
lbl_800DD92C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800DD940
    stfs f19, 0x38(r1)
lbl_800DD940:
    cmpwi r28, 0xf8
    bge lbl_800DDC18
    cmpwi r28, 0xf6
    bge lbl_800DD954
    b lbl_800DDC18
lbl_800DD954:
    stfs f20, 0x40(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r31, 0x3
    bge lbl_800DD978
    cmpwi r31, 0x0
    beq lbl_800DD984
    bge lbl_800DD990
    b lbl_800DDC18
lbl_800DD978:
    cmpwi r31, 0x5
    bge lbl_800DDC18
    b lbl_800DD99C
lbl_800DD984:
    lfd f0, 0x130(r1)
    stfs f0, 0x44(r1)
    b lbl_800DDC18
lbl_800DD990:
    lfd f0, 0x138(r1)
    stfs f0, 0x44(r1)
    b lbl_800DDC18
lbl_800DD99C:
    stfs f23, 0x44(r1)
    b lbl_800DDC18
lbl_800DD9A4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800DD9B8
    stfs f21, 0x30(r1)
lbl_800DD9B8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800DD9CC
    stfs f22, 0x34(r1)
lbl_800DD9CC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800DD9E0
    stfs f23, 0x34(r1)
lbl_800DD9E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800DD9F4
    stfs f18, 0x38(r1)
lbl_800DD9F4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800DDC18
    stfs f19, 0x38(r1)
    b lbl_800DDC18
lbl_800DDA0C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800DDA20
    stfs f21, 0x30(r1)
lbl_800DDA20:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800DDA34
    stfs f24, 0x34(r1)
lbl_800DDA34:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800DDA48
    stfs f25, 0x34(r1)
lbl_800DDA48:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800DDA5C
    stfs f18, 0x38(r1)
lbl_800DDA5C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800DDC18
    stfs f19, 0x38(r1)
    b lbl_800DDC18
lbl_800DDA74:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800DDA88
    stfs f26, 0x30(r1)
lbl_800DDA88:
    cmpwi r31, 0x3
    bge lbl_800DDBC8
    cmpwi r31, 0x0
    beq lbl_800DDAA4
    bge lbl_800DDB30
    b lbl_800DDBC8
    b lbl_800DDBC8
lbl_800DDAA4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800DDAB8
    stfs f27, 0x34(r1)
lbl_800DDAB8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800DDACC
    stfs f20, 0x34(r1)
lbl_800DDACC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800DDAE0
    stfs f27, 0x38(r1)
lbl_800DDAE0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800DDAF4
    stfs f20, 0x38(r1)
lbl_800DDAF4:
    cmpwi r28, 0xa3
    beq lbl_800DDB04
    cmpwi r28, 0x1b3
    bne lbl_800DDC18
lbl_800DDB04:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800DDB18
    stfs f28, 0x34(r1)
lbl_800DDB18:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800DDC18
    stfs f31, 0x34(r1)
    b lbl_800DDC18
lbl_800DDB30:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800DDB44
    stfs f29, 0x34(r1)
lbl_800DDB44:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800DDB58
    stfs f20, 0x34(r1)
lbl_800DDB58:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800DDB6C
    stfs f30, 0x38(r1)
lbl_800DDB6C:
    lfs f1, 0x38(r1)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800DDB84
    stfs f0, 0x38(r1)
lbl_800DDB84:
    cmpwi r28, 0xa3
    beq lbl_800DDB94
    cmpwi r28, 0x1b3
    bne lbl_800DDC18
lbl_800DDB94:
    cmpwi r31, 0x1
    bne lbl_800DDC18
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800DDBB0
    stfs f28, 0x34(r1)
lbl_800DDBB0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800DDC18
    stfs f31, 0x34(r1)
    b lbl_800DDC18
lbl_800DDBC8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800DDBDC
    stfs f29, 0x34(r1)
lbl_800DDBDC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800DDBF0
    stfs f21, 0x34(r1)
lbl_800DDBF0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800DDC04
    stfs f16, 0x38(r1)
lbl_800DDC04:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_800DDC18
    stfs f17, 0x38(r1)
lbl_800DDC18:
    cmpwi r31, 0x0
    bne lbl_800DDC2C
    lwz r3, 0x580(r27)
    lfs f0, 0x3c(r3)
    stfs f0, 0x3c(r1)
lbl_800DDC2C:
    cmpwi r31, 0x1
    bne lbl_800DDC88
    lwz r3, 0x580(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    bge lbl_800DDC68
    lfd f0, 0x150(r1)
    fadds f1, f0, f1
    lfd f0, 0x158(r1)
    fadds f1, f0, f1
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    b lbl_800DDC88
lbl_800DDC68:
    lfd f0, 0x160(r1)
    fcmpo cr0, f1, f0
    ble lbl_800DDC88
    fsubs f0, f1, f0
    fadds f1, f19, f0
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
lbl_800DDC88:
    cmpwi r31, 0x3
    bne lbl_800DDCC8
    lwz r3, 0x24(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x168(r1)
    fcmpo cr0, f1, f0
    ble lbl_800DDCC8
    lwz r3, 0x580(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x170(r1)
    fcmpo cr0, f1, f0
    bge lbl_800DDCC8
    lfs f1, 0x34(r1)
    lfd f0, 0x178(r1)
    fsubs f0, f1, f0
    stfs f0, 0x34(r1)
lbl_800DDCC8:
    cmpwi r28, 0x31
    beq lbl_800DDCE0
    cmpwi r28, 0x30
    beq lbl_800DDCE0
    cmpwi r28, 0xd2
    bne lbl_800DDD20
lbl_800DDCE0:
    cmpwi r31, 0x1
    bne lbl_800DDCF0
    lfd f0, 0x180(r1)
    stfs f0, 0x34(r1)
lbl_800DDCF0:
    cmpwi r31, 0x2
    bne lbl_800DDD08
    lfs f1, 0x34(r1)
    lfd f0, 0x188(r1)
    fadds f0, f1, f0
    stfs f0, 0x34(r1)
lbl_800DDD08:
    cmpwi r31, 0x3
    bne lbl_800DDD20
    lfs f1, 0x34(r1)
    lfd f0, 0x178(r1)
    fsubs f0, f1, f0
    stfs f0, 0x34(r1)
lbl_800DDD20:
    cmpwi r31, 0x0
    bne lbl_800DDD34
    stfs f20, 0x30(r1)
    stfs f20, 0x34(r1)
    stfs f20, 0x38(r1)
lbl_800DDD34:
    add r4, r27, r25
    lwz r3, 0x20(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
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
    cmpwi r31, 0x6
    blt lbl_800DD640
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

// asm_to_cpp: fn_800DDED8
asm void fn_800DDED8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2f0
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
    bl _savegpr_20
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    li r27, 0x0
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x1c(r1)
    addi r4, r1, 0x1c
    addi r3, r1, 0x28
    bl fn_8002E628
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_800322B4
    addi r3, r1, 0x90
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r28, 0x0
    li r21, 0x0
    li r20, 0x0
    la r31, lbl_8049FFE8
    lfs f0, 0x80(r31)
    stfd f0, 0x108(r1)
    lfs f15, 0x2c(r31)
    addi r30, r1, 0x18
    lfs f0, 0x7c(r31)
    stfd f0, 0x100(r1)
    lfs f18, 0x84(r31)
    lfs f19, 0x90(r31)
    lfs f20, 0x34(r31)
    lfs f21, 0x94(r31)
    lfs f16, 0x88(r31)
    lfs f17, 0x8c(r31)
    lfs f0, 0x70(r31)
    stfd f0, 0x110(r1)
    lfs f22, 0xc(r31)
    lfs f23, 0x98(r31)
    lfs f0, 0xa4(r31)
    stfd f0, 0x118(r1)
    lfs f0, 0xa0(r31)
    stfd f0, 0x120(r1)
    lfs f24, 0x9c(r31)
    lfs f25, 0x4(r31)
    lfs f0, 0x60(r31)
    stfd f0, 0x128(r1)
    lfs f26, lbl_8049FFE8
    lfs f27, 0xa8(r31)
    lfs f28, 0xac(r31)
    lfs f0, 0xb0(r31)
    stfd f0, 0x140(r1)
    lfs f0, 0xb4(r31)
    stfd f0, 0x148(r1)
    lfs f0, 0xbc(r31)
    stfd f0, 0x150(r1)
    lfs f0, 0xc0(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0xcc(r31)
    stfd f0, 0x168(r1)
    lfs f0, 0xc8(r31)
    stfd f0, 0x170(r1)
    lfs f0, 0xc4(r31)
    stfd f0, 0x160(r1)
    addi r29, r1, 0x14
    lfs f29, 0x24(r31)
    lfs f30, 0xb8(r31)
    lfs f0, 0xd0(r31)
    stfd f0, 0x178(r1)
    lfs f31, 0xd4(r31)
    lfs f0, 0xd8(r31)
    stfd f0, 0x190(r1)
    lfs f0, 0xdc(r31)
    stfd f0, 0x198(r1)
lbl_800DE148:
    add r3, r23, r20
    lwz r3, 0x308(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r28, 0x0
    bne lbl_800DE1AC
    add r4, r23, r21
    addi r3, r4, 0x3b0
    addi r4, r4, 0x320
    bl fn_801734E4
    addi r3, r1, 0xa0
    lwz r4, 0x304(r23)
    addi r4, r4, 0x224
    add r5, r23, r20
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r23, r21
    addi r3, r3, 0x320
    addi r4, r1, 0xa0
    bl fn_801734E4
    b lbl_800DE1E8
lbl_800DE1AC:
    add r4, r23, r21
    addi r3, r4, 0x3b0
    addi r4, r4, 0x320
    bl fn_801734E4
    addi r3, r1, 0xa0
    lwz r4, 0x304(r23)
    addi r4, r4, 0x224
    add r5, r23, r20
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r23, r21
    addi r3, r3, 0x320
    addi r4, r1, 0xa0
    bl fn_801734E4
lbl_800DE1E8:
    addi r3, r1, 0x90
    add r4, r23, r21
    addi r4, r4, 0x320
    mr r5, r26
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r23, r21
    addi r4, r4, 0x3b0
    mr r5, r26
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x60
    mr r4, r3
    mr r5, r25
    bl fn_80018B00
    addi r3, r1, 0xd0
    addi r4, r1, 0xa0
    bl fn_80173754
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    addi r5, r1, 0x60
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x40(r1)
    cmpwi r28, 0x1
    beq lbl_800DE59C
    bge lbl_800DE284
    cmpwi r28, 0x0
    bge lbl_800DE290
    b lbl_800DEA00
lbl_800DE284:
    cmpwi r28, 0x3
    bge lbl_800DEA00
    b lbl_800DE8D4
lbl_800DE290:
    lwz r3, 0x377c(r22)
    li r4, 0xac
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_801D0CD0
    stw r3, 0x18(r1)
    addi r3, r1, 0x24
    mr r4, r30
    bl fn_8003144C
    stfs f15, 0x48(r1)
    lfd f0, 0x100(r1)
    stfs f0, 0x44(r1)
    cmpwi r24, 0x134
    bge lbl_800DE31C
    cmpwi r24, 0xa1
    beq lbl_800DE3B8
    bge lbl_800DE304
    cmpwi r24, 0x6
    beq lbl_800DE3B0
    bge lbl_800DE2F0
    cmpwi r24, 0x5
    bge lbl_800DE360
    b lbl_800DE43C
lbl_800DE2F0:
    cmpwi r24, 0x34
    bge lbl_800DE43C
    cmpwi r24, 0x32
    bge lbl_800DE3B8
    b lbl_800DE43C
lbl_800DE304:
    cmpwi r24, 0x100
    beq lbl_800DE3B8
    blt lbl_800DE43C
    cmpwi r24, 0x132
    bge lbl_800DE3B8
    b lbl_800DE43C
lbl_800DE31C:
    cmpwi r24, 0x231
    beq lbl_800DE438
    bge lbl_800DE340
    cmpwi r24, 0x1e1
    beq lbl_800DE3F8
    bge lbl_800DE43C
    cmpwi r24, 0x141
    beq lbl_800DE3F8
    b lbl_800DE43C
lbl_800DE340:
    cmpwi r24, 0x251
    beq lbl_800DE438
    bge lbl_800DE43C
    cmpwi r24, 0x237
    bge lbl_800DE43C
    cmpwi r24, 0x235
    bge lbl_800DE438
    b lbl_800DE43C
lbl_800DE360:
    lwz r3, 0x5a8(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f15
    ble lbl_800DE384
    lfd f0, 0x108(r1)
    fmuls f1, f0, f1
    lfd f0, 0x100(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DE384:
    lwz r3, 0x5a8(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f20
    ble lbl_800DE43C
    lfd f0, 0x110(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    li r27, 0x1
    b lbl_800DE43C
lbl_800DE3B0:
    li r27, 0x1
    b lbl_800DE43C
lbl_800DE3B8:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DE43C
    fsubs f0, f0, f18
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f20
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DE43C
lbl_800DE3F8:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DE43C
    fsubs f0, f0, f18
    fmuls f1, f19, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f20
    fmuls f1, f21, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DE43C
lbl_800DE438:
    li r27, 0x1
lbl_800DE43C:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f20
    ble lbl_800DE460
    fsubs f0, f0, f22
    fmuls f1, f23, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DE460:
    lwz r3, 0x5a8(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f24
    ble lbl_800DE48C
    lfd f0, 0x118(r1)
    fsubs f1, f1, f0
    lfd f0, 0x120(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DE48C:
    cmpwi r24, 0xf3
    beq lbl_800DE4C0
    bge lbl_800DE4A4
    cmpwi r24, 0xf2
    bge lbl_800DE4B0
    b lbl_800DE4E0
lbl_800DE4A4:
    cmpwi r24, 0xf9
    beq lbl_800DE4D0
    b lbl_800DE4E0
lbl_800DE4B0:
    stfs f25, 0x40(r1)
    stfs f26, 0x44(r1)
    stfs f15, 0x48(r1)
    b lbl_800DE4E0
lbl_800DE4C0:
    stfs f25, 0x40(r1)
    stfs f26, 0x44(r1)
    stfs f15, 0x48(r1)
    b lbl_800DE4E0
lbl_800DE4D0:
    stfs f25, 0x40(r1)
    lfd f0, 0x128(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
lbl_800DE4E0:
    cmpwi r27, 0x0
    beq lbl_800DEA00
    addi r3, r1, 0x30
    lwz r4, 0x5a8(r23)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x130(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x130(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    fcmpo cr0, f0, f28
    ble lbl_800DE548
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x138(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x138(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    stfs f0, 0x80(r1)
    b lbl_800DE54C
lbl_800DE548:
    stfs f28, 0x80(r1)
lbl_800DE54C:
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f28
    bge lbl_800DE55C
    stfs f28, 0x80(r1)
lbl_800DE55C:
    lfd f0, 0x140(r1)
    stfs f0, 0x84(r1)
    lfd f0, 0x148(r1)
    stfs f0, 0x88(r1)
    stfs f26, 0x8c(r1)
    addi r3, r1, 0x80
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x24
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_801D4A9C
    li r27, 0x0
    b lbl_800DEA00
lbl_800DE59C:
    lwz r3, 0x377c(r22)
    li r4, 0xad
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_801D0CD0
    stw r3, 0x14(r1)
    addi r3, r1, 0x24
    mr r4, r29
    bl fn_8003144C
    stfs f29, 0x48(r1)
    stfs f30, 0x44(r1)
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f22
    fadds f2, f29, f0
    stfs f2, 0x48(r1)
    cmpwi r24, 0x134
    bge lbl_800DE638
    cmpwi r24, 0xa1
    beq lbl_800DE728
    bge lbl_800DE620
    cmpwi r24, 0x6
    beq lbl_800DE6C4
    bge lbl_800DE60C
    cmpwi r24, 0x5
    bge lbl_800DE67C
    b lbl_800DE7A4
lbl_800DE60C:
    cmpwi r24, 0x34
    bge lbl_800DE7A4
    cmpwi r24, 0x31
    bge lbl_800DE6D4
    b lbl_800DE7A4
lbl_800DE620:
    cmpwi r24, 0x100
    beq lbl_800DE728
    blt lbl_800DE7A4
    cmpwi r24, 0x132
    bge lbl_800DE728
    b lbl_800DE7A4
lbl_800DE638:
    cmpwi r24, 0x231
    beq lbl_800DE6CC
    bge lbl_800DE65C
    cmpwi r24, 0x1e1
    beq lbl_800DE768
    bge lbl_800DE7A4
    cmpwi r24, 0x141
    beq lbl_800DE768
    b lbl_800DE7A4
lbl_800DE65C:
    cmpwi r24, 0x251
    beq lbl_800DE6CC
    bge lbl_800DE7A4
    cmpwi r24, 0x237
    bge lbl_800DE7A4
    cmpwi r24, 0x235
    bge lbl_800DE6CC
    b lbl_800DE7A4
lbl_800DE67C:
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f15
    ble lbl_800DE698
    lfd f0, 0x108(r1)
    fmuls f0, f0, f1
    fadds f0, f30, f0
    stfs f0, 0x44(r1)
lbl_800DE698:
    lwz r3, 0x5a8(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f20
    ble lbl_800DE7A4
    lfd f0, 0x110(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    li r27, 0x1
    b lbl_800DE7A4
lbl_800DE6C4:
    li r27, 0x1
    b lbl_800DE7A4
lbl_800DE6CC:
    li r27, 0x1
    b lbl_800DE7A4
lbl_800DE6D4:
    lfs f1, 0x38(r3)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    ble lbl_800DE728
    fsubs f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x48(r1)
    lfs f1, 0x38(r3)
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    ble lbl_800DE710
    lfd f0, 0x160(r1)
    fadds f0, f30, f0
    stfs f0, 0x44(r1)
    b lbl_800DE728
lbl_800DE710:
    lfd f0, 0x168(r1)
    fsubs f1, f1, f0
    lfd f0, 0x170(r1)
    fmuls f0, f0, f1
    fadds f0, f30, f0
    stfs f0, 0x44(r1)
lbl_800DE728:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DE7A4
    fsubs f0, f0, f18
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f24
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DE7A4
lbl_800DE768:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DE7A4
    fsubs f0, f0, f18
    fmuls f1, f19, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f24
    fmuls f1, f23, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DE7A4:
    lwz r3, 0x5a8(r23)
    lfs f1, 0x34(r3)
    lfd f0, 0x128(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    cmpwi r24, 0xf3
    beq lbl_800DE7F8
    bge lbl_800DE7D8
    cmpwi r24, 0xf2
    bge lbl_800DE7E4
    b lbl_800DE818
lbl_800DE7D8:
    cmpwi r24, 0xf9
    beq lbl_800DE80C
    b lbl_800DE818
lbl_800DE7E4:
    stfs f25, 0x40(r1)
    lfd f0, 0x178(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
    b lbl_800DE818
lbl_800DE7F8:
    stfs f25, 0x40(r1)
    lfd f0, 0x178(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
    b lbl_800DE818
lbl_800DE80C:
    stfs f25, 0x40(r1)
    stfs f22, 0x44(r1)
    stfs f26, 0x48(r1)
lbl_800DE818:
    cmpwi r27, 0x0
    beq lbl_800DEA00
    addi r3, r1, 0x30
    lwz r4, 0x5a8(r23)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x180(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x180(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    fcmpo cr0, f0, f31
    ble lbl_800DE880
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x188(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x188(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    stfs f0, 0x80(r1)
    b lbl_800DE884
lbl_800DE880:
    stfs f31, 0x80(r1)
lbl_800DE884:
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f31
    bge lbl_800DE894
    stfs f31, 0x80(r1)
lbl_800DE894:
    lfd f0, 0x190(r1)
    stfs f0, 0x84(r1)
    lfd f0, 0x198(r1)
    stfs f0, 0x88(r1)
    stfs f26, 0x8c(r1)
    addi r3, r1, 0x80
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x24
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_801D4A9C
    li r27, 0x0
    b lbl_800DEA00
lbl_800DE8D4:
    stfs f29, 0x48(r1)
    stfs f29, 0x44(r1)
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fadds f1, f29, f0
    stfs f1, 0x48(r1)
    cmpwi r24, 0x100
    beq lbl_800DE984
    bge lbl_800DE924
    cmpwi r24, 0x34
    bge lbl_800DE918
    cmpwi r24, 0x5
    beq lbl_800DE950
    blt lbl_800DEA00
    cmpwi r24, 0x32
    bge lbl_800DE984
    b lbl_800DEA00
lbl_800DE918:
    cmpwi r24, 0xa1
    beq lbl_800DE984
    b lbl_800DEA00
lbl_800DE924:
    cmpwi r24, 0x141
    beq lbl_800DE9C4
    bge lbl_800DE944
    cmpwi r24, 0x134
    bge lbl_800DEA00
    cmpwi r24, 0x132
    bge lbl_800DE984
    b lbl_800DEA00
lbl_800DE944:
    cmpwi r24, 0x1e1
    beq lbl_800DE9C4
    b lbl_800DEA00
lbl_800DE950:
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f15
    ble lbl_800DEA00
    fsubs f0, f0, f29
    fmuls f0, f21, f0
    fadds f0, f1, f0
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f29
    fmuls f0, f23, f0
    fadds f0, f29, f0
    stfs f0, 0x44(r1)
    b lbl_800DEA00
lbl_800DE984:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DEA00
    fsubs f0, f0, f18
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f24
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DEA00
lbl_800DE9C4:
    lwz r3, 0x5a8(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800DEA00
    fsubs f0, f0, f18
    fmuls f1, f19, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fsubs f0, f0, f24
    fmuls f1, f21, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DEA00:
    add r4, r23, r20
    lwz r3, 0x308(r4)
    lfs f0, 0x40(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x44(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x48(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x4c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x308(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r23, r20
    lwz r3, 0x308(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r21, r21, 0x30
    addi r20, r20, 0x4
    cmpwi r28, 0x3
    blt lbl_800DE148
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
    bl _restgpr_20
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800DEBA4
asm void fn_800DEBA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x300
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
    bl _savegpr_20
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    stfs f1, 0x10(r1)
    li r27, 0x0
    lwz r3, 0x377c(r3)
    lwz r0, 0x114(r3)
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0x1c(r1)
    addi r4, r1, 0x1c
    addi r3, r1, 0x28
    bl fn_8002E628
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_800322B4
    addi r3, r1, 0x90
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r28, 0x0
    li r21, 0x0
    li r20, 0x0
    la r31, lbl_8049FFE8
    lfs f0, 0x80(r31)
    stfd f0, 0x108(r1)
    lfs f15, 0x2c(r31)
    lfs f0, 0xe0(r31)
    stfd f0, 0x120(r1)
    lfs f0, 0x50(r31)
    stfd f0, 0x118(r1)
    addi r30, r1, 0x18
    lfs f14, 0x28(r31)
    lfs f0, 0x7c(r31)
    stfd f0, 0x100(r1)
    lfs f19, 0x84(r31)
    lfs f20, 0x90(r31)
    lfs f21, 0x34(r31)
    lfs f22, 0x94(r31)
    lfs f18, 0xe4(r31)
    lfs f16, 0x88(r31)
    lfs f17, 0x8c(r31)
    lfs f0, 0x70(r31)
    stfd f0, 0x110(r1)
    lfs f0, 0xc(r31)
    stfd f0, 0x128(r1)
    lfs f23, 0x98(r31)
    lfs f0, 0xa4(r31)
    stfd f0, 0x130(r1)
    lfs f0, 0xa0(r31)
    stfd f0, 0x138(r1)
    lfs f24, 0x9c(r31)
    lfs f25, 0x4(r31)
    lfs f0, 0x60(r31)
    stfd f0, 0x140(r1)
    lfs f26, lbl_8049FFE8
    lfs f27, 0xe8(r31)
    lfs f28, 0xac(r31)
    lfs f0, 0xb0(r31)
    stfd f0, 0x158(r1)
    lfs f0, 0xec(r31)
    stfd f0, 0x160(r1)
    addi r29, r1, 0x14
    lfs f29, 0x20(r31)
    lfs f0, 0xb8(r31)
    stfd f0, 0x168(r1)
    lfs f0, 0x78(r31)
    stfd f0, 0x170(r1)
    lfs f0, 0xd0(r31)
    stfd f0, 0x178(r1)
    lfs f30, 0xd4(r31)
    lfs f0, 0xd8(r31)
    stfd f0, 0x190(r1)
    lfs f0, 0xf0(r31)
    stfd f0, 0x198(r1)
    lfs f31, 0x24(r31)
    lfs f0, 0x38(r31)
    stfd f0, 0x1a0(r1)
lbl_800DEE1C:
    add r3, r23, r20
    lwz r3, 0x448(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049FFE8
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r28, 0x0
    bne lbl_800DEE80
    add r4, r23, r21
    addi r3, r4, 0x4f0
    addi r4, r4, 0x460
    bl fn_801734E4
    addi r3, r1, 0xa0
    lwz r4, 0x444(r23)
    addi r4, r4, 0x224
    add r5, r23, r20
    lwz r5, 0x448(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r23, r21
    addi r3, r3, 0x460
    addi r4, r1, 0xa0
    bl fn_801734E4
    b lbl_800DEEBC
lbl_800DEE80:
    add r4, r23, r21
    addi r3, r4, 0x4f0
    addi r4, r4, 0x460
    bl fn_801734E4
    addi r3, r1, 0xa0
    lwz r4, 0x304(r23)
    addi r4, r4, 0x224
    add r5, r23, r20
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r23, r21
    addi r3, r3, 0x460
    addi r4, r1, 0xa0
    bl fn_801734E4
lbl_800DEEBC:
    addi r3, r1, 0x90
    add r4, r23, r21
    addi r4, r4, 0x460
    mr r5, r26
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r23, r21
    addi r4, r4, 0x4f0
    mr r5, r26
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_8001B8B8
    addi r3, r1, 0x50
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_80018B08
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r25
    bl fn_80018B00
    addi r3, r1, 0xd0
    addi r4, r1, 0xa0
    bl fn_80173754
    addi r3, r1, 0x40
    addi r4, r1, 0xd0
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x40
    mr r4, r3
    bl fn_8001B8B0
    stfs f25, 0x40(r1)
    cmpwi r28, 0x1
    beq lbl_800DF294
    bge lbl_800DEF58
    cmpwi r28, 0x0
    bge lbl_800DEF64
    b lbl_800DF6EC
lbl_800DEF58:
    cmpwi r28, 0x3
    bge lbl_800DF6EC
    b lbl_800DF5A4
lbl_800DEF64:
    lwz r3, 0x377c(r22)
    li r4, 0xaf
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_801D0CD0
    stw r3, 0x18(r1)
    addi r3, r1, 0x24
    mr r4, r30
    bl fn_8003144C
    stfs f14, 0x48(r1)
    lfd f0, 0x100(r1)
    stfs f0, 0x44(r1)
    cmpwi r24, 0x134
    bge lbl_800DEFF0
    cmpwi r24, 0xa1
    beq lbl_800DF0B4
    bge lbl_800DEFD8
    cmpwi r24, 0x6
    beq lbl_800DF084
    bge lbl_800DEFC4
    cmpwi r24, 0x5
    bge lbl_800DF034
    b lbl_800DF130
lbl_800DEFC4:
    cmpwi r24, 0x34
    bge lbl_800DF130
    cmpwi r24, 0x31
    bge lbl_800DF094
    b lbl_800DF130
lbl_800DEFD8:
    cmpwi r24, 0x100
    beq lbl_800DF0B4
    blt lbl_800DF130
    cmpwi r24, 0x132
    bge lbl_800DF0B4
    b lbl_800DF130
lbl_800DEFF0:
    cmpwi r24, 0x231
    beq lbl_800DF08C
    bge lbl_800DF014
    cmpwi r24, 0x1e1
    beq lbl_800DF0F4
    bge lbl_800DF130
    cmpwi r24, 0x141
    beq lbl_800DF0F4
    b lbl_800DF130
lbl_800DF014:
    cmpwi r24, 0x251
    beq lbl_800DF08C
    bge lbl_800DF130
    cmpwi r24, 0x237
    bge lbl_800DF130
    cmpwi r24, 0x235
    bge lbl_800DF08C
    b lbl_800DF130
lbl_800DF034:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f15
    bge lbl_800DF058
    lfd f0, 0x108(r1)
    fmuls f1, f0, f1
    lfd f0, 0x100(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF058:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f21
    bge lbl_800DF130
    lfd f0, 0x110(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    li r27, 0x1
    b lbl_800DF130
lbl_800DF084:
    li r27, 0x1
    b lbl_800DF130
lbl_800DF08C:
    li r27, 0x1
    b lbl_800DF130
lbl_800DF094:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x38(r3)
    lfd f0, 0x118(r1)
    fcmpo cr0, f1, f0
    bge lbl_800DF0B4
    lfd f0, 0x120(r1)
    fadds f0, f14, f0
    stfs f0, 0x48(r1)
lbl_800DF0B4:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF130
    fadds f0, f19, f0
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f21, f0
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DF130
lbl_800DF0F4:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF130
    fadds f0, f19, f0
    fmuls f1, f20, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f21, f0
    fmuls f1, f22, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF130:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f21
    ble lbl_800DF158
    lfd f0, 0x128(r1)
    fsubs f0, f1, f0
    fmuls f1, f23, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF158:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f24
    ble lbl_800DF184
    lfd f0, 0x130(r1)
    fsubs f1, f1, f0
    lfd f0, 0x138(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF184:
    cmpwi r24, 0xf3
    beq lbl_800DF1B8
    bge lbl_800DF19C
    cmpwi r24, 0xf2
    bge lbl_800DF1A8
    b lbl_800DF1D8
lbl_800DF19C:
    cmpwi r24, 0xf9
    beq lbl_800DF1C8
    b lbl_800DF1D8
lbl_800DF1A8:
    stfs f25, 0x40(r1)
    stfs f26, 0x44(r1)
    stfs f15, 0x48(r1)
    b lbl_800DF1D8
lbl_800DF1B8:
    stfs f25, 0x40(r1)
    stfs f26, 0x44(r1)
    stfs f15, 0x48(r1)
    b lbl_800DF1D8
lbl_800DF1C8:
    stfs f25, 0x40(r1)
    lfd f0, 0x140(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
lbl_800DF1D8:
    cmpwi r27, 0x0
    beq lbl_800DF6EC
    addi r3, r1, 0x30
    lwz r4, 0x5b0(r23)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x148(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x148(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    fcmpo cr0, f0, f28
    ble lbl_800DF240
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x150(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x150(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    stfs f0, 0x80(r1)
    b lbl_800DF244
lbl_800DF240:
    stfs f28, 0x80(r1)
lbl_800DF244:
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f28
    bge lbl_800DF254
    stfs f28, 0x80(r1)
lbl_800DF254:
    lfd f0, 0x158(r1)
    stfs f0, 0x84(r1)
    lfd f0, 0x160(r1)
    stfs f0, 0x88(r1)
    stfs f26, 0x8c(r1)
    addi r3, r1, 0x80
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x24
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_801D4A9C
    li r27, 0x0
    b lbl_800DF6EC
lbl_800DF294:
    lwz r3, 0x377c(r22)
    li r4, 0xb0
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x28
    bl fn_801D0CD0
    stw r3, 0x14(r1)
    addi r3, r1, 0x24
    mr r4, r29
    bl fn_8003144C
    stfs f29, 0x48(r1)
    lfd f0, 0x168(r1)
    stfs f0, 0x44(r1)
    lwz r3, 0x5b0(r23)
    lfs f1, 0x38(r3)
    lfd f0, 0x170(r1)
    fsubs f0, f1, f0
    fadds f2, f29, f0
    stfs f2, 0x48(r1)
    cmpwi r24, 0x134
    bge lbl_800DF338
    cmpwi r24, 0xa1
    beq lbl_800DF3F4
    bge lbl_800DF320
    cmpwi r24, 0x6
    beq lbl_800DF3C8
    bge lbl_800DF30C
    cmpwi r24, 0x5
    bge lbl_800DF37C
    b lbl_800DF470
lbl_800DF30C:
    cmpwi r24, 0x34
    bge lbl_800DF470
    cmpwi r24, 0x31
    bge lbl_800DF3D8
    b lbl_800DF470
lbl_800DF320:
    cmpwi r24, 0x100
    beq lbl_800DF3F4
    blt lbl_800DF470
    cmpwi r24, 0x132
    bge lbl_800DF3F4
    b lbl_800DF470
lbl_800DF338:
    cmpwi r24, 0x231
    beq lbl_800DF3D0
    bge lbl_800DF35C
    cmpwi r24, 0x1e1
    beq lbl_800DF434
    bge lbl_800DF470
    cmpwi r24, 0x141
    beq lbl_800DF434
    b lbl_800DF470
lbl_800DF35C:
    cmpwi r24, 0x251
    beq lbl_800DF3D0
    bge lbl_800DF470
    cmpwi r24, 0x237
    bge lbl_800DF470
    cmpwi r24, 0x235
    bge lbl_800DF3D0
    b lbl_800DF470
lbl_800DF37C:
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f15
    ble lbl_800DF39C
    lfd f0, 0x108(r1)
    fmuls f1, f0, f1
    lfd f0, 0x168(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF39C:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f21
    ble lbl_800DF470
    lfd f0, 0x110(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    li r27, 0x1
    b lbl_800DF470
lbl_800DF3C8:
    li r27, 0x1
    b lbl_800DF470
lbl_800DF3D0:
    li r27, 0x1
    b lbl_800DF470
lbl_800DF3D8:
    lfs f1, 0x38(r3)
    lfd f0, 0x118(r1)
    fcmpo cr0, f1, f0
    bge lbl_800DF3F4
    lfd f0, 0x120(r1)
    fadds f0, f2, f0
    stfs f0, 0x48(r1)
lbl_800DF3F4:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF470
    fadds f0, f19, f0
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f24, f0
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DF470
lbl_800DF434:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF470
    fadds f0, f19, f0
    fmuls f1, f20, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f24, f0
    fmuls f1, f23, f0
    lfs f0, 0x44(r1)
    fsubs f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF470:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x34(r3)
    lfd f0, 0x140(r1)
    fmuls f1, f0, f1
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    cmpwi r24, 0xf3
    beq lbl_800DF4C4
    bge lbl_800DF4A4
    cmpwi r24, 0xf2
    bge lbl_800DF4B0
    b lbl_800DF4E8
lbl_800DF4A4:
    cmpwi r24, 0xf9
    beq lbl_800DF4D8
    b lbl_800DF4E8
lbl_800DF4B0:
    stfs f25, 0x40(r1)
    lfd f0, 0x178(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
    b lbl_800DF4E8
lbl_800DF4C4:
    stfs f25, 0x40(r1)
    lfd f0, 0x178(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
    b lbl_800DF4E8
lbl_800DF4D8:
    stfs f25, 0x40(r1)
    lfd f0, 0x128(r1)
    stfs f0, 0x44(r1)
    stfs f26, 0x48(r1)
lbl_800DF4E8:
    cmpwi r27, 0x0
    beq lbl_800DF6EC
    addi r3, r1, 0x30
    lwz r4, 0x5b0(r23)
    addi r4, r4, 0x30
    bl fn_800CA050
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x180(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x180(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    fcmpo cr0, f0, f30
    ble lbl_800DF550
    lfs f1, 0x38(r1)
    bl fn_80018BD4
    stfd f1, 0x188(r1)
    lfs f1, 0x34(r1)
    bl fn_80018BD4
    lfd f0, 0x188(r1)
    fadds f0, f1, f0
    fdivs f0, f0, f27
    stfs f0, 0x80(r1)
    b lbl_800DF554
lbl_800DF550:
    stfs f30, 0x80(r1)
lbl_800DF554:
    lfs f0, 0x80(r1)
    fcmpo cr0, f0, f30
    bge lbl_800DF564
    stfs f30, 0x80(r1)
lbl_800DF564:
    lfd f0, 0x190(r1)
    stfs f0, 0x84(r1)
    lfd f0, 0x198(r1)
    stfs f0, 0x88(r1)
    stfs f26, 0x8c(r1)
    addi r3, r1, 0x80
    mr r4, r3
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x24
    lfs f1, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f3, 0x88(r1)
    bl fn_801D4A9C
    li r27, 0x0
    b lbl_800DF6EC
lbl_800DF5A4:
    stfs f29, 0x48(r1)
    stfs f31, 0x44(r1)
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fadds f1, f29, f0
    stfs f1, 0x48(r1)
    cmpwi r24, 0x100
    beq lbl_800DF654
    bge lbl_800DF5F4
    cmpwi r24, 0x34
    bge lbl_800DF5E8
    cmpwi r24, 0x5
    beq lbl_800DF620
    blt lbl_800DF6D0
    cmpwi r24, 0x32
    bge lbl_800DF654
    b lbl_800DF6D0
lbl_800DF5E8:
    cmpwi r24, 0xa1
    beq lbl_800DF654
    b lbl_800DF6D0
lbl_800DF5F4:
    cmpwi r24, 0x141
    beq lbl_800DF694
    bge lbl_800DF614
    cmpwi r24, 0x134
    bge lbl_800DF6D0
    cmpwi r24, 0x132
    bge lbl_800DF654
    b lbl_800DF6D0
lbl_800DF614:
    cmpwi r24, 0x1e1
    beq lbl_800DF694
    b lbl_800DF6D0
lbl_800DF620:
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f14
    bge lbl_800DF6D0
    fadds f0, f31, f0
    fmuls f0, f22, f0
    fadds f0, f1, f0
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f31, f0
    fmuls f0, f23, f0
    fadds f0, f31, f0
    stfs f0, 0x44(r1)
    b lbl_800DF6D0
lbl_800DF654:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF6D0
    fadds f0, f19, f0
    fmuls f1, f16, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f19, f0
    fmuls f1, f17, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
    b lbl_800DF6D0
lbl_800DF694:
    lwz r3, 0x5b0(r23)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    bge lbl_800DF6D0
    fadds f0, f19, f0
    fmuls f1, f20, f0
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
    lfs f0, 0x38(r3)
    fadds f0, f19, f0
    fmuls f1, f22, f0
    lfs f0, 0x44(r1)
    fadds f0, f0, f1
    stfs f0, 0x44(r1)
lbl_800DF6D0:
    lwz r3, 0x5b0(r23)
    lfs f1, 0x38(r3)
    lfd f0, 0x1a0(r1)
    fmuls f1, f0, f1
    lfs f0, 0x48(r1)
    fadds f0, f0, f1
    stfs f0, 0x48(r1)
lbl_800DF6EC:
    add r4, r23, r20
    lwz r3, 0x448(r4)
    lfs f0, 0x40(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x448(r4)
    lfs f0, 0x44(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x448(r4)
    lfs f0, 0x48(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x448(r4)
    lfs f0, 0x4c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x448(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_8001B8B0
    add r3, r23, r20
    lwz r3, 0x448(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r28, r28, 0x1
    addi r21, r21, 0x30
    addi r20, r20, 0x4
    cmpwi r28, 0x3
    blt lbl_800DEE1C
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
    bl _restgpr_20
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
