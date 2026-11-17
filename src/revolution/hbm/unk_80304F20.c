#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

void fn_80304F20();
void fn_80305204();
void fn_80305320();
void fn_803053AC();
void fn_803053D4();
void fn_80305558();
void fn_803055E8();
void fn_80305680();
s32 fn_803057B8();
void fn_803057C0();

void fn_80304F20(s32 arg0, s32 *arg1);

s32 fn_803057B8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void fn_803057C0(s32 arg0, s32 arg1) {
    HBMSYNSetMasterVolume(arg0 + 0x14, arg1);
}

void fn_80304F20();
void fn_80305204(s8 *arg0, s8 *arg1, s32 arg2);
void fn_80305320(s32 *arg0, s8 *arg1);
void fn_803053AC(void);
void fn_803053D4(void);
void fn_80305558(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_803055E8(u32 arg0, M2C_UNK arg_sp0);
void fn_80305680(s32 *arg0, s32 arg1, M2C_UNK arg_sp0);
