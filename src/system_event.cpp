#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_800643A4_arg0 {
    s32 f_0;
    u8 pad_4[0x4C];
    s32 f_50;
    s32 f_54;
    s32 f_58;
    s32 f_5C;
    u8 pad_60[0x14];
    s32 f_74;
    u8 pad_78[0x10];
    f32 f_88;
    u8 pad_8C[0xB4];
    s32 f_140;
    s32 f_144;
    s32 f_148;
    u8 pad_14C[0x888];
    s32 f_9D4;
    u8 pad_9D8[0xC];
    s32 f_9E4;
    u8 pad_9E8[0x38];
    f32 f_A20;
    u8 pad_A24[0x174];
    s32 f_B98;
    u8 pad_B9C[0x4];
    s32 f_BA0;
};
struct S_fn_800654C8_arg0 {
    s32 f_0;
    u8 pad_4[0x8];
    s32 f_C;
    u8 pad_10[0x8];
    u32 f_18;
    u8 pad_1C[0x40];
    s32 f_5C;
    u8 pad_60[0xE0];
    s32 f_140;
    u8 pad_144[0xA50];
    s32 f_B94;
    u8 pad_B98[0xAB4];
    s32 f_164C;
    u8 pad_1650[0x2128];
    s32 f_3778;
    u8 pad_377C[0x13C];
    s32 f_38B8;
};
struct S_fn_800632E0_arg0 { s32 f_0; u8 pad_4[0x4C]; s32 f_50; s32 f_54; u8 pad_58[0x8]; s32 f_60; u8 pad_64[0x4]; s32 f_68; u8 pad_6C[0x8]; s32 f_74; s32 f_78; u8 pad_7C[0xC4]; s32 f_140; u8 pad_144[0xC]; s32 f_150; u8 pad_154[0xA40]; s32 f_B94; s32 f_B98; s32 f_B9C; s32 f_BA0; s32 f_BA4; };
struct S_fn_8006568C_arg0 { s32 f_0; u8 pad_4[0x14]; u32 f_18; u8 pad_1C[0x40]; s32 f_5C; u8 pad_60[0xE0]; s32 f_140; u8 pad_144[0xA50]; s32 f_B94; };
struct SK_fn_8006760C_38 { f32 f_0; f32 f_4; f32 f_8; };
struct SK_fn_8006760C_2C { f32 f_0; f32 f_4; f32 f_8; };
struct SK_fn_8006760C_14 { f32 f_0; f32 f_4; f32 f_8; };

struct S_fn_80066DD4_arg0 { u8 pad_0[0x10]; s32 f_10; };
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern s32 lbl_8049D500;
extern s32 lbl_8049D508;
extern s32 lbl_8049D50C;
extern s32 lbl_8049D514;
extern M2C_UNK lbl_8049EDE0;
extern float lbl_8049EE48;

f32 Atan2FIdx__Q24nw4r4mathFff(f32 farg0, f32 farg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001D9AC(s32 arg0, s32 arg1);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 * fn_8005E4A4(s8 *arg0);
void fn_80061FA0(M2C_UNK *arg0);
void fn_8006205C(s8 *arg0);
s32 fn_800632E0(S_fn_800632E0_arg0 *arg0);
s32 fn_80063980(s32 *arg0);
s32 fn_80063994(s32 *arg0);
s32 fn_80063CBC(s32 *arg0);
s32 fn_800643A4(S_fn_800643A4_arg0 *arg0);
s32 fn_800649D0(s32 *arg0);
s32 fn_800654C8(S_fn_800654C8_arg0 *arg0);
s32 fn_8006568C(S_fn_8006568C_arg0 *arg0);
s32 fn_80066DD4(S_fn_80066DD4_arg0 *arg0);
f32 fn_800674B8(s32 arg0, s32 arg1, f32 farg0, f32 farg1);
void fn_800674E4(s8 *arg0);
void fn_8006760C(s8 *arg0);
s32 fn_80068524(void);
M2C_UNK fn_80068718(f32 *arg0);
M2C_UNK fn_80068728(s8 *arg0);
void fn_8006AA78(s32 *arg0, f32 farg0);
s32 fn_8006B078(s32 *arg0);
void fn_80071FB4(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_800868F4(s32 arg0);
s32 fn_8008CFD8(u32 arg0);
s32 fn_8008D030(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
f32 fn_80172688(f32 farg0);
M2C_UNK fn_80173580(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181568(s8 *arg0, s32 arg1);

s32 fn_80063980(s32 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x10000000));
    return (s32) (-2);
}

s32 fn_80063994(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x10000000);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_r4);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x10000) == 0) && ((s32) (temp_r4 & 2) != 0)) {
        fn_80068524();
        lbl_8049D500 = 0x1C0;
        return (s32) (0x1C0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x178) & 8) != 0) && ((s32) lbl_8049D50C == 1) && (M2C_FIELD(arg0, f32 *, 0xB8) > M2C_FIELD(&lbl_8049EDE0, f32 *, 0x28))) {
        lbl_8049D500 = 4;
        M2C_FIELD(arg0, s32 *, 0x148) = (s32) (5);
    }
    fn_8006205C((s8 *) (arg0));
    return (s32) (-2);
}

s32 fn_80063CBC(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x54));
    if ((s32) (temp_r4 & 0x2000) == 0) {
        return (s32) (-2);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x40000000) != 0) {
        return (s32) (-2);
    }
    if ((s32) (temp_r4 & 0x20000000) != 0) {
        return (s32) (-2);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x400000) != 0) {
        return (s32) (-2);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 1) == 0) && ((fn_8006B078((s32 *) (arg0)) != 0) || ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x1000) != 0))) {
        return (s32) (-2);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA10) < 0x14) {
        return (s32) (-2);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 8) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0xB98) & 0x4000) == 0)) {
        return (s32) (-2);
    }
    fn_80094AB4((s32 *) (arg0), (s32 *) (NULL), (s32) (0x1F4));
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x800) != 0) {
        lbl_8049D500 = 0x27;
        return (s32) (0x27);
    }
    lbl_8049D500 = 0x26;
    return (s32) (0x26);
}

s32 fn_800649D0(s32 *arg0) {
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r30_3;
    s32 temp_r30_4;
    s32 temp_r30_5;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB0));
    if ((s32) (temp_r4 & 0x800000) != 0) {
        return (s32) (-1);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0x800) != 0) && ((s32) (temp_r4 & 0x10) != 0)) {
        temp_r30_5 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
        M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        fn_80072A6C((s8 *) (arg0));
        fn_80071FB4((s8 *) (arg0));
        return (s32) (temp_r30_5 + 0xA0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x50));
    if ((s32) (temp_r5 & 0x800) != 0) {
        if ((s32) (temp_r4 & 4) != 0) {
            temp_r30_4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_4 + 0xA0);
        }
        if ((s32) (temp_r4 & 8) != 0) {
            temp_r30_3 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_3 + 0xA0);
        }
        goto block_15;
    }
    if ((s32) (temp_r5 & 0x10) != 0) {
        if ((s32) (temp_r4 & 2) != 0) {
            temp_r30_2 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
            fn_80072A6C((s8 *) (arg0));
            fn_80071FB4((s8 *) (arg0));
            return (s32) (temp_r30_2 + 0xA0);
        }
        goto block_15;
    }
    if ((s32) (temp_r4 & 1) != 0) {
        temp_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB4));
        M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        fn_80072A6C((s8 *) (arg0));
        fn_80071FB4((s8 *) (arg0));
        return (s32) (temp_r30 + 0xA0);
    }
block_15:
    return (s32) (-1);
}

f32 fn_800674B8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    return M2C_FIELD(&lbl_8049EDE0, f32 *, 0x20) * Atan2FIdx__Q24nw4r4mathFff(farg0, farg1);
}

void fn_800674E4(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xF8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x100) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x104) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x10C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x110) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x11C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x120) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x124) = 0.0f;
    fn_80061FA0((M2C_UNK *) (arg0 + 0xC4));
    fn_80061FA0((M2C_UNK *) (arg0 + 0xD0));
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x128) = (f32) M2C_FIELD(&lbl_8049EE48, f32 *, 4);
    fn_800868F4((s32) ((s32) (arg0 + 0xA1C)));
}

#pragma dont_inline on
s32 fn_800643A4(S_fn_800643A4_arg0 *arg0) {
    s32 temp_r3;
    s32 temp_r6;

    temp_r6 = (s32) (arg0->f_54 | 0x10000000);
    arg0->f_54 = temp_r6;
    if ((s32) (arg0->f_58 & 1) != 0) {
        return (s32) (-2);
    }
    if (((arg0->f_88 - arg0->f_A20) > M2C_FIELD(&lbl_8049EDE0, f32 *, 0x44)) && ((s32) (arg0->f_50 & 0x40101800) == 0)) {
        arg0->f_54 = (s32) (temp_r6 & 0xEFFFFFFF);
        arg0->f_140 = 0x22;
        arg0->f_144 = -1;
        return (s32) (lbl_8049D500);
    }
    if (((s32) (arg0->f_74 & 0x4000) == 0) && (((((s32) ((arg0->f_50) & 0x1000) == 0) != 0)) || ((s32) ((arg0->f_50) & 0x10) == 0))) {
        lbl_8049D500 = 1;
    }
    if ((s32) arg0->f_9E4 > 0) {
        return (s32) (lbl_8049D500);
    }
    if ((s32) arg0->f_9D4 > 0) {
        arg0->f_9D4 = 0;
    }
    arg0->f_54 = (s32) (arg0->f_54 | 0x4000);
    if ((s32) (arg0->f_50 & 0x100) == 0) {
        fn_8006205C((s8 *) (arg0));
    }
    if ((s32) (arg0->f_58 & 0x10000) == 0) {
        switch ((s32) lbl_8049D50C) {               /* switch 1; irregular */
        case 9:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
            lbl_8049D500 = 2;
            break;
        case 10:                                    /* switch 1 */
        case 2:                                     /* switch 1 */
            if ((s32) (arg0->f_54 & 0x100000) != 0) {
                arg0->f_144 = -1;
            }
            lbl_8049D500 = 3;
            break;
        }
    }
    if ((s32) (arg0->f_58 & 0x10000) == 0) {
        switch ((s32) lbl_8049D514) {               /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            lbl_8049D500 = 4;
            arg0->f_148 = 5;
            break;
        case 2:                                     /* switch 2 */
            lbl_8049D500 = 7;
            break;
        }
    }
    if (((s32) (arg0->f_58 & 0x20) == 0) && ((s32) (arg0->f_5C & 0x100) == 0)) {
        temp_r3 = (s32) (arg0->f_B98);
        if (((s32) (temp_r3 & 0x200) == 0) && ((s32) (arg0->f_BA0 & 0x200) != 0)) {
            if ((s32) (arg0->f_0 & 1) != 0) {
                M2C_FIELD(&lbl_80395728, s32 *, 0x11AC) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11AC) + 1));
            }
            lbl_8049D500 = 0x1F;
            return (s32) (0x1F);
        }
        if (((s32) (temp_r3 & 0x100) == 0) && ((s32) (arg0->f_BA0 & 0x100) != 0)) {
            if ((s32) (arg0->f_0 & 1) != 0) {
                M2C_FIELD(&lbl_80395728, s32 *, 0x11AC) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11AC) + 1));
            }
            lbl_8049D500 = 0x1E;
            return (s32) (0x1E);
        }
        goto block_43;
    }
block_43:
    if (((s32) (arg0->f_74 & 0x20000) == 0) && ((s32) (lbl_8049D50C & 4) != 0)) {
        switch ((lbl_8049D50C & 3)) {                          /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            lbl_8049D500 = 0x13;
            return (s32) (0x13);
        case 2:                                     /* switch 3 */
            lbl_8049D500 = 0x13;
            return (s32) (0x13);
        default:                                    /* switch 3 */
            lbl_8049D500 = 0x13;
            return (s32) (0x13);
        }
    } else {
        return (s32) (-2);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
#pragma optimize_for_size off
#pragma optimization_level 3
s32 fn_800654C8(S_fn_800654C8_arg0 *arg0) {
    if ((s32) (arg0->f_5C & 0x80) != 0) {
        return (s32) ((s32) (-2));
    }
    if (((s32) arg0->f_38B8 == 3) && ((s32) arg0->f_140 == 1)) {
        return (s32) ((s32) (0x221));
    }
    if (((s32) arg0->f_3778 == 0) && ((s32) (arg0->f_0 & 0x08000000) == 0) && (fn_8008CFD8((u32) ((u32) (fn_8008D030((s32) ((s32) (arg0->f_C)))))) != 2)) {
        return (s32) ((s32) (-2));
    }
    if ((arg0->f_164C == 1) && ((u32) arg0->f_18 == 1U)) {
        return (s32) ((s32) (-2));
    }
    if ((arg0->f_164C == 2) && ((u32) arg0->f_18 == 1U)) {
        return (s32) ((s32) (-2));
    }
    if ((s32) (M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0) & 4) != 0) {
        return (s32) ((s32) (-2));
    }
    if (((s32) arg0->f_3778 != 0) && (((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) && ((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 0x70) == 2) && ((s32) (arg0->f_0 & 0x08000000) == 0) && (fn_8008CFD8((u32) ((u32) (fn_8008D030((s32) ((s32) (arg0->f_C)))))) != 2)) {
        return (s32) ((s32) (-2));
    }
    if ((u32) arg0->f_18 == 0x2BU) {
        return (s32) ((s32) (-2));
    }
    if (((u32) ((arg0->f_140) - 0xB) <= 7U) || ((arg0->f_140) == 1) || ((arg0->f_140) == 0x1D)) {
        if (((s32) ((arg0->f_B94) & 0x40) != 0) && ((s32) ((arg0->f_B94) & 0x100) != 0)) {
            fn_80072A84((s8 *) ((s8 *) (arg0)));
            lbl_8049D508 = 0x140;
            return (s32) ((s32) (0x220));
        }
    }
    return (s32) ((s32) (-2));
}
#pragma optimization_level reset
#pragma optimize_for_size reset
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800632E0(S_fn_800632E0_arg0 *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r31;
    s32 var_r5;

    temp_r4 = (s32) (arg0->f_68);
    if ((s32) (temp_r4 & 0x80000) == 0) {
        return (s32) (-2);
    }
    arg0->f_68 = (s32) (temp_r4 & 0xFFF7FFFF);
    temp_r4_2 = (s32) (arg0->f_50);
    if ((u32) (temp_r4_2 & 0x3000) == 0x3000) {
        arg0->f_54 = (s32) (arg0->f_54 | 0x4000);
        if ((s32) (temp_r4_2 & 0x100) == 0) {
            if ((s32) (temp_r4_2 & 0x80000000) != 0) {
                if ((s32) (temp_r4_2 & 0x10000000) != 0) {
                    fn_8006205C((s8 *) (arg0));
                }
            } else {
                fn_8006205C((s8 *) (arg0));
            }
        }
    }
    if (((u32) (arg0->f_50 & 0x8800) == 0x8800U) && ((s32) (arg0->f_60 & 0x01000000) == 0)) {
        var_r5 = (s32) (0);
        if ((s32) (arg0->f_0 & 1) != 0) {
            M2C_FIELD(&lbl_80395728, s32 *, 0x11B8) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11B8) + 1));
        }
        if ((s32) (arg0->f_BA0 & 0x30) != 0) {
            var_r5 = (s32) (1);
        }
        if ((s32) (arg0->f_BA4 & 0x30) != 0) {
            var_r5 = (s32) (1);
        }
        if ((s32) (arg0->f_B98 & 0x30) != 0) {
            var_r5 = (s32) (1);
        }
        if ((s32) (arg0->f_B9C & 0x30) != 0) {
            var_r5 = (s32) (1);
        }
        if ((var_r5 != 0) && ((s32) (arg0->f_0 & 0x1000) == 0) && ((s32) (arg0->f_78 & 0x80000) == 0) && ((s32) (arg0->f_74 & 0x200000) == 0)) {
            temp_r4 = (s32) (lbl_8049D50C);
            var_r31 = (s32) (temp_r4);
            if ((s32) (arg0->f_B94 & 0x8000) != 0) {
                var_r31 = (s32) (temp_r4 & 0xFFFFFFF3);
                if ((s32) (temp_r4 & 4) != 0) {
                    var_r31 |= 8;
                }
                if ((s32) (temp_r4 & 8) != 0) {
                    var_r31 |= 4;
                }
            }
            fn_8006AA78((s32 *) (arg0), M2C_FIELD(&lbl_8049EDE0, f32 *, 0x24));
            arg0->f_50 = (s32) (arg0->f_50 | 0x40);
            if ((s32) (arg0->f_0 & 1) != 0) {
                M2C_FIELD(&lbl_80395728, s32 *, 0x11B4) = (s32) ((s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11B4) + 1));
            }
            if ((s32) (arg0->f_50 & 0x20000) != 0) {
                if ((s32) arg0->f_140 == 0x46) {
                    arg0->f_150 = 0x74;
                    return (s32) (0x74);
                }
                switch (var_r31) {                  /* switch 1; irregular */
                case 4:                             /* switch 1 */
                    return (s32) (0x76);
                case 8:                             /* switch 1 */
                    return (s32) (0x75);
                case 2:                             /* switch 1 */
                    return (s32) (0x74);
                default:                            /* switch 1 */
                    return (s32) (0x74);
                }
            } else {
                if ((s32) arg0->f_140 == 0x47) {
                    arg0->f_150 = 0x79;
                    return (s32) (0x79);
                }
                switch (var_r31) {                  /* switch 2; irregular */
                case 4:                             /* switch 2 */
                    return (s32) (0x7C);
                case 8:                             /* switch 2 */
                    return (s32) (0x7B);
                case 1:                             /* switch 2 */
                    return (s32) (0x79);
                default:                            /* switch 2 */
                    return (s32) (0x79);
                }
            }
        } else {
            goto block_52;
        }
    } else {
block_52:
        return (s32) (arg0->f_150);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8006568C(S_fn_8006568C_arg0 *arg0) {

    if ((s32) (arg0->f_0 & 0x10) != 0) {
        return (s32) (-2);
    }
    if ((s32) (arg0->f_5C & 0x20000) != 0) {
        return (s32) (-2);
    }
    if ((u32) arg0->f_18 == 0x2BU) {
        return (s32) (-2);
    }
    if ((s32) (*M2C_FIELD(&lbl_80390580, s32 **, 0xC) & 4) != 0) {
        return (s32) (-2);
    }
    if (((u32) ((arg0->f_140) - 0xB) <= 7U) || ((arg0->f_140) == 1) || ((arg0->f_140) == 0x1D)) {
        if (((s32) ((arg0->f_B94) & 0x200) != 0) && ((s32) ((arg0->f_B94) & 0x100) != 0)) {
            fn_80072A84((s8 *) (arg0));
            lbl_8049D508 = 0x300;
            return (s32) (0x230);
        }
    }
    return (s32) (-2);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8006760C(s8 *arg0) {
    Vec sp44;
    SK_fn_8006760C_38 sp38;
    SK_fn_8006760C_2C sp2C;
    Vec sp20;
    SK_fn_8006760C_14 sp14;
    Vec sp8;
    s32 *temp_r3_2;
    s32 *var_r31;

    var_r31 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x3854));
    if ((var_r31 != NULL) && ((s32) M2C_FIELD(var_r31, s32 *, 0x377C) == 0)) {
        var_r31 = (s32 *) (NULL);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0x180000) != 0) {
        if ((M2C_FIELD(arg0, u32 *, 0x50) & 0x80008000) == 0) {
            temp_r3_2 = (s32 *) (fn_8005E4A4((s8 *) (arg0)));
            if (temp_r3_2 != NULL) {
                var_r31 = (s32 *) (temp_r3_2);
            }
        }
    }
    fn_80061FA0((M2C_UNK *) (arg0 + 0xC4));
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) (0);
    if (var_r31 != NULL) {
        fn_80173580((s32) ((s32) &sp14), (s32) (3), (s32) (fn_80181568((s8 *) (M2C_FIELD(var_r31, s8 **, 0x377C)), (s32) (6))));
        fn_80173580((s32) ((s32) &sp8), (s32) (3), (s32) (fn_80181568((s8 *) (M2C_FIELD(var_r31, s8 **, 0x377C)), (s32) (3))));
        fn_8001D9D0((s32) ((s32) &sp2C), (s32) ((s32) &sp14), (s32) ((s32) &sp8), M2C_FIELD(&lbl_8049EE48, f32 *, 0xC));
        fn_80019DAC((s8 *) (&sp20), (f32 *) ((f32 *) ((s8 *)var_r31 + 0x84)));
    } else {
        fn_800868F4((s32) ((s32) &sp44));
        fn_80019DAC((s8 *) (&sp2C), (f32 *) (&sp44));
        fn_80019DAC((s8 *) (&sp20), (f32 *) (&sp44));
    }
    fn_80173580((s32) ((s32) &sp14), (s32) (3), (s32) (fn_80181568((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s32) (6))));
    fn_80173580((s32) ((s32) &sp8), (s32) (3), (s32) (fn_80181568((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s32) (3))));
    fn_8001D9D0((s32) ((s32) &sp38), (s32) ((s32) &sp14), (s32) ((s32) &sp8), M2C_FIELD(&lbl_8049EE48, f32 *, 0xC));
    fn_8001B8B8((s32) ((s32) &sp14), (s32) ((s32) (arg0 + 0x84)), (s32) ((s32) &sp20));
    M2C_FIELD(arg0, f32 *, 0xB0) = fn_80172688(((f32 (*)(SK_fn_8006760C_14 *)) fn_80068718)(&sp14) - M2C_FIELD(arg0, f32 *, 0xA0));
    M2C_FIELD(arg0, f32 *, 0xB4) = ((f32 (*)(SK_fn_8006760C_14 *)) fn_80068728)(&sp14);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (sp2C.f_4 - sp38.f_4);
    sp2C.f_4 = 0.0f;
    sp38.f_4 = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xB8) = ((f32 (*)(SK_fn_8006760C_38 *, SK_fn_8006760C_2C *)) fn_8001D9AC)(&sp38, &sp2C);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80066DD4(S_fn_80066DD4_arg0 *arg0) {
    s8 *var_r4;
    s32 var_r5;

    var_r5 = (s32) (0);
    var_r4 = (s8 *) (M2C_FIELD(*(s32 *)((s8 *) &lbl_803906D0 + (arg0->f_10 * 4)), s8 **, 0xC));
    while (var_r4 != NULL) {
        if (((M2C_FIELD(M2C_FIELD(var_r4, s8 **, 0), s32 *, 0x38CC)) > 0) && ((M2C_FIELD(M2C_FIELD(var_r4, s8 **, 0), s32 *, 0x38CC)) < 0x32)) {
            var_r5 = (s32) (1);
        }
        if (var_r5 != 0) break;
        var_r4 = (s8 *) (M2C_FIELD(var_r4, s8 **, 0xC));
    }
    return (s32) (var_r5);
}
#pragma dont_inline reset

} // extern "C"
