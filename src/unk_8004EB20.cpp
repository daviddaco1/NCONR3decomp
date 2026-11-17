#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_800503C0_arg0 { s32 f_0; u8 pad_4[0x8]; s8 * f_C; };
extern u8 lbl_80390580[];
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049EBD0[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
void fn_8004EDA4(s32 arg0);
void fn_8004F380(s8 *arg0);
void fn_8004F610(s32 arg0);
void fn_8004F9CC(s32 arg0);
void fn_8004FDE8(s32 arg0);
s32 fn_800503C0(S_fn_800503C0_arg0 *arg0);
void fn_800504F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800504F8(void);
void fn_800504FC(f32 farg0, f32 farg1, s32 arg2);
void fn_8005050C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80050534(f32 farg0, f32 farg1, f32 farg2);
s8 * fn_8005E564(s8 *arg0, u32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
void fn_8017776C(s32 arg0);
void fn_80201F08(s8 *arg0, s8 *arg1, s8 *arg2);

void fn_8004EDA4(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_800504F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_80201F08((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1), (s8 *) ((s8 *) arg2));
}

void fn_800504F8(void) {
}

void fn_800504FC(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8005050C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80050534(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8004F380(s8 *arg0) {
    s32 temp_r3_2;

    if (((s32) M2C_FIELD(arg0, s32 *, 4) != 0) && (((((s32) ((M2C_FIELD(arg0, s32 *, 0)) & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (((s32) ((M2C_FIELD(arg0, s32 *, 0)) & 0x800000) == 0) || ((((M2C_FIELD(arg0, s8 **, 0xC)) == NULL) != 0)) || (fn_800609D8((s8 *) ((M2C_FIELD(arg0, s8 **, 0xC)))) != 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x2000) != 0) || (fn_8005E7D4((s32) (0), (s32) (1)) == 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x01000000) == 0) || ((s8 *) M2C_FIELD(arg0, s8 **, 0xC) == NULL) || (fn_800503C0((S_fn_800503C0_arg0 *) (arg0)) != 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x3000) != 0) || ((s32) ((*(s32 *) &lbl_80390580) & 0x80) == 0))) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (7));
        temp_r3_2 = (s32) (M2C_FIELD(arg0, s32 *, 0));
        if ((s32) (temp_r3_2 & 0x40) != 0) {
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_8004F610((s32) ((s32) arg0));
        } else if ((s32) (temp_r3_2 & 0x80) != 0) {
            GXLoadTexObj((s32) (M2C_FIELD(arg0, s32 *, 0x10)), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_8004F9CC((s32) ((s32) arg0));
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            fn_8004FDE8((s32) ((s32) arg0));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

#pragma opt_loop_invariants off
#pragma dont_inline on
s32 fn_800503C0(S_fn_800503C0_arg0 *arg0) {
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
