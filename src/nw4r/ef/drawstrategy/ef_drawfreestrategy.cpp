#include <nw4r/ef.h>
#include <nw4r/math.h>

#include <revolution/GX.h>

namespace nw4r {
namespace ef {

static math::MTX34 CalcLocalTransform(f32 px, f32 py, f32 sx, f32 sy,
                                      const nw4r::math::MTX34& rRot);

static math::MTX34 CalcRotate(Particle* pParticle, u8 axis);

static u8 free_tex0_u8[] ALIGN(32) = {0x00, 0x01, 0x00, 0x00,
                                      0x01, 0x00, 0x01, 0x01};

DrawFreeStrategy::DrawFreeStrategy() {}

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

void DrawFreeStrategy::Draw(const DrawInfo& rInfo, ParticleManager* pManager) {
    InitGraphics(rInfo, pManager);

    EmitterDesc* pDesc = pManager->mResource->GetEmitterDesc();
    const EmitterDrawSetting& rSetting = pDesc->drawSetting;

    math::MTX34 glbMtx;
    math::MTX34 posMtx;

    pManager->CalcGlobalMtx(&glbMtx);
    math::MTX34Mult(&posMtx, rInfo.GetViewMtx(), &glbMtx);
    GXLoadPosMtxImm(posMtx, GX_PNMTX0);

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

        SetupGP(pParticle, rSetting, rInfo, first, false);
        first = false;

        math::MTX34 rotMtx = CalcRotate(pParticle, pDesc->typeAxis);
        math::MTX34 locMtx = CalcLocalTransform(px, py, sx, sy, rotMtx);

        locMtx._03 += pParticle->mParameter.mPosition.x;
        locMtx._13 += pParticle->mParameter.mPosition.y;
        locMtx._23 += pParticle->mParameter.mPosition.z;

        // clang-format off
        static const math::_VEC3 p[4] = {
            -1.0f, -1.0f, 0.0f,
            -1.0f,  1.0f, 0.0f,
             1.0f,  1.0f, 0.0f,
             1.0f, -1.0f, 0.0f
        };
        // clang-format on

        DrawQuad(locMtx, p, mNumTexmap > 0);

        if (pDesc->typeOption == EmitterDrawSetting::TYPE_CMN_CROSS) {
            // clang-format off
            static const math::_VEC3 px[4] = {
                0.0f, -1.0f,  1.0f,
                0.0f,  1.0f,  1.0f,
                0.0f,  1.0f, -1.0f,
                0.0f, -1.0f, -1.0f
            };
            // clang-format on

            DrawQuad(locMtx, px, mNumTexmap > 0);
        }
    }
}

void DrawFreeStrategy::InitGraphics(const DrawInfo& rInfo,
                                    ParticleManager* pManager) {

    const EmitterDrawSetting& rSetting =
        *pManager->mResource->GetEmitterDrawSetting();

    InitTexture(rSetting);
    InitTev(rSetting, rInfo);
    InitColor(pManager, rSetting, rInfo);

    GXEnableTexOffsets(GX_TEXCOORD0, TRUE, TRUE);

    GXSetArray(GX_VA_TEX0, free_tex0_u8, 2);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);

    if (mNumTexmap > 0) {
        GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
    }

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_U8, 0);

    GXSetCurrentMtx(GX_PNMTX0);
}

static math::MTX34 CalcLocalTransform(f32 px, f32 py, f32 sx, f32 sy,
                                      const nw4r::math::MTX34& rRot) {

    f32 sx_px = sx * px;
    f32 sy_py = sy * py;

    // clang-format off
    return math::MTX34(
        rRot._00 * sx,  rRot._01 * sy,  rRot._02 * sx,  -rRot._00 * sx_px - rRot._01 * sy_py + px,
        rRot._10 * sx,  rRot._11 * sy,  rRot._12 * sx,  -rRot._10 * sx_px - rRot._11 * sy_py + py,
        rRot._20 * sx,  rRot._21 * sy,  rRot._22 * sx,  -rRot._20 * sx_px - rRot._21 * sy_py);
    // clang-format on
}

static math::MTX34 CalcRotate(Particle* pParticle, u8 axis) {
#pragma unused(axis)

    math::VEC3 rot;
    pParticle->Draw_GetRotate(&rot);

    f32 sx, cx;
    math::SinCosRad(&sx, &cx, rot.x);

    f32 sy, cy;
    math::SinCosRad(&sy, &cy, rot.y);

    f32 sz, cz;
    math::SinCosRad(&sz, &cz, rot.z);

    f32 sx_sy = sx * sy;
    f32 cx_sy = cx * sy;

    // clang-format off
    return math::MTX34(
        cy * cz,  sx_sy * cz - cx * sz,  cx_sy * cz + sx * sz,  0.0f,
        cy * sz,  sx_sy * sz + cx * cz,  cx_sy * sz - sx * cz,  0.0f,
            -sy,               cy * sx,               cx * cy,  0.0f);
    // clang-format on
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C4A0;
extern "C" float lbl_804A1AF8;
extern "C" float lbl_804A1AFC;
extern "C" float lbl_804A1B00;
extern "C" float lbl_804A1B04;
extern "C" float lbl_804A1B08;
extern "C" float lbl_804A1B10;
extern "C" float lbl_804A1B18;
extern "C" u8 lbl_8033C400[];
extern "C" u8 lbl_8033C430[];
extern "C" void _restgpr_22();
extern "C" void _savegpr_22();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C5424();
extern "C" void fn_801C555C();

// asm_to_cpp: fn_801C5424
extern "C" asm void fn_801C5424() {
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
    beq lbl_801C54BC
    li r0, 0x0
    stb r0, -0x8000(r3)
lbl_801C54BC:
    lfs f0, 0x28(r1)
    lis r3, 0xcc01
    lfs f1, 0x24(r1)
    cmpwi r4, 0x0
    lfs f2, 0x20(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C54E8
    li r0, 0x1
    stb r0, -0x8000(r3)
lbl_801C54E8:
    lfs f0, 0x1c(r1)
    lis r3, 0xcc01
    lfs f1, 0x18(r1)
    cmpwi r4, 0x0
    lfs f2, 0x14(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C5514
    li r0, 0x2
    stb r0, -0x8000(r3)
lbl_801C5514:
    lfs f0, 0x10(r1)
    lis r3, 0xcc01
    lfs f1, 0xc(r1)
    cmpwi r4, 0x0
    lfs f2, 0x8(r1)
    stfs f2, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801C5540
    li r0, 0x3
    stb r0, -0x8000(r3)
lbl_801C5540:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C555C
extern "C" asm void fn_801C555C() {
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
    addi r11, r1, 0x160
    bl _savegpr_22
    lis r0, 0x4330
    lwz r7, 0x24(r5)
    mr r25, r4
    mr r26, r5
    stw r0, 0x118(r1)
    mr r24, r3
    mr r4, r26
    mr r6, r25
    stw r0, 0x120(r1)
    addi r5, r7, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    li r3, 0xd
    la r4, lbl_8049C4A0
    li r5, 0x2
    bl GXSetArray
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r24)
    cmpwi r0, 0x0
    beq lbl_801C563C
    li r3, 0xd
    li r4, 0x2
    bl GXSetVtxDesc
lbl_801C563C:
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
    lbz r0, 0xd0(r24)
    lwz r3, 0x24(r26)
    cmpwi r0, 0x0
    addi r31, r3, 0x9c
    beq lbl_801C5690
    li r30, 0x1
    b lbl_801C5694
lbl_801C5690:
    li r30, 0x0
lbl_801C5694:
    mr r3, r26
    addi r4, r1, 0xe8
    bl fn_801B7FB8
    lfs f1, lbl_804A1AF8
    lfs f0, 0x88(r25)
    lwz r22, 0x0(r25)
    lwz r12, 0x4(r25)
    fcmpu cr0, f1, f0
    lwz r11, 0x8(r25)
    lwz r10, 0xc(r25)
    lwz r9, 0x10(r25)
    lwz r8, 0x14(r25)
    lwz r7, 0x18(r25)
    lwz r6, 0x1c(r25)
    lwz r5, 0x20(r25)
    lwz r4, 0x24(r25)
    lwz r3, 0x28(r25)
    lwz r0, 0x2c(r25)
    stw r22, 0xb8(r1)
    stw r12, 0xbc(r1)
    stw r11, 0xc0(r1)
    stw r10, 0xc4(r1)
    stw r9, 0xc8(r1)
    stw r8, 0xcc(r1)
    stw r7, 0xd0(r1)
    stw r6, 0xd4(r1)
    stw r5, 0xd8(r1)
    stw r4, 0xdc(r1)
    stw r3, 0xe0(r1)
    stw r0, 0xe4(r1)
    beq lbl_801C581C
    addi r3, r1, 0x38
    bl GXGetProjectionv
    lfs f0, 0x38(r1)
    fctiwz f0, f0
    stfd f0, 0x128(r1)
    lwz r0, 0x12c(r1)
    cmpwi r0, 0x1
    beq lbl_801C580C
    bge lbl_801C581C
    cmpwi r0, 0x0
    bge lbl_801C5740
    b lbl_801C581C
lbl_801C5740:
    mr r3, r25
    addi r5, r1, 0x2c
    addi r4, r25, 0x8c
    bl PSMTXMultVec
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801C57F8
    lfs f1, 0x34(r1)
    lfs f0, lbl_804A1AF8
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801C57B8
    lfs f3, 0x88(r25)
    lfs f4, 0x2c(r1)
    lfs f2, 0x30(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0xe4(r1)
    fmuls f3, f2, f3
    lfs f4, 0xc4(r1)
    lfs f2, 0xd4(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0xc4(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C57B8:
    lfs f3, 0x88(r25)
    lfs f4, 0x2c(r1)
    lfs f2, 0x30(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0xe4(r1)
    fmuls f3, f2, f3
    lfs f4, 0xc4(r1)
    lfs f2, 0xd4(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0xc4(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C57F8:
    lfs f1, 0xe4(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0xe4(r1)
    b lbl_801C581C
lbl_801C580C:
    lfs f1, 0xe4(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0xe4(r1)
lbl_801C581C:
    addi r5, r1, 0xb8
    addi r4, r1, 0xe8
    mr r3, r5
    bl PSMTXConcat
    addi r3, r1, 0xb8
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r4, 0xa9(r31)
    mr r3, r24
    lbz r0, 0xaa(r31)
    extsb r5, r4
    lwz r12, 0x0(r24)
    extsb r4, r0
    lfd f3, lbl_804A1B10
    xoris r6, r5, 0x8000
    lfs f1, lbl_804A1AFC
    xoris r5, r4, 0x8000
    stw r6, 0x11c(r1)
    lhz r0, 0x0(r31)
    stw r5, 0x124(r1)
    lfd f2, 0x118(r1)
    rlwinm r4, r0, 0, 20, 20
    lfd f0, 0x120(r1)
    fsubs f2, f2, f3
    lwz r12, 0x10(r12)
    fsubs f0, f0, f3
    fdivs f24, f2, f1
    fdivs f23, f0, f1
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r22, r3
    lhz r0, 0x0(r31)
    mr r3, r24
    lwz r12, 0x14(r12)
    rlwinm r4, r0, 0, 20, 20
    mtctr r12
    bctrl
    mr r12, r22
    mr r29, r3
    mr r3, r26
    li r28, 0x1
    mtctr r12
    bctrl
    lfd f28, lbl_804A1B18
    mr r27, r3
    lfs f29, lbl_804A1B04
    lis r22, lbl_8033C400@ha
    lfs f31, lbl_804A1AF8
    lis r23, lbl_8033C430@ha
    lfs f30, lbl_804A1B08
    lfs f27, lbl_804A1B00
    b lbl_801C5D50
lbl_801C58F0:
    lfs f2, 0x30(r27)
    lfs f1, 0x38(r27)
    lwz r3, 0xc8(r27)
    fmuls f3, f2, f1
    lfs f0, 0x58(r3)
    fmuls f26, f3, f0
    fcmpo cr0, f26, f27
    blt lbl_801C5D38
    lwz r3, 0x24(r3)
    lhz r0, 0x9c(r3)
    rlwinm r0, r0, 0, 17, 18
    cmpwi r0, 0x4000
    beq lbl_801C5940
    bge lbl_801C5934
    cmpwi r0, 0x2000
    beq lbl_801C594C
    b lbl_801C595C
lbl_801C5934:
    cmpwi r0, 0x6000
    beq lbl_801C5968
    b lbl_801C595C
lbl_801C5940:
    lfs f0, 0x34(r27)
    fmuls f3, f0, f1
    b lbl_801C5968
lbl_801C594C:
    lfs f0, 0x3c(r27)
    fmuls f3, f2, f0
    b lbl_801C5968
    b lbl_801C5968
lbl_801C595C:
    lfs f1, 0x34(r27)
    lfs f0, 0x3c(r27)
    fmuls f3, f1, f0
lbl_801C5968:
    lwz r3, 0xc8(r27)
    lfs f0, 0x5c(r3)
    fmuls f25, f3, f0
    fcmpo cr0, f25, f27
    blt lbl_801C5D38
    mr r3, r24
    mr r4, r27
    mr r5, r31
    mr r6, r25
    mr r7, r28
    li r8, 0x0
    bl fn_801BF940
    lbz r0, 0x9a(r27)
    li r28, 0x0
    lfs f2, 0x40(r27)
    lfs f1, 0x44(r27)
    cmpwi r0, 0x0
    lfs f0, 0x48(r27)
    stfs f2, 0x20(r1)
    lbz r3, 0xaf(r31)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C59DC
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f0, f0, f28
    fmuls f0, f29, f0
    fadds f0, f2, f0
    stfs f0, 0x20(r1)
lbl_801C59DC:
    lbz r0, 0x9b(r27)
    cmpwi r0, 0x0
    beq lbl_801C5A04
    stw r0, 0x124(r1)
    lfs f0, 0x24(r1)
    lfd f1, 0x120(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x24(r1)
lbl_801C5A04:
    lbz r0, 0x9c(r27)
    cmpwi r0, 0x0
    beq lbl_801C5A2C
    stw r0, 0x11c(r1)
    lfs f0, 0x28(r1)
    lfd f1, 0x118(r1)
    fsubs f1, f1, f28
    fmuls f1, f29, f1
    fadds f0, f0, f1
    stfs f0, 0x28(r1)
lbl_801C5A2C:
    lwz r4, 0xc8(r27)
    cmpwi r3, 0x2
    lfs f1, 0x20(r1)
    lfs f0, 0x60(r4)
    lfs f4, 0x24(r1)
    fadds f1, f1, f0
    lfs f3, 0x64(r4)
    lfs f2, 0x28(r1)
    lfs f0, 0x68(r4)
    fadds f3, f4, f3
    stfs f1, 0x20(r1)
    fadds f0, f2, f0
    stfs f3, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801C5B1C
    bge lbl_801C5B6C
    cmpwi r3, 0x0
    beq lbl_801C5A80
    bge lbl_801C5ACC
    b lbl_801C5B6C
    b lbl_801C5B6C
lbl_801C5A80:
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fneg f2, f1
    stfs f30, 0x88(r1)
    stfs f31, 0x8c(r1)
    stfs f31, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f2, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f1, 0xac(r1)
    stfs f0, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5ACC:
    fmr f1, f3
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
    lfs f0, 0x10(r1)
    lfs f1, 0x14(r1)
    fneg f2, f0
    stfs f31, 0x8c(r1)
    stfs f1, 0x88(r1)
    stfs f0, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    stfs f30, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f2, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f1, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5B1C:
    fmr f1, f0
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fneg f2, f1
    stfs f31, 0x90(r1)
    stfs f0, 0x88(r1)
    stfs f2, 0x8c(r1)
    stfs f31, 0x94(r1)
    stfs f1, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f31, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f31, 0xac(r1)
    stfs f30, 0xb0(r1)
    stfs f31, 0xb4(r1)
    b lbl_801C5C30
lbl_801C5B6C:
    lfs f1, 0x20(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    bl fn_801B9C64
    lfs f1, 0x24(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x14
    bl fn_801B9C64
    lfs f1, 0x28(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x1c
    bl fn_801B9C64
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
    stfs f10, 0xa8(r1)
    fmuls f1, f1, f4
    fsubs f11, f3, f2
    fmuls f2, f6, f5
    stfs f31, 0x94(r1)
    fadds f10, f1, f0
    fmuls f0, f6, f4
    stfs f31, 0xa4(r1)
    fmuls f3, f12, f5
    stfs f2, 0x98(r1)
    fmuls f2, f7, f4
    fmuls f9, f7, f6
    stfs f0, 0x88(r1)
    fmuls f8, f6, f8
    fadds f2, f3, f2
    fmuls f1, f12, f4
    stfs f10, 0x90(r1)
    fmuls f0, f7, f5
    stfs f8, 0xac(r1)
    fsubs f0, f1, f0
    stfs f11, 0xa0(r1)
    stfs f2, 0x9c(r1)
    stfs f0, 0x8c(r1)
    stfs f9, 0xb0(r1)
    stfs f31, 0xb4(r1)
lbl_801C5C30:
    lfs f11, 0x98(r1)
    fmuls f1, f26, f24
    lfs f6, 0x88(r1)
    fmuls f0, f25, f23
    fneg f3, f11
    lfs f21, 0xa8(r1)
    fneg f2, f6
    lfs f9, 0x9c(r1)
    fmuls f6, f6, f26
    lfs f4, 0x8c(r1)
    fmuls f10, f3, f1
    lfs f13, 0xac(r1)
    fmuls f8, f9, f0
    lfs f12, 0xb0(r1)
    fmuls f3, f4, f0
    lfs f7, 0xa0(r1)
    fmuls f5, f2, f1
    lfs f2, 0x90(r1)
    fsubs f8, f10, f8
    stfs f6, 0x58(r1)
    fmuls f10, f12, f26
    mr r5, r30
    fsubs f3, f5, f3
    addi r3, r1, 0x58
    fneg f22, f21
    stfs f10, 0x80(r1)
    fmuls f5, f13, f25
    addi r4, r22, lbl_8033C400@l
    fmuls f12, f21, f26
    fadds f8, f23, f8
    stfs f5, 0x7c(r1)
    fmuls f7, f7, f26
    fmuls f9, f9, f25
    stfs f12, 0x78(r1)
    fmuls f10, f11, f26
    fadds f3, f24, f3
    stfs f7, 0x70(r1)
    fmuls f2, f2, f26
    fmuls f4, f4, f25
    stfs f10, 0x68(r1)
    fmuls f1, f22, f1
    fmuls f0, f13, f0
    stfs f2, 0x60(r1)
    stfs f4, 0x5c(r1)
    fsubs f1, f1, f0
    stfs f3, 0x64(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x74(r1)
    stfs f1, 0x84(r1)
    lfs f0, 0xac(r27)
    fadds f0, f3, f0
    stfs f0, 0x64(r1)
    lfs f0, 0xb0(r27)
    fadds f0, f8, f0
    stfs f0, 0x74(r1)
    lfs f0, 0xb4(r27)
    fadds f0, f1, f0
    stfs f0, 0x84(r1)
    bl fn_801C5424
    lbz r0, 0xad(r31)
    cmplwi r0, 0x1
    bne lbl_801C5D38
    mr r5, r30
    addi r3, r1, 0x58
    addi r4, r23, lbl_8033C430@l
    bl fn_801C5424
lbl_801C5D38:
    mr r12, r29
    mr r3, r26
    mr r4, r27
    mtctr r12
    bctrl
    mr r27, r3
lbl_801C5D50:
    cmpwi r27, 0x0
    bne lbl_801C58F0
    opword 0xE3E10208
    lfd f31, 0x200(r1)
    opword 0xE3C101F8
    lfd f30, 0x1f0(r1)
    opword 0xE3A101E8
    lfd f29, 0x1e0(r1)
    opword 0xE38101D8
    lfd f28, 0x1d0(r1)
    opword 0xE36101C8
    lfd f27, 0x1c0(r1)
    opword 0xE34101B8
    lfd f26, 0x1b0(r1)
    opword 0xE32101A8
    lfd f25, 0x1a0(r1)
    opword 0xE3010198
    lfd f24, 0x190(r1)
    opword 0xE2E10188
    lfd f23, 0x180(r1)
    opword 0xE2C10178
    lfd f22, 0x170(r1)
    opword 0xE2A10168
    addi r11, r1, 0x160
    lfd f21, 0x160(r1)
    bl _restgpr_22
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}
