#include "types.h"
#include "m2c_macros.h"
#include "rvl_mtx.h"

extern "C" {

struct S_fn_800CA050_arg0 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
};
struct S_fn_800CA050_arg1 {
    f32 f_0;
    f32 f_4;
    f32 f_8;
    f32 f_C;
};
struct EyeItem {
    u32 id;
    u32 flag;
};

struct S_fn_800CA0DC_arg1 { f32 f_0; f32 f_4; f32 f_8; };
struct S_fn_800CA0DC_arg0 { f32 f_0; f32 f_4; f32 f_8; f32 f_C; };
__declspec(section ".sdata2") extern const f32 lbl_8049F998[];

f32 fn_8001DA9C(f32 farg0);
void fn_800CA050(S_fn_800CA050_arg0 *arg0, S_fn_800CA050_arg1 *arg1);
void fn_800CA0DC(S_fn_800CA0DC_arg0 *arg0, S_fn_800CA0DC_arg1 *arg1);
s32 fn_800CA1BC(void *arg0, s32 count1, const EyeItem *items1, s32 count2, const EyeItem *items2);
s32 fn_800CA45C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3);
void fn_801734E4(s32 arg0, s32 arg1);
M2C_UNK fn_80173580(s32 arg0_x, s32 arg1_x, s32 arg2_x);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
f32 fn_801A32A0(f64 farg0, f64 farg1);
f32 fn_801A32CC(f64 farg0);
f32 fn_801A32F4(f64 farg0);

void fn_800CA050(S_fn_800CA050_arg0 *arg0, S_fn_800CA050_arg1 *arg1) {
    arg0->f_8 = (f32) (lbl_8049F998[191] * fn_801A32A0((f64) arg1->f_4, (f64) arg1->f_0));
    arg0->f_4 = (f32) (lbl_8049F998[191] * fn_801A32A0(-arg1->f_8, fn_8001DA9C((arg1->f_4 * arg1->f_4) + (arg1->f_0 * arg1->f_0))));
    arg0->f_0 = (f32) arg1->f_C;
}

s32 fn_800CA1BC(void *arg0, s32 count1, const EyeItem *items1, s32 count2, const EyeItem *items2) {
    const EyeItem *item;

    for (s32 i = 0; i < count1; i++) {
        item = &items1[i];
        u32 *p = (u32 *)fn_8018149C((s8 *)arg0, item->id);
        if (p != NULL) {
            *p |= (item->flag | 0x800000);
        }
    }
    for (s32 i = 0; i < count2; i++) {
        item = &items2[i];
        u32 *p = (u32 *)fn_8018149C((s8 *)arg0, item->id);
        if (p != NULL) {
            *p |= (item->flag | 0x400000);
        }
    }
    return 1;
}

#pragma dont_inline on
s32 fn_800CA45C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    Mtx sp8;

    fn_801734E4((s32) ((s32) sp8), (s32) ((s32) ((s8 *)arg1 + 0x80)));
    fn_800CA050((S_fn_800CA050_arg0 *) (arg0 + 0x40), (S_fn_800CA050_arg1 *) ((s8 *)arg1 + 0x30));
    fn_80173580((s32) ((s32) (arg0 + 0x10)), (s32) (3), (s32) ((s32) sp8));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8049F998[183];
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8049F998[183];
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8049F998[183];
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_8049F998[183];
    return (s32) (1);
}
#pragma dont_inline reset

#pragma opt_common_subs on
#pragma dont_inline on
void fn_800CA0DC(S_fn_800CA0DC_arg0 *arg0, S_fn_800CA0DC_arg1 *arg1) {
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;

    temp_f29 = fn_801A32CC((f64) (lbl_8049F998[192] * (f32) (f64) arg1->f_8));
    temp_f30 = fn_801A32F4((f64) (lbl_8049F998[192] * (f32) (f64) arg1->f_8));
    temp_f31 = fn_801A32CC((f64) (lbl_8049F998[192] * (f32) (f64) arg1->f_4));
    temp_f1 = fn_801A32F4((f64) (lbl_8049F998[192] * (f32) (f64) arg1->f_4));
    arg0->f_0 = (f32) (temp_f29 * temp_f31);
    arg0->f_4 = (f32) (temp_f30 * temp_f31);
    arg0->f_8 = (f32) -temp_f1;
    arg0->f_C = (f32) arg1->f_0;
}
#pragma dont_inline reset
#pragma opt_common_subs reset

} // extern "C"
