#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"


extern "C" {

struct SK_fn_8014369C_8 { s32 * f_0; f32 f_4; };
struct S_fn_801492DC_arg0 { u8 pad_0[0x4C]; s32 f_4C; u8 pad_50[0x4]; s32 f_54; };
struct S_fn_8015430C_temp_r31 { u8 pad_0[0x4]; s8 * f_4; s32 f_8; };
struct S_fn_80154530_arg1 { f32 f_0; f32 f_4; f32 f_8; };
extern u8 lbl_80390580[];
extern u8 lbl_803C1A40[];
extern s32 **lbl_8049D758;
__declspec(section ".sdata2") extern const f32 lbl_804A0B90[];
__declspec(section ".sdata2") extern const f32 lbl_804A0BC8[];
__declspec(section ".sdata2") extern const f32 lbl_804A0C20[];
__declspec(section ".sdata2") extern const f32 lbl_804A0C58[];
__declspec(section ".sdata2") extern const f32 lbl_804A0CF8[];
__declspec(section ".sdata2") extern const f32 lbl_804A0D18[];

void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXProject(s8 *arg0, s8 *arg1, s8 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 farg0, f32 farg1, f32 farg2);
u16 GetFrameSize__Q34nw4r3lyt13AnimTransformCFv(s8 *arg0);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8008AE14(void);
s8 * fn_80111AB8(s32 arg0, s8 *arg1);
u32 * fn_80113DE0(M2C_UNK ***arg0, M2C_UNK **arg1, u32 **arg2, u32 *arg3);
void fn_80127594(s8 **arg0);
s32 fn_80127740(s32 *arg0, s32 arg1, s32 arg2, s8 *arg3);
s32 fn_8013EEAC(s8 *arg0, s32 arg1);
void fn_80141254(s32 arg0, s32 arg1, s32 arg2);
u32 * fn_80141624(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
s32 ** fn_80141634(s32 ***arg0, u32 arg1, s32 ***arg2);
s32 fn_80141670(s8 *arg0, s32 *arg1, s32 arg2);
s32 *** fn_8014369C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4);
s32 fn_8014693C(s32 arg0, u32 arg1, s32 arg2);
s32 fn_80146EF0(s32 arg0, s32 arg1);
s32 fn_80146F20(s32 arg0);
s32 fn_80146F28(s8 *arg0);
s8 * fn_80148E48(s8 *arg0, s8 *arg1);
void fn_801492DC(S_fn_801492DC_arg0 *arg0, s32 arg1, s32 *arg2, s32 arg3);
void fn_8014BEB4(void);
void fn_8014BEC8(void);
void fn_8014BEDC(void);
void fn_80153C58(s32 *arg0);
void fn_80153C98(s8 *arg0);
void fn_80153CB0(s32 arg0);
void fn_80153CBC(s8 *arg0);
void fn_80153CF0(s32 **arg0);
s32 ** fn_80153CF8(void);
s8 * fn_80153D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153D48(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80153DD8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80153E20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153EA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 * fn_80153F20(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80153FD8(s32 arg0, s32 arg1, s32 arg2);
void fn_80154090(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_801541B4(s8 *arg0, s32 arg1);
void fn_8015430C(s8 *arg0, s32 arg1);
void fn_80154530(s32 arg0, S_fn_80154530_arg1 *arg1);
u32 fn_801561B4(void);
s32 fn_801561C4(void);
void fn_801561D0(void);
s32 fn_801561E0(s32 *arg0);
s32 fn_80156200(s32 *arg0);
s32 fn_8015C7B8(s32 arg0, s32 arg1, s32 arg2);
f32 fn_8015E6CC(s32 arg0);
M2C_UNK * fn_80164558(void);
void fn_80164C90(s8 *arg0, s32 arg1);
u32 * fn_80164EC8(s32 **arg0, u32 *arg1, u32 *arg2, u32 *arg3);
s32 fn_801654BC(s8 *arg0, s32 arg1);
s32 fn_80165908(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_801659E4(s8 *arg0, s32 arg1, s32 arg2);
u32 * fn_80165B04(s8 *arg0, s32 arg1);
void fn_80170E18(M2C_UNK **arg0);
s32 fn_80177170(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
void fn_8017776C(s32 arg0);
s32 * fn_8017ADBC(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017C22C(s32 arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80141254(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) ((s8 *) arg0), (s32) (arg1), (s32) (arg2), (s32) (0));
}

#pragma dont_inline on
u32 * fn_80141624(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    if (arg4 != 0) {
        return fn_80113DE0((M2C_UNK ***)arg0, (M2C_UNK **)arg1, (u32 **)arg2, (u32 *)arg3);
    }
    return fn_80164EC8((s32 **)arg0, (u32 *)arg1, (u32 *)arg2, (u32 *)arg3);
}
#pragma dont_inline reset

s32 ** fn_80141634(s32 ***arg0, u32 arg1, s32 ***arg2) {
    s32 ***var_r0;

    var_r0 = (s32 ***) (&arg0[arg1]);
    if (arg1 == 0x15) {
        if (arg2 != NULL) {
            var_r0 = (s32 ***) ((s8 *)arg0 + 0x6C);
        }
    } else if ((arg1 == 0x13) && (arg2 != NULL)) {
        var_r0 = (s32 ***) ((s8 *)arg0 + 0x70);
    }
    return (s32 **) ((s32 **) var_r0);
}

#pragma dont_inline on
s32 fn_80141670(s8 *arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {
        return *(s32 *)(arg0 + 0x64) + *arg1;
    }
    return fn_8013EEAC(arg0, *arg1);
}
#pragma dont_inline reset

s32 fn_8014693C(s32 arg0, u32 arg1, s32 arg2) {
    s32 var_r0;

    var_r0 = (s32) (arg0 + (arg1 * 4));
    if (arg1 == 0x15) {
        if (arg2 != 0) {
            var_r0 = (s32) (arg0 + 0x6C);
        }
    } else if ((arg1 == 0x13) && (arg2 != 0)) {
        var_r0 = (s32) (arg0 + 0x70);
    }
    return (s32) (var_r0);
}

s32 fn_80146EF0(s32 arg0, s32 arg1) {
    fn_80031A24((s32) (arg0), (M2C_UNK *) ((s32 *) arg1));
    return (s32) (arg0);
}

s32 fn_80146F20(s32 arg0) {
    return (s32) (arg0 + 0x54);
}

s32 fn_80146F28(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC));
}

s8 * fn_80148E48(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return (s8 *) (arg1 + 0xC);
}

void fn_8014BEB4(void) {
    *(u32 *)&lbl_80390580 &= ~4;
}

void fn_8014BEC8(void) {
    *(u32 *)&lbl_80390580 |= 4;
}

void fn_8014BEDC(void) {
    *(u32 *)&lbl_80390580 |= 2;
}

void fn_80153C58(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 != 0) {
        fn_80170E18((M2C_UNK **) ((s32 **) temp_r3));
        *arg0 = 0;
    }
}

void fn_80153C98(s8 *arg0) {
    memset((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 4) * 4));
}

void fn_80153CB0(s32 arg0) {
    memset((s32) (arg0), (s32) (0), (s32) (0xC));
}

void fn_80153CBC(s8 *arg0) {
    fn_80153C58((s32 *) ((s32 *) arg0));
    fn_80127594((s8 **) (arg0 + 4));
}

void fn_80153CF0(s32 **arg0) {
    lbl_8049D758 = arg0;
}

s32 ** fn_80153CF8(void) {
    return (s32 **) (lbl_8049D758);
}

s8 * fn_80153E20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_801771D4((s32) (arg2), (s8 *) (fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg3);
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (arg0), (s32) (0), (s32) (arg1));
    return (s8 *) ((s8 *) temp_r3);
}

s8 * fn_80153EA0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177170((s32) (arg2), (M2C_UNK *) ((s32 *) fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg3);
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (arg0), (s32) (0), (s32) (arg1));
    return (s8 *) ((s8 *) temp_r3);
}

s8 * fn_80153F20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_801771D4((s32) (arg1), (s8 *) (fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
    fn_80164558();
    temp_r3_2 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) (0x80000002), (u32) (M2C_FIELD(&lbl_803C1A40, u32 *, 0x828))));
    if (temp_r3_2 == NULL) {
        fn_8017776C((s32) (temp_r3));
        return (s8 *) (NULL);
    }
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0x5C)), (s32) ((s32) temp_r3_2), (s32) (0));
    return (s8 *) ((s8 *) temp_r3);
}

s8 * fn_80153FD8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s8 *temp_r3_2;

    temp_r3 = (s32) (fn_80177170((s32) (arg1), (M2C_UNK *) ((s32 *) fn_801541B4), (s32) (0x34)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (0);
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg2);
    fn_80164558();
    temp_r3_2 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) (0x80000002), (u32) (M2C_FIELD(&lbl_803C1A40, u32 *, 0x828))));
    if (temp_r3_2 == NULL) {
        fn_8017776C((s32) (temp_r3));
        return (s8 *) (NULL);
    }
    fn_80154090((s8 *) ((s8 *) temp_r3), (s8 *) (M2C_FIELD(temp_r3_2, s8 **, 0x5C)), (s32) ((s32) temp_r3_2), (s32) (0));
    return (s8 *) ((s8 *) temp_r3);
}

u32 fn_801561B4(void) {
    return (u32) ((u32) M2C_FIELD(lbl_8049D758, u32 *, 8) >> 8U);
}

s32 fn_801561C4(void) {
    return (s32) (M2C_FIELD(lbl_8049D758, s32 *, 8));
}

void fn_801561D0(void) {
    M2C_FIELD(lbl_8049D758, s32 *, 8) = (s32) (0);
}

s32 fn_801561E0(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 >= 0x7FFFFF00) {
        return (s32) (temp_r3 + 0x80000100);
    }
    return (s32) (temp_r3);
}

s32 fn_80156200(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (*arg0);
    if (temp_r3 >= 0x7FFFFF00) {
        return (s32) (M2C_FIELD((**lbl_8049D758 + (temp_r3 * 4)), s32 *, 0x400));
    }
    return (s32) (temp_r3);
}

s32 fn_8015C7B8(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (arg2);
}

f32 fn_8015E6CC(s32 arg0) {
    return (f32) GetFrameSize__Q34nw4r3lyt13AnimTransformCFv((s8 *) ((s8 *) arg0));
}

#pragma dont_inline on
s8 * fn_80153D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80153E20((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_80153CB0((s32) ((s32) (temp_r3 + 0x28)));
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80153D48(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80153EA0((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_80153CB0((s32) ((s32) (temp_r3 + 0x28)));
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80153D90(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80153F20((s32) (arg0), (s32) (arg1), (s32) (arg2)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_80153CB0((s32) ((s32) (temp_r3 + 0x28)));
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80153DD8(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80153FD8((s32) (arg0), (s32) (arg1), (s32) (arg2)));
    if (temp_r3 == NULL) {
        return (s8 *) (NULL);
    }
    fn_80153CB0((s32) ((s32) (temp_r3 + 0x28)));
    return (s8 *) (temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_801541B4(s8 *arg0, s32 arg1) {
    s32 **temp_r31;
    s32 **temp_r31_2;

    temp_r31 = (s32 **) (fn_80153CF8());
    if (arg1 != 0) {
        if ((s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x14), s32 *, 8) & 0x10) == 0) {
            temp_r31_2 = (s32 **) (fn_80153CF8());
            fn_80153CF0((s32 **) (arg0 + 0x28));
            if ((s32) (arg1 & 0x1F8) != 0) {
                fn_801659E4((s8 *) (arg0 + 8), (s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) (arg1));
            } else {
                fn_80165908((s8 *) (arg0 + 8), (s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) (arg1));
            }
            fn_80153CF0((s32 **) (temp_r31_2));
        }
        if (((s32) (arg1 & 1) != 0) && ((s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x14), s32 *, 8) & 8) == 0)) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (0xF0);
            return (s32) (1);
        }
        return (s32) (0);
    }
    fn_80153CF0((s32 **) (arg0 + 0x28));
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0xF0) && (fn_801654BC((s8 *) (arg0 + 8), (s32) (M2C_FIELD(arg0, s32 *, 4))) == 0)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0xF0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 0xF0) {
        fn_80165B04((s8 *) (arg0 + 8), (s32) (M2C_FIELD(arg0, s32 *, 4)));
        fn_80164C90((s8 *) (arg0 + 8), (s32) (M2C_FIELD(arg0, s32 *, 4)));
        fn_80153CBC((s8 *) (arg0 + 0x28));
        fn_8017776C((s32) ((s32) arg0));
    } else {
        fn_8015430C((s8 *) (arg0 + 8), (s32) (0));
    }
    fn_80153CF0((s32 **) (temp_r31));
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 *** fn_8014369C(s32 ***arg0, s32 ***arg1, s32 ***arg2, s32 arg3, s32 ***arg4) {
    SK_fn_8014369C_8 sp8;
    s32 *temp_r31;

    if (arg3 == 0) {
        arg2 = (s32 ***) ((s32 ***) fn_80141624((void *) ((s32) arg0), (void *) ((s32) arg1), (void *) ((s32) &sp8), (void *) ((s32) arg2), (void *) ((s32) arg4)));
        temp_r31 = (s32 *) (fn_80111AB8((s32) (*sp8.f_0), (s8 *) (fn_80141670((s8 *) ((s32) arg0), (s32 *) ((s32) arg2), (s32) ((s32) arg4)))));
        *fn_80141634((s32 ***) (arg1), (u32) (0x15U), (s32 ***) (arg4)) = temp_r31;
        *fn_80141634((s32 ***) (arg1), (u32) (0x13U), (s32 ***) (arg4)) = temp_r31;
        arg2 = (s32 ***) ((s32 ***) ((s32) arg2 + 4));
    }
    return (s32 ***) (arg2);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_801492DC(S_fn_801492DC_arg0 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 temp_r0;

    switch (arg1) {                                 /* irregular */
    case 0x0:
        *arg2 |= arg3;
        return;
    case 0x1:
        *arg2 &= (s32) (u32) ~arg3;
        return;
    case 0x2:
        temp_r0 = (s32) (*arg2 & arg3);
        arg0->f_54 = temp_r0;
        arg0->f_4C = temp_r0;
        return;
    }
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8015430C(s8 *arg0, s32 arg1) {
    S_fn_8015430C_temp_r31 *temp_r31;
    s32 var_r30;
    s32 var_r6;

    var_r30 = (s32) (arg1);
    temp_r31 = (S_fn_8015430C_temp_r31 *) (fn_80153CF8());
    if (((s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 8) & 1) != 0) && (fn_8008AE14() != 0)) {
        var_r30 |= 1;
    }
    var_r6 = (s32) (0);
    if ((s32) (M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 8) & 0x20) != 0) {
        var_r6 |= 1;
    }
    temp_r31->f_8 = (s32) (temp_r31->f_8 + 0x100);
    fn_80127740((s32 *) (temp_r31->f_4), (s32) (var_r30), (s32) (0x100), (s8 *) ((s8 *) var_r6));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80154530(s32 arg0, S_fn_80154530_arg1 *arg1) {
    Mtx sp88;
    Mtx44 sp48;
    Mtx44 sp8;
    s32 *temp_r31;

    temp_r31 = (s32 *) (fn_8017ADBC((s32) (0)));
    fn_8017C22C((s32) (0));
    fn_8017B004((M2C_UNK *) (sp88), (s8 *) (temp_r31));
    GXGetProjectionv((s32) ((s32) sp48));
    GXGetViewportv((s32) ((s32) sp8));
    f32 x = arg1->f_0; f32 y = arg1->f_4; f32 z = arg1->f_8;
    GXProject((s8 *) (sp88), (s8 *) (sp48), (s8 *) (sp8), (f32 *) ((f32 *) arg0), (f32 *) (arg0 + 4), (f32 *) (arg0 + 8), x, y, z);
}
#pragma dont_inline reset

} // extern "C"
