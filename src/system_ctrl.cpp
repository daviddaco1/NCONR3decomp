#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_80070F4C_arg0 {
    u8 pad_0[0x4];
    s32 f_4;
    u8 pad_8[0x7C];
    f32 f_84;
    f32 f_88;
    f32 f_8C;
};
struct SK_fn_80070C18_58 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; f32 f_10; f32 f_14; f32 f_18; f32 f_1C; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; f32 f_34; f32 f_38; f32 f_3C; f32 f_40; f32 f_44; f32 f_48; f32 f_4C; f32 f_50; f32 f_54; f32 f_58; f32 f_5C; f32 f_60; f32 f_64; f32 f_68; f32 f_6C; f32 f_70; f32 f_74; f32 f_78; f32 f_7C; f32 f_80; f32 f_84; f32 f_88; f32 f_8C; f32 f_90; f32 f_94; f32 f_98; f32 f_9C; f32 f_A0; f32 f_A4; f32 f_A8; f32 f_AC; f32 f_B0; f32 f_B4; f32 f_B8; f32 f_BC; };
struct SK_fn_80070C18_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct S_fn_80071F80_temp_r8 {
    s32 f_0;
    s32 f_4;
    s32 f_8;
};
struct S_fn_80072A30_temp_r9 {
    s32 f_0;
    s32 f_4;
    s32 f_8;
    s32 f_C;
};
struct Vec3_80070DA0 {
    f32 x, y, z;
};
struct S_8006F2B4_v { u8 pad[0x18]; };
struct S_8006F2B4_m { u8 pad[0x7C8]; S_8006F2B4_v v[16]; };
struct S_8006F2B4_h { u8 pad[0x1C]; f32 f_1C; };
struct S_8006F2B4 { S_8006F2B4_h h[16]; f32 f_200[16]; s32 f_240; s32 f_244; s32 f_248; s32 f_24C; s32 pad250; S_8006F2B4_m *f_254; S_8006F2B4_m *f_258; };
struct S_fn_8006F07C_arg0 { u8 pad_0[0x240]; s32 f_240; u8 pad_244[0x4]; s32 f_248; u8 pad_24C[0x8]; s8 * f_254; };
struct SK_fn_80070C84_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
struct E_fn_80070C84 { s32 f_0; u8 pad_4[0x10]; f32 f_14; };
struct S_fn_80070C84_a0 { u8 pad_0[0x7C8]; E_fn_80070C84 e[16]; };

struct S_fn_8006F440_arg0 { u8 pad_0[0x200]; f32 f_200; u8 pad_204[0x3C]; s32 f_240; s32 f_244; s32 f_248; s32 f_24C; u8 pad_250[0x4]; s32 f_254; s32 f_258; };
extern float lbl_8049F018;
__declspec(section ".sdata2") extern const f32 lbl_8049F058[];
__declspec(section ".sdata2") extern const f32 lbl_8049F0A0[];
extern f32 lbl_8049F0B8;

void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, f32 farg0_x);
void fn_80061FA0(M2C_UNK *arg0);
s32 fn_8006EEA8(f32 *arg0, s32 *arg1, s32 *arg2, f32 *arg3, f32 *arg4);
void fn_8006F07C(S_fn_8006F07C_arg0 *arg0, s8 *arg1);
s32 fn_8006F2B4(s32 **arg0);
s32 fn_8006F410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8006F440(S_fn_8006F440_arg0 *arg0);
void fn_8006F980(s8 *arg0);
f32 fn_8006F9CC(s8 *arg0, s8 *arg1, u8 *arg2, u8 *arg3);
s32 fn_8006FAB0(s32 arg0, s32 arg1);
void fn_80070280(s8 *arg0);
void fn_80070450(s32 arg0);
void fn_800704A4(s32 arg0);
void fn_800704F8(s32 arg0);
void fn_80070644(s32 arg0);
void fn_80070698(s32 arg0);
void fn_800706EC(s32 arg0);
s32 fn_80070740(s8 *arg0);
void fn_80070760(f32 *arg0, s32 *arg1);
s32 fn_800707D8(s32 *arg0);
void fn_800707EC(f32 *arg0, f32 *arg1, f32 *arg2, s32 *arg3);
s32 fn_800708FC(s32 *arg0);
void fn_80070910(s32 *arg0);
void fn_8007092C(s32 *arg0);
s32 fn_8007093C(s32 *arg0);
s32 fn_80070C18(s32 *arg0, f32 *arg1, f32 *arg2);
M2C_UNK fn_80070C84(M2C_UNK *arg0, s32 arg1, M2C_UNK *arg2, f32 *arg3);
s32 fn_80070DA0(M2C_UNK *arg0, M2C_UNK *arg1, f32 *arg2, f32 *arg3, s32 arg4, f32 farg0);
void fn_80070DD0(s32 *arg0, M2C_UNK *arg1, s32 arg2, M2C_UNK *arg3, f32 *arg4, s32 arg5, M2C_UNK *arg6, f32 *arg7);
s32 fn_80070F4C(S_fn_80070F4C_arg0 *arg0, s32 *arg1, f32 *arg2, f32 *arg3, s32 arg4, s32 *arg5, f32 *arg6, s32 arg7);
void fn_80071F80(s8 *arg0);
void fn_80071FB4(s8 *arg0);
void fn_80071FD0(s8 *arg0, s32 arg1);
s32 fn_80072A10(s8 *arg0, s32 arg1);
void fn_80072A30(s8 *arg0);
void fn_80072A6C(s8 *arg0);
void fn_80072A84(s8 *arg0);
void fn_80072AA0(s8 *arg0);
void fn_80072AC0(s8 *arg0, s32 arg1);
s32 fn_8007C040(s8 **arg0, s8 **arg1, s8 *arg2);
s32 fn_8007C300(s32 arg0, s8 **arg1, s8 **arg2, f32 farg0);
s32 fn_8007DA78(s32 arg0);
s32 fn_8007DACC(u32 arg0);
s32 fn_8007DB88(u32 arg0);
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2);
s32 fn_80173580(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad);
s32 fn_8017D14C(s8 *arg0, s8 *arg1, s8 *arg2);
s32 fn_80181568(s8 *arg0, s32 arg1);
void fn_80182518(s8 *arg0, s8 *arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s32 fn_8006F410(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (M2C_FIELD((arg0 + (arg1 * 0x18)), s32 *, 0x7C8));
    if ((s32) (arg2 & temp_r3) != 0) {
        return (s32) (0);
    }
    return (s32) ((arg3 & temp_r3) != 0);
}

void fn_8006F980(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) | 0x800000));
    fn_80182518((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s8 *) (arg0 + 0x84));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) | 0x04000000));
}

f32 fn_8006F9CC(s8 *arg0, s8 *arg1, u8 *arg2, u8 *arg3) {
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r7;

    *arg2 = 1;
    *arg3 = 1;
    var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 4);
    temp_r7 = (s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0x8000);
    if ((temp_r7 == 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0x54) & 0x8000) == 0)) {
        if (temp_r7 != 0) {
            *arg2 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
        if ((s32) (M2C_FIELD(arg1, s32 *, 0x54) & 0x8000) != 0) {
            *arg3 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
    }
    temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x100);
    if ((temp_r3 == 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x100) == 0)) {
        if (temp_r3 != 0) {
            *arg2 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
        if ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x100) != 0) {
            *arg3 = 0;
            var_f1 = M2C_FIELD(&lbl_8049F018, f32 *, 8);
        }
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x1640) != 0) {
        *arg3 = 0;
        return M2C_FIELD(&lbl_8049F018, f32 *, 8);
    }
    return var_f1;
}

s32 fn_8006FAB0(s32 arg0, s32 arg1) {
    return (s32) (0);
}

void fn_80070450(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_8007092C((s32 *)(arg0 + 0x648 + i * 0x18));
    }
}

void fn_800704A4(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_80070910((s32 *)(arg0 + 0x648 + i * 0x18));
    }
}

void fn_800704F8(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_8007093C((s32 *)(arg0 + 0x648 + i * 0x18));
    }
}

void fn_80070644(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_8007092C((s32 *)(arg0 + 0x7C8 + i * 0x18));
    }
}

void fn_80070698(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_80070910((s32 *)(arg0 + 0x7C8 + i * 0x18));
    }
}

void fn_800706EC(s32 arg0) {
    for (s32 i = 0; i < 16; i++) {
        fn_8007093C((s32 *)(arg0 + 0x7C8 + i * 0x18));
    }
}

void fn_80070760(f32 *arg0, s32 *arg1) {
    if (fn_800707D8((s32 *) (arg1)) != 0) {
        if ((s32) (M2C_FIELD(arg1, s32 *, 0) & 4) != 0) {
            fn_80173580((s32) (arg0), (s32) (3), (s32) (M2C_FIELD(arg1, s32 *, 4)));
            return;
        }
        fn_80018AF8((s32) ((s32) arg0), (s32) (M2C_FIELD(arg1, s32 *, 4)), (s32) ((s32) ((s8 *)arg1 + 8)));
    }
}

s32 fn_800707D8(s32 *arg0) {
    return (s32) ((*arg0 & 1) != 0);
}

s32 fn_800708FC(s32 *arg0) {
    return (s32) ((*arg0 & 1) != 0);
}

void fn_80070910(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 | 2;
    }
}

void fn_8007092C(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

#pragma dont_inline on
s32 fn_8007093C(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = (s32) (*arg0);
    if ((s32) (temp_r4 & 1) != 0) {
        *arg0 = temp_r4 & 0xFFFFFFFD;
        return (s32) ((s32) arg0);
    }
    return (s32) ((s32) arg0);
}
#pragma dont_inline reset

void fn_80071FB4(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x13E8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x13E4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x13EC) = (s32) (-1);
    fn_80071F80((s8 *) (arg0 + 0xEC0));
}

void fn_80071FD0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C0) = (s32) (arg1);
}

s32 fn_80072A10(s8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        return (s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x5C) + arg1);
    }
    return (s32) (0);
}

void fn_80072A6C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xEB0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xEB4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xEB8) = (s32) (0);
    fn_80072A30((s8 *) (arg0 + 0xBAC));
}

void fn_80072A84(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x15FC) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1600) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x1608) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1610) = (s32) (-1);
}

void fn_80072AA0(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x162C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x1630) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x1634) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x1638) = (f32) lbl_8049F0B8;
}

void fn_80072AC0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xEAC) = (s32) (arg1);
}

#pragma dont_inline on
s32 fn_80070F4C(S_fn_80070F4C_arg0 *arg0, s32 *arg1, f32 *arg2, f32 *arg3, s32 arg4, s32 *arg5, f32 *arg6, s32 arg7) {
    Vec sp14;
    Vec sp8;
    u32 temp_r3_2;
    s8 **temp_r3;

    temp_r3_2 = (u32) (fn_8007DA78((s32) (arg0->f_4)));
    fn_8007DB88((u32) (temp_r3_2));
    fn_80018B0C((M2C_UNK *) (&sp14), arg0->f_84, arg0->f_88, arg0->f_8C);
    fn_80061FA0((M2C_UNK *) (&sp8));
    fn_80070DD0((s32 *) (arg0), (M2C_UNK *) (arg1), (s32) (arg4), (M2C_UNK *) (arg5), arg6, (s32) (arg7), (M2C_UNK *) (&sp14), (f32 *) &sp8);
    temp_r3 = (s8 **) (fn_8007DACC((u32) (temp_r3_2)));
    if (fn_8007C040((s8 **) (temp_r3), (s8 **) ((s8 **) &sp8), (s8 *) (&sp14)) != 0) {
        return (s32) (fn_8007C300((s32) ((s32) temp_r3), (s8 **) ((s8 **) arg2), (s8 **) ((s8 **) arg3), lbl_8049F058[5]));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800707EC(f32 *arg0, f32 *arg1, f32 *arg2, s32 *arg3) {
    Vec sp14;
    Vec sp8;

    if (fn_800708FC((s32 *) (arg3)) != 0) {
        if ((s32) (M2C_FIELD(arg3, s32 *, 0) & 4) != 0) {
            if (arg1 != NULL) {
                fn_80019DAC((s8 *) (arg1), (f32 *) ((f32 *) ((s8 *)arg3 + 8)));
            }
            if (arg2 != NULL) {
                fn_80019DAC((s8 *) (arg2), (f32 *) ((f32 *) ((s8 *)arg3 + 0x14)));
            }
            if (arg0 != NULL) {
                fn_8001D9D0((s32) ((s32) arg0), (s32) ((s32) ((s8 *)arg3 + 8)), (s32) ((s32) ((s8 *)arg3 + 0x14)), M2C_FIELD(&lbl_8049F018, f32 *, 4));
            }
        } else {
            fn_80018AF8((s32) ((s32) &sp14), (s32) (M2C_FIELD(arg3, s32 *, 4)), (s32) ((s32) ((s8 *)arg3 + 8)));
            fn_80018AF8((s32) ((s32) &sp8), (s32) (M2C_FIELD(arg3, s32 *, 4)), (s32) ((s32) ((s8 *)arg3 + 0x14)));
            if (arg0 != NULL) {
                fn_8001D9D0((s32) ((s32) arg0), (s32) ((s32) &sp14), (s32) ((s32) &sp8), M2C_FIELD(&lbl_8049F018, f32 *, 4));
            }
            if (arg1 != NULL) {
                fn_80019DAC((s8 *) (arg1), (f32 *) (&sp14));
            }
            if (arg2 != NULL) {
                fn_80019DAC((s8 *) (arg2), (f32 *) (&sp8));
            }
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80070C18(s32 *arg0, f32 *arg1, f32 *arg2) {
    SK_fn_80070C18_58 sp58;
    Mtx44 sp18;
    SK_fn_80070C18_8 sp8;

    return (s32) (fn_80070F4C((S_fn_80070F4C_arg0 *) (arg0), (s32 *) (&sp8), (f32 *) (arg1), (f32 *) (arg2), (s32) (fn_80070C84((M2C_UNK *) (arg0), (s32) ((s32) &sp8), (M2C_UNK *) (&sp58), (f32 *) (sp18))), (s32 *) (&sp58), (f32 *) (sp18), (s32) (0)));
}
#pragma dont_inline reset

s32 fn_80070740(s8 *arg0) {
    s32 *obj = *(s32 **)(arg0 + 0x948);
    if (obj == 0) return (s32) obj;
    *obj &= ~0x4000;
    return fn_8007093C(obj);
}

s32 fn_80070DA0(M2C_UNK *arg0, M2C_UNK *arg1, f32 *arg2, f32 *arg3, s32 arg4, f32 farg0) {
    s32 offset = arg4 * 12;
    *(f32 *)((u8 *)arg1 + offset) = *(f32 *)((s8 *)arg0 + 0x84);
    f32 y = arg3[1];
    Vec3_80070DA0 *dst = (Vec3_80070DA0 *)((u8 *)arg1 + offset);
    dst->y = y;
    dst->z = *(f32 *)((s8 *)arg0 + 0x8C);
    arg2[arg4] = farg0;
    return arg4 + 1;
}

#pragma dont_inline on
void fn_80071F80(s8 *arg0) {
    s32 i_ctr;
    S_fn_80071F80_temp_r8 *temp_r8;

    for (i_ctr = 0; i_ctr < 0x40; i_ctr++) {
        temp_r8 = (S_fn_80071F80_temp_r8 *) (arg0 + (i_ctr * 0x14));
        temp_r8->f_0 = 0;
        temp_r8->f_4 = 0;
        temp_r8->f_8 = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80072A30(s8 *arg0) {
    s32 i_ctr;
    S_fn_80072A30_temp_r9 *temp_r9;

    for (i_ctr = 0; i_ctr < 0x30; i_ctr++) {
        temp_r9 = (S_fn_80072A30_temp_r9 *) (arg0 + (i_ctr * 0x10));
        temp_r9->f_0 = 0;
        temp_r9->f_4 = 0;
        temp_r9->f_8 = 0;
        temp_r9->f_C = 0;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8006F2B4(s32 **arg0) {
    S_8006F2B4 *p = (S_8006F2B4 *)arg0;
    s32 i;
    s32 ret;
    s32 j;
    s32 hit;

    ret = (s32) (0);
    memset((s32) ((s32)p->f_200), (s32) (0), (s32) (0x40));
    for (i = 0; i < 16; i++) {
        if (fn_8006F410((s32) ((s32)p->f_254), (s32) (i), (s32) (p->f_240), (s32) (p->f_248)) != 0) {
            memset((s32) ((s32)p), (s32) (0), (s32) (0x200));
            hit = (s32) (0);
            for (j = 0; j < 16; j++) {
                if (fn_8006F410((s32)p->f_258, j, p->f_244, p->f_24C) != 0 &&
                    fn_8017D14C((s8 *) ((s8 *)&p->h[j]), (s8 *) ((s8 *)&p->f_254->v[i]), (s8 *) ((s8 *)&p->f_258->v[j])) != 0) {
                    ret = (s32) (1);
                    hit = (s32) (1);
                }
            }
            if (hit != 0) {
                for (j = 0; j < 16; j++) {
                    if (fn_8006F410((s32) ((s32)p->f_258), (s32) (j), (s32) (p->f_244), (s32) (p->f_24C)) != 0) {
                        if (p->h[j].f_1C > p->f_200[i]) {
                            p->f_200[i] = p->h[j].f_1C;
                        }
                    }
                }
            }
        }
    }
    return (s32) (ret);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80070280(s8 *arg0) {
    f32 t;
    s32 *temp_r31;

    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x54) & 0xFF7FFFFF));
    temp_r31 = (s32 *) (M2C_FIELD(arg0, s32 **, 0x948));
    if ((temp_r31 != NULL) && ((s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0x4000) != 0)) {
        if (M2C_FIELD(arg0, f32 *, 0x97C) <= M2C_FIELD(arg0, f32 *, 0x984)) {
            M2C_FIELD(arg0, f32 *, 0x97C) += M2C_FIELD(arg0, f32 *, 0x12C);
            t = M2C_FIELD(arg0, f32 *, 0x97C) / M2C_FIELD(arg0, f32 *, 0x984);
            fn_8001D9D0((s32) ((s32) ((s8 *)temp_r31 + 8)), (s32) ((s32) (arg0 + 0x954)), (s32) ((s32) (arg0 + 0x96C)), t);
        }
        if (M2C_FIELD(arg0, f32 *, 0x980) <= M2C_FIELD(arg0, f32 *, 0x988)) {
            M2C_FIELD(arg0, f32 *, 0x980) += M2C_FIELD(arg0, f32 *, 0x12C);
            t = M2C_FIELD(arg0, f32 *, 0x980) / M2C_FIELD(arg0, f32 *, 0x988);
            M2C_FIELD(temp_r31, f32 *, 0x14) = fn_80172A18(M2C_FIELD(arg0, f32 *, 0x960), M2C_FIELD(arg0, f32 *, 0x978), t);
        }
        if (M2C_FIELD(arg0, f32 *, 0x97C) > M2C_FIELD(arg0, f32 *, 0x984)) {
            if (M2C_FIELD(arg0, f32 *, 0x980) >= M2C_FIELD(arg0, f32 *, 0x988)) {
                M2C_FIELD(temp_r31, s32 *, 0) &= 0xFFFFBFFF;
            }
        } else {
            fn_80070910((s32 *) (temp_r31));
        }
    }
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
void fn_8006F07C(S_fn_8006F07C_arg0 *arg0, s8 *arg1) {
    arg0->f_254 = arg1;
    arg0->f_240 = 0;
    arg0->f_248 = 0x200;
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x58) & 0x80) != 0) {
        arg0->f_240 |= 0x800;
    }
    if ((s32) (M2C_FIELD(arg0->f_254, s32 *, 0x6C) & 0x01000000) == 0) {
        arg0->f_240 = (s32) (arg0->f_240 | 0x2000);
    }
    if ((s32) (M2C_FIELD(arg0->f_254, s32 *, 0x50) & 0x30000) != 0) {
        arg0->f_248 = 0x400;
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
M2C_UNK fn_80070C84(M2C_UNK *arg0, s32 arg1, M2C_UNK *arg2, f32 *arg3) {
    SK_fn_80070C84_8 sp8;
    S_fn_80070C84_a0 *p = (S_fn_80070C84_a0 *) arg0;
    s32 i;
    f32 max;
    s32 r;

    max = lbl_8049F058[3];
    for (i = 0; i < 16; i++) {
        if ((p->e[i].f_0 & 0x80) && p->e[i].f_14 > max) {
            max = p->e[i].f_14;
        }
    }
    fn_80173580((s32) ((s32) &sp8), (s32) (3), (s32) (fn_80181568((s8 *) (M2C_FIELD(arg0, s8 **, 0x377C)), (s32) (3))));
    r = (s32) (((s32 (*)(void *, void *, void *, void *, f32, s32))fn_80070DA0)(arg0, arg2, arg3, &sp8, max, 0));
    max = lbl_8049F058[3];
    for (i = 0; i < 16; i++) {
        if ((p->e[i].f_0 & 0x100) && p->e[i].f_14 > max) {
            max = p->e[i].f_14;
        }
    }
    return (M2C_UNK) (fn_80070DA0((M2C_UNK *) (arg0), (M2C_UNK *) (arg2), (f32 *) (arg3), (f32 *) (&sp8), (s32) (r), max));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8006F440(S_fn_8006F440_arg0 *arg0) {
    Vec sp18;
    Vec spC;
    f32 sp8;
    f32 min;
    s32 found;
    s32 i;
    s32 j;
    s32 p;

    p = (s32) (arg0->f_254);
    fn_8001B8B8((s32) ((s32) &sp18), (s32) (p + 0x84), (s32) (p + 0x90));
    p = (s32) (arg0->f_258);
    fn_8001B8B8((s32) ((s32) &spC), (s32) (p + 0x84), (s32) (p + 0x90));
    min = M2C_FIELD(&lbl_8049F018, f32 *, 0x18);
    found = (s32) (0);
    for (i = 0; i < 0x10; i++) {
        if (fn_8006F410((s32) (arg0->f_254), (s32) (i), (s32) (arg0->f_240), (s32) (arg0->f_248)) != 0) {
            for (j = 0; j < 0x10; j++) {
                if (fn_8006F410((s32) (arg0->f_258), (s32) (j), (s32) (arg0->f_244), (s32) (arg0->f_24C)) != 0 && fn_8006EEA8((f32 *) (&sp8), (s32 *) ((s32) ((s8 *) arg0->f_254 + i * 0x18 + 0x7C8)), (s32 *) (arg0->f_258 + j * 0x18 + 0x7C8), (f32 *) (&sp18), (f32 *) (&spC)) != 0) {
                    if (min > sp8) {
                        min = sp8;
                    }
                    found = (s32) (1);
                }
            }
        }
    }
    arg0->f_200 = min;
    return (s32) (found);
}
#pragma dont_inline reset

} // extern "C"
