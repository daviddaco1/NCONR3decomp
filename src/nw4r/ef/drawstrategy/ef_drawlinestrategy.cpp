#include <nw4r/ef.h>
#include <nw4r/math.h>

#include <revolution/GX.h>

#include <algorithm>
#include <limits>

namespace nw4r {
namespace ef {

static void DrawPolygon(const nw4r::math::VEC3& rP0,
                        const nw4r::math::VEC3& rP1, bool texCoord);

DrawLineStrategy::DrawLineStrategy() {}

void DrawLineStrategy::Draw(const DrawInfo& rInfo, ParticleManager* pManager) {
    InitGraphics(rInfo, pManager);

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    math::MTX34 glbMtx;
    math::MTX34 posMtx;

    pManager->CalcGlobalMtx(&glbMtx);
    math::MTX34Mult(&posMtx, rInfo.GetViewMtx(), &glbMtx);
    GXLoadPosMtxImm(posMtx, GX_PNMTX0);

    GetFirstDrawParticleFunc pGetFirstFunc = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    u8 prevLineWidth = 0;
    bool first = true;

    for (Particle* pParticle = pGetFirstFunc(pManager); pParticle != NULL;
         pParticle = pGetNextFunc(pManager, pParticle)) {

        f32 sx = pParticle->Draw_GetSizeX();
        if (sx < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        f32 sy = pParticle->Draw_GetSizeY();
        if (sy < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        math::VEC3 p0 = pParticle->mParameter.mPosition;

        math::VEC3 p1;
        pParticle->GetMoveDir(&p1);

        if (!Normalize(&p1)) {
            continue;
        }

        p1 *= sy;
        math::VEC3Sub(&p1, &p0, &p1);

        u8 lineWidth = static_cast<u8>(6.0f * std::min(42.5f, sx));
        if (lineWidth == 0) {
            continue;
        }

        if (prevLineWidth != lineWidth) {
            prevLineWidth = lineWidth;
            GXSetLineWidth(lineWidth, 5);

            SetupGP(pParticle, rSetting, rInfo, first, true);
        } else {
            SetupGP(pParticle, rSetting, rInfo, first, false);
        }

        first = false;
        DrawPolygon(p0, p1, mNumTexmap > 0);
    }
}

void DrawLineStrategy::InitGraphics(const DrawInfo& rInfo,
                                    ParticleManager* pManager) {

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    InitTexture(rSetting);
    InitTev(rSetting, rInfo);
    InitColor(pManager, rSetting, rInfo);

    GXEnableTexOffsets(GX_TEXCOORD0, TRUE, TRUE);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);

    if (mNumTexmap > 0) {
        GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    }

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);

    GXSetCurrentMtx(GX_PNMTX0);
}

static void DrawPolygon(const nw4r::math::VEC3& rP0,
                        const nw4r::math::VEC3& rP1, bool texCoord) {

    GXBegin(GX_LINES, GX_VTXFMT0, 2);
    {
        GXPosition(rP0);
        if (texCoord) {
            GXTexCoord2f32(0.0f, 0.0f);
        }

        GXPosition(rP1);
        if (texCoord) {
            GXTexCoord2f32(0.0f, 1.0f);
        }
    }
    GXEnd();
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C4A8;
extern "C" float lbl_804A1B20;
extern "C" float lbl_804A1B24;
extern "C" float lbl_804A1B28;
extern "C" float lbl_804A1B2C;
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void _restgpr_22();
extern "C" void _savegpr_22();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B9B90();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C5E04();
extern "C" void fn_8030D7E0();

// asm_to_cpp: fn_801C5E04
extern "C" asm void fn_801C5E04() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    stfd f29, 0xf0(r1)
    opword 0xF3A100F8
    addi r11, r1, 0xf0
    bl _savegpr_22
    lwz r7, 0x24(r5)
    mr r24, r4
    mr r25, r5
    mr r23, r3
    mr r4, r25
    mr r6, r24
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r23)
    cmpwi r0, 0x0
    beq lbl_801C5E88
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C5E88:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    lbz r5, 0xd0(r23)
    mr r3, r25
    lwz r6, 0x24(r25)
    addi r4, r1, 0x88
    neg r0, r5
    or r0, r0, r5
    addi r30, r6, 0x9c
    srwi r31, r0, 31
    bl fn_801B7FB8
    lfs f1, lbl_804A1B20
    lfs f0, 0x88(r24)
    lwz r22, 0x0(r24)
    lwz r12, 0x4(r24)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r24)
    lwz r10, 0xc(r24)
    lwz r9, 0x10(r24)
    lwz r8, 0x14(r24)
    lwz r7, 0x18(r24)
    lwz r6, 0x1c(r24)
    lwz r5, 0x20(r24)
    lwz r4, 0x24(r24)
    lwz r3, 0x28(r24)
    lwz r0, 0x2c(r24)
    stw r22, 0x58(r1)
    stw r12, 0x5c(r1)
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r8, 0x6c(r1)
    stw r7, 0x70(r1)
    stw r6, 0x74(r1)
    stw r5, 0x78(r1)
    stw r4, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r0, 0x84(r1)
    beq lbl_801C6060
    addi r3, r1, 0x3c
    bl GXGetProjectionv
    lfs f0, 0x3c(r1)
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r0, 0xbc(r1)
    cmpwi r0, 0x1
    beq lbl_801C6050
    bge lbl_801C6060
    cmpwi r0, 0x0
    bge lbl_801C5F84
    b lbl_801C6060
lbl_801C5F84:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x18
    bl fn_8030D7E0
    addi r3, r1, 0x18
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C603C
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A1B20
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C5FFC
    lfs f3, 0x88(r24)
    lfs f4, 0x18(r1)
    lfs f2, 0x1c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x84(r1)
    fmuls f3, f2, f3
    lfs f4, 0x64(r1)
    lfs f2, 0x74(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x64(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C5FFC:
    lfs f3, 0x88(r24)
    lfs f4, 0x18(r1)
    lfs f2, 0x1c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x84(r1)
    fmuls f3, f2, f3
    lfs f4, 0x64(r1)
    lfs f2, 0x74(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x64(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C603C:
    lfs f1, 0x84(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
    b lbl_801C6060
lbl_801C6050:
    lfs f1, 0x84(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
lbl_801C6060:
    addi r3, r1, 0x58
    addi r4, r1, 0x88
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x58
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r12, 0x0(r23)
    mr r3, r23
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r22, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r22
    mr r29, r3
    mr r3, r25
    li r28, 0x0
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f30, lbl_804A1B28
    mr r26, r3
    lfs f29, lbl_804A1B24
    lis r22, 0xcc01
    b lbl_801C6370
lbl_801C60E8:
    lfs f1, 0x30(r26)
    lfs f0, 0x38(r26)
    lwz r3, 0xc8(r26)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f0, f1, f0
    fcmpo cr0, f0, f29
    stfs f0, 0x8(r1)
    blt lbl_801C6358
    lwz r4, 0xc8(r26)
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C6140
    bge lbl_801C6134
    cmpwi r0, 0x2000
    beq lbl_801C6150
    b lbl_801C6170
lbl_801C6134:
    cmpwi r0, 0x6000
    beq lbl_801C6160
    b lbl_801C6170
lbl_801C6140:
    lfs f1, 0x34(r26)
    lfs f0, 0x38(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6150:
    lfs f1, 0x30(r26)
    lfs f0, 0x3c(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6160:
    lfs f1, 0x30(r26)
    lfs f0, 0x38(r26)
    fmuls f1, f1, f0
    b lbl_801C617C
lbl_801C6170:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f1, f1, f0
lbl_801C617C:
    lfs f0, 0x5c(r4)
    fmuls f31, f1, f0
    fcmpo cr0, f31, f29
    blt lbl_801C6358
    opword 0xE05A00AC
    opword 0xE03A00B8
    lwz r4, 0xac(r26)
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    lwz r3, 0xb0(r26)
    opword 0xF001000C
    opword 0x10020828
    lwz r0, 0xb4(r26)
    lfs f1, 0x10(r1)
    opword 0xF0018014
    lfs f2, 0xc(r1)
    lfs f0, 0x14(r1)
    stfs f1, 0x28(r1)
    stfs f0, 0x2c(r1)
    opword 0xE0010028
    stfs f2, 0x24(r1)
    opword 0x10000032
    opword 0xE0218024
    stw r4, 0x30(r1)
    opword 0x1021007A
    stw r3, 0x34(r1)
    opword 0x10210014
    stw r0, 0x38(r1)
    fcmpo cr0, f1, f29
    bge lbl_801C6200
    li r0, 0x0
    b lbl_801C6220
lbl_801C6200:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410024
    li r0, 0x1
    opword 0x10020058
    opword 0xE041802C
    opword 0xF0010024
    opword 0x10020058
    opword 0xF001802C
lbl_801C6220:
    cmpwi r0, 0x0
    beq lbl_801C6358
    opword 0xE0410024
    lfs f1, 0x8(r1)
    opword 0x106207D8
    lfs f0, lbl_8049C4A8
    opword 0xE0810030
    opword 0xE041802C
    fcmpo cr0, f1, f0
    opword 0xF0610024
    opword 0x106207D8
    opword 0xE0010024
    opword 0x10040028
    opword 0xE0818038
    opword 0xF0010024
    opword 0x10041828
    opword 0xF001802C
    bge lbl_801C6270
    addi r3, r1, 0x8
    b lbl_801C6274
lbl_801C6270:
    la r3, lbl_8049C4A8
lbl_801C6274:
    lfs f0, 0x0(r3)
    fmuls f0, f30, f0
    fctiwz f0, f0
    stfd f0, 0xb8(r1)
    lwz r4, 0xbc(r1)
    clrlwi. r3, r4, 24
    beq lbl_801C6358
    clrlwi r0, r28, 24
    cmplw r0, r3
    beq lbl_801C62C8
    mr r28, r4
    li r4, 0x5
    bl GXSetLineWidth
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x1
    bl fn_801BF940
    b lbl_801C62E4
lbl_801C62C8:
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
lbl_801C62E4:
    li r27, 0x0
    li r3, 0xa8
    li r4, 0x0
    li r5, 0x2
    bl GXBegin
    lfs f0, 0x30(r1)
    cmpwi r31, 0x0
    lfs f1, 0x34(r1)
    stfs f0, -0x8000(r22)
    lfs f0, 0x38(r1)
    stfs f1, -0x8000(r22)
    stfs f0, -0x8000(r22)
    beq lbl_801C6328
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
lbl_801C6328:
    lfs f0, 0x24(r1)
    cmpwi r31, 0x0
    lfs f1, 0x28(r1)
    stfs f0, -0x8000(r22)
    lfs f0, 0x2c(r1)
    stfs f1, -0x8000(r22)
    stfs f0, -0x8000(r22)
    beq lbl_801C6358
    lfs f0, lbl_804A1B20
    stfs f0, -0x8000(r22)
    lfs f0, lbl_804A1B2C
    stfs f0, -0x8000(r22)
lbl_801C6358:
    mr r12, r29
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C6370:
    cmpwi r26, 0x0
    bne lbl_801C60E8
    opword 0xE3E10118
    lfd f31, 0x110(r1)
    opword 0xE3C10108
    lfd f30, 0x100(r1)
    opword 0xE3A100F8
    addi r11, r1, 0xf0
    lfd f29, 0xf0(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
