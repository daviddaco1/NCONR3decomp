#include <nw4r/ef.h>

namespace nw4r {
namespace ef {

static u8 billboard_tex0_u8[] ALIGN(32) = {0x00, 0x01, 0x00, 0x00,
                                           0x01, 0x00, 0x01, 0x01};

DrawBillboardStrategy::DrawBillboardStrategy() {}

void DrawBillboardStrategy::Draw(const DrawInfo& rInfo,
                                 ParticleManager* pManager) {

    switch (pManager->mResource->GetEmitterDesc()->typeOption) {
    case EmitterDrawSetting::ASSIST_BB_NORMAL: {
        DrawNormalBillboard(rInfo, pManager);
        break;
    }

    case EmitterDrawSetting::ASSIST_BB_Y: {
        DrawYBillboard(rInfo, pManager);
        break;
    }

    case EmitterDrawSetting::ASSIST_BB_DIRECTIONAL: {
        DrawDirectionalBillboard(rInfo, pManager);
        break;
    }
    }
}

inline void DrawBillboardStrategy::DispPolygon(const math::VEC3& rP,
                                        const math::VEC3& rD1,
                                        const math::VEC3& rD2, bool flags) {

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    {
        GXPosition(rP - rD1);
        if (flags != 0) {
            GXTexCoord1x8(0);
        }

        GXPosition(rP - rD2);
        if (flags != 0) {
            GXTexCoord1x8(1);
        }

        GXPosition(rP + rD1);
        if (flags != 0) {
            GXTexCoord1x8(2);
        }

        GXPosition(rP + rD2);
        if (flags != 0) {
            GXTexCoord1x8(3);
        }
    }
    GXEnd();
}

void DrawBillboardStrategy::DrawNormalBillboard(const DrawInfo& rInfo,
                                                ParticleManager* pManager) {

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    InitGraphics(rInfo, pManager);

    const math::MTX34& rInfoMtx = *rInfo.GetViewMtx();

    math::VEC2 pivot;
    pivot.x = pDesc->pivotX / 100.0f;
    pivot.y = pDesc->pivotY / 100.0f;

    math::MTX34 viewMtx;
    pManager->CalcGlobalMtx(&viewMtx);
    math::MTX34Mult(&viewMtx, &rInfoMtx, &viewMtx);

    f32 vx = math::FSqrt(viewMtx._00 * viewMtx._00 + viewMtx._10 * viewMtx._10 +
                         viewMtx._20 * viewMtx._20);

    f32 vy = math::FSqrt(viewMtx._01 * viewMtx._01 + viewMtx._11 * viewMtx._11 +
                         viewMtx._21 * viewMtx._21);

    f32 vz = 0.0f;

    f32 rc, rs;

    if (rInfoMtx._11 == 0.0f) {
        rs = 0.0f;
        rc = 1.0f;
    } else {
        f32 mag = math::FSqrt(rInfoMtx._01 * rInfoMtx._01 +
                              rInfoMtx._11 * rInfoMtx._11);
        f32 denom = 1.0f / mag;
        rs = -rInfoMtx._01 * denom;
        rc = rInfoMtx._11 * denom;
    }

    GetFirstDrawParticleFunc pGetFirstFunc = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    bool first = true;

    for (Particle* pIt = pGetFirstFunc(pManager); pIt != NULL;
         pIt = pGetNextFunc(pManager, pIt)) {

        f32 sx = pIt->Draw_GetSizeX();
        if (sx < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        f32 sy = pIt->Draw_GetSizeY();
        if (sy < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        SetupGP(pIt, rSetting, rInfo, first, false);
        first = false;

        DispParticle_Normal(pIt, viewMtx, vx, vy, vz, rc, rs, sx, sy, pivot,
                            mNumTexmap > 0);
    }
}

inline void DrawBillboardStrategy::DispParticle_Normal(
    Particle* pParticle, const math::MTX34& rViewMtx, f32 vx, f32 vy, f32 vz,
    f32 rc, f32 rs, f32 sx, f32 sy, const math::VEC2& rPivot, bool flags) {

#pragma unused(vz)

    math::VEC3 rot;
    pParticle->Draw_GetRotate(&rot);

    math::VEC3 p0;  // sp+24
    math::VEC3 d0;  // sp+30
    math::VEC3 d1;  // sp+3c
    math::VEC3 pos; // sp+48

    math::VEC3Transform(&pos, &rViewMtx, &pParticle->mParameter.mPosition);

    f32 px = rPivot.x;
    f32 py = rPivot.y;

    f32 vx_rc = vx * rc;
    f32 vx_rs = vx * rs;
    f32 vy_rc = vy * rc;
    f32 vy_rs = vy * rs;

    if (rot.z != 0.0f) {
        f32 cr, sr;
        math::SinCosRad(&sr, &cr, -rot.z);

        f32 cr_sx = cr * sx;
        f32 sr_sx = sr * sx;
        f32 cr_sy = cr * sy;
        f32 sr_sy = sr * sy;
        f32 rc_sx = rc * sx;
        f32 rs_sy = rs * sy;
        f32 rs_sx = rs * sx;
        f32 rc_sy = rc * sy;

        f32 exp0 = (px - cr_sx * px) - sr_sy * py;
        f32 exp1 = (py + sr_sx * px) - cr_sy * py;

        p0.x = vx_rc * exp0 + vy_rs * exp1 + pos.x;
        p0.y = vx_rs * exp0 - vy_rc * exp1 + pos.y;
        p0.z = pos.z;

        f32 vx_rc_cr_sx = vx_rc * cr_sx;
        f32 vx_rc_sr_sy = vx_rc * sr_sy;
        f32 vy_rs_sr_sx = vy_rs * sr_sx;
        f32 vy_rs_cr_sy = vy_rs * cr_sy;
        f32 vx_rs_cr_sx = vx_rs * cr_sx;
        f32 vx_rs_sr_sy = vx_rs * sr_sy;
        f32 vy_rc_sr_sx = vy_rc * sr_sx;
        f32 vy_rc_cr_sy = vy_rc * cr_sy;

        d0.x = vx_rc_cr_sx - vx_rc_sr_sy + vy_rs_sr_sx - vy_rs_cr_sy;
        d0.y = vx_rs_cr_sx - vx_rs_sr_sy + vy_rc_sr_sx + vy_rc_cr_sy;
        d0.z = 0.0f;

        d1.x = vx_rc_cr_sx + vx_rc_sr_sy - vy_rs_sr_sx + vy_rs_cr_sy;
        d1.y = vx_rs_cr_sx + vx_rs_sr_sy + vy_rc_sr_sx - vy_rc_cr_sy;
        d1.z = 0.0f;
    } else {
        f32 exp0 = px - sx * px;
        f32 exp1 = py - sy * py;

        p0.x = vx_rc * exp0 + vy_rs * exp1 + pos.x;
        p0.y = vx_rs * exp0 - vy_rc * exp1 + pos.y;
        p0.z = pos.z;

        f32 vx_rc_sx = vx_rc * sx;
        f32 vy_rs_sy = vy_rs * sy;
        f32 vx_rs_sx = vx_rs * sx;
        f32 vy_rc_sy = vy_rc * sy;

        d0.x = vx_rc_sx - vy_rs_sy;
        d0.y = vx_rs_sx + vy_rc_sy;
        d0.z = 0.0f;

        d1.x = vx_rc_sx + vy_rs_sy;
        d1.y = vx_rs_sx - vy_rc_sy;
        d1.z = 0.0f;
    }

    DispPolygon(p0, d0, d1, flags);
}

void DrawBillboardStrategy::DrawYBillboard(const DrawInfo& rInfo,
                                           ParticleManager* pManager) {

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    InitGraphics(rInfo, pManager);

    const math::MTX34& rInfoMtx = *rInfo.GetViewMtx();

    math::VEC2 pivot(pDesc->pivotX / 100.0f, pDesc->pivotY / 100.0f);

    math::MTX34 viewMtx;
    pManager->CalcGlobalMtx(&viewMtx);
    math::MTX34Mult(&viewMtx, &rInfoMtx, &viewMtx);

    f32 vx = math::FSqrt(viewMtx._00 * viewMtx._00 + viewMtx._10 * viewMtx._10 +
                         viewMtx._20 * viewMtx._20);

    f32 vy = math::FSqrt(viewMtx._01 * viewMtx._01 + viewMtx._11 * viewMtx._11 +
                         viewMtx._21 * viewMtx._21);

    f32 vz = 0.0f;

    f32 rs, rc;

    if (rInfoMtx._11 == 0.0f) {
        rs = 0.0f;
        rc = 1.0f;
    } else {
        f32 mag = math::FSqrt(rInfoMtx._11 * rInfoMtx._11 +
                              rInfoMtx._21 * rInfoMtx._21);
        f32 denom = 1.0f / mag;
        rc = rInfoMtx._21 * denom;
        rs = rInfoMtx._11 * denom;
    }

    GetFirstDrawParticleFunc pGetFirstFunc = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    bool first = true;

    for (Particle* pIt = pGetFirstFunc(pManager); pIt != NULL;
         pIt = pGetNextFunc(pManager, pIt)) {

        if (pIt->GetLifeStatus() != ReferencedObject::NW4R_EF_LS_ACTIVE) {
            continue;
        }

        f32 sx = pIt->Draw_GetSizeX();
        if (sx < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        f32 sy = pIt->Draw_GetSizeY();
        if (sy < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        SetupGP(pIt, rSetting, rInfo, first, false);
        first = false;

        DispParticle_YBillboard(pIt, viewMtx, vx, vy, vz, rc, rs, sx, sy, pivot,
                                mNumTexmap > 0);
    }
}

inline void DrawBillboardStrategy::DispParticle_YBillboard(
    Particle* pParticle, const math::MTX34& rViewMtx, f32 vx, f32 vy, f32 vz,
    f32 rc, f32 rs, f32 sx, f32 sy, const math::VEC2& rPivot, bool flags) {

#pragma unused(vz)

    math::VEC3 rot;
    pParticle->Draw_GetRotate(&rot);

    math::VEC3 pos;
    math::VEC3 p0;
    math::VEC3 d0;
    math::VEC3 d1;

    math::VEC3Transform(&pos, &rViewMtx, &pParticle->mParameter.mPosition);

    f32 vy_rs = vy * rs;
    f32 vy_rc = vy * rc;

    f32 px = rPivot.x;
    f32 py = rPivot.y;

    if (rot.z != 0.0f) {
        f32 sr, cr;
        math::SinCosRad(&sr, &cr, -rot.z);

        f32 cr_sx = cr * sx;
        f32 sr_sx = sr * sx;
        f32 cr_sy = cr * sy;
        f32 sr_sy = sr * sy;

        f32 exp1 = (-py - sr_sx * px) + cr_sy * py;
        f32 exp0 = (px - cr_sx * px) - sr_sy * py;

        p0.x = vx * exp0 + pos.x;
        p0.y = vy_rs * exp1 + pos.y;
        p0.z = vy_rc * exp1 + pos.z;

        d0.x = vx * (cr_sx - sr_sy);
        d0.y = vy_rs * (sr_sx + cr_sy);
        d0.z = vy_rc * (sr_sx + cr_sy);

        d1.x = vx * (cr_sx + sr_sy);
        d1.y = vy_rs * (sr_sx - cr_sy);
        d1.z = vy_rc * (sr_sx - cr_sy);
    } else {
        p0.x = vx * (px - px * sx) + pos.x;
        p0.y = vy_rs * (py * sy - py) + pos.y;
        p0.z = vy_rc * (py * sy - py) + pos.z;

        d0.x = vx * sx;
        d0.y = vy_rs * sy;
        d0.z = vy_rc * sy;

        d1.x = vx * sx;
        d1.y = -vy_rs * sy;
        d1.z = -vy_rc * sy;
    }

    DispPolygon(p0, d0, d1, flags);
}

void DrawBillboardStrategy::DrawDirectionalBillboard(const DrawInfo& rInfo,
                                                     ParticleManager* pManager) {

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    InitGraphics(rInfo, pManager);

    math::VEC2 pivot;
    pivot.x = pDesc->pivotX / 100.0f;
    pivot.y = pDesc->pivotY / 100.0f;

    math::MTX34 viewMtx;
    pManager->CalcGlobalMtx(&viewMtx);
    math::MTX34Mult(&viewMtx, rInfo.GetViewMtx(), &viewMtx);

    f32 vx = math::FSqrt(viewMtx._00 * viewMtx._00 + viewMtx._10 * viewMtx._10 +
                         viewMtx._20 * viewMtx._20);

    f32 vy = math::FSqrt(viewMtx._01 * viewMtx._01 + viewMtx._11 * viewMtx._11 +
                         viewMtx._21 * viewMtx._21);

    f32 vz = 0.0f;

    AheadContext context(*rInfo.GetViewMtx(), pManager);
    CalcAheadFunc pCalcAheadFunc = GetCalcAheadFunc(pManager);

    GetFirstDrawParticleFunc pGetFirstFunc = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    bool first = true;

    for (Particle* pIt = pGetFirstFunc(pManager); pIt != NULL;
         pIt = pGetNextFunc(pManager, pIt)) {

        if (pIt->GetLifeStatus() != ReferencedObject::NW4R_EF_LS_ACTIVE) {
            continue;
        }

        f32 sx = pIt->Draw_GetSizeX();
        if (sx < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        f32 sy = pIt->Draw_GetSizeY();
        if (sy < std::numeric_limits<f32>::epsilon()) {
            continue;
        }

        SetupGP(pIt, rSetting, rInfo, first, false);
        first = false;

        math::VEC3 dir;
        pCalcAheadFunc(&dir, &context, pIt);
        math::VEC3TransformNormal(&dir, &viewMtx, &dir);

        f32 rc, rs;

        if (dir.y == 0.0f) {
            rs = 0.0f;
            rc = 1.0f;
        } else {
            f32 mag = math::FSqrt(dir.x * dir.x + dir.y * dir.y);
            f32 denom = 1.0f / mag;
            rs = -dir.x * denom;
            rc = dir.y * denom;
        }

        // Stretch along the direction of movement
        f32 stretch = 1.0f;
        if (pDesc->typeOption0 != 0) {
            math::VEC3 move;
            pIt->GetMoveDir(&move);

            stretch += 0.5f * math::FSqrt(math::VEC3Dot(&move, &move)) / sy;
        }

        DispParticle_Directional(pIt, viewMtx, vx, vy, vz, rc, rs, sx, sy,
                                 stretch, pivot, mNumTexmap > 0);
    }
}

inline void DrawBillboardStrategy::DispParticle_Directional(
    Particle* pParticle, const math::MTX34& rViewMtx, f32 vx, f32 vy, f32 vz,
    f32 rc, f32 rs, f32 sx, f32 sy, f32 stretch, const math::VEC2& rPivot,
    bool flags) {

#pragma unused(vz)

    math::VEC3 pos;
    math::VEC3 p0;
    math::VEC3 d0;
    math::VEC3 d1;

    math::VEC3Transform(&pos, &rViewMtx, &pParticle->mParameter.mPosition);

    f32 px = rPivot.x;
    f32 py = rPivot.y;

    f32 vx_rc = vx * rc;
    f32 vx_rs = vx * rs;
    f32 vy_rc = vy * rc;
    f32 vy_rs = vy * rs;

    p0.z = pos.z;
    p0.y = vx_rs * (px - sx * px) - vy_rc * (sy * (stretch + py - 1.0f) - py) + pos.y;
    p0.x = vx_rc * (px - sx * px) + vy_rs * (sy * (stretch + py - 1.0f) - py) + pos.x;

    f32 vx_rc_sx = vx_rc * sx;
    f32 vy_rs_sy = stretch * (vy_rs * sy);
    f32 vx_rs_sx = vx_rs * sx;
    f32 vy_rc_sy = stretch * (vy_rc * sy);

    d0.x = vx_rc_sx - vy_rs_sy;
    d0.y = vx_rs_sx + vy_rc_sy;
    d0.z = 0.0f;

    d1.x = vx_rc_sx + vy_rs_sy;
    d1.y = vx_rs_sx - vy_rc_sy;
    d1.z = 0.0f;

    DispPolygon(p0, d0, d1, flags);
}

void DrawBillboardStrategy::CalcZOffset(math::MTX34* pMtx,
                                        const ParticleManager* pManager,
                                        const DrawInfo& rInfo, f32 offsetZ) {

    f32 proj[GX_PROJECTION_SZ];
    GXGetProjectionv(proj);

    switch (static_cast<GXProjectionType>(proj[0])) {
    case GX_PERSPECTIVE: {
        math::MTX34 glbMtx;
        pManager->mManagerEM->CalcGlobalMtx(&glbMtx);

        math::VEC3 pos(glbMtx._03, glbMtx._13, glbMtx._23);
        math::VEC3TransformCoord(&pos, rInfo.GetViewMtx(), &pos);

        if (Normalize(&pos)) {
            if (pos.z >= 0.0f) {
                pMtx->_03 += pos.x * offsetZ;
                pMtx->_13 += pos.y * offsetZ;
                pMtx->_23 += pos.z * offsetZ;
            } else {
                pMtx->_03 -= pos.x * offsetZ;
                pMtx->_13 -= pos.y * offsetZ;
                pMtx->_23 -= pos.z * offsetZ;
            }
        }
        break;
    }

    case GX_ORTHOGRAPHIC: {
        pMtx->_23 += offsetZ;
        break;
    }

    default: {
        break;
    }
    }
}

void DrawBillboardStrategy::InitGraphics(const DrawInfo& rInfo,
                                         ParticleManager* pManager) {

    const EmitterDrawSetting& rSetting =
        *pManager->mResource->GetEmitterDrawSetting();

    InitTexture(rSetting);
    InitTev(rSetting, rInfo);
    InitColor(pManager, rSetting, rInfo);

    GXEnableTexOffsets(GX_TEXCOORD0, TRUE, TRUE);

    GXSetArray(GX_VA_TEX0, billboard_tex0_u8, 2);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);

    if (mNumTexmap > 0) {
        GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
    }

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_U8, 0);

    math::MTX34 ident;
    math::MTX34Identity(&ident);
    GXLoadPosMtxImm(ident, GX_PNMTX0);
    GXSetCurrentMtx(GX_PNMTX0);
}

DrawStrategyImpl::CalcAheadFunc
DrawBillboardStrategy::GetCalcAheadFunc(ParticleManager* pManager) {

    switch (pManager->mResource->GetEmitterDesc()->typeDir) {
    case EmitterDrawSetting::AHEAD_BB_SPEED: {
        return CalcAhead_Speed;
    }

    case EmitterDrawSetting::AHEAD_BB_EMITTER_CENTER: {
        return CalcAhead_EmitterCenter;
    }

    case EmitterDrawSetting::AHEAD_BB_EMITTER_DESIGN: {
        return CalcAhead_EmitterDesign;
    }

    case EmitterDrawSetting::AHEAD_BB_PARTICLE: {
        return CalcAhead_Particle;
    }

    default: {
        return CalcAhead_Speed;
    }
    }
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C460;
extern "C" float lbl_804A1AA0;
extern "C" float lbl_804A1AA4;
extern "C" float lbl_804A1AA8;
extern "C" float lbl_804A1AAC;
extern "C" float lbl_804A1AB0;
extern "C" float lbl_804A1AB8;
extern "C" float lbl_804A1AC0;
extern "C" float lbl_804A1AC8;
extern "C" void CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restgpr_18();
extern "C" void _savegpr_18();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BA138();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C0E98();
extern "C" void fn_801C11B8();
extern "C" void fn_801C11F4();
extern "C" void fn_801C1BBC();
extern "C" void fn_801C2408();
extern "C" void fn_801C2BA8();
extern "C" void fn_801C2C78();
extern "C" void fn_801C2CF4();
extern "C" void fn_801C2DC8();
extern "C" void fn_801C2EA0();
extern "C" void fn_801C2FB0();

// asm_to_cpp: fn_801C11B8
extern "C" asm void fn_801C11B8() {
    nofralloc
    lwz r6, 0x24(r5)
    lbz r0, 0x149(r6)
    cmpwi r0, 0x2
    beq lbl_801C11EC
    bge lbl_801C11DC
    cmpwi r0, 0x0
    beq lbl_801C11E4
    bge lbl_801C11E8
    blr
lbl_801C11DC:
    cmpwi r0, 0x4
    bgelr
lbl_801C11E4:
    b fn_801C11F4
lbl_801C11E8:
    b fn_801C1BBC
lbl_801C11EC:
    b fn_801C2408
    blr
}

// asm_to_cpp: fn_801C11F4
extern "C" asm void fn_801C11F4() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    opword 0xF3E102C8
    stfd f30, 0x2b0(r1)
    opword 0xF3C102B8
    stfd f29, 0x2a0(r1)
    opword 0xF3A102A8
    stfd f28, 0x290(r1)
    opword 0xF3810298
    stfd f27, 0x280(r1)
    opword 0xF3610288
    stfd f26, 0x270(r1)
    opword 0xF3410278
    stfd f25, 0x260(r1)
    opword 0xF3210268
    stfd f24, 0x250(r1)
    opword 0xF3010258
    stfd f23, 0x240(r1)
    opword 0xF2E10248
    stfd f22, 0x230(r1)
    opword 0xF2C10238
    stfd f21, 0x220(r1)
    opword 0xF2A10228
    stfd f20, 0x210(r1)
    opword 0xF2810218
    stfd f19, 0x200(r1)
    opword 0xF2610208
    stfd f18, 0x1f0(r1)
    opword 0xF24101F8
    stfd f17, 0x1e0(r1)
    opword 0xF22101E8
    stfd f16, 0x1d0(r1)
    opword 0xF20101D8
    stfd f15, 0x1c0(r1)
    opword 0xF1E101C8
    stfd f14, 0x1b0(r1)
    opword 0xF1C101B8
    addi r11, r1, 0x1b0
    bl _savegpr_18
    lfs f13, lbl_804A1AA0
    lis r21, 0x4330
    lfs f7, 0x88(r4)
    mr r24, r3
    lwz r20, 0x0(r4)
    mr r26, r5
    lwz r19, 0x4(r4)
    fcmpu cr0, f13, f7
    lwz r12, 0x8(r4)
    mr r25, r4
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r21, 0x140(r1)
    stw r21, 0x148(r1)
    stw r20, 0x110(r1)
    stw r19, 0x114(r1)
    stw r12, 0x118(r1)
    stw r11, 0x11c(r1)
    stw r10, 0x120(r1)
    stw r9, 0x124(r1)
    stw r8, 0x128(r1)
    stw r7, 0x12c(r1)
    stw r6, 0x130(r1)
    stw r5, 0x134(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    beq lbl_801C142C
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f7, 0x90(r1)
    fctiwz f7, f7
    stfd f7, 0x150(r1)
    lwz r0, 0x154(r1)
    cmpwi r0, 0x1
    beq lbl_801C141C
    bge lbl_801C142C
    cmpwi r0, 0x0
    bge lbl_801C1350
    b lbl_801C142C
lbl_801C1350:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x84
    bl PSMTXMultVec
    addi r3, r1, 0x84
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C1408
    lfs f13, 0x8c(r1)
    lfs f7, lbl_804A1AA0
    fcmpo cr0, f13, f7
    opword 0x4C411382
    bne lbl_801C13C8
    lfs f15, 0x88(r25)
    lfs f16, 0x84(r1)
    lfs f14, 0x88(r1)
    fmuls f13, f13, f15
    fmuls f17, f16, f15
    lfs f7, 0x13c(r1)
    fmuls f15, f14, f15
    lfs f16, 0x11c(r1)
    lfs f14, 0x12c(r1)
    fadds f16, f16, f17
    fadds f14, f14, f15
    fadds f7, f7, f13
    stfs f16, 0x11c(r1)
    stfs f14, 0x12c(r1)
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C13C8:
    lfs f15, 0x88(r25)
    lfs f16, 0x84(r1)
    lfs f14, 0x88(r1)
    fmuls f13, f13, f15
    fmuls f17, f16, f15
    lfs f7, 0x13c(r1)
    fmuls f15, f14, f15
    lfs f16, 0x11c(r1)
    lfs f14, 0x12c(r1)
    fsubs f16, f16, f17
    fsubs f14, f14, f15
    fsubs f7, f7, f13
    stfs f16, 0x11c(r1)
    stfs f14, 0x12c(r1)
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C1408:
    lfs f13, 0x13c(r1)
    lfs f7, 0x88(r25)
    fadds f7, f13, f7
    stfs f7, 0x13c(r1)
    b lbl_801C142C
lbl_801C141C:
    lfs f13, 0x13c(r1)
    lfs f7, 0x88(r25)
    fadds f7, f13, f7
    stfs f7, 0x13c(r1)
lbl_801C142C:
    lwz r6, 0x24(r26)
    mr r3, r24
    mr r4, r25
    mr r5, r26
    addi r31, r6, 0x9c
    bl fn_801C2BA8
    lbz r5, 0xa9(r31)
    mr r3, r26
    lbz r0, 0xaa(r31)
    addi r4, r1, 0xe0
    extsb r5, r5
    lbz r7, 0xd0(r24)
    extsb r0, r0
    lfd f15, lbl_804A1AB8
    xoris r5, r5, 0x8000
    lfs f14, lbl_804A1AA4
    xoris r0, r0, 0x8000
    stw r5, 0x144(r1)
    neg r6, r7
    stw r0, 0x14c(r1)
    or r5, r6, r7
    lfd f13, 0x140(r1)
    srwi r30, r5, 31
    lfd f7, 0x148(r1)
    fsubs f13, f13, f15
    fsubs f7, f7, f15
    fdivs f13, f13, f14
    fdivs f7, f7, f14
    stfs f13, 0x10(r1)
    stfs f7, 0x14(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xe0
    addi r3, r1, 0x110
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xe0
    li r4, 0x0
    bl fn_801BA138
    fmr f21, f1
    addi r3, r1, 0xe0
    li r4, 0x1
    bl fn_801BA138
    lfs f13, 0x114(r1)
    fmr f20, f1
    lfs f7, 0x124(r1)
    fmuls f13, f13, f13
    lfs f14, lbl_804A1AA0
    fmuls f7, f7, f7
    fadds f15, f13, f7
    fcmpo cr0, f15, f14
    opword 0x4C401382
    bne lbl_801C1500
    b lbl_801C150C
lbl_801C1500:
    fmr f1, f15
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f14, f15, f1
lbl_801C150C:
    lbz r0, 0xad(r31)
    cmplwi r0, 0x3
    beq lbl_801C1524
    lfs f7, lbl_804A1AA0
    fcmpu cr0, f7, f14
    bne lbl_801C1530
lbl_801C1524:
    lfs f23, lbl_804A1AA0
    lfs f22, lbl_804A1AA8
    b lbl_801C1554
lbl_801C1530:
    fres f15, f14
    lfs f13, 0x114(r1)
    lfs f7, 0x124(r1)
    opword 0x120F782A
    opword 0x11EF03F2
    fneg f13, f13
    opword 0x11EE83FC
    fmuls f23, f13, f15
    fmuls f22, f7, f15
lbl_801C1554:
    lwz r12, 0x0(r24)
    mr r3, r24
    lhz r0, 0x0(r31)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r18, r3
    lhz r0, 0x0(r31)
    mr r3, r24
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r29, r3
    mr r3, r26
    li r28, 0x1
    mtctr r12
    bctrl
    lfs f7, lbl_804A1AAC
    mr r27, r3
    lfs f17, lbl_804A1AA0
    addi r18, r1, 0xe0
    lfd f19, lbl_804A1AC0
    li r19, 0x0
    lfs f18, lbl_804A1AB0
    lis r20, 0xcc01
    stfd f7, 0x158(r1)
    li r21, 0x1
    li r22, 0x2
    li r23, 0x3
    b lbl_801C1B0C
lbl_801C15DC:
    lfs f14, 0x30(r27)
    lfs f13, 0x38(r27)
    lwz r4, 0xc8(r27)
    fmuls f15, f14, f13
    lfs f7, 0x58(r4)
    fmuls f27, f15, f7
    lfd f7, 0x158(r1)
    fcmpo cr0, f27, f7
    blt lbl_801C1AF4
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C1630
    bge lbl_801C1624
    cmpwi r0, 0x2000
    beq lbl_801C163C
    b lbl_801C164C
lbl_801C1624:
    cmpwi r0, 0x6000
    beq lbl_801C1658
    b lbl_801C164C
lbl_801C1630:
    lfs f7, 0x34(r27)
    fmuls f15, f7, f13
    b lbl_801C1658
lbl_801C163C:
    lfs f7, 0x3c(r27)
    fmuls f15, f14, f7
    b lbl_801C1658
    b lbl_801C1658
lbl_801C164C:
    lfs f13, 0x34(r27)
    lfs f7, 0x3c(r27)
    fmuls f15, f13, f7
lbl_801C1658:
    lfs f7, 0x5c(r4)
    fmuls f26, f15, f7
    lfd f7, 0x158(r1)
    fcmpo cr0, f26, f7
    blt lbl_801C1AF4
    mr r3, r24
    mr r4, r27
    mr r5, r31
    mr r6, r25
    mr r7, r28
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r27)
    li r28, 0x0
    lfs f14, 0x40(r27)
    lfs f13, 0x44(r27)
    cmpwi r0, 0x0
    lfs f7, 0x48(r27)
    stfs f14, 0x18(r1)
    stfs f13, 0x1c(r1)
    stfs f7, 0x20(r1)
    beq lbl_801C16C8
    stw r0, 0x144(r1)
    lfd f7, 0x140(r1)
    fsubs f7, f7, f19
    fmuls f7, f18, f7
    fadds f7, f14, f7
    stfs f7, 0x18(r1)
lbl_801C16C8:
    lbz r0, 0x9b(r27)
    cmpwi r0, 0x0
    beq lbl_801C16F0
    stw r0, 0x14c(r1)
    lfs f7, 0x1c(r1)
    lfd f13, 0x148(r1)
    fsubs f13, f13, f19
    fmuls f13, f18, f13
    fadds f7, f7, f13
    stfs f7, 0x1c(r1)
lbl_801C16F0:
    lbz r0, 0x9c(r27)
    cmpwi r0, 0x0
    beq lbl_801C1718
    stw r0, 0x144(r1)
    lfs f7, 0x20(r1)
    lfd f13, 0x140(r1)
    fsubs f13, f13, f19
    fmuls f13, f18, f13
    fadds f7, f7, f13
    stfs f7, 0x20(r1)
lbl_801C1718:
    lwz r3, 0xc8(r27)
    lfs f13, 0x20(r1)
    lfs f7, 0x68(r3)
    lfs f16, 0x18(r1)
    fadds f7, f13, f7
    lfs f15, 0x60(r3)
    lfs f14, 0x1c(r1)
    lfs f13, 0x64(r3)
    fadds f15, f16, f15
    fcmpu cr0, f17, f7
    fadds f13, f14, f13
    stfs f7, 0x20(r1)
    stfs f15, 0x18(r1)
    stfs f13, 0x1c(r1)
    beq lbl_801C199C
    mr r3, r18
    addi r4, r27, 0xac
    addi r5, r1, 0x24
    bl PSMTXMultVec
    lfs f7, 0x20(r1)
    fmuls f30, f21, f22
    fmuls f31, f21, f23
    lfs f28, 0x10(r1)
    fmuls f25, f20, f22
    lfs f29, 0x14(r1)
    fmuls f24, f20, f23
    fneg f1, f7
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f13, 0x8(r1)
    li r3, 0x80
    lfs f15, 0x24(r1)
    li r4, 0x0
    fmuls f16, f13, f27
    lfs f7, 0xc(r1)
    lfs f14, 0x2c(r1)
    fmuls f13, f13, f26
    fmuls f27, f7, f27
    stfd f15, 0x160(r1)
    lfs f15, 0x28(r1)
    fmuls f7, f7, f26
    stfs f14, 0x38(r1)
    fmuls f14, f27, f28
    li r5, 0x4
    stfd f15, 0x168(r1)
    fmuls f15, f16, f28
    fadds f26, f29, f14
    fmuls f14, f13, f29
    stfs f17, 0x44(r1)
    fsubs f28, f28, f15
    fmuls f15, f7, f29
    stfs f17, 0x50(r1)
    fsubs f29, f26, f14
    fmuls f26, f30, f7
    fsubs f15, f28, f15
    fmuls f28, f30, f16
    fmuls f16, f31, f16
    fmuls f14, f30, f15
    fmuls f30, f24, f29
    fmuls f15, f31, f15
    fmuls f7, f31, f7
    fadds f30, f14, f30
    fsubs f14, f28, f26
    fmuls f31, f24, f27
    fmuls f29, f25, f29
    fadds f26, f28, f26
    fmuls f27, f25, f27
    fsubs f28, f15, f29
    lfd f15, 0x160(r1)
    fmuls f25, f25, f13
    fadds f29, f15, f30
    fsubs f15, f16, f7
    fadds f16, f16, f7
    lfd f7, 0x168(r1)
    stfs f29, 0x30(r1)
    fadds f28, f7, f28
    fmuls f7, f24, f13
    fsubs f24, f14, f31
    fsubs f14, f26, f31
    stfs f28, 0x34(r1)
    fadds f15, f27, f15
    fadds f13, f27, f16
    fsubs f16, f24, f7
    fadds f14, f7, f14
    fadds f15, f25, f15
    fsubs f7, f13, f25
    stfs f16, 0x3c(r1)
    stfs f15, 0x40(r1)
    stfs f14, 0x48(r1)
    stfs f7, 0x4c(r1)
    bl GXBegin
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A1003C
    opword 0x11C76828
    opword 0xE0E18038
    opword 0xE1A18044
    opword 0xF1C10078
    opword 0x11C76828
    lfs f7, 0x78(r1)
    opword 0xF1C18080
    lfs f13, 0x7c(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x80(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C18CC
    stb r19, -0x8000(r20)
lbl_801C18CC:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A10048
    opword 0x11C76828
    opword 0xE0E18038
    opword 0xE1A18050
    opword 0xF1C1006C
    opword 0x11C76828
    lfs f7, 0x6c(r1)
    opword 0xF1C18074
    lfs f13, 0x70(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x74(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1910
    stb r21, -0x8000(r20)
lbl_801C1910:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A1003C
    opword 0x11C7682A
    opword 0xE0E18038
    opword 0xE1A18044
    opword 0xF1C10060
    opword 0x11C7682A
    lfs f7, 0x60(r1)
    opword 0xF1C18068
    lfs f13, 0x64(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x68(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1954
    stb r22, -0x8000(r20)
lbl_801C1954:
    opword 0xE0E10030
    cmpwi r30, 0x0
    opword 0xE1A10048
    opword 0x11C7682A
    opword 0xE0E18038
    opword 0xE1A18050
    opword 0xF1C10054
    opword 0x11C7682A
    lfs f7, 0x54(r1)
    opword 0xF1C1805C
    lfs f13, 0x58(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0x5c(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AF4
    stb r23, -0x8000(r20)
    b lbl_801C1AF4
lbl_801C199C:
    opword 0x11B7B420
    opword 0xE01B00AC
    opword 0xE0520000
    opword 0x10FBD420
    opword 0xE1120010
    li r3, 0x80
    opword 0x10820032
    opword 0xE03B80B4
    opword 0x130D0518
    opword 0xE0720008
    opword 0x132D0558
    opword 0xE1320018
    opword 0x10A3207A
    opword 0xE1A10010
    opword 0x11480032
    opword 0xE0520020
    opword 0x1340C050
    opword 0xE0720028
    opword 0x1169507A
    li r4, 0x0
    opword 0x1339CCA0
    li r5, 0x4
    opword 0x11C76B7C
    opword 0x1318D460
    opword 0x11B901D8
    opword 0x10C52994
    opword 0x118B5B14
    opword 0x10F801DA
    opword 0x10820032
    opword 0x11E66420
    opword 0x10A3207A
    opword 0x13597B9C
    opword 0x11ED382A
    opword 0x10E03850
    opword 0x11D8D39E
    opword 0x11AD382A
    opword 0x10E52994
    opword 0x134E6828
    opword 0xF0E180B8
    opword 0xF34100B0
    opword 0x134E7828
    opword 0xF0E180C4
    opword 0xF34100BC
    opword 0x134E682A
    opword 0xF0E180D0
    opword 0xF34100C8
    opword 0x134E782A
    opword 0xF0E180DC
    opword 0xF34100D4
    bl GXBegin
    lfs f7, 0xb0(r1)
    cmpwi r30, 0x0
    lfs f13, 0xb4(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xb8(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1A88
    stb r19, -0x8000(r20)
lbl_801C1A88:
    lfs f7, 0xbc(r1)
    cmpwi r30, 0x0
    lfs f13, 0xc0(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xc4(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AAC
    stb r21, -0x8000(r20)
lbl_801C1AAC:
    lfs f7, 0xc8(r1)
    cmpwi r30, 0x0
    lfs f13, 0xcc(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xd0(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AD0
    stb r22, -0x8000(r20)
lbl_801C1AD0:
    lfs f7, 0xd4(r1)
    cmpwi r30, 0x0
    lfs f13, 0xd8(r1)
    stfs f7, -0x8000(r20)
    lfs f7, 0xdc(r1)
    stfs f13, -0x8000(r20)
    stfs f7, -0x8000(r20)
    beq lbl_801C1AF4
    stb r23, -0x8000(r20)
lbl_801C1AF4:
    mr r12, r29
    mr r3, r26
    mr r4, r27
    mtctr r12
    bctrl
    mr r27, r3
lbl_801C1B0C:
    cmpwi r27, 0x0
    bne lbl_801C15DC
    opword 0xE3E102C8
    lfd f31, 0x2c0(r1)
    opword 0xE3C102B8
    lfd f30, 0x2b0(r1)
    opword 0xE3A102A8
    lfd f29, 0x2a0(r1)
    opword 0xE3810298
    lfd f28, 0x290(r1)
    opword 0xE3610288
    lfd f27, 0x280(r1)
    opword 0xE3410278
    lfd f26, 0x270(r1)
    opword 0xE3210268
    lfd f25, 0x260(r1)
    opword 0xE3010258
    lfd f24, 0x250(r1)
    opword 0xE2E10248
    lfd f23, 0x240(r1)
    opword 0xE2C10238
    lfd f22, 0x230(r1)
    opword 0xE2A10228
    lfd f21, 0x220(r1)
    opword 0xE2810218
    lfd f20, 0x210(r1)
    opword 0xE2610208
    lfd f19, 0x200(r1)
    opword 0xE24101F8
    lfd f18, 0x1f0(r1)
    opword 0xE22101E8
    lfd f17, 0x1e0(r1)
    opword 0xE20101D8
    lfd f16, 0x1d0(r1)
    opword 0xE1E101C8
    lfd f15, 0x1c0(r1)
    opword 0xE1C101B8
    addi r11, r1, 0x1b0
    lfd f14, 0x1b0(r1)
    bl _restgpr_18
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// asm_to_cpp: fn_801C1BBC
extern "C" asm void fn_801C1BBC() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stfd f31, 0x230(r1)
    opword 0xF3E10238
    stfd f30, 0x220(r1)
    opword 0xF3C10228
    stfd f29, 0x210(r1)
    opword 0xF3A10218
    stfd f28, 0x200(r1)
    opword 0xF3810208
    stfd f27, 0x1f0(r1)
    opword 0xF36101F8
    stfd f26, 0x1e0(r1)
    opword 0xF34101E8
    stfd f25, 0x1d0(r1)
    opword 0xF32101D8
    stfd f24, 0x1c0(r1)
    opword 0xF30101C8
    stfd f23, 0x1b0(r1)
    opword 0xF2E101B8
    stfd f22, 0x1a0(r1)
    opword 0xF2C101A8
    stfd f21, 0x190(r1)
    opword 0xF2A10198
    stfd f20, 0x180(r1)
    opword 0xF2810188
    stfd f19, 0x170(r1)
    opword 0xF2610178
    stfd f18, 0x160(r1)
    opword 0xF2410168
    addi r11, r1, 0x160
    bl _savegpr_18
    lfs f1, lbl_804A1AA0
    lis r20, 0x4330
    lfs f0, 0x88(r4)
    mr r23, r3
    lwz r19, 0x0(r4)
    mr r25, r5
    lwz r18, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    mr r24, r4
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r20, 0x110(r1)
    stw r20, 0x118(r1)
    stw r19, 0xe0(r1)
    stw r18, 0xe4(r1)
    stw r12, 0xe8(r1)
    stw r11, 0xec(r1)
    stw r10, 0xf0(r1)
    stw r9, 0xf4(r1)
    stw r8, 0xf8(r1)
    stw r7, 0xfc(r1)
    stw r6, 0x100(r1)
    stw r5, 0x104(r1)
    stw r3, 0x108(r1)
    stw r0, 0x10c(r1)
    beq lbl_801C1DD4
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f0, 0x90(r1)
    fctiwz f0, f0
    stfd f0, 0x120(r1)
    lwz r0, 0x124(r1)
    cmpwi r0, 0x1
    beq lbl_801C1DC4
    bge lbl_801C1DD4
    cmpwi r0, 0x0
    bge lbl_801C1CF8
    b lbl_801C1DD4
lbl_801C1CF8:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x84
    bl PSMTXMultVec
    addi r3, r1, 0x84
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C1DB0
    lfs f1, 0x8c(r1)
    lfs f0, lbl_804A1AA0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C1D70
    lfs f3, 0x88(r24)
    lfs f4, 0x84(r1)
    lfs f2, 0x88(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x10c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xec(r1)
    lfs f2, 0xfc(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xec(r1)
    stfs f2, 0xfc(r1)
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1D70:
    lfs f3, 0x88(r24)
    lfs f4, 0x84(r1)
    lfs f2, 0x88(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x10c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xec(r1)
    lfs f2, 0xfc(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xec(r1)
    stfs f2, 0xfc(r1)
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1DB0:
    lfs f1, 0x10c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x10c(r1)
    b lbl_801C1DD4
lbl_801C1DC4:
    lfs f1, 0x10c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x10c(r1)
lbl_801C1DD4:
    lwz r6, 0x24(r25)
    mr r3, r23
    mr r4, r24
    mr r5, r25
    addi r30, r6, 0x9c
    bl fn_801C2BA8
    lbz r5, 0xaa(r30)
    mr r3, r25
    lbz r0, 0xa9(r30)
    addi r4, r1, 0xb0
    extsb r5, r5
    lbz r7, 0xd0(r23)
    extsb r0, r0
    lfd f3, lbl_804A1AB8
    xoris r5, r5, 0x8000
    lfs f1, lbl_804A1AA4
    xoris r0, r0, 0x8000
    stw r5, 0x114(r1)
    neg r6, r7
    stw r0, 0x11c(r1)
    or r5, r6, r7
    lfd f2, 0x110(r1)
    srwi r29, r5, 31
    lfd f0, 0x118(r1)
    fsubs f2, f2, f3
    fsubs f0, f0, f3
    fdivs f2, f2, f1
    fdivs f0, f0, f1
    stfs f2, 0x14(r1)
    stfs f0, 0x10(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xb0
    addi r3, r1, 0xe0
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xb0
    li r4, 0x0
    bl fn_801BA138
    fmr f26, f1
    addi r3, r1, 0xb0
    li r4, 0x1
    bl fn_801BA138
    lfs f0, 0x104(r1)
    fmr f27, f1
    lfs f2, 0xf4(r1)
    fmuls f0, f0, f0
    fmuls f1, f2, f2
    lfs f2, lbl_804A1AA0
    fadds f18, f1, f0
    fcmpo cr0, f18, f2
    opword 0x4C401382
    bne lbl_801C1EA8
    b lbl_801C1EB4
lbl_801C1EA8:
    fmr f1, f18
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f18, f1
lbl_801C1EB4:
    lfs f19, lbl_804A1AA0
    fcmpu cr0, f19, f2
    bne lbl_801C1EC8
    lfs f18, lbl_804A1AA8
    b lbl_801C1EE8
lbl_801C1EC8:
    fres f3, f2
    lfs f1, 0x104(r1)
    lfs f0, 0xf4(r1)
    opword 0x1083182A
    opword 0x106300F2
    opword 0x106220FC
    fmuls f18, f1, f3
    fmuls f19, f0, f3
lbl_801C1EE8:
    lwz r12, 0x0(r23)
    mr r3, r23
    lhz r0, 0x0(r30)
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r18, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfd f29, lbl_804A1AC0
    mr r26, r3
    lfs f30, lbl_804A1AB0
    addi r31, r1, 0xb0
    lfs f31, lbl_804A1AA0
    li r18, 0x0
    lfs f28, lbl_804A1AAC
    lis r19, 0xcc01
    li r20, 0x1
    li r21, 0x2
    li r22, 0x3
    b lbl_801C2378
lbl_801C1F6C:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801C2360
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r4, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r4)
    fmuls f21, f3, f0
    fcmpo cr0, f21, f28
    blt lbl_801C2360
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C1FC8
    bge lbl_801C1FBC
    cmpwi r0, 0x2000
    beq lbl_801C1FD4
    b lbl_801C1FE4
lbl_801C1FBC:
    cmpwi r0, 0x6000
    beq lbl_801C1FF0
    b lbl_801C1FE4
lbl_801C1FC8:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C1FF0
lbl_801C1FD4:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C1FF0
    b lbl_801C1FF0
lbl_801C1FE4:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C1FF0:
    lfs f0, 0x5c(r4)
    fmuls f20, f3, f0
    fcmpo cr0, f20, f28
    blt lbl_801C2360
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r26)
    li r27, 0x0
    lfs f2, 0x40(r26)
    lfs f1, 0x44(r26)
    cmpwi r0, 0x0
    lfs f0, 0x48(r26)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    beq lbl_801C205C
    stw r0, 0x114(r1)
    lfd f0, 0x110(r1)
    fsubs f0, f0, f29
    fmuls f0, f30, f0
    fadds f0, f2, f0
    stfs f0, 0x18(r1)
lbl_801C205C:
    lbz r0, 0x9b(r26)
    cmpwi r0, 0x0
    beq lbl_801C2084
    stw r0, 0x11c(r1)
    lfs f0, 0x1c(r1)
    lfd f1, 0x118(r1)
    fsubs f1, f1, f29
    fmuls f1, f30, f1
    fadds f0, f0, f1
    stfs f0, 0x1c(r1)
lbl_801C2084:
    lbz r0, 0x9c(r26)
    cmpwi r0, 0x0
    beq lbl_801C20AC
    stw r0, 0x114(r1)
    lfs f0, 0x20(r1)
    lfd f1, 0x110(r1)
    fsubs f1, f1, f29
    fmuls f1, f30, f1
    fadds f0, f0, f1
    stfs f0, 0x20(r1)
lbl_801C20AC:
    lwz r6, 0xc8(r26)
    mr r3, r31
    lfs f1, 0x18(r1)
    addi r4, r26, 0xac
    lfs f0, 0x60(r6)
    addi r5, r1, 0x24
    lfs f3, 0x1c(r1)
    fadds f4, f1, f0
    lfs f2, 0x64(r6)
    lfs f1, 0x20(r1)
    lfs f0, 0x68(r6)
    fadds f2, f3, f2
    stfs f4, 0x18(r1)
    fadds f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x20(r1)
    bl PSMTXMultVec
    lfs f0, 0x20(r1)
    fmuls f22, f27, f19
    fmuls f23, f27, f18
    lfs f24, 0x10(r1)
    fcmpu cr0, f31, f0
    lfs f25, 0x14(r1)
    beq lbl_801C21CC
    fneg f1, f0
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f2, 0xc(r1)
    fneg f5, f25
    lfs f1, 0x8(r1)
    fmuls f0, f2, f21
    lfs f8, 0x24(r1)
    fmuls f12, f1, f21
    lfs f6, 0x28(r1)
    fmuls f11, f2, f20
    lfs f4, 0x2c(r1)
    fmuls f10, f1, f20
    fmuls f3, f12, f24
    fmuls f1, f0, f24
    fmuls f2, f11, f25
    fsubs f7, f5, f3
    fsubs f5, f24, f1
    fmuls f3, f10, f25
    fadds f9, f7, f2
    fadds f1, f12, f11
    fsubs f3, f5, f3
    fsubs f2, f12, f11
    fmuls f7, f22, f9
    fmuls f5, f23, f9
    fmuls f9, f26, f3
    fsubs f3, f0, f10
    fadds f0, f0, f10
    fadds f9, f8, f9
    fadds f8, f6, f7
    fadds f7, f4, f5
    fmuls f6, f26, f3
    stfs f9, 0x30(r1)
    fmuls f3, f26, f0
    fmuls f5, f22, f1
    stfs f8, 0x34(r1)
    fmuls f4, f23, f1
    fmuls f1, f22, f2
    stfs f7, 0x38(r1)
    fmuls f0, f23, f2
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
    b lbl_801C2240
lbl_801C21CC:
    fmuls f5, f24, f21
    lfs f6, 0x24(r1)
    fmuls f1, f25, f20
    lfs f4, 0x28(r1)
    fmuls f0, f26, f21
    lfs f2, 0x2c(r1)
    fsubs f3, f1, f25
    fsubs f7, f24, f5
    stfs f0, 0x3c(r1)
    fneg f1, f22
    fmuls f5, f22, f3
    stfs f0, 0x48(r1)
    fmuls f7, f26, f7
    fneg f0, f23
    fadds f5, f4, f5
    fmuls f3, f23, f3
    fadds f6, f6, f7
    fmuls f1, f1, f20
    stfs f5, 0x34(r1)
    fadds f4, f2, f3
    fmuls f3, f22, f20
    stfs f6, 0x30(r1)
    fmuls f2, f23, f20
    fmuls f0, f0, f20
    stfs f4, 0x38(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x4c(r1)
    stfs f0, 0x50(r1)
lbl_801C2240:
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE021003C
    opword 0x10400828
    opword 0xE0018038
    opword 0xE0218044
    opword 0xF0410078
    opword 0x10400828
    lfs f0, 0x78(r1)
    opword 0xF0418080
    lfs f1, 0x7c(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x80(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2294
    stb r18, -0x8000(r19)
lbl_801C2294:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE0210048
    opword 0x10400828
    opword 0xE0018038
    opword 0xE0218050
    opword 0xF041006C
    opword 0x10400828
    lfs f0, 0x6c(r1)
    opword 0xF0418074
    lfs f1, 0x70(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x74(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C22D8
    stb r20, -0x8000(r19)
lbl_801C22D8:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE021003C
    opword 0x1040082A
    opword 0xE0018038
    opword 0xE0218044
    opword 0xF0410060
    opword 0x1040082A
    lfs f0, 0x60(r1)
    opword 0xF0418068
    lfs f1, 0x64(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x68(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C231C
    stb r21, -0x8000(r19)
lbl_801C231C:
    opword 0xE0010030
    cmpwi r29, 0x0
    opword 0xE0210048
    opword 0x1040082A
    opword 0xE0018038
    opword 0xE0218050
    opword 0xF0410054
    opword 0x1040082A
    lfs f0, 0x54(r1)
    opword 0xF041805C
    lfs f1, 0x58(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x5c(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2360
    stb r22, -0x8000(r19)
lbl_801C2360:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C2378:
    cmpwi r26, 0x0
    bne lbl_801C1F6C
    opword 0xE3E10238
    lfd f31, 0x230(r1)
    opword 0xE3C10228
    lfd f30, 0x220(r1)
    opword 0xE3A10218
    lfd f29, 0x210(r1)
    opword 0xE3810208
    lfd f28, 0x200(r1)
    opword 0xE36101F8
    lfd f27, 0x1f0(r1)
    opword 0xE34101E8
    lfd f26, 0x1e0(r1)
    opword 0xE32101D8
    lfd f25, 0x1d0(r1)
    opword 0xE30101C8
    lfd f24, 0x1c0(r1)
    opword 0xE2E101B8
    lfd f23, 0x1b0(r1)
    opword 0xE2C101A8
    lfd f22, 0x1a0(r1)
    opword 0xE2A10198
    lfd f21, 0x190(r1)
    opword 0xE2810188
    lfd f20, 0x180(r1)
    opword 0xE2610178
    lfd f19, 0x170(r1)
    opword 0xE2410168
    addi r11, r1, 0x160
    lfd f18, 0x160(r1)
    bl _restgpr_18
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// asm_to_cpp: fn_801C2408
extern "C" asm void fn_801C2408() {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    stfd f31, 0x2e0(r1)
    opword 0xF3E102E8
    stfd f30, 0x2d0(r1)
    opword 0xF3C102D8
    stfd f29, 0x2c0(r1)
    opword 0xF3A102C8
    stfd f28, 0x2b0(r1)
    opword 0xF38102B8
    stfd f27, 0x2a0(r1)
    opword 0xF36102A8
    stfd f26, 0x290(r1)
    opword 0xF3410298
    stfd f25, 0x280(r1)
    opword 0xF3210288
    stfd f24, 0x270(r1)
    opword 0xF3010278
    stfd f23, 0x260(r1)
    opword 0xF2E10268
    stfd f22, 0x250(r1)
    opword 0xF2C10258
    stfd f21, 0x240(r1)
    opword 0xF2A10248
    stfd f20, 0x230(r1)
    opword 0xF2810238
    addi r11, r1, 0x230
    bl _savegpr_18
    lfs f1, lbl_804A1AA0
    mr r23, r3
    lfs f0, 0x88(r4)
    mr r25, r5
    lwz r19, 0x0(r4)
    mr r24, r4
    lwz r18, 0x4(r4)
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
    stw r19, 0xf0(r1)
    stw r18, 0xf4(r1)
    stw r12, 0xf8(r1)
    stw r11, 0xfc(r1)
    stw r10, 0x100(r1)
    stw r9, 0x104(r1)
    stw r8, 0x108(r1)
    stw r7, 0x10c(r1)
    stw r6, 0x110(r1)
    stw r5, 0x114(r1)
    stw r3, 0x118(r1)
    stw r0, 0x11c(r1)
    beq lbl_801C2604
    addi r3, r1, 0xa0
    bl GXGetProjectionv
    lfs f0, 0xa0(r1)
    fctiwz f0, f0
    stfd f0, 0x1e0(r1)
    lwz r0, 0x1e4(r1)
    cmpwi r0, 0x1
    beq lbl_801C25F4
    bge lbl_801C2604
    cmpwi r0, 0x0
    bge lbl_801C2528
    b lbl_801C2604
lbl_801C2528:
    mr r3, r24
    addi r4, r24, 0x8c
    addi r5, r1, 0x7c
    bl PSMTXMultVec
    addi r3, r1, 0x7c
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C25E0
    lfs f1, 0x84(r1)
    lfs f0, lbl_804A1AA0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C25A0
    lfs f3, 0x88(r24)
    lfs f4, 0x7c(r1)
    lfs f2, 0x80(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x11c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xfc(r1)
    lfs f2, 0x10c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xfc(r1)
    stfs f2, 0x10c(r1)
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25A0:
    lfs f3, 0x88(r24)
    lfs f4, 0x7c(r1)
    lfs f2, 0x80(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x11c(r1)
    fmuls f3, f2, f3
    lfs f4, 0xfc(r1)
    lfs f2, 0x10c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xfc(r1)
    stfs f2, 0x10c(r1)
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25E0:
    lfs f1, 0x11c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x11c(r1)
    b lbl_801C2604
lbl_801C25F4:
    lfs f1, 0x11c(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x11c(r1)
lbl_801C2604:
    lwz r6, 0x24(r25)
    mr r3, r23
    mr r4, r24
    mr r5, r25
    addi r30, r6, 0x9c
    bl fn_801C2BA8
    lbz r4, 0xa9(r30)
    lis r5, 0x4330
    lbz r0, 0xaa(r30)
    mr r3, r25
    extsb r4, r4
    lbz r7, 0xd0(r23)
    xoris r4, r4, 0x8000
    extsb r0, r0
    stw r5, 0x1e0(r1)
    xoris r0, r0, 0x8000
    lfd f3, lbl_804A1AB8
    neg r6, r7
    stw r4, 0x1e4(r1)
    or r4, r6, r7
    srwi r31, r4, 31
    lfs f2, lbl_804A1AA4
    lfd f0, 0x1e0(r1)
    addi r4, r1, 0xc0
    stw r0, 0x1ec(r1)
    fsubs f1, f0, f3
    stw r5, 0x1e8(r1)
    lfd f0, 0x1e8(r1)
    fdivs f1, f1, f2
    fsubs f0, f0, f3
    stfs f1, 0x8(r1)
    fdivs f0, f0, f2
    stfs f0, 0xc(r1)
    bl fn_801B7FB8
    addi r4, r1, 0xc0
    addi r3, r1, 0xf0
    mr r5, r4
    bl PSMTXConcat
    addi r3, r1, 0xc0
    li r4, 0x0
    bl fn_801BA138
    fmr f26, f1
    addi r3, r1, 0xc0
    li r4, 0x1
    bl fn_801BA138
    fmr f27, f1
    mr r5, r25
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    bl fn_801C0E98
    lwz r12, 0x0(r23)
    mr r3, r23
    mr r4, r25
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r29, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x10(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r18, r3
    lhz r0, 0x0(r30)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r18
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f29, lbl_804A1AA0
    mr r26, r3
    lfs f30, lbl_804A1AC8
    li r18, 0x0
    lfs f31, lbl_804A1AA8
    lis r19, 0xcc01
    lfs f28, lbl_804A1AAC
    li r20, 0x1
    li r21, 0x2
    li r22, 0x3
    b lbl_801C2B28
lbl_801C2768:
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801C2B10
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r4, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r4)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f28
    blt lbl_801C2B10
    lwz r3, 0x24(r4)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C27C4
    bge lbl_801C27B8
    cmpwi r0, 0x2000
    beq lbl_801C27D0
    b lbl_801C27E0
lbl_801C27B8:
    cmpwi r0, 0x6000
    beq lbl_801C27EC
    b lbl_801C27E0
lbl_801C27C4:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C27EC
lbl_801C27D0:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C27EC
    b lbl_801C27EC
lbl_801C27E0:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C27EC:
    lfs f0, 0x5c(r4)
    fmuls f24, f3, f0
    fcmpo cr0, f24, f28
    blt lbl_801C2B10
    mr r3, r23
    mr r4, r26
    mr r5, r30
    mr r6, r24
    mr r7, r27
    li r8, 0x0
    bl fn_801BF940
    mr r12, r29
    mr r5, r26
    addi r3, r1, 0x94
    addi r4, r1, 0x120
    li r27, 0x0
    mtctr r12
    bctrl
    addi r3, r1, 0x94
    addi r4, r1, 0xc0
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f1, 0x94(r1)
    lfs f0, 0x98(r1)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f21, f1, f0
    fcmpo cr0, f21, f29
    opword 0x4C401382
    bne lbl_801C286C
    fmr f2, f29
    b lbl_801C2878
lbl_801C286C:
    fmr f1, f21
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f21, f1
lbl_801C2878:
    fcmpu cr0, f29, f2
    bne lbl_801C288C
    fmr f22, f29
    lfs f23, lbl_804A1AA8
    b lbl_801C28B0
lbl_801C288C:
    fres f3, f2
    lfs f1, 0x94(r1)
    lfs f0, 0x98(r1)
    opword 0x1083182A
    opword 0x106300F2
    fneg f1, f1
    opword 0x106220FC
    fmuls f22, f1, f3
    fmuls f23, f0, f3
lbl_801C28B0:
    lbz r0, 0xb0(r30)
    lfs f21, lbl_804A1AA8
    cmpwi r0, 0x0
    beq lbl_801C2938
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF0010070
    opword 0x10020828
    lfs f1, 0x74(r1)
    opword 0xF0018078
    lfs f2, 0x70(r1)
    lfs f0, 0x78(r1)
    stfs f1, 0x8c(r1)
    stfs f0, 0x90(r1)
    opword 0xE021008C
    stfs f2, 0x88(r1)
    opword 0x10210072
    opword 0xE0018088
    opword 0x1000083A
    opword 0x12800854
    fcmpo cr0, f20, f29
    opword 0x4C401382
    bne lbl_801C2920
    fmr f0, f29
    b lbl_801C292C
lbl_801C2920:
    fmr f1, f20
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f20, f1
lbl_801C292C:
    fmuls f0, f30, f0
    fdivs f0, f0, f24
    fadds f21, f21, f0
lbl_801C2938:
    addi r3, r1, 0xc0
    addi r4, r26, 0xac
    addi r5, r1, 0x10
    bl PSMTXMultVec
    lfs f8, 0xc(r1)
    fmuls f0, f26, f22
    lfs f4, 0x8(r1)
    fmuls f7, f27, f23
    fadds f1, f21, f8
    lfs f3, 0x18(r1)
    fmuls f2, f25, f4
    stfs f3, 0x24(r1)
    fmuls f9, f27, f22
    fsubs f1, f1, f31
    fsubs f5, f4, f2
    lfs f6, 0x14(r1)
    fmuls f10, f26, f23
    lfs f4, 0x10(r1)
    fmuls f2, f24, f1
    fmuls f3, f7, f24
    fmuls f1, f9, f24
    stfs f29, 0x30(r1)
    fsubs f2, f2, f8
    li r3, 0x80
    fmuls f8, f0, f5
    fmuls f5, f10, f5
    fmuls f7, f7, f2
    stfs f29, 0x3c(r1)
    fmuls f2, f9, f2
    li r4, 0x0
    fmuls f9, f21, f1
    fmuls f10, f10, f25
    fsubs f7, f8, f7
    li r5, 0x4
    fadds f1, f5, f2
    fsubs f2, f10, f9
    fadds f5, f6, f7
    fmuls f6, f0, f25
    fadds f4, f4, f1
    stfs f2, 0x28(r1)
    fmuls f0, f21, f3
    fadds f1, f10, f9
    stfs f5, 0x20(r1)
    fadds f2, f6, f0
    stfs f4, 0x1c(r1)
    fsubs f0, f6, f0
    stfs f1, 0x34(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x38(r1)
    bl GXBegin
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210028
    opword 0x10400828
    opword 0xE0018024
    opword 0xE0218030
    opword 0xF0410064
    opword 0x10400828
    lfs f0, 0x64(r1)
    opword 0xF041806C
    lfs f1, 0x68(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x6c(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2A44
    stb r18, -0x8000(r19)
lbl_801C2A44:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210034
    opword 0x10400828
    opword 0xE0018024
    opword 0xE021803C
    opword 0xF0410058
    opword 0x10400828
    lfs f0, 0x58(r1)
    opword 0xF0418060
    lfs f1, 0x5c(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x60(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2A88
    stb r20, -0x8000(r19)
lbl_801C2A88:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210028
    opword 0x1040082A
    opword 0xE0018024
    opword 0xE0218030
    opword 0xF041004C
    opword 0x1040082A
    lfs f0, 0x4c(r1)
    opword 0xF0418054
    lfs f1, 0x50(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x54(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2ACC
    stb r21, -0x8000(r19)
lbl_801C2ACC:
    opword 0xE001001C
    cmpwi r31, 0x0
    opword 0xE0210034
    opword 0x1040082A
    opword 0xE0018024
    opword 0xE021803C
    opword 0xF0410040
    opword 0x1040082A
    lfs f0, 0x40(r1)
    opword 0xF0418048
    lfs f1, 0x44(r1)
    stfs f0, -0x8000(r19)
    lfs f0, 0x48(r1)
    stfs f1, -0x8000(r19)
    stfs f0, -0x8000(r19)
    beq lbl_801C2B10
    stb r22, -0x8000(r19)
lbl_801C2B10:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C2B28:
    cmpwi r26, 0x0
    bne lbl_801C2768
    opword 0xE3E102E8
    lfd f31, 0x2e0(r1)
    opword 0xE3C102D8
    lfd f30, 0x2d0(r1)
    opword 0xE3A102C8
    lfd f29, 0x2c0(r1)
    opword 0xE38102B8
    lfd f28, 0x2b0(r1)
    opword 0xE36102A8
    lfd f27, 0x2a0(r1)
    opword 0xE3410298
    lfd f26, 0x290(r1)
    opword 0xE3210288
    lfd f25, 0x280(r1)
    opword 0xE3010278
    lfd f24, 0x270(r1)
    opword 0xE2E10268
    lfd f23, 0x260(r1)
    opword 0xE2C10258
    lfd f22, 0x250(r1)
    opword 0xE2A10248
    lfd f21, 0x240(r1)
    opword 0xE2810238
    addi r11, r1, 0x230
    lfd f20, 0x230(r1)
    bl _restgpr_18
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// asm_to_cpp: fn_801C2BA8
extern "C" asm void fn_801C2BA8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r6, r4
    mr r4, r5
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C460
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r31)
    cmpwi r0, 0x0
    beq lbl_801C2C18
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C2C18:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    addi r3, r1, 0x8
    bl PSMTXIdentity
    addi r3, r1, 0x8
    li r4, 0x0
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801C2C78
extern "C" asm void fn_801C2C78() {
    nofralloc
    lwz r3, 0x24(r4)
    lbz r0, 0x14a(r3)
    cmpwi r0, 0x2
    beq lbl_801C2CC4
    bge lbl_801C2C9C
    cmpwi r0, 0x0
    beq lbl_801C2CAC
    bge lbl_801C2CB8
    b lbl_801C2CE8
lbl_801C2C9C:
    cmpwi r0, 0x4
    beq lbl_801C2CDC
    bge lbl_801C2CE8
    b lbl_801C2CD0
lbl_801C2CAC:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
lbl_801C2CB8:
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
lbl_801C2CC4:
    lis r3, CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@ha
    addi r3, r3, CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@l
    blr
lbl_801C2CD0:
    lis r3, fn_801C2EA0@ha
    addi r3, r3, fn_801C2EA0@l
    blr
lbl_801C2CDC:
    lis r3, fn_801C2FB0@ha
    addi r3, r3, fn_801C2FB0@l
    blr
lbl_801C2CE8:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// asm_to_cpp: fn_801C2CF4
extern "C" asm void fn_801C2CF4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f0, lbl_804A1AAC
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    opword 0xE06500AC
    opword 0xE04500B8
    opword 0x10231028
    opword 0xE06580B4
    opword 0xE04580C0
    opword 0xF0210008
    opword 0x10231028
    lfs f2, 0xc(r1)
    opword 0xF0218010
    lfs f3, 0x8(r1)
    lfs f1, 0x10(r1)
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    opword 0xE0230004
    stfs f3, 0x0(r3)
    opword 0x10210072
    opword 0xE0438000
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2D70
    li r0, 0x0
    b lbl_801C2D90
lbl_801C2D70:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2D90:
    cmpwi r0, 0x0
    bne lbl_801C2DB0
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2DB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801C2DC8
extern "C" asm void fn_801C2DC8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1AAC
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    opword 0xE04500AC
    opword 0xE02400A4
    opword 0x10220828
    opword 0xF0230000
    opword 0xE04580B4
    opword 0xE02480AC
    opword 0xE0638000
    opword 0x10220828
    opword 0xF0238008
    opword 0xE0230004
    opword 0x10210072
    opword 0x104308FA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2E2C
    li r0, 0x0
    b lbl_801C2E4C
lbl_801C2E2C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2E4C:
    cmpwi r0, 0x0
    bne lbl_801C2E6C
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2E6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C2EA0
extern "C" asm void fn_801C2EA0() {
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
    lwzx r6, r5, r7
    b lbl_801C2ED0
lbl_801C2ECC:
    lwzx r6, r6, r7
lbl_801C2ED0:
    cmpwi r6, 0x0
    beq lbl_801C2EE4
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801C2ECC
lbl_801C2EE4:
    cmpwi r6, 0x0
    beq lbl_801C2F10
    opword 0xE02600AC
    opword 0xE00500AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02680B4
    opword 0xE00580B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801C2F30
lbl_801C2F10:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801C2F30:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1AAC
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C2F58
    li r0, 0x0
    b lbl_801C2F78
lbl_801C2F58:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801C2F78:
    cmpwi r0, 0x0
    bne lbl_801C2F98
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801C2F98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C2FB0
extern "C" asm void fn_801C2FB0() {
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
    b lbl_801C2FEC
lbl_801C2FE8:
    lwzx r4, r4, r6
lbl_801C2FEC:
    cmpwi r4, 0x0
    beq lbl_801C3000
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C2FE8
lbl_801C3000:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801C3014
lbl_801C300C:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801C3014:
    cmpwi r31, 0x0
    beq lbl_801C3028
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801C300C
lbl_801C3028:
    lfs f0, lbl_804A1AA0
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801C30CC
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1AAC
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
    bge lbl_801C3088
    li r0, 0x0
    b lbl_801C30A8
lbl_801C3088:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801C30A8:
    cmpwi r0, 0x0
    bne lbl_801C30CC
    lfs f0, lbl_804A1AA0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801C30CC:
    lfs f0, lbl_804A1AA0
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C3170
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1AAC
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
    bge lbl_801C312C
    li r0, 0x0
    b lbl_801C314C
lbl_801C312C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C314C:
    cmpwi r0, 0x0
    bne lbl_801C3170
    lfs f0, lbl_804A1AA0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801C3170:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1AAC
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
    bge lbl_801C31B8
    li r0, 0x0
    b lbl_801C31D8
lbl_801C31B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801C31D8:
    cmpwi r0, 0x0
    bne lbl_801C31F8
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801C31F8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
