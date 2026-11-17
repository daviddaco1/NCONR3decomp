#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

extern u8 lbl_80390580[];

M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_80046CDC(s32 arg0);
void fn_800470CC(s8 *arg0);
void fn_80047BE4(void);
void fn_80047BE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80047BF4(f32 farg0, f32 farg1);
void fn_80047C04(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_80047C2C(f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_8005E5AC(void);
void fn_8017776C(s32 arg0);

void fn_80046CDC(s32 arg0) {
    if (arg0 != 0) {
        fn_8017776C(arg0);
    }
}

void fn_800470CC(s8 *arg0) {
    s32 temp_r4_2;
    s8 *temp_r4;

    temp_r4 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x14));
    if ((s32) (M2C_FIELD(temp_r4, s32 *, 0) & 0x1000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0x3C);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (2);
        return;
    }
    temp_r4_2 = (s32) (M2C_FIELD(temp_r4, s32 *, 0x3854));
    if ((temp_r4_2 != 0) && ((u32) temp_r4_2 != (u32) M2C_FIELD(arg0, u32 *, 0x18))) {
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) ((u32) temp_r4_2);
    }
    if (((s32) M2C_FIELD(M2C_FIELD(&lbl_80390580, s8 **, 0xC), s32 *, 4) == 1) && (fn_8005E5AC() <= 2)) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (0x1E);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (2);
    }
}

void fn_80047BE4(void) {
}

void fn_80047BE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_80047BF4(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

void fn_80047C04(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
    GXWGFifo.u8 = arg2;
    GXWGFifo.u8 = arg3;
}

void fn_80047C2C(f32 farg0, f32 farg1, f32 farg2) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
    GXWGFifo.f32 = farg2;
}

} // extern "C"
