#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_803480B0[];
extern u8 lbl_803480D0[];
extern u8 lbl_803480E0[];
extern s32 lbl_8049C288;
extern float lbl_8049C290;
extern float lbl_8049E898;

s32 Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile(s32 *arg0, s32 *arg1);
s32 CheckRevision__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjCI(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
s32 GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0);
s32 GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0);
s32 GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0);
s32 GetResTex__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0, s32 arg1);
s32 GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
s32 GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
void Init__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Release__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Terminate__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void _restgpr_29();
void _savegpr_29();
s32 fn_80016D48(s32 *arg0);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80035E80(s32 arg0);
void fn_80035EE0(s32 arg0);
s32 fn_80035F10(s32 arg0);
s32 fn_80035F40(s32 arg0);
s32 fn_80035F70(s32 arg0);
s32 fn_80035FA0(s32 arg0);
s32 fn_80035FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003611C(s32 *arg0);
void fn_80036148(s32 *arg0);
s32 fn_8003617C(s32 *arg0);
s32 * fn_80036184(s32 *arg0, s32 arg1);
void fn_800361B4(s32 *arg0, s32 *arg1);
s32 fn_800361C0(s32 arg0);
void fn_800361F0(s32 *arg0);
s32 * fn_80036254(void);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

// asm_to_cpp: fn_80035E80
asm void fn_80035E80(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_80016E44
    addi r3, r1, 0x8
    bl CheckRevision__Q34nw4r3g3d7ResFileCFv
    cmpwi r3, 0x0
    bne lbl_80035EC0
    lis r3, lbl_803480E0@ha
    addi r3, r3, lbl_803480E0@l
    li r4, 0x21
    addi r5, r3, 0x19
    opword 0x4CC63182
    bl fn_801A9384
lbl_80035EC0:
    addi r3, r1, 0x8
    bl Init__Q34nw4r3g3d7ResFileFv
    addi r3, r1, 0x8
    bl fn_8003611C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80035EE0(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    fn_80036148((s32 *) (&sp8));
}

s32 fn_80035F10(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv((s32 *) (&sp8)));
}

s32 fn_80035F40(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc((s32 *) (&sp8)));
}

s32 fn_80035F70(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc((s32 *) (&sp8)));
}

s32 fn_80035FA0(s32 arg0) {
    s32 sp8;

    fn_80016E44((s32) ((s32) &sp8), (s32) (arg0));
    return (s32) (GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc((s32 *) (&sp8)));
}

// asm_to_cpp: fn_80035FD0
asm s32 fn_80035FD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    mr r31, r6
    addi r3, r1, 0x34
    bl fn_80016E44
    addi r3, r1, 0x34
    mr r4, r30
    bl GetResTex__Q34nw4r3g3d7ResFileCFPCc
    stw r3, 0x18(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    bl fn_80036184
    addi r3, r1, 0x30
    bl fn_80016D48
    cmpwi r3, 0x0
    beq lbl_80036100
    addi r3, r1, 0x30
    bl fn_800361C0
    cmpwi r3, 0x0
    beq lbl_80036088
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    addi r5, r1, 0x14
    addi r6, r1, 0x12
    addi r7, r1, 0x20
    addi r8, r1, 0x28
    addi r9, r1, 0x24
    addi r10, r1, 0x10
    bl GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
    li r0, 0x0
    stw r0, 0x8(r1)
    mr r3, r29
    lwz r4, 0x2c(r1)
    lhz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    lwz r7, 0x20(r1)
    mr r8, r31
    mr r9, r31
    lbz r10, 0x10(r1)
    bl GXInitTexObjCI
    b lbl_800360D0
lbl_80036088:
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    addi r5, r1, 0x14
    addi r6, r1, 0x12
    addi r7, r1, 0x1c
    addi r8, r1, 0x28
    addi r9, r1, 0x24
    addi r10, r1, 0x10
    bl GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
    mr r3, r29
    lwz r4, 0x2c(r1)
    lhz r5, 0x14(r1)
    lhz r6, 0x12(r1)
    lwz r7, 0x1c(r1)
    mr r8, r31
    mr r9, r31
    lbz r10, 0x10(r1)
    bl GXInitTexObj
lbl_800360D0:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    lfs f1, 0x28(r1)
    lfs f2, 0x24(r1)
    lfs f3, lbl_8049E898
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    li r3, 0x1
    b lbl_80036104
lbl_80036100:
    li r3, 0x0
lbl_80036104:
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_8003611C(s32 *arg0) {
    s32 sp8;

    sp8 = (s32) (*arg0);
    Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile((s32 *) (arg0), (s32 *) (&sp8));
}

void fn_80036148(s32 *arg0) {
    Release__Q34nw4r3g3d7ResFileFv((s32 *) (arg0));
    Terminate__Q34nw4r3g3d7ResFileFv((s32 *) (arg0));
}

s32 fn_8003617C(s32 *arg0) {
    return (s32) (*arg0);
}

s32 * fn_80036184(s32 *arg0, s32 arg1) {
    fn_800361B4((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_800361B4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

// asm_to_cpp: fn_800361C0
asm s32 fn_800361C0(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800361F0
    lwz r0, 0x18(r3)
    clrlwi r3, r0, 31
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800361F0
asm void fn_800361F0(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80016D48
    cmpwi r3, 0x0
    bne lbl_80036238
    bl fn_80036254
    mr r6, r3
    lis r3, lbl_803480D0@ha
    addi r3, r3, lbl_803480D0@l
    li r4, 0x26
    lis r5, lbl_803480B0@ha
    addi r5, r5, lbl_803480B0@l
    la r7, lbl_8049C290
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036238:
    mr r3, r31
    bl fn_8003617C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 * fn_80036254(void) {
    return (s32 *) (&lbl_8049C288);
}

} // extern "C"
