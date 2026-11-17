#include "types.h"
#include "m2c_macros.h"

extern "C" {

struct SK_fn_8010C6E0_V { f32 f_0; f32 f_4; f32 f_8; f32 f_C; } __attribute__((aligned(16)));
__declspec(section ".sdata2") extern const f32 lbl_804A07E8[];

void fn_8010C34C(s32 arg0, s32 arg1);
s32 fn_8010C354(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_8010C6E0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8010C7C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8010CD30(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_8010D054(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_8010C34C(s32 arg0, s32 arg1) {
    fn_8010C354((s8 *) (arg0), (s32) (arg1), (s8 *) (NULL));
}

#pragma dont_inline on
s32 fn_8010C6E0(s32 arg0, s32 arg1, s32 arg2) {
    volatile SK_fn_8010C6E0_V sp20;
    volatile SK_fn_8010C6E0_V sp10;
    s32 temp_r30;
    f32 temp_f1;

    temp_f1 = lbl_804A07E8[0];
    temp_r30 = (s32) (M2C_FIELD(M2C_FIELD(arg1, s8 **, 0x3780), s32 *, 0x20));
    sp20.f_0 = temp_f1;
    sp20.f_4 = lbl_804A07E8[1];
    sp20.f_8 = lbl_804A07E8[0];
    sp20.f_C = lbl_804A07E8[2];
    sp10.f_0 = lbl_804A07E8[2];
    sp10.f_4 = lbl_804A07E8[0];
    sp10.f_8 = lbl_804A07E8[0];
    sp10.f_C = lbl_804A07E8[2];
    fn_8010C7C0((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (temp_r30));
    fn_8010CD30((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (temp_r30));
    fn_8010D054((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (temp_r30));
    sp20.f_0 = lbl_804A07E8[0];
    sp20.f_4 = lbl_804A07E8[1];
    sp20.f_8 = lbl_804A07E8[0];
    sp20.f_C = lbl_804A07E8[2];
    sp10.f_0 = lbl_804A07E8[2];
    sp10.f_4 = lbl_804A07E8[0];
    sp10.f_8 = lbl_804A07E8[0];
    sp10.f_C = lbl_804A07E8[2];
    return (s32) (1);
}
#pragma dont_inline reset

} // extern "C"
