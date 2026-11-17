#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8012EADC_arg1 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
    f32 f_C;
};
struct S_fn_8012FC38_temp_r7 {
    s16 f_0;
    u8 pad_2[0x2];
    s32 f_4;
};
struct S_fn_8012FD18_temp_r6 {
    s16 f_0;
    u8 pad_2[0x2];
    s32 f_4;
};

struct S_fn_8012FED4_var_r5 { s8 * f_0; u8 pad_4[0x4]; S_fn_8012FED4_var_r5 * f_8; };
struct S_fn_8012FCB0_e { s16 f_0; s32 f_4; };
extern u8 lbl_8034FA9C[];
extern u8 lbl_8034FAC0[];
extern u8 lbl_803A4530[];
extern u8 lbl_803A4830[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D6E0;
extern s32 lbl_8049D6E4;
extern s32 *lbl_8049D6E8;
extern s32 lbl_8049D9D0;
extern s32 lbl_8049D9E0;
__declspec(section ".sdata2") extern const f32 lbl_804A0A50[];

void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_8002211C(s8 *arg0);
s32 fn_80028E40(s32 *arg0, s32 *arg1);
s32 * fn_80028E8C(s32 *arg0, s32 arg1);
void fn_80028EBC(s32 *arg0, s32 *arg1);
s32 fn_80028EC8(s32 arg0);
M2C_UNK ** fn_80028F70(M2C_UNK **arg0);
s32 fn_80029024(s32 *arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
s32 fn_8012365C(s32 arg0);
void fn_80125B48(s32 arg0, s32 arg1);
void fn_8012E444(s8 *arg0);
void fn_8012E4B0(s8 *arg0);
s32 fn_8012E5F4(M2C_UNK *arg0, u32 arg1);
s32 * fn_8012E61C(s32 arg0);
s32 * fn_8012E624(void);
s32 fn_8012E62C(s32 arg0);
void fn_8012E634(s32 arg0, s32 arg1);
s32 fn_8012E63C(s32 arg0, s32 arg1);
void fn_8012E66C(s8 *arg0, s8 *arg1);
void fn_8012E680(s32 arg0, s32 arg1);
void fn_8012E688(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8012E690(s32 *arg0, s32 *arg1);
s32 fn_8012E6D0(s32 *arg0, s32 *arg1);
s32 fn_8012E708(s32 arg0);
s32 * fn_8012E73C(s32 *arg0, s32 arg1);
s32 fn_8012E76C(s32 arg0);
s32 fn_8012E7F0(s32 arg0);
s32 fn_8012E814(s32 arg0);
s32 fn_8012E864(s32 arg0, s32 arg1);
s32 fn_8012E894(s32 arg0);
s32 fn_8012E8C8(s8 *arg0);
s32 fn_8012E8D0(u32 arg0);
u32 fn_8012E900(u32 arg0);
f32 fn_8012E9EC(s32 arg0);
void fn_8012EADC(u32 arg0, S_fn_8012EADC_arg1 *arg1, s32 arg2, s32 arg3);
s32 fn_8012EC24(s32 arg0);
s32 fn_8012EDB4(u32 *arg0);
void fn_8012EDE4(s32 arg0, s32 arg1, s32 arg2, u32 *arg3, s8 *arg4, s32 arg5);
void fn_8012EE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_8012EEB4(u32 *arg0, s8 *arg1);
s8 * fn_8012EF08(void);
s32 fn_8012EF10(void);
void fn_8012EF18(void);
void fn_8012EF1C(void);
s32 fn_8012EF20(s32 arg0);
void fn_8012F03C(s32 arg0);
s32 fn_8012F0A8(s32 arg0, s32 arg1);
s32 fn_8012F11C(s32 arg0, s32 arg1);
s8 * fn_8012F15C(s32 arg0);
void fn_8012F18C(s32 arg0, s32 arg1);
s32 fn_8012F3A8(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F658(s32 arg0);
void fn_8012F678(s8 *arg0, s32 arg1);
s32 fn_8012F6F4(s32 arg0);
void fn_8012F780(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F79C(s8 *arg0, s32 arg1, s32 arg2);
void fn_8012F7B8(s8 *arg0, s32 arg1, f32 farg0);
s32 fn_8012F7D4(s8 *arg0, s32 arg1);
void fn_8012F99C(s32 arg0, s32 arg1);
void fn_8012FA30(s32 arg0, u32 arg1);
s32 fn_8012FB14(s32 arg0);
s32 fn_8012FB1C(s32 *arg0, s32 arg1);
s32 fn_8012FC38(void);
void fn_8012FC70(void);
s32 fn_8012FCB0(s32 arg0, s32 arg1);
void fn_8012FD18(s32 arg0);
void fn_8012FD5C(s32 arg0);
s32 fn_8012FDBC(s32 arg0);
s8 * fn_8012FED4(s8 *arg0, s32 arg1);
void fn_80130410(void);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017743C(s32 arg0, s32 arg1);
void fn_8017776C(s32 arg0);
void fn_80191C78(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

void fn_8012E444(s8 *arg0) {
    s32 temp_r3;
    u16 *temp_r31;

    temp_r31 = (u16 *) (M2C_FIELD(arg0, s8 **, 0x2B0));
    if (temp_r31 != NULL) {
        fn_80191C78((s8 *) (temp_r31));
        if ((s32) (*temp_r31 & 4) != 0) {
            temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 0));
            if ((s32) (temp_r3 & 0x40000) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r3 | 0x80000000));
            }
        }
    }
}

s32 * fn_8012E61C(s32 arg0) {
    return (s32 *) (&lbl_8049D9E0);
}

s32 * fn_8012E624(void) {
    return (s32 *) (&lbl_8049D9D0);
}

s32 fn_8012E62C(s32 arg0) {
    return (s32) (arg0 + 0x10);
}

void fn_8012E634(s32 arg0, s32 arg1) {
    fn_8012E63C((s32) (arg0 + 0x44), (s32) (arg1));
}

s32 fn_8012E63C(s32 arg0, s32 arg1) {
    fn_8012E66C((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1));
    return (s32) (arg0);
}

void fn_8012E66C(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void fn_8012E680(s32 arg0, s32 arg1) {
    fn_8002B060((s32) (arg0 + 0x38), (s32) (arg1));
}

void fn_8012E688(s32 arg0, s32 arg1, s32 arg2) {
    fn_8002B060((s32) (arg0 + 0x2C), (s32) (arg1));
}

s32 fn_8012E690(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_8012E6D0((s32 *) (&spC), (s32 *) (&sp8)) == 0);
}

s32 fn_8012E6D0(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (*arg1);
    spC = (s32) (*arg0);
    return (s32) (fn_80028E40((s32 *) (&spC), (s32 *) (&sp8)));
}

s32 fn_8012E708(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_8012E73C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 * fn_8012E73C(s32 *arg0, s32 arg1) {
    fn_80028EBC((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

s32 fn_8012E76C(s32 arg0) {
    fn_80028F70((M2C_UNK **) ((s32 **) arg0));
    return (s32) (arg0);
}

s32 fn_8012E7F0(s32 arg0) {
    return (s32) (fn_8012E814((s32) (fn_80029024((s32 *) (arg0)))));
}

s32 fn_8012E864(s32 arg0, s32 arg1) {
    fn_80028EBC((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

s32 fn_8012E894(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = (s32) (fn_80028EC8((s32) (arg0)));
    return (s32) (*fn_80028E8C((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 fn_8012E8C8(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x10));
}

u32 fn_8012E900(u32 arg0) {
    if (arg0 >= 0xFFU) {
        return (u32) (-1U);
    }
    return (u32) (arg0 / 357U);
}

void fn_8012EDE4(s32 arg0, s32 arg1, s32 arg2, u32 *arg3, s8 *arg4, s32 arg5) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    s32 var_r3;

    var_r3 = (s32) (0);
    if ((arg3 != NULL) && (arg4 != NULL)) {
        M2C_FIELD(arg4, s32 *, 0) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 4) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 0x14) = (s32) (arg2);
        M2C_FIELD(arg4, s32 *, 0x18) = (s32) (0);
        M2C_FIELD(arg4, s32 *, 0x1C) = (s32) (0x14);
        M2C_FIELD(arg4, s32 *, 0x20) = (s32) (0x16);
        M2C_FIELD(arg4, s32 *, 0x24) = (s32) (0x10);
        M2C_FIELD(arg4, s32 *, 0x28) = (s32) (0x16);
        temp_r31 = (s32) (arg5 & 2);
        if (temp_r31 == 0) {
            var_r3 = (s32) (fn_8012EDB4((u32 *) (arg3)));
        }
        if (temp_r31 != 0) {
            temp_r0 = (s32) (arg1 * 0x64);
            M2C_FIELD(arg4, s32 *, 8) = (s32) (temp_r0);
            M2C_FIELD(arg4, s32 *, 0xC) = (s32) (temp_r0);
            return;
        }
        temp_r0_2 = (s32) ((s32) (arg1 * 0x64) / var_r3);
        M2C_FIELD(arg4, s32 *, 8) = (s32) (temp_r0_2);
        M2C_FIELD(arg4, s32 *, 0xC) = (s32) (temp_r0_2);
    }
}

void fn_8012EE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    if (arg4 != NULL) {
        M2C_FIELD(arg4, s32 *, 0x1C) = (s32) (arg0);
        M2C_FIELD(arg4, s32 *, 0x20) = (s32) (arg1);
        M2C_FIELD(arg4, s32 *, 0x24) = (s32) (arg2);
        M2C_FIELD(arg4, s32 *, 0x28) = (s32) (arg3);
    }
}

s8 * fn_8012EF08(void) {
    return (s8 *) (lbl_8049D6E8);
}

s32 fn_8012EF10(void) {
    return (s32) (0x110);
}

void fn_8012EF18(void) {
}

void fn_8012EF1C(void) {
}

void fn_8012F658(s32 arg0) {
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x28) = (s32) (0x3E9);
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x7B4) = (s32) (arg0);
    fn_8017743C((s32) (0x8000), (s32) ((s32) &lbl_803C1A40));
}

void fn_8012F678(s8 *arg0, s32 arg1) {
    if ((s32) (arg1 & 2) != 0) {
        lbl_8049D6E8 = (s32 *) arg0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0xF0);
        fn_8012F3A8((s8 *) (arg0 + 0xC), (s32) (0), (s32) (0));
    }
    if ((s32) (arg1 & 1) != 0) {
        fn_8002211C((s8 *) (arg0 + 0x40));
    }
    fn_80019D94((M2C_UNK **) ((s32 **) lbl_8049D6E0), (s32) ((s32) arg0));
}

void fn_8012F79C(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4)), s32 *, 0x60) = (s32) (arg2);
    }
}

void fn_8012F7B8(s8 *arg0, s32 arg1, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4)), f32 *, 0x60) = farg0;
    }
}

s32 fn_8012FB14(s32 arg0) {
    return (s32) (arg0 + 0x34);
}

s32 fn_8012FB1C(s32 *arg0, s32 arg1) {
    s32 *temp_r31;
    s32 *temp_r31_2;
    s32 temp_r0;

    if (arg1 != 0) {
        if ((s32) (arg1 & 1) != 0) {
            *arg0 = 0xF0;
            temp_r31 = (s32 *) (lbl_8049D6E8);
            fn_8012FA30((s32) (0), (u32) ((u32) arg1));
            lbl_8049D6E8 = temp_r31;
        } else if ((s32) (arg1 & 0x1F8) == 0) {
            temp_r31_2 = (s32 *) (lbl_8049D6E8);
            fn_8012FA30((s32) (0), (u32) ((u32) arg1));
            lbl_8049D6E8 = temp_r31_2;
        }
        return (s32) (0);
    }
    temp_r0 = (s32) (*arg0);
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        *arg0 = 1;
        break;
    case 0x1:
        fn_8012F99C((s32) (0), (s32) (0));
        lbl_8049D6E8 = NULL;
        break;
    case 0xF0:
        *arg0 = 1;
        break;
    }
    return (s32) (0);
}

void fn_8012FC70(void) {
    s32 var_r31;

    fn_80130410();
    var_r31 = (s32) (0);
    do {
        fn_8012FD5C((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 0x80);
}

void fn_8012EADC(u32 arg0, S_fn_8012EADC_arg1 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    s32 temp_r30;
    s32 temp_r31;

    temp_r30 = (s32) (fn_8012EC24((s32) ((s32) arg0)));
    temp_r31 = (s32) (fn_8012E8D0((u32) (arg0)));
    temp_f1 = fn_8012E9EC((s32) (temp_r30));
    temp_f4 = lbl_804A0A50[4] * (f32) (temp_r30 % 17);
    temp_f2 = lbl_804A0A50[5] * (f32) ((temp_r30 / 17) % 21);
    switch (temp_r31) {                             /* irregular */
    case 1:
        arg1->f_0 = (f32) (lbl_804A0A50[6] + temp_f4);
        arg1->f_4 = (f32) (lbl_804A0A50[7] + temp_f2);
        arg1->f_8 = (f32) (temp_f4 + (temp_f1 / lbl_804A0A50[8]));
        arg1->f_C = (f32) (lbl_804A0A50[9] + temp_f2);
        return;
    case 2:
        arg1->f_0 = (f32) (lbl_804A0A50[6] + temp_f4);
        arg1->f_4 = (f32) (lbl_804A0A50[7] + temp_f2);
        arg1->f_8 = (f32) (lbl_804A0A50[10] + temp_f4);
        arg1->f_C = (f32) (lbl_804A0A50[9] + temp_f2);
        return;
    default:
        arg1->f_0 = (f32) lbl_804A0A50[0];
        arg1->f_4 = (f32) lbl_804A0A50[0];
        arg1->f_8 = (f32) lbl_804A0A50[0];
        arg1->f_C = (f32) lbl_804A0A50[0];
        return;
    }
}

s32 fn_8012E814(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_8034FAC0, 0x23D, (s32) &lbl_8034FA9C);
    }
    return (s32) (arg0 - 4);
}

#pragma dont_inline on
s32 fn_8012EF20(s32 arg0) {
    return (s32) ((((((fn_8012EF10() * 4) + 0x34EB) & 0xFFFFFFE0) + 4) * 0x60) + 0x10);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012F7D4(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    return (s32) (*(s32 *)(M2C_FIELD(arg0, s8 **, 0x20) + ((arg1 - 0x18) * 4)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012F11C(s32 arg0, s32 arg1) {
    s32 temp_r4;

    if (arg1 != 0) {
        *(s32 *)((s8 *) &lbl_803A4530 + (arg0 * 0xC)) = arg1;
    } else {
        temp_r4 = (s32) (arg0 * 0xC);
        *(s32 *)((s8 *) &lbl_803A4530 + temp_r4) = 0;
        M2C_FIELD(((s8 *) &lbl_803A4530 + temp_r4), s32 *, 4) = (s32) (0);
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8012F15C(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = (s32) (arg0 * 0xC);
    temp_r4 = (s32) (*(s32 *)((s8 *) &lbl_803A4530 + temp_r0));
    if (temp_r4 != 0) {
        return (s8 *) (temp_r4 + 8);
    }
    return (s8 *) ((s8 *) M2C_FIELD(((s8 *) &lbl_803A4530 + temp_r0), s32 *, 4) + 8);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012FC38(void) {
    s32 i_ctr;
    S_fn_8012FC38_temp_r7 *temp_r7;

    for (i_ctr = 0; i_ctr < 0x80; i_ctr++) {
        temp_r7 = (S_fn_8012FC38_temp_r7 *) ((s8 *) &lbl_803A4830 + (i_ctr * 8));
        temp_r7->f_4 = 0;
        temp_r7->f_0 = -1;
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8012FD18(s32 arg0) {
    s32 i_ctr;
    S_fn_8012FD18_temp_r6 *temp_r6;

    for (i_ctr = 0; i_ctr < 0x80; i_ctr++) {
        temp_r6 = (S_fn_8012FD18_temp_r6 *) ((s8 *) &lbl_803A4830 + (i_ctr * 8));
        if (arg0 == (s16) temp_r6->f_0) {
            temp_r6->f_4 = 0;
            temp_r6->f_0 = -1;
            return;
        }
    }
    return;
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8012F03C(s32 arg0) {
    s32 var_r31;

    fn_8012F6F4((s32) (-1));
    var_r31 = (s32) (0);
    do {
        fn_8012F0A8((s32) (var_r31), (s32) (0));
        var_r31 += 1;
    } while (var_r31 < 0x40);
    fn_8012EF1C();
    fn_80170E84((s32) (fn_8012365C((s32) (-2))), (s8 *) ((s8 *) lbl_8049D6E0));
    fn_8017776C((s32) (lbl_8049D6E4));
    lbl_8049D6E4 = 0;
}
#pragma dont_inline reset

void fn_8012E4B0(s8 *arg0) {
    void *r3 = *(void**)(arg0 + 0x2b0);
    if (r3 != 0) {
        fn_80125B48((s32)r3, *(s32*)(arg0 + 0x10));
    }
}

s32 fn_8012E5F4(M2C_UNK *arg0, u32 arg1) {
    while (arg0 != 0) {
        if ((u32)arg0 == arg1) {
            return 1;
        }
        arg0 = *(M2C_UNK **)arg0;
    }
    return 0;
}

s32 fn_8012E8D0(u32 arg0) {
    if (arg0 > 0xFE) {
        return (arg0 == 0xFFFF) ? 0 : 3;
    }
    return 1;
}

s32 fn_8012EDB4(u32 *arg0) {
    s32 count = 0;
    for (; ; count++, arg0++) {
        if (*arg0 == 0xFFFF) {
            break;
        }
    }
    if (count == 0) {
        count = 1;
    }
    return count;
}

void fn_8012F18C(s32 arg0, s32 arg1) {
    *(s32 *)((s8 *)lbl_803A4530 + arg0 * 12 + 8) = arg1;
}

void fn_8012F780(s8 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        s32 *arr = **(s32***)(arg0 + 0x34);
        arr[arg1] = arg2;
    }
}

#pragma dont_inline on
#pragma opt_common_subs on
s32 fn_8012FDBC(s32 arg0) {
    s32 var_r7;

    for (var_r7 = 0; var_r7 < 0x80; var_r7++) {
        if ((arg0 == (s16) M2C_FIELD(((s8 *) &lbl_803A4830 + (var_r7 * 8)), s16 *, 0)) && ((s32) M2C_FIELD(((s8 *) &lbl_803A4830 + (var_r7 * 8)), s32 *, 4) != 0)) {
            fn_8012FD5C((s32) ((s32) (var_r7)));
            return (s32) ((s32) (1));
        }
    }
    return (s32) ((s32) (0));
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma dont_inline on
void fn_8012EEB4(u32 *arg0, s8 *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (0);
        M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 8));
        for (;;) {
 if (*arg0 == 0xFFFF) break;
            M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg1, s32 *, 0) + 1));
            arg0++;
        }
        M2C_FIELD(arg1, s32 *, 8) = (s32) (0x64);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (0x64);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (0x64);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012FCB0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        if (((S_fn_8012FCB0_e *) &lbl_803A4830)[i].f_4 == 0) {
            break;
        }
    }
    if (i == 0x80) {
        return (s32) (0);
    }
    ((S_fn_8012FCB0_e *) &lbl_803A4830)[i].f_4 = arg1;
    ((S_fn_8012FCB0_e *) &lbl_803A4830)[i].f_0 = (s16) arg0;
    return (s32) (i);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_8012FED4(s8 *arg0, s32 arg1) {
    S_fn_8012FED4_var_r5 *var_r5;
    s32 var_r6;
    s8 *var_r3;

    var_r3 = (s8 *) (arg0);
    var_r6 = (s32) (1);
    if (arg1 != 0) {
        for (var_r5 = M2C_FIELD(var_r3, S_fn_8012FED4_var_r5 **, 0x18); (var_r3 = var_r5->f_0) != (s8 *)1U; var_r5 = var_r5->f_8) {
            if (arg1 < 0) {
                return (s8 *) (var_r3);
            }
            if (var_r6 == arg1) {
                return (s8 *) (var_r3);
            }
            var_r6 += 1;
        }
        return (s8 *) (NULL);
    }
    return (s8 *) (var_r3);
}
#pragma dont_inline reset

} // extern "C"
