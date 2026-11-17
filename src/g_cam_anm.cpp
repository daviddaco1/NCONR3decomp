#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034BF70[];
extern u8 lbl_8034BF98[];
extern u8 lbl_8034BFB0[];
extern u8 lbl_8034BFD8[];
extern u8 lbl_80395328[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A0D0[];

s32 __construct_array(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad, s32 arg3_pad, s32 arg4_pad);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_8002AF5C(s32 arg0);
s32 * fn_80090A40(s32 arg0);
void fn_80090AD0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80090C24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80090CAC(s8 *arg0);
s32 fn_80090CC4(s8 *arg0);
void fn_80090CFC(s8 *arg0, s32 arg1);
void fn_80090D0C(s8 *arg0, f32 farg0);
void fn_80090D1C(s8 *arg0, s8 *arg1);
void fn_80091028(void);
s32 fn_80091048(s32 arg0);
s32 fn_8009107C(s32 arg0);
s32 fn_800910B0(s32 *arg0);
s32 fn_800910C0(s32 arg0, s32 arg1);
void fn_80091108(s32 arg0, s32 arg1);
void fn_8009110C(s32 *arg0, s32 *arg1);
s32 fn_80091118(s32 arg0, s32 arg1);
void fn_80091148(s32 *arg0, s32 *arg1);
void fn_80091154(s32 *arg0, s32 arg1);
void fn_8009115C(s32 *arg0, s32 arg1);
s32 * fn_80091164(s32 *arg0, s32 arg1);
s32 * fn_800911C8(s32 *arg0);
s32 * fn_800911FC(s32 *arg0, s32 arg1);
s32 fn_800914D8(void);
void fn_800914FC(s32 arg0, s32 arg1, s32 arg2);
void fn_80091588(s32 *arg0, s32 arg1);
s32 fn_800961EC(void);
M2C_UNK fn_80096228(s32 arg0_x);
void fn_80096328(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80090C24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 *temp_r3;

    if (arg0 != 0) {
        temp_r3 = (s32 *) (fn_80090A40((s32) (arg1)));
        if (temp_r3 != NULL) {
            fn_80090AD0((s8 *) ((s8 *) arg0), (s32) ((s32) ((s8 *)temp_r3 + 4)), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (arg6), (s32) (arg7));
        }
    }
}

void fn_80090CAC(s8 *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (0);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (0);
    }
}

s32 fn_80090CC4(s8 *arg0) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        return (s32) (0);
    }
    return (s32) ((M2C_FIELD(arg0, s32 *, 4) & 2) == 0);
}

void fn_80090CFC(s8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1);
    }
}

void fn_80090D0C(s8 *arg0, f32 farg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    }
}

void fn_80090D1C(s8 *arg0, s8 *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 8);
    }
}

s32 fn_80091048(s32 arg0) {
    fn_8009107C((s32) (arg0 + 4));
    return (s32) (arg0);
}

s32 fn_8009107C(s32 arg0) {
    fn_80016E44((s32) (arg0), (s32) (0));
    return (s32) (arg0);
}

s32 fn_800910B0(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_800910C0(s32 arg0, s32 arg1) {
    fn_8009110C((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    fn_80091108((s32) (arg0 + 4), (s32) (arg1 + 4));
    return (s32) (arg0);
}

void fn_80091108(s32 arg0, s32 arg1) {
}

void fn_8009110C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_80091118(s32 arg0, s32 arg1) {
    fn_80091148((s32 *) ((s32 *) arg0), (s32 *) ((s32 *) arg1));
    return (s32) (arg0);
}

void fn_80091148(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_80091154(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void fn_8009115C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 * fn_800911C8(s32 *arg0) {
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 8)));
    return (s32 *) (arg0);
}

s32 fn_800914D8(void) {
    return (s32) (fn_800961EC() + 0x350);
}

#pragma dont_inline on
s32 * fn_80091164(s32 *arg0, s32 arg1) {
    fn_80091154((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_8034BFD8, 0x28, (s32) &lbl_8034BFB0);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 * fn_800911FC(s32 *arg0, s32 arg1) {
    fn_8009115C((s32 *) (arg0), (s32) (arg1));
    if ((s32) (arg1 & 3) != 0) {
        fn_801A9384((s32) &lbl_8034BF98, 0x7D, (s32) &lbl_8034BF70);
    }
    return (s32 *) (arg0);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80091588(s32 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = (s32) (fn_800961EC());
    temp_r30 = (s32) (M2C_FIELD(arg0, s32 *, 0x2134));
    fn_80096228((s32) ((s32) arg0));
    memset((s32) ((s32) arg0), (s32) (0), (s32) (0x21BC));
    if (arg1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x2134) = (s32) (temp_r30);
    } else {
        M2C_FIELD(arg0, s32 *, 0x2134) = (s32) (arg1);
    }
    memset((s32) ((s32) arg0), (s32) (0x20), (s32) (0xF));
    M2C_FIELD(arg0, s32 *, 0x21B8) = (s32) (-1);
    fn_80096328((s32) (arg1));
    fn_80096228((s32) (temp_r31));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_80091028(void) {
    __construct_array((s32) (&lbl_80395328), (s32) (fn_80091048), (s32) (0), (s32) (8), (s32) (0x80));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800914FC(s32 arg0, s32 arg1, s32 arg2) {
    s8 *p = (s8 *) &lbl_80395728;
    M2C_FIELD(p, s32 *, 0xC98) = (s32) (0x3F);
    M2C_FIELD(p, s32 *, 0xC9C) = (s32) (2);
    M2C_FIELD(p, s32 *, 0xCA0) = (s32) (0xE10);
    M2C_FIELD(p, s32 *, 0xCA4) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCA8) = (s32) (0x1C20);
    M2C_FIELD(p, s32 *, 0xCAC) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCB0) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCBC) = (s32) (0);
    M2C_FIELD(p, s32 *, 0xCC0) = (s32) (0);
    M2C_FIELD(p, s32 *, 0xCB4) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCB8) = (s32) (1);
    M2C_FIELD(p, f32 *, 0xCC4) = 1.0f;
    M2C_FIELD(p, f32 *, 0xCC8) = 1.0f;
    M2C_FIELD(p, f32 *, 0xCCC) = 1.0f;
    M2C_FIELD(p, f32 *, 0xCD0) = 1.0f;
    M2C_FIELD(p, f32 *, 0xCD4) = 1.0f;
    M2C_FIELD(p, s32 *, 0xCE8) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCEC) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCF0) = (s32) (1);
    M2C_FIELD(p, s32 *, 0xCF4) = (s32) (1);
    memset((s32) ((s32) ((s8 *) &lbl_8039A0D0 + 0xC)), (s32) (0), (s32) (0x40));
}
#pragma dont_inline reset

} // extern "C"
