#include <nw4r/ef.h>

#include <revolution/MTX.h>

namespace nw4r {
namespace ef {

Emitter::Emitter() : mActivityList(offsetof(ParticleManager, mActivityLink)) {}

Emitter::~Emitter() {}

u32 Emitter::RetireParticleAll() {
    u32 num = 0;
    void* pArray[NW4R_EF_MAX_PARTICLEMANAGER];

    u16 size = UtlistToArray(&mActivityList.mActiveList, pArray,
                             UtlistSize(&mActivityList.mActiveList));

    for (u16 i = 0; i < size; i++) {
        ParticleManager* pManager =
            reinterpret_cast<ParticleManager*>(pArray[i]);

        num += pManager->RetireParticleAll();
    }

    return num;
}

void Emitter::SendClosing() {
    mManagerEF->Closing(this);
}

void Emitter::DestroyFunc() {
    void* pArray[NW4R_EF_MAX_EMITTER];

    if (mForm != NULL) {
        mForm = NULL;
    }

    if (mParameter.mComFlags & EmitterDesc::CMN_FLAG_SYNC_LIFE) {
        RetireParticleAll();
    }

    RetireParticleManagerAll();

    if (mParameter.mComFlags & EmitterDesc::CMN_FLAG_SYNC_LIFE) {
        u16 size =
            UtlistToArray(&mManagerEF->mActivityList.mActiveList, pArray,
                          UtlistSize(&mManagerEF->mActivityList.mActiveList));

        for (u16 i = 0; i < size; i++) {
            Emitter* pEmitter = reinterpret_cast<Emitter*>(pArray[i]);

            for (Emitter* pIt = pEmitter->mParent; pIt != NULL;
                 pIt = pIt->mParent) {

                if (pIt != this) {
                    continue;
                }

                pEmitter->RetireParticleAll();

                if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE) {
                    mManagerEF->RetireEmitter(pEmitter);
                }

                break;
            }
        }
    }
}

bool Emitter::Closing(ParticleManager* pManager) {
    mManagerEF->ParticleManagerRemove(pManager);
    pManager->mManagerEM->UnRef();

    mActivityList.ToClosing(pManager);
    pManager->ChangeLifeStatus(NW4R_EF_LS_CLOSING);

    return true;
}

u32 Emitter::RetireParticleManager(ParticleManager* pManager) {
    if (pManager->GetLifeStatus() != NW4R_EF_LS_ACTIVE) {
        return 0;
    }

    mActivityList.ToWait(pManager);
    pManager->Destroy();
    return 1;
}

u32 Emitter::RetireParticleManagerAll() {
    u32 num = 0;
    void* pArray[NW4R_EF_MAX_PARTICLEMANAGER];

    u16 size = UtlistToArray(&mActivityList.mActiveList, pArray,
                             UtlistSize(&mActivityList.mActiveList));

    for (u16 i = 0; i < size; i++) {
        ParticleManager* pManager =
            reinterpret_cast<ParticleManager*>(pArray[i]);

        if (pManager->GetLifeStatus() != NW4R_EF_LS_ACTIVE) {
            continue;
        }

        num += RetireParticleManager(pManager);
    }

    return num;
}

/******************************************************************************
 * Dummy function required to match float literal order
 ******************************************************************************/
void Emitter::UpdateDatas(EmitterResource* pResource) {
    const EmitterDesc* pDesc = pResource->GetEmitterDesc();

    (void)(pDesc->lodMinEmit / 100.0f);
    (void)(pDesc->emitEmitRandom / 100.0f);
}

bool Emitter::InitializeDatas(EmitterResource* pResource, Effect* pEffect) {
    mTick = 0;
    mLifeStatus = NW4R_EF_LS_ACTIVE;
    mResource = pResource;

    EmitterDesc* pDesc = pResource->GetEmitterDesc();

    mEvalStatus = NW4R_EF_ES_WAIT;
    mCalcRemain = pDesc->emitEmitPast;
    mParameter.mComFlags = pDesc->commonFlag;
    mParameter.mEmitFlags = pDesc->emitFlag;
    mParameter.mEmitSpan = pDesc->emitLife;
    mWaitTime = pDesc->emitEmitStart;
    mEmitIntervalWait = 0;

    mParameter.mLODFar = pDesc->lodFar / 100.0f;
    mParameter.mLODNear = pDesc->lodNear / 100.0f;
    mParameter.mLODMinEmit = pDesc->lodMinEmit / 100.0f;
    mParameter.mEmitRatio = pDesc->emitEmit;
    mParameter.mEmitRandom = pDesc->emitEmitRandom / 100.0f;
    mParameter.mEmitInterval = pDesc->emitEmitInterval;
    mParameter.mEmitEmitDiv = pDesc->emitEmitDiv;
    mParameter.mEmitCount = 0.0f;

    mIsFirstEmission = true;

    mParameter.mTranslate = pDesc->translate;
    mParameter.mScale = pDesc->scale;
    mParameter.mRotate = pDesc->rotate;

    mParameter.mInherit = EmitterParameter::INHERIT_FLAG_SCALE |
                          EmitterParameter::INHERIT_FLAG_ROT;

    mParameter.mInheritTranslate = 100;

    mParameter.mVelInitVelocityRandom = pDesc->velInitVelocityRandom;
    mParameter.mVelMomentumRandom = pDesc->velMomentumRandom;
    mParameter.mVelPowerRadiationDir = pDesc->velPowerRadiationDir;
    mParameter.mVelPowerYAxis = pDesc->velPowerYAxis;
    mParameter.mVelPowerRandomDir = pDesc->velPowerRandomDir;
    mParameter.mVelPowerNormalDir = pDesc->velPowerNormalDir;
    mParameter.mVelDiffusionEmitterNormal = pDesc->velDiffusionEmitterNormal;
    mParameter.mVelPowerSpecDir = pDesc->velPowerSpecDir;
    mParameter.mVelDiffusionSpecDir = pDesc->velDiffusionSpecDir;
    mParameter.mVelSpecDir = pDesc->velSpecDir;

    (void)Resource::GetInstance(); // unused

    mRandSeed = pDesc->randomSeed;
    if (mRandSeed == 0) {
        mRandSeed = pEffect->mManagerES->mRandom.Rand();
    }

    mRandom.Srand(mRandSeed);

    for (int i = 0; i < NUM_PARAMS; i++) {
        mParameter.mParams[i] = pDesc->commonParam[i];
    }

    mMtxDirty = true;
    mpReferenceParticle = NULL;
    mForm = EmitFormBuilder::Create(pDesc->GetFormType());
    mParent = NULL;
    mManagerEF = NULL;

    return true;
}

bool Emitter::Initialize(Effect* pParent, EmitterResource* pResource,
                         u8 drawWeight) {

    (void)pResource->GetEmitterDesc(); // unused

    ReferencedObject::Initialize();

    mActivityList.Initialize();

    InitializeDatas(pResource, pParent);

    ParticleManager* pManager =
        pParent->mManagerES->GetMemoryManager()->AllocParticleManager();

    if (pManager == NULL) {
        return false;
    }
    if (!pManager->Initialize(this, pResource)) {
        return false;
    }

    mManagerEF = pParent;
    pParent->Ref();
    mActivityList.ToActive(pManager);
    pManager->ChangeLifeStatus(NW4R_EF_LS_ACTIVE);

    pManager->mFlag = 0;

    if (pResource->GetEmitterDesc()->commonFlag &
        EmitterDesc::CMN_FLAG_INHERIT_PTCL_SCALE) {

        pManager->mFlag |= ParticleManager::FLAG_MTX_INHERIT_SCALE;
    }

    if (pResource->GetEmitterDesc()->commonFlag &
        EmitterDesc::CMN_FLAG_INHERIT_PTCL_ROT) {

        pManager->mFlag |= ParticleManager::FLAG_MTX_INHERIT_ROT;
    }

    pManager->mInheritTranslate =
        pResource->GetEmitterDesc()->inheritPtclTranslate;

    pManager->mWeight = drawWeight;
    mManagerEF->ParticleManagerAdd(pManager);

    return true;
}

Emitter* Emitter::CreateEmitter(EmitterResource* pResource,
                                EmitterInheritSetting* pSetting,
                                Particle* pParticle, u16 calcRemain) {

    Emitter* pEmitter =
        mManagerEF->CreateEmitter(pResource, pSetting->weight, 0);

    if (pEmitter == NULL) {
        return NULL;
    }

    pEmitter->mCalcRemain += calcRemain;
    pEmitter->mParent = this;
    pEmitter->mParent->Ref();
    pEmitter->mParameter.mInherit = 0;

    if (mResource->GetEmitterDesc()->commonFlag &
        EmitterDesc::CMN_FLAG_EMIT_INHERIT_SCALE) {

        pEmitter->mParameter.mInherit |= EmitterParameter::INHERIT_FLAG_SCALE;
    }

    if (mResource->GetEmitterDesc()->commonFlag &
        EmitterDesc::CMN_FLAG_EMIT_INHERIT_ROT) {

        pEmitter->mParameter.mInherit |= EmitterParameter::INHERIT_FLAG_ROT;
    }

    pEmitter->mParameter.mInheritTranslate =
        mResource->GetEmitterDesc()->inheritChildEmitTranslate;

    if (pParticle != NULL) {
        math::VEC3 transSave = pEmitter->mParameter.mTranslate;

        pEmitter->mParameter.mTranslate.x = 0.0f;
        pEmitter->mParameter.mTranslate.y = 0.0f;
        pEmitter->mParameter.mTranslate.z = 0.0f;
        pEmitter->SetMtxDirty();

        math::MTX34 mtx;
        math::MTX34 tmp;

        math::MTX34Identity(&mtx);
        math::MTX34RotXYZRad(&mtx, pEmitter->mParameter.mRotate.x,
                             pEmitter->mParameter.mRotate.y,
                             pEmitter->mParameter.mRotate.z);
        math::MTX34Scale(&mtx, &mtx, &pEmitter->mParameter.mScale);

        pEmitter->CalcGlobalMtx(&tmp);
        math::MTX34Inv(&tmp, &tmp);
        math::MTX34Mult(&mtx, &mtx, &tmp);

        pParticle->mParticleManager->CalcGlobalMtx(&tmp);
        math::MTX34Mult(&mtx, &mtx, &tmp);

        math::MTX34Trans(&mtx, &mtx, &pParticle->mParameter.mPosition);
        math::MTX34RotXYZRad(&tmp, pEmitter->mParameter.mRotate.x,
                             pEmitter->mParameter.mRotate.y,
                             pEmitter->mParameter.mRotate.z);
        math::MTX34Scale(&tmp, &tmp, &pEmitter->mParameter.mScale);

        math::MTX34Inv(&tmp, &tmp);
        math::MTX34Mult(&mtx, &mtx, &tmp);

        pEmitter->mParameter.mTranslate.x = transSave.x + mtx._03;
        pEmitter->mParameter.mTranslate.y = transSave.y + mtx._13;
        pEmitter->mParameter.mTranslate.z = transSave.z + mtx._23;
        pEmitter->SetMtxDirty();

        if (pSetting->speed != 0 || pSetting->scale != 0 ||
            pSetting->alpha != 0 || pSetting->color != 0) {

            pEmitter->mpReferenceParticle = pParticle;
            pParticle->Ref();

            pEmitter->mInheritSetting = *pSetting;
        }
    }

    return pEmitter;
}

void Emitter::CreateEmitterTmp(EmitterResource* pResource,
                               EmitterInheritSetting* pSetting,
                               Particle* pParticle, u16 calcRemain) {

    Emitter tempEmitter;

    (void)pResource->GetEmitterDesc(); // unused

    tempEmitter.InitializeDatas(pResource, mManagerEF);
    tempEmitter.mCalcRemain += calcRemain;
    tempEmitter.mManagerEF = mManagerEF;
    tempEmitter.mParent = this;

    Emitter* pEmitter = &tempEmitter;

    if (pSetting->flag && pSetting->speed != 0) {

        math::VEC3 dir;
        math::MTX34 dirMtx;
        math::MTX34 tmpMtx;

        pParticle->mParticleManager->CalcGlobalMtx(&tmpMtx);
        tmpMtx._23 = 0.0f;
        tmpMtx._13 = 0.0f;
        tmpMtx._03 = 0.0f;

        pParticle->GetMoveDir(&dir);
        math::VEC3Transform(&dir, &tmpMtx, &dir);

        if (dir.x != 0.0f || dir.y != 0.0f || dir.z != 0.0f) {
            math::VEC3Normalize(&dir, &dir);

            if (pSetting->speed < 0) {
                math::VEC3Scale(&dir, &dir, -1.0f);
            }

            GetDirMtxY(&dirMtx, dir);
            math::MTX34RotXYZRad(&tmpMtx, pEmitter->mParameter.mRotate.x,
                                 pEmitter->mParameter.mRotate.y,
                                 pEmitter->mParameter.mRotate.z);

            math::MTX34Mult(&dirMtx, &dirMtx, &tmpMtx);
            MtxGetRotation(dirMtx, &pEmitter->mParameter.mRotate);
        }
    }

    math::VEC3 transSave = pEmitter->mParameter.mTranslate;

    pEmitter->mParameter.mTranslate.x = 0.0f;
    pEmitter->mParameter.mTranslate.y = 0.0f;
    pEmitter->mParameter.mTranslate.z = 0.0f;
    pEmitter->SetMtxDirty();

    math::MTX34 mtx;
    math::MTX34 tmp;

    math::MTX34Identity(&mtx);
    math::MTX34RotXYZRad(&mtx, pEmitter->mParameter.mRotate.x,
                         pEmitter->mParameter.mRotate.y,
                         pEmitter->mParameter.mRotate.z);
    math::MTX34Scale(&mtx, &mtx, &pEmitter->mParameter.mScale);

    pEmitter->CalcGlobalMtx(&tmp);
    math::MTX34Inv(&tmp, &tmp);
    math::MTX34Mult(&mtx, &mtx, &tmp);

    pParticle->mParticleManager->CalcGlobalMtx(&tmp);
    math::MTX34Mult(&mtx, &mtx, &tmp);

    math::MTX34Trans(&mtx, &mtx, &pParticle->mParameter.mPosition);
    math::MTX34RotXYZRad(&tmp, pEmitter->mParameter.mRotate.x,
                         pEmitter->mParameter.mRotate.y,
                         pEmitter->mParameter.mRotate.z);
    math::MTX34Scale(&tmp, &tmp, &pEmitter->mParameter.mScale);

    math::MTX34Inv(&tmp, &tmp);
    math::MTX34Mult(&mtx, &mtx, &tmp);

    pEmitter->mParameter.mTranslate.x = transSave.x + mtx._03;
    pEmitter->mParameter.mTranslate.y = transSave.y + mtx._13;
    pEmitter->mParameter.mTranslate.z = transSave.z + mtx._23;
    pEmitter->SetMtxDirty();

    tempEmitter.CalcEmitter();
    tempEmitter.CalcBillboard();

    // clang-format off
    bool inheritS = (mParameter.mComFlags & EmitterDesc::CMN_FLAG_EMIT_INHERIT_SCALE) &&
        (pResource->GetEmitterDesc()->commonFlag & EmitterDesc::CMN_FLAG_INHERIT_PTCL_SCALE);

    bool inheritR = (mParameter.mComFlags & EmitterDesc::CMN_FLAG_EMIT_INHERIT_ROT) &&
        (pResource->GetEmitterDesc()->commonFlag & EmitterDesc::CMN_FLAG_INHERIT_PTCL_ROT);
    // clang-format on

    s8 inheritT;

    const s8 parentChildT =
        mResource->GetEmitterDesc()->inheritChildEmitTranslate;

    const s8 myPtclT = pResource->GetEmitterDesc()->inheritPtclTranslate;

    if (parentChildT == 0 || myPtclT == 0) {
        inheritT = 0;
    } else if (parentChildT == 100) {
        inheritT = myPtclT;
    } else if (myPtclT == 100) {
        inheritT = parentChildT;
    } else {
        inheritT = mResource->GetEmitterDesc()->inheritChildEmitTranslate *
                   pResource->GetEmitterDesc()->inheritPtclTranslate / 100;
    }

    ParticleManager* pManager = FindParticleManager(
        pResource, inheritS, inheritR, inheritT, pSetting->weight);

    if (pManager == NULL) {
        pManager =
            mManagerEF->mManagerES->GetMemoryManager()->AllocParticleManager();

        if (pManager == NULL) {
            return;
        }
        if (!pManager->Initialize(this, pResource)) {
            return;
        }

        mActivityList.ToActive(pManager);
        pManager->ChangeLifeStatus(NW4R_EF_LS_ACTIVE);
        pManager->mFlag = 0;

        if (inheritS) {
            pManager->mFlag |= ParticleManager::FLAG_MTX_INHERIT_SCALE;
        }
        if (inheritR) {
            pManager->mFlag |= ParticleManager::FLAG_MTX_INHERIT_ROT;
        }

        pManager->mInheritTranslate = inheritT;
        pManager->mWeight = pSetting->weight;
        mManagerEF->ParticleManagerAdd(pManager);
    }

    if (pSetting->speed != 0 || pSetting->scale != 0 || pSetting->alpha != 0 ||
        pSetting->color != 0) {

        tempEmitter.mpReferenceParticle = pParticle;
        pParticle->Ref();

        tempEmitter.mInheritSetting = *pSetting;
    } else {
        tempEmitter.mpReferenceParticle = NULL;
    }

    math::MTX34 space;
    math::MTX34 pmMtx;

    pManager->CalcGlobalMtx(&pmMtx);
    math::MTX34Inv(&pmMtx, &pmMtx);

    tempEmitter.CalcGlobalMtx(&space);
    math::MTX34Mult(&space, &pmMtx, &space);

    tempEmitter.Emission(pManager, &space);
    tempEmitter.mParent = NULL;
    tempEmitter.mManagerEF = NULL;

    if (tempEmitter.mpReferenceParticle != NULL) {
        pParticle->UnRef();
        tempEmitter.mpReferenceParticle = NULL;
    }

    if (mLifeStatus != NW4R_EF_LS_ACTIVE &&
        pManager->GetLifeStatus() == NW4R_EF_LS_ACTIVE) {

        RetireParticleManager(pManager);
    }
}

ParticleManager* Emitter::FindParticleManager(EmitterResource* pResource,
                                              bool inheritS, bool inheritR,
                                              s8 inheritT, u8 weight) {

    ParticleManager* pIt = static_cast<ParticleManager*>(
        ut::List_GetFirst(&mActivityList.mActiveList));

    // clang-format off
    for (; pIt != NULL; pIt = static_cast<ParticleManager*>(
            ut::List_GetNext(&mActivityList.mActiveList, pIt)))
    // clang-format on
    {
        if (pIt->mResource != pResource) {
            continue;
        }

        // clang-format off
        if (((pIt->mFlag & EmitterParameter::INHERIT_FLAG_SCALE) != 0) != inheritS ||
            ((pIt->mFlag & EmitterParameter::INHERIT_FLAG_ROT) != 0) != inheritR) {
            continue;
        }
        // clang-format on

        if (pIt->mInheritTranslate != inheritT) {
            continue;
        }

        if (pIt->mWeight != weight) {
            continue;
        }

        return pIt;
    }

    return NULL;
}

static f32 GetLODratio(math::VEC3& rEmitPos, math::VEC3& rCamPos, f32 cameraFar,
                       f32 cameraNear, f32 lodFar, f32 lodNear) {

    f32 Gl, Vl, Nl, Fl;
    f32 LODratio;
    f32 Fl_Nl;

    Vl = cameraFar - cameraNear;
    Gl = std::sqrtf(VEC3DistSq(&rCamPos, &rEmitPos)) - cameraNear;
    Nl = Vl * lodNear;
    Fl = Vl * lodFar;

    if (Nl > Gl) {
        LODratio = 1.0f;
    } else if (Fl < Gl) {
        LODratio = 0.0f;
    } else {
        Fl_Nl = Fl - Nl;

        if (Fl_Nl == 0.0f) {
            LODratio = 0.0f;
        } else {
            LODratio = 1.0f - (Gl - Nl) / Fl_Nl;
        }
    }

    return LODratio;
}

void Emitter::Emission(ParticleManager* pManager, const math::MTX34* pSpace) {
    if (mEmitIntervalWait > 0) {
        mEmitIntervalWait--;
        return;
    }

    mEmitIntervalWait = mParameter.mEmitInterval;

    if (mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_17) {
        mParameter.mEmitCount = mParameter.mEmitEmitDiv;
    } else {
        f32 count;
        if (mParameter.mEmitRandom == 0.0f) {
            count = mParameter.mEmitRatio;
        } else {
            count = mParameter.mEmitRatio +
                    mParameter.mEmitRatio * mParameter.mEmitRandom *
                        (2.0f * mRandom.RandFloat() - 1.0f);
        }

        if (mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_8) {
            EffectSystem* pSystem = mManagerEF->mManagerES;

            // clang-format off
            f32 ratio = GetLODratio(
                mParameter.mTranslate,
                pSystem->mProcessCameraPos,
                pSystem->mProcessCameraFar,
                pSystem->mProcessCameraNear,
                mParameter.mLODFar,
                mParameter.mLODNear);
            // clang-format on

            count *= mParameter.mLODMinEmit +
                     (1.0f - mParameter.mLODMinEmit) * ratio;
        }

        mParameter.mEmitCount += count;

        if (mIsFirstEmission && mParameter.mEmitRatio != 0.0f &&
            mParameter.mEmitCount < 1.0f) {

            mParameter.mEmitCount = 1.0f;
        }
    }

    if (mParameter.mEmitCount >= 1.0f) {
        (void)Resource::GetInstance(); // unused

        EmitterDesc* pDesc = mResource->GetEmitterDesc();

        if (mForm != NULL) {
            mForm->Emission(
                this, pManager, static_cast<int>(mParameter.mEmitCount),
                mParameter.mEmitFlags, mParameter.mParams, pDesc->ptclLife,
                pDesc->ptclLifeRandom / 100.0f, pSpace);
        }

        mParameter.mEmitCount -= static_cast<int>(mParameter.mEmitCount);
    }

    if (mIsFirstEmission) {
        mIsFirstEmission = false;
    }
}

void Emitter::CalcEmitter() {
    if (GetFlagDisableCalc()) {
        return;
    }

    if (mLifeStatus != NW4R_EF_LS_ACTIVE) {
        return;
    }

    if (mEvalStatus != NW4R_EF_ES_WAIT) {
        return;
    }

    if (mWaitTime > 0) {
        return;
    }

    if (!(mParameter.mComFlags & EmitterDesc::CMN_FLAG_MAX_LIFE)) {
        if (mTick >= mParameter.mEmitSpan) {
            mManagerEF->RetireEmitter(this);
            return;
        }
    } else if (mTick == 0xFFFFFFFF) {
        mManagerEF->RetireEmitter(this);
        return;
    }

    u32 animTime = mTick;
    u32 animSpan = (mParameter.mComFlags & EmitterDesc::CMN_FLAG_MAX_LIFE)
                       ? 0xFFFFFFFF
                       : mParameter.mEmitSpan;

    bool mtxDirty = false;

    for (u16 i = mTick == 0 ? 0 : mResource->NumEmitInitTrack();
         i < mResource->NumEmitTrack(); i++) {

        u8* pEmitTrack = mResource->GetEmitTrack(i);

#define pTrackAsHeader reinterpret_cast<AnimCurveHeader*>(pEmitTrack)

        if (pTrackAsHeader->processFlag & AnimCurveHeader::PROC_FLAG_STOP) {
            continue;
        }

        if (pTrackAsHeader->magic != NW4R_EF_MAGIC_ANIMCURVE) {
            continue;
        }

        // Load curveFlag and kindEnable
        u16 ctrl = *reinterpret_cast<u16*>(&pTrackAsHeader->curveFlag);
        u8 kind = pTrackAsHeader->kindType;

        switch (ctrl) {
        case (AC_TYPE_PARTICLE_U8 << 8 | 0b001):
        case (AC_TYPE_PARTICLE_U8 << 8 | 0b111): {
            continue;
        }

        case (AC_TYPE_PARTICLE_F32 << 8 | 0b001): {
            f32* pTarget;

            switch (kind) {
            case AC_TARGET_EMIT_SPEED_ORIG: {
                pTarget = &mParameter.mVelPowerRadiationDir;
                break;
            }

            case AC_TARGET_EMIT_SPEED_YAXIS: {
                pTarget = &mParameter.mVelPowerYAxis;
                break;
            }

            case AC_TARGET_EMIT_SPEED_RANDOM: {
                pTarget = &mParameter.mVelPowerRandomDir;
                break;
            }

            case AC_TARGET_EMIT_EMISSION: {
                pTarget = &mParameter.mEmitRatio;
                break;
            }

            default: {
                continue;
            }
            }

            AnimCurveExecuteF32(pEmitTrack, NULL, pTarget, animTime, mRandSeed,
                                animSpan);
            continue;
        }

        case (AC_TYPE_PARTICLE_F32 << 8 | 0b011): {
            switch (kind) {
            case AC_TARGET_EMIT_SPEED_NORMAL: {
                AnimCurveExecuteF32Vec2(pEmitTrack, NULL,
                                        &mParameter.mVelPowerNormalDir,
                                        animTime, mRandSeed, animSpan);
            }

            default: {
                continue;
            }
            }
        }

        case (AC_TYPE_PARTICLE_F32 << 8 | 0b111): {
            f32* pTarget;

            switch (kind) {
            case AC_TARGET_EMIT_SCALE: {
                pTarget = reinterpret_cast<f32*>(&mParameter.mScale);
                break;
            }

            case AC_TARGET_EMIT_ROTATE: {
                pTarget = reinterpret_cast<f32*>(&mParameter.mRotate);
                break;
            }

            case AC_TARGET_EMIT_TRANSLATE: {
                pTarget = reinterpret_cast<f32*>(&mParameter.mTranslate);
                break;
            }

            default: {
                continue;
            }
            }

            AnimCurveExecuteF32Vec3(pEmitTrack, pTarget, animTime, mRandSeed,
                                    animSpan);

            mtxDirty = true;
            continue;
        }

        default: {
            break;
        }
        }

        switch (ctrl & 0xFF00) {
        case (AC_TYPE_PARTICLE_F32 << 8): {
            f32* pTarget;

            switch (kind) {
            case AC_TARGET_EMIT_SPEED_SPECDIR: {
                pTarget = &mParameter.mVelPowerSpecDir;
                break;
            }

            case AC_TARGET_EMIT_COMMONPARAM: {
                pTarget = mParameter.mParams;
                break;
            }

            default: {
                continue;
            }
            }

            AnimCurveExecuteF32N(pEmitTrack, pTarget, animTime, mRandSeed,
                                 animSpan, ctrl & 0xFF);
            continue;
        }

        default: {
            break;
        }
        }

#undef pTrackAsHeader
    }

    if (mtxDirty) {
        SetMtxDirty();
    }
}

void Emitter::CalcParticle() {
    void* pArray[NW4R_EF_MAX_PARTICLEMANAGER];

    if (GetFlagDisableCalc()) {
        return;
    }

    u16 size = UtlistToArray(&mActivityList.mActiveList, pArray,
                             UtlistSize(&mActivityList.mActiveList));

    for (u16 i = 0; i < size; i++) {
        ParticleManager* pManager =
            reinterpret_cast<ParticleManager*>(pArray[i]);

        pManager->Calc();
    }
}

void Emitter::CalcEmission() {
    if (GetFlagDisableCalc()) {
        return;
    }

    if (mEvalStatus != NW4R_EF_ES_WAIT) {
        return;
    }

    mEvalStatus = NW4R_EF_ES_DONE;

    if (mCalcRemain > 0) {
        mManagerEF->SetFlagExistCalcRemain(true);
    }

    if (mLifeStatus == NW4R_EF_LS_ACTIVE) {
        ParticleManager* pManager = reinterpret_cast<ParticleManager*>(
            ut::List_GetFirst(&mActivityList.mActiveList));

        math::MTX34 space;
        math::MTX34 pmMtx;

        pManager->CalcGlobalMtx(&pmMtx);
        math::MTX34Inv(&pmMtx, &pmMtx);

        CalcGlobalMtx(&space);
        math::MTX34Mult(&space, &pmMtx, &space);

        if (mWaitTime > 0) {
            mWaitTime--;
        } else {
            Emission(pManager, &space);
            mTick++;
        }
    } else {
        if (mWaitTime > 0) {
            mWaitTime--;
        } else {
            mTick++;
        }
    }
}

void Emitter::CalcBillboard() {
    if (mLifeStatus != NW4R_EF_LS_ACTIVE && mLifeStatus != NW4R_EF_LS_WAIT) {
        return;
    }

    if (!(mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_16) &&
        !(mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_15)) {
        return;
    }

    math::MTX34 glbMtx;
    mParameter.mRotate.z = 0.0f;
    mParameter.mRotate.y = 0.0f;
    mParameter.mRotate.x = 0.0f;

    mMtxDirty = true;
    CalcGlobalMtx(&glbMtx);

    math::MTX34 mtx;
    math::MTX34Mult(&mtx, &mManagerEF->mManagerES->mProcessCameraMtx, &glbMtx);

    // clang-format off
    math::MTX34 tmp = mtx;
    tmp._00 = math::FSqrt(tmp._00 * tmp._00 + tmp._10 * tmp._10 + tmp._20 * tmp._20);
    tmp._10 = tmp._20 = 0.0f;

    tmp._11 = math::FSqrt(tmp._01 * tmp._01 + tmp._11 * tmp._11 + tmp._21 * tmp._21);
    tmp._01 = tmp._21 = 0.0f;

    tmp._22 = math::FSqrt(tmp._02 * tmp._02 + tmp._12 * tmp._12 + tmp._22 * tmp._22);
    tmp._02 = tmp._12 = 0.0f;
    // clang-format on

    if ((mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_15)) {
        math::MTX34 base;
        math::MTX34RotXYZRad(&base, NW4R_MATH_PI / 2.0f, 0.0f, 0.0f);
        math::MTX34Mult(&tmp, &tmp, &base);
    }

    math::MTX34Inv(&mtx, &mtx);
    math::MTX34Mult(&mtx, &mtx, &tmp);

    math::VEC3 vec;
    vec.x = 1.0f / mParameter.mScale.x;
    vec.y = 1.0f / mParameter.mScale.y;
    vec.z = 1.0f / mParameter.mScale.z;

    math::MTX34Scale(&mtx, &mtx, &vec);
    math::MTX34Scale(&mtx, &mParameter.mScale, &mtx);
    MtxGetRotation(mtx, &mParameter.mRotate);

    SetMtxDirty();
}

math::MTX34* Emitter::RestructMatrix(math::MTX34* pResult, math::MTX34* pOrig,
                                     bool inheritS, bool inheritR,
                                     s8 inheritT) {

    if (inheritS && inheritR && inheritT == 100) {
        *pResult = *pOrig;
        return pResult;
    }

    if (!inheritS && !inheritR && inheritT == 0) {
        math::MTX34Identity(pResult);
        return pResult;
    }

    math::MTX34Identity(pResult);

    if (inheritT != 0) {
        math::VEC3 trans;
        MtxGetTranslate(*pOrig, &trans);

        math::VEC3Scale(&trans, &trans, static_cast<f32>(inheritT) / 100.0f);
        math::MTX34Trans(pResult, pResult, &trans);
    }

    if (inheritR) {
        math::MTX34 rot;
        MtxGetRotationMtx(*pOrig, &rot);

        math::MTX34Mult(pResult, pResult, &rot);
    }

    if (inheritS) {
        math::VEC3 scale;
        MtxGetScale(*pOrig, &scale);

        math::MTX34Scale(pResult, pResult, &scale);
    }

    return pResult;
}

math::MTX34* Emitter::CalcGlobalMtx(math::MTX34* pResult) {
    if (mMtxDirty) {
        math::MTX34 tmp;

        if (!mParent) {
            math::MTX34Copy(&mMtx, mManagerEF->GetRootMtx());
        } else {
            math::MTX34 orig;
            mParent->CalcGlobalMtx(&orig);

            RestructMatrix(
                &mMtx, &orig,
                mParameter.mInherit & EmitterParameter::INHERIT_FLAG_SCALE,
                mParameter.mInherit & EmitterParameter::INHERIT_FLAG_ROT,
                mParameter.mInheritTranslate);
        }

        math::MTX34Trans(&mMtx, &mMtx, &mParameter.mTranslate);
        math::MTX34RotXYZRad(&tmp, mParameter.mRotate.x, mParameter.mRotate.y,
                             mParameter.mRotate.z);

        math::MTX34Mult(&mMtx, &mMtx, &tmp);
        math::MTX34Scale(&mMtx, &mMtx, &mParameter.mScale);

        mMtxDirty = false;
    }

    if (pResult != NULL) {
        *pResult = mMtx;
        return pResult;
    }

    return &mMtx;
}

void Emitter::SetMtxDirty() {
    mMtxDirty = true;

    ParticleManager* pManager = NULL;
    while ((pManager = reinterpret_cast<ParticleManager*>(ut::List_GetNext(
                &mActivityList.mActiveList, pManager))) != NULL) {

        pManager->SetMtxDirty();
    }

    if (mManagerEF == NULL) {
        return;
    }

    Emitter* pEmitter = NULL;
    while ((pEmitter = reinterpret_cast<Emitter*>(ut::List_GetNext(
                &mManagerEF->mActivityList.mActiveList, pEmitter))) != NULL) {

        if (pEmitter->mMtxDirty) {
            continue;
        }

        for (Emitter* pSearch = pEmitter->mParent; pSearch;
             pSearch = pSearch->mParent) {

            if (pSearch->mParent != this) {
                continue;
            }

            // @bug Marks this emitter and the ancestor's managers, not the child's
            mMtxDirty = true;

            ParticleManager* pManager = NULL;
            while ((pManager = reinterpret_cast<ParticleManager*>(
                        ut::List_GetNext(&pSearch->mActivityList.mActiveList,
                                         pManager))) != NULL) {

                pManager->SetMtxDirty();
            }
        }
    }
}

u16 Emitter::GetNumParticleManager() const {
    return mActivityList.mActiveList.numObjects;
}

ParticleManager* Emitter::GetParticleManager(u16 idx) {
    return reinterpret_cast<ParticleManager*>(
        ut::List_GetNth(&mActivityList.mActiveList, idx));
}

/******************************************************************************
 *
 * For-each implementation
 *
 ******************************************************************************/
struct ForEachContext {
    u32 calls;             // at 0x0
    ForEachFunc pFunc;     // at 0x4
    ForEachParam param;    // at 0x8
    bool ignoreLifeStatus; // at 0xC
};

u32 Emitter::ForeachEmitter(ForEachFunc pFunc, ForEachParam param,
                            bool ignoreLifeStatus) {

    return mManagerEF->ForeachEmitterFrom(pFunc, param, ignoreLifeStatus, this);
}

static void foreachParticleManagerSub(void* pObject, ForEachParam param) {
    Emitter* pEmitter = reinterpret_cast<Emitter*>(pObject);
    ForEachContext* pCtx = reinterpret_cast<ForEachContext*>(param);

    pCtx->calls += pEmitter->ForeachParticleManager(
        pCtx->pFunc, pCtx->param, pCtx->ignoreLifeStatus, false);
}

u32 Emitter::ForeachParticleManager(ForEachFunc pFunc, ForEachParam param,
                                    bool ignoreLifeStatus, bool propogate) {
    u32 calls = 0;

    NW4R_UT_LIST_FOREACH_SAFE (ParticleManager, it, mActivityList.mActiveList, {
        if (!ignoreLifeStatus && it->GetLifeStatus() != NW4R_EF_LS_ACTIVE) {
            continue;
        }

        pFunc(it, param);
        calls++;
    });

    // TODO(kiwi) I think this is doing the same for all sibling emitters?
    if (propogate) {
        ForEachContext data;
        data.calls = 0;
        data.pFunc = pFunc;
        data.param = param;
        data.ignoreLifeStatus = ignoreLifeStatus;

        ForeachEmitter(foreachParticleManagerSub,
                       reinterpret_cast<ForEachParam>(&data), true);

        calls += data.calls;
    }

    return calls;
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049D970;
extern "C" float lbl_804A1700;
extern "C" float lbl_804A1704;
extern "C" float lbl_804A1708;
extern "C" float lbl_804A1710;
extern "C" float lbl_804A1718;
extern "C" float lbl_804A1720;
extern "C" float lbl_804A1724;
extern "C" float lbl_804A1728;
extern "C" float lbl_804A172C;
extern "C" float lbl_804A1730;
extern "C" u8 lbl_803604A8[];
extern "C" void ForeachEmitterFrom__Q34nw4r2ef6EffectFPFPvUl_vUlbPQ34nw4r2ef7Emitter();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void Initialize__Q34nw4r2ef8ResourceFv();
extern "C" void List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs();
extern "C" void MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void RetireEmitter__Q34nw4r2ef6EffectFPQ34nw4r2ef7Emitter();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801A9A28();
extern "C" void fn_801AB06C();
extern "C" void fn_801AB144();
extern "C" void fn_801AB424();
extern "C" void fn_801AB594();
extern "C" void fn_801AB870();
extern "C" void fn_801ABFA8();
extern "C" void fn_801AC0A4();
extern "C" void fn_801AC4E8();
extern "C" void fn_801AC6A0();
extern "C" void fn_801AC728();
extern "C" void fn_801AC83C();
extern "C" void fn_801ACA14();
extern "C" void fn_801ACC48();
extern "C" void fn_801ACD98();
extern "C" void fn_801ACEA8();
extern "C" void fn_801ACEF0();
extern "C" void fn_801ACFD4();
extern "C" void fn_801AE2D8();
extern "C" void fn_801B7FB8();
extern "C" void fn_801B92C0();
extern "C" void fn_801B9344();
extern "C" void fn_801B9448();
extern "C" void fn_801B955C();
extern "C" void fn_801B96C8();
extern "C" void fn_801B96E4();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9E1C();
extern "C" void fn_801B9F88();
extern "C" void fn_801BA008();
extern "C" void fn_801BA090();
extern "C" void fn_801BA138();
extern "C" void fn_8030D7E0();
extern "C" void fn_8030E000();

// asm_to_cpp: fn_801AB06C
extern "C" asm void fn_801AB06C() {
    nofralloc
    stwu r1, -0x1030(r1)
    mflr r0
    stw r0, 0x1034(r1)
    addi r11, r1, 0x1030
    bl _savegpr_25
    lhz r5, 0xc8(r3)
    mr r25, r3
    addi r4, r1, 0x8
    li r28, 0x0
    addi r3, r3, 0xc0
    bl fn_801B92C0
    addi r29, r1, 0x8
    clrlwi r31, r3, 16
    li r27, 0x0
    li r30, 0x2
    b lbl_801AB11C
lbl_801AB0AC:
    clrlslwi r0, r27, 16, 2
    lwzx r26, r29, r0
    lwz r0, 0xc(r26)
    cmpwi r0, 0x1
    bne lbl_801AB118
    beq lbl_801AB0CC
    li r0, 0x0
    b lbl_801AB114
lbl_801AB0CC:
    lhz r4, 0xd8(r25)
    mr r3, r26
    subi r0, r4, 0x1
    sth r0, 0xd8(r25)
    lwz r12, 0x1c(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    stw r30, 0xc(r26)
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    bne lbl_801AB110
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801AB110:
    li r0, 0x1
lbl_801AB114:
    add r28, r28, r0
lbl_801AB118:
    addi r27, r27, 0x1
lbl_801AB11C:
    clrlwi r0, r27, 16
    cmplw r0, r31
    blt lbl_801AB0AC
    addi r11, r1, 0x1030
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x1034(r1)
    mtlr r0
    addi r1, r1, 0x1030
    blr
}

// asm_to_cpp: fn_801AB144
extern "C" asm void fn_801AB144() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r8, 0x4330
    li r7, 0x0
    stw r0, 0x34(r1)
    li r6, 0x1
    lfd f4, lbl_804A1710
    li r0, 0x3
    stw r31, 0x2c(r1)
    addi r31, r4, 0x8
    lfs f3, lbl_804A1700
    stw r30, 0x28(r1)
    mr r30, r5
    lfd f2, lbl_804A1718
    stw r29, 0x24(r1)
    mr r29, r3
    lfs f0, lbl_804A1704
    stw r28, 0x20(r1)
    stw r7, 0xe4(r3)
    stw r6, 0xc(r3)
    stw r4, 0xb8(r3)
    stw r7, 0xb4(r3)
    lhz r4, 0x1e(r4)
    stw r8, 0x8(r1)
    sth r4, 0xe8(r3)
    lwz r4, 0x0(r31)
    stw r8, 0x10(r1)
    stw r4, 0x20(r3)
    lwz r4, 0x4(r31)
    stw r4, 0x24(r3)
    lhz r4, 0x8(r31)
    sth r4, 0x3c(r3)
    lhz r4, 0x14(r31)
    sth r4, 0xde(r3)
    sth r7, 0xe0(r3)
    lbz r4, 0x85(r31)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x44(r3)
    lbz r4, 0x84(r31)
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x40(r3)
    lbz r4, 0x86(r31)
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fdivs f1, f1, f3
    stfs f1, 0x48(r3)
    lfs f1, 0x10(r31)
    stfs f1, 0x28(r3)
    lbz r4, 0xf(r31)
    extsb r4, r4
    xoris r4, r4, 0x8000
    stw r4, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f3
    stfs f1, 0x2c(r3)
    lhz r4, 0x18(r31)
    sth r4, 0x30(r3)
    lhz r4, 0x34(r31)
    sth r4, 0x32(r3)
    lbz r4, 0xe(r31)
    extsb r4, r4
    stfs f0, 0x38(r3)
    xoris r4, r4, 0x8000
    stw r4, 0xc(r1)
    lfd f0, 0x8(r1)
    stb r6, 0xdc(r3)
    fsubs f0, f0, f2
    fdivs f0, f0, f3
    stfs f0, 0x34(r3)
    lfs f0, 0x78(r31)
    stfs f0, 0x90(r3)
    lfs f0, 0x7c(r31)
    stfs f0, 0x94(r3)
    lfs f0, 0x80(r31)
    stfs f0, 0x98(r3)
    lfs f0, 0x60(r31)
    stfs f0, 0x9c(r3)
    lfs f0, 0x64(r31)
    stfs f0, 0xa0(r3)
    lfs f0, 0x68(r31)
    stfs f0, 0xa4(r3)
    lfs f0, 0x6c(r31)
    stfs f0, 0xa8(r3)
    lfs f0, 0x70(r31)
    stfs f0, 0xac(r3)
    lfs f0, 0x74(r31)
    stfs f0, 0xb0(r3)
    stb r0, 0x64(r3)
    li r0, 0x64
    stb r0, 0x65(r3)
    lbz r0, 0x36(r31)
    stb r0, 0x66(r3)
    lbz r0, 0x37(r31)
    stb r0, 0x67(r3)
    lfs f0, 0x38(r31)
    stfs f0, 0x68(r3)
    lfs f0, 0x3c(r31)
    stfs f0, 0x6c(r3)
    lfs f0, 0x40(r31)
    stfs f0, 0x70(r3)
    lfs f0, 0x44(r31)
    stfs f0, 0x74(r3)
    lfs f0, 0x48(r31)
    stfs f0, 0x78(r3)
    lfs f0, 0x4c(r31)
    stfs f0, 0x7c(r3)
    lfs f0, 0x50(r31)
    stfs f0, 0x80(r3)
    lfs f0, 0x54(r31)
    stfs f0, 0x84(r3)
    lfs f0, 0x58(r31)
    stfs f0, 0x88(r3)
    lfs f0, 0x5c(r31)
    stfs f0, 0x8c(r3)
    bl Initialize__Q34nw4r2ef8ResourceFv
    lwz r3, 0x88(r31)
    clrlwi. r0, r3, 16
    sth r3, 0xea(r29)
    bne lbl_801AB36C
    lwz r4, 0x20(r30)
    lis r3, 0x3
    addi r0, r3, 0x43fd
    addis r4, r4, 0x1
    lwz r3, -0x3fe4(r4)
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    stw r0, -0x3fe4(r4)
    srwi r0, r0, 16
    sth r0, 0xea(r29)
lbl_801AB36C:
    lhz r3, 0xea(r29)
    li r4, 0x0
    li r0, 0x1
    li r28, 0x0
    stw r3, 0xec(r29)
    lfs f0, 0x1c(r31)
    stfs f0, 0x4c(r29)
    lfs f0, 0x20(r31)
    stfs f0, 0x50(r29)
    lfs f0, 0x24(r31)
    stfs f0, 0x54(r29)
    lfs f0, 0x28(r31)
    stfs f0, 0x58(r29)
    lfs f0, 0x2c(r31)
    stfs f0, 0x5c(r29)
    lfs f0, 0x30(r31)
    stfs f0, 0x60(r29)
    stb r0, 0x120(r29)
    stw r4, 0xf8(r29)
    lwz r3, 0x20(r30)
    lwz r0, 0x4(r31)
    lwz r3, 0xc(r3)
    clrlwi r4, r0, 24
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lfs f0, lbl_804A1708
    stw r3, 0xf0(r29)
    li r3, 0x1
    stw r28, 0xf4(r29)
    stw r28, 0xbc(r29)
    stfs f0, 0x11c(r29)
    stfs f0, 0x118(r29)
    stfs f0, 0x114(r29)
    stfs f0, 0x110(r29)
    stfs f0, 0x10c(r29)
    stfs f0, 0x108(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801AB424
extern "C" asm void fn_801AB424() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    li r27, 0x1
    mr r31, r4
    mr r29, r5
    stw r26, 0x10(r3)
    mr r28, r3
    mr r30, r6
    mr r4, r29
    stw r27, 0xc(r3)
    mr r5, r31
    stw r26, 0xc0(r3)
    sth r26, 0xc8(r3)
    stw r26, 0xc4(r3)
    stw r26, 0xcc(r3)
    sth r26, 0xd4(r3)
    stw r26, 0xd0(r3)
    sth r26, 0xd8(r3)
    bl fn_801AB144
    stw r31, 0xbc(r28)
    lwz r3, 0x20(r31)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AB4B0
    li r3, 0x0
    b lbl_801AB57C
lbl_801AB4B0:
    lwz r12, 0x1c(r3)
    mr r4, r28
    mr r5, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801AB4D8
    li r3, 0x0
    b lbl_801AB57C
lbl_801AB4D8:
    lwz r6, 0xbc(r28)
    mr r4, r31
    addi r3, r28, 0xc0
    lwz r5, 0x10(r6)
    addi r0, r5, 0x1
    stw r0, 0x10(r6)
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r3, 0xd8(r28)
    addi r0, r3, 0x1
    sth r0, 0xd8(r28)
    stw r27, 0xc(r31)
    stw r26, 0x28(r31)
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801AB520
    lwz r0, 0x28(r31)
    ori r0, r0, 0x1
    stw r0, 0x28(r31)
lbl_801AB520:
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801AB538
    lwz r0, 0x28(r31)
    ori r0, r0, 0x2
    stw r0, 0x28(r31)
lbl_801AB538:
    lbz r0, 0x22(r29)
    stb r0, 0x88(r31)
    lwz r0, 0x8(r29)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801AB558
    lwz r0, 0x28(r31)
    ori r0, r0, 0x4
    stw r0, 0x28(r31)
lbl_801AB558:
    stb r30, 0x89(r31)
    mr r5, r31
    lwz r4, 0xbc(r28)
    lwz r3, 0x9c(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r3, 0x1
lbl_801AB57C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801AB594
extern "C" asm void fn_801AB594() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lwz r0, 0x8(r4)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    rlwinm. r0, r0, 0, 1, 1
    mr r26, r7
    mr r30, r8
    bne lbl_801AB5D0
    li r3, 0x0
    b lbl_801AB858
lbl_801AB5D0:
    lwz r3, 0xbc(r3)
    li r6, 0x0
    lbz r5, 0x5(r5)
    bl fn_801A9A28
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801AB5F4
    li r3, 0x0
    b lbl_801AB858
lbl_801AB5F4:
    lhz r4, 0xe8(r3)
    li r0, 0x0
    add r4, r4, r26
    sth r4, 0xe8(r3)
    stw r27, 0xf4(r3)
    lwz r4, 0x10(r27)
    addi r4, r4, 0x1
    stw r4, 0x10(r27)
    stb r0, 0x64(r3)
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_801AB630
    lbz r0, 0x64(r3)
    ori r0, r0, 0x1
    stb r0, 0x64(r3)
lbl_801AB630:
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801AB648
    lbz r0, 0x64(r3)
    ori r0, r0, 0x2
    stb r0, 0x64(r3)
lbl_801AB648:
    lwz r4, 0xb8(r27)
    lbz r0, 0x23(r4)
    stb r0, 0x65(r3)
    lwz r0, 0x20(r27)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_801AB66C
    lbz r0, 0x64(r3)
    ori r0, r0, 0x4
    stb r0, 0x64(r3)
lbl_801AB66C:
    lwz r5, 0x90(r3)
    lwz r4, 0x94(r3)
    lwz r0, 0x98(r3)
    lfs f0, lbl_804A1704
    stw r5, 0x8(r1)
    stfs f0, 0x90(r3)
    stfs f0, 0x94(r3)
    stfs f0, 0x98(r3)
    mr r3, r31
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_801ACD98
    addi r3, r1, 0x48
    bl PSMTXIdentity
    lfs f1, 0xa8(r31)
    addi r3, r1, 0x48
    lfs f2, 0xac(r31)
    lfs f3, 0xb0(r31)
    bl fn_801B9E1C
    addi r3, r1, 0x48
    addi r5, r31, 0x9c
    mr r4, r3
    bl fn_801B9F88
    mr r3, r31
    addi r4, r1, 0x18
    bl fn_801ACC48
    addi r3, r1, 0x18
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
    cmpwi r29, 0x0
    beq lbl_801AB714
    lwz r3, 0xc8(r29)
    addi r4, r1, 0x18
    bl fn_801B7FB8
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
lbl_801AB714:
    cmpwi r30, 0x0
    bne lbl_801AB738
    cmpwi r29, 0x0
    beq lbl_801AB748
    addi r3, r1, 0x48
    addi r5, r29, 0xac
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801AB748
lbl_801AB738:
    addi r3, r1, 0x48
    mr r5, r30
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801AB748:
    lfs f1, 0xa8(r31)
    addi r3, r1, 0x18
    lfs f2, 0xac(r31)
    lfs f3, 0xb0(r31)
    bl fn_801B9E1C
    addi r3, r1, 0x18
    addi r5, r31, 0x9c
    mr r4, r3
    bl fn_801B9F88
    addi r3, r1, 0x18
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x48
    addi r4, r1, 0x18
    mr r5, r3
    bl PSMTXConcat
    lfs f1, 0x8(r1)
    mr r3, r31
    lfs f0, 0x54(r1)
    lfs f2, 0xc(r1)
    fadds f0, f1, f0
    lfs f1, 0x10(r1)
    stfs f0, 0x90(r31)
    lfs f0, 0x64(r1)
    fadds f0, f2, f0
    stfs f0, 0x94(r31)
    lfs f0, 0x74(r1)
    fadds f0, f1, f0
    stfs f0, 0x98(r31)
    bl fn_801ACD98
    lha r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x2(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x3(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_801AB7FC
    lbz r0, 0x7(r28)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801AB854
lbl_801AB7FC:
    stw r29, 0xf8(r31)
    lwz r3, 0x10(r29)
    addi r0, r3, 0x1
    stw r0, 0x10(r29)
    lha r0, 0x0(r28)
    sth r0, 0xfc(r31)
    lbz r0, 0x2(r28)
    stb r0, 0xfe(r31)
    lbz r0, 0x3(r28)
    stb r0, 0xff(r31)
    lbz r0, 0x4(r28)
    stb r0, 0x100(r31)
    lbz r0, 0x5(r28)
    stb r0, 0x101(r31)
    lbz r0, 0x6(r28)
    stb r0, 0x102(r31)
    lbz r0, 0x7(r28)
    stb r0, 0x103(r31)
    lbz r0, 0x8(r28)
    stb r0, 0x104(r31)
    lbz r0, 0x9(r28)
    stb r0, 0x105(r31)
lbl_801AB854:
    mr r3, r31
lbl_801AB858:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_801AB870
extern "C" asm void fn_801AB870() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    addi r11, r1, 0x2d0
    bl _savegpr_23
    lwz r0, 0x8(r4)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    rlwinm. r0, r0, 0, 1, 1
    mr r26, r6
    mr r29, r7
    mr r27, r8
    bne lbl_801AB8B0
    li r3, 0x0
    b lbl_801ABF90
lbl_801AB8B0:
    lis r5, lbl_803604A8@ha
    addi r3, r1, 0x210
    addi r5, r5, lbl_803604A8@l
    li r4, 0x14
    stw r5, 0x16c(r1)
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r3, r1, 0x21c
    li r4, 0x14
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r28, 0x0
    mr r4, r24
    sth r28, 0x228(r1)
    addi r3, r1, 0x150
    lwz r5, 0xbc(r23)
    bl fn_801AB144
    lhz r0, 0x238(r1)
    add r0, r0, r29
    sth r0, 0x238(r1)
    lwz r0, 0xbc(r23)
    stw r0, 0x20c(r1)
    stw r23, 0x244(r1)
    stb r28, 0x1b4(r1)
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 19, 19
    beq lbl_801AB91C
    ori r0, r28, 0x1
    stb r0, 0x1b4(r1)
lbl_801AB91C:
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_801AB934
    lbz r0, 0x1b4(r1)
    ori r0, r0, 0x2
    stb r0, 0x1b4(r1)
lbl_801AB934:
    lwz r3, 0xb8(r23)
    lbz r3, 0x15(r3)
    extsb. r0, r3
    stb r3, 0x1b5(r1)
    beq lbl_801AB950
    li r0, 0x64
    stb r0, 0x1b5(r1)
lbl_801AB950:
    lwz r0, 0x20(r23)
    rlwinm. r0, r0, 0, 20, 20
    beq lbl_801AB968
    lbz r0, 0x1b4(r1)
    ori r0, r0, 0x4
    stb r0, 0x1b4(r1)
lbl_801AB968:
    lbz r0, 0x7(r25)
    addi r28, r1, 0x150
    clrlwi. r0, r0, 31
    beq lbl_801ABA60
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_801ABA60
    lwz r3, 0xc8(r26)
    addi r4, r1, 0xf0
    bl fn_801B7FB8
    lfs f0, lbl_804A1704
    addi r4, r1, 0x20
    mr r5, r4
    addi r3, r1, 0xf0
    stfs f0, 0x11c(r1)
    stfs f0, 0x10c(r1)
    stfs f0, 0xfc(r1)
    opword 0xE05A00AC
    opword 0xE03A00B8
    opword 0x10020828
    opword 0xE05A80B4
    opword 0xE03A80C0
    opword 0xF0010008
    opword 0x10020828
    lfs f2, 0x8(r1)
    opword 0xF0018010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_8030D7E0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801ABA60
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    bge lbl_801ABA24
    lfs f0, lbl_804A1720
    opword 0xE0410020
    opword 0x10220018
    opword 0xE0418028
    opword 0xF0210020
    opword 0x10220018
    opword 0xF0218028
lbl_801ABA24:
    addi r3, r1, 0x120
    addi r4, r1, 0x20
    bl fn_801B9344
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0xf0
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0x120
    addi r4, r1, 0xf0
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x120
    addi r4, r28, 0xa8
    bl fn_801B955C
lbl_801ABA60:
    lwz r5, 0x1e0(r1)
    mr r3, r28
    lwz r4, 0x1e4(r1)
    lfs f0, lbl_804A1704
    lwz r0, 0x1e8(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r0, 0x1c(r1)
    stfs f0, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    stfs f0, 0x1e8(r1)
    bl fn_801ACD98
    addi r3, r1, 0xc0
    bl PSMTXIdentity
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0xc0
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0xc0
    addi r5, r28, 0x9c
    mr r4, r3
    bl fn_801B9F88
    mr r3, r28
    addi r4, r1, 0x90
    bl fn_801ACC48
    addi r3, r1, 0x90
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
    cmpwi r26, 0x0
    beq lbl_801ABB08
    lwz r3, 0xc8(r26)
    addi r4, r1, 0x90
    bl fn_801B7FB8
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
lbl_801ABB08:
    cmpwi r27, 0x0
    bne lbl_801ABB2C
    cmpwi r26, 0x0
    beq lbl_801ABB3C
    addi r3, r1, 0xc0
    addi r5, r26, 0xac
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801ABB3C
lbl_801ABB2C:
    addi r3, r1, 0xc0
    mr r5, r27
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ABB3C:
    lfs f1, 0x1f8(r1)
    addi r3, r1, 0x90
    lfs f2, 0x1fc(r1)
    lfs f3, 0x200(r1)
    bl fn_801B9E1C
    addi r3, r1, 0x90
    addi r5, r28, 0x9c
    mr r4, r3
    bl fn_801B9F88
    addi r3, r1, 0x90
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0xc0
    addi r4, r1, 0x90
    mr r5, r3
    bl PSMTXConcat
    lfs f1, 0x14(r1)
    mr r3, r28
    lfs f0, 0xcc(r1)
    lfs f3, 0x18(r1)
    fadds f4, f1, f0
    lfs f2, 0xdc(r1)
    lfs f1, 0x1c(r1)
    lfs f0, 0xec(r1)
    fadds f2, f3, f2
    stfs f4, 0x1e0(r1)
    fadds f0, f1, f0
    stfs f2, 0x1e4(r1)
    stfs f0, 0x1e8(r1)
    bl fn_801ACD98
    addi r3, r1, 0x150
    bl fn_801AC4E8
    addi r3, r1, 0x150
    bl fn_801AC83C
    lwz r3, 0x20(r23)
    li r31, 0x0
    rlwinm. r0, r3, 0, 19, 19
    beq lbl_801ABBE4
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_801ABBE4
    li r31, 0x1
lbl_801ABBE4:
    rlwinm. r0, r3, 0, 18, 18
    li r30, 0x0
    beq lbl_801ABC00
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_801ABC00
    li r30, 0x1
lbl_801ABC00:
    rlwinm. r0, r3, 0, 20, 20
    li r29, 0x1
    bne lbl_801ABC1C
    lwz r0, 0x8(r24)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_801ABC1C
    li r29, 0x0
lbl_801ABC1C:
    lwz r3, 0xb8(r23)
    lbz r0, 0x22(r24)
    lbz r3, 0x15(r3)
    extsb r28, r0
    extsb. r0, r3
    beq lbl_801ABC3C
    cmpwi r28, 0x0
    bne lbl_801ABC44
lbl_801ABC3C:
    li r28, 0x0
    b lbl_801ABC80
lbl_801ABC44:
    cmpwi r0, 0x64
    bne lbl_801ABC50
    b lbl_801ABC80
lbl_801ABC50:
    cmpwi r28, 0x64
    bne lbl_801ABC60
    mr r28, r0
    b lbl_801ABC80
lbl_801ABC60:
    mullw r0, r0, r28
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    extsb r28, r0
lbl_801ABC80:
    lbz r27, 0x5(r25)
    addi r3, r23, 0xc0
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    b lbl_801ABCF8
lbl_801ABC94:
    lwz r0, 0x24(r3)
    cmplw r0, r24
    bne lbl_801ABCEC
    lwz r5, 0x28(r3)
    clrlwi r0, r5, 31
    cmplw r0, r31
    bne lbl_801ABCEC
    extrwi r0, r5, 1, 30
    cmplw r0, r30
    bne lbl_801ABCEC
    lbz r4, 0x88(r3)
    extsb r0, r28
    extsb r4, r4
    cmpw r4, r0
    bne lbl_801ABCEC
    extrwi r0, r5, 1, 29
    cmplw r0, r29
    bne lbl_801ABCEC
    lbz r0, 0x89(r3)
    cmplw r0, r27
    bne lbl_801ABCEC
    b lbl_801ABD04
lbl_801ABCEC:
    mr r4, r3
    addi r3, r23, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
lbl_801ABCF8:
    cmpwi r3, 0x0
    bne lbl_801ABC94
    li r3, 0x0
lbl_801ABD04:
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801ABDF4
    lwz r3, 0xbc(r23)
    lwz r3, 0x20(r3)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801ABD40
    li r3, 0x0
    b lbl_801ABF90
lbl_801ABD40:
    lwz r12, 0x1c(r3)
    mr r4, r23
    mr r5, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801ABD68
    li r3, 0x0
    b lbl_801ABF90
lbl_801ABD68:
    mr r4, r27
    addi r3, r23, 0xc0
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0xd8(r23)
    li r3, 0x1
    cmpwi r31, 0x0
    li r0, 0x0
    addi r4, r4, 0x1
    sth r4, 0xd8(r23)
    stw r3, 0xc(r27)
    stw r0, 0x28(r27)
    beq lbl_801ABDA4
    lwz r0, 0x28(r27)
    ori r0, r0, 0x1
    stw r0, 0x28(r27)
lbl_801ABDA4:
    cmpwi r30, 0x0
    beq lbl_801ABDB8
    lwz r0, 0x28(r27)
    ori r0, r0, 0x2
    stw r0, 0x28(r27)
lbl_801ABDB8:
    cmpwi r29, 0x0
    stb r28, 0x88(r27)
    beq lbl_801ABDD0
    lwz r0, 0x28(r27)
    ori r0, r0, 0x4
    stw r0, 0x28(r27)
lbl_801ABDD0:
    lbz r0, 0x5(r25)
    mr r5, r27
    stb r0, 0x89(r27)
    lwz r4, 0xbc(r23)
    lwz r3, 0x9c(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABDF4:
    lha r0, 0x0(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x2(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x3(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x4(r25)
    cmpwi r0, 0x0
    bne lbl_801ABE30
    lbz r0, 0x7(r25)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801ABE8C
lbl_801ABE30:
    stw r26, 0x248(r1)
    lwz r3, 0x10(r26)
    addi r0, r3, 0x1
    stw r0, 0x10(r26)
    lha r0, 0x0(r25)
    sth r0, 0x24c(r1)
    lbz r0, 0x2(r25)
    stb r0, 0x24e(r1)
    lbz r0, 0x3(r25)
    stb r0, 0x24f(r1)
    lbz r0, 0x4(r25)
    stb r0, 0x250(r1)
    lbz r0, 0x5(r25)
    stb r0, 0x251(r1)
    lbz r0, 0x6(r25)
    stb r0, 0x252(r1)
    lbz r0, 0x7(r25)
    stb r0, 0x253(r1)
    lbz r0, 0x8(r25)
    stb r0, 0x254(r1)
    lbz r0, 0x9(r25)
    stb r0, 0x255(r1)
    b lbl_801ABE94
lbl_801ABE8C:
    li r0, 0x0
    stw r0, 0x248(r1)
lbl_801ABE94:
    mr r3, r27
    addi r4, r1, 0x30
    bl fn_801B7FB8
    addi r3, r1, 0x30
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x150
    addi r4, r1, 0x60
    bl fn_801ACC48
    addi r4, r1, 0x60
    addi r3, r1, 0x30
    mr r5, r4
    bl PSMTXConcat
    mr r4, r27
    addi r3, r1, 0x150
    addi r5, r1, 0x60
    bl fn_801AC0A4
    lwz r0, 0x248(r1)
    li r3, 0x0
    stw r3, 0x244(r1)
    cmpwi r0, 0x0
    stw r3, 0x20c(r1)
    beq lbl_801ABF28
    lwz r0, 0x10(r26)
    subic. r0, r0, 0x1
    stw r0, 0x10(r26)
    bne lbl_801ABF20
    lwz r0, 0xc(r26)
    cmpwi r0, 0x2
    bne lbl_801ABF20
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABF20:
    li r0, 0x0
    stw r0, 0x248(r1)
lbl_801ABF28:
    lwz r0, 0xc(r23)
    cmpwi r0, 0x1
    beq lbl_801ABF8C
    lwz r0, 0xc(r27)
    cmpwi r0, 0x1
    bne lbl_801ABF8C
    bne lbl_801ABF8C
    lhz r4, 0xd8(r23)
    mr r3, r27
    subi r0, r4, 0x1
    sth r0, 0xd8(r23)
    lwz r12, 0x1c(r27)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0xc(r27)
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    bne lbl_801ABF8C
    lwz r12, 0x1c(r27)
    mr r3, r27
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801ABF8C:
    li r3, 0x1
lbl_801ABF90:
    addi r11, r1, 0x2d0
    bl _restgpr_23
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// asm_to_cpp: fn_801ABFA8
extern "C" asm void fn_801ABFA8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    stfd f27, 0x10(r1)
    opword 0xF3610018
    fmr f27, f2
    mr r0, r3
    fmr f28, f3
    mr r3, r4
    fmr f29, f4
    mr r4, r0
    fsubs f30, f1, f2
    bl fn_8030E000
    lfs f0, lbl_804A1704
    fmr f31, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801AC014
    b lbl_801AC01C
lbl_801AC014:
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f31, f1
lbl_801AC01C:
    fsubs f0, f0, f27
    fmuls f2, f30, f29
    fmuls f1, f30, f28
    fcmpo cr0, f2, f0
    ble lbl_801AC038
    lfs f1, lbl_804A1724
    b lbl_801AC06C
lbl_801AC038:
    fcmpo cr0, f1, f0
    bge lbl_801AC048
    lfs f1, lbl_804A1704
    b lbl_801AC06C
lbl_801AC048:
    fsubs f3, f1, f2
    lfs f1, lbl_804A1704
    fcmpu cr0, f1, f3
    bne lbl_801AC05C
    b lbl_801AC06C
lbl_801AC05C:
    fsubs f1, f0, f2
    lfs f0, lbl_804A1724
    fdivs f1, f1, f3
    fsubs f1, f0, f1
lbl_801AC06C:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    opword 0xE3610018
    lwz r0, 0x64(r1)
    lfd f27, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801AC0A4
extern "C" asm void fn_801AC0A4() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    addi r11, r1, 0xc0
    bl _savegpr_19
    lhz r6, 0xe0(r3)
    lis r0, 0x4330
    stw r0, 0x70(r1)
    mr r29, r3
    cmpwi r6, 0x0
    mr r30, r4
    stw r0, 0x78(r1)
    mr r31, r5
    beq lbl_801AC0F0
    subi r0, r6, 0x1
    sth r0, 0xe0(r3)
    b lbl_801AC4C8
lbl_801AC0F0:
    lfs f0, lbl_804A1704
    lfs f4, 0x34(r3)
    lhz r6, 0x30(r3)
    fcmpu cr0, f0, f4
    sth r6, 0xe0(r3)
    beq lbl_801AC17C
    lis r4, 0x3
    lwz r5, 0xec(r3)
    addi r0, r4, 0x43fd
    stw r6, 0x7c(r1)
    mullw r4, r5, r0
    lfd f3, lbl_804A1710
    lfd f0, 0x78(r1)
    lfs f2, lbl_804A1728
    fsubs f1, f0, f3
    lfs f0, lbl_804A1724
    addis r4, r4, 0x27
    fmuls f1, f1, f4
    subi r4, r4, 0x613d
    srwi r0, r4, 16
    stw r4, 0xec(r3)
    fsubs f0, f1, f0
    stw r0, 0x74(r1)
    lfd f1, 0x70(r1)
    fsubs f1, f1, f3
    fdivs f1, f1, f2
    fmuls f1, f0, f1
    bl ceil
    frsp f0, f1
    lhz r3, 0xe0(r29)
    fctiwz f0, f0
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    add r0, r3, r0
    sth r0, 0xe0(r29)
lbl_801AC17C:
    lwz r0, 0x24(r29)
    rlwinm. r0, r0, 0, 14, 14
    beq lbl_801AC1A4
    lhz r0, 0x32(r29)
    lfd f1, lbl_804A1710
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    stfs f0, 0x38(r29)
    b lbl_801AC2B0
lbl_801AC1A4:
    lfs f1, lbl_804A1704
    lfs f0, 0x2c(r29)
    fcmpu cr0, f1, f0
    bne lbl_801AC1BC
    lfs f31, 0x28(r29)
    b lbl_801AC214
lbl_801AC1BC:
    lis r3, 0x3
    lwz r4, 0xec(r29)
    addi r0, r3, 0x43fd
    lfs f3, 0x28(r29)
    mullw r3, r4, r0
    lfd f6, lbl_804A1710
    fmuls f2, f3, f0
    lfs f4, lbl_804A1728
    lfs f1, lbl_804A172C
    lfs f0, lbl_804A1724
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r29)
    stw r0, 0x7c(r1)
    lfd f5, 0x78(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmuls f1, f1, f4
    fsubs f0, f1, f0
    fmuls f0, f2, f0
    fadds f31, f3, f0
lbl_801AC214:
    lwz r0, 0x24(r29)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_801AC278
    lwz r5, 0xbc(r29)
    mr r3, r29
    li r4, 0x0
    lwz r19, 0x20(r5)
    bl fn_801ACC48
    addi r4, r29, 0x90
    addi r5, r1, 0x18
    bl fn_8030D7E0
    addis r4, r19, 0x1
    lfs f3, 0x44(r29)
    lfs f1, -0x3fa4(r4)
    addi r3, r1, 0x18
    lfs f2, -0x3fa0(r4)
    subi r4, r4, 0x3fe0
    lfs f4, 0x40(r29)
    bl fn_801ABFA8
    lfs f0, lbl_804A1724
    lfs f2, 0x48(r29)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fadds f0, f2, f0
    fmuls f31, f31, f0
lbl_801AC278:
    lfs f0, 0x38(r29)
    lbz r0, 0xdc(r29)
    fadds f2, f0, f31
    cmpwi r0, 0x0
    stfs f2, 0x38(r29)
    beq lbl_801AC2B0
    lfs f1, lbl_804A1704
    lfs f0, 0x28(r29)
    fcmpu cr0, f1, f0
    beq lbl_801AC2B0
    lfs f0, lbl_804A1724
    fcmpo cr0, f2, f0
    bge lbl_801AC2B0
    stfs f0, 0x38(r29)
lbl_801AC2B0:
    lfs f1, 0x38(r29)
    lfs f0, lbl_804A1724
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801AC4B4
    bl Initialize__Q34nw4r2ef8ResourceFv
    lwz r3, 0xf0(r29)
    lwz r11, 0xb8(r29)
    cmpwi r3, 0x0
    beq lbl_801AC488
    lwz r4, 0xbc(r29)
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    beq lbl_801AC42C
    lfs f0, 0x38(r29)
    mr r3, r29
    lwz r19, 0x0(r31)
    mr r4, r30
    fctiwz f1, f0
    lwz r20, 0x4(r31)
    lwz r21, 0x8(r31)
    addi r5, r1, 0x14
    lwz r22, 0xc(r31)
    addi r6, r1, 0x10
    stfd f1, 0x80(r1)
    addi r7, r1, 0x28
    lwz r23, 0x10(r31)
    addi r8, r1, 0x8
    lwz r0, 0x84(r1)
    addi r9, r1, 0xc
    lwz r24, 0x14(r31)
    addi r10, r1, 0x40
    stw r0, 0x14(r1)
    lwz r25, 0x18(r31)
    lwz r0, 0x24(r29)
    lwz r26, 0x1c(r31)
    stw r0, 0x10(r1)
    lwz r27, 0x20(r31)
    lfs f1, 0x4c(r29)
    lwz r28, 0x24(r31)
    stfs f1, 0x28(r1)
    lwz r12, 0x28(r31)
    lfs f1, 0x50(r29)
    lwz r0, 0x2c(r31)
    stfs f1, 0x2c(r1)
    lfd f2, lbl_804A1718
    lfs f1, 0x54(r29)
    lfs f0, lbl_804A1700
    stfs f1, 0x30(r1)
    lfs f1, 0x58(r29)
    stfs f1, 0x34(r1)
    lfs f1, 0x5c(r29)
    stfs f1, 0x38(r1)
    lfs f1, 0x60(r29)
    stfs f1, 0x3c(r1)
    lhz r31, 0x12(r11)
    sth r31, 0x8(r1)
    lbz r11, 0x14(r11)
    extsb r11, r11
    stw r19, 0x40(r1)
    xoris r11, r11, 0x8000
    stw r11, 0x74(r1)
    lfd f1, 0x70(r1)
    stw r20, 0x44(r1)
    fsubs f1, f1, f2
    stw r21, 0x48(r1)
    fdivs f0, f1, f0
    stw r22, 0x4c(r1)
    stw r23, 0x50(r1)
    stw r24, 0x54(r1)
    stw r25, 0x58(r1)
    stw r26, 0x5c(r1)
    stfs f0, 0xc(r1)
    stw r27, 0x60(r1)
    stw r28, 0x64(r1)
    stw r12, 0x68(r1)
    stw r0, 0x6c(r1)
    lwz r11, 0xbc(r29)
    lwz r12, 0x44(r11)
    mtctr r12
    bctrl
    lwz r3, 0xf0(r29)
    mr r4, r29
    mr r5, r30
    addi r8, r1, 0x28
    lwz r12, 0x0(r3)
    addi r10, r1, 0x40
    lwz r6, 0x14(r1)
    lwz r12, 0x8(r12)
    lwz r7, 0x10(r1)
    lhz r9, 0x8(r1)
    lfs f1, 0xc(r1)
    mtctr r12
    bctrl
    b lbl_801AC488
lbl_801AC42C:
    lbz r0, 0x14(r11)
    mr r4, r29
    lfs f0, 0x38(r29)
    mr r5, r30
    extsb r0, r0
    lwz r12, 0x0(r3)
    xoris r0, r0, 0x8000
    fctiwz f2, f0
    stw r0, 0x7c(r1)
    mr r10, r31
    lfd f1, lbl_804A1718
    addi r8, r29, 0x4c
    lfd f0, 0x78(r1)
    stfd f2, 0x80(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_804A1700
    lwz r12, 0x8(r12)
    lwz r6, 0x84(r1)
    fdivs f1, f1, f0
    lwz r7, 0x24(r29)
    lhz r9, 0x12(r11)
    mtctr r12
    bctrl
lbl_801AC488:
    lfs f2, 0x38(r29)
    lfd f1, lbl_804A1718
    fctiwz f0, f2
    stfd f0, 0x80(r1)
    lwz r0, 0x84(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    fsubs f0, f2, f0
    stfs f0, 0x38(r29)
lbl_801AC4B4:
    lbz r0, 0xdc(r29)
    cmpwi r0, 0x0
    beq lbl_801AC4C8
    li r0, 0x0
    stb r0, 0xdc(r29)
lbl_801AC4C8:
    opword 0xE3E100C8
    addi r11, r1, 0xc0
    lfd f31, 0xc0(r1)
    bl _restgpr_19
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_801AC4E8
extern "C" asm void fn_801AC4E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x20(r3)
    mr r27, r3
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC688
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AC688
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    bne lbl_801AC688
    lhz r0, 0xde(r3)
    cmpwi r0, 0x0
    bne lbl_801AC688
    lwz r0, 0x20(r3)
    rlwinm. r4, r0, 0, 29, 29
    bne lbl_801AC55C
    lwz r31, 0xe4(r3)
    lhz r0, 0x3c(r3)
    cmplw r31, r0
    blt lbl_801AC57C
    lwz r3, 0xbc(r3)
    mr r4, r27
    bl RetireEmitter__Q34nw4r2ef6EffectFPQ34nw4r2ef7Emitter
    b lbl_801AC688
lbl_801AC55C:
    lwz r31, 0xe4(r3)
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    bne lbl_801AC57C
    lwz r3, 0xbc(r3)
    mr r4, r27
    bl RetireEmitter__Q34nw4r2ef6EffectFPQ34nw4r2ef7Emitter
    b lbl_801AC688
lbl_801AC57C:
    cmpwi r4, 0x0
    beq lbl_801AC58C
    li r30, -0x1
    b lbl_801AC590
lbl_801AC58C:
    lhz r30, 0x3c(r3)
lbl_801AC590:
    cmpwi r31, 0x0
    li r29, 0x0
    bne lbl_801AC5A4
    li r28, 0x0
    b lbl_801AC644
lbl_801AC5A4:
    lwz r3, 0xb8(r3)
    lwz r0, 0x4(r3)
    add r3, r0, r3
    lwzu r0, 0x8(r3)
    add r3, r0, r3
    lhzu r0, 0x4(r3)
    slwi r0, r0, 3
    add r3, r0, r3
    lhz r28, 0x6(r3)
    b lbl_801AC644
lbl_801AC5CC:
    lwzx r3, r5, r6
    add r4, r5, r6
    clrlslwi r0, r28, 16, 2
    add r3, r3, r4
    addi r4, r3, 0x4
    lhz r3, 0x4(r3)
    slwi r3, r3, 3
    add r3, r3, r4
    addi r3, r3, 0x4
    add r3, r3, r0
    lwz r3, 0x4(r3)
    lbz r0, 0x4(r3)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801AC640
    lbz r4, 0x0(r3)
    addi r0, r4, 0x55
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801AC640
    lbz r26, 0x1(r3)
    mr r5, r31
    lhz r6, 0xea(r27)
    mr r7, r30
    add r4, r27, r26
    addi r4, r4, 0x20
    bl fn_801AE2D8
    cmplwi r26, 0x70
    blt lbl_801AC640
    li r29, 0x1
lbl_801AC640:
    addi r28, r28, 0x1
lbl_801AC644:
    lwz r5, 0xb8(r27)
    clrlwi r3, r28, 16
    lwz r4, 0x4(r5)
    addi r6, r4, 0x8
    lwzx r0, r5, r6
    add r4, r5, r6
    add r4, r0, r4
    lhzu r0, 0x4(r4)
    slwi r0, r0, 3
    add r4, r0, r4
    lhz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_801AC5CC
    cmpwi r29, 0x0
    beq lbl_801AC688
    mr r3, r27
    bl fn_801ACD98
lbl_801AC688:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801AC6A0
extern "C" asm void fn_801AC6A0() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    stw r31, 0x101c(r1)
    stw r30, 0x1018(r1)
    stw r29, 0x1014(r1)
    lwz r0, 0x20(r3)
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC70C
    lhz r5, 0xc8(r3)
    addi r4, r1, 0x8
    addi r3, r3, 0xc0
    bl fn_801B92C0
    addi r30, r1, 0x8
    clrlwi r31, r3, 16
    li r29, 0x0
    b lbl_801AC700
lbl_801AC6E4:
    clrlslwi r0, r29, 16, 2
    lwzx r3, r30, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x1
lbl_801AC700:
    clrlwi r0, r29, 16
    cmplw r0, r31
    blt lbl_801AC6E4
lbl_801AC70C:
    lwz r0, 0x1024(r1)
    lwz r31, 0x101c(r1)
    lwz r30, 0x1018(r1)
    lwz r29, 0x1014(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// asm_to_cpp: fn_801AC728
extern "C" asm void fn_801AC728() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x20(r3)
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_801AC824
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x0
    bne lbl_801AC824
    lhz r0, 0xe8(r3)
    li r4, 0x1
    stw r4, 0xb4(r3)
    cmpwi r0, 0x0
    beq lbl_801AC77C
    lwz r4, 0xbc(r3)
    lwz r0, 0x50(r4)
    oris r0, r0, 0x1
    stw r0, 0x50(r4)
lbl_801AC77C:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AC800
    li r4, 0x0
    addi r3, r3, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
    addi r4, r1, 0x8
    bl fn_801B7FB8
    addi r3, r1, 0x8
    mr r4, r3
    bl PSMTXInverse
    mr r3, r30
    addi r4, r1, 0x38
    bl fn_801ACC48
    addi r4, r1, 0x38
    addi r3, r1, 0x8
    mr r5, r4
    bl PSMTXConcat
    lhz r3, 0xde(r30)
    cmpwi r3, 0x0
    beq lbl_801AC7E0
    subi r0, r3, 0x1
    sth r0, 0xde(r30)
    b lbl_801AC824
lbl_801AC7E0:
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x38
    bl fn_801AC0A4
    lwz r3, 0xe4(r30)
    addi r0, r3, 0x1
    stw r0, 0xe4(r30)
    b lbl_801AC824
lbl_801AC800:
    lhz r4, 0xde(r3)
    cmpwi r4, 0x0
    beq lbl_801AC818
    subi r0, r4, 0x1
    sth r0, 0xde(r3)
    b lbl_801AC824
lbl_801AC818:
    lwz r4, 0xe4(r3)
    addi r0, r4, 0x1
    stw r0, 0xe4(r3)
lbl_801AC824:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_801AC83C
extern "C" asm void fn_801AC83C() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    stw r28, 0xd0(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    beq lbl_801AC870
    cmpwi r0, 0x2
    bne lbl_801AC9F4
lbl_801AC870:
    lwz r4, 0x24(r3)
    rlwinm. r0, r4, 0, 15, 15
    bne lbl_801AC884
    rlwinm. r0, r4, 0, 16, 16
    beq lbl_801AC9F4
lbl_801AC884:
    lfs f0, lbl_804A1704
    li r0, 0x1
    stb r0, 0x120(r3)
    addi r4, r1, 0x98
    stfs f0, 0xb0(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xa8(r3)
    mr r3, r31
    bl fn_801ACC48
    lwz r3, 0xbc(r31)
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    subi r3, r3, 0x3fd4
    bl PSMTXConcat
    lwz r28, 0x68(r1)
    addi r3, r1, 0x38
    lwz r29, 0x6c(r1)
    li r4, 0x0
    lwz r30, 0x70(r1)
    lwz r12, 0x74(r1)
    lwz r11, 0x78(r1)
    lwz r10, 0x7c(r1)
    lwz r9, 0x80(r1)
    lwz r8, 0x84(r1)
    lwz r7, 0x88(r1)
    lwz r6, 0x8c(r1)
    lwz r5, 0x90(r1)
    lwz r0, 0x94(r1)
    stw r28, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r12, 0x44(r1)
    stw r11, 0x48(r1)
    stw r10, 0x4c(r1)
    stw r9, 0x50(r1)
    stw r8, 0x54(r1)
    stw r7, 0x58(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_801BA138
    lfs f0, lbl_804A1704
    addi r3, r1, 0x38
    stfs f1, 0x38(r1)
    li r4, 0x1
    stfs f0, 0x58(r1)
    stfs f0, 0x48(r1)
    bl fn_801BA138
    lfs f0, lbl_804A1704
    addi r3, r1, 0x38
    stfs f1, 0x4c(r1)
    li r4, 0x2
    stfs f0, 0x5c(r1)
    stfs f0, 0x3c(r1)
    bl fn_801BA138
    lfs f2, lbl_804A1704
    stfs f1, 0x60(r1)
    stfs f2, 0x50(r1)
    stfs f2, 0x40(r1)
    lwz r0, 0x24(r31)
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_801AC9A4
    fmr f3, f2
    lfs f1, lbl_804A1730
    addi r3, r1, 0x8
    bl fn_801B9E1C
    addi r3, r1, 0x38
    addi r4, r1, 0x8
    mr r5, r3
    bl PSMTXConcat
lbl_801AC9A4:
    addi r3, r1, 0x68
    mr r4, r3
    bl PSMTXInverse
    addi r3, r1, 0x68
    addi r4, r1, 0x38
    mr r5, r3
    bl PSMTXConcat
    addi r3, r1, 0x68
    addi r5, r31, 0xa8
    mr r4, r3
    bl fn_801BA090
    addi r3, r1, 0x68
    addi r4, r31, 0x9c
    mr r5, r3
    bl fn_801BA008
    addi r3, r1, 0x68
    addi r4, r31, 0xa8
    bl fn_801B955C
    mr r3, r31
    bl fn_801ACD98
lbl_801AC9F4:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r28, 0xd0(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_801ACA14
extern "C" asm void fn_801ACA14() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_801ACAC0
    cmpwi r6, 0x0
    beq lbl_801ACAC0
    extsb r0, r7
    cmpwi r0, 0x64
    bne lbl_801ACAC0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r5, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    b lbl_801ACC30
lbl_801ACAC0:
    cmpwi r5, 0x0
    bne lbl_801ACAE8
    cmpwi r6, 0x0
    bne lbl_801ACAE8
    extsb. r0, r7
    bne lbl_801ACAE8
    mr r3, r26
    bl PSMTXIdentity
    mr r3, r26
    b lbl_801ACC30
lbl_801ACAE8:
    mr r3, r26
    bl PSMTXIdentity
    mr r3, r27
    addi r4, r1, 0x2c
    bl fn_801B96C8
    extsb r0, r30
    cmpwi r0, 0x64
    bne lbl_801ACB1C
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x2c
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801ACB70
lbl_801ACB1C:
    cmpwi r0, 0x0
    beq lbl_801ACB70
    xoris r3, r0, 0x8000
    lis r0, 0x4330
    stw r3, 0x6c(r1)
    addi r5, r1, 0x20
    lfd f2, lbl_804A1718
    mr r3, r26
    stw r0, 0x68(r1)
    mr r4, r26
    lfs f0, lbl_804A1700
    lfd f1, 0x68(r1)
    opword 0xE061002C
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    opword 0x10230018
    opword 0xE0618034
    opword 0xF0250000
    opword 0x10230018
    opword 0xF0258008
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACB70:
    cmpwi r29, 0x0
    bne lbl_801ACB80
    cmpwi r28, 0x0
    beq lbl_801ACC2C
lbl_801ACB80:
    cmpwi r31, 0x0
    beq lbl_801ACBA4
    extsb r0, r30
    cmpwi r0, 0x64
    beq lbl_801ACBA4
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x2c
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACBA4:
    cmpwi r29, 0x0
    beq lbl_801ACBC8
    mr r3, r27
    addi r4, r1, 0x38
    bl fn_801B9448
    mr r3, r26
    mr r5, r26
    addi r4, r1, 0x38
    bl PSMTXConcat
lbl_801ACBC8:
    cmpwi r28, 0x0
    beq lbl_801ACBEC
    mr r3, r27
    addi r4, r1, 0x14
    bl fn_801B96E4
    mr r3, r26
    mr r4, r26
    addi r5, r1, 0x14
    bl fn_801B9F88
lbl_801ACBEC:
    cmpwi r31, 0x0
    beq lbl_801ACC2C
    extsb r0, r30
    cmpwi r0, 0x64
    beq lbl_801ACC2C
    lfs f0, lbl_804A1720
    addi r5, r1, 0x8
    opword 0xE041002C
    mr r3, r26
    mr r4, r26
    opword 0x10220018
    opword 0xE0418034
    opword 0xF0250000
    opword 0x10220018
    opword 0xF0258008
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801ACC2C:
    mr r3, r26
lbl_801ACC30:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_801ACC48
extern "C" asm void fn_801ACC48() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lbz r0, 0x120(r3)
    cmpwi r0, 0x0
    beq lbl_801ACD0C
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_801ACC90
    lwz r3, 0xbc(r3)
    addi r4, r30, 0x124
    addi r3, r3, 0x54
    bl PSMTXCopy
    b lbl_801ACCC0
lbl_801ACC90:
    mr r3, r0
    addi r4, r1, 0x8
    bl fn_801ACC48
    lbz r8, 0x64(r30)
    addi r3, r30, 0x124
    lbz r0, 0x65(r30)
    addi r4, r1, 0x8
    clrlwi r5, r8, 31
    extrwi r6, r8, 1, 30
    extsb r7, r0
    extrwi r8, r8, 1, 29
    bl fn_801ACA14
lbl_801ACCC0:
    addi r3, r30, 0x124
    addi r5, r30, 0x90
    mr r4, r3
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lfs f1, 0xa8(r30)
    addi r3, r1, 0x38
    lfs f2, 0xac(r30)
    lfs f3, 0xb0(r30)
    bl fn_801B9E1C
    addi r3, r30, 0x124
    addi r4, r1, 0x38
    mr r5, r3
    bl PSMTXConcat
    addi r3, r30, 0x124
    addi r5, r30, 0x9c
    mr r4, r3
    bl fn_801B9F88
    li r0, 0x0
    stb r0, 0x120(r30)
lbl_801ACD0C:
    cmpwi r31, 0x0
    beq lbl_801ACD7C
    lwz r4, 0x124(r30)
    mr r3, r31
    lwz r0, 0x128(r30)
    stw r4, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r4, 0x12c(r30)
    lwz r0, 0x130(r30)
    stw r4, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r4, 0x134(r30)
    lwz r0, 0x138(r30)
    stw r4, 0x10(r31)
    stw r0, 0x14(r31)
    lwz r4, 0x13c(r30)
    lwz r0, 0x140(r30)
    stw r4, 0x18(r31)
    stw r0, 0x1c(r31)
    lwz r4, 0x144(r30)
    lwz r0, 0x148(r30)
    stw r4, 0x20(r31)
    stw r0, 0x24(r31)
    lwz r4, 0x14c(r30)
    lwz r0, 0x150(r30)
    stw r4, 0x28(r31)
    stw r0, 0x2c(r31)
    b lbl_801ACD80
lbl_801ACD7C:
    addi r3, r30, 0x124
lbl_801ACD80:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_801ACD98
extern "C" asm void fn_801ACD98() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r31, 0x1
    mr r27, r3
    stb r31, 0x120(r3)
    li r4, 0x0
    li r30, -0x1
    b lbl_801ACDE0
lbl_801ACDC4:
    stb r31, 0x8a(r3)
    lwz r0, 0x8(r3)
    lwz r3, lbl_8049D970
    clrlwi r0, r0, 16
    cmpw r3, r0
    bne lbl_801ACDE0
    stw r30, lbl_8049D970
lbl_801ACDE0:
    addi r3, r27, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801ACDC4
    lwz r0, 0xbc(r27)
    cmpwi r0, 0x0
    beq lbl_801ACE90
    li r29, 0x0
    li r31, -0x1
    li r30, 0x1
    b lbl_801ACE74
lbl_801ACE10:
    lbz r0, 0x120(r3)
    cmpwi r0, 0x0
    bne lbl_801ACE74
    lwz r28, 0xf4(r3)
    b lbl_801ACE6C
lbl_801ACE24:
    cmplw r28, r27
    bne lbl_801ACE68
    stb r30, 0x120(r29)
    li r4, 0x0
    b lbl_801ACE54
lbl_801ACE38:
    stb r30, 0x8a(r3)
    lwz r0, 0x8(r3)
    lwz r3, lbl_8049D970
    clrlwi r0, r0, 16
    cmpw r3, r0
    bne lbl_801ACE54
    stw r31, lbl_8049D970
lbl_801ACE54:
    addi r3, r29, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_801ACE38
lbl_801ACE68:
    lwz r28, 0xf4(r28)
lbl_801ACE6C:
    cmpwi r28, 0x0
    bne lbl_801ACE24
lbl_801ACE74:
    lwz r3, 0xbc(r27)
    mr r4, r29
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801ACE10
lbl_801ACE90:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801ACEA8
extern "C" asm void fn_801ACEA8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r4, 0x4(r4)
    lwz r5, 0x8(r31)
    lbz r6, 0xc(r31)
    bl fn_801ACEF0
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801ACEF0
extern "C" asm void fn_801ACEF0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801ACF70
lbl_801ACF30:
    mr r4, r30
    addi r3, r24, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r27, 0x0
    mr r29, r3
    bne lbl_801ACF54
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_801ACF6C
lbl_801ACF54:
    mr r12, r25
    mr r3, r30
    mr r4, r26
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801ACF6C:
    mr r30, r29
lbl_801ACF70:
    cmpwi r30, 0x0
    bne lbl_801ACF30
    cmpwi r28, 0x0
    beq lbl_801ACFB8
    li r0, 0x0
    lis r4, fn_801ACEA8@ha
    stw r0, 0x8(r1)
    mr r7, r24
    addi r4, r4, fn_801ACEA8@l
    addi r5, r1, 0x8
    stw r25, 0xc(r1)
    li r6, 0x1
    stw r26, 0x10(r1)
    stb r27, 0x14(r1)
    lwz r3, 0xbc(r24)
    bl ForeachEmitterFrom__Q34nw4r2ef6EffectFPFPvUl_vUlbPQ34nw4r2ef7Emitter
    lwz r0, 0x8(r1)
    add r31, r31, r0
lbl_801ACFB8:
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801ACFD4
extern "C" asm void fn_801ACFD4() {
    nofralloc
    lwz r0, 0xb8(r4)
    stw r0, 0x0(r3)
    blr
}
