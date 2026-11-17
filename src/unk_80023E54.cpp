#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80023FE4_var_r31 { u32 f_0; u8 pad_4[0x4]; s8 * f_8; };
struct SK_fn_80024768_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80024768_arg0 { s32 f_0; s32 f_4; u8 pad_8[0xC]; s8 * f_14; s32 f_18; s8 * f_1C; };
struct S_fn_80024768_var_r31 { s8 * f_0; u8 pad_4[0x4]; s8 * f_8; };
extern s32 lbl_8049D690;
__declspec(section ".sdata2") extern const f32 lbl_8049E790[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
M2C_UNK fn_80016CAC(s32 arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80023FE4(s8 *arg0);
void fn_80024768(S_fn_80024768_arg0 *arg0);
void fn_800248E8(s8 *arg0, f32 *arg1, s32 arg2);
void fn_80024CA0(void);
void fn_80024CA4(f32 farg0, f32 farg1);
void fn_80024CB4(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_80024CDC(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E6AC(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017776C(s32 arg0);

void fn_80024CA0(void) {
}

void fn_80024CA4(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80024CB4(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80024CDC(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_80023FE4(s8 *arg0) {
    u32 temp_r4;
    s8 *temp_r31;
    S_fn_80023FE4_var_r31 *var_r31;

    for (var_r31 = (S_fn_80023FE4_var_r31 *) M2C_FIELD(arg0, s8 **, 0x14); (temp_r4 = var_r31->f_0) != 1U; var_r31 = (S_fn_80023FE4_var_r31 *) var_r31->f_8) {
        fn_80019D94((M2C_UNK **) (lbl_8049D690), (s32) ((s32) temp_r4));
    }
    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x28));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
    }
    fn_8017776C((s32) ((s32) arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80024768(S_fn_80024768_arg0 *arg0) {
    SK_fn_80024768_8 sp8;
    f32 *temp_r4;
    s32 temp_r31;
    S_fn_80024768_var_r31 *var_r31;

    temp_r31 = (s32) (fn_80016CAC((s32) (0)));
    if (((s32) arg0->f_4 > 1) && (((s32) (arg0->f_0 & 0x40000) == 0) || ((((arg0->f_1C) == NULL) != 0)) || (fn_800609D8((s8 *) ((arg0->f_1C))) != 0)) && (((s32) (arg0->f_0 & 0x2000) != 0) || (fn_8005E7D4((s32) (0), (s32) (1)) == 0))) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (arg0->f_0), (s32) (0xB));
        fn_8001B8B8((s32) ((s32) &sp8), (s32) (temp_r31 + 0x1C), (s32) (temp_r31 + 4));
        fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
        GXLoadTexObj((s32) (arg0->f_18), (s32) (0));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
        for (var_r31 = (S_fn_80024768_var_r31 *) arg0->f_14; (temp_r4 = (f32 *) var_r31->f_0) != (f32 *)1U; var_r31 = (S_fn_80024768_var_r31 *) var_r31->f_8) {
            if ((s16) M2C_FIELD(temp_r4, s16 *, 0x3C) > 3) {
                fn_800248E8((s8 *) (arg0), (f32 *) (temp_r4), (s32) ((s32) &sp8));
            }
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset

} // extern "C"
