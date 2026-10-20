#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_80339970[];
extern u8 lbl_8034F618[];
extern u8 lbl_8034F628[];
extern u8 lbl_8034F660[];
extern u8 lbl_8034F688[];
extern u8 lbl_8034F69C[];
extern u8 lbl_8034F6B8[];
extern u8 lbl_8034F6CC[];
extern u8 lbl_8034F6E8[];
extern u8 lbl_8034F6FC[];
extern u8 lbl_803A3428[];
extern u8 lbl_803A3448[];
extern u8 lbl_803A3C48[];
extern u8 lbl_803A3C58[];
extern u8 lbl_803A3C70[];
extern u8 lbl_803A4470[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern s32 lbl_8049C328;
extern s32 lbl_8049C32C;
extern M2C_UNK lbl_8049C330;
extern float lbl_8049C338;
extern float lbl_8049C33C;
extern u32 lbl_8049D6D0;
extern float lbl_804A0900;
extern float lbl_804A0908;
extern float lbl_804A0910;
extern float lbl_804A0970;

s32 CheckRevision__Q34nw4r3g3d6ResTexCFv(s8 **arg0);
s32 CheckRevision__Q34nw4r3g3d7ResFileCFv(s32 *arg0);
s32 CheckRevision__Q34nw4r3g3d7ResPlttCFv(s8 **arg0);
s32 DCStore__Q34nw4r3g3d7ResPlttFb(s32 arg0_pad, s32 arg1_pad);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXCopyTex(u32 arg0, s32 arg1);
s32 GXGetTexBufferSize();
M2C_UNK GXInitTexObj(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjCI(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void GXInitTexObjLOD(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);
void GXInitTlutObj(s8 *arg0, u32 arg1, s32 arg2, s16 arg3);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXLoadTlut(s8 *arg0, s32 arg1);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetCullMode(s32 arg0);
void GXSetCurrentMtx(s32 arg0);
void GXSetDispCopyFrame2Field(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
void GXSetProjection(s32 arg0, s32 arg1);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void GXSetTexCopyDst(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetTexCopySrc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
s32 GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0);
s32 GetResPltt__Q34nw4r3g3d7ResFileCFPCc(s32 *arg0, s32 arg1);
s32 GetResPltt__Q34nw4r3g3d7ResFileCFi(s32 *arg0, s32 arg1);
s32 GetResTex__Q34nw4r3g3d7ResFileCFi(s32 *arg0, s32 arg1);
s32 GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
s32 GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc(s8 **arg0, s8 **arg1, u16 *arg2, u16 *arg3, s32 *arg4, f32 *arg5, f32 *arg6, s8 *arg7);
void Init__Q34nw4r3g3d6ResTexFv(s8 **arg0);
void Init__Q34nw4r3g3d7ResFileFv(s32 *arg0);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
u8 SCGetLanguage(void);
s32 _restgpr_17();
s32 _restgpr_18();
s32 _restgpr_19();
s32 _restgpr_21();
s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_17();
s32 _savegpr_18();
s32 _savegpr_19();
s32 _savegpr_21();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80016A94(s32 arg0);
M2C_UNK * fn_80016CCC(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7, s32 arg8);
void fn_80016D44(s32 arg0);
s32 fn_80016D48(s32 *arg0);
s32 fn_80016D58(s32 arg0, s32 arg1);
s32 fn_80016D94(s32 arg0, s32 arg1);
s32 fn_80016DE0(s32 arg0, s32 arg1);
s32 fn_80016E44(s32 arg0, s32 arg1);
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
M2C_UNK fn_80018B90(s32 arg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
void fn_8002AB78(s32 *arg0, s32 *arg1);
s32 fn_8002AE08(s32 arg0);
void fn_8002AE40(s32 arg0);
void fn_8002AF5C(s32 arg0);
s32 fn_8002B060(s32 arg0, s32 arg1);
s32 fn_80031A24(s32 arg0, M2C_UNK *arg1);
void fn_80033D2C(s32 *arg0, s32 arg1, s32 arg2);
void fn_80033DE4(s32 arg0);
s32 fn_800361C0(s32 arg0);
void fn_800361F0(s32 *arg0);
s32 fn_800393B0(s32 arg0);
s32 fn_80039424(s32 arg0);
s32 fn_80044478(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80044500(s32 arg0);
void fn_80044540(s32 *arg0, s32 *arg1);
void fn_800445B0(s32 *arg0, s32 *arg1);
void fn_80044620(s32 *arg0, s32 arg1);
void fn_801220B4(s8 *arg0);
s32 fn_80122138(void);
s8 * fn_80122394(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_801223C8(s32 arg0, s32 arg1, s32 arg2);
void fn_80122400(s8 *arg0);
s8 * fn_80122824(s32 arg0, s32 arg1, s32 arg2);
void fn_801229DC(void);
void fn_80122BEC(void);
void fn_80122C5C(u32 arg0);
void fn_80122D38(u32 arg0, s32 arg1, s32 arg2);
s8 * fn_80122D5C(s32 arg0);
s32 fn_80122DA4(u16 arg0, s8 *arg1);
s32 * fn_80122E1C(s32 arg0);
s32 * fn_80122EBC(s32 arg0);
void fn_80122F5C(s32 arg0);
s32 fn_80122FF0();
void fn_8012303C(void);
s32 fn_80123040(s32 arg0, s32 arg1);
s32 fn_801230C8(s32 arg0, s32 arg1);
void fn_801234C0(void);
void fn_80123598(void);
void fn_80123628(void);
s32 fn_8012365C(s32 arg0);
s32 fn_801236CC(s32 arg0);
void fn_80123740(s32 arg0);
void fn_801237B0(void);
void fn_8012381C(void);
void fn_801238D0(s32 arg0);
void fn_80123A2C(void);
void fn_80123A68(s32 arg0);
void fn_80123AA4(s32 arg0);
void fn_80123BA0(s32 arg0, s32 arg1);
void fn_80123C4C(s32 arg0, s32 arg1);
void fn_80123DBC(s32 arg0, s32 arg1);
void fn_80123E14(s8 **arg0);
void fn_80123E80(void);
void fn_80123F7C(void);
void fn_80123FB8(s32 arg0);
void fn_80124018(s32 arg0, s32 arg1);
void fn_80124088(s32 arg0, s32 arg1);
void fn_80124100(s32 arg0, s32 arg1);
void fn_80124148(s8 *arg0, s8 *arg1);
void fn_80124184(s32 arg0, s8 *arg1);
void fn_80124264(s32 arg0, s8 *arg1);
void fn_801242E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s8 * fn_80124394(s32 arg0);
void fn_801243D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_801243D8(s8 *arg0);
void fn_8012450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 *arg5);
void fn_801245B0(s8 *arg0);
void fn_80124684(s8 *arg0, s32 arg1, s32 arg2);
void fn_801246FC(void);
void fn_80124700(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_8012479C(s8 *arg0);
s32 fn_801247F0();
void fn_801247FC(s32 arg0, s32 arg1);
void fn_80124860(s8 *arg0);
void fn_801248B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80124960(s8 *arg0);
void fn_80124EDC(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3);
void fn_801252FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
void fn_80125404(s8 *arg0);
s32 fn_8012593C(s32 *arg0, s32 *arg1);
void fn_80125948(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_801259D8(s8 *arg0);
void fn_80125A74(s32 arg0, s32 arg1);
void fn_80125AD4(s8 *arg0);
void fn_80125B48(s32 arg0, s32 arg1);
void fn_80125BA8(s8 *arg0);
s32 fn_80125BD8(M2C_UNK *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4);
void fn_80125DE0(s32 arg0, s32 arg1);
void fn_80125E40(s8 *arg0);
void fn_801260D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6, s32 arg7, f32 farg0, f32 farg1);
void fn_801261D8(s8 *arg0);
void fn_80126C20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u16 fn_80126E98(s32 arg0);
void fn_80126EBC(s32 *arg0);
s32 fn_80126F20(void);
s32 fn_80126F28(s32 arg0);
s8 * fn_80126F4C(s32 arg0);
M2C_UNK fn_80126F84(s32 *arg0);
void fn_80126FE8(s32 arg0);
s32 * fn_80126FF0(s32 *arg0, s32 arg1);
s32 fn_80127054(s32 *arg0);
s32 fn_8012705C(s32 *arg0);
s32 fn_80127064(s32 *arg0);
s32 * fn_80127074(s32 *arg0, s32 arg1);
void fn_801270A4(s32 *arg0, s32 *arg1);
s32 fn_801270B0(s32 *arg0, s32 arg1);
void fn_801270CC(s32 *arg0, s32 arg1);
M2C_UNK fn_801270D4(s32 *arg0);
f32 * fn_80127110(f32 *arg0, M2C_UNK *arg1, f32 *arg2);
s32 * fn_80127174(s32 *arg0);
void fn_801271AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_801271B8(void);
void fn_801271BC(f32 farg0, f32 farg1);
void fn_801271CC(s32 arg0);
void fn_801271D8(f32 farg0, f32 farg1);
void fn_801271E8(f32 *arg0, M2C_UNK *arg1, f32 farg0, f32 farg1, f32 farg2);
void fn_80127210(f32 *arg0, f32 *arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_8012E8D0(u32 arg0);
u32 fn_8012E900(u32 arg0);
f32 fn_8012E91C(s32 arg0);
f32 fn_8012E9EC(s32 arg0);
f32 fn_8012EAA4(s32 arg0, f32 farg0);
void fn_8012EADC(u32 arg0, s8 *arg1, s32 arg2, s32 arg3);
s32 fn_8012EC24(s32 arg0);
s8 * fn_8012ED50(s32 arg0);
s32 fn_8012EF20(s32 arg0);
s32 fn_8012EF58(s32 arg0);
void fn_8012F03C(s32 arg0);
s32 fn_8012FC38(void);
void fn_8012FC70(void);
void fn_8013067C(void);
void fn_80130680(void);
void fn_80130764(void);
s8 * fn_801354A0(s8 ***arg0, s32 *arg1);
s32 fn_80135B98(s8 **arg0);
s8 * fn_80135BA4(s8 ***arg0);
void fn_80135BB0(s32 arg0);
void fn_80135CC0(void);
void fn_801362FC(void);
M2C_UNK fn_80136524(void);
void fn_80136D94(s32 arg0);
s32 fn_80136D9C(void);
void fn_80165C74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_80165CC4(s32 arg0, s32 arg1);
void fn_80167134(s32 arg0);
void fn_80167138(s32 arg0);
void fn_80167140(s32 arg0);
s32 fn_80170410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80170560(s32 arg0);
M2C_UNK fn_80170DFC(s32 arg0);
void fn_80170E18(M2C_UNK **arg0);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173750(s32 arg0);
void fn_8017C22C(s32 arg0);
s32 fn_8017C3E0(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, s32 arg7);
s8 * fn_80186808(s8 *arg0);
s8 * fn_80186C78(s8 *arg0, s32 arg1, u32 arg2);
void fn_8018C9DC(void);
void fn_80191F04(s8 *arg0);
void fn_801A9384(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
void fn_802E432C(s32 arg0);
void fn_802E43CC(s32 arg0, s32 arg1);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
f32 fn_8030D7E0(s32 arg0, s32 arg1, s32 arg2);
s32 labs(s32 arg0);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);
s32 strcmp(s32 arg0, s32 arg1);

s8 * fn_80122394(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) (arg1 | 8), (u32) ((u32) arg2)));
    if (temp_r3 != NULL) {
        return (s8 *) (temp_r3);
    }
    return (s8 *) (NULL);
}

s8 * fn_801223C8(s32 arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80186C78((s8 *) ((s8 *) arg0), (s32) ((arg1 & 0xFFFFFFF7) | 0x200), (u32) ((u32) arg2)));
    if (temp_r3 != NULL) {
        return (s8 *) (temp_r3);
    }
    return (s8 *) (NULL);
}

// asm_to_cpp: fn_80122400
asm void fn_80122400(s8 *arg0) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    stfd f30, 0x80(r1)
    opword 0xF3C10088
    addi r11, r1, 0x80
    bl _savegpr_19
    mr r25, r3
    addi r3, r1, 0x30
    li r4, 0x0
    bl fn_80016E44
    addi r3, r1, 0x2c
    li r4, 0x0
    bl fn_80016E44
    addi r3, r1, 0x28
    li r4, 0x0
    bl fn_80016DE0
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_80126FF0
    cmpwi r25, 0x0
    beq lbl_801227F4
    addi r3, r1, 0x20
    lwz r4, 0x0(r25)
    lwz r4, 0x5c(r4)
    bl fn_80016E44
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_80016D94
    addi r3, r1, 0x30
    bl Init__Q34nw4r3g3d7ResFileFv
    lwz r3, 0x4(r25)
    cmpwi r3, 0x0
    beq lbl_801224B8
    lwz r4, 0x5c(r3)
    cmpwi r4, 0x0
    beq lbl_801224B8
    addi r3, r1, 0x1c
    bl fn_80016E44
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_80016D94
    addi r3, r1, 0x2c
    bl Init__Q34nw4r3g3d7ResFileFv
lbl_801224B8:
    addi r3, r1, 0x30
    bl GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc
    stw r3, 0xc(r25)
    li r27, 0x0
    li r24, 0x0
    mr r19, r24
    lis r28, lbl_8034F6FC@ha
    addi r29, r28, lbl_8034F6FC@l
    mr r30, r24
    mr r20, r24
    lfd f30, lbl_804A0900
    lis r31, 0x4330
    lfs f31, lbl_804A0910
    la r23, lbl_804A0910
    b lbl_801227E8
lbl_801224F4:
    lwz r0, 0x8(r25)
    add r26, r0, r24
    addi r3, r1, 0x30
    mr r4, r27
    bl GetResTex__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x18(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x18
    bl fn_80016D58
    addi r3, r1, 0x28
    bl fn_80016D48
    cmpwi r3, 0x0
    bne lbl_8012253C
    addi r3, r28, lbl_8034F6FC@l
    li r4, 0x192
    addi r5, r3, 0xb
    opword 0x4CC63182
    bl fn_801A9384
lbl_8012253C:
    addi r3, r1, 0x28
    bl CheckRevision__Q34nw4r3g3d6ResTexCFv
    cmpwi r3, 0x0
    bne lbl_80122560
    addi r3, r28, lbl_8034F6FC@l
    li r4, 0x193
    addi r5, r3, 0x32
    opword 0x4CC63182
    bl fn_801A9384
lbl_80122560:
    addi r3, r1, 0x28
    bl Init__Q34nw4r3g3d6ResTexFv
    addi r3, r1, 0x28
    bl fn_801270D4
    mr r5, r3
    addi r3, r26, 0x4d
    addi r4, r29, 0x5f
    opword 0x4CC63182
    bl sprintf
    stw r30, 0x0(r26)
    addi r3, r1, 0x28
    bl fn_800361C0
    cmpwi r3, 0x0
    bne lbl_80122668
    addi r3, r1, 0x28
    addi r4, r26, 0x30
    addi r5, r26, 0x34
    addi r6, r26, 0x36
    addi r7, r26, 0x40
    addi r8, r26, 0x44
    addi r9, r26, 0x48
    addi r10, r26, 0x4c
    bl GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
    lhz r5, 0x34(r26)
    lhz r6, 0x36(r26)
    subi r0, r5, 0x1
    and r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    subi r0, r6, 0x1
    and r0, r6, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80122610
    addi r3, r26, 0x4
    lwz r4, 0x30(r26)
    lwz r7, 0x40(r26)
    li r8, 0x1
    li r9, 0x1
    lbz r10, 0x4c(r26)
    bl GXInitTexObj
    b lbl_8012262C
lbl_80122610:
    addi r3, r26, 0x4
    lwz r4, 0x30(r26)
    lwz r7, 0x40(r26)
    li r8, 0x0
    li r9, 0x0
    lbz r10, 0x4c(r26)
    bl GXInitTexObj
lbl_8012262C:
    lhz r0, 0x34(r26)
    stw r0, 0x3c(r1)
    stw r31, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f31
    stfs f0, 0x38(r26)
    lhz r0, 0x36(r26)
    stw r0, 0x44(r1)
    stw r31, 0x40(r1)
    lfd f0, 0x40(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f31
    stfs f0, 0x3c(r26)
    b lbl_801227B8
lbl_80122668:
    lwz r0, 0x0(r26)
    ori r0, r0, 0x1
    stw r0, 0x0(r26)
    addi r3, r1, 0x28
    addi r4, r26, 0x30
    addi r5, r26, 0x34
    addi r6, r26, 0x36
    addi r7, r26, 0x40
    addi r8, r26, 0x44
    addi r9, r26, 0x48
    addi r10, r26, 0x4c
    bl GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
    addi r3, r1, 0x2c
    addi r4, r26, 0x4d
    bl GetResPltt__Q34nw4r3g3d7ResFileCFPCc
    stw r3, 0x14(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x14
    bl fn_80127074
    addi r3, r1, 0x24
    bl fn_80127064
    cmpwi r3, 0x0
    bne lbl_801226E0
    addi r3, r1, 0x2c
    li r4, 0x0
    bl GetResPltt__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x10(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x10
    bl fn_80127074
lbl_801226E0:
    addi r3, r1, 0x24
    bl CheckRevision__Q34nw4r3g3d7ResPlttCFv
    cmpwi r3, 0x0
    bne lbl_80122704
    addi r3, r28, lbl_8034F6FC@l
    li r4, 0x1b1
    addi r5, r3, 0x62
    opword 0x4CC63182
    bl fn_801A9384
lbl_80122704:
    addi r3, r1, 0x24
    bl fn_80126FE8
    lhz r5, 0x34(r26)
    lhz r6, 0x36(r26)
    subi r0, r5, 0x1
    and r0, r5, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    subi r0, r6, 0x1
    and r0, r6, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    and r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_80122764
    stw r19, 0x8(r1)
    addi r3, r26, 0x4
    lwz r4, 0x30(r26)
    lwz r7, 0x40(r26)
    li r8, 0x1
    li r9, 0x1
    lbz r10, 0x4c(r26)
    bl GXInitTexObjCI
    b lbl_80122784
lbl_80122764:
    stw r20, 0x8(r1)
    addi r3, r26, 0x4
    lwz r4, 0x30(r26)
    lwz r7, 0x40(r26)
    li r8, 0x0
    li r9, 0x0
    lbz r10, 0x4c(r26)
    bl GXInitTexObjCI
lbl_80122784:
    addi r3, r1, 0x24
    bl fn_80126E98
    clrlwi r21, r3, 16
    addi r3, r1, 0x24
    bl fn_80126F28
    mr r22, r3
    addi r3, r1, 0x24
    bl fn_80126F4C
    mr r4, r3
    addi r3, r26, 0x24
    mr r5, r22
    mr r6, r21
    bl GXInitTlutObj
lbl_801227B8:
    addi r3, r26, 0x4
    li r4, 0x1
    li r5, 0x1
    lfs f1, 0x44(r26)
    lfs f2, 0x48(r26)
    lfs f3, 0x4(r23)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl GXInitTexObjLOD
    addi r27, r27, 0x1
    addi r24, r24, 0xd0
lbl_801227E8:
    lwz r0, 0xc(r25)
    cmpw r27, r0
    blt lbl_801224F4
lbl_801227F4:
    li r0, 0x98
    opword 0x13E1000C
    lfd f31, 0x90(r1)
    li r0, 0x88
    opword 0x13C1000C
    lfd f30, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_19
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// asm_to_cpp: fn_80122824
asm s8 * fn_80122824(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r3, r1, 0x1c
    li r4, 0x0
    bl fn_80016E44
    addi r3, r1, 0x18
    li r4, 0x0
    bl fn_80016E44
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80016DE0
    mr r3, r25
    mr r4, r26
    mr r5, r27
    bl fn_80122394
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8012288C
    li r3, 0x0
    b lbl_801229C4
lbl_8012288C:
    addi r3, r1, 0x10
    lwz r4, 0x5c(r30)
    bl fn_80016E44
    mr r4, r3
    addi r3, r1, 0x1c
    bl fn_80016D94
    addi r3, r1, 0x1c
    bl CheckRevision__Q34nw4r3g3d7ResFileCFv
    cmpwi r3, 0x0
    bne lbl_801228CC
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    li r4, 0x1dd
    addi r5, r3, 0x8f
    opword 0x4CC63182
    bl fn_801A9384
lbl_801228CC:
    addi r3, r1, 0x1c
    bl Init__Q34nw4r3g3d7ResFileFv
    addi r3, r1, 0x1c
    bl GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc
    mr r31, r3
    li r29, 0x0
    li r28, 0x0
    b lbl_80122994
lbl_801228EC:
    addi r3, r1, 0x1c
    mr r4, r28
    bl GetResTex__Q34nw4r3g3d7ResFileCFi
    stw r3, 0xc(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0xc
    bl fn_80016D58
    addi r3, r1, 0x14
    bl fn_800361C0
    cmpwi r3, 0x0
    beq lbl_80122990
    mr r3, r25
    mr r4, r26
    mr r5, r27
    bl fn_801223C8
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80122944
    mr r3, r30
    bl fn_80186808
    li r3, 0x0
    b lbl_801229C4
lbl_80122944:
    addi r3, r1, 0x8
    lwz r4, 0x5c(r29)
    bl fn_80016E44
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_80016D94
    addi r3, r1, 0x18
    bl CheckRevision__Q34nw4r3g3d7ResFileCFv
    cmpwi r3, 0x0
    bne lbl_80122984
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    li r4, 0x1ef
    addi r5, r3, 0xbd
    opword 0x4CC63182
    bl fn_801A9384
lbl_80122984:
    addi r3, r1, 0x18
    bl Init__Q34nw4r3g3d7ResFileFv
    b lbl_8012299C
lbl_80122990:
    addi r28, r28, 0x1
lbl_80122994:
    cmplw r28, r31
    blt lbl_801228EC
lbl_8012299C:
    mulli r3, r31, 0xd0
    addi r3, r3, 0x10
    bl fn_80170DFC
    mr r31, r3
    stw r30, 0x0(r3)
    stw r29, 0x4(r3)
    addi r0, r3, 0x10
    stw r0, 0x8(r3)
    bl fn_80122400
    mr r3, r31
lbl_801229C4:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801229DC
asm void fn_801229DC(void) {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    addi r11, r1, 0x50
    bl _savegpr_21
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80016E44
    li r21, 0x0
lbl_80122A18:
    mr r3, r21
    li r4, 0x0
    li r5, 0x0
    bl fn_80122D38
    addi r21, r21, 0x1
    cmpwi r21, 0x2
    blt lbl_80122A18
    lis r3, lbl_803C22B0@ha
    addi r27, r3, lbl_803C22B0@l
    lwz r4, 0x54(r27)
    lhz r3, 0xe(r4)
    lhz r0, 0x10(r4)
    lfd f1, lbl_804A0900
    stw r0, 0x14(r1)
    lis r28, 0x4330
    stw r28, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    clrlwi r4, r4, 16
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl GXGetTexBufferSize
    mr r29, r3
    li r0, 0x2
    lis r3, lbl_803A3C48@ha
    addi r30, r3, lbl_803A3C48@l
    stw r0, 0xc(r30)
    li r31, 0x0
    stw r31, lbl_803A3C48@l(r3)
    stw r31, 0x4(r30)
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x830(r3)
    slwi r4, r29, 1
    addi r4, r4, 0x1a0
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r30)
    addi r24, r3, 0x1a0
    li r26, 0x0
    mr r23, r31
    li r21, 0x4
    la r3, lbl_804A0910
    lfs f29, 0x4(r3)
    lfd f30, lbl_804A0900
    lfs f31, lbl_804A0910
    lis r3, lbl_8034F6FC@ha
    addi r22, r3, lbl_8034F6FC@l
    b lbl_80122BA4
lbl_80122AEC:
    lwz r0, 0x8(r30)
    add r25, r0, r23
    stw r31, 0x0(r25)
    mullw r0, r29, r26
    add r0, r24, r0
    stw r0, 0x30(r25)
    lwz r3, 0x54(r27)
    lhz r0, 0xe(r3)
    sth r0, 0x34(r25)
    lwz r3, 0x54(r27)
    lhz r0, 0x10(r3)
    sth r0, 0x36(r25)
    stw r21, 0x40(r25)
    stfs f29, 0x44(r25)
    stfs f29, 0x48(r25)
    stb r31, 0x4c(r25)
    lhz r0, 0x34(r25)
    stw r0, 0x1c(r1)
    stw r28, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f31
    stfs f0, 0x38(r25)
    lhz r0, 0x36(r25)
    stw r0, 0x14(r1)
    stw r28, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f31
    stfs f0, 0x3c(r25)
    addi r3, r25, 0x4
    lwz r4, 0x30(r25)
    lhz r5, 0x34(r25)
    lhz r6, 0x36(r25)
    lwz r7, 0x40(r25)
    li r8, 0x0
    li r9, 0x0
    lbz r10, 0x4c(r25)
    bl GXInitTexObj
    addi r3, r25, 0x4d
    addi r4, r22, 0xeb
    mr r5, r26
    opword 0x4CC63182
    bl sprintf
    addi r26, r26, 0x1
    addi r23, r23, 0xd0
lbl_80122BA4:
    lwz r0, 0xc(r30)
    cmpw r26, r0
    blt lbl_80122AEC
    li r0, 0x78
    opword 0x13E1000C
    lfd f31, 0x70(r1)
    li r0, 0x68
    opword 0x13C1000C
    lfd f30, 0x60(r1)
    li r0, 0x58
    opword 0x13A1000C
    lfd f29, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_21
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

void fn_80122BEC(void) {
    u32 var_r31;

    var_r31 = (u32) (0);
    do {
        fn_80122D38((u32) (var_r31), (s32) (0), (s32) (0));
        var_r31 += 1;
    } while ((s32) var_r31 < 2);
    if ((s8 *) M2C_FIELD(&lbl_803A3C48, s8 **, 8) != NULL) {
        fn_80170E84((s32) (M2C_FIELD(&lbl_803C1A40, s32 *, 0x830)), (s8 *) (M2C_FIELD(&lbl_803A3C48, s8 **, 8)));
        M2C_FIELD(&lbl_803A3C48, s8 **, 8) = (s8 *) (NULL);
    }
}

// asm_to_cpp: fn_80122C5C
asm void fn_80122C5C(u32 arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    li r26, 0x0
    li r31, 0x0
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lis r3, lbl_803A4470@ha
    addi r28, r3, lbl_803A4470@l
lbl_80122C8C:
    add r27, r28, r31
    lwz r0, 0x0(r27)
    cmplw r25, r0
    bne lbl_80122D10
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_80122CFC
    clrlwi r0, r26, 24
    oris r3, r0, 0x80
    bl fn_80122E1C
    mr r29, r3
    lwz r6, 0x54(r30)
    li r3, 0x0
    li r4, 0x0
    lhz r5, 0xe(r6)
    lhz r6, 0x10(r6)
    bl GXSetTexCopySrc
    lwz r4, 0x54(r30)
    lhz r3, 0xe(r4)
    lhz r4, 0x10(r4)
    li r5, 0x4
    li r6, 0x0
    bl GXSetTexCopyDst
    li r3, 0x0
    bl GXSetDispCopyFrame2Field
    lwz r3, 0x30(r29)
    li r4, 0x0
    bl GXCopyTex
lbl_80122CFC:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    ble lbl_80122D10
    subi r0, r3, 0x1
    stw r0, 0x4(r27)
lbl_80122D10:
    addi r26, r26, 0x1
    addi r31, r31, 0x8
    cmpwi r26, 0x2
    blt lbl_80122C8C
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80122D38
asm void fn_80122D38(u32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmplwi r3, 0x1
    bgtlr
    slwi r0, r3, 3
    lis r3, lbl_803A4470@ha
    addi r3, r3, lbl_803A4470@l
    stwx r4, r3, r0
    add r3, r3, r0
    stw r5, 0x4(r3)
    blr
}

// asm_to_cpp: fn_80122D5C
asm s8 * fn_80122D5C(s32 arg0) {
    nofralloc
    li r4, 0x0
    lis r5, lbl_803A3448@ha
    addi r5, r5, lbl_803A3448@l
    li r0, 0x100
    mtctr r0
lbl_80122D70:
    add r6, r5, r4
    lhz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_80122D94
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_80122D94
    mr r3, r0
    blr
lbl_80122D94:
    addi r4, r4, 0x8
    bdnz lbl_80122D70
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80122DA4
asm s32 fn_80122DA4(u16 arg0, s8 *arg1) {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_80122DB4
    li r3, -0x1
    blr
lbl_80122DB4:
    li r8, 0x0
    li r5, 0x0
    lis r6, lbl_803A3448@ha
    addi r7, r6, lbl_803A3448@l
    li r0, 0x100
    mtctr r0
lbl_80122DCC:
    add r6, r7, r5
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_80122DE8
    addi r8, r8, 0x1
    addi r5, r5, 0x8
    bdnz lbl_80122DCC
lbl_80122DE8:
    cmpwi r8, 0x100
    bne lbl_80122DF8
    li r3, 0x0
    blr
lbl_80122DF8:
    slwi r5, r8, 3
    clrlwi r0, r3, 16
    lis r3, lbl_803A3448@ha
    addi r3, r3, lbl_803A3448@l
    sthx r0, r3, r5
    add r3, r3, r5
    stw r4, 0x4(r3)
    mr r3, r8
    blr
}

// asm_to_cpp: fn_80122E1C
asm s32 * fn_80122E1C(s32 arg0) {
    nofralloc
    srawi r4, r3, 8
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80122E64
    clrlwi r5, r3, 24
    andi. r3, r4, 0x8fff
    addis r0, r3, 0x0
    cmplwi r0, 0x8000
    li r3, 0x0
    bne lbl_80122E4C
    lis r3, lbl_803A3C48@ha
    addi r3, r3, lbl_803A3C48@l
lbl_80122E4C:
    cmpwi r3, 0x0
    beq lbl_80122EB4
    lwz r3, 0x8(r3)
    mulli r0, r5, 0xd0
    add r3, r3, r0
    blr
lbl_80122E64:
    clrlwi r7, r4, 20
    clrlwi r6, r3, 24
    li r3, 0x0
    lis r4, lbl_803A3448@ha
    addi r4, r4, lbl_803A3448@l
    li r0, 0x100
    mtctr r0
lbl_80122E80:
    add r5, r4, r3
    lhz r0, 0x0(r5)
    cmpw r7, r0
    bne lbl_80122EAC
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_80122EAC
    lwz r3, 0x8(r5)
    mulli r0, r6, 0xd0
    add r3, r3, r0
    blr
lbl_80122EAC:
    addi r3, r3, 0x8
    bdnz lbl_80122E80
lbl_80122EB4:
    li r3, 0x0
    blr
}

s32 * fn_80122EBC(s32 arg0) {
    s32 *temp_r3;
    s32 var_r30;

    var_r30 = (s32) (arg0);
    temp_r3 = (s32 *) (fn_80122E1C((s32) (arg0)));
    if (temp_r3 == NULL) {
        var_r30 = (s32) (-1);
        fn_80123C4C((s32) (0x01000000), (s32) (0));
    } else {
        fn_80123C4C((s32) (0x02000000), (s32) (0));
        if ((u32) lbl_8049D6D0 != (u32) temp_r3) {
            if ((s32) (*temp_r3 & 1) != 0) {
                GXLoadTlut((s8 *) ((s8 *)temp_r3 + 0x24), (s32) (0));
            }
            GXLoadTexObj((s32) ((s32) ((s8 *)temp_r3 + 4)), (s32) (0));
        }
    }
    lbl_8049C328 = var_r30;
    lbl_8049D6D0 = (u32) temp_r3;
    return (s32 *) (temp_r3);
}

// asm_to_cpp: fn_80122F5C
asm void fn_80122F5C(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    slwi r29, r3, 3
    lis r3, lbl_803A3448@ha
    addi r0, r3, lbl_803A3448@l
    add r30, r0, r29
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_80122FD8
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_80122F9C
    bl fn_80186808
lbl_80122F9C:
    lwz r3, 0x4(r30)
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_80122FB0
    bl fn_80186808
lbl_80122FB0:
    lis r3, lbl_803A3448@ha
    addi r30, r3, lbl_803A3448@l
    add r31, r30, r29
    lwz r3, 0x4(r31)
    bl fn_80170E18
    lis r3, 0x1
    subi r0, r3, 0x1
    sthx r0, r30, r29
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_80122FD8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80122FF0
asm s32 fn_80122FF0() {
    nofralloc
    li r7, 0x0
    li r4, 0x0
    lis r5, lbl_803A3448@ha
    addi r5, r5, lbl_803A3448@l
    li r0, 0x100
    mtctr r0
lbl_80123008:
    add r6, r5, r4
    lhz r0, 0x0(r6)
    cmpw r3, r0
    bne lbl_8012302C
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_8012302C
    mr r3, r7
    b fn_80122F5C
lbl_8012302C:
    addi r7, r7, 0x1
    addi r4, r4, 0x8
    bdnz lbl_80123008
    blr
}

void fn_8012303C(void) {
}

// asm_to_cpp: fn_80123040
asm s32 fn_80123040(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    bl fn_80122D5C
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_801230AC
    li r28, 0x0
    li r31, 0x0
    lwz r29, 0xc(r3)
    b lbl_801230A4
lbl_80123078:
    mr r3, r27
    lwz r0, 0x8(r30)
    add r4, r0, r31
    addi r4, r4, 0x4d
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8012309C
    mr r3, r28
    b lbl_801230B0
lbl_8012309C:
    addi r28, r28, 0x1
    addi r31, r31, 0xd0
lbl_801230A4:
    cmpw r28, r29
    blt lbl_80123078
lbl_801230AC:
    li r3, -0x1
lbl_801230B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801230C8
asm s32 fn_801230C8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    lis r29, lbl_803A3428@ha
    addi r31, r29, lbl_803A3428@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80123100
    li r3, -0x1
    b lbl_801234A8
lbl_80123100:
    li r3, 0x1
    lis r4, 0x3a
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    lis r4, lbl_803C1A40@ha
    addi r30, r4, lbl_803C1A40@l
    stw r3, 0x830(r30)
    bl fn_8012EF20
    addi r4, r3, 0x100
    li r3, 0x1
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    stw r3, 0x834(r30)
    li r3, 0x1
    lis r4, 0xc
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    bl fn_80136D94
    li r3, 0x64
    bl fn_80135BB0
    mr r3, r27
    bl fn_80170DFC
    stw r3, 0x8(r31)
    stw r27, lbl_803A3428@l(r29)
    li r30, 0x0
    stw r30, 0x4(r31)
    cmpwi r3, 0x0
    bne lbl_80123184
    li r3, 0x0
    b lbl_801234A8
lbl_80123184:
    addi r0, r28, 0x1
    mulli r29, r0, 0xc
    mr r3, r29
    bl fn_80170DFC
    stw r3, 0x10(r31)
    mr r3, r29
    bl fn_80170DFC
    stw r3, 0x14(r31)
    mr r3, r29
    bl fn_80170DFC
    stw r3, 0x18(r31)
    lwz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x4
    bl memset
    lwz r3, 0x14(r31)
    li r4, 0x0
    li r5, 0x4
    bl memset
    lwz r3, 0x18(r31)
    li r4, 0x0
    li r5, 0x4
    bl memset
    addi r0, r28, 0x1
    stw r0, 0xc(r31)
    bl fn_80123598
    mr r3, r30
    lis r4, lbl_803A3448@ha
    addi r5, r4, lbl_803A3448@l
    li r0, 0x100
    mtctr r0
lbl_80123200:
    add r4, r5, r3
    stw r30, 0x4(r4)
    addi r3, r3, 0x8
    bdnz lbl_80123200
    lis r3, lbl_8034F6FC@ha
    addi r30, r3, lbl_8034F6FC@l
    addi r3, r30, 0xf8
    bl fn_80167134
    addi r3, r30, 0x107
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80123250
    li r3, 0xfc
    bl fn_80122DA4
lbl_80123250:
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x11d
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r4, r3
    cmpwi r3, 0x0
    beq lbl_80123288
    li r3, 0xff
    bl fn_80122DA4
lbl_80123288:
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x12d
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_801232C4
    li r3, 0xfb
    mr r4, r29
    bl fn_80122DA4
lbl_801232C4:
    bl SCGetLanguage
    clrlwi r0, r3, 24
    cmpwi r0, 0x1
    beq lbl_801232F8
    cmpwi r0, 0x3
    beq lbl_80123300
    cmpwi r0, 0x4
    beq lbl_80123308
    cmpwi r0, 0x2
    beq lbl_80123310
    cmpwi r0, 0x5
    beq lbl_80123318
    b lbl_80123320
lbl_801232F8:
    li r31, 0x1
    b lbl_80123324
lbl_80123300:
    li r31, 0x2
    b lbl_80123324
lbl_80123308:
    li r31, 0x3
    b lbl_80123324
lbl_80123310:
    li r31, 0x4
    b lbl_80123324
lbl_80123318:
    li r31, 0x5
    b lbl_80123324
lbl_80123320:
    li r31, 0x1
lbl_80123324:
    lis r3, lbl_8034F6FC@ha
    addi r30, r3, lbl_8034F6FC@l
    addi r3, r30, 0x143
    bl fn_80167138
    addi r3, r30, 0x157
    bl fn_80167138
    addi r3, r30, 0x16b
    bl fn_80167138
    addi r3, r30, 0x17f
    bl fn_80167138
    addi r3, r30, 0x193
    bl fn_80167138
    addi r3, r30, 0x1a7
    bl fn_80167138
    addi r3, r30, 0x1bb
    bl fn_80167138
    addi r3, r30, 0x1cf
    bl fn_80167138
    addi r3, r30, 0x1e3
    bl fn_80167138
    addi r3, r30, 0x1f7
    bl fn_80167138
    cmpwi r31, 0x1
    bne lbl_801233A4
    addi r3, r30, 0x143
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
lbl_801233A4:
    cmpwi r31, 0x2
    bne lbl_801233D4
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x157
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
lbl_801233D4:
    cmpwi r31, 0x3
    bne lbl_80123404
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x16b
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
lbl_80123404:
    cmpwi r31, 0x4
    bne lbl_80123434
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x17f
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
lbl_80123434:
    cmpwi r31, 0x5
    bne lbl_80123464
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x193
    lis r4, 0x4000
    addi r4, r4, 0x8
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x830(r5)
    bl fn_80122824
    mr r29, r3
lbl_80123464:
    cmpwi r29, 0x0
    beq lbl_80123478
    li r3, 0xfd
    mr r4, r29
    bl fn_80122DA4
lbl_80123478:
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0xf8
    bl fn_80167140
    bl fn_801229DC
    bl fn_8012FC38
    bl fn_8013067C
    bl fn_80123E80
    bl fn_80123628
    li r3, 0x0
    bl fn_8012EF58
    li r3, 0x1
lbl_801234A8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801234C0
asm void fn_801234C0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_803A3428@ha
    addi r3, r3, lbl_803A3428@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80123580
    li r29, 0x0
lbl_801234EC:
    mr r3, r29
    bl fn_80122F5C
    addi r29, r29, 0x1
    cmpwi r29, 0x100
    blt lbl_801234EC
    bl fn_80122BEC
    bl fn_8012FC70
    li r3, 0x0
    bl fn_8012F03C
    bl fn_80123F7C
    bl fn_80135CC0
    lis r29, lbl_803A3428@ha
    addi r31, r29, lbl_803A3428@l
    lwz r3, 0x10(r31)
    bl fn_80170E18
    lwz r3, 0x14(r31)
    bl fn_80170E18
    lwz r3, 0x18(r31)
    bl fn_80170E18
    lwz r3, 0x8(r31)
    bl fn_80170E18
    li r30, 0x0
    stw r30, 0x8(r31)
    stw r30, lbl_803A3428@l(r29)
    bl fn_801237B0
    lis r3, lbl_803C1A40@ha
    addi r31, r3, lbl_803C1A40@l
    lwz r3, 0x830(r31)
    bl fn_80170560
    lwz r3, 0x834(r31)
    bl fn_80170560
    bl fn_80136D9C
    bl fn_80170560
    stw r30, 0x830(r31)
    stw r30, 0x834(r31)
    li r3, 0x0
    bl fn_80136D94
lbl_80123580:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80123598
asm void fn_80123598(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r6, 0x0
    lis r3, lbl_803A3428@ha
    addi r5, r3, lbl_803A3428@l
    stw r6, 0x4(r5)
    li r7, 0x0
    mr r3, r6
    b lbl_80123604
lbl_801235C0:
    lwz r4, 0x10(r5)
    stwx r6, r4, r3
    lwz r0, 0x10(r5)
    add r4, r0, r3
    stw r6, 0x8(r4)
    lwz r4, 0x14(r5)
    stwx r6, r4, r3
    lwz r0, 0x14(r5)
    add r4, r0, r3
    stw r6, 0x8(r4)
    lwz r4, 0x18(r5)
    stwx r6, r4, r3
    lwz r0, 0x18(r5)
    add r4, r0, r3
    stw r6, 0x8(r4)
    addi r7, r7, 0x1
    addi r3, r3, 0xc
lbl_80123604:
    lwz r0, 0xc(r5)
    cmpw r7, r0
    blt lbl_801235C0
    bl fn_80130680
    bl fn_801362FC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80123628
asm void fn_80123628(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_803A3C70@ha
    addi r6, r4, lbl_803A3C70@l
    li r5, -0x1
    mr r4, r3
    li r0, 0x100
    mtctr r0
lbl_80123644:
    add r7, r6, r3
    stw r5, 0x0(r7)
    stw r4, 0x4(r7)
    addi r3, r3, 0x8
    bdnz lbl_80123644
    blr
}

// asm_to_cpp: fn_8012365C
asm s32 fn_8012365C(s32 arg0) {
    nofralloc
    cmpwi r3, -0x1
    beq lbl_80123670
    cmpwi r3, -0x2
    beq lbl_80123680
    b lbl_80123690
lbl_80123670:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x830(r3)
    blr
lbl_80123680:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r3, 0x834(r3)
    blr
lbl_80123690:
    li r4, 0x0
    lis r5, lbl_803A3C70@ha
    addi r5, r5, lbl_803A3C70@l
    li r0, 0x100
    mtctr r0
lbl_801236A4:
    lwzx r0, r5, r4
    cmpw r3, r0
    bne lbl_801236BC
    add r3, r5, r4
    lwz r3, 0x4(r3)
    blr
lbl_801236BC:
    addi r4, r4, 0x8
    bdnz lbl_801236A4
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801236CC
asm s32 fn_801236CC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r5, 0x0
    lis r6, lbl_803A3C70@ha
    addi r6, r6, lbl_803A3C70@l
    li r0, 0x100
    mtctr r0
lbl_801236F0:
    add r31, r6, r5
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    bne lbl_80123720
    stw r3, 0x0(r31)
    li r3, 0x1
    li r5, 0x0
    li r6, 0x4
    bl fn_80170410
    stw r3, 0x4(r31)
    lwz r3, 0x4(r31)
    b lbl_8012372C
lbl_80123720:
    addi r5, r5, 0x8
    bdnz lbl_801236F0
    li r3, 0x0
lbl_8012372C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80123740
asm void fn_80123740(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r28, 0x0
    li r31, 0x0
    li r30, -0x1
    lis r3, lbl_803A3C70@ha
    addi r29, r3, lbl_803A3C70@l
lbl_8012376C:
    add r3, r29, r31
    lwz r0, 0x0(r3)
    cmpw r27, r0
    bne lbl_80123788
    stw r30, 0x0(r3)
    lwz r3, 0x4(r3)
    bl fn_80170560
lbl_80123788:
    addi r28, r28, 0x1
    addi r31, r31, 0x8
    cmpwi r28, 0x100
    blt lbl_8012376C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801237B0
asm void fn_801237B0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    li r28, 0x0
    li r31, 0x0
    li r30, -0x1
    lis r3, lbl_803A3C70@ha
    addi r29, r3, lbl_803A3C70@l
lbl_801237D8:
    add r3, r29, r31
    lwz r0, 0x0(r3)
    cmpwi r0, -0x1
    beq lbl_801237F4
    stw r30, 0x0(r3)
    lwz r3, 0x4(r3)
    bl fn_80170560
lbl_801237F4:
    addi r28, r28, 0x1
    addi r31, r31, 0x8
    cmpwi r28, 0x100
    blt lbl_801237D8
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8012381C
asm void fn_8012381C(void) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r3, r1, 0x8
    bl fn_80016D44
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    lbz r0, 0x21(r4)
    cmpwi r0, 0x0
    beq lbl_8012386C
    addi r3, r1, 0x8
    la r4, lbl_804A0910
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fmr f3, f1
    lfs f4, 0xc(r4)
    fmr f5, f1
    lfs f6, 0x10(r4)
    bl fn_80016CCC
    b lbl_801238AC
lbl_8012386C:
    addi r3, r1, 0x8
    la r5, lbl_804A0910
    lfs f1, 0x4(r5)
    lfs f2, 0x8(r5)
    fmr f3, f1
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f4, lbl_804A0900
    stw r0, 0x4c(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x10(r5)
    bl fn_80016CCC
lbl_801238AC:
    addi r3, r1, 0x8
    li r4, 0x1
    bl GXSetProjection
    li r3, 0x3c
    bl GXSetCurrentMtx
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801238D0
asm void fn_801238D0(s32 arg0) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_80016D44
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, -0x1
    stw r3, lbl_8049C328
    li r0, 0x0
    stw r0, lbl_8049D6D0
    stw r3, lbl_8049C32C
    cmpwi r31, 0x2
    beq lbl_801239B4
    lis r3, lbl_803C22B0@ha
    addi r4, r3, lbl_803C22B0@l
    lbz r0, 0x21(r4)
    cmpwi r0, 0x0
    beq lbl_8012394C
    addi r3, r1, 0x8
    la r4, lbl_804A0910
    lfs f1, 0x4(r4)
    lfs f2, 0x8(r4)
    fmr f3, f1
    lfs f4, 0xc(r4)
    fmr f5, f1
    lfs f6, 0x10(r4)
    bl fn_80016CCC
    b lbl_8012398C
lbl_8012394C:
    addi r3, r1, 0x8
    la r5, lbl_804A0910
    lfs f1, 0x4(r5)
    lfs f2, 0x8(r5)
    fmr f3, f1
    lwz r4, 0x54(r4)
    lhz r0, 0xe(r4)
    lfd f4, lbl_804A0900
    stw r0, 0x4c(r1)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lfd f0, 0x48(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    lfs f6, 0x10(r5)
    bl fn_80016CCC
lbl_8012398C:
    addi r3, r1, 0x8
    li r4, 0x1
    bl GXSetProjection
    li r3, 0x3c
    bl GXSetCurrentMtx
    li r3, 0x0
    bl GXSetCullMode
    li r3, -0x1
    bl fn_80016A94
    b lbl_801239C4
lbl_801239B4:
    li r3, 0x0
    bl fn_8017C22C
    li r3, 0x0
    bl GXSetCullMode
lbl_801239C4:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl GXSetChanCtrl
    bl fn_8018C9DC
    lwz r31, 0x5c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

void fn_80123A2C(void) {
    fn_80016A94((s32) (0));
    GXSetZMode((s32) (1), (s32) (3), (s32) (1));
    fn_8017C22C((s32) (0));
}

// asm_to_cpp: fn_80123A68
asm void fn_80123A68(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x0
    bl fn_80123AA4
    mr r3, r31
    li r4, 0x0
    bl fn_80123BA0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80123AA4(s32 arg0) {
    s32 temp_r31;

    temp_r31 = (s32) (arg0 & 0xF00);
    if (temp_r31 != (s32) (lbl_8049C32C & 0xF00)) {
        switch (temp_r31) {                         /* irregular */
        default:
            GXSetBlendMode((s32) (1), (s32) (4), (s32) (5), (s32) (0xF));
            break;
        case 0x100:
            GXSetBlendMode((s32) (1), (s32) (4), (s32) (1), (s32) (0xF));
            break;
        case 0x200:
            GXSetBlendMode((s32) (3), (s32) (0), (s32) (0), (s32) (0xF));
            break;
        case 0x300:
            GXSetBlendMode((s32) (2), (s32) (1), (s32) (1), (s32) (6));
            break;
        case 0x400:
            GXSetBlendMode((s32) (1), (s32) (0), (s32) (3), (s32) (0xF));
            break;
        case 0x500:
            GXSetBlendMode((s32) (1), (s32) (2), (s32) (5), (s32) (0xF));
            break;
        }
        lbl_8049C32C = (lbl_8049C32C & 0xFFFFF0FF) | temp_r31;
    }
}

void fn_80123BA0(s32 arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (arg0 & 0xF000);
    if (temp_r31 != (s32) (lbl_8049C32C & 0xF000)) {
        switch (temp_r31) {                         /* irregular */
        default:
            GXSetZMode((s32) (0), (s32) (7), (s32) (0));
            break;
        case 0x1000:
            GXSetZMode((s32) (1), (s32) (1), (s32) (1));
            break;
        case 0x3000:
            GXSetZMode((s32) (1), (s32) (1), (s32) (0));
            break;
        case 0x2000:
            GXSetZMode((s32) (0), (s32) (7), (s32) (1));
            break;
        }
        lbl_8049C32C = (lbl_8049C32C & 0xFFFF0FFF) | temp_r31;
    }
}

// asm_to_cpp: fn_80123C4C
asm void fn_80123C4C(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    rlwinm r31, r3, 0, 4, 7
    lwz r0, lbl_8049C32C
    rlwinm r0, r0, 0, 4, 7
    cmpw r31, r0
    beq lbl_80123DA8
    subis r0, r31, 0x200
    cmplwi r0, 0x0
    beq lbl_80123CB0
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x0
    bl GXSetNumTexGens
    b lbl_80123D98
lbl_80123CB0:
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_801271AC
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
lbl_80123D98:
    lwz r0, lbl_8049C32C
    rlwinm r0, r0, 0, 8, 3
    or r0, r0, r31
    stw r0, lbl_8049C32C
lbl_80123DA8:
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80123DBC
asm void fn_80123DBC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    li r30, 0x0
    li r31, 0x0
    b lbl_80123DF4
lbl_80123DE4:
    add r3, r28, r31
    bl fn_80123E14
    addi r30, r30, 0x1
    addi r31, r31, 0xc
lbl_80123DF4:
    cmpw r30, r29
    blt lbl_80123DE4
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80123E14
asm void fn_80123E14(s8 **arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, 0x0(r3)
    cmpwi r30, 0x0
    bne lbl_80123E38
    b lbl_80123E68
lbl_80123E38:
    lis r3, lbl_8034F628@ha
    addi r31, r3, lbl_8034F628@l
    b lbl_80123E60
lbl_80123E44:
    mr r3, r30
    lbz r0, 0x0(r30)
    slwi r0, r0, 2
    lwzx r12, r31, r0
    mtctr r12
    bctrl
    lwz r30, 0x4(r30)
lbl_80123E60:
    cmpwi r30, 0x0
    bne lbl_80123E44
lbl_80123E68:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80123E80
asm void fn_80123E80(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    li r26, 0x0
    li r31, 0x0
    li r30, 0x0
    lis r3, lbl_803A3C58@ha
    addi r28, r3, lbl_803A3C58@l
    lis r3, lbl_8034F618@ha
    addi r29, r3, lbl_8034F618@l
lbl_80123EB0:
    li r3, 0x1
    bl fn_800393B0
    stw r3, 0x20(r1)
    add r27, r28, r31
    mr r3, r27
    addi r4, r1, 0x20
    bl fn_8002AB78
    lwzx r3, r29, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    bl fn_80044478
    stw r3, 0x1c(r1)
    addi r3, r27, 0x4
    addi r4, r1, 0x1c
    bl fn_8002AB78
    lwz r0, 0x4(r27)
    stw r0, 0x14(r1)
    lwz r0, 0x0(r27)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    bl fn_80044540
    addi r26, r26, 0x1
    addi r31, r31, 0x8
    addi r30, r30, 0x4
    cmpwi r26, 0x3
    blt lbl_80123EB0
    lis r3, lbl_803A3C58@ha
    addi r30, r3, lbl_803A3C58@l
    lwz r0, 0x4(r30)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    li r4, 0x76
    bl fn_80044620
    lwz r0, 0xc(r30)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0xf0
    bl fn_80044620
    lwz r0, 0x14(r30)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x80
    bl fn_80044620
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_80123F7C(void) {
    s32 var_r31;

    var_r31 = (s32) (0);
    do {
        fn_80123FB8((s32) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 3);
}

// asm_to_cpp: fn_80123FB8
asm void fn_80123FB8(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    slwi r4, r3, 3
    lis r3, lbl_803A3C58@ha
    addi r0, r3, lbl_803A3C58@l
    add r31, r0, r4
    lwz r0, 0x4(r31)
    stw r0, 0x8(r1)
    lwz r0, 0x0(r31)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800445B0
    mr r3, r31
    bl fn_80039424
    addi r3, r31, 0x4
    bl fn_80044500
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80124018
asm void fn_80124018(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_80124074
    li r3, 0x0
    bl fn_801238D0
    lis r3, lbl_803A3428@ha
    addi r31, r3, lbl_803A3428@l
    lwz r3, 0x10(r31)
    li r4, 0x10
    bl fn_80123DBC
    li r3, 0x5
    bl fn_80122C5C
    lwz r3, 0x10(r31)
    addi r3, r3, 0xc0
    lwz r4, 0xc(r31)
    subi r4, r4, 0x10
    bl fn_80123DBC
    bl fn_80123A2C
    li r3, 0x4
    bl fn_80122C5C
lbl_80124074:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80124088
asm void fn_80124088(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmpwi r4, 0x0
    bne lbl_801240EC
    li r3, 0x2
    bl fn_80122C5C
    li r3, 0x1
    bl fn_801238D0
    lis r3, lbl_803A3428@ha
    addi r31, r3, lbl_803A3428@l
    lwz r3, 0x14(r31)
    li r4, 0x18
    bl fn_80123DBC
    li r3, 0x3
    bl fn_80122C5C
    lwz r3, 0x14(r31)
    addi r3, r3, 0x120
    lwz r4, 0xc(r31)
    subi r4, r4, 0x18
    bl fn_80123DBC
    bl fn_80123A2C
    li r3, 0x1
    bl fn_80122C5C
lbl_801240EC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80124100
asm void fn_80124100(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_80124138
    li r3, 0x2
    bl fn_801238D0
    bl fn_80130764
    lis r3, lbl_803A3428@ha
    addi r4, r3, lbl_803A3428@l
    lwz r3, 0x18(r4)
    lwz r4, 0xc(r4)
    bl fn_80123DBC
    bl fn_80123A2C
lbl_80124138:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80124148(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) (0);
    if ((s8 *) M2C_FIELD(arg0, s8 **, 0) == NULL) {
        M2C_FIELD(arg0, s8 **, 0) = (s8 *) (arg1);
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg1);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, s8 **, 4), s8 **, 4) = (s8 *) (arg1);
        M2C_FIELD(arg0, s8 **, 4) = (s8 *) (arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 8) + 1));
}

// asm_to_cpp: fn_80124184
asm void fn_80124184(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    blt lbl_801241F8
    lis r4, lbl_803A3428@ha
    addi r4, r4, lbl_803A3428@l
    lwz r0, 0xc(r4)
    cmpw r3, r0
    blt lbl_801241D8
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    li r4, 0x658
    addi r5, r3, 0x20b
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_801241D8:
    lis r3, lbl_803A3428@ha
    addi r3, r3, lbl_803A3428@l
    lwz r3, 0x14(r3)
    mulli r0, r30, 0xc
    add r3, r3, r0
    mr r4, r31
    bl fn_80124148
    b lbl_8012424C
lbl_801241F8:
    bl labs
    mr r30, r3
    lis r4, lbl_803A3428@ha
    addi r4, r4, lbl_803A3428@l
    lwz r0, 0xc(r4)
    cmpw r3, r0
    blt lbl_80124230
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    li r4, 0x65d
    addi r5, r3, 0x235
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80124230:
    lis r3, lbl_803A3428@ha
    addi r3, r3, lbl_803A3428@l
    lwz r3, 0x10(r3)
    mulli r0, r30, 0xc
    add r3, r3, r0
    mr r4, r31
    bl fn_80124148
lbl_8012424C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80124264
asm void fn_80124264(s32 arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r4
    bl labs
    mr r30, r3
    lis r4, lbl_803A3428@ha
    addi r4, r4, lbl_803A3428@l
    lwz r0, 0xc(r4)
    cmpw r3, r0
    blt lbl_801242B4
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    li r4, 0x666
    addi r5, r3, 0x261
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_801242B4:
    lis r3, lbl_803A3428@ha
    addi r3, r3, lbl_803A3428@l
    lwz r3, 0x18(r3)
    mulli r0, r30, 0xc
    add r3, r3, r0
    mr r4, r31
    bl fn_80124148
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_801242E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x64)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg5), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (1);
        M2C_FIELD(temp_r3, s32 *, 0x5C) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (arg4);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) (arg6);
        memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x28)), (s32) (arg1), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x48)), (s32) (arg2), (s32) (0x10));
    }
}

// asm_to_cpp: fn_80124394
asm s8 * fn_80124394(s32 arg0) {
    nofralloc
    addi r0, r3, 0xf
    clrrwi r0, r0, 4
    lis r3, lbl_803A3428@ha
    addi r5, r3, lbl_803A3428@l
    lwz r6, 0x4(r5)
    add r4, r6, r0
    lwz r0, lbl_803A3428@l(r3)
    cmpw r4, r0
    ble lbl_801243C0
    li r3, 0x0
    blr
lbl_801243C0:
    lwz r0, 0x8(r5)
    add r3, r0, r6
    stw r4, 0x4(r5)
    blr
}

void fn_801243D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    fn_801242E8((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (arg4), (s32) (arg5), (s32) (0));
}

// asm_to_cpp: fn_801243D8
asm void fn_801243D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x5c(r3)
    bl fn_80122EBC
    lwz r3, 0x58(r30)
    bl fn_80123A68
    bl fn_80122138
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801244F4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    la r7, lbl_804A0910
    lfs f1, 0x4(r7)
    li r0, 0x4
    mtctr r0
lbl_8012442C:
    add r9, r30, r5
    lfs f0, 0x8(r9)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f0, 0x40(r7)
    lfs f0, 0xc(r9)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f0, 0x44(r7)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f1, 0x48(r7)
    add r7, r30, r6
    lwz r8, 0x48(r7)
    lwz r0, 0x60(r3)
    add r7, r0, r6
    stw r8, 0x20(r7)
    lfs f0, 0x28(r9)
    lwz r7, 0x60(r3)
    stfsx f0, r7, r5
    lfs f0, 0x2c(r9)
    lwz r0, 0x60(r3)
    add r7, r0, r5
    stfs f0, 0x4(r7)
    addi r4, r4, 0xc
    addi r5, r5, 0x8
    addi r6, r6, 0x4
    bdnz lbl_8012442C
    lwz r0, 0x60(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801244C4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl GXSetTexCoordScaleManually
lbl_801244C4:
    mr r3, r31
    bl fn_801220B4
    lwz r0, 0x60(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_801244F4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
lbl_801244F4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_8012450C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 *arg5) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x74)));
    if (temp_r3 != NULL) {
        fn_80124264((s32) ((s32) arg5), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (2);
        M2C_FIELD(temp_r3, s32 *, 0x6C) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x68) = (s32) (arg4);
        memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x30));
        memcpy((s32) ((s32) (temp_r3 + 0x38)), (s32) (arg1), (s32) (0x20));
        memcpy((s32) ((s32) (temp_r3 + 0x58)), (s32) (arg2), (s32) (0x10));
    }
}

// asm_to_cpp: fn_801245B0
asm void fn_801245B0(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x6c(r3)
    bl fn_80122EBC
    lwz r3, 0x68(r31)
    bl fn_80123A68
    bl fn_80122138
    cmpwi r3, 0x0
    beq lbl_80124670
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r0, 0x4
    mtctr r0
lbl_801245F4:
    add r8, r31, r4
    lfs f0, 0x8(r8)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f0, 0x40(r7)
    lfs f0, 0xc(r8)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f0, 0x44(r7)
    lfs f0, 0x10(r8)
    lwz r0, 0x60(r3)
    add r7, r0, r4
    stfs f0, 0x48(r7)
    add r7, r31, r6
    lwz r8, 0x58(r7)
    lwz r0, 0x60(r3)
    add r7, r0, r6
    stw r8, 0x20(r7)
    add r8, r31, r5
    lfs f0, 0x38(r8)
    lwz r7, 0x60(r3)
    stfsx f0, r7, r5
    lfs f0, 0x3c(r8)
    lwz r0, 0x60(r3)
    add r7, r0, r5
    stfs f0, 0x4(r7)
    addi r4, r4, 0xc
    addi r5, r5, 0x8
    addi r6, r6, 0x4
    bdnz lbl_801245F4
    bl fn_801220B4
lbl_80124670:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80124684(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x4C)));
    if (temp_r3 != NULL) {
        fn_80124264((s32) (0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (3);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
        fn_8002B060((s32) ((s32) (temp_r3 + 0x40)), (s32) ((s32) (arg0 + 0x30)));
        fn_80031A24((s32) ((s32) (temp_r3 + 0x10)), (M2C_UNK *) ((s32 *) arg0));
    }
}

void fn_801246FC(void) {
}

void fn_80124700(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x50)));
    if (temp_r3 != NULL) {
        if (arg3 == 1) {
            fn_80124184((s32) (0), (s8 *) (temp_r3));
        } else {
            fn_80124264((s32) (0), (s8 *) (temp_r3));
        }
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (4);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg1);
        fn_8002B060((s32) ((s32) (temp_r3 + 0x44)), (s32) ((s32) (arg0 + 0x30)));
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg2);
        fn_80031A24((s32) ((s32) (temp_r3 + 0x14)), (M2C_UNK *) ((s32 *) arg0));
    }
}

void fn_8012479C(s8 *arg0) {
    s32 sp8;
    s8 *temp_r3;

    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x10));
    if (temp_r3 != NULL) {
        sp8 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x114));
        fn_80033D2C((s32 *) (&sp8), (s32) (M2C_FIELD(arg0, s32 *, 0xC)), (s32) (1));
        fn_8017C22C((s32) (0));
        fn_80033DE4((s32) (0));
    }
}

// asm_to_cpp: fn_801247F0
asm s32 fn_801247F0() {
    nofralloc
    lwz r12, 0x8(r3)
    mtctr r12
    bctr
}

void fn_801247FC(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x28)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (6);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
    }
}

// asm_to_cpp: fn_80124860
asm void fn_80124860(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x20
    li r4, 0x40
    bl fn_80165CC4
    lis r3, lbl_8034F6FC@ha
    addi r3, r3, lbl_8034F6FC@l
    addi r3, r3, 0x28b
    lwz r4, 0x8(r31)
    lwz r5, 0xc(r31)
    opword 0x4CC63182
    bl fn_80165C74
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_801248B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *temp_r3;

    if (arg5 != 0) {
        temp_r3 = (s8 *) (fn_80124394((s32) (0x5C)));
        if (temp_r3 != NULL) {
            fn_80124184((s32) (arg7), (s8 *) (temp_r3));
            M2C_FIELD(temp_r3, s8 *, 0) = (s8) (7);
            memcpy((s32) ((s32) (temp_r3 + 8)), (s32) (arg0), (s32) (0x3C));
            memcpy((s32) ((s32) (temp_r3 + 0x44)), (s32) (arg1), (s32) (4));
            M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (arg2);
            M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) (arg4);
            M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) (arg3);
            M2C_FIELD(temp_r3, s32 *, 0x54) = (s32) (arg5);
            M2C_FIELD(temp_r3, s32 *, 0x58) = (s32) (arg6);
        }
    }
}

// asm_to_cpp: fn_80124960
asm void fn_80124960(s8 *arg0) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    stfd f28, 0xf0(r1)
    opword 0xF38100F8
    stfd f27, 0xe0(r1)
    opword 0xF36100E8
    stfd f26, 0xd0(r1)
    opword 0xF34100D8
    stfd f25, 0xc0(r1)
    opword 0xF32100C8
    stfd f24, 0xb0(r1)
    opword 0xF30100B8
    stfd f23, 0xa0(r1)
    opword 0xF2E100A8
    addi r11, r1, 0xa0
    bl _savegpr_18
    mr r22, r3
    lwz r26, 0x54(r3)
    addi r3, r1, 0x38
    bl fn_8002AF5C
    addi r3, r1, 0x44
    bl fn_8002AF5C
    addi r3, r1, 0x50
    bl fn_8002AF5C
    addi r3, r1, 0x5c
    bl fn_8002AF5C
    la r18, lbl_804A0910
    lfs f25, 0x4(r18)
    fmr f24, f25
    lfs f23, 0x14(r18)
    mr r3, r26
    bl fn_8012E91C
    stfs f1, 0x10(r1)
    mr r3, r26
    fmr f1, f23
    bl fn_8012EAA4
    stfs f1, 0x14(r1)
    lwz r0, 0x4c(r22)
    rlwinm r0, r0, 0, 28, 29
    cmpwi r0, 0x4
    beq lbl_80124A50
    bge lbl_80124A30
    cmpwi r0, 0x0
    beq lbl_80124A3C
    b lbl_80124A58
lbl_80124A30:
    cmpwi r0, 0x8
    beq lbl_80124A58
    b lbl_80124A58
lbl_80124A3C:
    lfs f1, 0x10(r1)
    lfs f0, lbl_804A0910
    fmuls f0, f1, f0
    stfs f0, 0x10(r1)
    b lbl_80124A58
lbl_80124A50:
    fmr f0, f25
    stfs f0, 0x10(r1)
lbl_80124A58:
    lwz r0, 0x4c(r22)
    rlwinm r0, r0, 0, 26, 27
    cmpwi r0, 0x10
    beq lbl_80124A98
    bge lbl_80124A78
    cmpwi r0, 0x0
    beq lbl_80124A84
    b lbl_80124AA4
lbl_80124A78:
    cmpwi r0, 0x20
    beq lbl_80124AA4
    b lbl_80124AA4
lbl_80124A84:
    lfs f1, 0x14(r1)
    lfs f0, lbl_804A0910
    fmuls f0, f1, f0
    stfs f0, 0x14(r1)
    b lbl_80124AA4
lbl_80124A98:
    la r3, lbl_804A0910
    lfs f0, 0x4(r3)
    stfs f0, 0x14(r1)
lbl_80124AA4:
    lwz r3, 0x48(r22)
    bl fn_80123A68
    li r25, 0x0
    li r19, 0x0
    addi r31, r1, 0x38
    la r30, lbl_804A0910
    lfs f31, 0x4(r30)
    lfs f27, 0x20(r30)
    lis r29, 0xff01
    lis r28, 0x1
    subi r27, r28, 0x3
    lfs f29, 0x24(r30)
    lfs f30, 0x18(r30)
    lfs f28, lbl_804A0910
    lfs f26, 0x1c(r30)
    li r20, 0x4
    li r21, 0x4
    b lbl_80124E4C
lbl_80124AEC:
    lwzx r3, r26, r19
    bl fn_8012EC24
    mr r23, r3
    lwz r0, 0x58(r22)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80124B44
    add r3, r26, r19
    bl fn_8012ED50
    mr r6, r3
    cmpwi r3, 0x0
    beq lbl_80124B44
    lfs f0, 0x10(r1)
    fsubs f0, f25, f0
    stfs f0, 0x8(r1)
    lfs f0, 0x14(r1)
    fsubs f0, f24, f0
    stfs f0, 0xc(r1)
    addi r3, r1, 0x8
    addi r4, r22, 0x8
    lwz r5, 0x44(r22)
    bl fn_80124EDC
lbl_80124B44:
    lwzx r3, r26, r19
    cmpw r3, r27
    beq lbl_80124BEC
    bge lbl_80124B68
    subi r0, r28, 0x5
    cmpw r3, r0
    beq lbl_80124B78
    bge lbl_80124B80
    b lbl_80124BEC
lbl_80124B68:
    subi r0, r28, 0x1
    cmpw r3, r0
    bge lbl_80124BEC
    b lbl_80124B88
lbl_80124B78:
    fadds f25, f25, f30
    b lbl_80124E44
lbl_80124B80:
    fadds f25, f25, f26
    b lbl_80124E44
lbl_80124B88:
    fadds f0, f27, f23
    fadds f24, f24, f0
    lfs f25, 0x4(r30)
    addi r0, r25, 0x1
    slwi r0, r0, 2
    add r3, r26, r0
    bl fn_8012E91C
    stfs f1, 0x10(r1)
    lwz r0, 0x4c(r22)
    rlwinm r0, r0, 0, 28, 29
    cmpwi r0, 0x4
    beq lbl_80124BE4
    bge lbl_80124BC8
    cmpwi r0, 0x0
    beq lbl_80124BD4
    b lbl_80124E44
lbl_80124BC8:
    cmpwi r0, 0x8
    beq lbl_80124E44
    b lbl_80124E44
lbl_80124BD4:
    frsp f0, f1
    fmuls f0, f0, f28
    stfs f0, 0x10(r1)
    b lbl_80124E44
lbl_80124BE4:
    stfs f31, 0x10(r1)
    b lbl_80124E44
lbl_80124BEC:
    lwzx r3, r26, r19
    bl fn_8012E8D0
    mr r18, r3
    cmpwi r3, 0x3
    bne lbl_80124C10
    subi r24, r29, 0x100
    li r3, -0x1
    bl fn_80122EBC
    b lbl_80124C28
lbl_80124C10:
    lwz r24, 0x44(r22)
    lwzx r3, r26, r19
    bl fn_8012E900
    clrlwi r0, r3, 24
    ori r3, r0, 0xff00
    bl fn_80122EBC
lbl_80124C28:
    cmpwi r18, 0x1
    bne lbl_80124C60
    stfs f25, 0x28(r1)
    mr r3, r23
    bl fn_8012E9EC
    fadds f0, f25, f1
    stfs f0, 0x30(r1)
    stfs f24, 0x2c(r1)
    fadds f0, f27, f24
    stfs f0, 0x34(r1)
    mr r3, r23
    bl fn_8012E9EC
    fadds f25, f25, f1
    b lbl_80124C7C
lbl_80124C60:
    stfs f25, 0x28(r1)
    fadds f0, f29, f25
    stfs f0, 0x30(r1)
    stfs f24, 0x2c(r1)
    fadds f0, f27, f24
    stfs f0, 0x34(r1)
    fadds f25, f25, f30
lbl_80124C7C:
    lfs f0, 0x28(r1)
    lfs f2, 0x10(r1)
    fsubs f0, f0, f2
    stfs f0, 0x28(r1)
    lfs f0, 0x2c(r1)
    lfs f1, 0x14(r1)
    fsubs f0, f0, f1
    stfs f0, 0x2c(r1)
    lfs f0, 0x30(r1)
    fsubs f0, f0, f2
    stfs f0, 0x30(r1)
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    lwzx r3, r26, r19
    addi r4, r1, 0x18
    bl fn_8012EADC
    bl fn_80122138
    mr r23, r3
    cmpwi r3, 0x0
    beq lbl_80124E58
    li r4, 0x0
    li r5, 0x0
    mtctr r20
lbl_80124CDC:
    lwz r0, 0x60(r3)
    add r6, r0, r4
    stfs f31, 0x48(r6)
    lwz r0, 0x60(r3)
    add r6, r0, r5
    stw r24, 0x20(r6)
    addi r4, r4, 0xc
    addi r5, r5, 0x4
    bdnz lbl_80124CDC
    lfs f2, 0x28(r1)
    stfs f2, 0x38(r1)
    lfs f1, 0x2c(r1)
    stfs f1, 0x3c(r1)
    stfs f31, 0x40(r1)
    lfs f0, 0x30(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f0, 0x34(r1)
    stfs f0, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f31, 0x64(r1)
    addi r3, r1, 0x38
    addi r4, r22, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x44
    addi r4, r22, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x50
    addi r4, r22, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x5c
    addi r4, r22, 0x8
    mr r5, r3
    bl fn_80127110
    li r3, 0x0
    mtctr r21
lbl_80124D88:
    lfs f1, 0x38(r22)
    lfsx f0, r31, r3
    fadds f0, f1, f0
    lwz r0, 0x60(r23)
    add r4, r0, r3
    stfs f0, 0x40(r4)
    add r5, r31, r3
    lfs f1, 0x3c(r22)
    lfs f0, 0x4(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r23)
    add r4, r0, r3
    stfs f0, 0x44(r4)
    lfs f1, 0x40(r22)
    lfs f0, 0x8(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r23)
    add r4, r0, r3
    stfs f0, 0x48(r4)
    addi r3, r3, 0xc
    bdnz lbl_80124D88
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x0(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x4(r3)
    lfs f0, 0x20(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x8(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0xc(r3)
    lfs f0, 0x20(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x10(r3)
    lfs f0, 0x24(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x18(r3)
    lfs f0, 0x24(r1)
    lwz r3, 0x60(r23)
    stfs f0, 0x1c(r3)
    mr r3, r23
    bl fn_801220B4
lbl_80124E44:
    addi r25, r25, 0x1
    addi r19, r19, 0x4
lbl_80124E4C:
    lwzx r0, r26, r19
    cmplwi r0, 0xffff
    bne lbl_80124AEC
lbl_80124E58:
    li r0, 0x128
    opword 0x13E1000C
    lfd f31, 0x120(r1)
    li r0, 0x118
    opword 0x13C1000C
    lfd f30, 0x110(r1)
    li r0, 0x108
    opword 0x13A1000C
    lfd f29, 0x100(r1)
    li r0, 0xf8
    opword 0x1381000C
    lfd f28, 0xf0(r1)
    li r0, 0xe8
    opword 0x1361000C
    lfd f27, 0xe0(r1)
    li r0, 0xd8
    opword 0x1341000C
    lfd f26, 0xd0(r1)
    li r0, 0xc8
    opword 0x1321000C
    lfd f25, 0xc0(r1)
    li r0, 0xb8
    opword 0x1301000C
    lfd f24, 0xb0(r1)
    li r0, 0xa8
    opword 0x12E1000C
    lfd f23, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_18
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_80124EDC
asm void fn_80124EDC(f32 *arg0, M2C_UNK *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    stfd f27, 0xc0(r1)
    opword 0xF36100C8
    stfd f26, 0xb0(r1)
    opword 0xF34100B8
    stfd f25, 0xa0(r1)
    opword 0xF32100A8
    stfd f24, 0x90(r1)
    opword 0xF3010098
    addi r11, r1, 0x90
    bl _savegpr_21
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r21, r6
    addi r27, r6, 0x80
    addi r3, r1, 0x30
    bl fn_8002AF5C
    addi r3, r1, 0x3c
    bl fn_8002AF5C
    addi r3, r1, 0x48
    bl fn_8002AF5C
    addi r3, r1, 0x54
    bl fn_8002AF5C
    mr r3, r21
    bl fn_8012E91C
    lfs f0, lbl_804A0910
    fmuls f25, f1, f0
    lfs f0, 0x0(r23)
    fadds f25, f25, f0
    la r22, lbl_804A0910
    lfs f1, 0x4(r23)
    lfs f0, 0x2c(r22)
    fsubs f1, f1, f0
    lfs f0, 0x28(r22)
    fadds f24, f0, f1
    mr r3, r27
    bl fn_8012E91C
    lfs f2, lbl_804A0910
    fmuls f0, f1, f2
    fmuls f0, f0, f2
    stfs f0, 0x8(r1)
    lfs f26, 0x4(r22)
    stfs f26, 0xc(r1)
    li r21, 0x0
    addi r31, r1, 0x30
    lis r30, 0xff01
    lis r29, 0x1
    subi r28, r29, 0x3
    lfs f29, 0x38(r22)
    lfs f30, 0x2c(r22)
    lfs f31, 0x30(r22)
    lfs f28, 0x34(r22)
    lfs f27, 0x28(r22)
    li r22, 0x4
    li r23, 0x4
    b lbl_80125278
lbl_80124FE8:
    lwzx r3, r27, r21
    cmpw r3, r28
    beq lbl_80125030
    bge lbl_8012500C
    subi r0, r29, 0x5
    cmpw r3, r0
    beq lbl_8012501C
    bge lbl_80125024
    b lbl_80125030
lbl_8012500C:
    subi r0, r29, 0x1
    cmpw r3, r0
    bge lbl_80125030
    b lbl_80125284
lbl_8012501C:
    fadds f25, f25, f31
    b lbl_80125274
lbl_80125024:
    fadds f25, f25, f27
    b lbl_80125274
    b lbl_80125284
lbl_80125030:
    lwzx r3, r27, r21
    bl fn_8012E8D0
    mr r26, r3
    cmpwi r3, 0x3
    bne lbl_80125054
    subi r25, r30, 0x100
    li r3, -0x1
    bl fn_80122EBC
    b lbl_80125068
lbl_80125054:
    lwzx r3, r27, r21
    bl fn_8012E900
    clrlwi r0, r3, 24
    ori r3, r0, 0xff00
    bl fn_80122EBC
lbl_80125068:
    cmpwi r26, 0x1
    bne lbl_80125090
    stfs f25, 0x20(r1)
    fadds f0, f30, f25
    stfs f0, 0x28(r1)
    stfs f24, 0x24(r1)
    fadds f0, f30, f24
    stfs f0, 0x2c(r1)
    fadds f25, f25, f28
    b lbl_801250AC
lbl_80125090:
    stfs f25, 0x20(r1)
    fadds f0, f29, f25
    stfs f0, 0x28(r1)
    stfs f24, 0x24(r1)
    fadds f0, f30, f24
    stfs f0, 0x2c(r1)
    fadds f25, f25, f31
lbl_801250AC:
    lfs f0, 0x20(r1)
    lfs f2, 0x8(r1)
    fsubs f0, f0, f2
    stfs f0, 0x20(r1)
    lfs f0, 0x24(r1)
    lfs f1, 0xc(r1)
    fsubs f0, f0, f1
    stfs f0, 0x24(r1)
    lfs f0, 0x28(r1)
    fsubs f0, f0, f2
    stfs f0, 0x28(r1)
    lfs f0, 0x2c(r1)
    fsubs f0, f0, f1
    stfs f0, 0x2c(r1)
    lwzx r3, r27, r21
    addi r4, r1, 0x10
    bl fn_8012EADC
    bl fn_80122138
    mr r26, r3
    cmpwi r3, 0x0
    beq lbl_80125284
    li r4, 0x0
    li r5, 0x0
    mtctr r22
lbl_8012510C:
    lwz r0, 0x60(r3)
    add r6, r0, r4
    stfs f26, 0x48(r6)
    lwz r0, 0x60(r3)
    add r6, r0, r5
    stw r25, 0x20(r6)
    addi r4, r4, 0xc
    addi r5, r5, 0x4
    bdnz lbl_8012510C
    lfs f2, 0x20(r1)
    stfs f2, 0x30(r1)
    lfs f1, 0x24(r1)
    stfs f1, 0x34(r1)
    stfs f26, 0x38(r1)
    lfs f0, 0x28(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f26, 0x44(r1)
    stfs f0, 0x48(r1)
    lfs f0, 0x2c(r1)
    stfs f0, 0x4c(r1)
    stfs f26, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f26, 0x5c(r1)
    addi r3, r1, 0x30
    mr r4, r24
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x3c
    mr r4, r24
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x48
    mr r4, r24
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x54
    mr r4, r24
    mr r5, r3
    bl fn_80127110
    li r3, 0x0
    mtctr r23
lbl_801251B8:
    lfs f1, 0x30(r24)
    lfsx f0, r31, r3
    fadds f0, f1, f0
    lwz r0, 0x60(r26)
    add r4, r0, r3
    stfs f0, 0x40(r4)
    add r5, r31, r3
    lfs f1, 0x34(r24)
    lfs f0, 0x4(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r26)
    add r4, r0, r3
    stfs f0, 0x44(r4)
    lfs f1, 0x38(r24)
    lfs f0, 0x8(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r26)
    add r4, r0, r3
    stfs f0, 0x48(r4)
    addi r3, r3, 0xc
    bdnz lbl_801251B8
    lfs f0, 0x10(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x0(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x4(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x8(r3)
    lfs f0, 0x14(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0xc(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x10(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x14(r3)
    lfs f0, 0x10(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x18(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r26)
    stfs f0, 0x1c(r3)
    mr r3, r26
    bl fn_801220B4
lbl_80125274:
    addi r21, r21, 0x4
lbl_80125278:
    lwzx r0, r27, r21
    cmplwi r0, 0xffff
    bne lbl_80124FE8
lbl_80125284:
    li r0, 0x108
    opword 0x13E1000C
    lfd f31, 0x100(r1)
    li r0, 0xf8
    opword 0x13C1000C
    lfd f30, 0xf0(r1)
    li r0, 0xe8
    opword 0x13A1000C
    lfd f29, 0xe0(r1)
    li r0, 0xd8
    opword 0x1381000C
    lfd f28, 0xd0(r1)
    li r0, 0xc8
    opword 0x1361000C
    lfd f27, 0xc0(r1)
    li r0, 0xb8
    opword 0x1341000C
    lfd f26, 0xb0(r1)
    li r0, 0xa8
    opword 0x1321000C
    lfd f25, 0xa0(r1)
    li r0, 0x98
    opword 0x1301000C
    lfd f24, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_21
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_801252FC
asm void fn_801252FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    fmr f30, f1
    fmr f31, f2
    mr r29, r7
    mr r30, r8
    cmpwi r4, 0x0
    beq lbl_801253D4
    li r3, 0x5c
    bl fn_80124394
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801253D4
    mr r3, r30
    mr r4, r31
    bl fn_80124184
    li r0, 0x8
    stb r0, 0x0(r31)
    addi r3, r31, 0x8
    mr r4, r25
    li r5, 0x3c
    bl memcpy
    addi r3, r31, 0x44
    mr r4, r28
    li r5, 0x4
    bl memcpy
    stw r29, 0x48(r31)
    stw r26, 0x4c(r31)
    stw r27, 0x50(r31)
    lfs f0, 0x38(r31)
    fsubs f0, f0, f30
    stfs f0, 0x38(r31)
    lfs f0, 0x3c(r31)
    fsubs f0, f0, f31
    stfs f0, 0x3c(r31)
    fctiwz f0, f30
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x54(r31)
    fctiwz f0, f31
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x58(r31)
lbl_801253D4:
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80125404
asm void fn_80125404(s8 *arg0) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    stfd f28, 0xf0(r1)
    opword 0xF38100F8
    stfd f27, 0xe0(r1)
    opword 0xF36100E8
    stfd f26, 0xd0(r1)
    opword 0xF34100D8
    stfd f25, 0xc0(r1)
    opword 0xF32100C8
    addi r11, r1, 0xc0
    bl _savegpr_17
    mr r18, r3
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r0, 0x4330
    stw r0, 0x70(r1)
    la r4, lbl_804A0910
    lfs f26, 0x4(r4)
    fmr f27, f26
    lwz r21, 0x50(r3)
    lwz r22, 0x4c(r3)
    addi r17, r3, 0x44
    stfs f26, 0x10(r1)
    stfs f26, 0x14(r1)
    li r26, 0x0
    addi r3, r1, 0xc
    mr r4, r17
    bl fn_8012593C
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8012593C
    lwz r0, 0x14(r21)
    cmpwi r0, 0x0
    bne lbl_801254D4
    lbz r4, 0x3(r17)
    lwz r0, 0x4(r21)
    mullw r3, r4, r0
    lwz r0, 0xc(r21)
    divw r0, r3, r0
    clrlwi r0, r0, 24
    stb r0, 0xf(r1)
    cmplw r0, r4
    ble lbl_801254D4
    stb r4, 0xf(r1)
lbl_801254D4:
    li r25, 0x0
    addi r31, r1, 0x38
    lis r28, 0x1
    lfd f28, lbl_804A0908
    lis r29, 0xff01
    la r30, lbl_804A0910
    lfs f29, 0x24(r30)
    lfs f30, 0x20(r30)
    lfs f31, 0x4(r30)
    lfs f25, 0x10(r30)
    li r23, 0x0
    li r24, 0x0
    subi r27, r28, 0x3
    li r17, 0x4
lbl_8012550C:
    lwz r3, 0x0(r22)
    cmplwi r3, 0xffff
    beq lbl_801258D0
    li r4, 0x1
    cmpw r3, r27
    beq lbl_801255B0
    bge lbl_8012553C
    subi r0, r28, 0x5
    cmpw r3, r0
    beq lbl_8012554C
    bge lbl_8012556C
    b lbl_801255B0
lbl_8012553C:
    subi r0, r28, 0x1
    cmpw r3, r0
    bge lbl_801255B0
    b lbl_8012558C
lbl_8012554C:
    lwz r0, 0x1c(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fadds f27, f27, f0
    li r4, 0x0
    b lbl_801255B0
lbl_8012556C:
    lwz r0, 0x24(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f28
    fadds f27, f27, f0
    li r4, 0x0
    b lbl_801255B0
lbl_8012558C:
    lfs f27, 0x4(r30)
    lwz r0, 0x20(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fadds f26, f26, f0
    addi r22, r22, 0x4
    b lbl_8012550C
lbl_801255B0:
    cmpwi r4, 0x0
    beq lbl_801258BC
    lwz r3, 0x0(r22)
    bl fn_8012E8D0
    mr r19, r3
    cmpwi r3, 0x3
    bne lbl_801255DC
    subi r20, r29, 0x100
    li r3, -0x1
    bl fn_80122EBC
    b lbl_801255F4
lbl_801255DC:
    lwz r20, 0x8(r1)
    lwz r3, 0x0(r22)
    bl fn_8012E900
    clrlwi r0, r3, 24
    ori r3, r0, 0xff00
    bl fn_80122EBC
lbl_801255F4:
    lwz r0, 0x0(r21)
    cmpw r26, r0
    bne lbl_80125604
    lwz r20, 0xc(r1)
lbl_80125604:
    cmpwi r19, 0x1
    bne lbl_80125648
    stfs f27, 0x28(r1)
    fmuls f1, f30, f25
    fadds f0, f27, f1
    stfs f0, 0x30(r1)
    stfs f26, 0x2c(r1)
    fadds f0, f26, f1
    stfs f0, 0x34(r1)
    lwz r0, 0x24(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f28
    fmuls f0, f0, f25
    fadds f27, f27, f0
    b lbl_80125684
lbl_80125648:
    stfs f27, 0x28(r1)
    fmuls f0, f29, f25
    fadds f0, f27, f0
    stfs f0, 0x30(r1)
    stfs f26, 0x2c(r1)
    fmuls f0, f30, f25
    fadds f0, f26, f0
    stfs f0, 0x34(r1)
    lwz r0, 0x1c(r21)
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fmuls f0, f0, f25
    fadds f27, f27, f0
lbl_80125684:
    xoris r4, r24, 0x8000
    stw r4, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f28
    lfs f3, 0x10(r1)
    fsubs f1, f3, f0
    lfs f0, 0x28(r1)
    fsubs f0, f0, f1
    stfs f0, 0x28(r1)
    xoris r3, r25, 0x8000
    stw r3, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    lfs f2, 0x14(r1)
    fsubs f1, f2, f0
    xoris r0, r23, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f28
    fsubs f1, f1, f0
    lfs f0, 0x2c(r1)
    fsubs f0, f0, f1
    stfs f0, 0x2c(r1)
    stw r4, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fsubs f1, f3, f0
    lfs f0, 0x30(r1)
    fsubs f0, f0, f1
    stfs f0, 0x30(r1)
    stw r3, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f28
    fsubs f1, f2, f0
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fsubs f1, f1, f0
    lfs f0, 0x34(r1)
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
    lwz r3, 0x0(r22)
    addi r4, r1, 0x18
    bl fn_8012EADC
    bl fn_80122138
    mr r19, r3
    cmpwi r3, 0x0
    beq lbl_801258D0
    addi r3, r1, 0x38
    bl fn_8002AF5C
    addi r3, r1, 0x44
    bl fn_8002AF5C
    addi r3, r1, 0x50
    bl fn_8002AF5C
    addi r3, r1, 0x5c
    bl fn_8002AF5C
    lfs f2, 0x28(r1)
    stfs f2, 0x38(r1)
    lfs f1, 0x2c(r1)
    stfs f1, 0x3c(r1)
    stfs f31, 0x40(r1)
    lfs f0, 0x30(r1)
    stfs f0, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f0, 0x50(r1)
    lfs f0, 0x34(r1)
    stfs f0, 0x54(r1)
    stfs f31, 0x58(r1)
    stfs f2, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f31, 0x64(r1)
    addi r3, r1, 0x38
    addi r4, r18, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x44
    addi r4, r18, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x50
    addi r4, r18, 0x8
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x5c
    addi r4, r18, 0x8
    mr r5, r3
    bl fn_80127110
    li r3, 0x0
    li r4, 0x0
    mtctr r17
lbl_801257F0:
    lfs f1, 0x38(r18)
    lfsx f0, r31, r3
    fadds f0, f1, f0
    lwz r0, 0x60(r19)
    add r5, r0, r3
    stfs f0, 0x40(r5)
    add r6, r31, r3
    lfs f1, 0x3c(r18)
    lfs f0, 0x4(r6)
    fadds f0, f1, f0
    lwz r0, 0x60(r19)
    add r5, r0, r3
    stfs f0, 0x44(r5)
    lfs f1, 0x40(r18)
    lfs f0, 0x8(r6)
    fadds f0, f1, f0
    lwz r0, 0x60(r19)
    add r5, r0, r3
    stfs f0, 0x48(r5)
    lwz r0, 0x60(r19)
    add r5, r0, r4
    stw r20, 0x20(r5)
    addi r3, r3, 0xc
    addi r4, r4, 0x4
    bdnz lbl_801257F0
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x0(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x4(r3)
    lfs f0, 0x20(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x8(r3)
    lfs f0, 0x1c(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0xc(r3)
    lfs f0, 0x20(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x10(r3)
    lfs f0, 0x24(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x14(r3)
    lfs f0, 0x18(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x18(r3)
    lfs f0, 0x24(r1)
    lwz r3, 0x60(r19)
    stfs f0, 0x1c(r3)
    mr r3, r19
    bl fn_801220B4
lbl_801258BC:
    addi r26, r26, 0x1
    addi r22, r22, 0x4
    lwz r0, 0x0(r21)
    cmpw r26, r0
    ble lbl_8012550C
lbl_801258D0:
    li r0, 0x128
    opword 0x13E1000C
    lfd f31, 0x120(r1)
    li r0, 0x118
    opword 0x13C1000C
    lfd f30, 0x110(r1)
    li r0, 0x108
    opword 0x13A1000C
    lfd f29, 0x100(r1)
    li r0, 0xf8
    opword 0x1381000C
    lfd f28, 0xf0(r1)
    li r0, 0xe8
    opword 0x1361000C
    lfd f27, 0xe0(r1)
    li r0, 0xd8
    opword 0x1341000C
    lfd f26, 0xd0(r1)
    li r0, 0xc8
    opword 0x1321000C
    lfd f25, 0xc0(r1)
    addi r11, r1, 0xc0
    bl _restgpr_17
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

s32 fn_8012593C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    return (s32) ((s32) arg0);
}

void fn_80125948(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x24)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg7), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (9);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
        M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) (arg1);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (arg2);
        M2C_FIELD(temp_r3, s32 *, 0x14) = (s32) (arg3);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (arg4);
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (arg5);
        M2C_FIELD(temp_r3, s32 *, 0x20) = (s32) (arg6);
    }
}

void fn_801259D8(s8 *arg0) {
    fn_8017C3E0((s32) (M2C_FIELD(arg0, s32 *, 8)), (f32) M2C_FIELD(arg0, u32 *, 0xC), (f32) M2C_FIELD(arg0, u32 *, 0x10), (f32) M2C_FIELD(arg0, u32 *, 0x14), (f32) M2C_FIELD(arg0, u32 *, 0x18), (f32) M2C_FIELD(arg0, u32 *, 0x1C), (f32) M2C_FIELD(arg0, u32 *, 0x20), (s32) ((s32) arg0));
}

void fn_80125A74(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0x24)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg1), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xA);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    }
}

// asm_to_cpp: fn_80125AD4
asm void fn_80125AD4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lis r4, lbl_803C22B0@ha
    addi r4, r4, lbl_803C22B0@l
    lwz r5, 0x54(r4)
    lwz r3, 0x8(r3)
    la r4, lbl_804A0910
    lfs f1, 0x4(r4)
    fmr f2, f1
    lhz r0, 0xe(r5)
    lfd f4, lbl_804A0900
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f3, f0, f4
    lhz r0, 0x10(r5)
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    fmr f5, f1
    fmr f6, f1
    bl fn_8017C3E0
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_80125B48(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0xC)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg1), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xC);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg0);
    }
}

// asm_to_cpp: fn_80125BA8
asm void fn_80125BA8(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x8(r3)
    bl fn_80191F04
    bl fn_8012381C
    li r0, -0x1
    stw r0, lbl_8049C32C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80125BD8
asm s32 fn_80125BD8(M2C_UNK *arg0, f32 *arg1, f32 *arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r30, r5
    mr r28, r6
    addi r3, r1, 0x8
    bl fn_8002AF5C
    addi r3, r1, 0x14
    bl fn_8002AF5C
    addi r3, r1, 0x20
    bl fn_8002AF5C
    addi r3, r1, 0x2c
    bl fn_8002AF5C
    bl fn_80122138
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80125C34
    li r3, 0x0
    b lbl_80125DC8
lbl_80125C34:
    li r4, 0x0
    li r5, 0x0
    la r6, lbl_804A0910
    lfs f0, 0x4(r6)
    li r0, 0x4
    mtctr r0
lbl_80125C4C:
    lwz r0, 0x60(r3)
    add r6, r0, r4
    stfs f0, 0x48(r6)
    lwz r0, 0x60(r3)
    add r6, r0, r5
    stw r28, 0x20(r6)
    addi r4, r4, 0xc
    addi r5, r5, 0x4
    bdnz lbl_80125C4C
    lfs f3, 0x0(r27)
    stfs f3, 0x8(r1)
    lfs f2, 0x4(r27)
    stfs f2, 0xc(r1)
    la r3, lbl_804A0910
    lfs f1, 0x4(r3)
    stfs f1, 0x10(r1)
    lfs f0, 0x8(r27)
    stfs f0, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    lfs f0, 0xc(r27)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f3, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f1, 0x34(r1)
    addi r3, r1, 0x8
    mr r4, r29
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x14
    mr r4, r29
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x20
    mr r4, r29
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0x2c
    mr r4, r29
    mr r5, r3
    bl fn_80127110
    li r3, 0x0
    addi r6, r1, 0x8
    li r0, 0x4
    mtctr r0
lbl_80125D08:
    lfs f1, 0x30(r29)
    lfsx f0, r6, r3
    fadds f0, f1, f0
    lwz r0, 0x60(r31)
    add r4, r0, r3
    stfs f0, 0x40(r4)
    add r5, r6, r3
    lfs f1, 0x34(r29)
    lfs f0, 0x4(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r31)
    add r4, r0, r3
    stfs f0, 0x44(r4)
    lfs f1, 0x38(r29)
    lfs f0, 0x8(r5)
    fadds f0, f1, f0
    lwz r0, 0x60(r31)
    add r4, r0, r3
    stfs f0, 0x48(r4)
    addi r3, r3, 0xc
    bdnz lbl_80125D08
    lfs f0, 0x0(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x8(r3)
    lfs f0, 0x4(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0xc(r3)
    lfs f0, 0x8(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x10(r3)
    lfs f0, 0xc(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x14(r3)
    lfs f0, 0x0(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x18(r3)
    lfs f0, 0xc(r30)
    lwz r3, 0x60(r31)
    stfs f0, 0x1c(r3)
    mr r3, r31
    bl fn_801220B4
    li r3, 0x1
lbl_80125DC8:
    addi r11, r1, 0x50
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

void fn_80125DE0(s32 arg0, s32 arg1) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80124394((s32) (0xC)));
    if (temp_r3 != NULL) {
        fn_80124184((s32) (arg0), (s8 *) (temp_r3));
        M2C_FIELD(temp_r3, s8 *, 0) = (s8) (0xD);
        M2C_FIELD(temp_r3, s32 *, 8) = (s32) (arg1);
    }
}

// asm_to_cpp: fn_80125E40
asm void fn_80125E40(s8 *arg0) {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    stfd f30, 0xc0(r1)
    opword 0xF3C100C8
    stfd f29, 0xb0(r1)
    opword 0xF3A100B8
    stfd f28, 0xa0(r1)
    opword 0xF38100A8
    stfd f27, 0x90(r1)
    opword 0xF3610098
    addi r11, r1, 0x90
    bl _savegpr_24
    lwz r3, 0x8(r3)
    bl fn_80136524
    mr r30, r3
    bl fn_80135BA4
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80126080
    addi r3, r1, 0x30
    bl fn_80127174
    addi r3, r1, 0x30
    bl fn_8002AE08
    la r29, lbl_804A0910
    lfs f0, 0x4(r29)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    li r28, 0x0
    stw r28, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_801354A0
    li r26, 0x0
    li r27, -0x1
    lfs f27, 0x3c(r29)
    lfs f0, 0x34(r29)
    fadds f28, f0, f27
    lfs f29, 0x40(r29)
    fadds f30, f0, f29
    lfs f31, 0x4(r29)
lbl_80125EF0:
    stw r28, lbl_8049D6D0
    stw r27, lbl_8049C328
    stw r27, lbl_8049C32C
    stfs f27, 0x20(r1)
    stfs f28, 0x28(r1)
    stfs f29, 0x24(r1)
    stfs f30, 0x2c(r1)
    stfs f31, 0x10(r1)
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x20
    addi r5, r1, 0x10
    li r6, 0x0
    bl fn_80125BD8
    cmpwi r3, 0x0
    beq lbl_80126080
    addi r26, r26, 0x1
    cmpwi r26, 0x2
    blt lbl_80125EF0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_80126080
    li r25, 0x0
    li r29, 0x0
    mr r27, r29
    li r28, -0x1
    b lbl_80126074
lbl_80125F64:
    lwz r0, 0xc(r31)
    add r26, r0, r29
    lwz r0, 0x30(r26)
    cmpwi r0, 0x0
    bne lbl_8012606C
    lbz r0, 0x38(r26)
    cmpwi r0, 0x0
    bne lbl_8012606C
    lwz r24, 0x24(r26)
    stw r27, lbl_8049D6D0
    stw r28, lbl_8049C328
    stw r28, lbl_8049C32C
    mr r3, r30
    bl fn_80135B98
    cmpwi r3, 0x0
    beq lbl_80125FB0
    cmpwi r3, 0x1
    beq lbl_80125FC4
    b lbl_80125FD8
lbl_80125FB0:
    lwz r0, 0x20(r26)
    clrlwi r0, r0, 24
    ori r3, r0, 0xfc00
    bl fn_80122EBC
    b lbl_80125FE8
lbl_80125FC4:
    lwz r0, 0x20(r26)
    clrlwi r0, r0, 24
    ori r3, r0, 0xfb00
    bl fn_80122EBC
    b lbl_80125FE8
lbl_80125FD8:
    lwz r0, 0x20(r26)
    clrlwi r0, r0, 24
    ori r3, r0, 0xfc00
    bl fn_80122EBC
lbl_80125FE8:
    li r3, 0x0
    bl fn_80123A68
    lfs f0, 0x0(r26)
    stfs f0, 0x20(r1)
    lfs f0, 0x4(r26)
    stfs f0, 0x24(r1)
    lfs f1, 0x0(r26)
    lfs f0, 0x8(r26)
    fadds f0, f1, f0
    stfs f0, 0x28(r1)
    lfs f1, 0x4(r26)
    lfs f0, 0xc(r26)
    fadds f0, f1, f0
    stfs f0, 0x2c(r1)
    lfs f0, 0x10(r26)
    stfs f0, 0x10(r1)
    lfs f0, 0x14(r26)
    stfs f0, 0x14(r1)
    lfs f1, 0x10(r26)
    lfs f0, 0x18(r26)
    fadds f0, f1, f0
    stfs f0, 0x18(r1)
    lfs f1, 0x14(r26)
    lfs f0, 0x1c(r26)
    fadds f0, f1, f0
    stfs f0, 0x1c(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x20
    addi r5, r1, 0x10
    mr r6, r24
    bl fn_80125BD8
    cmpwi r3, 0x0
    beq lbl_80126080
lbl_8012606C:
    addi r25, r25, 0x1
    addi r29, r29, 0x3c
lbl_80126074:
    lwz r0, 0x8(r31)
    cmpw r25, r0
    blt lbl_80125F64
lbl_80126080:
    li r0, 0xd8
    opword 0x13E1000C
    lfd f31, 0xd0(r1)
    li r0, 0xc8
    opword 0x13C1000C
    lfd f30, 0xc0(r1)
    li r0, 0xb8
    opword 0x13A1000C
    lfd f29, 0xb0(r1)
    li r0, 0xa8
    opword 0x1381000C
    lfd f28, 0xa0(r1)
    li r0, 0x98
    opword 0x1361000C
    lfd f27, 0x90(r1)
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_801260D4
asm void fn_801260D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6, s32 arg7, f32 farg0, f32 farg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    stfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _savegpr_18
    mr r18, r3
    mr r19, r4
    mr r20, r5
    fmr f30, f1
    fmr f31, f2
    mr r21, r6
    mr r22, r7
    mr r23, r8
    mr r24, r9
    mr r25, r10
    lwz r26, 0x58(r1)
    lwz r27, 0x5c(r1)
    lwz r28, 0x60(r1)
    lwz r29, 0x64(r1)
    lwz r30, 0x68(r1)
    li r3, 0xa0
    bl fn_80124394
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_801261B8
    mr r3, r30
    mr r4, r31
    bl fn_80124184
    addi r3, r31, 0x10
    mr r4, r18
    li r5, 0x3c
    bl memcpy
    addi r3, r31, 0x60
    mr r4, r25
    li r5, 0xc
    bl memcpy
    addi r3, r31, 0x78
    mr r4, r26
    li r5, 0x28
    bl memcpy
    li r0, 0xb
    stb r0, 0x0(r31)
    stw r20, 0xc(r31)
    stfs f30, 0x4c(r31)
    stfs f31, 0x50(r31)
    stw r21, 0x54(r31)
    stw r22, 0x58(r31)
    extsh r0, r23
    sth r0, 0x5c(r31)
    extsh r0, r24
    sth r0, 0x5e(r31)
    stw r27, 0x8(r31)
    stw r19, 0x74(r31)
    stw r28, 0x6c(r31)
    stw r29, 0x70(r31)
lbl_801261B8:
    lfd f31, 0x48(r1)
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_18
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801261D8
asm void fn_801261D8(s8 *arg0) {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    opword 0xF3E10208
    stfd f30, 0x1f0(r1)
    opword 0xF3C101F8
    stfd f29, 0x1e0(r1)
    opword 0xF3A101E8
    stfd f28, 0x1d0(r1)
    opword 0xF38101D8
    stfd f27, 0x1c0(r1)
    opword 0xF36101C8
    stfd f26, 0x1b0(r1)
    opword 0xF34101B8
    stfd f25, 0x1a0(r1)
    opword 0xF32101A8
    stfd f24, 0x190(r1)
    opword 0xF3010198
    stfd f23, 0x180(r1)
    opword 0xF2E10188
    stfd f22, 0x170(r1)
    opword 0xF2C10178
    stfd f21, 0x160(r1)
    opword 0xF2A10168
    stfd f20, 0x150(r1)
    opword 0xF2810158
    stfd f19, 0x140(r1)
    opword 0xF2610148
    stfd f18, 0x130(r1)
    opword 0xF2410138
    stfd f17, 0x120(r1)
    opword 0xF2210128
    stfd f16, 0x110(r1)
    opword 0xF2010118
    stfd f15, 0x100(r1)
    opword 0xF1E10108
    stfd f14, 0xf0(r1)
    opword 0xF1C100F8
    addi r11, r1, 0xf0
    bl _savegpr_29
    mr r30, r3
    lis r0, 0x4330
    stw r0, 0xa0(r1)
    lis r0, 0x4330
    stw r0, 0xa8(r1)
    addi r3, r1, 0x70
    bl fn_8002AF5C
    addi r3, r1, 0x7c
    bl fn_8002AF5C
    addi r3, r1, 0x88
    bl fn_8002AF5C
    addi r3, r1, 0x94
    bl fn_8002AF5C
    lwz r3, 0x74(r30)
    bl fn_80122EBC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80126310
    lwz r0, 0x8(r30)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80126310
    lhz r0, 0x34(r3)
    lfd f2, lbl_804A0900
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f2
    lfs f1, lbl_804A0910
    fmuls f0, f0, f1
    stfs f0, 0x8(r1)
    lhz r0, 0x36(r3)
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    stfs f0, 0xc(r1)
    b lbl_8012631C
lbl_80126310:
    lfs f0, 0x50(r30)
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_8012631C:
    cmpwi r3, 0x0
    beq lbl_80126358
    lhz r0, 0x34(r3)
    lfd f2, lbl_804A0900
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f2
    lfs f1, lbl_804A0910
    fmuls f29, f0, f1
    lhz r0, 0x36(r3)
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f2
    fmuls f28, f0, f1
    b lbl_80126360
lbl_80126358:
    lfs f29, 0x8(r1)
    lfs f28, 0xc(r1)
lbl_80126360:
    lfs f1, 0x8(r1)
    la r3, lbl_804A0910
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80126378
    stfs f0, 0x8(r1)
lbl_80126378:
    lfs f1, 0xc(r1)
    la r3, lbl_804A0910
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80126390
    stfs f0, 0xc(r1)
lbl_80126390:
    lfs f17, 0x8(r1)
    lfs f18, 0xc(r1)
    lfs f31, 0x40(r30)
    lfs f30, 0x44(r30)
    fsubs f0, f31, f29
    fctiwz f0, f0
    stfd f0, 0xb0(r1)
    lwz r0, 0xb4(r1)
    lfd f1, lbl_804A0908
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r1)
    fsubs f0, f30, f28
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r1)
    addi r3, r1, 0x40
    addi r4, r30, 0x10
    bl fn_801734E4
    lfs f0, 0x40(r30)
    stfs f0, 0x4c(r1)
    lfs f0, 0x44(r30)
    stfs f0, 0x5c(r1)
    lfs f0, 0x48(r30)
    stfs f0, 0x6c(r1)
    lwz r3, 0x70(r30)
    bl fn_80123A68
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    cmpwi r31, 0x0
    beq lbl_80126490
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_80126490:
    lha r3, 0x5c(r30)
    lha r0, 0x5e(r30)
    subf r0, r3, r0
    lfd f1, lbl_804A0908
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f2, f0, f1
    lwz r5, 0xc(r30)
    xoris r0, r5, 0x8000
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f1
    fdivs f27, f2, f0
    li r3, 0x98
    li r4, 0x0
    addi r0, r5, 0x1
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    lha r0, 0x5c(r30)
    lfd f16, lbl_804A0908
    xoris r0, r0, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f26, f0, f16
    cmpwi r31, 0x0
    beq lbl_801268D0
    lwz r3, 0x8(r30)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8012652C
    lfs f0, 0x4c(r30)
    fmuls f25, f17, f0
    fmuls f24, f18, f0
    lfs f0, 0x50(r30)
    fmuls f23, f17, f0
    fmuls f22, f18, f0
    b lbl_8012653C
lbl_8012652C:
    lfs f24, 0x4c(r30)
    fmr f25, f24
    lfs f22, 0x50(r30)
    fmr f23, f22
lbl_8012653C:
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80126674
    li r29, 0x0
    la r31, lbl_804A0910
    lfs f18, 0x8(r1)
    fadds f17, f29, f29
    lfs f16, 0xc(r1)
    fadds f14, f28, f28
    b lbl_80126660
lbl_80126564:
    fmr f1, f26
    bl fn_80018C2C
    fmr f15, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x34
    fmr f2, f15
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f25
    fmr f2, f24
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x54(r30)
    bl fn_801271CC
    lfs f0, 0x1c(r1)
    fadds f1, f0, f31
    stfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    fadds f2, f0, f30
    stfs f2, 0x20(r1)
    fsubs f0, f1, f18
    fdivs f1, f0, f17
    fsubs f0, f2, f16
    fdivs f2, f0, f14
    bl fn_801271BC
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f23
    fmr f2, f22
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x58(r30)
    bl fn_801271CC
    lfs f0, 0x1c(r1)
    fadds f1, f0, f31
    stfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    fadds f2, f0, f30
    stfs f2, 0x20(r1)
    fsubs f0, f1, f18
    fdivs f1, f0, f17
    fsubs f0, f2, f16
    fdivs f2, f0, f14
    bl fn_801271BC
    fadds f26, f26, f27
    addi r29, r29, 0x1
lbl_80126660:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_80126564
    b lbl_80126B2C
lbl_80126674:
    lfs f21, 0x90(r30)
    lfs f0, 0x88(r30)
    stfs f0, 0xc4(r1)
    li r29, 0x0
    lfd f16, lbl_804A0908
    la r31, lbl_804A0910
    lfs f17, 0x4(r31)
    lfs f18, 0x44(r31)
    lfs f19, 0x8(r1)
    fadds f20, f29, f29
    lfs f29, 0xc(r1)
    fadds f0, f28, f28
    stfd f0, 0xd0(r1)
    b lbl_801268BC
lbl_801266AC:
    fmr f1, f21
    bl fn_80018C2C
    lfs f0, 0x78(r30)
    fmuls f28, f0, f1
    fmr f1, f21
    bl fn_80018C2C
    lfs f0, 0x7c(r30)
    fmuls f15, f0, f1
    xoris r0, r29, 0x8000
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f1, f0, f16
    lfs f0, 0x8c(r30)
    fmuls f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x80(r30)
    fmuls f0, f0, f1
    fadds f28, f28, f0
    xoris r0, r29, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f0, f16
    lfs f0, 0x8c(r30)
    fmuls f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x84(r30)
    fmuls f0, f0, f1
    fadds f15, f15, f0
    fadds f14, f25, f28
    fadds f28, f24, f28
    fadds f0, f23, f15
    stfs f0, 0xc0(r1)
    fadds f15, f22, f15
    fcmpo cr0, f14, f17
    opword 0x4C401382
    bne lbl_80126740
    lfs f14, 0x4(r31)
lbl_80126740:
    fcmpo cr0, f28, f17
    opword 0x4C401382
    bne lbl_80126750
    lfs f28, 0x4(r31)
lbl_80126750:
    lfs f0, 0xc4(r1)
    fadds f21, f21, f0
    fcmpo cr0, f21, f18
    opword 0x4C411382
    bne lbl_80126768
    fsubs f21, f21, f18
lbl_80126768:
    fmr f1, f26
    bl fn_80018C2C
    stfd f1, 0xc8(r1)
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x34
    lfd f2, 0xc8(r1)
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f25
    fmr f2, f24
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x10
    addi r4, r1, 0x34
    fmr f1, f14
    fmr f2, f28
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x10
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x54(r30)
    bl fn_801271CC
    lfs f0, 0x1c(r1)
    fadds f1, f0, f31
    stfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    fadds f2, f0, f30
    stfs f2, 0x20(r1)
    fsubs f1, f1, f19
    lfs f0, 0x98(r30)
    fadds f0, f0, f1
    fdivs f1, f0, f20
    fsubs f2, f2, f29
    lfs f0, 0x9c(r30)
    fadds f2, f0, f2
    lfd f0, 0xd0(r1)
    fdivs f2, f2, f0
    bl fn_801271BC
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f23
    fmr f2, f22
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x10
    addi r4, r1, 0x34
    lfs f1, 0xc0(r1)
    fmr f2, f15
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x10
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x58(r30)
    bl fn_801271CC
    lfs f0, 0x1c(r1)
    fadds f1, f0, f31
    stfs f1, 0x1c(r1)
    lfs f0, 0x20(r1)
    fadds f2, f0, f30
    stfs f2, 0x20(r1)
    fsubs f1, f1, f19
    lfs f0, 0x98(r30)
    fadds f0, f0, f1
    fdivs f1, f0, f20
    fsubs f2, f2, f29
    lfs f0, 0x9c(r30)
    fadds f2, f0, f2
    lfd f0, 0xd0(r1)
    fdivs f2, f2, f0
    bl fn_801271BC
    fadds f26, f26, f27
    addi r29, r29, 0x1
lbl_801268BC:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_801266AC
    b lbl_80126B2C
lbl_801268D0:
    lwz r0, 0x8(r30)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_801269A4
    li r29, 0x0
    la r31, lbl_804A0910
    b lbl_80126990
lbl_801268EC:
    fmr f1, f26
    bl fn_80018C2C
    fmr f14, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x34
    fmr f2, f14
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    lfs f1, 0x4c(r30)
    fmr f2, f1
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x54(r30)
    bl fn_801271CC
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    lfs f1, 0x50(r30)
    fmr f2, f1
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x58(r30)
    bl fn_801271CC
    fadds f26, f26, f27
    addi r29, r29, 0x1
lbl_80126990:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_801268EC
    b lbl_80126B2C
lbl_801269A4:
    lfs f17, 0x90(r30)
    lfs f18, 0x88(r30)
    li r29, 0x0
    la r31, lbl_804A0910
    lfs f21, 0x4(r31)
    lfs f20, 0x48(r31)
    lfs f19, 0x44(r31)
    b lbl_80126B1C
lbl_801269C4:
    fmr f1, f17
    bl fn_80018C2C
    lfs f0, 0x78(r30)
    fmuls f14, f0, f1
    fmr f1, f17
    bl fn_80018C2C
    lfs f0, 0x7c(r30)
    fmuls f15, f0, f1
    xoris r0, r29, 0x8000
    stw r0, 0xac(r1)
    lfd f0, 0xa8(r1)
    fsubs f1, f0, f16
    lfs f0, 0x8c(r30)
    fmuls f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x80(r30)
    fmuls f0, f0, f1
    fadds f14, f14, f0
    xoris r0, r29, 0x8000
    stw r0, 0xa4(r1)
    lfd f0, 0xa0(r1)
    fsubs f1, f0, f16
    lfs f0, 0x8c(r30)
    fmuls f1, f0, f1
    bl fn_80018C2C
    lfs f0, 0x84(r30)
    fmuls f0, f0, f1
    fadds f15, f15, f0
    lfs f0, 0x4c(r30)
    fadds f22, f0, f14
    lfs f0, 0x50(r30)
    fadds f15, f0, f15
    fcmpo cr0, f22, f21
    opword 0x4C401382
    bne lbl_80126A54
    lfs f22, 0x4(r31)
lbl_80126A54:
    fcmpo cr0, f15, f20
    opword 0x4C401382
    bne lbl_80126A64
    lfs f15, 0x48(r31)
lbl_80126A64:
    fadds f17, f17, f18
    fcmpo cr0, f17, f19
    opword 0x4C411382
    bne lbl_80126A78
    fsubs f17, f17, f19
lbl_80126A78:
    fmr f1, f26
    bl fn_80018C2C
    fmr f14, f1
    fmr f1, f26
    bl fn_80018C3C
    addi r3, r1, 0x34
    fmr f2, f14
    lfs f3, 0x4(r31)
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f22
    fmr f2, f22
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x54(r30)
    bl fn_801271CC
    addi r3, r1, 0x1c
    addi r4, r1, 0x34
    fmr f1, f15
    fmr f2, f15
    lfs f3, 0x10(r31)
    bl fn_801271E8
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    addi r5, r1, 0x1c
    bl fn_80018AF8
    lfs f1, 0x28(r1)
    lfs f2, 0x2c(r1)
    bl fn_801271D8
    lwz r3, 0x58(r30)
    bl fn_801271CC
    fadds f26, f26, f27
    addi r29, r29, 0x1
lbl_80126B1C:
    lwz r3, 0xc(r30)
    addi r0, r3, 0x1
    cmpw r29, r0
    blt lbl_801269C4
lbl_80126B2C:
    bl fn_801271B8
    li r0, 0x208
    opword 0x13E1000C
    lfd f31, 0x200(r1)
    li r0, 0x1f8
    opword 0x13C1000C
    lfd f30, 0x1f0(r1)
    li r0, 0x1e8
    opword 0x13A1000C
    lfd f29, 0x1e0(r1)
    li r0, 0x1d8
    opword 0x1381000C
    lfd f28, 0x1d0(r1)
    li r0, 0x1c8
    opword 0x1361000C
    lfd f27, 0x1c0(r1)
    li r0, 0x1b8
    opword 0x1341000C
    lfd f26, 0x1b0(r1)
    li r0, 0x1a8
    opword 0x1321000C
    lfd f25, 0x1a0(r1)
    li r0, 0x198
    opword 0x1301000C
    lfd f24, 0x190(r1)
    li r0, 0x188
    opword 0x12E1000C
    lfd f23, 0x180(r1)
    li r0, 0x178
    opword 0x12C1000C
    lfd f22, 0x170(r1)
    li r0, 0x168
    opword 0x12A1000C
    lfd f21, 0x160(r1)
    li r0, 0x158
    opword 0x1281000C
    lfd f20, 0x150(r1)
    li r0, 0x148
    opword 0x1261000C
    lfd f19, 0x140(r1)
    li r0, 0x138
    opword 0x1241000C
    lfd f18, 0x130(r1)
    li r0, 0x128
    opword 0x1221000C
    lfd f17, 0x120(r1)
    li r0, 0x118
    opword 0x1201000C
    lfd f16, 0x110(r1)
    li r0, 0x108
    opword 0x11E1000C
    lfd f15, 0x100(r1)
    li r0, 0xf8
    opword 0x11C1000C
    lfd f14, 0xf0(r1)
    addi r11, r1, 0xf0
    bl _restgpr_29
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

// asm_to_cpp: fn_80126C20
asm void fn_80126C20(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    addi r11, r1, 0x120
    bl _savegpr_18
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    lwz r29, 0x138(r1)
    lwz r30, 0x13c(r1)
    lwz r31, 0x140(r1)
    lis r0, 0x4330
    stw r0, 0xd0(r1)
    lis r0, 0x4330
    stw r0, 0xd8(r1)
    addi r3, r1, 0xa0
    bl fn_8002AF5C
    addi r3, r1, 0xac
    bl fn_8002AF5C
    addi r3, r1, 0xb8
    bl fn_8002AF5C
    addi r3, r1, 0xc4
    bl fn_8002AF5C
    addi r3, r1, 0x60
    bl fn_80127174
    addi r5, r1, 0x1c
    lis r3, lbl_80339970@ha
    addi r3, r3, lbl_80339970@l
    subi r4, r3, 0x4
    li r0, 0x4
    mtctr r0
lbl_80126CB8:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_80126CB8
    mr r3, r27
    bl fn_80122E1C
    cmpwi r3, 0x0
    beq lbl_80126D08
    lhz r0, 0x34(r3)
    lfd f1, lbl_804A0900
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    stfs f0, 0x8(r1)
    lhz r0, 0x36(r3)
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f0, f0, f1
    stfs f0, 0xc(r1)
lbl_80126D08:
    lfs f1, 0x8(r1)
    la r3, lbl_804A0910
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80126D20
    stfs f0, 0x8(r1)
lbl_80126D20:
    lfs f1, 0xc(r1)
    la r3, lbl_804A0910
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    bge lbl_80126D38
    stfs f0, 0xc(r1)
lbl_80126D38:
    addi r3, r1, 0xa0
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80127210
    addi r3, r1, 0x60
    mr r4, r21
    bl fn_80031A24
    addi r3, r1, 0xa0
    addi r4, r1, 0x60
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0xac
    addi r4, r1, 0x60
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0xb8
    addi r4, r1, 0x60
    mr r5, r3
    bl fn_80127110
    addi r3, r1, 0xc4
    addi r4, r1, 0x60
    mr r5, r3
    bl fn_80127110
    rlwinm r31, r31, 0, 30, 30
    lfd f31, lbl_804A0908
    addi r18, r1, 0x10
    li r19, 0xa
    li r20, 0x4
lbl_80126DA8:
    divw r0, r22, r19
    mullw r0, r0, r19
    subf r9, r0, r22
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    xoris r6, r23, 0x8000
    xoris r0, r24, 0x8000
    mtctr r20
lbl_80126DCC:
    addi r7, r1, 0xa0
    add r7, r7, r3
    addi r8, r1, 0x40
    add r8, r8, r4
    stw r6, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f2, f0, f31
    lfs f1, 0x30(r21)
    lfs f0, 0x0(r7)
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x0(r8)
    stw r0, 0xdc(r1)
    lfd f0, 0xd8(r1)
    fsubs f2, f0, f31
    lfs f1, 0x34(r21)
    lfs f0, 0x4(r7)
    fadds f0, f1, f0
    fadds f0, f2, f0
    stfs f0, 0x4(r8)
    stwx r28, r18, r5
    addi r3, r3, 0xc
    addi r4, r4, 0x8
    addi r5, r5, 0x4
    bdnz lbl_80126DCC
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    addi r5, r1, 0x10
    add r6, r27, r9
    li r7, 0x0
    mr r8, r29
    bl fn_801243D0
    add r23, r23, r25
    add r24, r24, r26
    divw r22, r22, r19
    cmpwi r31, 0x0
    bne lbl_80126E68
    cmpwi r22, 0x0
    beq lbl_80126E74
lbl_80126E68:
    subi r30, r30, 0x1
    cmpwi r30, 0x0
    bgt lbl_80126DA8
lbl_80126E74:
    li r0, 0x128
    opword 0x13E1000C
    lfd f31, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_18
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: fn_80126E98
asm u16 fn_80126E98(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80126EBC
    lhz r3, 0x1c(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80126EBC
asm void fn_80126EBC(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80127064
    cmpwi r3, 0x0
    bne lbl_80126F04
    bl fn_80126F20
    mr r6, r3
    lis r3, lbl_8034F6E8@ha
    addi r3, r3, lbl_8034F6E8@l
    li r4, 0x2a
    lis r5, lbl_8034F6CC@ha
    addi r5, r5, lbl_8034F6CC@l
    la r7, lbl_8049C33C
    opword 0x4CC63182
    bl fn_801A9384
lbl_80126F04:
    mr r3, r31
    bl fn_80127054
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80126F20(void) {
    return (s32) ((s32) &lbl_8049C330);
}

// asm_to_cpp: fn_80126F28
asm s32 fn_80126F28(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80126EBC
    lwz r3, 0x18(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s8 * fn_80126F4C(s32 arg0) {
    s32 temp_r0;
    s8 *temp_r3;

    temp_r3 = (s8 *) (fn_80126F84((s32 *) ((s32 *) arg0)));
    temp_r0 = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10));
    if (temp_r0 != 0) {
        return (s8 *) (temp_r3 + temp_r0);
    }
    return (s8 *) (NULL);
}

// asm_to_cpp: fn_80126F84
asm M2C_UNK fn_80126F84(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80127064
    cmpwi r3, 0x0
    bne lbl_80126FCC
    bl fn_80126F20
    mr r6, r3
    lis r3, lbl_8034F6B8@ha
    addi r3, r3, lbl_8034F6B8@l
    li r4, 0x2a
    lis r5, lbl_8034F69C@ha
    addi r5, r5, lbl_8034F69C@l
    la r7, lbl_8049C338
    opword 0x4CC63182
    bl fn_801A9384
lbl_80126FCC:
    mr r3, r31
    bl fn_8012705C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80126FE8(s32 arg0) {
    DCStore__Q34nw4r3g3d7ResPlttFb((s32) ((s8 *) arg0), (s32) (0));
}

// asm_to_cpp: fn_80126FF0
asm s32 * fn_80126FF0(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_801270CC
    clrlwi r0, r31, 27
    cmpwi r0, 0x0
    beq lbl_80127038
    lis r3, lbl_8034F688@ha
    addi r3, r3, lbl_8034F688@l
    li r4, 0x2a
    lis r5, lbl_8034F660@ha
    addi r5, r5, lbl_8034F660@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80127038:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80127054(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_8012705C(s32 *arg0) {
    return (s32) (*arg0);
}

s32 fn_80127064(s32 *arg0) {
    return (s32) (*arg0 != 0);
}

s32 * fn_80127074(s32 *arg0, s32 arg1) {
    fn_801270A4((s32 *) (arg0), (s32 *) ((s32 *) arg1));
    return (s32 *) (arg0);
}

void fn_801270A4(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

// asm_to_cpp: fn_801270B0
asm s32 fn_801270B0(s32 *arg0, s32 arg1) {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801270C4
    add r3, r0, r4
    blr
lbl_801270C4:
    li r3, 0x0
    blr
}

void fn_801270CC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

// asm_to_cpp: fn_801270D4
asm M2C_UNK fn_801270D4(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800361F0
    mr r4, r3
    mr r3, r31
    lwz r4, 0x14(r4)
    bl fn_801270B0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80127110
asm f32 * fn_80127110(f32 *arg0, M2C_UNK *arg1, f32 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    bl fn_80018B88
    mr r30, r3
    mr r3, r31
    bl fn_80018B8C
    mr r31, r3
    mr r3, r29
    bl fn_80018B90
    mr r4, r31
    mr r5, r30
    bl fn_8030D7E0
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 * fn_80127174(s32 *arg0) {
    fn_8002AE40((s32) ((s32) arg0));
    fn_8002AF5C((s32) ((s32) ((s8 *)arg0 + 0x30)));
    return (s32 *) (arg0);
}

void fn_801271AC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_801271B8(void) {
}

void fn_801271BC(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void fn_801271CC(s32 arg0) {
    *(s32 *)0xCC008000 = arg0;
}

void fn_801271D8(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

// asm_to_cpp: fn_801271E8
asm void fn_801271E8(f32 *arg0, M2C_UNK *arg1, f32 farg0, f32 farg1, f32 farg2) {
    nofralloc
    lfs f0, 0x0(r4)
    fmuls f0, f0, f1
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    fmuls f0, f0, f2
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    fmuls f0, f0, f3
    stfs f0, 0x8(r3)
    blr
}

// asm_to_cpp: fn_80127210
asm void fn_80127210(f32 *arg0, f32 *arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    nofralloc
    rlwinm r0, r5, 0, 28, 29
    cmpwi r0, 0x0
    beq lbl_80127230
    cmpwi r0, 0x4
    beq lbl_80127244
    cmpwi r0, 0x8
    beq lbl_80127254
    b lbl_80127264
lbl_80127230:
    lfs f1, 0x0(r4)
    lfs f0, lbl_804A0970
    fmuls f4, f1, f0
    fneg f2, f4
    b lbl_80127264
lbl_80127244:
    la r6, lbl_804A0970
    lfs f2, 0x4(r6)
    lfs f4, 0x0(r4)
    b lbl_80127264
lbl_80127254:
    lfs f0, 0x0(r4)
    fneg f2, f0
    la r6, lbl_804A0970
    lfs f4, 0x4(r6)
lbl_80127264:
    rlwinm r0, r5, 0, 26, 27
    cmpwi r0, 0x0
    beq lbl_80127284
    cmpwi r0, 0x10
    beq lbl_80127298
    cmpwi r0, 0x20
    beq lbl_801272A8
    b lbl_801272B8
lbl_80127284:
    lfs f1, 0x4(r4)
    lfs f0, lbl_804A0970
    fmuls f3, f1, f0
    fneg f1, f3
    b lbl_801272B8
lbl_80127298:
    la r5, lbl_804A0970
    lfs f1, 0x4(r5)
    lfs f3, 0x4(r4)
    b lbl_801272B8
lbl_801272A8:
    lfs f0, 0x4(r4)
    fneg f1, f0
    la r4, lbl_804A0970
    lfs f3, 0x4(r4)
lbl_801272B8:
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    la r4, lbl_804A0970
    lfs f0, 0x4(r4)
    stfs f0, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f4, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f3, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

} // extern "C"
