#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_800D50B8_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D50B8_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D50B8_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D50B8_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D50B8_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D50B8_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800D50B8_arg1 {
    u8 pad_0[0x20];
    s8 * f_20;
    u8 pad_24[0x64];
    f32 f_88;
    u8 pad_8C[0x514];
    s8 * f_5A0;
};
struct SK_fn_800D5328_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D5328_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D5328_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D5328_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D5328_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_800D5328_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_800D5328_arg1 {
    u8 pad_0[0x94];
    s8 * f_94;
    u8 pad_98[0x64];
    f32 f_FC;
    u8 pad_100[0x4C0];
    s8 * f_5C0;
};
extern f32 lbl_8049FE00;

M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800D2B98(s32 arg0, s32 arg1);
s32 fn_800D2BA0(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_800D313C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800D50B8(s32 arg0, S_fn_800D50B8_arg1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_800D5328(s32 arg0, S_fn_800D5328_arg1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800D2B98(s32 arg0, s32 arg1) {
    fn_800D2BA0((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_800D2BA0(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x48), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x5D0), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x5D0));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x96)));
        M2C_FIELD(var_r31, s32 *, 0x24) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x96)));
        M2C_FIELD(var_r31, f32 *, 0x88) = (f32) lbl_8049FE00;
        M2C_FIELD(var_r31, s8 **, 0x8C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s32 *, 0x90) = (s32) (fn_80181504((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s8 **, 0x94) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x97)));
        M2C_FIELD(var_r31, s32 *, 0x98) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x97)));
        M2C_FIELD(var_r31, f32 *, 0xFC) = (f32) lbl_8049FE00;
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x104) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x108) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x98)));
        M2C_FIELD(var_r31, s8 **, 0x10C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x99)));
        M2C_FIELD(var_r31, s8 **, 0x110) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9A)));
        M2C_FIELD(var_r31, s32 *, 0x114) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x98)));
        M2C_FIELD(var_r31, s32 *, 0x118) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x99)));
        M2C_FIELD(var_r31, s32 *, 0x11C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9A)));
        M2C_FIELD(var_r31, s8 **, 0x240) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x244) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x248) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9B)));
        M2C_FIELD(var_r31, s8 **, 0x24C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9C)));
        M2C_FIELD(var_r31, s8 **, 0x250) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9D)));
        M2C_FIELD(var_r31, s32 *, 0x254) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9B)));
        M2C_FIELD(var_r31, s32 *, 0x258) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9C)));
        M2C_FIELD(var_r31, s32 *, 0x25C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9D)));
        M2C_FIELD(var_r31, s8 **, 0x380) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x384) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x388) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s8 **, 0x38C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s8 **, 0x390) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s8 **, 0x394) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xCB)));
        M2C_FIELD(var_r31, s32 *, 0x398) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x39C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s32 *, 0x3A0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCA)));
        M2C_FIELD(var_r31, s32 *, 0x3A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xCB)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x3A8)), (s32) (M2C_FIELD(var_r31, s32 *, 0x384) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x388) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x468)), (s32) ((s32) (var_r31 + 0x3A8)));
        M2C_FIELD(var_r31, s8 **, 0x528) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s32 *, 0x52C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r31, s8 **, 0x530) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s8 **, 0x534) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x538) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s8 **, 0x53C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x540) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r31, s32 *, 0x544) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x548) = (s32) (fn_80181504((s8 *) (arg0), (s32) (4)));
        M2C_FIELD(var_r31, s32 *, 0x54C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x550) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x554) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x558) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s8 **, 0x55C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s8 **, 0x560) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s32 *, 0x564) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x12)));
        M2C_FIELD(var_r31, s32 *, 0x568) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x13)));
        M2C_FIELD(var_r31, s32 *, 0x56C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x14)));
        M2C_FIELD(var_r31, s8 **, 0x570) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x574) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x578) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x57C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s8 **, 0x580) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s32 *, 0x584) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x588) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x58C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x11)));
        M2C_FIELD(var_r31, s8 **, 0x590) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x594) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x598) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s8 **, 0x59C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s8 **, 0x5A0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s32 *, 0x5A4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC)));
        M2C_FIELD(var_r31, s32 *, 0x5A8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xD)));
        M2C_FIELD(var_r31, s32 *, 0x5AC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xE)));
        M2C_FIELD(var_r31, s8 **, 0x5B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x5B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x5B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s8 **, 0x5BC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s8 **, 0x5C0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA)));
        M2C_FIELD(var_r31, s32 *, 0x5C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (8)));
        M2C_FIELD(var_r31, s32 *, 0x5C8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (9)));
        M2C_FIELD(var_r31, s32 *, 0x5CC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x48), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_800D313C((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma dont_inline on
s32 fn_800D50B8(s32 arg0, S_fn_800D50B8_arg1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    SK_fn_800D50B8_60 sp60;
    SK_fn_800D50B8_50 sp50;
    SK_fn_800D50B8_40 sp40;
    SK_fn_800D50B8_30 sp30;
    SK_fn_800D50B8_20 sp20;
    SK_fn_800D50B8_10 sp10;

    fn_80020D20((M2C_UNK *) (&sp60), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp50), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp40), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp30), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp20), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp10), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80018B0C((M2C_UNK *) (arg1->f_20 + 0x10), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0);
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x58)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x90);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x50)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x90);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x38) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x50)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x90);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x2C)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x40);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x54)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x40);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x38) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x54)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x40);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x38) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0xA4)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0xA8);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x60)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x34);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0xAC)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x34);
    }
    if (M2C_FIELD(arg1->f_5A0, f32 *, 0x38) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0xAC)) {
        arg1->f_88 = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x34);
    }
    M2C_FIELD(arg1->f_20, f32 *, 0x18) = (f32) arg1->f_88;
    M2C_FIELD((arg1->f_20), s32 *, 0) = (s32) ((s32) (M2C_FIELD((arg1->f_20), s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800D5328(s32 arg0, S_fn_800D5328_arg1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    SK_fn_800D5328_60 sp60;
    SK_fn_800D5328_50 sp50;
    SK_fn_800D5328_40 sp40;
    SK_fn_800D5328_30 sp30;
    SK_fn_800D5328_20 sp20;
    SK_fn_800D5328_10 sp10;

    fn_80020D20((M2C_UNK *) (&sp60), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp50), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp40), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp30), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp20), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80020D20((M2C_UNK *) (&sp10), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    fn_80018B0C((M2C_UNK *) (arg1->f_94 + 0x10), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0), M2C_FIELD(&lbl_8049FE00, f32 *, 0));
    arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0);
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x58)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0xB0);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x50)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0xB0);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x38) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x58)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0xB0);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0x54)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x48);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x2C)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x48);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x38) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x2C)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x48);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x38) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x8C)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0xB4);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) <= M2C_FIELD(&lbl_8049FE00, f32 *, 0xAC)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x30);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x34) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x60)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x30);
    }
    if (M2C_FIELD(arg1->f_5C0, f32 *, 0x38) >= M2C_FIELD(&lbl_8049FE00, f32 *, 0x60)) {
        arg1->f_FC = (f32) M2C_FIELD(&lbl_8049FE00, f32 *, 0x30);
    }
    M2C_FIELD(arg1->f_94, f32 *, 0x18) = (f32) arg1->f_FC;
    M2C_FIELD((arg1->f_94), s32 *, 0) = (s32) ((s32) (M2C_FIELD((arg1->f_94), s32 *, 0) | 0xE01));
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
