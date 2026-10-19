#include "nw4r/g3d.h" // IWYU pragma: export

namespace nw4r {
namespace g3d {

NW4R_G3D_RTTI_DEF(AnmObjShp);
NW4R_G3D_RTTI_DEF(AnmObjShpNode);
NW4R_G3D_RTTI_DEF(AnmObjShpBlend);
NW4R_G3D_RTTI_DEF(AnmObjShpRes);

/******************************************************************************
 *
 * AnmObjShp
 *
 ******************************************************************************/
AnmObjShp::AnmObjShp(MEMAllocator *pAllocator, u16 *pBindingBuf, int numBinding)
    : AnmObj(pAllocator, NULL), mNumBinding(numBinding), mpBinding(pBindingBuf) {
    Release();
}

bool AnmObjShp::TestExistence(u32 idx) const {
    return !(mpBinding[idx] & (BINDING_UNDEFINED | BINDING_INVALID));
}

bool AnmObjShp::TestDefined(u32 idx) const {
    return !(mpBinding[idx] & BINDING_UNDEFINED);
}

void AnmObjShp::Release() {
    for (int i = 0; i < mNumBinding; i++) {
        mpBinding[i] = BINDING_UNDEFINED;
    }

    SetAnmFlag(FLAG_ANM_BOUND, false);
}

AnmObjShpRes *AnmObjShp::Attach(int idx, AnmObjShpRes *pRes) {
#pragma unused(idx)
#pragma unused(pRes)

    return NULL;
}

AnmObjShpRes *AnmObjShp::Detach(int idx) {
#pragma unused(idx)

    return NULL;
}

void AnmObjShp::SetWeight(int idx, f32 weight) {
#pragma unused(idx)
#pragma unused(weight)
}

f32 AnmObjShp::GetWeight(int idx) const {
#pragma unused(idx)

    return 0.0f;
}

void AnmObjShp::DetachAll() {}

/******************************************************************************
 *
 * AnmObjShpNode
 *
 ******************************************************************************/
AnmObjShpNode::AnmObjShpNode(
    MEMAllocator *pAllocator, u16 *pBindingBuf, int numBinding, AnmObjShpRes **ppChildrenBuf, int numChildren
)
    : AnmObjShp(pAllocator, pBindingBuf, numBinding), mChildrenArraySize(numChildren), mpChildrenArray(ppChildrenBuf) {
    for (int i = 0; i < mChildrenArraySize; i++) {
        mpChildrenArray[i] = NULL;
    }
}

AnmObjShpNode::~AnmObjShpNode() {
    DetachAll();
}

AnmObjShpRes *AnmObjShpNode::Attach(int idx, AnmObjShpRes *pRes) {
    AnmObjShpRes *pOld = Detach(idx);
    bool hasAnm = false;

    for (u32 i = 0; i < mNumBinding; i++) {
        if (!pRes->TestDefined(i)) {
            continue;
        }

        hasAnm = true;
        mpBinding[i] = 0;
    }

    if (hasAnm) {
        SetAnmFlag(FLAG_ANM_BOUND, true);
    }

    mpChildrenArray[idx] = pRes;
    pRes->G3dProc(G3DPROC_ATTACH_PARENT, 0, this);
    return pOld;
}

AnmObjShpRes *AnmObjShpNode::Detach(int idx) {
    AnmObjShpRes *pOld = mpChildrenArray[idx];

    if (pOld != NULL) {
        pOld->G3dProc(G3DPROC_DETACH_PARENT, 0, this);
        mpChildrenArray[idx] = NULL;

        bool hasAnm = false;
        for (u32 i = 0; i < mNumBinding; i++) {
            u16 binding = BINDING_UNDEFINED;

            for (int j = 0; j < mChildrenArraySize; j++) {
                AnmObjShpRes *pChild = mpChildrenArray[j];

                if (pChild == NULL || !pChild->TestDefined(i)) {
                    continue;
                }

                hasAnm = true;
                binding = 0;
                break;
            }

            mpBinding[i] = binding;
        }

        if (!hasAnm) {
            SetAnmFlag(FLAG_ANM_BOUND, false);
        }
    }

    return pOld;
}

void AnmObjShpNode::DetachAll() {
    for (int i = 0; i < mChildrenArraySize; i++) {
        Detach(i);
    }
}

void AnmObjShpNode::UpdateFrame() {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            mpChildrenArray[i]->UpdateFrame();
        }
    }
}

void AnmObjShpNode::SetFrame(f32 frame) {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            mpChildrenArray[i]->SetFrame(frame);
        }
    }
}

f32 AnmObjShpNode::GetFrame() const {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            return mpChildrenArray[i]->GetFrame();
        }
    }

    return 0.0f;
}

void AnmObjShpNode::SetUpdateRate(f32 rate) {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            mpChildrenArray[i]->SetUpdateRate(rate);
        }
    }
}

f32 AnmObjShpNode::GetUpdateRate() const {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            return mpChildrenArray[i]->GetUpdateRate();
        }
    }

    return 1.0f;
}

bool AnmObjShpNode::Bind(const ResMdl mdl) {
    bool success = false;

    for (int i = 0; i < mChildrenArraySize; i++) {
        AnmObjShpRes *pChild = mpChildrenArray[i];
        if (pChild == NULL) {
            continue;
        }

        bool childSuccess = pChild->Bind(mdl);
        success = success || childSuccess;

        for (u32 j = 0; j < mNumBinding; j++) {
            if (pChild->TestDefined(j)) {
                mpBinding[j] = 0;
            }
        }
    }

    SetAnmFlag(FLAG_ANM_BOUND, true);
    return success;
}

void AnmObjShpNode::Release() {
    for (int i = 0; i < mChildrenArraySize; i++) {
        if (mpChildrenArray[i] != NULL) {
            mpChildrenArray[i]->Release();
        }
    }

    AnmObjShp::Release();
}

void AnmObjShpNode::G3dProc(u32 task, u32 param, void *pInfo) {
#pragma unused(param)

    switch (task) {
        case G3DPROC_CHILD_DETACHED: {
            for (int i = 0; i < mChildrenArraySize; i++) {
                if (mpChildrenArray[i] == pInfo) {
                    Detach(i);
                    return;
                }
            }

            break;
        }

        case G3DPROC_DETACH_PARENT: {
            SetParent(NULL);
            break;
        }

        case G3DPROC_ATTACH_PARENT: {
            SetParent(static_cast<G3dObj *>(pInfo));
            break;
        }
    }
}

/******************************************************************************
 *
 * AnmObjShpBlend
 *
 ******************************************************************************/
AnmObjShpBlend *AnmObjShpBlend::Construct(MEMAllocator *pAllocator, u32 *pSize, ResMdl mdl, int numChildren) {
    if (!mdl.IsValid()) {
        return NULL;
    }

    int bindNum = mdl.GetResVtxPosNumEntries();

    u32 bindSize = bindNum * sizeof(u16);
    u32 childrenSize = numChildren * sizeof(AnmObjShpRes *);
    u32 weightSize = numChildren * sizeof(f32);

    u32 bindOfs = ut::RoundUp(sizeof(AnmObjShpBlend), 4);
    u32 childrenOfs = ut::RoundUp(bindOfs + bindSize, 4);
    u32 weightOfs = ut::RoundUp(childrenOfs + childrenSize, 4);

    u32 size = ut::RoundUp(weightOfs + weightSize, 4);
    if (pSize != NULL) {
        *pSize = size;
    }

    if (pAllocator == NULL) {
        return NULL;
    }

    u8 *pBuffer = reinterpret_cast<u8 *>(Alloc(pAllocator, size));
    if (pBuffer == NULL) {
        return NULL;
    }

    // clang-format off
    return new (pBuffer) AnmObjShpBlend(
        pAllocator,
        reinterpret_cast<u16*>(pBuffer + bindOfs),
        bindNum,
        reinterpret_cast<AnmObjShpRes**>(pBuffer + childrenOfs),
        numChildren,
        reinterpret_cast<f32*>(pBuffer + weightOfs));
    // clang-format on
}

AnmObjShpBlend::AnmObjShpBlend(
    MEMAllocator *pAllocator, u16 *pBindingBuf, int numBinding, AnmObjShpRes **ppChildrenBuf, int numChildren,
    f32 *pWeightBuf
)
    : AnmObjShpNode(pAllocator, pBindingBuf, numBinding, ppChildrenBuf, numChildren), mpWeightArray(pWeightBuf) {
    for (int i = 0; i < mChildrenArraySize; i++) {
        mpWeightArray[i] = 1.0f;
    }
}

const ShpAnmResult *AnmObjShpBlend::GetResult(ShpAnmResult *pResult, u32 idx) {
    detail::workmem::ShpAnmResultBuf *pWorkBuffer = detail::workmem::GetShpAnmResultBufTemporary();

    int blendNum = 0;
    f32 weightSum = 0.0f;

    for (int i = 0; i < mChildrenArraySize; i++) {
        f32 weight = mpWeightArray[i];
        AnmObjShpRes *pChild = mpChildrenArray[i];

        // @note Bitwise AND
        if (!(pChild != NULL & weight != 0.0f)) {
            continue;
        }

        if (!pChild->TestExistence(idx)) {
            continue;
        }

        detail::workmem::ShpAnmResultBuf &rAnmBuf = pWorkBuffer[blendNum];

        const ShpAnmResult *pMyResult = pChild->GetResult(&rAnmBuf.resultBuf, idx);

        if (!(pMyResult->flags & 1)) {
            continue;
        }

        rAnmBuf.pResult = pMyResult;
        rAnmBuf.weight = weight;

        blendNum++;
        weightSum += weight;
    }

    if (blendNum == 0) {
        pResult->flags = 0;
        return pResult;
    }

    if (blendNum == 1) {
        detail::workmem::ShpAnmResultBuf &rAnmBuf = *pWorkBuffer;

        if (rAnmBuf.pResult == &rAnmBuf.resultBuf) {
            *pResult = *rAnmBuf.pResult;
            return pResult;
        } else {
            return rAnmBuf.pResult;
        }
    }

    f32 invWeightSum = math::FInv(weightSum);

    pResult->flags = pWorkBuffer->pResult->flags;
    pResult->numKeyShape = 0;
    pResult->baseShapeVtxSet = pWorkBuffer->pResult->baseShapeVtxSet;
    pResult->baseShapeWeight = 0.0f;

    for (int i = 0; i < blendNum; i++) {
        const ShpAnmResult *pMyResult = pWorkBuffer[i].pResult;
        f32 weight = pWorkBuffer[i].weight;
        f32 ratio = weight * invWeightSum;

        pResult->baseShapeWeight += pMyResult->baseShapeWeight * ratio;

        for (u32 myKey = 0; myKey < pMyResult->numKeyShape; myKey++) {
            const BlendVtx &rMyKeyShape = pMyResult->keyShape[myKey];

            u32 otherKey;
            for (otherKey = 0; otherKey < pResult->numKeyShape; otherKey++) {
                if (rMyKeyShape.vtxSet == pResult->keyShape[otherKey].vtxSet) {
                    break;
                }
            }

            if (otherKey == pResult->numKeyShape) {
                pResult->keyShape[otherKey].vtxSet = rMyKeyShape.vtxSet;
                pResult->keyShape[otherKey].weight = 0.0f;
                pResult->numKeyShape++;
            }

            pResult->keyShape[otherKey].weight += rMyKeyShape.weight * ratio;
        }
    }

    return pResult;
}

void AnmObjShpBlend::SetWeight(int idx, f32 weight) {
    mpWeightArray[idx] = weight;
}

f32 AnmObjShpBlend::GetWeight(int idx) const {
    return mpWeightArray[idx];
}

/******************************************************************************
 *
 * AnmObjShpRes
 *
 ******************************************************************************/
// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb: definicion C reemplazada por asm (ver abajo)


AnmObjShpRes::AnmObjShpRes(
    MEMAllocator *pAllocator, ResAnmShp shp, u16 *pBindingBuf, ShpAnmVtxSet *pVtxSetBuf, int numBinding,
    ShpAnmResult *pCacheBuf
)
    : AnmObjShp(pAllocator, pBindingBuf, numBinding),
      FrameCtrl(0.0f, shp.GetNumFrame(), GetAnmPlayPolicy(shp.GetAnmPolicy())),
      mRes(shp),
      mpVtxSetArray(pVtxSetBuf),
      mpResultCache(pCacheBuf) {
    if (mpResultCache != NULL) {
        UpdateCache();
    }
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf: definicion C reemplazada por asm (ver abajo)


f32 AnmObjShpRes::GetFrame() const {
    return GetFrm();
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf: definicion C reemplazada por asm (ver abajo)


f32 AnmObjShpRes::GetUpdateRate() const {
    return GetRate();
}

// UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv: definicion C reemplazada por asm (ver abajo)


// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl: definicion C reemplazada por asm (ver abajo)


// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl: definicion C reemplazada por asm (ver abajo)


void AnmObjShpRes::UpdateCache() {
    f32 frame = GetFrm();

    for (u32 i = 0; i < mNumBinding; i++) {
        u16 bind = mpBinding[i];

        if (!(bind & BINDING_UNDEFINED)) {
            u32 id = bind & BINDING_ID_MASK;
            mRes.GetAnmResult(&mpResultCache[id], id, frame, mpVtxSetArray);
        }
    }
}

void AnmObjShpRes::G3dProc(u32 task, u32 param, void *pInfo) {
#pragma unused(param)

    switch (task) {
        case G3DPROC_UPDATEFRAME: {
            UpdateFrame();
            break;
        }

        case G3DPROC_DETACH_PARENT: {
            SetParent(NULL);
            break;
        }

        case G3DPROC_ATTACH_PARENT: {
            SetParent(static_cast<G3dObj *>(pInfo));
            break;
        }
    }
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1D00;
extern "C" float lbl_804A1D04;
extern "C" float lbl_804A1D08;
extern "C" u8 lbl_80361098[];
extern "C" u8 lbl_803610E8[];
extern "C" void Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl();
extern "C" void Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb();
extern "C" void GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void SetFrame__Q34nw4r3g3d12AnmObjShpResFf();
extern "C" void SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf();
extern "C" void UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void fn_801D0DAC();
extern "C" void fn_801D0EA4();
extern "C" void fn_801D0ED8();
extern "C" void fn_801D1004();
extern "C" void fn_801D8644();
extern "C" void fn_801DD2FC();
extern "C" void fn_801DDA74();
extern "C" void fn_8030CAF0();

// asm_to_cpp: fn_801DD2FC
extern "C" asm void fn_801DD2FC() {
    nofralloc
    lis r4, 0x1
    li r7, 0x0
    addi r5, r4, -0x8000
    li r6, 0x0
    b lbl_801DD320
lbl_801DD310:
    lwz r4, 0x14(r3)
    addi r7, r7, 0x1
    sthx r5, r4, r6
    addi r6, r6, 0x2
lbl_801DD320:
    lwz r0, 0x10(r3)
    cmpw r7, r0
    blt lbl_801DD310
    li r4, 0x4
    li r5, 0x0
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
}

// asm_to_cpp: Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
extern "C" asm void Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r8, 0x0(r5)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    cmpwi r8, 0x0
    mr r24, r7
    beq lbl_801DD3DC
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801DD3E4
lbl_801DD3DC:
    li r3, 0x0
    b lbl_801DD5B8
lbl_801DD3E4:
    lwz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_801DD3F8
    add r3, r8, r0
    b lbl_801DD3FC
lbl_801DD3F8:
    li r3, 0x0
lbl_801DD3FC:
    cmpwi r3, 0x0
    beq lbl_801DD40C
    lwz r25, 0x4(r3)
    b lbl_801DD410
lbl_801DD40C:
    li r25, 0x0
lbl_801DD410:
    mr r3, r6
    bl fn_801D0EA4
    lwz r5, 0x0(r28)
    neg r0, r24
    slwi r4, r3, 1
    mr r26, r3
    lhz r6, 0x26(r5)
    or r0, r0, r24
    srawi r5, r0, 31
    addi r4, r4, 0x3b
    mulli r0, r6, 0xc
    cmpwi r29, 0x0
    and r5, r25, r5
    clrrwi r30, r4, 2
    add r3, r30, r0
    addi r0, r3, 0x3
    mulli r24, r5, 0x218
    clrrwi r25, r0, 2
    add r3, r25, r24
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    beq lbl_801DD46C
    stw r4, 0x0(r29)
lbl_801DD46C:
    cmpwi r27, 0x0
    bne lbl_801DD47C
    li r3, 0x0
    b lbl_801DD5B8
lbl_801DD47C:
    mr r3, r27
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801DD498
    li r3, 0x0
    b lbl_801DD5B8
lbl_801DD498:
    addi r5, r3, 0x38
    add r30, r3, r30
    add r29, r3, r25
    beq lbl_801DD5B4
    cmpwi r24, 0x0
    lwz r28, 0x0(r28)
    beq lbl_801DD4B8
    b lbl_801DD4BC
lbl_801DD4B8:
    li r29, 0x0
lbl_801DD4BC:
    li r0, 0x0
    lis r4, lbl_803610E8@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_803610E8@l
    stw r27, 0x8(r3)
    stw r0, 0xc(r3)
    stw r4, 0x0(r3)
    stw r26, 0x10(r3)
    stw r5, 0x14(r3)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lhz r4, 0x24(r28)
    lis r0, 0x4330
    lwz r5, 0x28(r28)
    lis r3, lbl_80361098@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1D00
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1D04
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80361098@l
    lfd f3, lbl_804A1D08
    cmpwi r29, 0x0
    stfs f1, 0x18(r31)
    lfd f2, 0x8(r1)
    stfs f0, 0x1c(r31)
    fsubs f0, f2, f3
    lwzx r0, r4, r5
    stfs f1, 0x20(r31)
    stfs f0, 0x24(r31)
    stw r0, 0x28(r31)
    stw r3, 0x0(r31)
    stw r28, 0x2c(r31)
    stw r30, 0x30(r31)
    stw r29, 0x34(r31)
    beq lbl_801DD5B4
    lfs f31, 0x18(r31)
    li r26, 0x0
    li r25, 0x0
    b lbl_801DD5A8
lbl_801DD570:
    lwz r3, 0x14(r31)
    lhzx r3, r3, r25
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DD5A0
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x218
    lwz r4, 0x34(r31)
    lwz r6, 0x30(r31)
    addi r3, r31, 0x2c
    add r4, r4, r0
    bl fn_801D8644
lbl_801DD5A0:
    addi r25, r25, 0x2
    addi r26, r26, 0x1
lbl_801DD5A8:
    lwz r0, 0x10(r31)
    cmplw r26, r0
    blt lbl_801DD570
lbl_801DD5B4:
    mr r3, r31
lbl_801DD5B8:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: SetFrame__Q34nw4r3g3d12AnmObjShpResFf
extern "C" asm void SetFrame__Q34nw4r3g3d12AnmObjShpResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f3, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x28(r3)
    lfs f1, 0x20(r3)
    lfs f2, 0x24(r3)
    mtctr r12
    bctrl
    lwz r0, 0x34(r29)
    stfs f1, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_801DD678
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DD66C
lbl_801DD634:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DD664
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x218
    lwz r4, 0x34(r29)
    lwz r6, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D8644
lbl_801DD664:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DD66C:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DD634
lbl_801DD678:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf
extern "C" asm void SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1D00
    stw r31, 0x1c(r1)
    fcmpu cr0, f0, f1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f1, 0x1c(r3)
    bne lbl_801DD738
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    beq lbl_801DD738
    lfs f31, 0x18(r3)
    li r31, 0x0
    li r30, 0x0
    b lbl_801DD72C
lbl_801DD6F4:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DD724
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x218
    lwz r4, 0x34(r29)
    lwz r6, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D8644
lbl_801DD724:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DD72C:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DD6F4
lbl_801DD738:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv
extern "C" asm void UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f0, lbl_804A1D00
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801DD824
    lfs f2, 0x1c(r3)
    lfs f1, lbl_8049C4B8
    lfs f0, 0x18(r3)
    fmuls f3, f2, f1
    lwz r12, 0x28(r3)
    lfs f1, 0x20(r3)
    lfs f2, 0x24(r3)
    fadds f3, f0, f3
    mtctr r12
    bctrl
    lwz r0, 0x34(r29)
    stfs f1, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_801DD824
    frsp f31, f1
    li r31, 0x0
    li r30, 0x0
    b lbl_801DD818
lbl_801DD7E0:
    lwz r3, 0x14(r29)
    lhzx r3, r3, r30
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_801DD810
    clrlwi r5, r3, 18
    fmr f1, f31
    mulli r0, r5, 0x218
    lwz r4, 0x34(r29)
    lwz r6, 0x30(r29)
    addi r3, r29, 0x2c
    add r4, r4, r0
    bl fn_801D8644
lbl_801DD810:
    addi r30, r30, 0x2
    addi r31, r31, 0x1
lbl_801DD818:
    lwz r0, 0x10(r29)
    cmplw r31, r0
    blt lbl_801DD7E0
lbl_801DD824:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
extern "C" asm void Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lwz r5, 0x2c(r3)
    mr r28, r3
    mr r29, r4
    li r31, 0x0
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_801DD880
    add r3, r5, r0
    b lbl_801DD884
lbl_801DD880:
    li r3, 0x0
lbl_801DD884:
    cmpwi r3, 0x0
    beq lbl_801DD894
    lwz r27, 0x4(r3)
    b lbl_801DD898
lbl_801DD894:
    li r27, 0x0
lbl_801DD898:
    cmpwi r27, 0x0
    li r30, 0x0
    beq lbl_801DD93C
    b lbl_801DD930
lbl_801DD8A8:
    lwz r3, 0x2c(r28)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801DD8C0
    add r0, r3, r0
    b lbl_801DD8C4
lbl_801DD8C0:
    li r0, 0x0
lbl_801DD8C4:
    cmpwi r0, 0x0
    beq lbl_801DD8F0
    clrlslwi r3, r30, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801DD8E8
    add r5, r0, r3
    b lbl_801DD8F4
lbl_801DD8E8:
    li r5, 0x0
    b lbl_801DD8F4
lbl_801DD8F0:
    li r5, 0x0
lbl_801DD8F4:
    lwz r0, 0x4(r5)
    mr r3, r29
    addi r4, r1, 0x14
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x14(r1)
    bl fn_801D0DAC
    cmpwi r3, 0x0
    beq lbl_801DD92C
    lwz r0, 0x10(r3)
    li r31, 0x1
    lwz r3, 0x14(r28)
    slwi r0, r0, 1
    sthx r30, r3, r0
lbl_801DD92C:
    addi r30, r30, 0x1
lbl_801DD930:
    clrlwi r0, r30, 16
    cmplw r0, r27
    blt lbl_801DD8A8
lbl_801DD93C:
    lwz r3, 0x2c(r28)
    lwz r0, 0x14(r3)
    lhz r24, 0x26(r3)
    cmpwi r0, 0x0
    beq lbl_801DD958
    add r27, r3, r0
    b lbl_801DD95C
lbl_801DD958:
    li r27, 0x0
lbl_801DD95C:
    mr r25, r27
    li r23, 0x0
    li r26, 0x0
    b lbl_801DD9C8
lbl_801DD96C:
    lwz r0, 0x0(r25)
    mr r3, r29
    lwz r6, 0x30(r28)
    addi r4, r1, 0x10
    add r5, r27, r0
    subi r30, r5, 0x4
    add r22, r6, r26
    stw r30, 0x10(r1)
    bl fn_801D0DAC
    stw r3, 0x0(r22)
    mr r3, r29
    addi r4, r1, 0xc
    stw r30, 0xc(r1)
    bl fn_801D0ED8
    stw r3, 0x4(r22)
    mr r3, r29
    addi r4, r1, 0x8
    stw r30, 0x8(r1)
    bl fn_801D1004
    stw r3, 0x8(r22)
    addi r26, r26, 0xc
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_801DD9C8:
    cmpw r23, r24
    blt lbl_801DD96C
    mr r3, r28
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x40
    mr r3, r31
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
extern "C" asm void GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    slwi r0, r5, 1
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r6, 0x14(r3)
    lhzx r5, r6, r0
    rlwinm. r0, r5, 0, 16, 17
    beq lbl_801DDA34
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r4)
    b lbl_801DDA60
lbl_801DDA34:
    lwz r6, 0x34(r3)
    cmpwi r6, 0x0
    beq lbl_801DDA4C
    mulli r0, r5, 0x218
    add r3, r6, r0
    b lbl_801DDA60
lbl_801DDA4C:
    lfs f1, 0x18(r3)
    lwz r6, 0x30(r3)
    addi r3, r3, 0x2c
    bl fn_801D8644
    mr r3, r31
lbl_801DDA60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801DDA74
extern "C" asm void fn_801DDA74() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801DDAC0
    bge lbl_801DDA94
    cmpwi r4, 0x8
    beq lbl_801DDAA4
    blr
lbl_801DDA94:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801DDAB4
lbl_801DDAA4:
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
lbl_801DDAB4:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801DDAC0:
    stw r6, 0x4(r3)
    blr
}
