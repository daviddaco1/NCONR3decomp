#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800AE91C_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AE91C_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800AE91C_temp_r4_4 {
    u8 pad_0[0x20];
    s8 * f_20;
};
struct SK_fn_800AEE30_A0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800AEE30_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800AEE30_temp_r4_4 {
    u8 pad_0[0x160];
    s8 * f_160;
};
extern u8 lbl_8034D638[];
__declspec(section ".sdata2") extern const f32 lbl_8049F658[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800AE5B0(s32 arg0, s32 arg1);
s32 fn_800AE5B8(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800AE7A8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800AE91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x);
s32 fn_800AEE30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_80165C74(s32 arg0, ...);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800AE5B0(s32 arg0, s32 arg1) {
    fn_800AE5B8((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800AE5B8(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x44), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x298), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x298));
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
        M2C_FIELD(var_r31, s8 **, 0x158) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x15C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x160) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s8 **, 0x164) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s8 **, 0x168) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA5)));
        M2C_FIELD(var_r31, s32 *, 0x16C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x170) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA4)));
        M2C_FIELD(var_r31, s32 *, 0x174) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA5)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x178)), (s32) (M2C_FIELD(var_r31, s32 *, 0x15C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x160) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x208)), (s32) ((s32) (var_r31 + 0x178)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x44), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800AE7A8((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800AE91C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x) {
    SK_fn_800AE91C_A0 spA0;
    SK_fn_800AE91C_70 sp70;
    SK_fn_800AE91C_60 sp60;
    SK_fn_800AE91C_50 sp50;
    SK_fn_800AE91C_40 sp40;
    SK_fn_800AE91C_30 sp30;
    SK_fn_800AE91C_20 sp20;
    SK_fn_800AE91C_10 sp10;
    s32 var_r31;
    S_fn_800AE91C_temp_r4_4 *temp_r4_4;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80165C74((s32) &lbl_8034D638);
    var_r31 = (s32) (0);
    do {
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0xC8), (s32) (tx_matrix1 + 0x38)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) ((s32) &sp70));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0xC8), (s32) (tx_matrix2 + 0x38)); }
            if (var_r31 >= 2) {
                fn_80190874((s8 *) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s8 **, 0x20)), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x2C)));
                fn_8017375C((s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x2C) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 2) * 4)), s32 *, 0x2C) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x20) + 0xE0));
            }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x2C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) ((s32) &sp70));
        }
        fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + (var_r31 * 0x30) + 0x38), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + (var_r31 * 0x30) + 0xC8), (s32) (arg4));
        fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
        fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0_x);
        fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
        fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp30));
        fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        if (var_r31 == 0) {
            if (sp10.f_0 <= lbl_8049F658[5]) {
                sp10.f_0 = lbl_8049F658[5];
            }
            if (sp10.f_0 >= lbl_8049F658[6]) {
                sp10.f_0 = lbl_8049F658[6];
            }
            if (sp10.f_4 <= lbl_8049F658[7]) {
                sp10.f_4 = lbl_8049F658[7];
            }
            if (sp10.f_4 >= lbl_8049F658[8]) {
                sp10.f_4 = lbl_8049F658[8];
            }
            if (sp10.f_8 <= lbl_8049F658[9]) {
                sp10.f_8 = lbl_8049F658[9];
            }
            if (sp10.f_8 >= lbl_8049F658[10]) {
                sp10.f_8 = lbl_8049F658[10];
            }
        } else {
            if (sp10.f_0 <= lbl_8049F658[5]) {
                sp10.f_0 = lbl_8049F658[5];
            }
            if (sp10.f_4 <= lbl_8049F658[11]) {
                sp10.f_4 = lbl_8049F658[11];
            }
            if (sp10.f_4 >= lbl_8049F658[12]) {
                sp10.f_4 = lbl_8049F658[12];
            }
            if (sp10.f_8 <= lbl_8049F658[13]) {
                sp10.f_8 = lbl_8049F658[13];
            }
            if (sp10.f_8 >= lbl_8049F658[14]) {
                sp10.f_8 = lbl_8049F658[14];
            }
        }
        temp_r4_4 = (S_fn_800AE91C_temp_r4_4 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30)) + (farg1_x * (sp10.f_0 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34)) + (farg1_x * (sp10.f_4 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38)) + (farg1_x * (sp10.f_8 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C)) + (farg1_x * (sp10.f_C - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C)))));
        fn_8001B8B0((s32) ((s32) (temp_r4_4->f_20 + 0x30)), (s32) ((s32) (temp_r4_4->f_20 + 0x30)));
        *(u32 *)(M2C_FIELD((arg1 + (var_r31 * 4)), s8 **, 0x20)) |= 0xE01;
        var_r31 += 1;
    } while (var_r31 < 3);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800AEE30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0_x, f32 farg1_x) {
    SK_fn_800AEE30_A0 spA0;
    SK_fn_800AEE30_70 sp70;
    SK_fn_800AEE30_60 sp60;
    SK_fn_800AEE30_50 sp50;
    SK_fn_800AEE30_40 sp40;
    SK_fn_800AEE30_30 sp30;
    SK_fn_800AEE30_20 sp20;
    SK_fn_800AEE30_10 sp10;
    s32 var_r31;
    S_fn_800AEE30_temp_r4_4 *temp_r4_4;

    fn_80020D20((M2C_UNK *) (&sp60), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0], lbl_8049F658[0]);
    var_r31 = (s32) (0);
    do {
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0x208), (s32) (tx_matrix1 + 0x178)); }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x15C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x160) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x178), (s32) ((s32) &sp70));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0x208), (s32) (tx_matrix2 + 0x178)); }
            if (var_r31 >= 2) {
                fn_80190874((s8 *) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s8 **, 0x160)), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x16C)));
                fn_8017375C((s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x16C) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 2) * 4)), s32 *, 0x16C) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x160) + 0xE0));
            }
            fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x16C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x160) + 0x50));
            fn_801734E4((s32) (arg1 + (var_r31 * 0x30) + 0x178), (s32) ((s32) &sp70));
        }
        fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + (var_r31 * 0x30) + 0x178), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + (var_r31 * 0x30) + 0x208), (s32) (arg4));
        fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
        fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0_x);
        fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (arg3));
        fn_80173754((s32) ((s32) &spA0), (s32) ((s32) &sp70));
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spA0), (s32) ((s32) &sp30));
        fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        if (var_r31 == 0) {
            if (sp10.f_0 <= lbl_8049F658[5]) {
                sp10.f_0 = lbl_8049F658[5];
            }
            if (sp10.f_0 >= lbl_8049F658[6]) {
                sp10.f_0 = lbl_8049F658[6];
            }
            if (sp10.f_4 <= lbl_8049F658[7]) {
                sp10.f_4 = lbl_8049F658[7];
            }
            if (sp10.f_4 >= lbl_8049F658[8]) {
                sp10.f_4 = lbl_8049F658[8];
            }
            if (sp10.f_8 <= lbl_8049F658[13]) {
                sp10.f_8 = lbl_8049F658[13];
            }
            if (sp10.f_8 >= lbl_8049F658[15]) {
                sp10.f_8 = lbl_8049F658[15];
            }
        } else {
            if (sp10.f_0 <= lbl_8049F658[5]) {
                sp10.f_0 = lbl_8049F658[5];
            }
            if (sp10.f_4 <= lbl_8049F658[11]) {
                sp10.f_4 = lbl_8049F658[11];
            }
            if (sp10.f_4 >= lbl_8049F658[12]) {
                sp10.f_4 = lbl_8049F658[12];
            }
            if (sp10.f_8 <= lbl_8049F658[16]) {
                sp10.f_8 = lbl_8049F658[16];
            }
            if (sp10.f_8 >= lbl_8049F658[10]) {
                sp10.f_8 = lbl_8049F658[10];
            }
        }
        temp_r4_4 = (S_fn_800AEE30_temp_r4_4 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_4->f_160), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_4->f_160), f32 *, 0x30)) + (farg1_x * (sp10.f_0 - (M2C_FIELD((temp_r4_4->f_160), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_4->f_160), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_4->f_160), f32 *, 0x34)) + (farg1_x * (sp10.f_4 - (M2C_FIELD((temp_r4_4->f_160), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_4->f_160), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_4->f_160), f32 *, 0x38)) + (farg1_x * (sp10.f_8 - (M2C_FIELD((temp_r4_4->f_160), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_4->f_160), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_4->f_160), f32 *, 0x3C)) + (farg1_x * (sp10.f_C - (M2C_FIELD((temp_r4_4->f_160), f32 *, 0x3C)))));
        fn_8001B8B0((s32) ((s32) (temp_r4_4->f_160 + 0x30)), (s32) ((s32) (temp_r4_4->f_160 + 0x30)));
        *(u32 *)(M2C_FIELD((arg1 + (var_r31 * 4)), s8 **, 0x160)) |= 0xE01;
        var_r31 += 1;
    } while (var_r31 < 3);
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
