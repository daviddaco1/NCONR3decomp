#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct S_fn_8003F794_arg1 {
    u32 f_0;
    u8 pad_4[0x24];
    u8 f_28;
    u8 f_29;
    u8 f_2A;
    u8 f_2B;
};
struct S_fn_8003F794_temp_r3_2 {
    u8 f_0;
    u8 f_1;
    u8 f_2;
    u8 f_3;
};
struct SK_fn_8003F5C8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };

__declspec(section ".sdata2") extern const f32 lbl_8049E978[];

s32 GetAmbLightObj__Q34nw4r3g3d8LightSetFv(s8 *arg0);
s32 GetLightObj__Q34nw4r3g3d8LightSetFUl(s8 *arg0, u32 arg1);
void GetLightSet__Q34nw4r3g3d7ScnRootFi(s32 arg0, s32 arg1, s32 arg2);
s32 SelectAmbLightObj__Q34nw4r3g3d8LightSetFi(s8 *arg0, s32 arg1);
s32 fn_8002ADF8(s8 *arg0);
void fn_8002B044(s8 *arg0, s8 *arg1);
void fn_80030E80(s32 *arg0, s32 *arg1);
M2C_UNK fn_800389F4(void);
s32 fn_80039EE8(M2C_UNK *arg0);
u32 fn_80039F10(u16 *arg0);
s32 fn_80039F18(s32 *arg0);
s32 fn_80039F2C(s32 arg0);
s32 fn_8003F5C8(s32 arg0, s32 arg1);
s32 fn_8003F638(s32 *arg0, s8 *arg1);
s32 fn_8003F794(u32 arg0, S_fn_8003F794_arg1 *arg1);
s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003F8A0(s32 arg0, s8 *arg1);
s32 fn_8003F934(s32 *arg0, s8 *arg1);
s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2);
s32 fn_8003FADC(s32 arg0, s8 *arg1);
s32 fn_8003FB78(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_8003FBDC(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1);
s32 fn_8003FC9C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, s32 arg5, f32 farg1, f32 farg2);
s32 fn_8003FD48(s8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 fn_8003FDC0(s32 *arg0, s32 arg1);
void fn_8003FDF0(s32 *arg0);
void fn_8003FE00(s32 *arg0);
void fn_8003FE10(s32 *arg0);
void fn_8003FE20(s32 *arg0);
void fn_8003FE30(s32 *arg0);
void fn_8003FE40(s32 *arg0);
s32 fn_8003FE50(s8 *arg0);
s32 fn_8003FE58(s32 *arg0);
s32 fn_8003FE6C(s32 *arg0);
s32 fn_8003FE80(s32 *arg0);
u32 fn_8003FE94(s32 *arg0);
u32 fn_8003FEEC(s32 *arg0);
void fn_801F476C(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3);
void fn_801F47DC(s32 arg0, f32 *arg1, f32 *arg2, f32 *arg3);
M2C_UNK fn_801F484C(s32 arg0, s32 arg1);

s32 fn_8003F8A0(s32 arg0, s8 *arg1) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F4()))), (s32) (arg0));
    temp_r3 = (s32) (GetAmbLightObj__Q34nw4r3g3d8LightSetFv((s8 *) (&sp8)));
    if ((temp_r3 != 0) && ((u32) M2C_FIELD(arg1, u32 *, 0) == 3U)) {
        M2C_FIELD(temp_r3, u8 *, 0) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0x28));
        M2C_FIELD(temp_r3, u8 *, 1) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0x29));
        M2C_FIELD(temp_r3, u8 *, 2) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0x2A));
        M2C_FIELD(temp_r3, u8 *, 3) = (u8) ((u8) M2C_FIELD(arg1, u8 *, 0x2B));
        return (s32) (1);
    }
    return (s32) (0);
}

s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F4()))), (s32) (arg0));
    temp_r3 = (s32) (GetLightObj__Q34nw4r3g3d8LightSetFUl((s8 *) (&sp8), (u32) ((u32) arg1)));
    if (temp_r3 != 0) {
        return (s32) (fn_8003F934((s32 *) ((s32 *) temp_r3), (s8 *) (arg2)));
    }
    *arg2 = 0xFFFF;
    return (s32) (0);
}

s32 fn_8003FADC(s32 arg0, s8 *arg1) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F4()))), (s32) (arg0));
    temp_r3 = (s32) (GetAmbLightObj__Q34nw4r3g3d8LightSetFv((s8 *) (&sp8)));
    if (temp_r3 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (3);
        M2C_FIELD(arg1, u8 *, 0x28) = (u8) ((u8) M2C_FIELD(temp_r3, u8 *, 0));
        M2C_FIELD(arg1, u8 *, 0x29) = (u8) ((u8) M2C_FIELD(temp_r3, u8 *, 1));
        M2C_FIELD(arg1, u8 *, 0x2A) = (u8) ((u8) M2C_FIELD(temp_r3, u8 *, 2));
        M2C_FIELD(arg1, u8 *, 0x2B) = (u8) ((u8) M2C_FIELD(temp_r3, u8 *, 3));
        return (s32) (1);
    }
    M2C_FIELD(arg1, s32 *, 0) = (s32) (0xFFFF);
    return (s32) (0);
}

s32 fn_8003FB78(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_80030E80((s32 *) (arg0 + 0x28), (s32 *) ((s32 *) arg1));
    fn_8002B044((s8 *) (arg0 + 0x10), (s8 *) ((s8 *) arg2));
    return (s32) (1);
}

s32 fn_8003FDC0(s32 *arg0, s32 arg1) {
    *arg0 = 3;
    fn_80030E80((s32 *) ((s8 *)arg0 + 0x28), (s32 *) (arg1));
    return (s32) (1);
}

void fn_8003FDF0(s32 *arg0) {
    *arg0 |= 0x20;
}

void fn_8003FE00(s32 *arg0) {
    *arg0 &= 0xFFFFFFDF;
}

void fn_8003FE10(s32 *arg0) {
    *arg0 |= 0x10;
}

void fn_8003FE20(s32 *arg0) {
    *arg0 &= 0xFFFFFFEF;
}

void fn_8003FE30(s32 *arg0) {
    *arg0 &= 0xFFFFFFFB;
}

void fn_8003FE40(s32 *arg0) {
    *arg0 |= 4;
}

s32 fn_8003FE50(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8));
}

s32 fn_8003FE58(s32 *arg0) {
    return (s32) ((*arg0 & 0x20) == 0);
}

s32 fn_8003FE6C(s32 *arg0) {
    return (s32) ((*arg0 & 0x10) == 0);
}

s32 fn_8003FE80(s32 *arg0) {
    return (s32) ((*arg0 & 4) != 0);
}

u32 fn_8003FE94(s32 *arg0) {
    u32 var_r31;

    var_r31 = (u32) (0);
    if ((fn_8003FEEC((s32 *) (arg0)) == 0) && (fn_80039F18((s32 *) (arg0)) == 0)) {
        var_r31 = (u32) (1);
    }
    return (u32) (var_r31);
}

u32 fn_8003FEEC(s32 *arg0) {
    return (u32) ((*arg0 & 1) != 0);
}

s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F4()))), (s32) (arg0));
    temp_r3 = (s32) (GetLightObj__Q34nw4r3g3d8LightSetFUl((s8 *) (&sp8), (u32) ((u32) arg1)));
    if (temp_r3 != 0) {
        return (s32) (fn_8003F638((s32 *) ((s32 *) temp_r3), (s8 *) (arg2)));
    }
    return (s32) (0);
}

#pragma dont_inline on
s32 fn_8003F794(u32 arg0, S_fn_8003F794_arg1 *arg1) {
    u16 *temp_r3;
    S_fn_8003F794_temp_r3_2 *temp_r3_2;

    temp_r3 = (u16 *) (fn_80039F2C((s32) (fn_8002ADF8((s8 *) (fn_800389F4())))));
    if (arg0 < fn_80039F10((u16 *) (temp_r3))) {
        temp_r3_2 = (S_fn_8003F794_temp_r3_2 *) ((s8 *) fn_8003FE50((s8 *) (temp_r3)) + (arg0 * 4));
        if ((u32) arg1->f_0 == 3U) {
            temp_r3_2->f_0 = (u8) arg1->f_28;
            temp_r3_2->f_1 = (u8) arg1->f_29;
            temp_r3_2->f_2 = (u8) arg1->f_2A;
            temp_r3_2->f_3 = (u8) arg1->f_2B;
            return (s32) (1);
        }
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003FBDC(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_80030E80((s32 *) (arg0 + 0x28), (s32 *) ((s32 *) arg1));
    fn_8002B044((s8 *) (arg0 + 0x10), (s8 *) ((s8 *) arg2));
    fn_8002B044((s8 *) (arg0 + 0x1C), (s8 *) ((s8 *) arg3));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (arg4);
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (0);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8049E978[0];
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    M2C_ERROR(/* unknown instruction: psq_lx $f30, $r1, $r0, 0x0, qr0 */);
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003FD48(s8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_80030E80((s32 *) (arg0 + 0x28), (s32 *) ((s32 *) arg1));
    fn_8002B044((s8 *) (arg0 + 0x1C), (s8 *) ((s8 *) arg2));
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
    return (s32) (1);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003F5C8(s32 arg0, s32 arg1) {
    SK_fn_8003F5C8_8 sp8;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) ((s32) &sp8), (s32) (fn_8002ADF8((s8 *) (fn_800389F4()))), (s32) (arg0));
    if (fn_80039EE8((M2C_UNK *) (&sp8)) != 0) {
        return (s32) (SelectAmbLightObj__Q34nw4r3g3d8LightSetFi((s8 *) (&sp8), (s32) (arg1)));
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003F934(s32 *arg0, s8 *arg1) {
    if (fn_8003FEEC((s32 *) (arg0)) == 1) {
        M2C_FIELD(arg1, u32 *, 0) = (u32) (1U);
    } else if (fn_80039F18((s32 *) (arg0)) == 1U) {
        M2C_FIELD(arg1, u32 *, 0) = (u32) (2U);
    } else if (fn_8003FE94((s32 *) (arg0)) == 1) {
        M2C_FIELD(arg1, u32 *, 0) = (u32) (0U);
    } else {
        M2C_FIELD(arg1, u32 *, 0) = (u32) (0xFFFFU);
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 0) != 0xFFFFU) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (fn_8003FE80((s32 *) (arg0)));
        M2C_FIELD(arg1, s32 *, 8) = (s32) (fn_8003FE6C((s32 *) (arg0)));
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (fn_8003FE58((s32 *) (arg0)));
        M2C_FIELD(arg1, s32 *, 0x2C) = (s32) (0);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) lbl_8049E978[0];
        M2C_FIELD(arg1, s32 *, 0x34) = (s32) (0);
        M2C_FIELD(arg1, f32 *, 0x38) = (f32) lbl_8049E978[0];
        M2C_FIELD(arg1, f32 *, 0x3C) = (f32) lbl_8049E978[0];
        M2C_FIELD(arg1, f32 *, 0x40) = (f32) lbl_8049E978[1];
        fn_801F476C((s32) ((s32) arg0), (f32 *) (arg1 + 0x10), (f32 *) (arg1 + 0x14), (f32 *) (arg1 + 0x18));
        fn_801F47DC((s32) ((s32) arg0), (f32 *) (arg1 + 0x1C), (f32 *) (arg1 + 0x20), (f32 *) (arg1 + 0x24));
        fn_801F484C((s32) ((s32) arg0), (s32) ((s32) (arg1 + 0x28)));
        return (s32) (1);
    }
    return (s32) (0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8003FC9C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, s32 arg5, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (1);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_80030E80((s32 *) (arg0 + 0x28), (s32 *) ((s32 *) arg1));
    fn_8002B044((s8 *) (arg0 + 0x10), (s8 *) ((s8 *) arg2));
    fn_8002B044((s8 *) (arg0 + 0x1C), (s8 *) ((s8 *) arg3));
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg4);
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (arg5);
    M2C_FIELD(arg0, f32 *, 0x38) = farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = farg2;
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
