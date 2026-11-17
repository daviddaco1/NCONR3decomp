#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct SK_fn_8001E264_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_8001E264_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
    u8 pad_8[0x4];
    s32 f_C;
    u8 pad_10[0x58];
    s8 * f_68;
    u8 pad_6C[0x6];
    s16 f_72;
};
struct S_fn_8001E460_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
    u8 pad_8[0x44];
    s32 f_4C;
    s8 * f_50;
    u8 pad_54[0x8];
    u8 f_5C;
    u8 f_5D;
    u8 f_5E;
    u8 f_5F;
    u8 f_60;
    u8 f_61;
    u8 f_62;
    u8 f_63;
    u8 pad_64[0xC];
    s16 f_70;
    s16 f_72;
    s16 f_74;
    u8 pad_76[0x12];
    f32 f_88;
    f32 f_8C;
    f32 f_90;
};

struct SK_fn_8001DB24_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; };
extern s32 lbl_8049D688;
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049E6D8[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
f32 PSVECCrossProduct(s8 *arg0, s8 *arg1, s32 arg2);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0_x);
M2C_UNK fn_80016A44(s32 arg0_x);
s32 fn_80016A94(s32 arg0);
M2C_UNK fn_80016CAC(s32 arg0_x);
s8 * fn_80018B1C(s32 arg0);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
s32 fn_80019D1C(s8 *arg0);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4);
void fn_8001DCA8(s32 arg0);
s32 fn_8001DD00(s32 arg0, s32 arg1);
void fn_8001E264(S_fn_8001E264_arg0 *arg0);
void fn_8001E460(s8 *arg0, f32 *arg1);
void fn_8001EA44(s8 *arg0, f32 *arg1);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8001F9CC(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FA30(void);
void fn_8001FA34(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001FA5C(f32 farg0, f32 farg1, f32 farg2);
void fn_8001FA70(f32 farg0, f32 farg1, s32 arg2, s32 arg3);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E6AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8001DCA8(s32 arg0) {
    s8 *temp_r31;

    temp_r31 = (s8 *) (M2C_FIELD(fn_80018B1C((s32) (arg0)), s8 **, 0x4C));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
    }
    fn_8017776C((s32) (arg0));
}

void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001F9CC((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_8001FA30(void) {
}

void fn_8001FA34(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8001FA5C(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

void fn_8001FA70(f32 farg0, f32 farg1, s32 arg2, s32 arg3) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

s32 fn_8001F9CC(s32 arg0, s32 arg1, s32 arg2) {

    PSVECCrossProduct((s8 *) (fn_80018B8C((s32) (arg1))), (s8 *) ((s8 *) (fn_80018B8C((s32) (arg2)))), (s32) ((fn_80018B88())));
    return (s32) (arg0);
}

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8001E264(S_fn_8001E264_arg0 *arg0) {
    SK_fn_8001E264_8 sp8;
    s32 temp_r31;

    temp_r31 = (s32) ((s32) (fn_80016CAC((s32) ((s32) (0)))));
    if (((s32) arg0->f_C != 0) && ((s16) arg0->f_72 >= 1)) {
        if (((s32) ((arg0->f_4) & 0x10000) == 0) && (((s32) ((arg0->f_4) & 0x40) == 0) || ((s32) lbl_8049D6B0 != 0)) && (((s32) ((arg0->f_4) & 0x20000) == 0) || ((((arg0->f_68) == NULL) != 0)) || (fn_800609D8((s8 *) ((s8 *) ((arg0->f_68)))) != 0)) && (((s32) (arg0->f_4 & 0x2000) != 0) || (fn_8005E7D4((s32) ((s32) (0)), (s32) ((s32) (1))) == 0))) {
            fn_800169F4((s32) ((s32) (0)));
            fn_800163E4((s32) ((s32) (arg0->f_4)), (s32) ((s32) (5)));
            fn_8001B8B8((s32) ((s32) ((s32) &sp8)), (s32) ((s32) (temp_r31 + 0x1C)), (s32) ((s32) (temp_r31 + 4)));
            fn_8001B8B0((s32) ((s32) ((s32) &sp8)), (s32) ((s32) ((s32) &sp8)));
            if ((s32) (arg0->f_4 & 0x40) != 0) {
                GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (0)));
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                fn_8001EA44((s8 *) ((s8 *) (arg0)), (f32 *) ((f32 *) (&sp8)));
            } else {
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                fn_8001E460((s8 *) ((S_fn_8001E460_arg0 *) (arg0)), (f32 *) ((f32 *) (&sp8)));
            }
            fn_80016A44((s32) ((s32) (0)));
            fn_80016A94((s32) ((s32) (0)));
        }
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4) {
    s32 m;
    s32 sp8;
    s8 *temp_r3;
    s32 obj;

    sp8 = (s32) (0);
    fn_8010E6AC((s32) (0));
    obj = (s32) (fn_80177280((s32) (arg0), (M2C_UNK *) ((s32 *) fn_8001DD00), (M2C_UNK **) (lbl_8049D688)));
    if (obj != 0) {
        memset((s32) (obj), (s32) (0), (s32) (0x98));
        temp_r3 = (s8 *) (fn_80018B1C((s32) (obj)));
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg4);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (0);
        M2C_FIELD(temp_r3, f32 *, 0x64) = (f32) lbl_8049E6D8[0];
        M2C_FIELD(temp_r3, s16 *, 0x70) = (s16) ((s16) (arg2 * arg3));
        M2C_FIELD(temp_r3, s16 *, 0x76) = (s16) (arg3);
        M2C_FIELD(temp_r3, f32 *, 0x8C) = (f32) lbl_8049E6D8[0];
        M2C_FIELD(temp_r3, s32 *, 0x80) = (s32) ((s32) M2C_FIELD(temp_r3, s16 *, 0x70));
        M2C_FIELD(temp_r3, f32 *, 0x90) = (f32) lbl_8049E6D8[0];
        M2C_FIELD(temp_r3, s32 *, 0x94) = (s32) (1);
        if (arg1 != NULL) {
            M2C_FIELD(temp_r3, s8 **, 0x68) = (s8 *) (arg1);
            M2C_FIELD(temp_r3, s32 *, 0x6C) = (s32) (fn_80019D1C((s8 *) (arg1)));
            M2C_FIELD(temp_r3, s32 *, 0x44) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x377C));
        }
        sp8 = (s32) (fn_80170E2C((s32) (fn_8010E6AC((s32) (0))), (s32) (M2C_FIELD(temp_r3, s16 *, 0x70) * 0x10), (s32) (4)));
        if (sp8 != 0) {
            M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) (fn_8001B9D4((s32 *) ((s32 *) &sp8), (s32) (M2C_FIELD(temp_r3, s16 *, 0x70) * 0xC)));
            M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) (fn_8001B9D4((s32 *) ((s32 *) &sp8), (s32) (M2C_FIELD(temp_r3, s16 *, 0x70) * 4)));
            if (fn_8010E90C((u32) (5U), (s32) (M2C_FIELD(temp_r3, s32 *, 0x10)), (s32) ((s32) temp_r3), (s32) (0)) == 0) {
                return (s8 *) (temp_r3);
            }
        }
    }
    if (obj != 0) {
        fn_8017776C((s32) (obj));
    }
    m = (s32) (sp8);
    if (m != 0) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) ((s8 *) m));
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

} // extern "C"
