#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_80061434_arg0 {
    u8 pad_0[0x50];
    s32 f_50;
    u8 pad_54[0x4];
    s32 f_58;
    u8 pad_5C[0x8];
    s32 f_64;
    s32 f_68;
    u8 pad_6C[0xC];
    s32 f_78;
    u8 pad_7C[0xB0];
    f32 f_12C;
    f32 f_130;
    u8 pad_134[0xC];
    s32 f_140;
    u8 pad_144[0x34];
    s32 f_178;
    s32 f_17C;
    u8 pad_180[0x4C];
    f32 f_1CC;
    f32 f_1D0;
    u8 pad_1D4[0x7D8];
    s32 f_9AC;
    s32 f_9B0;
    s32 f_9B4;
    u8 pad_9B8[0x18];
    s32 f_9D0;
    s32 f_9D4;
    u8 pad_9D8[0x4];
    s32 f_9DC;
    u8 pad_9E0[0x8];
    s32 f_9E8;
    s32 f_9EC;
    u8 pad_9F0[0x10];
    s32 f_A00;
    s32 f_A04;
    u8 pad_A08[0x8];
    s32 f_A10;
    s32 f_A14;
    u8 pad_A18[0x180];
    s32 f_B98;
    u8 pad_B9C[0xAB4];
    s32 f_1650;
    u8 pad_1654[0x212C];
    s8 * f_3780;
    f32 f_3784;
    f32 f_3788;
    f32 f_378C;
    u8 pad_3790[0xC4];
    s8 * f_3854;
    u8 pad_3858[0x68];
    s32 f_38C0;
    s32 f_38C4;
};
struct S_fn_80061434_temp_r4_3 {
    u8 pad_0[0xC];
    f32 f_C;
    f32 f_10;
};

struct S_fn_8006093C_arg0 { u8 pad_0[0x4]; s32 f_4; u8 pad_8[0x50]; s32 f_58; u8 pad_5C[0x14]; s32 f_70; u8 pad_74[0x15C8]; s32 f_163C; };
struct E_8006093C { u8 pad_0[0x1C]; s32 f_1C; u8 pad_20[0x58]; };
struct S_fn_800609D8_arg0 { u8 pad_0[0x4]; s32 f_4; u8 pad_8[0x50]; s32 f_58; u8 pad_5C[0x14]; s32 f_70; u8 pad_74[0x15C8]; s32 f_163C; };
struct E_800609D8 { u8 pad_0[0x1C]; s32 f_1C; u8 pad_20[0x58]; };
struct SK_fn_80060C24_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct SK_fn_800619B0_20 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_800619B0_temp_r3 { u8 pad_0[0x50]; s32 f_50; u8 pad_54[0x4]; s32 f_58; u8 pad_5C[0xC]; s32 f_68; u8 pad_6C[0x3710]; s32 f_377C; };
struct S_fn_80061F18_arg0 { u8 pad_0[0x10]; s32 f_10; u8 pad_14[0x60]; s32 f_74; };
struct S_fn_800620C8_arg0 { u8 pad_0[0x50]; s32 f_50; s32 f_54; u8 pad_58[0x8]; s32 f_60; u8 pad_64[0x8]; s32 f_6C; u8 pad_70[0x84]; f32 f_F4; f32 f_F8; u8 pad_FC[0x10]; f32 f_10C; f32 f_110; u8 pad_114[0x2C]; s32 f_140; s32 f_144; };
struct B_80061CEC { u8 d[0x350]; };
struct A_80061CEC { u8 pad[0x1654]; B_80061CEC b[1]; };
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D500;
extern s32 lbl_8049D50C;
extern s32 lbl_8049D510;
extern float lbl_8049EDA8;
__declspec(section ".sdata2") extern const f32 lbl_8049EDE0[];

void PSVECNormalize(s32 arg0, s32 arg1);
void PSVECScale(s32 arg0, s32 arg1, f32 arg2);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_8005CF00(s32 arg0, s32 arg1);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
void fn_80060848(s8 *arg0);
void fn_80060918(s32 arg0, s32 arg1);
s32 fn_8006093C(S_fn_8006093C_arg0 *arg0, s32 arg1);
s32 fn_800609D8(S_fn_800609D8_arg0 *arg0);
void fn_80060AD4(s8 *arg0);
void fn_80060C24(s8 *arg0, s32 arg1);
void fn_80060D74(s8 *arg0);
void fn_80060EDC(s8 *arg0);
void fn_8006137C(s8 *arg0);
void fn_80061434(S_fn_80061434_arg0 *arg0);
void fn_800618C4(s8 *arg0);
void fn_800619B0(s8 *arg0);
void fn_80061CEC(s8 *arg0);
s32 fn_80061F18(S_fn_80061F18_arg0 *arg0);
void fn_80061F84(s8 *arg0, f32 farg0, f32 farg1);
void fn_80061FA0(M2C_UNK *arg0);
s32 fn_80061FB8(f32 farg0, s32 arg1);
void fn_80062018(s8 *arg0, s32 arg1, s32 arg2);
void fn_80062050(s8 *arg0, s32 arg1, s32 arg2);
void fn_8006205C(s8 *arg0);
s32 fn_800620C8(S_fn_800620C8_arg0 *arg0);
s32 fn_80062D40(s8 *arg0);
s32 fn_80066E2C(s32 *arg0);
void fn_800674E4(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
f32 fn_8006B40C(s8 *arg0);
f32 fn_8006B498(s8 *arg0);
void fn_80071FB4(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_80072AA0(s8 *arg0);
void fn_8007600C(s8 *arg0);
s32 fn_8008AE14(void);
s32 * fn_8009A09C(s32 arg0, s32 arg1);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK fn_8017CF8C(s8 *arg0, s32 arg1, f32 *arg2, f32 farg0);
s32 fn_80181568(s8 *arg0, s32 arg1);
void fn_80182518(s8 *arg0, s8 *arg1);
void fn_80182744(s32 arg0, s8 *arg1);

void fn_80060918(s32 arg0, s32 arg1) {
    fn_80060848((s8 *) (fn_8005E4D4((s8 *) (arg0), (s32) (arg1))));
}

void fn_80060AD4(s8 *arg0) {
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0x40) != 0) {
        fn_80071FB4((s8 *) (arg0));
        fn_80072A6C((s8 *) (arg0));
        fn_80072A84((s8 *) (arg0));
        fn_80072AA0((s8 *) (arg0));
        fn_80060848((s8 *) (arg0));
    }
}

void fn_80060D74(s8 *arg0) {
    fn_80060C24((s8 *) (arg0), (s32) (0));
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFFDF));
    fn_800674E4((s8 *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg0, f32 *, 0xA20);
    fn_80182518((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s8 *) (arg0 + 0x84));
}

void fn_80060EDC(s8 *arg0) {
    s32 *temp_r4;
    s32 *temp_r4_2;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r6;

    temp_r3 = (s32) (fn_80066E2C((s32 *) ((s32 *) arg0)));
    temp_r6 = (s32) (temp_r3 & 0x3FFF);
    if ((temp_r3 >= 0) && (temp_r5 = M2C_FIELD(arg0, s32 *, 0x140), ((temp_r5 == temp_r6) == 0))) {
        if (((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) == 7) || (((s32) M2C_FIELD(&lbl_803C1A40, s32 *, 0x14) == 1) && ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x12U))) {
            if (temp_r5 == -1) {
                temp_r4 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x3780));
                if (temp_r4 != NULL) {
                    *temp_r4 |= 0x2000;
                }
            } else {
                temp_r4_2 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x3780));
                if (temp_r4_2 != NULL) {
                    *temp_r4_2 &= 0xFFFFDFFF;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x140) = (s32) (temp_r6);
        if ((s32) (temp_r3 & 0x8000) != 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x40));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0xFFFFFFBF));
    }
}

void fn_8006137C(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0xEB8));
    if (temp_r4 != 0) {
        temp_r0 = (s32) (temp_r4 - 1);
        M2C_FIELD(arg0, s32 *, 0xEB8) = (s32) (temp_r0);
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (-1);
        }
    }
    temp_r4_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x1634));
    if (temp_r4_2 != 0) {
        temp_r0_2 = (s32) (temp_r4_2 - 1);
        M2C_FIELD(arg0, s32 *, 0x1634) = (s32) (temp_r0_2);
        if (temp_r0_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x1630) = (s32) (-1);
        }
    }
    temp_r4_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x1608));
    if ((temp_r4_3 != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x15FC) & 0x8000) == 0)) {
        temp_r0_3 = (s32) (temp_r4_3 - 1);
        M2C_FIELD(arg0, s32 *, 0x1608) = (s32) (temp_r0_3);
        if (temp_r0_3 == 0) {
            M2C_FIELD(arg0, s32 *, 0x1600) = (s32) (-1);
            M2C_FIELD(arg0, s32 *, 0x1610) = (s32) (-1);
        }
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x80000000) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x13E4) != (s32) M2C_FIELD(arg0, s32 *, 0x13E8))) {
        M2C_FIELD(arg0, s32 *, 0x13E8) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x13E4) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0x13EC) = (s32) (-1);
    }
}

#pragma dont_inline on
void fn_800618C4(s8 *arg0) {
    f32 val = M2C_FIELD(&lbl_8049EDA8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x3784) = val;
    M2C_FIELD(arg0, f32 *, 0x3788) = val;
    M2C_FIELD(arg0, f32 *, 0x378C) = val;
}
#pragma dont_inline reset

void fn_80061F84(s8 *arg0, f32 farg0, f32 farg1) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x9A4) + farg0;
    M2C_FIELD(arg0, f32 *, 0x9A4) = temp_f0;
    if (farg1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x9A4) = farg1;
    }
}

#pragma dont_inline on
void fn_80061FA0(M2C_UNK *arg0) {
    f32 val = M2C_FIELD(&lbl_8049EDA8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0) = val;
    M2C_FIELD(arg0, f32 *, 4) = val;
    M2C_FIELD(arg0, f32 *, 8) = val;
}
#pragma dont_inline reset

s32 fn_80061FB8(f32 farg0, s32 arg1) {
    f32 temp_f1;
    s32 var_r3;
    s32 var_r3_2;

    temp_f1 = M2C_FIELD(&lbl_8049EDA8, f32 *, 0x20) * farg0;
    if (temp_f1 > M2C_FIELD(&lbl_8049EDA8, f32 *, 4)) {
        var_r3_2 = (s32) ((s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x34) + temp_f1));
    } else {
        var_r3_2 = (s32) ((s32) (temp_f1 - M2C_FIELD(&lbl_8049EDA8, f32 *, 0x34)));
    }
    var_r3 = (s32) (var_r3_2 - 1);
    if (var_r3 < 0) {
        var_r3 = (s32) (0);
    }
    return (s32) (var_r3);
}

void fn_80062018(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x15F8));
    if (temp_r0 < 0x40) {
        M2C_FIELD((arg0 + (temp_r0 * 8)), s32 *, 0x13FC) = (s32) (arg1);
        M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x15F8) * 8)), s32 *, 0x13F8) = (s32) (arg2);
        M2C_FIELD(arg0, s32 *, 0x15F8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x15F8) + 1));
    }
}

void fn_80062050(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x15F8) = (s32) (0);
    fn_80062018((s8 *) (arg0), (s32) (arg1), (s32) (arg2));
}

void fn_8006205C(s8 *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0xB94) & 0x800) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x01000000) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0x200) == 0)) {
        if ((s32) (lbl_8049D50C & 2) != 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 1));
            return;
        }
        if ((s32) (lbl_8049D50C & 1) == 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 1));
        }
    }
}

#pragma dont_inline on
void fn_80061434(S_fn_80061434_arg0 *arg0) {    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r3;
    s32 temp_r3_5;
    S_fn_80061434_temp_r4_3 *temp_r4_3;

    arg0->f_130 = (f32) (arg0->f_130 + arg0->f_12C);
    temp_r0 = (s32) (arg0->f_9B0 - 1);
    arg0->f_9B0 = temp_r0;
    if (temp_r0 <= 0) {
        if (arg0->f_3854 != NULL) {
            if ((s32) (M2C_FIELD(arg0->f_3854, s32 *, 0x50) & 0x8000) == 0) {
                arg0->f_9AC = 0;
                arg0->f_9B4 = 0;
                M2C_FIELD(arg0->f_3854, s32 *, 0x9C0) = (s32) (0);
            }
        } else {
            arg0->f_9AC = 0;
            arg0->f_9B4 = 0;
        }
    }
    if ((s32) (arg0->f_64 & 4) == 0) {
        if (arg0->f_A14 >= 0) {
            arg0->f_A14 = (s32) (arg0->f_A14 - 1);
        }
    }
    M2C_FIELD(arg0->f_3780, f32 *, 0x10) = (f32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0xC) * arg0->f_12C);
    if (M2C_FIELD(&lbl_8049EDA8, f32 *, 4) != arg0->f_378C) {
        temp_r4_3 = (S_fn_80061434_temp_r4_3 *) (arg0->f_3780);
        if (((temp_r4_3->f_C) >= (arg0->f_3784 - M2C_FIELD(&lbl_8049EDA8, f32 *, 0x10))) && ((temp_r4_3->f_C) <= arg0->f_3788)) {
            temp_r4_3->f_10 = (f32) (temp_r4_3->f_10 * arg0->f_378C);
        }
    }
    if (((arg0->f_9E8) > 0) && ((temp_r0_2 = (arg0->f_9E8) - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C), arg0->f_9E8 = temp_r0_2, ((temp_r0_2 > 0) == 0)) || ((s32) arg0->f_140 != 1))) {
        arg0->f_9E8 = 0;
    }
    if (((s32) (arg0->f_178 & 0x10) != 0) && (arg0->f_1CC < M2C_FIELD(&lbl_8049EDA8, f32 *, 0x18)) && (arg0->f_1D0 <= arg0->f_12C)) {
        arg0->f_68 = (s32) (arg0->f_68 | 0x4000);
    } else {
        arg0->f_68 = (s32) (arg0->f_68 & 0xFFFFBFFF);
    }
    if (arg0->f_9EC > 0) {
        if ((s32) (u8) arg0->f_B98 != 0) {
            arg0->f_9EC = (s32) (arg0->f_9EC - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x1C) * arg0->f_12C)));
        }
        temp_r0_3 = (s32) (arg0->f_9EC - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C));
        arg0->f_9EC = temp_r0_3;
        if (temp_r0_3 <= 0) {
            arg0->f_9EC = 0;
        }
        fn_80072A6C((s8 *) (arg0));
        fn_80072A84((s8 *) (arg0));
    }
    if (arg0->f_A00 > 0) {
        temp_r0_4 = (s32) (arg0->f_A00 - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C));
        arg0->f_A00 = temp_r0_4;
        if (temp_r0_4 <= 0) {
            arg0->f_A00 = 0;
        }
    }
    if (arg0->f_A04 > 0) {
        temp_r0_5 = (s32) (arg0->f_A04 - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C));
        arg0->f_A04 = temp_r0_5;
        if (temp_r0_5 <= 0) {
            arg0->f_A04 = 0;
            arg0->f_78 = (s32) (arg0->f_78 & 0xF800FFFB);
        }
    }
    arg0->f_1650 = fn_801728DC((s32) (arg0->f_1650), (s32) (1), (s32) (0), (s32) (0x1869F));
    temp_r3 = (s32) (fn_801728DC((s32) (arg0->f_A10), (s32) (1), (s32) (0), (s32) (0x1869F)));
    arg0->f_A10 = temp_r3;
    if ((temp_r3 >= 0x14) && ((s32) (arg0->f_B98 & 0x4000) != 0)) {
        arg0->f_A10 = 0;
    }
    if (arg0->f_9D0 > 0) {
        temp_r0_6 = (s32) (arg0->f_9D0 - 1);
        arg0->f_9D0 = temp_r0_6;
        if (temp_r0_6 <= 0) {
            arg0->f_9D0 = 0;
        }
    }
    if (arg0->f_9DC > 0) {
        temp_r0_7 = (s32) (arg0->f_9DC - 1);
        arg0->f_9DC = temp_r0_7;
        if (temp_r0_7 <= 0) {
            arg0->f_9DC = 0;
        }
    }
    if (((s32) ((arg0->f_50) & 0x30000) != 0) && ((s32) ((arg0->f_50) & 0x08000000) == 0) && ((s32) (arg0->f_58 & 0x40) == 0)) {
        if (arg0->f_9D4 > 0) {
            temp_r0_8 = (s32) (arg0->f_9D4 - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C));
            arg0->f_9D4 = temp_r0_8;
            if (temp_r0_8 < 0) {
                arg0->f_9D4 = 0;
            }
            if ((s32) (arg0->f_B98 & 0x3F) != 0) {
                if (arg0->f_9D4 != 0) {
                    arg0->f_9D4 = (s32) (arg0->f_9D4 - (s32) (M2C_FIELD(&lbl_8049EDA8, f32 *, 0x14) * arg0->f_12C));
                }
                if ((s32) arg0->f_9D4 < 0) {
                    arg0->f_9D4 = 0;
                }
            }
        }
    }
    if ((s32) arg0->f_38C0 != 0) {
        if ((s32) (arg0->f_17C & 1) == 0) {
            temp_r3_5 = (s32) (fn_801728DC((s32) (arg0->f_38C4), (s32) (1), (s32) (0), (s32) (0x1869F)));
            arg0->f_38C4 = temp_r3_5;
            if (temp_r3_5 > 0x258) {
                arg0->f_38C4 = 0;
                arg0->f_38C0 = 0;
            }
        }
    } else {
        arg0->f_38C4 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8006093C(S_fn_8006093C_arg0 *arg0, s32 arg1) {
    s32 var_r6;

    if ((arg0->f_163C != 0) || ((arg0->f_70 & 1) != 0)) {
        var_r6 = (s32) (0);
    } else {
        var_r6 = (s32) (1);
    }
    E_8006093C *t = (E_8006093C *) &lbl_80395728;
    if (t[arg0->f_4].f_1C == 1) {
        var_r6 = (s32) (0);
    }
    if ((*M2C_FIELD(&lbl_80390580, s32 **, 0xC) & 0x800) != 0) {
        var_r6 = (s32) (0);
    }
    if ((arg0->f_58 & arg1) != 0) {
        var_r6 = (s32) (0);
    }
    if ((arg0->f_70 & 1) != 0) {
        var_r6 = (s32) (0);
    }
    return (s32) (var_r6);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800609D8(S_fn_800609D8_arg0 *arg0) {
    s32 var_r6;

    if ((arg0->f_163C != 0) || ((arg0->f_70 & 1) != 0)) {
        var_r6 = (s32) (0);
    } else {
        var_r6 = (s32) (1);
    }
    E_800609D8 *t = (E_800609D8 *) &lbl_80395728;
    if (t[arg0->f_4].f_1C == 1) {
        var_r6 = (s32) (0);
    }
    if ((*M2C_FIELD(&lbl_80390580, s32 **, 0xC) & 0x800) != 0) {
        var_r6 = (s32) (0);
    }
    if ((arg0->f_58 & 6) != 0) {
        var_r6 = (s32) (0);
    }
    if ((arg0->f_70 & 1) != 0) {
        var_r6 = (s32) (0);
    }
    return (s32) (var_r6);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_80060C24(s8 *arg0, s32 arg1) {
    SK_fn_80060C24_8 sp8;

    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x12C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x130) = (f32) M2C_FIELD(&lbl_8049EDA8, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x140) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x150) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) (-1);
    fn_8007600C((s8 *) (arg0 + 0x160));
    M2C_FIELD(arg0, s32 *, 0x9AC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9B0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9B4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x15F8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9C8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9CC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9D0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9D4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9D8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9DC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9E0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9E4) = (s32) (0x1E00);
    M2C_FIELD(arg0, s32 *, 0x9E8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9EC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9F0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9F4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9F8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x9FC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xA00) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xA04) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xA08) = (s32) (0);
    f32 g = M2C_FIELD(&lbl_8049EDA8, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xA0C) = g;
    M2C_FIELD(arg0, s32 *, 0x1640) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1644) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1650) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0xA20) = g;
    M2C_FIELD(arg0, s32 *, 0x3878) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38C0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38C4) = (s32) (0);
    fn_80061FA0((M2C_UNK *) (&sp8));
    f32 f = M2C_FIELD(&lbl_8049EDA8, f32 *, 8);
    fn_8017CF8C((s8 *) (arg0 + 0x98C), (s32) (fn_80181568((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s32) (3))), (f32 *) ((f32 *) &sp8), f);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma dont_inline on
void fn_800619B0(s8 *arg0) {
    SK_fn_800619B0_20 sp20;
    Vec sp14;
    Vec sp8;
    S_fn_800619B0_temp_r3 *temp_r3;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x2000) != 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x163C) == 0) && (fn_8008AE14() == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x50) & 0xC0100000) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x68) & 0xC00000) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0x58) & 1) == 0) && ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xE0000) == 0)) {
        temp_r3 = (S_fn_800619B0_temp_r3 *) (fn_8005E4A4((s8 *) (arg0)));
        if (((s32) (temp_r3->f_58 & 1) == 0) && ((s32) (temp_r3->f_68 & 0x800000) == 0)) {
            if ((s32) (((temp_r3->f_50) & 0x8000 & ~0x100000) | ((temp_r3->f_50) & 0x100000)) == 0) {
                fn_80182744((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (&sp20));
                fn_80182744((s32) (temp_r3->f_377C), (s8 *) (&sp14));
                f32 y = sp20.f_4;
                fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) &sp20), (s32) ((s32) &sp14));
                sp8.y = y;
                if (((f32 (*)(void *)) fn_8001B8BC)(&sp8) > M2C_FIELD(&lbl_8049EDA8, f32 *, 0x28)) {
                    PSVECNormalize((s32) ((s32) &sp8), (s32) ((s32) &sp8));
                    PSVECScale((s32) ((s32) &sp8), (s32) ((s32) &sp8), M2C_FIELD(&lbl_8049EDA8, f32 *, 0x28));
                    sp8.x += sp14.x;
                    sp8.y = y;
                    sp8.z += sp14.z;
                    fn_8001D9D0((s32) ((s32) &sp20), (s32) ((s32) &sp20), (s32) ((s32) &sp8), M2C_FIELD(&lbl_8049EDA8, f32 *, 0x2C));
                    fn_80182518((s8 *) ((s8 *) M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (&sp20));
                    fn_80182744((s32) (M2C_FIELD(arg0, s32 *, 0x377C)), (s8 *) (arg0 + 0x84));
                }
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80061CEC(s8 *arg0) {
    s32 temp_r29;
    s8 *temp_r31;

    temp_r31 = (s8 *) ((s8 *) &((A_80061CEC *) arg0)->b[M2C_FIELD(arg0, s32 *, 0x164C)]);
    if ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x800000) == 0) {
        temp_r29 = (s32) (fn_8005CF00((s32) (0), (s32) (0x12C)) >= 0x96);
        if (fn_8006B078((s32 *) ((s32 *) arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800000));
            fn_8009A09C((s32) (M2C_FIELD((temp_r31 + (temp_r29 * 4)), s32 *, 0x344)), (s32) (M2C_FIELD(arg0, s32 *, 4)));
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1650) >= 0x1E) {
            M2C_FIELD(arg0, s32 *, 0x1650) = (s32) (0);
            switch ((u32) (M2C_FIELD(arg0, s32 *, 0x60) & 0x70)) {                      /* irregular */
            case 0x10:
                fn_8009A09C((s32) (M2C_FIELD((temp_r31 + (temp_r29 * 4)), s32 *, 0x32C)), (s32) (M2C_FIELD(arg0, s32 *, 4)));
                return;
            case 0x20:
                fn_8009A09C((s32) (M2C_FIELD((temp_r31 + (temp_r29 * 4)), s32 *, 0x334)), (s32) (M2C_FIELD(arg0, s32 *, 4)));
                return;
            case 0x40:
                fn_8009A09C((s32) (M2C_FIELD((temp_r31 + (temp_r29 * 4)), s32 *, 0x33C)), (s32) (M2C_FIELD(arg0, s32 *, 4)));
                break;
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80061F18(S_fn_80061F18_arg0 *arg0) {
    s8 *p = M2C_FIELD(&lbl_80390580, s8 **, 0xC);
    if ((arg0->f_74 & 4) != 0) {
        return (s32) (0);
    }
    if (((M2C_FIELD(&lbl_80395728, u32 *, 4) == 0xCU) || (M2C_FIELD(&lbl_80395728, u32 *, 4) == 0x1EU)) && ((M2C_FIELD(p, s32 *, 0x6C) & 8) == 0) && (arg0->f_10 != 0)) {
        return (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800620C8(S_fn_800620C8_arg0 *arg0) {
    s32 temp_r0_2;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r4;

    if ((s32) (arg0->f_50 & 0x80000000) == 0) {
        if ((s32) (arg0->f_54 & 0x02000000) != 0) {
            arg0->f_140 = 0x30;
            arg0->f_144 = -1;
            temp_r4 = (s32) (arg0->f_60);
            if ((s32) (temp_r4 & 0x800) != 0) {
                fn_8006B498((s8 *) (arg0));
            } else if ((s32) ((temp_r4 & 0x4000 & ~0x08000000) | (temp_r4 & 0x08000000)) != 0) {
                fn_8006B40C((s8 *) (arg0));
            }
            if ((arg0->f_50 & 0x800) != 0) {
block_7:
                if (arg0->f_F8 == lbl_8049EDE0[0]) {
                    arg0->f_F8 = (f32) lbl_8049EDE0[1];
                }
                if ((s32) (((arg0->f_60) & 0x4000 & ~0x08000000) | ((arg0->f_60) & 0x08000000)) != 0) {
                    lbl_8049D500 = 0x94;
                } else if ((arg0->f_54 & 4) != 0) {
                    lbl_8049D500 = 0x34;
                } else {
                    lbl_8049D500 = 0x33;
                }
            } else if (((arg0->f_60 & 0x800) != 0) && ((arg0->f_60 & 0x80000) != 0)) {
                goto block_7;
            } else if ((arg0->f_54 & 4) != 0) {
                arg0->f_F8 = 0.0f;
                arg0->f_F4 = 0.0f;
                temp_r3_2 = (s32) (arg0->f_60);
                if ((temp_r3_2 & 0x10000) != 0) {
                    lbl_8049D500 = 0x38;
                } else if ((temp_r3_2 & 0x40000) != 0) {
                    lbl_8049D500 = 0x36;
                } else {
                    lbl_8049D500 = 0x37;
                }
            } else {
                arg0->f_F8 = 0.0f;
                arg0->f_F4 = 0.0f;
                temp_r3_3 = (s32) (arg0->f_60);
                if ((temp_r3_3 & 0x10000) != 0) {
                    lbl_8049D500 = 0x32;
                } else {
                    lbl_8049D500 = (temp_r3_3 & 0x40000) ? 0x30 : 0x31;
                }
            }
        }
        arg0->f_54 = (s32) (arg0->f_54 & 0xFDFFFFFB);
        fn_8006205C((s8 *) (arg0));
        return (s32) (lbl_8049D500);
    }
    temp_r0_2 = (s32) ((arg0->f_54 & 0xFDFFFFFB) | 1);
    arg0->f_54 = temp_r0_2;
    if (((s32) (temp_r0_2 & 0x80) != 0) || ((s32) (arg0->f_6C & 0x8000) != 0)) {
        arg0->f_10C = 0.0f;
        arg0->f_110 = 0.0f;
    }
    return (s32) (-2);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
s32 fn_80062D40(s8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r30;
    s32 var_r3;
    s32 var_r4;

    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x50));
    if ((s32) (temp_r4 & 0x40) == 0) {
        switch ((u32) (temp_r4 & 0x2800)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x54) |= 0x4000;
            break;
        case 0x2000:
            M2C_FIELD(arg0, s32 *, 0x54) |= 0x4000;
            if ((temp_r4 & 0x100) == 0) {
                fn_8006205C((s8 *) (arg0));
            }
            break;
        case 0x800:
        case 0x2800:
            if ((temp_r4 & 0x4000) == 0) {
                M2C_FIELD(arg0, s32 *, 0x54) |= 0x4000;
                fn_8006205C((s8 *) (arg0));
            }
            break;
        }
    }
    var_r4 = (s32) (1);
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x10000) != 0) {
        var_r4 = (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 2) == 0) {
        var_r4 = (s32) (0);
    }
    if (M2C_FIELD(arg0, f32 *, 0x3890) < 0.0f) {
        var_r4 = (s32) (0);
    }
    temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0x50));
    if ((s32) (temp_r3 & 0x2000) == 0) {
        var_r4 = (s32) (0);
    }
    if ((s32) (temp_r3 & 0x20) != 0) {
        var_r4 = (s32) (0);
    }
    if (var_r4 != 0) {
        var_r30 = (s32) (lbl_8049D500);
        var_r3 = (s32) (0);
        switch ((s32) lbl_8049D510) {               /* switch 2; irregular */
        case 0x200:                                 /* switch 2 */
            var_r30 = (s32) (0x1C8);
            var_r3 = (s32) (1);
            break;
        case 0x100:                                 /* switch 2 */
            var_r30 = (s32) (0x1C9);
            var_r3 = (s32) (1);
            break;
        }
        switch ((s32) lbl_8049D50C) {               /* switch 3; irregular */
        case 4:                                     /* switch 3 */
            var_r30 = (s32) (0x1C5);
            var_r3 = (s32) (1);
            break;
        case 1:                                     /* switch 3 */
        case 5:                                     /* switch 3 */
            var_r30 = (s32) (0x1C6);
            var_r3 = (s32) (1);
            break;
        case 2:                                     /* switch 3 */
        case 6:                                     /* switch 3 */
            var_r30 = (s32) (0x1C7);
            var_r3 = (s32) (1);
            break;
        }
        if (var_r3 != 0) {
            fn_8001D9D0((s32) ((s32) (arg0 + 0x84)), (s32) ((s32) (arg0 + 0x84)), (s32) ((s32) (arg0 + 0x3884)), lbl_8049EDE0[2]);
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg0, f32 *, 0x3880);
            fn_80182518((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s8 *) (arg0 + 0x84));
            M2C_FIELD(arg0, s32 *, 0x3878) = (s32) (0);
            lbl_8049D500 = var_r30;
            return (s32) (var_r30);
        }
        goto block_38;
    }
block_38:
    return (s32) (-2);
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
