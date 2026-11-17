#include <nw4r/lyt.h>
#include <nw4r/ut.h>

#include <cstring>

/******************************************************************************
 *
 * Private structures
 *
 ******************************************************************************/
namespace nw4r {
namespace lyt {
namespace res {

/******************************************************************************
 * AnimationTarget
 ******************************************************************************/
struct AnimationTarget {
    enum AnimCurve {
        ANIMCURVE_NONE,
        ANIMCURVE_STEP,
        ANIMCURVE_HERMITE,

        ANIMCURVE_MAX
    };

    u8 id;                     // at 0x0
    u8 target;                 // at 0x1
    u8 curveType;              // at 0x2
    u8 PADDING_0x3;            // at 0x3
    u16 keyNum;                // at 0x4
    u8 PADDING_0x6[0x8 - 0x6]; // at 0x6
    u32 keysOffset;            // at 0x8
};

/******************************************************************************
 * StepKey
 ******************************************************************************/
struct StepKey {
    f32 frame;       // at 0x0
    u16 value;       // at 0x4
    u16 PADDING_0x6; // at 0x6
};
/******************************************************************************
 * HermiteKey
 ******************************************************************************/
struct HermiteKey {
    f32 frame; // at 0x0
    f32 value; // at 0x4
    f32 slope; // at 0x8
};

} // namespace res
AnimResource::AnimResource()
    : mpFileHeader(NULL),
      mpResBlock(NULL),
      mpTagBlock(NULL),
      mpShareBlock(NULL) {}

u16 AnimResource::GetGroupNum() const {
    if (mpTagBlock != NULL) {
        return mpTagBlock->groupNum;
    }
    return 0;
}

const void* AnimResource::GetGroupArray() const {
    if (mpTagBlock != NULL) {
        return detail::ConvertOffsToPtr<void>(mpTagBlock, mpTagBlock->groupsOffset);
    }
    return NULL;
}

bool AnimResource::IsDescendingBind() const {
    if (mpTagBlock != NULL) {
        return mpTagBlock->flag & 1;
    }
    return false;
}

u16 AnimResource::GetAnimationShareInfoNum() const {
    if (mpShareBlock != NULL) {
        return mpShareBlock->shareNum;
    }
    return 0;
}

const void* AnimResource::GetAnimationShareInfoArray() const {
    if (mpShareBlock != NULL) {
        return detail::ConvertOffsToPtr<void>(mpShareBlock, mpShareBlock->animShareInfoOffset);
    }
    return NULL;
}

u16 AnimResource::CalcAnimationNum(Group* pGroup, bool recursive) const {
    u16 num = 0;

    NW4R_UT_LINKLIST_FOREACH (it, pGroup->GetPaneList(), {
        num += CalcAnimationNum(it->mTarget, recursive);
    })

    return num;
}

} // namespace lyt
} // namespace nw4r

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
extern "C" void ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl(nw4r::lyt::TexMap*,TPLPalette*,u32);
extern "C" u16 fn_801FF08C(f32,const nw4r::lyt::res::StepKey*,u32);
extern "C" f32 fn_801FF174(f32,const nw4r::lyt::res::HermiteKey*,u32);
extern "C" nw4r::lyt::TexSRT* GetTexSRTAry__Q34nw4r3lyt8MaterialCFv(const nw4r::lyt::Material*);
namespace {

using namespace nw4r;
using namespace nw4r::lyt;

inline bool RIsSame(f32 a, f32 b, f32 tolerance) {
    f32 c = a - b;
    return -tolerance < c && c < tolerance;
}

u16 GetStepCurveValue(f32 frame, const res::StepKey* pKeys, u32 numKey) {
    if (numKey == 1 || frame <= pKeys[0].frame) {
        return pKeys[0].value;
    }

    if (frame >= pKeys[numKey - 1].frame) {
        return pKeys[numKey - 1].value;
    }

    int left = 0;
    int right = numKey - 1;

    while (left != right - 1 && left != right) {
        int center = (left + right) / 2;
        const res::StepKey& rCenterKey = pKeys[center];

        if (frame < rCenterKey.frame) {
            right = center;
        } else {
            left = center;
        }
    }

    if (RIsSame(frame, pKeys[right].frame, 0.001f)) {
        return pKeys[right].value;
    }

    return pKeys[left].value;
}

f32 GetHermiteCurveValue(f32 frame, const res::HermiteKey* pKeys, u32 numKey) {

    if (numKey == 1 || frame <= pKeys[0].frame) {
        return pKeys[0].value;
    }

    if (frame >= pKeys[numKey - 1].frame) {
        return pKeys[numKey - 1].value;
    }

    int left = 0;
    int right = numKey - 1;

    while (left != right - 1 && left != right) {
        int center = (left + right) / 2;

        if (frame <= pKeys[center].frame) {
            right = center;
        } else {
            left = center;
        }
    }

    const res::HermiteKey& rLeftKey = pKeys[left];
    const res::HermiteKey& rRightKey = pKeys[right];

    if (RIsSame(frame, rRightKey.frame, 0.001f)) {
        if (right < numKey - 1 && rRightKey.frame == pKeys[right + 1].frame) {
            return pKeys[right + 1].value;
        }

        return rRightKey.value;
    }

    f32 t1 = frame - rLeftKey.frame;
    f32 t2 = 1.0f / (rRightKey.frame - rLeftKey.frame);

    f32 v0 = rLeftKey.value;
    f32 v1 = rRightKey.value;

    f32 s0 = rLeftKey.slope;
    f32 s1 = rRightKey.slope;

    f32 t1_t1_t2 = t1 * t1 * t2;
    f32 t1_t1_t2_t2 = t1_t1_t2 * t2;
    f32 t1_t1_t1_t2_t2 = t1 * t1_t1_t2_t2;
    f32 t1_t1_t1_t2_t2_t2 = t1_t1_t1_t2_t2 * t2;

    return v0 * (2.0f * t1_t1_t1_t2_t2_t2 - 3.0f * t1_t1_t2_t2 + 1.0f) +
           v1 * (-2.0f * t1_t1_t1_t2_t2_t2 + 3.0f * t1_t1_t2_t2) +
           s0 * (t1_t1_t1_t2_t2 - 2.0f * t1_t1_t2 + t1) +
           s1 * (t1_t1_t1_t2_t2 - t1_t1_t2);
}

// @typo
void AnimatePainSRT(Pane* pPane, const res::AnimationInfo* pAnimInfo,
                    const u32* pTargetOffsetTbl, f32 frame) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);

        const res::HermiteKey* pKeys =
            detail::ConvertOffsToPtr<res::HermiteKey>(pTarget,
                                                      pTarget->keysOffset);

        pPane->SetSRTElement(
            pTarget->target,
            GetHermiteCurveValue(frame, pKeys, pTarget->keyNum));
    }
}

void AnimateVisibility(Pane* pPane, const res::AnimationInfo* pAnimInfo,
                       const u32* pTargetOffsetTbl, f32 frame) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);

        const res::StepKey* pKeys = detail::ConvertOffsToPtr<res::StepKey>(
            pTarget, pTarget->keysOffset);

        pPane->SetVisible(GetStepCurveValue(frame, pKeys, pTarget->keyNum) !=
                          0);
    }
}

void AnimateVertexColor(Pane* pPane, const res::AnimationInfo* pAnimInfo,
                        const u32* pTargetOffsetTbl, f32 frame) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);
        const res::HermiteKey* pKeys =
            detail::ConvertOffsToPtr<res::HermiteKey>(pTarget,
                                                      pTarget->keysOffset);

        f32 fValue = GetHermiteCurveValue(frame, pKeys, pTarget->keyNum);
        fValue += 0.5f;

        u8 bValue;
        OSf32tou8(&fValue, &bValue);

        pPane->SetColorElement(pTarget->target, bValue);
    }
}

inline TexMap* AnimationGetTexturePtr(Material* p,u8 idx) { return &p->GetTexMapAry()[idx]; }
inline void AnimationSetTexSRTElement(Material* p,u32 idx,u32 element,f32 value) { f32* const ary=&::GetTexSRTAry__Q34nw4r3lyt8MaterialCFv(p)[idx].translate.x; ary[element]=value; }
inline void AnimationSetIndTexSRTElement(Material* p,u32 idx,u32 element,f32 value) { f32* const ary=&p->GetIndTexSRTAry()[idx].translate.x; ary[element]=value; }

void AnimateMaterialColor(Material* pMaterial, const res::AnimationInfo* pAnimInfo, const u32* animTargetOffsets, f32 frame) {
    using namespace nw4r;

    for (int i = 0; i < pAnimInfo->num; ++i) {
        const res::AnimationTarget* pAnimTarget = detail::ConvertOffsToPtr< res::AnimationTarget >(pAnimInfo, animTargetOffsets[i]);

        const res::HermiteKey* keys = detail::ConvertOffsToPtr< res::HermiteKey >(pAnimTarget, pAnimTarget->keysOffset);
        f32 value = fn_801FF174(frame, keys, pAnimTarget->keyNum);
        value += 0.5f;
        s16 s16Val;
        OSf32tos16(&value, &s16Val);

        s16Val = ut::Min(ut::Max(s16Val, s16(-1024)), s16(1023));
        pMaterial->SetColorElement(pAnimTarget->target, s16Val);
    }
}

void AnimateTextureSRT(Material* pMaterial, const res::AnimationInfo* pAnimInfo, const u32* animTargetOffsets, f32 frame) {
    for (int i = 0; i < pAnimInfo->num; ++i) {
        const res::AnimationTarget* pAnimTarget = detail::ConvertOffsToPtr< res::AnimationTarget >(pAnimInfo, animTargetOffsets[i]);

        if (pAnimTarget->id < pMaterial->GetTexSRTCap()) {
            const res::HermiteKey* keys = detail::ConvertOffsToPtr< res::HermiteKey >(pAnimTarget, pAnimTarget->keysOffset);
            AnimationSetTexSRTElement(pMaterial, pAnimTarget->id, pAnimTarget->target, fn_801FF174(frame, keys, pAnimTarget->keyNum));
        }
    }
}

void AnimateTexturePattern(Material* pMaterial, const res::AnimationInfo* pAnimInfo, const u32* animTargetOffsets, f32 frame,
                           void** tpls) {
    for (int j = 0; j < pAnimInfo->num; ++j) {
        const res::AnimationTarget* pAnimTarget = detail::ConvertOffsToPtr< res::AnimationTarget >(pAnimInfo, animTargetOffsets[j]);

        if (pAnimTarget->id < pMaterial->GetTextureNum()) {
            const res::StepKey* keys = detail::ConvertOffsToPtr< res::StepKey >(pAnimTarget, pAnimTarget->keysOffset);
            const u16 fileIdx = fn_801FF08C(frame, keys, pAnimTarget->keyNum);

            if (tpls[fileIdx]) {
                ::ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl(AnimationGetTexturePtr(pMaterial,pAnimTarget->id),static_cast<TPLPalette*>(tpls[fileIdx]),0);
            }
        }
    }
}

void AnimateIndTexSRT(Material* pMaterial, const res::AnimationInfo* pAnimInfo, const u32* animTargetOffsets, f32 frame) {
    for (int i = 0; i < pAnimInfo->num; ++i) {
        const res::AnimationTarget* pAnimTarget = detail::ConvertOffsToPtr< res::AnimationTarget >(pAnimInfo, animTargetOffsets[i]);

        if (pAnimTarget->id < pMaterial->GetIndTexSRTCap()) {
            const res::HermiteKey* keys = detail::ConvertOffsToPtr< res::HermiteKey >(pAnimTarget, pAnimTarget->keysOffset);
            AnimationSetIndTexSRTElement(pMaterial, pAnimTarget->id, pAnimTarget->target, fn_801FF174(frame, keys, pAnimTarget->keyNum));
        }
    }
}

} // namespace

namespace nw4r {
namespace lyt {

/******************************************************************************
 *
 * AnimTransform
 *
 ******************************************************************************/
AnimTransform::AnimTransform() : mpRes(NULL), mFrame(0.0f) {}

AnimTransform::~AnimTransform() {}

u16 AnimTransform::GetFrameSize() const {
    return mpRes->frameSize;
}

bool AnimTransform::IsLoopData() const {
    return mpRes->loop != 0;
}

/******************************************************************************
 *
 * AnimTransformBasic
 *
 ******************************************************************************/
AnimTransformBasic::AnimTransformBasic()
    : mpFileResAry(NULL), mAnimLinkAry(NULL), mAnimLinkNum(0) {}

AnimTransformBasic::~AnimTransformBasic() {
    if (mAnimLinkAry != NULL) {
        Layout::FreeMemory(mAnimLinkAry);
    }

    if (mpFileResAry != NULL) {
        Layout::FreeMemory(mpFileResAry);
    }
}

void AnimTransformBasic::SetResource(const res::AnimationBlock* pBlock,
                                     ResourceAccessor* pAccessor) {
    SetResource(pBlock, pAccessor, pBlock->animContNum);
}

void AnimTransformBasic::Bind(Pane* pPane, bool recursive) {
    const u32* const pContentOffsetTbl =
        detail::ConvertOffsToPtr<u32>(mpRes, mpRes->animContOffsetsOffset);

    for (u16 i = 0; i < mpRes->animContNum; i++) {
        const res::AnimationContent& rContent =
            *detail::ConvertOffsToPtr<res::AnimationContent>(
                mpRes, pContentOffsetTbl[i]);

        if (rContent.type == res::AnimationContent::ANIMTYPE_PANE) {
            Pane* pResult = pPane->FindPaneByName(rContent.name, recursive);

            if (pResult != NULL) {
                mAnimLinkAry[i].Set(this, i, false);
                pResult->AddAnimationLink(&mAnimLinkAry[i]);
            }
        } else /* res::AnimationContent::ANIMTYPE_MATERIAL */ {
            Material* pResult =
                pPane->FindMaterialByName(rContent.name, recursive);

            if (pResult != NULL) {
                mAnimLinkAry[i].Set(this, i, false);
                pResult->AddAnimationLink(&mAnimLinkAry[i]);
            }
        }
    }
}

void AnimTransformBasic::Bind(Material* pMaterial) {
    const u32* const pContentOffsetTbl =
        detail::ConvertOffsToPtr<u32>(mpRes, mpRes->animContOffsetsOffset);

    for (u16 i = 0; i < mpRes->animContNum; i++) {
        const res::AnimationContent& rContent =
            *detail::ConvertOffsToPtr<res::AnimationContent>(
                mpRes, pContentOffsetTbl[i]);

        if (rContent.type == res::AnimationContent::ANIMTYPE_MATERIAL &&
            detail::EqualsMaterialName(pMaterial->GetName(), rContent.name)) {

            mAnimLinkAry[i].Set(this, i, false);
            pMaterial->AddAnimationLink(&mAnimLinkAry[i]);
        }
    }
}

void AnimTransformBasic::Animate(u32 idx, Pane* pPane) {
    u32 contentOffset =
        detail::ConvertOffsToPtr<u32>(mpRes, mpRes->animContOffsetsOffset)[idx];

    const res::AnimationContent* pContent =
        detail::ConvertOffsToPtr<res::AnimationContent>(mpRes, contentOffset);

    const u32* pInfoOffsetTbl =
        detail::ConvertOffsToPtr<u32>(pContent, sizeof(res::AnimationContent));

    for (int i = 0; i < pContent->num; i++) {
        const res::AnimationInfo* pAnimInfo =
            detail::ConvertOffsToPtr<res::AnimationInfo>(pContent,
                                                         pInfoOffsetTbl[i]);

        const u32* pTargetOffsetTbl = detail::ConvertOffsToPtr<u32>(
            pAnimInfo, sizeof(res::AnimationInfo));

        switch (pAnimInfo->kind) {
        case res::AnimationInfo::SIGNATURE_ANMPANESRT: {
            AnimatePainSRT(pPane, pAnimInfo, pTargetOffsetTbl, mFrame);
            break;
        }

        case res::AnimationInfo::SIGNATURE_ANMPANEVIS: {
            AnimateVisibility(pPane, pAnimInfo, pTargetOffsetTbl, mFrame);
            break;
        }

        case res::AnimationInfo::SIGNATURE_ANMVTXCLR: {
            AnimateVertexColor(pPane, pAnimInfo, pTargetOffsetTbl, mFrame);
            break;
        }
        }
    }
}

void AnimTransformBasic::Animate(u32 idx, Material* pMaterial) {
    u32 animContOffsets = detail::ConvertOffsToPtr< u32 >(mpRes, mpRes->animContOffsetsOffset)[idx];
    const res::AnimationContent* pAnimCont = detail::ConvertOffsToPtr< res::AnimationContent >(mpRes, animContOffsets);

    const u32* animInfoOffsets = detail::ConvertOffsToPtr< u32 >(pAnimCont, sizeof(*pAnimCont));
    for (int i = 0; i < pAnimCont->num; ++i) {
        const res::AnimationInfo* pAnimInfo = detail::ConvertOffsToPtr< res::AnimationInfo >(pAnimCont, animInfoOffsets[i]);
        const u32* animTargetOffsets = detail::ConvertOffsToPtr< u32 >(pAnimInfo, sizeof(*pAnimInfo));

        switch (pAnimInfo->kind) {
        case res::AnimationInfo::SIGNATURE_ANMMATCLR:
            AnimateMaterialColor(pMaterial, pAnimInfo, animTargetOffsets, mFrame);
            break;
        case res::AnimationInfo::SIGNATURE_ANMTEXSRT:
            AnimateTextureSRT(pMaterial, pAnimInfo, animTargetOffsets, mFrame);
            break;
        case res::AnimationInfo::SIGNATURE_ANMTEXPAT:
            if (mpFileResAry) {
                AnimateTexturePattern(pMaterial, pAnimInfo, animTargetOffsets, mFrame, mpFileResAry);
            }
            break;
        case res::AnimationInfo::SIGNATURE_ANMINDTEXSRT:
            AnimateIndTexSRT(pMaterial, pAnimInfo, animTargetOffsets, mFrame);
            break;
        }
    }
}

/******************************************************************************
 *
 * Functions
 *
 ******************************************************************************/
namespace detail {

AnimationLink* FindAnimationLink(AnimationLinkList* pAnimList,
                                 AnimTransform* pAnimTrans) {

    NW4R_UT_LINKLIST_FOREACH (it, *pAnimList, {
        if (pAnimTrans == it->GetAnimTransform()) {
            return &*it;
        }
    })

    return NULL;
}

void UnbindAnimationLink(AnimationLinkList* pAnimList,
                                 AnimTransform* pAnimTrans) {

    NW4R_UT_LINKLIST_FOREACH (it, *pAnimList, {
        IterType currIt = it;
        if (pAnimTrans != NULL && pAnimTrans == it->GetAnimTransform()) {
            pAnimList->Erase(it);
            currIt->Reset();
        }
    })
}

void AnimPaneTree::Init() {
    mLinkNum = 0;
    mAnimPaneIdx = 0;
    mAnimMatCnt = 0;

    for (int i = 0; i < 9; i++) {
        mAnimMatIdx[i] = 0;
    }
}

} // namespace detail
} // namespace lyt
} // namespace nw4r

extern "C" f32 fn_801FF174(f32 frame, const nw4r::lyt::res::HermiteKey* pKeys, u32 numKey) {

    if (numKey == 1 || frame <= pKeys[0].frame) {
        return pKeys[0].value;
    }

    if (frame >= pKeys[numKey - 1].frame) {
        return pKeys[numKey - 1].value;
    }

    int left = 0;
    int right = numKey - 1;

    while (left != right - 1 && left != right) {
        int center = (left + right) / 2;

        if (frame <= pKeys[center].frame) {
            right = center;
        } else {
            left = center;
        }
    }

    const nw4r::lyt::res::HermiteKey& rLeftKey = pKeys[left];
    const nw4r::lyt::res::HermiteKey& rRightKey = pKeys[right];

    if (RIsSame(frame, rRightKey.frame, 0.001f)) {
        if (right < numKey - 1 && rRightKey.frame == pKeys[right + 1].frame) {
            return pKeys[right + 1].value;
        }

        return rRightKey.value;
    }

    f32 t1 = frame - rLeftKey.frame;
    f32 t2 = 1.0f / (rRightKey.frame - rLeftKey.frame);

    f32 v0 = rLeftKey.value;
    f32 v1 = rRightKey.value;

    f32 s0 = rLeftKey.slope;
    f32 s1 = rRightKey.slope;

    f32 t1_t1_t2 = t1 * t1 * t2;
    f32 t1_t1_t2_t2 = t1_t1_t2 * t2;
    f32 t1_t1_t1_t2_t2 = t1 * t1_t1_t2_t2;
    f32 t1_t1_t1_t2_t2_t2 = t1_t1_t1_t2_t2 * t2;

    return v0 * (2.0f * t1_t1_t1_t2_t2_t2 - 3.0f * t1_t1_t2_t2 + 1.0f) +
           v1 * (-2.0f * t1_t1_t1_t2_t2_t2 + 3.0f * t1_t1_t2_t2) +
           s0 * (t1_t1_t1_t2_t2 - 2.0f * t1_t1_t2 + t1) +
           s1 * (t1_t1_t1_t2_t2 - t1_t1_t2);
}

extern "C" u16 fn_801FF08C(f32 frame, const nw4r::lyt::res::StepKey* pKeys, u32 numKey) {
    if (numKey == 1 || frame <= pKeys[0].frame) {
        return pKeys[0].value;
    }

    if (frame >= pKeys[numKey - 1].frame) {
        return pKeys[numKey - 1].value;
    }

    int left = 0;
    int right = numKey - 1;

    while (left != right - 1 && left != right) {
        int center = (left + right) / 2;
        const nw4r::lyt::res::StepKey& rCenterKey = pKeys[center];

        if (frame < rCenterKey.frame) {
            right = center;
        } else {
            left = center;
        }
    }

    if (RIsSame(frame, pKeys[right].frame, 0.001f)) {
        return pKeys[right].value;
    }

    return pKeys[left].value;
}

