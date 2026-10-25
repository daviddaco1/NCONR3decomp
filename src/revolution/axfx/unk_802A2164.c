#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern s32 lbl_80372650[];
extern u8 lbl_80372850[];
extern s32 lbl_8049CF40;
extern s32 lbl_8049CF44;
extern s32 lbl_8049D1D8;

s32 * fn_802A2164();
s8 * fn_802A2170();
void fn_802A2184();
void fn_802A2190();
void fn_802A219C();
void fn_802A21A8();

s32 *fn_802A2164(void) {
    return lbl_80372650;
}

s8 *fn_802A2170(s32 arg0) {
    return (s8 *)(lbl_80372850 + (arg0 * 16));
}

void fn_802A2184(s32 arg0) {
    OSAllocFromHeap(lbl_8049D1D8, arg0);
}

void fn_802A2190(s32 arg0) {
    OSFreeToHeap(lbl_8049D1D8, arg0);
}

void fn_802A219C(s32 arg0, s32 arg1) {
    lbl_8049CF40 = arg0;
    lbl_8049CF44 = arg1;
}

void fn_802A21A8(s32 *arg0, s32 *arg1) {
    *arg0 = lbl_8049CF40;
    *arg1 = lbl_8049CF44;
}
