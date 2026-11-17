#include "types.h"
#include "m2c_macros.h"

extern "C" {

s32 * fn_80038934(s8 *arg0, u32 arg1);
s8 * fn_80048A64(s32 arg0, s32 arg1);
void fn_80048A88(s32 arg0);

s8 * fn_80048A64(s32 arg0, s32 arg1) {
    return (s8 *) ((s8 *)fn_80038934((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)) + 4);
}

void fn_80048A88(s32 arg0) {
}

} // extern "C"
