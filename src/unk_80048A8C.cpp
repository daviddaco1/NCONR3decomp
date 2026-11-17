#include "types.h"
#include "m2c_macros.h"
#include "nw4r_lyt_layout.h"


extern "C" {

extern u8 lbl_803C22B0[];
extern s8 *lbl_8049D9D8;

s32 __dt__Q34nw4r3lyt16ResourceAccessorFv(s32 arg0, s32 arg1);
s8 * __dt__Q44nw4r2ut6detail12LinkListImplFv(s8 *arg0, s32 arg1);
s32 dtor_80048CE8(s32 arg0, s16 arg1);
void dtor_80136CFC(s32 arg0);
void fn_80048BC4(s8 *arg0);
s32 fn_80048C7C(s32 arg0, s16 arg1);
void fn_80048EE8(s8 *arg0);
void fn_80048EF0(s8 *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4);
void fn_80170E84(s32 arg0, s8 *arg1);
s8 * fn_80186808(s8 *arg0);
s32 fn_8030CB00(s32 arg0_pad, s32 arg1_pad);

s32 fn_80048C7C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        dtor_80048CE8((s32) (arg0 + 0x24), (s16) (-1));
        __dt__Q34nw4r3lyt16ResourceAccessorFv((s32) (arg0), (s32) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

s32 dtor_80048CE8(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__Q44nw4r2ut6detail12LinkListImplFv((s8 *) ((s8 *) arg0), (s32) (0));
        if (arg1 > 0) {
            dtor_80136CFC((s32) (arg0));
        }
    }
    return (s32) (arg0);
}

void fn_80048EE8(s8 *arg0) {
    lbl_8049D9D8 = arg0;
}

#pragma peephole on
void fn_80048EF0(s8 *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0) = (s8) (arg1);
    M2C_FIELD(arg0, s8 *, 1) = (s8) (arg2);
    M2C_FIELD(arg0, s8 *, 2) = (s8) (arg3);
    M2C_FIELD(arg0, s8 *, 3) = (s8) (arg4);
}
#pragma peephole reset

#pragma dont_inline on
void fn_80048BC4(s8 *arg0) {
    s8 **temp_r3;
    s8 *temp_r30;

    if ((arg0 != NULL) && ((s32) (M2C_FIELD(arg0, u16 *, 0) & 0x8000) == 0)) {
        temp_r3 = (s8 **) (M2C_FIELD(arg0, s8 ***, 8));
        if (temp_r3 != NULL) {
            ((nw4r::lyt::Layout *)(temp_r3))->~Layout();
            fn_8030CB00((s32) ((s8 *) &lbl_803C22B0 + 0x60), (s32) (M2C_FIELD(arg0, s8 ***, 8)));
            M2C_FIELD(arg0, s8 ***, 8) = (s8 **) (NULL);
        }
        temp_r30 = (s8 *) (M2C_FIELD(arg0, s8 **, 4));
        if (temp_r30 != NULL) {
            M2C_FIELD(arg0, s8 **, 4) = (s8 *) (NULL);
            fn_80170E84((s32) (M2C_FIELD(temp_r30, s32 *, 8)), (s8 *) (M2C_FIELD(temp_r30, s32 *, 0x5C)));
            M2C_FIELD(temp_r30, s32 *, 0x5C) = (s32) (0);
            fn_80186808((s8 *) (temp_r30));
        }
        M2C_FIELD(arg0, u16 *, 0) = (u16) (0U);
    }
}
#pragma dont_inline reset

} // extern "C"
