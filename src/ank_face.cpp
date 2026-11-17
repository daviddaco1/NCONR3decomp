#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800AFDA0_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AFDA0_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800AFDA0_temp_r4_3 {
    u8 pad_0[0x20];
    s8 * f_20;
};
__declspec(section ".sdata2") extern const f32 lbl_8049F6A0[];

void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
f32 fn_800515D8(s32 arg0, s32 arg1);
void fn_800515DC(s32 arg0, s32 arg1, f32 farg0_x);
void fn_800AF334(s32 arg0, s32 arg1);
s32 fn_800AF33C(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800AFA20(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800AFDA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x);
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

#pragma dont_inline on
s32 fn_800AFDA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x) {
    SK_fn_800AFDA0_A0 spA0;
    SK_fn_800AFDA0_70 sp70;
    SK_fn_800AFDA0_60 sp60;
    SK_fn_800AFDA0_50 sp50;
    SK_fn_800AFDA0_40 sp40;
    SK_fn_800AFDA0_30 sp30;
    SK_fn_800AFDA0_20 sp20;
    SK_fn_800AFDA0_10 sp10;
    s32 var_r31;
    S_fn_800AFDA0_temp_r4_3 *temp_r4_3;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
    var_r31 = (s32) (0);
    do {
        fn_80018B0C((M2C_UNK *) ((s8 *) M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x10), lbl_8049F6A0[0], lbl_8049F6A0[0], lbl_8049F6A0[0]);
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0xC8), (s32) (tx_matrix1 + 0x38)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) ((s32) &sp70));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0xC8), (s32) (tx_matrix2 + 0x38)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x2C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) ((s32) &sp70));
        }
        fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + (var_r31 * 0x30) + 0xC8), (s32) (arg4));
        fn_80018AFC((s32) ((s32) &sp30), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
        fn_800515DC((s32) ((s32) &sp20), (s32) ((s32) &sp30), farg0_x);
        fn_80018AF4((s32) ((s32) &sp20), (s32) ((s32) &sp20), (s32) (arg3));
        fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp20));
        fn_800515D8((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        switch (arg2) {                             /* irregular */
        case 0x10:
        case 0x11:
        case 0x2A:
        case 0x2B:
        case 0x2E:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x84:
        case 0x85:
        case 0x88:
        case 0x89:
        case 0x8B:
            if (sp10.f_0 <= lbl_8049F6A0[2]) {
                sp10.f_0 = lbl_8049F6A0[2];
            }
            if (sp10.f_4 <= lbl_8049F6A0[6]) {
                sp10.f_4 = lbl_8049F6A0[6];
            }
            if (sp10.f_4 >= lbl_8049F6A0[0]) {
                sp10.f_4 = lbl_8049F6A0[0];
            }
            if (sp10.f_8 <= lbl_8049F6A0[7]) {
                sp10.f_8 = lbl_8049F6A0[7];
            }
            if (sp10.f_8 >= lbl_8049F6A0[0]) {
                sp10.f_8 = lbl_8049F6A0[0];
            }
            break;
        default:
            if (sp10.f_0 <= lbl_8049F6A0[2]) {
                sp10.f_0 = lbl_8049F6A0[2];
            }
            if (var_r31 == 0) {
                if (sp10.f_4 <= lbl_8049F6A0[8]) {
                    sp10.f_4 = lbl_8049F6A0[8];
                }
                if (sp10.f_4 >= lbl_8049F6A0[9]) {
                    sp10.f_4 = lbl_8049F6A0[9];
                }
                if (sp10.f_8 <= lbl_8049F6A0[10]) {
                    sp10.f_8 = lbl_8049F6A0[10];
                }
                if (sp10.f_8 >= lbl_8049F6A0[11]) {
                    sp10.f_8 = lbl_8049F6A0[11];
                }
            } else {
                if (sp10.f_4 <= lbl_8049F6A0[12]) {
                    sp10.f_4 = lbl_8049F6A0[12];
                }
                if (sp10.f_4 >= lbl_8049F6A0[13]) {
                    sp10.f_4 = lbl_8049F6A0[13];
                }
                if (sp10.f_8 <= lbl_8049F6A0[14]) {
                    sp10.f_8 = lbl_8049F6A0[14];
                }
                if (sp10.f_8 >= lbl_8049F6A0[5]) {
                    sp10.f_8 = lbl_8049F6A0[5];
                }
            }
            break;
        }
        temp_r4_3 = (S_fn_800AFDA0_temp_r4_3 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_3->f_20), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_3->f_20), f32 *, 0x30)) + (farg1_x * (sp10.f_0 - (M2C_FIELD((temp_r4_3->f_20), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_3->f_20), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_3->f_20), f32 *, 0x34)) + (farg1_x * (sp10.f_4 - (M2C_FIELD((temp_r4_3->f_20), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_3->f_20), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_3->f_20), f32 *, 0x38)) + (farg1_x * (sp10.f_8 - (M2C_FIELD((temp_r4_3->f_20), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_3->f_20), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_3->f_20), f32 *, 0x3C)) + (farg1_x * (sp10.f_C - (M2C_FIELD((temp_r4_3->f_20), f32 *, 0x3C)))));
        fn_800515D8((s32) ((s32) (temp_r4_3->f_20 + 0x30)), (s32) ((s32) (temp_r4_3->f_20 + 0x30)));
        *(u32 *)(M2C_FIELD((arg1 + (var_r31 * 4)), s8 **, 0x20)) |= 0xE01;
        var_r31 += 1;
    } while (var_r31 < 3);
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
