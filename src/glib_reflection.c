#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_803495C0[];
extern float lbl_8049EAF8;
extern float lbl_8049EB00;

void DCInvalidateRange(s32 arg0, s32 arg1);
s32 GXGetTexObjData(s8 *arg0);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
void LogMsg(s8 **arg0, s8 *arg1);
void SetPerspective__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3(s8 **arg0, s8 *arg1);
void SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo(s8 **arg0, s8 *arg1);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
M2C_UNK __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData(s32 *arg0, s32 arg1);
void _restgpr_28();
void _restgpr_29();
void _savegpr_28();
void _savegpr_29();
s32 fn_8002AF70(s32 arg0);
void fn_80034E28(s32 arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, u8 arg5, u8 arg6);
s32 * fn_80038934(s8 *arg0, u32 arg1);
s32 fn_8003899C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_800389D8(s8 *arg0, s32 arg1);
s32 fn_8004875C(s8 *arg0, s32 *arg1);
s32 fn_80048908(s32 arg0, s32 arg1);
s8 * fn_80048A64(s32 arg0, s32 arg1);
void fn_80048A88(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: fn_8004875C
asm s32 fn_8004875C(s8 *arg0, s32 *arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    mr r5, r3
    mr r30, r4
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    cmpwi r4, 0x0
    beq lbl_800488D4
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800488D4
    addi r3, r1, 0x8
    lwz r4, 0x14(r5)
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    addi r29, r30, 0x24
    addi r3, r1, 0x8
    mr r4, r29
    bl SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
    addi r3, r1, 0xc
    bl fn_8002AF70
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl LogMsg
    li r0, 0x0
    stw r0, 0xc(r1)
    lfs f0, 0x18(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0x1c(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0x20(r29)
    stfs f0, 0x18(r1)
    lfs f0, 0xc(r29)
    stfs f0, 0x1c(r1)
    lfs f0, 0x10(r29)
    stfs f0, 0x20(r1)
    lfs f0, 0x14(r29)
    stfs f0, 0x24(r1)
    lfs f0, lbl_8049EB00
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    addi r31, r30, 0x4
    mr r3, r31
    bl GXGetTexObjWidth
    mr r30, r3
    mr r3, r31
    bl GXGetTexObjHeight
    mr r31, r3
    addi r3, r1, 0x8
    lfs f1, 0x24(r29)
    clrlwi r0, r30, 16
    lfd f3, lbl_8049EAF8
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f3
    clrlwi r0, r31, 16
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f3
    fdivs f2, f2, f0
    lfs f3, 0x28(r29)
    lfs f4, 0x2c(r29)
    bl SetPerspective__Q34nw4r3g3d6CameraFffff
    addi r3, r1, 0x8
    lfs f1, lbl_8049EB00
    fmr f2, f1
    clrlwi r0, r30, 16
    lfd f4, lbl_8049EAF8
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f3, f0, f4
    clrlwi r0, r31, 16
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f4, f0, f4
    bl SetViewport__Q34nw4r3g3d6CameraFffff
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    bl SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl
    li r3, 0x1
    b lbl_800488F0
lbl_800488D4:
    lis r3, lbl_803495C0@ha
    addi r3, r3, lbl_803495C0@l
    li r4, 0xa6
    addi r5, r3, 0x77
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800488F0:
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80048908
asm s32 fn_80048908(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    li r4, 0x1
    bl fn_800389D8
    cmpwi r3, 0x0
    beq lbl_80048A48
    mr r3, r29
    mr r4, r28
    li r5, 0x1
    bl fn_8003899C
    cmpwi r3, 0x0
    beq lbl_80048A48
    mr r3, r29
    mr r4, r28
    bl fn_80048A64
    mr r29, r3
    bl GXGetTexObjData
    addis r28, r3, 0x8000
    mr r3, r29
    bl GXGetTexObjWidth
    mr r30, r3
    mr r3, r29
    bl GXGetTexObjHeight
    mr r31, r3
    mr r3, r29
    bl GXGetTexObjFmt
    subi r0, r3, 0x3
    cmplwi r0, 0x2
    ble lbl_800489D4
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_800489C4
    cmpwi r3, 0x0
    beq lbl_800489B0
    cmpwi r3, 0x6
    beq lbl_800489E8
    b lbl_800489FC
lbl_800489B0:
    clrlwi r3, r30, 16
    clrlwi r0, r31, 16
    mullw r0, r3, r0
    srawi r4, r0, 1
    b lbl_80048A18
lbl_800489C4:
    clrlwi r3, r30, 16
    clrlwi r0, r31, 16
    mullw r4, r3, r0
    b lbl_80048A18
lbl_800489D4:
    clrlwi r3, r30, 16
    clrlwi r0, r31, 16
    mullw r0, r3, r0
    slwi r4, r0, 1
    b lbl_80048A18
lbl_800489E8:
    clrlwi r3, r30, 16
    clrlwi r0, r31, 16
    mullw r0, r3, r0
    slwi r4, r0, 2
    b lbl_80048A18
lbl_800489FC:
    lis r3, lbl_803495C0@ha
    addi r3, r3, lbl_803495C0@l
    li r4, 0xc6
    addi r5, r3, 0x77
    opword 0x4CC63182
    bl fn_801A9384
    li r4, 0x0
lbl_80048A18:
    mr r3, r28
    bl DCInvalidateRange
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    clrlwi r6, r30, 16
    clrlwi r7, r31, 16
    li r8, 0x1
    li r9, 0x0
    bl fn_80034E28
    li r3, 0x1
    b lbl_80048A4C
lbl_80048A48:
    li r3, 0x0
lbl_80048A4C:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s8 * fn_80048A64(s32 arg0, s32 arg1) {
    return (s8 *) ((s8 *)fn_80038934((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)) + 4);
}

void fn_80048A88(s32 arg0) {
}

} // extern "C"
