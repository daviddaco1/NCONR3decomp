#include "types.h"
#include "m2c_macros.h"

extern "C" {

s32 fn_8013EE80(s8 *arg0);
void fn_8013EE98(s8 *arg0, s32 arg1);
s32 fn_8013EEAC(s8 *arg0, s32 arg1);
s32 fn_8013EEC4(s8 *arg0, s32 arg1);

s32 fn_8013EE80(s8 *arg0) {
    s32 *p = *(s32 **)(arg0 + 0x5C);
    s32 val = *p;
    *(s32 **)(arg0 + 0x5C) = p + 1;
    return val;
}

void fn_8013EE98(s8 *arg0, s32 arg1) {
    s32 *temp_r5;

    temp_r5 = (s32 *) (M2C_FIELD(arg0, s8 **, 0x5C) - 4);
    M2C_FIELD(arg0, s8 **, 0x5C) = (s8 *) (temp_r5);
    *temp_r5 = arg1;
}

s32 fn_8013EEAC(s8 *arg0, s32 arg1) {
    arg1 = (arg1 + 3) & ~3;
    s8 *p = *(s8 **)(arg0 + 0xC);
    return *(s32 *)(p + 0x5C) + arg1;
}

s32 fn_8013EEC4(s8 *arg0, s32 arg1) {
    return (s32) (arg1 - M2C_FIELD(M2C_FIELD(arg0, s8 **, 0xC), s32 *, 0x5C));
}

} // extern "C"
