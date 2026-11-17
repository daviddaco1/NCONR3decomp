#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8007F250_arg6 {
    s32 f_0;
    u8 pad_4[0x20];
    s32 f_24;
    u8 pad_28[0x28];
    s32 f_50;
    s32 f_54;
    s32 f_58;
    s32 f_5C;
    f32 f_60;
};
struct S_fn_8007F700_var_r31 { s8 * f_0; u8 pad_4[0x4]; S_fn_8007F700_var_r31 * f_8; };
struct S_fn_80080FCC_arg2 { u8 pad_0[0x14]; s32 f_14; };
struct S_fn_80080FCC_arg1 { u8 pad_0[0x9C0]; s32 f_9C0; };

extern u8 lbl_80339788[];
extern u8 lbl_803908C0[];
extern u8 lbl_80390968[];
extern s32 **lbl_8049D530;
extern s32 lbl_8049D53C;
__declspec(section ".sdata2") extern const f32 lbl_8049F1D8[];

s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8002211C(s8 *arg0);
void fn_8007600C(s8 *arg0);
s32 fn_8007D518(s8 **arg0, M2C_UNK *arg1, s8 **arg2, s8 **arg3);
s8 * fn_8007F250(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, S_fn_8007F250_arg6 *arg6);
void fn_8007F36C(s8 *arg0, s8 *arg1);
void fn_8007F4B8(s32 arg0, s32 arg1, s32 arg2);
void fn_8007F6A0(s8 *arg0);
void fn_8007F700(s8 *arg0);
void fn_8007F764(s32 arg0, s8 *arg1);
void fn_8007F85C(void);
void fn_8007F868(s8 *arg0, s8 *arg1);
s32 fn_8007FC28(s8 *arg0, s8 *arg1, s32 *arg2, s32 *arg3);
s32 fn_80080FCC(s32 arg0, S_fn_80080FCC_arg1 *arg1, S_fn_80080FCC_arg2 *arg2);
void fn_8008299C(void);
s32 fn_800829C4(void);
void fn_80082A0C(s32 arg0);
s32 fn_80082D10(s32 arg0_pad);
void fn_80082DC4(s32 *arg0);
void fn_80082DD4(s32 *arg0);
void fn_80082DE4(s8 *arg0, s32 arg1);
s8 * fn_80082DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80082E2C(s8 *arg0, s32 arg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8007F4B8(s32 arg0, s32 arg1, s32 arg2) {
    memcpy(arg0, arg1, ((s32 *)lbl_80339788)[arg2]);
}

void fn_8007F6A0(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (0);
    fn_80082A0C((s32) (M2C_FIELD(arg0, s32 *, 0x2C)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F0) != 0) {
        fn_8007600C((s8 *) (arg0 + 0x58));
    }
    fn_8002211C((s8 *) (arg0 + 4));
    fn_80019D94((M2C_UNK **) (lbl_8049D530), (s32) ((s32) arg0));
}

void fn_8007F85C(void) {
    fn_80082D10((s32) (fn_8007F868));
}

s32 fn_8007FC28(s8 *arg0, s8 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_r7;
    s32 temp_r8;

    temp_r7 = (s32) (M2C_FIELD(arg0, s32 *, 0x10));
    temp_r8 = (s32) (M2C_FIELD(arg1, s32 *, 0x10));
    if (((s32) (temp_r7 & 0x80) != 0) && ((s32) (temp_r8 & 4) != 0)) {
        return (s32) (0);
    }
    if (((s32) (temp_r8 & 0x80) != 0) && ((s32) (temp_r7 & 4) != 0)) {
        return (s32) (0);
    }
    *arg2 = M2C_FIELD(arg0, s32 *, 0x48);
    *arg3 = M2C_FIELD(arg1, s32 *, 0x48);
    return (s32) (1);
}

void fn_80082DC4(s32 *arg0) {
    *arg0 &= 0xFFFFFFFD;
}

void fn_80082DD4(s32 *arg0) {
    *arg0 |= 2;
}

void fn_80082DE4(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) ((M2C_FIELD(arg0, s32 *, 0x14) | 0xFFC) & ~(arg1 ^ 0xFFC)));
}

s8 * fn_80082E2C(s8 *arg0, s32 arg1) {
    return (s8 *) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x5C) + arg1);
}

s8 * fn_8007F250(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, S_fn_8007F250_arg6 *arg6) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80019D70((M2C_UNK **) (lbl_8049D530)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    memset((s32) ((s32) (temp_r3 + 4)), (s32) (0), (s32) (0x928));
    fn_8001D9A4((s32) ((s32) temp_r3), (s32) ((s32) (temp_r3 + 4)), (s8 *) (arg0 + 0x37BC));
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) ((s32) arg6->f_0);
    M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (0x03000000);
    M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0x28) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x354) = (s32) (arg3);
    M2C_FIELD(temp_r3, s32 *, 0x358) = (s32) (arg4);
    M2C_FIELD(temp_r3, s32 *, 0x30) = (s32) (arg0);
    M2C_FIELD(temp_r3, s32 *, 0x40) = (s32) (arg5);
    M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) ((s32) arg6->f_24);
    M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) (fn_800829C4());
    M2C_FIELD(temp_r3, f32 *, 0x4C) = 1.0f;
    M2C_FIELD(temp_r3, s32 *, 0x300) = (s32) ((s32) arg6->f_50);
    M2C_FIELD(temp_r3, s32 *, 0x304) = (s32) ((s32) arg6->f_54);
    M2C_FIELD(temp_r3, s32 *, 0x308) = (s32) ((s32) arg6->f_58);
    M2C_FIELD(temp_r3, s32 *, 0x30C) = (s32) ((s32) arg6->f_5C);
    M2C_FIELD(temp_r3, f32 *, 0x310) = (f32) arg6->f_60;
    M2C_FIELD(temp_r3, f32 *, 0x338) = (f32) lbl_8049F1D8[1];
    M2C_FIELD(temp_r3, f32 *, 0x33C) = (f32) lbl_8049F1D8[1];
    M2C_FIELD(temp_r3, f32 *, 0x340) = (f32) lbl_8049F1D8[1];
    M2C_FIELD(temp_r3, f32 *, 0x344) = (f32) lbl_8049F1D8[1];
    M2C_FIELD(temp_r3, s32 *, 0x6A0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0x688) = (s32) (0);
    return (s8 *) (temp_r3);
}

void fn_8008299C(void) {
    for (int i = 0; i < 42; ++i) {
        *(s32 *)((s8 *)lbl_803908C0 + i * 4) = -1;
    }
}

#pragma dont_inline on
s32 fn_800829C4(void) {
    s32 var_r5;

    for (var_r5 = 0; var_r5 < 0x2A; var_r5++) {
        if ((s32) *(s32 *)((s8 *) &lbl_803908C0 + (var_r5 * 4)) == -1) {
            *(s32 *)((s8 *) &lbl_803908C0 + (var_r5 * 4)) = var_r5 + 0x3E8;
            return (s32) (*(s32 *)((s8 *) &lbl_803908C0 + (var_r5 * 4)));
        }
    }
    return (s32) (-1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80082A0C(s32 arg0) {
    s32 i_ctr;

    for (i_ctr = 0; i_ctr < 0x2A; i_ctr++) {
        if (arg0 == (s32) *(s32 *)((s8 *) &lbl_803908C0 + (i_ctr * 4))) {
            *(s32 *)((s8 *) &lbl_803908C0 + (i_ctr * 4)) = -1;
        }
    }
}
#pragma dont_inline reset

s8 * fn_80082DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *ret = (s8 *)fn_8007D518((s8 **)arg0, (M2C_UNK *)arg1, (s8 **)arg2, (s8 **)arg3);
    if (ret != 0) {
        return ret;
    }
    return 0;
}

#pragma dont_inline on
#pragma opt_common_subs on
void fn_8007F700(s8 *arg0) {
    S_fn_8007F700_var_r31 *p;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x54) &= ~0x2000;
        for (p = M2C_FIELD(arg0, S_fn_8007F700_var_r31 **, 0x37C4); p->f_0 != (s8 *)1; p = p->f_8) {
            fn_8007F764((s32) ((s32) arg0), (s8 *) (p->f_0));
        }
    }
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80080FCC(s32 arg0, S_fn_80080FCC_arg1 *arg1, S_fn_80080FCC_arg2 *arg2) {
    s32 i;
    s8 *p;

    for (i = 0; i < (s32) lbl_8049D53C; i++) {
        p = (s8 *) (((s8 **) &lbl_80390968)[i]);
        if (p != NULL) {
            if (arg2->f_14 & 0x80000) {
                M2C_FIELD(p, s32 *, 0x14) |= 0x80000;
            }
            if (M2C_FIELD(p, s32 *, 0x74) & 0x400) {
                arg1->f_9C0 = 0;
            }
        }
    }
    return (s32) (i);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8007F36C(s8 *arg0, s8 *arg1) {
    s32 i_ctr;
    s32 i;
    s32 j;

    memset((s32) ((s32) arg0), (s32) (0), (s32) (0x80));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0));
    for (i_ctr = 0; i_ctr < 4; i_ctr++) {
        M2C_FIELD((arg0 + (i_ctr * 4)), s32 *, 4) = (s32) ((s32) M2C_FIELD((arg1 + (i_ctr * 4)), s32 *, 4));
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x20));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x28));
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x2C));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x34));
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x5C));
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            M2C_FIELD(arg0 + i * 8 + j * 4, s32 *, 0x64) = (s32) (M2C_FIELD(arg1 + i * 8 + j * 4, s32 *, 0x44));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0x64);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (0xFFFF);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (-1);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (-1);
}
#pragma dont_inline reset

} // extern "C"
