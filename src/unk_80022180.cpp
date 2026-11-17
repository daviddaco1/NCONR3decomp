#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80022180_arg3 { s32 f_0; s32 f_4; s32 f_8; s32 f_C; s32 f_10; u8 pad_14[0xC]; f32 f_20; f32 f_24; f32 f_28; f32 f_2C; f32 f_30; s32 f_34; s32 f_38; s32 f_3C; f32 f_40; f32 f_44; f32 f_48; s32 f_4C; s32 f_50; f32 f_54; f32 f_58; f32 f_5C; s32 f_60; };
extern s32 lbl_8049D63C;
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049E758[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 fn_80019E14(s32 arg0, s32 arg1);
s8 * fn_80022180(s8 *arg0, s32 arg1, s32 arg2, S_fn_80022180_arg3 *arg3);
void fn_8002235C(s32 arg0);
s32 fn_80022360(s8 *arg0, s32 arg1);
void fn_80022C18(s8 *arg0);
void fn_80022E90(s32 arg0);
void fn_80023304(s32 arg0);
void fn_80023654(s32 arg0);
s32 fn_80023C00(s8 *arg0);
void fn_80023E04(void);
void fn_80023E08(f32 farg0, f32 farg1, s32 arg2);
void fn_80023E18(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80023E40(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8002235C(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_80022C18(s8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r4;
    s8 *temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0));
        if (((s32) (temp_r4 & 0x20000000) == 0) && (((s32) (temp_r4 & 0x40) == 0) || ((s32) lbl_8049D6B0 != 0)) && (((s32) (temp_r4 & 0x800000) == 0) || (temp_r3 = M2C_FIELD(arg0, s8 **, 0x10), ((temp_r3 == NULL) != 0)) || (fn_800609D8((s8 *) (temp_r3)) != 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x2000) != 0) || (fn_8005E7D4((s32) (0), (s32) (1)) == 0)) && (((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x01000000) == 0) || ((s8 *) M2C_FIELD(arg0, s8 **, 0x10) == NULL) || (fn_80023C00((s8 *) (arg0)) != 0))) {
            fn_800169F4((s32) (0));
            fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 0)), (s32) (6));
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
                fn_80022E90((s32) ((s32) arg0));
            } else if ((s32) (temp_r3_2 & 0x80) != 0) {
                GXLoadTexObj((s32) (M2C_FIELD(arg0, s32 *, 0x14)), (s32) (0));
                GXClearVtxDesc();
                GXSetVtxDesc((s32) (9), (s32) (1));
                GXSetVtxDesc((s32) (0xB), (s32) (1));
                GXSetVtxDesc((s32) (0xD), (s32) (1));
                GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
                GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
                GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
                fn_80023304((s32) ((s32) arg0));
            } else {
                GXClearVtxDesc();
                GXSetVtxDesc((s32) (9), (s32) (1));
                GXSetVtxDesc((s32) (0xB), (s32) (1));
                GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
                GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
                fn_80023654((s32) ((s32) arg0));
            }
            fn_80016A44((s32) (0));
            fn_80016A94((s32) (0));
        }
    }
}

void fn_80023E04(void) {
}

void fn_80023E08(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80023E18(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80023E40(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
s8 * fn_80022180(s8 *arg0, s32 arg1, s32 arg2, S_fn_80022180_arg3 *arg3) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_80022360), (M2C_UNK **) (lbl_8049D63C)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x358));
    if (arg0 != NULL) {
        M2C_FIELD(temp_r3, s8 **, 0x10) = (s8 *) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x140));
    }
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) ((s32) arg3->f_0);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) ((s32) arg3->f_4);
    if ((s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0x400000) == 0) {
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (fn_80019E14((s32) (arg1), (s32) (arg3->f_3C)));
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (fn_80019E14((s32) (arg2), (s32) (arg3->f_50)));
    }
    M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) lbl_8049E758[0];
    M2C_FIELD(temp_r3, s16 *, 0x20) = (s16) ((s16) arg3->f_8);
    M2C_FIELD(temp_r3, s16 *, 0x22) = (s16) ((s16) arg3->f_C);
    M2C_FIELD(temp_r3, s32 *, 0x28) = (s32) ((s32) arg3->f_10);
    M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) ((s32) arg3->f_38);
    fn_80018B0C((M2C_UNK *) (temp_r3 + 0x31C), lbl_8049E758[1] * (f32)arg3->f_40, lbl_8049E758[1] * (f32)arg3->f_44, lbl_8049E758[1] * (f32)arg3->f_48);
    fn_80018B0C((M2C_UNK *) (temp_r3 + 0x328), lbl_8049E758[1] * (f32)arg3->f_54, lbl_8049E758[1] * (f32)arg3->f_58, lbl_8049E758[1] * (f32)arg3->f_5C);
    M2C_FIELD(temp_r3, f32 *, 0x334) = (f32) arg3->f_20;
    M2C_FIELD(temp_r3, f32 *, 0x338) = (f32) arg3->f_24;
    M2C_FIELD(temp_r3, f32 *, 0x33C) = (f32) (lbl_8049E758[1] * (f32)arg3->f_28);
    M2C_FIELD(temp_r3, f32 *, 0x340) = (f32) (lbl_8049E758[1] * (f32)arg3->f_2C);
    M2C_FIELD(temp_r3, f32 *, 0x344) = (f32) lbl_8049E758[2];
    M2C_FIELD(temp_r3, f32 *, 0x348) = (f32) (lbl_8049E758[1] * (f32)arg3->f_30);
    M2C_FIELD(temp_r3, s32 *, 0x34C) = (s32) ((s32) arg3->f_34);
    M2C_FIELD(temp_r3, s32 *, 0x350) = (s32) ((s32) arg3->f_4C);
    M2C_FIELD(temp_r3, s32 *, 0x354) = (s32) ((s32) arg3->f_60);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x34C) > 0x20) {
        M2C_FIELD(temp_r3, s32 *, 0x34C) = (s32) (0x20);
    }
    if ((fn_8010E90C((u32) (6U), (s32) (M2C_FIELD(temp_r3, s32 *, 8)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_8002235C((s32) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}
#pragma dont_inline reset

} // extern "C"
