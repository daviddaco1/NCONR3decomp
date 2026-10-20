#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_80349570[];
extern u8 lbl_803495A8[];
extern float lbl_8049D4C8;

s32 fn_80047D0C(s8 *arg0, s8 *arg1);
s32 fn_80047D80(s8 *arg0, s8 *arg1);
s32 fn_80047DF4(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047E74(s8 *arg0, s32 *arg1, s8 *arg2);
s32 fn_80047F10(s32 *arg0, s32 arg1);
s8 * fn_80047F24(s8 *arg0, s32 *arg1);
s32 fn_80048540(void);
void fn_80048600(s32 arg0);
M2C_UNK fn_80048634(s32 *arg0, s32 arg1);
M2C_UNK fn_80048680(s32 *arg0, s32 arg1);
M2C_UNK fn_800486D4(s32 *arg0, s32 arg1);
void fn_80048720(s32 arg0);
s32 fn_80048754(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: fn_80048540
asm s32 fn_80048540(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4C8
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800485BC
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800485BC
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_800485C0
lbl_800485BC:
    li r6, 0x1
lbl_800485C0:
    cmpwi r6, 0x0
    bne lbl_800485E8
    lis r3, lbl_803495A8@ha
    addi r3, r3, lbl_803495A8@l
    li r4, 0x2a
    lis r5, lbl_80349570@ha
    addi r5, r5, lbl_80349570@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_800485E8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80048600
asm void fn_80048600(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80048540
    mr r4, r31
    bl fn_80047D0C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80048634
asm M2C_UNK fn_80048634(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80047DF4
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80048680
asm M2C_UNK fn_80048680(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    bl fn_80048754
    addi r4, r1, 0x8
    bl fn_80047F24
    mr r4, r31
    bl fn_80047F10
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800486D4
asm M2C_UNK fn_800486D4(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80048540
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80047E74
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80048720
asm void fn_80048720(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80048540
    mr r4, r31
    bl fn_80047D80
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80048754(s8 *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x18));
}

} // extern "C"
