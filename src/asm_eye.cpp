#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800B654C_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800B654C_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
extern u8 lbl_8034D640[];
__declspec(section ".sdata2") extern const f32 lbl_8049F7A0[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800B5FF0(s32 arg0, s32 arg1);
s32 fn_800B5FF8(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800B632C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800B654C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_80165C74(s32 arg0, ...);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800B5FF0(s32 arg0, s32 arg1) {
    fn_800B5FF8((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800B5FF8(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x2C), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x220), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x220));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s32 *, 0x94) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x98)), (s32) (M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0xC8)), (s32) ((s32) (var_r31 + 0x98)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0xFC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s8 **, 0x104) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCB)));
        M2C_FIELD(var_r31, s32 *, 0x108) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s32 *, 0x10C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x110)), (s32) (M2C_FIELD(var_r31, s32 *, 0xFC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x100) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x170)), (s32) ((s32) (var_r31 + 0x110)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s32 *, 0x1D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s8 **, 0x1D8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s8 **, 0x1DC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s32 *, 0x1E0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s32 *, 0x1E4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s8 **, 0x1E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s32 *, 0x1EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s8 **, 0x1F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s8 **, 0x1F4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA)));
        M2C_FIELD(var_r31, s32 *, 0x1F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s32 *, 0x1FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA)));
        M2C_FIELD(var_r31, s8 **, 0x200) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x204) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x208) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x20C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x210) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x214) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x218) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x21C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x2C), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800B632C((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800B654C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    SK_fn_800B654C_A0 spA0;
    SK_fn_800B654C_70 sp70;
    SK_fn_800B654C_60 sp60;
    SK_fn_800B654C_50 sp50;
    SK_fn_800B654C_40 sp40;
    SK_fn_800B654C_30 sp30;
    SK_fn_800B654C_20 sp20;
    SK_fn_800B654C_10 sp10;
    s32 temp_ret;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0], lbl_8049F7A0[0]);
    fn_801734E4((s32) (arg1 + 0x58), (s32) (arg1 + 0x28));
    fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + 0x224), (s32) (M2C_FIELD(arg1, s8 **, 0x20) + 0x50));
    fn_801734E4((s32) (arg1 + 0x28), (s32) ((s32) &sp70));
    fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + 0x28), (s32) (arg4));
    fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + 0x58), (s32) (arg4));
    fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
    fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0);
    fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
    fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
    fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp30));
    fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
    fn_80165C74((s32) &lbl_8034D640);
    switch (arg2) {                                 /* irregular */
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
        if (sp10.f_0 < lbl_8049F7A0[1]) {
            sp10.f_0 = lbl_8049F7A0[1];
        }
        if (sp10.f_4 < lbl_8049F7A0[7]) {
            sp10.f_4 = lbl_8049F7A0[7];
        }
        if (sp10.f_4 > lbl_8049F7A0[8]) {
            sp10.f_4 = lbl_8049F7A0[8];
        }
        break;
    default:
        if (lbl_8049F7A0[9] != sp10.f_0) {
            sp10.f_0 = lbl_8049F7A0[9];
        }
        if (sp10.f_4 <= lbl_8049F7A0[10]) {
            sp10.f_4 = lbl_8049F7A0[10];
        }
        if (sp10.f_4 >= lbl_8049F7A0[11]) {
            sp10.f_4 = lbl_8049F7A0[11];
        }
        if (sp10.f_8 <= lbl_8049F7A0[10]) {
            sp10.f_8 = lbl_8049F7A0[10];
        }
        if (sp10.f_8 >= lbl_8049F7A0[11]) {
            sp10.f_8 = lbl_8049F7A0[11];
        }
        if ((*M2C_FIELD(arg0, s32 **, 0x3780) & 4) != 0) {
            sp10.f_4 *= lbl_8049F7A0[2];
            sp10.f_8 *= lbl_8049F7A0[2];
        }
        break;
    }
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x30) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x30)) + (farg1 * (sp10.f_0 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x30)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x34) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x34)) + (farg1 * (sp10.f_4 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x34)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x38) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x38)) + (farg1 * (sp10.f_8 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x38)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x3C) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x3C)) + (farg1 * (sp10.f_C - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), f32 *, 0x3C)))));
    fn_8001B8B0((s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x20) + 0x30)), (s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x20) + 0x30)));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), s32 *, 0) = (s32) ((s32) (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x20)), s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
