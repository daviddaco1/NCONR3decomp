#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_803395C0[];
extern u8 lbl_80348838[];
extern u8 lbl_80348864[];
extern u8 lbl_80348888[];
extern u8 lbl_80348898[];
extern u8 lbl_803488D0[];
extern u8 lbl_803488E0[];
extern u8 lbl_80348908[];
extern u8 lbl_80348918[];
extern u8 lbl_80348928[];
extern u8 lbl_80348948[];
extern u8 lbl_80348958[];
extern u8 lbl_80348980[];
extern u8 lbl_80348990[];
extern u8 lbl_803489B8[];
extern u8 lbl_803489C8[];
extern float lbl_8049C2B0;
extern float lbl_8049E8D8;
extern s32 lbl_8049E8E0;
extern float lbl_8049E8E4;

void DCFlushRange(s32 arg0, s32 arg1);
void DCInvalidateRange(s32 arg0, s32 arg1);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
s32 GXGetChanMatColor__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDP8_GXColor(s32 *arg0, s32 arg1, s8 *arg2);
s32 GXGetTexObjFmt(s8 *arg0);
u16 GXGetTexObjHeight(s8 *arg0);
u16 GXGetTexObjWidth(s8 *arg0);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInvalidateTexAll(void);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanMatColor__Q34nw4r3g3d10ResMatChanF12_GXChannelID8_GXColor(s32 *arg0, s32 arg1, s8 *arg2);
void GXSetColorUpdate(s32 arg0);
void GXSetCopyClear(s8 *arg0, s32 arg1);
void GXSetCullMode(s32 arg0);
void GXSetDither(s32 arg0);
void GXSetDstAlpha(s32 arg0, s32 arg1);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
s8 * GetInvCameraMtxPtr__Q34nw4r3g3d8G3DStateFv(void);
s32 GetResGenMode__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb(s8 *arg0, s32 arg1);
s32 GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv(s8 **arg0);
s8 * GetResNode__Q34nw4r3g3d6ResMdlCFUl(s8 **arg0, s32 arg1);
s32 GetTexObj__Q34nw4r3g3d9ResTexObjF11_GXTexMapID(s32 *arg0, s32 arg1);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
void LogMsg(s8 **arg0, s8 *arg1);
M2C_UNK MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34(s32 arg0);
f32 PSMTXConcat(s32 arg0, s32 arg1, s32 arg2);
s32 SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34(s32 *arg0, u32 arg1, s8 *arg2);
s32 SetMapMode__Q34nw4r3g3d9ResTexSrtFUlUlii(s32 *arg0, u32 arg1, u8 arg2, s8 arg3, s8 arg4);
void SetOrtho__Q34nw4r3g3d6CameraFffffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5);
void SetPerspective__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3(s8 **arg0, s8 *arg1);
void SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo(s8 **arg0, s8 *arg1);
void SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl(s8 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType(u32 arg0, s32 arg1, s32 arg2);
void SetViewport__Q34nw4r3g3d6CameraFffff(s8 **arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
M2C_UNK __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData(s32 *arg0, s32 arg1);
s8 * __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl(s8 *arg0, s8 *arg1, u32 arg2);
void __throw(s32 arg0, s32 arg1, s32 arg2);
s32 _restgpr_18();
s32 _restgpr_22();
s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_18();
s32 _savegpr_22();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_28();
s32 _savegpr_29();
s8 * dtor_80027B08(s8 *arg0, s16 arg1);
M2C_UNK fn_80018B90(s32 arg0);
void fn_80027AF8(void);
s32 fn_80027AFC(s32 arg0, s32 arg1);
M2C_UNK fn_80027B04(s32 arg0, s32 arg1);
void fn_80027B74(s32 arg0);
s8 * fn_80027B84(s8 *arg0, s32 arg1);
s32 fn_80027CAC();
s32 fn_80027CCC(s32 arg0);
s32 fn_8002AE00(s8 *arg0);
s32 fn_8002AE08(s32 arg0);
M2C_UNK fn_8002AE3C(s32 arg0);
void fn_8002AE40(s32 arg0);
s32 fn_8002AF70(s32 arg0);
s32 fn_8002B958(s32 arg0);
s32 fn_8002B99C(s8 *arg0);
s32 fn_8002B9A4(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s8 * fn_8002F230(s8 *arg0, s32 arg1);
void fn_80030E30(s32 arg0);
void fn_80030E40(s32 arg0);
M2C_UNK * fn_80030E44(M2C_UNK *arg0, s32 arg1);
void fn_80030EE0(s32 *arg0);
M2C_UNK fn_80030F4C(s32 *arg0);
M2C_UNK * fn_80031960(M2C_UNK *arg0, s32 arg1);
s32 fn_80031BB0(s32 *arg0);
s32 fn_80034BD8(s8 *arg0, s32 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, u8 arg7);
void fn_80034F44(s8 *arg0, u16 arg1, u16 arg2, u16 arg3, u16 arg4, s32 arg5, u8 arg6, u8 arg7);
void fn_80035050(s8 *arg0, s32 arg1, u8 arg2, u8 arg3, u8 arg4);
s32 fn_80038068(s8 *arg0, s32 arg1);
void fn_80038084(s8 *arg0, s32 arg1);
s32 * fn_800380BC(s8 *arg0, u32 arg1);
s32 fn_80038124(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_800389EC(s8 **arg0);
s32 fn_8003A194(s8 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8003A60C(s8 *arg0);
s8 * fn_8003A660(s8 *arg0);
u32 fn_8003A6AC(s32 *arg0);
void fn_8003A798(s32 arg0);
void fn_8003A914(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8003AA00(u16 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_8003AAF0(s32 arg0, u8 arg1);
void fn_8003AC4C(s32 arg0, u16 arg1, s32 arg2);
s32 fn_8003AD68(s8 *arg0, M2C_UNK *arg1, f32 farg0);
s32 fn_8003AEBC(s8 *arg0, s8 *arg1);
s32 fn_8003B0AC(s8 *arg0, s32 arg1);
s32 fn_8003B2B4(s8 *arg0, s32 arg1);
s32 fn_8003BCFC(s8 *arg0, u32 arg1);
void fn_8003BDB4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK *arg7);
void fn_8003BEE4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void fn_8003C078(u32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4);
void fn_8003C0E8(s32 arg0, s32 arg1);
void fn_8003C110(s8 *arg0, s32 arg1, s32 arg2, f32 farg0);
void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003C34C(s8 *arg0, u32 arg1);
void fn_8003C394(s8 *arg0, u32 arg1);
void fn_8003C3DC(s32 arg0, s32 arg1, s32 arg2);
void fn_8003C414(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_8003C44C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s8 * fn_8003CA30(s8 *arg0, s16 arg1);
s32 fn_8003CAD8(s32 arg0);
M2C_UNK fn_8003CB30(s32 *arg0);
s32 fn_8003CB94(void);
s32 fn_8003CBA0(s32 *arg0, u32 arg1);
s32 * fn_8003CC50(s32 *arg0, s32 arg1);
u32 fn_8003CCB4(s32 arg0);
s32 fn_8003CCD8(s32 arg0);
s32 * fn_8003CD0C(s32 *arg0, s32 arg1);
void fn_8003CD70(s32 arg0);
void fn_8003CD74(s32 *arg0);
s32 fn_8003CDB0(void);
s32 * fn_8003CDE4(s32 *arg0, s32 arg1);
s32 fn_8003CE48(s32 *arg0);
s32 fn_8003CE50(s32 *arg0);
s32 * fn_8003CE60(s32 *arg0, s32 arg1);
void fn_8003CE90(s32 *arg0, s32 *arg1);
void fn_8003CE9C(s32 *arg0, s32 arg1);
s32 fn_8003CEA4(s32 *arg0, s32 arg1);
s32 * fn_8003CEC0(s32 *arg0, s32 arg1);
void fn_8003CEF0(s32 *arg0, s32 arg1);
s32 fn_8003CEF8(s32 *arg0);
void fn_8003CF08(s32 *arg0, s32 arg1);
s32 fn_8003CF10(s32 *arg0, s32 arg1);
s32 * fn_8003CF2C(s32 *arg0, s32 arg1);
void fn_8003CF5C(s32 *arg0, s32 *arg1);
void fn_8003CF68(s32 *arg0, s32 arg1);
s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8003CFD4(s32 *arg0);
s32 fn_8003CFE4(s8 *arg0, s32 arg1);
s32 fn_8003D018(s8 *arg0);
s32 fn_8003D040(s8 *arg0);
s32 fn_8003D048(s8 *arg0, s32 arg1);
s32 fn_8003D0A8(s8 *arg0, s32 arg1);
s32 fn_8003D108(s8 *arg0, s32 arg1);
void fn_8003D168(s32 arg0);
void fn_8003D16C(void);
void fn_8003D170(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8003D17C(u8 arg0, u8 arg1);
void fn_8003D194(f32 farg0, f32 farg1);
void fn_8003D1A4(s32 *arg0);
void fn_8003D62C(s32 arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 fn_801CEA04(u32 **arg0, u32 **arg1);
void fn_801D2AF8(s32 **arg0, s32 arg1);
s8 * fn_801E292C(s32 arg0);
void fn_802E1450(void);
void fn_802E151C(void);
void fn_802E430C(s32 arg0);
void fn_802E432C(s32 arg0);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4654(s32 arg0, u32 *arg1);
void fn_802E4700(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
s32 strcmp(s32 arg0, s32 arg1);

// asm_to_cpp: fn_8003A194
asm s32 fn_8003A194(s8 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_18
    mr r31, r1
    mr r25, r3
    mr r19, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    lbz r18, 0x7b(r31)
    li r23, 0x0
    cmpwi r5, 0x0
    bne lbl_8003A1DC
    li r26, 0x1
lbl_8003A1DC:
    mulli r22, r26, 0x48
    cmpwi r10, 0x0
    beq lbl_8003A1F4
    li r21, 0x3
    li r20, 0x100
    b lbl_8003A1FC
lbl_8003A1F4:
    li r21, 0x1
    li r20, 0x10
lbl_8003A1FC:
    li r24, 0x0
    stw r24, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x1c
    clrlwi r5, r20, 16
    mr r6, r5
    mr r7, r21
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    lwz r3, 0x1c(r31)
    bl fn_8002B958
    stw r3, 0x1c(r31)
    stw r24, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x18
    clrlwi r5, r27, 16
    clrlwi r6, r28, 16
    mr r7, r21
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    lwz r3, 0x18(r31)
    bl fn_8002B958
    stw r3, 0x18(r31)
    cmpwi r18, 0x0
    beq lbl_8003A300
    stw r24, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x14
    clrlwi r5, r27, 16
    clrlwi r6, r28, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    lwz r3, 0x14(r31)
    bl fn_8002B958
    stw r3, 0x14(r31)
    li r0, 0x1
    stw r0, 0x8(r1)
    li r3, 0x0
    addi r4, r31, 0x10
    clrlwi r0, r27, 16
    srawi r0, r0, 1
    clrlwi r5, r0, 16
    clrlwi r0, r28, 16
    srawi r0, r0, 1
    clrlwi r6, r0, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    lwz r3, 0x10(r31)
    bl fn_8002B958
    stw r3, 0x10(r31)
    b lbl_8003A308
lbl_8003A300:
    stw r24, 0x14(r31)
    stw r24, 0x10(r31)
lbl_8003A308:
    li r3, 0xc0
    bl fn_80027CCC
    mr r24, r3
    add r3, r3, r22
    bl fn_8002B958
    mr r22, r3
    cmpwi r19, 0x0
    beq lbl_8003A434
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r19, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003A364
    clrrwi r3, r19, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003A364
    li r9, 0x0
lbl_8003A364:
    cmpwi r9, 0x0
    bne lbl_8003A380
    clrrwi r3, r19, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003A380
    li r8, 0x0
lbl_8003A380:
    cmpwi r8, 0x0
    bne lbl_8003A398
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003A398
    li r7, 0x0
lbl_8003A398:
    cmpwi r7, 0x0
    bne lbl_8003A3B4
    clrrwi r3, r19, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003A3B4
    li r6, 0x0
lbl_8003A3B4:
    cmpwi r6, 0x0
    bne lbl_8003A3D0
    clrrwi r3, r19, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003A3D0
    li r5, 0x0
lbl_8003A3D0:
    cmpwi r5, 0x0
    bne lbl_8003A3EC
    clrrwi r3, r19, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003A3EC
    li r4, 0x0
lbl_8003A3EC:
    cmpwi r4, 0x0
    bne lbl_8003A410
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x7d
    addi r5, r3, 0x10
    mr r6, r19
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003A410:
    lwz r0, 0x10(r31)
    lwz r5, 0x18(r31)
    add r3, r0, r22
    lwz r4, 0x14(r31)
    lwz r0, 0x1c(r31)
    add r3, r5, r3
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x0(r19)
lbl_8003A434:
    cmpwi r25, 0x0
    beq lbl_8003A5E8
    mr r3, r25
    mr r4, r22
    bl fn_80027B04
    mr r22, r3
    clrlwi r0, r22, 27
    cmpwi r0, 0x0
    beq lbl_8003A470
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x89
    addi r5, r3, 0x44
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003A470:
    cmpwi r22, 0x0
    bne lbl_8003A480
    li r3, 0x0
    b lbl_8003A5EC
lbl_8003A480:
    li r19, 0x0
    stw r19, 0x8(r1)
    mr r3, r25
    li r4, 0x0
    clrlwi r5, r20, 16
    mr r6, r5
    mr r7, r21
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    mr r20, r3
    stw r19, 0x8(r1)
    mr r3, r25
    li r4, 0x0
    clrlwi r5, r27, 16
    clrlwi r6, r28, 16
    mr r7, r21
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    mr r21, r3
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_8003A520
    stw r19, 0x8(r1)
    mr r3, r25
    li r4, 0x0
    clrlwi r5, r27, 16
    clrlwi r6, r28, 16
    li r7, 0x6
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    b lbl_8003A524
lbl_8003A520:
    mr r3, r19
lbl_8003A524:
    mr r19, r3
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8003A57C
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r3, r25
    li r4, 0x0
    clrlwi r0, r27, 16
    srawi r0, r0, 1
    clrlwi r5, r0, 16
    clrlwi r0, r28, 16
    srawi r0, r0, 1
    clrlwi r6, r0, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    clrlwi r10, r10, 24
    bl fn_80034BD8
    mr r27, r3
    b lbl_8003A580
lbl_8003A57C:
    li r27, 0x0
lbl_8003A580:
    add r24, r22, r24
    li r3, 0xc0
    mr r4, r22
    bl fn_80027AFC
    mr r23, r3
    cmpwi r3, 0x0
    beq lbl_8003A5E8
    stw r1, 0x34(r31)
    stw r29, 0x8(r1)
    stw r30, 0xc(r1)
    mr r4, r25
    mr r5, r20
    mr r6, r21
    mr r7, r19
    mr r8, r27
    mr r9, r24
    mr r10, r26
    bl fn_8003C44C
    b lbl_8003A5E8
    mr r3, r23
    mr r4, r22
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_8003A5E8:
    mr r3, r23
lbl_8003A5EC:
    mr r10, r31
    addi r11, r10, 0x70
    bl _restgpr_18
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_8003A60C
asm void fn_8003A60C(s8 *arg0) {
    nofralloc
    lfs f2, lbl_8049E8E4
    la r4, lbl_8049E8E4
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    stfs f0, 0x0(r3)
    stfs f2, 0x8(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x18(r3)
    lfs f1, 0x8(r4)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0x24(r3)
    stfs f1, 0x28(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x2c(r3)
    stfs f2, 0x30(r3)
    stfs f2, 0x34(r3)
    blr
}

s8 * fn_8003A660(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) (2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (0);
    fn_8003A60C((s8 *) (arg0 + 0x10));
    return (s8 *) (arg0);
}

// asm_to_cpp: fn_8003A6AC
asm u32 fn_8003A6AC(s32 *arg0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_28
    mr r28, r3
    li r30, -0x1
    addi r5, r1, 0x1c
    lis r3, lbl_803395C0@ha
    addi r3, r3, lbl_803395C0@l
    subi r4, r3, 0x4
    li r0, 0x4
    mtctr r0
lbl_8003A6E0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8003A6E0
    addi r3, r1, 0x18
    addi r4, r1, 0x20
    bl fn_8003CEC0
    mr r3, r28
    bl fn_8003CCB4
    mr r31, r3
    li r29, 0x0
    b lbl_8003A774
lbl_8003A714:
    mr r3, r28
    mr r4, r29
    bl fn_8003CBA0
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8003CE60
    addi r3, r1, 0x14
    bl fn_8003CE50
    cmpwi r3, 0x0
    beq lbl_8003A77C
    lwz r0, 0x18(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x14
    bl fn_8003CAD8
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801CEA04
    cmpwi r3, 0x0
    beq lbl_8003A770
    mr r30, r29
    b lbl_8003A77C
lbl_8003A770:
    addi r29, r29, 0x1
lbl_8003A774:
    cmplw r29, r31
    blt lbl_8003A714
lbl_8003A77C:
    mr r3, r30
    addi r11, r1, 0x50
    bl _restgpr_28
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8003A798
asm void fn_8003A798(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_8002B99C
    mr r31, r3
    mr r3, r30
    bl fn_8002B9A4
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003A800
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003A800
    li r10, 0x0
lbl_8003A800:
    cmpwi r10, 0x0
    bne lbl_8003A81C
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003A81C
    li r9, 0x0
lbl_8003A81C:
    cmpwi r9, 0x0
    bne lbl_8003A834
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003A834
    li r8, 0x0
lbl_8003A834:
    cmpwi r8, 0x0
    bne lbl_8003A850
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003A850
    li r7, 0x0
lbl_8003A850:
    cmpwi r7, 0x0
    bne lbl_8003A86C
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003A86C
    li r6, 0x0
lbl_8003A86C:
    cmpwi r6, 0x0
    bne lbl_8003A888
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003A888
    li r5, 0x0
lbl_8003A888:
    cmpwi r5, 0x0
    bne lbl_8003A8AC
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x132
    addi r5, r3, 0x73
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003A8AC:
    mr r3, r31
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    cmplwi r0, 0x100
    beq lbl_8003A8E0
    mr r3, r30
    li r4, 0x10
    li r5, 0x10
    li r6, 0x8
    li r7, 0x4
    li r8, 0x0
    bl fn_8003A914
    b lbl_8003A8FC
lbl_8003A8E0:
    mr r3, r30
    li r4, 0x100
    li r5, 0x100
    li r6, 0x4
    li r7, 0x4
    li r8, 0x1
    bl fn_8003AA00
lbl_8003A8FC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003A914
asm void fn_8003A914(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    add r9, r4, r6
    subi r0, r9, 0x1
    divw r12, r0, r6
    add r9, r5, r7
    subi r0, r9, 0x1
    divw r31, r0, r7
    mr r30, r3
    li r29, 0x0
    b lbl_8003A9D8
lbl_8003A94C:
    li r28, 0x0
    mullw r9, r29, r7
    b lbl_8003A9CC
lbl_8003A958:
    li r27, 0x0
    mullw r10, r28, r6
    b lbl_8003A9C0
lbl_8003A964:
    li r26, 0x0
    cmpwi r6, 0x0
    ble lbl_8003A9BC
    add r25, r27, r9
    mullw r11, r25, r4
    mtctr r6
    ble lbl_8003A9BC
lbl_8003A980:
    add r0, r26, r10
    cmpwi r8, 0x0
    beq lbl_8003A9A4
    mullw r0, r0, r5
    add r0, r25, r0
    clrlwi r0, r0, 24
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
    b lbl_8003A9B4
lbl_8003A9A4:
    add r0, r0, r11
    clrlwi r0, r0, 24
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_8003A9B4:
    addi r26, r26, 0x1
    bdnz lbl_8003A980
lbl_8003A9BC:
    addi r27, r27, 0x1
lbl_8003A9C0:
    cmpw r27, r7
    blt lbl_8003A964
    addi r28, r28, 0x1
lbl_8003A9CC:
    cmpw r28, r12
    blt lbl_8003A958
    addi r29, r29, 0x1
lbl_8003A9D8:
    cmpw r29, r31
    blt lbl_8003A94C
    mullw r4, r4, r5
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8003AA00
asm void fn_8003AA00(u16 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    add r9, r4, r6
    subi r0, r9, 0x1
    divw r12, r0, r6
    add r9, r5, r7
    subi r0, r9, 0x1
    divw r31, r0, r7
    mr r30, r3
    li r29, 0x0
    b lbl_8003AAC4
lbl_8003AA38:
    li r28, 0x0
    mullw r9, r29, r7
    b lbl_8003AAB8
lbl_8003AA44:
    li r27, 0x0
    mullw r10, r28, r6
    b lbl_8003AAAC
lbl_8003AA50:
    li r26, 0x0
    cmpwi r6, 0x0
    ble lbl_8003AAA8
    add r25, r27, r9
    mullw r11, r25, r4
    mtctr r6
    ble lbl_8003AAA8
lbl_8003AA6C:
    add r0, r26, r10
    cmpwi r8, 0x0
    beq lbl_8003AA90
    mullw r0, r0, r5
    add r0, r25, r0
    clrlwi r0, r0, 16
    sth r0, 0x0(r30)
    addi r30, r30, 0x2
    b lbl_8003AAA0
lbl_8003AA90:
    add r0, r0, r11
    clrlwi r0, r0, 16
    sth r0, 0x0(r30)
    addi r30, r30, 0x2
lbl_8003AAA0:
    addi r26, r26, 0x1
    bdnz lbl_8003AA6C
lbl_8003AAA8:
    addi r27, r27, 0x1
lbl_8003AAAC:
    cmpw r27, r7
    blt lbl_8003AA50
    addi r28, r28, 0x1
lbl_8003AAB8:
    cmpw r28, r12
    blt lbl_8003AA44
    addi r29, r29, 0x1
lbl_8003AAC4:
    cmpw r29, r31
    blt lbl_8003AA38
    slwi r0, r4, 1
    mullw r4, r5, r0
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8003AAF0
asm void fn_8003AAF0(s32 arg0, u8 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r31, r4
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003AB48
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003AB48
    li r10, 0x0
lbl_8003AB48:
    cmpwi r10, 0x0
    bne lbl_8003AB64
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003AB64
    li r9, 0x0
lbl_8003AB64:
    cmpwi r9, 0x0
    bne lbl_8003AB7C
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003AB7C
    li r8, 0x0
lbl_8003AB7C:
    cmpwi r8, 0x0
    bne lbl_8003AB98
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003AB98
    li r7, 0x0
lbl_8003AB98:
    cmpwi r7, 0x0
    bne lbl_8003ABB4
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003ABB4
    li r6, 0x0
lbl_8003ABB4:
    cmpwi r6, 0x0
    bne lbl_8003ABD0
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003ABD0
    li r5, 0x0
lbl_8003ABD0:
    cmpwi r5, 0x0
    bne lbl_8003ABF4
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x180
    addi r5, r3, 0xa7
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003ABF4:
    cmpwi r30, 0x0
    beq lbl_8003AC34
    clrlwi r0, r31, 24
    cmplwi r0, 0x1f
    bgt lbl_8003AC2C
    bl GetInvCameraMtxPtr__Q34nw4r3g3d8G3DStateFv
    mr r29, r3
    extsb r3, r31
    bl fn_801E292C
    mr r4, r3
    mr r3, r30
    mr r5, r29
    bl fn_8003CF70
    b lbl_8003AC34
lbl_8003AC2C:
    mr r3, r30
    bl fn_8002AE08
lbl_8003AC34:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003AC4C
asm void fn_8003AC4C(s32 arg0, u16 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    mr r24, r3
    mr r27, r4
    mr r25, r5
    bl fn_8002AE00
    stw r3, 0x10(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x10
    bl fn_8002E628
    addi r3, r1, 0x1c
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r28, r3
    li r26, 0x0
    clrlwi r0, r27, 16
    slwi r0, r0, 3
    clrlwi r27, r0, 24
    lis r29, lbl_803489C8@ha
    li r31, 0x0
    li r30, 0xff
    b lbl_8003AD48
lbl_8003ACAC:
    addi r3, r1, 0x20
    mr r4, r24
    mr r5, r26
    bl __ct__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFPQ34nw4r3g3d6ScnMdlUl
    addi r3, r1, 0x20
    bl fn_8003CFD4
    cmpwi r3, 0x0
    bne lbl_8003ACE0
    addi r3, r29, lbl_803489C8@l
    li r4, 0x1a3
    addi r5, r3, 0xda
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003ACE0:
    addi r3, r1, 0x20
    li r4, 0x0
    bl GetResGenMode__Q44nw4r3g3d6ScnMdl15CopiedMatAccessFb
    stw r3, 0xc(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_80030E44
    addi r3, r1, 0x18
    li r4, 0x0
    addi r5, r1, 0x14
    bl GXGetChanMatColor__Q34nw4r3g3d10ResMatChanCF12_GXChannelIDP8_GXColor
    stb r27, 0x15(r1)
    cmpwi r25, 0x0
    beq lbl_8003AD20
    stb r30, 0x16(r1)
    b lbl_8003AD24
lbl_8003AD20:
    stb r31, 0x16(r1)
lbl_8003AD24:
    lwz r0, 0x14(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    addi r5, r1, 0x8
    bl GXSetChanMatColor__Q34nw4r3g3d10ResMatChanF12_GXChannelID8_GXColor
    addi r3, r1, 0x18
    bl fn_80030E40
    addi r26, r26, 0x1
lbl_8003AD48:
    cmplw r26, r28
    blt lbl_8003ACAC
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8003AD68
asm s32 fn_8003AD68(s8 *arg0, M2C_UNK *arg1, f32 farg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    fmr f28, f1
    bl fn_8003D018
    cmpwi r3, 0x0
    beq lbl_8003AE70
    lwz r3, 0xa0(r29)
    lfs f30, 0xb4(r3)
    lfs f29, 0xb8(r3)
    la r31, lbl_8049E8E4
    lfs f0, 0x8(r31)
    fadds f1, f0, f28
    fsubs f0, f29, f30
    fmuls f28, f1, f0
    mr r3, r29
    bl fn_8003CFE4
    cmpwi r3, 0x0
    beq lbl_8003ADEC
    lfs f31, 0x14(r31)
    b lbl_8003ADF0
lbl_8003ADEC:
    lfs f31, 0x10(r31)
lbl_8003ADF0:
    mr r3, r30
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
    lwz r3, 0xa0(r29)
    lwz r0, 0xa8(r3)
    cmpwi r0, 0x0
    bne lbl_8003AE2C
    la r3, lbl_8049E8E4
    lfs f0, 0x8(r3)
    stfs f0, 0x28(r30)
    fdivs f0, f29, f28
    stfs f0, 0x18(r30)
    fmuls f0, f29, f30
    fdivs f0, f0, f28
    stfs f0, 0x1c(r30)
    b lbl_8003AE50
lbl_8003AE2C:
    la r3, lbl_8049E8E4
    lfs f0, 0x8(r3)
    stfs f0, 0x2c(r30)
    lfs f0, 0x18(r3)
    fdivs f0, f0, f28
    stfs f0, 0x18(r30)
    fneg f0, f30
    fdivs f0, f0, f28
    stfs f0, 0x1c(r30)
lbl_8003AE50:
    lfs f0, 0x18(r30)
    fmuls f0, f0, f31
    stfs f0, 0x8(r30)
    lfs f0, 0x1c(r30)
    fmuls f0, f0, f31
    stfs f0, 0xc(r30)
    li r3, 0x1
    b lbl_8003AE74
lbl_8003AE70:
    li r3, 0x0
lbl_8003AE74:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    li r0, 0x38
    opword 0x13A1000C
    lfd f29, 0x30(r1)
    li r0, 0x28
    opword 0x1381000C
    lfd f28, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8003AEBC
asm s32 fn_8003AEBC(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_28
    mr r5, r3
    mr r28, r4
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r0, 0x4330
    stw r0, 0x40(r1)
    cmpwi r4, 0x0
    beq lbl_8003B078
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8003B078
    addi r3, r1, 0x8
    lwz r4, 0xa0(r5)
    bl __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
    addi r29, r28, 0x10
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
    la r3, lbl_8049E8E4
    lfs f0, 0x4(r3)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
    lwz r3, 0x4(r28)
    bl fn_8002B99C
    mr r31, r3
    bl GXGetTexObjWidth
    mr r30, r3
    mr r3, r31
    bl GXGetTexObjHeight
    mr r31, r3
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8003AFF8
    addi r3, r1, 0x8
    lfs f1, 0x24(r29)
    clrlwi r0, r30, 16
    lfd f3, lbl_8049E8D8
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
    b lbl_8003B018
lbl_8003AFF8:
    addi r3, r1, 0x8
    lfs f1, 0x34(r29)
    fneg f2, f1
    lfs f4, 0x30(r29)
    fneg f3, f4
    lfs f5, 0x28(r29)
    lfs f6, 0x2c(r29)
    bl SetOrtho__Q34nw4r3g3d6CameraFffffff
lbl_8003B018:
    addi r3, r1, 0x8
    la r4, lbl_8049E8E4
    lfs f1, 0x4(r4)
    fmr f2, f1
    clrlwi r0, r30, 16
    lfd f4, lbl_8049E8D8
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f3, f0, f4
    clrlwi r0, r31, 16
    stw r0, 0x44(r1)
    lfd f0, 0x40(r1)
    fsubs f4, f0, f4
    bl SetViewport__Q34nw4r3g3d6CameraFffff
    addi r3, r1, 0x8
    li r4, 0x2
    li r5, 0x2
    clrlwi r6, r30, 16
    subi r6, r6, 0x4
    clrlwi r7, r31, 16
    subi r7, r7, 0x4
    bl SetScissor__Q34nw4r3g3d6CameraFUlUlUlUl
    li r3, 0x1
    b lbl_8003B094
lbl_8003B078:
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x211
    addi r5, r3, 0x104
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8003B094:
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8003B0AC
asm s32 fn_8003B0AC(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r28, r3
    mr r29, r4
    li r4, 0x1
    bl fn_80038068
    cmpwi r3, 0x0
    beq lbl_8003B298
    mr r3, r28
    bl fn_8003CFE4
    cmpwi r3, 0x0
    beq lbl_8003B0F4
    li r31, 0x13
    li r30, 0x2
    b lbl_8003B0FC
lbl_8003B0F4:
    li r31, 0x11
    li r30, 0x1
lbl_8003B0FC:
    mr r3, r28
    mr r4, r29
    bl fn_800380BC
    lwz r27, 0x8(r3)
    cmpwi r27, 0x0
    beq lbl_8003B21C
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    mr r3, r27
    bl fn_8002B99C
    mr r25, r3
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    slwi r26, r0, 2
    mr r3, r25
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r26, r0, r26
    mr r3, r27
    bl fn_8002B9A4
    mr r4, r26
    bl DCInvalidateRange
    mr r3, r25
    bl GXGetTexObjFmt
    mr r4, r3
    mr r3, r27
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    mr r3, r28
    mr r4, r29
    li r5, 0x8
    bl fn_80038124
    cmpwi r3, 0x0
    beq lbl_8003B21C
    mr r3, r28
    mr r4, r29
    bl fn_800380BC
    lwz r25, 0xc(r3)
    cmpwi r25, 0x0
    beq lbl_8003B21C
    mr r3, r25
    bl fn_8002B99C
    mr r27, r3
    bl GXGetTexObjWidth
    mr r26, r3
    mr r3, r27
    bl GXGetTexObjHeight
    mr r27, r3
    mr r3, r25
    bl fn_8002B9A4
    clrlwi r4, r26, 16
    clrlwi r0, r27, 16
    mullw r4, r4, r0
    bl DCInvalidateRange
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    clrlwi r0, r26, 16
    slwi r0, r0, 1
    clrlwi r6, r0, 16
    clrlwi r0, r27, 16
    slwi r0, r0, 1
    clrlwi r7, r0, 16
    li r8, 0x27
    li r9, 0x0
    li r10, 0x0
    bl fn_80034F44
lbl_8003B21C:
    mr r3, r28
    mr r4, r29
    bl fn_800380BC
    lwz r26, 0x4(r3)
    cmpwi r26, 0x0
    beq lbl_8003B298
    mr r3, r26
    bl fn_8002B99C
    mr r25, r3
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    mullw r28, r30, r0
    mr r3, r25
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r28, r0, r28
    mr r3, r26
    bl fn_8002B9A4
    mr r4, r28
    bl DCInvalidateRange
    mr r3, r26
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_80035050
    bl fn_802E151C
    bl fn_802E1450
    bl GXInvalidateTexAll
    li r3, 0x1
    b lbl_8003B29C
lbl_8003B298:
    li r3, 0x0
lbl_8003B29C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8003B2B4
asm s32 fn_8003B2B4(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    addi r11, r1, 0x60
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    li r4, 0x1
    bl fn_80038068
    cmpwi r3, 0x0
    beq lbl_8003BCBC
    mr r3, r29
    mr r4, r28
    li r5, 0x8
    bl fn_80038124
    cmpwi r3, 0x0
    beq lbl_8003BCBC
    mr r3, r29
    mr r4, r28
    bl fn_800380BC
    lwz r31, 0x8(r3)
    mr r3, r29
    mr r4, r28
    bl fn_800380BC
    lwz r28, 0xc(r3)
    cmpwi r31, 0x0
    beq lbl_8003BCBC
    cmpwi r28, 0x0
    beq lbl_8003BCBC
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetDither
    li r3, 0x0
    bl GXSetColorUpdate
    li r3, 0x0
    bl fn_8003D62C
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl fn_802E432C
    li r3, 0x2
    bl fn_802E432C
    li r3, 0x3
    bl fn_802E432C
    li r3, 0x4
    bl fn_802E432C
    mr r3, r28
    bl fn_8002B99C
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x5
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_8003D170
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x21
    bl fn_8003D170
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x24
    bl fn_8003D170
    li r3, 0x3
    li r4, 0x1
    li r5, 0x4
    li r6, 0x27
    bl fn_8003D170
    li r3, 0x4
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8003D170
    li r0, 0x70
    stb r0, 0xc(r1)
    li r0, 0x0
    stb r0, 0xd(r1)
    stb r0, 0xe(r1)
    li r0, 0xc0
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    addi r4, r1, 0x8
    bl fn_802E4654
    li r3, 0x5
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x2
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x2
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x2
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0x3
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x10
    bl fn_802E4700
    li r3, 0x3
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x4
    li r4, 0x4
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x4
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x4
    li r4, 0x6
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x4
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    li r3, 0x2
    bl GXSetCullMode
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    mr r3, r28
    bl fn_8002B99C
    mr r30, r3
    bl GXGetTexObjWidth
    mr r29, r3
    mr r3, r30
    bl GXGetTexObjHeight
    mr r30, r3
    mr r3, r28
    bl fn_8002B9A4
    clrlwi r4, r29, 16
    clrlwi r0, r30, 16
    mullw r4, r4, r0
    bl DCInvalidateRange
    clrlwi r0, r29, 16
    lfd f1, lbl_8049E8D8
    stw r0, 0x44(r1)
    lis r3, 0x4330
    stw r3, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f31, f0, f1
    clrlwi r0, r30, 16
    stw r0, 0x4c(r1)
    stw r3, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f30, f0, f1
    la r30, lbl_8049E8E4
    lfs f1, 0x4(r30)
    stfs f1, 0x28(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x14(r1)
    lfs f0, 0x8(r30)
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    lfs f29, 0x1c(r30)
    fneg f0, f29
    fdivs f0, f0, f31
    stfs f0, 0x1c(r1)
    stfs f1, 0x2c(r1)
    addi r3, r1, 0x10
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f31
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    lfs f0, 0x8(r30)
    fadds f29, f29, f0
    fneg f0, f29
    fdivs f0, f0, f31
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f31
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x10
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x4(r30)
    fmr f2, f1
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    lfs f2, 0x4(r30)
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x1
    bl fn_8003D17C
    lfs f1, 0x4(r30)
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x1
    bl fn_8003D17C
    bl fn_8003D16C
    mr r3, r28
    li r4, 0x27
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    lfs f29, 0x1c(r30)
    lfs f0, 0x4(r30)
    stfs f0, 0x1c(r1)
    fneg f0, f29
    fdivs f0, f0, f30
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x10
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f30
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x10
    li r4, 0x21
    li r5, 0x1
    bl GXLoadTexMtxImm
    lfs f0, 0x8(r30)
    fadds f29, f29, f0
    fneg f0, f29
    fdivs f0, f0, f30
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x10
    li r4, 0x24
    li r5, 0x1
    bl GXLoadTexMtxImm
    fdivs f0, f29, f30
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x10
    li r4, 0x27
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x4(r30)
    fmr f2, f1
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    lfs f2, 0x4(r30)
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x1
    bl fn_8003D17C
    lfs f1, 0x4(r30)
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x1
    bl fn_8003D17C
    bl fn_8003D16C
    mr r3, r28
    li r4, 0x27
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    bl fn_802E151C
    bl GXInvalidateTexAll
    li r3, 0x0
    bl GXSetDither
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_8003D170
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    lfs f0, 0x20(r30)
    fmuls f31, f31, f0
    fmuls f30, f30, f0
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x4(r30)
    fmr f2, f1
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    lfs f2, 0x4(r30)
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x1
    bl fn_8003D17C
    lfs f1, 0x4(r30)
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x1
    bl fn_8003D17C
    bl fn_8003D16C
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x0
    bl GXSetAlphaUpdate
    mr r3, r31
    bl fn_8002B99C
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x4(r30)
    fmr f2, f1
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    lfs f2, 0x4(r30)
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x0
    bl fn_8003D17C
    fmr f1, f31
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x1
    li r4, 0x1
    bl fn_8003D17C
    lfs f1, 0x4(r30)
    fmr f2, f30
    bl fn_8003D194
    li r3, 0x0
    li r4, 0x1
    bl fn_8003D17C
    bl fn_8003D16C
    mr r3, r31
    bl fn_8002B99C
    mr r29, r3
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    slwi r30, r0, 2
    mr r3, r29
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r30, r0, r30
    mr r3, r31
    bl fn_8002B9A4
    mr r4, r30
    bl DCInvalidateRange
    mr r3, r29
    bl GXGetTexObjFmt
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80035050
    bl fn_802E151C
    bl GXInvalidateTexAll
    li r3, 0x4
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetDither
    li r3, 0x1
    b lbl_8003BCC0
lbl_8003BCBC:
    li r3, 0x0
lbl_8003BCC0:
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8003BCFC
asm s32 fn_8003BCFC(s8 *arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x10(r3)
    cmplw r4, r0
    blt lbl_8003BD3C
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x392
    addi r5, r3, 0x11c
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003BD3C:
    lwz r3, 0xc(r30)
    mulli r0, r31, 0x48
    add r31, r3, r0
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_8003BD60
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_8003BD60:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_8003BD78
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_8003BD78:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8003BD90
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0xc(r31)
lbl_8003BD90:
    mr r3, r31
    bl fn_8003A660
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003BDB4
asm void fn_8003BDB4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK *arg7) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    bl fn_80031BB0
    cmpwi r3, 0x0
    bne lbl_8003BE0C
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x3ad
    addi r5, r3, 0x208
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003BE0C:
    li r31, 0x8
    lwz r0, 0x0(r23)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_8003A6AC
    cmpwi r3, 0x0
    blt lbl_8003BE2C
    mr r31, r3
lbl_8003BE2C:
    cmplwi r31, 0x8
    bge lbl_8003BECC
    lwz r0, 0x0(r23)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    mr r4, r24
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    mr r9, r29
    bl fn_8003BEE4
    mr r3, r23
    bl fn_8003CCD8
    stw r3, 0x8(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80031960
    addi r3, r1, 0x14
    bl fn_8003CEF8
    cmpwi r3, 0x0
    bne lbl_8003BE9C
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x3e4
    addi r5, r3, 0x22c
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003BE9C:
    addi r3, r1, 0x14
    mr r4, r31
    mr r5, r30
    bl SetEffectMtx__Q34nw4r3g3d9ResTexSrtFUlPCQ34nw4r4math5MTX34
    addi r3, r1, 0x14
    mr r4, r31
    li r5, 0x20
    li r6, 0x1
    li r7, -0x1
    bl SetMapMode__Q34nw4r3g3d9ResTexSrtFUlUlii
    addi r3, r1, 0x14
    bl fn_80030E30
lbl_8003BECC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8003BEE4
asm void fn_8003BEE4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    bl fn_8003CDB0
    stw r3, 0x1c(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x1c
    bl fn_8003CF2C
    mr r3, r22
    bl fn_8003CCB4
    mr r30, r3
    li r29, 0x0
    lis r3, lbl_803489C8@ha
    addi r31, r3, lbl_803489C8@l
    b lbl_8003C050
lbl_8003BF44:
    mr r3, r22
    mr r4, r29
    bl fn_8003CBA0
    stw r3, 0x18(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x18
    bl fn_8003CE60
    addi r3, r1, 0x20
    bl fn_8003CD74
    addi r4, r31, 0x253
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8003BF9C
    lwz r0, 0x24(r1)
    stw r0, 0x14(r1)
    mr r3, r29
    mr r4, r23
    addi r5, r1, 0x14
    mr r6, r24
    mr r7, r28
    bl fn_8003C078
    b lbl_8003C04C
lbl_8003BF9C:
    addi r3, r1, 0x20
    bl fn_8003CD74
    addi r4, r31, 0x259
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8003BFD8
    lwz r0, 0x24(r1)
    stw r0, 0x10(r1)
    mr r3, r29
    mr r4, r23
    addi r5, r1, 0x10
    mr r6, r25
    mr r7, r28
    bl fn_8003C078
    b lbl_8003C04C
lbl_8003BFD8:
    addi r3, r1, 0x20
    bl fn_8003CD74
    addi r4, r31, 0x25f
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8003C014
    lwz r0, 0x24(r1)
    stw r0, 0xc(r1)
    mr r3, r29
    mr r4, r23
    addi r5, r1, 0xc
    mr r6, r26
    mr r7, r28
    bl fn_8003C078
    b lbl_8003C04C
lbl_8003C014:
    addi r3, r1, 0x20
    bl fn_8003CD74
    addi r4, r31, 0x265
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8003C04C
    lwz r0, 0x24(r1)
    stw r0, 0x8(r1)
    mr r3, r29
    mr r4, r23
    addi r5, r1, 0x8
    mr r6, r27
    mr r7, r28
    bl fn_8003C078
lbl_8003C04C:
    addi r29, r29, 0x1
lbl_8003C050:
    cmplw r29, r30
    blt lbl_8003BF44
    addi r3, r1, 0x24
    bl fn_8003CD70
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_8003C078
asm void fn_8003C078(u32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r5
    cmpwi r6, 0x0
    beq lbl_8003C0D0
    mr r30, r3
    cmpwi r4, 0x0
    beq lbl_8003C0AC
    mr r31, r6
    b lbl_8003C0B0
lbl_8003C0AC:
    mr r31, r7
lbl_8003C0B0:
    mr r3, r29
    mr r4, r30
    bl GetTexObj__Q34nw4r3g3d9ResTexObjF11_GXTexMapID
    mr r4, r31
    bl fn_8003C0E8
    mr r3, r29
    mr r4, r30
    bl fn_801D2AF8
lbl_8003C0D0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003C0E8
asm void fn_8003C0E8(s32 arg0, s32 arg1) {
    nofralloc
    subi r6, r3, 0x4
    subi r5, r4, 0x4
    li r0, 0x4
    mtctr r0
lbl_8003C0F8:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_8003C0F8
    blr
}

// asm_to_cpp: fn_8003C110
asm void fn_8003C110(s8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x68(r1)
    addi r11, r1, 0x68
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    fmr f31, f1
    bl fn_80038084
    addi r3, r1, 0x18
    bl fn_8002AE40
    mr r3, r24
    addi r4, r1, 0x18
    fmr f1, f31
    bl fn_8003AD68
    cmpwi r3, 0x0
    bne lbl_8003C174
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x42e
    addi r5, r3, 0x26c
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C174:
    mr r3, r26
    bl fn_8002AE00
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_8002E628
    addi r3, r1, 0x10
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r27, r3
    li r26, 0x0
    b lbl_8003C220
lbl_8003C1A0:
    addi r3, r1, 0x10
    mr r4, r26
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x8(r1)
    mr r3, r24
    bl fn_8003D040
    mr r28, r3
    mr r3, r24
    mr r4, r25
    bl fn_8003D048
    mr r29, r3
    mr r3, r24
    mr r4, r25
    bl fn_8003D0A8
    mr r30, r3
    mr r3, r24
    mr r4, r25
    bl fn_8003D108
    mr r31, r3
    mr r3, r24
    li r4, 0x1
    bl fn_80038068
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r31
    mr r6, r30
    mr r7, r29
    mr r8, r28
    addi r9, r24, 0x24
    addi r10, r1, 0x18
    bl fn_8003BDB4
    addi r26, r26, 0x1
lbl_8003C220:
    cmplw r26, r27
    blt lbl_8003C1A0
    lfd f31, 0x68(r1)
    addi r11, r1, 0x68
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8003C244
asm void fn_8003C244(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r31, r3
    mr r26, r4
    mr r25, r5
    mr r24, r6
    bl fn_8003D108
    mr r30, r3
    mr r3, r31
    mr r4, r26
    bl fn_8003D0A8
    mr r29, r3
    mr r3, r31
    mr r4, r26
    bl fn_8003D048
    mr r28, r3
    mr r3, r31
    bl fn_8003D040
    mr r27, r3
    addi r26, r31, 0x24
    mr r3, r25
    bl fn_8002AE00
    stw r3, 0x14(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x14
    bl fn_8002E628
    addi r3, r1, 0x1c
    bl GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
    mr r31, r3
    li r25, 0x0
    b lbl_8003C32C
lbl_8003C2CC:
    addi r3, r1, 0x1c
    mr r4, r25
    bl GetResNode__Q34nw4r3g3d6ResMdlCFUl
    stw r3, 0x10(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x10
    bl fn_8002F230
    lwz r0, 0x18(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_8003A6AC
    cmpwi r3, 0x0
    blt lbl_8003C328
    lwz r0, 0x18(r1)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    mr r4, r24
    mr r5, r30
    mr r6, r29
    mr r7, r28
    mr r8, r27
    mr r9, r26
    bl fn_8003BEE4
lbl_8003C328:
    addi r25, r25, 0x1
lbl_8003C32C:
    cmplw r25, r31
    blt lbl_8003C2CC
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_8003C34C(s8 *arg0, u32 arg1) {
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) | arg1));
    if (arg1 == 1) {
        sp8 = (s32) (lbl_8049E8E0);
        GXSetCopyClear((s8 *) (&sp8), (s32) (0xFFFFFF));
    }
}

void fn_8003C394(s8 *arg0, u32 arg1) {
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~arg1));
    if (arg1 == 1) {
        sp8 = (s32) (0);
        GXSetCopyClear((s8 *) (&sp8), (s32) (0xFFFFFF));
    }
}

void fn_8003C3DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800380BC((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)));
    *temp_r3 |= arg2;
}

void fn_8003C414(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_r3;

    temp_r3 = (s32 *) (fn_800380BC((s8 *) ((s8 *) arg0), (u32) ((u32) arg1)));
    *temp_r3 &= ~arg2;
}

// asm_to_cpp: fn_8003C44C
asm s8 * fn_8003C44C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    lwz r30, 0x38(r1)
    lwz r31, 0x3c(r1)
    bl fn_80027B84
    lis r3, lbl_80348838@ha
    addi r0, r3, lbl_80348838@l
    stw r0, 0x4(r23)
    stw r24, 0x8(r23)
    stw r28, 0xc(r23)
    stw r29, 0x10(r23)
    li r0, 0x0
    stw r0, 0xa0(r23)
    li r0, -0x1
    stw r0, 0xa4(r23)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r24, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003C4EC
    clrrwi r3, r24, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003C4EC
    li r9, 0x0
lbl_8003C4EC:
    cmpwi r9, 0x0
    bne lbl_8003C508
    clrrwi r3, r24, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003C508
    li r8, 0x0
lbl_8003C508:
    cmpwi r8, 0x0
    bne lbl_8003C520
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003C520
    li r7, 0x0
lbl_8003C520:
    cmpwi r7, 0x0
    bne lbl_8003C53C
    clrrwi r3, r24, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003C53C
    li r6, 0x0
lbl_8003C53C:
    cmpwi r6, 0x0
    bne lbl_8003C558
    clrrwi r3, r24, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003C558
    li r5, 0x0
lbl_8003C558:
    cmpwi r5, 0x0
    bne lbl_8003C574
    clrrwi r3, r24, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003C574
    li r4, 0x0
lbl_8003C574:
    cmpwi r4, 0x0
    bne lbl_8003C598
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4c1
    addi r5, r3, 0x28a
    mr r6, r24
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C598:
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r25, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003C5D4
    clrrwi r3, r25, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003C5D4
    li r9, 0x0
lbl_8003C5D4:
    cmpwi r9, 0x0
    bne lbl_8003C5F0
    clrrwi r3, r25, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003C5F0
    li r8, 0x0
lbl_8003C5F0:
    cmpwi r8, 0x0
    bne lbl_8003C608
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003C608
    li r7, 0x0
lbl_8003C608:
    cmpwi r7, 0x0
    bne lbl_8003C624
    clrrwi r3, r25, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003C624
    li r6, 0x0
lbl_8003C624:
    cmpwi r6, 0x0
    bne lbl_8003C640
    clrrwi r3, r25, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003C640
    li r5, 0x0
lbl_8003C640:
    cmpwi r5, 0x0
    bne lbl_8003C65C
    clrrwi r3, r25, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003C65C
    li r4, 0x0
lbl_8003C65C:
    cmpwi r4, 0x0
    bne lbl_8003C680
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4c2
    addi r5, r3, 0x2c1
    mr r6, r25
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C680:
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r28, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003C6BC
    clrrwi r3, r28, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003C6BC
    li r9, 0x0
lbl_8003C6BC:
    cmpwi r9, 0x0
    bne lbl_8003C6D8
    clrrwi r3, r28, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003C6D8
    li r8, 0x0
lbl_8003C6D8:
    cmpwi r8, 0x0
    bne lbl_8003C6F0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003C6F0
    li r7, 0x0
lbl_8003C6F0:
    cmpwi r7, 0x0
    bne lbl_8003C70C
    clrrwi r3, r28, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003C70C
    li r6, 0x0
lbl_8003C70C:
    cmpwi r6, 0x0
    bne lbl_8003C728
    clrrwi r3, r28, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003C728
    li r5, 0x0
lbl_8003C728:
    cmpwi r5, 0x0
    bne lbl_8003C744
    clrrwi r3, r28, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003C744
    li r4, 0x0
lbl_8003C744:
    cmpwi r4, 0x0
    bne lbl_8003C768
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4c3
    addi r5, r3, 0x2f9
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C768:
    cmpwi r29, 0x0
    bne lbl_8003C788
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4c4
    addi r5, r3, 0x32f
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C788:
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r30, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003C7C4
    clrrwi r3, r30, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003C7C4
    li r9, 0x0
lbl_8003C7C4:
    cmpwi r9, 0x0
    bne lbl_8003C7E0
    clrrwi r3, r30, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003C7E0
    li r8, 0x0
lbl_8003C7E0:
    cmpwi r8, 0x0
    bne lbl_8003C7F8
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003C7F8
    li r7, 0x0
lbl_8003C7F8:
    cmpwi r7, 0x0
    bne lbl_8003C814
    clrrwi r3, r30, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003C814
    li r6, 0x0
lbl_8003C814:
    cmpwi r6, 0x0
    bne lbl_8003C830
    clrrwi r3, r30, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003C830
    li r5, 0x0
lbl_8003C830:
    cmpwi r5, 0x0
    bne lbl_8003C84C
    clrrwi r3, r30, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003C84C
    li r4, 0x0
lbl_8003C84C:
    cmpwi r4, 0x0
    bne lbl_8003C870
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4c5
    addi r5, r3, 0x350
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C870:
    addi r3, r23, 0x20
    bl fn_8003D168
    li r29, 0x0
    li r24, 0x0
    b lbl_8003C898
lbl_8003C884:
    lwz r0, 0xc(r23)
    add r3, r0, r24
    bl fn_8003A660
    addi r29, r29, 0x1
    addi r24, r24, 0x48
lbl_8003C898:
    lwz r0, 0x10(r23)
    cmplw r29, r0
    blt lbl_8003C884
    stw r25, 0x4(r28)
    stw r26, 0x8(r28)
    stw r27, 0xc(r28)
    cmpwi r26, 0x0
    beq lbl_8003C8D0
    cmpwi r27, 0x0
    beq lbl_8003C8D0
    lwz r0, 0x0(r28)
    ori r0, r0, 0x5
    stw r0, 0x0(r28)
    b lbl_8003C8DC
lbl_8003C8D0:
    lwz r0, 0x0(r28)
    ori r0, r0, 0x1
    stw r0, 0x0(r28)
lbl_8003C8DC:
    lwz r3, 0x8(r23)
    bl fn_8003A798
    mr r3, r30
    bl fn_800389EC
    stw r3, 0xa0(r23)
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003C930
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003C930
    li r11, 0x0
lbl_8003C930:
    cmpwi r11, 0x0
    bne lbl_8003C94C
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003C94C
    li r10, 0x0
lbl_8003C94C:
    cmpwi r10, 0x0
    bne lbl_8003C964
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_8003C964
    li r9, 0x0
lbl_8003C964:
    cmpwi r9, 0x0
    bne lbl_8003C980
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003C980
    li r8, 0x0
lbl_8003C980:
    cmpwi r8, 0x0
    bne lbl_8003C99C
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003C99C
    li r7, 0x0
lbl_8003C99C:
    cmpwi r7, 0x0
    bne lbl_8003C9B8
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003C9B8
    li r5, 0x0
lbl_8003C9B8:
    cmpwi r5, 0x0
    bne lbl_8003C9D8
    lis r3, lbl_803489C8@ha
    addi r3, r3, lbl_803489C8@l
    li r4, 0x4df
    addi r5, r3, 0x386
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003C9D8:
    stw r31, 0xa4(r23)
    li r3, 0x20
    lis r4, fn_8003AAF0@ha
    addi r4, r4, fn_8003AAF0@l
    li r5, 0x2
    bl SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType
    addi r3, r23, 0x24
    addi r4, r23, 0x60
    li r5, 0x4
    li r6, 0x4
    li r7, 0x11
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    mr r3, r23
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8003CA30
asm s8 * fn_8003CA30(s8 *arg0, s16 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    cmpwi r3, 0x0
    beq lbl_8003CABC
    lis r4, lbl_80348838@ha
    addi r0, r4, lbl_80348838@l
    stw r0, 0x4(r3)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_8003CA78
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_8003CA78:
    li r31, 0x0
    b lbl_8003CA90
lbl_8003CA80:
    mr r3, r29
    mr r4, r31
    bl fn_8003BCFC
    addi r31, r31, 0x1
lbl_8003CA90:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_8003CA80
    mr r3, r29
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r30
    cmpwi r0, 0x0
    ble lbl_8003CABC
    mr r3, r29
    bl fn_80027B74
lbl_8003CABC:
    mr r3, r29
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003CAD8
asm s32 fn_8003CAD8(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8003CB30
    mr r0, r3
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8003CB10
    addi r3, r1, 0xc
    add r4, r0, r4
    subi r4, r4, 0x4
    bl fn_8003CEC0
    lwz r3, 0x0(r3)
    b lbl_8003CB20
lbl_8003CB10:
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_8003CEC0
    lwz r3, 0x0(r3)
lbl_8003CB20:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CB30
asm M2C_UNK fn_8003CB30(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8003CE50
    cmpwi r3, 0x0
    bne lbl_8003CB78
    bl fn_8003CB94
    mr r6, r3
    lis r3, lbl_80348948@ha
    addi r3, r3, lbl_80348948@l
    li r4, 0x230
    lis r5, lbl_80348928@ha
    addi r5, r5, lbl_80348928@l
    la r7, lbl_8049C2B0
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CB78:
    mr r3, r31
    bl fn_8003CE48
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CB94
asm s32 fn_8003CB94(void) {
    nofralloc
    lis r3, lbl_80348918@ha
    addi r3, r3, lbl_80348918@l
    blr
}

// asm_to_cpp: fn_8003CBA0
asm s32 fn_8003CBA0(s32 *arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    mr r30, r4
    bl fn_8003CCB4
    cmplw r30, r3
    blt lbl_8003CBE4
    lis r3, lbl_803488D0@ha
    addi r3, r3, lbl_803488D0@l
    li r4, 0x2d6
    lis r5, lbl_80348898@ha
    addi r5, r5, lbl_80348898@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CBE4:
    mr r3, r31
    bl fn_80030F4C
    mr r4, r3
    mr r3, r31
    lwz r4, 0x30(r4)
    bl fn_8003CEA4
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_8003CC24
    lis r3, lbl_80348888@ha
    addi r3, r3, lbl_80348888@l
    li r4, 0x2d8
    lis r5, lbl_80348864@ha
    addi r5, r5, lbl_80348864@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CC24:
    addi r3, r1, 0x8
    mulli r0, r30, 0x34
    add r4, r31, r0
    bl fn_8003CC50
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003CC50
asm s32 * fn_8003CC50(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003CE9C
    clrlwi r0, r31, 30
    cmpwi r0, 0x0
    beq lbl_8003CC98
    lis r3, lbl_80348908@ha
    addi r3, r3, lbl_80348908@l
    li r4, 0x230
    lis r5, lbl_803488E0@ha
    addi r5, r5, lbl_803488E0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CC98:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CCB4
asm u32 fn_8003CCB4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80030EE0
    lwz r3, 0x2c(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CCD8
asm s32 fn_8003CCD8(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80030F4C
    mr r4, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x1a8
    bl fn_8003CD0C
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CD0C
asm s32 * fn_8003CD0C(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003CF08
    clrlwi r0, r31, 30
    cmpwi r0, 0x0
    beq lbl_8003CD54
    lis r3, lbl_80348980@ha
    addi r3, r3, lbl_80348980@l
    li r4, 0x6b
    lis r5, lbl_80348958@ha
    addi r5, r5, lbl_80348958@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CD54:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8003CD70(s32 arg0) {
}

// asm_to_cpp: fn_8003CD74
asm void fn_8003CD74(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8003CB30
    mr r4, r3
    mr r3, r31
    lwz r4, 0x0(r4)
    bl fn_8003CF10
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CDB0
asm s32 fn_8003CDB0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80030F4C
    mr r4, r3
    addi r3, r1, 0x8
    addi r4, r4, 0x40
    bl fn_8003CDE4
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003CDE4
asm s32 * fn_8003CDE4(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003CF68
    clrlwi r0, r31, 30
    cmpwi r0, 0x0
    beq lbl_8003CE2C
    lis r3, lbl_803489B8@ha
    addi r3, r3, lbl_803489B8@l
    li r4, 0x28
    lis r5, lbl_80348990@ha
    addi r5, r5, lbl_80348990@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003CE2C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_8003CE48(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_8003CE50(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_8003CE60(s32 *arg0, s32 arg1) {
    fn_8003CE90((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_8003CE90(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8003CE9C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// asm_to_cpp: fn_8003CEA4
asm s32 fn_8003CEA4(s32 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8003CEB8
    add r3, r0, r4
    blr
lbl_8003CEB8:
    li r3, 0x0
    blr
}

s32 * fn_8003CEC0(s32 *arg0, s32 arg1) {
    fn_8003CEF0((s32 *) (arg0), (s32) (arg1));
    return (s32 *) (arg0);
}

void fn_8003CEF0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_8003CEF8(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

void fn_8003CF08(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// asm_to_cpp: fn_8003CF10
asm s32 fn_8003CF10(s32 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_8003CF24
    add r3, r0, r4
    blr
lbl_8003CF24:
    li r3, 0x0
    blr
}

s32 * fn_8003CF2C(s32 *arg0, s32 arg1) {
    fn_8003CF5C((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_8003CF5C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

void fn_8003CF68(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// asm_to_cpp: fn_8003CF70
asm s32 fn_8003CF70(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    bl fn_8002AE3C
    mr r30, r3
    mr r3, r31
    bl fn_80018B90
    mr r31, r3
    mr r3, r29
    bl fn_80018B90
    mr r4, r31
    mr r5, r30
    bl PSMTXConcat
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_8003CFD4(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 fn_8003CFE4(s8 *arg0, s32 arg1) {
    return (s32) ((GXGetTexObjFmt((s8 *) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8))))) - 1) != 0);
}

s32 fn_8003D018(s8 *arg0) {
    s32 var_r4;

    var_r4 = (s32) (0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0xA0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1)) {
        var_r4 = (s32) (1);
    }
    return (s32) (var_r4);
}

s32 fn_8003D040(s8 *arg0) {
    return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(arg0, s8 **, 8))));
}

s32 fn_8003D048(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 0xC) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 0xC))));
    }
    return (s32) (0);
}

s32 fn_8003D0A8(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 8) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 8))));
    }
    return (s32) (0);
}

s32 fn_8003D108(s8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s32 *, 4) != 0) {
        return (s32) (fn_8002B99C((s8 *) (M2C_FIELD(fn_800380BC((s8 *) (arg0), (u32) ((u32) arg1)), s8 **, 4))));
    }
    return (s32) (0);
}

void fn_8003D168(s32 arg0) {
    fn_8003D1A4((s32 *) ((s32 *) arg0));
}

void fn_8003D16C(void) {
}

void fn_8003D170(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

// asm_to_cpp: fn_8003D17C
asm void fn_8003D17C(u8 arg0, u8 arg1) {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    blr
}

void fn_8003D194(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void fn_8003D1A4(s32 *arg0) {
    *arg0 = 0;
}

} // extern "C"
