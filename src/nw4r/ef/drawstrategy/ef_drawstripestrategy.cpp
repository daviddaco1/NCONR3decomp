#include <nw4r/ef.h>
#include <nw4r/math.h>

#include <revolution/GX.h>

namespace nw4r {
namespace ef {

DrawStripeStrategy::DrawStripeStrategy() {}

// The original leaves every call in this function out of line.
#pragma dont_inline on
void DrawStripeStrategy::DrawStripe(StripeContext* pContext,
                                    const math::VEC3& rRight,
                                    const math::VEC3& rLeft) {

    ParticleManager* pManager = pContext->mCommon.mParticleManager;
    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();

    CalcAheadFunc pCalcAheadFunc = GetCalcAheadFunc(pManager);

    int drawOrder = pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER;
    GetFirstDrawParticleFunc pGetFirstFunc =
        GetGetFirstDrawParticleFunc(drawOrder);
    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(drawOrder);

    int num = pManager->mActivityList.GetNumActiveObject();
    f32 pivot = 0.01f * pDesc->pivotX;

    math::VEC3 prevAxis = pContext->mCommon.mEmitterAxisY;

    bool loop = (pDesc->typeOption2 & 7) == EmitterDrawSetting::ASSIST_ST_CROSS;
    bool center =
        (pDesc->typeOption2 & 7) == EmitterDrawSetting::ASSIST_ST_BILLBOARD;

    if (loop || center) {
        num++;
    }

    bool texCoord = mNumTexmap > 0;

    GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, num * 2);

    f32 step = 1.0f / (num - 1);

    int idx;
    int dir;

    switch (pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER) {
    case 0: {
        idx = 0;
        dir = 1;
        break;
    }

    case 1:
    default: {
        idx = num - 1;
        dir = -1;
        break;
    }
    }

    if (center && drawOrder == 0) {
        DispVertex(NULL, pContext, pCalcAheadFunc,
                   &pContext->mCommon.mEmitterCenter, &rRight, &rLeft, &prevAxis,
                   pivot, step * idx, texCoord);
        idx += dir;
    }

    for (Particle* pIt = pGetFirstFunc(pManager); pIt != NULL;
         pIt = pGetNextFunc(pManager, pIt), idx += dir) {

        DispVertex(pIt, pContext, pCalcAheadFunc, &pIt->mParameter.mPosition,
                   &rRight, &rLeft, &prevAxis, pivot, step * idx, texCoord);
    }

    if (loop) {
        Particle* pFirst = pGetFirstFunc(pManager);

        DispVertex(pFirst, pContext, pCalcAheadFunc,
                   &pFirst->mParameter.mPosition, &rRight, &rLeft, &prevAxis,
                   pivot, step * idx, texCoord);
    }

    if (center && drawOrder != 0) {
        DispVertex(NULL, pContext, pCalcAheadFunc,
                   &pContext->mCommon.mEmitterCenter, &rRight, &rLeft, &prevAxis,
                   pivot, step * idx, texCoord);
    }

    EndStripe();
}
#pragma dont_inline reset

// Builds the particle's stripe basis and updates its previous axis.
inline math::MTX34
DrawStripeStrategy::CalcDirMtx(Particle* pParticle, StripeContext* pContext,
                               const math::VEC3* pDir, const math::VEC3* pPos,
                               math::VEC3* pPrevAxis) {
    math::VEC3 axisX;
    math::VEC3 axisZ;

    math::VEC3Cross(&axisX, pDir, &pParticle->mPrevAxis);

    if (!Normalize(&axisX)) {
        axisX = pContext->mEmitterAxisX;
    }

    math::VEC3Cross(&axisZ, &axisX, pDir);
    Normalize(&axisZ);

    pParticle->mPrevAxis = axisZ;
    *pPrevAxis = axisZ;

    // clang-format off
    return math::MTX34(
        axisX.x, pDir->x, axisZ.x, pPos->x,
        axisX.y, pDir->y, axisZ.y, pPos->y,
        axisX.z, pDir->z, axisZ.z, pPos->z);
    // clang-format on
}

// Scale and Y rotation of the stripe's cross-section around its pivot.
inline math::MTX34 DrawStripeStrategy::CalcLocMtx(Particle* pParticle,
                                                  f32 pivot) {
    math::VEC3 rot;
    pParticle->Draw_GetRotate(&rot);

    f32 sx = pParticle->Draw_GetSizeX();

    f32 c = sx * math::CosRad(rot.y);
    f32 s = sx * math::SinRad(rot.y);

    // clang-format off
    return math::MTX34(
           c, 0.0f,   -s, pivot - c * pivot,
        0.0f, 1.0f, 0.0f, 0.0f,
           s, 0.0f,    c, -s * pivot);
    // clang-format on
}

inline void DrawStripeStrategy::DispVertex(
    Particle* pParticle, StripeContext* pContext, CalcAheadFunc pCalcAheadFunc,
    const math::VEC3* pPos, const math::VEC3* pRight, const math::VEC3* pLeft,
    math::VEC3* pPrevAxis, f32 pivot, f32 texV, bool texCoord) {

    if (pParticle == NULL) {
        pParticle = GetYoungestDrawParticle(pContext->mCommon.mParticleManager);
    }

    math::MTX34 drawMtx;
    math::VEC3 dir;
    math::VEC3 p0;
    math::VEC3 p1;

    pCalcAheadFunc(&dir, pContext, pParticle);

    math::MTX34 dirMtx = CalcDirMtx(pParticle, pContext, &dir, pPos, pPrevAxis);
    math::MTX34 locMtx = CalcLocMtx(pParticle, pivot);

    math::MTX34Mult(&drawMtx, &dirMtx, &locMtx);

    math::VEC3Transform(&p0, &drawMtx, pRight);
    math::VEC3Transform(&p1, &drawMtx, pLeft);

    GXPosition3f32(p0.x, p0.y, p0.z);
    if (texCoord) {
        GXTexCoord2f32(1.0f, texV);
    }

    GXPosition3f32(p1.x, p1.y, p1.z);
    if (texCoord) {
        GXTexCoord2f32(0.0f, texV);
    }
}

inline void DrawStripeStrategy::EndStripe() {
    GXEnd();
}

void DrawStripeStrategy::Draw(const DrawInfo& rInfo, ParticleManager* pManager) {
    int num = GetNumDrawParticle(pManager);

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    if (num == 0) {
        return;
    }

    StripeContext context(*rInfo.GetViewMtx(), pManager);

    math::MTX34 posMtx;


    // Particles that have not been drawn yet start from the emitter's Y axis
    for (Particle* pIt = GetYoungestParticle(pManager); pIt != NULL;
         pIt = GetElderParticle(pManager, pIt)) {

        if (pIt->mPrevAxis.x <= 1.0f) {
            break;
        }

        pIt->mPrevAxis = context.mCommon.mEmitterAxisY;
    }

    int type = pDesc->typeOption2 & 7;

    if ((type == EmitterDrawSetting::ASSIST_ST_CROSS && num < 3) ||
        (type == EmitterDrawSetting::ASSIST_ST_NORMAL && num < 2)) {

        // Too few particles to draw: only keep the particle axes up to date
        math::_VEC3 prevAxis = context.mCommon.mEmitterAxisY;

        int drawOrder =
            pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER;

        CalcAheadFunc pCalcAheadFunc = GetCalcAheadFunc(pManager);
        GetFirstDrawParticleFunc pGetFirstFunc =
            GetGetFirstDrawParticleFunc(drawOrder);
        GetNextDrawParticleFunc pGetNextFunc =
            GetGetNextDrawParticleFunc(drawOrder);

        for (Particle* pIt = pGetFirstFunc(pManager); pIt != NULL;
             pIt = pGetNextFunc(pManager, pIt)) {

            math::VEC3 dir;
            pCalcAheadFunc(&dir, &context, pIt);

            math::MTX34 dirMtx =
                CalcDirMtx(pIt, &context, &dir, &pIt->mParameter.mPosition,
                           static_cast<math::VEC3*>(&prevAxis));
        }

        return;
    }

    InitGraphics(rInfo, pManager);

    math::MTX34Mult(&posMtx, rInfo.GetViewMtx(),
                    &context.mCommon.mParticleManagerMtx);
    GXLoadPosMtxImm(posMtx, GX_PNMTX0);

    Particle* pFirst = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER)(pManager);
    SetupGP(pFirst, rSetting, rInfo, true, false);

    DrawStripe(&context, math::VEC3(1.0f, 0.0f, 0.0f),
               math::VEC3(-1.0f, 0.0f, 0.0f));

    if (pDesc->typeOption == EmitterDrawSetting::TYPE_CMN_CROSS) {
        DrawStripe(&context, math::VEC3(0.0f, 0.0f, -1.0f),
                   math::VEC3(0.0f, 0.0f, 1.0f));
    }
}

void DrawStripeStrategy::InitGraphics(const DrawInfo& rInfo,
                                      ParticleManager* pManager) {

    const EmitterDrawSetting& rSetting =
        *pManager->mResource->GetEmitterDrawSetting();

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

DrawStrategyImpl::CalcAheadFunc
DrawStripeStrategy::GetCalcAheadFunc(ParticleManager* pManager) {
    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();

    switch (pDesc->typeDir) {
    case 0: {
        return CalcAhead_Speed;
    }

    case 1: {
        return CalcAhead_EmitterCenter;
    }

    case 2: {
        return CalcAhead_EmitterDesign;
    }

    case 3: {
        return CalcAhead_Younger;
    }

    case 5: {
        return CalcAhead_NoDesign;
    }

    case 6: {
        switch (pDesc->typeOption2 & 7) {
        case EmitterDrawSetting::ASSIST_ST_CROSS: {
            return CalcAhead_BothLoop;
        }

        case EmitterDrawSetting::ASSIST_ST_BILLBOARD: {
            return CalcAhead_BothCenter;
        }

        default: {
            return CalcAhead_Both;
        }
        }
    }

    default: {
        return CalcAhead_Speed;
    }
    }
}

void DrawStripeStrategy::CalcAhead_Younger(math::VEC3* pAxisY,
                                           AheadContext* pContext,
                                           Particle* pParticle) {

    Particle* pYounger =
        GetYoungerDrawParticle(pContext->mCommon.mParticleManager, pParticle);

    if (pYounger != NULL) {
        math::VEC3Sub(pAxisY, &pParticle->mParameter.mPosition,
                      &pYounger->mParameter.mPosition);
    } else {
        math::VEC3Sub(pAxisY, &pParticle->mParameter.mPosition,
                      &pContext->mCommon.mEmitterCenter);
    }

    if (!Normalize(pAxisY)) {
        *pAxisY = pContext->mCommon.mEmitterAxisY;
    }
}

void DrawStripeStrategy::CalcAhead_Both(math::VEC3* pAxisY,
                                        AheadContext* pContext,
                                        Particle* pParticle) {

    Particle* pElder =
        GetElderDrawParticle(pContext->mCommon.mParticleManager, pParticle);

    Particle* pYounger =
        GetYoungerDrawParticle(pContext->mCommon.mParticleManager, pParticle);

    math::VEC3 elderPos(0.0f, 0.0f, 0.0f);

    if (pElder != NULL) {
        math::VEC3Sub(&elderPos, &pElder->mParameter.mPosition,
                      &pParticle->mParameter.mPosition);

        if (!Normalize(&elderPos)) {
            elderPos = math::VEC3(0.0f, 0.0f, 0.0f);
        }
    }

    math::VEC3 youngerPos(0.0f, 0.0f, 0.0f);

    if (pYounger != NULL) {
        math::VEC3Sub(&youngerPos, &pYounger->mParameter.mPosition,
                      &pParticle->mParameter.mPosition);

        if (!Normalize(&youngerPos)) {
            youngerPos = math::VEC3(0.0f, 0.0f, 0.0f);
        }
    }

    math::VEC3Sub(pAxisY, &elderPos, &youngerPos);

    if (!Normalize(pAxisY)) {
        *pAxisY = pContext->mCommon.mEmitterAxisY;
    }
}

void DrawStripeStrategy::CalcAhead_BothLoop(math::VEC3* pAxisY,
                                            AheadContext* pContext,
                                            Particle* pParticle) {

    Particle* pElder =
        GetElderDrawParticle(pContext->mCommon.mParticleManager, pParticle);
    if (pElder == NULL) {
        pElder = GetYoungestDrawParticle(pContext->mCommon.mParticleManager);
    }

    Particle* pYounger =
        GetYoungerDrawParticle(pContext->mCommon.mParticleManager, pParticle);
    if (pYounger == NULL) {
        pYounger = GetOldestDrawParticle(pContext->mCommon.mParticleManager);
    }

    math::VEC3 elderPos;
    math::VEC3Sub(&elderPos, &pElder->mParameter.mPosition,
                  &pParticle->mParameter.mPosition);

    if (!Normalize(&elderPos)) {
        elderPos = math::VEC3(0.0f, 0.0f, 0.0f);
    }

    math::VEC3 youngerPos;
    math::VEC3Sub(&youngerPos, &pYounger->mParameter.mPosition,
                  &pParticle->mParameter.mPosition);

    if (!Normalize(&youngerPos)) {
        youngerPos = math::VEC3(0.0f, 0.0f, 0.0f);
    }

    math::VEC3Sub(pAxisY, &elderPos, &youngerPos);

    if (!Normalize(pAxisY)) {
        *pAxisY = pContext->mCommon.mEmitterAxisY;
    }
}

void DrawStripeStrategy::CalcAhead_BothCenter(math::VEC3* pAxisY,
                                              AheadContext* pContext,
                                              Particle* pParticle) {

    Particle* pElder =
        GetElderDrawParticle(pContext->mCommon.mParticleManager, pParticle);

    Particle* pYounger =
        GetYoungerDrawParticle(pContext->mCommon.mParticleManager, pParticle);

    math::VEC3 elderPos(0.0f, 0.0f, 0.0f);

    if (pElder != NULL) {
        math::VEC3Sub(&elderPos, &pElder->mParameter.mPosition,
                      &pParticle->mParameter.mPosition);
        Normalize(&elderPos);
    }

    math::VEC3 youngerPos;

    if (pYounger != NULL) {
        math::VEC3Sub(&youngerPos, &pYounger->mParameter.mPosition,
                      &pParticle->mParameter.mPosition);
    } else {
        math::VEC3Sub(&youngerPos, &pContext->mCommon.mEmitterCenter,
                      &pParticle->mParameter.mPosition);
    }

    Normalize(&youngerPos);

    math::VEC3Sub(pAxisY, &elderPos, &youngerPos);

    if (!Normalize(pAxisY)) {
        *pAxisY = pContext->mCommon.mEmitterAxisY;
    }
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1B40;
extern "C" float lbl_804A1B44;
extern "C" float lbl_804A1B48;
extern "C" float lbl_804A1B50;
extern "C" float lbl_804A1B54;
extern "C" float lbl_804A1B58;
extern "C" float lbl_804A1B60;
extern "C" float lbl_804A1B68;
extern "C" float lbl_804A1B6C;
extern "C" float lbl_804A1B70;
extern "C" u8 jumptable_803608E0[];
extern "C" u8 jumptable_80360944[];
extern "C" u8 jumptable_803609A8[];
extern "C" u8 lbl_803E6550[];
extern "C" u8 lbl_803E6568[];
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restgpr_17();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_17();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C0E98();
extern "C" void fn_801C2CF4();
extern "C" void fn_801C2DC8();
extern "C" void CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle();
extern "C" void fn_801C3624();
extern "C" void CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle();
extern "C" void fn_801C6834();
extern "C" void fn_801C6B84();
extern "C" void fn_801C6B8C();
extern "C" void fn_801C6B98();
extern "C" void fn_801C6BB0();
extern "C" void fn_801C6FEC();
extern "C" void fn_801C6FF0();
extern "C" void fn_801C7458();
extern "C" void fn_801C77FC();
extern "C" void fn_801C7AC0();
extern "C" void fn_801C7E08();
extern "C" void fn_801C81C8();
extern "C" void fn_801C8980();
extern "C" void fn_801C920C();
extern "C" void fn_801C94AC();
extern "C" void fn_801C9560();
extern "C" void fn_801C9678();
extern "C" void fn_801C98E0();
extern "C" void fn_801C9B90();
extern "C" void fn_8030DEEC();

// asm_to_cpp: fn_801C6834
extern "C" asm void fn_801C6834() {
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
    bl _savegpr_17
    lwz r31, 0x0(r4)
    lis r0, 0x4330
    mr r18, r3
    stw r0, 0x8(r1)
    lwz r3, 0x24(r31)
    mr r19, r4
    stw r0, 0x10(r1)
    mr r20, r5
    mr r21, r6
    mr r22, r7
    bl fn_801C3624
    lwz r12, 0x0(r18)
    mr r30, r3
    mr r3, r18
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r18)
    mr r29, r3
    lhz r0, 0x0(r30)
    mr r3, r18
    lwz r12, 0x10(r12)
    rlwinm r28, r0, 0, 20, 20
    mr r4, r28
    mtctr r12
    bctrl
    lwz r12, 0x0(r18)
    mr r27, r3
    mr r3, r18
    mr r4, r28
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r26, r3
    mr r3, r18
    mr r4, r31
    bl fn_801C6B84
    lbz r4, 0xa9(r30)
    mr r25, r3
    lbz r0, 0xb2(r30)
    extsb r4, r4
    lfd f2, lbl_804A1B48
    xoris r4, r4, 0x8000
    clrlwi r5, r0, 29
    stw r4, 0xc(r1)
    subi r0, r5, 0x1
    cntlzw r4, r0
    lfs f0, lbl_804A1B40
    lfd f1, 0x8(r1)
    subi r0, r5, 0x2
    cntlzw r0, r0
    srwi. r24, r4, 5
    fsubs f1, f1, f2
    srwi r23, r0, 5
    fmuls f30, f0, f1
    bne lbl_801C694C
    cmpwi r23, 0x0
    beq lbl_801C6950
lbl_801C694C:
    addi r25, r3, 0x1
lbl_801C6950:
    clrlslwi r5, r25, 17, 1
    li r3, 0x98
    li r4, 0x0
    bl GXBegin
    mr r3, r18
    mr r4, r30
    bl fn_801C6B8C
    cmpwi r3, 0x40
    beq lbl_801C69A0
    bge lbl_801C697C
    cmpwi r3, 0x0
lbl_801C697C:
    subi r0, r25, 0x1
    lfd f1, lbl_804A1B48
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801C69A4
lbl_801C69A0:
    lfs f29, lbl_804A1B44
lbl_801C69A4:
    lhz r0, 0x0(r30)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x1
    beq lbl_801C69D0
    bge lbl_801C69D0
    cmpwi r0, 0x0
    bge lbl_801C69C4
    b lbl_801C69D0
lbl_801C69C4:
    li r25, 0x0
    li r30, 0x1
    b lbl_801C69D8
lbl_801C69D0:
    subi r25, r25, 0x1
    li r30, -0x1
lbl_801C69D8:
    cmpwi r23, 0x0
    beq lbl_801C6A2C
    cmpwi r28, 0x0
    bne lbl_801C6A2C
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B48
    stw r0, 0xc(r1)
    fmr f1, f30
    mr r3, r18
    mr r4, r19
    lfd f0, 0x8(r1)
    mr r5, r20
    mr r7, r29
    fsubs f0, f0, f2
    mr r9, r21
    mr r10, r22
    addi r8, r19, 0xa4
    li r6, 0x0
    fmuls f2, f29, f0
    bl fn_801C6BB0
    add r25, r25, r30
lbl_801C6A2C:
    mr r12, r27
    mr r3, r31
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r17, r3
    b lbl_801C6AA0
lbl_801C6A48:
    xoris r0, r25, 0x8000
    fmr f1, f30
    stw r0, 0x14(r1)
    mr r3, r18
    mr r4, r19
    mr r5, r20
    lfd f0, 0x10(r1)
    mr r6, r17
    mr r7, r29
    fsubs f0, f0, f31
    mr r9, r21
    mr r10, r22
    addi r8, r17, 0xac
    fmuls f2, f29, f0
    bl fn_801C6BB0
    mr r12, r26
    mr r3, r31
    mr r4, r17
    mtctr r12
    bctrl
    mr r17, r3
    add r25, r25, r30
lbl_801C6AA0:
    cmpwi r17, 0x0
    bne lbl_801C6A48
    cmpwi r24, 0x0
    beq lbl_801C6B00
    mr r12, r27
    mr r3, r31
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r6, r3
    stw r0, 0xc(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B48
    mr r3, r18
    lfd f0, 0x8(r1)
    mr r4, r19
    mr r5, r20
    fsubs f0, f0, f2
    mr r7, r29
    mr r9, r21
    mr r10, r22
    addi r8, r6, 0xac
    fmuls f2, f29, f0
    bl fn_801C6BB0
lbl_801C6B00:
    cmpwi r23, 0x0
    beq lbl_801C6B50
    cmpwi r28, 0x0
    beq lbl_801C6B50
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B48
    stw r0, 0x14(r1)
    fmr f1, f30
    mr r3, r18
    mr r4, r19
    lfd f0, 0x10(r1)
    mr r5, r20
    mr r7, r29
    fsubs f0, f0, f2
    mr r9, r21
    mr r10, r22
    addi r8, r19, 0xa4
    li r6, 0x0
    fmuls f2, f29, f0
    bl fn_801C6BB0
lbl_801C6B50:
    bl fn_801C6FEC
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    opword 0xE3A10068
    addi r11, r1, 0x60
    lfd f29, 0x60(r1)
    bl _restgpr_17
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_801C6B84
extern "C" asm void fn_801C6B84() {
    nofralloc
    lhz r3, 0x50(r4)
    blr
}

// asm_to_cpp: fn_801C6B8C
extern "C" asm void fn_801C6B8C() {
    nofralloc
    lbz r0, 0xb2(r4)
    rlwinm r3, r0, 0, 24, 25
    blr
}

// asm_to_cpp: fn_801C6B98
extern "C" asm void fn_801C6B98() {
    nofralloc
    fres f0, f1
    opword 0x1040002A
    opword 0x10000032
    opword 0x1001103C
    fmr f1, f0
    blr
}

// asm_to_cpp: fn_801C6BB0
extern "C" asm void fn_801C6BB0() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    addi r11, r1, 0x110
    bl _savegpr_25
    fmr f30, f1
    cmpwi r6, 0x0
    fmr f31, f2
    mr r25, r4
    mr r28, r5
    mr r29, r6
    mr r26, r8
    mr r30, r9
    mr r31, r10
    bne lbl_801C6C48
    lwz r3, 0x0(r4)
    lwz r29, 0x3c(r3)
    b lbl_801C6C34
lbl_801C6C10:
    lhz r4, 0x42(r3)
    lwzx r29, r29, r4
    b lbl_801C6C20
lbl_801C6C1C:
    lwzx r29, r29, r4
lbl_801C6C20:
    cmpwi r29, 0x0
    beq lbl_801C6C34
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_801C6C1C
lbl_801C6C34:
    cmpwi r29, 0x0
    beq lbl_801C6C48
    lwz r0, 0xc(r29)
    cmpwi r0, 0x1
    bne lbl_801C6C10
lbl_801C6C48:
    mr r12, r7
    mr r4, r25
    mr r5, r29
    addi r3, r1, 0x4c
    mtctr r12
    bctrl
    rlwinm. r0, r28, 0, 28, 28
    addi r27, r1, 0x4c
    bne lbl_801C6C80
    mr r3, r27
    addi r4, r29, 0xcc
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    b lbl_801C6C90
lbl_801C6C80:
    mr r3, r27
    addi r4, r25, 0xc8
    addi r5, r1, 0x1c
    bl fn_8030DEEC
lbl_801C6C90:
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C6CB8
    li r0, 0x0
    b lbl_801C6CD8
lbl_801C6CB8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C6CD8:
    cmpwi r0, 0x0
    bne lbl_801C6CF8
    lfs f0, 0xbc(r25)
    stfs f0, 0x1c(r1)
    lfs f0, 0xc0(r25)
    stfs f0, 0x20(r1)
    lfs f0, 0xc4(r25)
    stfs f0, 0x24(r1)
lbl_801C6CF8:
    mr r4, r27
    addi r3, r1, 0x1c
    addi r5, r1, 0x28
    bl fn_8030DEEC
    opword 0xE041002C
    opword 0xE0218028
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C6D44
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010028
    opword 0x10400058
    opword 0xE0018030
    opword 0xF0410028
    opword 0x10400058
    opword 0xF0418030
lbl_801C6D44:
    lfs f0, 0x28(r1)
    lfs f1, 0x8(r26)
    stfs f0, 0xcc(r29)
    lfs f4, 0x4(r26)
    lfs f0, 0x2c(r1)
    lfs f8, 0x0(r26)
    stfs f0, 0xd0(r29)
    lfs f0, 0x30(r1)
    stfs f0, 0xd4(r29)
    lfs f0, 0x30(r1)
    lfs f2, 0x54(r1)
    lfs f3, 0x24(r1)
    lfs f5, 0x2c(r1)
    lfs f6, 0x50(r1)
    lfs f7, 0x20(r1)
    lfs f9, 0x28(r1)
    lfs f10, 0x4c(r1)
    lfs f11, 0x1c(r1)
    stfs f10, 0x8c(r1)
    stfs f11, 0x88(r1)
    stfs f9, 0x90(r1)
    stfs f8, 0x94(r1)
    stfs f7, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f2, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f1, 0xb4(r1)
    lbz r3, 0x9a(r29)
    lfs f3, 0x40(r29)
    lfs f1, 0x44(r29)
    cmpwi r3, 0x0
    lfs f0, 0x48(r29)
    stfs f3, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    beq lbl_801C6E08
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f2, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f0, lbl_804A1B54
    lfd f1, 0xe8(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x10(r1)
lbl_801C6E08:
    lbz r3, 0x9b(r29)
    cmpwi r3, 0x0
    beq lbl_801C6E40
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe8(r1)
    lfs f0, 0x14(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
lbl_801C6E40:
    lbz r3, 0x9c(r29)
    cmpwi r3, 0x0
    beq lbl_801C6E78
    lis r0, 0x4330
    stw r3, 0xec(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe8(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe8(r1)
    lfs f0, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x18(r1)
lbl_801C6E78:
    lwz r5, 0xc8(r29)
    addi r3, r1, 0xc
    lfs f1, 0x14(r1)
    addi r4, r1, 0x8
    lfs f0, 0x64(r5)
    lfs f2, 0x30(r29)
    fadds f1, f1, f0
    lfs f0, 0x38(r29)
    lfs f4, 0x10(r1)
    fmuls f5, f2, f0
    lfs f3, 0x60(r5)
    lfs f0, 0x58(r5)
    fadds f4, f4, f3
    lfs f3, 0x18(r1)
    lfs f2, 0x68(r5)
    fmuls f29, f5, f0
    stfs f1, 0x14(r1)
    fadds f0, f3, f2
    stfs f4, 0x10(r1)
    stfs f0, 0x18(r1)
    bl fn_801B9C64
    lfs f1, 0xc(r1)
    addi r3, r1, 0x88
    lfs f0, 0x8(r1)
    addi r4, r1, 0x58
    fmuls f5, f1, f29
    lfs f1, lbl_804A1B58
    fmuls f4, f0, f29
    lfs f0, lbl_804A1B44
    stfs f1, 0x5c(r1)
    addi r5, r1, 0xb8
    fneg f3, f5
    stfs f5, 0xc(r1)
    fmuls f2, f4, f30
    stfs f4, 0x8(r1)
    fmuls f6, f3, f30
    fsubs f2, f30, f2
    stfs f4, 0x58(r1)
    stfs f3, 0x60(r1)
    stfs f2, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f1, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f1, 0x7c(r1)
    stfs f4, 0x80(r1)
    stfs f6, 0x84(r1)
    bl PSMTXConcat
    mr r4, r30
    addi r3, r1, 0xb8
    addi r5, r1, 0x40
    bl PSMTXMultVec
    mr r4, r31
    addi r3, r1, 0xb8
    addi r5, r1, 0x34
    bl PSMTXMultVec
    lfs f2, 0x48(r1)
    lis r3, 0xcc01
    lfs f1, 0x44(r1)
    clrlwi. r0, r28, 31
    lfs f0, 0x40(r1)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_801C6F8C
    lfs f0, lbl_804A1B44
    stfs f0, -0x8000(r3)
    stfs f31, -0x8000(r3)
lbl_801C6F8C:
    lfs f2, 0x3c(r1)
    lis r3, 0xcc01
    lfs f1, 0x38(r1)
    cmpwi r0, 0x0
    lfs f0, 0x34(r1)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_801C6FBC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    stfs f31, -0x8000(r3)
lbl_801C6FBC:
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    addi r11, r1, 0x110
    lfd f29, 0x110(r1)
    bl _restgpr_25
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_801C6FEC
extern "C" asm void fn_801C6FEC() {
    nofralloc
    blr
}

// asm_to_cpp: fn_801C6FF0
extern "C" asm void fn_801C6FF0() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    opword 0xF3E10148
    stfd f30, 0x130(r1)
    opword 0xF3C10138
    stfd f29, 0x120(r1)
    opword 0xF3A10128
    stfd f28, 0x110(r1)
    opword 0xF3810118
    stfd f27, 0x100(r1)
    opword 0xF3610108
    mr r12, r8
    fmr f28, f1
    addi r3, r1, 0x40
    stw r31, 0xfc(r1)
    fmr f29, f2
    fmr f30, f3
    mr r31, r6
    stw r30, 0xf8(r1)
    mr r30, r7
    stw r29, 0xf4(r1)
    mr r29, r5
    mr r5, r30
    stw r28, 0xf0(r1)
    mr r28, r4
    mr r4, r29
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x40
    bne lbl_801C7088
    mr r3, r31
    addi r4, r30, 0xcc
    addi r5, r1, 0x10
    bl fn_8030DEEC
    b lbl_801C7098
lbl_801C7088:
    mr r3, r31
    addi r4, r29, 0xc8
    addi r5, r1, 0x10
    bl fn_8030DEEC
lbl_801C7098:
    opword 0xE0410014
    opword 0xE0218010
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C70C0
    li r0, 0x0
    b lbl_801C70E0
lbl_801C70C0:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010010
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018018
    opword 0xF0410010
    opword 0x10400058
    opword 0xF0418018
lbl_801C70E0:
    cmpwi r0, 0x0
    bne lbl_801C7100
    lfs f0, 0xbc(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0xc0(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0xc4(r29)
    stfs f0, 0x18(r1)
lbl_801C7100:
    mr r4, r31
    addi r3, r1, 0x10
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B50
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C714C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C714C:
    lfs f0, 0x1c(r1)
    lfs f1, 0xb4(r30)
    stfs f0, 0xcc(r30)
    lfs f4, 0xb0(r30)
    lfs f0, 0x20(r1)
    lfs f8, 0xac(r30)
    stfs f0, 0xd0(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0xd4(r30)
    lfs f0, 0x24(r1)
    lfs f2, 0x48(r1)
    lfs f3, 0x18(r1)
    lfs f5, 0x20(r1)
    lfs f6, 0x44(r1)
    lfs f7, 0x14(r1)
    lfs f9, 0x1c(r1)
    lfs f10, 0x40(r1)
    lfs f11, 0x10(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xdc(r1)
    lbz r3, 0x9a(r30)
    lfs f3, 0x40(r30)
    lfs f1, 0x44(r30)
    cmpwi r3, 0x0
    lfs f0, 0x48(r30)
    stfs f3, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801C7210
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f2, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f0, lbl_804A1B54
    lfd f1, 0xe0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x34(r1)
lbl_801C7210:
    lbz r3, 0x9b(r30)
    cmpwi r3, 0x0
    beq lbl_801C7248
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe0(r1)
    lfs f0, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_801C7248:
    lbz r3, 0x9c(r30)
    cmpwi r3, 0x0
    beq lbl_801C7280
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B60
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B54
    lfd f2, 0xe0(r1)
    lfs f0, 0x3c(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x3c(r1)
lbl_801C7280:
    lwz r4, 0xc8(r30)
    lfs f3, 0x34(r1)
    lfs f0, 0x60(r4)
    lfs f2, 0x30(r30)
    fadds f6, f3, f0
    lfs f1, 0x38(r30)
    lwz r3, 0x24(r4)
    lfs f4, 0x38(r1)
    fmuls f7, f2, f1
    lfs f3, 0x64(r4)
    lfs f0, 0x58(r4)
    fadds f5, f4, f3
    lhz r0, 0x9c(r3)
    lfs f4, 0x3c(r1)
    fmuls f31, f7, f0
    lfs f3, 0x68(r4)
    rlwinm r0, r0, 0, 17, 18
    fadds f0, f4, f3
    cmpwi r0, 0x4000
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801C72F8
    bge lbl_801C72EC
    cmpwi r0, 0x2000
    beq lbl_801C7304
    b lbl_801C7314
lbl_801C72EC:
    cmpwi r0, 0x6000
    beq lbl_801C7320
    b lbl_801C7314
lbl_801C72F8:
    lfs f0, 0x34(r30)
    fmuls f7, f0, f1
    b lbl_801C7320
lbl_801C7304:
    lfs f0, 0x3c(r30)
    fmuls f7, f2, f0
    b lbl_801C7320
    b lbl_801C7320
lbl_801C7314:
    lfs f1, 0x34(r30)
    lfs f0, 0x3c(r30)
    fmuls f7, f1, f0
lbl_801C7320:
    lfs f0, 0x5c(r4)
    addi r3, r1, 0xc
    lfs f1, 0x38(r1)
    addi r4, r1, 0x8
    fmuls f27, f7, f0
    bl fn_801B9C64
    lfs f3, 0x8(r1)
    addi r3, r1, 0xb0
    lfs f7, 0xc(r1)
    addi r4, r1, 0x80
    fmuls f2, f3, f31
    lfs f1, lbl_804A1B58
    fmuls f8, f7, f31
    lfs f0, lbl_804A1B44
    fmuls f6, f3, f27
    stfs f1, 0x84(r1)
    fmuls f5, f28, f8
    stfs f2, 0x80(r1)
    fmuls f4, f28, f2
    addi r5, r1, 0x50
    fneg f2, f7
    stfs f0, 0x94(r1)
    fmuls f3, f7, f27
    stfs f1, 0x90(r1)
    fmuls f9, f2, f27
    fsubs f7, f29, f5
    stfs f1, 0x98(r1)
    fmuls f5, f29, f6
    fmuls f0, f29, f3
    stfs f1, 0x9c(r1)
    fsubs f2, f28, f4
    fsubs f3, f7, f5
    stfs f9, 0x88(r1)
    fadds f0, f2, f0
    stfs f8, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl PSMTXConcat
    lfs f2, 0x7c(r1)
    lis r5, lbl_803E6550@ha
    lfs f1, 0x6c(r1)
    addi r3, r28, 0xc
    lfs f0, 0x5c(r1)
    addi r4, r1, 0x50
    stfs f1, 0x2c(r1)
    addi r5, r5, lbl_803E6550@l
    stfs f0, 0x28(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x0(r28)
    stfs f1, 0x4(r28)
    stfs f2, 0x8(r28)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lis r5, lbl_803E6568@ha
    addi r3, r28, 0x18
    addi r4, r1, 0x50
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    stfs f30, 0x24(r28)
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    lfd f29, 0x120(r1)
    opword 0xE3810118
    lfd f28, 0x110(r1)
    opword 0xE3610108
    lfd f27, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// asm_to_cpp: fn_801C7458
extern "C" asm void fn_801C7458() {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    opword 0xF3E100F8
    addi r11, r1, 0xf0
    bl _savegpr_27
    lis r9, 0x4330
    xoris r0, r7, 0x8000
    stw r9, 0xc8(r1)
    mr r30, r4
    lfd f1, lbl_804A1B48
    slwi r3, r7, 1
    stw r0, 0xcc(r1)
    addi r0, r3, 0x2
    mr r31, r5
    mr r27, r6
    lfd f0, 0xc8(r1)
    mr r28, r7
    stw r9, 0xd0(r1)
    mr r29, r8
    fsubs f0, f0, f1
    clrlwi r5, r0, 16
    li r3, 0x98
    li r4, 0x0
    fres f31, f0
    opword 0x105FF82A
    opword 0x103F07F2
    opword 0x13E0107C
    bl GXBegin
    rlwinm. r0, r27, 0, 27, 27
    beq lbl_801C765C
    cmpwi r28, 0x0
    li r5, 0x0
    blt lbl_801C77DC
    addi r0, r28, 0x1
    clrlwi r4, r27, 31
    lfd f1, lbl_804A1B48
    lis r3, 0xcc01
    mtctr r0
    blt lbl_801C77DC
lbl_801C74FC:
    lfs f6, 0x0(r29)
    cmpwi r4, 0x0
    opword 0xE07E0018
    lfs f7, 0x4(r29)
    opword 0x10830198
    opword 0xE01E000C
    opword 0xE07E8020
    opword 0x104001D8
    opword 0xE01E8014
    opword 0xF0810098
    opword 0x10830198
    opword 0xE0BE0000
    opword 0xF04100A4
    opword 0x104001D8
    opword 0xE0610098
    opword 0xE00100A4
    opword 0xF08180A0
    opword 0x1000182A
    opword 0xF04180AC
    opword 0xF00100B0
    opword 0x1002202A
    opword 0xE04100B0
    opword 0xF00180B8
    opword 0x1042282A
    opword 0xE0BE8008
    opword 0xF04100BC
    opword 0x1040282A
    lfs f0, 0xbc(r1)
    opword 0xF04180C4
    lfs f2, 0xc0(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc4(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C75A8
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r30)
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C75A8:
    opword 0xE01F000C
    cmpwi r4, 0x0
    opword 0xE07F0018
    opword 0x104001D8
    opword 0xE01F8014
    opword 0x10830198
    opword 0xE07F8020
    opword 0xE0BF0000
    opword 0xF0410074
    opword 0x104001D8
    opword 0xF0810068
    opword 0x10830198
    opword 0xE0010074
    opword 0xE0610068
    opword 0xF041807C
    opword 0x1000182A
    opword 0xF0818070
    opword 0xF0010080
    opword 0x1002202A
    opword 0xE0410080
    opword 0xF0018088
    opword 0x1042282A
    opword 0xE0BF8008
    opword 0xF041008C
    opword 0x1040282A
    lfs f0, 0x8c(r1)
    opword 0xF0418094
    lfs f2, 0x90(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x94(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C764C
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r31)
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C764C:
    addi r29, r29, 0x8
    addi r5, r5, 0x1
    bdnz lbl_801C74FC
    b lbl_801C77DC
lbl_801C765C:
    cmpwi r28, 0x0
    li r5, 0x0
    blt lbl_801C77DC
    addi r0, r28, 0x1
    clrlwi r4, r27, 31
    lfd f1, lbl_804A1B48
    lis r3, 0xcc01
    mtctr r0
    blt lbl_801C77DC
lbl_801C7680:
    lfs f6, 0x0(r29)
    cmpwi r4, 0x0
    opword 0xE07F0018
    lfs f7, 0x4(r29)
    opword 0x10830198
    opword 0xE01F000C
    opword 0xE07F8020
    opword 0x104001D8
    opword 0xE01F8014
    opword 0xF0810038
    opword 0x10830198
    opword 0xE0BF0000
    opword 0xF0410044
    opword 0x104001D8
    opword 0xE0610038
    opword 0xE0010044
    opword 0xF0818040
    opword 0x1000182A
    opword 0xF041804C
    opword 0xF0010050
    opword 0x1002202A
    opword 0xE0410050
    opword 0xF0018058
    opword 0x1042282A
    opword 0xE0BF8008
    opword 0xF041005C
    opword 0x1040282A
    lfs f0, 0x5c(r1)
    opword 0xF0418064
    lfs f2, 0x60(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x64(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C772C
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r31)
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C772C:
    opword 0xE01E000C
    cmpwi r4, 0x0
    opword 0xE07E0018
    opword 0x104001D8
    opword 0xE01E8014
    opword 0x10830198
    opword 0xE07E8020
    opword 0xE0BE0000
    opword 0xF0410014
    opword 0x104001D8
    opword 0xF0810008
    opword 0x10830198
    opword 0xE0010014
    opword 0xE0610008
    opword 0xF041801C
    opword 0x1000182A
    opword 0xF0818010
    opword 0xF0010020
    opword 0x1002202A
    opword 0xE0410020
    opword 0xF0018028
    opword 0x1042282A
    opword 0xE0BE8008
    opword 0xF041002C
    opword 0x1040282A
    lfs f0, 0x2c(r1)
    opword 0xF0418034
    lfs f2, 0x30(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C77D0
    xoris r0, r5, 0x8000
    lfs f2, 0x24(r30)
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
lbl_801C77D0:
    addi r29, r29, 0x8
    addi r5, r5, 0x1
    bdnz lbl_801C7680
lbl_801C77DC:
    opword 0xE3E100F8
    addi r11, r1, 0xf0
    lfd f31, 0xf0(r1)
    bl _restgpr_27
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// asm_to_cpp: fn_801C77FC
extern "C" asm void fn_801C77FC() {
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
    addi r11, r1, 0xa0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x58(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x60(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x5c(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x64(r1)
    lfd f2, 0x58(r1)
    lfd f0, 0x60(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801C7930
    bge lbl_801C7904
    cmpwi r0, 0x0
lbl_801C7904:
    subi r0, r3, 0x1
    lfd f1, lbl_804A1B48
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801C7934
lbl_801C7930:
    lfs f28, lbl_804A1B44
lbl_801C7934:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C794C
    subi r25, r3, 0x1
    li r24, -0x1
lbl_801C794C:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r19, r3
    stw r0, 0x64(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B48
    fmr f2, f29
    lfd f0, 0x60(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r19
    mr r8, r28
    addi r4, r1, 0x30
    fmuls f3, f28, f0
    bl fn_801C6FF0
    mr r12, r26
    mr r3, r29
    mr r4, r19
    add r25, r25, r24
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r30, r3
    b lbl_801C7A80
lbl_801C79C0:
    xoris r0, r25, 0x8000
    lwz r4, 0x30(r1)
    stw r0, 0x5c(r1)
    fmr f1, f30
    lwz r19, 0x34(r1)
    fmr f2, f29
    lfd f0, 0x58(r1)
    mr r3, r21
    lwz r20, 0x38(r1)
    fsubs f0, f0, f31
    lwz r27, 0x3c(r1)
    lwz r12, 0x40(r1)
    mr r5, r22
    lwz r11, 0x44(r1)
    mr r6, r23
    lwz r10, 0x48(r1)
    fmuls f3, f28, f0
    lwz r9, 0x4c(r1)
    mr r7, r30
    lwz r0, 0x50(r1)
    mr r8, r28
    lfs f0, 0x54(r1)
    stw r4, 0x8(r1)
    addi r4, r1, 0x30
    stw r19, 0xc(r1)
    stw r20, 0x10(r1)
    stw r27, 0x14(r1)
    stw r12, 0x18(r1)
    stw r11, 0x1c(r1)
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C7A80:
    cmpwi r30, 0x0
    bne lbl_801C79C0
    opword 0xE3E100D8
    lfd f31, 0xd0(r1)
    opword 0xE3C100C8
    lfd f30, 0xc0(r1)
    opword 0xE3A100B8
    lfd f29, 0xb0(r1)
    opword 0xE38100A8
    addi r11, r1, 0xa0
    lfd f28, 0xa0(r1)
    bl _restgpr_19
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_801C7AC0
extern "C" asm void fn_801C7AC0() {
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
    addi r11, r1, 0xd0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x80(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x88(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x84(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x8c(r1)
    lfd f2, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801C7BF0
    bge lbl_801C7BC8
    cmpwi r0, 0x0
lbl_801C7BC8:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801C7BF4
lbl_801C7BF0:
    lfs f28, lbl_804A1B44
lbl_801C7BF4:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C7C0C
    mr r25, r3
    li r24, -0x1
lbl_801C7C0C:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r20, r3
    stw r0, 0x8c(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B48
    fmr f2, f29
    lfd f0, 0x88(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r20
    mr r8, r28
    addi r4, r1, 0x8
    fmuls f3, f28, f0
    bl fn_801C6FF0
    lwz r19, 0x8(r1)
    mr r12, r26
    lwz r11, 0xc(r1)
    mr r3, r29
    lwz r10, 0x10(r1)
    mr r4, r20
    lwz r9, 0x14(r1)
    add r25, r25, r24
    lwz r8, 0x18(r1)
    lwz r7, 0x1c(r1)
    lwz r6, 0x20(r1)
    lwz r5, 0x24(r1)
    lwz r0, 0x28(r1)
    lfs f0, 0x2c(r1)
    stw r19, 0x58(r1)
    stw r11, 0x5c(r1)
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r7, 0x6c(r1)
    stw r6, 0x70(r1)
    stw r5, 0x74(r1)
    stw r0, 0x78(r1)
    stfs f0, 0x7c(r1)
    mtctr r12
    bctrl
    lfd f31, lbl_804A1B48
    mr r30, r3
    b lbl_801C7D90
lbl_801C7CD0:
    xoris r0, r25, 0x8000
    lwz r4, 0x58(r1)
    stw r0, 0x84(r1)
    fmr f1, f30
    lwz r19, 0x5c(r1)
    fmr f2, f29
    lfd f0, 0x80(r1)
    mr r3, r21
    lwz r20, 0x60(r1)
    fsubs f0, f0, f31
    lwz r27, 0x64(r1)
    lwz r12, 0x68(r1)
    mr r5, r22
    lwz r11, 0x6c(r1)
    mr r6, r23
    lwz r10, 0x70(r1)
    fmuls f3, f28, f0
    lwz r9, 0x74(r1)
    mr r7, r30
    lwz r0, 0x78(r1)
    mr r8, r28
    lfs f0, 0x7c(r1)
    stw r4, 0x30(r1)
    addi r4, r1, 0x58
    stw r19, 0x34(r1)
    stw r20, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r12, 0x40(r1)
    stw r11, 0x44(r1)
    stw r10, 0x48(r1)
    stw r9, 0x4c(r1)
    stw r0, 0x50(r1)
    stfs f0, 0x54(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x30
    addi r5, r1, 0x58
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C7D90:
    cmpwi r30, 0x0
    bne lbl_801C7CD0
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x8c(r1)
    mr r3, r21
    mr r6, r23
    addi r4, r1, 0x58
    lfd f0, 0x88(r1)
    addi r5, r1, 0x8
    fsubs f0, f0, f1
    fmuls f0, f28, f0
    stfs f0, 0x2c(r1)
    lbz r7, 0x14c(r31)
    lwz r8, 0xd4(r22)
    bl fn_801C7458
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    addi r11, r1, 0xd0
    lfd f28, 0xd0(r1)
    bl _restgpr_19
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_801C7E08
extern "C" asm void fn_801C7E08() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    stfd f28, 0xb0(r1)
    opword 0xF38100B8
    addi r11, r1, 0xb0
    bl _savegpr_19
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r22, r4
    lwz r12, 0x18(r12)
    mr r21, r3
    mr r23, r5
    mr r4, r29
    stw r0, 0x68(r1)
    lwz r31, 0x24(r29)
    stw r0, 0x70(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r21
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r21)
    mr r27, r3
    mr r3, r21
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r31)
    mr r26, r3
    lbz r3, 0x146(r31)
    extsb r4, r0
    lbz r0, 0x14e(r31)
    extsb r3, r3
    lfd f3, lbl_804A1B48
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x6c(r1)
    lfs f1, lbl_804A1B40
    cmpwi r0, 0x40
    stw r3, 0x74(r1)
    lfd f2, 0x68(r1)
    lfd f0, 0x70(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r29)
    fsubs f0, f0, f3
    fmuls f31, f1, f2
    fmuls f30, f1, f0
    beq lbl_801C7F38
    bge lbl_801C7F10
    cmpwi r0, 0x0
lbl_801C7F10:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B48
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fres f29, f0
    opword 0x105DE82A
    opword 0x103D0772
    opword 0x13A0107C
    b lbl_801C7F3C
lbl_801C7F38:
    lfs f29, lbl_804A1B44
lbl_801C7F3C:
    cmpwi r30, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801C7F54
    mr r25, r3
    li r24, -0x1
lbl_801C7F54:
    mr r12, r27
    mr r3, r29
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r27, r3
    stw r0, 0x74(r1)
    fmr f1, f31
    lfd f3, lbl_804A1B48
    fmr f2, f30
    lfd f0, 0x70(r1)
    mr r3, r21
    mr r5, r22
    fsubs f0, f0, f3
    mr r6, r23
    mr r7, r27
    mr r8, r28
    addi r4, r1, 0x18
    fmuls f3, f29, f0
    bl fn_801C6FF0
    add r25, r25, r24
    lwz r10, 0x18(r1)
    xoris r0, r25, 0x8000
    lwz r9, 0x1c(r1)
    stw r0, 0x6c(r1)
    lwz r8, 0x20(r1)
    lfd f1, lbl_804A1B48
    lfd f0, 0x68(r1)
    lwz r7, 0x24(r1)
    fsubs f0, f0, f1
    lwz r6, 0x28(r1)
    lwz r5, 0x2c(r1)
    lwz r4, 0x30(r1)
    fmuls f0, f29, f0
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r10, 0x40(r1)
    stw r9, 0x44(r1)
    stw r8, 0x48(r1)
    stw r7, 0x4c(r1)
    stw r6, 0x50(r1)
    stw r5, 0x54(r1)
    stw r4, 0x58(r1)
    stw r3, 0x5c(r1)
    stw r0, 0x60(r1)
    stfs f0, 0x64(r1)
    lwz r5, 0x3c(r29)
    b lbl_801C8038
lbl_801C8014:
    lhz r3, 0x42(r29)
    lwzx r5, r5, r3
    b lbl_801C8024
lbl_801C8020:
    lwzx r5, r5, r3
lbl_801C8024:
    cmpwi r5, 0x0
    beq lbl_801C8038
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801C8020
lbl_801C8038:
    cmpwi r5, 0x0
    beq lbl_801C804C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801C8014
lbl_801C804C:
    opword 0xE01600A4
    addi r4, r1, 0x18
    opword 0xE02500AC
    mr r3, r21
    opword 0xE0640000
    mr r6, r23
    opword 0x10400828
    opword 0xE02580B4
    opword 0xE01680AC
    add r25, r25, r24
    addi r5, r1, 0x40
    opword 0xF0410008
    opword 0x10400828
    opword 0xE0010008
    opword 0x1003002A
    opword 0xE0648008
    opword 0xF0418010
    opword 0xF0040000
    opword 0x1003102A
    opword 0xF0048008
    lbz r7, 0x14c(r31)
    lwz r8, 0xd4(r22)
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r27
    mtctr r12
    bctrl
    lfd f28, lbl_804A1B48
    mr r30, r3
    b lbl_801C8188
lbl_801C80C8:
    xoris r0, r25, 0x8000
    lwz r4, 0x40(r1)
    stw r0, 0x74(r1)
    fmr f1, f31
    lwz r19, 0x44(r1)
    fmr f2, f30
    lfd f0, 0x70(r1)
    mr r3, r21
    lwz r20, 0x48(r1)
    fsubs f0, f0, f28
    lwz r27, 0x4c(r1)
    lwz r12, 0x50(r1)
    mr r5, r22
    lwz r11, 0x54(r1)
    mr r6, r23
    lwz r10, 0x58(r1)
    fmuls f3, f29, f0
    lwz r9, 0x5c(r1)
    mr r7, r30
    lwz r0, 0x60(r1)
    mr r8, r28
    lfs f0, 0x64(r1)
    stw r4, 0x18(r1)
    addi r4, r1, 0x40
    stw r19, 0x1c(r1)
    stw r20, 0x20(r1)
    stw r27, 0x24(r1)
    stw r12, 0x28(r1)
    stw r11, 0x2c(r1)
    stw r10, 0x30(r1)
    stw r9, 0x34(r1)
    stw r0, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_801C6FF0
    lbz r7, 0x14c(r31)
    mr r3, r21
    lwz r8, 0xd4(r22)
    mr r6, r23
    addi r4, r1, 0x18
    addi r5, r1, 0x40
    bl fn_801C7458
    mr r12, r26
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    mr r30, r3
    add r25, r25, r24
lbl_801C8188:
    cmpwi r30, 0x0
    bne lbl_801C80C8
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    lfd f29, 0xc0(r1)
    opword 0xE38100B8
    addi r11, r1, 0xb0
    lfd f28, 0xb0(r1)
    bl _restgpr_19
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// asm_to_cpp: fn_801C81C8
extern "C" asm void fn_801C81C8() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r31, r1
    lwz r7, 0x0(r4)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r25, 0x24(r7)
    mr r30, r6
    lbz r24, 0x14c(r25)
    cmpwi r24, 0x3
    blt lbl_801C8948
    addi r3, r24, 0x1
    lwz r0, 0x0(r1)
    slwi r3, r3, 3
    neg r22, r3
    clrrwi r22, r22, 3
    stwux r0, r1, r22
    addic. r22, r1, 0x8
    beq lbl_801C8948
    xoris r0, r24, 0x8000
    lis r26, 0x4330
    stw r0, 0xc(r31)
    addi r23, r22, 0x8
    lfs f0, lbl_804A1B44
    li r21, 0x1
    stw r26, 0x8(r31)
    lfd f30, lbl_804A1B48
    lfd f2, 0x8(r31)
    lfs f1, lbl_804A1B68
    fsubs f2, f2, f30
    stfs f0, 0x4(r22)
    lfs f0, lbl_804A1B58
    lfs f31, lbl_804A1B6C
    fdivs f29, f1, f2
    stfs f0, 0x0(r22)
    b lbl_801C82B0
lbl_801C8280:
    xoris r0, r21, 0x8000
    stw r26, 0x8(r31)
    mr r3, r23
    addi r4, r23, 0x4
    stw r0, 0xc(r31)
    lfd f0, 0x8(r31)
    fsubs f0, f0, f30
    fmuls f0, f29, f0
    fmuls f1, f31, f0
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    addi r23, r23, 0x8
    addi r21, r21, 0x1
lbl_801C82B0:
    cmpw r21, r24
    blt lbl_801C8280
    slwi r0, r24, 3
    lfs f1, lbl_804A1B44
    add r3, r22, r0
    lfs f0, lbl_804A1B58
    stfs f1, 0x4(r3)
    stfsx f0, r22, r0
    stw r22, 0xd4(r28)
    lbz r0, 0x14e(r25)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801C8514
    bge lbl_801C82EC
    b lbl_801C82F8
lbl_801C82EC:
    cmpwi r0, 0x3
    bge lbl_801C82F8
    b lbl_801C8730
lbl_801C82F8:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C83F4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C832C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C835C
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C835C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C838C
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C838C:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C83BC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C83BC:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C83EC
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C83EC:
    addi r4, r4, 0x3
    bdnz lbl_801C832C
lbl_801C83F4:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C77FC
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8500
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8438:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8468
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8468:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8498
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8498:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C84C8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C84C8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C84F8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C84F8:
    addi r4, r4, 0x3
    bdnz lbl_801C8438
lbl_801C8500:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C77FC
    b lbl_801C8948
lbl_801C8514:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8610
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8548:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8578
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8578:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C85A8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C85A8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C85D8
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C85D8:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8608
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8608:
    addi r4, r4, 0x3
    bdnz lbl_801C8548
lbl_801C8610:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7AC0
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C871C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8654:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8684
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8684:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C86B4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C86B4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C86E4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C86E4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8714
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8714:
    addi r4, r4, 0x3
    bdnz lbl_801C8654
lbl_801C871C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7AC0
    b lbl_801C8948
lbl_801C8730:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C882C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8764:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8794
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8794:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C87C4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C87C4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C87F4
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C87F4:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8824
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8824:
    addi r4, r4, 0x3
    bdnz lbl_801C8764
lbl_801C882C:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7E08
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801C8938
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801C8870:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C88A0
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C88A0:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C88D0
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C88D0:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8900
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8900:
    lfs f0, lbl_804A1B58
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    beq lbl_801C8930
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B58
    stfs f0, -0x8000(r3)
lbl_801C8930:
    addi r4, r4, 0x3
    bdnz lbl_801C8870
lbl_801C8938:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl fn_801C7E08
lbl_801C8948:
    mr r10, r31
    opword 0xE3EA0068
    lfd f31, 0x60(r31)
    opword 0xE3CA0058
    lfd f30, 0x50(r31)
    opword 0xE3AA0048
    addi r11, r10, 0x40
    lfd f29, 0x40(r31)
    bl _restgpr_21
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_801C8980
extern "C" asm void fn_801C8980() {
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    stfd f31, 0x2a0(r1)
    opword 0xF3E102A8
    addi r11, r1, 0x2a0
    bl _savegpr_24
    lhz r30, 0x50(r5)
    mr r26, r3
    lwz r3, 0x24(r5)
    mr r27, r4
    cmpwi r30, 0x0
    mr r28, r5
    addi r31, r3, 0x9c
    beq lbl_801C91EC
    lfs f1, lbl_804A1B58
    lfs f0, 0x88(r4)
    lwz r29, 0x0(r4)
    lwz r25, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r29, 0x170(r1)
    stw r25, 0x174(r1)
    stw r12, 0x178(r1)
    stw r11, 0x17c(r1)
    stw r10, 0x180(r1)
    stw r9, 0x184(r1)
    stw r8, 0x188(r1)
    stw r7, 0x18c(r1)
    stw r6, 0x190(r1)
    stw r5, 0x194(r1)
    stw r3, 0x198(r1)
    stw r0, 0x19c(r1)
    beq lbl_801C8B38
    addi r3, r1, 0xc0
    bl GXGetProjectionv
    lfs f0, 0xc0(r1)
    fctiwz f0, f0
    stfd f0, 0x278(r1)
    lwz r0, 0x27c(r1)
    cmpwi r0, 0x1
    beq lbl_801C8B28
    bge lbl_801C8B38
    cmpwi r0, 0x0
    bge lbl_801C8A5C
    b lbl_801C8B38
lbl_801C8A5C:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x38
    bl PSMTXMultVec
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C8B14
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1B58
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C8AD4
    lfs f3, 0x88(r27)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x19c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x17c(r1)
    lfs f2, 0x18c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x17c(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8AD4:
    lfs f3, 0x88(r27)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x19c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x17c(r1)
    lfs f2, 0x18c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x17c(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8B14:
    lfs f1, 0x19c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x19c(r1)
    b lbl_801C8B38
lbl_801C8B28:
    lfs f1, 0x19c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x19c(r1)
lbl_801C8B38:
    mr r5, r28
    addi r3, r1, 0x1a0
    addi r4, r1, 0x170
    bl fn_801C0E98
    lfs f0, 0x1c8(r1)
    li r0, 0x0
    lfs f1, 0x1b8(r1)
    addi r3, r1, 0x25c
    lfs f2, 0x1a8(r1)
    addi r4, r1, 0x208
    stw r0, 0x274(r1)
    addi r5, r1, 0x2c
    stfs f2, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r4, r26
    mr r5, r31
    addi r3, r1, 0x98
    addi r6, r1, 0x1a0
    bl fn_801C920C
    lwz r3, 0x3c(r28)
    lfs f1, lbl_804A1B44
    b lbl_801C8BC8
lbl_801C8B98:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801C8BD0
    lfs f0, 0x98(r1)
    stfs f0, 0xcc(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0xd0(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0xd4(r3)
    lhz r0, 0x42(r28)
    lwzx r3, r3, r0
lbl_801C8BC8:
    cmpwi r3, 0x0
    bne lbl_801C8B98
lbl_801C8BD0:
    lbz r4, 0xad(r31)
    lhz r5, 0x0(r31)
    subi r3, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r3, r0
    lwz r25, 0x0(r27)
    extrwi r3, r5, 1, 20
    lfs f1, lbl_804A1B58
    srawi r0, r0, 31
    lfs f0, 0x88(r27)
    lwz r12, 0x4(r27)
    rlwinm r29, r0, 0, 28, 28
    neg r3, r3
    lwz r11, 0x8(r27)
    lwz r10, 0xc(r27)
    rlwimi r29, r3, 0, 27, 27
    lwz r9, 0x10(r27)
    fcmpu cr0, f1, f0
    lwz r8, 0x14(r27)
    lwz r7, 0x18(r27)
    lwz r6, 0x1c(r27)
    lwz r5, 0x20(r27)
    lwz r4, 0x24(r27)
    lwz r3, 0x28(r27)
    lwz r0, 0x2c(r27)
    stw r25, 0x140(r1)
    stw r12, 0x144(r1)
    stw r11, 0x148(r1)
    stw r10, 0x14c(r1)
    stw r9, 0x150(r1)
    stw r8, 0x154(r1)
    stw r7, 0x158(r1)
    stw r6, 0x15c(r1)
    stw r5, 0x160(r1)
    stw r4, 0x164(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    beq lbl_801C8D74
    addi r3, r1, 0xa4
    bl GXGetProjectionv
    lfs f0, 0xa4(r1)
    fctiwz f0, f0
    stfd f0, 0x278(r1)
    lwz r0, 0x27c(r1)
    cmpwi r0, 0x1
    beq lbl_801C8D64
    bge lbl_801C8D74
    cmpwi r0, 0x0
    bge lbl_801C8C98
    b lbl_801C8D74
lbl_801C8C98:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x20
    bl PSMTXMultVec
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C8D50
    lfs f1, 0x28(r1)
    lfs f0, lbl_804A1B58
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C8D10
    lfs f3, 0x88(r27)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D10:
    lfs f3, 0x88(r27)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D50:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
    b lbl_801C8D74
lbl_801C8D64:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
lbl_801C8D74:
    addi r3, r1, 0x140
    addi r4, r1, 0x1d8
    mr r5, r3
    bl PSMTXConcat
    rlwinm. r24, r29, 0, 28, 28
    beq lbl_801C8DE8
    addi r3, r1, 0x140
    addi r4, r1, 0x110
    bl PSMTXInverse
    cmpwi r3, 0x0
    beq lbl_801C8DC8
    lfs f2, 0x138(r1)
    lfs f1, 0x128(r1)
    lfs f0, 0x118(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x80(r1)
    stfs f2, 0x88(r1)
    stfs f0, 0x268(r1)
    stfs f1, 0x26c(r1)
    stfs f2, 0x270(r1)
    b lbl_801C8DE8
lbl_801C8DC8:
    lfs f1, lbl_804A1B58
    lfs f0, lbl_804A1B44
    stfs f1, 0x74(r1)
    stfs f1, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f1, 0x268(r1)
    stfs f1, 0x26c(r1)
    stfs f0, 0x270(r1)
lbl_801C8DE8:
    lbz r0, 0xb2(r31)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    bne lbl_801C8E00
    cmpwi r30, 0x3
    blt lbl_801C8E10
lbl_801C8E00:
    cmpwi r0, 0x0
    bne lbl_801C9020
    cmpwi r30, 0x2
    bge lbl_801C9020
lbl_801C8E10:
    lwz r12, 0x0(r26)
    mr r3, r26
    lhz r0, 0x0(r31)
    mr r4, r28
    lwz r12, 0x18(r12)
    rlwinm r25, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r27, r3
    mr r3, r26
    mr r4, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r29, r3
    mr r3, r26
    mr r4, r25
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r12, r29
    mr r26, r3
    mr r3, r28
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_801C91EC
    lfs f31, lbl_804A1B50
    addi r25, r1, 0x8c
    b lbl_801C9014
lbl_801C8E94:
    mr r12, r27
    mr r5, r29
    addi r3, r1, 0x8c
    addi r4, r1, 0x1a0
    mtctr r12
    bctrl
    cmpwi r24, 0x0
    bne lbl_801C8EC8
    mr r3, r25
    addi r4, r29, 0xcc
    addi r5, r1, 0x8
    bl fn_8030DEEC
    b lbl_801C8ED8
lbl_801C8EC8:
    mr r3, r25
    addi r4, r1, 0x268
    addi r5, r1, 0x8
    bl fn_8030DEEC
lbl_801C8ED8:
    opword 0xE021000C
    opword 0xE0018008
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    bge lbl_801C8EFC
    li r0, 0x0
    b lbl_801C8F1C
lbl_801C8EFC:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010008
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018010
    opword 0xF0410008
    opword 0x10400058
    opword 0xF0418010
lbl_801C8F1C:
    cmpwi r0, 0x0
    bne lbl_801C8F3C
    lfs f2, 0x25c(r1)
    lfs f1, 0x260(r1)
    lfs f0, 0x264(r1)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_801C8F3C:
    mr r4, r25
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8030DEEC
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    blt lbl_801C8F84
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010014
    opword 0x10400058
    opword 0xE001801C
    opword 0xF0410014
    opword 0x10400058
    opword 0xF041801C
lbl_801C8F84:
    lfs f0, 0x14(r1)
    mr r12, r26
    mr r3, r28
    mr r4, r29
    stfs f0, 0xcc(r29)
    lfs f0, 0x18(r1)
    stfs f0, 0xd0(r29)
    lfs f0, 0x1c(r1)
    stfs f0, 0xd4(r29)
    lfs f0, 0xb4(r29)
    lfs f1, 0x1c(r1)
    lfs f2, 0x94(r1)
    lfs f3, 0x10(r1)
    lfs f4, 0xb0(r29)
    lfs f5, 0x18(r1)
    lfs f6, 0x90(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0xac(r29)
    lfs f9, 0x14(r1)
    lfs f10, 0x8c(r1)
    lfs f11, 0x8(r1)
    stfs f10, 0xe4(r1)
    stfs f11, 0xe0(r1)
    stfs f9, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f7, 0xf0(r1)
    stfs f6, 0xf4(r1)
    stfs f5, 0xf8(r1)
    stfs f4, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f2, 0x104(r1)
    stfs f1, 0x108(r1)
    stfs f0, 0x10c(r1)
    mtctr r12
    bctrl
    mr r29, r3
lbl_801C9014:
    cmpwi r29, 0x0
    bne lbl_801C8E94
    b lbl_801C91EC
lbl_801C9020:
    lwz r5, 0x24(r28)
    mr r3, r26
    mr r4, r28
    mr r6, r27
    addi r5, r5, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r26)
    cmpwi r0, 0x0
    beq lbl_801C9070
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801C9070:
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
    addi r3, r1, 0x140
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r5, 0xd0(r26)
    mr r3, r26
    lwz r12, 0x0(r26)
    neg r4, r5
    lhz r0, 0x0(r31)
    or r4, r4, r5
    lwz r12, 0x10(r12)
    srwi r5, r4, 31
    rlwinm r4, r0, 0, 20, 20
    or r29, r29, r5
    mtctr r12
    bctrl
    mr r12, r3
    mr r3, r28
    mtctr r12
    bctrl
    mr r24, r3
    mr r3, r26
    mr r4, r24
    mr r5, r31
    mr r6, r27
    li r7, 0x1
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0xad(r31)
    cmpwi r0, 0x3
    beq lbl_801C91A8
    lfs f1, lbl_804A1B58
    mr r3, r26
    lfs f2, lbl_804A1B70
    mr r5, r29
    lfs f0, lbl_804A1B44
    addi r4, r1, 0x1a0
    stfs f2, 0x5c(r1)
    addi r6, r1, 0x68
    addi r7, r1, 0x5c
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    bl fn_801C6834
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C91EC
    lfs f2, lbl_804A1B58
    mr r3, r26
    lfs f1, lbl_804A1B44
    mr r5, r29
    lfs f0, lbl_804A1B70
    addi r4, r1, 0x1a0
    stfs f2, 0x44(r1)
    addi r6, r1, 0x50
    addi r7, r1, 0x44
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x54(r1)
    stfs f0, 0x58(r1)
    bl fn_801C6834
    b lbl_801C91EC
lbl_801C91A8:
    lhz r0, 0x0(r31)
    li r6, 0x0
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801C91D8
    lwz r3, 0xc8(r24)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801C91DC
lbl_801C91D8:
    li r6, 0x1
lbl_801C91DC:
    mr r3, r26
    mr r5, r29
    addi r4, r1, 0x1a0
    bl fn_801C81C8
lbl_801C91EC:
    opword 0xE3E102A8
    addi r11, r1, 0x2a0
    lfd f31, 0x2a0(r1)
    bl _restgpr_24
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

// asm_to_cpp: fn_801C920C
extern "C" asm void fn_801C920C() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lbz r0, 0xae(r5)
    stw r31, 0x7c(r1)
    mr r31, r6
    cmplwi r0, 0x7
    stw r30, 0x78(r1)
    mr r30, r3
    bne lbl_801C9374
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801C9284
    lis r4, jumptable_80360944@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80360944@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lfs f2, 0x88(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f1, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
lbl_801C9284:
    lfs f2, 0x8c(r6)
    lfs f1, 0x7c(r6)
    lfs f0, 0x6c(r6)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
    lfs f2, 0x90(r6)
    lfs f1, 0x80(r6)
    lfs f0, 0x70(r6)
    stfs f1, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801C942C
    lfs f3, 0x7c(r6)
    lfs f2, 0x6c(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f2, 0x14(r1)
    lfs f4, 0x8c(r6)
    stfs f3, 0x18(r1)
    lfs f2, 0x88(r6)
    lfs f5, 0x80(r6)
    lfs f3, 0x70(r6)
    lfs f6, 0x90(r6)
    stfs f0, 0x20(r1)
    opword 0xE0E10014
    stfs f1, 0x24(r1)
    opword 0xE0010020
    stfs f4, 0x1c(r1)
    opword 0x1000382A
    stfs f2, 0x28(r1)
    opword 0xE0E1801C
    opword 0xF001002C
    opword 0xE0018028
    stfs f3, 0x8(r1)
    opword 0x1000382A
    opword 0xE021002C
    stfs f5, 0xc(r1)
    opword 0xE0410008
    stfs f6, 0x10(r1)
    opword 0x1021102A
    opword 0xE0418010
    opword 0xF0018034
    opword 0xF0210038
    opword 0x1020102A
    lfs f2, 0x38(r1)
    opword 0xF0218040
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801C942C
lbl_801C9374:
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801C93C0
    lis r4, jumptable_803608E0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_803608E0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r5, lbl_803E6550@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6550@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801C942C
lbl_801C93C0:
    lfs f2, 0x98(r6)
    lfs f1, 0x9c(r6)
    lfs f0, 0xa0(r6)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801C9494
    lis r5, lbl_803E6568@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801C942C
    lfs f0, lbl_804A1B44
    addi r4, r6, 0x8
    addi r5, r1, 0x68
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801C942C:
    opword 0xE03E0004
    opword 0xE05E8000
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9454
    li r0, 0x0
    b lbl_801C9474
lbl_801C9454:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C9474:
    cmpwi r0, 0x0
    bne lbl_801C9494
    lfs f2, 0x98(r31)
    lfs f1, 0x9c(r31)
    lfs f0, 0xa0(r31)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_801C9494:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_801C94AC
extern "C" asm void fn_801C94AC() {
    nofralloc
    lwz r4, 0x24(r4)
    lbz r0, 0x14a(r4)
    cmplwi r0, 0x7
    bgt lbl_801C9554
    lis r3, jumptable_803609A8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_803609A8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
    lis r3, CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@ha
    addi r3, r3, CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@l
    blr
    lis r3, fn_801C9560@ha
    addi r3, r3, fn_801C9560@l
    blr
    lis r3, CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@ha
    addi r3, r3, CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@l
    blr
    lbz r0, 0x14e(r4)
    clrlwi r0, r0, 29
    cmpwi r0, 0x2
    beq lbl_801C953C
    bge lbl_801C9548
    cmpwi r0, 0x1
    bge lbl_801C9530
    b lbl_801C9548
lbl_801C9530:
    lis r3, fn_801C98E0@ha
    addi r3, r3, fn_801C98E0@l
    blr
lbl_801C953C:
    lis r3, fn_801C9B90@ha
    addi r3, r3, fn_801C9B90@l
    blr
lbl_801C9548:
    lis r3, fn_801C9678@ha
    addi r3, r3, fn_801C9678@l
    blr
lbl_801C9554:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// asm_to_cpp: fn_801C9560
extern "C" asm void fn_801C9560() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r4)
    lhz r7, 0x42(r6)
    add r6, r5, r7
    lwz r6, 0x4(r6)
    b lbl_801C9598
lbl_801C9590:
    add r6, r6, r7
    lwz r6, 0x4(r6)
lbl_801C9598:
    cmpwi r6, 0x0
    beq lbl_801C95AC
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801C9590
lbl_801C95AC:
    cmpwi r6, 0x0
    beq lbl_801C95D8
    opword 0xE02500AC
    opword 0xE00600AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00680B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801C95F8
lbl_801C95D8:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801C95F8:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9620
    li r0, 0x0
    b lbl_801C9640
lbl_801C9620:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C9640:
    cmpwi r0, 0x0
    bne lbl_801C9660
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C9660:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C9678
extern "C" asm void fn_801C9678() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801C96B4
lbl_801C96B0:
    lwzx r4, r4, r6
lbl_801C96B4:
    cmpwi r4, 0x0
    beq lbl_801C96C8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C96B0
lbl_801C96C8:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C96DC
lbl_801C96D4:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C96DC:
    cmpwi r31, 0x0
    beq lbl_801C96F0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C96D4
lbl_801C96F0:
    lfs f0, lbl_804A1B58
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801C9794
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9750
    li r0, 0x0
    b lbl_801C9770
lbl_801C9750:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C9770:
    cmpwi r0, 0x0
    bne lbl_801C9794
    lfs f0, lbl_804A1B58
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C9794:
    lfs f0, lbl_804A1B58
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C9838
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE07F80B4
    opword 0xE05E80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C97F4
    li r0, 0x0
    b lbl_801C9814
lbl_801C97F4:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C9814:
    cmpwi r0, 0x0
    bne lbl_801C9838
    lfs f0, lbl_804A1B58
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C9838:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9880
    li r0, 0x0
    b lbl_801C98A0
lbl_801C9880:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C98A0:
    cmpwi r0, 0x0
    bne lbl_801C98C0
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C98C0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C98E0
extern "C" asm void fn_801C98E0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r6, 0x0(r4)
    lhz r4, 0x42(r6)
    lwzx r7, r5, r4
    b lbl_801C991C
lbl_801C9918:
    lwzx r7, r7, r4
lbl_801C991C:
    cmpwi r7, 0x0
    beq lbl_801C9930
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C9918
lbl_801C9930:
    cmpwi r7, 0x0
    bne lbl_801C9978
    lwz r7, 0x3c(r6)
    b lbl_801C9964
lbl_801C9940:
    lhz r3, 0x42(r6)
    lwzx r7, r7, r3
    b lbl_801C9950
lbl_801C994C:
    lwzx r7, r7, r3
lbl_801C9950:
    cmpwi r7, 0x0
    beq lbl_801C9964
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C994C
lbl_801C9964:
    cmpwi r7, 0x0
    beq lbl_801C9978
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801C9940
lbl_801C9978:
    add r3, r5, r4
    lwz r28, 0x4(r3)
    b lbl_801C998C
lbl_801C9984:
    add r3, r28, r4
    lwz r28, 0x4(r3)
lbl_801C998C:
    cmpwi r28, 0x0
    beq lbl_801C99A0
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801C9984
lbl_801C99A0:
    cmpwi r28, 0x0
    bne lbl_801C99D0
    lwz r28, 0x38(r6)
    b lbl_801C99BC
lbl_801C99B0:
    lhz r0, 0x42(r6)
    add r3, r28, r0
    lwz r28, 0x4(r3)
lbl_801C99BC:
    cmpwi r28, 0x0
    beq lbl_801C99D0
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801C99B0
lbl_801C99D0:
    opword 0xE06700AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06780B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9A18
    li r0, 0x0
    b lbl_801C9A38
lbl_801C9A18:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C9A38:
    cmpwi r0, 0x0
    bne lbl_801C9A5C
    lfs f0, lbl_804A1B58
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C9A5C:
    opword 0xE07C00AC
    opword 0xE05F00AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE07C80B4
    opword 0xE05F80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9AA4
    li r0, 0x0
    b lbl_801C9AC4
lbl_801C9AA4:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C9AC4:
    cmpwi r0, 0x0
    bne lbl_801C9AE8
    lfs f0, lbl_804A1B58
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C9AE8:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03D0000
    opword 0x10231028
    opword 0xE05D8000
    opword 0xF03D8008
    opword 0xE03D0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9B30
    li r0, 0x0
    b lbl_801C9B50
lbl_801C9B30:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05D0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05D8008
    opword 0xF01D0000
    opword 0x10020058
    opword 0xF01D8008
lbl_801C9B50:
    cmpwi r0, 0x0
    bne lbl_801C9B70
    lfs f0, 0x98(r30)
    stfs f0, 0x0(r29)
    lfs f0, 0x9c(r30)
    stfs f0, 0x4(r29)
    lfs f0, 0xa0(r30)
    stfs f0, 0x8(r29)
lbl_801C9B70:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C9B90
extern "C" asm void fn_801C9B90() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801C9BCC
lbl_801C9BC8:
    lwzx r4, r4, r6
lbl_801C9BCC:
    cmpwi r4, 0x0
    beq lbl_801C9BE0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C9BC8
lbl_801C9BE0:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C9BF4
lbl_801C9BEC:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C9BF4:
    cmpwi r31, 0x0
    beq lbl_801C9C08
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C9BEC
lbl_801C9C08:
    lfs f0, lbl_804A1B58
    cmpwi r4, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_801C9C7C
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF0210014
    opword 0x10231028
    opword 0xE0418014
    opword 0xF021801C
    opword 0xE0210018
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801C9C7C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410014
    opword 0x10020058
    opword 0xE041801C
    opword 0xF0010014
    opword 0x10020058
    opword 0xF001801C
lbl_801C9C7C:
    cmpwi r31, 0x0
    beq lbl_801C9CA8
    opword 0xE05F00AC
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05F80B4
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
    b lbl_801C9CC8
lbl_801C9CA8:
    opword 0xE05D00A4
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05D80AC
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
lbl_801C9CC8:
    opword 0xE021000C
    opword 0xE0418008
    opword 0x10210072
    lfs f0, lbl_804A1B50
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801C9D04
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410008
    opword 0x10020058
    opword 0xE0418010
    opword 0xF0010008
    opword 0x10020058
    opword 0xF0018010
lbl_801C9D04:
    opword 0xE0610014
    opword 0xE0410008
    lfs f0, lbl_804A1B50
    opword 0x10231028
    opword 0xE061801C
    opword 0xE0418010
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C9D4C
    li r0, 0x0
    b lbl_801C9D6C
lbl_801C9D4C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C9D6C:
    cmpwi r0, 0x0
    bne lbl_801C9D8C
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C9D8C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
