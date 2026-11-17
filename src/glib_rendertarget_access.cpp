#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80348070[];

s32 fn_80035DD8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_80035E70(s8 *arg0);
s32 fn_80036AD8(s8 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK *fn_800389F4(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

s32 fn_80035DD8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 res = fn_80036AD8((s8 *)fn_800389F4(), arg0, arg1, arg2, arg3, arg4, arg5 != 0, arg6);
    if (res == 0) {
        fn_801A9384((s32)&lbl_80348070, 0x3D, (s32)((s8 *)&lbl_80348070 + 0x1D));
    }
    return res;
}

s32 fn_80035E70(s8 *arg0) {
    return (s32)(M2C_FIELD(arg0, s32 *, 0x24) != 0);
}

} // extern "C"
