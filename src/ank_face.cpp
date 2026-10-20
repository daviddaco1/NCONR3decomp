#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern float lbl_8049F6A0;

s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_24();
s32 _savegpr_25();
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
s32 fn_80061FB8(f32 farg0, s32 arg1);
void fn_800AF334(s32 arg0, s32 arg1);
s32 fn_800AF33C(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800AFA20(s32 arg0, s32 arg1, s32 arg2);
void fn_800AFDA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B0350(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B1278(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B2040(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B2EA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B3DD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800B4BA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800AF334(s32 arg0, s32 arg1) {
    fn_800AF33C((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800AF33C(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x2E), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0xB88), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0xB88));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x34) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x38)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC8)), (s32) ((s32) (var_r31 + 0x38)));
        M2C_FIELD(var_r31, s8 **, 0x158) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x15C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x160) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s8 **, 0x164) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s8 **, 0x168) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s8 **, 0x16C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB2)));
        M2C_FIELD(var_r31, s32 *, 0x170) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAF)));
        M2C_FIELD(var_r31, s32 *, 0x174) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB0)));
        M2C_FIELD(var_r31, s32 *, 0x178) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB1)));
        M2C_FIELD(var_r31, s32 *, 0x17C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x180)), (s32) (M2C_FIELD(var_r31, s32 *, 0x15C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x160) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x240)), (s32) ((s32) (var_r31 + 0x180)));
        M2C_FIELD(var_r31, s8 **, 0x300) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x304) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x308) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s8 **, 0x30C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s8 **, 0x310) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s8 **, 0x314) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB6)));
        M2C_FIELD(var_r31, s32 *, 0x318) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB3)));
        M2C_FIELD(var_r31, s32 *, 0x31C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB4)));
        M2C_FIELD(var_r31, s32 *, 0x320) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB5)));
        M2C_FIELD(var_r31, s32 *, 0x324) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x328)), (s32) (M2C_FIELD(var_r31, s32 *, 0x304) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x308) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3E8)), (s32) ((s32) (var_r31 + 0x328)));
        M2C_FIELD(var_r31, s8 **, 0x4A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x4AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x4B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s8 **, 0x4B4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s8 **, 0x4B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s8 **, 0x4BC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xBA)));
        M2C_FIELD(var_r31, s32 *, 0x4C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB7)));
        M2C_FIELD(var_r31, s32 *, 0x4C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB8)));
        M2C_FIELD(var_r31, s32 *, 0x4C8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xB9)));
        M2C_FIELD(var_r31, s32 *, 0x4CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xBA)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4D0)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4AC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4B0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x590)), (s32) ((s32) (var_r31 + 0x4D0)));
        M2C_FIELD(var_r31, s8 **, 0x650) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x654) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x658) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x65C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x660) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x664) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x668) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x66C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x670) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x674) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x678)), (s32) (M2C_FIELD(var_r31, s32 *, 0x654) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x658) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x738)), (s32) ((s32) (var_r31 + 0x678)));
        M2C_FIELD(var_r31, s8 **, 0x7F8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x7FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x800) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x804) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x808) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s8 **, 0x80C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x810) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x814) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x818) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x81C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x820)), (s32) (M2C_FIELD(var_r31, s32 *, 0x7FC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x800) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x8E0)), (s32) ((s32) (var_r31 + 0x820)));
        M2C_FIELD(var_r31, s8 **, 0x9A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x9A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x9A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s8 **, 0x9AC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x9B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s8 **, 0x9B4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x9B8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x9BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x9C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x9C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x9C8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x9A4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x9A8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xA88)), (s32) ((s32) (var_r31 + 0x9C8)));
        M2C_FIELD(var_r31, s8 **, 0xB48) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xB4C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xB50) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0xB54) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0xB58) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0xB5C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0xB60) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0xB64) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0xB68) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xB6C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0xB70) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0xB74) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0xB78) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0xB7C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0xB80) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0xB84) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x2E), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800AFA20((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

// asm_to_cpp: fn_800AFA20
asm M2C_UNK fn_800AFA20(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x140
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
    mr r29, r4
    mr r30, r5
    lfs f31, lbl_8049F6A0
    lwz r3, 0x3780(r4)
    lwz r31, 0x20(r3)
    stfs f31, 0x100(r1)
    la r28, lbl_8049F6A0
    lfs f0, 0x4(r28)
    stfs f0, 0x104(r1)
    stfs f31, 0x108(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x10c(r1)
    stfs f0, 0xf0(r1)
    stfs f31, 0xf4(r1)
    stfs f31, 0xf8(r1)
    stfs f0, 0xfc(r1)
    lfs f31, 0xc(r28)
    lfs f30, 0x10(r28)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0xd8(r1)
    stw r0, 0xdc(r1)
    addi r7, r1, 0xd0
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xe8(r1)
    stw r0, 0xec(r1)
    addi r6, r1, 0xe0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800AFDA0
    lfs f1, lbl_8049F6A0
    stfs f1, 0x100(r1)
    lfs f0, 0x4(r28)
    stfs f0, 0x104(r1)
    stfs f1, 0x108(r1)
    lfs f0, 0x8(r28)
    stfs f0, 0x10c(r1)
    stfs f0, 0xf0(r1)
    stfs f1, 0xf4(r1)
    stfs f1, 0xf8(r1)
    stfs f0, 0xfc(r1)
    lfs f31, 0x14(r28)
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0xb8(r1)
    stw r0, 0xbc(r1)
    addi r7, r1, 0xb0
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xc0(r1)
    stw r0, 0xc4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    addi r6, r1, 0xc0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B0350
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    addi r7, r1, 0x90
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0xa0(r1)
    stw r0, 0xa4(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    addi r6, r1, 0xa0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B1278
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    addi r7, r1, 0x70
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    addi r6, r1, 0x80
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B2040
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    addi r7, r1, 0x50
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
    addi r6, r1, 0x60
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B2EA4
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    addi r7, r1, 0x30
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    addi r6, r1, 0x40
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B3DD8
    lwz r3, 0xf0(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r3, 0xf8(r1)
    lwz r0, 0xfc(r1)
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    addi r7, r1, 0x10
    lwz r3, 0x100(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    lwz r3, 0x108(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    addi r6, r1, 0x20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    fmr f1, f30
    fmr f2, f31
    bl fn_800B4BA8
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

// asm_to_cpp: fn_800AFDA0
asm void fn_800AFDA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x1d0
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
    subi r11, r12, 0xe0
    bl _savegpr_25
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f18, f1
    fmr f19, f2
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x40
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x20
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r26, 0x0
    li r25, 0x0
    la r3, lbl_8049F6A0
    lfs f20, 0x8(r3)
    lfs f21, 0x18(r3)
    lfs f22, lbl_8049F6A0
    lfs f23, 0x1c(r3)
    lfs f24, 0x20(r3)
    lfs f25, 0x24(r3)
    lfs f26, 0x28(r3)
    lfs f28, 0x30(r3)
    lfs f29, 0x34(r3)
    lfs f30, 0x38(r3)
    lfs f31, 0x14(r3)
    lfs f27, 0x2c(r3)
lbl_800AFF18:
    add r3, r27, r25
    lwz r3, 0x20(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800AFF7C
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x1c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
    b lbl_800AFFB8
lbl_800AFF7C:
    add r4, r27, r26
    addi r3, r4, 0xc8
    addi r4, r4, 0x38
    bl fn_801734E4
    addi r3, r1, 0x70
    lwz r4, 0x2c(r27)
    addi r4, r4, 0x224
    add r5, r27, r25
    lwz r5, 0x20(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r26
    addi r3, r3, 0x38
    addi r4, r1, 0x70
    bl fn_801734E4
lbl_800AFFB8:
    addi r3, r1, 0x60
    add r4, r27, r26
    addi r4, r4, 0x38
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x50
    add r4, r27, r26
    addi r4, r4, 0xc8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x30
    addi r4, r1, 0x50
    addi r5, r1, 0x60
    bl fn_80018AFC
    addi r3, r1, 0x20
    addi r4, r1, 0x30
    fmr f1, f18
    bl fn_800515DC
    addi r3, r1, 0x20
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0xa0
    addi r4, r1, 0x70
    bl fn_80173754
    addi r3, r1, 0x10
    addi r4, r1, 0xa0
    addi r5, r1, 0x20
    bl fn_80018B04
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_800515D8
    cmpwi r28, 0x6b
    bge lbl_800B0080
    cmpwi r28, 0x2c
    bge lbl_800B0068
    cmpwi r28, 0x12
    bge lbl_800B005C
    cmpwi r28, 0x10
    bge lbl_800B00B4
    b lbl_800B011C
lbl_800B005C:
    cmpwi r28, 0x2a
    bge lbl_800B00B4
    b lbl_800B011C
lbl_800B0068:
    cmpwi r28, 0x2e
    beq lbl_800B00B4
    blt lbl_800B011C
    cmpwi r28, 0x66
    bge lbl_800B00B4
    b lbl_800B011C
lbl_800B0080:
    cmpwi r28, 0x8a
    beq lbl_800B011C
    bge lbl_800B00AC
    cmpwi r28, 0x86
    bge lbl_800B00A0
    cmpwi r28, 0x84
    bge lbl_800B00B4
    b lbl_800B011C
lbl_800B00A0:
    cmpwi r28, 0x88
    bge lbl_800B00B4
    b lbl_800B011C
lbl_800B00AC:
    cmpwi r28, 0x8c
    bge lbl_800B011C
lbl_800B00B4:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B00C8
    stfs f20, 0x10(r1)
lbl_800B00C8:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B00DC
    stfs f21, 0x14(r1)
lbl_800B00DC:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B00F0
    stfs f22, 0x14(r1)
lbl_800B00F0:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800B0104
    stfs f23, 0x18(r1)
lbl_800B0104:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B01DC
    stfs f22, 0x18(r1)
    b lbl_800B01DC
lbl_800B011C:
    lfs f0, 0x10(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0130
    stfs f20, 0x10(r1)
lbl_800B0130:
    cmpwi r31, 0x0
    bne lbl_800B018C
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B014C
    stfs f24, 0x14(r1)
lbl_800B014C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B0160
    stfs f25, 0x14(r1)
lbl_800B0160:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B0174
    stfs f26, 0x18(r1)
lbl_800B0174:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B01DC
    stfs f27, 0x18(r1)
    b lbl_800B01DC
lbl_800B018C:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B01A0
    stfs f28, 0x14(r1)
lbl_800B01A0:
    lfs f0, 0x14(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B01B4
    stfs f29, 0x14(r1)
lbl_800B01B4:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800B01C8
    stfs f30, 0x18(r1)
lbl_800B01C8:
    lfs f0, 0x18(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800B01DC
    stfs f31, 0x18(r1)
lbl_800B01DC:
    add r4, r27, r25
    lwz r3, 0x20(r4)
    lfs f0, 0x10(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x14(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x18(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x20(r4)
    lfs f0, 0x1c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f19, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x20(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r25
    lwz r3, 0x20(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    addi r25, r25, 0x4
    cmpwi r31, 0x3
    blt lbl_800AFF18
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
    subi r11, r10, 0xe0
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800B0350
asm void fn_800B0350(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f15, 0x8(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x30(r3)
    lfs f18, 0x3c(r3)
    lfs f19, 0x40(r3)
    lfs f20, 0x44(r3)
    lfs f0, 0x48(r3)
    stfd f0, 0x130(r1)
    lfs f21, lbl_8049F6A0
    lfs f23, 0x2c(r3)
    lfs f22, 0x4c(r3)
    lfs f0, 0x50(r3)
    stfd f0, 0x138(r1)
    lfs f24, 0x20(r3)
    lfs f25, 0x54(r3)
    lfs f26, 0x14(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x140(r1)
    lfs f27, 0x24(r3)
    lfs f28, 0x28(r3)
    lfs f29, 0x60(r3)
    lfs f0, 0x5c(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x34(r3)
    stfd f0, 0x150(r1)
    lfs f30, 0x64(r3)
    lfs f31, 0x68(r3)
    lfs f0, 0x70(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0x6c(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x168(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x170(r1)
    lfs f0, 0x38(r3)
    stfd f0, 0x178(r1)
lbl_800B0550:
    add r3, r27, r24
    lwz r3, 0x160(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B05B4
    add r4, r27, r25
    addi r3, r4, 0x240
    addi r4, r4, 0x180
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x15c(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x180
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B05FC
lbl_800B05B4:
    add r4, r27, r25
    addi r3, r4, 0x240
    addi r4, r4, 0x180
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x170(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x160(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x180
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B05FC:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x180
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x240
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B06A4
    cmpwi r31, 0x0
    bge lbl_800B0690
    b lbl_800B06A4
lbl_800B0690:
    addi r3, r1, 0xa0
    lwz r4, 0xb5c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B06B4
lbl_800B06A4:
    addi r3, r1, 0xa0
    lwz r4, 0xb60(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B06B4:
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
    stfs f21, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f21, 0x40(r1)
    stfs f21, 0x4c(r1)
    stfs f21, 0x48(r1)
    stfs f27, 0x44(r1)
    cmpwi r28, 0x8a
    beq lbl_800B0D3C
    bge lbl_800B0798
    cmpwi r28, 0x2e
    beq lbl_800B07FC
    bge lbl_800B0768
    cmpwi r28, 0x12
    bge lbl_800B0754
    cmpwi r28, 0x3
    bge lbl_800B0748
    cmpwi r28, 0x1
    bge lbl_800B0864
    b lbl_800B0D3C
lbl_800B0748:
    cmpwi r28, 0x10
    bge lbl_800B07FC
    b lbl_800B0D3C
lbl_800B0754:
    cmpwi r28, 0x2c
    bge lbl_800B0D3C
    cmpwi r28, 0x2a
    bge lbl_800B07FC
    b lbl_800B0D3C
lbl_800B0768:
    cmpwi r28, 0x84
    bge lbl_800B0784
    cmpwi r28, 0x6b
    bge lbl_800B0D3C
    cmpwi r28, 0x66
    bge lbl_800B07FC
    b lbl_800B0D3C
lbl_800B0784:
    cmpwi r28, 0x88
    bge lbl_800B07FC
    cmpwi r28, 0x86
    bge lbl_800B0D3C
    b lbl_800B07FC
lbl_800B0798:
    cmpwi r28, 0x1b5
    beq lbl_800B0D3C
    bge lbl_800B07D4
    cmpwi r28, 0x160
    beq lbl_800B0830
    bge lbl_800B07C8
    cmpwi r28, 0x92
    beq lbl_800B0A4C
    bge lbl_800B0D3C
    cmpwi r28, 0x8c
    bge lbl_800B0D3C
    b lbl_800B07FC
lbl_800B07C8:
    cmpwi r28, 0x1b4
    bge lbl_800B07FC
    b lbl_800B0D3C
lbl_800B07D4:
    cmpwi r28, 0x1e6
    bge lbl_800B07F0
    cmpwi r28, 0x1e3
    bge lbl_800B0988
    cmpwi r28, 0x1b7
    bge lbl_800B0D3C
    b lbl_800B07FC
lbl_800B07F0:
    cmpwi r28, 0x1e8
    beq lbl_800B0988
    b lbl_800B0D3C
lbl_800B07FC:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    bge lbl_800B080C
    stfs f15, 0x30(r1)
lbl_800B080C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B081C
    stfs f16, 0x34(r1)
lbl_800B081C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    ble lbl_800B0E00
    stfs f18, 0x34(r1)
    b lbl_800B0E00
lbl_800B0830:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    bge lbl_800B0840
    stfs f15, 0x30(r1)
lbl_800B0840:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B0850
    stfs f17, 0x34(r1)
lbl_800B0850:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    ble lbl_800B0E00
    stfs f27, 0x34(r1)
    b lbl_800B0E00
lbl_800B0864:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B0878
    stfs f18, 0x30(r1)
lbl_800B0878:
    cmpwi r31, 0x0
    bne lbl_800B08D4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B0894
    stfs f16, 0x34(r1)
lbl_800B0894:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B08A8
    stfs f18, 0x34(r1)
lbl_800B08A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B08BC
    stfs f19, 0x38(r1)
lbl_800B08BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f19, 0x38(r1)
    b lbl_800B0E00
lbl_800B08D4:
    cmpwi r31, 0x1
    bne lbl_800B0930
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B08F0
    stfs f16, 0x34(r1)
lbl_800B08F0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B0904
    stfs f18, 0x34(r1)
lbl_800B0904:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0918
    stfs f20, 0x38(r1)
lbl_800B0918:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f26, 0x38(r1)
    b lbl_800B0E00
lbl_800B0930:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B0944
    stfs f16, 0x34(r1)
lbl_800B0944:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B0958
    stfs f16, 0x34(r1)
lbl_800B0958:
    lfs f1, 0x38(r1)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B0970
    stfs f0, 0x38(r1)
lbl_800B0970:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f27, 0x38(r1)
    b lbl_800B0E00
lbl_800B0988:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B099C
    stfs f18, 0x30(r1)
lbl_800B099C:
    cmpwi r31, 0x0
    bne lbl_800B09F8
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B09B8
    stfs f20, 0x34(r1)
lbl_800B09B8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B09CC
    stfs f21, 0x34(r1)
lbl_800B09CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B09E0
    stfs f20, 0x38(r1)
lbl_800B09E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f20, 0x38(r1)
    b lbl_800B0E00
lbl_800B09F8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0A0C
    stfs f20, 0x34(r1)
lbl_800B0A0C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B0A20
    stfs f21, 0x34(r1)
lbl_800B0A20:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0A34
    stfs f20, 0x38(r1)
lbl_800B0A34:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f20, 0x38(r1)
    b lbl_800B0E00
lbl_800B0A4C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B0A60
    stfs f18, 0x30(r1)
lbl_800B0A60:
    cmpwi r31, 0x0
    bne lbl_800B0ABC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B0A7C
    stfs f19, 0x34(r1)
lbl_800B0A7C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B0A90
    stfs f18, 0x34(r1)
lbl_800B0A90:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B0AA4
    stfs f19, 0x38(r1)
lbl_800B0AA4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f20, 0x38(r1)
    b lbl_800B0E00
lbl_800B0ABC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B0AD0
    stfs f16, 0x34(r1)
lbl_800B0AD0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B0AE4
    stfs f22, 0x34(r1)
lbl_800B0AE4:
    lfs f1, 0x38(r1)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B0AFC
    stfs f0, 0x38(r1)
lbl_800B0AFC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B0B10
    stfs f21, 0x38(r1)
lbl_800B0B10:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x20
    blt lbl_800B0B8C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    bge lbl_800B0B8C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0B4C
    stfs f20, 0x34(r1)
lbl_800B0B4C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B0B60
    stfs f21, 0x34(r1)
lbl_800B0B60:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0B74
    stfs f20, 0x38(r1)
lbl_800B0B74:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f21, 0x38(r1)
    b lbl_800B0E00
lbl_800B0B8C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    blt lbl_800B0C08
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    bge lbl_800B0C08
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B0BC8
    stfs f20, 0x34(r1)
lbl_800B0BC8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B0BDC
    stfs f23, 0x34(r1)
lbl_800B0BDC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B0BF0
    stfs f16, 0x38(r1)
lbl_800B0BF0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f25, 0x38(r1)
    b lbl_800B0E00
lbl_800B0C08:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    blt lbl_800B0E00
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x46
    bge lbl_800B0E00
    cmpwi r31, 0x1
    bne lbl_800B0C8C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B0C4C
    stfs f24, 0x34(r1)
lbl_800B0C4C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B0C60
    stfs f21, 0x34(r1)
lbl_800B0C60:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B0C74
    stfs f22, 0x38(r1)
lbl_800B0C74:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f22, 0x38(r1)
    b lbl_800B0E00
lbl_800B0C8C:
    cmpwi r31, 0x2
    bne lbl_800B0CE8
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B0CA8
    stfs f16, 0x34(r1)
lbl_800B0CA8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B0CBC
    stfs f25, 0x34(r1)
lbl_800B0CBC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800B0CD0
    stfs f23, 0x38(r1)
lbl_800B0CD0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f23, 0x38(r1)
    b lbl_800B0E00
lbl_800B0CE8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B0CFC
    stfs f24, 0x34(r1)
lbl_800B0CFC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B0D10
    stfs f22, 0x34(r1)
lbl_800B0D10:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B0D24
    stfs f26, 0x38(r1)
lbl_800B0D24:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f27, 0x38(r1)
    b lbl_800B0E00
lbl_800B0D3C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B0D50
    stfs f18, 0x30(r1)
lbl_800B0D50:
    cmpwi r31, 0x0
    bne lbl_800B0DB0
    lfs f1, 0x34(r1)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B0D70
    stfs f0, 0x34(r1)
lbl_800B0D70:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B0D84
    stfs f27, 0x34(r1)
lbl_800B0D84:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B0D98
    stfs f24, 0x38(r1)
lbl_800B0D98:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f16, 0x38(r1)
    b lbl_800B0E00
lbl_800B0DB0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B0DC4
    stfs f19, 0x34(r1)
lbl_800B0DC4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B0DD8
    stfs f26, 0x34(r1)
lbl_800B0DD8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B0DEC
    stfs f24, 0x38(r1)
lbl_800B0DEC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B0E00
    stfs f20, 0x38(r1)
lbl_800B0E00:
    cmpwi r31, 0x0
    bne lbl_800B10D4
    cmpwi r28, 0x92
    beq lbl_800B0EF8
    lfs f0, 0x34(r1)
    fadds f0, f0, f18
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f0, f28
    stfs f0, 0x38(r1)
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f16
    bge lbl_800B0E40
    fadds f0, f16, f0
    stfs f0, 0x38(r1)
lbl_800B0E40:
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f17
    bge lbl_800B0E58
    fadds f0, f17, f0
    stfs f0, 0x38(r1)
lbl_800B0E58:
    lwz r3, 0xb50(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B0E74
    fadds f0, f29, f1
    stfs f0, 0x38(r1)
lbl_800B0E74:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B0E8C
    fadds f0, f18, f0
    stfs f0, 0x34(r1)
lbl_800B0E8C:
    lwz r3, 0xb50(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B0EA8
    fadds f0, f26, f1
    stfs f0, 0x34(r1)
lbl_800B0EA8:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    ble lbl_800B0ECC
    fadds f0, f30, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B0ECC:
    lwz r3, 0xb50(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B0EF8
    lfd f0, 0x160(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B0EF8:
    cmpwi r28, 0x31
    bne lbl_800B0F2C
    lwz r3, 0xb70(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x168(r1)
    fmuls f0, f0, f1
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x170(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B0F2C:
    cmpwi r28, 0x92
    bne lbl_800B10D4
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bgt lbl_800B1048
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800B10D4
    lfs f0, 0x34(r1)
    fadds f0, f0, f18
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f0, f28
    stfs f0, 0x38(r1)
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f16
    bge lbl_800B0F8C
    fadds f0, f16, f0
    stfs f0, 0x38(r1)
lbl_800B0F8C:
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f17
    bge lbl_800B0FA4
    fadds f0, f17, f0
    stfs f0, 0x38(r1)
lbl_800B0FA4:
    lwz r3, 0xb50(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x148(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B0FC0
    fadds f0, f29, f1
    stfs f0, 0x38(r1)
lbl_800B0FC0:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B0FD8
    fadds f0, f18, f0
    stfs f0, 0x34(r1)
lbl_800B0FD8:
    lwz r3, 0xb50(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B0FF4
    fadds f0, f26, f1
    stfs f0, 0x34(r1)
lbl_800B0FF4:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f30
    ble lbl_800B1018
    fadds f0, f30, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B1018:
    lwz r3, 0xb50(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B10D4
    lfd f0, 0x160(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
    b lbl_800B10D4
lbl_800B1048:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    bge lbl_800B109C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    ble lbl_800B109C
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fadds f0, f16, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x178(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B10D4
lbl_800B109C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    blt lbl_800B10D4
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fadds f0, f28, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f29, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B10D4:
    add r4, r27, r24
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
    add r3, r27, r24
    lwz r3, 0x160(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B0550
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

// asm_to_cpp: fn_800B1278
asm void fn_800B1278(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2a0
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f16, 0x8(r3)
    lfs f17, 0x18(r3)
    lfs f18, lbl_8049F6A0
    lfs f19, 0x30(r3)
    lfs f21, 0x44(r3)
    lfs f20, 0x3c(r3)
    lfs f22, 0x40(r3)
    lfs f23, 0x54(r3)
    lfs f24, 0x28(r3)
    lfs f25, 0x1c(r3)
    lfs f26, 0x4c(r3)
    lfs f28, 0x20(r3)
    lfs f30, 0x88(r3)
    lfs f15, 0x24(r3)
    lfs f29, 0x84(r3)
    lfs f31, 0x5c(r3)
    lfs f0, 0x2c(r3)
    stfd f0, 0x130(r1)
    lfs f27, 0x34(r3)
    lfs f0, 0x8c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x90(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x150(r1)
    lfs f0, 0x48(r3)
    stfd f0, 0x158(r1)
lbl_800B1458:
    add r3, r27, r24
    lwz r3, 0x308(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B14BC
    add r4, r27, r25
    addi r3, r4, 0x3e8
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x304(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x328
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B1504
lbl_800B14BC:
    add r4, r27, r25
    addi r3, r4, 0x3e8
    addi r4, r4, 0x328
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x318(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x308(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x328
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B1504:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x328
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x3e8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B1598
    cmpwi r31, 0x0
    bge lbl_800B15A4
    b lbl_800B15C8
lbl_800B1598:
    cmpwi r31, 0x4
    bge lbl_800B15C8
    b lbl_800B15B8
lbl_800B15A4:
    addi r3, r1, 0xa0
    lwz r4, 0xb5c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B15C8
lbl_800B15B8:
    addi r3, r1, 0xa0
    lwz r4, 0xb60(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B15C8:
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
    stfs f18, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x4
    bge lbl_800B1640
    cmpwi r31, 0x2
    bge lbl_800B162C
    b lbl_800B1640
lbl_800B162C:
    stfs f18, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f18, 0x48(r1)
    stfs f18, 0x4c(r1)
    b lbl_800B1650
lbl_800B1640:
    stfs f18, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f15, 0x48(r1)
    stfs f18, 0x4c(r1)
lbl_800B1650:
    cmpwi r28, 0x8b
    beq lbl_800B1720
    bge lbl_800B16C8
    cmpwi r28, 0x66
    bge lbl_800B1698
    cmpwi r28, 0x2c
    bge lbl_800B168C
    cmpwi r28, 0x12
    bge lbl_800B1680
    cmpwi r28, 0x10
    bge lbl_800B1720
    b lbl_800B1B8C
lbl_800B1680:
    cmpwi r28, 0x2a
    bge lbl_800B1720
    b lbl_800B1B8C
lbl_800B168C:
    cmpwi r28, 0x2e
    beq lbl_800B1720
    b lbl_800B1B8C
lbl_800B1698:
    cmpwi r28, 0x86
    bge lbl_800B16B4
    cmpwi r28, 0x84
    bge lbl_800B1720
    cmpwi r28, 0x6b
    bge lbl_800B1B8C
    b lbl_800B1720
lbl_800B16B4:
    cmpwi r28, 0x8a
    bge lbl_800B1B8C
    cmpwi r28, 0x88
    bge lbl_800B1720
    b lbl_800B1B8C
lbl_800B16C8:
    cmpwi r28, 0x1b5
    beq lbl_800B1B8C
    bge lbl_800B16F8
    cmpwi r28, 0x160
    beq lbl_800B1774
    bge lbl_800B16EC
    cmpwi r28, 0x92
    beq lbl_800B186C
    b lbl_800B1B8C
lbl_800B16EC:
    cmpwi r28, 0x1b4
    bge lbl_800B1720
    b lbl_800B1B8C
lbl_800B16F8:
    cmpwi r28, 0x1e6
    bge lbl_800B1714
    cmpwi r28, 0x1e3
    bge lbl_800B17A8
    cmpwi r28, 0x1b7
    bge lbl_800B1B8C
    b lbl_800B1720
lbl_800B1714:
    cmpwi r28, 0x1e8
    beq lbl_800B17A8
    b lbl_800B1B8C
lbl_800B1720:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B1734
    stfs f16, 0x30(r1)
lbl_800B1734:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B1748
    stfs f17, 0x34(r1)
lbl_800B1748:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B175C
    stfs f18, 0x34(r1)
lbl_800B175C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f28, 0x38(r1)
    b lbl_800B1C94
lbl_800B1774:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B1784
    stfs f16, 0x30(r1)
lbl_800B1784:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    bge lbl_800B1794
    stfs f19, 0x34(r1)
lbl_800B1794:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f15
    ble lbl_800B1C94
    stfs f15, 0x34(r1)
    b lbl_800B1C94
lbl_800B17A8:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B17BC
    stfs f20, 0x30(r1)
lbl_800B17BC:
    cmpwi r31, 0x0
    bne lbl_800B1818
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B17D8
    stfs f21, 0x34(r1)
lbl_800B17D8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B17EC
    stfs f18, 0x34(r1)
lbl_800B17EC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B1800
    stfs f21, 0x38(r1)
lbl_800B1800:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f21, 0x38(r1)
    b lbl_800B1C94
lbl_800B1818:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B182C
    stfs f21, 0x34(r1)
lbl_800B182C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B1840
    stfs f18, 0x34(r1)
lbl_800B1840:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B1854
    stfs f21, 0x38(r1)
lbl_800B1854:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f21, 0x38(r1)
    b lbl_800B1C94
lbl_800B186C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B1880
    stfs f20, 0x30(r1)
lbl_800B1880:
    cmpwi r31, 0x0
    bne lbl_800B196C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B1904
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    bge lbl_800B1904
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B18C4
    stfs f22, 0x34(r1)
lbl_800B18C4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B18D8
    stfs f23, 0x34(r1)
lbl_800B18D8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B18EC
    stfs f24, 0x38(r1)
lbl_800B18EC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f20, 0x38(r1)
    b lbl_800B1C94
lbl_800B1904:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    blt lbl_800B1C94
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B192C
    stfs f22, 0x34(r1)
lbl_800B192C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B1940
    stfs f23, 0x34(r1)
lbl_800B1940:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B1954
    stfs f25, 0x38(r1)
lbl_800B1954:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f25, 0x38(r1)
    b lbl_800B1C94
lbl_800B196C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B1980
    stfs f21, 0x34(r1)
lbl_800B1980:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B1994
    stfs f18, 0x34(r1)
lbl_800B1994:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B19A8
    stfs f21, 0x38(r1)
lbl_800B19A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B19BC
    stfs f18, 0x38(r1)
lbl_800B19BC:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x20
    blt lbl_800B1A38
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    bge lbl_800B1A38
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B19F8
    stfs f21, 0x34(r1)
lbl_800B19F8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B1A0C
    stfs f18, 0x34(r1)
lbl_800B1A0C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B1A20
    stfs f21, 0x38(r1)
lbl_800B1A20:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f18, 0x38(r1)
    b lbl_800B1C94
lbl_800B1A38:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    blt lbl_800B1AB4
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    bge lbl_800B1AB4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B1A74
    stfs f22, 0x34(r1)
lbl_800B1A74:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B1A88
    stfs f26, 0x34(r1)
lbl_800B1A88:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B1A9C
    stfs f24, 0x38(r1)
lbl_800B1A9C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f27, 0x38(r1)
    b lbl_800B1C94
lbl_800B1AB4:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    blt lbl_800B1C94
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x46
    bge lbl_800B1C94
    cmpwi r31, 0x1
    bne lbl_800B1B38
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B1AF8
    stfs f28, 0x34(r1)
lbl_800B1AF8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B1B0C
    stfs f18, 0x34(r1)
lbl_800B1B0C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B1B20
    stfs f26, 0x38(r1)
lbl_800B1B20:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f26, 0x38(r1)
    b lbl_800B1C94
lbl_800B1B38:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B1B4C
    stfs f24, 0x34(r1)
lbl_800B1B4C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B1B60
    stfs f26, 0x34(r1)
lbl_800B1B60:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B1B74
    stfs f20, 0x38(r1)
lbl_800B1B74:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f20, 0x38(r1)
    b lbl_800B1C94
lbl_800B1B8C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B1BA0
    stfs f29, 0x30(r1)
lbl_800B1BA0:
    cmpwi r31, 0x0
    bne lbl_800B1BFC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B1BBC
    stfs f25, 0x34(r1)
lbl_800B1BBC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B1BD0
    stfs f20, 0x34(r1)
lbl_800B1BD0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800B1BE4
    stfs f30, 0x38(r1)
lbl_800B1BE4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f25, 0x38(r1)
    b lbl_800B1C94
lbl_800B1BFC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B1C10
    stfs f25, 0x34(r1)
lbl_800B1C10:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B1C24
    stfs f20, 0x34(r1)
lbl_800B1C24:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800B1C38
    stfs f31, 0x38(r1)
lbl_800B1C38:
    lfs f1, 0x38(r1)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B1C50
    stfs f0, 0x38(r1)
lbl_800B1C50:
    cmpwi r28, 0xa1
    bne lbl_800B1C94
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800B1C94
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B1C80
    stfs f19, 0x38(r1)
lbl_800B1C80:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B1C94
    stfs f25, 0x38(r1)
lbl_800B1C94:
    cmpwi r31, 0x0
    bne lbl_800B1E9C
    cmpwi r28, 0x92
    beq lbl_800B1D24
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    bge lbl_800B1CBC
    fadds f0, f25, f0
    stfs f0, 0x38(r1)
lbl_800B1CBC:
    lwz r3, 0xb50(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B1CD8
    fadds f0, f24, f1
    stfs f0, 0x38(r1)
lbl_800B1CD8:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f24
    bge lbl_800B1CF0
    fadds f0, f25, f0
    stfs f0, 0x34(r1)
lbl_800B1CF0:
    lwz r3, 0xb50(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    bge lbl_800B1D08
    fadds f0, f24, f0
    stfs f0, 0x34(r1)
lbl_800B1D08:
    lwz r3, 0xb50(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x140(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B1D24
    fadds f0, f31, f1
    stfs f0, 0x34(r1)
lbl_800B1D24:
    cmpwi r28, 0x31
    bne lbl_800B1D58
    lwz r3, 0xb50(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x148(r1)
    fmuls f0, f0, f1
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B1D58:
    cmpwi r28, 0x92
    bne lbl_800B1E9C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bgt lbl_800B1DC0
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800B1E9C
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    bge lbl_800B1DA0
    fadds f0, f25, f0
    stfs f0, 0x38(r1)
lbl_800B1DA0:
    lwz r3, 0xb50(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B1E9C
    fadds f0, f24, f1
    stfs f0, 0x38(r1)
    b lbl_800B1E9C
lbl_800B1DC0:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    bge lbl_800B1E10
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    ble lbl_800B1E10
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fadds f0, f28, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f25, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B1E9C
lbl_800B1E10:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    bge lbl_800B1E60
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    blt lbl_800B1E60
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fadds f0, f19, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f28, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B1E9C
lbl_800B1E60:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    blt lbl_800B1E9C
    lwz r3, 0xb50(r27)
    lfs f0, 0x38(r3)
    fadds f0, f19, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B1E9C:
    add r4, r27, r24
    lwz r3, 0x308(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x308(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x308(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x308(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B1458
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

// asm_to_cpp: fn_800B2040
asm void fn_800B2040(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x280
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f16, 0x8(r3)
    lfs f17, 0x30(r3)
    lfs f19, 0x44(r3)
    lfs f20, lbl_8049F6A0
    lfs f18, 0x3c(r3)
    lfs f22, 0x20(r3)
    lfs f23, 0x48(r3)
    lfs f0, 0x94(r3)
    stfd f0, 0x130(r1)
    lfs f24, 0x98(r3)
    lfs f25, 0x54(r3)
    lfs f26, 0x1c(r3)
    lfs f27, 0x50(r3)
    lfs f28, 0x40(r3)
    lfs f29, 0x58(r3)
    lfs f30, 0x9c(r3)
    lfs f31, 0x4c(r3)
    lfs f21, 0x84(r3)
    lfs f15, 0x24(r3)
lbl_800B21F8:
    add r3, r27, r24
    lwz r3, 0x4b0(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B225C
    add r4, r27, r25
    addi r3, r4, 0x590
    addi r4, r4, 0x4d0
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x4ac(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x4b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x4d0
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B22A4
lbl_800B225C:
    add r4, r27, r25
    addi r3, r4, 0x590
    addi r4, r4, 0x4d0
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x4c0(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x4b0(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x4d0
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B22A4:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x4d0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x590
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B2338
    cmpwi r31, 0x0
    bge lbl_800B2344
    b lbl_800B2368
lbl_800B2338:
    cmpwi r31, 0x4
    bge lbl_800B2368
    b lbl_800B2358
lbl_800B2344:
    addi r3, r1, 0xa0
    lwz r4, 0xb5c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B2368
lbl_800B2358:
    addi r3, r1, 0xa0
    lwz r4, 0xb60(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B2368:
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
    stfs f31, 0x40(r1)
    stfs f15, 0x44(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r28, 0x8a
    beq lbl_800B2C40
    bge lbl_800B2438
    cmpwi r28, 0x2e
    beq lbl_800B247C
    bge lbl_800B2408
    cmpwi r28, 0x2a
    bge lbl_800B23FC
    cmpwi r28, 0x12
    bge lbl_800B2C40
    cmpwi r28, 0x10
    bge lbl_800B247C
    b lbl_800B2C40
lbl_800B23FC:
    cmpwi r28, 0x2c
    bge lbl_800B2C40
    b lbl_800B247C
lbl_800B2408:
    cmpwi r28, 0x84
    bge lbl_800B2424
    cmpwi r28, 0x6b
    bge lbl_800B2C40
    cmpwi r28, 0x66
    bge lbl_800B247C
    b lbl_800B2C40
lbl_800B2424:
    cmpwi r28, 0x88
    bge lbl_800B247C
    cmpwi r28, 0x86
    bge lbl_800B2C40
    b lbl_800B247C
lbl_800B2438:
    cmpwi r28, 0x160
    beq lbl_800B24B0
    bge lbl_800B245C
    cmpwi r28, 0x92
    beq lbl_800B25A8
    bge lbl_800B2C40
    cmpwi r28, 0x8c
    bge lbl_800B2C40
    b lbl_800B247C
lbl_800B245C:
    cmpwi r28, 0x1e8
    beq lbl_800B24E4
    bge lbl_800B2C40
    cmpwi r28, 0x1e6
    bge lbl_800B2C40
    cmpwi r28, 0x1e3
    bge lbl_800B24E4
    b lbl_800B2C40
lbl_800B247C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B248C
    stfs f16, 0x30(r1)
lbl_800B248C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B249C
    stfs f17, 0x34(r1)
lbl_800B249C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    ble lbl_800B2D00
    stfs f18, 0x34(r1)
    b lbl_800B2D00
lbl_800B24B0:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B24C0
    stfs f16, 0x30(r1)
lbl_800B24C0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B24D0
    stfs f17, 0x34(r1)
lbl_800B24D0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f15
    ble lbl_800B2D00
    stfs f15, 0x34(r1)
    b lbl_800B2D00
lbl_800B24E4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B24F8
    stfs f18, 0x30(r1)
lbl_800B24F8:
    cmpwi r31, 0x0
    bne lbl_800B2554
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B2514
    stfs f19, 0x34(r1)
lbl_800B2514:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B2528
    stfs f20, 0x34(r1)
lbl_800B2528:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B253C
    stfs f19, 0x38(r1)
lbl_800B253C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f19, 0x38(r1)
    b lbl_800B2D00
lbl_800B2554:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B2568
    stfs f19, 0x34(r1)
lbl_800B2568:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B257C
    stfs f20, 0x34(r1)
lbl_800B257C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B2590
    stfs f19, 0x38(r1)
lbl_800B2590:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f19, 0x38(r1)
    b lbl_800B2D00
lbl_800B25A8:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B25BC
    stfs f21, 0x30(r1)
lbl_800B25BC:
    cmpwi r31, 0x0
    bne lbl_800B2790
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B2640
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bge lbl_800B2640
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2600
    stfs f22, 0x34(r1)
lbl_800B2600:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B2614
    stfs f23, 0x34(r1)
lbl_800B2614:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2628
    stfs f22, 0x38(r1)
lbl_800B2628:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B2640:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    blt lbl_800B26C0
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    bge lbl_800B26C0
    lfs f1, 0x34(r1)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B2680
    stfs f0, 0x34(r1)
lbl_800B2680:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800B2694
    stfs f24, 0x34(r1)
lbl_800B2694:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B26A8
    stfs f22, 0x38(r1)
lbl_800B26A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B26C0:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    blt lbl_800B273C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x28
    bge lbl_800B273C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B26FC
    stfs f22, 0x34(r1)
lbl_800B26FC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B2710
    stfs f23, 0x34(r1)
lbl_800B2710:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B2724
    stfs f18, 0x38(r1)
lbl_800B2724:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f18, 0x38(r1)
    b lbl_800B2D00
lbl_800B273C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B2750
    stfs f25, 0x34(r1)
lbl_800B2750:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B2764
    stfs f25, 0x34(r1)
lbl_800B2764:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2778
    stfs f26, 0x38(r1)
lbl_800B2778:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f18, 0x38(r1)
    b lbl_800B2D00
lbl_800B2790:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B280C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x14
    bge lbl_800B280C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B27CC
    stfs f27, 0x34(r1)
lbl_800B27CC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B27E0
    stfs f18, 0x34(r1)
lbl_800B27E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B27F4
    stfs f22, 0x38(r1)
lbl_800B27F4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f20, 0x38(r1)
    b lbl_800B2D00
lbl_800B280C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x14
    blt lbl_800B2940
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    bge lbl_800B2940
    cmpwi r31, 0x1
    bne lbl_800B2890
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B2850
    stfs f27, 0x34(r1)
lbl_800B2850:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2864
    stfs f28, 0x34(r1)
lbl_800B2864:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2878
    stfs f22, 0x38(r1)
lbl_800B2878:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B2890:
    cmpwi r31, 0x2
    bne lbl_800B28EC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800B28AC
    stfs f23, 0x34(r1)
lbl_800B28AC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B28C0
    stfs f23, 0x34(r1)
lbl_800B28C0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B28D4
    stfs f28, 0x38(r1)
lbl_800B28D4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B28EC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2900
    stfs f22, 0x34(r1)
lbl_800B2900:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B2914
    stfs f22, 0x34(r1)
lbl_800B2914:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B2928
    stfs f26, 0x38(r1)
lbl_800B2928:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f26, 0x38(r1)
    b lbl_800B2D00
lbl_800B2940:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    blt lbl_800B2A74
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x28
    bge lbl_800B2A74
    cmpwi r31, 0x1
    bne lbl_800B29C4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B2984
    stfs f28, 0x34(r1)
lbl_800B2984:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2998
    stfs f28, 0x34(r1)
lbl_800B2998:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B29AC
    stfs f24, 0x38(r1)
lbl_800B29AC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f24, 0x38(r1)
    b lbl_800B2D00
lbl_800B29C4:
    cmpwi r31, 0x2
    bne lbl_800B2A20
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B29E0
    stfs f29, 0x34(r1)
lbl_800B29E0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B29F4
    stfs f29, 0x34(r1)
lbl_800B29F4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B2A08
    stfs f26, 0x38(r1)
lbl_800B2A08:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f26, 0x38(r1)
    b lbl_800B2D00
lbl_800B2A20:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800B2A34
    stfs f30, 0x34(r1)
lbl_800B2A34:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800B2A48
    stfs f30, 0x34(r1)
lbl_800B2A48:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B2A5C
    stfs f28, 0x38(r1)
lbl_800B2A5C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B2A74:
    cmpwi r31, 0x1
    bne lbl_800B2B10
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B2ABC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800B2AA4
    stfs f31, 0x34(r1)
lbl_800B2AA4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800B2AE4
    stfs f31, 0x34(r1)
    b lbl_800B2AE4
lbl_800B2ABC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2AD0
    stfs f22, 0x34(r1)
lbl_800B2AD0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800B2AE4
    stfs f31, 0x34(r1)
lbl_800B2AE4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B2AF8
    stfs f24, 0x38(r1)
lbl_800B2AF8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f24, 0x38(r1)
    b lbl_800B2D00
lbl_800B2B10:
    cmpwi r31, 0x2
    bne lbl_800B2BAC
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B2B58
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B2B40
    stfs f18, 0x34(r1)
lbl_800B2B40:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B2B80
    stfs f18, 0x34(r1)
    b lbl_800B2B80
lbl_800B2B58:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B2B6C
    stfs f26, 0x34(r1)
lbl_800B2B6C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B2B80
    stfs f18, 0x34(r1)
lbl_800B2B80:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B2B94
    stfs f26, 0x38(r1)
lbl_800B2B94:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f26, 0x38(r1)
    b lbl_800B2D00
lbl_800B2BAC:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B2BEC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B2BD4
    stfs f25, 0x34(r1)
lbl_800B2BD4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B2C14
    stfs f25, 0x34(r1)
    b lbl_800B2C14
lbl_800B2BEC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B2C00
    stfs f28, 0x34(r1)
lbl_800B2C00:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B2C14
    stfs f25, 0x34(r1)
lbl_800B2C14:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B2C28
    stfs f28, 0x38(r1)
lbl_800B2C28:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B2C40:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B2C54
    stfs f21, 0x30(r1)
lbl_800B2C54:
    cmpwi r31, 0x0
    bne lbl_800B2CB0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2C70
    stfs f22, 0x34(r1)
lbl_800B2C70:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B2C84
    stfs f23, 0x34(r1)
lbl_800B2C84:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2C98
    stfs f22, 0x38(r1)
lbl_800B2C98:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f28, 0x38(r1)
    b lbl_800B2D00
lbl_800B2CB0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B2CC4
    stfs f27, 0x34(r1)
lbl_800B2CC4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B2CD8
    stfs f18, 0x34(r1)
lbl_800B2CD8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B2CEC
    stfs f22, 0x38(r1)
lbl_800B2CEC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B2D00
    stfs f20, 0x38(r1)
lbl_800B2D00:
    add r4, r27, r24
    lwz r3, 0x4b0(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x4b0(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x4b0(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x4b0(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B21F8
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

// asm_to_cpp: fn_800B2EA4
asm void fn_800B2EA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x2a0
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f15, 0x8(r3)
    lfs f16, 0x1c(r3)
    lfs f17, 0x30(r3)
    lfs f18, 0x3c(r3)
    lfs f19, 0x40(r3)
    lfs f20, 0x44(r3)
    lfs f21, 0x48(r3)
    lfs f22, lbl_8049F6A0
    lfs f24, 0x2c(r3)
    lfs f23, 0x4c(r3)
    lfs f26, 0x20(r3)
    lfs f0, 0x58(r3)
    stfd f0, 0x130(r1)
    lfs f27, 0x24(r3)
    lfs f28, 0x14(r3)
    lfs f25, 0x54(r3)
    lfs f30, 0x7c(r3)
    lfs f29, 0x34(r3)
    lfs f31, 0x64(r3)
    lfs f0, 0x70(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x6c(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x148(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x150(r1)
lbl_800B307C:
    add r3, r27, r24
    lwz r3, 0x658(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B30E0
    add r4, r27, r25
    addi r3, r4, 0x738
    addi r4, r4, 0x678
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x654(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x658(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x678
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B3128
lbl_800B30E0:
    add r4, r27, r25
    addi r3, r4, 0x738
    addi r4, r4, 0x678
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x668(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x658(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x678
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B3128:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x678
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x738
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B31D0
    cmpwi r31, 0x0
    bge lbl_800B31BC
    b lbl_800B31D0
lbl_800B31BC:
    addi r3, r1, 0xa0
    lwz r4, 0xb7c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B31E0
lbl_800B31D0:
    addi r3, r1, 0xa0
    lwz r4, 0xb80(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B31E0:
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
    stfs f22, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    stfs f22, 0x40(r1)
    stfs f22, 0x4c(r1)
    stfs f22, 0x48(r1)
    stfs f17, 0x44(r1)
    cmpwi r28, 0x8a
    beq lbl_800B3860
    bge lbl_800B32C4
    cmpwi r28, 0x2e
    beq lbl_800B3328
    bge lbl_800B3294
    cmpwi r28, 0x12
    bge lbl_800B3280
    cmpwi r28, 0x3
    bge lbl_800B3274
    cmpwi r28, 0x1
    bge lbl_800B3390
    b lbl_800B3860
lbl_800B3274:
    cmpwi r28, 0x10
    bge lbl_800B3328
    b lbl_800B3860
lbl_800B3280:
    cmpwi r28, 0x2c
    bge lbl_800B3860
    cmpwi r28, 0x2a
    bge lbl_800B3328
    b lbl_800B3860
lbl_800B3294:
    cmpwi r28, 0x84
    bge lbl_800B32B0
    cmpwi r28, 0x6b
    bge lbl_800B3860
    cmpwi r28, 0x66
    bge lbl_800B3328
    b lbl_800B3860
lbl_800B32B0:
    cmpwi r28, 0x88
    bge lbl_800B3328
    cmpwi r28, 0x86
    bge lbl_800B3860
    b lbl_800B3328
lbl_800B32C4:
    cmpwi r28, 0x1b5
    beq lbl_800B3860
    bge lbl_800B3300
    cmpwi r28, 0x160
    beq lbl_800B335C
    bge lbl_800B32F4
    cmpwi r28, 0x92
    beq lbl_800B3574
    bge lbl_800B3860
    cmpwi r28, 0x8c
    bge lbl_800B3860
    b lbl_800B3328
lbl_800B32F4:
    cmpwi r28, 0x1b4
    bge lbl_800B3328
    b lbl_800B3860
lbl_800B3300:
    cmpwi r28, 0x1e6
    bge lbl_800B331C
    cmpwi r28, 0x1e3
    bge lbl_800B34B0
    cmpwi r28, 0x1b7
    bge lbl_800B3860
    b lbl_800B3328
lbl_800B331C:
    cmpwi r28, 0x1e8
    beq lbl_800B34B0
    b lbl_800B3860
lbl_800B3328:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    bge lbl_800B3338
    stfs f15, 0x30(r1)
lbl_800B3338:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B3348
    stfs f16, 0x34(r1)
lbl_800B3348:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    ble lbl_800B3924
    stfs f18, 0x34(r1)
    b lbl_800B3924
lbl_800B335C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f15
    bge lbl_800B336C
    stfs f15, 0x30(r1)
lbl_800B336C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B337C
    stfs f17, 0x34(r1)
lbl_800B337C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    ble lbl_800B3924
    stfs f27, 0x34(r1)
    b lbl_800B3924
lbl_800B3390:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B33A4
    stfs f18, 0x30(r1)
lbl_800B33A4:
    cmpwi r31, 0x0
    bne lbl_800B3400
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B33C0
    stfs f16, 0x34(r1)
lbl_800B33C0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B33D4
    stfs f18, 0x34(r1)
lbl_800B33D4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B33E8
    stfs f19, 0x38(r1)
lbl_800B33E8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B3924
    stfs f19, 0x38(r1)
    b lbl_800B3924
lbl_800B3400:
    cmpwi r31, 0x1
    bne lbl_800B345C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B341C
    stfs f16, 0x34(r1)
lbl_800B341C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B3430
    stfs f18, 0x34(r1)
lbl_800B3430:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B3444
    stfs f20, 0x38(r1)
lbl_800B3444:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B3924
    stfs f28, 0x38(r1)
    b lbl_800B3924
lbl_800B345C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B3470
    stfs f16, 0x34(r1)
lbl_800B3470:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B3484
    stfs f16, 0x34(r1)
lbl_800B3484:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B3498
    stfs f21, 0x38(r1)
lbl_800B3498:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B3924
    stfs f27, 0x38(r1)
    b lbl_800B3924
lbl_800B34B0:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B34C4
    stfs f18, 0x30(r1)
lbl_800B34C4:
    cmpwi r31, 0x0
    bne lbl_800B3520
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B34E0
    stfs f20, 0x34(r1)
lbl_800B34E0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B34F4
    stfs f22, 0x34(r1)
lbl_800B34F4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B3508
    stfs f20, 0x38(r1)
lbl_800B3508:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B3924
    stfs f20, 0x38(r1)
    b lbl_800B3924
lbl_800B3520:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B3534
    stfs f20, 0x34(r1)
lbl_800B3534:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B3548
    stfs f22, 0x34(r1)
lbl_800B3548:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B355C
    stfs f20, 0x38(r1)
lbl_800B355C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B3924
    stfs f20, 0x38(r1)
    b lbl_800B3924
lbl_800B3574:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B3588
    stfs f18, 0x30(r1)
lbl_800B3588:
    cmpwi r31, 0x0
    bne lbl_800B35E4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B35A4
    stfs f19, 0x34(r1)
lbl_800B35A4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B35B8
    stfs f18, 0x34(r1)
lbl_800B35B8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B35CC
    stfs f19, 0x38(r1)
lbl_800B35CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B3924
    stfs f20, 0x38(r1)
    b lbl_800B3924
lbl_800B35E4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B35F8
    stfs f16, 0x34(r1)
lbl_800B35F8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B360C
    stfs f23, 0x34(r1)
lbl_800B360C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B3620
    stfs f16, 0x38(r1)
lbl_800B3620:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B3634
    stfs f22, 0x38(r1)
lbl_800B3634:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x20
    blt lbl_800B36B0
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    bge lbl_800B36B0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B3670
    stfs f20, 0x34(r1)
lbl_800B3670:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B3684
    stfs f22, 0x34(r1)
lbl_800B3684:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B3698
    stfs f20, 0x38(r1)
lbl_800B3698:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B3924
    stfs f22, 0x38(r1)
    b lbl_800B3924
lbl_800B36B0:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    blt lbl_800B372C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    bge lbl_800B372C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B36EC
    stfs f20, 0x34(r1)
lbl_800B36EC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C411382
    bne lbl_800B3700
    stfs f24, 0x34(r1)
lbl_800B3700:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B3714
    stfs f16, 0x38(r1)
lbl_800B3714:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B3924
    stfs f25, 0x38(r1)
    b lbl_800B3924
lbl_800B372C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    blt lbl_800B3924
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x46
    bge lbl_800B3924
    cmpwi r31, 0x1
    bne lbl_800B37B0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B3770
    stfs f26, 0x34(r1)
lbl_800B3770:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B3784
    stfs f16, 0x34(r1)
lbl_800B3784:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B3798
    stfs f19, 0x38(r1)
lbl_800B3798:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B3924
    stfs f22, 0x38(r1)
    b lbl_800B3924
lbl_800B37B0:
    cmpwi r31, 0x2
    bne lbl_800B380C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B37CC
    stfs f16, 0x34(r1)
lbl_800B37CC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B37E0
    stfs f16, 0x34(r1)
lbl_800B37E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B37F4
    stfs f16, 0x38(r1)
lbl_800B37F4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B3924
    stfs f19, 0x38(r1)
    b lbl_800B3924
lbl_800B380C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B3820
    stfs f26, 0x34(r1)
lbl_800B3820:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B3834
    stfs f16, 0x34(r1)
lbl_800B3834:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B3848
    stfs f26, 0x38(r1)
lbl_800B3848:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B3924
    stfs f16, 0x38(r1)
    b lbl_800B3924
lbl_800B3860:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B3874
    stfs f18, 0x30(r1)
lbl_800B3874:
    cmpwi r31, 0x0
    bne lbl_800B38D4
    lfs f1, 0x34(r1)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800B3894
    stfs f0, 0x34(r1)
lbl_800B3894:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C411382
    bne lbl_800B38A8
    stfs f27, 0x34(r1)
lbl_800B38A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B38BC
    stfs f26, 0x38(r1)
lbl_800B38BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f16
    opword 0x4C411382
    bne lbl_800B3924
    stfs f16, 0x38(r1)
    b lbl_800B3924
lbl_800B38D4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B38E8
    stfs f19, 0x34(r1)
lbl_800B38E8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B38FC
    stfs f28, 0x34(r1)
lbl_800B38FC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B3910
    stfs f26, 0x38(r1)
lbl_800B3910:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B3924
    stfs f20, 0x38(r1)
lbl_800B3924:
    cmpwi r31, 0x0
    bne lbl_800B3C34
    cmpwi r28, 0x92
    beq lbl_800B3A14
    lfs f0, 0x34(r1)
    fadds f0, f0, f18
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f0, f24
    stfs f0, 0x38(r1)
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B3964
    fadds f0, f18, f0
    stfs f0, 0x38(r1)
lbl_800B3964:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f27
    ble lbl_800B397C
    fadds f0, f27, f0
    stfs f0, 0x38(r1)
lbl_800B397C:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B3994
    fadds f0, f30, f0
    stfs f0, 0x38(r1)
lbl_800B3994:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B39AC
    fadds f0, f18, f0
    stfs f0, 0x34(r1)
lbl_800B39AC:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B39C4
    fadds f0, f28, f0
    stfs f0, 0x34(r1)
lbl_800B39C4:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800B39E8
    fadds f0, f31, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B39E8:
    lwz r3, 0xb70(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B3A14
    lfd f0, 0x140(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B3A14:
    cmpwi r28, 0x31
    bne lbl_800B3A48
    lwz r3, 0xb70(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x148(r1)
    fmuls f0, f0, f1
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B3A48:
    cmpwi r28, 0x92
    bne lbl_800B3C34
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bgt lbl_800B3B5C
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800B3C34
    lfs f0, 0x34(r1)
    fadds f0, f0, f18
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f0, f24
    stfs f0, 0x38(r1)
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B3AA8
    fadds f0, f18, f0
    stfs f0, 0x38(r1)
lbl_800B3AA8:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f27
    ble lbl_800B3AC0
    fadds f0, f27, f0
    stfs f0, 0x38(r1)
lbl_800B3AC0:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B3AD8
    fadds f0, f30, f0
    stfs f0, 0x38(r1)
lbl_800B3AD8:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f18
    ble lbl_800B3AF0
    fadds f0, f18, f0
    stfs f0, 0x34(r1)
lbl_800B3AF0:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B3B08
    fadds f0, f28, f0
    stfs f0, 0x34(r1)
lbl_800B3B08:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f31
    ble lbl_800B3B2C
    fadds f0, f31, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
lbl_800B3B2C:
    lwz r3, 0xb70(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    ble lbl_800B3C34
    lfd f0, 0x140(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x38(r1)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
    b lbl_800B3C34
lbl_800B3B5C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    bge lbl_800B3BAC
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    ble lbl_800B3BAC
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f18, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f28, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B3C34
lbl_800B3BAC:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    blt lbl_800B3BFC
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B3BFC
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f24, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f30, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B3C34
lbl_800B3BFC:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    blt lbl_800B3C34
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f24, f0
    stfs f0, 0x38(r1)
    lfs f0, 0x34(r3)
    fadds f0, f27, f0
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B3C34:
    add r4, r27, r24
    lwz r3, 0x658(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x658(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x658(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x658(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x658(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x658(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B307C
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

// asm_to_cpp: fn_800B3DD8
asm void fn_800B3DD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
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
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f16, 0x8(r3)
    lfs f17, 0x18(r3)
    lfs f18, lbl_8049F6A0
    lfs f19, 0x30(r3)
    lfs f21, 0x44(r3)
    lfs f20, 0x3c(r3)
    lfs f22, 0x40(r3)
    lfs f23, 0x54(r3)
    lfs f24, 0x28(r3)
    lfs f25, 0x1c(r3)
    lfs f26, 0x20(r3)
    lfs f15, 0x24(r3)
    lfs f27, 0x84(r3)
    lfs f28, 0x34(r3)
    lfs f30, 0x2c(r3)
    lfs f29, 0x8c(r3)
    lfs f0, 0x5c(r3)
    stfd f0, 0x130(r1)
    lfs f0, 0x90(r3)
    stfd f0, 0x138(r1)
    lfs f0, 0x74(r3)
    stfd f0, 0x140(r1)
    lfs f0, 0x78(r3)
    stfd f0, 0x148(r1)
    lfs f31, 0xa0(r3)
    lfs f0, 0xa8(r3)
    stfd f0, 0x160(r1)
    lfs f0, 0xa4(r3)
    stfd f0, 0x158(r1)
    lfs f0, 0x4c(r3)
    stfd f0, 0x150(r1)
lbl_800B3FC0:
    add r3, r27, r24
    lwz r3, 0x800(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B4024
    add r4, r27, r25
    addi r3, r4, 0x8e0
    addi r4, r4, 0x820
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x7fc(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x800(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x820
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B406C
lbl_800B4024:
    add r4, r27, r25
    addi r3, r4, 0x8e0
    addi r4, r4, 0x820
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x810(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x800(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x820
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B406C:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x820
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0x8e0
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B4100
    cmpwi r31, 0x0
    bge lbl_800B410C
    b lbl_800B4130
lbl_800B4100:
    cmpwi r31, 0x4
    bge lbl_800B4130
    b lbl_800B4120
lbl_800B410C:
    addi r3, r1, 0xa0
    lwz r4, 0xb7c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B4130
lbl_800B4120:
    addi r3, r1, 0xa0
    lwz r4, 0xb80(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B4130:
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
    stfs f18, 0x2c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x100
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B8B0
    cmpwi r31, 0x4
    bge lbl_800B41A8
    cmpwi r31, 0x2
    bge lbl_800B4194
    b lbl_800B41A8
lbl_800B4194:
    stfs f18, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f18, 0x48(r1)
    stfs f18, 0x4c(r1)
    b lbl_800B41B8
lbl_800B41A8:
    stfs f18, 0x40(r1)
    stfs f18, 0x44(r1)
    stfs f15, 0x48(r1)
    stfs f18, 0x4c(r1)
lbl_800B41B8:
    cmpwi r28, 0x8b
    beq lbl_800B4288
    bge lbl_800B4230
    cmpwi r28, 0x66
    bge lbl_800B4200
    cmpwi r28, 0x2c
    bge lbl_800B41F4
    cmpwi r28, 0x12
    bge lbl_800B41E8
    cmpwi r28, 0x10
    bge lbl_800B4288
    b lbl_800B46F4
lbl_800B41E8:
    cmpwi r28, 0x2a
    bge lbl_800B4288
    b lbl_800B46F4
lbl_800B41F4:
    cmpwi r28, 0x2e
    beq lbl_800B4288
    b lbl_800B46F4
lbl_800B4200:
    cmpwi r28, 0x86
    bge lbl_800B421C
    cmpwi r28, 0x84
    bge lbl_800B4288
    cmpwi r28, 0x6b
    bge lbl_800B46F4
    b lbl_800B4288
lbl_800B421C:
    cmpwi r28, 0x8a
    bge lbl_800B46F4
    cmpwi r28, 0x88
    bge lbl_800B4288
    b lbl_800B46F4
lbl_800B4230:
    cmpwi r28, 0x1b5
    beq lbl_800B46F4
    bge lbl_800B4260
    cmpwi r28, 0x160
    beq lbl_800B42DC
    bge lbl_800B4254
    cmpwi r28, 0x92
    beq lbl_800B43D4
    b lbl_800B46F4
lbl_800B4254:
    cmpwi r28, 0x1b4
    bge lbl_800B4288
    b lbl_800B46F4
lbl_800B4260:
    cmpwi r28, 0x1e6
    bge lbl_800B427C
    cmpwi r28, 0x1e3
    bge lbl_800B4310
    cmpwi r28, 0x1b7
    bge lbl_800B46F4
    b lbl_800B4288
lbl_800B427C:
    cmpwi r28, 0x1e8
    beq lbl_800B4310
    b lbl_800B46F4
lbl_800B4288:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    opword 0x4C401382
    bne lbl_800B429C
    stfs f16, 0x30(r1)
lbl_800B429C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    opword 0x4C401382
    bne lbl_800B42B0
    stfs f17, 0x34(r1)
lbl_800B42B0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B42C4
    stfs f18, 0x34(r1)
lbl_800B42C4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f26, 0x38(r1)
    b lbl_800B47F8
lbl_800B42DC:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B42EC
    stfs f16, 0x30(r1)
lbl_800B42EC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    bge lbl_800B42FC
    stfs f19, 0x34(r1)
lbl_800B42FC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f15
    ble lbl_800B47F8
    stfs f15, 0x34(r1)
    b lbl_800B47F8
lbl_800B4310:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B4324
    stfs f20, 0x30(r1)
lbl_800B4324:
    cmpwi r31, 0x0
    bne lbl_800B4380
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4340
    stfs f21, 0x34(r1)
lbl_800B4340:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B4354
    stfs f18, 0x34(r1)
lbl_800B4354:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4368
    stfs f21, 0x38(r1)
lbl_800B4368:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f21, 0x38(r1)
    b lbl_800B47F8
lbl_800B4380:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4394
    stfs f21, 0x34(r1)
lbl_800B4394:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B43A8
    stfs f18, 0x34(r1)
lbl_800B43A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B43BC
    stfs f21, 0x38(r1)
lbl_800B43BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f21, 0x38(r1)
    b lbl_800B47F8
lbl_800B43D4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B43E8
    stfs f20, 0x30(r1)
lbl_800B43E8:
    cmpwi r31, 0x0
    bne lbl_800B44D4
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B446C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    bge lbl_800B446C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B442C
    stfs f22, 0x34(r1)
lbl_800B442C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B4440
    stfs f23, 0x34(r1)
lbl_800B4440:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B4454
    stfs f24, 0x38(r1)
lbl_800B4454:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f20, 0x38(r1)
    b lbl_800B47F8
lbl_800B446C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    blt lbl_800B47F8
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B4494
    stfs f22, 0x34(r1)
lbl_800B4494:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B44A8
    stfs f23, 0x34(r1)
lbl_800B44A8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B44BC
    stfs f20, 0x38(r1)
lbl_800B44BC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f20, 0x38(r1)
    b lbl_800B47F8
lbl_800B44D4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B44E8
    stfs f21, 0x34(r1)
lbl_800B44E8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B44FC
    stfs f18, 0x34(r1)
lbl_800B44FC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4510
    stfs f21, 0x38(r1)
lbl_800B4510:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B4524
    stfs f18, 0x38(r1)
lbl_800B4524:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x20
    blt lbl_800B45A0
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    bge lbl_800B45A0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4560
    stfs f21, 0x34(r1)
lbl_800B4560:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B4574
    stfs f18, 0x34(r1)
lbl_800B4574:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B4588
    stfs f21, 0x38(r1)
lbl_800B4588:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f18, 0x38(r1)
    b lbl_800B47F8
lbl_800B45A0:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x2d
    blt lbl_800B461C
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    bge lbl_800B461C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B45DC
    stfs f25, 0x34(r1)
lbl_800B45DC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f21
    opword 0x4C411382
    bne lbl_800B45F0
    stfs f22, 0x34(r1)
lbl_800B45F0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B4604
    stfs f24, 0x38(r1)
lbl_800B4604:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f28, 0x38(r1)
    b lbl_800B47F8
lbl_800B461C:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x38
    blt lbl_800B47F8
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x46
    bge lbl_800B47F8
    cmpwi r31, 0x1
    bne lbl_800B46A0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B4660
    stfs f26, 0x34(r1)
lbl_800B4660:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B4674
    stfs f25, 0x34(r1)
lbl_800B4674:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B4688
    stfs f22, 0x38(r1)
lbl_800B4688:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f22, 0x38(r1)
    b lbl_800B47F8
lbl_800B46A0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B46B4
    stfs f24, 0x34(r1)
lbl_800B46B4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B46C8
    stfs f26, 0x34(r1)
lbl_800B46C8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B46DC
    stfs f26, 0x38(r1)
lbl_800B46DC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f25, 0x38(r1)
    b lbl_800B47F8
lbl_800B46F4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B4708
    stfs f27, 0x30(r1)
lbl_800B4708:
    cmpwi r31, 0x0
    bne lbl_800B4764
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B4724
    stfs f25, 0x34(r1)
lbl_800B4724:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B4738
    stfs f20, 0x34(r1)
lbl_800B4738:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B474C
    stfs f25, 0x38(r1)
lbl_800B474C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f28, 0x38(r1)
    b lbl_800B47F8
lbl_800B4764:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B4778
    stfs f25, 0x34(r1)
lbl_800B4778:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B478C
    stfs f20, 0x34(r1)
lbl_800B478C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B47A0
    stfs f24, 0x38(r1)
lbl_800B47A0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800B47B4
    stfs f15, 0x38(r1)
lbl_800B47B4:
    cmpwi r28, 0xa1
    bne lbl_800B47F8
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800B47F8
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B47E4
    stfs f20, 0x38(r1)
lbl_800B47E4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f15
    opword 0x4C411382
    bne lbl_800B47F8
    stfs f15, 0x38(r1)
lbl_800B47F8:
    cmpwi r31, 0x0
    bne lbl_800B4A04
    cmpwi r28, 0x92
    beq lbl_800B4888
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    ble lbl_800B4820
    fadds f0, f20, f0
    stfs f0, 0x38(r1)
lbl_800B4820:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B4838
    fadds f0, f30, f0
    stfs f0, 0x38(r1)
lbl_800B4838:
    lwz r3, 0xb70(r27)
    lfs f0, 0x34(r3)
    fcmpo cr0, f0, f24
    bge lbl_800B4850
    fadds f0, f20, f0
    stfs f0, 0x34(r1)
lbl_800B4850:
    lwz r3, 0xb70(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B486C
    fadds f0, f30, f1
    stfs f0, 0x34(r1)
lbl_800B486C:
    lwz r3, 0xb70(r27)
    lfs f1, 0x34(r3)
    lfd f0, 0x138(r1)
    fcmpo cr0, f1, f0
    bge lbl_800B4888
    fadds f0, f28, f1
    stfs f0, 0x34(r1)
lbl_800B4888:
    cmpwi r28, 0x31
    bne lbl_800B48BC
    lwz r3, 0xb70(r27)
    lfs f1, 0x38(r3)
    lfd f0, 0x140(r1)
    fmuls f0, f0, f1
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x148(r1)
    fmuls f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B48BC:
    cmpwi r28, 0x92
    bne lbl_800B4A04
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bgt lbl_800B4920
    lwz r3, 0x3780(r26)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800B4A04
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f25
    ble lbl_800B4904
    fadds f0, f20, f0
    stfs f0, 0x38(r1)
lbl_800B4904:
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fcmpo cr0, f0, f29
    ble lbl_800B4A04
    fadds f0, f30, f0
    stfs f0, 0x38(r1)
    b lbl_800B4A04
lbl_800B4920:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    bge lbl_800B4974
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    ble lbl_800B4974
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f30, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x150(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B4A04
lbl_800B4974:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    bge lbl_800B49C8
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1b
    blt lbl_800B49C8
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x158(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
    b lbl_800B4A04
lbl_800B49C8:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x30
    blt lbl_800B4A04
    lwz r3, 0xb70(r27)
    lfs f0, 0x38(r3)
    fadds f0, f31, f0
    stfs f0, 0x38(r1)
    lfs f1, 0x34(r3)
    lfd f0, 0x160(r1)
    fadds f0, f0, f1
    stfs f0, 0x34(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x30(r1)
lbl_800B4A04:
    add r4, r27, r24
    lwz r3, 0x800(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x800(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x800(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x800(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x800(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x800(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B3FC0
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

// asm_to_cpp: fn_800B4BA8
asm void fn_800B4BA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x280
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
    stfs f1, 0x10(r1)
    fmr f14, f2
    addi r3, r1, 0x90
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x80
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x70
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x60
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x50
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    addi r3, r1, 0x30
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    fmr f4, f1
    bl fn_80020D20
    li r31, 0x0
    li r25, 0x0
    li r24, 0x0
    la r3, lbl_8049F6A0
    lfs f16, 0x8(r3)
    lfs f17, 0x30(r3)
    lfs f19, 0x44(r3)
    lfs f20, lbl_8049F6A0
    lfs f18, 0x3c(r3)
    lfs f22, 0x20(r3)
    lfs f23, 0x48(r3)
    lfs f24, 0x94(r3)
    lfs f0, 0x98(r3)
    stfd f0, 0x130(r1)
    lfs f25, 0x1c(r3)
    lfs f26, 0x54(r3)
    lfs f27, 0x50(r3)
    lfs f28, 0x40(r3)
    lfs f29, 0x4c(r3)
    lfs f30, 0x58(r3)
    lfs f31, 0x9c(r3)
    lfs f21, 0x84(r3)
    lfs f15, 0x24(r3)
lbl_800B4D60:
    add r3, r27, r24
    lwz r3, 0x9a8(r3)
    addi r3, r3, 0x10
    lfs f1, lbl_8049F6A0
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    cmpwi r31, 0x0
    bne lbl_800B4DC4
    add r4, r27, r25
    addi r3, r4, 0xa88
    addi r4, r4, 0x9c8
    bl fn_801734E4
    addi r3, r1, 0xd0
    lwz r4, 0x9a4(r27)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x9a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x9c8
    addi r4, r1, 0xd0
    bl fn_801734E4
    b lbl_800B4E0C
lbl_800B4DC4:
    add r4, r27, r25
    addi r3, r4, 0xa88
    addi r4, r4, 0x9c8
    bl fn_801734E4
    addi r3, r1, 0xd0
    subi r0, r31, 0x1
    slwi r0, r0, 2
    add r4, r27, r0
    lwz r4, 0x9b8(r4)
    addi r4, r4, 0x224
    add r5, r27, r24
    lwz r5, 0x9a8(r5)
    addi r5, r5, 0x50
    bl fn_8017375C
    add r3, r27, r25
    addi r3, r3, 0x9c8
    addi r4, r1, 0xd0
    bl fn_801734E4
lbl_800B4E0C:
    addi r3, r1, 0x90
    add r4, r27, r25
    addi r4, r4, 0x9c8
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x80
    add r4, r27, r25
    addi r4, r4, 0xa88
    mr r5, r30
    bl fn_80018AF8
    addi r3, r1, 0x60
    addi r4, r1, 0x80
    addi r5, r1, 0x90
    bl fn_80018AFC
    addi r3, r1, 0x50
    addi r4, r1, 0x60
    lfs f1, 0x10(r1)
    bl fn_800515DC
    addi r3, r1, 0x50
    mr r4, r3
    mr r5, r29
    bl fn_80018AF4
    addi r3, r1, 0x100
    addi r4, r1, 0xd0
    bl fn_80173754
    addi r3, r1, 0x30
    addi r4, r1, 0x100
    addi r5, r1, 0x50
    bl fn_80018B04
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_800515D8
    cmpwi r31, 0x2
    bge lbl_800B4EA0
    cmpwi r31, 0x0
    bge lbl_800B4EAC
    b lbl_800B4ED0
lbl_800B4EA0:
    cmpwi r31, 0x4
    bge lbl_800B4ED0
    b lbl_800B4EC0
lbl_800B4EAC:
    addi r3, r1, 0xa0
    lwz r4, 0xb7c(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
    b lbl_800B4ED0
lbl_800B4EC0:
    addi r3, r1, 0xa0
    lwz r4, 0xb80(r27)
    addi r4, r4, 0x224
    bl fn_801734E4
lbl_800B4ED0:
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
    stfs f29, 0x40(r1)
    stfs f15, 0x44(r1)
    stfs f20, 0x48(r1)
    stfs f20, 0x4c(r1)
    cmpwi r28, 0x8a
    beq lbl_800B57A8
    bge lbl_800B4FA0
    cmpwi r28, 0x2e
    beq lbl_800B4FE4
    bge lbl_800B4F70
    cmpwi r28, 0x2a
    bge lbl_800B4F64
    cmpwi r28, 0x12
    bge lbl_800B57A8
    cmpwi r28, 0x10
    bge lbl_800B4FE4
    b lbl_800B57A8
lbl_800B4F64:
    cmpwi r28, 0x2c
    bge lbl_800B57A8
    b lbl_800B4FE4
lbl_800B4F70:
    cmpwi r28, 0x84
    bge lbl_800B4F8C
    cmpwi r28, 0x6b
    bge lbl_800B57A8
    cmpwi r28, 0x66
    bge lbl_800B4FE4
    b lbl_800B57A8
lbl_800B4F8C:
    cmpwi r28, 0x88
    bge lbl_800B4FE4
    cmpwi r28, 0x86
    bge lbl_800B57A8
    b lbl_800B4FE4
lbl_800B4FA0:
    cmpwi r28, 0x160
    beq lbl_800B5018
    bge lbl_800B4FC4
    cmpwi r28, 0x92
    beq lbl_800B5110
    bge lbl_800B57A8
    cmpwi r28, 0x8c
    bge lbl_800B57A8
    b lbl_800B4FE4
lbl_800B4FC4:
    cmpwi r28, 0x1e8
    beq lbl_800B504C
    bge lbl_800B57A8
    cmpwi r28, 0x1e6
    bge lbl_800B57A8
    cmpwi r28, 0x1e3
    bge lbl_800B504C
    b lbl_800B57A8
lbl_800B4FE4:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B4FF4
    stfs f16, 0x30(r1)
lbl_800B4FF4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B5004
    stfs f17, 0x34(r1)
lbl_800B5004:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    ble lbl_800B5868
    stfs f18, 0x34(r1)
    b lbl_800B5868
lbl_800B5018:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f16
    bge lbl_800B5028
    stfs f16, 0x30(r1)
lbl_800B5028:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f17
    bge lbl_800B5038
    stfs f17, 0x34(r1)
lbl_800B5038:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f15
    ble lbl_800B5868
    stfs f15, 0x34(r1)
    b lbl_800B5868
lbl_800B504C:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B5060
    stfs f18, 0x30(r1)
lbl_800B5060:
    cmpwi r31, 0x0
    bne lbl_800B50BC
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B507C
    stfs f19, 0x34(r1)
lbl_800B507C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B5090
    stfs f20, 0x34(r1)
lbl_800B5090:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B50A4
    stfs f19, 0x38(r1)
lbl_800B50A4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B5868
    stfs f19, 0x38(r1)
    b lbl_800B5868
lbl_800B50BC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B50D0
    stfs f19, 0x34(r1)
lbl_800B50D0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B50E4
    stfs f20, 0x34(r1)
lbl_800B50E4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C401382
    bne lbl_800B50F8
    stfs f19, 0x38(r1)
lbl_800B50F8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f19
    opword 0x4C411382
    bne lbl_800B5868
    stfs f19, 0x38(r1)
    b lbl_800B5868
lbl_800B5110:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B5124
    stfs f21, 0x30(r1)
lbl_800B5124:
    cmpwi r31, 0x0
    bne lbl_800B52F8
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B51A8
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    bge lbl_800B51A8
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5168
    stfs f22, 0x34(r1)
lbl_800B5168:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B517C
    stfs f23, 0x34(r1)
lbl_800B517C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5190
    stfs f22, 0x38(r1)
lbl_800B5190:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B5868
    stfs f28, 0x38(r1)
    b lbl_800B5868
lbl_800B51A8:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0xf
    blt lbl_800B5228
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    bge lbl_800B5228
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f24
    opword 0x4C401382
    bne lbl_800B51E4
    stfs f24, 0x34(r1)
lbl_800B51E4:
    lfs f1, 0x34(r1)
    lfd f0, 0x130(r1)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800B51FC
    stfs f0, 0x34(r1)
lbl_800B51FC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5210
    stfs f22, 0x38(r1)
lbl_800B5210:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B5868
    stfs f28, 0x38(r1)
    b lbl_800B5868
lbl_800B5228:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    blt lbl_800B52A4
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x28
    bge lbl_800B52A4
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5264
    stfs f22, 0x34(r1)
lbl_800B5264:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5278
    stfs f18, 0x34(r1)
lbl_800B5278:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B528C
    stfs f25, 0x38(r1)
lbl_800B528C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5868
    stfs f18, 0x38(r1)
    b lbl_800B5868
lbl_800B52A4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B52B8
    stfs f26, 0x34(r1)
lbl_800B52B8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B52CC
    stfs f26, 0x34(r1)
lbl_800B52CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B52E0
    stfs f25, 0x38(r1)
lbl_800B52E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5868
    stfs f18, 0x38(r1)
    b lbl_800B5868
lbl_800B52F8:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x0
    blt lbl_800B5374
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x14
    bge lbl_800B5374
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B5334
    stfs f27, 0x34(r1)
lbl_800B5334:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5348
    stfs f18, 0x34(r1)
lbl_800B5348:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B535C
    stfs f22, 0x38(r1)
lbl_800B535C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C411382
    bne lbl_800B5868
    stfs f20, 0x38(r1)
    b lbl_800B5868
lbl_800B5374:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x14
    blt lbl_800B54A8
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    bge lbl_800B54A8
    cmpwi r31, 0x1
    bne lbl_800B53F8
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B53B8
    stfs f27, 0x34(r1)
lbl_800B53B8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B53CC
    stfs f28, 0x34(r1)
lbl_800B53CC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B53E0
    stfs f22, 0x38(r1)
lbl_800B53E0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B5868
    stfs f28, 0x38(r1)
    b lbl_800B5868
lbl_800B53F8:
    cmpwi r31, 0x2
    bne lbl_800B5454
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C401382
    bne lbl_800B5414
    stfs f23, 0x34(r1)
lbl_800B5414:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B5428
    stfs f23, 0x34(r1)
lbl_800B5428:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B543C
    stfs f28, 0x38(r1)
lbl_800B543C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B5868
    stfs f28, 0x38(r1)
    b lbl_800B5868
lbl_800B5454:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5468
    stfs f22, 0x34(r1)
lbl_800B5468:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C411382
    bne lbl_800B547C
    stfs f22, 0x34(r1)
lbl_800B547C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B5490
    stfs f25, 0x38(r1)
lbl_800B5490:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f25
    opword 0x4C411382
    bne lbl_800B5868
    stfs f25, 0x38(r1)
    b lbl_800B5868
lbl_800B54A8:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x1e
    blt lbl_800B55DC
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x28
    bge lbl_800B55DC
    cmpwi r31, 0x1
    bne lbl_800B552C
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B54EC
    stfs f28, 0x34(r1)
lbl_800B54EC:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C411382
    bne lbl_800B5500
    stfs f28, 0x34(r1)
lbl_800B5500:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B5514
    stfs f29, 0x38(r1)
lbl_800B5514:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B5868
    stfs f29, 0x38(r1)
    b lbl_800B5868
lbl_800B552C:
    cmpwi r31, 0x2
    bne lbl_800B5588
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f30
    opword 0x4C401382
    bne lbl_800B5548
    stfs f30, 0x34(r1)
lbl_800B5548:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_800B555C
    stfs f30, 0x34(r1)
lbl_800B555C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B5570
    stfs f18, 0x38(r1)
lbl_800B5570:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5868
    stfs f18, 0x38(r1)
    b lbl_800B5868
lbl_800B5588:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C401382
    bne lbl_800B559C
    stfs f31, 0x34(r1)
lbl_800B559C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f31
    opword 0x4C411382
    bne lbl_800B55B0
    stfs f31, 0x34(r1)
lbl_800B55B0:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B55C4
    stfs f26, 0x38(r1)
lbl_800B55C4:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B5868
    stfs f26, 0x38(r1)
    b lbl_800B5868
lbl_800B55DC:
    cmpwi r31, 0x1
    bne lbl_800B5678
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B5624
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B560C
    stfs f29, 0x34(r1)
lbl_800B560C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B564C
    stfs f29, 0x34(r1)
    b lbl_800B564C
lbl_800B5624:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B5638
    stfs f22, 0x34(r1)
lbl_800B5638:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B564C
    stfs f29, 0x34(r1)
lbl_800B564C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C401382
    bne lbl_800B5660
    stfs f29, 0x38(r1)
lbl_800B5660:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B5868
    stfs f29, 0x38(r1)
    b lbl_800B5868
lbl_800B5678:
    cmpwi r31, 0x2
    bne lbl_800B5714
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B56C0
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B56A8
    stfs f18, 0x34(r1)
lbl_800B56A8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B56E8
    stfs f18, 0x34(r1)
    b lbl_800B56E8
lbl_800B56C0:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f25
    opword 0x4C401382
    bne lbl_800B56D4
    stfs f25, 0x34(r1)
lbl_800B56D4:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B56E8
    stfs f18, 0x34(r1)
lbl_800B56E8:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C401382
    bne lbl_800B56FC
    stfs f18, 0x38(r1)
lbl_800B56FC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5868
    stfs f18, 0x38(r1)
    b lbl_800B5868
lbl_800B5714:
    lwz r3, 0x3780(r26)
    lfs f1, 0xc(r3)
    bl fn_80061FB8
    cmpwi r3, 0x32
    bge lbl_800B5754
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B573C
    stfs f26, 0x34(r1)
lbl_800B573C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B577C
    stfs f26, 0x34(r1)
    b lbl_800B577C
lbl_800B5754:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f28
    opword 0x4C401382
    bne lbl_800B5768
    stfs f28, 0x34(r1)
lbl_800B5768:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B577C
    stfs f26, 0x34(r1)
lbl_800B577C:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B5790
    stfs f26, 0x38(r1)
lbl_800B5790:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C411382
    bne lbl_800B5868
    stfs f26, 0x38(r1)
    b lbl_800B5868
lbl_800B57A8:
    lfs f0, 0x30(r1)
    fcmpo cr0, f0, f21
    opword 0x4C401382
    bne lbl_800B57BC
    stfs f21, 0x30(r1)
lbl_800B57BC:
    cmpwi r31, 0x0
    bne lbl_800B5818
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f22
    opword 0x4C401382
    bne lbl_800B57D8
    stfs f22, 0x34(r1)
lbl_800B57D8:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f23
    opword 0x4C411382
    bne lbl_800B57EC
    stfs f23, 0x34(r1)
lbl_800B57EC:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f26
    opword 0x4C401382
    bne lbl_800B5800
    stfs f26, 0x38(r1)
lbl_800B5800:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B5868
    stfs f29, 0x38(r1)
    b lbl_800B5868
lbl_800B5818:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f27
    opword 0x4C401382
    bne lbl_800B582C
    stfs f27, 0x34(r1)
lbl_800B582C:
    lfs f0, 0x34(r1)
    fcmpo cr0, f0, f18
    opword 0x4C411382
    bne lbl_800B5840
    stfs f18, 0x34(r1)
lbl_800B5840:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f20
    opword 0x4C401382
    bne lbl_800B5854
    stfs f20, 0x38(r1)
lbl_800B5854:
    lfs f0, 0x38(r1)
    fcmpo cr0, f0, f29
    opword 0x4C411382
    bne lbl_800B5868
    stfs f29, 0x38(r1)
lbl_800B5868:
    add r4, r27, r24
    lwz r3, 0x9a8(r4)
    lfs f0, 0x30(r1)
    lfs f1, 0x30(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x30(r3)
    lwz r3, 0x9a8(r4)
    lfs f0, 0x34(r1)
    lfs f1, 0x34(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x34(r3)
    lwz r3, 0x9a8(r4)
    lfs f0, 0x38(r1)
    lfs f1, 0x38(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x38(r3)
    lwz r3, 0x9a8(r4)
    lfs f0, 0x3c(r1)
    lfs f1, 0x3c(r3)
    fsubs f0, f0, f1
    fmuls f0, f14, f0
    fadds f0, f1, f0
    stfs f0, 0x3c(r3)
    lwz r3, 0x9a8(r4)
    addi r3, r3, 0x30
    mr r4, r3
    bl fn_800515D8
    add r3, r27, r24
    lwz r3, 0x9a8(r3)
    lwz r0, 0x0(r3)
    ori r0, r0, 0xe01
    stw r0, 0x0(r3)
    addi r31, r31, 0x1
    addi r25, r25, 0x30
    addi r24, r24, 0x4
    cmpwi r31, 0x4
    blt lbl_800B4D60
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

} // extern "C"
