#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct SK_fn_800163E4_8 { s32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; };
struct S_fn_800173E8_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
    u8 pad_8[0x4];
    s32 f_C;
    u8 pad_10[0xA4];
    s32 f_B4;
};

extern u8 lbl_80346580[];
extern u8 lbl_803465A8[];
extern u8 lbl_803465B8[];
extern u8 lbl_803465E0[];
extern s32 lbl_8049D4A0;
extern s32 lbl_8049D4A4;
extern s32 **lbl_8049D628;
extern s32 lbl_8049D6B0;
extern float lbl_8049E620;

f32 CosFIdx__Q24nw4r4mathFf(f32 farg0);
void DCInvalidateRange(s32 arg0, s32 arg1);
void GXClearVtxDesc(void);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetColorUpdate(s32 arg0);
void GXSetCullMode(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZCompLoc(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void LoadFog__Q34nw4r3g3d8G3DStateFi(s32 arg0);
f32 SinFIdx__Q24nw4r4mathFf(f32 farg0);
void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_80016340(void);
s32 fn_80016394(void);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0_x);
M2C_UNK fn_80016A44(s32 arg0_x);
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016C30(s32 arg0, s32 arg1);
s32 * fn_80016CAC(s32 arg0);
void fn_80016CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80016D40(s32 arg0);
void fn_80016D44(s32 arg0);
s32 fn_80016D48(s32 *arg0);
s32 fn_80016D58(s32 arg0, s32 arg1);
void fn_80016D88(s32 *arg0, s32 *arg1);
s32 fn_80016D94(s32 arg0, s32 arg1);
void fn_80016DC4(s32 *arg0, s32 *arg1);
void fn_80016DD0(s32 *arg0, s32 arg1);
void fn_80016DD8(s32 *arg0, s32 arg1);
s32 fn_80016DE0(s32 arg0, s32 arg1);
s32 fn_80016E44(s32 arg0, s32 arg1);
s8 * fn_80016EA8(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3);
s32 fn_80016FA4(s32 arg0, s32 arg1);
void fn_800173E8(S_fn_800173E8_arg0 *arg0);
void fn_800177CC(s8 *arg0);
void fn_80017C20(s8 *arg0);
void fn_800180A4(s8 *arg0);
void fn_80018370(s8 *arg0);
void fn_80018674(s8 *arg0);
void fn_800188B8(s8 *arg0);
void fn_80018AD0(s8 *arg0, s8 *arg1);
void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80018B0C(s8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s8 * fn_80018B1C(s32 arg0);
s32 fn_80018B24(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B88(void);
s32 fn_80018B8C(s32 arg0);
s32 fn_80018B90(s32 arg0);
f32 fn_80018B94(s32 arg0, s32 arg1, s32 arg2);
void fn_80018BB8(s32 arg0);
f32 fn_80018BD4(f32 farg0);
void fn_80018BDC(void);
void fn_80018BE0(f32 farg0, f32 farg1);
void fn_80018BF0(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_80018C18(f32 farg0, f32 farg1, f32 farg2);
f32 fn_80018C2C(f32 farg0);
f32 fn_80018C3C(f32 farg0);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_800609D8(s8 *arg0);
s32 fn_8008AE14(void);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 * fn_80122E1C(s32 arg0);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
void fn_80173750(s32 arg0);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
void fn_8017C22C(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
f32 fn_802019BC(void);
f32 fn_802019E0(void);
void fn_802E432C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_802E4A28(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80016A94(s32 arg0) {
    LoadFog__Q34nw4r3g3d8G3DStateFi((s32) (arg0));
}

s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r6;

    temp_r6 = (s32) (*arg1);
    if ((s32) (temp_r6 & 0x8000) != 0) {
        *arg1 = temp_r6 & 0xFFFF7FFF;
        return (s32) (2);
    }
    if ((u32) (arg2 - 0xF0) <= 1U) {
        return (s32) (3);
    }
    if (((s32) (temp_r6 & 0x100) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0xC0000000) == 0)) {
        *arg1 = temp_r6 & 0xFFFFFEFF;
        return (s32) ((arg2 == 0) + 1);
    }
    if (((s32) (temp_r6 & 0x400) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0x04000000) != 0)) {
        return (s32) ((arg2 == 0) + 1);
    }
    if ((s32) (temp_r6 & 0x4000) != 0) {
        *arg1 &= 0xFFFFBFFF;
        return (s32) ((arg2 == 0) + 1);
    }
    return (s32) (0);
}

s32 fn_80016B5C(s8 *arg0, s32 arg1) {
    if (fn_8008AE14() != 0) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x200) != 0) && (arg0 != NULL)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x163C) > 0) {
            return (s32) (1);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) > 0) {
            return (s32) (1);
        }
        goto block_8;
    }
block_8:
    if (((s32) (arg1 & 0x1000) == 0) && (fn_8005E8F0((u32) (0U)) != 0)) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x2000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_80016C30(s32 arg0, s32 arg1) {
    if (((s32) (arg1 & 0x800) == 0) && (arg0 != 0) && (fn_800609D8((s8 *) ((s8 *) arg0)) == 0)) {
        return (s32) (1);
    }
    if (((s32) (arg1 & 0x2000) == 0) && (fn_8005E7D4((s32) (0), (s32) (1)) != 0)) {
        return (s32) (1);
    }
    return (s32) (0);
}

s32 * fn_80016CAC(s32 arg0) {
    if (arg0 < 0) {
        return fn_8017ADBC(0);
    }
    return fn_8017ADBC(arg0);
}

void fn_80016CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_80016D40(s32 arg0) {
}

void fn_80016D44(s32 arg0) {
}

s32 fn_80016D48(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_80016D58(s32 arg0, s32 arg1) {
    fn_80016D88((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_80016D88(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_80016D94(s32 arg0, s32 arg1) {
    fn_80016DC4((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_80016DC4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80016DD0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_80016DD8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s8 * fn_80016EA8(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 temp_r3_2;
    s8 *temp_r3;

    temp_r3_2 = (s32) (fn_80177280((s32) (arg0), (M2C_UNK *) ((s32 *) fn_80016FA4), (M2C_UNK **) (lbl_8049D628)));
    if (temp_r3_2 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3_2), (s32) (0), (s32) (0xC0));
    temp_r3 = (s8 *) (fn_80018B1C((s32) (temp_r3_2)));
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
    fn_80018AD0((s8 *) (temp_r3 + 0x20), (s8 *) (arg2));
    fn_80018AD0((s8 *) (temp_r3 + 0x30), (s8 *) (arg3));
    M2C_FIELD(temp_r3, f32 *, 0x94) = 1.0f;
    M2C_FIELD(temp_r3, s32 *, 0xA0) = (s32) (1);
    M2C_FIELD(temp_r3, s32 *, 0xA4) = (s32) (0x14);
    M2C_FIELD(temp_r3, f32 *, 0xA8) = 1.0f;
    M2C_FIELD(temp_r3, s32 *, 0xAC) = (s32) (-1);
    M2C_FIELD(temp_r3, s32 *, 0xB0) = (s32) (-1);
    fn_80173750((s32) ((s32) (temp_r3 + 0x50)));
    if ((fn_8010E90C((u32) (0U), (s32) (M2C_FIELD(temp_r3, s32 *, 0x10)), (s32) ((s32) temp_r3), (s32) (0)) != 0) && (temp_r3_2 != 0)) {
        fn_8017776C((s32) (temp_r3_2));
    }
    return (s8 *) (temp_r3);
}

void fn_80018AD0(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

void fn_80018AF4(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019BC();
}

void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2) {
    fn_80018B24((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_80018AFC(s32 arg0, s32 arg1, s32 arg2) {
    fn_802019E0();
}

void fn_80018B00(s32 arg0, s32 arg1, s32 arg2) {
    fn_80018B94((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_80018B04(s32 arg0, s32 arg1, s32 arg2) {
    VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1), (s8 *) ((s8 *) arg2));
}

void fn_80018B08(s32 arg0, s32 arg1, s32 arg2) {
    fn_80018BB8((s32) (arg0));
}

s32 fn_80018B0C(s8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    return (s32) ((s32) arg0);
}

s8 * fn_80018B1C(s32 arg0) {
    return (s8 *) (arg0 - 4);
}

void fn_80018B88(void) {
}

s32 fn_80018B8C(s32 arg0) {
    return (s32) (arg0);
}

s32 fn_80018B90(s32 arg0) {
    return (s32) (arg0);
}

f32 fn_80018BD4(f32 farg0) {
    return __fabsf(farg0);
}

void fn_80018BDC(void) {
}

void fn_80018BE0(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80018BF0(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80018C18(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

f32 fn_80018C2C(f32 farg0) {
    return SinFIdx__Q24nw4r4mathFf(((float *)&lbl_8049E620)[7] * farg0);
}

f32 fn_80018C3C(f32 farg0) {
    return CosFIdx__Q24nw4r4mathFf(((float *)&lbl_8049E620)[7] * farg0);
}

#pragma dont_inline on
s32 fn_80016DE0(s32 arg0, s32 arg1) {
    fn_80016DD0((s32 *) ((s32 *) arg0), (s32) (arg1));
    if ((s32) (arg1 & 0x1F) != 0) {
        fn_801A9384((s32) &lbl_803465A8, 0x26, (s32) &lbl_80346580);
    }
    return (s32) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80016E44(s32 arg0, s32 arg1) {
    fn_80016DD8((s32 *) ((s32 *) arg0), (s32) (arg1));
    if ((s32) (arg1 & 0x1F) != 0) {
        fn_801A9384((s32) &lbl_803465E0, 0x3C, (s32) &lbl_803465B8);
    }
    return (s32) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800163E4(s32 arg0, s32 arg1) {
    SK_fn_800163E4_8 sp8;
    s32 temp_r3;

    Invalidate__Q34nw4r3g3d8G3DStateFUl((s32) (0x7FF));
    GXSetNumChans((s32) (1));
    GXSetChanCtrl((s32) (4), (s32) (0), (s32) (0), (s32) (1), (s32) (0), (s32) (2), (s32) (2));
    temp_r3 = (s32) (arg0 & 1);
    if ((temp_r3 != 0) && ((s32) (arg0 & 2) != 0)) {
        GXSetZMode((s32) (1), (s32) (1), (s32) (1));
    } else if (temp_r3 != 0) {
        GXSetZMode((s32) (1), (s32) (1), (s32) (0));
    } else if ((s32) (arg0 & 2) != 0) {
        GXSetZMode((s32) (0), (s32) (7), (s32) (1));
    } else {
        GXSetZMode((s32) (0), (s32) (7), (s32) (0));
    }
    if ((s32) (arg0 & 8) != 0) {
        GXSetBlendMode((s32) (1), (s32) (4), (s32) (1), (s32) (0));
    } else if ((s32) (arg0 & 0x10) != 0) {
        GXSetBlendMode((s32) (3), (s32) (0), (s32) (0), (s32) (0));
    } else if ((s32) (arg0 & 0x20) != 0) {
        GXSetBlendMode((s32) (2), (s32) (1), (s32) (1), (s32) (6));
    } else {
        GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0));
    }
    if ((s32) (arg0 & 0xC0) != 0) {
        if (((arg1 == 4) && ((s32) (arg0 & 0x04000000) != 0)) || ((arg1 == 0) && ((s32) (arg0 & 0x02000000) != 0))) {
            fn_802E4A28((s32) (2));
            GXSetNumTexGens((s32) (2));
            GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
            fn_802E4750((s32) (0), (s32) (0), (s32) (0));
            fn_802E4750((s32) (1), (s32) (0), (s32) (0));
            fn_802E432C((s32) (0));
            fn_802E432C((s32) (1));
            fn_80016CC0((s32) (0), (s32) (1), (s32) (4), (s32) (0x1E));
            fn_80016CC0((s32) (1), (s32) (1), (s32) (5), (s32) (0x1E));
            fn_80173750((s32) ((s32) &sp8));
            GXLoadTexMtxImm((s32) ((s32) &sp8), (s32) (0x1E), (s32) (1));
            fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (4));
            fn_802E4460((s32) (0), (s32) (0xF), (s32) (0xF), (s32) (0xF), (s32) (0xF));
            fn_802E44A0((s32) (0), (s32) (7), (s32) (7), (s32) (7), (s32) (4));
            fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (1));
            fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (1));
            fn_802E48CC((u32) (1U), (s32) (1), (s32) (1), (s32) (4));
            fn_802E4460((s32) (1), (s32) (0xF), (s32) (8), (s32) (0xA), (s32) (0xF));
            fn_802E44A0((s32) (1), (s32) (7), (s32) (1), (s32) (5), (s32) (7));
            fn_802E44E0((s32) (1), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
            fn_802E4538((s32) (1), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        } else {
            fn_80173750((s32) ((s32) &sp8));
            GXLoadTexMtxImm((s32) ((s32) &sp8), (s32) (0x1E), (s32) (1));
            GXSetNumTexGens((s32) (1));
            fn_802E4A28((s32) (1));
            if (arg1 == 0xA) {
                if ((s32) (arg0 & 0x40000) != 0) {
                    GXSetTevSwapModeTable((s32) (0), (s32) (1), (s32) (1), (s32) (1), (s32) (3));
                } else {
                    GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
                }
            } else {
                GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
            }
            fn_802E4750((s32) (0), (s32) (0), (s32) (0));
            fn_80016CC0((s32) (0), (s32) (1), (s32) (4), (s32) (0x1E));
            fn_802E432C((s32) (0));
            fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (4));
            fn_802E4460((s32) (0), (s32) (0xF), (s32) (8), (s32) (0xA), (s32) (0xF));
            fn_802E44A0((s32) (0), (s32) (7), (s32) (4), (s32) (5), (s32) (7));
            fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
            fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        }
    } else {
        GXSetNumTexGens((s32) (0));
        GXSetTevSwapModeTable((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
        fn_802E4750((s32) (0), (s32) (0), (s32) (0));
        fn_802E4A28((s32) (1));
        fn_802E432C((s32) (0));
        fn_802E48CC((u32) (0U), (s32) (0xFF), (s32) (0xFF), (s32) (4));
        fn_802E44E0((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        fn_802E4538((s32) (0), (s32) (0), (s32) (0), (s32) (0), (s32) (1), (s32) (0));
        fn_802E4460((s32) (0), (s32) (0xF), (s32) (0xC), (s32) (0xA), (s32) (0xF));
        fn_802E44A0((s32) (0), (s32) (5), (s32) (7), (s32) (7), (s32) (7));
    }
    if ((s32) (arg0 & 4) != 0) {
        GXSetZCompLoc((s32) (0));
    } else {
        GXSetZCompLoc((s32) (1));
    }
    fn_802E4808((s32) (7), (s32) (0), (s32) (0), (s32) (7), (s32) (0));
    GXSetColorUpdate((s32) (1));
    GXSetAlphaUpdate((s32) (0));
    if (arg1 != 2) {
        fn_8017C22C((s32) (0));
    }
    GXSetCullMode((s32) (0));
    fn_80016A94((s32) (-1));
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_800173E8(S_fn_800173E8_arg0 *arg0) {    s32 temp_r4_2;

    if (((s32) arg0->f_C != 0) && (((((s32) ((arg0->f_4) & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) ((s32) (0)), (s32) ((s32) ((arg0->f_4)))) == 0)) {
        fn_800169F4((s32) ((s32) (0)));
        if (((s32) ((arg0->f_4) & 0x40) != 0) && ((s32) ((arg0->f_4) & 0x02000000) != 0)) {
            fn_800169F4((s32) ((s32) (1)));
        }
        fn_800163E4((s32) ((s32) (arg0->f_4)), (s32) ((s32) (0)));
        temp_r4_2 = (s32) ((s32) (arg0->f_4 & 0x40));
        if ((temp_r4_2 != 0) && ((s32) (arg0->f_4 & 0x02000000) != 0)) {
            GXLoadTexObj((s32) ((s32) (arg0->f_B4)), (s32) ((s32) (0)));
            if ((s32) (arg0->f_4 & 0x40000) == 0) {
                GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (1)));
            } else {
                GXLoadTexObj((s32) ((s32) ((s8 *)fn_80122E1C((s32) ((s32) (0x800001))) + 4)), (s32) ((s32) (1)));
            }
            GXClearVtxDesc();
            GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xE)), (s32) ((s32) (1)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xE)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            if ((s32) (arg0->f_4 & 0x10000) != 0) {
                fn_800177CC((s8 *) ((s8 *) (arg0)));
            } else {
                fn_80017C20((s8 *) ((s8 *) (arg0)));
            }
        } else if (temp_r4_2 != 0) {
            if ((s32) (arg0->f_4 & 0x40000) == 0) {
                GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (0)));
            } else {
                GXLoadTexObj((s32) ((s32) ((s8 *)fn_80122E1C((s32) ((s32) (0x800001))) + 4)), (s32) ((s32) (0)));
            }
            GXClearVtxDesc();
            GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            if ((s32) (arg0->f_4 & 0x10000) != 0) {
                fn_800177CC((s8 *) ((s8 *) (arg0)));
            } else {
                fn_80017C20((s8 *) ((s8 *) (arg0)));
            }
        } else if ((s32) (arg0->f_4 & 0x80) != 0) {
            GXLoadTexObj((s32) ((s32) (arg0->f_B4)), (s32) ((s32) (0)));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            if ((s32) (arg0->f_4 & 0x10000) != 0) {
                fn_800180A4((s8 *) ((s8 *) (arg0)));
            } else {
                fn_80018370((s8 *) ((s8 *) (arg0)));
            }
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
            GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
            GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
            if ((s32) (arg0->f_4 & 0x10000) != 0) {
                fn_80018674((s8 *) ((s8 *) (arg0)));
            } else {
                fn_800188B8((s8 *) ((s8 *) (arg0)));
            }
        }
        fn_80016A44((s32) ((s32) (0)));
        if (((s32) ((arg0->f_4) & 0x40) != 0) && ((s32) ((arg0->f_4) & 0x02000000) != 0)) {
            fn_80016A44((s32) ((s32) (1)));
        }
        fn_80016A94((s32) ((s32) (0)));
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80016340(void) {
    s32 temp_r3;

    lbl_8049D4A4 = 0;
    if ((s32) lbl_8049D4A0 == 0) {
        temp_r3 = (s32) (fn_80170DFC((s32) (1)));
        lbl_8049D4A0 = temp_r3;
        DCInvalidateRange((s32) (temp_r3), (s32) (1));
    } else {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80016394(void) {
    lbl_8049D4A4 = 0;
    if ((s32) lbl_8049D4A0 != 0) {
        fn_80170E18((M2C_UNK **) ((s32 **) lbl_8049D4A0));
        lbl_8049D4A0 = 0;
    } else {
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

} // extern "C"
