#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern float lbl_8049D658;
extern float lbl_8049D698;
extern float lbl_8049E980;
extern float lbl_8049E988;
extern M2C_UNK lbl_8049E990;

f32 Atan2FIdx__Q24nw4r4mathFff(f32 farg0, f32 farg1);
f32 CosFIdx__Q24nw4r4mathFf(f32 farg0, s32 arg1);
M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXLoadTexMtxImm(s32 arg0, s32 arg1, s32 arg2);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXSetAlphaUpdate(s32 arg0);
void GXSetBlendMode(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void GXSetChanCtrl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void GXSetColorUpdate(s32 arg0);
void GXSetCullMode(s32 arg0);
void GXSetNumChans(s32 arg0);
void GXSetNumTexGens(s32 arg0);
M2C_UNK GXSetTexCoordGen2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void GXSetTexCoordScaleManually(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
void GXSetZCompLoc(s32 arg0);
void GXSetZMode(s32 arg0, s32 arg1, s32 arg2);
void GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf(s8 **arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6);
void Invalidate__Q34nw4r3g3d8G3DStateFUl(s32 arg0);
f32 SinFIdx__Q24nw4r4mathFf(f32 farg0, s32 arg1);
s32 __cvt_fp2unsigned(f64 arg0);
s32 _restgpr_23();
s32 _restgpr_27();
s32 _restgpr_29();
s32 _savegpr_23();
s32 _savegpr_27();
s32 _savegpr_29();
void fn_80016964(void);
s32 fn_800169F4();
s32 fn_80016A44();
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016CAC();
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
s8 * fn_80018B1C(s32 arg0);
s8 * fn_80019D38(s8 *arg0, s8 *arg1, s8 *arg2);
void fn_80019D5C(s8 *arg0);
s8 * fn_80019D70(M2C_UNK **arg0);
void fn_80019D94(M2C_UNK **arg0, s32 arg1);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001A940(s8 *arg0, u8 arg1);
M2C_UNK fn_8001B8B4(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s32 fn_8002AFB4(s32 arg0, s32 arg1);
void fn_80030E80(s32 *arg0, s32 *arg1);
s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2);
void fn_8004000C(s32 arg0);
s32 fn_80040068(s32 arg0, s32 arg1);
void fn_800401B8(s8 *arg0);
f32 fn_80040740(s8 *arg0, f32 *arg1, s8 *arg2);
void fn_80040B74(void);
void fn_80040D08(s8 *arg0, f32 *arg1);
void fn_80040E60(s8 *arg0, f32 *arg1, s32 arg2);
void fn_80041224(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
f32 fn_80041264(s32 arg0, s32 arg1);
M2C_UNK fn_80041290(f32 farg0);
M2C_UNK fn_800412A0(f32 farg0);
void fn_800412B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800412BC(void);
void fn_800412C0(f32 farg0, f32 farg1);
void fn_800412D0(s16 arg0, s16 arg1);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
void fn_8017347C(s32 arg0, f32 *arg1);
s32 fn_80173580();
void fn_80173750(s32 arg0);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2);
void fn_8017C2CC(void);
M2C_UNK fn_8018CB4C(s32 arg0);
void fn_802E1634(s32 arg0, s32 arg1, s32 *arg2);
void fn_802E4460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E44E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4538(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void fn_802E4590(s32 arg0, u32 *arg1);
void fn_802E4750(s32 arg0, s32 arg1, s32 arg2);
void fn_802E4808(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_802E48CC(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802E4A28(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8003FF00
asm s8 * fn_8003FF00(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    mr r28, r4
    mr r27, r5
    li r3, 0x12
    lis r4, fn_80040068@ha
    addi r4, r4, fn_80040068@l
    lwz r5, lbl_8049D658
    bl fn_80177280
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_8003FF48
    li r3, 0x0
    b lbl_8003FFF4
lbl_8003FF48:
    li r4, 0x0
    li r5, 0x3c
    bl memset
    mr r3, r29
    bl fn_80018B1C
    mr r31, r3
    stw r28, 0x18(r3)
    stw r30, 0x10(r3)
    bl fn_80019D5C
    li r28, 0x0
    b lbl_8003FFBC
lbl_8003FF74:
    lwz r3, lbl_8049D698
    bl fn_80019D70
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8003FFB8
    addi r3, r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl memset
    mr r3, r30
    mr r4, r30
    mr r5, r31
    bl fn_80019D38
    stw r31, 0xc(r30)
    addi r3, r30, 0x1c
    li r4, -0x1
    bl fn_8001A940
lbl_8003FFB8:
    addi r28, r28, 0x1
lbl_8003FFBC:
    cmpw r28, r27
    blt lbl_8003FF74
    li r3, 0xd
    lwz r4, 0x10(r31)
    mr r5, r31
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_8003FFF0
    cmpwi r29, 0x0
    beq lbl_8003FFF0
    mr r3, r29
    bl fn_8004000C
lbl_8003FFF0:
    mr r3, r31
lbl_8003FFF4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8004000C
asm void fn_8004000C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80018B1C
    lwz r31, 0x8(r3)
    b lbl_8004003C
lbl_80040030:
    lwz r3, lbl_8049D698
    bl fn_80019D94
    lwz r31, 0x8(r31)
lbl_8004003C:
    lwz r4, 0x0(r31)
    cmplwi r4, 0x1
    bne lbl_80040030
    mr r3, r30
    bl fn_8017776C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80040068
asm s32 fn_80040068(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80018B1C
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_8004012C
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_800400B0
    li r0, 0xf1
    stw r0, 0x14(r3)
    li r3, 0x1
    b lbl_800401A0
lbl_800400B0:
    rlwinm r0, r30, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80040124
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_80040124
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_800400E8
    cmpwi r0, 0xff
    beq lbl_80040110
    b lbl_80040124
lbl_800400E8:
    bne cr1, lbl_80040124
    lwz r0, 0x18(r3)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_80040124
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800401A0
lbl_80040110:
    li r0, 0xf1
    stw r0, 0x14(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_800401A0
lbl_80040124:
    li r3, 0x0
    b lbl_800401A0
lbl_8004012C:
    li r3, 0x0
    addi r4, r31, 0x18
    lwz r5, 0x14(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80040150
    cmpwi r3, 0x2
    beq lbl_8004015C
    b lbl_80040164
lbl_80040150:
    li r0, 0xf1
    stw r0, 0x14(r31)
    b lbl_80040164
lbl_8004015C:
    li r0, 0xf1
    stw r0, 0x14(r31)
lbl_80040164:
    lwz r3, 0x14(r31)
    subi r0, r3, 0xf0
    cmplwi r0, 0x1
    ble lbl_80040188
    cmpwi r3, 0x0
    bne lbl_8004019C
    li r0, 0x1
    stw r0, 0x14(r31)
    b lbl_8004019C
lbl_80040188:
    lwz r3, 0x10(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r29
    bl fn_8004000C
lbl_8004019C:
    li r3, 0x0
lbl_800401A0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800401B8
asm void fn_800401B8(s8 *arg0) {
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    opword 0xF3E101A8
    stfd f30, 0x190(r1)
    opword 0xF3C10198
    stfd f29, 0x180(r1)
    opword 0xF3A10188
    stfd f28, 0x170(r1)
    opword 0xF3810178
    stfd f27, 0x160(r1)
    opword 0xF3610168
    addi r11, r1, 0x160
    bl _savegpr_27
    mr r31, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r27, r3
    lwz r3, 0x80(r3)
    bl fn_8018CB4C
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_8002AFB4
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_800406EC
    lwz r3, 0x18(r31)
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_800406EC
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_80040254
    addi r3, r1, 0x68
    addi r4, r31, 0x20
    bl fn_80019DAC
    b lbl_8004028C
lbl_80040254:
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80040270
    addi r3, r1, 0x68
    lwz r4, 0x20(r31)
    bl fn_80019DAC
    b lbl_8004028C
lbl_80040270:
    rlwinm r0, r3, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8004028C
    addi r3, r1, 0x68
    li r4, 0x3
    lwz r5, 0x20(r31)
    bl fn_80173580
lbl_8004028C:
    addi r3, r1, 0x78
    mr r4, r27
    bl fn_8017B004
    addi r3, r1, 0xe8
    bl GXGetProjectionv
    addi r3, r1, 0xa8
    bl GXGetViewportv
    addi r3, r31, 0x2c
    addi r4, r1, 0x68
    li r5, 0x0
    bl fn_8017B144
    addi r3, r1, 0x14
    addi r4, r1, 0x24
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x18
    li r8, 0x0
    li r9, 0x0
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    lfs f1, 0x2c(r31)
    lfs f0, 0x24(r1)
    fcmpo cr0, f1, f0
    blt lbl_800406EC
    lfs f0, 0x20(r1)
    fcmpo cr0, f1, f0
    ble lbl_800402F8
    b lbl_800406EC
lbl_800402F8:
    lfs f1, 0x30(r31)
    lfs f0, 0x1c(r1)
    fcmpo cr0, f1, f0
    blt lbl_800406EC
    lfs f0, 0x18(r1)
    fcmpo cr0, f1, f0
    ble lbl_80040318
    b lbl_800406EC
lbl_80040318:
    addi r3, r1, 0x38
    addi r4, r27, 0x4
    li r5, 0x0
    bl fn_8017B144
    addi r3, r1, 0x2c
    addi r4, r27, 0x1c
    li r5, 0x0
    bl fn_8017B144
    addi r3, r1, 0x50
    addi r4, r1, 0x2c
    addi r5, r1, 0x38
    bl fn_8001B8B8
    addi r3, r1, 0x44
    addi r4, r1, 0x2c
    addi r5, r1, 0x68
    bl fn_8001B8B8
    addi r3, r1, 0x50
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_8017347C
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    bl fn_8001B8B4
    lfs f0, lbl_8049E990
    fcmpo cr0, f1, f0
    blt lbl_800406EC
    mr r3, r31
    addi r4, r1, 0x68
    mr r5, r27
    bl fn_80040740
    fmr f31, f1
    lfs f3, lbl_8049E990
    fcmpo cr0, f1, f3
    opword 0x4C401382
    beq lbl_800406EC
    lfs f1, 0x24(r1)
    lfs f0, 0x20(r1)
    fadds f0, f1, f0
    la r3, lbl_8049E990
    lfs f2, 0x4(r3)
    fmuls f30, f0, f2
    lfs f1, 0x1c(r1)
    lfs f0, 0x18(r1)
    fadds f0, f1, f0
    fmuls f29, f0, f2
    lfs f0, 0x2c(r31)
    fsubs f0, f0, f30
    fcmpo cr0, f0, f3
    bge lbl_800403E8
    fneg f0, f0
lbl_800403E8:
    lfs f1, 0x30(r31)
    fsubs f2, f1, f29
    lfs f1, lbl_8049E990
    fcmpo cr0, f2, f1
    bge lbl_80040400
    fneg f2, f2
lbl_80040400:
    la r3, lbl_8049E990
    lfs f1, 0x8(r3)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f2
    ble lbl_80040428
    lfs f2, 0xc(r3)
    lfs f1, 0x24(r1)
    fadds f1, f2, f1
    fsubs f4, f30, f1
    b lbl_8004043C
lbl_80040428:
    fmr f0, f2
    lfs f2, 0xc(r3)
    lfs f1, 0x1c(r1)
    fadds f1, f2, f1
    fsubs f4, f29, f1
lbl_8004043C:
    lfs f2, 0x2c(r31)
    la r3, lbl_8049E990
    lfs f3, 0xc(r3)
    lfs f1, 0x24(r1)
    fadds f1, f3, f1
    fcmpo cr0, f2, f1
    blt lbl_8004048C
    lfs f1, 0x20(r1)
    fsubs f1, f1, f3
    fcmpo cr0, f2, f1
    bgt lbl_8004048C
    lfs f2, 0x30(r31)
    lfs f1, 0x1c(r1)
    fadds f1, f3, f1
    fcmpo cr0, f2, f1
    blt lbl_8004048C
    lfs f1, 0x18(r1)
    fsubs f1, f1, f3
    fcmpo cr0, f2, f1
    ble lbl_800404A8
lbl_8004048C:
    la r3, lbl_8049E990
    fsubs f2, f0, f4
    lfs f1, 0xc(r3)
    fdivs f2, f2, f1
    lfs f1, 0x10(r3)
    fsubs f28, f1, f2
    b lbl_800404AC
lbl_800404A8:
    fdivs f28, f0, f4
lbl_800404AC:
    la r3, lbl_8049E990
    lfs f1, 0xc(r3)
    fadds f1, f1, f4
    fdivs f1, f0, f1
    lfs f0, 0x10(r3)
    fsubs f0, f0, f1
    lfs f27, 0x14(r3)
    fcmpo cr0, f0, f27
    bge lbl_800404D4
    b lbl_800404D8
lbl_800404D4:
    fmr f27, f0
lbl_800404D8:
    stfs f30, 0x50(r1)
    stfs f29, 0x54(r1)
    lfs f1, lbl_8049E990
    stfs f1, 0x58(r1)
    lfs f0, 0x2c(r31)
    stfs f0, 0x44(r1)
    lfs f0, 0x30(r31)
    stfs f0, 0x48(r1)
    stfs f1, 0x4c(r1)
    addi r3, r1, 0x50
    mr r4, r3
    addi r5, r1, 0x44
    la r29, lbl_8049E990
    lfs f1, 0x18(r29)
    bl fn_80041224
    li r3, 0x0
    bl fn_800169F4
    bl fn_80040B74
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
    li r6, 0x3
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    lwz r27, 0x8(r31)
    lwz r28, 0x0(r27)
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    addi r5, r1, 0x44
    lfs f1, 0x18(r28)
    bl fn_80041224
    lwz r3, 0x10(r28)
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    addi r3, r1, 0x28
    addi r4, r28, 0x1c
    bl fn_80030E80
    lbz r0, 0x2b(r1)
    lfd f1, lbl_8049E980
    stw r0, 0x12c(r1)
    lis r30, 0x4330
    stw r30, 0x128(r1)
    lfd f0, 0x128(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f27
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x130(r1)
    lwz r0, 0x134(r1)
    stb r0, 0x2b(r1)
    lwz r0, 0x28(r1)
    stw r0, 0xc(r1)
    li r3, 0x1
    addi r4, r1, 0xc
    bl fn_802E4590
    lfs f0, 0x2c(r31)
    fsubs f2, f0, f30
    lfs f0, 0x30(r31)
    fsubs f1, f0, f29
    bl fn_80041264
    lfs f0, 0x1c(r29)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x138(r1)
    lwz r5, 0x13c(r1)
    mr r3, r28
    addi r4, r1, 0x5c
    bl fn_80040E60
    lwz r31, 0x8(r27)
    lfd f29, lbl_8049E980
    b lbl_800406CC
lbl_8004063C:
    addi r3, r1, 0x5c
    addi r4, r1, 0x50
    addi r5, r1, 0x44
    lfs f1, 0x18(r29)
    bl fn_80041224
    lwz r3, 0x10(r29)
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    addi r3, r1, 0x28
    addi r4, r29, 0x1c
    bl fn_80030E80
    lbz r0, 0x2b(r1)
    stw r0, 0x13c(r1)
    stw r30, 0x138(r1)
    lfd f0, 0x138(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f28
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x130(r1)
    lwz r0, 0x134(r1)
    stb r0, 0x2b(r1)
    lwz r0, 0x28(r1)
    stw r0, 0x8(r1)
    li r3, 0x1
    addi r4, r1, 0x8
    bl fn_802E4590
    mr r3, r29
    addi r4, r1, 0x5c
    bl fn_80040D08
    lwz r31, 0x8(r31)
lbl_800406CC:
    lwz r29, 0x0(r31)
    cmplwi r29, 0x1
    bne lbl_8004063C
    li r3, 0x0
    bl fn_80016A44
    bl fn_8017C2CC
    li r3, 0x0
    bl fn_80016A94
lbl_800406EC:
    li r0, 0x1a8
    opword 0x13E1000C
    lfd f31, 0x1a0(r1)
    li r0, 0x198
    opword 0x13C1000C
    lfd f30, 0x190(r1)
    li r0, 0x188
    opword 0x13A1000C
    lfd f29, 0x180(r1)
    li r0, 0x178
    opword 0x1381000C
    lfd f28, 0x170(r1)
    li r0, 0x168
    opword 0x1361000C
    lfd f27, 0x160(r1)
    addi r11, r1, 0x160
    bl _restgpr_27
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

// asm_to_cpp: fn_80040740
asm f32 fn_80040740(s8 *arg0, f32 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    stfd f30, 0x160(r1)
    opword 0xF3C10168
    stfd f29, 0x150(r1)
    opword 0xF3A10158
    stfd f28, 0x140(r1)
    opword 0xF3810148
    stfd f27, 0x130(r1)
    opword 0xF3610138
    addi r11, r1, 0x130
    bl _savegpr_23
    mr r26, r3
    mr r24, r4
    mr r23, r5
    lis r0, 0x4330
    stw r0, 0xe0(r1)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    la r25, lbl_8049E990
    lfs f29, 0x10(r25)
    lwz r3, 0x80(r5)
    bl fn_8018CB4C
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    lfs f0, 0x2c(r26)
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r29, 0xf4(r1)
    lfs f0, 0x30(r26)
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r28, 0xfc(r1)
    lfs f1, 0x24(r25)
    lfs f0, 0x34(r26)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    mr r31, r3
    addi r3, r1, 0xb0
    mr r4, r23
    bl fn_8017B004
    lfs f0, lbl_8049E990
    stfs f0, 0x2c(r1)
    stfs f0, 0x24(r1)
    lfs f0, 0x38(r26)
    stfs f0, 0x28(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0xb0
    mr r5, r3
    bl fn_80018B04
    addi r3, r1, 0x24
    mr r4, r3
    mr r5, r24
    bl fn_80018B00
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    addi r3, r1, 0xc
    addi r4, r1, 0x1c
    addi r5, r1, 0x14
    addi r6, r1, 0x18
    addi r7, r1, 0x10
    li r8, 0x0
    li r9, 0x0
    bl GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
    addi r3, r1, 0x24
    mr r4, r3
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x24(r1)
    lfs f0, 0x2c(r26)
    fsubs f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0x28(r1)
    lfs f0, 0x30(r26)
    fsubs f0, f1, f0
    stfs f0, 0x28(r1)
    lfs f0, lbl_8049E990
    stfs f0, 0x2c(r1)
    addi r3, r1, 0x24
    bl fn_8001B8BC
    fmr f30, f1
    clrlwi r3, r29, 16
    clrlwi r4, r28, 16
    addi r5, r1, 0x20
    bl fn_802E1634
    lwz r0, 0x20(r1)
    cmplw r0, r31
    bge lbl_800408D0
    subf r0, r31, r0
    cmplwi r0, 0x3e8
    ble lbl_800408D0
    lfs f0, 0x28(r25)
    fsubs f29, f29, f0
lbl_800408D0:
    la r3, lbl_8049E990
    lfs f0, 0x4(r3)
    fmuls f28, f30, f0
    li r30, 0x0
    li r27, 0x0
    lfd f31, lbl_8049E988
    extsh r25, r29
    extsh r26, r28
    lfs f27, 0x2c(r3)
lbl_800408F4:
    addi r24, r27, 0x2000
    xoris r0, r24, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    bl fn_800412A0
    fmuls f0, f28, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r0, 0xfc(r1)
    add r0, r25, r0
    extsh r23, r0
    xoris r0, r24, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    bl fn_80041290
    fmuls f0, f28, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r0, 0xf4(r1)
    add r0, r26, r0
    extsh r4, r0
    xoris r0, r23, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    lfs f0, 0x1c(r1)
    fcmpo cr0, f1, f0
    blt lbl_800409B8
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    lfs f0, 0x18(r1)
    fcmpo cr0, f1, f0
    bgt lbl_800409B8
    xoris r0, r4, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    lfs f0, 0x14(r1)
    fcmpo cr0, f1, f0
    blt lbl_800409B8
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    lfs f0, 0x10(r1)
    fcmpo cr0, f1, f0
    ble lbl_800409C0
lbl_800409B8:
    fsubs f29, f29, f27
    b lbl_800409EC
lbl_800409C0:
    clrlwi r3, r23, 16
    clrlwi r4, r4, 16
    addi r5, r1, 0x20
    bl fn_802E1634
    lwz r0, 0x20(r1)
    cmplw r0, r31
    bge lbl_800409EC
    subf r0, r31, r0
    cmplwi r0, 0x3e8
    ble lbl_800409EC
    fsubs f29, f29, f27
lbl_800409EC:
    addi r30, r30, 0x1
    addi r27, r27, 0x4000
    cmpwi r30, 0x4
    blt lbl_800408F4
    li r30, 0x0
    li r27, 0x0
    lfd f31, lbl_8049E988
    extsh r29, r29
    extsh r28, r28
    la r3, lbl_8049E990
    lfs f28, 0x2c(r3)
lbl_80040A18:
    xoris r0, r27, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    bl fn_800412A0
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r0, 0xfc(r1)
    add r0, r29, r0
    extsh r24, r0
    xoris r0, r27, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    bl fn_80041290
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r0, 0xf4(r1)
    add r0, r28, r0
    extsh r4, r0
    xoris r0, r24, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    lfs f0, 0x1c(r1)
    fcmpo cr0, f1, f0
    blt lbl_80040AD8
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    lfs f0, 0x18(r1)
    fcmpo cr0, f1, f0
    bgt lbl_80040AD8
    xoris r0, r4, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f31
    lfs f0, 0x14(r1)
    fcmpo cr0, f1, f0
    blt lbl_80040AD8
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f31
    lfs f0, 0x10(r1)
    fcmpo cr0, f1, f0
    ble lbl_80040AE0
lbl_80040AD8:
    fsubs f29, f29, f28
    b lbl_80040B0C
lbl_80040AE0:
    clrlwi r3, r24, 16
    clrlwi r4, r4, 16
    addi r5, r1, 0x20
    bl fn_802E1634
    lwz r0, 0x20(r1)
    cmplw r0, r31
    bge lbl_80040B0C
    subf r0, r31, r0
    cmplwi r0, 0x3e8
    ble lbl_80040B0C
    fsubs f29, f29, f28
lbl_80040B0C:
    addi r30, r30, 0x1
    addi r27, r27, 0x2000
    cmpwi r30, 0x8
    blt lbl_80040A18
    fmr f1, f29
    li r0, 0x178
    opword 0x13E1000C
    lfd f31, 0x170(r1)
    li r0, 0x168
    opword 0x13C1000C
    lfd f30, 0x160(r1)
    li r0, 0x158
    opword 0x13A1000C
    lfd f29, 0x150(r1)
    li r0, 0x148
    opword 0x1381000C
    lfd f28, 0x140(r1)
    li r0, 0x138
    opword 0x1361000C
    lfd f27, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_23
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

// asm_to_cpp: fn_80040B74
asm void fn_80040B74(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
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
    li r3, 0x0
    li r4, 0x7
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetBlendMode
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_800412B0
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
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x2
    li r6, 0x8
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x1
    li r6, 0x4
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
    li r3, 0x1
    bl GXSetZCompLoc
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x0
    bl GXSetAlphaUpdate
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    addi r3, r1, 0x8
    bl fn_80173750
    addi r3, r1, 0x8
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    bl fn_80016964
    li r3, 0x0
    bl GXSetCullMode
    li r3, -0x1
    bl fn_80016A94
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

void fn_80040D08(s8 *arg0, f32 *arg1) {
    s16 temp_r31;

    temp_r31 = (s16) ((s16) ((s16) M2C_FIELD(arg0, s16 *, 0x14) / 2));
    GXBegin((s32) (0x98), (s32) (0), (s32) (4));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) - temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) - temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0), M2C_FIELD(&lbl_8049E990, f32 *, 0));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) + temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) - temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0x10), M2C_FIELD(&lbl_8049E990, f32 *, 0));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) - temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) + temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0), M2C_FIELD(&lbl_8049E990, f32 *, 0x10));
    fn_800412D0((s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 0) + temp_r31)), (s16) ((s16) ((s32) M2C_FIELD(arg1, f32 *, 4) + temp_r31)));
    fn_800412C0(M2C_FIELD(&lbl_8049E990, f32 *, 0x10), M2C_FIELD(&lbl_8049E990, f32 *, 0x10));
    fn_800412BC();
}

// asm_to_cpp: fn_80040E60
asm void fn_80040E60(s8 *arg0, f32 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    addi r11, r1, 0xb0
    bl _savegpr_27
    mr r28, r4
    mr r29, r5
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lha r0, 0x14(r3)
    lfd f1, lbl_8049E988
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r30, lbl_8049E990
    lfs f0, 0x4(r30)
    fmuls f31, f1, f0
    li r3, 0x98
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfd f1, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x34(r30)
    fmuls f1, f0, f1
    bl fn_800412A0
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r27, 0x1c(r1)
    lfd f1, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x34(r30)
    fmuls f1, f0, f1
    bl fn_80041290
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    lfs f0, 0x0(r28)
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    add r0, r0, r27
    extsh r3, r0
    lfs f0, 0x4(r28)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    add r0, r0, r4
    extsh r4, r0
    bl fn_800412D0
    lfs f1, lbl_8049E990
    fmr f2, f1
    bl fn_800412C0
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f2, 0x34(r30)
    fmuls f1, f2, f0
    li r31, 0x4000
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_800412A0
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x38(r1)
    lwz r27, 0x3c(r1)
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f2, 0x34(r30)
    fmuls f1, f2, f0
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    fadds f1, f1, f0
    bl fn_80041290
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    lfs f0, 0x0(r28)
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    add r0, r0, r27
    extsh r3, r0
    lfs f0, 0x4(r28)
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r0, 0x54(r1)
    add r0, r0, r4
    extsh r4, r0
    bl fn_800412D0
    lfs f1, 0x10(r30)
    lfs f2, lbl_8049E990
    bl fn_800412C0
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f1, 0x34(r30)
    fmuls f2, f1, f0
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f1, f1, f0
    lfs f0, 0x38(r30)
    fmuls f0, f0, f1
    fadds f1, f2, f0
    bl fn_800412A0
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r27, 0x5c(r1)
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f1, 0x34(r30)
    fmuls f2, f1, f0
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f1, f1, f0
    lfs f0, 0x38(r30)
    fmuls f0, f0, f1
    fadds f1, f2, f0
    bl fn_80041290
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x60(r1)
    lwz r4, 0x64(r1)
    lfs f0, 0x0(r28)
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r0, 0x6c(r1)
    add r0, r0, r27
    extsh r3, r0
    lfs f0, 0x4(r28)
    fctiwz f0, f0
    stfd f0, 0x70(r1)
    lwz r0, 0x74(r1)
    add r0, r0, r4
    extsh r4, r0
    bl fn_800412D0
    lfs f1, lbl_8049E990
    lfs f2, 0x10(r30)
    bl fn_800412C0
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f1, 0x34(r30)
    fmuls f2, f1, f0
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f1, f1, f0
    lfs f0, 0x18(r30)
    fmuls f0, f0, f1
    fadds f1, f2, f0
    bl fn_800412A0
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r27, 0x7c(r1)
    lfd f3, lbl_8049E988
    xoris r0, r29, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f3
    lfs f1, 0x34(r30)
    fmuls f2, f1, f0
    xoris r0, r31, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f3
    fmuls f1, f1, f0
    lfs f0, 0x18(r30)
    fmuls f0, f0, f1
    fadds f1, f2, f0
    bl fn_80041290
    fmuls f0, f31, f1
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r4, 0x84(r1)
    lfs f0, 0x0(r28)
    fctiwz f0, f0
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
    add r0, r0, r27
    extsh r3, r0
    lfs f0, 0x4(r28)
    fctiwz f0, f0
    stfd f0, 0x90(r1)
    lwz r0, 0x94(r1)
    add r0, r0, r4
    extsh r4, r0
    bl fn_800412D0
    lfs f1, 0x10(r30)
    fmr f2, f1
    bl fn_800412C0
    bl fn_800412BC
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_80041224
asm void fn_80041224(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0) {
    nofralloc
    la r6, lbl_8049E990
    lfs f0, 0x10(r6)
    fsubs f3, f0, f1
    lfs f0, 0x0(r4)
    fmuls f2, f1, f0
    lfs f0, 0x0(r5)
    fmuls f0, f3, f0
    fadds f0, f2, f0
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    fmuls f1, f1, f0
    lfs f0, 0x4(r5)
    fmuls f0, f3, f0
    fadds f0, f1, f0
    stfs f0, 0x4(r3)
    blr
}

// asm_to_cpp: fn_80041264
asm f32 fn_80041264(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl Atan2FIdx__Q24nw4r4mathFff
    la r3, lbl_8049E990
    lfs f0, 0x20(r3)
    fmuls f1, f0, f1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80041290
asm M2C_UNK fn_80041290(f32 farg0) {
    nofralloc
    la r3, lbl_8049E990
    lfs f0, 0x30(r3)
    fmuls f1, f0, f1
    b SinFIdx__Q24nw4r4mathFf
}

// asm_to_cpp: fn_800412A0
asm M2C_UNK fn_800412A0(f32 farg0) {
    nofralloc
    la r3, lbl_8049E990
    lfs f0, 0x30(r3)
    fmuls f1, f0, f1
    b CosFIdx__Q24nw4r4mathFf
}

void fn_800412B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2((s32) (arg0), (s32) (arg1), (s32) (arg2), (s32) (arg3), (s32) (0), (s32) (0x7D));
}

void fn_800412BC(void) {
}

void fn_800412C0(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void fn_800412D0(s16 arg0, s16 arg1) {
    *(volatile s16 *)0xCC008000 = arg0;
    *(volatile s16 *)0xCC008000 = arg1;
}

} // extern "C"
