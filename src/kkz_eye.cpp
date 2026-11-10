#include "types.h"
#include "m2c_macros.h"


extern "C" {

struct SK_fn_800550CC_A0 { f32 v[12]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_70 { f32 v[12]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_60 { f32 v[4]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_50 { f32 v[4]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_40 { f32 v[4]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_30 { f32 v[4]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_20 { f32 v[4]; } __attribute__((aligned(16)));
struct SK_fn_800550CC_10 { f32 v[4]; } __attribute__((aligned(16)));
struct S_fn_800550CC_temp_r3 {
    u8 pad_0[0x30];
    f32 f_30;
};
struct S_fn_800550CC_temp_r3_2 {
    u8 pad_0[0x34];
    f32 f_34;
};
struct S_fn_800550CC_temp_r3_3 {
    u8 pad_0[0x38];
    f32 f_38;
};
struct S_fn_800550CC_temp_r3_4 {
    u8 pad_0[0x3C];
    f32 f_3C;
};
struct S_fn_800550CC_temp_r3_6 {
    s32 f_0;
};

__declspec(section ".sdata2") extern const f32 lbl_8049ED18[];

s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_28();
s32 _savegpr_29();
s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80054EF0(s32 arg0, s32 arg1);
s32 fn_80054EF8(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_80055004(s32 arg0, s8 *arg1, s32 arg2);
struct Vec4 { f32 x, y, z, w; };
s32 fn_800550CC(s32 arg0, s32 arg1, s32 arg2, Vec4 arg3, Vec4 arg4, f32 farg0, f32 farg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);


void fn_80054EF0(s32 arg0, s32 arg1) {
    fn_80054EF8((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_80054EF8(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x5E), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x88), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x88));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x28)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x58)), (s32) ((s32) (var_r31 + 0x28)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x5E), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_80055004((s32) ((s32) arg0), (s8 *) ((s8 *) arg1), (s32) ((s32) temp_r3)));
}

s32 fn_800550CC(s32 arg0, s32 arg1, s32 arg2, Vec4 arg3, Vec4 arg4, f32 farg0, f32 farg1) {
    SK_fn_800550CC_A0 spA0;
    SK_fn_800550CC_70 sp70;
    SK_fn_800550CC_60 sp60;
    SK_fn_800550CC_50 sp50;
    SK_fn_800550CC_40 sp40;
    SK_fn_800550CC_30 sp30;
    SK_fn_800550CC_20 sp20;
    SK_fn_800550CC_10 sp10;
    f32 temp_f31;
    S_fn_800550CC_temp_r3 *temp_r3;
    S_fn_800550CC_temp_r3_2 *temp_r3_2;
    S_fn_800550CC_temp_r3_3 *temp_r3_3;
    S_fn_800550CC_temp_r3_4 *temp_r3_4;
    s8 *temp_r3_5;
    S_fn_800550CC_temp_r3_6 *temp_r3_6;

    temp_f31 = farg1;
    fn_80020D20((M2C_UNK *) (&sp60), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_80020D20((M2C_UNK *) (&sp30), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_80020D20((M2C_UNK *) (&sp10), lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0], lbl_8049ED18[0]);
    fn_801734E4((s32) (arg1 + 0x58), (s32) (arg1 + 0x28));
    fn_8017375C((s32) ((s32) &sp70), (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + 0x224), (s32) (M2C_FIELD(arg1, s8 **, 0x20) + 0x50));
    fn_801734E4((s32) (arg1 + 0x28), (s32) ((s32) &sp70));
    fn_80018AF8((s32) ((s32) &sp60), (s32) (arg1 + 0x28), (s32) (&arg4));
    fn_80018AF8((s32) ((s32) &sp50), (s32) (arg1 + 0x58), (s32) (&arg4));
    fn_8001B8B8((s32) ((s32) &sp40), (s32) ((s32) &sp50), (s32) ((s32) &sp60));
    fn_80018B08((s32) ((s32) &sp30), (s32) ((s32) &sp40), farg0);
    fn_80018B00((s32) ((s32) &sp30), (s32) ((s32) &sp30), (s32) (&arg3));
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
        if (M2C_BITWISE(f32, sp10.v[0]) <= lbl_8049ED18[5]) {
            sp10.v[0] = lbl_8049ED18[5];
        }
        if (M2C_BITWISE(f32, sp10.v[0]) >= lbl_8049ED18[1]) {
            sp10.v[0] = lbl_8049ED18[1];
        }
        if (sp10.v[1] < lbl_8049ED18[6]) {
            sp10.v[1] = lbl_8049ED18[6];
        }
        if (sp10.v[1] > lbl_8049ED18[7]) {
            sp10.v[1] = lbl_8049ED18[7];
        }
        break;
    default:
        if (sp10.v[0] <= lbl_8049ED18[5]) {
            sp10.v[0] = lbl_8049ED18[5];
        }
        if (sp10.v[0] >= lbl_8049ED18[1]) {
            sp10.v[0] = lbl_8049ED18[1];
        }
        if (sp10.v[1] <= lbl_8049ED18[8]) {
            sp10.v[1] = lbl_8049ED18[8];
        }
        if (sp10.v[1] >= lbl_8049ED18[9]) {
            sp10.v[1] = lbl_8049ED18[9];
        }
        if (sp10.v[2] <= lbl_8049ED18[10]) {
            sp10.v[2] = lbl_8049ED18[10];
        }
        if (sp10.v[2] >= lbl_8049ED18[11]) {
            sp10.v[2] = lbl_8049ED18[11];
        }
        break;
    }
    temp_r3 = (S_fn_800550CC_temp_r3 *) (M2C_FIELD(arg1, s8 **, 0x20));
    temp_r3->f_30 = (f32) (temp_r3->f_30 + (temp_f31 * (sp10.v[0] - temp_r3->f_30)));
    temp_r3_2 = (S_fn_800550CC_temp_r3_2 *) (M2C_FIELD(arg1, s8 **, 0x20));
    temp_r3_2->f_34 = (f32) (temp_r3_2->f_34 + (temp_f31 * (sp10.v[1] - temp_r3_2->f_34)));
    temp_r3_3 = (S_fn_800550CC_temp_r3_3 *) (M2C_FIELD(arg1, s8 **, 0x20));
    temp_r3_3->f_38 = (f32) (temp_r3_3->f_38 + (temp_f31 * (sp10.v[2] - temp_r3_3->f_38)));
    temp_r3_4 = (S_fn_800550CC_temp_r3_4 *) (M2C_FIELD(arg1, s8 **, 0x20));
    temp_r3_4->f_3C = (f32) (temp_r3_4->f_3C + (temp_f31 * (sp10.v[3] - temp_r3_4->f_3C)));
    temp_r3_5 = (s8 *) ((s8 *) M2C_FIELD(arg1, s8 **, 0x20) + 0x30);
    fn_8001B8B0((s32) ((s32) temp_r3_5), (s32) ((s32) temp_r3_5));
    temp_r3_6 = (S_fn_800550CC_temp_r3_6 *) (M2C_FIELD(arg1, s8 **, 0x20));
    temp_r3_6->f_0 = (s32) (temp_r3_6->f_0 | 0xE01);
    return (s32) (1);
}

s32 fn_80055004(s32 arg0, s8 *arg1, s32 arg2) {
    Vec4 a;
    Vec4 b __attribute__((aligned(16)));
    f32 f2 = lbl_8049ED18[0];
    s32 val = *(s32*)(*(s32*)(arg1 + 0x3780) + 0x20);
    f32 f1;

    a.x = f2;
    a.y = lbl_8049ED18[2];
    a.z = f2;
    a.w = lbl_8049ED18[1];

    b.x = lbl_8049ED18[1];
    b.y = f2;
    b.z = f2;
    b.w = lbl_8049ED18[1];

    f2 = lbl_8049ED18[3];
    f1 = lbl_8049ED18[4];

    fn_800550CC((s32)arg1, arg2, val, a, b, f1, f2);
    return 1;
}

} // extern "C"
