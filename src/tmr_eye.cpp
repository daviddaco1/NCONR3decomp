#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_8010A004_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_8010A004_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));

__declspec(section ".sdata2") extern const f32 lbl_804A06D8[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_801065CC(s32 arg0, s32 arg1);
s32 fn_801065D4(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_80106AB8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8010A004(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_801065CC(s32 arg0, s32 arg1) {
    fn_801065D4((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_801065D4(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x10), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x508), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x508));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x94) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x98) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x9C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0xA0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0xA4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0xA8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x8C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x90) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x138)), (s32) ((s32) (var_r31 + 0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x1C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x1CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s8 **, 0x1D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA6)));
        M2C_FIELD(var_r31, s32 *, 0x1D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x1D8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1CC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x1D0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x208)), (s32) ((s32) (var_r31 + 0x1D8)));
        M2C_FIELD(var_r31, s8 **, 0x238) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s32 *, 0x23C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAA)));
        M2C_FIELD(var_r31, s8 **, 0x240) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAB)));
        M2C_FIELD(var_r31, s32 *, 0x244) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x248)), (s32) (M2C_FIELD(var_r31, s32 *, 0x23C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x240) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x278)), (s32) ((s32) (var_r31 + 0x248)));
        M2C_FIELD(var_r31, s8 **, 0x2A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x2AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x2B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s8 **, 0x2B4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s8 **, 0x2B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA9)));
        M2C_FIELD(var_r31, s32 *, 0x2BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA7)));
        M2C_FIELD(var_r31, s32 *, 0x2C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA8)));
        M2C_FIELD(var_r31, s32 *, 0x2C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2C8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x2AC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x2B0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x358)), (s32) ((s32) (var_r31 + 0x2C8)));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s32 *, 0x3EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAC)));
        M2C_FIELD(var_r31, s8 **, 0x3F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAD)));
        M2C_FIELD(var_r31, s32 *, 0x3F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x3F8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x3EC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x3F0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x428)), (s32) ((s32) (var_r31 + 0x3F8)));
        M2C_FIELD(var_r31, s8 **, 0x458) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x45C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x460) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x464) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0x468) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0x46C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x470) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x474) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0x478) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x47C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x480) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x484) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x488) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x48C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x490) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x494) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0x498) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x49C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x4A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xAE)));
        M2C_FIELD(var_r31, s32 *, 0x4A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xAE)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4A8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x49C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4A0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x4D8)), (s32) ((s32) (var_r31 + 0x4A8)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x10), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_80106AB8((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_8010A004(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    SK_fn_8010A004_A0 spA0;
    SK_fn_8010A004_70 sp70;
    SK_fn_8010A004_60 sp60;
    SK_fn_8010A004_50 sp50;
    SK_fn_8010A004_40 sp40;
    SK_fn_8010A004_30 sp30;
    SK_fn_8010A004_20 sp20;
    SK_fn_8010A004_10 sp10;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0], lbl_804A06D8[0]);
    fn_801734E4((s32) (arg1 + 0x4D8), (s32) (arg1 + 0x4A8));
    fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x49C) + 0x224), (s32) (M2C_FIELD(arg1, s8 **, 0x4A0) + 0x50));
    fn_801734E4((s32) (arg1 + 0x4A8), (s32) ((s32) &sp70));
    fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + 0x4A8), (s32) (arg4));
    fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + 0x4D8), (s32) (arg4));
    fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
    fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0);
    fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
    fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
    fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp30));
    fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
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
        if (sp10.f_0 < lbl_804A06D8[1]) {
            sp10.f_0 = lbl_804A06D8[1];
        }
        if (sp10.f_4 < lbl_804A06D8[19]) {
            sp10.f_4 = lbl_804A06D8[19];
        }
        if (sp10.f_4 > lbl_804A06D8[8]) {
            sp10.f_4 = lbl_804A06D8[8];
        }
        break;
    default:
        if (sp10.f_0 <= lbl_804A06D8[8]) {
            sp10.f_0 = lbl_804A06D8[8];
        }
        if (sp10.f_0 >= lbl_804A06D8[1]) {
            sp10.f_0 = lbl_804A06D8[1];
        }
        if (sp10.f_4 <= lbl_804A06D8[32]) {
            sp10.f_4 = lbl_804A06D8[32];
        }
        if (sp10.f_4 >= lbl_804A06D8[8]) {
            sp10.f_4 = lbl_804A06D8[8];
        }
        if (sp10.f_8 <= lbl_804A06D8[14]) {
            sp10.f_8 = lbl_804A06D8[14];
        }
        if (sp10.f_8 >= lbl_804A06D8[27]) {
            sp10.f_8 = lbl_804A06D8[27];
        }
        break;
    }
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x30) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x30)) + (farg1 * (sp10.f_0 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x30)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x34) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x34)) + (farg1 * (sp10.f_4 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x34)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x38) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x38)) + (farg1 * (sp10.f_8 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x38)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x3C) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x3C)) + (farg1 * (sp10.f_C - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), f32 *, 0x3C)))));
    fn_8001B8B0((s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x4A0) + 0x30)), (s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x4A0) + 0x30)));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), s32 *, 0) = (s32) ((s32) (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x4A0)), s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
