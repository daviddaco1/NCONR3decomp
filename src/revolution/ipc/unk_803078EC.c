#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern M2C_UNK lbl_8037F558;

/*
Decompilation failure in function fn_8030816C:

Found bctr instruction at unk_803078EC.s line 644, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

struct S_fn_8030B2BC_temp_r4 {
    u8 pad_0[0x550];
    s32 f_550;
};
struct S_fn_8030B37C_temp_r31 {
    u8 pad_0[0x557];
    s8 f_557;
    s8 f_558;
    u8 pad_559[0x1];
    s8 f_55A;
    u8 f_55B;
};
extern M2C_UNK lbl_8037F558;
extern u8 lbl_80463280[][0x570];
extern u8 lbl_8049E242;
extern u8 lbl_8049E245;
extern u8 lbl_8049E246;

s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32 arg0);
s32 fn_8028D1DC(s32 arg0);
void fn_8030797C(s32 arg0, f32 arg1, f32 arg2);
void fn_80307998(s32 arg0, f32 arg1, f32 arg2);
void fn_803079B4(s32 arg0, f32 arg1, f32 arg2);
void fn_803079D0(s32 arg0, f32 arg1, f32 arg2);
f32 fn_803079EC(s8 *arg0);
void fn_80307BC0(s8 *arg0, u32 arg1, s32 arg2);
s32 fn_80307EB4(s8 *arg0);
f32 fn_80308048(s8 *arg0);
M2C_UNK fn_8030816C(s32 arg0, s32 arg1);
s32 fn_803089D4(s8 *arg0);
s32 fn_80308B88(s8 *arg0);
s32 fn_8030A354(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8030A360(s32 arg0, s8 *arg1, s32 arg2, s32 *arg3, s32 arg4);
void fn_8030AC68(void);
void fn_8030AC74(s32 arg0, u32 arg1);
void fn_8030B0B4(void);
s32 fn_8030B2BC(s32 arg0, s32 arg1);
s32 fn_8030B314(s32 arg0, s32 arg1);
s32 fn_8030B32C(s32 arg0, s32 arg1);
void fn_8030B344(s32 arg0);
void fn_8030B360(s32 arg0);
void fn_8030B37C(s32 arg0, s32 arg1);

s32 fn_8030A354(s32 arg0, s32 arg1, s32 arg2) {
    return (s32) (fn_8030A360((s32) (arg0), (s8 *) ((s8 *) arg1), (s32) (arg2), (s32 *) (NULL), (s32) (0)));
}

void fn_8030AC68(void) {
    fn_8030AC74((s32) (0), (u32) (0U));
}

void fn_8030797C(s32 arg0, f32 arg1, f32 arg2) {
    *(f32 *)&lbl_80463280[arg0][0xb0] = arg1;
    *(f32 *)&lbl_80463280[arg0][0xb4] = arg2;
}

void fn_80307998(s32 arg0, f32 arg1, f32 arg2) {
    *(f32 *)&lbl_80463280[arg0][0xb8] = arg1;
    *(f32 *)&lbl_80463280[arg0][0xbc] = arg2;
}

void fn_803079B4(s32 arg0, f32 arg1, f32 arg2) {
    *(f32 *)&lbl_80463280[arg0][0xc0] = arg1;
    *(f32 *)&lbl_80463280[arg0][0xc4] = arg2;
}

void fn_803079D0(s32 arg0, f32 arg1, f32 arg2) {
    *(f32 *)&lbl_80463280[arg0][0xc8] = arg1;
    *(f32 *)&lbl_80463280[arg0][0xcc] = arg2;
}

void fn_8030B344(s32 arg0) {
    lbl_80463280[arg0][0x556] = 0;
}

void fn_8030B360(s32 arg0) {
    lbl_80463280[arg0][0x556] = 1;
}

#pragma dont_inline on
s32 fn_8030B2BC(s32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    S_fn_8030B2BC_temp_r4 *temp_r4;

    temp_r3 = (s32) (OSDisableInterrupts());
    temp_r4 = (S_fn_8030B2BC_temp_r4 *) ((s8 *) &lbl_80463280 + (arg0 * 0x570));
    temp_r31 = (s32) (temp_r4->f_550);
    temp_r4->f_550 = arg1;
    OSRestoreInterrupts((s32) (temp_r3));
    return (s32) (temp_r31);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8030B314(s32 arg0, s32 arg1) {
    u8 temp_r3;

    temp_r3 = (u8) (arg1 == 0);
    lbl_8049E246 = 0;
    lbl_8049E245 = temp_r3;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
s32 fn_8030B32C(s32 arg0, s32 arg1) {
    u8 temp_r3;

    temp_r3 = (u8) (arg1 == 0);
    lbl_8049E246 = 0;
    lbl_8049E242 = temp_r3;
    return (s32) ((s32) temp_r3);
}
#pragma dont_inline reset

#pragma dont_inline on
void fn_8030B37C(s32 arg0, s32 arg1) {
    S_fn_8030B37C_temp_r31 *temp_r31;

    temp_r31 = (S_fn_8030B37C_temp_r31 *) ((s8 *) &lbl_80463280 + (arg0 * 0x570));
    if ((arg1 == 0) && (((M2C_UNK (*)(s32,s32)) M2C_FIELD(temp_r31, M2C_UNK (**)(s32,s32), 0x50C)) != NULL) && ((s32) temp_r31->f_55B == 0)) {
        temp_r31->f_55B = 1U;
        M2C_FIELD(temp_r31, M2C_UNK (**)(s32,s32), 0x50C)(arg0,1);
        temp_r31->f_55A = 0;
    }
    temp_r31->f_557 = fn_8028D1DC((s32) (arg0));
    temp_r31->f_558 = 0;
}
#pragma dont_inline reset

} // extern "C"
