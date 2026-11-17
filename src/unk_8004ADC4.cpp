#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_8004ADC4_temp_r25 { u8 pad_0[0x3C]; s32 f_3C; f32 f_40; f32 f_44; f32 f_48; s32 f_4C; };
struct S_fn_8004ADC4_temp_r26 { u8 pad_0[0x20]; s32 f_20; u8 pad_24[0x1DD4]; s32 f_1DF8; };
struct S_fn_8004C048_arg0 { s32 f_0; u8 pad_4[0x8]; s8 * f_C; };
extern s32 lbl_8049D674;
__declspec(section ".sdata2") extern const f32 lbl_8049EB70[];

M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019E14(s32 arg0, s32 arg1);
s8 * fn_8004ADC4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8004AF98(s32 arg0);
s32 fn_8004AF9C(s8 *arg0, s32 arg1);
void fn_8004B2C0(s32 arg0);
void fn_8004B554(s32 arg0);
void fn_8004BB9C(s32 arg0);
s32 fn_8004C048(S_fn_8004C048_arg0 *arg0);
void fn_8004C17C(void);
void fn_8004C180(f32 farg0, f32 farg1);
void fn_8004C190(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_8004C1B8(f32 farg0, f32 farg1, f32 farg2);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8004AF98(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_8004B2C0(s32 arg0) {
}

void fn_8004B554(s32 arg0) {
}

void fn_8004BB9C(s32 arg0) {
}

void fn_8004C17C(void) {
}

void fn_8004C180(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8004C190(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8004C1B8(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
s8 * fn_8004ADC4(s32 arg0, s32 arg1, s8 *arg2) {
    S_fn_8004ADC4_temp_r26 *temp_r26;
    S_fn_8004ADC4_temp_r25 *temp_r25;
    s32 var_r24;
    s32 temp_r3;
    f32 temp_f1;
    f32 scale;
    s32 temp_r4;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_8004AF9C), (M2C_UNK **) (lbl_8049D674)));
    if (temp_r3 == 0) {
        M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x1E28));
    if (arg0 != 0) {
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg0);
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0));
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 4));
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x400000) == 0) {
        for (var_r24 = 0; var_r24 < (s32) M2C_FIELD(arg2, s32 *, 8); var_r24++) {
            temp_r25 = (S_fn_8004ADC4_temp_r25 *) ((S_fn_8004ADC4_temp_r25 *) (arg2 + var_r24 * 0x14));
            temp_r4 = (s32) (temp_r25->f_3C);
            if (temp_r4 < 0) {
                break;
            }
            temp_r26 = (S_fn_8004ADC4_temp_r26 *) ((S_fn_8004ADC4_temp_r26 *) (temp_r3 + var_r24 * 4));
            temp_r26->f_20 = fn_80019E14((s32) (arg1), (s32) (temp_r4));
            fn_80018B0C((M2C_UNK *) (temp_r3 + var_r24 * 0xC + 0x1D6C), lbl_8049EB70[0] * temp_r25->f_40, lbl_8049EB70[0] * temp_r25->f_44, lbl_8049EB70[0] * temp_r25->f_48);
            temp_r26->f_1DF8 = (s32) temp_r25->f_4C;
        }
    }
    M2C_FIELD(temp_r3, f32 *, 0x54) = (f32) lbl_8049EB70[1];
    M2C_FIELD(temp_r3, s16 *, 0x48) = (s16) ((s16) M2C_FIELD(arg2, s32 *, 0x10));
    M2C_FIELD(temp_r3, s16 *, 0x4A) = (s16) ((s16) M2C_FIELD(arg2, s32 *, 0x14));
    M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0x18));
    M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0x38));
    M2C_FIELD(temp_r3, f32 *, 0x1DE4) = (f32) M2C_FIELD(arg2, f32 *, 0x28);
    M2C_FIELD(temp_r3, f32 *, 0x1DE8) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
    temp_f1 = M2C_FIELD(arg2, f32 *, 0x30);
    scale = lbl_8049EB70[0];
    M2C_FIELD(temp_r3, f32 *, 0x1DEC) = scale * temp_f1;
    M2C_FIELD(temp_r3, f32 *, 0x1DF0) = scale * M2C_FIELD(arg2, f32 *, 0x34);
    M2C_FIELD(temp_r3, f32 *, 0x1DF4) = (f32) lbl_8049EB70[2];
    M2C_FIELD(temp_r3, s32 *, 0x1E20) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r3, s32 *, 0x1E24) = (s32) ((s32) M2C_FIELD(arg2, s32 *, 0xC));
    if ((fn_8010E90C((u32) (0x15U), (s32) (M2C_FIELD(temp_r3, s32 *, 8)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_8004AF98((s32) (temp_r3));
    }
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

#pragma opt_loop_invariants off
#pragma dont_inline on
s32 fn_8004C048(S_fn_8004C048_arg0 *arg0) {
    s32 temp_r3;
    s8 *temp_r4;
    s32 var_r31;
    s32 temp_r5;
    s8 *var_r3;
    s8 *var_r6;

    var_r31 = (s32) (1);
    var_r6 = (s8 *) (NULL);
    temp_r4 = (s8 *) (arg0->f_C);
    if (temp_r4 == NULL) {
        return (s32) (0);
    }
    if (((u32) M2C_FIELD(temp_r4, u32 *, 0x18) == 0xBU) && ((temp_r3 = arg0->f_0, temp_r5 = temp_r3 & 0x100000, ((temp_r5 == 0) != 0)) || ((s32) (temp_r3 & 0x200000) == 0))) {
        if (temp_r5 != 0) {
            var_r6 = (s8 *) (fn_8005E564((s8 *) (temp_r4), (u32) (0xCU)));
        } else if ((s32) (temp_r3 & 0x200000) != 0) {
            var_r6 = (s8 *) (fn_8005E564((s8 *) (temp_r4), (u32) (0xDU)));
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
        var_r3 = (s8 *) (M2C_FIELD(M2C_FIELD(temp_r4, s8 **, 0x3908), s8 **, 8));
        while (var_r3 != NULL) {
            var_r31 = (s32) (0);
            var_r3 = (s8 *) (M2C_FIELD(var_r3, s8 **, 8));
        }
    }
    return (s32) (var_r31);
}
#pragma dont_inline reset
#pragma opt_loop_invariants reset

} // extern "C"
