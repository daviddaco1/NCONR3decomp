#include "common.h"
#include "nw4r/g3d.h" // IWYU pragma: export

#include <algorithm>
#include <cstring>

namespace nw4r {
namespace g3d {
namespace detail {
namespace ScnDependentMtxFunc {
/******************************************************************************
 *
 * ScnDependentMtxFunc
 *
 ******************************************************************************/
// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc: definicion C reemplazada por asm (ver abajo)


// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc: definicion C reemplazada por asm (ver abajo)


// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc: definicion C reemplazada por asm (ver abajo)


void DefaultMapping(math::MTX34 *pMtx, s8 camRef, s8 lightRef) {
#pragma unused(camRef)
#pragma unused(lightRef)

    if (pMtx == NULL) {
        return;
    }

    math::MTX34Identity(pMtx);
}

} // namespace ScnDependentMtxFunc
} // namespace detail

namespace G3DState {
namespace {
/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
inline bool IsEqualTexObj(const GXTexObj &rLhs, const GXTexObj &rRhs) {
    return rLhs.dummy[0] == rRhs.dummy[0] && rLhs.dummy[1] == rRhs.dummy[1] && rLhs.dummy[2] == rRhs.dummy[2] &&
           rLhs.dummy[3] == rRhs.dummy[3] && rLhs.dummy[4] == rRhs.dummy[4] && rLhs.dummy[5] == rRhs.dummy[5] &&
           rLhs.dummy[6] == rRhs.dummy[6] && rLhs.dummy[7] == rRhs.dummy[7];
}

inline bool IsEqualTlutObj(const GXTlutObj &rLhs, const GXTlutObj &rRhs) {
    return rLhs.dummy[0] == rRhs.dummy[0] && rLhs.dummy[1] == rRhs.dummy[1] && rLhs.dummy[2] == rRhs.dummy[2];
}

} // namespace

/******************************************************************************
 *
 * IndMtxTexInfo
 *
 ******************************************************************************/
IndTexMtxInfo::IndTexMtxInfo(const ResMatIndMtxAndScale ind) : flag(0) {
    if (ind.GXGetIndTexMtx(GX_ITM_0, &offset_mtx[GX_ITM_0 - 1])) {
        flag |= 1 << GX_ITM_0 - 1;
    }

    if (ind.GXGetIndTexMtx(GX_ITM_1, &offset_mtx[GX_ITM_1 - 1])) {
        flag |= 1 << GX_ITM_1 - 1;
    }

    if (ind.GXGetIndTexMtx(GX_ITM_2, &offset_mtx[GX_ITM_2 - 1])) {
        flag |= 1 << GX_ITM_2 - 1;
    }
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv: definicion C reemplazada por asm (ver abajo)


void IndTexMtxInfo::SetMtx(GXIndTexMtxID id, const math::MTX34 &rMtx) {
    if (id == GX_ITM_0) {
        offset_mtx[GX_ITM_0 - 1] = rMtx;
        flag |= 1 << GX_ITM_0 - 1;

    } else if (id == GX_ITM_1) {
        offset_mtx[GX_ITM_1 - 1] = rMtx;
        flag |= 1 << GX_ITM_1 - 1;

    } else if (id == GX_ITM_2) {
        offset_mtx[GX_ITM_2 - 1] = rMtx;
        flag |= 1 << GX_ITM_2 - 1;
    }
}

namespace {
/******************************************************************************
 *
 * SyncGX
 *
 ******************************************************************************/

class SyncGX {
public:
    SyncGX() : bNeedSync(true) {}

    void Set();
    void Unset() {
        bNeedSync = false;
    }

    bool Get() {
        bool result = bNeedSync;
        Unset();
        return result;
    }

    void Invalidate() {
        bNeedSync = true;
    }

private:
    bool bNeedSync; // at 0x0
};

SyncGX sSyncGX;

void SyncGX::Set() {
    bNeedSync = true;
}

/******************************************************************************
 *
 * GenMode2
 *
 ******************************************************************************/
class GenMode2 {
public:
    GenMode2() : mNumTexGens(1), mNumChans(0), mNumTevs(1), mNumInds(0), mCullMode(GX_CULL_BACK), flag(0) {}

    void Invalidate() {
        mNumTexGens = 1;
        mNumChans = 0;
        mNumTevs = 1;
        mNumInds = 0;
        mCullMode = GX_CULL_BACK;
        flag = 0;
    }

    void LoadBP() {
        if ((flag & FLAG_FIRST_SET) && (flag & FLAG_ALL_LOADED) == FLAG_XF_LOADED) {
            fifo::GDSetGenMode2Ex_BP(mNumTexGens, mNumChans, mNumTevs, mNumInds, mCullMode);

            flag |= FLAG_BP_LOADED;
        }
    }

    void LoadXF() {
        if ((flag & FLAG_FIRST_SET) && (flag & FLAG_ALL_LOADED) != FLAG_ALL_LOADED) {
            fifo::GDSetGenMode2(mNumTexGens, mNumChans, mNumTevs, mNumInds, mCullMode);

            flag |= FLAG_BP_LOADED | FLAG_XF_LOADED;
        }
    }

    void SetResGenMode(const ResGenMode res) {
        if (mNumTexGens != res.GXGetNumTexGens()) {
            mNumTexGens = res.GXGetNumTexGens();
            flag &= ~FLAG_ALL_LOADED;
        }

        if (mNumChans != res.GXGetNumChans()) {
            mNumChans = res.GXGetNumChans();
            flag &= ~FLAG_ALL_LOADED;
        }

        if (mNumTevs != res.GXGetNumTevStages()) {
            mNumTevs = res.GXGetNumTevStages();
            flag &= ~FLAG_BP_LOADED;
        }

        if (mNumInds != res.GXGetNumIndStages()) {
            mNumInds = res.GXGetNumIndStages();
            flag &= ~FLAG_BP_LOADED;
        }

        if (mCullMode != res.GXGetCullMode()) {
            mCullMode = res.GXGetCullMode();
            flag &= ~FLAG_BP_LOADED;
        }

        if (!(flag & FLAG_FIRST_SET)) {
            flag &= ~FLAG_ALL_LOADED;
            flag |= FLAG_FIRST_SET;
        }
    }

    u8 GXGetNumTexGens() const {
        return mNumTexGens;
    }

    u8 GXGetNumChans() const {
        return mNumChans;
    }

    u8 GXGetNumIndStages() const {
        return mNumInds;
    }

private:
    enum Flag {
        FLAG_BP_LOADED = (1 << 0),
        FLAG_XF_LOADED = (1 << 1),
        FLAG_FIRST_SET = (1 << 2),

        FLAG_ALL_LOADED = FLAG_BP_LOADED | FLAG_XF_LOADED
    };

private:
    u8 mNumTexGens;       // at 0x0
    u8 mNumChans;         // at 0x1
    u8 mNumTevs;          // at 0x2
    u8 mNumInds;          // at 0x3
    GXCullMode mCullMode; // at 0x4
    u32 flag;             // at 0x8
};

GenMode2 sGenMode2;

/******************************************************************************
 *
 * TexCoordScaleState
 *
 ******************************************************************************/
struct TexMapSize {
    u16 width;  // at 0x0
    u16 height; // at 0x2
};

struct TexCoordScale {
    u16 width;  // at 0x0
    u16 height; // at 0x2
    u32 opt;    // at 0x4
};

class TexCoordScaleState {
public:
    TexCoordScaleState() {
        std::memset(this, 0, sizeof(TexCoordScaleState));
    }

    void Invalidate() {
        mUpToDate = 0;
    }

    void UpdateTexMapSize(GXTexMapID map, u16 width, u16 height) {
        wh[map].width = width;
        wh[map].height = height;

        mUpToDate |= FLAG_TEXMAP;
        mUpToDate &= ~FLAG_TEXCOORD;
    }

    void UpdateTable(const ResTev tev) {
        const u32 *pTable = reinterpret_cast<const u32 *>(tev.ref().texCoordToTexMapID);

        if (!(mUpToDate & FLAG_TEXMAP) || pTable[0] != table_data[0] || pTable[1] != table_data[1]) {
            table_data[0] = pTable[0];
            table_data[1] = pTable[1];

            mUpToDate |= FLAG_TEXMAP;
            mUpToDate &= ~FLAG_TEXCOORD;
        }
    }

    void LoadTexCoordScale(u8 texGens) {
        if ((mUpToDate & FLAG_TEXMAP) && !(mUpToDate & FLAG_TEXCOORD) && texGens != 0) {
            LoadTexCoordScale_(texGens);
        }
    }

private:
    enum UpToDateFlag {
        FLAG_TEXCOORD = (1 << 0),
        FLAG_TEXMAP = (1 << 1),
    };

private:
    void LoadTexCoordScale_(u8 texGens);

private:
    u32 mUpToDate;                        // at 0x0
    TexMapSize wh[GX_MAX_TEXMAP];         // at 0x4
    TexCoordScale scale[GX_MAX_TEXCOORD]; // at 0x24

    union {
        u8 table[GX_MAX_TEXCOORD];
        u32 table_data[GX_MAX_TEXCOORD / sizeof(u32)];
    }; // at 0x64
};

TexCoordScaleState sTexCoordScale;

void TexCoordScaleState::LoadTexCoordScale_(u8 texGens) {
    for (u8 i = 0; i < texGens; i++) {
        if (table[i] == GX_TEXMAP_NULL) {
            continue;
        }

        scale[i].width = wh[table[i]].width;
        scale[i].height = wh[table[i]].height;

        fifo::GDSetTexCoordScale2(
            static_cast<GXTexCoordID>(i), scale[i].width, false, false, scale[i].height, false, false
        );
    }

    mUpToDate |= FLAG_TEXCOORD;
}

/******************************************************************************
 *
 * TexState
 *
 ******************************************************************************/
class TexState {
public:
    TexState() : mValidFlag(0) {}

    void Invalidate() {
        mValidFlag = 0;
    }

    void Invalidate(GXTexMapID map) {
        mValidFlag &= ~(1 << map);
    }

    void LoadResTexObj(const ResTexObj texObj) {
        for (u32 i = 0; i < GX_MAX_TEXMAP; i++) {
            if (!texObj.IsValidTexObj(static_cast<GXTexMapID>(i))) {
                continue;
            }

            GXTexMapID id = static_cast<GXTexMapID>(i);
            const GXTexObj *pGXObj = texObj.GetTexObj(id);

            u8 mask = 1 << id;

            if (!(mValidFlag & mask) || !IsEqualTexObj(*pGXObj, mTexObj[id])) {
                mValidFlag |= mask;
                mTexObj[id] = *pGXObj;

                GXLoadTexObj(pGXObj, id);

                sTexCoordScale.UpdateTexMapSize(id, GXGetTexObjWidth(pGXObj), GXGetTexObjHeight(pGXObj));
            }
        }
    }

private:
    GXTexObj mTexObj[GX_MAX_TEXMAP]; // at 0x0
    u8 mValidFlag;                   // at 0x100
    u8 PADDING_0x101;                // at 0x101
    u8 PADDING_0x102;                // at 0x102
    u8 PADDING_0x103;                // at 0x103
};

TexState sTex ALIGN_DECL(32);

/******************************************************************************
 *
 * TlutState
 *
 ******************************************************************************/
class TlutState {
public:
    TlutState() : mFlag(0) {}

    void Invalidate() {
        mFlag = 0;
    }

    void LoadResTlutObj(const ResTlutObj tlutObj) {
        for (u32 i = 0; i < GX_TLUT8; i++) {
            if (!tlutObj.IsValidTlut(static_cast<GXTlut>(i))) {
                continue;
            }

            GXTlut id = static_cast<GXTlut>(i);
            const GXTlutObj *pGXObj = tlutObj.GetTlut(id);

            u16 mask = 1 << id;

            if (!(mFlag & mask) || !IsEqualTlutObj(*pGXObj, mTlutObj[id])) {
                mFlag |= mask;
                mTlutObj[id] = *pGXObj;

                GXLoadTlut(const_cast<GXTlutObj *>(pGXObj), id);
                sTex.Invalidate(static_cast<GXTexMapID>(id));
            }
        }
    }

private:
    GXTlutObj mTlutObj[GX_TLUT7 - GX_TLUT0 + 1]; // at 0x0
    u16 mFlag;                                   // at 0x60
    u16 PADDING_0x62;                            // at 0x62
};

TlutState sTlut ALIGN_DECL(32);

/******************************************************************************
 *
 * ShpState
 *
 ******************************************************************************/
class ShpState {
public:
    ShpState() {
        mCache.Clear();
    }

    void Invalidate() {
        mCache.Clear();
    }

    bool IsCacheEqual(const ResCacheVtxDescv &rOther) {
        if (rOther == mCache) {
            return true;
        }

        mCache = rOther;
        return false;
    }

private:
    ResCacheVtxDescv mCache; // at 0x0
};

ShpState sShp;

/******************************************************************************
 *
 * CurrMtxState
 *
 ******************************************************************************/
class CurrMtxState {
public:
    CurrMtxState() : mIsUpToDate(false) {}

    void Invalidate() {
        mIsUpToDate = false;
    }

    void SetCurrMtx() {
        if (mIsUpToDate) {
            return;
        }

        fifo::GDResetCurrentMtx();
        mIsUpToDate = true;
    }

private:
    bool mIsUpToDate; // at 0x0
};

CurrMtxState sCurrMtx;

/******************************************************************************
 *
 * PostTexMtxState
 *
 ******************************************************************************/
class PostTexMtxState {
public:
    PostTexMtxState() : mFlagIdentity(0) {}

    void Invalidate() {
        mFlagIdentity = 0;
    }

    bool IsIdentity(u32 id) const {
        return mFlagIdentity & (1 << id);
    }

    void SetIdentity(u32 id) {
        mFlagIdentity |= (1 << id);
    }

    void ResetIdentity(u32 id) {
        mFlagIdentity &= ~(1 << id);
    }

private:
    u32 mFlagIdentity; // at 0x0
};

PostTexMtxState sPostTexMtx;

/******************************************************************************
 *
 * PreTexMtxState
 *
 ******************************************************************************/
class PreTexMtxState {
public:
    PreTexMtxState() {
        Invalidate();
    }

    void Invalidate() {
        mType[0] = mType[1] = mType[2] = mType[3] = mType[4] = mType[5] = mType[6] = mType[7] =
            SCNDEPENDENT_TEXMTX_FUNCTYPE_TEXMTX_NOT_EXIST;
    }

    void SetFuncType(u32 id, ScnDependentTexMtxFuncType type) {
        mType[id] = type;
    }

    void SetCurrentMtx(int id) const {
        bool allIdent = true;
        u32 idArray[NUM_TEX_MTX];

        if (id < 0) {
            return;
        }

        for (u32 i = 0; i < NUM_TEX_MTX; i++) {
            if (mType[i] == SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_NRM) {
                idArray[i] = i * 3 + GX_TEXMTX0;
                fifo::GDLoadTexMtxImm3x3(*GetViewNrmMtxPtr(static_cast<u16>(id)), idArray[i]);
                allIdent = false;
            } else if (mType[i] == SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_POS) {
                idArray[i] = GX_PNMTX0;
                allIdent = false;
            } else {
                idArray[i] = GX_IDENTITY;
            }
        }

        if (allIdent) {
            sCurrMtx.SetCurrMtx();
        } else {
            fifo::GDSetCurrentMtx(idArray);
            sCurrMtx.Invalidate();
        }
    }

private:
    static const int NUM_TEX_MTX = (GX_TEXMTX8 - GX_TEXMTX0) / 3;

private:
    ScnDependentTexMtxFuncType mType[NUM_TEX_MTX]; // at 0x0
};

PreTexMtxState sPreTexMtxState;

/******************************************************************************
 *
 * TevState
 *
 ******************************************************************************/
class TevState {
public:
    TevState() : mpTevData(NULL) {}

    void Invalidate() {
        mpTevData = NULL;
    }

    bool IsTevEqual(const ResTev tev) {
        if (tev.ptr() == mpTevData) {
            return true;
        }

        mpTevData = tev.ptr();
        return false;
    }

private:
    const ResTevData *mpTevData; // at 0x0
};

TevState sTev;

/******************************************************************************
 *
 * PosNrmMtxArrayState
 *
 ******************************************************************************/
class PosNrmMtxArrayState {
public:
    PosNrmMtxArrayState() : mpViewPosMtxArray(NULL), mpViewNrmMtxArray(NULL), mpViewEnvTexMtxArray(NULL) {}

    void Invalidate() {
        mpViewPosMtxArray = NULL;
        mpViewNrmMtxArray = NULL;
        mpViewEnvTexMtxArray = NULL;
    }

    bool IsValid() const {
        return mpViewPosMtxArray != NULL;
    }

    void SetViewPosNrmMtxArray(
        const math::MTX34 *pViewPosMtxArray, const math::MTX33 *pViewNrmMtxArray, const math::MTX34 *pViewEnvTexMtxArray
    ) {
        mpViewPosMtxArray = pViewPosMtxArray;
        mpViewNrmMtxArray = pViewNrmMtxArray;
        mpViewEnvTexMtxArray = pViewEnvTexMtxArray;

        if (mpViewPosMtxArray != NULL) {
            GXSetArray(GX_POS_MTX_ARRAY, mpViewPosMtxArray, sizeof(math::MTX34));
        }

        if (mpViewNrmMtxArray != NULL) {
            GXSetArray(GX_NRM_MTX_ARRAY, mpViewNrmMtxArray, sizeof(math::MTX33));
        }

        if (mpViewEnvTexMtxArray != NULL) {
            GXSetArray(GX_TEX_MTX_ARRAY, mpViewEnvTexMtxArray, sizeof(math::MTX34));
        }
    }

    const math::MTX34 *GetViewPosMtxPtr(u32 id) const {
        if (mpViewPosMtxArray != NULL) {
            return &mpViewPosMtxArray[id];
        }

        return NULL;
    }

    const math::MTX33 *GetViewNrmMtxPtr(u32 id) const {
        if (mpViewNrmMtxArray != NULL) {
            return &mpViewNrmMtxArray[id];
        }

        static math::MTX33 m;

        detail::CalcViewNrmMtx(&m, GetViewPosMtxPtr(id));

        return &m;
    }

private:
    const math::MTX34 *mpViewPosMtxArray;    // at 0x0
    const math::MTX33 *mpViewNrmMtxArray;    // at 0x4
    const math::MTX34 *mpViewEnvTexMtxArray; // at 0x8
};

PosNrmMtxArrayState sPosNrmArrayState;

/******************************************************************************
 *
 * ScnDependentTexMtxFuncTable
 *
 ******************************************************************************/
class ScnDependentTexMtxFuncTable {
public:
    ScnDependentTexMtxFuncTable() {
        mTable[0].func = detail::ScnDependentMtxFunc::DefaultMapping;
        mTable[0].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_TEXCOORD;

        mTable[1].func = detail::ScnDependentMtxFunc::EnvironmentMapping;
        mTable[1].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_NRM;

        mTable[2].func = detail::ScnDependentMtxFunc::ProjectionMapping;
        mTable[2].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_POS;

        mTable[3].func = detail::ScnDependentMtxFunc::EnvironmentMapping;
        mTable[3].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_NRM;

        mTable[4].func = detail::ScnDependentMtxFunc::EnvironmentSpecularMapping;
        mTable[4].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_NRM;

        for (u32 i = 5; i < NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE; i++) {
            mTable[i].func = detail::ScnDependentMtxFunc::DefaultMapping;
            mTable[i].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_TEXCOORD;
        }
    }

    void SetFunc(u32 id, ScnDependentTexMtxFuncPtr func, ScnDependentTexMtxFuncType type) {
        if (id <= 4 || id >= NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE) {
            return;
        }

        if (func != NULL) {
            if (type >= MAX_SCNDEPENDENT_TEXMTX_FUNCTYPE) {
                type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_TEXCOORD;
            }

            mTable[id].func = func;
            mTable[id].type = type;
        } else {
            mTable[id].func = detail::ScnDependentMtxFunc::DefaultMapping;
            mTable[id].type = SCNDEPENDENT_TEXMTX_FUNCTYPE_SRC_TEXCOORD;
        }
    }

    bool GetFunc(u32 id, ScnDependentTexMtxFuncPtr *pFunc, ScnDependentTexMtxFuncType *pType) {
        if (id < NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE) {
            if (pFunc != NULL) {
                *pFunc = mTable[id].func;
            }

            if (pType != NULL) {
                *pType = mTable[id].type;
            }

            return true;
        }

        return false;
    }

    ScnDependentTexMtxFuncType GetFuncType(u32 id) {
        if (id >= NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE) {
            id = 0;
        }

        return mTable[id].type;
    }

    void Calc(u32 id, math::MTX34 *pMtx, s8 camRef, s8 lightRef) {
        if (id >= NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE) {
            id = 0;
        }

        if (camRef >= NUM_CAMERA) {
            camRef = -1;
        }

        if (lightRef >= NUM_LIGHT) {
            lightRef = -1;
        }

        mTable[id].func(pMtx, camRef, lightRef);
    }

private:
    struct {
        ScnDependentTexMtxFuncPtr func;         // at 0x0
        ScnDependentTexMtxFuncType type;        // at 0x4
    } mTable[NUM_SCNDEPENDENT_TEXMTX_FUNCTYPE]; // at 0x0
};

ScnDependentTexMtxFuncTable sScnDependentTexMtxFuncTable;

/******************************************************************************
 *
 * FogState
 *
 ******************************************************************************/
class FogState {
public:
    FogState() : mFlag(0), mCurrentFogIdx(-1) {
        for (u32 i = 0; i < NUM_FOG; i++) {
            Fog(&mFogData[i]).Init();
        }
    }

    void Invalidate() {
        mFlag = 0;
    }

    void SetFog(const Fog fog, int id) {
        if (id < 0 || id >= NUM_FOG || !fog.IsValid()) {
            return;
        }

        if (mCurrentFogIdx == id) {
            if (std::memcmp(&fog.ref(), &mFogData[id], sizeof(FogData)) == 0) {
                return;
            }

            Invalidate();
        }

        fog.CopyTo(&mFogData[id]);
    }

    void LoadFog(int id) {
        if (!(mFlag & FLAG_0) || !(mFlag & FLAG_1) || id != mCurrentFogIdx) {
            if (id < 0 || id >= NUM_FOG) {
                GXColor color = {0, 0, 0, 0};
                GXSetFog(GX_FOG_NONE, color, 0.0f, 0.0f, 0.0f, 0.0f);
            } else {
                Fog(&mFogData[id]).SetGP();
            }

            mFlag |= FLAG_0 | FLAG_1;
            mCurrentFogIdx = id;
        }
    }

private:
    enum Flag {
        FLAG_0 = (1 << 0),
        FLAG_1 = (1 << 1),
    };

private:
    u32 mFlag;                 // at 0x0
    int mCurrentFogIdx;        // at 0x4
    FogData mFogData[NUM_FOG]; // at 0x8
};

FogState sFogState;

/******************************************************************************
 *
 * LightState
 *
 ******************************************************************************/
class LightState {
public:
    LightState();

    void Invalidate();

    void SetLightSetting(const LightSetting &rSetting);
    const LightObj *GetLightObj(int id) const;
    void LoadLightSet(
        int id, u32 *pDiffColorMask, u32 *pDiffAlphaMask, u32 *pSpecColorMask, u32 *pSpecAlphaMask, AmbLightObj *pAmb
    );

private:
    LightSetting mLightSetting;                 // at 0x0
    int mCurrentLightSetIdx;                    // at 0x10
    u32 mCurrentMaskDiffColor;                  // at 0x14
    u32 mCurrentMaskDiffAlpha;                  // at 0x18
    u32 mCurrentMaskSpecColor;                  // at 0x1C
    u32 mCurrentMaskSpecAlpha;                  // at 0x20
    s8 mLoadedLightIdx[NUM_LIGHT_IN_LIGHT_SET]; // at 0x24
    LightObj mLightObj[NUM_LIGHT];              // at 0x2C
    AmbLightObj mAmbLightObj[NUM_LIGHT];        // at 0x222C
    LightSetData mLightSetData[NUM_LIGHT_SET];  // at 0x242C
};

LightState sLightState;

LightState::LightState() : mLightSetting(mLightObj, mAmbLightObj, NUM_LIGHT, mLightSetData, NUM_LIGHT_SET) {
    Invalidate();
}

void LightState::Invalidate() {
    mCurrentLightSetIdx = -1;

    mCurrentMaskDiffColor = 0;
    mCurrentMaskDiffAlpha = 0;

    mCurrentMaskSpecColor = 0;
    mCurrentMaskSpecAlpha = 0;

    mLoadedLightIdx[0] = mLoadedLightIdx[1] = mLoadedLightIdx[2] = mLoadedLightIdx[3] = mLoadedLightIdx[4] =
        mLoadedLightIdx[5] = mLoadedLightIdx[6] = mLoadedLightIdx[7] = -1;
}

void LightState::SetLightSetting(const LightSetting &rSetting) {
    mLightSetting.Import(rSetting);

    const math::MTX34 *pCamMtx = GetCameraMtxPtr();
    mLightSetting.ApplyViewMtx(*pCamMtx, rSetting.GetNumLightObj());
    Invalidate();

    u32 lightNum = mLightSetting.GetNumLightObj();

    u32 i = 0;
    u32 idx = 0;

    for (; i < G3DState::NUM_LIGHT_IN_LIGHT_SET && idx < lightNum; idx++) {
        const LightObj &rLight = mLightSetting.GetLightObjArray()[idx];
        if (!rLight.IsEnable()) {
            continue;
        }

        mLoadedLightIdx[i] = idx;

        GXLightID id = static_cast<GXLightID>(1 << i);
        GXLoadLightObjImm(rLight, id);

        i++;
    }
}

const LightObj *LightState::GetLightObj(int id) const {
    if (id >= 0 && id < NUM_LIGHT) {
        return &mLightObj[id];
    }

    return NULL;
}

void LightState::LoadLightSet(
    int id, u32 *pDiffColorMask, u32 *pDiffAlphaMask, u32 *pSpecColorMask, u32 *pSpecAlphaMask, AmbLightObj *pAmb
) {
    if (id < 0 || id >= NUM_LIGHT_SET) {
        if (pDiffColorMask != NULL) {
            *pDiffColorMask = 0;
        }

        if (pDiffAlphaMask != NULL) {
            *pDiffAlphaMask = 0;
        }

        if (pSpecColorMask != NULL) {
            *pSpecColorMask = 0;
        }

        if (pSpecAlphaMask != NULL) {
            *pSpecAlphaMask = 0;
        }

        if (pAmb != NULL) {
            pAmb->r = pAmb->g = pAmb->b = pAmb->a = 255;
        }

        return;
    }

    if (pAmb != NULL) {
        int ambId = mLightSetData[id].idxAmbLight;

        if (ambId < 0) {
            pAmb->r = pAmb->g = pAmb->b = pAmb->a = 255;
        } else {
            *pAmb = mAmbLightObj[ambId];
        }
    }

    if (mCurrentLightSetIdx == id) {
        if (pDiffColorMask != NULL) {
            *pDiffColorMask = mCurrentMaskDiffColor;
        }

        if (pDiffAlphaMask != NULL) {
            *pDiffAlphaMask = mCurrentMaskDiffAlpha;
        }

        if (pSpecColorMask != NULL) {
            *pSpecColorMask = mCurrentMaskSpecColor;
        }

        if (pSpecAlphaMask != NULL) {
            *pSpecAlphaMask = mCurrentMaskSpecAlpha;
        }

        return;
    }

    LightSetData &rData = mLightSetData[id];

    mCurrentMaskDiffColor = 0;
    mCurrentMaskDiffAlpha = 0;

    mCurrentMaskSpecColor = 0;
    mCurrentMaskSpecAlpha = 0;

    mCurrentLightSetIdx = id;

    for (u32 i = 0; i < NUM_LIGHT_IN_LIGHT_SET; i++) {
        s8 lightId = rData.idxLight[i];
        if (lightId < 0) {
            continue;
        }

        if (!mLightObj[lightId].IsEnable()) {
            continue;
        }

        s8 *pLoaded = std::find(mLoadedLightIdx, mLoadedLightIdx + NUM_LIGHT_IN_LIGHT_SET, lightId);

        GXLightID idFlag;

        if (pLoaded == mLoadedLightIdx + NUM_LIGHT_IN_LIGHT_SET) {
            pLoaded = std::find(mLoadedLightIdx, mLoadedLightIdx + NUM_LIGHT_IN_LIGHT_SET, -1);

            if (pLoaded != mLoadedLightIdx + NUM_LIGHT_IN_LIGHT_SET) {
                idFlag = static_cast<GXLightID>(1 << std::distance(mLoadedLightIdx, pLoaded));

                GXLoadLightObjImm(mLightObj[lightId], idFlag);
                *pLoaded = lightId;
            } else {
                u32 j;

                for (j = 0; j < NUM_LIGHT_IN_LIGHT_SET; j++) {
                    s8 *pResult =
                        std::find(rData.idxLight, rData.idxLight + NUM_LIGHT_IN_LIGHT_SET, mLoadedLightIdx[j]);

                    if (pResult == rData.idxLight + NUM_LIGHT_IN_LIGHT_SET) {
                        break;
                    }
                }

                idFlag = static_cast<GXLightID>(1 << j);

                GXLoadLightObjImm(mLightObj[lightId], idFlag);
                mLoadedLightIdx[j] = lightId;
            }

        } else {
            idFlag = static_cast<GXLightID>(1 << std::distance(mLoadedLightIdx, pLoaded));
        }

        if (mLightObj[lightId].IsSpecularLight()) {
            if (mLightObj[lightId].IsColorEnable()) {
                mCurrentMaskSpecColor |= idFlag;
            }

            if (mLightObj[lightId].IsAlphaEnable()) {
                mCurrentMaskSpecAlpha |= idFlag;
            }
        } else {
            if (mLightObj[lightId].IsColorEnable()) {
                mCurrentMaskDiffColor |= idFlag;
            }

            if (mLightObj[lightId].IsAlphaEnable()) {
                mCurrentMaskDiffAlpha |= idFlag;
            }
        }
    }

    if (pDiffColorMask != NULL) {
        *pDiffColorMask = mCurrentMaskDiffColor;
    }

    if (pDiffAlphaMask != NULL) {
        *pDiffAlphaMask = mCurrentMaskDiffAlpha;
    }

    if (pSpecColorMask != NULL) {
        *pSpecColorMask = mCurrentMaskSpecColor;
    }

    if (pSpecAlphaMask != NULL) {
        *pSpecAlphaMask = mCurrentMaskSpecAlpha;
    }
}

/******************************************************************************
 *
 * CameraMtxState
 *
 ******************************************************************************/
class CameraMtxState {
public:
    CameraMtxState();

    void SetCameraProjMtx(const Camera &rCam, int id, bool view);

    const math::MTX34 *GetInvCameraMtxPtr() const {
        if (!(mFlag & FLAG_INV_MTX_READY)) {
            math::MTX34Inv(&mInvCurrentCameraMtx, GetCameraMtxPtr());
            mFlag |= FLAG_INV_MTX_READY;
        }

        return &mInvCurrentCameraMtx;
    }

    const math::MTX34 *GetCameraMtxPtr() const {
        return &mCameraMtx[mViewIdx];
    }
    const math::MTX34 *GetCameraMtxPtr(int id) const {
        if (id < NUM_CAMERA && id >= 0) {
            return &mCameraMtx[id];
        }

        return NULL;
    }

    const math::MTX44 *GetProjectionMtxPtr() const {
        return &mProjMtx[mViewIdx];
    }
    const math::MTX44 *GetProjectionMtxPtr(int id) const {
        if (id < NUM_CAMERA && id >= 0) {
            return &mProjMtx[id];
        }

        return NULL;
    }

    const math::MTX34 *GetProjectionTexMtxPtr() const {
        return &mProjTexMtx[mViewIdx];
    }
    const math::MTX34 *GetProjectionTexMtxPtr(int id) const {
        if (id < NUM_CAMERA && id >= 0) {
            return &mProjTexMtx[id];
        }

        return NULL;
    }

    const math::MTX34 *GetEnvironmentTexMtxPtr() const {
        return &mEnvTexMtx[mViewIdx];
    }

private:
    enum Flag {
        FLAG_INV_MTX_READY = (1 << 0),
    };

private:
    mutable u16 mFlag;                        // at 0x0
    u16 mViewIdx;                             // at 0x2
    mutable math::MTX34 mInvCurrentCameraMtx; // at 0x4
    math::MTX34 mCameraMtx[NUM_CAMERA];       // at 0x34
    math::MTX44 mProjMtx[NUM_CAMERA];         // at 0x634
    math::MTX34 mProjTexMtx[NUM_CAMERA];      // at 0xE34
    math::MTX34 mEnvTexMtx[NUM_CAMERA];       // at 0x1434
};

CameraMtxState sCameraMtxState;

CameraMtxState::CameraMtxState() : mFlag(0), mViewIdx(0) {
    math::MTX34Identity(&mInvCurrentCameraMtx);

    for (u32 i = 0; i < NUM_CAMERA; i++) {
        math::MTX34Identity(&mCameraMtx[i]);
        math::MTX44Identity(&mProjMtx[i]);
        math::MTX34Identity(&mProjTexMtx[i]);
        math::MTX34Identity(&mEnvTexMtx[i]);
    }
}

void CameraMtxState::SetCameraProjMtx(const Camera &rCam, int id, bool view) {
    if (id >= NUM_CAMERA || id < 0) {
        return;
    }

    rCam.GetCameraMtx(&mCameraMtx[id]);
    rCam.GetProjectionMtx(&mProjMtx[id]);
    rCam.GetProjectionTexMtx(&mProjTexMtx[id]);
    rCam.GetEnvironmentTexMtx(&mEnvTexMtx[id]);

    if (view) {
        mViewIdx = static_cast<u16>(id);
        mFlag &= ~FLAG_INV_MTX_READY;
    }
}

/******************************************************************************
 *
 * Render mode
 *
 ******************************************************************************/
GXRenderModeObj sRenderMode;

/******************************************************************************
 *
 * Misc
 *
 ******************************************************************************/
class Misc {
public:
    Misc() : mValidFlag(0), mbZCompLoc(FALSE) {}

    void Invalidate() {
        InvalidateZCompLoc();
    }

    void InvalidateZCompLoc() {
        mValidFlag &= ~FLAG_ZCOMPLOC;
    }

    void GXSetZCompLoc(GXBool beforeTex) {
        if (!(mValidFlag & FLAG_ZCOMPLOC) || mbZCompLoc != beforeTex) {
            mValidFlag |= FLAG_ZCOMPLOC;
            mbZCompLoc = beforeTex;

            ::GXSetZCompLoc(beforeTex);
            sSyncGX.Set();
        }
    }

private:
    enum ValidFlag {
        FLAG_ZCOMPLOC = (1 << 0),
    };

private:
    u32 mValidFlag;    // at 0x0
    GXBool mbZCompLoc; // at 0x4
};

Misc sMisc;

} // namespace

/******************************************************************************
 *
 * G3DState
 *
 ******************************************************************************/

void LoadResMatMisc(const ResMatMisc misc) {
    if (!misc.IsValid()) {
        return;
    }

    sMisc.GXSetZCompLoc(misc.GXGetZCompLoc());
}

void LoadResTexObj(const ResTexObj texObj) {
    if (!texObj.IsValid()) {
        return;
    }

    sTex.LoadResTexObj(texObj);
    sSyncGX.Set();
}

void LoadResTlutObj(const ResTlutObj tlutObj) {
    if (!tlutObj.IsValid()) {
        return;
    }

    sTlut.LoadResTlutObj(tlutObj);
    sSyncGX.Set();
}

void LoadResGenMode(const ResGenMode mode) {
    if (!mode.IsValid()) {
        return;
    }

    sGenMode2.SetResGenMode(mode);
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev: definicion C reemplazada por asm (ver abajo)


void LoadResMatPix(const ResMatPix pix) {
    if (!pix.IsValid()) {
        return;
    }

    sGenMode2.LoadBP();
    pix.CallDisplayList(sSyncGX.Get());
}

void LoadResMatTevColor(const ResMatTevColor color) {
    if (!color.IsValid()) {
        return;
    }

    sGenMode2.LoadBP();
    color.CallDisplayList(sSyncGX.Get());
}

void LoadResMatIndMtxAndScale(const ResMatIndMtxAndScale ind) {
    if (!ind.IsValid()) {
        return;
    }

    sGenMode2.LoadBP();
    ind.CallDisplayList(sGenMode2.GXGetNumIndStages(), sSyncGX.Get());
}

void LoadResMatIndMtxAndScale(const ResMatIndMtxAndScale ind, IndMtxOp &rOp) {
    if (!ind.IsValid()) {
        return;
    }

    LoadResMatIndMtxAndScale(ind);

    IndTexMtxInfo info(ind);
    rOp(&info);
    info.FifoSend();
}

// LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb: definicion C reemplazada por asm (ver abajo)


// LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen: definicion C reemplazada por asm (ver abajo)


// LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt: definicion C reemplazada por asm (ver abajo)


// LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp: definicion C reemplazada por asm (ver abajo)


// LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34: definicion C reemplazada por asm (ver abajo)


void SetViewPosNrmMtxArray(
    const math::MTX34 *pViewPosMtxArray, const math::MTX33 *pViewNrmMtxArray, const math::MTX34 *pViewEnvTexMtxArray
) {
    sPosNrmArrayState.SetViewPosNrmMtxArray(pViewPosMtxArray, pViewNrmMtxArray, pViewEnvTexMtxArray);
}

const math::MTX33 *GetViewNrmMtxPtr(u32 id) {
    return sPosNrmArrayState.GetViewNrmMtxPtr(id);
}

// SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType: definicion C reemplazada por asm (ver abajo)


bool GetScnDependentTexMtxFunc(u32 id, ScnDependentTexMtxFuncPtr *pFunc, ScnDependentTexMtxFuncType *pType) {
    return sScnDependentTexMtxFuncTable.GetFunc(id, pFunc, pType);
}
namespace {

IndMtxOpStd IndMtxOpDefault;
IndMtxOp *pG3DStateIndMtxOp = &IndMtxOpDefault;

} // namespace

IndMtxOp *GetIndMtxOp() {
    return pG3DStateIndMtxOp;
}

void SetFog(const Fog fog, int id) {
    sFogState.SetFog(fog, id);
}

void LoadFog(int id) {
    sFogState.LoadFog(id);
}

void SetLightSetting(const LightSetting &rSetting) {
    sLightState.SetLightSetting(rSetting);
}

// GetLightObj__Q34nw4r3g3d8G3DStateFi: definicion C reemplazada por asm (ver abajo)


void LoadLightSet(
    int id, u32 *pDiffColorMask, u32 *pDiffAlphaMask, u32 *pSpecColorMask, u32 *pSpecAlphaMask, AmbLightObj *pAmb
) {
    sLightState.LoadLightSet(id, pDiffColorMask, pDiffAlphaMask, pSpecColorMask, pSpecAlphaMask, pAmb);
}

void LoadLightSet(int id, u32 *pDiffMask, u32 *pSpecMask, AmbLightObj *pAmb) {
    u32 diffAlphaMask, specAlphaMask;

    sLightState.LoadLightSet(id, pDiffMask, &diffAlphaMask, pSpecMask, &specAlphaMask, pAmb);

    if (pDiffMask != NULL) {
        *pDiffMask |= diffAlphaMask;
    }

    if (pSpecMask != NULL) {
        *pSpecMask |= specAlphaMask;
    }
}

// SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib: definicion C reemplazada por asm (ver abajo)


const math::MTX34 *GetCameraMtxPtr() {
    return sCameraMtxState.GetCameraMtxPtr();
}

const math::MTX34 *GetInvCameraMtxPtr() {
    return sCameraMtxState.GetInvCameraMtxPtr();
}

const math::MTX34 *GetCameraMtxPtr(int id) {
    return sCameraMtxState.GetCameraMtxPtr(id);
}

const math::MTX34 *GetProjectionTexMtxPtr() {
    return sCameraMtxState.GetProjectionTexMtxPtr();
}

const math::MTX34 *GetProjectionTexMtxPtr(int id) {
    return sCameraMtxState.GetProjectionTexMtxPtr(id);
}

const math::MTX34 *GetEnvironmentTexMtxPtr() {
    return sCameraMtxState.GetEnvironmentTexMtxPtr();
}

// SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj: definicion C reemplazada por asm (ver abajo)


const GXRenderModeObj *GetRenderModeObj() {
    return &sRenderMode;
}

void Invalidate(u32 flag) {
    if (flag & INVALIDATE_TEX) {
        sTex.Invalidate();
        sTexCoordScale.Invalidate();
    }

    if (flag & INVALIDATE_TLUT) {
        sTlut.Invalidate();
    }

    if (flag & INVALIDATE_TEV) {
        sTexCoordScale.Invalidate();
        sTev.Invalidate();
    }

    if (flag & INVALIDATE_GENMODE) {
        sGenMode2.Invalidate();
    }

    if (flag & INVALIDATE_SHP) {
        sShp.Invalidate();
    }

    if (flag & INVALIDATE_CURRMTX) {
        sCurrMtx.Invalidate();
    }

    if (flag & INVALIDATE_TEXMTX) {
        sPreTexMtxState.Invalidate();
        sPostTexMtx.Invalidate();
    }

    if (flag & INVALIDATE_MISC) {
        sMisc.Invalidate();
    }

    if (flag & INVALIDATE_FOG) {
        sFogState.Invalidate();
    }

    if (flag & INVALIDATE_LIGHT) {
        sLightState.Invalidate();
    }

    if (flag & INVALIDATE_POSMTX) {
        sPosNrmArrayState.Invalidate();
    }

    sSyncGX.Invalidate();
}

/******************************************************************************
 *
 * IndMtxOpStd
 *
 ******************************************************************************/
IndMtxOpStd::IndMtxOpStd() {
    math::MTX34Identity(&mIndMtx[GX_ITM_0 - 1]);
    math::MTX34Identity(&mIndMtx[GX_ITM_1 - 1]);
    math::MTX34Identity(&mIndMtx[GX_ITM_2 - 1]);

    mIsValidMtx[GX_ITM_0 - 1] = mIsValidMtx[GX_ITM_1 - 1] = mIsValidMtx[GX_ITM_2 - 1] = false;

    PADDING_0x7 = 0;
}

// SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod: definicion C reemplazada por asm (ver abajo)


void IndMtxOpStd::Reset() {
    math::MTX34Identity(&mIndMtx[GX_ITM_0 - 1]);
    math::MTX34Identity(&mIndMtx[GX_ITM_1 - 1]);
    math::MTX34Identity(&mIndMtx[GX_ITM_2 - 1]);

    mIsValidMtx[GX_ITM_0 - 1] = mIsValidMtx[GX_ITM_1 - 1] = mIsValidMtx[GX_ITM_2 - 1] = false;
}

void IndMtxOpStd::operator()(IndTexMtxInfo *pInfo) {
    if (mIsValidMtx[GX_ITM_0 - 1]) {
        pInfo->SetMtx(GX_ITM_0, mIndMtx[GX_ITM_0 - 1]);
    }

    if (mIsValidMtx[GX_ITM_1 - 1]) {
        pInfo->SetMtx(GX_ITM_1, mIndMtx[GX_ITM_1 - 1]);
    }

    if (mIsValidMtx[GX_ITM_2 - 1]) {
        pInfo->SetMtx(GX_ITM_2, mIndMtx[GX_ITM_2 - 1]);
    }
}

} // namespace G3DState
} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C4C0;
extern "C" float lbl_8049D9A8;
extern "C" float lbl_8049D9AC;
extern "C" float lbl_8049D9B0;
extern "C" float lbl_8049D9B4;
extern "C" float lbl_8049D9B8;
extern "C" float lbl_8049D9C0;
extern "C" float lbl_804A1D58;
extern "C" float lbl_804A1D5C;
extern "C" float lbl_804A1D60;
extern "C" float lbl_804A1D64;
extern "C" float lbl_804A1D68;
extern "C" float lbl_804A1D6C;
extern "C" float lbl_804A1D70;
extern "C" float lbl_804A1D78;
extern "C" u8 lbl_8033C630[];
extern "C" u8 lbl_80361278[];
extern "C" u8 lbl_803E65E0[];
extern "C" u8 lbl_803E65EC[];
extern "C" u8 lbl_803E6660[];
extern "C" u8 lbl_803E6780[];
extern "C" u8 lbl_803E67F0[];
extern "C" u8 lbl_803E6820[];
extern "C" u8 lbl_803E7020[];
extern "C" u8 lbl_803E7634[];
extern "C" u8 lbl_803EA060[];
extern "C" u8 lbl_803EBA94[];
extern "C" u8 lbl_803EBB78[];
extern "C" void ApplyViewMtx__Q34nw4r3g3d12LightSettingFRCQ34nw4r4math5MTX34Ul();
extern "C" void CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34();
extern "C" void CallDisplayList__Q34nw4r3g3d17ResMatTexCoordGenCFUcb();
extern "C" void CallDisplayList__Q34nw4r3g3d20ResMatIndMtxAndScaleCFUcb();
extern "C" void CallPrePrimitiveDisplayList__Q34nw4r3g3d6ResShpCFbb();
extern "C" void CallPrimitiveDisplayList__Q34nw4r3g3d6ResShpCFb();
extern "C" void CopyTo__Q34nw4r3g3d3FogCFPv();
extern "C" void DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc();
extern "C" void EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc();
extern "C" void EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc();
extern "C" void FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv();
extern "C" void GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul();
extern "C" void GDResetCurrentMtx__Q34nw4r3g3d4fifoFv();
extern "C" void GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl();
extern "C" void GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode();
extern "C" void GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34();
extern "C" void GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc();
extern "C" void GXGetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleCF14_GXIndTexMtxIDPQ34nw4r4math5MTX34();
extern "C" void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3();
extern "C" void GetLightObj__Q34nw4r3g3d8G3DStateFi();
extern "C" void GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3();
extern "C" void GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44();
extern "C" void GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void GetTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID();
extern "C" void GetTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut();
extern "C" void Import__Q34nw4r3g3d12LightSettingFRCQ34nw4r3g3d12LightSetting();
extern "C" void Init__Q34nw4r3g3d3FogFv();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void IsValidTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID();
extern "C" void IsValidTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut();
extern "C" void LoadFog__Q34nw4r3g3d8G3DStateFi();
extern "C" void LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb();
extern "C" void LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp();
extern "C" void LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen();
extern "C" void LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp();
extern "C" void LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34();
extern "C" void LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev();
extern "C" void LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj();
extern "C" void LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt();
extern "C" void LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj();
extern "C" void MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34();
extern "C" void MTX44Identity__Q24nw4r4mathFPQ34nw4r4math5MTX44();
extern "C" void ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc();
extern "C" void SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib();
extern "C" void SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi();
extern "C" void SetGP__Q34nw4r3g3d3FogCFv();
extern "C" void SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod();
extern "C" void SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj();
extern "C" void SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void __cl__Q44nw4r3g3d8G3DState11IndMtxOpStdFPQ44nw4r3g3d8G3DState13IndTexMtxInfo();
extern "C" void __construct_array();
extern "C" void __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl();
extern "C" void __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData();
extern "C" void __ct__Q34nw4r3g3d8LightObjFv();
extern "C" void __destroy_arr();
extern "C" void __dt__Q34nw4r3g3d8LightObjFv();
extern "C" void __dt__Q44nw4r3g3d8G3DState11IndMtxOpStdFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_14();
extern "C" void _restgpr_18();
extern "C" void _restgpr_20();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_18();
extern "C" void _savegpr_20();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_801D2798();
extern "C" void fn_801E03FC();
extern "C" void fn_801E04F0();
extern "C" void fn_801E0908();
extern "C" void fn_801E292C();
extern "C" void fn_801E3034();
extern "C" void fn_801E32C8();
extern "C" void fn_801E6240();
extern "C" void fn_8030DE44();
extern "C" void fn_8030DEEC();
extern "C" void fn_8030DF28();

// asm_to_cpp: EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
extern "C" asm void EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    beq lbl_801DFD9C
    extsb r0, r4
    cmpwi cr1, r0, 0x0
    blt cr1, lbl_801DFAB0
    cmpwi r0, 0x20
    bge lbl_801DFAB0
    bge lbl_801DFA2C
    blt cr1, lbl_801DFA2C
    mulli r0, r0, 0x30
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    add r3, r3, r0
    addi r29, r3, 0x34
    b lbl_801DFA30
lbl_801DFA2C:
    li r29, 0x0
lbl_801DFA30:
    lis r30, lbl_803EA060@ha
    lhz r0, lbl_803EA060@l(r30)
    clrlwi. r0, r0, 31
    bne lbl_801DFA68
    addi r3, r30, lbl_803EA060@l
    lhz r0, 0x2(r3)
    addi r4, r3, 0x4
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x34
    bl PSMTXInverse
    lhz r0, lbl_803EA060@l(r30)
    ori r0, r0, 0x1
    sth r0, lbl_803EA060@l(r30)
lbl_801DFA68:
    lis r30, lbl_803EA060@ha
    mr r3, r29
    addi r30, r30, lbl_803EA060@l
    mr r5, r31
    addi r4, r30, 0x4
    bl PSMTXConcat
    lfs f0, lbl_804A1D5C
    mr r4, r31
    mr r5, r31
    stfs f0, 0x2c(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0xc(r31)
    lhz r0, 0x2(r30)
    mulli r0, r0, 0x30
    add r3, r30, r0
    addi r3, r3, 0x1434
    bl PSMTXConcat
    b lbl_801DFD9C
lbl_801DFAB0:
    extsb r0, r5
    cmpwi cr1, r0, 0x0
    blt cr1, lbl_801DFD7C
    cmpwi r0, 0x80
    bge lbl_801DFD7C
    blt cr1, lbl_801DFAE4
    bge lbl_801DFAE4
    mulli r0, r0, 0x44
    lis r3, lbl_803E7634@ha
    addi r3, r3, lbl_803E7634@l
    add r3, r3, r0
    addi r3, r3, 0x2c
    b lbl_801DFAE8
lbl_801DFAE4:
    li r3, 0x0
lbl_801DFAE8:
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801DFD7C
    extsb. r0, r5
    blt lbl_801DFB1C
    cmpwi r0, 0x80
    bge lbl_801DFB1C
    mulli r0, r0, 0x44
    lis r3, lbl_803E7634@ha
    addi r3, r3, lbl_803E7634@l
    add r3, r3, r0
    addi r29, r3, 0x2c
    b lbl_801DFB20
lbl_801DFB1C:
    li r29, 0x0
lbl_801DFB20:
    mr r3, r29
    addi r4, r1, 0x38
    bl GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lis r30, lbl_803EA060@ha
    lhz r0, lbl_803EA060@l(r30)
    clrlwi. r0, r0, 31
    bne lbl_801DFB64
    addi r3, r30, lbl_803EA060@l
    lhz r0, 0x2(r3)
    addi r4, r3, 0x4
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x34
    bl PSMTXInverse
    lhz r0, lbl_803EA060@l(r30)
    ori r0, r0, 0x1
    sth r0, lbl_803EA060@l(r30)
lbl_801DFB64:
    lwz r5, 0x0(r29)
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    li r4, 0x0
    clrlwi. r0, r5, 31
    addi r30, r3, 0x4
    bne lbl_801DFB8C
    rlwinm. r0, r5, 0, 30, 30
    bne lbl_801DFB8C
    li r4, 0x1
lbl_801DFB8C:
    cmpwi r4, 0x0
    bne lbl_801DFBBC
    lfs f1, lbl_804A1D5C
    lfs f0, 0x38(r1)
    fcmpu cr0, f1, f0
    bne lbl_801DFC3C
    lfs f0, 0x3c(r1)
    fcmpu cr0, f1, f0
    bne lbl_801DFC3C
    lfs f0, 0x40(r1)
    fcmpu cr0, f1, f0
    bne lbl_801DFC3C
lbl_801DFBBC:
    mr r3, r29
    addi r4, r1, 0x38
    bl GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    addi r3, r1, 0x38
    mr r4, r30
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f0, 0x38(r1)
    lfs f2, 0x40(r1)
    fneg f6, f0
    lfs f1, 0x3c(r1)
    fneg f4, f2
    lfs f0, lbl_804A1D5C
    fneg f5, f1
    frsp f3, f6
    frsp f1, f4
    stfs f6, 0x8(r1)
    frsp f2, f5
    fcmpu cr0, f0, f3
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    bne lbl_801DFC4C
    fcmpu cr0, f0, f2
    bne lbl_801DFC4C
    fcmpu cr0, f0, f1
    bne lbl_801DFC4C
    lfs f0, lbl_804A1D60
    stfs f0, 0x3c(r1)
    b lbl_801DFC4C
lbl_801DFC3C:
    addi r3, r1, 0x38
    mr r4, r30
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801DFC4C:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_8030DE44
    lfs f1, 0x38(r1)
    lfs f0, lbl_804A1D64
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801DFCB0
    lfs f1, 0x40(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801DFCB0
    lfs f1, lbl_804A1D5C
    lfs f0, 0x3c(r1)
    stfs f1, 0x30(r1)
    fcmpo cr0, f0, f1
    stfs f1, 0x2c(r1)
    opword 0x4C401382
    bne lbl_801DFCA4
    lfs f0, lbl_804A1D60
    stfs f0, 0x34(r1)
    b lbl_801DFCC4
lbl_801DFCA4:
    lfs f0, lbl_804A1D68
    stfs f0, 0x34(r1)
    b lbl_801DFCC4
lbl_801DFCB0:
    lfs f1, lbl_804A1D5C
    lfs f0, lbl_804A1D68
    stfs f1, 0x34(r1)
    stfs f1, 0x2c(r1)
    stfs f0, 0x30(r1)
lbl_801DFCC4:
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8030DEEC
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x14
    bl fn_8030DEEC
    lfs f0, 0x20(r1)
    mr r3, r31
    mr r4, r30
    mr r5, r31
    stfs f0, 0x0(r31)
    lfs f0, 0x24(r1)
    stfs f0, 0x4(r31)
    lfs f0, 0x28(r1)
    stfs f0, 0x8(r31)
    lfs f0, 0x14(r1)
    stfs f0, 0x10(r31)
    lfs f0, 0x18(r1)
    stfs f0, 0x14(r31)
    lfs f0, 0x1c(r1)
    stfs f0, 0x18(r31)
    lfs f0, 0x38(r1)
    fneg f0, f0
    stfs f0, 0x20(r31)
    lfs f0, 0x3c(r1)
    fneg f0, f0
    stfs f0, 0x24(r31)
    lfs f0, 0x40(r1)
    fneg f0, f0
    stfs f0, 0x28(r31)
    bl PSMTXConcat
    lfs f0, lbl_804A1D5C
    lis r3, lbl_8033C630@ha
    mr r4, r31
    mr r5, r31
    stfs f0, 0x2c(r31)
    addi r3, r3, lbl_8033C630@l
    stfs f0, 0x1c(r31)
    stfs f0, 0xc(r31)
    bl PSMTXConcat
    b lbl_801DFD9C
lbl_801DFD7C:
    lis r3, lbl_803EA060@ha
    mr r4, r31
    addi r3, r3, lbl_803EA060@l
    lhz r0, 0x2(r3)
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x1434
    bl PSMTXCopy
lbl_801DFD9C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
extern "C" asm void ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    beq lbl_801DFEC4
    extsb r0, r4
    cmpwi cr1, r0, 0x0
    blt cr1, lbl_801DFEA4
    cmpwi r0, 0x20
    bge lbl_801DFEA4
    bge lbl_801DFE18
    blt cr1, lbl_801DFE18
    mulli r0, r0, 0x30
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    add r3, r3, r0
    addi r29, r3, 0x34
    b lbl_801DFE1C
lbl_801DFE18:
    li r29, 0x0
lbl_801DFE1C:
    lis r30, lbl_803EA060@ha
    lhz r0, lbl_803EA060@l(r30)
    clrlwi. r0, r0, 31
    bne lbl_801DFE54
    addi r3, r30, lbl_803EA060@l
    lhz r0, 0x2(r3)
    addi r4, r3, 0x4
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x34
    bl PSMTXInverse
    lhz r0, lbl_803EA060@l(r30)
    ori r0, r0, 0x1
    sth r0, lbl_803EA060@l(r30)
lbl_801DFE54:
    lis r30, lbl_803EA060@ha
    mr r3, r29
    addi r30, r30, lbl_803EA060@l
    mr r5, r31
    addi r4, r30, 0x4
    bl PSMTXConcat
    extsb r0, r28
    cmpwi r0, 0x20
    bge lbl_801DFE90
    cmpwi r0, 0x0
    blt lbl_801DFE90
    mulli r0, r0, 0x30
    add r3, r30, r0
    addi r3, r3, 0xe34
    b lbl_801DFE94
lbl_801DFE90:
    li r3, 0x0
lbl_801DFE94:
    mr r4, r31
    mr r5, r31
    bl PSMTXConcat
    b lbl_801DFEC4
lbl_801DFEA4:
    lis r3, lbl_803EA060@ha
    mr r4, r31
    addi r3, r3, lbl_803EA060@l
    lhz r0, 0x2(r3)
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0xe34
    bl PSMTXCopy
lbl_801DFEC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
extern "C" asm void EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r5
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    beq lbl_801E0310
    lis r31, lbl_803EA060@ha
    addi r4, r31, lbl_803EA060@l
    lhz r0, lbl_803EA060@l(r31)
    lhz r3, 0x2(r4)
    clrlwi. r0, r0, 31
    mulli r0, r3, 0x30
    add r3, r4, r0
    addi r3, r3, 0x34
    lfs f2, 0x20(r3)
    lfs f1, 0x24(r3)
    lfs f0, 0x28(r3)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x58(r1)
    bne lbl_801DFF70
    addi r4, r4, 0x4
    bl PSMTXInverse
    lhz r0, lbl_803EA060@l(r31)
    ori r0, r0, 0x1
    sth r0, lbl_803EA060@l(r31)
lbl_801DFF70:
    extsb r0, r30
    lis r3, lbl_803EA060@ha
    cmpwi cr1, r0, 0x0
    addi r3, r3, lbl_803EA060@l
    addi r31, r3, 0x4
    blt cr1, lbl_801E01A0
    cmpwi r0, 0x80
    bge lbl_801E01A0
    blt cr1, lbl_801DFFB0
    bge lbl_801DFFB0
    mulli r0, r0, 0x44
    lis r3, lbl_803E7634@ha
    addi r3, r3, lbl_803E7634@l
    add r3, r3, r0
    addi r3, r3, 0x2c
    b lbl_801DFFB4
lbl_801DFFB0:
    li r3, 0x0
lbl_801DFFB4:
    lwz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E01A0
    extsb. r0, r30
    blt lbl_801DFFE8
    cmpwi r0, 0x80
    bge lbl_801DFFE8
    mulli r0, r0, 0x44
    lis r3, lbl_803E7634@ha
    addi r3, r3, lbl_803E7634@l
    add r3, r3, r0
    addi r29, r3, 0x2c
    b lbl_801DFFEC
lbl_801DFFE8:
    li r29, 0x0
lbl_801DFFEC:
    mr r3, r29
    addi r4, r1, 0x44
    bl GetLightDir__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    lwz r4, 0x0(r29)
    li r3, 0x0
    clrlwi. r0, r4, 31
    bne lbl_801E0014
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_801E0014
    li r3, 0x1
lbl_801E0014:
    cmpwi r3, 0x0
    bne lbl_801E0044
    lfs f1, lbl_804A1D5C
    lfs f0, 0x44(r1)
    fcmpu cr0, f1, f0
    bne lbl_801E00C4
    lfs f0, 0x48(r1)
    fcmpu cr0, f1, f0
    bne lbl_801E00C4
    lfs f0, 0x4c(r1)
    fcmpu cr0, f1, f0
    bne lbl_801E00C4
lbl_801E0044:
    mr r3, r29
    addi r4, r1, 0x44
    bl GetLightPos__Q34nw4r3g3d8LightObjCFPQ34nw4r4math4VEC3
    addi r3, r1, 0x44
    mr r4, r31
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f0, 0x44(r1)
    lfs f2, 0x4c(r1)
    fneg f6, f0
    lfs f1, 0x48(r1)
    fneg f4, f2
    lfs f0, lbl_804A1D5C
    fneg f5, f1
    frsp f3, f6
    frsp f1, f4
    stfs f6, 0x14(r1)
    frsp f2, f5
    fcmpu cr0, f0, f3
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x44(r1)
    stfs f2, 0x48(r1)
    stfs f1, 0x4c(r1)
    bne lbl_801E00D4
    fcmpu cr0, f0, f2
    bne lbl_801E00D4
    fcmpu cr0, f0, f1
    bne lbl_801E00D4
    lfs f0, lbl_804A1D60
    stfs f0, 0x48(r1)
    b lbl_801E00D4
lbl_801E00C4:
    addi r3, r1, 0x44
    mr r4, r31
    mr r5, r3
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801E00D4:
    lwz r0, 0x0(r29)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_801E00F4
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    addi r5, r1, 0x68
    bl fn_8030DF28
    b lbl_801E0130
lbl_801E00F4:
    lfs f0, 0x4c(r1)
    lfs f1, 0x48(r1)
    fneg f2, f0
    lfs f0, 0x44(r1)
    fneg f3, f1
    fneg f4, f0
    frsp f0, f2
    stfs f2, 0x10(r1)
    frsp f1, f3
    frsp f2, f4
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x68(r1)
    stfs f1, 0x6c(r1)
    stfs f0, 0x70(r1)
lbl_801E0130:
    lfs f1, 0x68(r1)
    lfs f0, lbl_804A1D64
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801E0188
    lfs f1, 0x70(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801E0188
    lfs f1, lbl_804A1D5C
    lfs f0, 0x6c(r1)
    stfs f1, 0x60(r1)
    fcmpo cr0, f0, f1
    stfs f1, 0x5c(r1)
    opword 0x4C401382
    bne lbl_801E017C
    lfs f0, lbl_804A1D60
    stfs f0, 0x64(r1)
    b lbl_801E024C
lbl_801E017C:
    lfs f0, lbl_804A1D68
    stfs f0, 0x64(r1)
    b lbl_801E024C
lbl_801E0188:
    lfs f1, lbl_804A1D5C
    lfs f0, lbl_804A1D68
    stfs f1, 0x64(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x60(r1)
    b lbl_801E024C
lbl_801E01A0:
    extsb r0, r29
    cmpwi cr1, r0, 0x0
    blt cr1, lbl_801E0228
    cmpwi r0, 0x20
    bge lbl_801E0228
    bge lbl_801E01D4
    blt cr1, lbl_801E01D4
    mulli r0, r0, 0x30
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    add r3, r3, r0
    addi r6, r3, 0x34
    b lbl_801E01D8
lbl_801E01D4:
    li r6, 0x0
lbl_801E01D8:
    lfs f0, 0x10(r6)
    addi r3, r1, 0x50
    addi r4, r1, 0x38
    addi r5, r1, 0x68
    stfs f0, 0x5c(r1)
    lfs f0, 0x14(r6)
    stfs f0, 0x60(r1)
    lfs f0, 0x18(r6)
    stfs f0, 0x64(r1)
    lfs f2, 0x28(r6)
    lfs f1, 0x24(r6)
    lfs f0, 0x20(r6)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x40(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    bl fn_8030DF28
    b lbl_801E024C
lbl_801E0228:
    lis r3, lbl_803EA060@ha
    mr r4, r28
    addi r3, r3, lbl_803EA060@l
    lhz r0, 0x2(r3)
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x1434
    bl PSMTXCopy
    b lbl_801E0310
lbl_801E024C:
    addi r3, r1, 0x68
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x5c
    addi r4, r1, 0x68
    addi r5, r1, 0x2c
    bl fn_8030DEEC
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x68
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_8030DEEC
    lfs f0, 0x2c(r1)
    mr r3, r28
    mr r4, r31
    mr r5, r28
    stfs f0, 0x0(r28)
    lfs f0, 0x30(r1)
    stfs f0, 0x4(r28)
    lfs f0, 0x34(r1)
    stfs f0, 0x8(r28)
    lfs f0, 0x20(r1)
    stfs f0, 0x10(r28)
    lfs f0, 0x24(r1)
    stfs f0, 0x14(r28)
    lfs f0, 0x28(r1)
    stfs f0, 0x18(r28)
    lfs f0, 0x68(r1)
    stfs f0, 0x20(r28)
    lfs f0, 0x6c(r1)
    stfs f0, 0x24(r28)
    lfs f0, 0x70(r1)
    stfs f0, 0x28(r28)
    bl PSMTXConcat
    lfs f0, lbl_804A1D5C
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    mr r4, r28
    stfs f0, 0x2c(r28)
    mr r5, r28
    stfs f0, 0x1c(r28)
    stfs f0, 0xc(r28)
    lhz r0, 0x2(r3)
    mulli r0, r0, 0x30
    add r3, r3, r0
    addi r3, r3, 0x1434
    bl PSMTXConcat
lbl_801E0310:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
extern "C" asm void FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    clrlwi. r0, r0, 31
    beq lbl_801E036C
    addi r4, r31, 0x4
    li r3, 0x0
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E036C:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801E0384
    addi r4, r31, 0x34
    li r3, 0x3
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E0384:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E039C
    addi r4, r31, 0x64
    li r3, 0x6
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E039C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801E03FC
extern "C" asm void fn_801E03FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    bl Import__Q34nw4r3g3d12LightSettingFRCQ34nw4r3g3d12LightSetting
    lis r4, lbl_803EA060@ha
    lhz r5, 0x0(r26)
    addi r4, r4, lbl_803EA060@l
    mr r3, r31
    lhz r0, 0x2(r4)
    mulli r0, r0, 0x30
    add r4, r4, r0
    addi r4, r4, 0x34
    bl ApplyViewMtx__Q34nw4r3g3d12LightSettingFRCQ34nw4r4math5MTX34Ul
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x10(r31)
    li r27, 0x0
    lhz r28, 0x0(r31)
    li r26, 0x0
    stw r0, 0x14(r31)
    li r29, 0x0
    li r30, 0x1
    stw r0, 0x18(r31)
    stw r0, 0x1c(r31)
    stw r0, 0x20(r31)
    stb r3, 0x2b(r31)
    stb r3, 0x2a(r31)
    stb r3, 0x29(r31)
    stb r3, 0x28(r31)
    stb r3, 0x27(r31)
    stb r3, 0x26(r31)
    stb r3, 0x25(r31)
    stb r3, 0x24(r31)
    b lbl_801E04C8
lbl_801E0494:
    lwz r0, 0x4(r31)
    add r3, r0, r29
    lwzx r0, r29, r0
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E04C0
    add r4, r31, r27
    addi r3, r3, 0x4
    stb r26, 0x24(r4)
    slw r4, r30, r27
    bl GXLoadLightObjImm
    addi r27, r27, 0x1
lbl_801E04C0:
    addi r29, r29, 0x44
    addi r26, r26, 0x1
lbl_801E04C8:
    cmplwi r27, 0x8
    bge lbl_801E04D8
    cmplw r26, r28
    blt lbl_801E0494
lbl_801E04D8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801E04F0
extern "C" asm void fn_801E04F0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_18
    cmpwi r4, 0x0
    mr r20, r3
    mr r21, r5
    mr r22, r6
    mr r23, r7
    mr r24, r8
    blt lbl_801E0528
    cmpwi r4, 0x80
    blt lbl_801E0588
lbl_801E0528:
    cmpwi r5, 0x0
    beq lbl_801E0538
    li r0, 0x0
    stw r0, 0x0(r5)
lbl_801E0538:
    cmpwi r6, 0x0
    beq lbl_801E0548
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_801E0548:
    cmpwi r7, 0x0
    beq lbl_801E0558
    li r0, 0x0
    stw r0, 0x0(r7)
lbl_801E0558:
    cmpwi r8, 0x0
    beq lbl_801E0568
    li r0, 0x0
    stw r0, 0x0(r8)
lbl_801E0568:
    cmpwi r9, 0x0
    beq lbl_801E08F0
    li r0, 0xff
    stb r0, 0x3(r9)
    stb r0, 0x2(r9)
    stb r0, 0x1(r9)
    stb r0, 0x0(r9)
    b lbl_801E08F0
lbl_801E0588:
    cmpwi r9, 0x0
    beq lbl_801E05E4
    mulli r0, r4, 0xc
    add r10, r3, r0
    lbz r0, 0x2434(r10)
    extsb. r0, r0
    bge lbl_801E05BC
    li r0, 0xff
    stb r0, 0x3(r9)
    stb r0, 0x2(r9)
    stb r0, 0x1(r9)
    stb r0, 0x0(r9)
    b lbl_801E05E4
lbl_801E05BC:
    slwi r0, r0, 2
    add r10, r3, r0
    lbz r0, 0x222c(r10)
    stb r0, 0x0(r9)
    lbz r0, 0x222d(r10)
    stb r0, 0x1(r9)
    lbz r0, 0x222e(r10)
    stb r0, 0x2(r9)
    lbz r0, 0x222f(r10)
    stb r0, 0x3(r9)
lbl_801E05E4:
    lwz r0, 0x10(r3)
    cmpw r0, r4
    bne lbl_801E0634
    cmpwi r5, 0x0
    beq lbl_801E0600
    lwz r0, 0x14(r3)
    stw r0, 0x0(r5)
lbl_801E0600:
    cmpwi r6, 0x0
    beq lbl_801E0610
    lwz r0, 0x18(r3)
    stw r0, 0x0(r6)
lbl_801E0610:
    cmpwi r7, 0x0
    beq lbl_801E0620
    lwz r0, 0x1c(r3)
    stw r0, 0x0(r7)
lbl_801E0620:
    cmpwi r8, 0x0
    beq lbl_801E08F0
    lwz r0, 0x20(r3)
    stw r0, 0x0(r8)
    b lbl_801E08F0
lbl_801E0634:
    mulli r5, r4, 0xc
    li r0, 0x0
    stw r0, 0x14(r3)
    li r27, 0x0
    li r31, 0x1
    add r5, r3, r5
    addi r28, r5, 0x242c
    stw r0, 0x18(r3)
    mr r18, r28
    li r19, 0x2
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r4, 0x10(r3)
lbl_801E0668:
    lbz r26, 0x0(r18)
    extsb. r4, r26
    blt lbl_801E08A0
    mulli r0, r4, 0x44
    add r29, r20, r0
    lwz r0, 0x2c(r29)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E08A0
    addi r5, r20, 0x24
    addi r3, r20, 0x2c
    b lbl_801E0698
lbl_801E0694:
    addi r5, r5, 0x1
lbl_801E0698:
    cmplw r5, r3
    beq lbl_801E06B0
    lbz r0, 0x0(r5)
    extsb r0, r0
    cmpw r0, r4
    bne lbl_801E0694
lbl_801E06B0:
    addi r3, r20, 0x2c
    cmplw r5, r3
    bne lbl_801E082C
    lwz r4, lbl_8049C4C0
    addi r30, r20, 0x24
    b lbl_801E06CC
lbl_801E06C8:
    addi r30, r30, 0x1
lbl_801E06CC:
    cmplw r30, r3
    beq lbl_801E06E4
    lbz r0, 0x0(r30)
    extsb r0, r0
    cmpw r0, r4
    bne lbl_801E06C8
lbl_801E06E4:
    addi r0, r20, 0x2c
    cmplw r30, r0
    beq lbl_801E0710
    addi r0, r20, 0x24
    addi r3, r29, 0x30
    subf r0, r0, r30
    slw r25, r31, r0
    mr r4, r25
    bl GXLoadLightObjImm
    stb r26, 0x0(r30)
    b lbl_801E0838
lbl_801E0710:
    addi r4, r28, 0x8
    li r30, 0x0
    mtctr r19
lbl_801E071C:
    mr r5, r28
    add r6, r20, r30
    b lbl_801E072C
lbl_801E0728:
    addi r5, r5, 0x1
lbl_801E072C:
    cmplw r5, r4
    beq lbl_801E074C
    lbz r3, 0x0(r5)
    lbz r0, 0x24(r6)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_801E0728
lbl_801E074C:
    cmplw r5, r4
    beq lbl_801E0810
    addi r30, r30, 0x1
    mr r5, r28
    add r6, r20, r30
    b lbl_801E0768
lbl_801E0764:
    addi r5, r5, 0x1
lbl_801E0768:
    cmplw r5, r4
    beq lbl_801E0788
    lbz r3, 0x0(r5)
    lbz r0, 0x24(r6)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_801E0764
lbl_801E0788:
    cmplw r5, r4
    beq lbl_801E0810
    addi r30, r30, 0x1
    mr r5, r28
    add r6, r20, r30
    b lbl_801E07A4
lbl_801E07A0:
    addi r5, r5, 0x1
lbl_801E07A4:
    cmplw r5, r4
    beq lbl_801E07C4
    lbz r3, 0x0(r5)
    lbz r0, 0x24(r6)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_801E07A0
lbl_801E07C4:
    cmplw r5, r4
    beq lbl_801E0810
    addi r30, r30, 0x1
    mr r5, r28
    add r6, r20, r30
    b lbl_801E07E0
lbl_801E07DC:
    addi r5, r5, 0x1
lbl_801E07E0:
    cmplw r5, r4
    beq lbl_801E0800
    lbz r3, 0x0(r5)
    lbz r0, 0x24(r6)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    bne lbl_801E07DC
lbl_801E0800:
    cmplw r5, r4
    beq lbl_801E0810
    addi r30, r30, 0x1
    bdnz lbl_801E071C
lbl_801E0810:
    slw r25, r31, r30
    addi r3, r29, 0x30
    mr r4, r25
    bl GXLoadLightObjImm
    add r3, r20, r30
    stb r26, 0x24(r3)
    b lbl_801E0838
lbl_801E082C:
    addi r0, r20, 0x24
    subf r0, r0, r5
    slw r25, r31, r0
lbl_801E0838:
    lwz r3, 0x2c(r29)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_801E0874
    rlwinm. r0, r3, 0, 27, 27
    bne lbl_801E0858
    lwz r0, 0x1c(r20)
    or r0, r0, r25
    stw r0, 0x1c(r20)
lbl_801E0858:
    lwz r0, 0x2c(r29)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_801E08A0
    lwz r0, 0x20(r20)
    or r0, r0, r25
    stw r0, 0x20(r20)
    b lbl_801E08A0
lbl_801E0874:
    rlwinm. r0, r3, 0, 27, 27
    bne lbl_801E0888
    lwz r0, 0x14(r20)
    or r0, r0, r25
    stw r0, 0x14(r20)
lbl_801E0888:
    lwz r0, 0x2c(r29)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_801E08A0
    lwz r0, 0x18(r20)
    or r0, r0, r25
    stw r0, 0x18(r20)
lbl_801E08A0:
    addi r27, r27, 0x1
    addi r18, r18, 0x1
    cmplwi r27, 0x8
    blt lbl_801E0668
    cmpwi r21, 0x0
    beq lbl_801E08C0
    lwz r0, 0x14(r20)
    stw r0, 0x0(r21)
lbl_801E08C0:
    cmpwi r22, 0x0
    beq lbl_801E08D0
    lwz r0, 0x18(r20)
    stw r0, 0x0(r22)
lbl_801E08D0:
    cmpwi r23, 0x0
    beq lbl_801E08E0
    lwz r0, 0x1c(r20)
    stw r0, 0x0(r23)
lbl_801E08E0:
    cmpwi r24, 0x0
    beq lbl_801E08F0
    lwz r0, 0x20(r20)
    stw r0, 0x0(r24)
lbl_801E08F0:
    addi r11, r1, 0x40
    bl _restgpr_18
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801E0908
extern "C" asm void fn_801E0908() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r0, 0x0
    mr r26, r3
    sth r0, 0x0(r3)
    sth r0, 0x2(r3)
    addi r3, r3, 0x4
    bl PSMTXIdentity
    addi r31, r26, 0x34
    addi r30, r26, 0x634
    addi r29, r26, 0xe34
    addi r28, r26, 0x1434
    li r27, 0x0
lbl_801E0948:
    mr r3, r31
    bl PSMTXIdentity
    mr r3, r30
    bl MTX44Identity__Q24nw4r4mathFPQ34nw4r4math5MTX44
    mr r3, r29
    bl PSMTXIdentity
    mr r3, r28
    bl PSMTXIdentity
    addi r27, r27, 0x1
    addi r30, r30, 0x40
    cmplwi r27, 0x20
    addi r29, r29, 0x30
    addi r28, r28, 0x30
    addi r31, r31, 0x30
    blt lbl_801E0948
    addi r11, r1, 0x20
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
extern "C" asm void LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r4, 0x0(r3)
    neg r0, r4
    or r0, r0, r4
    srwi. r0, r0, 31
    beq lbl_801E0C60
    lis r3, lbl_803E6660@ha
    lis r25, lbl_803E65EC@ha
    stw r4, 0x8(r1)
    addi r31, r3, lbl_803E6660@l
    addi r26, r25, lbl_803E65EC@l
    li r28, 0x0
    li r27, 0x0
    li r30, 0x1
lbl_801E0A58:
    mr r4, r28
    addi r3, r1, 0x8
    bl IsValidTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID
    cmpwi r3, 0x0
    beq lbl_801E0C48
    mr r4, r28
    addi r3, r1, 0x8
    bl GetTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID
    slw r0, r30, r28
    lbz r4, 0x100(r31)
    clrlwi r0, r0, 24
    mr r29, r3
    and. r4, r4, r0
    beq lbl_801E0BB4
    lwz r9, 0x0(r3)
    li r4, 0x0
    lwzx r8, r31, r27
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    cmplw r9, r8
    li r10, 0x0
    li r11, 0x0
    li r12, 0x0
    bne lbl_801E0AD4
    add r8, r31, r27
    lwz r9, 0x4(r3)
    lwz r8, 0x4(r8)
    cmplw r9, r8
    bne lbl_801E0AD4
    li r12, 0x1
lbl_801E0AD4:
    cmpwi r12, 0x0
    beq lbl_801E0AF8
    slwi r8, r28, 5
    lwz r9, 0x8(r3)
    add r8, r31, r8
    lwz r8, 0x8(r8)
    cmplw r9, r8
    bne lbl_801E0AF8
    li r11, 0x1
lbl_801E0AF8:
    cmpwi r11, 0x0
    beq lbl_801E0B1C
    slwi r8, r28, 5
    lwz r9, 0xc(r3)
    add r8, r31, r8
    lwz r8, 0xc(r8)
    cmplw r9, r8
    bne lbl_801E0B1C
    li r10, 0x1
lbl_801E0B1C:
    cmpwi r10, 0x0
    beq lbl_801E0B40
    slwi r8, r28, 5
    lwz r9, 0x10(r3)
    add r8, r31, r8
    lwz r8, 0x10(r8)
    cmplw r9, r8
    bne lbl_801E0B40
    li r7, 0x1
lbl_801E0B40:
    cmpwi r7, 0x0
    beq lbl_801E0B64
    slwi r7, r28, 5
    lwz r8, 0x14(r3)
    add r7, r31, r7
    lwz r7, 0x14(r7)
    cmplw r8, r7
    bne lbl_801E0B64
    li r6, 0x1
lbl_801E0B64:
    cmpwi r6, 0x0
    beq lbl_801E0B88
    slwi r6, r28, 5
    lwz r7, 0x18(r3)
    add r6, r31, r6
    lwz r6, 0x18(r6)
    cmplw r7, r6
    bne lbl_801E0B88
    li r5, 0x1
lbl_801E0B88:
    cmpwi r5, 0x0
    beq lbl_801E0BAC
    slwi r5, r28, 5
    lwz r6, 0x1c(r3)
    add r5, r31, r5
    lwz r5, 0x1c(r5)
    cmplw r6, r5
    bne lbl_801E0BAC
    li r4, 0x1
lbl_801E0BAC:
    cmpwi r4, 0x0
    bne lbl_801E0C48
lbl_801E0BB4:
    lbz r5, 0x100(r31)
    slwi r4, r28, 5
    add r6, r31, r4
    or r0, r5, r0
    mr r4, r28
    stb r0, 0x100(r31)
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r5, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r5, 0x8(r6)
    stw r0, 0xc(r6)
    lwz r5, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r5, 0x10(r6)
    stw r0, 0x14(r6)
    lwz r5, 0x18(r3)
    lwz r0, 0x1c(r3)
    mr r3, r29
    stw r5, 0x18(r6)
    stw r0, 0x1c(r6)
    bl GXLoadTexObj
    mr r3, r29
    bl GXGetTexObjHeight
    mr r24, r3
    mr r3, r29
    bl GXGetTexObjWidth
    slwi r0, r28, 2
    add r4, r26, r0
    sth r3, 0x4(r4)
    sth r24, 0x6(r4)
    lwz r0, lbl_803E65EC@l(r25)
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, lbl_803E65EC@l(r25)
lbl_801E0C48:
    addi r28, r28, 0x1
    addi r27, r27, 0x20
    cmplwi r28, 0x8
    blt lbl_801E0A58
    li r0, 0x1
    stb r0, lbl_8049D9A8
lbl_801E0C60:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
extern "C" asm void LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r3, 0x0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801E0DAC
    lis r27, lbl_803E6780@ha
    lis r28, lbl_803E6660@ha
    stw r3, 0x8(r1)
    addi r27, r27, lbl_803E6780@l
    addi r28, r28, lbl_803E6660@l
    li r30, 0x0
    li r29, 0x0
    li r31, 0x1
lbl_801E0CC0:
    mr r4, r30
    addi r3, r1, 0x8
    bl IsValidTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut
    cmpwi r3, 0x0
    beq lbl_801E0D94
    mr r4, r30
    addi r3, r1, 0x8
    bl GetTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut
    slw r4, r31, r30
    lhz r0, 0x60(r27)
    clrlwi r6, r4, 16
    and. r0, r0, r6
    beq lbl_801E0D50
    lwz r4, 0x0(r3)
    li r7, 0x0
    lwzx r0, r27, r29
    li r8, 0x0
    cmplw r4, r0
    bne lbl_801E0D24
    add r4, r27, r29
    lwz r5, 0x4(r3)
    lwz r0, 0x4(r4)
    cmplw r5, r0
    bne lbl_801E0D24
    li r8, 0x1
lbl_801E0D24:
    cmpwi r8, 0x0
    beq lbl_801E0D48
    mulli r0, r30, 0xc
    lwz r5, 0x8(r3)
    add r4, r27, r0
    lwz r0, 0x8(r4)
    cmplw r5, r0
    bne lbl_801E0D48
    li r7, 0x1
lbl_801E0D48:
    cmpwi r7, 0x0
    bne lbl_801E0D94
lbl_801E0D50:
    lhz r5, 0x60(r27)
    mulli r0, r30, 0xc
    mr r4, r30
    or r5, r5, r6
    sth r5, 0x60(r27)
    add r6, r27, r0
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r5, 0x0(r6)
    stw r0, 0x4(r6)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r6)
    bl GXLoadTlut
    lbz r3, 0x100(r28)
    slw r0, r31, r30
    andc r0, r3, r0
    stb r0, 0x100(r28)
lbl_801E0D94:
    addi r30, r30, 0x1
    addi r29, r29, 0xc
    cmplwi r30, 0x8
    blt lbl_801E0CC0
    li r0, 0x1
    stb r0, lbl_8049D9A8
lbl_801E0DAC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
extern "C" asm void LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_801E1184
    lwz r0, lbl_8049D9B4
    cmplw r4, r0
    bne lbl_801E0FCC
    li r0, 0x1
    b lbl_801E0FD4
lbl_801E0FCC:
    stw r4, lbl_8049D9B4
    li r0, 0x0
lbl_801E0FD4:
    cmpwi r0, 0x0
    bne lbl_801E1184
    lis r9, lbl_803E65E0@ha
    addi r8, r9, lbl_803E65E0@l
    lwz r3, 0x8(r8)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E1068
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_801E1068
    lwz r5, 0x4(r8)
    lis r3, 0xfe08
    lis r7, 0xcc01
    li r4, 0x61
    stb r4, -0x8000(r7)
    subi r0, r3, 0x3c1
    la r3, lbl_804A1D58
    stw r0, -0x8000(r7)
    lbzx r0, r3, r5
    stb r4, -0x8000(r7)
    slwi r5, r0, 14
    lbz r3, 0x2(r8)
    lbz r0, 0x1(r8)
    subi r4, r3, 0x1
    lbz r6, 0x3(r8)
    lbz r3, lbl_803E65E0@l(r9)
    slwi r0, r0, 4
    slwi r6, r6, 16
    slwi r4, r4, 10
    or r0, r3, r0
    or r3, r6, r5
    or r0, r4, r0
    or r0, r3, r0
    stw r0, -0x8000(r7)
    lwz r0, 0x8(r8)
    ori r0, r0, 0x1
    stw r0, 0x8(r8)
lbl_801E1068:
    lbz r4, lbl_8049D9A8
    li r0, 0x0
    mr r3, r31
    stb r0, lbl_8049D9A8
    bl fn_801D2798
    lis r3, lbl_803E65EC@ha
    lwz r6, 0x0(r31)
    lwz r0, lbl_803E65EC@l(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801E10B4
    addi r4, r3, lbl_803E65EC@l
    lwz r3, 0x10(r6)
    lwz r0, 0x64(r4)
    cmplw r3, r0
    bne lbl_801E10B4
    lwz r3, 0x14(r6)
    lwz r0, 0x68(r4)
    cmplw r3, r0
    beq lbl_801E10DC
lbl_801E10B4:
    lis r5, lbl_803E65EC@ha
    lwz r3, 0x10(r6)
    addi r4, r5, lbl_803E65EC@l
    lwz r0, lbl_803E65EC@l(r5)
    stw r3, 0x64(r4)
    ori r0, r0, 0x2
    lwz r3, 0x14(r6)
    clrrwi r0, r0, 1
    stw r3, 0x68(r4)
    stw r0, lbl_803E65EC@l(r5)
lbl_801E10DC:
    lis r3, lbl_803E65EC@ha
    lis r4, lbl_803E65E0@ha
    lwz r5, lbl_803E65EC@l(r3)
    lbz r29, lbl_803E65E0@l(r4)
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_801E1184
    clrlwi. r0, r5, 31
    bne lbl_801E1184
    cmpwi r29, 0x0
    beq lbl_801E1184
    addi r31, r3, lbl_803E65EC@l
    li r30, 0x0
    b lbl_801E1168
lbl_801E1110:
    clrlwi r3, r30, 24
    add r7, r31, r3
    lbz r0, 0x64(r7)
    cmplwi r0, 0xff
    beq lbl_801E1164
    clrlslwi r0, r0, 24, 2
    clrlslwi r5, r30, 24, 3
    add r4, r31, r0
    li r6, 0x0
    lhz r4, 0x4(r4)
    add r10, r31, r5
    li r5, 0x0
    li r8, 0x0
    sth r4, 0x24(r10)
    li r9, 0x0
    lbz r0, 0x64(r7)
    slwi r0, r0, 2
    add r7, r31, r0
    lhz r7, 0x6(r7)
    sth r7, 0x26(r10)
    bl GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
lbl_801E1164:
    addi r30, r30, 0x1
lbl_801E1168:
    clrlwi r0, r30, 24
    cmplw r0, r29
    blt lbl_801E1110
    lis r3, lbl_803E65EC@ha
    lwz r0, lbl_803E65EC@l(r3)
    ori r0, r0, 0x1
    stw r0, lbl_803E65EC@l(r3)
lbl_801E1184:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
extern "C" asm void LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    lwz r0, 0x0(r3)
    stw r31, 0xac(r1)
    mr r31, r4
    cmpwi r0, 0x0
    stw r30, 0xa8(r1)
    mr r30, r3
    beq lbl_801E1568
    stw r0, 0xc(r1)
    beq lbl_801E148C
    lis r9, lbl_803E65E0@ha
    addi r8, r9, lbl_803E65E0@l
    lwz r3, 0x8(r8)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E146C
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    bne lbl_801E146C
    lwz r5, 0x4(r8)
    lis r3, 0xfe08
    lis r7, 0xcc01
    li r4, 0x61
    stb r4, -0x8000(r7)
    subi r0, r3, 0x3c1
    la r3, lbl_804A1D58
    stw r0, -0x8000(r7)
    lbzx r0, r3, r5
    stb r4, -0x8000(r7)
    slwi r5, r0, 14
    lbz r3, 0x2(r8)
    lbz r0, 0x1(r8)
    subi r4, r3, 0x1
    lbz r6, 0x3(r8)
    lbz r3, lbl_803E65E0@l(r9)
    slwi r0, r0, 4
    slwi r6, r6, 16
    slwi r4, r4, 10
    or r0, r3, r0
    or r3, r6, r5
    or r0, r4, r0
    or r0, r3, r0
    stw r0, -0x8000(r7)
    lwz r0, 0x8(r8)
    ori r0, r0, 0x1
    stw r0, 0x8(r8)
lbl_801E146C:
    lis r4, lbl_803E65E0@ha
    lbz r5, lbl_8049D9A8
    addi r4, r4, lbl_803E65E0@l
    li r0, 0x0
    stb r0, lbl_8049D9A8
    addi r3, r1, 0xc
    lbz r4, 0x3(r4)
    bl CallDisplayList__Q34nw4r3g3d20ResMatIndMtxAndScaleCFUcb
lbl_801E148C:
    lwz r6, 0x0(r30)
    li r0, 0x0
    stw r0, 0x10(r1)
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    li r4, 0x1
    stw r6, 0x8(r1)
    bl GXGetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleCF14_GXIndTexMtxIDPQ34nw4r4math5MTX34
    cmpwi r3, 0x0
    beq lbl_801E14C0
    lwz r0, 0x10(r1)
    ori r0, r0, 0x1
    stw r0, 0x10(r1)
lbl_801E14C0:
    addi r3, r1, 0x8
    addi r5, r1, 0x44
    li r4, 0x2
    bl GXGetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleCF14_GXIndTexMtxIDPQ34nw4r4math5MTX34
    cmpwi r3, 0x0
    beq lbl_801E14E4
    lwz r0, 0x10(r1)
    ori r0, r0, 0x2
    stw r0, 0x10(r1)
lbl_801E14E4:
    addi r3, r1, 0x8
    addi r5, r1, 0x74
    li r4, 0x3
    bl GXGetIndTexMtx__Q34nw4r3g3d20ResMatIndMtxAndScaleCF14_GXIndTexMtxIDPQ34nw4r4math5MTX34
    cmpwi r3, 0x0
    beq lbl_801E1508
    lwz r0, 0x10(r1)
    ori r0, r0, 0x4
    stw r0, 0x10(r1)
lbl_801E1508:
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x10
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r0, 0x10(r1)
    clrlwi. r0, r0, 31
    beq lbl_801E1538
    addi r4, r1, 0x14
    li r3, 0x0
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E1538:
    lwz r0, 0x10(r1)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801E1550
    addi r4, r1, 0x44
    li r3, 0x3
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E1550:
    lwz r0, 0x10(r1)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E1568
    addi r4, r1, 0x74
    li r3, 0x6
    bl GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
lbl_801E1568:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
extern "C" asm void LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_27
    lwz r10, 0x0(r3)
    lis r0, 0x4330
    stw r0, 0x30(r1)
    cmpwi r10, 0x0
    stw r0, 0x38(r1)
    beq lbl_801E1C94
    lwz r11, 0x0(r10)
    clrlwi. r0, r11, 31
    beq lbl_801E1650
    rlwinm. r0, r11, 0, 30, 30
    beq lbl_801E1608
    lbz r31, 0x4(r10)
    lis r12, 0xcc01
    lbz r30, 0x5(r10)
    li r27, 0x10
    lbz r29, 0x6(r10)
    li r11, 0x0
    lbz r28, 0x7(r10)
    li r0, 0x100c
    stb r31, 0x28(r1)
    stb r27, -0x8000(r12)
    sth r11, -0x8000(r12)
    stb r30, 0x29(r1)
    stb r29, 0x2a(r1)
    stb r28, 0x2b(r1)
    sth r0, -0x8000(r12)
    lwz r0, 0x28(r1)
    stw r0, -0x8000(r12)
    b lbl_801E169C
lbl_801E1608:
    lbz r31, 0x4(r10)
    lis r12, 0xcc01
    lbz r30, 0x5(r10)
    li r27, 0x10
    lbz r29, 0x6(r10)
    li r11, 0x0
    lbz r28, 0x7(r10)
    li r0, 0x100c
    stb r31, 0x24(r1)
    stb r27, -0x8000(r12)
    sth r11, -0x8000(r12)
    stb r30, 0x25(r1)
    stb r29, 0x26(r1)
    stb r28, 0x27(r1)
    sth r0, -0x8000(r12)
    lwz r0, 0x24(r1)
    stw r0, -0x8000(r12)
    b lbl_801E169C
lbl_801E1650:
    rlwinm. r0, r11, 0, 30, 30
    beq lbl_801E169C
    lbz r27, 0x4(r10)
    lis r12, 0xcc01
    lbz r28, 0x5(r10)
    li r29, 0x10
    lbz r31, 0x6(r10)
    li r11, 0x0
    lbz r30, 0x7(r10)
    li r0, 0x100c
    stb r27, 0x20(r1)
    stb r29, -0x8000(r12)
    sth r11, -0x8000(r12)
    stb r28, 0x21(r1)
    stb r31, 0x22(r1)
    stb r30, 0x23(r1)
    sth r0, -0x8000(r12)
    lwz r0, 0x20(r1)
    stw r0, -0x8000(r12)
lbl_801E169C:
    lbz r12, 0x0(r8)
    lbz r11, 0x8(r10)
    lbz r30, 0x1(r8)
    mullw r29, r12, r11
    lbz r0, 0x9(r10)
    lwz r27, 0x0(r10)
    lbz r31, 0x2(r8)
    lbz r12, 0xa(r10)
    lbz r11, 0x3(r8)
    mullw r30, r30, r0
    xoris r0, r29, 0x8000
    stw r0, 0x34(r1)
    rlwinm. r0, r27, 0, 29, 29
    lbz r8, 0xb(r10)
    lfd f1, 0x30(r1)
    xoris r0, r30, 0x8000
    lfd f6, lbl_804A1D78
    stw r0, 0x3c(r1)
    mullw r0, r11, r8
    fsubs f1, f1, f6
    lfs f5, lbl_804A1D70
    lfd f0, 0x38(r1)
    lfs f4, lbl_804A1D6C
    fsubs f2, f0, f6
    mullw r12, r31, r12
    xoris r0, r0, 0x8000
    fmuls f3, f5, f1
    stw r0, 0x3c(r1)
    fmuls f2, f5, f2
    fadds f3, f4, f3
    xoris r8, r12, 0x8000
    fadds f2, f4, f2
    stw r8, 0x34(r1)
    fctiwz f3, f3
    lfd f0, 0x30(r1)
    fctiwz f2, f2
    stfd f3, 0x40(r1)
    fsubs f1, f0, f6
    lfd f0, 0x38(r1)
    stfd f2, 0x48(r1)
    fsubs f0, f0, f6
    lwz r12, 0x44(r1)
    fmuls f1, f5, f1
    lwz r11, 0x4c(r1)
    fmuls f0, f5, f0
    stb r12, 0x2c(r1)
    fadds f1, f4, f1
    stb r11, 0x2d(r1)
    fadds f0, f4, f0
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x50(r1)
    stfd f0, 0x58(r1)
    lwz r8, 0x54(r1)
    lwz r0, 0x5c(r1)
    stb r8, 0x2e(r1)
    stb r0, 0x2f(r1)
    beq lbl_801E17DC
    rlwinm. r0, r27, 0, 28, 28
    beq lbl_801E17B4
    lis r11, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r11)
    li r8, 0x0
    li r0, 0x100a
    lwz r12, 0x2c(r1)
    sth r8, -0x8000(r11)
    sth r0, -0x8000(r11)
    stw r12, -0x8000(r11)
    b lbl_801E1808
lbl_801E17B4:
    lis r11, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r11)
    li r8, 0x0
    li r0, 0x100a
    lwz r12, 0x2c(r1)
    sth r8, -0x8000(r11)
    sth r0, -0x8000(r11)
    stw r12, -0x8000(r11)
    b lbl_801E1808
lbl_801E17DC:
    rlwinm. r0, r27, 0, 28, 28
    beq lbl_801E1808
    lis r11, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r11)
    li r8, 0x0
    li r0, 0x100a
    lwz r12, 0x2c(r1)
    sth r8, -0x8000(r11)
    sth r0, -0x8000(r11)
    stw r12, -0x8000(r11)
lbl_801E1808:
    cmpwi r9, 0x0
    beq lbl_801E1894
    lwz r0, 0x0(r10)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801E1850
    lwz r27, 0xc(r10)
    li r12, -0x783f
    lis r11, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r11)
    li r8, 0x0
    and r27, r27, r12
    li r0, 0x100e
    sth r8, -0x8000(r11)
    rlwimi r27, r4, 2, 26, 29
    rlwimi r27, r4, 7, 17, 20
    sth r0, -0x8000(r11)
    stw r27, -0x8000(r11)
lbl_801E1850:
    lwz r0, 0x0(r10)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801E1914
    lwz r11, 0x10(r10)
    li r10, -0x783f
    lis r8, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r8)
    li r4, 0x0
    and r11, r11, r10
    li r0, 0x1010
    sth r4, -0x8000(r8)
    rlwimi r11, r5, 2, 26, 29
    rlwimi r11, r5, 7, 17, 20
    sth r0, -0x8000(r8)
    stw r11, -0x8000(r8)
    b lbl_801E1914
lbl_801E1894:
    lwz r0, 0x0(r10)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801E18D4
    lwz r27, 0xc(r10)
    li r12, -0x783d
    lis r11, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r11)
    li r8, 0x0
    and r27, r27, r12
    li r0, 0x100e
    sth r8, -0x8000(r11)
    rlwimi r27, r4, 2, 26, 29
    rlwimi r27, r4, 7, 17, 20
    sth r0, -0x8000(r11)
    stw r27, -0x8000(r11)
lbl_801E18D4:
    lwz r0, 0x0(r10)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801E1914
    lwz r11, 0x10(r10)
    li r10, -0x783d
    lis r8, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r8)
    li r4, 0x0
    and r11, r11, r10
    li r0, 0x1010
    sth r4, -0x8000(r8)
    rlwimi r11, r5, 2, 26, 29
    rlwimi r11, r5, 7, 17, 20
    sth r0, -0x8000(r8)
    stw r11, -0x8000(r8)
lbl_801E1914:
    lis r4, lbl_803E65E0@ha
    addi r4, r4, lbl_803E65E0@l
    lbz r0, 0x1(r4)
    cmplwi r0, 0x2
    bne lbl_801E1C1C
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r3)
    clrlwi. r0, r4, 31
    beq lbl_801E19D0
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801E1988
    lbz r31, 0x18(r3)
    lis r5, 0xcc01
    lbz r12, 0x19(r3)
    li r8, 0x10
    lbz r11, 0x1a(r3)
    li r4, 0x0
    lbz r10, 0x1b(r3)
    li r0, 0x100d
    stb r31, 0x1c(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0x1d(r1)
    stb r11, 0x1e(r1)
    stb r10, 0x1f(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0x1c(r1)
    stw r0, -0x8000(r5)
    b lbl_801E1A1C
lbl_801E1988:
    lbz r31, 0x18(r3)
    lis r5, 0xcc01
    lbz r12, 0x19(r3)
    li r8, 0x10
    lbz r11, 0x1a(r3)
    li r4, 0x0
    lbz r10, 0x1b(r3)
    li r0, 0x100d
    stb r31, 0x18(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0x19(r1)
    stb r11, 0x1a(r1)
    stb r10, 0x1b(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0x18(r1)
    stw r0, -0x8000(r5)
    b lbl_801E1A1C
lbl_801E19D0:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801E1A1C
    lbz r31, 0x18(r3)
    lis r5, 0xcc01
    lbz r12, 0x19(r3)
    li r8, 0x10
    lbz r11, 0x1a(r3)
    li r4, 0x0
    lbz r10, 0x1b(r3)
    li r0, 0x100d
    stb r31, 0x14(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0x15(r1)
    stb r11, 0x16(r1)
    stb r10, 0x17(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0x14(r1)
    stw r0, -0x8000(r5)
lbl_801E1A1C:
    lwz r4, 0x14(r3)
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801E1AC0
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_801E1A78
    lbz r31, 0x1c(r3)
    lis r5, 0xcc01
    lbz r12, 0x1d(r3)
    li r8, 0x10
    lbz r11, 0x1e(r3)
    li r4, 0x0
    lbz r10, 0x1f(r3)
    li r0, 0x100b
    stb r31, 0x10(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0x11(r1)
    stb r11, 0x12(r1)
    stb r10, 0x13(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0x10(r1)
    stw r0, -0x8000(r5)
    b lbl_801E1B0C
lbl_801E1A78:
    lbz r31, 0x1c(r3)
    lis r5, 0xcc01
    lbz r12, 0x1d(r3)
    li r8, 0x10
    lbz r11, 0x1e(r3)
    li r4, 0x0
    lbz r10, 0x1f(r3)
    li r0, 0x100b
    stb r31, 0xc(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0xd(r1)
    stb r11, 0xe(r1)
    stb r10, 0xf(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0xc(r1)
    stw r0, -0x8000(r5)
    b lbl_801E1B0C
lbl_801E1AC0:
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_801E1B0C
    lbz r31, 0x1c(r3)
    lis r5, 0xcc01
    lbz r12, 0x1d(r3)
    li r8, 0x10
    lbz r11, 0x1e(r3)
    li r4, 0x0
    lbz r10, 0x1f(r3)
    li r0, 0x100b
    stb r31, 0x8(r1)
    stb r8, -0x8000(r5)
    sth r4, -0x8000(r5)
    stb r12, 0x9(r1)
    stb r11, 0xa(r1)
    stb r10, 0xb(r1)
    sth r0, -0x8000(r5)
    lwz r0, 0x8(r1)
    stw r0, -0x8000(r5)
lbl_801E1B0C:
    cmpwi r9, 0x0
    beq lbl_801E1B98
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801E1B54
    lwz r9, 0x20(r3)
    li r8, -0x783f
    lis r5, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r5)
    li r4, 0x0
    and r9, r9, r8
    li r0, 0x100f
    sth r4, -0x8000(r5)
    rlwimi r9, r6, 2, 26, 29
    rlwimi r9, r6, 7, 17, 20
    sth r0, -0x8000(r5)
    stw r9, -0x8000(r5)
lbl_801E1B54:
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801E1C50
    lwz r6, 0x24(r3)
    li r5, -0x783f
    lis r4, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r4)
    li r3, 0x0
    and r6, r6, r5
    li r0, 0x1011
    sth r3, -0x8000(r4)
    rlwimi r6, r7, 2, 26, 29
    rlwimi r6, r7, 7, 17, 20
    sth r0, -0x8000(r4)
    stw r6, -0x8000(r4)
    b lbl_801E1C50
lbl_801E1B98:
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_801E1BD8
    lwz r9, 0x20(r3)
    li r8, -0x783d
    lis r5, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r5)
    li r4, 0x0
    and r9, r9, r8
    li r0, 0x100f
    sth r4, -0x8000(r5)
    rlwimi r9, r6, 2, 26, 29
    rlwimi r9, r6, 7, 17, 20
    sth r0, -0x8000(r5)
    stw r9, -0x8000(r5)
lbl_801E1BD8:
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801E1C50
    lwz r6, 0x24(r3)
    li r5, -0x783d
    lis r4, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r4)
    li r3, 0x0
    and r6, r6, r5
    li r0, 0x1011
    sth r3, -0x8000(r4)
    rlwimi r6, r7, 2, 26, 29
    rlwimi r6, r7, 7, 17, 20
    sth r0, -0x8000(r4)
    stw r6, -0x8000(r4)
    b lbl_801E1C50
lbl_801E1C1C:
    lis r5, 0xcc01
    li r6, 0x10
    stb r6, -0x8000(r5)
    li r4, 0x0
    li r3, 0x100f
    li r0, 0x1011
    sth r4, -0x8000(r5)
    sth r3, -0x8000(r5)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    sth r4, -0x8000(r5)
    sth r0, -0x8000(r5)
    stw r4, -0x8000(r5)
lbl_801E1C50:
    lis r3, lbl_803E65E0@ha
    addi r31, r3, lbl_803E65E0@l
    lwz r4, 0x8(r31)
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801E1C94
    clrlwi r0, r4, 30
    cmplwi r0, 0x3
    beq lbl_801E1C94
    lbz r3, lbl_803E65E0@l(r3)
    lbz r4, 0x1(r31)
    lbz r5, 0x2(r31)
    lbz r6, 0x3(r31)
    lwz r7, 0x4(r31)
    bl GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
    lwz r0, 0x8(r31)
    ori r0, r0, 0x3
    stw r0, 0x8(r31)
lbl_801E1C94:
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
extern "C" asm void LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_801E1D24
    lbz r5, lbl_8049D9A8
    li r0, 0x0
    lis r30, lbl_803E65E0@ha
    stb r0, lbl_8049D9A8
    lbz r4, lbl_803E65E0@l(r30)
    bl CallDisplayList__Q34nw4r3g3d17ResMatTexCoordGenCFUcb
    addi r31, r30, lbl_803E65E0@l
    lwz r3, 0x8(r31)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E1D24
    clrlwi r0, r3, 30
    cmplwi r0, 0x3
    beq lbl_801E1D24
    lbz r3, lbl_803E65E0@l(r30)
    lbz r4, 0x1(r31)
    lbz r5, 0x2(r31)
    lbz r6, 0x3(r31)
    lwz r7, 0x4(r31)
    bl GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
    lwz r0, 0x8(r31)
    ori r0, r0, 0x3
    stw r0, 0x8(r31)
lbl_801E1D24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
extern "C" asm void LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_20
    lis r30, lbl_803E6820@ha
    lis r26, lbl_803E67F0@ha
    mr r21, r3
    li r23, 0x0
    addi r26, r26, lbl_803E67F0@l
    addi r30, r30, lbl_803E6820@l
    li r28, 0x0
    li r27, 0x0
    li r25, 0x0
    li r24, 0x40
    li r31, 0x0
    li r20, 0x1
lbl_801E1D80:
    lwz r4, 0x0(r21)
    cmpwi r4, 0x0
    beq lbl_801E1DA8
    lwz r0, 0x0(r4)
    slw r3, r20, r28
    and r3, r3, r0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    b lbl_801E1DAC
lbl_801E1DA8:
    li r0, 0x0
lbl_801E1DAC:
    cmpwi r0, 0x0
    beq lbl_801E1FAC
    add r29, r4, r27
    addi r3, r1, 0x68
    li r22, 0x1
    bl PSMTXIdentity
    lbz r6, 0xaa(r29)
    cmpwi r6, 0x0
    beq lbl_801E1E40
    lbz r3, 0xa9(r29)
    cmplwi r6, 0x100
    lbz r0, 0xa8(r29)
    extsb r5, r3
    extsb r4, r0
    blt lbl_801E1DEC
    li r6, 0x0
lbl_801E1DEC:
    cmpwi r4, 0x20
    blt lbl_801E1DF8
    li r4, -0x1
lbl_801E1DF8:
    cmpwi r5, 0x80
    blt lbl_801E1E04
    li r5, -0x1
lbl_801E1E04:
    slwi r0, r6, 3
    addi r3, r1, 0x68
    lwzx r12, r30, r0
    mtctr r12
    bctrl
    lbz r0, 0xaa(r29)
    cmplwi r0, 0x100
    blt lbl_801E1E28
    li r0, 0x0
lbl_801E1E28:
    slwi r0, r0, 3
    li r22, 0x0
    add r3, r30, r0
    lwz r0, 0x4(r3)
    stw r0, 0x0(r26)
    b lbl_801E1E44
lbl_801E1E40:
    stw r31, 0x0(r26)
lbl_801E1E44:
    lwz r3, 0x0(r21)
    li r4, 0x0
    lwz r0, 0x0(r3)
    srw r0, r0, r28
    clrlwi r0, r0, 28
    cmplwi r0, 0xf
    bne lbl_801E1E74
    add r3, r3, r27
    lbz r0, 0xab(r3)
    clrlwi. r0, r0, 31
    beq lbl_801E1E74
    li r4, 0x1
lbl_801E1E74:
    cmpwi r4, 0x0
    bne lbl_801E1F48
    cmpwi r22, 0x0
    beq lbl_801E1EA4
    lbz r0, 0xab(r29)
    clrlwi. r0, r0, 31
    bne lbl_801E1EB4
    addi r3, r29, 0xac
    addi r4, r1, 0x68
    li r22, 0x0
    bl PSMTXCopy
    b lbl_801E1EB4
lbl_801E1EA4:
    addi r4, r1, 0x68
    addi r3, r29, 0xac
    mr r5, r4
    bl PSMTXConcat
lbl_801E1EB4:
    lbz r0, 0xaa(r29)
    cmpwi r0, 0x0
    bne lbl_801E1EEC
    lwz r6, 0x0(r21)
    mr r4, r22
    addi r3, r1, 0x68
    lwz r0, 0x0(r6)
    add r5, r6, r25
    lwz r7, 0x4(r6)
    addi r5, r5, 0x8
    srw r0, r0, r28
    clrlwi r6, r0, 28
    bl fn_801E6240
    b lbl_801E1F44
lbl_801E1EEC:
    lwz r6, 0x0(r21)
    addi r3, r1, 0x38
    li r4, 0x1
    lwz r0, 0x0(r6)
    add r5, r6, r25
    lwz r7, 0x4(r6)
    addi r5, r5, 0x8
    srw r0, r0, r28
    clrlwi r6, r0, 28
    bl fn_801E6240
    lfs f2, 0x40(r1)
    addi r4, r1, 0x68
    lfs f1, 0x44(r1)
    mr r5, r4
    lfs f3, 0x50(r1)
    addi r3, r1, 0x38
    lfs f0, 0x54(r1)
    stfs f1, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f0, 0x50(r1)
    stfs f3, 0x54(r1)
    bl PSMTXConcat
lbl_801E1F44:
    li r22, 0x0
lbl_801E1F48:
    cmpwi r22, 0x0
    beq lbl_801E1F88
    lwz r0, lbl_8049D9B0
    slw r4, r20, r23
    and. r0, r0, r4
    bne lbl_801E1FB0
    lwz r0, lbl_8049D9B0
    addi r3, r1, 0x8
    or r0, r0, r4
    stw r0, lbl_8049D9B0
    bl PSMTXIdentity
    mr r4, r24
    addi r3, r1, 0x8
    li r5, 0x0
    bl GXLoadTexMtxImm
    b lbl_801E1FB0
lbl_801E1F88:
    lwz r5, lbl_8049D9B0
    slw r0, r20, r23
    mr r4, r24
    addi r3, r1, 0x68
    andc r0, r5, r0
    li r5, 0x0
    stw r0, lbl_8049D9B0
    bl GXLoadTexMtxImm
    b lbl_801E1FB0
lbl_801E1FAC:
    stw r31, 0x0(r26)
lbl_801E1FB0:
    addi r23, r23, 0x1
    addi r27, r27, 0x34
    cmplwi r23, 0x8
    addi r26, r26, 0x4
    addi r25, r25, 0x14
    addi r24, r24, 0x3
    addi r28, r28, 0x4
    blt lbl_801E1D80
    addi r11, r1, 0xd0
    bl _restgpr_20
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
extern "C" asm void LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x0(r3)
    lis r31, lbl_803E65E0@ha
    mr r30, r3
    cmpwi r0, 0x0
    addi r31, r31, lbl_803E65E0@l
    beq lbl_801E2174
    lwz r3, 0xc(r31)
    lbz r27, 0x0(r31)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_801E20B0
    clrlwi. r0, r3, 31
    bne lbl_801E20B0
    cmpwi r27, 0x0
    beq lbl_801E20B0
    addi r29, r31, 0xc
    li r28, 0x0
    b lbl_801E2098
lbl_801E2040:
    clrlwi r3, r28, 24
    add r7, r29, r3
    lbz r0, 0x64(r7)
    cmplwi r0, 0xff
    beq lbl_801E2094
    clrlslwi r0, r0, 24, 2
    clrlslwi r5, r28, 24, 3
    add r4, r29, r0
    li r6, 0x0
    lhz r4, 0x4(r4)
    add r10, r29, r5
    li r5, 0x0
    li r8, 0x0
    sth r4, 0x24(r10)
    li r9, 0x0
    lbz r0, 0x64(r7)
    slwi r0, r0, 2
    add r7, r29, r0
    lhz r7, 0x6(r7)
    sth r7, 0x26(r10)
    bl GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
lbl_801E2094:
    addi r28, r28, 0x1
lbl_801E2098:
    clrlwi r0, r28, 24
    cmplw r0, r27
    blt lbl_801E2040
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
lbl_801E20B0:
    addi r29, r31, 0x0
    lwz r3, 0x8(r29)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E20F0
    clrlwi r0, r3, 30
    cmplwi r0, 0x3
    beq lbl_801E20F0
    lbz r3, 0x0(r31)
    lbz r4, 0x1(r29)
    lbz r5, 0x2(r29)
    lbz r6, 0x3(r29)
    lwz r7, 0x4(r29)
    bl GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
    lwz r0, 0x8(r29)
    ori r0, r0, 0x3
    stw r0, 0x8(r29)
lbl_801E20F0:
    lwz r6, 0x0(r30)
    li r5, 0x0
    lwz r0, 0x204(r31)
    lwz r3, 0xc(r6)
    cmplw r3, r0
    bne lbl_801E2130
    addi r4, r31, 0x204
    lwz r3, 0x10(r6)
    lwz r0, 0x4(r4)
    cmplw r3, r0
    bne lbl_801E2130
    lwz r3, 0x14(r6)
    lwz r0, 0x8(r4)
    cmplw r3, r0
    bne lbl_801E2130
    li r5, 0x1
lbl_801E2130:
    cmpwi r5, 0x0
    beq lbl_801E2140
    li r5, 0x1
    b lbl_801E2160
lbl_801E2140:
    lwz r4, 0xc(r6)
    addi r3, r31, 0x204
    lwz r0, 0x10(r6)
    li r5, 0x0
    stw r4, 0x204(r31)
    stw r0, 0x4(r3)
    lwz r0, 0x14(r6)
    stw r0, 0x8(r3)
lbl_801E2160:
    lbz r4, lbl_8049D9A8
    li r0, 0x0
    mr r3, r30
    stb r0, lbl_8049D9A8
    bl CallPrePrimitiveDisplayList__Q34nw4r3g3d6ResShpCFbb
lbl_801E2174:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
extern "C" asm void LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    lwz r0, 0x0(r3)
    lis r31, lbl_803E65E0@ha
    mr r27, r3
    mr r28, r4
    cmpwi r0, 0x0
    mr r29, r5
    addi r31, r31, lbl_803E65E0@l
    beq lbl_801E2464
    lwz r3, 0xc(r31)
    lbz r23, 0x0(r31)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_801E225C
    clrlwi. r0, r3, 31
    bne lbl_801E225C
    cmpwi r23, 0x0
    beq lbl_801E225C
    addi r24, r31, 0xc
    li r25, 0x0
    b lbl_801E2244
lbl_801E21EC:
    clrlwi r3, r25, 24
    add r7, r24, r3
    lbz r0, 0x64(r7)
    cmplwi r0, 0xff
    beq lbl_801E2240
    clrlslwi r0, r0, 24, 2
    clrlslwi r5, r25, 24, 3
    add r4, r24, r0
    li r6, 0x0
    lhz r4, 0x4(r4)
    add r10, r24, r5
    li r5, 0x0
    li r8, 0x0
    sth r4, 0x24(r10)
    li r9, 0x0
    lbz r0, 0x64(r7)
    slwi r0, r0, 2
    add r7, r24, r0
    lhz r7, 0x6(r7)
    sth r7, 0x26(r10)
    bl GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
lbl_801E2240:
    addi r25, r25, 0x1
lbl_801E2244:
    clrlwi r0, r25, 24
    cmplw r0, r23
    blt lbl_801E21EC
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
lbl_801E225C:
    lwz r3, 0x0(r27)
    lwz r18, 0x8(r3)
    srwi. r30, r18, 31
    bne lbl_801E23EC
    cmpwi r28, 0x0
    beq lbl_801E22B8
    mr r3, r28
    li r4, 0x0
    bl GXLoadPosMtxImm
    lwz r3, 0x0(r27)
    lwz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E22E0
    cmpwi r29, 0x0
    beq lbl_801E22A8
    mr r3, r29
    li r4, 0x0
    bl GXLoadNrmMtxImm
    b lbl_801E22E0
lbl_801E22A8:
    mr r3, r28
    li r4, 0x0
    bl GXLoadNrmMtxImm
    b lbl_801E22E0
lbl_801E22B8:
    clrlwi r3, r18, 16
    li r4, 0x0
    bl GXLoadPosMtxIndx
    lwz r3, 0x0(r27)
    lwz r0, 0x30(r3)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E22E0
    clrlwi r3, r18, 16
    li r4, 0x0
    bl GXLoadNrmMtxIndx3x3
lbl_801E22E0:
    cmpwi r18, 0x0
    li r3, 0x1
    blt lbl_801E2404
    clrlwi r0, r18, 16
    addi r22, r31, 0x210
    mulli r19, r0, 0x24
    addi r20, r1, 0x8
    addi r24, r31, 0x230
    li r23, 0x0
    mulli r18, r0, 0x30
    li r21, 0x1e
    li r25, 0x1
    lis r26, lbl_803EBB78@ha
    li r28, 0x3c
    li r29, 0x0
lbl_801E231C:
    lwz r0, 0x0(r22)
    cmpwi r0, 0x1
    bne lbl_801E2384
    lwz r0, 0x4(r24)
    stw r21, 0x0(r20)
    cmpwi r0, 0x0
    beq lbl_801E2340
    add r3, r0, r19
    b lbl_801E2374
lbl_801E2340:
    lbz r0, lbl_8049D9B8
    extsb. r0, r0
    bne lbl_801E2350
    stb r25, lbl_8049D9B8
lbl_801E2350:
    lwz r0, 0x230(r31)
    addi r3, r26, lbl_803EBB78@l
    cmpwi r0, 0x0
    beq lbl_801E2368
    add r4, r0, r18
    b lbl_801E236C
lbl_801E2368:
    li r4, 0x0
lbl_801E236C:
    bl CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    addi r3, r26, lbl_803EBB78@l
lbl_801E2374:
    lwz r4, 0x0(r20)
    bl GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
    li r3, 0x0
    b lbl_801E239C
lbl_801E2384:
    cmpwi r0, 0x2
    bne lbl_801E2398
    stw r29, 0x0(r20)
    li r3, 0x0
    b lbl_801E239C
lbl_801E2398:
    stw r28, 0x0(r20)
lbl_801E239C:
    addi r23, r23, 0x1
    addi r21, r21, 0x3
    cmplwi r23, 0x8
    addi r20, r20, 0x4
    addi r22, r22, 0x4
    blt lbl_801E231C
    cmpwi r3, 0x0
    beq lbl_801E23D8
    lbz r0, lbl_8049D9AC
    cmpwi r0, 0x0
    bne lbl_801E2404
    bl GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
    li r0, 0x1
    stb r0, lbl_8049D9AC
    b lbl_801E2404
lbl_801E23D8:
    addi r3, r1, 0x8
    bl GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
    li r0, 0x0
    stb r0, lbl_8049D9AC
    b lbl_801E2404
lbl_801E23EC:
    lbz r0, lbl_8049D9AC
    cmpwi r0, 0x0
    bne lbl_801E2404
    bl GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
    li r0, 0x1
    stb r0, lbl_8049D9AC
lbl_801E2404:
    addi r28, r31, 0x0
    lwz r3, 0x8(r28)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E2444
    clrlwi r0, r3, 30
    cmplwi r0, 0x3
    beq lbl_801E2444
    lbz r3, 0x0(r31)
    lbz r4, 0x1(r28)
    lbz r5, 0x2(r28)
    lbz r6, 0x3(r28)
    lwz r7, 0x4(r28)
    bl GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
    lwz r0, 0x8(r28)
    ori r0, r0, 0x3
    stw r0, 0x8(r28)
lbl_801E2444:
    lbz r4, lbl_8049D9A8
    li r28, 0x0
    mr r3, r27
    stb r28, lbl_8049D9A8
    bl CallPrimitiveDisplayList__Q34nw4r3g3d6ResShpCFb
    cmpwi r30, 0x0
    beq lbl_801E2464
    stb r28, lbl_8049D9AC
lbl_801E2464:
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType
extern "C" asm void SetScnDependentTexMtxFunc__Q34nw4r3g3d8G3DStateFUlPFPQ34nw4r4math5MTX34ScSc_vQ44nw4r3g3d8G3DState26ScnDependentTexMtxFuncType() {
    nofralloc
    cmplwi r3, 0x4
    blelr
    cmplwi r3, 0x100
    bgelr
    cmpwi r4, 0x0
    beq lbl_801E25CC
    cmpwi r5, 0x4
    blt lbl_801E25B0
    li r5, 0x0
lbl_801E25B0:
    lis r6, lbl_803E6820@ha
    slwi r0, r3, 3
    addi r6, r6, lbl_803E6820@l
    stwx r4, r6, r0
    add r3, r6, r0
    stw r5, 0x4(r3)
    blr
lbl_801E25CC:
    lis r5, DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@ha
    lis r4, lbl_803E6820@ha
    slwi r3, r3, 3
    li r0, 0x0
    addi r4, r4, lbl_803E6820@l
    addi r5, r5, DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@l
    stwx r5, r4, r3
    add r3, r4, r3
    stw r0, 0x4(r3)
    blr
}

// asm_to_cpp: SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi
extern "C" asm void SetFog__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d3Fogi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r3, 0x8(r1)
    blt lbl_801E2688
    cmpwi r4, 0x20
    bge lbl_801E2688
    cmpwi r3, 0x0
    beq lbl_801E2688
    lis r31, lbl_803E7020@ha
    addi r6, r31, lbl_803E7020@l
    lwz r0, 0x4(r6)
    cmpw r0, r4
    bne lbl_801E266C
    mulli r0, r4, 0x30
    li r5, 0x30
    add r4, r6, r0
    addi r4, r4, 0x8
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_801E2688
    li r0, 0x0
    stw r0, lbl_803E7020@l(r31)
lbl_801E266C:
    mulli r0, r30, 0x30
    lis r4, lbl_803E7020@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_803E7020@l
    add r4, r4, r0
    addi r4, r4, 0x8
    bl CopyTo__Q34nw4r3g3d3FogCFPv
lbl_801E2688:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: LoadFog__Q34nw4r3g3d8G3DStateFi
extern "C" asm void LoadFog__Q34nw4r3g3d8G3DStateFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_803E7020@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, lbl_803E7020@l(r4)
    clrlwi. r0, r5, 31
    beq lbl_801E26DC
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_801E26DC
    addi r4, r4, lbl_803E7020@l
    lwz r0, 0x4(r4)
    cmpw r3, r0
    beq lbl_801E274C
lbl_801E26DC:
    cmpwi r3, 0x0
    blt lbl_801E26EC
    cmpwi r3, 0x20
    blt lbl_801E2714
lbl_801E26EC:
    lfs f1, lbl_804A1D5C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    fmr f2, f1
    li r3, 0x0
    fmr f3, f1
    fmr f4, f1
    bl GXSetFog
    b lbl_801E2734
lbl_801E2714:
    mulli r0, r31, 0x30
    lis r4, lbl_803E7020@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_803E7020@l
    add r4, r4, r0
    addi r4, r4, 0x8
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    bl SetGP__Q34nw4r3g3d3FogCFv
lbl_801E2734:
    lis r4, lbl_803E7020@ha
    lwz r0, lbl_803E7020@l(r4)
    addi r3, r4, lbl_803E7020@l
    stw r31, 0x4(r3)
    ori r0, r0, 0x3
    stw r0, lbl_803E7020@l(r4)
lbl_801E274C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GetLightObj__Q34nw4r3g3d8G3DStateFi
extern "C" asm void GetLightObj__Q34nw4r3g3d8G3DStateFi() {
    nofralloc
    cmpwi r3, 0x0
    blt lbl_801E2798
    cmpwi r3, 0x80
    bge lbl_801E2798
    mulli r0, r3, 0x44
    lis r3, lbl_803E7634@ha
    addi r3, r3, lbl_803E7634@l
    add r3, r3, r0
    addi r3, r3, 0x2c
    blr
lbl_801E2798:
    li r3, 0x0
    blr
}

// asm_to_cpp: SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib
extern "C" asm void SetCameraProjMtx__Q34nw4r3g3d8G3DStateFRCQ34nw4r3g3d6Cameraib() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r4, 0x20
    mr r26, r3
    mr r27, r4
    mr r28, r5
    bge lbl_801E2890
    cmpwi r4, 0x0
    blt lbl_801E2890
    mulli r29, r4, 0x30
    lis r30, lbl_803EA060@ha
    addi r31, r30, lbl_803EA060@l
    add r4, r31, r29
    addi r4, r4, 0x34
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    slwi r0, r27, 6
    mr r3, r26
    add r4, r31, r0
    addi r4, r4, 0x634
    bl GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
    add r4, r31, r29
    mr r3, r26
    addi r4, r4, 0xe34
    bl GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    add r4, r31, r29
    mr r3, r26
    addi r4, r4, 0x1434
    bl GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    cmpwi r28, 0x0
    beq lbl_801E2890
    lhz r0, lbl_803EA060@l(r30)
    sth r27, 0x2(r31)
    rlwinm r0, r0, 0, 16, 30
    sth r0, lbl_803EA060@l(r30)
lbl_801E2890:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801E292C
extern "C" asm void fn_801E292C() {
    nofralloc
    cmpwi r3, 0x20
    bge lbl_801E2954
    cmpwi r3, 0x0
    blt lbl_801E2954
    mulli r0, r3, 0x30
    lis r3, lbl_803EA060@ha
    addi r3, r3, lbl_803EA060@l
    add r3, r3, r0
    addi r3, r3, 0x34
    blr
lbl_801E2954:
    li r3, 0x0
    blr
}

// asm_to_cpp: SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj
extern "C" asm void SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_14
    lbz r15, 0x29(r3)
    lis r4, lbl_803EBA94@ha
    addi r18, r4, lbl_803EBA94@l
    lbz r0, 0x27(r3)
    stw r15, 0x40(r1)
    lbz r15, 0x2a(r3)
    stb r0, 0x27(r18)
    lwz r0, 0x40(r1)
    stw r15, 0x8(r1)
    lbz r15, 0x2b(r3)
    stb r0, 0x29(r18)
    lwz r0, 0x8(r1)
    stw r15, 0xc(r1)
    lbz r15, 0x2c(r3)
    stb r0, 0x2a(r18)
    lwz r0, 0xc(r1)
    stw r15, 0x10(r1)
    lbz r15, 0x2d(r3)
    stb r0, 0x2b(r18)
    lwz r0, 0x10(r1)
    stw r15, 0x14(r1)
    lbz r15, 0x2e(r3)
    stb r0, 0x2c(r18)
    lwz r0, 0x14(r1)
    stw r15, 0x18(r1)
    lbz r15, 0x2f(r3)
    stb r0, 0x2d(r18)
    lwz r0, 0x18(r1)
    stw r15, 0x1c(r1)
    lbz r15, 0x30(r3)
    stb r0, 0x2e(r18)
    lwz r0, 0x1c(r1)
    stw r15, 0x20(r1)
    lbz r15, 0x31(r3)
    stb r0, 0x2f(r18)
    lwz r0, 0x20(r1)
    stw r15, 0x24(r1)
    lbz r15, 0x32(r3)
    stb r0, 0x30(r18)
    lwz r0, 0x24(r1)
    stw r15, 0x28(r1)
    lbz r15, 0x33(r3)
    stb r0, 0x31(r18)
    lwz r0, 0x28(r1)
    stw r15, 0x2c(r1)
    lbz r15, 0x34(r3)
    stb r0, 0x32(r18)
    lwz r0, 0x2c(r1)
    stw r15, 0x30(r1)
    lbz r15, 0x35(r3)
    stb r0, 0x33(r18)
    lwz r0, 0x30(r1)
    stw r15, 0x34(r1)
    lbz r15, 0x36(r3)
    stb r0, 0x34(r18)
    lwz r0, 0x34(r1)
    stw r15, 0x38(r1)
    lbz r15, 0x37(r3)
    stb r0, 0x35(r18)
    lwz r0, 0x38(r1)
    stw r15, 0x3c(r1)
    lhz r17, 0x4(r3)
    lhz r19, 0x6(r3)
    lhz r20, 0x8(r3)
    lhz r21, 0xa(r3)
    lhz r22, 0xc(r3)
    lhz r23, 0xe(r3)
    lhz r24, 0x10(r3)
    lwz r25, 0x14(r3)
    lbz r26, 0x18(r3)
    lbz r27, 0x19(r3)
    lbz r28, 0x1a(r3)
    lbz r29, 0x1b(r3)
    lbz r30, 0x1c(r3)
    lbz r31, 0x1d(r3)
    lbz r12, 0x1e(r3)
    lbz r11, 0x1f(r3)
    lbz r10, 0x20(r3)
    lbz r9, 0x21(r3)
    lbz r8, 0x22(r3)
    lbz r7, 0x23(r3)
    lbz r6, 0x24(r3)
    lbz r5, 0x25(r3)
    lbz r4, 0x26(r3)
    lbz r14, 0x28(r3)
    lbz r15, 0x38(r3)
    lwz r16, 0x0(r3)
    lis r3, lbl_803EBA94@ha
    stb r0, 0x36(r18)
    lwz r0, 0x3c(r1)
    stw r16, lbl_803EBA94@l(r3)
    sth r17, 0x4(r18)
    sth r19, 0x6(r18)
    sth r20, 0x8(r18)
    sth r21, 0xa(r18)
    sth r22, 0xc(r18)
    sth r23, 0xe(r18)
    sth r24, 0x10(r18)
    stw r25, 0x14(r18)
    stb r26, 0x18(r18)
    stb r27, 0x19(r18)
    stb r28, 0x1a(r18)
    stb r29, 0x1b(r18)
    stb r30, 0x1c(r18)
    stb r31, 0x1d(r18)
    stb r12, 0x1e(r18)
    stb r11, 0x1f(r18)
    stb r10, 0x20(r18)
    stb r9, 0x21(r18)
    stb r8, 0x22(r18)
    stb r7, 0x23(r18)
    stb r6, 0x24(r18)
    stb r5, 0x25(r18)
    stb r4, 0x26(r18)
    stb r14, 0x28(r18)
    stb r0, 0x37(r18)
    stb r15, 0x38(r18)
    addi r11, r1, 0x90
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: Invalidate__Q34nw4r3g3d8G3DStateFUl
extern "C" asm void Invalidate__Q34nw4r3g3d8G3DStateFUl() {
    nofralloc
    clrlwi. r0, r3, 31
    lis r4, lbl_803E65E0@ha
    addi r4, r4, lbl_803E65E0@l
    beq lbl_801E2B88
    li r0, 0x0
    addi r5, r4, 0x80
    stb r0, 0x100(r5)
    stw r0, 0xc(r4)
lbl_801E2B88:
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_801E2B9C
    addi r5, r4, 0x1a0
    li r0, 0x0
    sth r0, 0x60(r5)
lbl_801E2B9C:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_801E2BB0
    li r0, 0x0
    stw r0, 0xc(r4)
    stw r0, lbl_8049D9B4
lbl_801E2BB0:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_801E2BE0
    li r7, 0x1
    addi r5, r4, 0x0
    li r6, 0x0
    li r0, 0x2
    stb r7, 0x0(r4)
    stb r6, 0x1(r5)
    stb r7, 0x2(r5)
    stb r6, 0x3(r5)
    stw r0, 0x4(r5)
    stw r6, 0x8(r5)
lbl_801E2BE0:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_801E2BFC
    li r0, 0x0
    addi r5, r4, 0x204
    stw r0, 0x8(r5)
    stw r0, 0x4(r5)
    stw r0, 0x204(r4)
lbl_801E2BFC:
    rlwinm. r0, r3, 0, 26, 26
    beq lbl_801E2C0C
    li r0, 0x0
    stb r0, lbl_8049D9AC
lbl_801E2C0C:
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_801E2C40
    li r0, 0x0
    addi r5, r4, 0x210
    stw r0, 0x1c(r5)
    stw r0, 0x18(r5)
    stw r0, 0x14(r5)
    stw r0, 0x10(r5)
    stw r0, 0xc(r5)
    stw r0, 0x8(r5)
    stw r0, 0x4(r5)
    stw r0, 0x210(r4)
    stw r0, lbl_8049D9B0
lbl_801E2C40:
    rlwinm. r0, r3, 0, 24, 24
    beq lbl_801E2C54
    lwz r0, lbl_8049D9C0
    clrrwi r0, r0, 1
    stw r0, lbl_8049D9C0
lbl_801E2C54:
    rlwinm. r0, r3, 0, 23, 23
    beq lbl_801E2C64
    li r0, 0x0
    stw r0, 0xa40(r4)
lbl_801E2C64:
    rlwinm. r0, r3, 0, 22, 22
    beq lbl_801E2CAC
    addi r5, r4, 0x1054
    li r6, -0x1
    li r0, 0x0
    stw r6, 0x10(r5)
    stw r0, 0x14(r5)
    stw r0, 0x18(r5)
    stw r0, 0x1c(r5)
    stw r0, 0x20(r5)
    stb r6, 0x2b(r5)
    stb r6, 0x2a(r5)
    stb r6, 0x29(r5)
    stb r6, 0x28(r5)
    stb r6, 0x27(r5)
    stb r6, 0x26(r5)
    stb r6, 0x25(r5)
    stb r6, 0x24(r5)
lbl_801E2CAC:
    rlwinm. r0, r3, 0, 21, 21
    beq lbl_801E2CC8
    li r0, 0x0
    addi r3, r4, 0x230
    stw r0, 0x230(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
lbl_801E2CC8:
    li r0, 0x1
    stb r0, lbl_8049D9A8
    blr
}

// asm_to_cpp: SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod
extern "C" asm void SetNrmMapMtx__Q44nw4r3g3d8G3DState11IndMtxOpStdF14_GXIndTexMtxIDPCQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34Q44nw4r3g3d14ResMatMiscData14IndirectMethod() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x1
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r6
    stw r28, 0x20(r1)
    mr r28, r3
    blt lbl_801E2E18
    cmpwi r4, 0x3
    bgt lbl_801E2E18
    cmpwi r7, 0x0
    beq lbl_801E2E18
    cmpwi r7, 0x3
    beq lbl_801E2E18
    subi r6, r4, 0x1
    cmpwi r5, 0x0
    add r4, r3, r6
    li r0, 0x1
    stb r0, 0x4(r4)
    beq lbl_801E2E08
    lfs f0, 0x0(r5)
    mulli r30, r6, 0x30
    lfs f1, lbl_804A1D6C
    cmpwi r7, 0x2
    fneg f0, f0
    add r3, r3, r30
    addi r31, r3, 0x8
    fmuls f0, f1, f0
    stfs f0, 0x8(r3)
    lfs f0, 0x4(r5)
    fneg f0, f0
    fmuls f0, f1, f0
    stfs f0, 0xc(r3)
    lfs f0, 0x8(r5)
    fneg f0, f0
    fmuls f0, f1, f0
    stfs f0, 0x10(r3)
    bne lbl_801E2DE0
    lfs f1, 0x8(r5)
    addi r3, r1, 0x8
    lfs f0, lbl_804A1D68
    mr r4, r3
    lfs f3, 0x4(r5)
    lfs f2, 0x0(r5)
    fsubs f0, f1, f0
    stfs f2, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    bl fn_8030DE44
    lfs f0, 0x8(r1)
    add r3, r28, r30
    lfs f1, lbl_804A1D6C
    fneg f0, f0
    fmuls f0, f1, f0
    stfs f0, 0x18(r3)
    lfs f0, 0xc(r1)
    fneg f0, f0
    fmuls f0, f1, f0
    stfs f0, 0x1c(r3)
    lfs f0, 0x10(r1)
    fneg f0, f0
    fmuls f0, f1, f0
    stfs f0, 0x20(r3)
    b lbl_801E2DF0
lbl_801E2DE0:
    lfs f0, lbl_804A1D5C
    stfs f0, 0x20(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x18(r3)
lbl_801E2DF0:
    add r3, r28, r30
    mr r4, r29
    mr r5, r31
    addi r3, r3, 0x8
    bl PSMTXConcat
    b lbl_801E2E18
lbl_801E2E08:
    mulli r0, r6, 0x30
    add r3, r3, r0
    addi r3, r3, 0x8
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E2E18:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __cl__Q44nw4r3g3d8G3DState11IndMtxOpStdFPQ44nw4r3g3d8G3DState13IndTexMtxInfo
extern "C" asm void __cl__Q44nw4r3g3d8G3DState11IndMtxOpStdFPQ44nw4r3g3d8G3DState13IndTexMtxInfo() {
    nofralloc
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_801E2F00
    lwz r6, 0x8(r3)
    lwz r5, 0xc(r3)
    lwz r0, 0x0(r4)
    stw r6, 0x4(r4)
    ori r0, r0, 0x1
    stw r5, 0x8(r4)
    lwz r6, 0x10(r3)
    lwz r5, 0x14(r3)
    stw r6, 0xc(r4)
    stw r5, 0x10(r4)
    lwz r6, 0x18(r3)
    lwz r5, 0x1c(r3)
    stw r6, 0x14(r4)
    stw r5, 0x18(r4)
    lwz r6, 0x20(r3)
    lwz r5, 0x24(r3)
    stw r6, 0x1c(r4)
    stw r5, 0x20(r4)
    lwz r6, 0x28(r3)
    lwz r5, 0x2c(r3)
    stw r6, 0x24(r4)
    stw r5, 0x28(r4)
    lwz r6, 0x30(r3)
    lwz r5, 0x34(r3)
    stw r6, 0x2c(r4)
    stw r5, 0x30(r4)
    stw r0, 0x0(r4)
lbl_801E2F00:
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    beq lbl_801E2F78
    lwz r6, 0x38(r3)
    lwz r5, 0x3c(r3)
    lwz r0, 0x0(r4)
    stw r6, 0x34(r4)
    ori r0, r0, 0x2
    stw r5, 0x38(r4)
    lwz r6, 0x40(r3)
    lwz r5, 0x44(r3)
    stw r6, 0x3c(r4)
    stw r5, 0x40(r4)
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    stw r6, 0x44(r4)
    stw r5, 0x48(r4)
    lwz r6, 0x50(r3)
    lwz r5, 0x54(r3)
    stw r6, 0x4c(r4)
    stw r5, 0x50(r4)
    lwz r6, 0x58(r3)
    lwz r5, 0x5c(r3)
    stw r6, 0x54(r4)
    stw r5, 0x58(r4)
    lwz r6, 0x60(r3)
    lwz r5, 0x64(r3)
    stw r6, 0x5c(r4)
    stw r5, 0x60(r4)
    stw r0, 0x0(r4)
lbl_801E2F78:
    lbz r0, 0x6(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r6, 0x68(r3)
    lwz r5, 0x6c(r3)
    lwz r0, 0x0(r4)
    stw r6, 0x64(r4)
    ori r0, r0, 0x4
    stw r5, 0x68(r4)
    lwz r6, 0x70(r3)
    lwz r5, 0x74(r3)
    stw r6, 0x6c(r4)
    stw r5, 0x70(r4)
    lwz r6, 0x78(r3)
    lwz r5, 0x7c(r3)
    stw r6, 0x74(r4)
    stw r5, 0x78(r4)
    lwz r6, 0x80(r3)
    lwz r5, 0x84(r3)
    stw r6, 0x7c(r4)
    stw r5, 0x80(r4)
    lwz r6, 0x88(r3)
    lwz r5, 0x8c(r3)
    stw r6, 0x84(r4)
    stw r5, 0x88(r4)
    lwz r5, 0x90(r3)
    lwz r3, 0x94(r3)
    stw r5, 0x8c(r4)
    stw r3, 0x90(r4)
    stw r0, 0x0(r4)
    blr
}

// asm_to_cpp: fn_801E3034
extern "C" asm void fn_801E3034() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x6c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_803E65E0@ha
    addi r31, r31, lbl_803E65E0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    addi r6, r31, 0x0
    addi r3, r31, 0xc
    stw r29, 0x14(r1)
    li r29, 0x2
    stw r28, 0x10(r1)
    li r28, 0x1
    stb r28, lbl_8049D9A8
    stb r28, 0x0(r31)
    stb r30, 0x1(r6)
    stb r28, 0x2(r6)
    stb r30, 0x3(r6)
    stw r29, 0x4(r6)
    stw r30, 0x8(r6)
    bl memset
    lis r8, DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@ha
    lis r6, EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@ha
    addi r10, r31, 0x210
    addi r7, r31, 0x240
    addi r11, r31, 0x204
    addi r9, r31, 0x230
    addi r6, r6, EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@l
    lis r5, ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@ha
    lis r4, EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@ha
    addi r3, r31, 0x80
    addi r12, r31, 0x1a0
    addi r8, r8, DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@l
    addi r5, r5, ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@l
    addi r4, r4, EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc@l
    stb r30, 0x100(r3)
    li r0, 0xfb
    li r3, 0x28
    sth r30, 0x60(r12)
    stw r30, 0x8(r11)
    stw r30, 0x4(r11)
    stw r30, 0x204(r31)
    stb r30, lbl_8049D9AC
    stw r30, lbl_8049D9B0
    stw r30, 0x1c(r10)
    stw r30, 0x18(r10)
    stw r30, 0x14(r10)
    stw r30, 0x10(r10)
    stw r30, 0xc(r10)
    stw r30, 0x8(r10)
    stw r30, 0x4(r10)
    stw r30, 0x210(r31)
    stw r30, lbl_8049D9B4
    stw r30, 0x230(r31)
    stw r30, 0x4(r9)
    stw r30, 0x8(r9)
    stw r8, 0x240(r31)
    stw r30, 0x4(r7)
    stw r6, 0x8(r7)
    stw r28, 0xc(r7)
    stw r5, 0x10(r7)
    stw r29, 0x14(r7)
    stw r6, 0x18(r7)
    stw r28, 0x1c(r7)
    stw r4, 0x20(r7)
    stw r28, 0x24(r7)
    mtctr r0
lbl_801E314C:
    stwx r8, r7, r3
    add r4, r7, r3
    addi r3, r3, 0x8
    stw r30, 0x4(r4)
    bdnz lbl_801E314C
    li r3, 0x0
    addi r29, r31, 0xa40
    li r0, -0x1
    stw r3, 0xa40(r31)
    li r28, 0x0
    li r30, 0x0
    stw r0, 0x4(r29)
lbl_801E317C:
    add r4, r29, r30
    addi r3, r1, 0x8
    addi r4, r4, 0x8
    bl __ct__Q34nw4r3g3d3FogFPQ34nw4r3g3d7FogData
    bl Init__Q34nw4r3g3d3FogFv
    addi r28, r28, 0x1
    addi r30, r30, 0x30
    cmplwi r28, 0x20
    blt lbl_801E317C
    addi r28, r31, 0x1054
    li r6, 0x80
    mr r3, r28
    li r8, 0x80
    addi r4, r28, 0x2c
    addi r5, r28, 0x222c
    addi r7, r28, 0x242c
    bl __ct__Q34nw4r3g3d12LightSettingFPQ34nw4r3g3d8LightObjPQ34nw4r3g3d11AmbLightObjUlPQ34nw4r3g3d12LightSetDataUl
    lis r4, __ct__Q34nw4r3g3d8LightObjFv@ha
    lis r5, __dt__Q34nw4r3g3d8LightObjFv@ha
    addi r3, r28, 0x2c
    li r6, 0x44
    addi r4, r4, __ct__Q34nw4r3g3d8LightObjFv@l
    addi r5, r5, __dt__Q34nw4r3g3d8LightObjFv@l
    li r7, 0x80
    bl __construct_array
    li r0, -0x1
    li r30, 0x0
    lis r4, fn_801E32C8@ha
    stw r0, 0x10(r28)
    mr r3, r28
    addi r5, r31, 0x1048
    stw r30, 0x14(r28)
    addi r4, r4, fn_801E32C8@l
    stw r30, 0x18(r28)
    stw r30, 0x1c(r28)
    stw r30, 0x20(r28)
    stb r0, 0x2b(r28)
    stb r0, 0x2a(r28)
    stb r0, 0x29(r28)
    stb r0, 0x28(r28)
    stb r0, 0x27(r28)
    stb r0, 0x26(r28)
    stb r0, 0x25(r28)
    stb r0, 0x24(r28)
    bl __register_global_object
    addi r3, r31, 0x3a80
    bl fn_801E0908
    lis r3, lbl_80361278@ha
    addi r28, r31, 0x5500
    addi r3, r3, lbl_80361278@l
    la r4, lbl_8049D9C0
    stw r30, lbl_8049D9C0
    addi r5, r28, 0x8
    addi r0, r28, 0x98
    stb r30, 0x4(r4)
    stw r3, 0x0(r28)
lbl_801E325C:
    addi r5, r5, 0x30
    cmplw r5, r0
    blt lbl_801E325C
    addi r3, r28, 0x8
    bl PSMTXIdentity
    addi r3, r28, 0x38
    bl PSMTXIdentity
    addi r3, r28, 0x68
    bl PSMTXIdentity
    li r0, 0x0
    lis r4, __dt__Q44nw4r3g3d8G3DState11IndMtxOpStdFv@ha
    stb r0, 0x6(r28)
    addi r3, r31, 0x5500
    addi r4, r4, __dt__Q44nw4r3g3d8G3DState11IndMtxOpStdFv@l
    addi r5, r31, 0x54f0
    stb r0, 0x5(r28)
    stb r0, 0x4(r28)
    stb r0, 0x7(r28)
    bl __register_global_object
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801E32C8
extern "C" asm void fn_801E32C8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_801E3314
    lis r4, __dt__Q34nw4r3g3d8LightObjFv@ha
    li r5, 0x44
    addi r4, r4, __dt__Q34nw4r3g3d8LightObjFv@l
    li r6, 0x80
    addi r3, r3, 0x2c
    bl __destroy_arr
    cmpwi r31, 0x0
    ble lbl_801E3314
    mr r3, r30
    bl dtor_80136CFC
lbl_801E3314:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
