#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_8001C31C_arg0 {
    s32 f_0;
    u8 pad_4[0x4];
    s32 f_8;
    u8 pad_C[0x10];
    s8 * f_1C;
    u8 pad_20[0x8];
    s32 f_28;
    u8 pad_2C[0x4];
    s16 f_30;
};
struct S_fn_8001D488_arg0 {
    s32 f_0;
    u8 pad_4[0x10];
    s8 ** f_14;
    u8 pad_18[0x14];
    s16 f_2C;
    s16 f_2E;
    s16 f_30;
    s16 f_32;
    u8 pad_34[0x2];
    s16 f_36;
    u8 pad_38[0xC];
    f32 f_44;
    f32 f_48;
    s32 f_4C;
};
extern u8 lbl_803465F8[];
extern u8 lbl_8034661C[];
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049E6B8[];

f32 FrSqrt__Q24nw4r4mathFf(f32 farg0);
void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
M2C_UNK fn_800169F4(s32 arg0_x);
M2C_UNK fn_80016A44(s32 arg0_x);
s32 fn_80016A94(s32 arg0);
M2C_UNK fn_80018B8C(s32 arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_8001C31C(S_fn_8001C31C_arg0 *arg0);
s32 fn_8001C6F4(s8 *arg0);
s32 fn_8001CF04(s8 *arg0);
s32 fn_8001D488(s8 *arg0);
void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2);
void fn_8001D9AC(s32 arg0);
void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8001D9D4(s32 arg0, s32 arg1);
void fn_8001DA20(void);
void fn_8001DA4C(void);
void fn_8001DA50(f32 farg0, f32 farg1, s32 arg2);
void fn_8001DA60(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001DA88(f32 farg0, f32 farg1, f32 farg2);
f32 fn_8001DA9C(f32 farg0);
s32 fn_80028FD4(s32 arg0);
s32 fn_80029024(s32 *arg0);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 * fn_80122E1C(s32 arg0);
void fn_801A9418(s32 arg0, ...);
f32 PSVECSquareDistance(s32 arg0, s32 arg1);

void fn_8001D9A4(s32 arg0, s32 arg1, s8 *arg2) {
    fn_80019D38((s8 *) ((s8 *) arg0), (s8 *) ((s8 *) arg1), (s8 *) (M2C_FIELD(arg2, s8 **, 4)));
}

void fn_8001D9AC(s32 arg0) {
    fn_80028FD4((s32) (fn_80029024((s32 *) ((s32 *) arg0))));
}

void fn_8001D9D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8001DA20();
}

void fn_8001D9D4(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_80018B8C((s32) (arg1)));
    PSVECSquareDistance((s32) (fn_80018B8C((s32) (arg0))), (s32) (temp_r31));
}

void fn_8001DA4C(void) {
}

void fn_8001DA50(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8001DA60(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8001DA88(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
f32 fn_8001DA9C(f32 farg0) {
    if (!(farg0 >= lbl_8049E6B8[1])) {
        fn_801A9418((s32) &lbl_8034661C, 0x273, &lbl_803465F8);
    }
    if (farg0 <= lbl_8049E6B8[1]) {
        M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
        return lbl_8049E6B8[1];
    }
    M2C_ERROR(/* unknown instruction: psq_lx $f31, $r1, $r0, 0x0, qr0 */);
    return farg0 * FrSqrt__Q24nw4r4mathFf(farg0);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_8001C31C(S_fn_8001C31C_arg0 *arg0) {    s32 temp_r4_2;

    if ((((s32) ((arg0->f_0) & 0x40) == 0) || ((s32) lbl_8049D6B0 != 0)) && (((s32) ((arg0->f_0) & 0x100000) == 0) || ((((arg0->f_1C) == NULL) != 0)) || (fn_800609D8((s8 *) ((s8 *) ((arg0->f_1C)))) != 0)) && (((s32) (arg0->f_0 & 0x2000) != 0) || (fn_8005E7D4((s32) ((s32) (0)), (s32) ((s32) (1))) == 0)) && ((s32) arg0->f_8 != 0)) {
        if ((s32) (arg0->f_0 & 0x01000000) != 0) {
            if ((s16) arg0->f_30 < 4) {
                return;
            }
            goto block_12;
        }
        if ((s16) arg0->f_30 >= 2) {
block_12:
            fn_800169F4((s32) ((s32) (0)));
            if (((s32) ((arg0->f_0) & 0x40) != 0) && ((s32) ((arg0->f_0) & 0x04000000) != 0)) {
                fn_800169F4((s32) ((s32) (1)));
            }
            fn_800163E4((s32) ((s32) (arg0->f_0)), (s32) ((s32) (4)));
            temp_r4_2 = (s32) ((s32) (arg0->f_0 & 0x40));
            if ((temp_r4_2 != 0) && ((s32) (arg0->f_0 & 0x04000000) != 0)) {
                GXLoadTexObj((s32) ((s32) (arg0->f_28)), (s32) ((s32) (0)));
                if ((s32) (arg0->f_0 & 0x20000000) == 0) {
                    GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (1)));
                } else {
                    GXLoadTexObj((s32) ((s32) ((s8 *)fn_80122E1C((s32) ((s32) (0x800001))) + 4)), (s32) ((s32) (1)));
                }
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xE)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xE)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                fn_8001C6F4((s8 *) ((s8 *) (arg0)));
            } else if (temp_r4_2 != 0) {
                if ((s32) (arg0->f_0 & 0x20000000) == 0) {
                    GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (0)));
                } else {
                    GXLoadTexObj((s32) ((s32) ((s8 *)fn_80122E1C((s32) ((s32) (0x800001))) + 4)), (s32) ((s32) (0)));
                }
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                fn_8001C6F4((s8 *) ((s8 *) (arg0)));
            } else if ((s32) (arg0->f_0 & 0x80) != 0) {
                GXLoadTexObj((s32) ((s32) (arg0->f_28)), (s32) ((s32) (0)));
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                fn_8001CF04((s8 *) ((s8 *) (arg0)));
            } else {
                GXClearVtxDesc();
                GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
                GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
                GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
                fn_8001D488((s8 *) ((S_fn_8001D488_arg0 *) (arg0)));
            }
            fn_80016A44((s32) ((s32) (0)));
            if (((s32) ((arg0->f_0) & 0x40) != 0) && ((s32) ((arg0->f_0) & 0x04000000) != 0)) {
                fn_80016A44((s32) ((s32) (1)));
            }
            fn_80016A94((s32) ((s32) (0)));
        }
    }
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
