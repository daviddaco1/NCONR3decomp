#include "types.h"
#include "m2c_macros.h"
#include "nw4r_g3d_obj.h"


extern "C" {

struct SK_fn_8004384C_8 { s32 f_0;  f32 f_4; };

extern u8 lbl_8033C748[];
extern u8 lbl_8033C7A0[];
extern u8 lbl_80348E00[];
extern u8 lbl_80348E8C[];
extern u8 lbl_80349078[];
extern u8 lbl_8034909C[];

s8 * Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode(s32 *arg0, s8 *arg1);
s8 * __dt__Q34nw4r3g3d6ScnObjFv(s8 *arg0, s32 arg1);
s8 * __dt__Q44nw4r2ut6detail12LinkListImplFv(s8 *arg0, s32 arg1);
s8 * dtor_80026A40(s8 *arg0, s16 arg1);
s8 * dtor_80043D28(s8 *arg0, s16 arg1);
void dtor_80136CFC(s32 arg0);
void fn_80027B74(s32 arg0);
s32 fn_80028264(s32 *arg0, s32 *arg1);
s8 * fn_80028D8C(s8 *arg0);
s8 * fn_800291EC(s8 *arg0);
M2C_UNK fn_800310D0(s32 *arg0, s32 arg1);
void fn_800310D8(s32 arg0);
s32 fn_800310DC(s32 *arg0);
s32 fn_80032B60(s32 arg0, s32 *arg1);
s32 fn_80039C9C(s32 arg0);
s32 * fn_80039CD0(s32 *arg0, s32 arg1);
s32 * fn_800432D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s8 * fn_800436F4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80043730(s32 arg0, s16 arg1);
s8 * fn_8004378C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80043814(s8 *arg0);
s32 fn_8004381C(void);
const char * fn_8004384C(nw4r::g3d::G3dObj *obj);
s32 fn_80043884(s32 arg0, s32 *arg1);
s32 fn_800438F0(void);
s32 fn_80043920(s32 arg0, s16 arg1);
s32 fn_800439CC(s32 arg0, s32 *arg1);
s32 fn_80043A38(void);
void fn_80043A68(s32 arg0, s32 arg1);
s32 fn_80043AB4(s32 arg0, s32 *arg1, s32 arg2);
s32 fn_80043B10(s32 arg0);
s8 * fn_80043B60(s8 *arg0);
s32 fn_80043B90(s8 *arg0, s32 arg1);
void fn_80043BE0(s8 *arg0, s32 arg1);
s32 fn_80043C3C(s32 *arg0);
s32 ** fn_80043C44(s32 **arg0, s16 arg1);
s32 fn_80043CB0(void);
s32 fn_80043CB8(s32 arg0, u16 arg1);
s8 * fn_80043CCC(s8 *arg0, s16 arg1);
void fn_80043EE4(s8 *arg0, s32 arg1);
s8 * fn_80043F9C(s8 *arg0, s16 arg1);
s8 * fn_80044064(s8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 fn_800443B4(void);
s32 fn_800443B8(void);
M2C_UNK ** fn_80190550(M2C_UNK **arg0, s16 arg1);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

s32 * fn_800432D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    fn_8004378C((s8 *) (arg0), (s32) (arg1), (s32) ((s32) fn_80043BE0), (s32) (arg3), (s32) (arg4), (s32) (arg5));
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) &lbl_80348E8C);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (arg2);
    fn_80028D8C((s8 *) ((s8 *)arg0 + 0xFC));
    return (s32 *) (arg0);
}

s8 * fn_800436F4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80044064((s8 *) (arg0), (s32) (arg1), (s32) (arg2), (u32) (arg3));
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (&lbl_80348E00);
    return (s8 *) (arg0);
}

s32 fn_80043730(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_80043920((s32) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_800310D8((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

s32 fn_80043814(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xF0));
}

#pragma dont_inline on
s32 fn_8004381C(void) {
    s32 sp8;
    return *(s32 *)fn_800310D0(&sp8, (s32)lbl_8033C7A0);
}
#pragma dont_inline reset

s32 fn_80043884(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = (s32) (fn_800438F0());
    if (fn_80028264((s32 *) (arg1), (s32 *) (&spC)) != 0) {
        return (s32) (1);
    }
    sp8 = (s32) (*arg1);
    return (s32) (fn_800439CC((s32) (arg0), (s32 *) (&sp8)));
}

#pragma dont_inline on
s32 fn_800438F0(void) {
    s32 sp8;
    return *(s32 *)fn_800310D0(&sp8, (s32)lbl_8033C7A0);
}
#pragma dont_inline reset

s32 fn_80043920(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__Q34nw4r3g3d6ScnObjFv((s8 *) ((s8 *) arg0), (s32) (0));
        if (arg1 > 0) {
            fn_800310D8((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

s32 fn_800439CC(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = (s32) (fn_80043A38());
    if (fn_80028264((s32 *) (arg1), (s32 *) (&spC)) != 0) {
        return (s32) (1);
    }
    sp8 = (s32) (*arg1);
    return (s32) (fn_80032B60((s32) (arg0), (s32 *) (&sp8)));
}

#pragma dont_inline on
s32 fn_80043A38(void) {
    s32 sp8;
    return *(s32 *)fn_800310D0(&sp8, (s32)lbl_8033C748);
}
#pragma dont_inline reset

s8 * fn_80043B60(s8 *arg0) {
    fn_800291EC((s8 *) (arg0));
    return (s8 *) (arg0);
}

s32 fn_80043B90(s8 *arg0, s32 arg1) {
    s32 spC;
    s8 *sp8;

    sp8 = (s8 *) (Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode((s32 *) ((s32 *) arg0), (s8 *) (fn_80043B10((s32) (arg1)))));
    return (s32) (*fn_80039CD0((s32 *) (&spC), (s32) ((s32) &sp8)));
}

s32 fn_80043C3C(s32 *arg0) {
    return (s32) M2C_FIELD(arg0, s32 *, 0xf8);
}

s32 ** fn_80043C44(s32 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        dtor_80026A40((s8 *) ((s8 *)arg0 + 0xfc), (s16) (-1));
        fn_80190550((s32 **) (arg0), (s16) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s32 **) (arg0);
}

s32 fn_80043CB0(void) {
    return (s32) (7);
}

s32 fn_80043CB8(s32 arg0, u16 arg1) {
    return (s32) ((arg1 - 7) == 0);
}

s8 * fn_80043CCC(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_80043F9C((s8 *) (arg0), (s16) (0));
        if (arg1 > 0) {
            fn_80027B74((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

s8 * dtor_80043D28(s8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        __dt__Q44nw4r2ut6detail12LinkListImplFv((s8 *) (arg0), (s32) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) ((s32) arg0));
        }
    }
    return (s8 *) (arg0);
}

void fn_80043EE4(s8 *arg0, s32 arg1) {
    fn_80043A68((s32) ((s32) (arg0 + 0x14)), (s32) (arg1));
}

s32 fn_800443B4(void) {
    return (s32) (fn_800443B8());
}

void fn_80043A68(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = (s32) (fn_80039C9C((s32) (arg0)));
    fn_80043AB4((s32) (arg0), (s32 *) (&sp8), (s32) (arg1));
}

s32 fn_80043B10(s32 arg0) {
    if (arg0 == 0) {
        fn_801A9384((s32) &lbl_8034909C, 0x233, (s32) &lbl_80349078);
    }
    return (s32) (arg0 + 0xFC);
}

#pragma dont_inline on
// G3dObj::GetTypeName
const char * fn_8004384C(nw4r::g3d::G3dObj *obj) {
    nw4r::g3d::G3dObj::TypeObj type = obj->GetTypeObj();
    return (const char *) fn_800310DC((s32 *) (&type));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80043BE0(s8 *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80043C3C((s32 *) ((s32) arg0)));
    if (temp_r3 != 0) {
        ((void (*)(s32, s32)) temp_r3)((s32) fn_80043814((s8 *) (arg0)), arg1);
    }
}
#pragma dont_inline reset

} // extern "C"
