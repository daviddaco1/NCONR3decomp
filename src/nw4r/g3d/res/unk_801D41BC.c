#include "types.h"
#include "m2c_macros.h"

s32 fn_801D41BC();

s32 fn_801D41BC(s8 **arg0, s32 *arg1, s32 *arg2, u8 *arg3) {
    s8 *temp_r3;

    temp_r3 = *arg0;
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(temp_r3, s32 *, 0x14);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(temp_r3, s32 *, 0x18);
    }
    if (arg3 != NULL) {
        *arg3 = M2C_FIELD(temp_r3, u8 *, 0x1C);
        return (s32) temp_r3;
    }
    return (s32) temp_r3;
}

