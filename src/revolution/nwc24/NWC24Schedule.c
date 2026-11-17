#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();           /* extern */

s32 NWC24SuspendScheduler();
s32 NWC24ResumeScheduler();
s32 fn_80334334();
s32 NWC24iRequestGenerateUserId();
void ExecSuspendScheduler();
void fn_803346A0();
void fn_803346B0();
s32 fn_803346C0();
s32 fn_803346D0();
s32 ExecResumeScheduler();
s32 ExecNoParamCommand();

void ExecSuspendScheduler(s32 *arg0) {
    ExecNoParamCommand(NULL, 6, arg0);
}

void fn_803346A0(s32 *arg0) {
    ExecNoParamCommand(NULL, 7, arg0);
}

void fn_803346B0(void) {
    ExecNoParamCommand(NULL, 8, NULL);
}

s32 fn_803346C0(void) {
    return ExecNoParamCommand(NULL, 9, NULL);
}

s32 fn_803346D0(void) {
    return ExecNoParamCommand(NULL, 1, NULL);
}

s32 ExecResumeScheduler(void) {
    return ExecNoParamCommand(NULL, 3, NULL);
}

s32 ExecNoParamCommand(s32 *arg0, s32 arg1, s32 *arg2, M2C_UNK arg_sp0);
s32 NWC24ResumeScheduler(void);
s32 NWC24SuspendScheduler(void);
s32 NWC24iRequestGenerateUserId(s8 *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_80334334(s32 arg0);
