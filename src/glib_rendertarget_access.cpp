#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80348070[];

s32 _restgpr_25();
s32 _savegpr_25();
s32 fn_80035DD8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_80035E70(s8 *arg0);
s32 fn_80036AD8(s8 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7);
M2C_UNK fn_800389F4(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: fn_80035DD8
asm s32 fn_80035DD8(s32 arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    bl fn_800389F4
    mr r4, r25
    mr r5, r26
    clrlwi r6, r27, 16
    clrlwi r7, r28, 16
    mr r8, r29
    subic r0, r30, 0x1
    subfe r9, r0, r30
    mr r10, r31
    bl fn_80036AD8
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80035E54
    lis r3, lbl_80348070@ha
    addi r3, r3, lbl_80348070@l
    li r4, 0x3d
    addi r5, r3, 0x1d
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035E54:
    mr r3, r31
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 fn_80035E70(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x24) != 0);
}

} // extern "C"
