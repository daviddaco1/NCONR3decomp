#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80042050_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
    s32 f_8;
    u8 pad_C[0xC];
    s32 f_18;
    u8 pad_1C[0x3C];
    s32 f_58;
};
__declspec(section ".sdata2") extern const f32 lbl_8049E9E0[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0_x);
M2C_UNK fn_80016A44(s32 arg0_x);
s32 fn_80016A94(s32 arg0);
s32 fn_80016C30(s32 arg0, s32 arg1);
void fn_800414C0(s8 *arg0);
void fn_80042050(S_fn_80042050_arg0 *arg0);
void fn_80042140(s8 *arg0);
void fn_8004238C(void);
void fn_80042390(f32 farg0, f32 farg1);
void fn_800423A0(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_800423C8(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E6AC(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017776C(s32 arg0);

void fn_800414C0(s8 *arg0) {
    s8 *temp_r31;

    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x14));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
        M2C_FIELD(arg0, s8 **, 0x14) = (s8 *) (NULL);
    }
    fn_8017776C((s32) ((s32) arg0));
}

void fn_8004238C(void) {
}

void fn_80042390(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_800423A0(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_800423C8(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_80042050(S_fn_80042050_arg0 *arg0) {
    if (((s32) arg0->f_8 != 0) && (fn_80016C30((s32) (arg0->f_18), (s32) (arg0->f_4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (arg0->f_4), (s32) (6));
        GXLoadTexObj((s32) (arg0->f_58), (s32) (0));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) (9), (s32) (1));
        GXSetVtxDesc((s32) (0xB), (s32) (1));
        GXSetVtxDesc((s32) (0xD), (s32) (1));
        GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
        GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
        fn_80042140((s8 *) (arg0));
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset

} // extern "C"
