#include <nw4r/ef.h>
#include <nw4r/math.h>

#include <revolution/GX.h>

namespace nw4r {
namespace ef {

static u8 directional_tex0_u8[] ALIGN(32) = {0x00, 0x01, 0x00, 0x00,
                                             0x01, 0x00, 0x01, 0x01};

DrawDirectionalStrategy::DrawDirectionalStrategy() {}

static math::MTX34 CalcLocalTransform(f32 px, f32 py, f32 sx, f32 sy,
                                      f32 stretch,
                                      const nw4r::math::MTX34& rotMtx,
                                      u8 option) {
    switch (option) {
    case 0: {
        f32 sx_px = sx * px;
        f32 sy_st = sy * stretch;
        f32 sy_py = sy * (py + stretch - 1.0f);

        return math::MTX34(
               rotMtx._00 * sx,
               rotMtx._01 * sy_st,
               rotMtx._02 * sx,
               -rotMtx._00 * sx_px - rotMtx._01 * sy_py + px,
               rotMtx._10 * sx,
               rotMtx._11 * sy_st,
               rotMtx._12 * sx,
               -rotMtx._10 * sx_px - rotMtx._11 * sy_py + py,
               rotMtx._20 * sx,
               rotMtx._21 * sy_st,
               rotMtx._22 * sx,
               -rotMtx._20 * sx_px - rotMtx._21 * sy_py);
    }

    case 1:
    default: {
        f32 sx_px = sx * px;
        f32 sy_py = sy * py;

        return math::MTX34(
               rotMtx._00 * sx,
               rotMtx._02 * sy,
               rotMtx._01 * sx,
               -rotMtx._00 * sx_px - rotMtx._02 * sy_py + px,
               rotMtx._10 * sx,
               rotMtx._12 * sy,
               rotMtx._11 * sx,
               -rotMtx._10 * sx_px - rotMtx._12 * sy_py,
               rotMtx._20 * sx,
               rotMtx._22 * sy,
               rotMtx._21 * sx,
               -rotMtx._20 * sx_px - rotMtx._22 * sy_py - py);
    }
    }
}

static inline void MtxSet(math::MTX34* pMtx, f32 m00, f32 m01, f32 m02, f32 m03,
                          f32 m10, f32 m11, f32 m12, f32 m13, f32 m20, f32 m21,
                          f32 m22, f32 m23) {
    pMtx->_00 = m00;
    pMtx->_01 = m01;
    pMtx->_02 = m02;
    pMtx->_03 = m03;
    pMtx->_10 = m10;
    pMtx->_11 = m11;
    pMtx->_12 = m12;
    pMtx->_13 = m13;
    pMtx->_20 = m20;
    pMtx->_21 = m21;
    pMtx->_22 = m22;
    pMtx->_23 = m23;
}

static inline void CalcRotate(math::MTX34* pMtx, Particle* pParticle, u8 axis) {
    math::VEC3 rot;
    pParticle->Draw_GetRotate(&rot);

    f32 sinX = 0.0f, cosX = 1.0f;
    f32 sinY = 0.0f, cosY = 1.0f;
    f32 sinZ = 0.0f, cosZ = 1.0f;

    switch (axis) {
    case 0: {
        if (rot.x != 0.0f) {
            math::SinCosRad(&sinX, &cosX, -rot.x);
        }

        MtxSet(pMtx, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, cosX, -sinX, 0.0f, 0.0f, sinX, cosX, 0.0f);
        break;
    }

    case 1: {
        if (rot.y != 0.0f) {
            math::SinCosRad(&sinY, &cosY, -rot.y);
        }

        MtxSet(pMtx, cosY, 0.0f, sinY, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, -sinY, 0.0f, cosY, 0.0f);
        break;
    }

    case 2: {
        if (rot.z != 0.0f) {
            math::SinCosRad(&sinZ, &cosZ, -rot.z);
        }

        MtxSet(pMtx, cosZ, -sinZ, 0.0f, 0.0f, sinZ, cosZ, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        break;
    }

    case 3:
    default: {
        if (rot.x) {
            math::SinCosRad(&sinX, &cosX, -rot.x);
        }
        if (rot.y) {
            math::SinCosRad(&sinY, &cosY, -rot.y);
        }
        if (rot.z) {
            math::SinCosRad(&sinZ, &cosZ, -rot.z);
        }

        f32 sx_sy = sinX * sinY;
        f32 cx_sy = cosX * sinY;

        MtxSet(pMtx,
               cosY * cosZ,
               sx_sy * cosZ - cosX * sinZ,
               cx_sy * cosZ + sinX * sinZ,
               0.0f,
               cosY * sinZ,
               sx_sy * sinZ + cosX * cosZ,
               cx_sy * sinZ - sinX * cosZ,
               0.0f,
               -sinY,
               cosY * sinX,
               cosX * cosY,
               0.0f);
        break;
    }
    }
}

static void DrawQuad(const math::MTX34& rMtx, const math::_VEC3* pPosArray,
                     bool texCoord) {

    math::VEC3 p0, p1, p2, p3;

    math::VEC3Transform(&p0, &rMtx,
                        static_cast<const math::VEC3*>(&pPosArray[0]));
    math::VEC3Transform(&p1, &rMtx,
                        static_cast<const math::VEC3*>(&pPosArray[1]));
    math::VEC3Transform(&p2, &rMtx,
                        static_cast<const math::VEC3*>(&pPosArray[2]));
    math::VEC3Transform(&p3, &rMtx,
                        static_cast<const math::VEC3*>(&pPosArray[3]));

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    {
        GXPosition(p0);
        if (texCoord) {
            GXTexCoord1x8(0);
        }

        GXPosition(p1);
        if (texCoord) {
            GXTexCoord1x8(1);
        }

        GXPosition(p2);
        if (texCoord) {
            GXTexCoord1x8(2);
        }

        GXPosition(p3);
        if (texCoord) {
            GXTexCoord1x8(3);
        }
    }
    GXEnd();
}

void DrawDirectionalStrategy::Draw(const DrawInfo& rInfo,
                                   ParticleManager* pManager) {
    InitGraphics(rInfo, pManager);

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    AheadContext context(*rInfo.GetViewMtx(), pManager);
    CalcAheadFunc pCalcAheadFunc = GetCalcAheadFunc(pManager);

    math::MTX34 glbMtx;
    math::MTX34 posMtx;

    pManager->CalcGlobalMtx(&glbMtx);
    math::MTX34Mult(&posMtx, rInfo.GetViewMtx(), &glbMtx);
    GXLoadPosMtxImm(posMtx, GX_PNMTX0);

    // Emitter matrix in the particle manager's space
    math::MTX34 emMtx;
    math::MTX34 invMtx;

    pManager->mManagerEM->CalcGlobalMtx(&emMtx);
    math::MTX34Inv(&invMtx, &glbMtx);
    math::MTX34Mult(&emMtx, &invMtx, &emMtx);

    math::VEC3 emAxisY;
    math::VEC3 emAxisZ;
    emAxisY = math::VEC3(emMtx._01, emMtx._11, emMtx._21);
    emAxisZ = math::VEC3(emMtx._02, emMtx._12, emMtx._22);
    Normalize(&emAxisZ);

    // Particles that have not been drawn yet start from the emitter's Y axis
    for (Particle* pIt = GetYoungestParticle(pManager);
         pIt != NULL && pIt->mPrevAxis.x > 1.0f;
         pIt = GetElderParticle(pManager, pIt)) {

        pIt->mPrevAxis = emAxisY;
    }

    f32 px = pDesc->pivotX / 100.0f;
    f32 py = pDesc->pivotY / 100.0f;

    GetFirstDrawParticleFunc pGetFirstFunc = GetGetFirstDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    GetNextDrawParticleFunc pGetNextFunc = GetGetNextDrawParticleFunc(
        pDesc->drawSetting.mFlags & EmitterDrawSetting::FLAG_DRAW_ORDER);

    bool first = true;

    for (Particle* pParticle = pGetFirstFunc(pManager); pParticle != NULL;
         pParticle = pGetNextFunc(pManager, pParticle)) {

        f32 sx = pParticle->Draw_GetSizeX();
        if (sx < NW4R_MATH_FLT_EPSILON) {
            continue;
        }

        f32 sy = pParticle->Draw_GetSizeY();
        if (sy < NW4R_MATH_FLT_EPSILON) {
            continue;
        }

        // Stretch along the direction of movement
        f32 stretch = 1.0f;
        if (pDesc->typeOption0 != 0) {
            math::VEC3 move;
            pParticle->GetMoveDir(&move);

            stretch += 0.5f * math::FSqrt(math::VEC3Dot(&move, &move)) / sy;
        }

        SetupGP(pParticle, rSetting, rInfo, first, false);
        first = false;

        math::MTX34 rotMtx;
        CalcRotate(&rotMtx, pParticle, pDesc->typeAxis);

        math::MTX34 locMtx = CalcLocalTransform(px, py, sx, sy, stretch, rotMtx,
                                                pDesc->typeOption1);

        math::VEC3 axisZ;
        math::VEC3 axisY;
        math::VEC3 axisX;

        pCalcAheadFunc(&axisY, &context, pParticle);
        math::VEC3Cross(&axisX, &pParticle->mPrevAxis, &axisY);

        if (!Normalize(&axisX)) {
            axisX = emAxisZ;
        }

        math::VEC3Cross(&axisZ, &axisY, &axisX);

        pParticle->mPrevAxis = axisZ;

        math::VEC3 pos = pParticle->mParameter.mPosition;

        math::MTX34 dirMtx(
            axisZ.x, axisY.x, axisX.x, pos.x,
            axisZ.y, axisY.y, axisX.y, pos.y,
            axisZ.z, axisY.z, axisX.z, pos.z);

        math::MTX34 drawMtx;
        math::MTX34Mult(&drawMtx, &dirMtx, &locMtx);

        // clang-format off
        static const math::_VEC3 p[4] = {
            -1.0f, -1.0f, 0.0f,
            -1.0f,  1.0f, 0.0f,
             1.0f,  1.0f, 0.0f,
             1.0f, -1.0f, 0.0f
        };
        // clang-format on

        DrawQuad(drawMtx, p, mNumTexmap > 0);

        if (pDesc->typeOption == EmitterDrawSetting::TYPE_CMN_CROSS) {
            // clang-format off
            static const math::_VEC3 px[4] = {
                0.0f, -1.0f,  1.0f,
                0.0f,  1.0f,  1.0f,
                0.0f,  1.0f, -1.0f,
                0.0f, -1.0f, -1.0f
            };
            // clang-format on

            DrawQuad(drawMtx, px, mNumTexmap > 0);
        }
    }
}

void DrawDirectionalStrategy::InitGraphics(const DrawInfo& rInfo,
                                           ParticleManager* pManager) {

    const EmitterDrawSetting& rSetting =
        *pManager->mResource->GetEmitterDrawSetting();

    InitTexture(rSetting);
    InitTev(rSetting, rInfo);
    InitColor(pManager, rSetting, rInfo);

    GXEnableTexOffsets(GX_TEXCOORD0, TRUE, TRUE);

    GXSetArray(GX_VA_TEX0, directional_tex0_u8, 2);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);

    if (mNumTexmap > 0) {
        GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
    }

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_U8, 0);

    GXSetCurrentMtx(GX_PNMTX0);
}

DrawStrategyImpl::CalcAheadFunc
DrawDirectionalStrategy::GetCalcAheadFunc(ParticleManager* pManager) {
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

    case EmitterDrawSetting::AHEAD_CMN_NODESIGN: {
        return CalcAhead_NoDesign;
    }

    default: {
        return CalcAhead_Speed;
    }
    }
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C480;
extern "C" float lbl_804A1AD0;
extern "C" float lbl_804A1AD4;
extern "C" float lbl_804A1AD8;
extern "C" float lbl_804A1ADC;
extern "C" float lbl_804A1AE0;
extern "C" float lbl_804A1AE4;
extern "C" float lbl_804A1AE8;
extern "C" float lbl_804A1AF0;
extern "C" u8 CalcAhead_EmitterDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle[];
extern "C" u8 jumptable_80360858[];
extern "C" u8 lbl_8033C3A0[];
extern "C" u8 lbl_8033C3D0[];
extern "C" u8 lbl_803E6550[];
extern "C" u8 lbl_803E6574[];
extern "C" u8 lbl_803E6580[];
extern "C" void CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_27();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_27();
extern "C" void fn_80018B24();
extern "C" void fn_80018B90();
extern "C" void fn_8001B910();
extern "C" void fn_8001DA9C();
extern "C" void fn_8001F9CC();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AF60();
extern "C" void fn_8002B060();
extern "C" void fn_8003CF70();
extern "C" void fn_801ACC48();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BA138();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C0E98();
extern "C" void fn_801C2CF4();
extern "C" void fn_801C2DC8();
extern "C" void fn_801C2EA0();
extern "C" void fn_801C2FB0();
extern "C" void fn_801C3254();
extern "C" void fn_801C338C();
extern "C" void fn_801C3518();
extern "C" void fn_801C3624();
extern "C" void fn_801C362C();
extern "C" void fn_801C4360();
extern "C" void fn_801C451C();
extern "C" void fn_801C458C();
extern "C" void fn_801C4594();
extern "C" void fn_801C45A0();
extern "C" void fn_801C45BC();
extern "C" void fn_801C4638();
extern "C" void fn_801C4680();
extern "C" void fn_801C4A00();
extern "C" void fn_801C4A44();
extern "C" void fn_801C4C4C();
extern "C" void fn_801C5280();
extern "C" void fn_801C533C();
extern "C" void fn_8030DEEC();

// asm_to_cpp: fn_801C3254
extern "C" asm void fn_801C3254() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    addi r5, r1, 0x2c
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bl PSMTXMultVec
    mr r3, r29
    addi r4, r30, 0xc
    addi r5, r1, 0x20
    bl PSMTXMultVec
    mr r3, r29
    addi r4, r30, 0x18
    addi r5, r1, 0x14
    bl PSMTXMultVec
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r1, 0x8
    bl PSMTXMultVec
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f0, 0x34(r1)
    lis r3, 0xcc01
    lfs f1, 0x30(r1)
    clrlwi. r4, r31, 31
    lfs f2, 0x2c(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C32EC
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C32EC:
    lfs f0, 0x28(r1)
    lis r3, 0xcc01
    lfs f1, 0x24(r1)
    cmpwi r4, 0x0
    lfs f2, 0x20(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3318
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C3318:
    lfs f0, 0x1c(r1)
    lis r3, 0xcc01
    lfs f1, 0x18(r1)
    cmpwi r4, 0x0
    lfs f2, 0x14(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3344
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C3344:
    lfs f0, 0x10(r1)
    lis r3, 0xcc01
    lfs f1, 0xc(r1)
    cmpwi r4, 0x0
    lfs f2, 0x8(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3370
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C3370:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C338C
extern "C" asm void fn_801C338C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r5
    li r5, 0x4
    stw r29, 0x44(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x40(r1)
    mr r28, r3
    li r3, 0x80
    bl GXBegin
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03D0000
    clrlwi. r4, r31, 31
    opword 0x10400828
    opword 0xE01C8008
    opword 0xE03D8008
    opword 0xF041002C
    opword 0x10400828
    lfs f0, 0x2c(r1)
    opword 0xF0418034
    lfs f1, 0x30(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x34(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3414
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C3414:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03E0000
    cmpwi r4, 0x0
    opword 0x10400828
    opword 0xE01C8008
    opword 0xE03E8008
    opword 0xF0410020
    opword 0x10400828
    lfs f0, 0x20(r1)
    opword 0xF0418028
    lfs f1, 0x24(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x28(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C3460
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C3460:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03D0000
    cmpwi r4, 0x0
    opword 0x1040082A
    opword 0xE01C8008
    opword 0xE03D8008
    opword 0xF0410014
    opword 0x1040082A
    lfs f0, 0x14(r1)
    opword 0xF041801C
    lfs f1, 0x18(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x1c(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C34AC
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C34AC:
    opword 0xE01C0000
    lis r3, 0xcc01
    opword 0xE03E0000
    cmpwi r4, 0x0
    opword 0x1040082A
    opword 0xE01C8008
    opword 0xE03E8008
    opword 0xF0410008
    opword 0x1040082A
    lfs f0, 0x8(r1)
    opword 0xF0418010
    lfs f1, 0xc(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0x10(r1)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C34F8
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C34F8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C3518
extern "C" asm void fn_801C3518() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    mr r6, r30
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r29)
    cmpwi r0, 0x0
    beq lbl_801C3598
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C3598:
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
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r3, 0x24(r31)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 30
    cmpwi r0, 0x1
    beq lbl_801C35F8
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801C362C
    b lbl_801C3608
lbl_801C35F8:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801C4C4C
lbl_801C3608:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801C3624
extern "C" asm void fn_801C3624() {
    nofralloc
    addi r3, r3, 0x9c
    blr
}

// asm_to_cpp: fn_801C362C
extern "C" asm void fn_801C362C() {
    nofralloc
    stwu r1, -0x450(r1)
    mflr r0
    stw r0, 0x454(r1)
    stfd f31, 0x440(r1)
    opword 0xF3E10448
    stfd f30, 0x430(r1)
    opword 0xF3C10438
    stfd f29, 0x420(r1)
    opword 0xF3A10428
    stfd f28, 0x410(r1)
    opword 0xF3810418
    stfd f27, 0x400(r1)
    opword 0xF3610408
    stfd f26, 0x3f0(r1)
    opword 0xF34103F8
    stfd f25, 0x3e0(r1)
    opword 0xF32103E8
    stfd f24, 0x3d0(r1)
    opword 0xF30103D8
    stfd f23, 0x3c0(r1)
    opword 0xF2E103C8
    stfd f22, 0x3b0(r1)
    opword 0xF2C103B8
    stfd f21, 0x3a0(r1)
    opword 0xF2A103A8
    stfd f20, 0x390(r1)
    opword 0xF2810398
    stfd f19, 0x380(r1)
    opword 0xF2610388
    stfd f18, 0x370(r1)
    opword 0xF2410378
    addi r11, r1, 0x370
    bl _savegpr_21
    lis r0, 0x4330
    lwz r7, 0x24(r5)
    mr r24, r4
    mr r25, r5
    stw r0, 0x328(r1)
    mr r23, r3
    mr r4, r25
    mr r6, r24
    stw r0, 0x330(r1)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r23)
    cmpwi r0, 0x0
    beq lbl_801C3724
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C3724:
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
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r3, 0x24(r25)
    lfs f1, lbl_804A1AD0
    lfs f0, 0x88(r24)
    addi r31, r3, 0x9c
    lwz r21, 0x0(r24)
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
    stw r21, 0x238(r1)
    stw r12, 0x23c(r1)
    stw r11, 0x240(r1)
    stw r10, 0x244(r1)
    stw r9, 0x248(r1)
    stw r8, 0x24c(r1)
    stw r7, 0x250(r1)
    stw r6, 0x254(r1)
    stw r5, 0x258(r1)
    stw r4, 0x25c(r1)
    stw r3, 0x260(r1)
    stw r0, 0x264(r1)
    beq lbl_801C38E0
    addi r3, r1, 0xc8
    bl GXGetProjectionv
    lfs f0, 0xc8(r1)
    fctiwz f0, f0
    stfd f0, 0x338(r1)
    lwz r0, 0x33c(r1)
    cmpwi r0, 0x1
    beq lbl_801C38D0
    bge lbl_801C38E0
    cmpwi r0, 0x0
    bge lbl_801C3804
    b lbl_801C38E0
lbl_801C3804:
    mr r3, r24
    addi r5, r1, 0x38
    addi r4, r24, 0x8c
    bl PSMTXMultVec
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C38BC
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1AD0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C387C
    lfs f3, 0x88(r24)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x264(r1)
    fmuls f3, f2, f3
    lfs f4, 0x244(r1)
    lfs f2, 0x254(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x244(r1)
    stfs f2, 0x254(r1)
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C387C:
    lfs f3, 0x88(r24)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x264(r1)
    fmuls f3, f2, f3
    lfs f4, 0x244(r1)
    lfs f2, 0x254(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x244(r1)
    stfs f2, 0x254(r1)
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C38BC:
    lfs f1, 0x264(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x264(r1)
    b lbl_801C38E0
lbl_801C38D0:
    lfs f1, 0x264(r1)
    lfs f0, 0x88(r24)
    fadds f0, f1, f0
    stfs f0, 0x264(r1)
lbl_801C38E0:
    mr r5, r25
    addi r3, r1, 0x268
    addi r4, r1, 0x238
    bl fn_801C0E98
    lwz r12, 0x0(r23)
    mr r3, r23
    mr r4, r25
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lbz r0, 0xd0(r23)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_801C3920
    li r29, 0x1
    b lbl_801C3924
lbl_801C3920:
    li r29, 0x0
lbl_801C3924:
    lbz r0, 0xae(r31)
    cmplwi r0, 0x7
    bne lbl_801C39D8
    addi r4, r1, 0x2a0
    addi r5, r1, 0x208
    addi r3, r1, 0x238
    bl PSMTXConcat
    addi r3, r1, 0x208
    li r4, 0x0
    bl GXLoadPosMtxImm
    lfs f7, 0x2f8(r1)
    lfs f6, 0x2e8(r1)
    stfs f7, 0xb8(r1)
    lfs f5, 0x2d8(r1)
    stfs f6, 0xb4(r1)
    lfs f4, 0x2f4(r1)
    opword 0xE02100B4
    stfs f5, 0xb0(r1)
    opword 0x10210072
    lfs f3, 0x2e4(r1)
    opword 0xE00180B0
    lfs f2, 0x2d4(r1)
    opword 0x1100083A
    lfs f0, lbl_804A1AD4
    stfs f2, 0x68(r1)
    opword 0x10280854
    stfs f3, 0x6c(r1)
    stfs f4, 0x70(r1)
    fcmpo cr0, f1, f0
    stfs f2, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f5, 0x5c(r1)
    stfs f6, 0x60(r1)
    stfs f7, 0x64(r1)
    bge lbl_801C39B8
    b lbl_801C3A98
lbl_801C39B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE04100B0
    opword 0x10020058
    opword 0xE04180B8
    opword 0xF00100B0
    opword 0x10020058
    opword 0xF00180B8
    b lbl_801C3A98
lbl_801C39D8:
    addi r4, r1, 0x2a0
    addi r5, r1, 0x1d8
    addi r3, r1, 0x238
    bl PSMTXConcat
    addi r3, r1, 0x1d8
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r3, 0x20(r25)
    addi r4, r1, 0x1a8
    bl fn_801ACC48
    addi r5, r1, 0x1a8
    addi r3, r1, 0x2d0
    mr r4, r5
    bl PSMTXConcat
    lfs f7, 0x1d0(r1)
    lfs f6, 0x1c0(r1)
    stfs f7, 0xb8(r1)
    lfs f5, 0x1b0(r1)
    stfs f6, 0xb4(r1)
    lfs f4, 0x1cc(r1)
    opword 0xE02100B4
    stfs f5, 0xb0(r1)
    opword 0x10210072
    lfs f3, 0x1bc(r1)
    opword 0xE00180B0
    lfs f2, 0x1ac(r1)
    opword 0x1100083A
    lfs f0, lbl_804A1AD4
    stfs f2, 0x50(r1)
    opword 0x10280854
    stfs f3, 0x54(r1)
    stfs f4, 0x58(r1)
    fcmpo cr0, f1, f0
    stfs f2, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f4, 0xc4(r1)
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f7, 0x4c(r1)
    bge lbl_801C3A7C
    b lbl_801C3A98
lbl_801C3A7C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE04100B0
    opword 0x10020058
    opword 0xE04180B8
    opword 0xF00100B0
    opword 0x10020058
    opword 0xF00180B8
lbl_801C3A98:
    lwz r3, 0x3c(r25)
    lfs f0, lbl_804A1AD8
    lfs f4, 0xbc(r1)
    lfs f3, 0xc0(r1)
    lfs f2, 0xc4(r1)
    b lbl_801C3AC4
lbl_801C3AB0:
    stfs f4, 0xcc(r3)
    stfs f3, 0xd0(r3)
    stfs f2, 0xd4(r3)
    lhz r0, 0x42(r25)
    lwzx r3, r3, r0
lbl_801C3AC4:
    cmpwi r3, 0x0
    beq lbl_801C3AD8
    lfs f1, 0xcc(r3)
    fcmpo cr0, f1, f0
    bgt lbl_801C3AB0
lbl_801C3AD8:
    lbz r4, 0xa9(r31)
    mr r3, r23
    lbz r0, 0xaa(r31)
    extsb r5, r4
    lwz r12, 0x0(r23)
    extsb r4, r0
    lfd f3, lbl_804A1AE8
    xoris r6, r5, 0x8000
    lfs f1, lbl_804A1ADC
    xoris r5, r4, 0x8000
    stw r6, 0x32c(r1)
    lhz r0, 0x0(r31)
    stw r5, 0x334(r1)
    lfd f2, 0x328(r1)
    rlwinm r4, r0, 0, 20, 20
    lfd f0, 0x330(r1)
    fsubs f2, f2, f3
    lwz r12, 0x10(r12)
    fsubs f0, f0, f3
    fdivs f23, f2, f1
    fdivs f22, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r23)
    mr r21, r3
    lhz r0, 0x0(r31)
    mr r3, r23
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r21
    mr r28, r3
    mr r3, r25
    li r27, 0x1
    mtctr r12
    bctrl
    lfs f26, lbl_804A1AD0
    mr r26, r3
    lfs f27, lbl_804A1AE0
    lis r21, lbl_8033C3A0@ha
    lfd f28, lbl_804A1AF0
    lis r22, lbl_8033C3D0@ha
    lfs f29, lbl_804A1AE4
    lfs f30, lbl_804A1AD8
    lfs f31, lbl_804A1AD4
    b lbl_801C42D0
lbl_801C3B94:
    lfs f2, 0x30(r26)
    lfs f1, 0x38(r26)
    lwz r3, 0xc8(r26)
    fmuls f3, f2, f1
    lfs f0, 0x58(r3)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f31
    blt lbl_801C42B8
    lwz r3, 0x24(r3)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C3BE4
    bge lbl_801C3BD8
    cmpwi r0, 0x2000
    beq lbl_801C3BF0
    b lbl_801C3C00
lbl_801C3BD8:
    cmpwi r0, 0x6000
    beq lbl_801C3C0C
    b lbl_801C3C00
lbl_801C3BE4:
    lfs f0, 0x34(r26)
    fmuls f3, f0, f1
    b lbl_801C3C0C
lbl_801C3BF0:
    lfs f0, 0x3c(r26)
    fmuls f3, f2, f0
    b lbl_801C3C0C
    b lbl_801C3C0C
lbl_801C3C00:
    lfs f1, 0x34(r26)
    lfs f0, 0x3c(r26)
    fmuls f3, f1, f0
lbl_801C3C0C:
    lwz r3, 0xc8(r26)
    lfs f0, 0x5c(r3)
    fmuls f24, f3, f0
    fcmpo cr0, f24, f31
    blt lbl_801C42B8
    lbz r0, 0xb0(r31)
    lfs f21, lbl_804A1AD8
    cmpwi r0, 0x0
    beq lbl_801C3CA8
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF001002C
    opword 0x10020828
    lfs f1, 0x30(r1)
    opword 0xF0018034
    lfs f2, 0x2c(r1)
    lfs f0, 0x34(r1)
    stfs f1, 0xa8(r1)
    stfs f0, 0xac(r1)
    opword 0xE02100A8
    stfs f2, 0xa4(r1)
    opword 0x10210072
    opword 0xE00180A4
    opword 0x1000083A
    opword 0x12400854
    fcmpo cr0, f18, f26
    opword 0x4C401382
    bne lbl_801C3C90
    fmr f0, f26
    b lbl_801C3C9C
lbl_801C3C90:
    fmr f1, f18
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f18, f1
lbl_801C3C9C:
    fmuls f0, f27, f0
    fdivs f0, f0, f24
    fadds f21, f21, f0
lbl_801C3CA8:
    mr r3, r23
    mr r4, r26
    mr r5, r31
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
    stfs f2, 0x20(r1)
    lbz r3, 0xaf(r31)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C3D08
    stw r0, 0x32c(r1)
    lfd f0, 0x328(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f2, f0
    stfs f0, 0x20(r1)
lbl_801C3D08:
    lbz r0, 0x9b(r26)
    cmpwi r0, 0x0
    beq lbl_801C3D30
    stw r0, 0x334(r1)
    lfs f0, 0x24(r1)
    lfd f1, 0x330(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C3D30:
    lbz r0, 0x9c(r26)
    cmpwi r0, 0x0
    beq lbl_801C3D58
    stw r0, 0x32c(r1)
    lfs f0, 0x28(r1)
    lfd f1, 0x328(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C3D58:
    lwz r4, 0xc8(r26)
    cmpwi r3, 0x2
    lfs f1, 0x20(r1)
    lfs f0, 0x60(r4)
    lfs f3, 0x24(r1)
    fadds f4, f1, f0
    lfs f2, 0x64(r4)
    lfs f0, 0x68(r4)
    lfs f1, 0x28(r1)
    fadds f2, f3, f2
    stfs f4, 0x20(r1)
    fadds f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f26, 0x8(r1)
    stfs f30, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f30, 0x14(r1)
    stfs f26, 0x18(r1)
    stfs f30, 0x1c(r1)
    beq lbl_801C3E74
    bge lbl_801C3ECC
    cmpwi r3, 0x0
    beq lbl_801C3DC4
    bge lbl_801C3E1C
    b lbl_801C3ECC
    b lbl_801C3ECC
lbl_801C3DC4:
    fcmpu cr0, f26, f4
    beq lbl_801C3DDC
    fneg f1, f4
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
lbl_801C3DDC:
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fneg f2, f1
    stfs f30, 0x178(r1)
    stfs f26, 0x17c(r1)
    stfs f26, 0x180(r1)
    stfs f26, 0x184(r1)
    stfs f26, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f2, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f26, 0x198(r1)
    stfs f1, 0x19c(r1)
    stfs f0, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3E1C:
    fcmpu cr0, f26, f2
    beq lbl_801C3E34
    fneg f1, f2
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
lbl_801C3E34:
    lfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    fneg f2, f0
    stfs f26, 0x17c(r1)
    stfs f1, 0x178(r1)
    stfs f0, 0x180(r1)
    stfs f26, 0x184(r1)
    stfs f26, 0x188(r1)
    stfs f30, 0x18c(r1)
    stfs f26, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f2, 0x198(r1)
    stfs f26, 0x19c(r1)
    stfs f1, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3E74:
    fcmpu cr0, f26, f0
    beq lbl_801C3E8C
    fneg f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
lbl_801C3E8C:
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fneg f2, f1
    stfs f26, 0x180(r1)
    stfs f0, 0x178(r1)
    stfs f2, 0x17c(r1)
    stfs f26, 0x184(r1)
    stfs f1, 0x188(r1)
    stfs f0, 0x18c(r1)
    stfs f26, 0x190(r1)
    stfs f26, 0x194(r1)
    stfs f26, 0x198(r1)
    stfs f26, 0x19c(r1)
    stfs f30, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
    b lbl_801C3FB4
lbl_801C3ECC:
    lfs f0, 0x20(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3EE8
    fneg f1, f0
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
lbl_801C3EE8:
    lfs f0, 0x24(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3F04
    fneg f1, f0
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
lbl_801C3F04:
    lfs f0, 0x28(r1)
    fcmpu cr0, f26, f0
    beq lbl_801C3F20
    fneg f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
lbl_801C3F20:
    lfs f0, 0x10(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0x8(r1)
    fneg f10, f0
    lfs f4, 0x1c(r1)
    fmuls f1, f7, f0
    lfs f5, 0x18(r1)
    fmuls f12, f8, f0
    fmuls f2, f8, f4
    fmuls f3, f1, f5
    lfs f6, 0x14(r1)
    fmuls f0, f8, f5
    stfs f10, 0x198(r1)
    fmuls f1, f1, f4
    fsubs f11, f3, f2
    fmuls f2, f6, f5
    stfs f26, 0x184(r1)
    fadds f10, f1, f0
    fmuls f0, f6, f4
    stfs f26, 0x194(r1)
    fmuls f3, f12, f5
    stfs f2, 0x188(r1)
    fmuls f2, f7, f4
    fmuls f9, f7, f6
    stfs f0, 0x178(r1)
    fmuls f8, f6, f8
    fadds f2, f3, f2
    fmuls f1, f12, f4
    stfs f10, 0x180(r1)
    fmuls f0, f7, f5
    stfs f8, 0x19c(r1)
    fsubs f0, f1, f0
    stfs f11, 0x190(r1)
    stfs f2, 0x18c(r1)
    stfs f0, 0x17c(r1)
    stfs f9, 0x1a0(r1)
    stfs f26, 0x1a4(r1)
lbl_801C3FB4:
    lbz r0, 0xb1(r31)
    cmpwi r0, 0x1
    beq lbl_801C4098
    bge lbl_801C4098
    cmpwi r0, 0x0
    bge lbl_801C3FD0
    b lbl_801C4098
lbl_801C3FD0:
    fadds f0, f22, f21
    lfs f12, 0x188(r1)
    lfs f7, 0x178(r1)
    fmuls f2, f25, f23
    fneg f4, f12
    lfs f18, 0x198(r1)
    fsubs f0, f0, f30
    lfs f13, 0x1a0(r1)
    fneg f1, f7
    lfs f8, 0x190(r1)
    lfs f3, 0x180(r1)
    fmuls f13, f13, f25
    fmuls f0, f24, f0
    lfs f5, 0x17c(r1)
    fmuls f11, f4, f2
    lfs f10, 0x18c(r1)
    fmuls f6, f1, f2
    lfs f20, 0x19c(r1)
    fmuls f4, f5, f0
    stfs f13, 0x170(r1)
    fmuls f9, f10, f0
    fmuls f1, f24, f21
    fsubs f4, f6, f4
    fsubs f9, f11, f9
    fmuls f6, f20, f1
    fmuls f5, f5, f1
    fmuls f11, f18, f25
    stfs f6, 0x16c(r1)
    fmuls f6, f10, f1
    fneg f19, f18
    fadds f9, f22, f9
    stfs f5, 0x14c(r1)
    fmuls f8, f8, f25
    fmuls f10, f12, f25
    stfs f6, 0x15c(r1)
    fadds f4, f23, f4
    fmuls f3, f3, f25
    stfs f9, 0x164(r1)
    fmuls f6, f7, f25
    fmuls f1, f19, f2
    stfs f4, 0x154(r1)
    fmuls f0, f20, f0
    stfs f6, 0x148(r1)
    fsubs f0, f1, f0
    stfs f3, 0x150(r1)
    stfs f10, 0x158(r1)
    stfs f8, 0x160(r1)
    stfs f11, 0x168(r1)
    stfs f0, 0x174(r1)
    b lbl_801C4150
lbl_801C4098:
    lfs f20, 0x198(r1)
    fmuls f1, f25, f23
    lfs f6, 0x178(r1)
    fmuls f0, f24, f22
    fneg f3, f20
    lfs f13, 0x1a0(r1)
    fneg f2, f6
    lfs f10, 0x188(r1)
    fmuls f12, f13, f0
    fmuls f21, f3, f1
    lfs f4, 0x180(r1)
    fmuls f5, f2, f1
    fneg f9, f10
    lfs f11, 0x19c(r1)
    fmuls f3, f4, f0
    fsubs f12, f21, f12
    lfs f8, 0x190(r1)
    fmuls f11, f11, f25
    fsubs f3, f5, f3
    lfs f7, 0x18c(r1)
    fsubs f5, f12, f22
    lfs f2, 0x17c(r1)
    fmuls f12, f13, f24
    fmuls f1, f9, f1
    stfs f5, 0x174(r1)
    fmuls f5, f8, f24
    fmuls f0, f8, f0
    stfs f11, 0x170(r1)
    fmuls f11, f20, f25
    fmuls f7, f7, f25
    fmuls f10, f10, f25
    stfs f5, 0x15c(r1)
    fadds f3, f23, f3
    fmuls f2, f2, f25
    stfs f11, 0x168(r1)
    fmuls f4, f4, f24
    fmuls f5, f6, f25
    stfs f3, 0x154(r1)
    fsubs f0, f1, f0
    stfs f4, 0x14c(r1)
    stfs f5, 0x148(r1)
    stfs f2, 0x150(r1)
    stfs f10, 0x158(r1)
    stfs f7, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f12, 0x16c(r1)
lbl_801C4150:
    mr r12, r30
    mr r5, r26
    addi r3, r1, 0x8c
    addi r4, r1, 0x268
    mtctr r12
    bctrl
    addi r5, r1, 0x80
    addi r4, r1, 0x8c
    addi r3, r26, 0xcc
    bl fn_8030DEEC
    opword 0xE0010084
    opword 0xE0218080
    opword 0x10000032
    opword 0x1021007A
    opword 0x10210014
    fcmpo cr0, f1, f31
    bge lbl_801C419C
    li r0, 0x0
    b lbl_801C41BC
lbl_801C419C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410080
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418088
    opword 0xF0010080
    opword 0x10020058
    opword 0xF0018088
lbl_801C41BC:
    cmpwi r0, 0x0
    bne lbl_801C41DC
    lfs f2, 0xb0(r1)
    lfs f1, 0xb4(r1)
    lfs f0, 0xb8(r1)
    stfs f2, 0x80(r1)
    stfs f1, 0x84(r1)
    stfs f0, 0x88(r1)
lbl_801C41DC:
    addi r5, r1, 0x98
    addi r4, r1, 0x80
    addi r3, r1, 0x8c
    bl fn_8030DEEC
    lfs f0, 0x98(r1)
    addi r5, r1, 0xe8
    addi r4, r1, 0x148
    addi r3, r1, 0x118
    stfs f0, 0xcc(r26)
    lfs f0, 0x9c(r1)
    stfs f0, 0xd0(r26)
    lfs f0, 0xa0(r1)
    stfs f0, 0xd4(r26)
    lwz r7, 0xac(r26)
    lwz r6, 0xb0(r26)
    lwz r0, 0xb4(r26)
    stw r7, 0x74(r1)
    lfs f10, 0x88(r1)
    stw r6, 0x78(r1)
    lfs f9, 0x94(r1)
    stw r0, 0x7c(r1)
    lfs f8, 0xa0(r1)
    lfs f11, 0x7c(r1)
    lfs f7, 0x78(r1)
    lfs f6, 0x84(r1)
    lfs f5, 0x90(r1)
    lfs f4, 0x9c(r1)
    lfs f3, 0x74(r1)
    lfs f2, 0x80(r1)
    lfs f1, 0x8c(r1)
    lfs f0, 0x98(r1)
    stfs f1, 0x11c(r1)
    stfs f0, 0x118(r1)
    stfs f2, 0x120(r1)
    stfs f3, 0x124(r1)
    stfs f4, 0x128(r1)
    stfs f5, 0x12c(r1)
    stfs f6, 0x130(r1)
    stfs f7, 0x134(r1)
    stfs f8, 0x138(r1)
    stfs f9, 0x13c(r1)
    stfs f10, 0x140(r1)
    stfs f11, 0x144(r1)
    bl PSMTXConcat
    mr r5, r29
    addi r3, r1, 0xe8
    addi r4, r21, lbl_8033C3A0@l
    bl fn_801C3254
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C42B8
    mr r5, r29
    addi r3, r1, 0xe8
    addi r4, r22, lbl_8033C3D0@l
    bl fn_801C3254
lbl_801C42B8:
    mr r12, r28
    mr r3, r25
    mr r4, r26
    mtctr r12
    bctrl
    mr r26, r3
lbl_801C42D0:
    cmpwi r26, 0x0
    bne lbl_801C3B94
    opword 0xE3E10448
    lfd f31, 0x440(r1)
    opword 0xE3C10438
    lfd f30, 0x430(r1)
    opword 0xE3A10428
    lfd f29, 0x420(r1)
    opword 0xE3810418
    lfd f28, 0x410(r1)
    opword 0xE3610408
    lfd f27, 0x400(r1)
    opword 0xE34103F8
    lfd f26, 0x3f0(r1)
    opword 0xE32103E8
    lfd f25, 0x3e0(r1)
    opword 0xE30103D8
    lfd f24, 0x3d0(r1)
    opword 0xE2E103C8
    lfd f23, 0x3c0(r1)
    opword 0xE2C103B8
    lfd f22, 0x3b0(r1)
    opword 0xE2A103A8
    lfd f21, 0x3a0(r1)
    opword 0xE2810398
    lfd f20, 0x390(r1)
    opword 0xE2610388
    lfd f19, 0x380(r1)
    opword 0xE2410378
    addi r11, r1, 0x370
    lfd f18, 0x370(r1)
    bl _restgpr_21
    lwz r0, 0x454(r1)
    mtlr r0
    addi r1, r1, 0x450
    blr
}

// asm_to_cpp: fn_801C4360
extern "C" asm void fn_801C4360() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    lfs f1, lbl_804A1AD0
    mr r27, r3
    lfs f0, 0x88(r3)
    mr r28, r4
    lwz r29, 0x0(r3)
    lwz r30, 0x4(r3)
    fcmpu cr0, f1, f0
    lwz r31, 0x8(r3)
    lwz r12, 0xc(r3)
    lwz r11, 0x10(r3)
    lwz r10, 0x14(r3)
    lwz r9, 0x18(r3)
    lwz r8, 0x1c(r3)
    lwz r7, 0x20(r3)
    lwz r6, 0x24(r3)
    lwz r5, 0x28(r3)
    lwz r0, 0x2c(r3)
    stw r29, 0x0(r4)
    stw r30, 0x4(r4)
    stw r31, 0x8(r4)
    stw r12, 0xc(r4)
    stw r11, 0x10(r4)
    stw r10, 0x14(r4)
    stw r9, 0x18(r4)
    stw r8, 0x1c(r4)
    stw r7, 0x20(r4)
    stw r6, 0x24(r4)
    stw r5, 0x28(r4)
    stw r0, 0x2c(r4)
    beq lbl_801C4500
    addi r3, r1, 0x14
    bl GXGetProjectionv
    lfs f0, 0x14(r1)
    fctiwz f0, f0
    stfd f0, 0x30(r1)
    lwz r0, 0x34(r1)
    cmpwi r0, 0x1
    beq lbl_801C44F0
    bge lbl_801C4500
    cmpwi r0, 0x0
    bge lbl_801C441C
    b lbl_801C4500
lbl_801C441C:
    mr r3, r27
    addi r4, r27, 0x8c
    addi r5, r1, 0x8
    bl PSMTXMultVec
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C44DC
    lfs f1, 0x10(r1)
    lfs f0, lbl_804A1AD0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C4498
    lfs f0, 0x8(r1)
    lfs f4, 0x88(r27)
    lfs f2, 0xc(r28)
    fmuls f3, f0, f4
    lfs f1, 0x1c(r28)
    lfs f0, 0x2c(r28)
    fadds f2, f2, f3
    stfs f2, 0xc(r28)
    lfs f2, 0xc(r1)
    fmuls f2, f2, f4
    fadds f1, f1, f2
    stfs f1, 0x1c(r28)
    lfs f1, 0x10(r1)
    fmuls f1, f1, f4
    fadds f0, f0, f1
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C4498:
    lfs f0, 0x8(r1)
    lfs f4, 0x88(r27)
    lfs f2, 0xc(r28)
    fmuls f3, f0, f4
    lfs f1, 0x1c(r28)
    lfs f0, 0x2c(r28)
    fsubs f2, f2, f3
    stfs f2, 0xc(r28)
    lfs f2, 0xc(r1)
    fmuls f2, f2, f4
    fsubs f1, f1, f2
    stfs f1, 0x1c(r28)
    lfs f1, 0x10(r1)
    fmuls f1, f1, f4
    fsubs f0, f0, f1
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C44DC:
    lfs f1, 0x2c(r28)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x2c(r28)
    b lbl_801C4500
lbl_801C44F0:
    lfs f1, 0x2c(r28)
    lfs f0, 0x88(r27)
    fadds f0, f1, f0
    stfs f0, 0x2c(r28)
lbl_801C4500:
    addi r11, r1, 0x50
    mr r3, r28
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C451C
extern "C" asm void fn_801C451C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1AD4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    opword 0xE0430004
    opword 0xE0238000
    opword 0x104200B2
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C4558
    li r3, 0x0
    b lbl_801C4578
lbl_801C4558:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE01F0000
    li r3, 0x1
    opword 0x10400058
    opword 0xE01F8008
    opword 0xF05F0000
    opword 0x10400058
    opword 0xF05F8008
lbl_801C4578:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C458C
extern "C" asm void fn_801C458C() {
    nofralloc
    lwz r3, 0x3c(r3)
    blr
}

// asm_to_cpp: fn_801C4594
extern "C" asm void fn_801C4594() {
    nofralloc
    lhz r0, 0x42(r3)
    lwzx r3, r4, r0
    blr
}

// asm_to_cpp: fn_801C45A0
extern "C" asm void fn_801C45A0() {
    nofralloc
    lfs f1, 0x30(r3)
    lfs f0, 0x38(r3)
    lwz r3, 0xc8(r3)
    fmuls f1, f1, f0
    lfs f0, 0x58(r3)
    fmuls f1, f1, f0
    blr
}

// asm_to_cpp: fn_801C45BC
extern "C" asm void fn_801C45BC() {
    nofralloc
    lwz r5, 0xc8(r3)
    lwz r4, 0x24(r5)
    lhz r0, 0x9c(r4)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C45F0
    bge lbl_801C45E4
    cmpwi r0, 0x2000
    beq lbl_801C4600
    b lbl_801C4620
lbl_801C45E4:
    cmpwi r0, 0x6000
    beq lbl_801C4610
    b lbl_801C4620
lbl_801C45F0:
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4600:
    lfs f1, 0x30(r3)
    lfs f0, 0x3c(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4610:
    lfs f1, 0x30(r3)
    lfs f0, 0x38(r3)
    fmuls f1, f1, f0
    b lbl_801C462C
lbl_801C4620:
    lfs f1, 0x34(r3)
    lfs f0, 0x3c(r3)
    fmuls f1, f1, f0
lbl_801C462C:
    lfs f0, 0x5c(r5)
    fmuls f1, f1, f0
    blr
}

// asm_to_cpp: fn_801C4638
extern "C" asm void fn_801C4638() {
    nofralloc
    stwu r1, -0x20(r1)
    opword 0xE00300AC
    opword 0xE02300B8
    opword 0x10600828
    opword 0xE00380B4
    opword 0xE02380C0
    mr r3, r4
    opword 0xF0610008
    opword 0x10600828
    lfs f2, 0x8(r1)
    opword 0xF0618010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f0, 0x8(r4)
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801C4680
extern "C" asm void fn_801C4680() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stw r31, 0x3c(r1)
    mr r31, r3
    lbz r6, 0x9a(r4)
    lfs f3, 0x40(r4)
    lfs f1, 0x44(r4)
    cmpwi r6, 0x0
    lfs f0, 0x48(r4)
    stfs f3, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C46E8
    lis r0, 0x4330
    stw r6, 0x34(r1)
    lfd f2, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f0, lbl_804A1AE4
    lfd f1, 0x30(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x20(r1)
lbl_801C46E8:
    lbz r3, 0x9b(r4)
    cmpwi r3, 0x0
    beq lbl_801C4720
    lis r0, 0x4330
    stw r3, 0x34(r1)
    lfd f3, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f1, lbl_804A1AE4
    lfd f2, 0x30(r1)
    lfs f0, 0x24(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C4720:
    lbz r3, 0x9c(r4)
    cmpwi r3, 0x0
    beq lbl_801C4758
    lis r0, 0x4330
    stw r3, 0x34(r1)
    lfd f3, lbl_804A1AF0
    stw r0, 0x30(r1)
    lfs f1, lbl_804A1AE4
    lfd f2, 0x30(r1)
    lfs f0, 0x28(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C4758:
    lwz r3, 0xc8(r4)
    cmpwi r5, 0x2
    lfs f3, 0x20(r1)
    lfs f2, 0x60(r3)
    lfs f1, 0x24(r1)
    fadds f5, f3, f2
    lfs f0, 0x64(r3)
    lfs f3, 0x28(r1)
    fadds f4, f1, f0
    lfs f2, 0x68(r3)
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    fadds f2, f3, f2
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f2, 0x28(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    beq lbl_801C488C
    bge lbl_801C48EC
    cmpwi r5, 0x0
    beq lbl_801C47CC
    bge lbl_801C482C
    b lbl_801C48EC
    b lbl_801C48EC
lbl_801C47CC:
    fcmpu cr0, f1, f5
    beq lbl_801C47E4
    fneg f1, f5
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_801B9C64
lbl_801C47E4:
    lfs f3, 0x1c(r1)
    lfs f4, 0x18(r1)
    fneg f2, f3
    lfs f0, lbl_804A1AD0
    lfs f1, lbl_804A1AD8
    stfs f0, 0x4(r31)
    stfs f1, 0x0(r31)
    stfs f0, 0x8(r31)
    stfs f0, 0xc(r31)
    stfs f0, 0x10(r31)
    stfs f4, 0x14(r31)
    stfs f2, 0x18(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x20(r31)
    stfs f3, 0x24(r31)
    stfs f4, 0x28(r31)
    stfs f0, 0x2c(r31)
    b lbl_801C49E4
lbl_801C482C:
    fcmpu cr0, f1, f4
    beq lbl_801C4844
    fneg f1, f4
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
lbl_801C4844:
    lfs f2, 0x14(r1)
    lfs f4, 0x10(r1)
    fneg f3, f2
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    stfs f4, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f2, 0x8(r31)
    stfs f1, 0xc(r31)
    stfs f1, 0x10(r31)
    stfs f0, 0x14(r31)
    stfs f1, 0x18(r31)
    stfs f1, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f1, 0x24(r31)
    stfs f4, 0x28(r31)
    stfs f1, 0x2c(r31)
    b lbl_801C49E4
lbl_801C488C:
    fcmpu cr0, f1, f2
    beq lbl_801C48A4
    fneg f1, f2
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
lbl_801C48A4:
    lfs f3, 0xc(r1)
    lfs f4, 0x8(r1)
    fneg f2, f3
    lfs f1, lbl_804A1AD0
    lfs f0, lbl_804A1AD8
    stfs f4, 0x0(r31)
    stfs f2, 0x4(r31)
    stfs f1, 0x8(r31)
    stfs f1, 0xc(r31)
    stfs f3, 0x10(r31)
    stfs f4, 0x14(r31)
    stfs f1, 0x18(r31)
    stfs f1, 0x1c(r31)
    stfs f1, 0x20(r31)
    stfs f1, 0x24(r31)
    stfs f0, 0x28(r31)
    stfs f1, 0x2c(r31)
    b lbl_801C49E4
lbl_801C48EC:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x20(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C490C
    fneg f1, f0
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    bl fn_801B9C64
lbl_801C490C:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x24(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C492C
    fneg f1, f0
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
lbl_801C492C:
    lfs f1, lbl_804A1AD0
    lfs f0, 0x28(r1)
    fcmpu cr0, f1, f0
    beq lbl_801C494C
    fneg f1, f0
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
lbl_801C494C:
    lfs f0, 0x14(r1)
    lfs f8, 0x18(r1)
    lfs f9, 0x1c(r1)
    fneg f11, f0
    lfs f6, 0xc(r1)
    fmuls f2, f8, f0
    lfs f5, 0x8(r1)
    fmuls f31, f9, f0
    fmuls f1, f9, f6
    lfs f7, 0x10(r1)
    fmuls f4, f2, f6
    fmuls f3, f9, f5
    lfs f0, lbl_804A1AD0
    fmuls f12, f7, f9
    fmuls f2, f2, f5
    stfs f0, 0xc(r31)
    fsubs f10, f4, f3
    fmuls f3, f7, f6
    stfs f0, 0x1c(r31)
    fadds f9, f2, f1
    fmuls f1, f7, f5
    stfs f11, 0x20(r31)
    fmuls f13, f8, f7
    stfs f3, 0x10(r31)
    fmuls f4, f31, f6
    fmuls f3, f8, f5
    stfs f1, 0x0(r31)
    fmuls f2, f31, f5
    fmuls f1, f8, f6
    fadds f3, f4, f3
    stfs f9, 0x8(r31)
    fsubs f1, f2, f1
    stfs f10, 0x18(r31)
    stfs f3, 0x14(r31)
    stfs f1, 0x4(r31)
    stfs f12, 0x24(r31)
    stfs f13, 0x28(r31)
    stfs f0, 0x2c(r31)
lbl_801C49E4:
    opword 0xE3E10048
    lwz r0, 0x54(r1)
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C4A00
extern "C" asm void fn_801C4A00() {
    nofralloc
    lfs f11, 0x8(r1)
    lfs f10, 0xc(r1)
    lfs f9, 0x10(r1)
    lfs f0, 0x14(r1)
    stfs f1, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f3, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f6, 0x14(r3)
    stfs f7, 0x18(r3)
    stfs f8, 0x1c(r3)
    stfs f11, 0x20(r3)
    stfs f10, 0x24(r3)
    stfs f9, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}

// asm_to_cpp: fn_801C4A44
extern "C" asm void fn_801C4A44() {
    nofralloc
    stwu r1, -0x70(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    stfd f27, 0x20(r1)
    opword 0xF3610028
    stfd f26, 0x10(r1)
    opword 0xF3410018
    cmpwi r4, 0x1
    beq lbl_801C4B5C
    bge lbl_801C4B5C
    cmpwi r4, 0x0
    bge lbl_801C4A90
    b lbl_801C4B5C
lbl_801C4A90:
    fadds f7, f2, f5
    lfs f6, lbl_804A1AD8
    lfs f9, 0x0(r5)
    fmuls f0, f3, f1
    lfs f26, 0x10(r5)
    fmuls f31, f4, f5
    fsubs f6, f7, f6
    lfs f30, 0x20(r5)
    fneg f8, f9
    lfs f27, 0x28(r5)
    fneg f11, f26
    lfs f10, 0x18(r5)
    fmuls f6, f4, f6
    lfs f7, 0x4(r5)
    fmuls f8, f8, f0
    lfs f12, 0x14(r5)
    fmuls f13, f11, f0
    lfs f28, 0x24(r5)
    fmuls f5, f7, f6
    lfs f4, 0x8(r5)
    fmuls f11, f12, f6
    fmuls f27, f27, f3
    fsubs f5, f8, f5
    fsubs f11, f13, f11
    fneg f29, f30
    stfs f27, 0x28(r3)
    fadds f1, f1, f5
    fadds f11, f2, f11
    fmuls f8, f28, f31
    fmuls f5, f4, f3
    stfs f1, 0xc(r3)
    fmuls f2, f12, f31
    fmuls f1, f29, f0
    stfs f8, 0x24(r3)
    fmuls f0, f28, f6
    fmuls f13, f30, f3
    stfs f2, 0x14(r3)
    fmuls f10, f10, f3
    fmuls f8, f26, f3
    stfs f11, 0x1c(r3)
    fmuls f4, f7, f31
    fmuls f2, f9, f3
    stfs f5, 0x8(r3)
    fsubs f0, f1, f0
    stfs f4, 0x4(r3)
    stfs f2, 0x0(r3)
    stfs f8, 0x10(r3)
    stfs f10, 0x18(r3)
    stfs f13, 0x20(r3)
    stfs f0, 0x2c(r3)
    b lbl_801C4C14
lbl_801C4B5C:
    lfs f26, 0x20(r5)
    fmuls f0, f3, f1
    lfs f10, 0x0(r5)
    fmuls f5, f4, f2
    fneg f7, f26
    lfs f28, 0x28(r5)
    fneg f6, f10
    lfs f8, 0x8(r5)
    fmuls f26, f26, f3
    fmuls f27, f7, f0
    fmuls f29, f28, f5
    lfs f31, 0x10(r5)
    fmuls f9, f6, f0
    lfs f30, 0x24(r5)
    fmuls f7, f8, f5
    fsubs f29, f27, f29
    lfs f11, 0x14(r5)
    fmuls f30, f30, f3
    fsubs f7, f9, f7
    lfs f6, 0x4(r5)
    fsubs f2, f29, f2
    fneg f13, f31
    lfs f12, 0x18(r5)
    fadds f1, f1, f7
    stfs f2, 0x2c(r3)
    fmuls f2, f12, f4
    fmuls f27, f28, f4
    stfs f1, 0xc(r3)
    fmuls f1, f13, f0
    fmuls f0, f12, f5
    fmuls f11, f11, f3
    stfs f2, 0x14(r3)
    fmuls f9, f31, f3
    fmuls f6, f6, f3
    stfs f30, 0x28(r3)
    fmuls f4, f8, f4
    fmuls f2, f10, f3
    stfs f26, 0x20(r3)
    fsubs f0, f1, f0
    stfs f4, 0x4(r3)
    stfs f2, 0x0(r3)
    stfs f6, 0x8(r3)
    stfs f9, 0x10(r3)
    stfs f11, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f27, 0x24(r3)
lbl_801C4C14:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    opword 0xE3610028
    lfd f27, 0x20(r1)
    opword 0xE3410018
    lfd f26, 0x10(r1)
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_801C4C4C
extern "C" asm void fn_801C4C4C() {
    nofralloc
    stwu r1, -0x3a0(r1)
    mflr r0
    stw r0, 0x3a4(r1)
    stfd f31, 0x390(r1)
    opword 0xF3E10398
    stfd f30, 0x380(r1)
    opword 0xF3C10388
    stfd f29, 0x370(r1)
    opword 0xF3A10378
    stfd f28, 0x360(r1)
    opword 0xF3810368
    stfd f27, 0x350(r1)
    opword 0xF3610358
    stfd f26, 0x340(r1)
    opword 0xF3410348
    stfd f25, 0x330(r1)
    opword 0xF3210338
    stfd f24, 0x320(r1)
    opword 0xF3010328
    stfd f23, 0x310(r1)
    opword 0xF2E10318
    stfd f22, 0x300(r1)
    opword 0xF2C10308
    addi r11, r1, 0x300
    bl _savegpr_22
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bl fn_801C5280
    lwz r3, 0x24(r28)
    bl fn_801C3624
    mr r31, r3
    addi r3, r1, 0x1d8
    bl fn_8002AE40
    mr r3, r27
    addi r4, r1, 0x1d8
    bl fn_801C4360
    mr r5, r28
    addi r3, r1, 0x208
    addi r4, r1, 0x1d8
    bl fn_801C0E98
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r4, r28
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lbz r4, 0xd0(r26)
    mr r30, r3
    addi r3, r1, 0x1a8
    neg r0, r4
    or r0, r0, r4
    srwi r29, r0, 31
    bl fn_8002AE40
    addi r3, r1, 0x178
    bl fn_8002AE40
    mr r3, r28
    addi r4, r1, 0x178
    bl fn_801B7FB8
    addi r3, r1, 0x1a8
    addi r4, r1, 0x1d8
    addi r5, r1, 0x178
    bl fn_8003CF70
    lis r3, lbl_803E6580@ha
    addi r3, r3, lbl_803E6580@l
    bl fn_80018B90
    li r4, 0x0
    bl GXLoadPosMtxImm
    addi r3, r1, 0x1a8
    li r4, 0x0
    bl fn_801BA138
    fmr f27, f1
    addi r3, r1, 0x1a8
    li r4, 0x1
    bl fn_801BA138
    fmr f28, f1
    addi r3, r1, 0x1a8
    li r4, 0x2
    bl fn_801BA138
    fmr f29, f1
    mr r3, r28
    bl fn_801C458C
    lfs f25, lbl_804A1AD8
    mr r24, r3
    lis r25, lbl_803E6574@ha
    b lbl_801C4DC0
lbl_801C4DA4:
    addi r3, r24, 0xcc
    addi r4, r25, lbl_803E6574@l
    bl fn_8002B060
    mr r3, r28
    mr r4, r24
    bl fn_801C4594
    mr r24, r3
lbl_801C4DC0:
    cmpwi r24, 0x0
    beq lbl_801C4DD4
    lfs f0, 0xcc(r24)
    fcmpo cr0, f0, f25
    bgt lbl_801C4DA4
lbl_801C4DD4:
    lbz r4, 0xa9(r31)
    lis r6, 0x4330
    lwz r12, 0x0(r26)
    mr r3, r26
    extsb r5, r4
    lbz r0, 0xaa(r31)
    xoris r7, r5, 0x8000
    stw r6, 0x2c8(r1)
    extsb r4, r0
    lfd f3, lbl_804A1AE8
    stw r7, 0x2cc(r1)
    xoris r5, r4, 0x8000
    lhz r0, 0x0(r31)
    lfd f0, 0x2c8(r1)
    stw r5, 0x2d4(r1)
    rlwinm r4, r0, 0, 20, 20
    fsubs f2, f0, f3
    lfs f1, lbl_804A1ADC
    stw r6, 0x2d0(r1)
    lwz r12, 0x10(r12)
    lfd f0, 0x2d0(r1)
    fdivs f26, f2, f1
    fsubs f0, f0, f3
    fdivs f25, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r24, r3
    lhz r0, 0x0(r31)
    mr r3, r26
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r24
    mr r24, r3
    mr r3, r28
    li r23, 0x1
    mtctr r12
    bctrl
    lfs f31, lbl_804A1AE0
    mr r22, r3
    lfs f30, lbl_804A1AD4
    lis r25, lbl_803E6550@ha
    b lbl_801C5210
lbl_801C4E88:
    mr r3, r22
    bl fn_801C45A0
    fcmpo cr0, f1, f30
    fmr f24, f1
    blt lbl_801C51F8
    mr r3, r22
    bl fn_801C45BC
    fmr f23, f1
    fcmpo cr0, f1, f30
    blt lbl_801C51F8
    lbz r0, 0xb0(r31)
    lfs f22, lbl_804A1AD8
    cmpwi r0, 0x0
    beq lbl_801C4EF0
    addi r3, r1, 0xa8
    bl fn_8002AF5C
    mr r3, r22
    addi r4, r1, 0xa8
    bl fn_801C4638
    addi r3, r1, 0xa8
    mr r4, r3
    bl fn_8001B910
    bl fn_8001DA9C
    fmuls f0, f31, f1
    fdivs f0, f0, f23
    fadds f22, f22, f0
lbl_801C4EF0:
    mr r3, r26
    mr r4, r22
    mr r5, r31
    mr r6, r27
    mr r7, r23
    li r8, 0x0
    bl fn_801BF940
    lbz r5, 0xaf(r31)
    mr r4, r22
    addi r3, r1, 0x148
    li r23, 0x0
    bl fn_801C4680
    fmr f1, f26
    lbz r4, 0xb1(r31)
    fmr f2, f25
    addi r3, r1, 0x118
    fmr f3, f24
    addi r5, r1, 0x148
    fmr f4, f23
    fmr f5, f22
    bl fn_801C4A44
    addi r3, r1, 0x9c
    bl fn_8002AF5C
    addi r3, r1, 0x90
    bl fn_8002AF5C
    addi r3, r1, 0x84
    bl fn_8002AF5C
    addi r3, r1, 0x78
    bl fn_8002AF5C
    mr r12, r30
    mr r5, r22
    addi r3, r1, 0x78
    addi r4, r1, 0x208
    mtctr r12
    bctrl
    addi r3, r1, 0x78
    addi r4, r1, 0x1a8
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    addi r3, r1, 0x90
    addi r4, r1, 0x78
    bl fn_8002B060
    addi r3, r1, 0x90
    bl fn_801C451C
    lfs f0, 0x78(r1)
    addi r3, r1, 0x24
    lfs f1, 0x7c(r1)
    fneg f2, f0
    lfs f3, lbl_804A1AD0
    bl fn_8002AF60
    mr r4, r3
    addi r3, r1, 0x9c
    bl fn_8002B060
    addi r3, r1, 0x9c
    bl fn_801C451C
    cmpwi r3, 0x0
    beq lbl_801C5014
    lfs f3, 0x78(r1)
    addi r3, r1, 0x18
    lfs f0, 0x7c(r1)
    fneg f1, f3
    lfs f4, 0x80(r1)
    fneg f2, f0
    fmuls f3, f3, f3
    fmuls f0, f0, f0
    fmuls f1, f1, f4
    fmuls f2, f2, f4
    fadds f3, f3, f0
    bl fn_8002AF60
    mr r4, r3
    addi r3, r1, 0x84
    bl fn_8002B060
    b lbl_801C5050
lbl_801C5014:
    addi r3, r1, 0x9c
    addi r4, r1, 0x78
    addi r5, r22, 0xcc
    bl fn_8001F9CC
    addi r3, r1, 0x9c
    bl fn_801C451C
    cmpwi r3, 0x0
    bne lbl_801C5040
    addi r3, r1, 0x9c
    addi r4, r25, lbl_803E6550@l
    bl fn_8002B060
lbl_801C5040:
    addi r3, r1, 0x84
    addi r4, r1, 0x9c
    addi r5, r1, 0x78
    bl fn_8001F9CC
lbl_801C5050:
    addi r3, r1, 0x84
    bl fn_801C451C
    addi r3, r22, 0xcc
    addi r4, r1, 0x84
    bl fn_8002B060
    addi r3, r1, 0x6c
    bl fn_8002AF5C
    addi r3, r1, 0x6c
    addi r4, r1, 0x1a8
    addi r5, r22, 0xac
    bl fn_80018B24
    lfs f0, 0xa4(r1)
    addi r3, r1, 0xe8
    fmuls f0, f27, f0
    stfs f0, 0x8(r1)
    lfs f0, 0x98(r1)
    fmuls f0, f28, f0
    stfs f0, 0xc(r1)
    lfs f0, 0x8c(r1)
    fmuls f0, f29, f0
    stfs f0, 0x10(r1)
    lfs f0, 0x74(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x84(r1)
    lfs f1, 0x9c(r1)
    lfs f2, 0x90(r1)
    fmuls f3, f29, f0
    lfs f4, 0xa0(r1)
    fmuls f1, f27, f1
    lfs f6, 0x94(r1)
    fmuls f2, f28, f2
    lfs f0, 0x88(r1)
    fmuls f5, f27, f4
    lfs f4, 0x6c(r1)
    fmuls f6, f28, f6
    lfs f8, 0x70(r1)
    fmuls f7, f29, f0
    bl fn_801C4A00
    addi r3, r1, 0xb8
    bl fn_8002AE40
    addi r3, r1, 0xb8
    addi r4, r1, 0xe8
    addi r5, r1, 0x118
    bl fn_8003CF70
    lfs f1, 0xc4(r1)
    addi r3, r1, 0x60
    lfs f2, 0xd4(r1)
    lfs f3, 0xe4(r1)
    bl fn_8002AF60
    lfs f1, 0xb8(r1)
    addi r3, r1, 0x54
    lfs f0, 0xbc(r1)
    lfs f4, 0xc8(r1)
    lfs f2, 0xcc(r1)
    fadds f1, f1, f0
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fadds f2, f4, f2
    fadds f3, f3, f0
    bl fn_8002AF60
    lfs f1, 0xb8(r1)
    addi r3, r1, 0x48
    lfs f0, 0xbc(r1)
    lfs f4, 0xc8(r1)
    lfs f2, 0xcc(r1)
    fsubs f1, f1, f0
    lfs f3, 0xd8(r1)
    lfs f0, 0xdc(r1)
    fsubs f2, f4, f2
    fsubs f3, f3, f0
    bl fn_8002AF60
    mr r6, r29
    addi r3, r1, 0x60
    addi r4, r1, 0x54
    addi r5, r1, 0x48
    bl fn_801C338C
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C51F8
    lfs f1, 0xbc(r1)
    addi r3, r1, 0x3c
    lfs f0, 0xc0(r1)
    lfs f4, 0xcc(r1)
    lfs f2, 0xd0(r1)
    fadds f1, f1, f0
    lfs f3, 0xdc(r1)
    lfs f0, 0xe0(r1)
    fadds f2, f4, f2
    fadds f3, f3, f0
    bl fn_8002AF60
    lfs f1, 0xbc(r1)
    addi r3, r1, 0x30
    lfs f0, 0xc0(r1)
    lfs f4, 0xcc(r1)
    lfs f2, 0xd0(r1)
    fsubs f1, f1, f0
    lfs f3, 0xdc(r1)
    lfs f0, 0xe0(r1)
    fsubs f2, f4, f2
    fsubs f3, f3, f0
    bl fn_8002AF60
    mr r6, r29
    addi r3, r1, 0x60
    addi r4, r1, 0x3c
    addi r5, r1, 0x30
    bl fn_801C338C
lbl_801C51F8:
    mr r12, r24
    mr r3, r28
    mr r4, r22
    mtctr r12
    bctrl
    mr r22, r3
lbl_801C5210:
    cmpwi r22, 0x0
    bne lbl_801C4E88
    opword 0xE3E10398
    lfd f31, 0x390(r1)
    opword 0xE3C10388
    lfd f30, 0x380(r1)
    opword 0xE3A10378
    lfd f29, 0x370(r1)
    opword 0xE3810368
    lfd f28, 0x360(r1)
    opword 0xE3610358
    lfd f27, 0x350(r1)
    opword 0xE3410348
    lfd f26, 0x340(r1)
    opword 0xE3210338
    lfd f25, 0x330(r1)
    opword 0xE3010328
    lfd f24, 0x320(r1)
    opword 0xE2E10318
    lfd f23, 0x310(r1)
    opword 0xE2C10308
    addi r11, r1, 0x300
    lfd f22, 0x300(r1)
    bl _restgpr_22
    lwz r0, 0x3a4(r1)
    mtlr r0
    addi r1, r1, 0x3a0
    blr
}

// asm_to_cpp: fn_801C5280
extern "C" asm void fn_801C5280() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    mr r4, r5
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x24(r5)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C480
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r31)
    cmpwi r0, 0x0
    beq lbl_801C52F0
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C52F0:
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
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C533C
extern "C" asm void fn_801C533C() {
    nofralloc
    lwz r3, 0x24(r4)
    lbz r0, 0x14a(r3)
    cmplwi r0, 0x7
    bgt lbl_801C53AC
    lis r3, jumptable_80360858@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80360858@l
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
    lis r3, fn_801C2EA0@ha
    addi r3, r3, fn_801C2EA0@l
    blr
    lis r3, CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@ha
    addi r3, r3, CalcAhead_NoDesign__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r4math4VEC3PQ44nw4r2ef16DrawStrategyImpl12AheadContextPQ34nw4r2ef8Particle@l
    blr
    lis r3, fn_801C2FB0@ha
    addi r3, r3, fn_801C2FB0@l
    blr
lbl_801C53AC:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}
