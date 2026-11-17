#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_80045114_arg4 {
    u8 pad_0[0x1C];
    s32 f_1C;
    u8 pad_20[0x1250];
    u8 f_1270;
    u8 f_1271;
    u8 f_1272;
    u8 f_1273;
    u8 f_1274;
    u8 f_1275;
    u8 f_1276;
    u8 f_1277;
    u8 pad_1278[0x28];
    f32 f_12A0;
    f32 f_12A4;
    f32 f_12A8;
    f32 f_12AC;
};
struct SK_fn_800452C8_8 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };

extern s32 **lbl_8049D65C;
extern s32 lbl_8049D6B0;
extern f32 lbl_8049EA68;

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4(s32 arg0_pad);
s32 fn_80016A44(s32 arg0_pad);
void fn_80016A94(s32 arg0);
s32 fn_80016C30(s32 arg0, s32 arg1);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, f32 farg0_x);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80020D20(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s8 * fn_80044854(s32 arg0, s32 arg1, s32 arg2);
void fn_80044904(s32 arg0);
s32 fn_80044908(s8 *arg0, s32 arg1);
s32 fn_80044C58(s8 *arg0, s8 *arg1);
s32 fn_80045094(s8 *arg0);
void fn_80045114(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, S_fn_80045114_arg4 *arg4, s32 arg5);
void fn_800452C8(f32 *arg0, f32 *arg1, s8 *arg2, s32 arg3, f32 farg0, f32 farg1);
void fn_80045374(s8 *arg0);
void fn_8004557C(s32 arg0);
void fn_800459BC(s32 arg0);
void fn_80045DB0(s32 arg0);
void fn_800460B8(void);
void fn_800460BC(f32 farg0, f32 farg1, s32 arg2);
void fn_800460CC(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_800460F4(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_80044854(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_80044908), (M2C_UNK **) (lbl_8049D65C)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x12BC));
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg1);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg2);
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg0);
    M2C_FIELD(temp_r3, f32 *, 0x1294) = (f32) lbl_8049EA68;
    if ((fn_8010E90C((u32) (0xEU), (s32) (M2C_FIELD(temp_r3, s32 *, 0xC)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_80044904((s32) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}

void fn_80044904(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

s32 fn_80044C58(s8 *arg0, s8 *arg1) {
    if ((M2C_FIELD(arg0, f32 *, 0) != M2C_FIELD(arg1, f32 *, 0)) || (M2C_FIELD(arg0, f32 *, 4) != M2C_FIELD(arg1, f32 *, 4)) || (M2C_FIELD(arg0, f32 *, 8) != M2C_FIELD(arg1, f32 *, 8))) {
        return (s32) (0);
    }
    return (s32) (1);
}

void fn_80045374(s8 *arg0) {
    s32 temp_r3;
    s32 temp_r4;

    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((temp_r4 = M2C_FIELD(arg0, s32 *, 4), (((s32) (temp_r4 & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) (M2C_FIELD(arg0, s32 *, 0x10)), (s32) (temp_r4)) == 0)) {
        fn_800169F4((s32) (0));
        fn_800163E4((s32) (M2C_FIELD(arg0, s32 *, 4)), (s32) (0xE));
        temp_r3 = (s32) (M2C_FIELD(arg0, s32 *, 4));
        if ((s32) (temp_r3 & 0x40) != 0) {
            GXLoadTexObj((s32) (lbl_8049D6B0 + 4), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_8004557C((s32) ((s32) arg0));
        } else if ((s32) (temp_r3 & 0x80) != 0) {
            GXLoadTexObj((s32) (M2C_FIELD(arg0, s32 *, 0x18)), (s32) (0));
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxDesc((s32) (0xD), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xD), (s32) (1), (s32) (4), (s32) (0));
            fn_800459BC((s32) ((s32) arg0));
        } else {
            GXClearVtxDesc();
            GXSetVtxDesc((s32) (9), (s32) (1));
            GXSetVtxDesc((s32) (0xB), (s32) (1));
            GXSetVtxAttrFmt((s32) (0), (s32) (9), (s32) (1), (s32) (4), (s32) (0));
            GXSetVtxAttrFmt((s32) (0), (s32) (0xB), (s32) (1), (s32) (5), (s32) (0));
            fn_80045DB0((s32) ((s32) arg0));
        }
        fn_80016A44((s32) (0));
        fn_80016A94((s32) (0));
    }
}

void fn_800460B8(void) {
}

void fn_800460BC(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_800460CC(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_800460F4(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_80045114(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, S_fn_80045114_arg4 *arg4, s32 arg5) {

    *arg0 = (arg4->f_12A0 - arg4->f_12A4) / (f32) (arg4->f_1C - 1);
    *arg1 = (arg4->f_12A8 - arg4->f_12AC) / (f32) (arg4->f_1C - 1);
    fn_80020D20((M2C_UNK *) ((s32 *) arg2), (f32) arg4->f_1270, (f32) arg4->f_1271, (f32) arg4->f_1272, (f32) arg4->f_1273);
    fn_80020D20((M2C_UNK *) ((s32 *) arg3), (f32) (arg4->f_1270 - arg4->f_1274) / (f32) (arg5 - 1), (f32) (arg4->f_1271 - arg4->f_1275) / (f32) (arg5 - 1), (f32) (arg4->f_1272 - arg4->f_1276) / (f32) (arg5 - 1), (f32) (arg4->f_1273 - arg4->f_1277) / (f32) (arg5 - 1));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_800452C8(f32 *arg0, f32 *arg1, s8 *arg2, s32 arg3, f32 farg0, f32 farg1) {
    SK_fn_800452C8_8 sp8;
    s32 temp_r31;
    s8 *temp_r30;
    s8 *temp_r5;

    temp_r31 = (s32) (arg3 * 0xC);
    temp_r5 = (s8 *) (arg2 + temp_r31);
    temp_r30 = (s8 *) (temp_r5 + 0xC40);
    fn_8001B8B8((s32) ((s32) &sp8), (s32) ((s32) temp_r30), (s32) ((s32) (temp_r5 + 0x40)));
    fn_8001B8B0((s32) ((s32) &sp8), (s32) ((s32) &sp8));
    fn_80018B08((s32) ((s32) arg0), (s32) ((s32) (arg2 + temp_r31 + 0x640)), farg1);
    fn_80018B00((s32) ((s32) arg0), (s32) ((s32) temp_r30), (s32) ((s32) arg0));
    fn_80018B08((s32) ((s32) arg1), (s32) ((s32) &sp8), farg0);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_80045094(s8 *arg0) {
    s32 i;
    s32 n;

    n = (s32) (1);
    for (i = 1; i < M2C_FIELD(arg0, s32 *, 0x1C); i++) {
        if (fn_80044C58((s8 *) (arg0 + i * 0xC + 0x40), (s8 *) (arg0 + (i - 1) * 0xC + 0x40)) == 0) {
            n++;
        }
    }
    return (s32) (n);
}
#pragma dont_inline reset

} // extern "C"
