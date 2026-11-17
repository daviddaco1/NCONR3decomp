#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_800464E0_arg0 {
    u8 pad_0[0x38];
    f32 f_38;
    f32 f_3C;
    f32 f_40;
    f32 f_44;
    f32 f_48;
    f32 f_4C;
    f32 f_50;
    f32 f_54;
};

struct S_fn_80046610_arg0 {
    s32 f_0;
    s32 f_4;
    u8 pad_8[0x10];
    s32 f_18;
};
extern s32 **lbl_8049D660;
extern s32 lbl_8049D6B0;
__declspec(section ".sdata2") extern const f32 lbl_8049EA90[];

void GXClearVtxDesc(void);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetVtxDesc(s32 arg0, s32 arg1);
void fn_800163E4(s32 arg0, s32 arg1);
void fn_80016964(void);
M2C_UNK fn_800169F4(s32 arg0);
M2C_UNK fn_80016A44(s32 arg0);
s32 fn_80016A94(s32 arg0);
s32 fn_80016C30(s32 arg0, s32 arg1);
void fn_80019D5C(s8 *arg0);
s8 * fn_80046108(s32 arg0);
void fn_800461A8(s32 arg0);
s32 fn_800461AC(s8 *arg0, s32 arg1);
void fn_800464E0(S_fn_800464E0_arg0 *arg0);
void fn_80046610(S_fn_80046610_arg0 *arg0);
void fn_80046724(s8 *arg0);
void fn_80046B54(void);
void fn_80046B58(f32 farg0, f32 farg1);
void fn_80046B68(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4);
void fn_80046B90(f32 farg0, f32 farg1, s32 arg2);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017776C(s32 arg0);
void fn_8017C2CC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

s8 * fn_80046108(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80177280((s32) (0x12), (M2C_UNK *) ((s32 *) fn_800461AC), (M2C_UNK **) (lbl_8049D660)));
    if (temp_r3 == 0) {
        return (s8 *) (NULL);
    }
    memset((s32) (temp_r3), (s32) (0), (s32) (0x7C));
    fn_80019D5C((s8 *) (temp_r3 + 0xC));
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    if ((fn_8010E90C((u32) (0xFU), (s32) (M2C_FIELD(temp_r3, s32 *, 8)), (s32) (temp_r3), (s32) (0)) != 0) && (temp_r3 != 0)) {
        fn_800461A8((s32) (temp_r3));
    }
    return (s8 *) ((s8 *) temp_r3);
}

void fn_800461A8(s32 arg0) {
    fn_8017776C((s32) (arg0));
}

void fn_80046B54(void) {
}

void fn_80046B58(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80046B68(u8 arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80046B90(f32 farg0, f32 farg1, s32 arg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_800464E0(S_fn_800464E0_arg0 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f2;

    temp_f2 = arg0->f_38 + arg0->f_48;
    arg0->f_38 = temp_f2;
    arg0->f_3C = (f32) (arg0->f_3C + arg0->f_4C);
    arg0->f_40 = (f32) (arg0->f_40 + arg0->f_50);
    arg0->f_44 = (f32) (arg0->f_44 + arg0->f_54);
    if (temp_f2 < lbl_8049EA90[1]) {
        arg0->f_38 = (f32) (temp_f2 + lbl_8049EA90[2]);
    }
    temp_f1 = arg0->f_38;
    if (temp_f1 > lbl_8049EA90[2]) {
        arg0->f_38 = (f32) (temp_f1 - lbl_8049EA90[2]);
    }
    temp_f1_2 = arg0->f_3C;
    if (temp_f1_2 < lbl_8049EA90[1]) {
        arg0->f_3C = (f32) (temp_f1_2 + lbl_8049EA90[2]);
    }
    temp_f1_3 = arg0->f_3C;
    if (temp_f1_3 > lbl_8049EA90[2]) {
        arg0->f_3C = (f32) (temp_f1_3 - lbl_8049EA90[2]);
    }
    temp_f1_4 = arg0->f_40;
    if (temp_f1_4 < lbl_8049EA90[1]) {
        arg0->f_40 = (f32) (temp_f1_4 + lbl_8049EA90[2]);
    }
    temp_f1_5 = arg0->f_40;
    if (temp_f1_5 > lbl_8049EA90[2]) {
        arg0->f_40 = (f32) (temp_f1_5 - lbl_8049EA90[2]);
    }
    temp_f1_6 = arg0->f_44;
    if (temp_f1_6 < lbl_8049EA90[1]) {
        arg0->f_44 = (f32) (temp_f1_6 + lbl_8049EA90[2]);
    }
    temp_f1_7 = arg0->f_44;
    if (temp_f1_7 > lbl_8049EA90[2]) {
        arg0->f_44 = (f32) (temp_f1_7 - lbl_8049EA90[2]);
    }
}

#pragma opt_common_subs on
#pragma optimize_for_size off
#pragma optimization_level 3
#pragma dont_inline on
void fn_80046610(S_fn_80046610_arg0 *arg0) {
    if (((s32) arg0->f_4 != 0) && (((((s32) ((arg0->f_0) & 0x40) == 0) != 0)) || ((s32) lbl_8049D6B0 != 0)) && (fn_80016C30((s32) ((s32) (arg0->f_18)), (s32) ((s32) ((arg0->f_0)))) == 0)) {
        fn_800169F4((s32) ((s32) (0)));
        fn_800163E4((s32) ((s32) (arg0->f_0)), (s32) ((s32) (0xF)));
        fn_80016964();
        GXLoadTexObj((s32) ((s32) (lbl_8049D6B0 + 4)), (s32) ((s32) (0)));
        GXClearVtxDesc();
        GXSetVtxDesc((s32) ((s32) (9)), (s32) ((s32) (1)));
        GXSetVtxDesc((s32) ((s32) (0xB)), (s32) ((s32) (1)));
        GXSetVtxDesc((s32) ((s32) (0xD)), (s32) ((s32) (1)));
        GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (9)), (s32) ((s32) (0)), (s32) ((s32) (4)), (s32) ((s32) (0)));
        GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xB)), (s32) ((s32) (1)), (s32) ((s32) (5)), (s32) ((s32) (0)));
        GXSetVtxAttrFmt((s32) ((s32) (0)), (s32) ((s32) (0xD)), (s32) ((s32) (1)), (s32) ((s32) (4)), (s32) ((s32) (0)));
        fn_80046724((s8 *) ((s8 *) (arg0)));
        fn_80016A44((s32) ((s32) (0)));
        fn_8017C2CC();
        fn_80016A94((s32) ((s32) (0)));
    }
}
#pragma dont_inline reset
#pragma optimization_level reset
#pragma optimize_for_size reset
#pragma opt_common_subs reset

} // extern "C"
