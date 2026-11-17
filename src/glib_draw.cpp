#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80019B10_arg1 {
    s32 f_0;
    u8 pad_4[0x18];
    s8 * f_1C;
    u8 pad_20[0x4];
    s32 f_24;
};

extern s32 lbl_8049D62C;
extern s32 lbl_8049D67C;
__declspec(section ".sdata2") extern const f32 lbl_8049E650[];

s32 fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80018C4C(u32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80018DAC(s8 *);
s32 fn_80018DBC(s8 *arg0, s32 arg1);
void fn_80019290(s8 *arg0);
void fn_80019B10(f32 *arg0, S_fn_80019B10_arg1 *arg1, s8 *arg2, f32 *arg3);
s32 fn_80019C10(s8 *arg0);
s32 fn_80019D1C(s8 *arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(s32 **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
void fn_80019DA8(void);
s32 fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_80019DC8(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80019DF0(f32 farg0, f32 farg1, f32 farg2);
void fn_80019E04(f32 farg0, f32 farg1, s32 arg2, s32 arg3);
s32 fn_80019E14(s32 arg0, s32 arg1);
s32 fn_80019E18(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8010F0E0(s32 *arg0);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
s32 fn_80181568(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_80018DAC(s8 *arg0) {
    if (arg0 != 0) {
        fn_80019290(arg0);
    }
}

s32 fn_80019C10(s8 *arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r31;
    s8 *temp_r5;
    s8 *var_r6;

    var_r31 = (s32) (1);
    var_r6 = (s8 *) (NULL);
    temp_r5 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x1C));
    if (((u32) M2C_FIELD(temp_r5, u32 *, 0x18) == 0xBU) && ((temp_r3 = M2C_FIELD(arg0, s32 *, 0), temp_r4 = temp_r3 & 0x08000000, ((temp_r4 == 0) == 0)) || ((s32) (temp_r3 & 0x10000000) != 0))) {
        if (temp_r4 != 0) {
            var_r6 = (s8 *) (fn_8005E564((s8 *) (temp_r5), (u32) (0xCU)));
        } else if ((s32) (temp_r3 & 0x10000000) != 0) {
            var_r6 = (s8 *) (fn_8005E564((s8 *) (temp_r5), (u32) (0xDU)));
        }
        if (var_r6 == NULL) {
            var_r31 = (s32) (0);
        }
        if ((var_r6 != NULL) && ((s32) (M2C_FIELD(var_r6, s32 *, 0) & 2) == 0)) {
            var_r31 = (s32) (0);
        }
        if ((var_r6 != NULL) && ((s32) (M2C_FIELD(var_r6, s32 *, 0) & 0x1000) != 0) && ((s32) (M2C_FIELD(var_r6, s32 *, 0x58) & 2) != 0)) {
            var_r31 = (s32) (0);
        }
        if ((var_r6 != NULL) && (fn_800609D8((s8 *) (var_r6)) == 0)) {
            var_r31 = (s32) (0);
        }
    } else {
        var_r31 = (s32) (1);
    }
    return (s32) (var_r31);
}

s32 fn_80019D1C(s8 *arg0) {
    if (arg0 == NULL) {
        return (s32) (-1);
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 4) + 0x64);
}

s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2) {
    M2C_FIELD(M2C_FIELD(arg2, s8 **, 8), s8 **, 4) = (s8 *) (arg1);
    M2C_FIELD(arg1, s8 **, 0) = (s8 *) (arg0);
    M2C_FIELD(arg1, s8 **, 4) = (s8 *) (arg2);
    M2C_FIELD(arg1, s8 **, 8) = (s8 *) ((s8 *) M2C_FIELD(arg2, s8 **, 8));
    M2C_FIELD(arg2, s8 **, 8) = (s8 *) (arg1);
    return (s8 *) (arg1);
}

void fn_80019D5C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (1);
    M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg0);
    M2C_FIELD(arg0, s8 **, 8) = (s8 *) (arg0);
}

s8 * fn_80019D70(s32 **arg0) {
    s32 *temp_r4;

    temp_r4 = (s32 *) (*arg0);
    if (temp_r4 == NULL) {
        return (s8 *) (NULL);
    }
    *arg0 = (s32 *) *temp_r4;
    return (s8 *) ((s8 *)temp_r4 + 4);
}

void fn_80019D94(M2C_UNK **arg0, s32 arg1) {
    s32 *node = (s32 *)(arg1 - 4);
    *node = (s32)*arg0;
    *arg0 = (M2C_UNK *)node;
}

void fn_80019DA8(void) {
}

s32 fn_80019DAC(s8 *arg0, f32 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return (s32) ((s32) arg0);
}

void fn_80019DC8(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80019DF0(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

void fn_80019E04(f32 farg0, f32 farg1, s32 arg2, s32 arg3) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

s32 fn_80019E14(s32 arg0, s32 arg1) {
    return (s32) (fn_80181568((s8 *) ((s8 *) arg0), (s32) (arg1)));
}

s32 fn_80019E18(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_80181568((s8 *) ((s8 *) arg1), (s32) (fn_8010F0E0((s32 *) ((s32 *) arg0)))));
}

#pragma dont_inline on
void fn_80019B10(f32 *arg0, S_fn_80019B10_arg1 *arg1, s8 *arg2, f32 *arg3) {    s32 var_r3;
    s32 var_r4;
    if ((s32) (arg1->f_0 & 0x40000000) != 0) {
        fn_80019DAC((s8 *) (arg0), (f32 *) (arg2 + 0x2C));
        return;
    }
    if ((s32) (arg1->f_0 & 0x800000) != 0) {
        fn_80018AF8((s32) ((s32) arg0), (s32) ((s32) arg3), (s32) ((s32) (arg2 + 0x20)));
        return;
    }
    if ((s32) (arg1->f_0 & 0x40000) != 0) {
        if ((s32) (arg1->f_0 & 0x80000) != 0) {
            var_r3 = (s32) (fn_80019E18((s32) (M2C_FIELD(arg1->f_1C, s32 *, 0x3780)), (s32) (arg1->f_24), (s32) (M2C_FIELD(arg2, s32 *, 0x14))));
        } else {
            var_r3 = (s32) (fn_80019E14((s32) (arg1->f_24), (s32) (M2C_FIELD(arg2, s32 *, 0x14))));
        }
        var_r4 = (s32) (var_r3);
        if (var_r3 == 0) {
            var_r4 = (s32) (M2C_FIELD(arg2, s32 *, 0x1C));
        } else {
            M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (var_r3);
        }
    } else {
        var_r4 = (s32) (M2C_FIELD(arg2, s32 *, 0x1C));
    }
    fn_80018AF8((s32) ((s32) arg0), (s32) (var_r4), (s32) ((s32) (arg2 + 0x20)));
    if ((s32) (arg1->f_0 & 0x20000) != 0) {
        arg1->f_0 = (s32) ((arg1->f_0 & 0xFFFDFFFF) | 0x40000000);
        fn_80019DAC((s8 *) (arg2 + 0x2C), (f32 *) (arg0));
    }
}
#pragma dont_inline reset

#pragma dont_inline on
s8 * fn_80018C4C(u32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r3;
    s8 *temp_r3_2;
    u32 var_r28;

    temp_r3 = (s32) (fn_80177280((s32) (arg3), (M2C_UNK *) ((s32 *) fn_80018DBC), (M2C_UNK **) (lbl_8049D62C)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x60));
    fn_80019D5C((s8 *) (temp_r3 + 0xC));
    for (var_r28 = 0; var_r28 < arg0; var_r28++) {
        temp_r3_2 = (s8 *) (fn_80019D70((s32 **) (lbl_8049D67C)));
        if (temp_r3_2 != NULL) {
            memset((s32) ((s32) (temp_r3_2 + 4)), (s32) (0), (s32) (0x3C));
            fn_80019D38((s8 *) (temp_r3_2), (s8 *) (temp_r3_2 + 4), (s8 *) (temp_r3 + 0xC));
            M2C_FIELD(temp_r3_2, s32 *, 0x10) = (s32) (1);
            M2C_FIELD(temp_r3_2, f32 *, 0x3C) = 1.0f;
        }
    }
    M2C_FIELD(temp_r3, u32 *, 0x28) = (u32) (arg0);
    if (arg1 != NULL) {
        M2C_FIELD(temp_r3, s8 **, 0x1C) = (s8 *) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (fn_80019D1C((s8 *) (arg1)));
    }
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg4);
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) (0x10);
    M2C_FIELD(temp_r3, f32 *, 0x30) = 1.0f;
    M2C_FIELD(temp_r3, f32 *, 0x34) = 1.0f;
    M2C_FIELD(temp_r3, s16 *, 0x48) = (s16) (0);
    M2C_FIELD(temp_r3, s16 *, 0x4A) = (s16) (8);
    M2C_FIELD(temp_r3, f32 *, 0x4C) = 1.0f;
    if ((fn_8010E90C((u32) (1U), (s32) (M2C_FIELD(temp_r3, s32 *, 0x18)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_80018DAC((s8 *) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

} // extern "C"
