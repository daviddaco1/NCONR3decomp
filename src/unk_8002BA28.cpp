#include "types.h"
#include "m2c_macros.h"
#include "rvl_gxfifo.h"

extern "C" {

M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_8002B99C(s8 *arg0);
void fn_8002BA28(s8 *arg0, s32 arg1);
void fn_8002BCD0(s8 *arg0);
void fn_8002D7B0(void);
void fn_8002D7B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8002D7C0(u8 arg0, u8 arg1);
void fn_8002D7D8(f32 farg0, f32 farg1);
s32 fn_8002D7E8(s8 *arg0, s32 arg1);
s32 fn_8002D7FC(s8 *arg0);
s32 fn_8002D80C(s8 *arg0);

void fn_8002BCD0(s8 *arg0) {
    if ((fn_8002D7FC((s8 *) (arg0)) != 0) && (fn_8002D7E8((s8 *) (arg0), (s32) (1)) != 0)) {
        fn_8002BA28((s8 *) (arg0 + 0xC), (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8)))));
    }
}

void fn_8002D7B0(void) {
}

void fn_8002D7B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_8002D7C0(u8 arg0, u8 arg1) {
    GXWGFifo.u8 = arg0;
    GXWGFifo.u8 = arg1;
}

void fn_8002D7D8(f32 farg0, f32 farg1) {
    GXWGFifo.f32 = farg0;
    GXWGFifo.f32 = farg1;
}

s32 fn_8002D7E8(s8 *arg0, s32 arg1) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0xC) & arg1) != 0);
}

s32 fn_8002D7FC(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8) != 0);
}

s32 fn_8002D80C(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x2C) != 0);
}

} // extern "C"
