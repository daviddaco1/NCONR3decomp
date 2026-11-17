#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_800D218C_var_r31 { u8 pad_0[0x14]; s8 * f_14; s8 * f_18; };

struct S_fn_800D2A8C_arg1 { f32 f_0; f32 f_4; f32 f_8; };
struct S_fn_800D2A8C_arg0 { f32 f_0; f32 f_4; f32 f_8; };
extern u8 lbl_8034D7F0[];
__declspec(section ".sdata2") extern const f32 lbl_8049FDA8[];

M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
void fn_800D2184(s32 arg0, s32 arg1);
s32 fn_800D218C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_800D2380(s32 arg0, s8 *arg1, s8 *arg2);
void fn_800D2A8C(S_fn_800D2A8C_arg0 *arg0, S_fn_800D2A8C_arg1 *arg1);
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_800D2184(s32 arg0, s32 arg1) {
    fn_800D218C((s8 *) (arg0), (s8 *) (arg1), (s8 *) (NULL));
}

#pragma dont_inline on
s32 fn_800D218C(s8 *arg0, s8 *arg1, s8 *arg2) {
    s8 *temp_r3;
    s8 *temp_r3_2;
    s8 *temp_r3_3;
    s8 *var_r28;
    S_fn_800D218C_var_r31 *var_r31;

    var_r28 = (s8 *) (arg2);
    temp_r3 = (s8 *) (fn_800F5B78((s8 *) (arg0), (s32) (2), (s32) (0)));
    var_r31 = (S_fn_800D218C_var_r31 *) (temp_r3);
    if (temp_r3 == NULL) {
        var_r28 = (s8 *) (var_r28 ? var_r28 : fn_80170E2C((s32) (M2C_FIELD(arg0, s32 *, 0x110)), (s32) (0x38), (s32) (0)));
        var_r31 = (S_fn_800D218C_var_r31 *) (var_r28);
        if (var_r28 == NULL) {
            return (s32) (0);
        }
        memset((s32) ((s32) var_r28), (s32) (0), (s32) (0x38));
        M2C_FIELD(var_r28, s8 **, 0x14) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r28, s8 **, 0x18) = (s8 *) (fn_8018149C((s8 *) (arg0), (s32) (0x15)));
        M2C_FIELD(var_r28, s32 *, 0x1C) = (s32) (fn_80181504((s8 *) (arg0), (s32) (6)));
        M2C_FIELD(var_r28, s32 *, 0x20) = (s32) (fn_80181504((s8 *) (arg0), (s32) (0x15)));
        temp_r3_2 = (s8 *) (M2C_FIELD(arg1, s8 **, 0x3854));
        if (temp_r3_2 != NULL) {
            temp_r3_3 = (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0x377C));
            if (temp_r3_3 != NULL) {
                M2C_FIELD(var_r28, s8 **, 0x24) = (s8 *) (fn_8018149C((s8 *) (temp_r3_3), (s32) (6)));
                M2C_FIELD(var_r28, s8 **, 0x28) = (s8 *) (fn_8018149C((s8 *) (M2C_FIELD(M2C_FIELD(arg1, s8 **, 0x3854), s8 **, 0x377C)), (s32) (0x15)));
                M2C_FIELD(var_r28, s32 *, 0x2C) = (s32) (fn_80181504((s8 *) (M2C_FIELD(M2C_FIELD(arg1, s8 **, 0x3854), s8 **, 0x377C)), (s32) (6)));
                M2C_FIELD(var_r28, s32 *, 0x30) = (s32) (fn_80181504((s8 *) (M2C_FIELD(M2C_FIELD(arg1, s8 **, 0x3854), s8 **, 0x377C)), (s32) (0x15)));
            }
        }
        fn_800F5B14((s8 *) (arg0), (s8 *) (var_r31), (s32) (2), (s32) (0));
        M2C_FIELD(var_r28, f32 *, 0x34) = (f32) *(f32 *)((s8 *) &lbl_8034D7F0 + (M2C_FIELD(arg1, s32 *, 0x18) * 4));
        goto block_10;
    }
block_10:
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x54) & 0x10000) != 0) {
        if (((s32) (M2C_FIELD(arg1, s32 *, 0x50) & 0xFFBFFDD8) == 0) && ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x80000000) == 0)) {
            fn_800D2380((s32) ((s32) arg0), (s8 *) (arg1), (s8 *) (var_r31));
        } else {
            *(s32 *)(var_r31->f_14) &= 0xFFFFFFFE;
            *(s32 *)(var_r31->f_18) &= 0xFFFFFFFE;
        }
    } else {
        *(s32 *)(var_r31->f_14) &= 0xFFFFFFFE;
        *(s32 *)(var_r31->f_18) &= 0xFFFFFFFE;
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800D2A8C(S_fn_800D2A8C_arg0 *arg0, S_fn_800D2A8C_arg1 *arg1) {
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 a;
    const f32 *k;

    k = (const f32 *) (&lbl_8049FDA8[0]);
    a = arg1->f_0;
    temp_f28 = ((f32 (*)(f32)) fn_800412A0)(k[19] * a);
    a = arg1->f_0;
    temp_f29 = ((f32 (*)(f32)) fn_80041290)(k[19] * a);
    a = arg1->f_4;
    temp_f30 = ((f32 (*)(f32)) fn_800412A0)(k[19] * a);
    a = arg1->f_4;
    temp_f31 = ((f32 (*)(f32)) fn_80041290)(k[19] * a);
    a = arg1->f_8;
    ((f32 (*)(f32)) fn_800412A0)(k[19] * a);
    a = arg1->f_8;
    ((f32 (*)(f32)) fn_80041290)(k[19] * a);
    arg0->f_0 = temp_f28;
    arg0->f_4 = temp_f29 * temp_f30;
    arg0->f_8 = temp_f29 * temp_f31;
}
#pragma dont_inline reset

} // extern "C"
