#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_8001AB24_var_r31 { u32 f_0; u8 pad_4[0x4]; s8 * f_8; };
struct S_fn_8001B408_arg0 { s32 f_0; u8 pad_4[0x4]; s32 f_8; u8 pad_C[0x8]; s8 * f_14; u8 pad_18[0xC]; s32 f_24; u8 pad_28[0x12]; s16 f_3A; u8 pad_3C[0x18]; s16 f_54; s16 f_56; };
struct S_fn_8001B408_var_r31 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
extern s32 lbl_8049D680;
__declspec(section ".sdata2") extern const f32 lbl_8049E690[];

void GXClearVtxDesc(void);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
M2C_UNK PSVECNormalize(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
s32 fn_80016C30(s32 arg0, s32 arg1);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8001AB24(s8 *arg0);
void fn_8001B408(S_fn_8001B408_arg0 *arg0);
void fn_8001B548(s8 *arg0, s8 *arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B4(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8BC(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8001B8C0(s32 arg0, s32 arg1);
f32 fn_8001B930(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B954(s32 arg0);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
void fn_8001B9E8(void);
void fn_8001B9EC(f32 farg0, f32 farg1);
void fn_8001B9FC(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001BA24(f32 farg0, f32 farg1, f32 farg2, s32 arg3);
s32 fn_80028FD4(s32 arg0);
s32 fn_80029024(s32 *arg0);
s32 fn_8010E6AC(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017776C(s32 arg0);
f32 fn_802019BC(void);

void fn_8001B8B0(s32 arg0, s32 arg1) {
    fn_8001B8C0((s32) (arg0), (s32) (arg1));
}

void fn_8001B8B4(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001B930((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_8001B8BC(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

s32 fn_8001B8C0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_80018B88());
    PSVECNormalize((s32) (fn_80018B8C((s32) (arg1))), (s32) (temp_r31));
    return (s32) (arg0);
}

void fn_8001B954(s32 arg0) {
    fn_80028FD4((s32) (fn_80029024((s32 *) ((s32 *) arg0))));
}

s32 fn_8001B9D4(s32 *arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = (s32) (*arg0);
    *arg0 = temp_r5 + arg1;
    return (s32) (temp_r5);
}

void fn_8001B9E8(void) {
}

void fn_8001B9EC(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8001B9FC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8001BA24(f32 farg0, f32 farg1, f32 farg2, s32 arg3) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8001AB24(s8 *arg0) {
    u32 temp_r4;
    s8 *temp_r31;
    S_fn_8001AB24_var_r31 *var_r31;

    for (var_r31 = M2C_FIELD(arg0, S_fn_8001AB24_var_r31 **, 0x14); var_r31->f_0 != 1U; var_r31 = (S_fn_8001AB24_var_r31 *) var_r31->f_8) {
        fn_80019D94((M2C_UNK **) (lbl_8049D680), (s32) ((s32) var_r31->f_0));
    }
    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x30));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
    }
    fn_8017776C((s32) ((s32) arg0));
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8001B408(S_fn_8001B408_arg0 *arg0) {
    s16 temp_r4;
    S_fn_8001B408_var_r31 *var_r31;
    s32 var_r30;

    if (((s32) arg0->f_8 > 1) && ((s16) arg0->f_54 > 2) && (fn_80016C30((s32) (arg0->f_24), (s32) (arg0->f_0)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (arg0->f_0), (s32) (3));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
        temp_r4 = (s16) (arg0->f_3A);
        if ((s16) arg0->f_54 >= temp_r4) {
            var_r30 = (s32) ((arg0->f_56 + 1) % temp_r4);
        } else {
            var_r30 = (s32) (1);
        }
        for (var_r31 = (S_fn_8001B408_var_r31 *) arg0->f_14; var_r31->f_0 != (s8 *)1U; var_r31 = (S_fn_8001B408_var_r31 *) var_r31->f_8) {
            fn_8001B548((s8 *) (arg0), (s8 *) (var_r31->f_0), (s32) (var_r30));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
