#include <nw4r/ef.h>

#include <revolution/GX.h>

#include <cmath>

namespace nw4r {
namespace ef {

const math::VEC3 DrawStrategyImpl::mXUnitVec(1.0f, 0.0f, 0.0f);
const math::VEC3 DrawStrategyImpl::mYUnitVec(0.0f, 1.0f, 0.0f);
const math::VEC3 DrawStrategyImpl::mZUnitVec(0.0f, 0.0f, 1.0f);
const math::VEC3 DrawStrategyImpl::mZeroVec(0.0f, 0.0f, 0.0f);

/******************************************************************************
 *
 * DrawStrategyImpl
 *
 ******************************************************************************/
DrawStrategyImpl::DrawStrategyImpl() {}

void DrawStrategyImpl::InitTexture(const EmitterDrawSetting& rSetting) {
    mNumTexmap = 0;

    mTexmapMap[TEX_LAYER_1] = -1;
    mTexmapMap[TEX_LAYER_2] = -1;
    mTexmapMap[TEX_LAYER_IND] = -1;

    if (rSetting.mFlags & EmitterDrawSetting::FLAG_TEX1_ENABLE) {
        mTexmapMap[TEX_LAYER_1] = 0;
        mNumTexmap++;
    }

    if (rSetting.mFlags & EmitterDrawSetting::FLAG_TEX2_ENABLE) {
        mTexmapMap[TEX_LAYER_2] = mNumTexmap;
        mNumTexmap++;
    }

    if (rSetting.mFlags & EmitterDrawSetting::FLAG_TEXIND_ENABLE) {
        mTexmapMap[TEX_LAYER_IND] = mNumTexmap;
        mNumTexmap++;
    }

    GXSetNumTexGens(mNumTexmap);
}

void DrawStrategyImpl::InitTev(const EmitterDrawSetting& rSetting,
                               const DrawInfo& rInfo) {

    int i;

    GXSetClipMode(rSetting.mFlags & EmitterDrawSetting::FLAG_CLIP_DISABLE
                      ? GX_CLIP_DISABLE
                      : GX_CLIP_ENABLE);

    GXSetNumTevStages(rSetting.mNumTevs);
    GXSetTevSwapModeTable(GX_TEV_SWAP0, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE,
                          GX_CH_ALPHA);

    for (i = 0; i < rSetting.mNumTevs; i++) {
        GXSetTevDirect(static_cast<GXTevStageID>(i));

        GXSetTevColorIn(static_cast<GXTevStageID>(i),
                        static_cast<GXTevColorArg>(rSetting.mTevColor[i].mA),
                        static_cast<GXTevColorArg>(rSetting.mTevColor[i].mB),
                        static_cast<GXTevColorArg>(rSetting.mTevColor[i].mC),
                        static_cast<GXTevColorArg>(rSetting.mTevColor[i].mD));

        GXSetTevAlphaIn(static_cast<GXTevStageID>(i),
                        static_cast<GXTevAlphaArg>(rSetting.mTevAlpha[i].mA),
                        static_cast<GXTevAlphaArg>(rSetting.mTevAlpha[i].mB),
                        static_cast<GXTevAlphaArg>(rSetting.mTevAlpha[i].mC),
                        static_cast<GXTevAlphaArg>(rSetting.mTevAlpha[i].mD));

        GXSetTevColorOp(
            static_cast<GXTevStageID>(i),
            static_cast<GXTevOp>(rSetting.mTevColorOp[i].mOp),
            static_cast<GXTevBias>(rSetting.mTevColorOp[i].mBias),
            static_cast<GXTevScale>(rSetting.mTevColorOp[i].mScale),
            static_cast<GXBool>(rSetting.mTevColorOp[i].mClamp),
            static_cast<GXTevRegID>(rSetting.mTevColorOp[i].mOutReg));

        // @bug Copy-paste error, should use mTevAlphaOp
        GXSetTevAlphaOp(
            static_cast<GXTevStageID>(i),
            static_cast<GXTevOp>(rSetting.mTevColorOp[i].mOp),
            static_cast<GXTevBias>(rSetting.mTevColorOp[i].mBias),
            static_cast<GXTevScale>(rSetting.mTevColorOp[i].mScale),
            static_cast<GXBool>(rSetting.mTevColorOp[i].mClamp),
            static_cast<GXTevRegID>(rSetting.mTevColorOp[i].mOutReg));

        GXSetTevKColorSel(
            static_cast<GXTevStageID>(i),
            static_cast<GXTevKColorSel>(rSetting.mTevKColorSel[i]));

        GXSetTevKAlphaSel(
            static_cast<GXTevStageID>(i),
            static_cast<GXTevKAlphaSel>(rSetting.mTevKAlphaSel[i]));

        GXSetTevSwapMode(static_cast<GXTevStageID>(i), GX_TEV_SWAP0,
                         GX_TEV_SWAP0);

        if (i == GX_TEVSTAGE0) {
            if (mTexmapMap[TEX_LAYER_1] < 0) {
                GXSetTevOrder(static_cast<GXTevStageID>(i), GX_TEXCOORD_NULL,
                              GX_TEXMAP_NULL, GX_COLOR0A0);
            } else {
                GXSetTevOrder(static_cast<GXTevStageID>(i), GX_TEXCOORD0,
                              GX_TEXMAP0, GX_COLOR0A0);
            }
        } else {
            if (mTexmapMap[TEX_LAYER_2] < 0) {
                GXSetTevOrder(static_cast<GXTevStageID>(i), GX_TEXCOORD_NULL,
                              GX_TEXMAP_NULL, GX_COLOR0A0);
            } else {
                GXSetTevOrder(
                    static_cast<GXTevStageID>(i),
                    static_cast<GXTexCoordID>(mTexmapMap[TEX_LAYER_2]),
                    static_cast<GXTexMapID>(mTexmapMap[TEX_LAYER_2]),
                    GX_COLOR0A0);
            }
        }
    }

    if (rSetting.mFlags & EmitterDrawSetting::FLAG_TEXIND_ENABLE) {
        GXSetNumIndStages(1);

        GXSetIndTexOrder(GX_INDTEXSTAGE0,
                         static_cast<GXTexCoordID>(mTexmapMap[TEX_LAYER_IND]),
                         static_cast<GXTexMapID>(mTexmapMap[TEX_LAYER_IND]));

        GXSetIndTexCoordScale(GX_INDTEXSTAGE0, GX_ITS_1, GX_ITS_1);
        GXSetIndTexMtx(GX_ITM_0, rSetting.mIndTexOffsetMtx,
                       rSetting.mIndTexScaleExp);

        GXSetTevIndirect(
            static_cast<GXTevStageID>(rSetting.mIndirectTargetStage),
            GX_INDTEXSTAGE0, GX_ITF_8, GX_ITB_STU, GX_ITM_0, GX_ITW_OFF,
            GX_ITW_OFF, FALSE, FALSE, GX_ITBA_OFF);
    } else {
        GXSetNumIndStages(0);
    }

    GXSetZCompLoc(rSetting.mFlags & EmitterDrawSetting::FLAG_ZCOMP_BEFORE_TEX
                      ? TRUE
                      : FALSE);

    GXSetCullMode(GX_CULL_NONE);
    GXSetCoPlanar(FALSE);

    GXSetBlendMode(static_cast<GXBlendMode>(rSetting.mBlendMode.mType),
                   static_cast<GXBlendFactor>(rSetting.mBlendMode.mSrcFactor),
                   static_cast<GXBlendFactor>(rSetting.mBlendMode.mDstFactor),
                   static_cast<GXLogicOp>(rSetting.mBlendMode.mOp));

    GXSetZMode(
        rSetting.mFlags & EmitterDrawSetting::FLAG_ZCOMP_ENABLE_TEST ? TRUE
                                                                     : FALSE,
        static_cast<GXCompare>(rSetting.mZCompareFunc),
        rSetting.mFlags & EmitterDrawSetting::FLAG_ZCOMP_ENABLE_UPDATE ? TRUE
                                                                       : FALSE);

    GXFogType type;
    f32 start, end, near, far;
    GXColor color;

    rInfo.GetFog(&type, &start, &end, &near, &far, &color);
    GXSetFog(type, color, start, end, near, far);
}

void DrawStrategyImpl::InitColor(ParticleManager* pManager,
                                 const EmitterDrawSetting& rSetting,
                                 const DrawInfo& rInfo) {

#pragma unused(pManager)

    int i;

    mPrevARef0 = -1;
    mPrevARef1 = -1;

    GXSetNumChans(1);

    if (rInfo.IsLightEnable() &&
        rSetting.mColorInput.mRasColor == ColorInput::RASCOLOR_LIGHTING) {

        GXSetChanCtrl(GX_COLOR0, TRUE, GX_SRC_REG, GX_SRC_REG,
                      rInfo.GetLightMask(), GX_DF_NONE,
                      rInfo.IsSpotLight() ? GX_AF_SPOT : GX_AF_NONE);
    } else {
        GXSetChanCtrl(GX_COLOR0, FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL,
                      GX_DF_NONE, GX_AF_NONE);
    }

    GXSetChanCtrl(GX_ALPHA0, FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL,
                  GX_DF_NONE, GX_AF_NONE);
    GXSetChanCtrl(GX_COLOR1A1, FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL,
                  GX_DF_NONE, GX_AF_NONE);

    GXColor mat;
    mat.a = mat.r = mat.g = mat.b = 255;

    GXColor amb;
    amb.a = amb.r = amb.g = amb.b = 0;

    GXSetChanMatColor(GX_COLOR0A0, mat);
    GXSetChanAmbColor(GX_COLOR0A0, amb);

    mUseColor1 = false;
    mUseColor2 = false;

    for (i = 0; i < GX_MAX_TEVREG - 1; i++) {
        if (rSetting.mColorInput.mTevColor[i] == ColorInput::TEVCOLOR1_1 ||
            rSetting.mColorInput.mTevColor[i] == ColorInput::TEVCOLOR1_2) {
            mUseColor1 = true;
        }

        // @bug Copy-paste error, should use TEVCOLOR2_*
        if (rSetting.mColorInput.mTevColor[i] == ColorInput::TEVCOLOR1_1 ||
            rSetting.mColorInput.mTevColor[i] == ColorInput::TEVCOLOR1_2) {
            mUseColor2 = true;
        }
    }

    for (i = 0; i < GX_MAX_KCOLOR; i++) {
        if (rSetting.mColorInput.mTevKColor[i] == ColorInput::TEVCOLOR1_1 ||
            rSetting.mColorInput.mTevKColor[i] == ColorInput::TEVCOLOR1_2) {
            mUseColor1 = true;
        }

        if (rSetting.mColorInput.mTevKColor[i] == ColorInput::TEVCOLOR2_3 ||
            rSetting.mColorInput.mTevKColor[i] == ColorInput::TEVCOLOR2_2) {
            mUseColor2 = true;
        }
    }
}

void DrawStrategyImpl::SetupGP(Particle* pParticle,
                               const EmitterDrawSetting& rSetting,
                               const DrawInfo& rInfo, bool first,
                               bool xfDirty) {

#pragma unused(xfDirty)

    struct VtxDescData {
        GXAttrType type;     // at 0x0
        GXCompCnt compCnt;   // at 0x4
        GXCompType compType; // at 0x8
    };

    bool changed;
    bool xfBug;

    changed = _SetupACmp(pParticle, rSetting, first);
    xfBug = changed;

    changed = _SetupTevReg(pParticle, rSetting, first);
    xfBug = xfBug || changed;

    changed = _SetupTexture(pParticle, rSetting, rInfo, first);
    xfBug = xfBug && !changed;

    if ((rSetting.mFlags & EmitterDrawSetting::FLAG_CLIP_DISABLE) ||
        !pParticle->mParticleManager->mManagerEM->mManagerEF->mManagerES
             ->mXFFlushSafe) {
        return;
    }

    VtxDescData vtxDescPos;
    VtxDescData vtxDescNrm;
    VtxDescData vtxDescTex0;
    u8 shift;

    GXGetVtxDesc(GX_VA_POS, &vtxDescPos.type);
    GXGetVtxDesc(GX_VA_NRM, &vtxDescNrm.type);
    GXGetVtxDesc(GX_VA_TEX0, &vtxDescTex0.type);

    GXGetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, &vtxDescPos.compCnt,
                    &vtxDescPos.compType, &shift);
    GXGetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, &vtxDescNrm.compCnt,
                    &vtxDescNrm.compType, &shift);
    GXGetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, &vtxDescTex0.compCnt,
                    &vtxDescTex0.compType, &shift);

    if (!xfBug) {
        return;
    }

    GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 8);
    {
        for (int i = 0; i < 8; i++) {
            if (vtxDescPos.type != GX_NONE) {
                switch (vtxDescPos.type) {
                case GX_DIRECT: {

                    switch (vtxDescPos.compCnt) {
                    case GX_POS_XYZ: {

                        switch (vtxDescPos.compType) {
                        case GX_U8: {
                            GXPosition3u8(0, 0, 0);
                            break;
                        }

                        case GX_S8: {
                            GXPosition3s8(0, 0, 0);
                            break;
                        }

                        case GX_U16: {
                            GXPosition3u16(0, 0, 0);
                            break;
                        }

                        case GX_S16: {
                            GXPosition3s16(0, 0, 0);
                            break;
                        }

                        case GX_F32: {
                            GXPosition3f32(0.0f, 0.0f, 0.0f);
                            break;
                        }

                        default: {
                            break;
                        }
                        }

                        break;
                    }

                    case GX_POS_XY: {

                        switch (vtxDescPos.compType) {
                        case GX_U8: {
                            GXPosition2u8(0, 0);
                            break;
                        }

                        case GX_S8: {
                            GXPosition2s8(0, 0);
                            break;
                        }

                        case GX_U16: {
                            GXPosition2u16(0, 0);
                            break;
                        }

                        case GX_S16: {
                            GXPosition2s16(0, 0);
                            break;
                        }

                        case GX_F32: {
                            GXPosition2f32(0.0f, 0.0f);
                            break;
                        }

                        default: {
                            break;
                        }
                        }

                        break;
                    }

                    default: {
                        break;
                    }
                    }

                    break;
                }

                case GX_INDEX8: {
                    GXPosition1x8(0);
                    break;
                }

                case GX_INDEX16: {
                    GXPosition1x16(0);
                    break;
                }

                default: {
                    break;
                }
                }
            }

            if (vtxDescNrm.type != GX_NONE) {
                switch (vtxDescNrm.type) {
                case GX_DIRECT: {

                    switch (vtxDescNrm.compCnt) {
                    case GX_NRM_XYZ: {

                        switch (vtxDescNrm.compType) {
                        case GX_S8: {
                            GXNormal3u8(0, 0, 0);
                            break;
                        }

                        case GX_S16: {
                            GXNormal3u16(0, 0, 0);
                            break;
                        }

                        case GX_F32: {
                            GXNormal3f32(0.0f, 0.0f, 0.0f);
                            break;
                        }

                        // @bug Missing GX_U8/GX_U16
                        default: {
                            break;
                        }
                        }

                        break;
                    }

                    default: {
                        break;
                    }
                    }

                    break;
                }

                case GX_INDEX8: {
                    GXNormal1x8(0);
                    break;
                }

                case GX_INDEX16: {
                    GXNormal1x16(0);
                    break;
                }

                default: {
                    break;
                }
                }
            }

            if (vtxDescTex0.type != GX_NONE) {
                switch (vtxDescTex0.type) {
                case GX_DIRECT: {

                    switch (vtxDescTex0.compCnt) {
                    case GX_TEX_ST: {

                        switch (vtxDescTex0.compType) {
                        case GX_U8: {
                            GXTexCoord2u8(0, 0);
                            break;
                        }

                        case GX_S8: {
                            GXTexCoord2s8(0, 0);
                            break;
                        }

                        case GX_U16: {
                            GXTexCoord2u16(0, 0);
                            break;
                        }

                        case GX_S16: {
                            GXTexCoord2s16(0, 0);
                            break;
                        }

                        case GX_F32: {
                            GXTexCoord2f32(0.0f, 0.0f);
                            break;
                        }

                        default: {
                            break;
                        }
                        }

                        break;
                    }

                    case GX_TEX_S: {

                        switch (vtxDescTex0.compType) {
                        case GX_U8: {
                            GXTexCoord1u8(0);
                            break;
                        }

                        case GX_S8: {
                            GXTexCoord1s8(0);
                            break;
                        }

                        case GX_U16: {
                            GXTexCoord1u16(0);
                            break;
                        }

                        case GX_S16: {
                            GXTexCoord1s16(0);
                            break;
                        }

                        case GX_F32: {
                            GXTexCoord1f32(0.0f);
                            break;
                        }

                        default: {
                            break;
                        }
                        }

                        break;
                    }

                    default: {
                        break;
                    }
                    }

                    break;
                }

                case GX_INDEX8: {
                    GXTexCoord1x8(0);
                    break;
                }

                case GX_INDEX16: {
                    GXTexCoord1x16(0);
                    break;
                }

                default: {
                    break;
                }
                }
            }
        }
    }
    GXEnd();
}

bool DrawStrategyImpl::_SetupACmp(Particle* pParticle,
                                  const EmitterDrawSetting& rSetting,
                                  bool first) {

    // @bug Copy-paste error, double comparison
    if (first || mPrevARef0 != pParticle->mParameter.mACmpRef0 ||
        mPrevARef0 != pParticle->mParameter.mACmpRef0) {

        // @bug Copy-paste error, assigns ref0 to prev ref1
        mPrevARef0 = pParticle->mParameter.mACmpRef0;
        mPrevARef1 = pParticle->mParameter.mACmpRef0;

        GXSetAlphaCompare(static_cast<GXCompare>(rSetting.mACmpComp0),
                          pParticle->mParameter.mACmpRef0,
                          static_cast<GXAlphaOp>(rSetting.mACmpOp),
                          static_cast<GXCompare>(rSetting.mACmpComp1),
                          pParticle->mParameter.mACmpRef1);

        return true;
    }

    return false;
}

bool DrawStrategyImpl::_SetupTevReg(Particle* pParticle,
                                    const EmitterDrawSetting& rSetting,
                                    bool first) {

    bool changed = false;
    GXColor colorPri, colorSec;

    if (mUseColor1) {
        pParticle->Draw_GetColor(COLOR_LAYER_0, &colorPri, &colorSec);

        if (first ||
            (mPrevColor[COLOR_LAYER_0][COLOR_IDX_PRI].r != colorPri.r ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_PRI].g != colorPri.g ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_PRI].b != colorPri.b ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_PRI].a != colorPri.a) ||
            (mPrevColor[COLOR_LAYER_0][COLOR_IDX_SEC].r != colorSec.r ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_SEC].g != colorSec.g ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_SEC].b != colorSec.b ||
             mPrevColor[COLOR_LAYER_0][COLOR_IDX_SEC].a != colorSec.a)) {

            changed = true;

            mPrevColor[COLOR_LAYER_0][COLOR_IDX_PRI] = colorPri;
            mPrevColor[COLOR_LAYER_0][COLOR_IDX_SEC] = colorSec;

            for (int i = 0; i < GX_MAX_TEVREG - 1; i++) {
                if (rSetting.mColorInput.mTevColor[i] ==
                    ColorInput::TEVCOLOR1_1) {

                    GXSetTevColor(static_cast<GXTevRegID>(GX_TEVREG0 + i),
                                  colorPri);
                }

                // @bug Typo of 'i'
                if (rSetting.mColorInput.mTevColor[1] ==
                    ColorInput::TEVCOLOR1_2) {

                    GXSetTevColor(static_cast<GXTevRegID>(GX_TEVREG0 + i),
                                  colorSec);
                }
            }

            for (int i = 0; i < GX_MAX_KCOLOR; i++) {
                if (rSetting.mColorInput.mTevKColor[i] ==
                    ColorInput::TEVCOLOR1_1) {

                    GXSetTevKColor(static_cast<GXTevKColorID>(GX_KCOLOR0 + i),
                                   colorPri);
                }

                if (rSetting.mColorInput.mTevKColor[i] ==
                    ColorInput::TEVCOLOR1_2) {

                    GXSetTevKColor(static_cast<GXTevKColorID>(GX_KCOLOR0 + i),
                                   colorSec);
                }
            }
        }
    }

    if (mUseColor2) {
        pParticle->Draw_GetColor(COLOR_LAYER_1, &colorPri, &colorSec);

        if (first ||
            (mPrevColor[COLOR_LAYER_1][COLOR_IDX_PRI].r != colorPri.r ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_PRI].g != colorPri.g ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_PRI].b != colorPri.b ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_PRI].a != colorPri.a) ||
            (mPrevColor[COLOR_LAYER_1][COLOR_IDX_SEC].r != colorSec.r ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_SEC].g != colorSec.g ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_SEC].b != colorSec.b ||
             mPrevColor[COLOR_LAYER_1][COLOR_IDX_SEC].a != colorSec.a)) {

            changed = true;

            mPrevColor[COLOR_LAYER_1][COLOR_IDX_PRI] = colorPri;
            mPrevColor[COLOR_LAYER_1][COLOR_IDX_SEC] = colorSec;

            for (int i = 0; i < GX_MAX_TEVREG - 1; i++) {
                if (rSetting.mColorInput.mTevColor[i] ==
                    ColorInput::TEVCOLOR2_3) {

                    GXSetTevColor(static_cast<GXTevRegID>(GX_TEVREG0 + i),
                                  colorPri);
                }

                // @bug Typo of 'i'
                if (rSetting.mColorInput.mTevColor[1] ==
                    ColorInput::TEVCOLOR2_2) {

                    GXSetTevColor(static_cast<GXTevRegID>(GX_TEVREG0 + i),
                                  colorSec);
                }
            }

            for (int i = 0; i < GX_MAX_KCOLOR; i++) {
                if (rSetting.mColorInput.mTevKColor[i] ==
                    ColorInput::TEVCOLOR2_3) {

                    GXSetTevKColor(static_cast<GXTevKColorID>(GX_KCOLOR0 + i),
                                   colorPri);
                }

                if (rSetting.mColorInput.mTevKColor[i] ==
                    ColorInput::TEVCOLOR2_2) {

                    GXSetTevKColor(static_cast<GXTevKColorID>(GX_KCOLOR0 + i),
                                   colorSec);
                }
            }
        }
    }

    return changed;
}

bool DrawStrategyImpl::_SetupTexture(Particle* pParticle,
                                     const EmitterDrawSetting& rSetting,
                                     const DrawInfo& rInfo, bool first) {

    bool changed = false;

    for (int i = 0; i < TEX_LAYER_MAX; i++) {
        if (mTexmapMap[i] < 0) {
            continue;
        }

        if (pParticle->mParameter.mTexture[i] == NULL) {
            continue;
        }

        const TextureData* pTexData = pParticle->mParameter.mTexture[i];

        f32 scaleS = pParticle->Draw_GetTextureScaleS(i);
        f32 scaleT = pParticle->Draw_GetTextureScaleT(i);

        f32 transS = pParticle->Draw_GetTextureTransS(i);
        f32 transT = pParticle->Draw_GetTextureTransT(i);

        GXTexWrapMode wrapS = pParticle->GetTextureWrapS(i);
        GXTexWrapMode wrapT = pParticle->GetTextureWrapT(i);

        if (first || !mPrevTexture[i].IsEqual(
                         pTexData, scaleS, scaleT, transS, transT, wrapS, wrapT,
                         pParticle->mParameter.mTextureScale[i],
                         pParticle->mParameter.mTextureRotate[i],
                         pParticle->mParameter.mTextureTranslate[i])) {

            changed = true;

            mPrevTexture[i].Set(pTexData, scaleS, scaleT, transS, transT, wrapS,
                                wrapT, pParticle->mParameter.mTextureScale[i],
                                pParticle->mParameter.mTextureRotate[i],
                                pParticle->mParameter.mTextureTranslate[i]);

            int format = pTexData->format;

            GXTexObj texObj;
            GXTlutObj tlutObj;

            switch (format) {
            case GX_TF_C4:
            case GX_TF_C8:
            case GX_TF_C14X2: {
                GXInitTlutObj(&tlutObj, pTexData->tlut,
                              static_cast<GXTlutFmt>(pTexData->tlutFormat),
                              pTexData->tlutEntries);

                GXLoadTlut(&tlutObj, static_cast<GXTlut>(mTexmapMap[i]));

                GXInitTexObjCI(&texObj, pTexData->texture, pTexData->width,
                               pTexData->height, static_cast<GXTexFmt>(format),
                               wrapS, wrapT, pTexData->mipmap > 1,
                               mTexmapMap[i]);
                break;
            }

            case GX_TF_I4:
            case GX_TF_I8:
            case GX_TF_IA4:
            case GX_TF_IA8:
            case GX_TF_RGB565:
            case GX_TF_RGB5A3:
            case GX_TF_RGBA8:
            case GX_TF_CMPR: {
                GXInitTexObj(&texObj, pTexData->texture, pTexData->width,
                             pTexData->height, static_cast<GXTexFmt>(format),
                             wrapS, wrapT, pTexData->mipmap > 1);
                break;
            }

            default: {
                break;
            }
            }

            f32 maxLod = pTexData->mipmap + -1.0f;
            f32 lodBias = 0.0f;

            GXInitTexObjLOD(
                &texObj, pTexData->mipmap > 1 ? GX_LIN_MIP_LIN : GX_LINEAR,
                GX_LINEAR, 0.0f, maxLod, lodBias, FALSE, FALSE, GX_ANISO_1);

            GXLoadTexObj(&texObj, static_cast<GXTexMapID>(mTexmapMap[i]));

            math::MTX34 mtx;
            math::MTX34Identity(&mtx);

            math::MTX34 work;
            math::MTX34Identity(&work);
            {
                work._03 = pParticle->mParameter.mTextureTranslate[i].x;
                work._13 = pParticle->mParameter.mTextureTranslate[i].y;
            }
            math::MTX34Mult(&mtx, &work, &mtx);

            if (pParticle->mParameter.mTextureRotate[i] != 0.0f) {
                math::MTX34Identity(&work);
                {
                    work._03 = -0.5f;
                    work._13 = -0.5f;
                }
                math::MTX34Mult(&mtx, &work, &mtx);

                math::MTX34Identity(&work);
                {
                    f32 cr = std::cosf(pParticle->mParameter.mTextureRotate[i]);
                    work._00 = work._11 = cr;

                    f32 sr = std::sinf(pParticle->mParameter.mTextureRotate[i]);
                    work._01 = -sr;
                    work._10 = sr;
                }
                math::MTX34Mult(&mtx, &work, &mtx);

                math::MTX34Identity(&work);
                {
                    work._03 = 0.5f;
                    work._13 = 0.5f;
                }
                math::MTX34Mult(&mtx, &work, &mtx);
            }

            math::MTX34Identity(&work);
            {
                work._03 = -0.5f;
                work._13 = -0.5f;
            }
            math::MTX34Mult(&mtx, &work, &mtx);

            math::MTX34Identity(&work);
            {
                work._00 = pParticle->mParameter.mTextureScale[i].x;
                work._11 = pParticle->mParameter.mTextureScale[i].y;
            }
            math::MTX34Mult(&mtx, &work, &mtx);

            math::MTX34Identity(&work);
            {
                work._03 = 0.5f;
                work._13 = 0.5f;
            }
            math::MTX34Mult(&mtx, &work, &mtx);

            work._00 = scaleS;
            work._01 = 0.0f;
            work._02 = 0.0f;
            work._03 = transS;

            work._10 = 0.0f;
            work._11 = scaleT;
            work._12 = 0.0f;
            work._13 = transT;

            work._20 = 0.0f;
            work._21 = 0.0f;
            work._22 = 1.0f;
            work._23 = 0.0f;

            math::MTX34Mult(&mtx, &work, &mtx);

            if (!((rSetting.mFlags >> (i + 7 /* FLAG_TEX1_PROJ */)) & 1)) {
                GXLoadTexMtxImm(mtx, GX_TEXMTX0 + mTexmapMap[i] * 3,
                                GX_MTX_2x4);

                GXSetTexCoordGen(static_cast<GXTexCoordID>(mTexmapMap[i]),
                                 GX_TG_MTX2x4, GX_TG_TEX0,
                                 GX_TEXMTX0 + mTexmapMap[i] * 3);
            } else {
                math::MTX34Mult(&mtx, rInfo.GetProjMtx(), &mtx);

                GXLoadTexMtxImm(mtx, GX_PTTEXMTX0 + mTexmapMap[i] * 3,
                                GX_MTX_3x4);

                GXSetTexCoordGen2(static_cast<GXTexCoordID>(mTexmapMap[i]),
                                  GX_TG_MTX3x4, GX_TG_POS, GX_PNMTX0, FALSE,
                                  GX_PTTEXMTX0 + mTexmapMap[i] * 3);
            }
        }
    }

    return changed;
}

DrawStrategyImpl::GetFirstDrawParticleFunc
DrawStrategyImpl::GetGetFirstDrawParticleFunc(int drawOrder) {

    switch (drawOrder) {
    case DRAWORDER_YOUNGERS_FIRST: {
        return GetFirstDrawParticle_YoungersFirst;
    }

    default: /* DRAWORDER_ELDERS_FIRST */ {
        return GetFirstDrawParticle_EldersFirst;
    }
    }
}

DrawStrategyImpl::GetNextDrawParticleFunc
DrawStrategyImpl::GetGetNextDrawParticleFunc(int drawOrder) {

    switch (drawOrder) {
    case DRAWORDER_YOUNGERS_FIRST: {
        return GetNextDrawParticle_YoungersFirst;
    }

    default: /* DRAWORDER_ELDERS_FIRST */ {
        return GetNextDrawParticle_EldersFirst;
    }
    }
}

Particle*
DrawStrategyImpl::GetFirstDrawParticle_EldersFirst(ParticleManager* pManager) {

    return GetOldestDrawParticle(pManager);
}

Particle* DrawStrategyImpl::GetFirstDrawParticle_YoungersFirst(
    ParticleManager* pManager) {

    Particle* pIt = GetYoungestParticle(pManager);

    while (pIt != NULL &&
           pIt->GetLifeStatus() != ReferencedObject::NW4R_EF_LS_ACTIVE) {

        pIt = GetElderParticle(pManager, pIt);
    }

    return pIt;
}

Particle*
DrawStrategyImpl::GetNextDrawParticle_EldersFirst(ParticleManager* pManager,
                                                  Particle* pParticle) {

    return GetYoungerDrawParticle(pManager, pParticle);
}

Particle*
DrawStrategyImpl::GetNextDrawParticle_YoungersFirst(ParticleManager* pManager,
                                                    Particle* pParticle) {

    return GetElderDrawParticle(pManager, pParticle);
}

/******************************************************************************
 *
 * AheadContext
 *
 ******************************************************************************/
DrawStrategyImpl::AheadContext::AheadContext(const math::MTX34& rViewMtx,
                                             ParticleManager* pManager) {

    mCommon.mViewMtx = &rViewMtx;
    mCommon.mParticleManager = pManager;

    pManager->mManagerEM->CalcGlobalMtx(&mCommon.mEmitterMtx);
    pManager->CalcGlobalMtx(&mCommon.mParticleManagerMtx);

    math::MTX34Inv(&mCommon.mParticleManagerMtxInv,
                   &mCommon.mParticleManagerMtx);

    math::VEC3 axisY(mCommon.mEmitterMtx._01, mCommon.mEmitterMtx._11,
                     mCommon.mEmitterMtx._21);
    math::VEC3TransformNormal(&axisY, &mCommon.mParticleManagerMtxInv, &axisY);

    if (!Normalize(&axisY)) {
        axisY = math::VEC3(0.0f, 1.0f, 0.0f);
    }

    mCommon.mEmitterAxisY = axisY;

    math::VEC3 center(mCommon.mEmitterMtx._03, mCommon.mEmitterMtx._13,
                      mCommon.mEmitterMtx._23);
    math::VEC3TransformCoord(&center, &mCommon.mParticleManagerMtxInv, &center);

    mCommon.mEmitterCenter = center;

    EmitterDesc& rDesc = *pManager->mResource->GetEmitterDesc();

    switch (rDesc.typeDir) {
    case EmitterDrawSetting::DIR_NO_DESIGN: {
        math::MTX34& rMtx = mCommon.mParticleManagerMtxInv;
        math::VEC3 worldAxisY(rMtx._01, rMtx._11, rMtx._21);

        if (!Normalize(&worldAxisY)) {
            worldAxisY = math::VEC3(0.0f, 1.0f, 0.0f);
        }

        mNoDesign.mWorldYAxis = worldAxisY;
        break;
    }

    default: {
        break;
    }
    }
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1A70;
extern "C" float lbl_804A1A74;
extern "C" float lbl_804A1A78;
extern "C" float lbl_804A1A7C;
extern "C" float lbl_804A1A80;
extern "C" float lbl_804A1A88;
extern "C" float lbl_804A1A90;
extern "C" float lbl_804A1A98;
extern "C" u8 lbl_803E6550[];
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void GetNextDrawParticle_YoungersFirst__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r2ef15ParticleManagerPQ34nw4r2ef8Particle();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restgpr_15();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _savegpr_15();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void dtor_80136CFC();
extern "C" void fn_801ACC48();
extern "C" void fn_801B60F0();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B823C();
extern "C" void fn_801B9C64();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF28C();
extern "C" void fn_801BF578();
extern "C" void fn_801BF940();
extern "C" void fn_801BFF78();
extern "C" void fn_801C070C();
extern "C" void fn_801C0D80();
extern "C" void fn_801C0DA4();
extern "C" void fn_801C0DC8();
extern "C" void fn_801C0DF8();
extern "C" void fn_801C0E40();
extern "C" void fn_801C0E98();
extern "C" void fn_801C10B4();
extern "C" void fn_801C10F4();
extern "C" void fn_802E3F80();
extern "C" void fn_802E3FE8();
extern "C" void fn_802E413C();
extern "C" void fn_802E4240();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4590();
extern "C" void fn_802E4654();
extern "C" void fn_802E46B0();
extern "C" void fn_802E4700();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();

// asm_to_cpp: fn_801BF1AC
extern "C" asm void fn_801BF1AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r7, -0x1
    li r8, 0x0
    stw r0, 0x24(r1)
    lhz r0, 0x0(r5)
    stw r31, 0x1c(r1)
    mr r31, r6
    rlwinm. r0, r0, 0, 27, 27
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    stw r7, 0xd4(r3)
    stb r8, 0xd0(r3)
    stw r7, 0xd8(r3)
    stw r7, 0xdc(r3)
    beq lbl_801BF208
    li r0, 0x1
    stw r8, 0xd4(r3)
    stb r0, 0xd0(r3)
lbl_801BF208:
    lhz r0, 0x0(r5)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801BF224
    lbz r4, 0xd0(r3)
    addi r0, r4, 0x1
    stw r4, 0xd8(r3)
    stb r0, 0xd0(r3)
lbl_801BF224:
    lhz r0, 0x0(r5)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801BF240
    lbz r4, 0xd0(r3)
    addi r0, r4, 0x1
    stw r4, 0xdc(r3)
    stb r0, 0xd0(r3)
lbl_801BF240:
    lbz r3, 0xd0(r3)
    bl GXSetNumTexGens
    mr r3, r28
    mr r4, r30
    mr r5, r31
    bl fn_801BF28C
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801BF578
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801BF28C
extern "C" asm void fn_801BF28C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lhz r0, 0x0(r4)
    mr r25, r3
    mr r30, r4
    mr r31, r5
    extrwi r3, r0, 1, 28
    bl GXSetClipMode
    lbz r3, 0x5(r30)
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    mr r29, r30
    mr r28, r30
    li r26, 0x0
    b lbl_801BF3E8
lbl_801BF2E8:
    mr r3, r26
    bl fn_802E432C
    lbz r4, 0xc(r29)
    mr r3, r26
    lbz r5, 0xd(r29)
    lbz r6, 0xe(r29)
    lbz r7, 0xf(r29)
    bl fn_802E4460
    lbz r4, 0x30(r29)
    mr r3, r26
    lbz r5, 0x31(r29)
    lbz r6, 0x32(r29)
    lbz r7, 0x33(r29)
    bl fn_802E44A0
    lbz r4, 0x1c(r28)
    mr r3, r26
    lbz r5, 0x1d(r28)
    lbz r6, 0x1e(r28)
    lbz r7, 0x1f(r28)
    lbz r8, 0x20(r28)
    bl fn_802E44E0
    lbz r4, 0x40(r28)
    mr r3, r26
    lbz r5, 0x41(r28)
    lbz r6, 0x42(r28)
    lbz r7, 0x43(r28)
    lbz r8, 0x44(r28)
    bl fn_802E4538
    add r27, r30, r26
    mr r3, r26
    lbz r4, 0x54(r27)
    bl fn_802E46B0
    lbz r4, 0x58(r27)
    mr r3, r26
    bl fn_802E4700
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    lbz r0, 0x8(r27)
    cmpwi r0, 0x0
    bne lbl_801BF3A8
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    b lbl_801BF3DC
lbl_801BF3A8:
    cmplwi r0, 0x1
    bne lbl_801BF3C8
    lwz r4, 0xd8(r25)
    mr r3, r26
    li r6, 0x4
    mr r5, r4
    bl fn_802E48CC
    b lbl_801BF3DC
lbl_801BF3C8:
    mr r3, r26
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
lbl_801BF3DC:
    addi r29, r29, 0x4
    addi r28, r28, 0x5
    addi r26, r26, 0x1
lbl_801BF3E8:
    lbz r0, 0x5(r30)
    cmpw r26, r0
    blt lbl_801BF2E8
    lhz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801BF49C
    li r3, 0x1
    bl fn_802E430C
    lwz r4, 0xdc(r25)
    li r3, 0x0
    mr r5, r4
    bl fn_802E4240
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    lbz r0, 0xa8(r30)
    addi r4, r30, 0x90
    li r3, 0x1
    extsb r5, r0
    bl fn_802E3FE8
    li r26, 0x1
    li r27, 0x0
    li r29, 0x0
    b lbl_801BF48C
lbl_801BF44C:
    lbz r0, 0x7(r30)
    and. r0, r0, r26
    beq lbl_801BF484
    stw r29, 0x8(r1)
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    stw r29, 0xc(r1)
    li r6, 0x7
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_802E3F80
lbl_801BF484:
    clrlslwi r26, r26, 25, 1
    addi r27, r27, 0x1
lbl_801BF48C:
    lbz r0, 0x5(r30)
    cmpw r27, r0
    blt lbl_801BF44C
    b lbl_801BF4A4
lbl_801BF49C:
    li r3, 0x0
    bl fn_802E430C
lbl_801BF4A4:
    lhz r0, 0x0(r30)
    extrwi r3, r0, 1, 29
    bl GXSetZCompLoc
    li r3, 0x0
    bl GXSetCullMode
    li r3, 0x0
    bl GXSetCoPlanar
    lbz r3, 0x5c(r30)
    lbz r4, 0x5d(r30)
    lbz r5, 0x5e(r30)
    lbz r6, 0x5f(r30)
    bl GXSetBlendMode
    lhz r0, 0x0(r30)
    lbz r4, 0x70(r30)
    clrlwi r3, r0, 31
    extrwi r5, r0, 1, 30
    bl GXSetZMode
    lhz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 19, 19
    beq lbl_801BF53C
    lbz r6, 0x84(r31)
    addi r4, r1, 0x14
    lbz r3, 0x85(r31)
    lbz r5, 0x86(r31)
    lbz r0, 0x87(r31)
    stb r3, 0x19(r1)
    lfs f1, 0x74(r31)
    stb r6, 0x18(r1)
    lfs f2, 0x78(r31)
    stb r5, 0x1a(r1)
    lfs f3, 0x7c(r31)
    stb r0, 0x1b(r1)
    lfs f4, 0x80(r31)
    lwz r0, 0x18(r1)
    lwz r3, 0x70(r31)
    stw r0, 0x14(r1)
    bl GXSetFog
    b lbl_801BF560
lbl_801BF53C:
    lfs f1, lbl_804A1A74
    li r0, 0x0
    lfs f2, lbl_804A1A78
    addi r4, r1, 0x10
    fmr f3, f1
    stw r0, 0x10(r1)
    fmr f4, f2
    li r3, 0x0
    bl GXSetFog
lbl_801BF560:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801BF578
extern "C" asm void fn_801BF578() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, -0x1
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r6
    stw r0, 0xb0(r3)
    stw r0, 0xb4(r3)
    li r3, 0x1
    bl GXSetNumChans
    lbz r0, 0x60(r29)
    cmpwi r0, 0x0
    bne lbl_801BF5E0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    b lbl_801BF6A0
lbl_801BF5E0:
    lbz r0, 0x60(r31)
    cmplwi r0, 0x1
    bne lbl_801BF620
    lbz r0, 0x6c(r29)
    li r3, 0x0
    lwz r7, 0x64(r29)
    li r4, 0x1
    cmpwi r0, 0x0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x2
    beq lbl_801BF618
    li r9, 0x1
lbl_801BF618:
    bl GXSetChanCtrl
    b lbl_801BF640
lbl_801BF620:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_801BF640:
    lbz r0, 0x68(r31)
    cmplwi r0, 0x1
    bne lbl_801BF680
    lbz r0, 0x6c(r29)
    li r3, 0x2
    lwz r7, 0x68(r29)
    li r4, 0x1
    cmpwi r0, 0x0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x2
    beq lbl_801BF678
    li r9, 0x1
lbl_801BF678:
    bl GXSetChanCtrl
    b lbl_801BF6A0
lbl_801BF680:
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_801BF6A0:
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r7, 0x98(r29)
    addi r4, r1, 0xc
    lbz r6, 0x99(r29)
    li r3, 0x4
    lbz r5, 0x9a(r29)
    lbz r0, 0x9b(r29)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    bl GXSetChanMatColor
    lbz r7, 0x9c(r29)
    addi r4, r1, 0x8
    lbz r6, 0x9d(r29)
    li r3, 0x4
    lbz r5, 0x9e(r29)
    lbz r0, 0x9f(r29)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl GXSetChanAmbColor
    li r4, 0x0
    li r0, 0x3
    stb r4, 0xb8(r30)
    li r5, 0x0
    li r3, 0x1
    stb r4, 0xb9(r30)
    stb r4, 0xba(r30)
    stb r4, 0xbb(r30)
    stb r4, 0xbc(r30)
    stb r4, 0xbd(r30)
    stb r4, 0xbe(r30)
    stb r4, 0xbf(r30)
    mtctr r0
lbl_801BF74C:
    add r4, r31, r5
    lbz r0, 0x61(r4)
    cmpwi r0, 0x4
    beq lbl_801BF7AC
    bge lbl_801BF778
    cmpwi r0, 0x2
    beq lbl_801BF790
    bge lbl_801BF7A4
    cmpwi r0, 0x1
    bge lbl_801BF788
    b lbl_801BF7BC
lbl_801BF778:
    cmpwi r0, 0x6
    beq lbl_801BF7B4
    bge lbl_801BF7BC
    b lbl_801BF798
lbl_801BF788:
    stb r3, 0xb8(r30)
    b lbl_801BF7BC
lbl_801BF790:
    stb r3, 0xb9(r30)
    b lbl_801BF7BC
lbl_801BF798:
    stb r3, 0xb8(r30)
    stb r3, 0xb9(r30)
    b lbl_801BF7BC
lbl_801BF7A4:
    stb r3, 0xba(r30)
    b lbl_801BF7BC
lbl_801BF7AC:
    stb r3, 0xbb(r30)
    b lbl_801BF7BC
lbl_801BF7B4:
    stb r3, 0xba(r30)
    stb r3, 0xbb(r30)
lbl_801BF7BC:
    lbz r0, 0x69(r4)
    cmpwi r0, 0x4
    beq lbl_801BF818
    bge lbl_801BF7E4
    cmpwi r0, 0x2
    beq lbl_801BF7FC
    bge lbl_801BF810
    cmpwi r0, 0x1
    bge lbl_801BF7F4
    b lbl_801BF828
lbl_801BF7E4:
    cmpwi r0, 0x6
    beq lbl_801BF820
    bge lbl_801BF828
    b lbl_801BF804
lbl_801BF7F4:
    stb r3, 0xbc(r30)
    b lbl_801BF828
lbl_801BF7FC:
    stb r3, 0xbd(r30)
    b lbl_801BF828
lbl_801BF804:
    stb r3, 0xbc(r30)
    stb r3, 0xbd(r30)
    b lbl_801BF828
lbl_801BF810:
    stb r3, 0xbe(r30)
    b lbl_801BF828
lbl_801BF818:
    stb r3, 0xbf(r30)
    b lbl_801BF828
lbl_801BF820:
    stb r3, 0xbe(r30)
    stb r3, 0xbf(r30)
lbl_801BF828:
    addi r5, r5, 0x1
    bdnz lbl_801BF74C
    li r0, 0x4
    li r5, 0x0
    li r3, 0x1
    mtctr r0
lbl_801BF840:
    add r4, r31, r5
    lbz r0, 0x64(r4)
    cmpwi r0, 0x4
    beq lbl_801BF8A0
    bge lbl_801BF86C
    cmpwi r0, 0x2
    beq lbl_801BF884
    bge lbl_801BF898
    cmpwi r0, 0x1
    bge lbl_801BF87C
    b lbl_801BF8B0
lbl_801BF86C:
    cmpwi r0, 0x6
    beq lbl_801BF8A8
    bge lbl_801BF8B0
    b lbl_801BF88C
lbl_801BF87C:
    stb r3, 0xb8(r30)
    b lbl_801BF8B0
lbl_801BF884:
    stb r3, 0xb9(r30)
    b lbl_801BF8B0
lbl_801BF88C:
    stb r3, 0xb8(r30)
    stb r3, 0xb9(r30)
    b lbl_801BF8B0
lbl_801BF898:
    stb r3, 0xba(r30)
    b lbl_801BF8B0
lbl_801BF8A0:
    stb r3, 0xbb(r30)
    b lbl_801BF8B0
lbl_801BF8A8:
    stb r3, 0xba(r30)
    stb r3, 0xbb(r30)
lbl_801BF8B0:
    lbz r0, 0x6c(r4)
    cmpwi r0, 0x4
    beq lbl_801BF90C
    bge lbl_801BF8D8
    cmpwi r0, 0x2
    beq lbl_801BF8F0
    bge lbl_801BF904
    cmpwi r0, 0x1
    bge lbl_801BF8E8
    b lbl_801BF91C
lbl_801BF8D8:
    cmpwi r0, 0x6
    beq lbl_801BF914
    bge lbl_801BF91C
    b lbl_801BF8F8
lbl_801BF8E8:
    stb r3, 0xbc(r30)
    b lbl_801BF91C
lbl_801BF8F0:
    stb r3, 0xbd(r30)
    b lbl_801BF91C
lbl_801BF8F8:
    stb r3, 0xbc(r30)
    stb r3, 0xbd(r30)
    b lbl_801BF91C
lbl_801BF904:
    stb r3, 0xbe(r30)
    b lbl_801BF91C
lbl_801BF90C:
    stb r3, 0xbf(r30)
    b lbl_801BF91C
lbl_801BF914:
    stb r3, 0xbe(r30)
    stb r3, 0xbf(r30)
lbl_801BF91C:
    addi r5, r5, 0x1
    bdnz lbl_801BF840
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801BF940
extern "C" asm void fn_801BF940() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    cmpwi r7, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_801BF988
    lbz r0, 0x97(r4)
    lwz r6, 0xb0(r3)
    cmpw r6, r0
    bne lbl_801BF988
    beq lbl_801BF9B8
lbl_801BF988:
    lbz r0, 0x97(r4)
    lbz r6, 0x3(r28)
    stw r0, 0xb0(r3)
    lbz r0, 0x97(r4)
    stw r0, 0xb4(r3)
    lbz r3, 0x2(r5)
    lbz r4, 0x97(r4)
    lbz r5, 0x4(r5)
    lbz r7, 0x98(r27)
    bl fn_802E4808
    li r0, 0x1
    b lbl_801BF9BC
lbl_801BF9B8:
    li r0, 0x0
lbl_801BF9BC:
    cmpwi r31, 0x0
    li r31, 0x0
    bne lbl_801BF9D0
    cmpwi r0, 0x0
    beq lbl_801BF9D4
lbl_801BF9D0:
    li r31, 0x1
lbl_801BF9D4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r30
    bl fn_801BFF78
    cmpwi r31, 0x0
    li r31, 0x0
    bne lbl_801BF9FC
    cmpwi r3, 0x0
    beq lbl_801BFA00
lbl_801BF9FC:
    li r31, 0x1
lbl_801BFA00:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    bl fn_801C070C
    cmpwi r31, 0x0
    li r4, 0x0
    beq lbl_801BFA30
    cmpwi r3, 0x0
    bne lbl_801BFA30
    li r4, 0x1
lbl_801BFA30:
    lhz r0, 0x0(r28)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801BFF60
    lwz r3, 0xc8(r27)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801BFA60
    b lbl_801BFF60
lbl_801BFA60:
    cmpwi r4, 0x0
    beq lbl_801BFF60
    addi r4, r1, 0x24
    li r3, 0x9
    bl GXGetVtxDesc
    addi r4, r1, 0x18
    li r3, 0xa
    bl GXGetVtxDesc
    addi r4, r1, 0x30
    li r3, 0xb
    bl GXGetVtxDesc
    addi r4, r1, 0x3c
    li r3, 0xc
    bl GXGetVtxDesc
    addi r4, r1, 0xc
    li r3, 0xd
    bl GXGetVtxDesc
    addi r5, r1, 0x28
    addi r6, r1, 0x2c
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0x9
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xa
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x34
    addi r6, r1, 0x38
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xb
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x40
    addi r6, r1, 0x44
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xc
    bl GXGetVtxAttrFmt
    addi r5, r1, 0x10
    addi r6, r1, 0x14
    addi r7, r1, 0x8
    li r3, 0x0
    li r4, 0xd
    bl GXGetVtxAttrFmt
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x8
    lwz r5, 0x24(r1)
    lwz r6, 0x28(r1)
    li r4, 0x0
    lwz r7, 0x2c(r1)
    lis r3, 0xcc01
    lwz r8, 0x18(r1)
    lwz r9, 0x1c(r1)
    lwz r10, 0x20(r1)
    lwz r11, 0xc(r1)
    lwz r12, 0x10(r1)
    lwz r31, 0x14(r1)
    mtctr r0
lbl_801BFB60:
    cmpwi r5, 0x0
    beq lbl_801BFCA8
    cmpwi r5, 0x2
    beq lbl_801BFC9C
    bge lbl_801BFB80
    cmpwi r5, 0x1
    bge lbl_801BFB8C
    b lbl_801BFCA8
lbl_801BFB80:
    cmpwi r5, 0x4
    bge lbl_801BFCA8
    b lbl_801BFCA4
lbl_801BFB8C:
    cmpwi r6, 0x1
    beq lbl_801BFBA4
    bge lbl_801BFCA8
    cmpwi r6, 0x0
    bge lbl_801BFC2C
    b lbl_801BFCA8
lbl_801BFBA4:
    cmpwi r7, 0x2
    beq lbl_801BFBF0
    bge lbl_801BFBC0
    cmpwi r7, 0x0
    beq lbl_801BFBD0
    bge lbl_801BFBE0
    b lbl_801BFCA8
lbl_801BFBC0:
    cmpwi r7, 0x4
    beq lbl_801BFC10
    bge lbl_801BFCA8
    b lbl_801BFC00
lbl_801BFBD0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFBE0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFBF0:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC00:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC10:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC2C:
    cmpwi r7, 0x2
    beq lbl_801BFC70
    bge lbl_801BFC48
    cmpwi r7, 0x0
    beq lbl_801BFC58
    bge lbl_801BFC64
    b lbl_801BFCA8
lbl_801BFC48:
    cmpwi r7, 0x4
    beq lbl_801BFC88
    bge lbl_801BFCA8
    b lbl_801BFC7C
lbl_801BFC58:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC64:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC70:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC7C:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC88:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFC9C:
    stb r4, -0x8000(r3)
    b lbl_801BFCA8
lbl_801BFCA4:
    sth r4, -0x8000(r3)
lbl_801BFCA8:
    cmpwi r8, 0x0
    beq lbl_801BFD4C
    cmpwi r8, 0x2
    beq lbl_801BFD40
    bge lbl_801BFCC8
    cmpwi r8, 0x1
    bge lbl_801BFCD4
    b lbl_801BFD4C
lbl_801BFCC8:
    cmpwi r8, 0x4
    bge lbl_801BFD4C
    b lbl_801BFD48
lbl_801BFCD4:
    cmpwi r9, 0x0
    beq lbl_801BFCE0
    b lbl_801BFD4C
lbl_801BFCE0:
    cmpwi r10, 0x3
    beq lbl_801BFD14
    bge lbl_801BFCF8
    cmpwi r10, 0x1
    beq lbl_801BFD04
    b lbl_801BFD4C
lbl_801BFCF8:
    cmpwi r10, 0x5
    bge lbl_801BFD4C
    b lbl_801BFD24
lbl_801BFD04:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD14:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD24:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD40:
    stb r4, -0x8000(r3)
    b lbl_801BFD4C
lbl_801BFD48:
    sth r4, -0x8000(r3)
lbl_801BFD4C:
    lwz r0, 0x30(r1)
    cmpwi r0, 0x0
    beq lbl_801BFDC8
    cmpwi r0, 0x2
    beq lbl_801BFDBC
    bge lbl_801BFD70
    cmpwi r0, 0x1
    bge lbl_801BFD7C
    b lbl_801BFDC8
lbl_801BFD70:
    cmpwi r0, 0x4
    bge lbl_801BFDC8
    b lbl_801BFDC4
lbl_801BFD7C:
    lwz r0, 0x34(r1)
    cmpwi r0, 0x1
    beq lbl_801BFDA8
    bge lbl_801BFDC8
    cmpwi r0, 0x0
    bge lbl_801BFD98
    b lbl_801BFDC8
lbl_801BFD98:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDA8:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDBC:
    stb r4, -0x8000(r3)
    b lbl_801BFDC8
lbl_801BFDC4:
    sth r4, -0x8000(r3)
lbl_801BFDC8:
    lwz r0, 0x3c(r1)
    cmpwi r0, 0x0
    beq lbl_801BFE44
    cmpwi r0, 0x2
    beq lbl_801BFE38
    bge lbl_801BFDEC
    cmpwi r0, 0x1
    bge lbl_801BFDF8
    b lbl_801BFE44
lbl_801BFDEC:
    cmpwi r0, 0x4
    bge lbl_801BFE44
    b lbl_801BFE40
lbl_801BFDF8:
    lwz r0, 0x40(r1)
    cmpwi r0, 0x1
    beq lbl_801BFE24
    bge lbl_801BFE44
    cmpwi r0, 0x0
    bge lbl_801BFE14
    b lbl_801BFE44
lbl_801BFE14:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE24:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE38:
    stb r4, -0x8000(r3)
    b lbl_801BFE44
lbl_801BFE40:
    sth r4, -0x8000(r3)
lbl_801BFE44:
    cmpwi r11, 0x0
    beq lbl_801BFF5C
    cmpwi r11, 0x2
    beq lbl_801BFF50
    bge lbl_801BFE64
    cmpwi r11, 0x1
    bge lbl_801BFE70
    b lbl_801BFF5C
lbl_801BFE64:
    cmpwi r11, 0x4
    bge lbl_801BFF5C
    b lbl_801BFF58
lbl_801BFE70:
    cmpwi r12, 0x1
    beq lbl_801BFE88
    bge lbl_801BFF5C
    cmpwi r12, 0x0
    bge lbl_801BFEF8
    b lbl_801BFF5C
lbl_801BFE88:
    cmpwi r31, 0x2
    beq lbl_801BFECC
    bge lbl_801BFEA4
    cmpwi r31, 0x0
    beq lbl_801BFEB4
    bge lbl_801BFEC0
    b lbl_801BFF5C
lbl_801BFEA4:
    cmpwi r31, 0x4
    beq lbl_801BFEE4
    bge lbl_801BFF5C
    b lbl_801BFED8
lbl_801BFEB4:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEC0:
    stb r4, -0x8000(r3)
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFECC:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFED8:
    sth r4, -0x8000(r3)
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEE4:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFEF8:
    cmpwi r31, 0x2
    beq lbl_801BFF34
    bge lbl_801BFF14
    cmpwi r31, 0x0
    beq lbl_801BFF24
    bge lbl_801BFF2C
    b lbl_801BFF5C
lbl_801BFF14:
    cmpwi r31, 0x4
    beq lbl_801BFF44
    bge lbl_801BFF5C
    b lbl_801BFF3C
lbl_801BFF24:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF2C:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF34:
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF3C:
    sth r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF44:
    lfs f0, lbl_804A1A74
    stfs f0, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF50:
    stb r4, -0x8000(r3)
    b lbl_801BFF5C
lbl_801BFF58:
    sth r4, -0x8000(r3)
lbl_801BFF5C:
    bdnz lbl_801BFB60
lbl_801BFF60:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801BFF78
extern "C" asm void fn_801BFF78() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lbz r0, 0xb8(r3)
    mr r25, r3
    mr r29, r4
    mr r26, r5
    cmpwi r0, 0x0
    mr r27, r6
    li r28, 0x0
    beq lbl_801BFFC4
    lbz r0, 0x20(r4)
    stb r0, 0xc0(r3)
    lbz r0, 0x21(r4)
    stb r0, 0xc1(r3)
    lbz r0, 0x22(r4)
    stb r0, 0xc2(r3)
lbl_801BFFC4:
    lbz r0, 0xb9(r3)
    cmpwi r0, 0x0
    beq lbl_801BFFE8
    lbz r0, 0x24(r4)
    stb r0, 0xc4(r3)
    lbz r0, 0x25(r4)
    stb r0, 0xc5(r3)
    lbz r0, 0x26(r4)
    stb r0, 0xc6(r3)
lbl_801BFFE8:
    lbz r0, 0xba(r3)
    cmpwi r0, 0x0
    beq lbl_801C000C
    lbz r0, 0x28(r4)
    stb r0, 0xc8(r3)
    lbz r0, 0x29(r4)
    stb r0, 0xc9(r3)
    lbz r0, 0x2a(r4)
    stb r0, 0xca(r3)
lbl_801C000C:
    lbz r0, 0xbb(r3)
    cmpwi r0, 0x0
    beq lbl_801C0030
    lbz r0, 0x2c(r4)
    stb r0, 0xcc(r3)
    lbz r0, 0x2d(r4)
    stb r0, 0xcd(r3)
    lbz r0, 0x2e(r4)
    stb r0, 0xce(r3)
lbl_801C0030:
    lbz r4, 0xbc(r3)
    li r0, 0xff
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r4, 0xbd(r3)
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r4, 0xbe(r3)
    cmpwi r4, 0x0
    bne lbl_801C0064
    lbz r3, 0xbf(r3)
    cmpwi r3, 0x0
    beq lbl_801C007C
lbl_801C0064:
    lbz r3, 0x71(r5)
    cmpwi r3, 0x0
    beq lbl_801C007C
    mr r3, r29
    bl fn_801B60F0
    mr r0, r3
lbl_801C007C:
    lbz r3, 0xbc(r25)
    cmpwi r3, 0x0
    beq lbl_801C00AC
    clrlwi r3, r0, 24
    lbz r4, 0x23(r29)
    cmplwi r3, 0xff
    stb r4, 0xc3(r25)
    beq lbl_801C00AC
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xc3(r25)
lbl_801C00AC:
    lbz r3, 0xbd(r25)
    cmpwi r3, 0x0
    beq lbl_801C00DC
    clrlwi r3, r0, 24
    lbz r4, 0x27(r29)
    cmplwi r3, 0xff
    stb r4, 0xc7(r25)
    beq lbl_801C00DC
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xc7(r25)
lbl_801C00DC:
    lbz r3, 0xbe(r25)
    cmpwi r3, 0x0
    beq lbl_801C010C
    clrlwi r3, r0, 24
    lbz r4, 0x2b(r29)
    cmplwi r3, 0xff
    stb r4, 0xcb(r25)
    beq lbl_801C010C
    mullw r3, r4, r3
    addi r3, r3, 0x80
    srawi r3, r3, 8
    stb r3, 0xcb(r25)
lbl_801C010C:
    lbz r3, 0xbf(r25)
    cmpwi r3, 0x0
    beq lbl_801C013C
    clrlwi r0, r0, 24
    lbz r3, 0x2f(r29)
    cmplwi r0, 0xff
    stb r3, 0xcf(r25)
    beq lbl_801C013C
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0xcf(r25)
lbl_801C013C:
    lwz r3, 0xc8(r29)
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_801C01D0
    lbz r0, 0xb8(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xb9(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xbc(r25)
    cmpwi r0, 0x0
    bne lbl_801C017C
    lbz r0, 0xbd(r25)
    cmpwi r0, 0x0
    beq lbl_801C018C
lbl_801C017C:
    mr r4, r29
    addi r5, r25, 0xc0
    addi r6, r25, 0xc4
    bl fn_801B823C
lbl_801C018C:
    lbz r0, 0xba(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbb(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbe(r25)
    cmpwi r0, 0x0
    bne lbl_801C01BC
    lbz r0, 0xbf(r25)
    cmpwi r0, 0x0
    beq lbl_801C01D0
lbl_801C01BC:
    lwz r3, 0xc8(r29)
    mr r4, r29
    addi r5, r25, 0xc8
    addi r6, r25, 0xcc
    bl fn_801B823C
lbl_801C01D0:
    mr r30, r25
    li r29, 0x0
    li r31, 0x0
lbl_801C01DC:
    add r3, r26, r29
    stw r31, 0x14(r1)
    lbz r4, 0x61(r3)
    cmpwi r4, 0x0
    bne lbl_801C01FC
    lbz r0, 0x69(r3)
    cmpwi r0, 0x0
    beq lbl_801C0450
lbl_801C01FC:
    cmpwi r4, 0x4
    beq lbl_801C02D0
    bge lbl_801C0220
    cmpwi r4, 0x2
    beq lbl_801C024C
    bge lbl_801C02B4
    cmpwi r4, 0x1
    bge lbl_801C0230
    b lbl_801C0334
lbl_801C0220:
    cmpwi r4, 0x6
    beq lbl_801C02EC
    bge lbl_801C0334
    b lbl_801C0268
lbl_801C0230:
    lbz r5, 0xc0(r25)
    lbz r4, 0xc1(r25)
    lbz r0, 0xc2(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C024C:
    lbz r5, 0xc4(r25)
    lbz r4, 0xc5(r25)
    lbz r0, 0xc6(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C0268:
    lbz r4, 0xc1(r25)
    lbz r0, 0xc5(r25)
    lbz r6, 0xc2(r25)
    mullw r7, r4, r0
    lbz r5, 0xc6(r25)
    lbz r4, 0xc0(r25)
    lbz r0, 0xc4(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x15(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x16(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x14(r1)
    b lbl_801C0334
lbl_801C02B4:
    lbz r5, 0xc8(r25)
    lbz r4, 0xc9(r25)
    lbz r0, 0xca(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C02D0:
    lbz r5, 0xcc(r25)
    lbz r4, 0xcd(r25)
    lbz r0, 0xce(r25)
    stb r5, 0x14(r1)
    stb r4, 0x15(r1)
    stb r0, 0x16(r1)
    b lbl_801C0334
lbl_801C02EC:
    lbz r4, 0xc9(r25)
    lbz r0, 0xcd(r25)
    lbz r6, 0xca(r25)
    mullw r7, r4, r0
    lbz r5, 0xce(r25)
    lbz r4, 0xc8(r25)
    lbz r0, 0xcc(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x15(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x16(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x14(r1)
lbl_801C0334:
    lbz r0, 0x69(r3)
    cmpwi r0, 0x4
    beq lbl_801C03AC
    bge lbl_801C035C
    cmpwi r0, 0x2
    beq lbl_801C0378
    bge lbl_801C03A0
    cmpwi r0, 0x1
    bge lbl_801C036C
    b lbl_801C03D0
lbl_801C035C:
    cmpwi r0, 0x6
    beq lbl_801C03B8
    bge lbl_801C03D0
    b lbl_801C0384
lbl_801C036C:
    lbz r0, 0xc3(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C0378:
    lbz r0, 0xc7(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C0384:
    lbz r3, 0xc3(r25)
    lbz r0, 0xc7(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03A0:
    lbz r0, 0xcb(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03AC:
    lbz r0, 0xcf(r25)
    stb r0, 0x17(r1)
    b lbl_801C03D0
lbl_801C03B8:
    lbz r3, 0xcb(r25)
    lbz r0, 0xcf(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x17(r1)
lbl_801C03D0:
    cmpwi r27, 0x0
    bne lbl_801C0418
    lbz r3, 0x14(r1)
    lbz r0, 0x94(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x15(r1)
    lbz r0, 0x95(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x16(r1)
    lbz r0, 0x96(r30)
    cmplw r3, r0
    bne lbl_801C0418
    lbz r3, 0x17(r1)
    lbz r0, 0x97(r30)
    cmplw r3, r0
    beq lbl_801C0450
lbl_801C0418:
    lwz r0, 0x14(r1)
    addi r3, r29, 0x1
    addi r4, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_802E4590
    lbz r3, 0x14(r1)
    li r28, 0x1
    lbz r0, 0x15(r1)
    stb r3, 0x94(r30)
    lbz r3, 0x16(r1)
    stb r0, 0x95(r30)
    lbz r0, 0x17(r1)
    stb r3, 0x96(r30)
    stb r0, 0x97(r30)
lbl_801C0450:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_801C01DC
    mr r30, r25
    li r29, 0x0
    li r31, 0x0
lbl_801C046C:
    add r3, r26, r29
    stw r31, 0x10(r1)
    lbz r4, 0x64(r3)
    cmpwi r4, 0x0
    bne lbl_801C048C
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_801C06E0
lbl_801C048C:
    cmpwi r4, 0x4
    beq lbl_801C0560
    bge lbl_801C04B0
    cmpwi r4, 0x2
    beq lbl_801C04DC
    bge lbl_801C0544
    cmpwi r4, 0x1
    bge lbl_801C04C0
    b lbl_801C05C4
lbl_801C04B0:
    cmpwi r4, 0x6
    beq lbl_801C057C
    bge lbl_801C05C4
    b lbl_801C04F8
lbl_801C04C0:
    lbz r5, 0xc0(r25)
    lbz r4, 0xc1(r25)
    lbz r0, 0xc2(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C04DC:
    lbz r5, 0xc4(r25)
    lbz r4, 0xc5(r25)
    lbz r0, 0xc6(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C04F8:
    lbz r4, 0xc1(r25)
    lbz r0, 0xc5(r25)
    lbz r6, 0xc2(r25)
    mullw r7, r4, r0
    lbz r5, 0xc6(r25)
    lbz r4, 0xc0(r25)
    lbz r0, 0xc4(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x11(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x12(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x10(r1)
    b lbl_801C05C4
lbl_801C0544:
    lbz r5, 0xc8(r25)
    lbz r4, 0xc9(r25)
    lbz r0, 0xca(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C0560:
    lbz r5, 0xcc(r25)
    lbz r4, 0xcd(r25)
    lbz r0, 0xce(r25)
    stb r5, 0x10(r1)
    stb r4, 0x11(r1)
    stb r0, 0x12(r1)
    b lbl_801C05C4
lbl_801C057C:
    lbz r4, 0xc9(r25)
    lbz r0, 0xcd(r25)
    lbz r6, 0xca(r25)
    mullw r7, r4, r0
    lbz r5, 0xce(r25)
    lbz r4, 0xc8(r25)
    lbz r0, 0xcc(r25)
    mullw r5, r6, r5
    addi r6, r7, 0x80
    srawi r6, r6, 8
    stb r6, 0x11(r1)
    mullw r4, r4, r0
    addi r0, r5, 0x80
    srawi r0, r0, 8
    stb r0, 0x12(r1)
    addi r0, r4, 0x80
    srawi r0, r0, 8
    stb r0, 0x10(r1)
lbl_801C05C4:
    lbz r0, 0x6c(r3)
    cmpwi r0, 0x4
    beq lbl_801C063C
    bge lbl_801C05EC
    cmpwi r0, 0x2
    beq lbl_801C0608
    bge lbl_801C0630
    cmpwi r0, 0x1
    bge lbl_801C05FC
    b lbl_801C0660
lbl_801C05EC:
    cmpwi r0, 0x6
    beq lbl_801C0648
    bge lbl_801C0660
    b lbl_801C0614
lbl_801C05FC:
    lbz r0, 0xc3(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0608:
    lbz r0, 0xc7(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0614:
    lbz r3, 0xc3(r25)
    lbz r0, 0xc7(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0630:
    lbz r0, 0xcb(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C063C:
    lbz r0, 0xcf(r25)
    stb r0, 0x13(r1)
    b lbl_801C0660
lbl_801C0648:
    lbz r3, 0xcb(r25)
    lbz r0, 0xcf(r25)
    mullw r3, r3, r0
    addi r0, r3, 0x80
    srawi r0, r0, 8
    stb r0, 0x13(r1)
lbl_801C0660:
    cmpwi r27, 0x0
    bne lbl_801C06A8
    lbz r3, 0x10(r1)
    lbz r0, 0xa0(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x11(r1)
    lbz r0, 0xa1(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x12(r1)
    lbz r0, 0xa2(r30)
    cmplw r3, r0
    bne lbl_801C06A8
    lbz r3, 0x13(r1)
    lbz r0, 0xa3(r30)
    cmplw r3, r0
    beq lbl_801C06E0
lbl_801C06A8:
    lwz r0, 0x10(r1)
    mr r3, r29
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_802E4654
    lbz r3, 0x10(r1)
    li r28, 0x1
    lbz r0, 0x11(r1)
    stb r3, 0xa0(r30)
    lbz r3, 0x12(r1)
    stb r0, 0xa1(r30)
    lbz r0, 0x13(r1)
    stb r3, 0xa2(r30)
    stb r0, 0xa3(r30)
lbl_801C06E0:
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x4
    blt lbl_801C046C
    addi r11, r1, 0x40
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801C070C
extern "C" asm void fn_801C070C() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    stfd f31, 0x180(r1)
    opword 0xF3E10188
    stfd f30, 0x170(r1)
    opword 0xF3C10178
    stfd f29, 0x160(r1)
    opword 0xF3A10168
    stfd f28, 0x150(r1)
    opword 0xF3810158
    stfd f27, 0x140(r1)
    opword 0xF3610148
    stfd f26, 0x130(r1)
    opword 0xF3410138
    stfd f25, 0x120(r1)
    opword 0xF3210128
    stfd f24, 0x110(r1)
    opword 0xF3010118
    stfd f23, 0x100(r1)
    opword 0xF2E10108
    stfd f22, 0xf0(r1)
    opword 0xF2C100F8
    stfd f21, 0xe0(r1)
    opword 0xF2A100E8
    stfd f20, 0xd0(r1)
    opword 0xF28100D8
    addi r11, r1, 0xd0
    bl _savegpr_15
    lis r0, 0x4330
    mr r15, r4
    stw r0, 0x78(r1)
    mr r16, r5
    lfd f26, lbl_804A1A88
    mr r17, r6
    stw r0, 0x80(r1)
    mr r18, r7
    lfs f27, lbl_804A1A7C
    mr r29, r3
    lfd f28, lbl_804A1A90
    mr r28, r15
    lfs f30, lbl_804A1A80
    mr r25, r3
    lfs f29, lbl_804A1A74
    mr r23, r15
    lfs f31, lbl_804A1A70
    li r21, 0x0
    li r20, 0x0
    li r27, 0x0
    li r24, 0x0
lbl_801C07D4:
    lwz r0, 0xd4(r29)
    addi r26, r27, 0x2
    cmpwi r0, 0x0
    blt lbl_801C0CE0
    lwz r22, 0x88(r28)
    cmpwi r22, 0x0
    beq lbl_801C0CE0
    lhz r0, 0x94(r15)
    cmpwi r18, 0x0
    sraw r3, r0, r27
    sraw r0, r0, r26
    clrlwi r31, r3, 30
    clrlwi r30, r0, 30
    bne lbl_801C0830
    lwz r0, 0x4(r25)
    cmplw r22, r0
    bne lbl_801C0830
    lwz r0, 0x18(r25)
    cmpw r31, r0
    bne lbl_801C0830
    lwz r0, 0x1c(r25)
    cmpw r30, r0
    beq lbl_801C0938
lbl_801C0830:
    stw r22, 0x4(r25)
    li r21, 0x1
    stw r31, 0x18(r25)
    stw r30, 0x1c(r25)
    lbz r19, 0xc(r22)
    cmpwi r19, 0xb
    bge lbl_801C0864
    cmpwi r19, 0x7
    beq lbl_801C08F4
    bge lbl_801C0870
    cmpwi r19, 0x0
    bge lbl_801C08C8
    b lbl_801C08F4
lbl_801C0864:
    cmpwi r19, 0xe
    beq lbl_801C08C8
    b lbl_801C08F4
lbl_801C0870:
    lwz r4, 0x20(r22)
    addi r3, r1, 0x18
    lbz r5, 0xd(r22)
    lhz r6, 0xe(r22)
    bl GXInitTlutObj
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x18
    bl GXLoadTlut
    lwz r0, 0xd4(r29)
    mr r7, r19
    mr r8, r31
    mr r9, r30
    stw r0, 0x8(r1)
    addi r3, r1, 0x28
    lbz r0, 0x14(r22)
    lwz r4, 0x1c(r22)
    subfic r0, r0, 0x1
    lhz r5, 0x4(r22)
    lhz r6, 0x6(r22)
    srwi r10, r0, 31
    bl GXInitTexObjCI
    b lbl_801C08F4
lbl_801C08C8:
    lbz r0, 0x14(r22)
    mr r7, r19
    lwz r4, 0x1c(r22)
    mr r8, r31
    subfic r0, r0, 0x1
    lhz r5, 0x4(r22)
    lhz r6, 0x6(r22)
    mr r9, r30
    addi r3, r1, 0x28
    srwi r10, r0, 31
    bl GXInitTexObj
lbl_801C08F4:
    lbz r0, 0x14(r22)
    addi r3, r1, 0x28
    lbz r4, 0x15(r22)
    li r6, 0x0
    stw r0, 0x7c(r1)
    li r7, 0x0
    lbz r5, 0x16(r22)
    li r8, 0x0
    lfd f0, 0x78(r1)
    lfs f1, lbl_804A1A74
    fsubs f0, f0, f26
    lfs f3, 0x18(r22)
    fadds f2, f27, f0
    bl GXInitTexObjLOD
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x28
    bl GXLoadTexObj
lbl_801C0938:
    lhz r4, 0x94(r15)
    li r3, 0x1
    sraw r0, r4, r27
    clrlwi r6, r0, 30
    cmpwi r6, 0x2
    bne lbl_801C0954
    li r3, 0x2
lbl_801C0954:
    lbz r0, 0x96(r15)
    sraw r0, r0, r24
    clrlwi r5, r0, 30
    cmplwi r5, 0x1
    beq lbl_801C0970
    cmplwi r5, 0x3
    bne lbl_801C0978
lbl_801C0970:
    slwi r0, r3, 1
    subf r3, r0, r3
lbl_801C0978:
    xoris r3, r3, 0x8000
    sraw r0, r4, r26
    stw r3, 0x84(r1)
    clrlwi r4, r0, 30
    cmpwi r4, 0x2
    li r3, 0x1
    lfd f0, 0x80(r1)
    fsubs f25, f0, f28
    bne lbl_801C09A0
    li r3, 0x2
lbl_801C09A0:
    cmplwi r5, 0x2
    beq lbl_801C09B0
    cmplwi r5, 0x3
    bne lbl_801C09B8
lbl_801C09B0:
    slwi r0, r3, 1
    subf r3, r0, r3
lbl_801C09B8:
    xoris r0, r3, 0x8000
    cmplwi r5, 0x1
    stw r0, 0x7c(r1)
    li r0, 0x0
    lfd f0, 0x78(r1)
    fsubs f24, f0, f28
    beq lbl_801C09DC
    cmplwi r5, 0x3
    bne lbl_801C09E0
lbl_801C09DC:
    li r0, 0x1
lbl_801C09E0:
    cmpwi r6, 0x2
    bne lbl_801C09EC
    slwi r0, r0, 1
lbl_801C09EC:
    xoris r0, r0, 0x8000
    cmplwi r5, 0x2
    stw r0, 0x84(r1)
    li r0, 0x0
    lfd f0, 0x80(r1)
    fsubs f23, f0, f28
    beq lbl_801C0A10
    cmplwi r5, 0x3
    bne lbl_801C0A14
lbl_801C0A10:
    li r0, 0x1
lbl_801C0A14:
    cmpwi r4, 0x2
    bne lbl_801C0A20
    slwi r0, r0, 1
lbl_801C0A20:
    xoris r0, r0, 0x8000
    cmpwi r18, 0x0
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f22, f0, f28
    bne lbl_801C0AB8
    lfs f0, 0x8(r25)
    fcmpu cr0, f25, f0
    bne lbl_801C0AB8
    lfs f0, 0xc(r25)
    fcmpu cr0, f24, f0
    bne lbl_801C0AB8
    lfs f0, 0x10(r25)
    fcmpu cr0, f23, f0
    bne lbl_801C0AB8
    lfs f0, 0x14(r25)
    fcmpu cr0, f22, f0
    bne lbl_801C0AB8
    lfs f1, 0x4c(r23)
    lfs f0, 0x20(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x50(r23)
    lfs f0, 0x24(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x64(r28)
    lfs f0, 0x28(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x70(r23)
    lfs f0, 0x2c(r25)
    fcmpu cr0, f1, f0
    bne lbl_801C0AB8
    lfs f1, 0x74(r23)
    lfs f0, 0x30(r25)
    fcmpu cr0, f1, f0
    beq lbl_801C0CE0
lbl_801C0AB8:
    stfs f25, 0x8(r25)
    addi r3, r1, 0x48
    li r21, 0x1
    stfs f24, 0xc(r25)
    stfs f23, 0x10(r25)
    stfs f22, 0x14(r25)
    lfs f0, 0x4c(r23)
    stfs f0, 0x20(r25)
    lfs f0, 0x50(r23)
    stfs f0, 0x24(r25)
    lfs f0, 0x64(r28)
    stfs f0, 0x28(r25)
    lfs f0, 0x70(r23)
    stfs f0, 0x2c(r25)
    lfs f0, 0x74(r23)
    stfs f0, 0x30(r25)
    bl PSMTXIdentity
    lfs f2, 0x70(r23)
    stfs f2, 0x54(r1)
    lfs f0, 0x74(r23)
    stfs f0, 0x64(r1)
    lfs f1, 0x64(r28)
    fcmpu cr0, f29, f1
    beq lbl_801C0B70
    fsubs f20, f2, f30
    addi r3, r1, 0x14
    fsubs f21, f0, f30
    addi r4, r1, 0x10
    bl fn_801B9C64
    lfs f5, 0x14(r1)
    lfs f6, 0x10(r1)
    fmuls f0, f5, f20
    stfs f5, 0x58(r1)
    fmuls f1, f6, f20
    fneg f4, f5
    stfs f6, 0x5c(r1)
    fmuls f2, f5, f21
    fadds f3, f30, f1
    stfs f6, 0x48(r1)
    fadds f1, f30, f0
    fmuls f0, f6, f21
    stfs f4, 0x4c(r1)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f2, 0x54(r1)
    stfs f0, 0x64(r1)
lbl_801C0B70:
    fcmpu cr0, f31, f25
    bne lbl_801C0BA8
    fcmpu cr0, f31, f24
    bne lbl_801C0BA8
    lfs f0, 0x4c(r23)
    fcmpu cr0, f31, f0
    bne lbl_801C0BA8
    lfs f0, 0x50(r23)
    fcmpu cr0, f31, f0
    bne lbl_801C0BA8
    fcmpu cr0, f29, f23
    bne lbl_801C0BA8
    fcmpu cr0, f29, f22
    beq lbl_801C0C28
lbl_801C0BA8:
    lfs f1, 0x4c(r23)
    lfs f0, 0x50(r23)
    fmuls f3, f25, f1
    lfs f2, 0x48(r1)
    lfs f1, 0x4c(r1)
    fmuls f6, f24, f0
    lfs f0, 0x54(r1)
    fmuls f4, f2, f3
    fmuls f3, f1, f3
    lfs f2, 0x58(r1)
    fsubs f5, f0, f30
    lfs f1, 0x5c(r1)
    stfs f4, 0x48(r1)
    lfs f0, 0x64(r1)
    stfs f3, 0x4c(r1)
    fmuls f3, f2, f6
    fmuls f2, f1, f6
    lfs f4, 0x4c(r23)
    fsubs f1, f0, f30
    fmuls f0, f5, f4
    stfs f3, 0x58(r1)
    stfs f2, 0x5c(r1)
    fadds f0, f30, f0
    fmuls f0, f25, f0
    fadds f0, f23, f0
    stfs f0, 0x54(r1)
    lfs f0, 0x50(r23)
    fmuls f0, f1, f0
    fadds f0, f30, f0
    fmuls f0, f24, f0
    fadds f0, f22, f0
    stfs f0, 0x64(r1)
lbl_801C0C28:
    lhz r3, 0x0(r16)
    addi r0, r20, 0x7
    sraw r0, r3, r0
    clrlwi. r0, r0, 31
    bne lbl_801C0C88
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x48
    li r5, 0x1
    slwi r0, r4, 2
    subf r4, r4, r0
    addi r4, r4, 0x1e
    bl GXLoadTexMtxImm
    cmpwi r18, 0x0
    beq lbl_801C0CE0
    lwz r3, 0xd4(r29)
    li r4, 0x1
    li r5, 0x4
    li r7, 0x0
    slwi r0, r3, 2
    li r8, 0x7d
    subf r6, r3, r0
    addi r6, r6, 0x1e
    bl GXSetTexCoordGen2
    b lbl_801C0CE0
lbl_801C0C88:
    addi r4, r1, 0x48
    addi r3, r17, 0x30
    mr r5, r4
    bl PSMTXConcat
    lwz r4, 0xd4(r29)
    addi r3, r1, 0x48
    li r5, 0x0
    slwi r0, r4, 2
    subf r4, r4, r0
    addi r4, r4, 0x40
    bl GXLoadTexMtxImm
    cmpwi r18, 0x0
    beq lbl_801C0CE0
    lwz r3, 0xd4(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    slwi r0, r3, 2
    li r7, 0x0
    subf r8, r3, r0
    addi r8, r8, 0x40
    bl GXSetTexCoordGen2
lbl_801C0CE0:
    addi r20, r20, 0x1
    addi r28, r28, 0x4
    cmpwi r20, 0x3
    addi r27, r27, 0x4
    addi r25, r25, 0x30
    addi r24, r24, 0x2
    addi r23, r23, 0x8
    addi r29, r29, 0x4
    blt lbl_801C07D4
    mr r3, r21
    opword 0xE3E10188
    lfd f31, 0x180(r1)
    opword 0xE3C10178
    lfd f30, 0x170(r1)
    opword 0xE3A10168
    lfd f29, 0x160(r1)
    opword 0xE3810158
    lfd f28, 0x150(r1)
    opword 0xE3610148
    lfd f27, 0x140(r1)
    opword 0xE3410138
    lfd f26, 0x130(r1)
    opword 0xE3210128
    lfd f25, 0x120(r1)
    opword 0xE3010118
    lfd f24, 0x110(r1)
    opword 0xE2E10108
    lfd f23, 0x100(r1)
    opword 0xE2C100F8
    lfd f22, 0xf0(r1)
    opword 0xE2A100E8
    lfd f21, 0xe0(r1)
    opword 0xE28100D8
    lfd f20, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_15
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// asm_to_cpp: fn_801C0D80
extern "C" asm void fn_801C0D80() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801C0D8C
    b lbl_801C0D98
lbl_801C0D8C:
    lis r3, fn_801C0DF8@ha
    addi r3, r3, fn_801C0DF8@l
    blr
lbl_801C0D98:
    lis r3, fn_801C0DC8@ha
    addi r3, r3, fn_801C0DC8@l
    blr
}

// asm_to_cpp: fn_801C0DA4
extern "C" asm void fn_801C0DA4() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_801C0DB0
    b lbl_801C0DBC
lbl_801C0DB0:
    lis r3, GetNextDrawParticle_YoungersFirst__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r2ef15ParticleManagerPQ34nw4r2ef8Particle@ha
    addi r3, r3, GetNextDrawParticle_YoungersFirst__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r2ef15ParticleManagerPQ34nw4r2ef8Particle@l
    blr
lbl_801C0DBC:
    lis r3, fn_801C0E40@ha
    addi r3, r3, fn_801C0E40@l
    blr
}

// asm_to_cpp: fn_801C0DC8
extern "C" asm void fn_801C0DC8() {
    nofralloc
    lwz r4, 0x38(r3)
    b lbl_801C0DDC
lbl_801C0DD0:
    lhz r0, 0x42(r3)
    add r4, r4, r0
    lwz r4, 0x4(r4)
lbl_801C0DDC:
    cmpwi r4, 0x0
    beq lbl_801C0DF0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0DD0
lbl_801C0DF0:
    mr r3, r4
    blr
}

// asm_to_cpp: fn_801C0DF8
extern "C" asm void fn_801C0DF8() {
    nofralloc
    lwz r4, 0x3c(r3)
    b lbl_801C0E24
lbl_801C0E00:
    lhz r5, 0x42(r3)
    lwzx r4, r4, r5
    b lbl_801C0E10
lbl_801C0E0C:
    lwzx r4, r4, r5
lbl_801C0E10:
    cmpwi r4, 0x0
    beq lbl_801C0E24
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0E0C
lbl_801C0E24:
    cmpwi r4, 0x0
    beq lbl_801C0E38
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801C0E00
lbl_801C0E38:
    mr r3, r4
    blr
}

// asm_to_cpp: fn_801C0E40
extern "C" asm void fn_801C0E40() {
    nofralloc
    lhz r5, 0x42(r3)
    add r3, r4, r5
    lwz r3, 0x4(r3)
    b lbl_801C0E58
lbl_801C0E50:
    add r3, r3, r5
    lwz r3, 0x4(r3)
lbl_801C0E58:
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801C0E50
    blr
}

// asm_to_cpp: fn_801C0E98
extern "C" asm void fn_801C0E98() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r3
    stw r4, 0x4(r3)
    addi r4, r30, 0x8
    stw r5, 0x0(r3)
    lwz r3, 0x20(r5)
    bl fn_801ACC48
    mr r3, r31
    addi r4, r30, 0x38
    bl fn_801B7FB8
    addi r3, r30, 0x38
    addi r4, r30, 0x68
    bl PSMTXInverse
    lfs f2, 0x2c(r30)
    addi r3, r1, 0x38
    lfs f1, 0x1c(r30)
    mr r5, r3
    lfs f0, 0xc(r30)
    addi r4, r30, 0x68
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f2, 0x40(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    opword 0xE021003C
    opword 0xE0418038
    opword 0x10210072
    lfs f0, lbl_804A1A98
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801C0F30
    li r0, 0x0
    b lbl_801C0F50
lbl_801C0F30:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410038
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418040
    opword 0xF0010038
    opword 0x10020058
    opword 0xF0018040
lbl_801C0F50:
    cmpwi r0, 0x0
    bne lbl_801C0F78
    lfs f1, lbl_804A1A74
    lfs f0, lbl_804A1A70
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x40(r1)
lbl_801C0F78:
    lfs f0, 0x38(r1)
    addi r4, r1, 0x2c
    lfs f3, 0x34(r30)
    mr r5, r4
    stfs f0, 0x98(r30)
    addi r3, r30, 0x68
    lfs f2, 0x24(r30)
    lfs f0, 0x3c(r1)
    lfs f1, 0x14(r30)
    stfs f0, 0x9c(r30)
    lfs f0, 0x40(r1)
    stfs f0, 0xa0(r30)
    stfs f1, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f3, 0x34(r1)
    bl PSMTXMultVec
    lfs f0, 0x2c(r1)
    stfs f0, 0xa4(r30)
    lfs f0, 0x30(r1)
    stfs f0, 0xa8(r30)
    lfs f0, 0x34(r1)
    stfs f0, 0xac(r30)
    lwz r3, 0x24(r31)
    lbz r0, 0x14a(r3)
    cmpwi r0, 0x6
    beq lbl_801C1098
    bge lbl_801C0FF0
    cmpwi r0, 0x5
    bge lbl_801C0FF8
    b lbl_801C1098
lbl_801C0FF0:
    cmpwi r0, 0x8
    bge lbl_801C1098
lbl_801C0FF8:
    lfs f1, 0x8c(r30)
    lfs f0, 0x7c(r30)
    stfs f1, 0x28(r1)
    lfs f1, 0x6c(r30)
    stfs f0, 0x24(r1)
    lfs f0, lbl_804A1A98
    opword 0xE0410024
    stfs f1, 0x20(r1)
    opword 0x104200B2
    opword 0xE0218020
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C1038
    li r0, 0x0
    b lbl_801C1058
lbl_801C1038:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801C1058:
    cmpwi r0, 0x0
    bne lbl_801C1080
    lfs f1, lbl_804A1A74
    lfs f0, lbl_804A1A70
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
lbl_801C1080:
    lfs f2, 0x20(r1)
    lfs f1, 0x24(r1)
    lfs f0, 0x28(r1)
    stfs f2, 0xb0(r30)
    stfs f1, 0xb4(r30)
    stfs f0, 0xb8(r30)
lbl_801C1098:
    mr r3, r30
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801C10B4
extern "C" asm void fn_801C10B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801C10DC
    cmpwi r4, 0x0
    ble lbl_801C10DC
    bl dtor_80136CFC
lbl_801C10DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801C10F4
extern "C" asm void fn_801C10F4() {
    nofralloc
    lis r8, lbl_803E6550@ha
    lfs f1, lbl_804A1A70
    addi r8, r8, lbl_803E6550@l
    lfs f0, lbl_804A1A74
    addi r3, r8, 0x30
    stfs f1, 0x0(r8)
    addi r7, r8, 0x0
    addi r6, r8, 0xc
    addi r5, r8, 0x18
    addi r4, r8, 0x24
    stfs f0, 0x4(r7)
    stfs f0, 0x8(r7)
    stfs f0, 0xc(r8)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0x18(r8)
    stfs f0, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0x24(r8)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f1, 0x30(r8)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f0, 0x2c(r3)
    blr
}
