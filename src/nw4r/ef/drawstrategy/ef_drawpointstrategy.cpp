#include <nw4r/ef.h>
#include <nw4r/math.h>

#include <revolution/GX.h>

#include <algorithm>
#include <limits>

namespace nw4r {
namespace ef {

static void DrawPoint(const math::VEC3& rPos, bool texCoord);

DrawPointStrategy::DrawPointStrategy() {}

void DrawPointStrategy::Draw(const DrawInfo& rInfo, ParticleManager* pManager) {
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

    u8 prevPointSize = 0;
    bool first = true;

    for (Particle* pParticle = pGetFirstFunc(pManager); pParticle != NULL;
         pParticle = pGetNextFunc(pManager, pParticle)) {

        f32 sx = pParticle->Draw_GetSizeX();
        if (sx < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        u8 pointSize = static_cast<u8>(6.0f * std::min(42.5f, sx));
        if (pointSize == 0) {
            continue;
        }

        if (prevPointSize != pointSize) {
            prevPointSize = pointSize;
            GXSetPointSize(pointSize, 5);

            SetupGP(pParticle, rSetting, rInfo, first, true);
        } else {
            SetupGP(pParticle, rSetting, rInfo, first, false);
        }

        first = false;
        DrawPoint(pParticle->mParameter.mPosition, mNumTexmap > 0);
    }
}

static void DrawPoint(const math::VEC3& rPos, bool texCoord) {
    GXBegin(GX_POINTS, GX_VTXFMT0, 1);
    {
        GXPosition(rPos);

        if (texCoord) {
            GXTexCoord2f32(0.0f, 0.0f);
        }
    }
    GXEnd();
}

void DrawPointStrategy::InitGraphics(const DrawInfo& rInfo,
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

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C4B0;
extern "C" float lbl_804A1B30;
extern "C" float lbl_804A1B34;
extern "C" float lbl_804A1B38;
extern "C" void _restgpr_22();
extern "C" void _savegpr_22();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B9B90();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C63E4();
extern "C" void fn_8030D7E0();

// asm_to_cpp: fn_801C63E4
extern "C" asm void fn_801C63E4() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    addi r11, r1, 0xd0
    bl _savegpr_22
    lwz r7, 0x24(r5)
    mr r28, r4
    mr r29, r5
    mr r27, r3
    mr r4, r29
    mr r6, r28
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
    lbz r0, 0xd0(r27)
    cmpwi r0, 0x0
    beq lbl_801C6460
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C6460:
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
    lbz r5, 0xd0(r27)
    mr r3, r29
    lwz r6, 0x24(r29)
    addi r4, r1, 0x68
    neg r0, r5
    or r0, r0, r5
    addi r30, r6, 0x9c
    srwi r31, r0, 31
    bl fn_801B7FB8
    lfs f1, lbl_804A1B30
    lfs f0, 0x88(r28)
    lwz r26, 0x0(r28)
    lwz r12, 0x4(r28)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r28)
    lwz r10, 0xc(r28)
    lwz r9, 0x10(r28)
    lwz r8, 0x14(r28)
    lwz r7, 0x18(r28)
    lwz r6, 0x1c(r28)
    lwz r5, 0x20(r28)
    lwz r4, 0x24(r28)
    lwz r3, 0x28(r28)
    lwz r0, 0x2c(r28)
    stw r26, 0x38(r1)
    stw r12, 0x3c(r1)
    stw r11, 0x40(r1)
    stw r10, 0x44(r1)
    stw r9, 0x48(r1)
    stw r8, 0x4c(r1)
    stw r7, 0x50(r1)
    stw r6, 0x54(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_801C6638
    addi r3, r1, 0x18
    bl GXGetProjectionv
    lfs f0, 0x18(r1)
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x1
    beq lbl_801C6628
    bge lbl_801C6638
    cmpwi r0, 0x0
    bge lbl_801C655C
    b lbl_801C6638
lbl_801C655C:
    mr r3, r28
    addi r4, r28, 0x8c
    addi r5, r1, 0xc
    bl fn_8030D7E0
    addi r3, r1, 0xc
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C6614
    lfs f1, 0x14(r1)
    lfs f0, lbl_804A1B30
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C65D4
    lfs f3, 0x88(r28)
    lfs f4, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x64(r1)
    fmuls f3, f2, f3
    lfs f4, 0x44(r1)
    lfs f2, 0x54(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x44(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C65D4:
    lfs f3, 0x88(r28)
    lfs f4, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x64(r1)
    fmuls f3, f2, f3
    lfs f4, 0x44(r1)
    lfs f2, 0x54(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x44(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C6614:
    lfs f1, 0x64(r1)
    lfs f0, 0x88(r28)
    fadds f0, f1, f0
    stfs f0, 0x64(r1)
    b lbl_801C6638
lbl_801C6628:
    lfs f1, 0x64(r1)
    lfs f0, 0x88(r28)
    fadds f0, f1, f0
    stfs f0, 0x64(r1)
lbl_801C6638:
    addi r3, r1, 0x38
    addi r4, r1, 0x68
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x38
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r12, 0x0(r27)
    mr r3, r27
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r27)
    mr r26, r3
    lhz r0, 0x0(r30)
    mr r3, r27
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r26
    mr r25, r3
    mr r3, r29
    li r24, 0x0
    li r23, 0x1
    mtctr r12
    bctrl
    lfs f31, lbl_804A1B38
    mr r22, r3
    lfs f30, lbl_804A1B34
    lis r26, 0xcc01
    b lbl_801C67C8
lbl_801C66C0:
    lfs f1, 0x30(r22)
    lfs f0, 0x38(r22)
    lwz r3, 0xc8(r22)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f1, f1, f0
    fcmpo cr0, f1, f30
    stfs f1, 0x8(r1)
    blt lbl_801C67B0
    lfs f0, lbl_8049C4B0
    fcmpo cr0, f1, f0
    bge lbl_801C66F8
    addi r3, r1, 0x8
    b lbl_801C66FC
lbl_801C66F8:
    la r3, lbl_8049C4B0
lbl_801C66FC:
    lfs f0, 0x0(r3)
    fmuls f0, f31, f0
    fctiwz f0, f0
    stfd f0, 0x98(r1)
    lwz r4, 0x9c(r1)
    clrlwi. r3, r4, 24
    beq lbl_801C67B0
    clrlwi r0, r24, 24
    cmplw r0, r3
    beq lbl_801C6750
    mr r24, r4
    li r4, 0x5
    bl GXSetPointSize
    mr r3, r27
    mr r4, r22
    mr r5, r30
    mr r6, r28
    mr r7, r23
    li r8, 0x1
    bl fn_801BF940
    b lbl_801C676C
lbl_801C6750:
    mr r3, r27
    mr r4, r22
    mr r5, r30
    mr r6, r28
    mr r7, r23
    li r8, 0x0
    bl fn_801BF940
lbl_801C676C:
    li r23, 0x0
    li r3, 0xb8
    li r4, 0x0
    li r5, 0x1
    bl GXBegin
    lfs f2, 0xb4(r22)
    cmpwi r31, 0x0
    lfs f1, 0xb0(r22)
    lfs f0, 0xac(r22)
    stfs f0, -0x8000(r26)
    stfs f1, -0x8000(r26)
    stfs f2, -0x8000(r26)
    beq lbl_801C67B0
    lfs f0, lbl_804A1B30
    stfs f0, -0x8000(r26)
    lfs f0, lbl_804A1B30
    stfs f0, -0x8000(r26)
lbl_801C67B0:
    mr r12, r25
    mr r3, r29
    mr r4, r22
    mtctr r12
    bctrl
    mr r22, r3
lbl_801C67C8:
    cmpwi r22, 0x0
    bne lbl_801C66C0
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    addi r11, r1, 0xd0
    lfd f30, 0xd0(r1)
    bl _restgpr_22
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}
