#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80127210_arg1 {
    f32 f_0;
    f32 f_4;
};
struct S_fn_80127210_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
    f32 f_C;
    f32 f_10;
    f32 f_14;
    f32 f_18;
    f32 f_1C;
    f32 f_20;
    f32 f_24;
    f32 f_28;
    f32 f_2C;
};
struct S_fn_80122D5C_temp_r6 {
    u16 f_0;
    u8 pad_2[0x2];
    s8 * f_4;
};
struct S_fn_801236CC_temp_r31 {
    s32 f_0;
    s32 f_4;
};
struct SK_fn_80123FB8_C { s32 f_0; };
struct S_fn_801271E8_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_801271E8_arg1 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_80123740_temp_r3 {
    s32 f_0;
    s32 f_4;
};
struct S_fn_801237B0_temp_r3 {
    s32 f_0;
    s32 f_4;
};
struct S_w3_2DA4 { u16 f_0; u8 pad_2[2]; s8 *f_4; };

struct S_fn_80124860_arg0 { u8 pad_0[0x8]; s32 f_8; s32 f_C; };
struct S_fn_80125AD4_arg0 { u8 pad_0[0x8]; s32 f_8; };
extern u8 lbl_8034F660[];
extern u8 lbl_8034F688[];
extern u8 lbl_8034F6FC[];
extern u8 lbl_803A3428[];
extern u8 lbl_803A3448[];
extern u8 lbl_803A3C48[];
extern u8 lbl_803A3C58[];
extern u8 lbl_803A3C70[];
extern u8 lbl_803A4470[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049C328;
extern s32 lbl_8049C32C;
extern M2C_UNK lbl_8049C330;
extern u32 lbl_8049D6D0;
__declspec(section ".sdata2") extern const f32 lbl_804A0910[];
__declspec(section ".sdata2") extern const f32 lbl_804A0970[];

s32 DCStore__Q34nw4r3g3d7ResPlttFb(s32 arg0_pad, s32 arg1_pad);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXLoadTlut(s8 *arg0, s32 arg1);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
f32 PSMTXMultVec(s32 arg0, s32 arg1, s32 arg2);
void fn_80016A94(s32 arg0);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
M2C_UNK fn_80018B90(s32 arg0);
void fn_8002AE40(s32 arg0);
void fn_8002AF5C(s32 arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
void fn_80033D2C(s32 *arg0, s32 arg1, s32 arg2);
void fn_80033DE4(s32 arg0);
M2C_UNK fn_800361F0(s32 *arg0);
s32 fn_80039424(s32 arg0);
s8 * fn_8003DAF0(s8 **arg0);
void fn_80044500(s32 arg0);
void fn_800445B0(s32 *arg0, s32 *arg1);
s8 * fn_80122394(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_801223C8(s32 arg0, s32 arg1, s32 arg2);
void fn_80122BEC(void);
void fn_80122D38(u32 arg0, s32 arg1, s32 arg2);
s8 * fn_80122D5C(s32 arg0);
s32 fn_80122DA4(s32 arg0, s8 *arg1);
s32 * fn_80122E1C(s32 arg0);
s32 * fn_80122EBC(s32 arg0);
void fn_80122F5C(s32 arg0);
void fn_8012303C(void);
void fn_801234C0(void);
void fn_80123628(void);
s32 fn_8012365C(s32 arg0);
s32 fn_801236CC(s32 arg0, s32 arg1);
void fn_80123740(s32 arg0);
void fn_801237B0(void);
void fn_8012381C(void);
void fn_80123A2C(void);
void fn_80123A68(s32 arg0);
void fn_80123AA4(s32 arg0);
void fn_80123BA0(s32 arg0, s32 arg1);
void fn_80123C4C(s32 arg0, s32 arg1);
void fn_80123F7C(void);
void fn_80123FB8(s32 arg0);
void fn_80124148(s8 *arg0, s8 *arg1);
void fn_80124184(s32 arg0, s8 *arg1);
void fn_80124264(s32 arg0, s8 *arg1);
void fn_801242E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s8 * fn_80124394(s32 arg0);
void fn_801243D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8012450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 *arg5);
void fn_80124684(s8 *arg0, s32 arg1, s32 arg2);
void fn_801246FC(void);
void fn_80124700(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8012479C(s8 *arg0);
void fn_801247F0(void *arg0);
void fn_801247FC(s32 arg0, s32 arg1);
void fn_80124860(S_fn_80124860_arg0 *arg0);
void fn_801248B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_8012593C(s32 *arg0, s32 *arg1);
void fn_80125948(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_801259D8(s8 *arg0);
void fn_80125A74(s32 arg0, s32 arg1);
void fn_80125AD4(S_fn_80125AD4_arg0 *arg0);
void fn_80125B48(s32 arg0, s32 arg1);
void fn_80125BA8(s8 *arg0);
void fn_80125DE0(s32 arg0, s32 arg1);
u16 fn_80126E98(s32 arg0);
M2C_UNK fn_80126EBC(s32 *arg0);
s32 fn_80126F20(void);
s32 fn_80126F28(s32 arg0);
s8 * fn_80126F4C(s32 arg0);
M2C_UNK fn_80126F84(s32 *arg0);
void fn_80126FE8(s32 arg0);
s32 * fn_80126FF0(s32 *arg0, s32 arg1);
s32 fn_80127054(s32 *arg0);
s32 fn_8012705C(s32 *arg0);
s32 fn_80127064(s32 *arg0);
s32 * fn_80127074(s32 *arg0, s32 arg1);
void fn_801270A4(s32 *arg0, s32 *arg1);
s8 * fn_801270B0(s8 **arg0, s32 arg1);
void fn_801270CC(s32 *arg0, s32 arg1);
s32 fn_801270D4(s32 *arg0);
f32 * fn_80127110(f32 *arg0, M2C_UNK *arg1, f32 *arg2);
s32 * fn_80127174(s32 *arg0);
void fn_801271AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801271B8(void);
void fn_801271BC(f32 farg0, f32 farg1);
void fn_801271CC(s32 arg0);
void fn_801271D8(f32 farg0, f32 farg1);
void fn_801271E8(S_fn_801271E8_arg0 *arg0, S_fn_801271E8_arg1 *arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_80127210(S_fn_80127210_arg0 *arg0, S_fn_80127210_arg1 *arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_8012F03C(s32 arg0);
void fn_8012FC70(void);
void fn_80135CC0(void);
void fn_80136D94(s32 arg0);
s32 fn_80136D9C(void);
void fn_80165C74(s32 arg0, ...);
void fn_80165CC4(void);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017C22C(s32 arg0);
s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
void fn_80191F04(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_80122394(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) (arg1 | 8), (u32) ((u32) arg2)));
    if (temp_r3 != NULL) {
        return (s8 *) (temp_r3);
    }
    return (s8 *) (NULL);
}

s8 * fn_801223C8(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) ((arg1 & 0xFFFFFFF7) | 0x200), (u32) ((u32) arg2)));
    if (temp_r3 != NULL) {
        return (s8 *) (temp_r3);
    }
    return (s8 *) (NULL);
}

void fn_80122BEC(void) {
    u32 var_r31;

    var_r31 = (u32) (0);
    do {
        fn_80122D38((u32) (var_r31), (s32) (0), (s32) (0));
        var_r31 += 1;
    } while ((s32) var_r31 < 2);
    if ((s8 *) M2C_FIELD(&lbl_803A3C48, s8 **, 8) != NULL) {
        fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830)), (s8 *) (M2C_FIELD(&lbl_803A3C48, s8 **, 8)));
        M2C_FIELD(&lbl_803A3C48, s8 **, 8) = (s8 *) (NULL);
    }
}

s32 * fn_80122EBC(s32 arg0) {
    s32 *temp_r3;
    s32 var_r30;

    var_r30 = (s32) (arg0);
    temp_r3 = (s32 *) (fn_80122E1C((s32) (arg0)));
    if (temp_r3 == NULL) {
        var_r30 = (s32) (-1);
        fn_80123C4C((s32) (0x01000000), (s32) (0));
    } else {
        fn_80123C4C((s32) (0x02000000), (s32) (0));
        if ((u32) lbl_8049D6D0 != (u32) temp_r3) {
            if ((s32) (*temp_r3 & 1) != 0) {
                GXLoadTlut((s8 *) ((s8 *)temp_r3 + 0x24), (s32) (0));
            }
            GXLoadTexObj((s32) ((s32) ((s8 *)temp_r3 + 4)), (s32) (0));
        }
    }
    lbl_8049C328 = var_r30;
    lbl_8049D6D0 = (u32) temp_r3;
    return (s32 *) (temp_r3);
}

void fn_8012303C(void) {
}

void fn_80123A2C(void) {
    fn_80016A94((s32) (0));
    GXSetZMode((s32) (1), (s32) (3), (s32) (1));
    fn_8017C22C((s32) (0));
}

#pragma dont_inline on
void fn_80123AA4(s32 arg0) {
    s32 temp_r31;

    temp_r31 = (s32) (arg0 & 0xF00);
    if (temp_r31 != (s32) (lbl_8049C32C & 0xF00)) {
        switch (temp_r31) {                         /* irregular */
        default:
            GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0xF));
            break;
        case 0x100:
            GXSetBlendMode((s32) (1), (s32) (4), (s32) (1), (s32) (0xF));
            break;
        case 0x200:
            GXSetBlendMode((s32) (3), (s32) (0), (s32) (0), (s32) (0xF));
            break;
        case 0x300:
            GXSetBlendMode((s32) (2), (s32) (1), (s32) (1), (s32) (6));
            break;
        case 0x400:
            GXSetBlendMode((s32) (1), (s32) (0), (s32) (3), (s32) (0xF));
            break;
        case 0x500:
            GXSetBlendMode((s32) (1), (s32) (2), (s32) (5), (s32) (0xF));
            break;
        }
        lbl_8049C32C = (lbl_8049C32C & 0xFFFFF0FF) | temp_r31;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80123BA0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (arg0 & 0xF000);
    if (temp_r31 != (s32) (lbl_8049C32C & 0xF000)) {
        switch (temp_r31) {                         /* irregular */
        default:
            GXSetZMode((s32) (0), (s32) (7), (s32) (0));
            break;
        case 0x1000:
            GXSetZMode((s32) (1), (s32) (1), (s32) (1));
            break;
        case 0x3000:
            GXSetZMode((s32) (1), (s32) (1), (s32) (0));
            break;
        case 0x2000:
            GXSetZMode((s32) (0), (s32) (7), (s32) (1));
            break;
        }
        lbl_8049C32C = (lbl_8049C32C & 0xFFFF0FFF) | temp_r31;
    }
}
#pragma dont_inline reset

void fn_80123F7C(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_80123FB8((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 3);
}

void fn_80124148(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) (0);
    if ((s8 *) M2C_FIELD(arg0, s8 **, 0) == NULL) {
        M2C_FIELD(arg0, s8 **, 0) = (s8 *) (arg1);
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg1);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 4) = (s8 *) (arg1);
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 8) + 1));
}

void fn_801242E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x64)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg5), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (1);
        M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (arg4);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) (arg6);
        memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x28)), (s32) (arg1), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x48)), (s32) (arg2), (s32) (0x10));
    }
}

void fn_801243D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    fn_801242E8((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (0));
}

void fn_8012450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 *arg5) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x74)));
    if (temp_r3 != NULL) {
        fn_80124264((s32) ((s32) arg5), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (2);
        M2C_FIELD(temp_r3, s32 *, 0x6C) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x68) = (s32) (arg4);
        memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x30));
        memcpy((s32) ((s32) (temp_r3 + 0x38)), (s32) (arg1), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x58)), (s32) (arg2), (s32) (0x10));
    }
}

void fn_80124684(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x4C)));
    if (temp_r3 != NULL) {
        fn_80124264((s32) (0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (3);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
        fn_8002B060((s32) ((s32) (temp_r3 + 0x40)), (s32) ((s32) (arg0 + 0x30)));
        fn_80031A24((s32) ((s32) (temp_r3 + 0x10)), (M2C_UNK *) ((s32 *) arg0));
    }
}

void fn_801246FC(void) {
}

void fn_80124700(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x50)));
    if (temp_r3 != NULL) {
        if (arg3 == 1) {
            fn_80124184((s32) (0), (s8 *) (temp_r3));
        } else {
            fn_80124264((s32) (0), (s8 *) (temp_r3));
        }
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (4);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
        fn_8002B060((s32) ((s32) (temp_r3 + 0x44)), (s32) ((s32) (arg0 + 0x30)));
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg2);
        fn_80031A24((s32) ((s32) (temp_r3 + 0x14)), (M2C_UNK *) ((s32 *) arg0));
    }
}

void fn_8012479C(s8 *arg0) {
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x10));
    if (temp_r3 != NULL) {
        sp8 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_80033D2C((s32 *) (&sp8), (s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s32) (1));
        fn_8017C22C((s32) (0));
        fn_80033DE4((s32) (0));
    }
}

void fn_801247FC(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x28)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (6);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
    }
}

void fn_801248B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *temp_r3;

    if (arg5 != 0) {
        temp_r3 = (s8 *) (fn_80124394((s32) (0x5C)));
        if (temp_r3 != NULL) {
            fn_80124184((s32) (arg7), (s8 *) (temp_r3));
            M2C_FIELD(temp_r3, s8 *, 0) = (s8) (7);
            memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x3C));
            memcpy((s32) ((s32) (temp_r3 + 0x44)), (s32) (arg1), (s32) (4));
            M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (arg2);
            M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) (arg4);
            M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) (arg3);
            M2C_FIELD(temp_r3, s32 *, 0x54) = (s32) (arg5);
            M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (arg6);
        }
    }
}

s32 fn_8012593C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    return (s32) ((s32) arg0);
}

void fn_80125948(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x24)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg7), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (9);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg4);
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (arg5);
        M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (arg6);
    }
}

void fn_801259D8(s8 *arg0) {
    fn_8017C3E0((s32) (M2C_FIELD(arg0, s32 *, 8)), (f32) M2C_FIELD(arg0, u32 *, 0xC), (f32) M2C_FIELD(arg0, u32 *, 0x10), (f32) M2C_FIELD(arg0, u32 *, 0x14), (f32) M2C_FIELD(arg0, u32 *, 0x18), (f32) M2C_FIELD(arg0, u32 *, 0x1C), (f32) M2C_FIELD(arg0, u32 *, 0x20), (s32) ((s32) arg0));
}

void fn_80125A74(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x24)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg1), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xA);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    }
}

void fn_80125B48(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0xC)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg1), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xC);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    }
}

void fn_80125BA8(s8 *arg0) {
    fn_80191F04((s8 *) (M2C_FIELD(arg0, s8 **, 8)));
    fn_8012381C();
    lbl_8049C32C = -1;
}

void fn_80125DE0(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0xC)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xD);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1);
    }
}

s32 fn_80126F20(void) {
    return (s32) ((s32) &lbl_8049C330);
}

s32 fn_80126F28(s32 arg0) {
    return (s32) (M2C_FIELD(fn_8003DAF0((s8 **) ((s8 **) arg0)), s32 *, 0x18));
}

s8 * fn_80126F4C(s32 arg0) {
    s32 temp_r0;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80126F84((s32 *) ((s32 *) arg0)));
    temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10));
    if (temp_r0 != 0) {
        return (s8 *) (temp_r3 + temp_r0);
    }
    return (s8 *) (NULL);
}

void fn_80126FE8(s32 arg0) {
    DCStore__Q34nw4r3g3d7ResPlttFb((s32) ((s8 *) arg0), (s32) (0));
}

s32 fn_80127054(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_8012705C(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80127064(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80127074(s32 *arg0, s32 arg1) {
    fn_801270A4((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_801270A4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s8 * fn_801270B0(s8 **arg0, s32 arg1) {
    s8 *base = *arg0;
    if (arg1 != 0) {
        return base + arg1;
    }
    return 0;
}

void fn_801270CC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 * fn_80127174(s32 *arg0) {
    fn_8002AE40((s32) ((s32) arg0));
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 0x30)));
    return (s32 *) (arg0);
}

void fn_801271AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_801271B8(void) {
}

void fn_801271BC(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_801271CC(s32 arg0) {
    GXWGFifo.s32 = arg0;
}

void fn_801271D8(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

f32 * fn_80127110(f32 *arg0, M2C_UNK *arg1, f32 *arg2) {

    PSMTXMultVec((s32) (fn_80018B90((s32) ((s32) arg1))), (s32) ((fn_80018B8C((s32) ((s32) arg2)))), (s32) ((fn_80018B88())));
    return arg0;
}

void fn_80127210(S_fn_80127210_arg0 *arg0, S_fn_80127210_arg1 *arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;

    var_f1 = farg0;
    var_f2 = farg1;
    var_f3 = farg2;
    var_f4 = farg3;
    switch ((arg2 & 0xC)) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_f1 = arg1->f_0;
        var_f4 = var_f1 * lbl_804A0970[0];
        var_f2 = -var_f4;
        break;
    case 4:                                         /* switch 1 */
        var_f2 = lbl_804A0970[1];
        var_f4 = arg1->f_0;
        break;
    case 8:                                         /* switch 1 */
        var_f2 = -arg1->f_0;
        var_f4 = lbl_804A0970[1];
        break;
    }
    switch ((arg2 & 0x30)) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_f3 = arg1->f_4 * lbl_804A0970[0];
        var_f1 = -var_f3;
        break;
    case 16:                                        /* switch 2 */
        var_f1 = lbl_804A0970[1];
        var_f3 = arg1->f_4;
        break;
    case 32:                                        /* switch 2 */
        var_f1 = -arg1->f_4;
        var_f3 = lbl_804A0970[1];
        break;
    }
    arg0->f_0 = var_f2;
    arg0->f_4 = var_f1;
    arg0->f_8 = (f32) lbl_804A0970[1];
    arg0->f_C = var_f4;
    arg0->f_10 = var_f1;
    arg0->f_14 = (f32) lbl_804A0970[1];
    arg0->f_18 = var_f4;
    arg0->f_1C = var_f3;
    arg0->f_20 = (f32) lbl_804A0970[1];
    arg0->f_24 = var_f2;
    arg0->f_28 = var_f3;
    arg0->f_2C = (f32) lbl_804A0970[1];
}

#pragma dont_inline on
u16 fn_80126E98(s32 arg0) {
    return (u16) (M2C_FIELD(fn_80126EBC((s32 *) ((s32 *) arg0)), u16 *, 0x1C));
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_80126FF0(s32 *arg0, s32 arg1) {
    fn_801270CC((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 0x1F) != 0) {
        fn_801A9384((s32) &lbl_8034F688, 0x2A, (s32) &lbl_8034F660);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801270D4(s32 *arg0) {
    return (s32) (fn_801270B0((s8 **) (arg0), (s32) (M2C_FIELD(fn_800361F0((s32 *) (arg0)), s32 *, 0x14))));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801234C0(void) {
    s32 var_r29;

    if ((s32 **) M2C_FIELD(&lbl_803A3428, s32 ***, 8) != NULL) {
        var_r29 = (s32) (0);
        do {
            fn_80122F5C((s32) (var_r29));
            var_r29 += 1;
        } while (var_r29 < 0x100);
        fn_80122BEC();
        fn_8012FC70();
        fn_8012F03C((s32) (0));
        fn_80123F7C();
        fn_80135CC0();
        fn_80170E18((M2C_UNK **) (M2C_FIELD(&lbl_803A3428, s32 ***, 0x10)));
        fn_80170E18((M2C_UNK **) (M2C_FIELD(&lbl_803A3428, s32 ***, 0x14)));
        fn_80170E18((M2C_UNK **) (M2C_FIELD(&lbl_803A3428, s32 ***, 0x18)));
        fn_80170E18((M2C_UNK **) (M2C_FIELD(&lbl_803A3428, s32 ***, 8)));
        M2C_FIELD(&lbl_803A3428, s32 ***, 8) = (s32 **) (NULL);
        M2C_FIELD(&lbl_803A3428, s32 *, 0) = (s32) (0);
        fn_801237B0();
        fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830)));
        fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x834)));
        fn_80170560((s32) (fn_80136D9C()));
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x830) = (s32) (0);
        M2C_FIELD(&lbl_803C1A40, s32 *, 0x834) = (s32) (0);
        fn_80136D94((s32) (0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80122D5C(s32 arg0) {
    s32 i_ctr;
    s8 *temp_r0;
    S_fn_80122D5C_temp_r6 *temp_r6;

    for (i_ctr = 0; i_ctr < 0x100; i_ctr++) {
        temp_r6 = (S_fn_80122D5C_temp_r6 *) ((s8 *) &lbl_803A3448 + (i_ctr * 8));
        if (arg0 == (s32) temp_r6->f_0) {
            temp_r0 = (s8 *) (temp_r6->f_4);
            if (temp_r0 != NULL) {
                return (s8 *) (temp_r0);
            }
        }
    }
    return (s8 *) (NULL);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8012365C(s32 arg0) {
    s32 i_ctr;

    switch (arg0) {                                 /* irregular */
    case -1:
        return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830));
    case -2:
        return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x834));
    default:
        for (i_ctr = 0; i_ctr < 0x100; i_ctr++) {
            if (arg0 == (s32) *(s32 *)((s8 *) &lbl_803A3C70 + (i_ctr * 8))) {
                return (s32) (M2C_FIELD(((s8 *) &lbl_803A3C70 + (i_ctr * 8)), s32 *, 4));
            }
        }
        return (s32) (0);
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801236CC(s32 arg0, s32 arg1) {
    s32 i_ctr;
    S_fn_801236CC_temp_r31 *temp_r31;

    for (i_ctr = 0; i_ctr < 0x100; i_ctr++) {
        temp_r31 = (S_fn_801236CC_temp_r31 *) ((s8 *) &lbl_803A3C70 + (i_ctr * 8));
        if ((s32) temp_r31->f_0 == -1) {
            temp_r31->f_0 = arg0;
            temp_r31->f_4 = fn_80170410((s32) (1), (s32) (arg1), (s32) (0), (s32) (4));
            return (s32) (temp_r31->f_4);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80123FB8(s32 arg0) {
    SK_fn_80123FB8_C spC;
    s32 sp8;
    s8 *temp_r31;

    temp_r31 = (s8 *) ((s8 *) &lbl_803A3C58 + (arg0 * 8));
    sp8 = (s32) (M2C_FIELD(temp_r31, s32 *, 4));
    spC.f_0 = M2C_FIELD(temp_r31, s32 *, 0);
    fn_800445B0((s32 *) (&spC), (s32 *) (&sp8));
    fn_80039424((s32) ((s32) temp_r31));
    fn_80044500((s32) ((s32) (temp_r31 + 4)));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801271E8(S_fn_801271E8_arg0 *arg0, S_fn_801271E8_arg1 *arg1, f32 farg0, f32 farg1, f32 farg2) {
    arg0->f_0 = M2C_BITWISE(f32, arg1->f_0) * farg0;
    arg0->f_4 = (f32) (arg1->f_4 * farg1);
    arg0->f_8 = (f32) (arg1->f_8 * farg2);
}
#pragma dont_inline reset

void fn_80122D38(u32 arg0, s32 arg1, s32 arg2) {
    if (arg0 <= 1) {
        *(s32 *)((s8 *)lbl_803A4470 + arg0 * 8) = arg1;
        *(s32 *)((s8 *)lbl_803A4470 + arg0 * 8 + 4) = arg2;
    }
}

#pragma opt_common_subs on
void fn_80123628(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        *(s32 *)((s8 *)&lbl_803A3C70 + i * 8) = -1;
        *(s32 *)((s8 *)&lbl_803A3C70 + i * 8 + 4) = 0;
    }
}
#pragma opt_common_subs reset

void fn_80123A68(s32 arg0) {
    ((void (*)(s32, s32)) fn_80123AA4)(arg0, 0);
    fn_80123BA0(arg0, 0);
}

void fn_801247F0(void *arg0) {
    ((void (*)(void*))*(void**)((char*)arg0 + 8))(arg0);
}

#pragma dont_inline on
void fn_80123740(s32 arg0) {
    s32 var_r28;
    S_fn_80123740_temp_r3 *temp_r3;

    var_r28 = (s32) (0);
    do {
        temp_r3 = (S_fn_80123740_temp_r3 *) ((s8 *) &lbl_803A3C70 + (var_r28 * 8));
        if (arg0 == (s32) temp_r3->f_0) {
            temp_r3->f_0 = -1;
            fn_80170560((s32) (temp_r3->f_4));
        }
        var_r28 += 1;
    } while (var_r28 < 0x100);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801237B0(void) {
    s32 var_r28;
    S_fn_801237B0_temp_r3 *temp_r3;

    var_r28 = (s32) (0);
    do {
        temp_r3 = (S_fn_801237B0_temp_r3 *) ((s8 *) &lbl_803A3C70 + (var_r28 * 8));
        if ((s32) temp_r3->f_0 != -1) {
            temp_r3->f_0 = -1;
            fn_80170560((s32) (temp_r3->f_4));
        }
        var_r28 += 1;
    } while (var_r28 < 0x100);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80122DA4(s32 arg0, s8 *arg1) {
    s32 i;
    s32 off;

    if (arg1 == NULL) {
        return (s32) (-1);
    }
    for (i = 0; i < 0x100; i++) {
        if (((S_w3_2DA4 *) &lbl_803A3448)[i].f_4 == NULL) {
            break;
        }
    }
    if (i == 0x100) {
        return (s32) (0);
    }
    off = (s32) (i * 8);
    M2C_FIELD((s8 *) &lbl_803A3448 + off, u16 *, 0) = (u16) ((u16) arg0);
    M2C_FIELD((s8 *) &lbl_803A3448 + off, s8 **, 4) = (s8 *) (arg1);
    return (s32) (i);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80124860(S_fn_80124860_arg0 *arg0) {
    ((void (*)(s32, s32)) fn_80165CC4)(0x20, 0x40);
    fn_80165C74((s32) ((s8 *) &lbl_8034F6FC + 0x28B), arg0->f_8, arg0->f_C);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80125AD4(S_fn_80125AD4_arg0 *arg0) {
    s8 *p = M2C_FIELD(&lbl_803C22B0, s8 **, 0x54);
    ((void (*)(s32, f32, f32, f32, f32, f32, f32)) fn_8017C3E0)(arg0->f_8, lbl_804A0910[1], lbl_804A0910[1], (f32) M2C_FIELD(p, u16 *, 0xE), (f32) M2C_FIELD(p, u16 *, 0x10), lbl_804A0910[1], lbl_804A0910[1]);
}
#pragma dont_inline reset

} // extern "C"
