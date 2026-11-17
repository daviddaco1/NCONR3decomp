#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_800A45DC_arg0 {
    u8 f_0;
    u8 pad_1[0x17];
    f32 f_18;
    u8 pad_1C[0x8];
    f32 f_24;
};
struct S_fn_800A1DE8_temp_r5 { u8 pad_0[0x1C]; s32 f_1C; s32 f_20; f32 f_24; f32 f_28; f32 f_2C; };
struct E_800A1F2C { s32 a; s32 b; f32 c; f32 d; f32 e; f32 f; };
struct O_800A1F2C { u8 pad_0[0x8]; s8 *f_8; u8 pad_C[0x10]; E_800A1F2C ent[8]; s8 count; };
struct M_A332C { u8 pad[0xE]; u8 n; u8 pad2[0x25]; u8 *tbl; };

extern u8 lbl_8034CD78[];
extern u8 lbl_8034CE74[];
extern u8 lbl_80395728[];
extern u8 lbl_803A1D58[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049D5C0;
extern f32 lbl_8049D5C4;
extern f32 lbl_8049D5C8;
extern f32 lbl_8049D5CC;
__declspec(section ".sdata2") extern const f32 lbl_8049F590[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_800341DC(s32 *arg0);
s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003F8A0(s32 arg0, s8 *arg1);
s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FADC(s32 arg0, s8 *arg1);
s32 fn_8008AE14(void);
s8 * fn_800A0F50(s32 arg0);
s32 fn_800A1234(s32 arg0, s32 arg1);
s32 fn_800A14C8(void);
s32 fn_800A1584(void);
s32 fn_800A15E0(s32 *arg0, s32 arg1);
void fn_800A1938(s32 arg0, s32 arg1);
void fn_800A19BC(s32 arg0, s32 arg1);
void fn_800A1A54(void);
s32 fn_800A1D94(s32 arg0);
s32 fn_800A1DE8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800A1F2C(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_800A21A8(s8 *arg0);
s32 fn_800A281C(s32 arg0);
s32 fn_800A28A8(s8 *arg0, s8 *arg1, s32 *arg2, s32 arg3, f32 farg0);
s32 fn_800A32B8(s32 arg0);
u8 * fn_800A332C(void);
s32 fn_800A3CD4(u16 arg0, s32 arg1, f32 *arg2, f32 farg0);
void fn_800A3FA8(void);
M2C_UNK fn_800A401C(f32 farg0_x);
void fn_800A45DC(S_fn_800A45DC_arg0 *arg0, f32 farg0, f32 farg1);
void fn_800A4C60(void);
s32 fn_800A4C64(f32 *arg0, f32 *arg1, s8 *arg2);
s32 * fn_800A4DFC(s32 arg0);
s8 * fn_800A4E30(s32 arg0);
s32 fn_800A4E88(s32 arg0);
s32 fn_800A4EE4(s32 arg0);
s32 fn_800A4F40(void);
s32 fn_800A4F48(s32 arg0, u32 *arg1);
s32 fn_800A4FD0(s32 arg0, s8 *arg1);
void fn_800A5008(s32 arg0, s32 arg1);
s8 * fn_80122824(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80122DA4(u16 arg0, s8 *arg1);
s32 fn_80122FF0(s32 arg0_pad);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8016499C(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80171454(s32 arg0);
s32 fn_801714F0(void);
void fn_801734E4(s32 arg0, s32 arg1);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
void fn_801773E0(s32 arg0);
void fn_8017776C(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s32 arg0, s32 arg1, ...);
void strcpy(s32 arg0, s32 arg1);

s32 fn_800A1584(void) {
    lbl_8049D5C8 = 0.0f;
    lbl_8049D5C4 = 0.0f;
    lbl_8049D5CC = 0.0f;
    if ((s32) lbl_8049D5C0 != 0) {
        fn_80122FF0((s32) (0xFC));
        fn_8017776C((s32) (lbl_8049D5C0));
        lbl_8049D5C0 = 0;
        return (s32) (1);
    }
    return (s32) (0);
}

void fn_800A19BC(s32 arg0, s32 arg1) {
    if (arg1 < 0) {
        arg1 = 8;
    }
    if (arg0 <= 0) {
        *(u32 *)1 = 0;
    }
    u8 *ctrl = lbl_803A1D58;
    if (*(s32 *)(ctrl + 0x30) == 0) {
        *(u8 *)(ctrl + 0xc) = arg0;
        *(u8 *)(ctrl + 0xe) = arg1;
        s32 off = arg0 << 8;
        s32 total = off + arg1 * 0x3c;
        void *ptr = (void *)fn_80170DFC(total);
        *(void **)(ctrl + 0x30) = ptr;
        *(void **)(ctrl + 0x34) = (char *)ptr + off;
        memset((s32)ptr, 0, total);
    }
}

s32 fn_800A1D94(s32 arg0) {
    s32 *temp_r3;
    s32 temp_r4;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    temp_r4 = (s32) (*temp_r3);
    if ((s32) (temp_r4 & 1) != 0) {
        return (s32) (0);
    }
    *temp_r3 = temp_r4 | 1;
    return (s32) (1);
}

s32 fn_800A281C(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    if ((u8) M2C_FIELD(temp_r3, u8 *, 0xE0) == 2) {
        fn_800A28A8((s8 *) (M2C_FIELD(temp_r3, s8 **, 8)), (s8 *) (M2C_FIELD(fn_800A4DFC((s32) ((s32) M2C_FIELD(temp_r3, u16 *, 0xE2))), s8 **, 8)), (s32 *) ((s8 *)temp_r3 + 0xE4), (s32) (2), M2C_FIELD(temp_r3, f32 *, 0xF0));
    } else {
        fn_800A28A8((s8 *) (M2C_FIELD(temp_r3, s8 **, 8)), (s8 *) (NULL), (s32 *) ((s8 *)temp_r3 + 0xE4), (s32) (1), M2C_FIELD(temp_r3, f32 *, 0xF0));
    }
    return (s32) (1);
}

s32 fn_800A32B8(s32 arg0) {
    switch (arg0) {
    case 1:
    case 2:
    case 3:
        return 1;
    case 4:
    case 5:
        return 4;
    case 6:
        return 6;
    case 7:
    case 8:
    case 11:
        return 7;
    default:
        if (arg0 >= 12) {
            return 0;
        }
        return arg0;
    }
}

void fn_800A4C60(void) {
}

s32 * fn_800A4DFC(s32 arg0) {
    if ((arg0 < 0) || ((s32) M2C_FIELD(&lbl_803A1D58, u8 *, 0xC) <= arg0)) {
        return (s32 *) (NULL);
    }
    return (s32 *) ((s8 *) M2C_FIELD(&lbl_803A1D58, s32 *, 0x30) + (arg0 << 8));
}

s8 * fn_800A4E30(s32 arg0) {
    s32 *temp_r3;
    s8 *var_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 1) == 0) {
        return (s8 *) (NULL);
    }
    var_r3 = (s8 *) (M2C_FIELD(temp_r3, s8 **, 8));
    if (var_r3 == NULL) {
        var_r3 = (s8 *) (NULL);
    }
    return (s8 *) (var_r3);
}

s32 fn_800A4EE4(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_80019DAC((s8 *) (M2C_FIELD(temp_r3, s8 **, 8) + 0x84), (f32 *) ((s8 *)temp_r3 + 0xC));
    M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 8), f32 *, 0x9C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x18);
    return (s32) (1);
}

s32 fn_800A4F40(void) {
    return (s32) (1);
}

#pragma dont_inline on
void fn_800A45DC(S_fn_800A45DC_arg0 *arg0, f32 farg0, f32 farg1) {    f32 var_f31;

    var_f31 = M2C_FIELD(fn_8017ADBC((s32) (0)), f32 *, 0x38);
    if ((u32) (arg0->f_0 - 8) <= 2U) {
        var_f31 = arg0->f_18 + (farg1 * (arg0->f_24 - arg0->f_18));
    }
    M2C_FIELD(fn_8017ADBC((s32) (0)), f32 *, 0x38) = var_f31;
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A1A54(void) {
    s32 *temp_r3_2;
    s32 temp_r3;
    s32 var_r30;
    u32 var_r29;
    s8 *temp_r31;

    temp_r31 = (s8 *) ((s8 *) &lbl_803A1D58 + 0x38);
    if ((s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) & 0x80) == 0) {
        temp_r3 = (s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) | 0x80);
        M2C_FIELD(&lbl_803A1D58, s32 *, 0) = (s32) (temp_r3);
        if ((s32) (temp_r3 & 0x200) != 0) {
            M2C_FIELD(&lbl_803A1D58, s32 *, 0) = (s32) ((s32) (temp_r3 & 0xFFFFFDFF));
        }
        fn_80171454((s32) (1));
        lbl_8049D5C8 = 0.0f;
        lbl_8049D5C4 = 0.0f;
        lbl_8049D5CC = 0.0f;
        M2C_FIELD(&lbl_803A1D58, s8 *, 0xC) = (s8) (0);
        M2C_FIELD(&lbl_803A1D58, s8 *, 0xD) = (s8) (0);
        M2C_FIELD(&lbl_803A1D58, s32 *, 0x30) = (s32) (0);
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x10) = (f32) lbl_8049F590[5];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x14) = (f32) lbl_8049F590[5];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x18) = (f32) lbl_8049F590[5];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x1C) = (f32) lbl_8049F590[6];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x20) = (f32) lbl_8049F590[5];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x24) = (f32) lbl_8049F590[5];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x28) = (f32) lbl_8049F590[7];
        M2C_FIELD(&lbl_803A1D58, f32 *, 0x2C) = 0.0f;
        M2C_FIELD(&lbl_803A1D58, s8 *, 0xF) = (s8) (0);
        M2C_FIELD(&lbl_803A1D58, s8 *, 0xE) = (s8) (0);
        M2C_FIELD(&lbl_803A1D58, s32 *, 0x34) = (s32) (0);
        if ((s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) & 0x40) != 0) {
            M2C_FIELD(&lbl_803A1D58, s32 *, 0) = (s32) ((s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) & 0xFFFFFFBF));
            return;
        }
        if ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4) != 0x12U) {
            M2C_FIELD(temp_r31, u32 *, 0x274) = (u32) ((u32) M2C_FIELD(&lbl_80395728, u32 *, 4));
            M2C_FIELD(&lbl_80395728, u32 *, 4) = (u32) (0x12U);
        }
        temp_r3_2 = (s32 *) (fn_8017ADBC((s32) (0)));
        if (temp_r3_2 != NULL) {
            M2C_FIELD(temp_r31, f32 *, 0x264) = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x38);
            M2C_FIELD(temp_r31, f32 *, 0x268) = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x3C);
            M2C_FIELD(temp_r31, f32 *, 0x26C) = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x40);
            M2C_FIELD(temp_r31, f32 *, 0x270) = (f32) M2C_FIELD(temp_r3_2, f32 *, 0x44);
            M2C_FIELD(&lbl_803A1D58, s32 *, 0) = (s32) ((s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) | 8));
        } else {
            M2C_FIELD(&lbl_803A1D58, s32 *, 0) = (s32) ((s32) (M2C_FIELD(&lbl_803A1D58, s32 *, 0) & 0xFFFFFFF7));
        }
        var_r29 = (u32) (0U);
        var_r30 = (s32) (0);
        do {
            if (var_r29 == 8U) {
                fn_8003FADC((s32) (0), (s8 *) (temp_r31 + var_r30));
            } else {
                fn_8003FA5C((s32) (0), (s32) ((s32) var_r29), (s32 *) (temp_r31 + var_r30));
            }
            var_r29 += 1;
            var_r30 += 0x44;
        } while (var_r29 < 9U);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A4E88(s32 arg0) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) (arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    fn_80019DAC((s8 *) ((s8 *)temp_r3 + 0xC), (f32 *) ((s8 *) M2C_FIELD(temp_r3, s8 **, 8) + 0x84));
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 8), f32 *, 0x9C);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800A5008(s32 arg0, s32 arg1) {
    sprintf(arg0, (s32) ((s8 *) &lbl_8034CE74 + 0x1BA), *(s32 *)((s8 *) &lbl_8034CD78 + (arg1 * 4)));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A14C8(void) {
    s32 temp_r3_2;
    s8 *temp_r3;

    if ((s32) lbl_8049D5C0 == 0) {
        lbl_8049D5C8 = 0.0f;
        lbl_8049D5C4 = 0.0f;
        lbl_8049D5CC = 0.0f;
        temp_r3 = (s8 *) (fn_80122824((s32) ((s32) ((s8 *) &lbl_8034CE74 + 0x19B)), (s32) (0x40000008), (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830))));
        if (temp_r3 != NULL) {
            fn_80122DA4((u16) (0xFCU), (s8 *) (temp_r3));
        }
        temp_r3_2 = (s32) (fn_80177170((s32) (0x19), (M2C_UNK *) ((s32 *) fn_800A15E0), (s32) (0xC)));
        lbl_8049D5C0 = temp_r3_2;
        if (temp_r3_2 != 0) {
            memset((s32) (temp_r3_2), (s32) (0), (s32) (0xC));
            M2C_FIELD(lbl_8049D5C0, s32 *, 8) = (s32) (-1);
            fn_801773E0((s32) (lbl_8049D5C0));
            return (s32) (0);
        }
        goto block_5;
    }
block_5:
    return (s32) (0);
}
#pragma dont_inline reset

s32 fn_800A4FD0(s32 arg0, s8 *arg1) {
    s32 id = arg0;
    s8 *ptr = arg1;
    if (arg0 >= 9) {
        return 0;
    }
    if (arg0 == 8) {
        return fn_8003FADC(0, ptr);
    }
    return fn_8003FA5C(0, id, (s32 *)ptr);
}

#pragma dont_inline on
void fn_800A3FA8(void) {
    f32 var_f31;

    var_f31 = lbl_8049F590[5];
    if ((fn_801714F0() != 0) || ((s32) M2C_FIELD(&lbl_803C22B0, s32 *, 0x24) == 1)) {
        var_f31 = lbl_8049F590[34];
    }
    if (fn_8008AE14() == 0) {
        fn_800A401C(var_f31);
    }
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A3CD4(u16 arg0, s32 arg1, f32 *arg2, f32 farg0) {
    u8 *temp_r3;

    temp_r3 = (u8 *) (fn_800A332C());
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    memset((s32) ((s32) temp_r3), (s32) (0), (s32) (0x3C));
    switch (arg1) {
    case 0xB:
        M2C_FIELD(temp_r3, f32 *, 0x18) = *arg2;
        break;
    default:
        return (s32) (0);
    }
    M2C_FIELD(temp_r3, u8 *, 0) = (u8) ((u8) arg1);
    M2C_FIELD(temp_r3, s8 *, 1) = (s8) (0xA);
    M2C_FIELD(temp_r3, u16 *, 2) = (u16) (arg0);
    M2C_FIELD(temp_r3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_r3, f32 *, 8) = farg0;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A4F48(s32 arg0, u32 *arg1) {
    s32 var_r6;

    var_r6 = (s32) (0);
    if ((arg1 != NULL) && (*arg1 != 0xFFFF)) {
        var_r6 = (s32) (1);
    }
    if (arg0 >= 9) {
        return (s32) (0);
    }
    if (arg0 == 8) {
        if (var_r6 != 0) {
            fn_8003F8A0((s32) (0), (s8 *) (arg1));
        }
    } else if (var_r6 != 0) {
        fn_8003F82C((s32) (0), (s32) (arg0), (s32 *) ((s32 *) arg1));
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A1DE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 i_ctr;
    s32 *temp_r3;
    s8 *temp_r3_2;
    S_fn_800A1DE8_temp_r5 *temp_r5;

    temp_r3 = (s32 *) (fn_800A4DFC((s32) ((s32) arg0)));
    if (temp_r3 == NULL) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 1) == 0) {
        return (s32) (0);
    }
    temp_r3_2 = (s8 *) (fn_800A0F50((s32) ((s32) arg0)));
    if (temp_r3_2 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(temp_r3_2, s32 *, 0x7C) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0x7C) | 1));
    M2C_FIELD(temp_r3, s8 **, 8) = (s8 *) (temp_r3_2);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
    M2C_FIELD(temp_r3, s8 *, 0xDC) = (s8) (0);
    for (i_ctr = 0; i_ctr < 8; i_ctr++) {
        temp_r5 = (S_fn_800A1DE8_temp_r5 *) ((s8 *)temp_r3 + (i_ctr * 0x18));
        temp_r5->f_1C = -1;
        temp_r5->f_20 = 0;
        temp_r5->f_24 = (f32) lbl_8049F590[5];
        temp_r5->f_28 = (f32) lbl_8049F590[5];
        temp_r5->f_2C = (f32) lbl_8049F590[6];
    }
    M2C_FIELD(temp_r3, s8 *, 0xE0) = (s8) (2);
    M2C_FIELD(temp_r3, u16 *, 0xE2) = (u16) ((u16) arg0);
    M2C_FIELD(temp_r3, f32 *, 0xE4) = 0.0f;
    M2C_FIELD(temp_r3, f32 *, 0xE8) = 0.0f;
    M2C_FIELD(temp_r3, f32 *, 0xEC) = 0.0f;
    M2C_FIELD(temp_r3, f32 *, 0xF0) = (f32) lbl_8049F590[7];
    M2C_FIELD(temp_r3_2, s32 *, 0x7C) = (s32) ((s32) (M2C_FIELD(temp_r3_2, s32 *, 0x7C) & 0xFFFFFFF7));
    M2C_FIELD(temp_r3, s32 *, 0xF4) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0xF8) = (s32) (7);
    M2C_FIELD(temp_r3, s32 *, 0xFC) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 0xFC) = (s32) ((s32) (M2C_FIELD(temp_r3, s32 *, 0xFC) | 1));
    fn_800A1234((s32) ((s32) arg0), (s32) ((s32) ((s8 *) &lbl_8034CE74 + 0x1B1)));
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A1F2C(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    O_800A1F2C *p;

    p = (O_800A1F2C *) ((O_800A1F2C *) fn_800A4DFC((s32) (arg0)));
    if (p == NULL) {
        return (s32) (0);
    }
    if (p->count >= 8) {
        return (s32) (0);
    }
    p->ent[p->count].a = arg1;
    p->ent[p->count].b = arg2 | 0x80000000;
    p->ent[p->count].c = farg0;
    p->ent[p->count].d = farg1;
    p->ent[p->count].e = farg2;
    p->ent[p->count].f = farg3;
    p->count += 1;
    if (p->count == 1) {
        fn_800A21A8((s8 *) (p->f_8));
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_800A4C64(f32 *arg0, f32 *arg1, s8 *arg2) {
    Mtx sp18;
    Vec spC;
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_800A4E30((s32) ((s32) M2C_FIELD(arg2, u16 *, 0x18))));
    if ((temp_r3 == NULL) || (M2C_FIELD(arg2, u16 *, 0x1A) == 0xFFFF)) {
        return (s32) (0);
    }
    sp8 = (s32) (M2C_FIELD(M2C_FIELD(temp_r3, s8 **, 0x377C), s32 *, 0x114));
    fn_801734E4((s32) ((s32) sp18), (s32) ((s32) (M2C_FIELD(fn_800341DC((s32 *) (&sp8)), s8 **, 0xD0) + (M2C_FIELD(arg2, u16 *, 0x1A) * 0x280) + 0x224)));
    switch ((s32) (M2C_FIELD(arg2, u8 *, 0))) {                        /* irregular */
    case 0x2:
        fn_80018B0C((M2C_UNK *) (&spC), sp18[0][3], sp18[1][3], sp18[2][3]);
        fn_80018B00((s32) ((s32) &spC), (s32) ((s32) &spC), (s32) ((s32) (arg2 + 0x28)));
        if (arg0 != NULL) {
            fn_80019DAC((s8 *) (arg0), (f32 *) ((f32 *) &spC));
        }
        if (arg1 != NULL) {
            fn_8001B8B8((s32) ((s32) arg1), (s32) ((s32) &spC), (s32) ((s32) (arg2 + 0x1C)));
        }
        break;
    case 0x3:
        fn_80018B0C((M2C_UNK *) (&spC), sp18[0][3], sp18[1][3], sp18[2][3]);
        fn_80018B00((s32) ((s32) &spC), (s32) ((s32) &spC), (s32) ((s32) (arg2 + 0x28)));
        if (arg1 != NULL) {
            fn_80019DAC((s8 *) (arg1), (f32 *) ((f32 *) &spC));
        }
        if (arg0 != NULL) {
            fn_80018B00((s32) ((s32) arg0), (s32) ((s32) &spC), (s32) ((s32) (arg2 + 0x1C)));
        }
        break;
    case 0x4:
        fn_80018B00((s32) ((s32) &spC), (s32) ((s32) (arg2 + 0x28)), (s32) ((s32) (arg2 + 0x1C)));
        if (arg0 != NULL) {
            fn_80018AF8((s32) ((s32) arg0), (s32) ((s32) sp18), (s32) ((s32) &spC));
        }
        if (arg1 != NULL) {
            fn_80018AF8((s32) ((s32) arg1), (s32) ((s32) sp18), (s32) ((s32) (arg2 + 0x28)));
        }
        break;
    }
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
#pragma opt_common_subs on
u8 * fn_800A332C(void) {
    M_A332C *m;
    s32 i;
    s32 off;
    u8 *t;

    m = (M_A332C *) ((M_A332C *) &lbl_803A1D58);
    t = (u8 *) (m->tbl);
    if (t == NULL) {
        return (u8 *) (NULL);
    }
    off = (s32) (0);
    for (i = 0; i < m->n; i++) {
        if (t[off] == 0) {
            return (u8 *) (t + off);
        }
        off += 0x3C;
    }
    return (u8 *) (NULL);
}
#pragma opt_common_subs reset
#pragma dont_inline reset

#pragma peephole on
#pragma dont_inline on
void fn_800A1938(s32 arg0, s32 arg1) {
    s32 sp8[16];
    s32 *p;
    s32 i;
    s32 r;

    p = (s32 *) (sp8 - 1);
    for (i = 0; i < 8; i++) {
        *++p = 0;
        *++p = 0;
    }
    strcpy((s32) ((s32) sp8), (s32) (arg0));
    if (arg1 != 0) {
        r = (s32) (fn_801648C4((s32) ((s32) sp8), (s32) (5), (s32) (0)));
    } else {
        r = (s32) (fn_8016499C((s32) ((s32) sp8), (s32) (5), (s32) (0)));
    }
    if (r == 0) {
        return;
    }
}
#pragma dont_inline reset
#pragma peephole reset

} // extern "C"
