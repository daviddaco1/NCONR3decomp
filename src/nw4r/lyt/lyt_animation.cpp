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

void AnimateMaterialColor(Material* pMaterial,
                          const res::AnimationInfo* pAnimInfo,
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

        s16 sValue;
        OSf32tos16(&fValue, &sValue);

        // [-1024, 1023]
        sValue = ut::Min<s16>(ut::Max<s16>(sValue, -1024), 1023);

        pMaterial->SetColorElement(pTarget->target, sValue);
    }
}

void AnimateTextureSRT(Material* pMaterial, const res::AnimationInfo* pAnimInfo,
                       const u32* pTargetOffsetTbl, f32 frame) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);

        if (pTarget->id < pMaterial->GetTexSRTCap()) {
            const res::HermiteKey* pKeys =
                detail::ConvertOffsToPtr<res::HermiteKey>(pTarget,
                                                          pTarget->keysOffset);

            pMaterial->SetTexSRTElement(
                pTarget->id, pTarget->target,
                GetHermiteCurveValue(frame, pKeys, pTarget->keyNum));
        }
    }
}

void AnimateTexturePattern(Material* pMaterial,
                           const res::AnimationInfo* pAnimInfo,
                           const u32* pTargetOffsetTbl, f32 frame,
                           void** ppTexPalettes) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);

        if (pTarget->id < pMaterial->GetTextureNum() &&
            pTarget->target == ANIMTARGET_TEXPATTURN_IMAGE) {

            const res::StepKey* pKeys = detail::ConvertOffsToPtr<res::StepKey>(
                pTarget, pTarget->keysOffset);

            u16 idx = GetStepCurveValue(frame, pKeys, pTarget->keyNum);

            TexMap texMap(static_cast<TPLPalette*>(ppTexPalettes[idx]), 0);
            pMaterial->SetTextureNoWrap(pTarget->id, texMap);
        }
    }
}

void AnimateIndTexSRT(Material* pMaterial, const res::AnimationInfo* pAnimInfo,
                      const u32* pTargetOffsetTbl, f32 frame) {

    for (int i = 0; i < pAnimInfo->num; i++) {
        const res::AnimationTarget* pTarget =
            detail::ConvertOffsToPtr<res::AnimationTarget>(pAnimInfo,
                                                           pTargetOffsetTbl[i]);

        if (pTarget->id < pMaterial->GetIndTexSRTCap()) {
            const res::HermiteKey* pKeys =
                detail::ConvertOffsToPtr<res::HermiteKey>(pTarget,
                                                          pTarget->keysOffset);

            pMaterial->SetIndTexSRTElement(
                pTarget->id, pTarget->target,
                GetHermiteCurveValue(frame, pKeys, pTarget->keyNum));
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
        case res::AnimationInfo::SIGNATURE_ANMMATCLR: {
            AnimateMaterialColor(pMaterial, pAnimInfo, pTargetOffsetTbl,
                                 mFrame);
            break;
        }

        case res::AnimationInfo::SIGNATURE_ANMTEXSRT: {
            AnimateTextureSRT(pMaterial, pAnimInfo, pTargetOffsetTbl, mFrame);
            break;
        }

        case res::AnimationInfo::SIGNATURE_ANMTEXPAT: {
            if (mpFileResAry == NULL) {
                break;
            }

            AnimateTexturePattern(pMaterial, pAnimInfo, pTargetOffsetTbl,
                                  mFrame, mpFileResAry);
            break;
        }

        case res::AnimationInfo::SIGNATURE_ANMINDTEXSRT: {
            AnimateIndTexSRT(pMaterial, pAnimInfo, pTargetOffsetTbl, mFrame);
            break;
        }
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

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049D9D8;
extern "C" float lbl_804A1F40;
extern "C" float lbl_804A1F44;
extern "C" float lbl_804A1F48;
extern "C" float lbl_804A1F4C;
extern "C" float lbl_804A1F50;
extern "C" float lbl_804A1F54;
extern "C" float lbl_804A1F5C;
extern "C" void AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink();
extern "C" void AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink();
extern "C" void Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material();
extern "C" void Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb();
extern "C" void Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb();
extern "C" void Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor();
extern "C" void CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb();
extern "C" void CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb();
extern "C" void EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator();
extern "C" void GetAnimationShareInfoArray__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetAnimationShareInfoNum__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetGroupArray__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetGroupNum__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTexMapAry__Q34nw4r3lyt8MaterialFv();
extern "C" void GetTexSRTAry__Q34nw4r3lyt8MaterialCFv();
extern "C" void Init__Q44nw4r3lyt6detail12AnimPaneTreeFv();
extern "C" void IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl();
extern "C" void SetColorElement__Q34nw4r3lyt8MaterialFUls();
extern "C" void SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessor();
extern "C" void SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs();
extern "C" void Set__Q34nw4r3lyt12AnimResourceFPCv();
extern "C" void Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource();
extern "C" void TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl();
extern "C" void __ct__Q34nw4r3lyt12AnimResourceFv();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801FF08C();
extern "C" void fn_801FF174();
extern "C" void fn_802004AC();
extern "C" void fn_802004E0();
extern "C" void fn_8020051C();
extern "C" void fn_8030CAF0();

// asm_to_cpp: fn_801FF08C
extern "C" asm void fn_801FF08C() {
    nofralloc
    cmplwi r4, 0x1
    beq lbl_801FF0A4
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801FF0AC
lbl_801FF0A4:
    lhz r3, 0x4(r3)
    blr
lbl_801FF0AC:
    slwi r0, r4, 3
    add r5, r3, r0
    lfs f0, -0x8(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801FF0CC
    lhz r3, -0x4(r5)
    blr
lbl_801FF0CC:
    subi r6, r4, 0x1
    li r5, 0x0
    b lbl_801FF110
lbl_801FF0D8:
    add r4, r5, r6
    srwi r0, r4, 31
    add r4, r0, r4
    extlwi r0, r4, 29, 2
    lfsx f0, r3, r0
    srawi r4, r4, 1
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_801FF104
    mr r6, r4
lbl_801FF104:
    cmpwi r0, 0x0
    bne lbl_801FF110
    mr r5, r4
lbl_801FF110:
    subi r0, r6, 0x1
    cmpw r5, r0
    beq lbl_801FF124
    cmpw r5, r6
    bne lbl_801FF0D8
lbl_801FF124:
    slwi r4, r6, 3
    lfs f0, lbl_804A1F40
    lfsx f2, r3, r4
    li r0, 0x0
    fsubs f1, f1, f2
    fcmpo cr0, f0, f1
    bge lbl_801FF150
    lfs f0, lbl_804A1F44
    fcmpo cr0, f1, f0
    bge lbl_801FF150
    li r0, 0x1
lbl_801FF150:
    cmpwi r0, 0x0
    beq lbl_801FF164
    add r3, r3, r4
    lhz r3, 0x4(r3)
    blr
lbl_801FF164:
    slwi r0, r5, 3
    add r3, r3, r0
    lhz r3, 0x4(r3)
    blr
}

// asm_to_cpp: fn_801FF174
extern "C" asm void fn_801FF174() {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    cmplwi r4, 0x1
    beq lbl_801FF198
    lfs f0, 0x0(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801FF1A0
lbl_801FF198:
    lfs f1, 0x4(r3)
    b lbl_801FF320
lbl_801FF1A0:
    mulli r0, r4, 0xc
    add r5, r3, r0
    lfs f0, -0xc(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801FF1C0
    lfs f1, -0x8(r5)
    b lbl_801FF320
lbl_801FF1C0:
    subi r7, r4, 0x1
    li r6, 0x0
    b lbl_801FF208
lbl_801FF1CC:
    add r5, r6, r7
    srwi r0, r5, 31
    add r0, r0, r5
    srawi r5, r0, 1
    mulli r0, r5, 0xc
    lfsx f0, r3, r0
    fcmpo cr0, f1, f0
    opword 0x4C401382
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_801FF1FC
    mr r7, r5
lbl_801FF1FC:
    cmpwi r0, 0x0
    bne lbl_801FF208
    mr r6, r5
lbl_801FF208:
    subi r0, r7, 0x1
    cmpw r6, r0
    beq lbl_801FF21C
    cmpw r6, r7
    bne lbl_801FF1CC
lbl_801FF21C:
    mulli r5, r7, 0xc
    lfs f0, lbl_804A1F40
    li r0, 0x0
    lfsx f2, r3, r5
    add r8, r3, r5
    mulli r5, r6, 0xc
    fsubs f2, f1, f2
    add r5, r3, r5
    fcmpo cr0, f0, f2
    bge lbl_801FF254
    lfs f0, lbl_804A1F44
    fcmpo cr0, f2, f0
    bge lbl_801FF254
    li r0, 0x1
lbl_801FF254:
    cmpwi r0, 0x0
    beq lbl_801FF294
    subi r0, r4, 0x1
    cmplw r7, r0
    bge lbl_801FF28C
    addi r0, r7, 0x1
    lfs f1, 0x0(r8)
    mulli r0, r0, 0xc
    lfsx f0, r3, r0
    fcmpu cr0, f1, f0
    bne lbl_801FF28C
    add r3, r3, r0
    lfs f1, 0x4(r3)
    b lbl_801FF320
lbl_801FF28C:
    lfs f1, 0x4(r8)
    b lbl_801FF320
lbl_801FF294:
    lfs f2, 0x0(r5)
    lfs f0, 0x0(r8)
    fsubs f7, f1, f2
    lfs f6, lbl_804A1F48
    fsubs f0, f0, f2
    lfs f4, lbl_804A1F4C
    lfs f1, lbl_804A1F50
    fmuls f2, f7, f7
    fdivs f5, f6, f0
    lfs f0, lbl_804A1F54
    lfs f8, 0x4(r5)
    lfs f9, 0x4(r8)
    lfs f10, 0x8(r5)
    lfs f11, 0x8(r8)
    fmuls f12, f5, f2
    fmuls f2, f12, f5
    fmuls f3, f4, f12
    fmuls f13, f7, f2
    fmuls f2, f1, f2
    fmuls f31, f13, f5
    fsubs f3, f13, f3
    fsubs f5, f13, f12
    fmuls f1, f4, f31
    fmuls f0, f0, f31
    fadds f3, f7, f3
    fsubs f1, f1, f2
    fadds f0, f0, f2
    fmuls f2, f10, f3
    fadds f1, f6, f1
    fmuls f0, f9, f0
    fmuls f3, f11, f5
    fmuls f1, f8, f1
    fadds f0, f1, f0
    fadds f0, f2, f0
    fadds f1, f3, f0
lbl_801FF320:
    opword 0xE3E10018
    lfd f31, 0x10(r1)
    addi r1, r1, 0x20
    blr
}


// asm_to_cpp: SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs
extern "C" asm void SetResource__Q34nw4r3lyt18AnimTransformBasicFPCQ44nw4r3lyt3res14AnimationBlockPQ34nw4r3lyt16ResourceAccessorUs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r27, 0xc(r4)
    li r30, 0x0
    stw r4, 0xc(r3)
    mr r31, r3
    cmpwi r27, 0x0
    mr r24, r5
    stw r30, 0x14(r3)
    mr r25, r6
    beq lbl_801FF4F0
    lwz r3, lbl_8049D9D8
    clrlslwi r4, r27, 16, 2
    bl fn_8030CAF0
    cmpwi r3, 0x0
    bne lbl_801FF45C
    li r3, 0x0
    b lbl_801FF480
lbl_801FF45C:
    mr r4, r3
    mtctr r27
    cmplwi r27, 0x0
    ble lbl_801FF480
lbl_801FF46C:
    cmpwi r4, 0x0
    beq lbl_801FF478
    stw r30, 0x0(r4)
lbl_801FF478:
    addi r4, r4, 0x4
    bdnz lbl_801FF46C
lbl_801FF480:
    cmpwi r3, 0x0
    stw r3, 0x14(r31)
    beq lbl_801FF4F0
    lwz r3, 0xc(r31)
    li r26, 0x0
    li r27, 0x0
    lis r30, 0x7469
    addi r29, r3, 0x14
    mr r28, r29
    b lbl_801FF4E0
lbl_801FF4A8:
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r0, 0x0(r28)
    addi r4, r30, 0x6d67
    lwz r12, 0xc(r12)
    li r6, 0x0
    add r5, r29, r0
    mtctr r12
    bctrl
    lwz r4, 0x14(r31)
    addi r28, r28, 0x4
    addi r26, r26, 0x1
    stwx r3, r4, r27
    addi r27, r27, 0x4
lbl_801FF4E0:
    lwz r3, 0xc(r31)
    lhz r0, 0xc(r3)
    cmpw r26, r0
    blt lbl_801FF4A8
lbl_801FF4F0:
    lwz r3, lbl_8049D9D8
    clrlslwi r4, r25, 16, 4
    bl fn_8030CAF0
    cmpwi r3, 0x0
    bne lbl_801FF50C
    li r3, 0x0
    b lbl_801FF544
lbl_801FF50C:
    mr r4, r3
    li r0, 0x0
    mtctr r25
    cmplwi r25, 0x0
    ble lbl_801FF544
lbl_801FF520:
    cmpwi r4, 0x0
    beq lbl_801FF53C
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
    stw r0, 0x8(r4)
    sth r0, 0xc(r4)
    stb r0, 0xe(r4)
lbl_801FF53C:
    addi r4, r4, 0x10
    bdnz lbl_801FF520
lbl_801FF544:
    cmpwi r3, 0x0
    stw r3, 0x18(r31)
    beq lbl_801FF554
    sth r25, 0x1c(r31)
lbl_801FF554:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb
extern "C" asm void Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt4Panebb() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r7, 0xc(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r0, 0x10(r7)
    mr r28, r6
    li r31, 0x0
    li r29, 0x0
    add r30, r7, r0
    b lbl_801FF708
lbl_801FF5A8:
    clrlslwi r0, r29, 16, 2
    lwzx r0, r30, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_801FF664
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r5, r27
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FF704
    cmpwi r31, 0x0
    bne lbl_801FF5EC
    lwz r31, 0x18(r25)
lbl_801FF5EC:
    lhz r0, 0x1c(r25)
    lwz r4, 0x18(r25)
    slwi r0, r0, 4
    add r4, r4, r0
    addi r0, r4, 0xf
    subf r0, r31, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r31, r4
    bge lbl_801FF62C
lbl_801FF614:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_801FF624
    b lbl_801FF630
lbl_801FF624:
    addi r31, r31, 0x10
    bdnz lbl_801FF614
lbl_801FF62C:
    li r31, 0x0
lbl_801FF630:
    cmpwi r31, 0x0
    bne lbl_801FF640
    li r31, 0x0
    b lbl_801FF658
lbl_801FF640:
    stw r25, 0x8(r31)
    mr r4, r31
    sth r29, 0xc(r31)
    stb r28, 0xe(r31)
    bl AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
    addi r31, r31, 0x10
lbl_801FF658:
    cmpwi r31, 0x0
    beq lbl_801FF71C
    b lbl_801FF704
lbl_801FF664:
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r5, r27
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FF704
    cmpwi r31, 0x0
    bne lbl_801FF690
    lwz r31, 0x18(r25)
lbl_801FF690:
    lhz r0, 0x1c(r25)
    lwz r4, 0x18(r25)
    slwi r0, r0, 4
    add r4, r4, r0
    addi r0, r4, 0xf
    subf r0, r31, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r31, r4
    bge lbl_801FF6D0
lbl_801FF6B8:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_801FF6C8
    b lbl_801FF6D4
lbl_801FF6C8:
    addi r31, r31, 0x10
    bdnz lbl_801FF6B8
lbl_801FF6D0:
    li r31, 0x0
lbl_801FF6D4:
    cmpwi r31, 0x0
    bne lbl_801FF6E4
    li r31, 0x0
    b lbl_801FF6FC
lbl_801FF6E4:
    stw r25, 0x8(r31)
    mr r4, r31
    sth r29, 0xc(r31)
    stb r28, 0xe(r31)
    bl AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
    addi r31, r31, 0x10
lbl_801FF6FC:
    cmpwi r31, 0x0
    beq lbl_801FF71C
lbl_801FF704:
    addi r29, r29, 0x1
lbl_801FF708:
    lwz r4, 0xc(r25)
    clrlwi r3, r29, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_801FF5A8
lbl_801FF71C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb
extern "C" asm void Bind__Q34nw4r3lyt18AnimTransformBasicFPQ34nw4r3lyt8Materialb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r6, 0xc(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r0, 0x10(r6)
    li r31, 0x0
    li r29, 0x0
    add r30, r6, r0
    b lbl_801FF81C
lbl_801FF76C:
    clrlslwi r0, r29, 16, 2
    lwzx r0, r30, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_801FF818
    addi r3, r27, 0x44
    bl EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_801FF818
    cmpwi r31, 0x0
    bne lbl_801FF7A0
    lwz r31, 0x18(r26)
lbl_801FF7A0:
    lhz r0, 0x1c(r26)
    lwz r3, 0x18(r26)
    slwi r0, r0, 4
    add r3, r3, r0
    addi r0, r3, 0xf
    subf r0, r31, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r31, r3
    bge lbl_801FF7E0
lbl_801FF7C8:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_801FF7D8
    b lbl_801FF7E4
lbl_801FF7D8:
    addi r31, r31, 0x10
    bdnz lbl_801FF7C8
lbl_801FF7E0:
    li r31, 0x0
lbl_801FF7E4:
    cmpwi r31, 0x0
    bne lbl_801FF7F4
    li r31, 0x0
    b lbl_801FF810
lbl_801FF7F4:
    stw r26, 0x8(r31)
    mr r3, r27
    mr r4, r31
    sth r29, 0xc(r31)
    stb r28, 0xe(r31)
    bl AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
    addi r31, r31, 0x10
lbl_801FF810:
    cmpwi r31, 0x0
    beq lbl_801FF830
lbl_801FF818:
    addi r29, r29, 0x1
lbl_801FF81C:
    lwz r4, 0xc(r26)
    clrlwi r3, r29, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_801FF76C
lbl_801FF830:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material
extern "C" asm void Animate__Q34nw4r3lyt18AnimTransformBasicFUlPQ34nw4r3lyt8Material() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    addi r11, r1, 0x50
    bl _savegpr_19
    lwz r6, 0xc(r3)
    lis r31, 0x524c
    slwi r4, r4, 2
    lfs f30, lbl_804A1F5C
    lwz r0, 0x10(r6)
    mr r20, r3
    mr r21, r5
    addi r30, r31, 0x5450
    add r0, r6, r0
    li r22, 0x0
    lwzx r0, r4, r0
    add r28, r6, r0
    addi r25, r28, 0x18
    b lbl_801FFCF4
lbl_801FFA98:
    lwz r0, 0x0(r25)
    lwzx r3, r28, r0
    add r27, r28, r0
    addi r24, r27, 0x8
    cmpw r3, r30
    beq lbl_801FFBE8
    bge lbl_801FFAD4
    addi r0, r31, 0x4d43
    cmpw r3, r0
    beq lbl_801FFAE4
    bge lbl_801FFCEC
    addi r0, r31, 0x494d
    cmpw r3, r0
    beq lbl_801FFC78
    b lbl_801FFCEC
lbl_801FFAD4:
    addi r0, r31, 0x5453
    cmpw r3, r0
    beq lbl_801FFB70
    b lbl_801FFCEC
lbl_801FFAE4:
    lbz r0, 0x4(r27)
    li r19, 0x0
    lfs f31, 0x10(r20)
    cmpwi r0, 0x0
    ble lbl_801FFCEC
    b lbl_801FFB60
lbl_801FFAFC:
    lwz r0, 0x0(r24)
    fmr f1, f31
    add r23, r27, r0
    lwz r0, 0x8(r23)
    lhz r4, 0x4(r23)
    add r3, r23, r0
    bl fn_801FF174
    fadds f0, f1, f30
    opword 0xF001D008
    li r6, -0x400
    lha r0, 0x8(r1)
    cmpwi r0, -0x400
    blt lbl_801FFB34
    mr r6, r0
lbl_801FFB34:
    extsh r0, r6
    lbz r4, 0x1(r23)
    cmpwi r0, 0x3ff
    mr r3, r21
    li r5, 0x3ff
    bgt lbl_801FFB50
    mr r5, r6
lbl_801FFB50:
    extsh r5, r5
    bl SetColorElement__Q34nw4r3lyt8MaterialFUls
    addi r24, r24, 0x4
    addi r19, r19, 0x1
lbl_801FFB60:
    lbz r0, 0x4(r27)
    cmpw r19, r0
    blt lbl_801FFAFC
    b lbl_801FFCEC
lbl_801FFB70:
    lfs f29, 0x10(r20)
    li r29, 0x0
    b lbl_801FFBD8
lbl_801FFB7C:
    lwz r3, 0x0(r24)
    lwz r0, 0x38(r21)
    add r23, r27, r3
    lbzx r3, r27, r3
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    bge lbl_801FFBD0
    lwz r0, 0x8(r23)
    fmr f1, f29
    lhz r4, 0x4(r23)
    add r3, r23, r0
    bl fn_801FF174
    fmr f31, f1
    lbz r19, 0x1(r23)
    lbz r23, 0x0(r23)
    mr r3, r21
    bl GetTexSRTAry__Q34nw4r3lyt8MaterialCFv
    mulli r4, r23, 0x14
    slwi r0, r19, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_801FFBD0:
    addi r24, r24, 0x4
    addi r29, r29, 0x1
lbl_801FFBD8:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_801FFB7C
    b lbl_801FFCEC
lbl_801FFBE8:
    lwz r23, 0x14(r20)
    cmpwi r23, 0x0
    beq lbl_801FFCEC
    lfs f29, 0x10(r20)
    li r29, 0x0
    b lbl_801FFC68
lbl_801FFC00:
    lwz r3, 0x0(r24)
    lwz r0, 0x3c(r21)
    add r26, r27, r3
    lbzx r3, r27, r3
    srwi r0, r0, 28
    cmplw r3, r0
    bge lbl_801FFC60
    lwz r0, 0x8(r26)
    fmr f1, f29
    lhz r4, 0x4(r26)
    add r3, r26, r0
    bl fn_801FF08C
    clrlslwi r19, r3, 16, 2
    lwzx r0, r23, r19
    cmpwi r0, 0x0
    beq lbl_801FFC60
    lbz r26, 0x0(r26)
    mr r3, r21
    bl GetTexMapAry__Q34nw4r3lyt8MaterialFv
    mulli r0, r26, 0x1c
    lwzx r4, r23, r19
    li r5, 0x0
    add r3, r3, r0
    bl ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
lbl_801FFC60:
    addi r24, r24, 0x4
    addi r29, r29, 0x1
lbl_801FFC68:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_801FFC00
    b lbl_801FFCEC
lbl_801FFC78:
    lfs f29, 0x10(r20)
    li r29, 0x0
    b lbl_801FFCE0
lbl_801FFC84:
    lwz r3, 0x0(r24)
    lwz r0, 0x38(r21)
    add r23, r27, r3
    lbzx r3, r27, r3
    extrwi r0, r0, 2, 12
    cmplw r3, r0
    bge lbl_801FFCD8
    lwz r0, 0x8(r23)
    fmr f1, f29
    lhz r4, 0x4(r23)
    add r3, r23, r0
    bl fn_801FF174
    fmr f31, f1
    lbz r19, 0x1(r23)
    lbz r23, 0x0(r23)
    mr r3, r21
    bl GetIndTexSRTAry__Q34nw4r3lyt8MaterialFv
    mulli r4, r23, 0x14
    slwi r0, r19, 2
    add r3, r3, r4
    stfsx f31, r3, r0
lbl_801FFCD8:
    addi r24, r24, 0x4
    addi r29, r29, 0x1
lbl_801FFCE0:
    lbz r0, 0x4(r27)
    cmpw r29, r0
    blt lbl_801FFC84
lbl_801FFCEC:
    addi r25, r25, 0x4
    addi r22, r22, 0x1
lbl_801FFCF4:
    lbz r0, 0x14(r28)
    cmpw r22, r0
    blt lbl_801FFA98
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    addi r11, r1, 0x50
    lfd f29, 0x50(r1)
    bl _restgpr_19
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}


// asm_to_cpp: Set__Q34nw4r3lyt12AnimResourceFPCv
extern "C" asm void Set__Q34nw4r3lyt12AnimResourceFPCv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    lis r4, 0x524c
    stw r30, 0x0(r3)
    addi r4, r4, 0x414e
    stw r30, 0x4(r3)
    stw r30, 0x8(r3)
    stw r30, 0xc(r3)
    mr r3, r29
    bl TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl
    cmpwi r3, 0x0
    beq lbl_801FFE3C
    lhz r3, 0x6(r29)
    extrwi. r0, r3, 8, 16
    clrlwi r0, r3, 24
    bne lbl_801FFDB8
    cmplwi r0, 0x8
    blt lbl_801FFDB8
    cmplwi r0, 0xa
    bgt lbl_801FFDB8
    li r30, 0x1
lbl_801FFDB8:
    cmpwi r30, 0x0
    beq lbl_801FFE3C
    lhz r0, 0xc(r29)
    lis r3, 0x7061
    stw r29, 0x0(r31)
    addi r6, r3, 0x6931
    add r7, r29, r0
    addi r4, r3, 0x7431
    addi r5, r3, 0x6831
    li r8, 0x0
    b lbl_801FFE2C
lbl_801FFDE4:
    lwz r0, 0x0(r7)
    cmpw r0, r6
    beq lbl_801FFE1C
    bge lbl_801FFE00
    cmpw r0, r5
    beq lbl_801FFE14
    b lbl_801FFE20
lbl_801FFE00:
    cmpw r0, r4
    beq lbl_801FFE0C
    b lbl_801FFE20
lbl_801FFE0C:
    stw r7, 0x8(r31)
    b lbl_801FFE20
lbl_801FFE14:
    stw r7, 0xc(r31)
    b lbl_801FFE20
lbl_801FFE1C:
    stw r7, 0x4(r31)
lbl_801FFE20:
    lwz r0, 0x4(r7)
    addi r8, r8, 0x1
    add r7, r7, r0
lbl_801FFE2C:
    lwz r3, 0x0(r31)
    lhz r0, 0xe(r3)
    cmpw r8, r0
    blt lbl_801FFDE4
lbl_801FFE3C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}






// asm_to_cpp: CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb
extern "C" asm void CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt4Paneb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r6, 0x4(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r0, 0x10(r6)
    li r31, 0x0
    li r29, 0x0
    add r30, r6, r0
    b lbl_801FFF98
lbl_801FFF28:
    clrlslwi r0, r29, 16, 2
    lwzx r0, r30, r0
    add r4, r4, r0
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    bne lbl_801FFF68
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r5, r28
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FFF94
    addi r31, r31, 0x1
    b lbl_801FFF94
lbl_801FFF68:
    lwz r12, 0x0(r27)
    mr r3, r27
    mr r5, r28
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801FFF94
    clrlwi r3, r31, 16
    addi r0, r3, 0x1
    clrlwi r31, r0, 16
lbl_801FFF94:
    addi r29, r29, 0x1
lbl_801FFF98:
    lwz r4, 0x4(r26)
    clrlwi r3, r29, 16
    lhz r0, 0xe(r4)
    cmplw r3, r0
    blt lbl_801FFF28
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}



// asm_to_cpp: Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
extern "C" asm void Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_18
    lwz r25, 0x4(r5)
    mr r18, r3
    mr r19, r4
    mr r20, r5
    lwz r0, 0x10(r25)
    addi r21, r4, 0xbc
    li r22, 0x0
    li r28, 0x0
    add r23, r25, r0
    b lbl_802000D4
lbl_802000A4:
    clrlslwi r0, r28, 16, 2
    lwzx r0, r23, r0
    add r3, r25, r0
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    bne lbl_802000D0
    mr r4, r21
    bl EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802000D0
    b lbl_802000EC
lbl_802000D0:
    addi r28, r28, 0x1
lbl_802000D4:
    lhz r0, 0xe(r25)
    clrlwi r3, r28, 16
    cmplw r3, r0
    blt lbl_802000A4
    lis r3, 0x1
    subi r28, r3, 0x1
lbl_802000EC:
    clrlwi r0, r28, 16
    cmplwi r0, 0xffff
    beq lbl_802000FC
    li r22, 0x1
lbl_802000FC:
    lwz r12, 0x0(r19)
    mr r3, r19
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    mr r29, r3
    addi r23, r1, 0x8
    clrlwi r31, r3, 24
    li r21, 0x0
    lis r30, 0x1
    b lbl_802001B8
lbl_80200128:
    lwz r12, 0x0(r19)
    mr r3, r19
    clrlwi r4, r21, 24
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x10(r25)
    addi r24, r3, 0x44
    li r27, 0x0
    add r26, r25, r0
    b lbl_80200184
lbl_80200154:
    clrlslwi r0, r27, 16, 2
    lwzx r0, r26, r0
    add r3, r25, r0
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_80200180
    mr r4, r24
    bl EqualsMaterialName__Q34nw4r3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_80200180
    b lbl_80200198
lbl_80200180:
    addi r27, r27, 0x1
lbl_80200184:
    lhz r0, 0xe(r25)
    clrlwi r3, r27, 16
    cmplw r3, r0
    blt lbl_80200154
    subi r27, r30, 0x1
lbl_80200198:
    clrlwi r0, r27, 16
    clrlslwi r3, r21, 24, 1
    cmplwi r0, 0xffff
    sthx r27, r23, r3
    beq lbl_802001B4
    addi r0, r22, 0x1
    clrlwi r22, r0, 16
lbl_802001B4:
    addi r21, r21, 0x1
lbl_802001B8:
    clrlwi r0, r21, 24
    cmplw r0, r31
    blt lbl_80200128
    cmpwi r22, 0x0
    beq lbl_802002B0
    lwz r6, 0x0(r20)
    cmpwi r31, 0x0
    lwz r5, 0x4(r20)
    li r3, 0x0
    lwz r4, 0x8(r20)
    lwz r0, 0xc(r20)
    stw r6, 0x0(r18)
    stw r5, 0x4(r18)
    stw r4, 0x8(r18)
    stw r0, 0xc(r18)
    sth r28, 0x10(r18)
    stb r29, 0x26(r18)
    beq lbl_802002AC
    cmplwi r31, 0x8
    addi r0, r29, 0xf8
    ble lbl_80200278
    clrlwi r4, r0, 24
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r4, 0x0
    ble lbl_80200278
lbl_80200224:
    clrlslwi r0, r3, 24, 1
    addi r5, r1, 0x8
    lhzux r4, r5, r0
    add r6, r18, r0
    addi r3, r3, 0x8
    sth r4, 0x14(r6)
    lhz r0, 0x2(r5)
    lhz r4, 0x4(r5)
    sth r0, 0x16(r6)
    lhz r0, 0x6(r5)
    sth r4, 0x18(r6)
    lhz r4, 0x8(r5)
    sth r0, 0x1a(r6)
    lhz r0, 0xa(r5)
    sth r4, 0x1c(r6)
    lhz r4, 0xc(r5)
    sth r0, 0x1e(r6)
    lhz r0, 0xe(r5)
    sth r4, 0x20(r6)
    sth r0, 0x22(r6)
    bdnz lbl_80200224
lbl_80200278:
    clrlwi r4, r29, 24
    clrlwi r5, r3, 24
    subf r0, r5, r4
    addi r6, r1, 0x8
    mtctr r0
    cmplw r5, r4
    bge lbl_802002AC
lbl_80200294:
    clrlslwi r4, r3, 24, 1
    addi r3, r3, 0x1
    lhzx r0, r6, r4
    add r4, r18, r4
    sth r0, 0x14(r4)
    bdnz lbl_80200294
lbl_802002AC:
    sth r22, 0x12(r18)
lbl_802002B0:
    addi r11, r1, 0x60
    bl _restgpr_18
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor
extern "C" asm void Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r12, 0x0(r4)
    mr r27, r3
    mr r3, r4
    mr r28, r5
    lwz r12, 0x10(r12)
    mr r24, r6
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    mr r31, r3
    mr r5, r24
    lwz r4, 0x4(r27)
    lwz r12, 0x10(r12)
    lhz r6, 0x12(r27)
    mtctr r12
    bctrl
    lhz r5, 0x10(r27)
    li r30, 0x0
    cmplwi r5, 0xffff
    beq lbl_802003A0
    lhz r0, 0x1c(r31)
    lwz r25, 0x18(r31)
    slwi r0, r0, 4
    add r3, r25, r0
    addi r0, r3, 0xf
    subf r0, r25, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r25, r3
    bge lbl_8020036C
lbl_80200354:
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    bne lbl_80200364
    b lbl_80200370
lbl_80200364:
    addi r25, r25, 0x10
    bdnz lbl_80200354
lbl_8020036C:
    li r25, 0x0
lbl_80200370:
    cmpwi r25, 0x0
    bne lbl_80200380
    li r30, 0x0
    b lbl_802003A0
lbl_80200380:
    stw r31, 0x8(r25)
    li r0, 0x1
    mr r3, r28
    mr r4, r25
    sth r5, 0xc(r25)
    stb r0, 0xe(r25)
    bl AddAnimationLink__Q34nw4r3lyt4PaneFPQ34nw4r3lyt13AnimationLink
    addi r30, r25, 0x10
lbl_802003A0:
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x64(r12)
    mtctr r12
    bctrl
    lbz r4, 0x26(r27)
    clrlwi r0, r3, 24
    cmplw r4, r0
    ble lbl_802003C8
    mr r4, r3
lbl_802003C8:
    clrlwi r26, r4, 24
    li r29, 0x0
    li r25, 0x1
    b lbl_80200484
lbl_802003D8:
    clrlslwi r0, r29, 24, 1
    add r24, r27, r0
    lhz r0, 0x14(r24)
    cmplwi r0, 0xffff
    beq lbl_80200480
    lwz r12, 0x0(r28)
    mr r3, r28
    clrlwi r4, r29, 24
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
    cmpwi r30, 0x0
    lhz r5, 0x14(r24)
    bne lbl_80200414
    lwz r30, 0x18(r31)
lbl_80200414:
    lhz r0, 0x1c(r31)
    lwz r4, 0x18(r31)
    slwi r0, r0, 4
    add r4, r4, r0
    addi r0, r4, 0xf
    subf r0, r30, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r30, r4
    bge lbl_80200454
lbl_8020043C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_8020044C
    b lbl_80200458
lbl_8020044C:
    addi r30, r30, 0x10
    bdnz lbl_8020043C
lbl_80200454:
    li r30, 0x0
lbl_80200458:
    cmpwi r30, 0x0
    bne lbl_80200468
    li r30, 0x0
    b lbl_80200480
lbl_80200468:
    stw r31, 0x8(r30)
    mr r4, r30
    sth r5, 0xc(r30)
    stb r25, 0xe(r30)
    bl AddAnimationLink__Q34nw4r3lyt8MaterialFPQ34nw4r3lyt13AnimationLink
    addi r30, r30, 0x10
lbl_80200480:
    addi r29, r29, 0x1
lbl_80200484:
    clrlwi r0, r29, 24
    cmplw r0, r26
    blt lbl_802003D8
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802004AC
extern "C" asm void fn_802004AC() {
    nofralloc
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    b lbl_802004D0
lbl_802004B8:
    lwz r3, 0x8(r5)
    cmplw r4, r3
    bne lbl_802004CC
    mr r3, r5
    blr
lbl_802004CC:
    lwz r5, 0x0(r5)
lbl_802004D0:
    cmplw r5, r0
    bne lbl_802004B8
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_802004E0
extern "C" asm void fn_802004E0() {
    nofralloc
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    b lbl_8020050C
lbl_802004EC:
    lwz r3, 0x8(r5)
    lwz r6, 0x4(r4)
    lwz r3, 0xc(r3)
    cmplw r6, r3
    bne lbl_80200508
    mr r3, r5
    blr
lbl_80200508:
    lwz r5, 0x0(r5)
lbl_8020050C:
    cmplw r5, r0
    bne lbl_802004EC
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_8020051C
extern "C" asm void fn_8020051C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r31, 0x4(r3)
    mr r26, r3
    mr r27, r4
    addi r30, r3, 0x4
    li r29, 0x0
    b lbl_80200580
lbl_80200548:
    cmpwi r27, 0x0
    mr r28, r31
    lwz r31, 0x0(r31)
    beq lbl_80200564
    lwz r0, 0x8(r28)
    cmplw r0, r27
    bne lbl_80200580
lbl_80200564:
    stw r28, 0x8(r1)
    mr r3, r26
    addi r4, r1, 0x8
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    stw r29, 0x8(r28)
    sth r29, 0xc(r28)
    stb r29, 0xe(r28)
lbl_80200580:
    cmplw r31, r30
    bne lbl_80200548
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
