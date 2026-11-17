#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800E009C_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800E009C_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));

__declspec(section ".sdata2") extern const f32 lbl_804A00E0[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800DF938(s32 arg0, s32 arg1);
s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800DFECC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800E009C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800DF938(s32 arg0, s32 arg1) {
    fn_800DF940((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x3C), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x788), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x788));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD0)));
        temp_r3_2 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD0)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x88) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x20));
        M2C_FIELD(var_r31, s32 *, 0x8C) = (s32) (temp_r3_2);
        M2C_FIELD(var_r31, s8 **, 0x90) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD1)));
        temp_r3_3 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD1)));
        M2C_FIELD(var_r31, s32 *, 0x94) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x90));
        M2C_FIELD(var_r31, s32 *, 0xFC) = (s32) (temp_r3_3);
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD2)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD2)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        M2C_FIELD(var_r31, s8 **, 0x168) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x16C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x170) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD3)));
        temp_r3_4 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD3)));
        M2C_FIELD(var_r31, s32 *, 0x174) = (s32) (temp_r3_4);
        M2C_FIELD(var_r31, s8 **, 0x1D8) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x170));
        M2C_FIELD(var_r31, s32 *, 0x1DC) = (s32) (temp_r3_4);
        M2C_FIELD(var_r31, s8 **, 0x1E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD4)));
        temp_r3_5 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD4)));
        M2C_FIELD(var_r31, s32 *, 0x1E4) = (s32) (temp_r3_5);
        M2C_FIELD(var_r31, s8 **, 0x248) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x1E0));
        M2C_FIELD(var_r31, s32 *, 0x24C) = (s32) (temp_r3_5);
        M2C_FIELD(var_r31, s8 **, 0x250) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD5)));
        M2C_FIELD(var_r31, s32 *, 0x254) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x178)), (s32) (M2C_FIELD(var_r31, s32 *, 0x16C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x170) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x1A8)), (s32) ((s32) (var_r31 + 0x178)));
        M2C_FIELD(var_r31, s8 **, 0x2B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x2BC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x2C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD6)));
        M2C_FIELD(var_r31, s32 *, 0x2C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD6)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x2C8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x2BC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x2C0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x2F8)), (s32) ((s32) (var_r31 + 0x2C8)));
        M2C_FIELD(var_r31, s8 **, 0x328) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x32C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x330) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD7)));
        M2C_FIELD(var_r31, s32 *, 0x334) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD7)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x338)), (s32) (M2C_FIELD(var_r31, s32 *, 0x32C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x330) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x368)), (s32) ((s32) (var_r31 + 0x338)));
        M2C_FIELD(var_r31, s8 **, 0x398) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x39C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x3A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD8)));
        M2C_FIELD(var_r31, s32 *, 0x3A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x3A8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x39C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x3A0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x3D8)), (s32) ((s32) (var_r31 + 0x3A8)));
        M2C_FIELD(var_r31, s8 **, 0x408) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x40C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x410) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCC)));
        temp_r3_6 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCC)));
        M2C_FIELD(var_r31, s32 *, 0x414) = (s32) (temp_r3_6);
        M2C_FIELD(var_r31, s8 **, 0x478) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x410));
        M2C_FIELD(var_r31, s32 *, 0x47C) = (s32) (temp_r3_6);
        M2C_FIELD(var_r31, s8 **, 0x480) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCD)));
        M2C_FIELD(var_r31, s32 *, 0x484) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCD)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x418)), (s32) (M2C_FIELD(var_r31, s32 *, 0x40C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x410) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x448)), (s32) ((s32) (var_r31 + 0x418)));
        M2C_FIELD(var_r31, s8 **, 0x4E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x4EC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x4F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCE)));
        temp_r3_7 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCE)));
        M2C_FIELD(var_r31, s32 *, 0x4F4) = (s32) (temp_r3_7);
        M2C_FIELD(var_r31, s8 **, 0x558) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x4F0));
        M2C_FIELD(var_r31, s32 *, 0x55C) = (s32) (temp_r3_7);
        M2C_FIELD(var_r31, s8 **, 0x560) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCF)));
        M2C_FIELD(var_r31, s32 *, 0x564) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCF)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x4F8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x4EC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x4F0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x528)), (s32) ((s32) (var_r31 + 0x4F8)));
        M2C_FIELD(var_r31, s8 **, 0x5C8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x5CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x5D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCA)));
        temp_r3_8 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s32 *, 0x5D4) = (s32) (temp_r3_8);
        M2C_FIELD(var_r31, s8 **, 0x638) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x5D0));
        M2C_FIELD(var_r31, s32 *, 0x63C) = (s32) (temp_r3_8);
        M2C_FIELD(var_r31, s8 **, 0x640) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCB)));
        M2C_FIELD(var_r31, s32 *, 0x644) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x5D8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x5CC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x5D0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x608)), (s32) ((s32) (var_r31 + 0x5D8)));
        M2C_FIELD(var_r31, s8 **, 0x6A8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x6AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x6B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        temp_r3_9 = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x6B4) = (s32) (temp_r3_9);
        M2C_FIELD(var_r31, s8 **, 0x718) = (s8 *) ((s32 *) M2C_FIELD(var_r31, s8 **, 0x6B0));
        M2C_FIELD(var_r31, s32 *, 0x71C) = (s32) (temp_r3_9);
        M2C_FIELD(var_r31, s8 **, 0x720) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s32 *, 0x724) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x6B8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x6AC) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x6B0) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x6E8)), (s32) ((s32) (var_r31 + 0x6B8)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x3C), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800DFECC((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800E009C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    SK_fn_800E009C_A0 spA0;
    SK_fn_800E009C_70 sp70;
    SK_fn_800E009C_60 sp60;
    SK_fn_800E009C_50 sp50;
    SK_fn_800E009C_40 sp40;
    SK_fn_800E009C_30 sp30;
    SK_fn_800E009C_20 sp20;
    SK_fn_800E009C_10 sp10;
    f32 temp_f31;

    temp_f31 = farg1;
    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0], lbl_804A00E0[0]);
    fn_801734E4((s32) (arg1 + 0x2F8), (s32) (arg1 + 0x2C8));
    fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x2BC) + 0x224), (s32) (M2C_FIELD(arg1, s8 **, 0x2C0) + 0x50));
    fn_801734E4((s32) (arg1 + 0x2C8), (s32) ((s32) &sp70));
    fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + 0x2C8), (s32) (arg4));
    fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + 0x2F8), (s32) (arg4));
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
        if (sp10.f_0 < lbl_804A00E0[2]) {
            sp10.f_0 = lbl_804A00E0[2];
        }
        if (sp10.f_4 < lbl_804A00E0[8]) {
            sp10.f_4 = lbl_804A00E0[8];
        }
        if (sp10.f_4 > lbl_804A00E0[9]) {
            sp10.f_4 = lbl_804A00E0[9];
        }
        break;
    default:
        if (sp10.f_0 <= lbl_804A00E0[9]) {
            sp10.f_0 = lbl_804A00E0[9];
        }
        if (sp10.f_0 >= lbl_804A00E0[2]) {
            sp10.f_0 = lbl_804A00E0[2];
        }
        if (sp10.f_4 <= lbl_804A00E0[8]) {
            sp10.f_4 = lbl_804A00E0[8];
        }
        if (sp10.f_4 >= lbl_804A00E0[9]) {
            sp10.f_4 = lbl_804A00E0[9];
        }
        if (sp10.f_8 <= lbl_804A00E0[10]) {
            sp10.f_8 = lbl_804A00E0[10];
        }
        if (sp10.f_8 >= lbl_804A00E0[11]) {
            sp10.f_8 = lbl_804A00E0[11];
        }
        break;
    }
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x30) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x30)) + (temp_f31 * (sp10.f_0 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x30)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x34) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x34)) + (temp_f31 * (sp10.f_4 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x34)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x38) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x38)) + (temp_f31 * (sp10.f_8 - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x38)))));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x3C) = (f32) ((M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x3C)) + (temp_f31 * (sp10.f_C - (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), f32 *, 0x3C)))));
    fn_8001B8B0((s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x2C0) + 0x30)), (s32) ((s32) (M2C_FIELD(arg1, s8 **, 0x2C0) + 0x30)));
    M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), s32 *, 0) = (s32) ((s32) (M2C_FIELD((M2C_FIELD(arg1, s8 **, 0x2C0)), s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
