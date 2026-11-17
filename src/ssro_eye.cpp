#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_80103BC8_F0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_C0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_90 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_80 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_70 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_60 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_50 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_40 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_30 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct SK_fn_80103BC8_10 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
struct S_fn_80103BC8_temp_r4_4 { u8 pad_0[0x20]; s8 * f_20; };
__declspec(section ".sdata2") extern const f32 lbl_804A0660[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_801035D4(s32 arg0, s32 arg1);
s32 fn_801035DC(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_801039B0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80103BC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_80190874(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_801035D4(s32 arg0, s32 arg1) {
    fn_801035DC((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

s32 fn_801035DC(s8 *arg0, s32 arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *var_r31;

    var_r31 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (0x18), (s32) (0)));
    if (temp_r3 == NULL) {
        var_r31 = (s8 *) (var_r31 ? var_r31 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x6C8), (s32) (0)));
        memset((s32) ((s32) var_r31), (s32) (0), (s32) (0x6C8));
        M2C_FIELD(var_r31, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x20) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xC9)));
        M2C_FIELD(var_r31, s32 *, 0x28) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC8)));
        M2C_FIELD(var_r31, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xC9)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x30)), (s32) (M2C_FIELD(var_r31, s32 *, 0x1C) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x20) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x90)), (s32) ((s32) (var_r31 + 0x30)));
        M2C_FIELD(var_r31, s8 **, 0xF0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0xF4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0xF8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x96)));
        M2C_FIELD(var_r31, s8 **, 0xFC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x97)));
        M2C_FIELD(var_r31, s8 **, 0x100) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x98)));
        M2C_FIELD(var_r31, s8 **, 0x104) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x99)));
        M2C_FIELD(var_r31, s8 **, 0x108) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9A)));
        M2C_FIELD(var_r31, s8 **, 0x10C) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9B)));
        M2C_FIELD(var_r31, s8 **, 0x110) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9C)));
        M2C_FIELD(var_r31, s32 *, 0x114) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x96)));
        M2C_FIELD(var_r31, s32 *, 0x118) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x97)));
        M2C_FIELD(var_r31, s32 *, 0x11C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x98)));
        M2C_FIELD(var_r31, s32 *, 0x120) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x99)));
        M2C_FIELD(var_r31, s32 *, 0x124) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9A)));
        M2C_FIELD(var_r31, s32 *, 0x128) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9B)));
        M2C_FIELD(var_r31, s32 *, 0x12C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9C)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x130)), (s32) (M2C_FIELD(var_r31, s32 *, 0xF4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0xF8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x280)), (s32) ((s32) (var_r31 + 0x130)));
        M2C_FIELD(var_r31, s8 **, 0x3D0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s32 *, 0x3D4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (5)));
        M2C_FIELD(var_r31, s8 **, 0x3D8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9D)));
        M2C_FIELD(var_r31, s8 **, 0x3DC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9E)));
        M2C_FIELD(var_r31, s8 **, 0x3E0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x9F)));
        M2C_FIELD(var_r31, s8 **, 0x3E4) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s8 **, 0x3E8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s8 **, 0x3EC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s8 **, 0x3F0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xA3)));
        M2C_FIELD(var_r31, s32 *, 0x3F4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9D)));
        M2C_FIELD(var_r31, s32 *, 0x3F8) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9E)));
        M2C_FIELD(var_r31, s32 *, 0x3FC) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x9F)));
        M2C_FIELD(var_r31, s32 *, 0x400) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA0)));
        M2C_FIELD(var_r31, s32 *, 0x404) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA1)));
        M2C_FIELD(var_r31, s32 *, 0x408) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA2)));
        M2C_FIELD(var_r31, s32 *, 0x40C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xA3)));
        fn_8017375C((s32) ((s32) (var_r31 + 0x410)), (s32) (M2C_FIELD(var_r31, s32 *, 0x3D4) + 0x224), (s32) ((s32) (M2C_FIELD(var_r31, s8 **, 0x3D8) + 0x50)));
        fn_801734E4((s32) ((s32) (var_r31 + 0x560)), (s32) ((s32) (var_r31 + 0x410)));
        M2C_FIELD(var_r31, s8 **, 0x6B0) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s32 *, 0x6B4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (3)));
        M2C_FIELD(var_r31, s8 **, 0x6B8) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s8 **, 0x6BC) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x10)));
        M2C_FIELD(var_r31, s32 *, 0x6C0) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0xF)));
        M2C_FIELD(var_r31, s32 *, 0x6C4) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x10)));
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (0x18), (s32) (0));
        return (s32) (0);
    }
    return (s32) (fn_801039B0((s32) ((s32) arg0), (s32) (arg1), (s32) ((s32) temp_r3)));
}

#pragma opt_optimizecontrolflow off
#pragma dont_inline on
s32 fn_80103BC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    SK_fn_80103BC8_F0 spF0;
    SK_fn_80103BC8_C0 spC0;
    SK_fn_80103BC8_90 sp90;
    SK_fn_80103BC8_80 sp80;
    SK_fn_80103BC8_70 sp70;
    SK_fn_80103BC8_60 sp60;
    SK_fn_80103BC8_50 sp50;
    SK_fn_80103BC8_40 sp40;
    SK_fn_80103BC8_30 sp30;
    SK_fn_80103BC8_20 sp20;
    SK_fn_80103BC8_10 sp10;
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;
    f32 temp_f27;
    f32 temp_f26;
    f32 temp_f25;
    f32 temp_f24;
    f32 temp_f23;
    f32 temp_f22;
    f32 temp_f21;
    f32 temp_f20;
    f32 temp_f19;
    f32 temp_f18;
    f32 temp_f17;
    f32 temp_f16;
    f32 temp_f0;
    f32 temp_f1;
    s32 var_r31;
    S_fn_80103BC8_temp_r4_4 *temp_r4_4;

    fn_80020D20((M2C_UNK *) (&sp80), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    fn_80020D20((M2C_UNK *) (&sp70), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    fn_80020D20((M2C_UNK *) (&sp60), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    fn_80020D20((M2C_UNK *) (&sp50), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    fn_80020D20((M2C_UNK *) (&sp40), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    fn_80020D20((M2C_UNK *) (&sp20), lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0], lbl_804A0660[0]);
    var_r31 = (s32) (0);
    temp_f17 = lbl_804A0660[1];
    temp_f18 = lbl_804A0660[8];
    temp_f19 = lbl_804A0660[9];
    temp_f20 = lbl_804A0660[10];
    temp_f21 = lbl_804A0660[11];
    temp_f22 = lbl_804A0660[12];
    temp_f23 = lbl_804A0660[6];
    temp_f24 = lbl_804A0660[0];
    temp_f16 = lbl_804A0660[7];
    temp_f27 = lbl_804A0660[15];
    temp_f28 = lbl_804A0660[16];
    temp_f29 = lbl_804A0660[17];
    temp_f30 = lbl_804A0660[18];
    temp_f31 = lbl_804A0660[3];
    temp_f26 = lbl_804A0660[14];
    temp_f25 = lbl_804A0660[13];
    do {
        if (var_r31 == 0) {
            { s8 *tx_matrix1 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix1 + 0x90), (s32) (tx_matrix1 + 0x30)); }
            fn_8017375C((s32) ((s32) &spC0), (s32) (M2C_FIELD(arg1, s32 *, 0x1C) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) ((s8 *) (arg1 + (var_r31 * 0x30)) + 0x30), (s32) ((s32) &spC0));
        } else {
            { s8 *tx_matrix2 = (s8 *) (arg1 + (var_r31 * 0x30));
            fn_801734E4((s32) (tx_matrix2 + 0x90), (s32) (tx_matrix2 + 0x30)); }
            if (var_r31 >= 2) {
                fn_80190874((s8 *) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s8 **, 0x20)), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x28)));
                fn_8017375C((s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x28) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 2) * 4)), s32 *, 0x28) + 0x224), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x20) + 0xE0));
            }
            fn_8017375C((s32) ((s32) &spC0), (s32) (M2C_FIELD((arg1 + ((var_r31 - 1) * 4)), s32 *, 0x28) + 0x224), (s32) (M2C_FIELD((arg1 + (var_r31 * 4)), s32 *, 0x20) + 0x50));
            fn_801734E4((s32) ((s8 *) (arg1 + (var_r31 * 0x30)) + 0x30), (s32) ((s32) &spC0));
        }
        fn_80018AF8((s32) ((s32) &sp80), (s32) ((s8 *) (arg1 + (var_r31 * 0x30)) + 0x30), (s32) (arg4));
        fn_80018AF8((s32) ((s32) &sp70), (s32) (arg1 + (var_r31 * 0x30) + 0x90), (s32) (arg4));
        fn_8001B8B8((s32) ((s32) &sp60), (s32) ((s32) &sp70), (s32) ((s32) &sp80));
        fn_80018B08((s32) ((s32) &sp50), (s32) ((s32) &sp60), farg0);
        fn_80018B00((s32) ((s32) &sp50), (s32) ((s32) &sp50), (s32) (arg3));
        fn_80173754((s32) ((s32) &spF0), (s32) ((s32) &spC0));
        fn_80018B04((s32) ((s32) &sp20), (s32) ((s32) &spF0), (s32) ((s32) &sp50));
        fn_8001B8B0((s32) ((s32) &sp20), (s32) ((s32) &sp20));
        fn_801734E4((s32) ((s32) &sp90), (s32) (M2C_FIELD(arg1, s32 *, 0x6C0) + 0x224));
        sp10.f_0 = sp90.f_C - spC0.f_C;
        sp10.f_4 = sp90.f_1C - spC0.f_1C;
        sp10.f_8 = sp90.f_2C - spC0.f_2C;
        sp10.f_C = temp_f24;
        fn_80018B04((s32) ((s32) &sp10), (s32) ((s32) &spF0), (s32) ((s32) &sp10));
        fn_8001B8B0((s32) ((s32) &sp10), (s32) ((s32) &sp10));
        sp30.f_0 = temp_f24;
        sp30.f_8 = temp_f24;
        sp30.f_C = temp_f24;
        switch (var_r31) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            sp30.f_4 = temp_f23;
            break;
        case 1:                                     /* switch 1 */
            sp30.f_4 = temp_f16;
            break;
        }
        switch (arg2) {
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
            if (sp20.f_0 <= temp_f17) {
                sp20.f_0 = temp_f17;
            }
            if (sp20.f_4 <= temp_f17) {
                sp20.f_4 = temp_f17;
            }
            if (sp20.f_4 >= temp_f17) {
                sp20.f_4 = temp_f17;
            }
            if (sp20.f_8 <= temp_f18) {
                sp20.f_8 = temp_f18;
            }
            if (sp20.f_8 >= temp_f24) {
                sp20.f_8 = temp_f24;
            }
            break;
        case 0xF6:
        case 0xF7:
            if (sp20.f_0 <= temp_f19) {
                sp20.f_0 = temp_f19;
            }
            if (sp20.f_4 <= temp_f20) {
                sp20.f_4 = temp_f20;
            }
            if (sp20.f_4 >= temp_f21) {
                sp20.f_4 = temp_f21;
            }
            if (sp20.f_8 <= temp_f22) {
                sp20.f_8 = temp_f22;
            }
            if (sp20.f_8 >= temp_f23) {
                sp20.f_8 = temp_f23;
            }
            sp30.f_0 = temp_f24;
            sp30.f_8 = temp_f24;
            sp30.f_C = temp_f24;
            switch (var_r31) {                  /* switch 2; irregular */
            case 0:                             /* switch 2 */
                sp30.f_4 = temp_f25;
                break;
            case 1:                             /* switch 2 */
                sp30.f_4 = temp_f21;
                break;
            case 2:                             /* switch 2 */
                sp30.f_4 = temp_f26;
                break;
            }
            break;
        default:
            if (sp20.f_0 <= temp_f27) {
                sp20.f_0 = temp_f27;
            }
            if (sp20.f_4 <= temp_f28) {
                sp20.f_4 = temp_f28;
            }
            if (sp20.f_4 >= temp_f27) {
                sp20.f_4 = temp_f27;
            }
            if (var_r31 == 2) {
                if (sp20.f_4 <= temp_f22) {
                    sp20.f_4 = temp_f22;
                }
                if (sp20.f_4 >= temp_f29) {
                    sp20.f_4 = temp_f29;
                }
            }
            if (sp20.f_8 <= temp_f30) {
                sp20.f_8 = temp_f30;
            }
            if (sp20.f_8 >= temp_f31) {
                sp20.f_8 = temp_f31;
            }
            break;
        }
        temp_f1 = sp20.f_4;
        temp_f0 = sp10.f_4 - sp30.f_4;
        if ((temp_f1 > temp_f0) && (var_r31 == 0)) {
            sp20.f_4 = temp_f0;
        }
        temp_r4_4 = (S_fn_80103BC8_temp_r4_4 *) (arg1 + (var_r31 * 4));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30)) + (farg1 * (sp20.f_0 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x30)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34)) + (farg1 * (sp20.f_4 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x34)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38)) + (farg1 * (sp20.f_8 - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x38)))));
        M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C) = (f32) ((M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C)) + (farg1 * (sp20.f_C - (M2C_FIELD((temp_r4_4->f_20), f32 *, 0x3C)))));
        fn_8001B8B0((s32) ((s32) (temp_r4_4->f_20 + 0x30)), (s32) ((s32) (temp_r4_4->f_20 + 0x30)));
        *(u32 *)(M2C_FIELD((arg1 + (var_r31 * 4)), s8 **, 0x20)) |= 0xE01;
        var_r31 += 1;
    } while (var_r31 < 2);
    return (s32) (1);
}
#pragma dont_inline reset
#pragma opt_optimizecontrolflow reset

} // extern "C"
