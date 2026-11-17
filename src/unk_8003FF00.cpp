#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"
#include "rvl_gxfifo.h"

extern "C" {


struct S_fn_8004000C_var_r31 { u32 f_0; u8 pad_4[0x4]; S_fn_8004000C_var_r31 * f_8; };
extern s32 lbl_8049D658;
extern s32 lbl_8049D698;
__declspec(section ".sdata2") extern const f32 lbl_8049E990[];

f32 Atan2FIdx__Q24nw4r4mathFff(f32 farg0, f32 farg1);
f32 CosFIdx__Q24nw4r4mathFf(f32 farg0);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetColorUpdate(s32 arg0);
void GXSetCullMode(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetZCompLoc(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
f32 SinFIdx__Q24nw4r4mathFf(f32 farg0);
void fn_80016964(void);
s32 fn_80016A94(s32 arg0);
s8 * fn_80018B1C(s32 arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8001A940(s8 *arg0, u8 arg1);
s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2);
void fn_8004000C(s32 arg0);
s32 fn_80040068(s32 arg0, s32 arg1);
void fn_80040B74(void);
void fn_80040D08(s8 *arg0, f32 *arg1);
void fn_80041224(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
f32 fn_80041264(s32 arg0, s32 arg1, f32 farg0, f32 farg1);
f32 fn_80041290(f32 farg0);
f32 fn_800412A0(f32 farg0);
void fn_800412B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800412BC(void);
void fn_800412C0(f32 farg0, f32 farg1);
void fn_800412D0(s16 arg0, s16 arg1);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80173750(s32 arg0);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80040D08(s8 *arg0, f32 *arg1) {
    s16 temp_r31;

    temp_r31 = (s16) ((s16) ((s16) M2C_FIELD(arg0, s16 *, 0x14) / 2));
    GXBegin((s32) (0x98), (s32) (0), (s32) (4));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) - temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) - temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0), M2C_FIELD(&lbl_8049E990, f32 *, 0));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) + temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) - temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0x10), M2C_FIELD(&lbl_8049E990, f32 *, 0));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) - temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) + temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0), M2C_FIELD(&lbl_8049E990, f32 *, 0x10));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) + temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) + temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0x10), M2C_FIELD(&lbl_8049E990, f32 *, 0x10));
    fn_800412BC();
}

f32 fn_80041264(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    return M2C_FIELD(&lbl_8049E990, f32 *, 0x20) * Atan2FIdx__Q24nw4r4mathFff(farg0, farg1);
}

f32 fn_80041290(f32 farg0) {
    return SinFIdx__Q24nw4r4mathFf(((float *)&lbl_8049E990)[12] * farg0);
}

f32 fn_800412A0(f32 farg0) {
    return CosFIdx__Q24nw4r4mathFf(((float *)&lbl_8049E990)[12] * farg0);
}

void fn_800412B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_800412BC(void) {
}

void fn_800412C0(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_800412D0(s16 arg0, s16 arg1) {
    GXWGFifo.s16 = arg0;
    GXWGFifo.s16 = arg1;
}

#pragma dont_inline on
void fn_80040B74(void) {
    Mtx sp8;

    Invalidate__Q34nw4r3g3d8G3DStateFUl((s32) (0x7FF));
    GXSetNumChans((s32) (1));
    GXSetChanCtrl((s32) (4), (s32) (0), (s32) (0), (s32) (1), (s32) (0), (s32) (2), (s32) (2));
    GXSetZMode((s32) (0), (s32) (7), (s32) (0));
    GXSetBlendMode((s32) (1), (s32) (4), (s32) (1), (s32) (0));
    GXSetNumTexGens((s32) (1));
    fn_800412B0((s32) (0), (s32) (1), (s32) (4), (s32) (0x1E));
    fn_802E4A28((s32) (1));
    GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (4));
    fn_802E4460((s32) (0), (s32) (0xF), (s32) (2), (s32) (8), (s32) (0xF));
    fn_802E44A0((s32) (0), (s32) (7), (s32) (1), (s32) (4), (s32) (7));
    fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
    GXSetZCompLoc((s32) (1));
    GXSetColorUpdate((s32) (1));
    GXSetAlphaUpdate((s32) (0));
    fn_802E4808((s32) (7), (s32) (0), (s32) (0), (s32) (7), (s32) (0));
    fn_80173750((s32) ((s32) sp8));
    GXLoadTexMtxImm((s32) ((s32) sp8), (s32) (0x1E), (s32) (1));
    fn_80016964();
    GXSetCullMode((s32) (0));
    fn_80016A94((s32) (-1));
}
#pragma dont_inline reset

void fn_80041224(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0) {
    f32 inv = lbl_8049E990[4] - farg0;
    arg0[0] = farg0 * arg1[0] + inv * arg2[0];
    arg0[1] = farg0 * arg1[1] + inv * arg2[1];
}

#pragma dont_inline on
s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;
    s8 *temp_r3_3;
    s32 temp_r3_2;
    s32 var_r28;

    temp_r3_2 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_80040068), (M2C_UNK **) (lbl_8049D658)));
    if (temp_r3_2 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0x3C));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg0);
    fn_80019D5C((s8 *) (temp_r3));
    for (var_r28 = 0; var_r28 < arg2; var_r28++) {
        temp_r3_3 = (s8 *) (fn_80019D70((M2C_UNK **) (lbl_8049D698)));
        if (temp_r3_3 != NULL) {
            memset((s32) ((s32) (temp_r3_3 + 4)), (s32) (0), (s32) (0));
            fn_80019D38((s8 *) (temp_r3_3), (s8 *) (temp_r3_3), (s8 *) (temp_r3));
            M2C_FIELD(temp_r3_3, s8 **, 0xC) = (s8 *) (temp_r3);
            ((void (*)(s8 *, s32)) fn_8001A940)(temp_r3_3 + 0x1C, -1);
        }
    }
    if ((fn_8010E90C((u32) (0xDU), (s32) (M2C_FIELD(temp_r3, s32 *, 0x10)), (s32) ((s32) temp_r3), (s32) (0)) != 0) && (temp_r3_2 != 0)) {
        fn_8004000C((s32) (temp_r3_2));
    }
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8004000C(s32 arg0) {
    S_fn_8004000C_var_r31 *var_r31;

    for (var_r31 = M2C_FIELD(fn_80018B1C((s32) (arg0)), S_fn_8004000C_var_r31 **, 8); var_r31->f_0 != 1U; var_r31 = var_r31->f_8) {
        fn_80019D94((M2C_UNK **) (lbl_8049D698), (s32) ((s32) var_r31->f_0));
    }
    fn_8017776C((s32) (arg0));
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
