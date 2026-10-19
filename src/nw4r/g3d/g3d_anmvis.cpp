#include <nw4r/g3d.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace g3d {

NW4R_G3D_RTTI_DEF(AnmObjVis);
NW4R_G3D_RTTI_DEF(AnmObjVisNode);
NW4R_G3D_RTTI_DEF(AnmObjVisOR);
NW4R_G3D_RTTI_DEF(AnmObjVisRes);

/******************************************************************************
 *
 * AnmObjVis
 *
 ******************************************************************************/
AnmObjVis::AnmObjVis(MEMAllocator* pAllocator, u16* pBindingBuf, int numBinding)
    : AnmObj(pAllocator, NULL),
      mpBinding(pBindingBuf),
      mNumBinding(numBinding) {

    Release();
}

bool AnmObjVis::TestExistence(u32 idx) const {
    return !(mpBinding[idx] & (BINDING_UNDEFINED | BINDING_INVALID));
}

bool AnmObjVis::TestDefined(u32 idx) const {
    return !(mpBinding[idx] & BINDING_UNDEFINED);
}

void AnmObjVis::Release() {
    for (int i = 0; i < mNumBinding; i++) {
        mpBinding[i] = BINDING_UNDEFINED;
    }

    SetAnmFlag(FLAG_ANM_BOUND, false);
}

AnmObjVisRes* AnmObjVis::Attach(int idx, AnmObjVisRes* pRes) {
#pragma unused(idx)
#pragma unused(pRes)

    return NULL;
}

AnmObjVisRes* AnmObjVis::Detach(int idx) {
#pragma unused(idx)

    return NULL;
}

void AnmObjVis::DetachAll() {
    for (int i = 0; i < MAX_CHILD; i++) {
        Detach(i);
    }
}

void AnmObjVis::G3dProc(u32 task, u32 param, void* pInfo) {
#pragma unused(param)

    switch (task) {
    case G3DPROC_UPDATEFRAME: {
        SetAnmFlag(FLAG_CACHE_OBSOLETE, true);
        break;
    }

    case G3DPROC_DETACH_PARENT: {
        SetParent(NULL);
        break;
    }

    case G3DPROC_ATTACH_PARENT: {
        SetParent(static_cast<G3dObj*>(pInfo));
        break;
    }
    }
}

/******************************************************************************
 *
 * AnmObjVisNode
 *
 ******************************************************************************/
AnmObjVisNode::AnmObjVisNode(MEMAllocator* pAllocator, u16* pBindingBuf,
                             int numBinding)
    : AnmObjVis(pAllocator, pBindingBuf, numBinding) {

    for (int i = 0; i < MAX_CHILD; i++) {
        mpChildren[i] = NULL;
    }
}

AnmObjVisNode::~AnmObjVisNode() {
    DetachAll();
}

AnmObjVisRes* AnmObjVisNode::Attach(int idx, AnmObjVisRes* pRes) {
    AnmObjVisRes* pOld = Detach(idx);
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

    mpChildren[idx] = pRes;
    pRes->G3dProc(G3DPROC_ATTACH_PARENT, 0, this);
    return pOld;
}

AnmObjVisRes* AnmObjVisNode::Detach(int idx) {
    AnmObjVisRes* pOld = mpChildren[idx];

    if (pOld != NULL) {
        pOld->G3dProc(G3DPROC_DETACH_PARENT, 0, this);
        mpChildren[idx] = NULL;

        bool hasAnm = false;
        for (u32 i = 0; i < mNumBinding; i++) {
            u16 binding = BINDING_UNDEFINED;

            for (int j = 0; j < MAX_CHILD; j++) {
                AnmObjVisRes* pChild = mpChildren[j];

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

void AnmObjVisNode::UpdateFrame() {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            mpChildren[i]->UpdateFrame();
        }
    }
}

void AnmObjVisNode::SetFrame(f32 frame) {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            mpChildren[i]->SetFrame(frame);
        }
    }
}

f32 AnmObjVisNode::GetFrame() const {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            return mpChildren[i]->GetFrame();
        }
    }

    return 0.0f;
}

void AnmObjVisNode::SetUpdateRate(f32 rate) {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            mpChildren[i]->SetUpdateRate(rate);
        }
    }
}

f32 AnmObjVisNode::GetUpdateRate() const {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            return mpChildren[i]->GetUpdateRate();
        }
    }

    return 1.0f;
}

bool AnmObjVisNode::Bind(ResMdl mdl) {
    bool success = false;

    for (int i = 0; i < MAX_CHILD; i++) {
        AnmObjVisRes* pChild = mpChildren[i];
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

void AnmObjVisNode::Release() {
    for (int i = 0; i < MAX_CHILD; i++) {
        if (mpChildren[i] != NULL) {
            mpChildren[i]->Release();
        }
    }

    AnmObjVis::Release();
}

void AnmObjVisNode::G3dProc(u32 task, u32 param, void* pInfo) {
#pragma unused(param)

    switch (task) {
    case G3DPROC_CHILD_DETACHED: {
        for (int i = 0; i < MAX_CHILD; i++) {
            if (mpChildren[i] == pInfo) {
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
        SetParent(static_cast<G3dObj*>(pInfo));
        break;
    }
    }
}

/******************************************************************************
 *
 * AnmObjVisOR
 *
 ******************************************************************************/
AnmObjVisOR* AnmObjVisOR::Construct(MEMAllocator* pAllocator, u32* pSize,
                                    ResMdl mdl) {
    if (!mdl.IsValid()) {
        return NULL;
    }

    u32 numAnim = mdl.GetResNodeNumEntries();

    int bindNum = numAnim;
    u32 bindSize = bindNum * sizeof(u16);

    u32 size = bindSize + sizeof(AnmObjVisOR);
    if (pSize != NULL) {
        *pSize = size;
    }

    if (pAllocator == NULL) {
        return NULL;
    }

    u8* pBuffer = reinterpret_cast<u8*>(Alloc(pAllocator, size));
    if (pBuffer == NULL) {
        return NULL;
    }

    u16* pBindingBuf = reinterpret_cast<u16*>(pBuffer + sizeof(AnmObjVisOR));

    AnmObjVisOR* pObjVis =
        new (pBuffer) AnmObjVisOR(pAllocator, pBindingBuf, bindNum);

    return pObjVis;
}

bool AnmObjVisOR::GetResult(u32 idx) {
    for (int i = 0; i < MAX_CHILD; i++) {
        AnmObjVisRes* pChild = mpChildren[i];

        if (pChild == NULL || !pChild->TestExistence(idx)) {
            continue;
        }

        if (!pChild->GetResult(idx)) {
            return false;
        }
    }

    return true;
}

/******************************************************************************
 *
 * AnmObjVisRes
 *
 ******************************************************************************/
AnmObjVisRes* AnmObjVisRes::Construct(MEMAllocator* pAllocator, u32* pSize,
                                      ResAnmVis vis, ResMdl mdl) {
    if (!vis.IsValid() || !mdl.IsValid()) {
        return NULL;
    }

    u32 numAnim = mdl.GetResNodeNumEntries();

    int bindNum = numAnim;
    u32 bindSize = bindNum * sizeof(u16);

    u32 size = bindSize + sizeof(AnmObjVisRes);
    if (pSize != NULL) {
        *pSize = size;
    }

    if (pAllocator == NULL) {
        return NULL;
    }

    u8* pBuffer = reinterpret_cast<u8*>(Alloc(pAllocator, size));
    if (pBuffer == NULL) {
        return NULL;
    }

    u16* pBindingBuf = reinterpret_cast<u16*>(pBuffer + sizeof(AnmObjVisRes));

    AnmObjVisRes* pObjVis =
        new (pBuffer) AnmObjVisRes(pAllocator, vis, pBindingBuf, bindNum);

    return pObjVis;
}

AnmObjVisRes::AnmObjVisRes(MEMAllocator* pAllocator, ResAnmVis vis,
                           u16* pBindingBuf, int numBinding)
    : AnmObjVis(pAllocator, pBindingBuf, numBinding),
      FrameCtrl(0.0f, vis.GetNumFrame(), GetAnmPlayPolicy(vis.GetAnmPolicy())),
      mRes(vis) {}

void AnmObjVisRes::SetFrame(f32 frame) {
    SetFrm(frame);
    G3dProc(G3DPROC_UPDATEFRAME, 0, NULL);
}

f32 AnmObjVisRes::GetFrame() const {
    return GetFrm();
}

void AnmObjVisRes::SetUpdateRate(f32 rate) {
    SetRate(rate);
}

f32 AnmObjVisRes::GetUpdateRate() const {
    return GetRate();
}

// UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv: definicion C reemplazada por asm (ver abajo)


// Bind__Q34nw4r3g3d12AnmObjVisResFQ34nw4r3g3d6ResMdl: definicion C reemplazada por asm (ver abajo)


bool AnmObjVisRes::GetResult(u32 idx) {
    u32 id = mpBinding[idx];

    if ((id & BINDING_INVALID) || (id & BINDING_UNDEFINED)) {
        return true;
    }

    return mRes.GetAnmResult(id, GetFrm());
}

/******************************************************************************
 *
 * ApplyVisAnmResult
 *
 ******************************************************************************/
void ApplyVisAnmResult(ResMdl mdl, AnmObjVis* pObj) {
    u32 numNode = mdl.GetResNodeNumEntries();

    for (u32 i = 0; i < numNode; i++) {
        if (!pObj->TestExistence(i)) {
            continue;
        }

        ResNode node = mdl.GetResNode(i);
        node.SetVisibility(pObj->GetResult(i));
    }
}

void ApplyVisAnmResult(u8* byteVec, ResMdl mdl, AnmObjVis* pObj) {
    u32 numNode = mdl.GetResNodeNumEntries();

    for (u32 i = 0; i < numNode; i++) {
        if (!pObj->TestExistence(i)) {
            continue;
        }

        byteVec[i] = pObj->GetResult(i);
    }
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049C4B8;
extern "C" float lbl_804A1C98;
extern "C" float lbl_804A1C9C;
extern "C" float lbl_804A1CA0;
extern "C" u8 lbl_80360D00[];
extern "C" u8 lbl_80360D44[];
extern "C" void Bind__Q34nw4r3g3d12AnmObjVisResFQ34nw4r3g3d6ResMdl();
extern "C" void ConfigMEM_ES1_0();
extern "C" void SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb();
extern "C" void UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void fn_801D0C80();
extern "C" void fn_801D0D78();
extern "C" void fn_801D8B78();
extern "C" void fn_8030CAF0();

// asm_to_cpp: ConfigMEM_ES1_0
extern "C" asm void ConfigMEM_ES1_0() {
    nofralloc
    lis r5, 0x1
    addi r0, r5, 0x2
    cmpw r4, r0
    beq lbl_801D8B30
    bge lbl_801D8B08
    cmpwi r4, 0x8
    beq lbl_801D8B18
    blr
lbl_801D8B08:
    addi r0, r5, 0x4
    cmpw r4, r0
    bgelr
    b lbl_801D8B24
lbl_801D8B18:
    li r4, 0x2
    li r5, 0x1
    b SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
lbl_801D8B24:
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
lbl_801D8B30:
    stw r6, 0x4(r3)
    blr
}

// asm_to_cpp: fn_801D8B78
extern "C" asm void fn_801D8B78() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x0(r5)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_801D8BB8
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    bne lbl_801D8BC0
lbl_801D8BB8:
    li r3, 0x0
    b lbl_801D8CA8
lbl_801D8BC0:
    mr r3, r6
    bl fn_801D0D78
    cmpwi r29, 0x0
    slwi r4, r3, 1
    mr r30, r3
    addi r4, r4, 0x30
    beq lbl_801D8BE0
    stw r4, 0x0(r29)
lbl_801D8BE0:
    cmpwi r28, 0x0
    bne lbl_801D8BF0
    li r3, 0x0
    b lbl_801D8CA8
lbl_801D8BF0:
    mr r3, r28
    bl fn_8030CAF0
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801D8C0C
    li r3, 0x0
    b lbl_801D8CA8
lbl_801D8C0C:
    addi r4, r3, 0x30
    beq lbl_801D8CA4
    li r0, 0x0
    lis r12, lbl_80360D44@ha
    stw r0, 0x4(r3)
    addi r12, r12, lbl_80360D44@l
    lwz r31, 0x0(r31)
    stw r28, 0x8(r3)
    stw r0, 0xc(r3)
    stw r12, 0x0(r3)
    stw r30, 0x10(r3)
    stw r4, 0x14(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lhz r4, 0x20(r31)
    lis r0, 0x4330
    lwz r5, 0x24(r31)
    lis r3, lbl_80360D00@ha
    xoris r4, r4, 0x8000
    lfs f1, lbl_804A1C98
    stw r4, 0xc(r1)
    slwi r5, r5, 2
    lfs f0, lbl_804A1C9C
    la r4, lbl_8049C1A0
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360D00@l
    lfd f3, lbl_804A1CA0
    stfs f1, 0x18(r29)
    lfd f2, 0x8(r1)
    stfs f0, 0x1c(r29)
    fsubs f0, f2, f3
    lwzx r0, r4, r5
    stfs f1, 0x20(r29)
    stfs f0, 0x24(r29)
    stw r0, 0x28(r29)
    stw r3, 0x0(r29)
    stw r31, 0x2c(r29)
lbl_801D8CA4:
    mr r3, r29
lbl_801D8CA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv
extern "C" asm void UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A1C98
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x1c(r3)
    fcmpu cr0, f0, f1
    beq lbl_801D8DB4
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
    stfs f1, 0x18(r31)
    mr r3, r31
    li r4, 0x8
    li r5, 0x0
    lwz r12, 0x0(r31)
    li r6, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801D8DB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: Bind__Q34nw4r3g3d12AnmObjVisResFQ34nw4r3g3d6ResMdl
extern "C" asm void Bind__Q34nw4r3g3d12AnmObjVisResFQ34nw4r3g3d6ResMdl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r5, 0x2c(r3)
    mr r27, r3
    mr r28, r4
    li r30, 0x0
    lhz r31, 0x22(r5)
    li r29, 0x0
    cmpwi r31, 0x0
    ble lbl_801D8EA0
    b lbl_801D8E94
lbl_801D8E00:
    lwz r3, 0x2c(r27)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D8E18
    add r0, r3, r0
    b lbl_801D8E1C
lbl_801D8E18:
    li r0, 0x0
lbl_801D8E1C:
    cmpwi r0, 0x0
    beq lbl_801D8E48
    clrlslwi r3, r29, 16, 4
    add r3, r0, r3
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D8E40
    add r5, r0, r3
    b lbl_801D8E4C
lbl_801D8E40:
    li r5, 0x0
    b lbl_801D8E4C
lbl_801D8E48:
    li r5, 0x0
lbl_801D8E4C:
    lwz r0, 0x0(r5)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r0, r5
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl fn_801D0C80
    cmpwi r3, 0x0
    beq lbl_801D8E90
    lwz r4, 0x14(r27)
    beq lbl_801D8E80
    lwz r0, 0xc(r3)
    b lbl_801D8E84
lbl_801D8E80:
    li r0, 0x0
lbl_801D8E84:
    slwi r0, r0, 1
    li r30, 0x1
    sthx r29, r4, r0
lbl_801D8E90:
    addi r29, r29, 0x1
lbl_801D8E94:
    clrlwi r0, r29, 16
    cmpw r0, r31
    blt lbl_801D8E00
lbl_801D8EA0:
    mr r3, r27
    li r4, 0x4
    li r5, 0x1
    bl SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
