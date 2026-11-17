#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049D630;
extern s32 lbl_8049D6B0;
extern float lbl_8049E678;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
void fn_80016964(void);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016C30(s32 arg0, s32 arg1);
s32 fn_80016DE0(s32 arg0, s32 arg1);
s8 * fn_80019E50(s32 arg0);
s32 fn_80019F28(s8 *arg0, s32 arg1);
void fn_8001A1A4(s8 *arg0);
void fn_8001A348(s8 *arg0);
void fn_8001A548(s8 *arg0);
void fn_8001A7CC(s8 *arg0);
void fn_8001A940(s8 *arg0, u32 arg1);
void fn_8001A964(void);
void fn_8001A968(f32 farg0, f32 farg1);
void fn_8001A978(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001A9A0(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017C2CC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_80019E50(s32 arg0) {
    s8 *p = (s8 *)fn_80177280(0x12, (M2C_UNK *)fn_80019F28, (M2C_UNK **)*(s32 *)&lbl_8049D630);
    if (!p) {
        return 0;
    }
    memset((s32)p, 0, 0x38);
    *(s32 *)(p + 0x0) = 4;
    *(s32 *)(p + 0x4) = arg0;
    *(s32 *)(p + 0x8) = 0;
    float f = lbl_8049E678;
    *(float *)(p + 0x1c) = f;
    *(float *)(p + 0x24) = f;
    *(float *)(p + 0x28) = f;
    *(float *)(p + 0x2c) = f;
    *(float *)(p + 0x30) = f;
    fn_8001A940(p + 0x14, 0xFFFFFFFF);
    fn_8001A940(p + 0x18, 0xFFFFFFFF);
    if (fn_8010E90C(2, *(s32 *)(p + 4), (s32)p, 0) != 0) {
        if (p != 0) {
            fn_8017776C((s32)p);
        }
    }
    return p;
}

s32 fn_80019F28(s8 *arg0, s32 arg1) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r3;
    s32 temp_r4;

    if (arg1 != 0) {
        if ((s32) (arg1 & 1) != 0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (0xF1);
            return (s32) (1);
        }
        if ((s32) (arg1 & 0x1F0) != 0) {
            return (s32) (1);
        }
        if ((s32) (arg1 & 0x8000) != 0) {
            if ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) == 0x3E9) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (0xF1);
                fn_8017742C();
                return (s32) (1);
            }
            if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0xF1) && ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x24) == (s16) M2C_FIELD(arg0, s16 *, 0x34)) && ((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) == (s16) M2C_FIELD(arg0, s16 *, 0x36))) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (0xF1);
                fn_8017742C();
                return (s32) (1);
            }
            goto block_12;
        }
block_12:
        return (s32) (0);
    }
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 8));
    if ((u32) (temp_r4 - 1) > 2U) {
        if (temp_r4 == 0) {
            temp_r0 = (s16) (M2C_FIELD(arg0, s16 *, 0x10));
            if (temp_r0 != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) temp_r0);
                M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
            } else if ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0) {
                M2C_FIELD(arg0, s32 *, 8) = (s32) (2);
            } else {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) M2C_FIELD(arg0, s16 *, 0x12));
                M2C_FIELD(arg0, s32 *, 8) = (s32) (3);
            }
        }
        goto block_22;
    }
    if (fn_80016B5C((s8 *) (NULL), (s32) (M2C_FIELD(arg0, s32 *, 0))) != 0) {
        return (s32) (0);
    }
block_22:
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 8));
    switch (temp_r0_2) {                            /* irregular */
    case 0x1:
        temp_r0_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r0_3);
        if (temp_r0_3 > 0) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (lbl_8049E678 - ((f32) temp_r0_3 / (f32) M2C_FIELD(arg0, s16 *, 0x10)));
        } else {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8049E678;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (2);
        case 0x2:
            temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0xC));
            if (temp_r3 >= 0) {
                temp_r0_4 = (s32) (temp_r3 - 1);
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r0_4);
                if (temp_r0_4 < 0) {
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) M2C_FIELD(arg0, s16 *, 0x12));
                    M2C_FIELD(arg0, s32 *, 8) = (s32) (3);
                }
            }
        }
        break;
    case 0x3:
        temp_r0_5 = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r0_5);
        if (temp_r0_5 > 0) {
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((f32) temp_r0_5 / (f32) M2C_FIELD(arg0, s16 *, 0x12));
        } else {
        case 0xF1:
            fn_8010E9A4((s32) (M2C_FIELD(arg0, s32 *, 4)), (u32) ((u32) arg0));
            fn_8017776C((s32) ((s32) arg0));
        }
        break;
    }
    return (s32) (0);
}

void fn_8001A1A4(s8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r4;

    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((temp_r4 = M2C_FIELD(arg0, s32 *, 0), (((s32) (temp_r4 & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) (0), (s32) (temp_r4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (2));
        fn_80016964();
        if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x40) != 0) {
            fn_80016DE0((s32) ((s32) &sp8), (s32) (0));
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x20000) == 0) {
                fn_8001A348((s8 *) (arg0));
            } else {
                fn_8001A548((s8 *) (arg0));
            }
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            fn_8001A7CC((s8 *) (arg0));
        }
        fn_80016A44((s32) (0));
        fn_8017C2CC();
        fn_80016A94((s32) (0));
    }
}

void fn_8001A940(s8 *arg0, u32 arg1) {
    struct Color {
        u32 a: 8;
        u32 b: 8;
        u32 c: 8;
        u32 d: 8;
    };
    Color c = *(Color *)&arg1;
    ((u8 *)arg0)[0] = c.a;
    ((u8 *)arg0)[1] = c.b;
    ((u8 *)arg0)[2] = c.c;
    ((u8 *)arg0)[3] = c.d;
}

void fn_8001A964(void) {
}

void fn_8001A968(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8001A978(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8001A9A0(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_8001A348(s8 *arg0) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;
    s32 temp_r30;
    u16 temp_r0;
    u16 temp_r3;

    GXBegin((s32) (0x80), (s32) (0), (s32) (4));
    f32 x0, x1, y0, y1;
    x0 = M2C_FIELD(&lbl_8049E678, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x24);
    y0 = M2C_FIELD(&lbl_8049E678, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x2C);
    x1 = M2C_FIELD(arg0, f32 *, 0x28);
    y1 = M2C_FIELD(arg0, f32 *, 0x30);
    s8 *rm = M2C_FIELD(&lbl_803C22B0, s8 **, 0x54);
    u16 w = M2C_FIELD(rm, u16 *, 0xE);
    temp_f31 = x0 * w;
    u16 h = M2C_FIELD(rm, u16 *, 0x10);
    temp_f30 = y0 * h;
    temp_f29 = w * x1;
    temp_f28 = h * y1;
    temp_r30 = (s32) ((s32) ((f32) M2C_FIELD(arg0, u8 *, 0x1B) * M2C_FIELD(arg0, f32 *, 0x1C)));
    fn_8001A9A0(temp_f31, temp_f30, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r30));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 4), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A9A0(temp_f29, temp_f30, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r30));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 0), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A9A0(temp_f29, temp_f28, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r30));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 0), M2C_FIELD(&lbl_8049E678, f32 *, 0));
    fn_8001A9A0(temp_f31, temp_f28, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r30));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 4), M2C_FIELD(&lbl_8049E678, f32 *, 0));
    fn_8001A964();
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8001A548(s8 *arg0) {
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;
    s32 temp_r30;
    s32 temp_r29;
    u16 temp_r0;
    u16 temp_r3;

    GXBegin((s32) (0xA0), (s32) (0), (s32) (6));
    f32 x1, x0, y0, y1;
    x0 = M2C_FIELD(&lbl_8049E678, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x24);
    y0 = M2C_FIELD(&lbl_8049E678, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x2C);
    x1 = M2C_FIELD(arg0, f32 *, 0x28);
    y1 = M2C_FIELD(arg0, f32 *, 0x30);
    s8 *rm = M2C_FIELD(&lbl_803C22B0, s8 **, 0x54);
    u16 w = M2C_FIELD(rm, u16 *, 0xE);
    temp_f31 = x0 * w;
    u16 h = M2C_FIELD(rm, u16 *, 0x10);
    temp_f30 = y0 * h;
    temp_f29 = w * x1;
    temp_f28 = h * y1;
    temp_r30 = (s32) ((s32) ((f32) M2C_FIELD(arg0, u8 *, 0x17) * M2C_FIELD(arg0, f32 *, 0x1C)));
    temp_r29 = (s32) ((s32) ((f32) M2C_FIELD(arg0, u8 *, 0x1B) * M2C_FIELD(arg0, f32 *, 0x1C)));
    fn_8001A9A0(temp_f29 * M2C_FIELD(&lbl_8049E678, f32 *, 8), temp_f28 * M2C_FIELD(&lbl_8049E678, f32 *, 8), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x14)), (u8) (M2C_FIELD(arg0, u8 *, 0x15)), (u8) (M2C_FIELD(arg0, u8 *, 0x16)), (u8) ((u8) temp_r30));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 8), M2C_FIELD(&lbl_8049E678, f32 *, 8));
    fn_8001A9A0(temp_f31, temp_f30, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r29));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 4), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A9A0(temp_f29, temp_f30, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r29));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 0), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A9A0(temp_f29, temp_f28, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r29));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 0), M2C_FIELD(&lbl_8049E678, f32 *, 0));
    fn_8001A9A0(temp_f31, temp_f28, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r29));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 4), M2C_FIELD(&lbl_8049E678, f32 *, 0));
    fn_8001A9A0(temp_f31, temp_f30, M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A978((u8) (M2C_FIELD(arg0, u8 *, 0x18)), (u8) (M2C_FIELD(arg0, u8 *, 0x19)), (u8) (M2C_FIELD(arg0, u8 *, 0x1A)), (u8) ((u8) temp_r29));
    fn_8001A968(M2C_FIELD(&lbl_8049E678, f32 *, 4), M2C_FIELD(&lbl_8049E678, f32 *, 4));
    fn_8001A964();
}
#pragma dont_inline reset

} // extern "C"
