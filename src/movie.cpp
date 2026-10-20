#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8035A5B0[];
extern u8 lbl_8035A350[];
extern u8 lbl_8035A4A8[];
extern u8 lbl_8035A5A8[];
extern u8 lbl_8035AAC8[];
extern u8 lbl_803A65E0[];
extern u8 lbl_803A68F8[];
extern u8 lbl_803A78F8[];
extern u8 lbl_803A7918[];
extern u8 lbl_803A7938[];
extern u8 lbl_803A7950[];
extern u8 lbl_803A7980[];
extern u8 lbl_803A7B80[];
extern u8 lbl_803A7BC0[];
extern u8 lbl_803A7BE0[];
extern u8 lbl_803A7C00[];
extern u8 lbl_803A7C20[];
extern u8 lbl_803A7F20[];
extern u8 lbl_803A7F40[];
extern u8 lbl_803A7F60[];
extern u8 lbl_803A7F80[];
extern u8 lbl_803A7FA8[];
extern u8 lbl_803A7FD0[];
extern u8 lbl_803A7FF8[];
extern u8 lbl_803A8310[];
extern u8 lbl_803A9310[];
extern u8 lbl_803A9628[];
extern u8 lbl_803AA628[];
extern u8 lbl_803AA648[];
extern u8 lbl_803AA668[];
extern u8 lbl_803AA674[];
extern u8 lbl_803BE030[];
extern u8 lbl_803C1A40[];
extern s32 lbl_8049D700;
extern s32 *lbl_8049D708;
extern float lbl_8049D710;
extern s32 lbl_8049D718;
extern float lbl_8049D71C;
extern float lbl_8049D720;
extern float lbl_8049D724;
extern s32 lbl_8049D728;
extern float lbl_8049D72C;
extern float lbl_8049D730;
extern float lbl_8049D734;
extern s32 lbl_8049D738;
extern float lbl_8049D740;
extern float lbl_8049D748;
extern float lbl_8049D74C;
extern float lbl_804A0B08;
extern float lbl_804A0B10;
extern float lbl_804A0B18;
extern float lbl_804A0B1C;
extern float lbl_804A0B20;
extern float lbl_804A0B24;
extern float lbl_804A0B28;
extern float lbl_804A0B30;
extern float lbl_804A0B38;
extern float lbl_804A0B48;
extern float lbl_804A0B50;

s32 AIGetDSPSampleRate(void);
void AIInitDMA(s32 arg0, s32 arg1);
s32 AIRegisterDMACallback(s32 arg0);
void AIStartDMA(void);
void C_MTXOrtho(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void DCFlushRange(s32 arg0, s32 arg1);
void DCInvalidateRange(s32 arg0, s32 arg1);
s32 DVDClose(s32 arg0);
s32 DVDOpen(s32 arg0, s32 arg1);
s32 DVDReadAsyncPrio(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 DVDReadPrio(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
void GXInvalidateTexAll(void);
void GXLoadPosMtxImm(s32 arg0, s32 arg1);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetColorUpdate(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetDispCopyGamma(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetPixelFmt(s32 arg0, s32 arg1);
void GXSetProjection(s32 arg0, s32 arg1);
void GXSetScissor(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetTexCoordCylWrap(s32 arg0, s8 *arg1, s32 arg2);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetViewport(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK * GetRenderModeObj__Q34nw4r3g3d8G3DStateFv(void);
void OSCancelThread(s32 arg0);
s32 OSDisableInterrupts(void);
s32 OSEnableInterrupts(void);
s32 OSGetTick(void);
void OSInitMessageQueue(s32 arg0, s32 arg1, s32 arg2);
s32 OSReceiveMessage(s32 arg0, s32 arg1, s32 arg2);
s32 OSRestoreInterrupts(s32 arg0);
s32 OSSendMessage(s32 arg0, s32 arg1, s32 arg2);
void PSMTXIdentity(s32 arg0);
s32 VIGetNextField(void);
s32 VIGetTvFormat();
s32 VISetPostRetraceCallback(s32 arg0);
s32 __div2i(void);
s32 _restgpr_23();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void dtor_80136CFC(s32 arg0);
u16 * fn_80136B14(s32 arg0);
s32 fn_80136B1C(s32 arg0);
u16 fn_80136B24(s32 arg0);
s32 fn_80136B60(s32 arg0, s32 arg1);
s32 fn_80136BFC(s8 *arg0);
s32 fn_80136C54(s32 arg0);
s32 fn_80136CA8(s32 arg0);
void fn_80136D48(s32 arg0);
void fn_80136D94(s32 arg0);
s32 fn_80136D9C(void);
s32 fn_80136DA4(void);
s32 fn_80136DB4(void);
s32 fn_80136DDC(void);
s32 * fn_80136E78(s32 arg0, s32 arg1);
s32 fn_80136F28(s8 *arg0, s32 arg1);
void fn_80137364(void);
void fn_80137368(void);
s32 fn_8013736C(s32 arg0);
void fn_801373D0(s32 arg0);
s32 fn_80137410(s32 arg0, s32 arg1);
s32 fn_801374EC();
void fn_80137508(void);
void fn_80137544(void);
void fn_8013756C(s32 *arg0);
void fn_80137614(s32 **arg0);
s32 ** fn_801376D4(s32 arg0, s32 arg1);
void fn_80137708(s32 **arg0);
s32 ** fn_8013771C(s32 arg0);
void fn_80137760(s32 **arg0);
void fn_80137774(void);
void fn_8013788C(s8 *arg0);
void fn_80137D38(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7);
void fn_80137F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80137F44(void);
void fn_80137F48(u16 arg0, u16 arg1);
void fn_80137F60(s16 arg0, s16 arg1, s16 arg2);
void fn_80137F80(void);
void fn_80137F8C(void);
s32 fn_80137FD4(s32 arg0);
void fn_80138118(void);
s32 fn_80138164(s32 arg0, s32 arg1);
s32 fn_801383D8(void);
s32 fn_8013842C(s32 arg0, s32 arg1);
s32 fn_801384DC(s32 arg0);
void fn_8013865C(s32 arg0);
s32 fn_80138738(void);
void fn_80138774(s32 **arg0);
s32 fn_80138788(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801389F8(void);
void fn_80138A58(void);
s32 fn_80138B10(void);
void fn_80138B4C(void);
s32 fn_80138DD4(void);
s32 fn_80138E48(void);
s32 fn_80138F7C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
s32 fn_8013904C(s32 arg0);
s32 fn_80139094(s32 arg0);
s32 fn_801390DC(void);
void fn_801390EC(s32 **arg0);
s32 ** fn_80139100(void);
void fn_80139144(void);
void fn_80139184(void);
void fn_801392E8(M2C_UNK *arg0, M2C_UNK *arg1, u32 arg2);
s32 fn_801396C0(s32 arg0, s32 arg1);
s32 fn_801397E0(void);
s32 fn_80139818(s32 arg0);
s32 fn_801398C8();
void fn_801398E4(void);
void fn_80139920(void);
s32 ** fn_80139A00(void);
void fn_80139A34(s32 **arg0);
s32 ** fn_80139A48(void);
void fn_80139A7C(s32 **arg0);
s32 ** fn_80139A90(void);
void fn_80139AC4(s32 **arg0);
s32 fn_80139AD8(s32 arg0, s32 arg1);
s32 fn_80139BB8();
void fn_80139BD4(void);
void fn_80139C10(void);
void fn_80139CDC(s32 *arg0);
s32 fn_80139E18(s32 **arg0);
s32 ** fn_80139F50(s32 arg0, s32 arg1);
void fn_80139F84(s32 **arg0);
s32 ** fn_80139F98(s32 arg0);
void fn_80139FDC(s32 **arg0);
s32 fn_80139FF0();
s32 fn_80164DEC();
void fn_80164E1C(void);
void fn_80164E20(void);
u32 * fn_80164EC8(s32 **arg0, u32 *arg1, u32 *arg2, u32 *arg3);
void fn_801653A0(void);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
void fn_801773E0(s32 arg0);
void fn_8017776C(s32 arg0);
s32 fn_801780F8(s32 arg0);
void fn_8018C6D0(void);
f32 fn_8018DC6C(void);
f32 fn_8018DD14(s32 arg0);
s32 fn_8018DE10(void);
void fn_80195230(s8 *arg0);
s32 fn_8029AD14(void);
s32 fn_802D55B4(s8 *arg0);
void fn_802E1450(void);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4654(s32 arg0, u32 *arg1);
void fn_802E46B0(s32 arg0, s32 arg1);
void fn_802E4700(s32 arg0, s32 arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
s32 fn_8031CDF0(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 fn_8031D460(s8 *arg0);
s32 fn_8031D6F8(M2C_UNK *arg0);
u8 fn_803260CC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80329400(void);
u32 fn_8032949C(u16 *arg0, s8 *arg1, s32 arg2);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 strcmp(s32 arg0, s32 arg1);

u16 * fn_80136B14(s32 arg0) {
    return (u16 *) (arg0 + 0x24);
}

s32 fn_80136B1C(s32 arg0) {
    return (s32) (arg0 + 0x28);
}

// asm_to_cpp: fn_80136B24
asm u16 fn_80136B24(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80136B14
    lhz r4, 0x0(r3)
    clrlwi r0, r4, 24
    slwi r3, r0, 8
    rlwinm r0, r4, 0, 16, 23
    srawi r0, r0, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80136B60
asm s32 fn_80136B60(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    li r31, 0x0
    bl fn_80136B24
    cmpw r3, r30
    bgt lbl_80136B94
    li r3, 0x0
    b lbl_80136BE4
lbl_80136B94:
    mr r3, r29
    bl fn_80136B1C
    slwi r0, r30, 4
    add r3, r3, r0
    lwz r5, 0x4(r3)
    clrrwi r0, r5, 24
    srwi r3, r0, 24
    rlwinm r0, r5, 0, 8, 15
    srwi r0, r0, 8
    or r4, r3, r0
    clrlwi r0, r5, 24
    slwi r3, r0, 24
    rlwinm r0, r5, 0, 16, 23
    slwi r0, r0, 8
    or r0, r3, r0
    or r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_80136BE0
    add r31, r29, r0
lbl_80136BE0:
    mr r3, r31
lbl_80136BE4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80136BFC(s8 *arg0) {
    s32 temp_r5;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0x20));
    return (s32) ((((u32) (temp_r5 & 0xFF000000) >> 0x18U) | ((u32) (temp_r5 & 0xFF0000) >> 8U) | (((u8) temp_r5 << 0x18) | ((temp_r5 & 0xFF00) << 8))) == 0x20061122);
}

s32 fn_80136C54(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170E2C((s32) (lbl_8049D700), (s32) (arg0), (s32) (0)));
    memset((s32) (temp_r3), (s32) (0), (s32) (arg0));
    return (s32) (temp_r3);
}

s32 fn_80136CA8(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170E2C((s32) (lbl_8049D700), (s32) (arg0), (s32) (0)));
    memset((s32) (temp_r3), (s32) (0), (s32) (arg0));
    return (s32) (temp_r3);
}

// asm_to_cpp: dtor_80136CFC
asm void dtor_80136CFC(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    mr r4, r3
    lwz r3, lbl_8049D700
    bl fn_80170E84
    b lbl_80136D2C
    addi r3, r31, 0x8
    bl fn_80195230
lbl_80136D28:
    b lbl_80136D28
lbl_80136D2C:
    mr r10, r31
    lwz r31, 0x2c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_80136D48
asm void fn_80136D48(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    mr r4, r3
    lwz r3, lbl_8049D700
    bl fn_80170E84
    b lbl_80136D78
    addi r3, r31, 0x8
    bl fn_80195230
lbl_80136D74:
    b lbl_80136D74
lbl_80136D78:
    mr r10, r31
    lwz r31, 0x2c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

void fn_80136D94(s32 arg0) {
    lbl_8049D700 = arg0;
}

s32 fn_80136D9C(void) {
    return (s32) (lbl_8049D700);
}

s32 fn_80136DA4(void) {
    return (s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x7F8));
}

s32 fn_80136DB4(void) {
    if ((s32 *) lbl_8049D708 != NULL) {
        return (s32) ((*lbl_8049D708 - 2) == 0);
    }
    return (s32) (1);
}

s32 fn_80136DDC(void) {
    s32 *temp_r31;
    s32 temp_r0;

    temp_r31 = (s32 *) (lbl_8049D708);
    if (temp_r31 == NULL) {
        return (s32) (1);
    }
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x44) < 0x3C) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(temp_r31, s32 *, 0));
    switch (temp_r0) {                              /* irregular */
    case 1:
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0x58) != 0) {
            fn_80138A58();
            fn_801383D8();
            fn_801373D0((s32) (M2C_FIELD(temp_r31, s32 *, 0x1C)));
            M2C_FIELD(temp_r31, s32 *, 0x58) = (s32) (0);
        }
        /* fallthrough */
    case 2:
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (0xF0);
        break;
    }
    fn_801773E0((s32) ((s32) temp_r31));
    return (s32) (1);
}

// asm_to_cpp: fn_80136E78
asm s32 * fn_80136E78(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lwz r0, lbl_8049D708
    cmpwi r0, 0x0
    beq lbl_80136EA8
    li r3, 0x0
    b lbl_80136F10
lbl_80136EA8:
    li r3, 0x5
    lis r4, fn_80136F28@ha
    addi r4, r4, fn_80136F28@l
    li r5, 0x68
    bl fn_801771D4
    mr r31, r3
    stw r3, lbl_8049D708
    li r4, 0x0
    li r5, 0x68
    bl memset
    stw r29, 0x8(r31)
    stw r30, 0xc(r31)
    li r4, 0x0
    stw r4, 0x54(r31)
    stw r4, 0x58(r31)
    stw r4, 0x5c(r31)
    lwz r0, 0x8(r31)
    slwi r0, r0, 2
    lis r3, lbl_8035A350@ha
    addi r3, r3, lbl_8035A350@l
    lwzx r0, r3, r0
    stw r0, 0x50(r31)
    li r0, 0x1
    stw r0, 0x54(r31)
    stw r4, 0x5c(r31)
    mr r3, r31
lbl_80136F10:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80136F28
asm s32 fn_80136F28(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80136FD4
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80136F68
    li r3, 0x1
    b lbl_80137338
lbl_80136F68:
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80136FCC
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_80136FCC
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80136FA0
    bl fn_8018C6D0
    lwz r0, 0xc(r31)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r31)
lbl_80136FA0:
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_80136FC8
    lwz r3, 0x20(r31)
    lwz r4, 0x14(r31)
    lwz r5, 0x18(r31)
    lwz r6, 0x28(r31)
    lwz r7, 0x2c(r31)
    bl fn_80138F7C
    stw r3, 0x44(r31)
lbl_80136FC8:
    bl fn_80139144
lbl_80136FCC:
    li r3, 0x0
    b lbl_80137338
lbl_80136FD4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80136FFC
    cmpwi r0, 0x1
    beq lbl_80137028
    cmpwi r0, 0xf0
    beq lbl_80137314
    cmpwi r0, -0x1
    beq lbl_80137324
    b lbl_80137334
lbl_80136FFC:
    bl fn_80137364
    lwz r0, 0xc(r31)
    ori r0, r0, 0x8
    stw r0, 0xc(r31)
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    stw r3, 0x20(r31)
    li r3, 0x1
    bl fn_80137FD4
    li r0, 0x1
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_80137028:
    bl fn_801390DC
    cmpwi r3, 0x5
    bne lbl_80137058
    bl fn_80138A58
    bl fn_801383D8
    lwz r3, 0x1c(r31)
    bl fn_801373D0
    li r0, 0x0
    stw r0, 0x58(r31)
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_80137058:
    bl fn_801390DC
    cmpwi r3, 0x3
    bne lbl_80137088
    bl fn_80138A58
    bl fn_801383D8
    lwz r3, 0x1c(r31)
    bl fn_801373D0
    li r0, 0x0
    stw r0, 0x58(r31)
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_80137088:
    lwz r4, 0xc(r31)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_801370EC
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_801370EC
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_801370EC
    lwz r0, 0x44(r31)
    cmpwi r0, 0xa
    ble lbl_801370EC
    bl fn_80138A58
    bl fn_801383D8
    lwz r3, 0x1c(r31)
    bl fn_801373D0
    li r0, 0x0
    stw r0, 0x58(r31)
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_801370EC:
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80137128
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80137128
    bl fn_801390DC
    cmpwi r3, 0x4
    bne lbl_80137124
    bl fn_801389F8
    b lbl_80137128
lbl_80137124:
    bl fn_80138B10
lbl_80137128:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_80137158
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    beq lbl_80137158
    bl fn_80138A58
    bl fn_801383D8
    lwz r3, 0x1c(r31)
    bl fn_801373D0
    li r0, 0x0
    stw r0, 0x58(r31)
lbl_80137158:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_80137334
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    bne lbl_80137334
    lwz r3, 0x50(r31)
    lwz r4, 0x5c(r31)
    bl fn_80138164
    cmpwi r3, 0x0
    bne lbl_80137190
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_80137190:
    bl fn_801397E0
    lfd f1, lbl_804A0B08
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f30, f0, f1
    li r3, 0x0
    bl fn_8018DD14
    fmr f31, f1
    bl fn_8018DC6C
    fmuls f0, f1, f31
    fmuls f30, f30, f0
    lwz r0, 0x8(r31)
    cmpwi r0, 0xe
    bge lbl_801371E8
    cmpwi r0, 0x9
    bge lbl_8013720C
    cmpwi r0, 0x5
    bge lbl_80137224
    b lbl_801371FC
lbl_801371E8:
    cmpwi r0, 0x14
    bge lbl_801371FC
    cmpwi r0, 0x12
    bge lbl_8013721C
    b lbl_80137224
lbl_801371FC:
    lfs f0, lbl_804A0B10
    fmuls f30, f30, f0
    b lbl_80137224
    b lbl_80137224
lbl_8013720C:
    lfs f0, lbl_804A0B10
    fmuls f30, f30, f0
    b lbl_80137224
    b lbl_80137224
lbl_8013721C:
    lfs f0, lbl_804A0B10
    fmuls f30, f30, f0
lbl_80137224:
    fctiwz f0, f30
    stfd f0, 0x8(r1)
    lwz r3, 0xc(r1)
    li r4, 0x0
    bl fn_801396C0
    addi r3, r31, 0x28
    bl fn_8013904C
    addi r3, r31, 0x34
    bl fn_80139094
    lwz r3, 0x28(r31)
    lwz r4, 0x20(r31)
    lhz r0, 0x4(r4)
    subf r0, r3, r0
    srwi r0, r0, 1
    stw r0, 0x14(r31)
    lwz r3, 0x2c(r31)
    lhz r0, 0x6(r4)
    subf r0, r3, r0
    srwi r0, r0, 1
    stw r0, 0x18(r31)
    bl fn_8013842C
    stw r3, 0x10(r31)
    bl fn_8013736C
    stw r3, 0x1c(r31)
    cmpwi r3, 0x0
    bne lbl_8013729C
    bl fn_801373D0
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_8013729C:
    bl fn_801384DC
    lwz r0, 0x40(r31)
    cmplwi r0, 0x1
    beq lbl_801372C8
    bl OSGetTick
    lwz r4, 0x40(r31)
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r0, r0, r3
    stw r0, 0x48(r31)
    b lbl_801372D0
lbl_801372C8:
    li r0, 0x0
    stw r0, 0x48(r31)
lbl_801372D0:
    li r3, 0x0
    li r4, 0x0
    lwz r5, 0x48(r31)
    bl fn_80138788
    cmpwi r3, 0x0
    bne lbl_801372FC
    lwz r3, 0x1c(r31)
    bl fn_801373D0
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_80137334
lbl_801372FC:
    bl fn_801389F8
    li r0, 0x0
    stw r0, 0x54(r31)
    li r0, 0x1
    stw r0, 0x58(r31)
    b lbl_80137334
lbl_80137314:
    bl fn_80138118
    bl fn_80137368
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_80137324:
    mr r3, r31
    bl fn_8017776C
    li r0, 0x0
    stw r0, lbl_8049D708
lbl_80137334:
    li r3, 0x0
lbl_80137338:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_80137364(void) {
}

void fn_80137368(void) {
}

s32 fn_8013736C(s32 arg0) {
    s32 temp_r3;

    temp_r3 = (s32) (fn_80170410((s32) (1), (s32) (((((arg0 + 0x1F) & 0xFFFFFFE0) + 0x3F) & 0xFFFFFFE0) + 0x20), (s32) (0), (s32) (0x4004)));
    M2C_FIELD(&lbl_803C1A40, s32 *, 0x838) = (s32) (temp_r3);
    return (s32) (fn_80170E2C((s32) (temp_r3), (s32) (arg0), (s32) (0x4004)));
}

void fn_801373D0(s32 arg0) {
    fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x838)), (s8 *) ((s8 *) arg0));
    fn_80170560((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x838)));
}

// asm_to_cpp: fn_80137410
asm s32 fn_80137410(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r8, r3
    mr r5, r4
    cmpwi r4, 0x0
    beq lbl_80137464
    lis r3, lbl_803A65E0@ha
    addi r3, r3, lbl_803A65E0@l
    lis r4, fn_8013756C@ha
    addi r4, r4, fn_8013756C@l
    lis r6, lbl_803A68F8@ha
    addi r6, r6, lbl_803A68F8@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r9, 0x1
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_801374A0
    li r3, 0x0
    b lbl_801374DC
lbl_80137464:
    lis r3, lbl_803A65E0@ha
    addi r3, r3, lbl_803A65E0@l
    lis r4, fn_80137544@ha
    addi r4, r4, fn_80137544@l
    li r5, 0x0
    lis r6, lbl_803A68F8@ha
    addi r6, r6, lbl_803A68F8@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r9, 0x1
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_801374A0
    li r3, 0x0
    b lbl_801374DC
lbl_801374A0:
    lis r3, lbl_803A78F8@ha
    addi r3, r3, lbl_803A78F8@l
    lis r4, lbl_803A7938@ha
    addi r4, r4, lbl_803A7938@l
    li r5, 0x6
    bl OSInitMessageQueue
    lis r3, lbl_803A7918@ha
    addi r3, r3, lbl_803A7918@l
    lis r4, lbl_803A7950@ha
    addi r4, r4, lbl_803A7950@l
    li r5, 0x6
    bl OSInitMessageQueue
    li r0, 0x1
    stw r0, lbl_8049D710
    li r3, 0x1
lbl_801374DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801374EC
asm s32 fn_801374EC() {
    nofralloc
    lwz r0, lbl_8049D710
    cmpwi r0, 0x0
    beqlr
    lis r3, lbl_803A65E0@ha
    addi r3, r3, lbl_803A65E0@l
    b fn_8031D460
    blr
}

// asm_to_cpp: fn_80137508
asm void fn_80137508(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D710
    cmpwi r0, 0x0
    beq lbl_80137534
    lis r3, lbl_803A65E0@ha
    addi r3, r3, lbl_803A65E0@l
    bl OSCancelThread
    li r0, 0x0
    stw r0, lbl_8049D710
lbl_80137534:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80137544(void) {
    s32 **temp_r3;

loop_1:
    temp_r3 = (s32 **) (fn_80139A00());
    fn_80137614((s32 **) (temp_r3));
    fn_80139AC4((s32 **) (temp_r3));
    goto loop_1;
}

// asm_to_cpp: fn_8013756C
asm void fn_8013756C(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    lis r4, lbl_803A7980@ha
    addi r29, r4, lbl_803A7980@l
    lwz r28, 0xbc(r29)
    stw r3, 0x8(r1)
    li r31, 0x0
    lis r30, lbl_803A65E0@ha
lbl_80137598:
    stw r31, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_80137614
    lwz r4, 0x50(r29)
    lwz r0, 0xc0(r29)
    add r3, r31, r0
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    subi r0, r4, 0x1
    cmplw r3, r0
    bne lbl_801375F8
    lbz r0, 0xa6(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801375EC
    lwz r3, 0x8(r1)
    lwz r28, 0x0(r3)
    lwz r0, 0xb4(r29)
    stw r0, 0x8(r1)
    b lbl_8013760C
lbl_801375EC:
    addi r3, r30, lbl_803A65E0@l
    bl fn_8031D6F8
    b lbl_8013760C
lbl_801375F8:
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    add r0, r3, r28
    stw r0, 0x8(r1)
    mr r28, r4
lbl_8013760C:
    addi r31, r31, 0x1
    b lbl_80137598
}

// asm_to_cpp: fn_80137614
asm void fn_80137614(s32 **arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    lwz r4, 0x0(r3)
    addi r29, r4, 0x8
    lis r3, lbl_803A7980@ha
    addi r31, r3, lbl_803A7980@l
    lwz r0, 0x6c(r31)
    slwi r0, r0, 2
    add r28, r4, r0
    addi r28, r28, 0x8
    bl fn_801376D4
    mr r30, r3
    li r5, 0x0
    lwz r0, 0x6c(r31)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_801376BC
lbl_80137664:
    add r4, r31, r5
    lbz r0, 0x70(r4)
    cmpwi r0, 0x1
    bne lbl_801376A8
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r29)
    lwz r0, 0xec(r31)
    mullw r0, r4, r0
    add r4, r28, r0
    li r5, 0x0
    bl fn_8032949C
    stw r3, 0x8(r30)
    lwz r0, 0x0(r30)
    stw r0, 0x4(r30)
    mr r3, r30
    bl fn_80137760
    b lbl_801376BC
lbl_801376A8:
    lwz r0, 0x0(r29)
    add r28, r28, r0
    addi r29, r29, 0x4
    addi r5, r5, 0x1
    bdnz lbl_80137664
lbl_801376BC:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 ** fn_801376D4(s32 arg0, s32 arg1) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A78F8), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80137708(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A78F8), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_8013771C(s32 arg0) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803A7918), (s32) ((s32) &sp8), (s32) (arg0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80137760(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7918), (s32) ((s32) arg0), (s32) (1));
}

void fn_80137774(void) {
    GXSetZMode((s32) (1), (s32) (7), (s32) (0));
    GXSetBlendMode((s32) (0), (s32) (1), (s32) (0), (s32) (0xF));
    GXSetNumTexGens((s32) (1));
    GXSetNumChans((s32) (0));
    fn_802E4A28((s32) (1));
    fn_802E48CC((u32) (0U), (s32) (0), (s32) (0), (s32) (0xFF));
    fn_802E43CC((s32) (0), (s32) (3));
    fn_802E4750((s32) (0), (s32) (0), (s32) (0));
    fn_802E4750((s32) (1), (s32) (0), (s32) (0));
    fn_802E4750((s32) (2), (s32) (0), (s32) (0));
    fn_802E4750((s32) (3), (s32) (0), (s32) (0));
    GXSetTexCoordScaleManually((s32) (0), (s32) (0), (s32) (1), (s32) (2), (s32) (3));
    GXSetTexCoordScaleManually((s32) (1), (s32) (0), (s32) (0), (s32) (0), (s32) (3));
    GXSetTexCoordScaleManually((s32) (2), (s32) (1), (s32) (1), (s32) (1), (s32) (3));
    GXSetTexCoordScaleManually((s32) (3), (s32) (2), (s32) (2), (s32) (2), (s32) (3));
}

// asm_to_cpp: fn_8013788C
asm void fn_8013788C(s8 *arg0) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_29
    lis r0, 0x4330
    stw r0, 0x90(r1)
    lis r0, 0x4330
    stw r0, 0x98(r1)
    lhz r30, 0x4(r3)
    lhz r29, 0x6(r3)
    li r3, 0x0
    li r4, 0x0
    bl GXSetPixelFmt
    addi r3, r1, 0x50
    lfs f1, lbl_804A0B38
    lfd f4, lbl_804A0B30
    xoris r0, r29, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f2, f0, f4
    fmr f3, f1
    xoris r0, r30, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    la r31, lbl_804A0B38
    lfs f6, 0x4(r31)
    bl C_MTXOrtho
    addi r3, r1, 0x50
    li r4, 0x1
    bl GXSetProjection
    lfs f1, lbl_804A0B38
    fmr f2, f1
    lfd f4, lbl_804A0B30
    xoris r0, r30, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f3, f0, f4
    xoris r0, r29, 0x8000
    stw r0, 0x9c(r1)
    lfd f0, 0x98(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x8(r31)
    bl GXSetViewport
    li r3, 0x0
    li r4, 0x0
    mr r5, r30
    mr r6, r29
    bl GXSetScissor
    addi r3, r1, 0x20
    bl PSMTXIdentity
    addi r3, r1, 0x20
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    li r3, 0x1
    li r4, 0x7
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl GXSetBlendMode
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x0
    bl GXSetAlphaUpdate
    li r3, 0x0
    bl GXSetDispCopyGamma
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x2
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_80137F38
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_80137F38
    bl GXInvalidateTexAll
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x7
    li r4, 0x9
    li r5, 0x1
    li r6, 0x3
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x7
    li r4, 0xd
    li r5, 0x1
    li r6, 0x2
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x4
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x2
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x1
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0xc
    bl fn_802E46B0
    li r3, 0x0
    li r4, 0x1c
    bl fn_802E4700
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x1
    li r4, 0x1
    li r5, 0x2
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0x0
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x1
    li r4, 0xd
    bl fn_802E46B0
    li r3, 0x1
    li r4, 0x1d
    bl fn_802E4700
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0xf
    li r5, 0x8
    li r6, 0xc
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
    li r4, 0x4
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_802E44A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0x1
    li r5, 0x0
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x3
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x3
    li r4, 0xe
    bl fn_802E46B0
    lwz r3, lbl_804A0B18
    lwz r0, lbl_804A0B1C
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    li r3, 0x1
    addi r4, r1, 0x18
    bl GXSetTexCoordCylWrap
    lwz r0, lbl_804A0B20
    stw r0, 0x10(r1)
    li r3, 0x0
    addi r4, r1, 0x10
    bl fn_802E4654
    lwz r0, lbl_804A0B24
    stw r0, 0xc(r1)
    li r3, 0x1
    addi r4, r1, 0xc
    bl fn_802E4654
    lwz r0, lbl_804A0B28
    stw r0, 0x8(r1)
    li r3, 0x2
    addi r4, r1, 0x8
    bl fn_802E4654
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    addi r11, r1, 0xb0
    bl _restgpr_29
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_80137D38
asm void fn_80137D38(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_23
    mr r0, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r30, r9
    mr r28, r10
    lha r29, 0x9a(r1)
    addi r3, r1, 0x48
    mr r4, r0
    clrlwi r5, r8, 16
    clrlwi r6, r9, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    addi r3, r1, 0x48
    li r4, 0x0
    li r5, 0x0
    lfs f1, lbl_804A0B38
    fmr f2, f1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r3, r1, 0x48
    li r4, 0x0
    bl GXLoadTexObj
    extsh r0, r30
    srawi r31, r0, 1
    extsh r0, r27
    srawi r30, r0, 1
    addi r3, r1, 0x28
    mr r4, r23
    clrlwi r5, r30, 16
    clrlwi r6, r31, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    lfs f1, lbl_804A0B38
    fmr f2, f1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r3, r1, 0x28
    li r4, 0x1
    bl GXLoadTexObj
    addi r3, r1, 0x8
    mr r4, r24
    clrlwi r5, r30, 16
    clrlwi r6, r31, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lfs f1, lbl_804A0B38
    fmr f2, f1
    fmr f3, f1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r3, r1, 0x8
    li r4, 0x2
    bl GXLoadTexObj
    li r3, 0x80
    li r4, 0x7
    li r5, 0x4
    bl GXBegin
    extsh r3, r25
    extsh r4, r26
    li r5, 0x0
    bl fn_80137F60
    li r3, 0x0
    li r4, 0x0
    bl fn_80137F48
    extsh r3, r25
    extsh r0, r28
    add r30, r3, r0
    extsh r3, r30
    extsh r4, r26
    li r5, 0x0
    bl fn_80137F60
    li r3, 0x1
    li r4, 0x0
    bl fn_80137F48
    extsh r0, r26
    add r31, r0, r29
    extsh r3, r30
    extsh r4, r31
    li r5, 0x0
    bl fn_80137F60
    li r3, 0x1
    li r4, 0x1
    bl fn_80137F48
    extsh r3, r25
    extsh r4, r31
    li r5, 0x0
    bl fn_80137F60
    li r3, 0x0
    li r4, 0x1
    bl fn_80137F48
    bl fn_80137F44
    addi r11, r1, 0x90
    bl _restgpr_23
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

void fn_80137F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_80137F44(void) {
}

// asm_to_cpp: fn_80137F48
asm void fn_80137F48(u16 arg0, u16 arg1) {
    nofralloc
    clrlwi r0, r3, 16
    lis r3, 0xcc01
    sth r0, -0x8000(r3)
    clrlwi r0, r4, 16
    sth r0, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_80137F60
asm void fn_80137F60(s16 arg0, s16 arg1, s16 arg2) {
    nofralloc
    extsh r0, r3
    lis r3, 0xcc01
    sth r0, -0x8000(r3)
    extsh r0, r4
    sth r0, -0x8000(r3)
    extsh r0, r5
    sth r0, -0x8000(r3)
    blr
}

void fn_80137F80(void) {
    lbl_8049D738 = 1;
}

// asm_to_cpp: fn_80137F8C
asm void fn_80137F8C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, lbl_8049D738
    lis r7, fn_80137F80@ha
    addi r7, r7, fn_80137F80@l
    li r8, 0x2
    bl DVDReadAsyncPrio
lbl_80137FB0:
    li r3, 0x0
    bl fn_801780F8
    lwz r3, lbl_8049D738
    cmpwi r3, 0x1
    bne lbl_80137FB0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80137FD4
asm s32 fn_80137FD4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lis r31, lbl_803A7980@ha
    addi r3, r31, lbl_803A7980@l
    li r4, 0x0
    li r5, 0x1f8
    bl memset
    li r0, 0x1
    addi r31, r31, lbl_803A7980@l
    stw r0, 0x1f0(r31)
    bl fn_8018DE10
    cmpwi r3, 0x3
    bne lbl_80138020
    li r0, 0x0
    stw r0, 0x1f0(r31)
lbl_80138020:
    lis r3, lbl_803A7BE0@ha
    addi r3, r3, lbl_803A7BE0@l
    lis r4, lbl_803A7C00@ha
    addi r4, r4, lbl_803A7C00@l
    li r5, 0x3
    bl OSInitMessageQueue
    bl fn_80329400
    cmpwi r3, 0x0
    bne lbl_8013804C
    li r3, 0x0
    b lbl_80138100
lbl_8013804C:
    bl OSDisableInterrupts
    mr r31, r3
    stw r30, lbl_8049D734
    li r0, 0x0
    stw r0, lbl_8049D724
    stw r0, lbl_8049D72C
    stw r0, lbl_8049D730
    lis r3, fn_80139184@ha
    addi r3, r3, fn_80139184@l
    bl AIRegisterDMACallback
    stw r3, lbl_8049D728
    cmpwi r3, 0x0
    bne lbl_801380A4
    lwz r0, lbl_8049D734
    cmpwi r0, 0x0
    beq lbl_801380A4
    li r3, 0x0
    bl AIRegisterDMACallback
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80138100
lbl_801380A4:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, lbl_8049D734
    cmpwi r0, 0x0
    bne lbl_801380F4
    lis r31, lbl_803A7C20@ha
    addi r3, r31, lbl_803A7C20@l
    li r4, 0x0
    li r5, 0x300
    bl memset
    addi r3, r31, lbl_803A7C20@l
    li r4, 0x300
    bl DCFlushRange
    lwz r0, lbl_8049D724
    mulli r3, r0, 0x180
    addi r0, r31, lbl_803A7C20@l
    add r3, r0, r3
    li r4, 0x180
    bl AIInitDMA
    bl AIStartDMA
lbl_801380F4:
    li r0, 0x1
    stw r0, lbl_8049D718
    li r3, 0x1
lbl_80138100:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80138118(void) {
    s32 temp_r31;

    temp_r31 = (s32) (OSDisableInterrupts());
    if ((s32) lbl_8049D728 != 0) {
        AIRegisterDMACallback((s32) (lbl_8049D728));
    }
    OSRestoreInterrupts((s32) (temp_r31));
    lbl_8049D718 = 0;
}

// asm_to_cpp: fn_80138164
asm s32 fn_80138164(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    mr r26, r4
    lwz r0, lbl_8049D718
    cmpwi r0, 0x0
    bne lbl_80138194
    li r3, 0x0
    b lbl_801383C0
lbl_80138194:
    lis r3, lbl_803A7980@ha
    addi r29, r3, lbl_803A7980@l
    lwz r0, 0xa0(r29)
    cmpwi r0, 0x0
    beq lbl_801381B0
    li r3, 0x0
    b lbl_801383C0
lbl_801381B0:
    addi r3, r29, 0x80
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r3, r29, 0x8c
    li r4, 0x0
    li r5, 0x10
    bl memset
    mr r3, r27
    mr r4, r29
    bl DVDOpen
    cmpwi r3, 0x0
    bne lbl_801381EC
    li r3, 0x0
    b lbl_801383C0
lbl_801381EC:
    mr r3, r29
    lis r30, lbl_803A7B80@ha
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x40
    li r6, 0x0
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_8013821C
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_8013821C:
    addi r3, r29, 0x3c
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x30
    bl memcpy
    addi r3, r29, 0x3c
    lis r4, lbl_8035A5A8@ha
    addi r4, r4, lbl_8035A5A8@l
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80138254
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_80138254:
    lwz r3, 0x40(r29)
    subis r0, r3, 0x1
    cmplwi r0, 0x1000
    beq lbl_80138274
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_80138274:
    lwz r28, 0x5c(r29)
    mr r3, r29
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x20
    mr r6, r28
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_801382A4
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_801382A4:
    addi r3, r29, 0x6c
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x14
    bl memcpy
    addi r28, r28, 0x14
    li r0, 0x0
    stb r0, 0xa7(r29)
    li r27, 0x0
    li r31, 0x1
    b lbl_80138384
lbl_801382CC:
    add r3, r29, r27
    lbz r0, 0x70(r3)
    cmpwi r0, 0x1
    beq lbl_80138330
    bge lbl_80138378
    cmpwi r0, 0x0
    bge lbl_801382EC
    b lbl_80138378
lbl_801382EC:
    mr r3, r29
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x20
    mr r6, r28
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_80138318
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_80138318:
    addi r3, r29, 0x80
    addi r4, r30, lbl_803A7B80@l
    li r5, 0xc
    bl memcpy
    addi r28, r28, 0xc
    b lbl_80138380
lbl_80138330:
    mr r3, r29
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x20
    mr r6, r28
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_8013835C
    mr r3, r29
    bl DVDClose
    li r3, 0x0
    b lbl_801383C0
lbl_8013835C:
    addi r3, r29, 0x8c
    addi r4, r30, lbl_803A7B80@l
    li r5, 0x10
    bl memcpy
    stb r31, 0xa7(r29)
    addi r28, r28, 0x10
    b lbl_80138380
lbl_80138378:
    li r3, 0x0
    b lbl_801383C0
lbl_80138380:
    addi r27, r27, 0x1
lbl_80138384:
    lwz r0, 0x6c(r29)
    cmplw r27, r0
    blt lbl_801382CC
    li r3, 0x0
    stb r3, 0xa5(r29)
    stb r3, 0xa4(r29)
    stb r3, 0xa6(r29)
    stw r26, 0xb0(r29)
    li r0, 0x1
    stw r0, 0xa0(r29)
    lfs f0, lbl_804A0B50
    stfs f0, 0xdc(r29)
    stfs f0, 0xe0(r29)
    stw r3, 0xe8(r29)
    li r3, 0x1
lbl_801383C0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_801383D8(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 0)) {
        M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) = (s32) (0);
        DVDClose((s32) ((s32) &lbl_803A7980));
        return (s32) (1);
    }
    return (s32) (0);
}

// asm_to_cpp: fn_8013842C
asm s32 fn_8013842C(s32 arg0, s32 arg1) {
    nofralloc
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_801384D4
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    beq lbl_8013845C
    lwz r3, 0x58(r3)
    addi r0, r3, 0x1f
    clrrwi r5, r0, 5
    b lbl_8013846C
lbl_8013845C:
    lwz r3, 0x44(r3)
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mulli r5, r0, 0xa
lbl_8013846C:
    lis r3, lbl_803A7980@ha
    addi r4, r3, lbl_803A7980@l
    lwz r3, 0x80(r4)
    lwz r0, 0x84(r4)
    mullw r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mulli r0, r0, 0x3
    add r5, r5, r0
    srwi r3, r3, 2
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mulli r0, r0, 0x3
    add r5, r5, r0
    add r5, r5, r0
    lbz r0, 0xa7(r4)
    cmpwi r0, 0x0
    beq lbl_801384CC
    lwz r0, 0x48(r4)
    slwi r3, r0, 2
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    mulli r0, r0, 0x6
    add r5, r5, r0
lbl_801384CC:
    addi r3, r5, 0x1000
    blr
lbl_801384D4:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801384DC
asm s32 fn_801384DC(s32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r4, lbl_803A7980@ha
    addi r5, r4, lbl_803A7980@l
    lwz r0, 0xa0(r5)
    cmpwi r0, 0x0
    beq lbl_80138640
    lbz r0, 0xa4(r5)
    cmpwi r0, 0x0
    bne lbl_80138640
    mr r31, r3
    lwz r0, 0xb0(r5)
    cmpwi r0, 0x0
    beq lbl_80138530
    stw r3, 0xb4(r5)
    lwz r0, 0x58(r5)
    add r31, r3, r0
    b lbl_8013855C
lbl_80138530:
    li r3, 0x0
    li r0, 0xa
    mtctr r0
lbl_8013853C:
    add r4, r5, r3
    stw r31, 0x100(r4)
    lwz r4, 0x44(r5)
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    add r31, r31, r0
    addi r3, r3, 0xc
    bdnz lbl_8013853C
lbl_8013855C:
    lis r3, lbl_803A7980@ha
    addi r29, r3, lbl_803A7980@l
    lwz r3, 0x80(r29)
    lwz r0, 0x84(r29)
    mullw r3, r3, r0
    addi r0, r3, 0x1f
    clrrwi r26, r0, 5
    srwi r3, r3, 2
    addi r0, r3, 0x1f
    clrrwi r25, r0, 5
    li r27, 0x0
    li r30, 0x0
lbl_8013858C:
    add r28, r29, r30
    stw r31, 0x178(r28)
    mr r3, r31
    mr r4, r26
    bl DCInvalidateRange
    add r31, r31, r26
    stw r31, 0x17c(r28)
    mr r3, r31
    mr r4, r25
    bl DCInvalidateRange
    add r31, r31, r25
    stw r31, 0x180(r28)
    mr r3, r31
    mr r4, r25
    bl DCInvalidateRange
    add r31, r31, r25
    addi r27, r27, 0x1
    addi r30, r30, 0x10
    cmplwi r27, 0x3
    blt lbl_8013858C
    lis r3, lbl_803A7980@ha
    addi r6, r3, lbl_803A7980@l
    lbz r0, 0xa7(r6)
    cmpwi r0, 0x0
    beq lbl_8013862C
    li r3, 0x0
    li r5, 0x0
    li r0, 0x6
    mtctr r0
lbl_80138600:
    add r4, r6, r3
    stw r31, 0x1a8(r4)
    stw r31, 0x1ac(r4)
    stw r5, 0x1b0(r4)
    lwz r0, 0x48(r6)
    slwi r4, r0, 2
    addi r0, r4, 0x1f
    clrrwi r0, r0, 5
    add r31, r31, r0
    addi r3, r3, 0xc
    bdnz lbl_80138600
lbl_8013862C:
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    stw r31, 0x9c(r3)
    li r3, 0x1
    b lbl_80138644
lbl_80138640:
    li r3, 0x0
lbl_80138644:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8013865C
asm void fn_8013865C(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_803A7980@ha
    addi r30, r3, lbl_803A7980@l
    lwz r0, 0xb0(r30)
    cmpwi r0, 0x0
    bne lbl_801386A8
    li r29, 0x0
    li r31, 0x0
lbl_8013868C:
    add r3, r30, r31
    addi r3, r3, 0x100
    bl fn_80139A7C
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0xa
    blt lbl_8013868C
lbl_801386A8:
    li r29, 0x0
    li r31, 0x0
    lis r3, lbl_803A7980@ha
    addi r30, r3, lbl_803A7980@l
lbl_801386B8:
    add r3, r30, r31
    addi r3, r3, 0x178
    bl fn_80139F84
    addi r29, r29, 0x1
    addi r31, r31, 0x10
    cmpwi r29, 0x3
    blt lbl_801386B8
    lis r3, lbl_803A7980@ha
    addi r30, r3, lbl_803A7980@l
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_8013870C
    li r29, 0x0
    li r31, 0x0
lbl_801386F0:
    add r3, r30, r31
    addi r3, r3, 0x1a8
    bl fn_80137708
    addi r29, r29, 0x1
    addi r31, r31, 0xc
    cmpwi r29, 0x6
    blt lbl_801386F0
lbl_8013870C:
    lis r3, lbl_803A7BC0@ha
    addi r3, r3, lbl_803A7BC0@l
    la r4, lbl_8049D71C
    li r5, 0x1
    bl OSInitMessageQueue
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80138738(void) {
    s32 sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7BC0), (s32) ((s32) &sp8), (s32) (1));
    return (s32) (sp8 != 0);
}

void fn_80138774(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7BC0), (s32) ((s32) arg0), (s32) (1));
}

// asm_to_cpp: fn_80138788
asm s32 fn_80138788(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r29, r4
    mr r30, r5
    lis r4, lbl_803A7980@ha
    addi r31, r4, lbl_803A7980@l
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_801389DC
    lbz r0, 0xa4(r31)
    cmpwi r0, 0x0
    bne lbl_801389DC
    cmpwi r3, 0x0
    ble lbl_80138850
    lwz r4, 0x60(r31)
    cmpwi r4, 0x0
    bne lbl_801387E4
    li r3, 0x0
    b lbl_801389E0
lbl_801387E4:
    lwz r0, 0x50(r31)
    cmplw r0, r3
    ble lbl_80138848
    subi r0, r3, 0x1
    slwi r0, r0, 2
    add r6, r4, r0
    mr r3, r31
    lis r28, lbl_803A7B80@ha
    addi r4, r28, lbl_803A7B80@l
    li r5, 0x20
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_80138820
    li r3, 0x0
    b lbl_801389E0
lbl_80138820:
    lwz r0, 0x64(r31)
    lwz r4, lbl_803A7B80@l(r28)
    add r0, r0, r4
    stw r0, 0xb8(r31)
    stw r27, 0xc0(r31)
    addi r3, r28, lbl_803A7B80@l
    lwz r0, 0x4(r3)
    subf r0, r4, r0
    stw r0, 0xbc(r31)
    b lbl_80138864
lbl_80138848:
    li r3, 0x0
    b lbl_801389E0
lbl_80138850:
    lwz r0, 0x64(r31)
    stw r0, 0xb8(r31)
    lwz r0, 0x54(r31)
    stw r0, 0xbc(r31)
    stw r3, 0xc0(r31)
lbl_80138864:
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lbz r0, 0xa7(r3)
    cmpwi r0, 0x0
    beq lbl_80138898
    cmpwi r30, 0x0
    blt lbl_8013888C
    lwz r0, 0x98(r3)
    cmplw r30, r0
    blt lbl_80138894
lbl_8013888C:
    li r3, 0x0
    b lbl_801389E0
lbl_80138894:
    stw r30, 0xec(r3)
lbl_80138898:
    clrlwi r29, r29, 31
    lis r3, lbl_803A7980@ha
    addi r30, r3, lbl_803A7980@l
    stb r29, 0xa6(r30)
    li r0, 0x0
    stw r0, 0xd8(r30)
    lwz r0, 0xb0(r30)
    cmpwi r0, 0x0
    beq lbl_8013891C
    mr r3, r30
    lwz r4, 0xb4(r30)
    lwz r5, 0x58(r30)
    lwz r6, 0x64(r30)
    bl fn_80137F8C
    cmpwi r3, 0x0
    bge lbl_801388E0
    li r3, 0x0
    b lbl_801389E0
lbl_801388E0:
    lwz r4, 0x64(r30)
    lwz r3, 0xb4(r30)
    lwz r0, 0xb8(r30)
    add r0, r3, r0
    subf r28, r4, r0
    li r3, 0x14
    mr r4, r28
    bl fn_80139AD8
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_80138948
    li r3, 0xc
    mr r4, r28
    bl fn_80137410
    b lbl_80138948
lbl_8013891C:
    li r3, 0x14
    li r4, 0x0
    bl fn_80139AD8
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_80138940
    li r3, 0xc
    li r4, 0x0
    bl fn_80137410
lbl_80138940:
    li r3, 0x8
    bl fn_80139818
lbl_80138948:
    li r0, -0x1
    lis r3, lbl_803A7980@ha
    addi r29, r3, lbl_803A7980@l
    stw r0, 0xf0(r29)
    li r0, 0x0
    stw r0, 0xf4(r29)
    bl fn_8013865C
    bl fn_80139BB8
    lbz r0, 0xa7(r29)
    cmpwi r0, 0x0
    beq lbl_80138978
    bl fn_801374EC
lbl_80138978:
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r0, 0xb0(r3)
    cmpwi r0, 0x0
    bne lbl_80138990
    bl fn_801398C8
lbl_80138990:
    bl fn_80138738
    cmpwi r3, 0x0
    bne lbl_801389A4
    li r3, 0x0
    b lbl_801389E0
lbl_801389A4:
    li r0, 0x1
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    stb r0, 0xa4(r3)
    li r0, 0x0
    stb r0, 0xa5(r3)
    stw r0, 0xf8(r3)
    stw r0, 0xfc(r3)
    lis r3, fn_80138B4C@ha
    addi r3, r3, fn_80138B4C@l
    bl VISetPostRetraceCallback
    stw r3, lbl_8049D720
    li r3, 0x1
    b lbl_801389E0
lbl_801389DC:
    li r3, 0x0
lbl_801389E0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801389F8
asm s32 fn_801389F8(void) {
    nofralloc
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_80138A50
    lbz r0, 0xa4(r3)
    cmplwi r0, 0x1
    beq lbl_80138A20
    cmplwi r0, 0x4
    bne lbl_80138A50
lbl_80138A20:
    li r0, 0x2
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    stb r0, 0xa4(r3)
    li r0, 0x0
    stw r0, 0xd0(r3)
    stw r0, 0xd4(r3)
    li r0, -0x1
    stw r0, 0xcc(r3)
    stw r0, 0xc8(r3)
    li r3, 0x1
    blr
lbl_80138A50:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80138A58
asm void fn_80138A58(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_803A7980@ha
    addi r31, r3, lbl_803A7980@l
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_80138AFC
    lbz r0, 0xa4(r31)
    cmpwi r0, 0x0
    beq lbl_80138AFC
    li r0, 0x0
    stb r0, 0xa5(r31)
    stb r0, 0xa4(r31)
    lwz r3, lbl_8049D720
    bl VISetPostRetraceCallback
    lwz r0, 0xb0(r31)
    cmpwi r0, 0x0
    bne lbl_80138AB4
    mr r3, r31
    bl fn_802D55B4
    bl fn_801398E4
lbl_80138AB4:
    bl fn_80139BD4
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lbz r0, 0xa7(r3)
    cmpwi r0, 0x0
    beq lbl_80138AD0
    bl fn_80137508
lbl_80138AD0:
    bl fn_80139100
    cmpwi r3, 0x0
    bne lbl_80138AD0
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lfs f0, 0xe0(r3)
    stfs f0, 0xdc(r3)
    li r0, 0x0
    stw r0, 0xe8(r3)
    stw r0, 0xa8(r3)
    stw r0, 0xac(r3)
lbl_80138AFC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80138B10(void) {
    if (((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) && ((u8) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) == 2)) {
        M2C_FIELD(&lbl_803A7980, s8 *, 0xA5) = (s8) (4);
        M2C_FIELD(&lbl_803A7980, u8 *, 0xA4) = (u8) (4U);
        return (s32) (1);
    }
    return (s32) (0);
}

// asm_to_cpp: fn_80138B4C
asm void fn_80138B4C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r12, lbl_8049D720
    cmpwi r12, 0x0
    beq lbl_80138B74
    mtctr r12
    bctrl
lbl_80138B74:
    li r30, -0x1
    lis r3, lbl_803A7980@ha
    addi r31, r3, lbl_803A7980@l
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_80138DBC
    lbz r0, 0xa4(r31)
    cmplwi r0, 0x2
    bne lbl_80138DBC
    lwz r0, 0xa8(r31)
    cmpwi r0, 0x0
    bne lbl_80138BB0
    lwz r0, 0xac(r31)
    cmpwi r0, 0x0
    beq lbl_80138BC8
lbl_80138BB0:
    li r0, 0x5
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    stb r0, 0xa5(r3)
    stb r0, 0xa4(r3)
    b lbl_80138DBC
lbl_80138BC8:
    lwz r5, 0xc8(r31)
    lwz r4, 0xcc(r31)
    li r3, 0x1
    li r0, 0x0
    addc r4, r4, r3
    adde r3, r5, r0
    stw r4, 0xcc(r31)
    stw r3, 0xc8(r31)
    or r0, r4, r3
    cmpwi r0, 0x0
    bne lbl_80138C68
    bl fn_80138DD4
    cmpwi r3, 0x0
    beq lbl_80138C58
    lbz r0, 0xa7(r31)
    cmpwi r0, 0x0
    beq lbl_80138C48
    lwz r3, 0xf4(r31)
    lwz r0, 0xf0(r31)
    subf r0, r3, r0
    cmpwi r0, 0x1
    bgt lbl_80138C3C
    li r3, 0x0
    bl fn_80139F98
    mr r30, r3
    lwz r3, 0xf0(r31)
    addi r0, r3, 0x1
    stw r0, 0xf0(r31)
    b lbl_80138CDC
lbl_80138C3C:
    li r0, 0x2
    stb r0, 0xa5(r31)
    b lbl_80138CDC
lbl_80138C48:
    li r3, 0x0
    bl fn_80139F98
    mr r30, r3
    b lbl_80138CDC
lbl_80138C58:
    li r0, -0x1
    stw r0, 0xcc(r31)
    stw r0, 0xc8(r31)
    b lbl_80138CDC
lbl_80138C68:
    xori r0, r4, 0x1
    or r0, r0, r3
    cmpwi r0, 0x0
    bne lbl_80138C80
    li r0, 0x2
    stb r0, 0xa5(r31)
lbl_80138C80:
    bl fn_80138E48
    cmpwi r3, 0x0
    beq lbl_80138CDC
    lis r3, lbl_803A7980@ha
    addi r31, r3, lbl_803A7980@l
    lbz r0, 0xa7(r31)
    cmpwi r0, 0x0
    beq lbl_80138CD0
    lwz r3, 0xf4(r31)
    lwz r0, 0xf0(r31)
    subf r0, r3, r0
    cmpwi r0, 0x1
    bgt lbl_80138CDC
    li r3, 0x0
    bl fn_80139F98
    mr r30, r3
    lwz r3, 0xf0(r31)
    addi r0, r3, 0x1
    stw r0, 0xf0(r31)
    b lbl_80138CDC
lbl_80138CD0:
    li r3, 0x0
    bl fn_80139F98
    mr r30, r3
lbl_80138CDC:
    cmpwi r30, 0x0
    beq lbl_80138D14
    addis r0, r30, 0x1
    cmplwi r0, 0xffff
    beq lbl_80138D14
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r3, 0xf8(r3)
    cmpwi r3, 0x0
    beq lbl_80138D08
    bl fn_801390EC
lbl_80138D08:
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    stw r30, 0xf8(r3)
lbl_80138D14:
    lis r3, lbl_803A7980@ha
    addi r4, r3, lbl_803A7980@l
    lbz r0, 0xa6(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80138DBC
    lbz r0, 0xa7(r4)
    cmpwi r0, 0x0
    beq lbl_80138D6C
    lwz r3, 0xf4(r4)
    lwz r0, 0xc0(r4)
    add r3, r3, r0
    lwz r0, 0x50(r4)
    cmplw r3, r0
    bne lbl_80138DBC
    lwz r0, 0xfc(r4)
    cmpwi r0, 0x0
    bne lbl_80138DBC
    li r0, 0x3
    stb r0, 0xa5(r4)
    stb r0, 0xa4(r4)
    b lbl_80138DBC
lbl_80138D6C:
    lwz r3, 0xf8(r4)
    cmpwi r3, 0x0
    beq lbl_80138D88
    lwz r3, 0xc(r3)
    lwz r0, 0xc0(r4)
    add r5, r3, r0
    b lbl_80138D90
lbl_80138D88:
    lwz r3, 0xc0(r4)
    subi r5, r3, 0x1
lbl_80138D90:
    lis r3, lbl_803A7980@ha
    addi r4, r3, lbl_803A7980@l
    lwz r3, 0x50(r4)
    subi r0, r3, 0x1
    cmplw r5, r0
    bne lbl_80138DBC
    cmpwi r30, 0x0
    bne lbl_80138DBC
    li r0, 0x3
    stb r0, 0xa5(r4)
    stb r0, 0xa4(r4)
lbl_80138DBC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80138DD4
asm s32 fn_80138DD4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r3, 0x88(r3)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80138E0C
    bl VIGetNextField
    cmpwi r3, 0x0
    bne lbl_80138E34
    li r3, 0x1
    b lbl_80138E38
lbl_80138E0C:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80138E2C
    bl VIGetNextField
    cmplwi r3, 0x1
    bne lbl_80138E34
    li r3, 0x1
    b lbl_80138E38
lbl_80138E2C:
    li r3, 0x1
    b lbl_80138E38
lbl_80138E34:
    li r3, 0x0
lbl_80138E38:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80138E48
asm s32 fn_80138E48(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r3, lbl_803A7980@ha
    addi r31, r3, lbl_803A7980@l
    lwz r3, 0x88(r31)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_80138E88
    bl VIGetNextField
    cmpwi r3, 0x0
    bne lbl_80138F60
    li r3, 0x1
    b lbl_80138F64
lbl_80138E88:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80138EA8
    bl VIGetNextField
    cmplwi r3, 0x1
    bne lbl_80138F60
    li r3, 0x1
    b lbl_80138F64
lbl_80138EA8:
    la r3, lbl_804A0B50
    lfs f1, 0x4(r3)
    lfs f0, 0x4c(r31)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r30, 0xc(r1)
    bl VIGetTvFormat
    cmplwi r3, 0x1
    bne lbl_80138F08
    lwz r4, 0xc8(r31)
    lwz r6, 0xcc(r31)
    srawi r0, r30, 31
    mulhwu r3, r6, r30
    mullw r5, r4, r30
    mullw r4, r6, r30
    mullw r0, r6, r0
    add r3, r3, r5
    add r3, r3, r0
    li r5, 0x0
    li r6, 0x1388
    bl __div2i
    stw r4, 0xd4(r31)
    b lbl_80138F3C
lbl_80138F08:
    lwz r4, 0xc8(r31)
    lwz r6, 0xcc(r31)
    srawi r0, r30, 31
    mulhwu r3, r6, r30
    mullw r5, r4, r30
    mullw r4, r6, r30
    mullw r0, r6, r0
    add r3, r3, r5
    add r3, r3, r0
    li r5, 0x0
    li r6, 0x176a
    bl __div2i
    stw r4, 0xd4(r31)
lbl_80138F3C:
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r4, 0xd4(r3)
    lwz r0, 0xd0(r3)
    cmpw r0, r4
    beq lbl_80138F60
    stw r4, 0xd0(r3)
    li r3, 0x1
    b lbl_80138F64
lbl_80138F60:
    li r3, 0x0
lbl_80138F64:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80138F7C
asm s32 fn_80138F7C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lis r4, lbl_803A7980@ha
    addi r31, r4, lbl_803A7980@l
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_80139030
    lbz r0, 0xa4(r31)
    cmpwi r0, 0x0
    beq lbl_80139030
    lwz r0, 0xf8(r31)
    cmpwi r0, 0x0
    beq lbl_80139030
    bl fn_8013788C
    lwz r5, 0xf8(r31)
    extsh r0, r30
    stw r0, 0x8(r1)
    lwz r3, 0x0(r5)
    lwz r4, 0x4(r5)
    lwz r5, 0x8(r5)
    extsh r6, r27
    extsh r7, r28
    lwz r0, 0x80(r31)
    extsh r8, r0
    lwz r0, 0x84(r31)
    extsh r9, r0
    extsh r10, r29
    bl fn_80137D38
    bl fn_80137774
    lwz r3, 0xf8(r31)
    lwz r3, 0xc(r3)
    lwz r0, 0xc0(r31)
    add r4, r3, r0
    lwz r3, 0x50(r31)
    divwu r0, r4, r3
    mullw r0, r0, r3
    subf r3, r0, r4
    b lbl_80139034
lbl_80139030:
    li r3, -0x1
lbl_80139034:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8013904C
asm s32 fn_8013904C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, lbl_803A7980@ha
    addi r4, r4, lbl_803A7980@l
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_80139080
    addi r4, r4, 0x80
    li r5, 0xc
    bl memcpy
    li r3, 0x1
    b lbl_80139084
lbl_80139080:
    li r3, 0x0
lbl_80139084:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80139094
asm s32 fn_80139094(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lis r4, lbl_803A7980@ha
    addi r4, r4, lbl_803A7980@l
    lwz r0, 0xa0(r4)
    cmpwi r0, 0x0
    beq lbl_801390C8
    addi r4, r4, 0x8c
    li r5, 0x10
    bl memcpy
    li r3, 0x1
    b lbl_801390CC
lbl_801390C8:
    li r3, 0x0
lbl_801390CC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_801390DC(void) {
    return (s32) ((s32) M2C_FIELD(&lbl_803A7980, u8 *, 0xA4));
}

void fn_801390EC(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7BE0), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_80139100(void) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803A7BE0), (s32) ((s32) &sp8), (s32) (0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80139144(void) {
    s32 **temp_r3;

    fn_802E1450();
    if ((s32) lbl_8049D718 != 0) {
loop_1:
        temp_r3 = (s32 **) (fn_80139100());
        if (temp_r3 != NULL) {
            fn_80139F84((s32 **) (temp_r3));
            goto loop_1;
        }
    }
}

// asm_to_cpp: fn_80139184
asm void fn_80139184(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, lbl_8049D734
    cmpwi r0, 0x0
    bne lbl_80139208
    lwz r0, lbl_8049D724
    xori r0, r0, 0x1
    stw r0, lbl_8049D724
    mulli r0, r0, 0x180
    lis r3, lbl_803A7C20@ha
    addi r31, r3, lbl_803A7C20@l
    add r3, r31, r0
    li r4, 0x180
    bl AIInitDMA
    bl OSEnableInterrupts
    mr r30, r3
    lwz r0, lbl_8049D724
    mulli r0, r0, 0x180
    add r3, r31, r0
    li r4, 0x0
    li r5, 0x60
    bl fn_801392E8
    lwz r0, lbl_8049D724
    mulli r0, r0, 0x180
    add r3, r31, r0
    li r4, 0x180
    bl DCFlushRange
    mr r3, r30
    bl OSRestoreInterrupts
    b lbl_801392D0
lbl_80139208:
    cmpwi r0, 0x1
    bne lbl_8013923C
    lwz r0, lbl_8049D72C
    cmpwi r0, 0x0
    beq lbl_80139220
    stw r0, lbl_8049D730
lbl_80139220:
    lwz r12, lbl_8049D728
    mtctr r12
    bctrl
    bl fn_8029AD14
    addis r0, r3, 0x8000
    stw r0, lbl_8049D72C
    b lbl_80139254
lbl_8013923C:
    lwz r12, lbl_8049D728
    mtctr r12
    bctrl
    bl fn_8029AD14
    addis r0, r3, 0x8000
    stw r0, lbl_8049D730
lbl_80139254:
    lwz r0, lbl_8049D724
    xori r0, r0, 0x1
    stw r0, lbl_8049D724
    mulli r4, r0, 0x180
    lis r3, lbl_803A7C20@ha
    addi r0, r3, lbl_803A7C20@l
    add r3, r0, r4
    li r4, 0x180
    bl AIInitDMA
    bl OSEnableInterrupts
    mr r30, r3
    lwz r3, lbl_8049D730
    cmpwi r3, 0x0
    beq lbl_80139294
    li r4, 0x180
    bl DCInvalidateRange
lbl_80139294:
    lwz r0, lbl_8049D724
    mulli r0, r0, 0x180
    lis r3, lbl_803A7C20@ha
    addi r31, r3, lbl_803A7C20@l
    add r3, r31, r0
    lwz r4, lbl_8049D730
    li r5, 0x60
    bl fn_801392E8
    lwz r0, lbl_8049D724
    mulli r0, r0, 0x180
    add r3, r31, r0
    li r4, 0x180
    bl DCFlushRange
    mr r3, r30
    bl OSRestoreInterrupts
lbl_801392D0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801392E8
asm void fn_801392E8(M2C_UNK *arg0, M2C_UNK *arg1, u32 arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r4, 0x0
    beq lbl_801394E4
    lis r6, lbl_803A7980@ha
    addi r30, r6, lbl_803A7980@l
    lwz r0, 0xa0(r30)
    cmpwi r0, 0x0
    beq lbl_801394D8
    lbz r0, 0xa5(r30)
    cmplwi r0, 0x2
    bne lbl_801394D8
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_801394D8
    mr r29, r5
    mr r28, r3
    mr r27, r4
    lis r3, lbl_8035A4A8@ha
    addi r31, r3, lbl_8035A4A8@l
    li r26, 0x0
lbl_80139348:
    lwz r0, 0xfc(r30)
    cmpwi r0, 0x0
    bne lbl_80139388
    li r3, 0x0
    bl fn_8013771C
    stw r3, 0xfc(r30)
    cmpwi r3, 0x0
    bne lbl_8013937C
    mr r3, r28
    mr r4, r27
    slwi r5, r29, 2
    bl memcpy
    b lbl_801396A8
lbl_8013937C:
    lwz r3, 0xf4(r30)
    addi r0, r3, 0x1
    stw r0, 0xf4(r30)
lbl_80139388:
    lwz r3, 0xfc(r30)
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_80139348
    cmplw r4, r29
    blt lbl_801393A4
    mr r4, r29
lbl_801393A4:
    lwz r6, 0x4(r3)
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_80139498
lbl_801393B4:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_801393DC
    subi r0, r3, 0x1
    stw r0, 0xe8(r30)
    lfs f1, 0xdc(r30)
    lfs f0, 0xe4(r30)
    fadds f0, f1, f0
    stfs f0, 0xdc(r30)
    b lbl_801393E4
lbl_801393DC:
    lfs f0, 0xe0(r30)
    stfs f0, 0xdc(r30)
lbl_801393E4:
    lfs f0, 0xdc(r30)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 1
    lhzx r5, r31, r0
    lha r0, 0x0(r6)
    mullw r0, r5, r0
    srawi r3, r0, 15
    lha r0, 0x2(r6)
    mullw r0, r5, r0
    srawi r5, r0, 15
    addi r6, r6, 0x4
    lwz r0, 0x1f0(r30)
    cmpwi r0, 0x0
    bne lbl_80139434
    add r3, r3, r5
    addi r3, r3, 0x1
    srawi r3, r3, 1
    mr r5, r3
lbl_80139434:
    lha r0, 0x0(r27)
    add r3, r3, r0
    cmpwi r3, -0x8000
    bge lbl_8013944C
    li r3, -0x8000
    b lbl_80139458
lbl_8013944C:
    cmpwi r3, 0x7fff
    ble lbl_80139458
    li r3, 0x7fff
lbl_80139458:
    extsh r0, r3
    sth r0, 0x0(r28)
    lha r0, 0x2(r27)
    add r5, r5, r0
    addi r27, r27, 0x4
    cmpwi r5, -0x8000
    bge lbl_8013947C
    li r5, -0x8000
    b lbl_80139488
lbl_8013947C:
    cmpwi r5, 0x7fff
    ble lbl_80139488
    li r5, 0x7fff
lbl_80139488:
    extsh r0, r5
    sth r0, 0x2(r28)
    addi r28, r28, 0x4
    bdnz lbl_801393B4
lbl_80139498:
    subf r29, r4, r29
    lwz r3, 0xfc(r30)
    lwz r0, 0x8(r3)
    subf r0, r4, r0
    stw r0, 0x8(r3)
    lwz r3, 0xfc(r30)
    stw r6, 0x4(r3)
    lwz r3, 0xfc(r30)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_801394CC
    bl fn_80137708
    stw r26, 0xfc(r30)
lbl_801394CC:
    cmpwi r29, 0x0
    beq lbl_801396A8
    b lbl_80139348
lbl_801394D8:
    slwi r5, r5, 2
    bl memcpy
    b lbl_801396A8
lbl_801394E4:
    lis r4, lbl_803A7980@ha
    addi r31, r4, lbl_803A7980@l
    lwz r0, 0xa0(r31)
    cmpwi r0, 0x0
    beq lbl_8013969C
    lbz r0, 0xa5(r31)
    cmplwi r0, 0x2
    bne lbl_8013969C
    lbz r0, 0xa7(r31)
    cmpwi r0, 0x0
    beq lbl_8013969C
    mr r30, r5
    mr r29, r3
    lis r3, lbl_8035A4A8@ha
    addi r28, r3, lbl_8035A4A8@l
    li r27, 0x0
lbl_80139524:
    lwz r0, 0xfc(r31)
    cmpwi r0, 0x0
    bne lbl_80139564
    li r3, 0x0
    bl fn_8013771C
    stw r3, 0xfc(r31)
    cmpwi r3, 0x0
    bne lbl_80139558
    mr r3, r29
    li r4, 0x0
    slwi r5, r30, 2
    bl memset
    b lbl_801396A8
lbl_80139558:
    lwz r3, 0xf4(r31)
    addi r0, r3, 0x1
    stw r0, 0xf4(r31)
lbl_80139564:
    lwz r3, 0xfc(r31)
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    beq lbl_80139524
    cmplw r4, r30
    blt lbl_80139580
    mr r4, r30
lbl_80139580:
    lwz r5, 0x4(r3)
    mtctr r4
    cmplwi r4, 0x0
    ble lbl_8013965C
lbl_80139590:
    lwz r3, 0xe8(r31)
    cmpwi r3, 0x0
    beq lbl_801395B8
    subi r0, r3, 0x1
    stw r0, 0xe8(r31)
    lfs f1, 0xdc(r31)
    lfs f0, 0xe4(r31)
    fadds f0, f1, f0
    stfs f0, 0xdc(r31)
    b lbl_801395C0
lbl_801395B8:
    lfs f0, 0xe0(r31)
    stfs f0, 0xdc(r31)
lbl_801395C0:
    lfs f0, 0xdc(r31)
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    slwi r0, r0, 1
    lhzx r3, r28, r0
    lha r0, 0x0(r5)
    mullw r0, r3, r0
    srawi r6, r0, 15
    lha r0, 0x2(r5)
    mullw r0, r3, r0
    srawi r3, r0, 15
    addi r5, r5, 0x4
    lwz r0, 0x1f0(r31)
    cmpwi r0, 0x0
    bne lbl_80139610
    add r6, r6, r3
    addi r6, r6, 0x1
    srawi r6, r6, 1
    mr r3, r6
lbl_80139610:
    cmpwi r6, -0x8000
    bge lbl_80139620
    li r6, -0x8000
    b lbl_8013962C
lbl_80139620:
    cmpwi r6, 0x7fff
    ble lbl_8013962C
    li r6, 0x7fff
lbl_8013962C:
    sth r6, 0x0(r29)
    cmpwi r3, -0x8000
    bge lbl_80139640
    li r3, -0x8000
    b lbl_8013964C
lbl_80139640:
    cmpwi r3, 0x7fff
    ble lbl_8013964C
    li r3, 0x7fff
lbl_8013964C:
    extsh r0, r3
    sth r0, 0x2(r29)
    addi r29, r29, 0x4
    bdnz lbl_80139590
lbl_8013965C:
    subf r30, r4, r30
    lwz r3, 0xfc(r31)
    lwz r0, 0x8(r3)
    subf r0, r4, r0
    stw r0, 0x8(r3)
    lwz r3, 0xfc(r31)
    stw r5, 0x4(r3)
    lwz r3, 0xfc(r31)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80139690
    bl fn_80137708
    stw r27, 0xfc(r31)
lbl_80139690:
    cmpwi r30, 0x0
    beq lbl_801396A8
    b lbl_80139524
lbl_8013969C:
    li r4, 0x0
    slwi r5, r5, 2
    bl memset
lbl_801396A8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801396C0
asm s32 fn_801396C0(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lis r3, lbl_803A7980@ha
    addi r3, r3, lbl_803A7980@l
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_801397C4
    lbz r0, 0xa7(r3)
    cmpwi r0, 0x0
    beq lbl_801397C4
    bl AIGetDSPSampleRate
    cmpwi r3, 0x0
    li r31, 0x30
    bne lbl_80139710
    li r31, 0x20
lbl_80139710:
    cmpwi r29, 0x7f
    ble lbl_8013971C
    li r29, 0x7f
lbl_8013971C:
    cmpwi r29, 0x0
    bge lbl_80139728
    li r29, 0x0
lbl_80139728:
    lis r3, 0x1
    subi r0, r3, 0x15a0
    cmpw r30, r0
    ble lbl_8013973C
    mr r30, r0
lbl_8013973C:
    cmpwi r30, 0x0
    bge lbl_80139748
    li r30, 0x0
lbl_80139748:
    bl OSDisableInterrupts
    lfd f2, lbl_804A0B48
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lis r5, 0x4330
    stw r5, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lis r4, lbl_803A7980@ha
    addi r4, r4, lbl_803A7980@l
    stfs f1, 0xe0(r4)
    cmpwi r30, 0x0
    beq lbl_801397AC
    mullw r0, r31, r30
    stw r0, 0xe8(r4)
    lfs f0, 0xdc(r4)
    fsubs f1, f1, f0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    stw r5, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0xe4(r4)
    b lbl_801397B8
lbl_801397AC:
    li r0, 0x0
    stw r0, 0xe8(r4)
    stfs f1, 0xdc(r4)
lbl_801397B8:
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_801397C8
lbl_801397C4:
    li r3, 0x0
lbl_801397C8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_801397E0(void) {
    if ((s32) M2C_FIELD(&lbl_803A7980, s32 *, 0xA0) != 0) {
        return (s32) ((s32) M2C_FIELD(&lbl_803A7980, f32 *, 0xDC));
    }
    return (s32) (-1);
}

// asm_to_cpp: fn_80139818
asm s32 fn_80139818(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r8, r3
    lis r3, lbl_803A7FF8@ha
    addi r3, r3, lbl_803A7FF8@l
    lis r4, fn_80139920@ha
    addi r4, r4, fn_80139920@l
    li r5, 0x0
    lis r6, lbl_803A8310@ha
    addi r6, r6, lbl_803A8310@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r9, 0x1
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_80139864
    li r3, 0x0
    b lbl_801398B8
lbl_80139864:
    lis r3, lbl_803A7F20@ha
    addi r3, r3, lbl_803A7F20@l
    lis r4, lbl_803A7F80@ha
    addi r4, r4, lbl_803A7F80@l
    li r5, 0xa
    bl OSInitMessageQueue
    lis r3, lbl_803A7F40@ha
    addi r3, r3, lbl_803A7F40@l
    lis r4, lbl_803A7FA8@ha
    addi r4, r4, lbl_803A7FA8@l
    li r5, 0xa
    bl OSInitMessageQueue
    lis r3, lbl_803A7F60@ha
    addi r3, r3, lbl_803A7F60@l
    lis r4, lbl_803A7FD0@ha
    addi r4, r4, lbl_803A7FD0@l
    li r5, 0xa
    bl OSInitMessageQueue
    li r0, 0x1
    stw r0, lbl_8049D740
    li r3, 0x1
lbl_801398B8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801398C8
asm s32 fn_801398C8() {
    nofralloc
    lwz r0, lbl_8049D740
    cmpwi r0, 0x0
    beqlr
    lis r3, lbl_803A7FF8@ha
    addi r3, r3, lbl_803A7FF8@l
    b fn_8031D460
    blr
}

// asm_to_cpp: fn_801398E4
asm void fn_801398E4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D740
    cmpwi r0, 0x0
    beq lbl_80139910
    lis r3, lbl_803A7FF8@ha
    addi r3, r3, lbl_803A7FF8@l
    bl OSCancelThread
    li r0, 0x0
    stw r0, lbl_8049D740
lbl_80139910:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80139920
asm void fn_80139920(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    li r24, 0x0
    lis r28, lbl_803A7980@ha
    addi r29, r28, lbl_803A7980@l
    lwz r26, 0xb8(r29)
    lwz r25, 0xbc(r29)
    li r30, -0x1
    lis r31, lbl_803A7FF8@ha
lbl_80139950:
    bl fn_80139A48
    mr r27, r3
    addi r3, r28, lbl_803A7980@l
    lwz r4, 0x0(r27)
    mr r5, r25
    mr r6, r26
    li r7, 0x2
    bl DVDReadPrio
    cmpw r3, r25
    beq lbl_8013999C
    cmpwi r3, -0x1
    bne lbl_80139984
    stw r30, 0xa8(r29)
lbl_80139984:
    cmpwi r24, 0x0
    bne lbl_80139994
    li r3, 0x0
    bl fn_80138774
lbl_80139994:
    addi r3, r31, lbl_803A7FF8@l
    bl fn_8031D6F8
lbl_8013999C:
    stw r24, 0x4(r27)
    mr r3, r27
    bl fn_80139A34
    add r26, r26, r25
    lwz r3, 0x0(r27)
    lwz r25, 0x0(r3)
    lwz r4, 0x50(r29)
    lwz r0, 0xc0(r29)
    add r3, r24, r0
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    subi r0, r4, 0x1
    cmplw r3, r0
    bne lbl_801399F8
    lbz r0, 0xa6(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801399F0
    lwz r26, 0x64(r29)
    b lbl_801399F8
lbl_801399F0:
    addi r3, r31, lbl_803A7FF8@l
    bl fn_8031D6F8
lbl_801399F8:
    addi r24, r24, 0x1
    b lbl_80139950
}

s32 ** fn_80139A00(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F40), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139A34(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F40), (s32) ((s32) arg0), (s32) (1));
}

s32 ** fn_80139A48(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F20), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139A7C(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F20), (s32) ((s32) arg0), (s32) (1));
}

s32 ** fn_80139A90(void) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803A7F60), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139AC4(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803A7F60), (s32) ((s32) arg0), (s32) (1));
}

// asm_to_cpp: fn_80139AD8
asm s32 fn_80139AD8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r8, r3
    mr r5, r4
    cmpwi r4, 0x0
    beq lbl_80139B2C
    lis r3, lbl_803A9310@ha
    addi r3, r3, lbl_803A9310@l
    lis r4, fn_80139CDC@ha
    addi r4, r4, fn_80139CDC@l
    lis r6, lbl_803A9628@ha
    addi r6, r6, lbl_803A9628@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r9, 0x1
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_80139B68
    li r3, 0x0
    b lbl_80139BA8
lbl_80139B2C:
    lis r3, lbl_803A9310@ha
    addi r3, r3, lbl_803A9310@l
    lis r4, fn_80139C10@ha
    addi r4, r4, fn_80139C10@l
    li r5, 0x0
    lis r6, lbl_803A9628@ha
    addi r6, r6, lbl_803A9628@l
    addi r6, r6, 0x1000
    li r7, 0x1000
    li r9, 0x1
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_80139B68
    li r3, 0x0
    b lbl_80139BA8
lbl_80139B68:
    lis r3, lbl_803AA628@ha
    addi r3, r3, lbl_803AA628@l
    lis r4, lbl_803AA668@ha
    addi r4, r4, lbl_803AA668@l
    li r5, 0x3
    bl OSInitMessageQueue
    lis r3, lbl_803AA648@ha
    addi r3, r3, lbl_803AA648@l
    lis r4, lbl_803AA674@ha
    addi r4, r4, lbl_803AA674@l
    li r5, 0x3
    bl OSInitMessageQueue
    li r0, 0x1
    stw r0, lbl_8049D748
    stw r0, lbl_8049D74C
    li r3, 0x1
lbl_80139BA8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80139BB8
asm s32 fn_80139BB8() {
    nofralloc
    lwz r0, lbl_8049D748
    cmpwi r0, 0x0
    beqlr
    lis r3, lbl_803A9310@ha
    addi r3, r3, lbl_803A9310@l
    b fn_8031D460
    blr
}

// asm_to_cpp: fn_80139BD4
asm void fn_80139BD4(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049D748
    cmpwi r0, 0x0
    beq lbl_80139C00
    lis r3, lbl_803A9310@ha
    addi r3, r3, lbl_803A9310@l
    bl OSCancelThread
    li r0, 0x0
    stw r0, lbl_8049D748
lbl_80139C00:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80139C10
asm void fn_80139C10(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    li r29, 0x0
    lis r3, lbl_803A7980@ha
    addi r30, r3, lbl_803A7980@l
lbl_80139C30:
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_80139CA4
    b lbl_80139C9C
lbl_80139C40:
    bl fn_80139A90
    mr r31, r3
    lwz r5, 0x50(r30)
    lwz r4, 0x4(r3)
    lwz r0, 0xc0(r30)
    add r4, r4, r0
    divwu r0, r4, r5
    mullw r0, r0, r5
    subf r4, r0, r4
    subi r0, r5, 0x1
    cmplw r4, r0
    bne lbl_80139C84
    lbz r0, 0xa6(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80139C84
    bl fn_80139E18
lbl_80139C84:
    mr r3, r31
    bl fn_80139A7C
    subi r29, r29, 0x1
    lwz r3, 0xd8(r30)
    addi r0, r3, 0x1
    stw r0, 0xd8(r30)
lbl_80139C9C:
    cmpwi r29, 0x0
    bne lbl_80139C40
lbl_80139CA4:
    lbz r0, 0xa7(r30)
    cmpwi r0, 0x0
    beq lbl_80139CBC
    bl fn_80139A90
    mr r31, r3
    b lbl_80139CC4
lbl_80139CBC:
    bl fn_80139A00
    mr r31, r3
lbl_80139CC4:
    mr r3, r31
    bl fn_80139E18
    mr r29, r3
    mr r3, r31
    bl fn_80139A7C
    b lbl_80139C30
}

// asm_to_cpp: fn_80139CDC
asm void fn_80139CDC(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r4, lbl_803A7980@ha
    addi r31, r4, lbl_803A7980@l
    lwz r30, 0xbc(r31)
    stw r3, 0x8(r1)
    li r29, 0x0
    li r28, 0x0
    lis r27, lbl_803A9310@ha
lbl_80139D0C:
    lbz r0, 0xa7(r31)
    cmpwi r0, 0x0
    beq lbl_80139D98
    mtctr r28
    cmpwi r28, 0x0
    beq lbl_80139D98
lbl_80139D24:
    subi r28, r28, 0x1
    lwz r3, 0xd8(r31)
    addi r0, r3, 0x1
    stw r0, 0xd8(r31)
    lwz r4, 0x50(r31)
    lwz r0, 0xc0(r31)
    add r3, r29, r0
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    subi r0, r4, 0x1
    cmplw r3, r0
    bne lbl_80139D7C
    lbz r0, 0xa6(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80139D98
    lwz r3, 0x8(r1)
    lwz r30, 0x0(r3)
    lwz r0, 0xb4(r31)
    stw r0, 0x8(r1)
    b lbl_80139D90
lbl_80139D7C:
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    add r0, r3, r30
    stw r0, 0x8(r1)
    mr r30, r4
lbl_80139D90:
    addi r29, r29, 0x1
    bdnz lbl_80139D24
lbl_80139D98:
    stw r29, 0xc(r1)
    addi r3, r1, 0x8
    bl fn_80139E18
    mr r28, r3
    lwz r4, 0x50(r31)
    lwz r0, 0xc0(r31)
    add r3, r29, r0
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r3, r0, r3
    subi r0, r4, 0x1
    cmplw r3, r0
    bne lbl_80139DFC
    lbz r0, 0xa6(r31)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80139DF0
    lwz r3, 0x8(r1)
    lwz r30, 0x0(r3)
    lwz r0, 0xb4(r31)
    stw r0, 0x8(r1)
    b lbl_80139E10
lbl_80139DF0:
    addi r3, r27, lbl_803A9310@l
    bl fn_8031D6F8
    b lbl_80139E10
lbl_80139DFC:
    lwz r3, 0x8(r1)
    lwz r4, 0x0(r3)
    add r0, r3, r30
    stw r0, 0x8(r1)
    mr r30, r4
lbl_80139E10:
    addi r29, r29, 0x1
    b lbl_80139D0C
}

// asm_to_cpp: fn_80139E18
asm s32 fn_80139E18(s32 **arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r23, r3
    li r26, 0x0
    lwz r4, 0x0(r3)
    addi r25, r4, 0x8
    lis r3, lbl_803A7980@ha
    addi r29, r3, lbl_803A7980@l
    lwz r0, 0x6c(r29)
    slwi r0, r0, 2
    add r24, r4, r0
    addi r24, r24, 0x8
    bl fn_80139F50
    mr r28, r3
    li r27, 0x0
    li r30, 0x0
    lis r31, lbl_803A9310@ha
    b lbl_80139F0C
lbl_80139E6C:
    add r3, r29, r27
    lbz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_80139EFC
    mr r3, r24
    lwz r4, 0x0(r28)
    lwz r5, 0x4(r28)
    lwz r6, 0x8(r28)
    lwz r7, 0x9c(r29)
    bl fn_803260CC
    stw r3, 0xac(r29)
    cmpwi r3, 0x0
    beq lbl_80139EC0
    lwz r0, lbl_8049D74C
    cmpwi r0, 0x0
    beq lbl_80139EB8
    li r3, 0x0
    bl fn_80138774
    stw r30, lbl_8049D74C
lbl_80139EB8:
    addi r3, r31, lbl_803A9310@l
    bl fn_8031D6F8
lbl_80139EC0:
    lwz r0, 0x4(r23)
    stw r0, 0xc(r28)
    mr r3, r28
    bl fn_80139FDC
    lwz r4, 0xd8(r29)
    lwz r3, 0xf0(r29)
    addi r5, r3, 0x1
    subfc r0, r5, r4
    srwi r3, r5, 31
    srwi r0, r4, 31
    subfe r3, r0, r3
    subf r0, r4, r5
    and r26, r0, r3
    addi r0, r4, 0x1
    stw r0, 0xd8(r29)
lbl_80139EFC:
    lwz r0, 0x0(r25)
    add r24, r24, r0
    addi r25, r25, 0x4
    addi r27, r27, 0x1
lbl_80139F0C:
    lwz r0, 0x6c(r29)
    cmplw r27, r0
    blt lbl_80139E6C
    lwz r0, lbl_8049D74C
    cmpwi r0, 0x0
    beq lbl_80139F34
    li r3, 0x1
    bl fn_80138774
    li r0, 0x0
    stw r0, lbl_8049D74C
lbl_80139F34:
    mr r3, r26
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

s32 ** fn_80139F50(s32 arg0, s32 arg1) {
    s32 **sp8;

    OSReceiveMessage((s32) ((s32) &lbl_803AA628), (s32) ((s32) &sp8), (s32) (1));
    return (s32 **) (sp8);
}

void fn_80139F84(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803AA628), (s32) ((s32) arg0), (s32) (0));
}

s32 ** fn_80139F98(s32 arg0) {
    s32 **sp8;

    if (OSReceiveMessage((s32) ((s32) &lbl_803AA648), (s32) ((s32) &sp8), (s32) (arg0)) == 1) {
        return (s32 **) (sp8);
    }
    return (s32 **) (NULL);
}

void fn_80139FDC(s32 **arg0) {
    OSSendMessage((s32) ((s32) &lbl_803AA648), (s32) ((s32) arg0), (s32) (1));
}

// asm_to_cpp: fn_80139FF0
asm s32 fn_80139FF0() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    mr r6, r4
    mr r31, r5
    lwz r0, 0x0(r5)
    srwi r0, r0, 16
    clrlwi r0, r0, 24
    cmplwi r0, 0xb
    bgt lbl_8013A254
    lis r7, jumptable_8035A5B0@ha
    addi r7, r7, jumptable_8035A5B0@l
    slwi r0, r0, 2
    lwzx r7, r7, r0
    mtctr r7
    bctr
    li r31, 0x0
    b lbl_8013A26C
    li r0, 0x0
    stw r0, 0x58(r4)
    li r31, 0x0
    b lbl_8013A26C
    li r7, 0x1
    li r4, 0x60
    li r6, 0x0
    b lbl_8013A084
lbl_8013A064:
    lwz r0, 0xc(r3)
    add r5, r0, r4
    stw r6, 0x58(r5)
    lwz r0, 0xc(r3)
    add r5, r0, r4
    stw r6, 0x4(r5)
    addi r7, r7, 0x1
    addi r4, r4, 0x60
lbl_8013A084:
    lhz r0, 0x6(r3)
    cmpw r7, r0
    blt lbl_8013A064
    li r31, 0x0
    b lbl_8013A26C
    addi r3, r1, 0x10
    lis r4, lbl_8035AAC8@ha
    addi r4, r4, lbl_8035AAC8@l
    mr r5, r30
    mr r7, r31
    opword 0x4CC63182
    bl sprintf
    mr r3, r30
    addi r4, r1, 0x10
    bl fn_80164DEC
    lwz r3, 0xc(r30)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    ble lbl_8013A0E8
    mr r3, r30
    li r4, 0x0
    bl fn_80164E1C
    mr r3, r30
    li r4, -0x1
    bl fn_80164E20
lbl_8013A0E8:
    li r0, 0x0
    stw r0, 0x1(r0)
    addi r31, r31, 0x4
    b lbl_8013A26C
    addi r31, r5, 0x4
    mr r4, r31
    bl fn_80164DEC
lbl_8013A104:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013A140
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013A140
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013A140
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013A140
    addi r31, r31, 0x4
    b lbl_8013A104
lbl_8013A140:
    addi r31, r31, 0x4
    b lbl_8013A26C
    addi r5, r1, 0xc
    mr r6, r31
    bl fn_80164EC8
    mr r31, r3
    mr r3, r30
    lwz r4, 0xc(r1)
    lwz r4, 0x0(r4)
    bl fn_80164DEC
    b lbl_8013A26C
    li r4, 0x0
    bl fn_80164E1C
    addi r31, r31, 0x4
    b lbl_8013A26C
    li r4, -0x1
    bl fn_80164E20
    addi r31, r31, 0x4
    b lbl_8013A26C
    lwz r4, 0xc(r3)
    lwz r0, 0x8(r4)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x8(r4)
    lwz r0, 0x1c(r3)
    lwz r3, 0xc(r3)
    stw r0, 0x5c(r3)
    addi r31, r5, 0x4
    b lbl_8013A26C
    lwz r3, 0x14(r3)
    li r4, 0x0
    lhz r0, 0x8(r30)
    slwi r5, r0, 2
    bl memset
    addi r31, r31, 0x4
    b lbl_8013A26C
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x7f8(r3)
    stw r0, 0x4c(r4)
    stw r0, 0x54(r4)
    addi r31, r5, 0x4
    b lbl_8013A26C
    addi r5, r1, 0x8
    mr r6, r31
    bl fn_80164EC8
    lwz r4, 0x8(r1)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8013A20C
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013A20C:
    addi r31, r3, 0x4
lbl_8013A210:
    lwz r3, 0x0(r31)
    clrrwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013A24C
    rlwinm r0, r3, 0, 8, 15
    cmpwi r0, 0x0
    beq lbl_8013A24C
    rlwinm r0, r3, 0, 16, 23
    cmpwi r0, 0x0
    beq lbl_8013A24C
    clrlwi r0, r3, 24
    cmpwi r0, 0x0
    beq lbl_8013A24C
    addi r31, r31, 0x4
    b lbl_8013A210
lbl_8013A24C:
    addi r31, r31, 0x4
    b lbl_8013A26C
lbl_8013A254:
    mr r3, r30
    mr r4, r6
    mr r5, r31
    bl fn_801653A0
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8013A26C:
    mr r3, r31
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

} // extern "C"
