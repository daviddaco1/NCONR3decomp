#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80349570[];
extern u8 lbl_803495A8[];
extern void *lbl_8049D4C8;

s32 fn_80047D0C(s8 *arg0, s8 *arg1);
s32 fn_80047D80(s8 *arg0, s8 *arg1);
s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047F10(s32 *arg0, s32 arg1);
s8 * fn_80047F24(s8 *arg0, s32 *arg1);
void *fn_80048540(void);
void fn_80048600(s32 arg0);
s32 fn_80048634(s32 *arg0, s32 arg1);
s32 fn_80048680(s32 *arg0, s32 arg1);
s32 fn_800486D4(s32 *arg0, s32 arg1);
void fn_80048720(s32 arg0);
s32 fn_80048754(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, ...);

void *fn_80048540(void) {
    void *pEngine = lbl_8049D4C8;
    u32 addr = (u32)pEngine;
    bool bResult = ((addr & 0xFF000000) == 0x80000000) ||
                   ((addr & 0xFF800000) == 0x81000000) ||
                   ((addr & 0xF8000000) == 0x90000000) ||
                   ((addr & 0xFF000000) == 0xC0000000) ||
                   ((addr & 0xFF800000) == 0xC1000000) ||
                   ((addr & 0xF8000000) == 0xD0000000) ||
                   ((addr & 0xFFFFC000) == 0xE0000000);
    if (!bResult) {
        fn_801A9384((s32)&lbl_803495A8, 0x2A, (s32)&lbl_80349570, pEngine);
    }
    return pEngine;
}

void fn_80048600(s32 arg0) {
    fn_80047D0C((s8 *) (fn_80048540()), (s8 *) ((s8 *) arg0));
}

s32 fn_80048634(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80048540());
    sp8 = (s32) (*arg0);
    return (s32) (fn_80047DF4((s8 *) ((s8 *) temp_r3), (s32 *) (&sp8), (s8 *) ((s8 *) arg1)));
}

s32 fn_80048680(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80048540());
    sp8 = (s32) (*arg0);
    return (s32) (fn_80047F10((s32 *) (fn_80047F24((s8 *) (fn_80048754((s8 *) ((s8 *) temp_r3))), (s32 *) (&sp8))), (s32) (arg1)));
}

s32 fn_800486D4(s32 *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r3;

    temp_r3 = (s32) (fn_80048540());
    sp8 = (s32) (*arg0);
    return (s32) (fn_80047E74((s8 *) ((s8 *) temp_r3), (s32 *) (&sp8), (s8 *) ((s8 *) arg1)));
}

void fn_80048720(s32 arg0) {
    fn_80047D80((s8 *) (fn_80048540()), (s8 *) ((s8 *) arg0));
}

s32 fn_80048754(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18));
}

} // extern "C"
