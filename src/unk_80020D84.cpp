#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80020F0C_var_r30 { u32 f_0; u8 pad_4[0x4]; S_fn_80020F0C_var_r30 * f_8; };
struct SK_fn_800218F4_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800218F4_arg0 { u8 pad_0[0xC]; s8 * f_C; s32 f_10; u8 pad_14[0x38]; s8 * f_4C; s32 f_50; };
struct S_fn_800218F4_var_r31 { f32 * f_0; u8 pad_4[0x4]; S_fn_800218F4_var_r31 * f_8; };
struct S_fn_800218F4_var_r31_2 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
extern s32 lbl_8049D644;
extern s32 lbl_8049D68C;
extern s32 lbl_8049D69C;
__declspec(section ".sdata2") extern const f32 lbl_8049E728[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
M2C_UNK fn_80016CAC(s32 arg0);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019D1C(s8 *arg0);
void fn_80019D5C(s8 *arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2);
void fn_80020EB8(s8 *arg0);
void fn_80020F0C(s8 *arg0);
s32 fn_80020F7C(s8 *arg0, s32 arg1);
void fn_800218F4(S_fn_800218F4_arg0 *arg0);
void fn_80021AA8(f32 *arg0, s32 arg1);
void fn_80021DD0(f32 *arg0, s32 arg1);
void fn_8002211C(s8 *arg0);
void fn_80022130(void);
void fn_80022134(f32 farg0, f32 farg1);
void fn_80022144(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8002216C(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8002211C(s8 *arg0) {
    s8 *temp_r3;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 4));
    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 8));
    M2C_FIELD(temp_r4, s8 **, 8) = (s8 *) (temp_r3);
    M2C_FIELD(temp_r3, s8 **, 4) = (s8 *) (temp_r4);
}

void fn_80022130(void) {
}

void fn_80022134(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80022144(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8002216C(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
s8 * fn_80020D84(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_80020F7C), (M2C_UNK **) (lbl_8049D644)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x90));
    fn_80019D5C((s8 *) (temp_r3 + 4));
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) (arg1 | 0x80));
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) (arg0);
    if (arg0 != 0) {
        M2C_FIELD(temp_r3, s16 *, 0x54) = (s16) (fn_80019D1C((s8 *) ((s8 *) arg0)));
    }
    M2C_FIELD(temp_r3, s32 *, 0x80) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x84) = (s32) (0x8000);
    M2C_FIELD(temp_r3, s32 *, 0x88) = (s32) (0x2E38);
    M2C_FIELD(temp_r3, s16 *, 0x60) = (s16) (0x10);
    M2C_FIELD(temp_r3, s16 *, 0x5C) = (s16) (1);
    M2C_FIELD(temp_r3, f32 *, 0x8C) = (f32) lbl_8049E728[0];
    fn_80018B0C((M2C_UNK *) (temp_r3 + 0x1C), lbl_8049E728[1], lbl_8049E728[1], lbl_8049E728[1]);
    fn_80018B0C((M2C_UNK *) (temp_r3 + 0x28), lbl_8049E728[2], lbl_8049E728[1], lbl_8049E728[1]);
    if ((fn_8010E90C((u32) (8U), (s32) (M2C_FIELD(temp_r3, s32 *, 0x18)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_80020EB8((s8 *) ((s8 *) temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80020F0C(s8 *arg0) {
    u32 temp_r31;
    S_fn_80020F0C_var_r30 *var_r30;

    for (var_r30 = (S_fn_80020F0C_var_r30 *) M2C_FIELD(arg0, s8 **, 0x54); (temp_r31 = var_r30->f_0) != 1U; var_r30 = var_r30->f_8) {
        fn_8002211C((s8 *) (temp_r31 + 4));
        fn_80019D94((M2C_UNK **) (lbl_8049D69C), (s32) ((s32) temp_r31));
    }
    fn_8002211C((s8 *) (arg0 + 4));
    fn_80019D94((M2C_UNK **) (lbl_8049D68C), (s32) ((s32) arg0));
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_800218F4(S_fn_800218F4_arg0 *arg0) {
    SK_fn_800218F4_8 sp8;
    f32 *temp_r3_2;
    f32 *temp_r3_3;
    s32 temp_r31;
    S_fn_800218F4_var_r31 *var_r31;
    S_fn_800218F4_var_r31_2 *var_r31_2;

    temp_r31 = (s32) (fn_80016CAC((s32) (0)));
    if ((((s32) (arg0->f_10 & 0x02000000) == 0) || ((((arg0->f_4C) == NULL) != 0)) || (((arg0->f_4C) == NULL) != 0) || (fn_800609D8((s8 *) ((arg0->f_4C))) != 0)) && (((s32) (arg0->f_10 & 0x2000) != 0) || (fn_8005E7D4((s32) (0), (s32) (1)) == 0))) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (arg0->f_10), (s32) (8));
        GXLoadTexObj((s32) (arg0->f_50), (s32) (0));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
        if ((s32) (arg0->f_10 & 0x800000) != 0) {
            fn_80018B0C((M2C_UNK *) (&sp8), lbl_8049E728[1], lbl_8049E728[2], lbl_8049E728[1]);
            for (var_r31 = (S_fn_800218F4_var_r31 *) arg0->f_C; var_r31->f_0 != (f32 *)1U; var_r31 = var_r31->f_8) {
                fn_80021DD0((f32 *) (var_r31->f_0), (s32) ((s32) &sp8));
            }
        } else {
            fn_8001B8B8((s32) ((s32) &sp8), (s32) (temp_r31 + 0x1C), (s32) (temp_r31 + 4));
            fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
            for (var_r31 = (S_fn_800218F4_var_r31 *) arg0->f_C; var_r31->f_0 != (f32 *)1U; var_r31 = var_r31->f_8) {
                fn_80021AA8((f32 *) (var_r31->f_0), (s32) ((s32) &sp8));
            }
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
