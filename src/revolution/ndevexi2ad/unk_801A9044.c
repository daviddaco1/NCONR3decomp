#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK OSSetAlarm();                      /* extern */
extern s32 *lbl_8049D954;

void fn_801A9044();
s32 fn_801A90AC();
void fn_801A9118();
void fn_801A913C();
void fn_801A91D4();
void fn_801A9280();
void fn_801A9384();
void fn_801A9418();
void fn_801A95B4();
void fn_801A95CC();

s32 fn_801A90AC(s32 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r4;
    u16 var_r4_2;

    temp_r3 = OSDisableInterrupts();
    var_r4 = M2C_FIELD(arg0, u16 *, 0xC) - M2C_FIELD(arg0, u16 *, 0x10);
    if (var_r4 < 0) {
        var_r4 += M2C_FIELD(arg0, u16 *, 6);
    }
    var_r4_2 = (u16) var_r4;
    if ((s32) M2C_FIELD(arg0, u16 *, 0xE) != 0) {
        var_r4_2 += 1;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x14) + var_r4_2;
    OSRestoreInterrupts(temp_r3);
    return temp_r31;
}

void fn_801A91D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_801A9280(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 arg4, M2C_UNK arg_sp0);

void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);

void fn_801A9418(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp0, M2C_UNK arg_sp8);

void fn_801A95B4(void) {
    if ((s32 *) lbl_8049D954 != NULL) {
        M2C_FIELD(lbl_8049D954, s8 *, 0x22) = 0;
    }
}

void fn_801A9044(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
void fn_801A9118(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_801A913C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);
void fn_801A91D4();
void fn_801A9280();
void fn_801A9384();
void fn_801A9418();
void fn_801A95CC(s8 *arg0, s8 *arg1, s8 *arg2);
