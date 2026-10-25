#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80395728[];
extern float lbl_804A0760;

s32 _restgpr_24();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_24();
s32 _savegpr_26();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, s32 arg2);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_8010A3BC(s32 arg0, s32 arg1);
s32 fn_8010A3C4(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_8010A7D8(s32 arg0, s32 arg1, s32 arg2);
void fn_8010A9F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8010B4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8010BF6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8010A3BC(s32 arg0, s32 arg1) {
    fn_8010A3C4((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_8010A3C4(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x28), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x3D8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x3D8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x38)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC8)), (s32) ((s32) (var_r31 + 0x38)));
        M2C_FIELD(var_r31, s8 **, 0x158) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x15C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x160) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x164) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x168) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x16C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x170) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x174) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x178)), (s32) (M2C_FIELD(var_r31, s32 *, 0x15C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x160) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x208)), (s32) ((s32) (var_r31 + 0x178)));
        M2C_FIELD(var_r31, s8 **, 0x298) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x29C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x2A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x2A4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x2A8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x2AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2B0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x29C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x2A0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x310)), (s32) ((s32) (var_r31 + 0x2B0)));
        M2C_FIELD(var_r31, s8 **, 0x370) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x374) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x378) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x37C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x380) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x384) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x388) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x38C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x390) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x394) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x398) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x39C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x3A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x3A4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0x3A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0x3AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x3B0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x3B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0x3B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x3BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x3C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x3C4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x3C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x3CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x3D0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x3D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x28), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_8010A7D8((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_8010A7D8
asm M2C_UNK fn_8010A7D8(s32 arg0, s32 arg1, s32 arg2) {
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
    mr r28, r4
    mr r29, r5
    lfs f31, lbl_804A0760
    la r31, lbl_804A0760
    lfs f29, 0x4(r31)
    lwz r3, 0x3780(r4)
    lwz r30, 0x20(r3)
    stfs f31, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f29, 0x8c(r1)
    stfs f29, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f31, 0x78(r1)
    stfs f29, 0x7c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
    lfs f30, 0x10(r31)
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010A9F4
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010B4D8
    lfs f1, lbl_804A0760
    stfs f1, 0x80(r1)
    lfs f0, 0x8(r31)
    stfs f0, 0x84(r1)
    stfs f1, 0x88(r1)
    fmr f0, f29
    stfs f0, 0x8c(r1)
    stfs f0, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    lfs f0, 0xc(r31)
    fmuls f31, f0, f29
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
    mr r3, r28
    mr r4, r29
    mr r5, r30
    fmr f1, f30
    fmr f2, f31
    bl fn_8010BF6C
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

// asm_to_cpp: fn_8010A9F4
asm void fn_8010A9F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2c0
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
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0xa0
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x90
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0760
    lfs f0, 0x60(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0x160(r1)
    lfs f31, 0x58(r3)
    lfs f16, 0x4(r3)
    lfs f17, 0x24(r3)
    lfs f18, lbl_804A0760
    lfs f19, 0x28(r3)
    lfs f20, 0x2c(r3)
    lfs f21, 0x30(r3)
    lfs f22, 0x34(r3)
    lfs f23, 0x38(r3)
    lfs f24, 0x3c(r3)
    lfs f25, 0x40(r3)
    lfs f27, 0x48(r3)
    lfs f26, 0x44(r3)
    lfs f0, 0x4c(r3)
    stfd f0, 0x150(r1)
    lfs f28, 0x50(r3)
    lfs f29, 0x14(r3)
    lfs f30, 0x54(r3)
    lis r4, lbl_80395728@ha
    addi r31, r4, lbl_80395728@l
    lfs f15, 0x20(r3)
    lfs f0, 0x1c(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x18(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x68(r3)
    stfd f0, 0x170(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x168(r1)
lbl_8010ABE0:
    add r3, r26, r24
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_8010AC44
    add r4, r26, r25
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0xe0
    lwz r4, 0x1c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x38
    addi r4, r1, 0xe0
    bl fn_801734E4
    b lbl_8010AC8C
lbl_8010AC44:
    add r4, r26, r25
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0xe0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x2c(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x38
    addi r4, r1, 0xe0
    bl fn_801734E4
lbl_8010AC8C:
    addi r3, r1, 0xa0
    add r4, r26, r25
    addi r4, r4, 0x38
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x90
    add r4, r26, r25
    addi r4, r4, 0xc8
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    addi r4, r1, 0x90
    addi r5, r1, 0xa0
    bl fn_80018AFC
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x70
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x110
    addi r4, r1, 0xe0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x110
    addi r5, r1, 0x70
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x0
    beq lbl_8010AD24
    blt lbl_8010AD48
    cmpwi r30, 0x3
    bge lbl_8010AD48
    b lbl_8010AD38
lbl_8010AD24:
    addi r3, r1, 0xb0
    lwz r4, 0x38c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_8010AD48
lbl_8010AD38:
    addi r3, r1, 0xb0
    lwz r4, 0x38c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010AD48:
    lfs f1, 0xbc(r1)
    lfs f0, 0xec(r1)
    fsubs f0, f1, f0
    stfs f0, 0x20(r1)
    lfs f1, 0xcc(r1)
    lfs f0, 0xfc(r1)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xdc(r1)
    lfs f0, 0x10c(r1)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    stfs f18, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x110
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f18, 0x50(r1)
    stfs f18, 0x5c(r1)
    cmpwi r30, 0x1
    beq lbl_8010ADD4
    bge lbl_8010ADB8
    cmpwi r30, 0x0
    bge lbl_8010ADC4
    b lbl_8010ADEC
lbl_8010ADB8:
    cmpwi r30, 0x3
    bge lbl_8010ADEC
    b lbl_8010ADE4
lbl_8010ADC4:
    stfs f29, 0x58(r1)
    lfd f0, 0x140(r1)
    stfs f0, 0x54(r1)
    b lbl_8010ADEC
lbl_8010ADD4:
    stfs f18, 0x58(r1)
    lfd f0, 0x148(r1)
    stfs f0, 0x54(r1)
    b lbl_8010ADEC
lbl_8010ADE4:
    stfs f18, 0x58(r1)
    stfs f15, 0x54(r1)
lbl_8010ADEC:
    cmpwi r27, 0x84
    bge lbl_8010AE64
    cmpwi r27, 0x2e
    beq lbl_8010AEB4
    bge lbl_8010AE3C
    cmpwi r27, 0x12
    bge lbl_8010AE28
    cmpwi r27, 0x3
    bge lbl_8010AE1C
    cmpwi r27, 0x1
    bge lbl_8010AF94
    b lbl_8010B1B8
lbl_8010AE1C:
    cmpwi r27, 0x10
    bge lbl_8010AEB4
    b lbl_8010B1B8
lbl_8010AE28:
    cmpwi r27, 0x2c
    bge lbl_8010B1B8
    cmpwi r27, 0x2a
    bge lbl_8010AEB4
    b lbl_8010B1B8
lbl_8010AE3C:
    cmpwi r27, 0x66
    bge lbl_8010AE58
    cmpwi r27, 0x34
    bge lbl_8010B1B8
    cmpwi r27, 0x32
    bge lbl_8010B060
    b lbl_8010B1B8
lbl_8010AE58:
    cmpwi r27, 0x6b
    bge lbl_8010B1B8
    b lbl_8010AEB4
lbl_8010AE64:
    cmpwi r27, 0xff
    beq lbl_8010B100
    bge lbl_8010AE9C
    cmpwi r27, 0x8a
    beq lbl_8010B1B8
    bge lbl_8010AE90
    cmpwi r27, 0x88
    bge lbl_8010AEB4
    cmpwi r27, 0x86
    bge lbl_8010B1B8
    b lbl_8010AEB4
lbl_8010AE90:
    cmpwi r27, 0x8c
    bge lbl_8010B1B8
    b lbl_8010AEB4
lbl_8010AE9C:
    cmpwi r27, 0x23b
    beq lbl_8010AEB4
    bge lbl_8010B1B8
    cmpwi r27, 0x1b1
    beq lbl_8010AF1C
    b lbl_8010B1B8
lbl_8010AEB4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010AEC8
    stfs f16, 0x30(r1)
lbl_8010AEC8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_8010AEDC
    stfs f17, 0x34(r1)
lbl_8010AEDC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010AEF0
    stfs f18, 0x34(r1)
lbl_8010AEF0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_8010AF04
    stfs f19, 0x38(r1)
lbl_8010AF04:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010B250
    stfs f18, 0x38(r1)
    b lbl_8010B250
lbl_8010AF1C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010AF30
    stfs f16, 0x30(r1)
lbl_8010AF30:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_8010AF44
    stfs f20, 0x34(r1)
lbl_8010AF44:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_8010AF58
    stfs f21, 0x34(r1)
lbl_8010AF58:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_8010AF6C
    stfs f22, 0x38(r1)
lbl_8010AF6C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_8010AF80
    stfs f23, 0x38(r1)
lbl_8010AF80:
    stfs f18, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f15, 0x48(r1)
    stfs f18, 0x4c(r1)
    b lbl_8010B250
lbl_8010AF94:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010AFA8
    stfs f16, 0x30(r1)
lbl_8010AFA8:
    cmpwi r30, 0x0
    bne lbl_8010B00C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010AFC4
    stfs f24, 0x34(r1)
lbl_8010AFC4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_8010AFD8
    stfs f25, 0x34(r1)
lbl_8010AFD8:
    cmpwi r27, 0x2
    bne lbl_8010B034
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_8010AFF4
    stfs f17, 0x34(r1)
lbl_8010AFF4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_8010B034
    stfs f26, 0x34(r1)
    b lbl_8010B034
lbl_8010B00C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_8010B020
    stfs f27, 0x34(r1)
lbl_8010B020:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_8010B034
    stfs f27, 0x34(r1)
lbl_8010B034:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_8010B048
    stfs f25, 0x38(r1)
lbl_8010B048:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_8010B250
    stfs f15, 0x38(r1)
    b lbl_8010B250
lbl_8010B060:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010B074
    stfs f16, 0x30(r1)
lbl_8010B074:
    cmpwi r30, 0x0
    bne lbl_8010B0AC
    lfs f1, 0x34(r1)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8010B094
    stfs f0, 0x34(r1)
lbl_8010B094:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_8010B0D4
    stfs f27, 0x34(r1)
    b lbl_8010B0D4
lbl_8010B0AC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_8010B0C0
    stfs f17, 0x34(r1)
lbl_8010B0C0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010B0D4
    stfs f27, 0x34(r1)
lbl_8010B0D4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_8010B0E8
    stfs f19, 0x38(r1)
lbl_8010B0E8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_8010B250
    stfs f15, 0x38(r1)
    b lbl_8010B250
lbl_8010B100:
    lwz r0, 0x4(r31)
    cmplwi r0, 0xe
    beq lbl_8010B1A8
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010B120
    stfs f16, 0x30(r1)
lbl_8010B120:
    cmpwi r30, 0x0
    bne lbl_8010B154
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010B13C
    stfs f24, 0x34(r1)
lbl_8010B13C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_8010B17C
    stfs f19, 0x34(r1)
    b lbl_8010B17C
lbl_8010B154:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8010B168
    stfs f28, 0x34(r1)
lbl_8010B168:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010B17C
    stfs f29, 0x34(r1)
lbl_8010B17C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_8010B190
    stfs f30, 0x38(r1)
lbl_8010B190:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010B250
    stfs f29, 0x38(r1)
    b lbl_8010B250
lbl_8010B1A8:
    stfs f16, 0x30(r1)
    stfs f18, 0x34(r1)
    stfs f18, 0x38(r1)
    b lbl_8010B250
lbl_8010B1B8:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010B1CC
    stfs f16, 0x30(r1)
lbl_8010B1CC:
    cmpwi r30, 0x0
    bne lbl_8010B200
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010B1E8
    stfs f24, 0x34(r1)
lbl_8010B1E8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_8010B228
    stfs f19, 0x34(r1)
    b lbl_8010B228
lbl_8010B200:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8010B214
    stfs f28, 0x34(r1)
lbl_8010B214:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010B228
    stfs f29, 0x34(r1)
lbl_8010B228:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_8010B23C
    stfs f30, 0x38(r1)
lbl_8010B23C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010B250
    stfs f29, 0x38(r1)
lbl_8010B250:
    lfs f2, 0x34(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x54(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_8010B270
    fadds f0, f2, f0
    stfs f0, 0x34(r1)
lbl_8010B270:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x58(r1)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_8010B290
    fadds f0, f2, f0
    stfs f0, 0x38(r1)
lbl_8010B290:
    cmpwi r30, 0x0
    bne lbl_8010B304
    lwz r3, 0x370(r26)
    lfs f1, 0x3c(r3)
    fcmpo cr0, f1, f31
    ble lbl_8010B2D4
    cmpwi r27, 0xf2
    beq lbl_8010B2D4
    cmpwi r27, 0xf1
    beq lbl_8010B2D4
    lfd f0, 0x158(r1)
    fsubs f1, f1, f0
    lfd f0, 0x160(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
lbl_8010B2D4:
    cmpwi r27, 0x23b
    beq lbl_8010B334
    lwz r3, 0x370(r26)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f24
    bge lbl_8010B334
    lfd f0, 0x168(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    b lbl_8010B334
lbl_8010B304:
    cmpwi r30, 0x1
    bne lbl_8010B334
    lwz r3, 0x370(r26)
    lfs f0, 0x3c(r3)
    fcmpo cr0, f0, f31
    ble lbl_8010B334
    fsubs f1, f0, f31
    lfd f0, 0x170(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
lbl_8010B334:
    add r4, r26, r24
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
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_8010ABE0
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

// asm_to_cpp: fn_8010B4D8
asm void fn_8010B4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r30, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_804A0760
    lfs f0, 0x60(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x5c(r3)
    stfd f0, 0x148(r1)
    lfs f31, 0x6c(r3)
    lfs f15, 0x4(r3)
    lfs f16, 0x24(r3)
    lfs f17, lbl_804A0760
    lfs f18, 0x20(r3)
    lfs f19, 0x2c(r3)
    lfs f20, 0x30(r3)
    lfs f21, 0x34(r3)
    lfs f23, 0x3c(r3)
    lfs f25, 0x48(r3)
    lfs f24, 0x40(r3)
    lfs f26, 0x4c(r3)
    lfs f27, 0x28(r3)
    lfs f28, 0x50(r3)
    lfs f29, 0x14(r3)
    lfs f30, 0x54(r3)
    lis r4, lbl_80395728@ha
    addi r31, r4, lbl_80395728@l
    lfs f0, 0x1c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x18(r3)
    stfd f0, 0x130(r1)
    lfs f22, 0x38(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x68(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0x64(r3)
    stfd f0, 0x150(r1)
lbl_8010B6C4:
    add r3, r26, r24
    lwz r3, 0x160(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r30, 0x0
    bne lbl_8010B728
    add r4, r26, r25
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x15c(r26)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x178
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_8010B770
lbl_8010B728:
    add r4, r26, r25
    addi r3, r4, 0x208
    addi r4, r4, 0x178
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r30, 0x1
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r4, 0x16c(r4)
    addi r4, r4, 0x224
    add r5, r26, r24
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r26, r25
    addi r3, r3, 0x178
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_8010B770:
    addi r3, r1, 0x90
    add r4, r26, r25
    addi r4, r4, 0x178
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r26, r25
    addi r4, r4, 0x208
    mr r5, r29
    bl fn_80018AF8
    addi r3, r1, 0x70
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x60
    mr r4, r3
    mr r5, r28
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x60
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r30, 0x0
    beq lbl_8010B808
    blt lbl_8010B82C
    cmpwi r30, 0x3
    bge lbl_8010B82C
    b lbl_8010B81C
lbl_8010B808:
    addi r3, r1, 0xa0
    lwz r4, 0x38c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_8010B82C
lbl_8010B81C:
    addi r3, r1, 0xa0
    lwz r4, 0x38c(r26)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_8010B82C:
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
    stfs f17, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f17, 0x40(r1)
    stfs f17, 0x4c(r1)
    cmpwi r30, 0x1
    beq lbl_8010B8B8
    bge lbl_8010B89C
    cmpwi r30, 0x0
    bge lbl_8010B8A8
    b lbl_8010B8D0
lbl_8010B89C:
    cmpwi r30, 0x3
    bge lbl_8010B8D0
    b lbl_8010B8C8
lbl_8010B8A8:
    stfs f29, 0x48(r1)
    lfd f0, 0x130(r1)
    stfs f0, 0x44(r1)
    b lbl_8010B8D0
lbl_8010B8B8:
    stfs f17, 0x48(r1)
    lfd f0, 0x138(r1)
    stfs f0, 0x44(r1)
    b lbl_8010B8D0
lbl_8010B8C8:
    stfs f17, 0x48(r1)
    stfs f18, 0x44(r1)
lbl_8010B8D0:
    cmpwi r27, 0x84
    bge lbl_8010B948
    cmpwi r27, 0x2e
    beq lbl_8010B998
    bge lbl_8010B920
    cmpwi r27, 0x12
    bge lbl_8010B90C
    cmpwi r27, 0x3
    bge lbl_8010B900
    cmpwi r27, 0x1
    bge lbl_8010BA68
    b lbl_8010BC58
lbl_8010B900:
    cmpwi r27, 0x10
    bge lbl_8010B998
    b lbl_8010BC58
lbl_8010B90C:
    cmpwi r27, 0x2c
    bge lbl_8010BC58
    cmpwi r27, 0x2a
    bge lbl_8010B998
    b lbl_8010BC58
lbl_8010B920:
    cmpwi r27, 0x66
    bge lbl_8010B93C
    cmpwi r27, 0x34
    bge lbl_8010BC58
    cmpwi r27, 0x32
    bge lbl_8010BB04
    b lbl_8010BC58
lbl_8010B93C:
    cmpwi r27, 0x6b
    bge lbl_8010BC58
    b lbl_8010B998
lbl_8010B948:
    cmpwi r27, 0xff
    beq lbl_8010BBA0
    bge lbl_8010B980
    cmpwi r27, 0x8a
    beq lbl_8010BC58
    bge lbl_8010B974
    cmpwi r27, 0x88
    bge lbl_8010B998
    cmpwi r27, 0x86
    bge lbl_8010BC58
    b lbl_8010B998
lbl_8010B974:
    cmpwi r27, 0x8c
    bge lbl_8010BC58
    b lbl_8010B998
lbl_8010B980:
    cmpwi r27, 0x23b
    beq lbl_8010B998
    bge lbl_8010BC58
    cmpwi r27, 0x1b1
    beq lbl_8010BA00
    b lbl_8010BC58
lbl_8010B998:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010B9AC
    stfs f15, 0x30(r1)
lbl_8010B9AC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010B9C0
    stfs f16, 0x34(r1)
lbl_8010B9C0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_8010B9D4
    stfs f17, 0x34(r1)
lbl_8010B9D4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_8010B9E8
    stfs f18, 0x38(r1)
lbl_8010B9E8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f29, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BA00:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010BA14
    stfs f15, 0x30(r1)
lbl_8010BA14:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_8010BA28
    stfs f19, 0x34(r1)
lbl_8010BA28:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_8010BA3C
    stfs f20, 0x34(r1)
lbl_8010BA3C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_8010BA50
    stfs f21, 0x38(r1)
lbl_8010BA50:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f22, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BA68:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010BA7C
    stfs f15, 0x30(r1)
lbl_8010BA7C:
    cmpwi r30, 0x0
    bne lbl_8010BAB0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_8010BA98
    stfs f23, 0x34(r1)
lbl_8010BA98:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_8010BAD8
    stfs f24, 0x34(r1)
    b lbl_8010BAD8
lbl_8010BAB0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_8010BAC4
    stfs f25, 0x34(r1)
lbl_8010BAC4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_8010BAD8
    stfs f25, 0x34(r1)
lbl_8010BAD8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_8010BAEC
    stfs f24, 0x38(r1)
lbl_8010BAEC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f18, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BB04:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010BB18
    stfs f15, 0x30(r1)
lbl_8010BB18:
    cmpwi r30, 0x0
    bne lbl_8010BB4C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_8010BB34
    stfs f26, 0x34(r1)
lbl_8010BB34:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_8010BB74
    stfs f25, 0x34(r1)
    b lbl_8010BB74
lbl_8010BB4C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_8010BB60
    stfs f16, 0x34(r1)
lbl_8010BB60:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C411382
    bne lbl_8010BB74
    stfs f25, 0x34(r1)
lbl_8010BB74:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_8010BB88
    stfs f27, 0x38(r1)
lbl_8010BB88:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f18, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BBA0:
    lwz r0, 0x4(r31)
    cmplwi r0, 0xe
    beq lbl_8010BC48
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010BBC0
    stfs f15, 0x30(r1)
lbl_8010BBC0:
    cmpwi r30, 0x0
    bne lbl_8010BBF4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_8010BBDC
    stfs f23, 0x34(r1)
lbl_8010BBDC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_8010BC1C
    stfs f27, 0x34(r1)
    b lbl_8010BC1C
lbl_8010BBF4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8010BC08
    stfs f28, 0x34(r1)
lbl_8010BC08:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010BC1C
    stfs f29, 0x34(r1)
lbl_8010BC1C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_8010BC30
    stfs f30, 0x38(r1)
lbl_8010BC30:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f29, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BC48:
    stfs f15, 0x30(r1)
    stfs f17, 0x34(r1)
    stfs f17, 0x38(r1)
    b lbl_8010BCF0
lbl_8010BC58:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    opword 0x4C401382
    bne lbl_8010BC6C
    stfs f15, 0x30(r1)
lbl_8010BC6C:
    cmpwi r30, 0x0
    bne lbl_8010BCA0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_8010BC88
    stfs f23, 0x34(r1)
lbl_8010BC88:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_8010BCC8
    stfs f18, 0x34(r1)
    b lbl_8010BCC8
lbl_8010BCA0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_8010BCB4
    stfs f28, 0x34(r1)
lbl_8010BCB4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010BCC8
    stfs f29, 0x34(r1)
lbl_8010BCC8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_8010BCDC
    stfs f30, 0x38(r1)
lbl_8010BCDC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_8010BCF0
    stfs f29, 0x38(r1)
lbl_8010BCF0:
    lfs f2, 0x34(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x44(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_8010BD10
    fadds f0, f2, f0
    stfs f0, 0x34(r1)
lbl_8010BD10:
    lfs f2, 0x38(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x48(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_8010BD30
    fadds f0, f2, f0
    stfs f0, 0x38(r1)
lbl_8010BD30:
    cmpwi r30, 0x0
    bne lbl_8010BD94
    lwz r3, 0x370(r26)
    lfs f1, 0x3c(r3)
    fcmpo cr0, f1, f31
    bge lbl_8010BD64
    lfd f0, 0x140(r1)
    fadds f1, f0, f1
    lfd f0, 0x148(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
lbl_8010BD64:
    cmpwi r27, 0x23b
    beq lbl_8010BDC8
    lwz r3, 0x370(r26)
    lfs f1, 0x34(r3)
    fcmpo cr0, f1, f23
    bge lbl_8010BDC8
    lfd f0, 0x150(r1)
    fmuls f1, f0, f1
    lfs f0, 0x34(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    b lbl_8010BDC8
lbl_8010BD94:
    cmpwi r30, 0x1
    bne lbl_8010BDC8
    lwz r3, 0x370(r26)
    lfs f1, 0x3c(r3)
    fcmpo cr0, f1, f31
    bge lbl_8010BDC8
    lfd f0, 0x158(r1)
    fadds f1, f0, f1
    lfd f0, 0x160(r1)
    fmuls f1, f0, f1
    lfs f0, 0x38(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
lbl_8010BDC8:
    add r4, r26, r24
    lwz r3, 0x160(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x160(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x160(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r26, r24
    lwz r3, 0x160(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r30, r30, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r30, 0x3
    blt lbl_8010B6C4
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

// asm_to_cpp: fn_8010BF6C
asm void fn_8010BF6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    mr r26, r5
    mr r29, r6
    mr r30, r7
    fmr f26, f1
    fmr f27, f2
    addi r3, r1, 0x60
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    lwz r3, 0x37c(r28)
    lfs f1, 0x34(r3)
    la r3, lbl_804A0760
    lfs f0, 0x20(r3)
    fcmpo cr0, f1, f0
    blt lbl_8010C084
    cmpwi r26, 0xf9
    bne lbl_8010C114
lbl_8010C084:
    li r31, 0x0
    li r26, 0x0
    li r27, 0x0
    la r3, lbl_804A0760
    lfs f29, 0x4(r3)
    lfs f28, lbl_804A0760
lbl_8010C09C:
    add r4, r28, r26
    addi r3, r4, 0x310
    addi r4, r4, 0x2b0
    bl fn_801734E4
    add r3, r28, r26
    addi r3, r3, 0x2b0
    add r4, r28, r27
    lwz r4, 0x2a8(r4)
    addi r4, r4, 0x224
    bl fn_801734E4
    add r4, r28, r27
    lwz r3, 0x2a0(r4)
    stfs f29, 0x30(r3)
    lwz r3, 0x2a0(r4)
    stfs f28, 0x34(r3)
    lwz r3, 0x2a0(r4)
    stfs f28, 0x38(r3)
    lwz r3, 0x2a0(r4)
    stfs f28, 0x3c(r3)
    lwz r3, 0x2a0(r4)
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r27, r27, 0x4
    cmpwi r31, 0x2
    blt lbl_8010C09C
    li r3, 0x1
    b lbl_8010C2E8
lbl_8010C114:
    li r31, 0x0
    li r27, 0x0
    li r26, 0x0
    lfs f30, 0x8(r3)
    lfs f31, 0x78(r3)
    lfs f28, 0x70(r3)
    lfs f29, 0x74(r3)
lbl_8010C130:
    add r3, r28, r26
    lwz r3, 0x2a0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_804A0760
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_8010C194
    add r4, r28, r27
    addi r3, r4, 0x310
    addi r4, r4, 0x2b0
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x29c(r28)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x2b0
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_8010C1DC
lbl_8010C194:
    add r4, r28, r27
    addi r3, r4, 0x310
    addi r4, r4, 0x2b0
    bl fn_801734E4
    addi r3, r1, 0x70
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x2a8(r4)
    addi r4, r4, 0x224
    add r5, r28, r26
    lwz r5, 0x2a0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r28, r27
    addi r3, r3, 0x2b0
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_8010C1DC:
    addi r3, r1, 0x60
    add r4, r28, r27
    addi r4, r4, 0x2b0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r28, r27
    addi r4, r4, 0x310
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_80018AFC
    addi r3, r1, 0x30
    addi r4, r1, 0x40
    fmr f1, f26
    bl fn_800515DC
    addi r3, r1, 0x30
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x30
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x0
    bne lbl_8010C2D0
    lwz r3, 0x37c(r28)
    lfs f0, 0x34(r3)
    fmuls f0, f30, f0
    fadds f0, f28, f0
    fmuls f0, f0, f27
    add r4, r28, r26
    lwz r3, 0x2a0(r4)
    stfs f0, 0x34(r3)
    lwz r3, 0x37c(r28)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_8010C2A8
    fmuls f0, f30, f0
    fadds f0, f31, f0
    fmuls f0, f0, f27
    lwz r3, 0x2a0(r4)
    stfs f0, 0x34(r3)
lbl_8010C2A8:
    add r3, r28, r26
    lwz r3, 0x2a0(r3)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r28, r26
    lwz r3, 0x2a0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
lbl_8010C2D0:
    addi r31, r31, 0x1
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    cmpwi r31, 0x2
    blt lbl_8010C130
    li r3, 0x1
lbl_8010C2E8:
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

} // extern "C"
