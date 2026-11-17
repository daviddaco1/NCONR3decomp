#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

struct S_fn_8003DD34_var_r31 { u32 f_0; u8 pad_4[0x4]; S_fn_8003DD34_var_r31 * f_8; };
extern s32 lbl_8049D694;
__declspec(section ".sdata2") extern const f32 lbl_8049E938[];

void fn_80019D94(M2C_UNK **arg0, s32 arg1);
s32 fn_8001B8B0(s32 arg0, s32 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8003DD34(s8 *arg0);
void fn_8003F51C(f32 *arg0, f32 *arg1);
void fn_8003F578(void);
void fn_8003F57C(f32 farg0, f32 farg1);
void fn_8003F58C(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8003F5B4(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8010E6AC(s32 arg0);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_8017776C(s32 arg0);

void fn_8003F578(void) {
}

void fn_8003F57C(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_8003F58C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_8003F5B4(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

#pragma dont_inline on
void fn_8003DD34(s8 *arg0) {
    u32 temp_r4;
    s8 *temp_r31;
    S_fn_8003DD34_var_r31 *var_r31;

    for (var_r31 = (S_fn_8003DD34_var_r31 *) M2C_FIELD(arg0, s8 **, 0xC); (temp_r4 = var_r31->f_0) != 1U; var_r31 = var_r31->f_8) {
        fn_80019D94((M2C_UNK **) (lbl_8049D694), (s32) ((s32) temp_r4));
    }
    temp_r31 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x2C));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
    }
    fn_8017776C((s32) ((s32) arg0));
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8003F51C(f32 *arg0, f32 *arg1) {
    if (((f32 (*)(f32 *)) fn_8001B8B4)(arg1) < lbl_8049E938[15]) {
        arg1[1] = lbl_8049E938[15];
    }
    fn_8001B8B0((s32) ((s32) arg0), (s32) ((s32) arg1));
}
#pragma dont_inline reset

} // extern "C"
