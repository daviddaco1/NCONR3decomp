#include <nw4r/ef.h>

namespace nw4r {
namespace ef {

// The out-of-line constructor makes this vtable come before Effect's in .data,
// as in the original. The constructor itself is unused and gets stripped.
class BasicDrawOrder : public DrawOrder {
public:
    BasicDrawOrder();
};

BasicDrawOrder::BasicDrawOrder() {}

static BasicDrawOrder gBasicDrawOrder;

Effect::Effect() : mActivityList(offsetof(Emitter, mActivityLink)) {
    ut::List_Init(&mParticleManager, offsetof(ParticleManager, mDrawOrderLink));
}

Effect::~Effect() {
    RetireEmitterAll();
}

bool Effect::Initialize(EffectSystem* pSystem, EmitterResource* pResource,
                        u16 calcRemain) {

    ReferencedObject::Initialize();

    mActivityList.Initialize();

    mDrawOrderFunc = &gBasicDrawOrder;
    math::MTX34Identity(&mRootMtx);
    mManagerES = pSystem;

    mFlags = 0;

    Emitter* pEmitter = pSystem->GetMemoryManager()->AllocEmitter();
    if (pEmitter == NULL) {
        return false;
    }

    if (!pEmitter->Initialize(this, pResource, 128)) {
        pSystem->GetMemoryManager()->FreeEmitter(pEmitter);
        return false;
    }

    mActivityList.ToActive(pEmitter);
    pEmitter->mLifeStatus = NW4R_EF_LS_ACTIVE;

    pEmitter->mCalcRemain += calcRemain;

    return true;
}

void Effect::SendClosing() {
    mManagerES->Closing(this);
}

void Effect::DestroyFunc() {
    RetireEmitterAll();
}

bool Effect::Closing(Emitter* pEmitter) {
    if (pEmitter->mParent != NULL) {
        pEmitter->mParent->UnRef();
    }

    if (pEmitter->mpReferenceParticle != NULL) {
        pEmitter->mpReferenceParticle->UnRef();
        pEmitter->mpReferenceParticle = NULL;
    }

    pEmitter->mManagerEF->UnRef();

    mActivityList.ToClosing(pEmitter);
    pEmitter->mLifeStatus = NW4R_EF_LS_CLOSING;

    return true;
}

Emitter* Effect::CreateEmitter(EmitterResource* pResource, u8 drawWeight,
                               u16 calcRemain) {

    Emitter* pEmitter = mManagerES->GetMemoryManager()->AllocEmitter();
    if (pEmitter == NULL) {
        return false;
    }

    if (!pEmitter->Initialize(this, pResource, drawWeight)) {
        mManagerES->GetMemoryManager()->FreeEmitter(pEmitter);
        return false;
    }

    mActivityList.ToActive(pEmitter);
    pEmitter->mLifeStatus = NW4R_EF_LS_ACTIVE;

    pEmitter->mCalcRemain += calcRemain;

    return pEmitter;
}

u32 Effect::RetireEmitter(Emitter* pEmitter) {
    if (pEmitter->mLifeStatus != NW4R_EF_LS_ACTIVE) {
        return 0;
    }

    mActivityList.ToWait(pEmitter);
    pEmitter->Destroy();
    return 1;
}

u32 Effect::RetireEmitterAll() {
    u32 num = 0;
    void* pArray[NW4R_EF_MAX_EMITTER];

    u16 size = UtlistToArray(&mActivityList.mActiveList, pArray,
                             UtlistSize(&mActivityList.mActiveList));

    for (u16 i = 0; i < size; i++) {
        Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);

        if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE) {
            num += RetireEmitter(pEmitter);
        }
    }

    return num;
}

u32 Effect::RetireParticleAll() {
    u32 num = 0;
    void* pArray[NW4R_EF_MAX_EMITTER];

    u16 size = UtlistToArray(&mActivityList.mActiveList, pArray,
                             UtlistSize(&mActivityList.mActiveList));

    for (u16 i = 0; i < size; i++) {
        Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);
        num += pEmitter->RetireParticleAll();
    }

    return num;
}

void Effect::Calc(bool onlyBillboard) {
    if (onlyBillboard) {
        NW4R_UT_LIST_FOREACH (Emitter, it, mActivityList.mActiveList, {
            if (it->mLifeStatus == NW4R_EF_LS_ACTIVE ||
                it->mLifeStatus == NW4R_EF_LS_WAIT) {

                if (!(it->mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_16) &&
                    !(it->mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_15)) {
                    continue;
                }

                it->CalcBillboard();
            }
        });

        return;
    }

    if (GetFlagDisableCalc()) {
        return;
    }

    NW4R_UT_LIST_FOREACH (Emitter, pEmitter, mActivityList.mActiveList, {
        if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE ||
            pEmitter->mLifeStatus == NW4R_EF_LS_WAIT) {

            if (pEmitter->mEvalStatus == NW4R_EF_ES_DONE) {
                pEmitter->mEvalStatus = NW4R_EF_ES_WAIT;
            }
        }

        if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE ||
            pEmitter->mLifeStatus == NW4R_EF_LS_WAIT) {
            pEmitter->SetMtxDirty();
        }

        NW4R_UT_LIST_FOREACH (ParticleManager, pManager, pEmitter->mActivityList.mActiveList,
                              { pManager->BeginCalc(false); });
    });

    SetFlagExistCalcRemain(true);

    while (GetFlagExistCalcRemain()) {
        void* pArray[NW4R_EF_MAX_EMITTER];

        SetFlagExistCalcRemain(false);

        while (true) {
            {
                u16 size =
                    UtlistToArray(&mActivityList.mActiveList, pArray,
                                  UtlistSize(&mActivityList.mActiveList));

                for (u16 i = 0; i < size; i++) {
                    Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);
                    pEmitter->CalcEmitter();
                }
            }

            NW4R_UT_LIST_FOREACH (Emitter, it, mActivityList.mActiveList, {
                if (it->mLifeStatus == NW4R_EF_LS_ACTIVE ||
                    it->mLifeStatus == NW4R_EF_LS_WAIT) {

                    if ((it->mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_16) ||
                        (it->mParameter.mEmitFlags & EmitterDesc::EMIT_FLAG_15)) {
                        it->CalcBillboard();
                    }

                    if (it->mMtxDirty) {
                        math::MTX34 mtx;
                        it->CalcGlobalMtx(&mtx);
                    }
                }
            });

            {
                u16 size =
                    UtlistToArray(&mActivityList.mActiveList, pArray,
                                  UtlistSize(&mActivityList.mActiveList));

                for (u16 i = 0; i < size; i++) {
                    Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);

                    if (pEmitter->mEvalStatus == NW4R_EF_ES_WAIT) {
                        pEmitter->mTick++;
                    }

                    pEmitter->CalcParticle();

                    if (pEmitter->mEvalStatus == NW4R_EF_ES_WAIT) {
                        pEmitter->mTick--;
                    }
                }
            }

            {
                u16 size =
                    UtlistToArray(&mActivityList.mActiveList, pArray,
                                  UtlistSize(&mActivityList.mActiveList));

                for (u16 i = 0; i < size; i++) {
                    Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);
                    pEmitter->CalcEmission();
                }
            }

            {
                u16 size =
                    UtlistToArray(&mActivityList.mActiveList, pArray,
                                  UtlistSize(&mActivityList.mActiveList));

                for (u16 i = 0; i < size; i++) {
                    Emitter* pEmitter = static_cast<Emitter*>(pArray[i]);
                    pEmitter->CalcParticle();
                }
            }

            if (mManagerES->mCreationQueue.IsEmpty()) {
                break;
            }

            mManagerES->mCreationQueue.Execute();
        }

        if (GetFlagExistCalcRemain()) {
            NW4R_UT_LIST_FOREACH (Emitter, pEmitter, mActivityList.mActiveList, {
                if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE &&
                    pEmitter->mCalcRemain != 0) {

                    if (pEmitter->mCalcRemain != 0) {
                        pEmitter->mCalcRemain--;
                    }

                    if (pEmitter->mEvalStatus == NW4R_EF_ES_DONE) {
                        pEmitter->mEvalStatus = NW4R_EF_ES_WAIT;
                    }
                }

                NW4R_UT_LIST_FOREACH (ParticleManager, pManager, pEmitter->mActivityList.mActiveList,
                                      { pManager->BeginCalc(true); });
            });
        }
    }

    NW4R_UT_LIST_FOREACH (Emitter, pEmitter, mActivityList.mActiveList, {
        if (pEmitter->mLifeStatus == NW4R_EF_LS_ACTIVE ||
            pEmitter->mLifeStatus == NW4R_EF_LS_WAIT) {

            if (pEmitter->mEvalStatus == NW4R_EF_ES_SKIP) {
                pEmitter->mEvalStatus = NW4R_EF_ES_DONE;
            }
        }

        NW4R_UT_LIST_FOREACH (ParticleManager, pManager, pEmitter->mActivityList.mActiveList,
                              { pManager->EndCalc(); });
    });
}

void Effect::Draw(const DrawInfo& rInfo) {
    if (GetFlagDisableDraw()) {
        return;
    }

    mDrawOrderFunc->Draw(this, rInfo);
}

Emitter* Effect::GetRootEmitter() {
    return static_cast<Emitter*>(mActivityList.mActiveList.headObject);
}

u16 Effect::GetNumEmitter() const {
    return UtlistSize(&mActivityList.mActiveList);
}

Emitter* Effect::GetEmitter(u16 idx) {
    return static_cast<Emitter*>(
        ut::List_GetNth(&mActivityList.mActiveList, idx));
}

/******************************************************************************
 *
 * For-each implementation
 *
 ******************************************************************************/
u32 Effect::ForeachParticleManager(ForEachFunc pFunc, ForEachParam param,
                                   bool ignoreLifeStatus) {
    u32 calls = 0;

    NW4R_UT_LIST_FOREACH_SAFE (Emitter, it, mActivityList.mActiveList, {
        calls += it->ForeachParticleManager(pFunc, param, ignoreLifeStatus, false);
    });

    return calls;
}

u32 Effect::ForeachEmitterFrom(ForEachFunc pFunc, ForEachParam param,
                               bool ignoreLifeStatus, Emitter* pEmitter) {
    u32 calls = 0;

    NW4R_UT_LIST_FOREACH_SAFE (Emitter, it, mActivityList.mActiveList, {
        if (!ignoreLifeStatus && it->mLifeStatus != NW4R_EF_LS_ACTIVE) {
            continue;
        }

        bool isChild = false;
        Emitter* pSearch = it;

        // Only apply function to effects owned by the specified emitter
        while (!isChild && (pSearch = pSearch->mParent) != NULL) {
            if (pSearch == pEmitter) {
                isChild = true;
            }
        }

        if (isChild) {
            pFunc(it, param);
            calls++;
        }
    });

    return calls;
}

void Effect::SetRootMtx(const math::MTX34& rMtx) {
    math::MTX34Copy(&mRootMtx, &rMtx);

    NW4R_UT_LIST_FOREACH (Emitter, it, mActivityList.mActiveList, {
        if (it->mParent == NULL) {
            it->SetMtxDirty();
        }
    });
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A16F0;
extern "C" void List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801A97E0();
extern "C" void fn_801A9A28();
extern "C" void fn_801A9D00();
extern "C" void fn_801AA168();
extern "C" void fn_801ACC48();
extern "C" void fn_801B8094();
extern "C" void fn_801B8100();
extern "C" void UtlistToArray__Q24nw4r2efFPCQ34nw4r2ut4ListPPvi();
extern "C" void fn_801BAAEC();

// asm_to_cpp: fn_801A97E0
extern "C" asm void fn_801A97E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r30, 0x0
    li r31, 0x1
    stw r30, 0x10(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    stw r31, 0xc(r3)
    mr r29, r6
    stw r30, 0x24(r3)
    sth r30, 0x2c(r3)
    stw r30, 0x28(r3)
    stw r30, 0x30(r3)
    sth r30, 0x38(r3)
    stw r30, 0x34(r3)
    sth r30, 0x3c(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x9c(r3)
    addi r3, r3, 0x54
    bl PSMTXIdentity
    lfs f0, lbl_804A16F0
    stw r27, 0x20(r26)
    stw r30, 0x44(r26)
    stw r30, 0x48(r26)
    stw r30, 0x4c(r26)
    stw r30, 0x50(r26)
    stfs f0, 0x84(r26)
    stfs f0, 0x88(r26)
    stfs f0, 0x8c(r26)
    lwz r3, 0x0(r27)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_801A988C
    li r3, 0x0
    b lbl_801A98FC
lbl_801A988C:
    lwz r12, 0x1c(r3)
    mr r4, r26
    mr r5, r28
    li r6, 0x80
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801A98D0
    lwz r3, 0x0(r27)
    mr r4, r30
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_801A98FC
lbl_801A98D0:
    mr r4, r30
    addi r3, r26, 0x24
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0x3c(r26)
    li r3, 0x1
    addi r0, r4, 0x1
    sth r0, 0x3c(r26)
    stw r31, 0xc(r30)
    lhz r0, 0xe8(r30)
    add r0, r0, r29
    sth r0, 0xe8(r30)
lbl_801A98FC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801A9A28
extern "C" asm void fn_801A9A28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x8(r4)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    rlwinm. r0, r0, 0, 1, 1
    mr r30, r6
    bne lbl_801A9A60
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9A60:
    lwz r3, 0x20(r3)
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A9A8C
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9A8C:
    lwz r12, 0x1c(r3)
    mr r4, r27
    mr r5, r28
    mr r6, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_801A9AD4
    lwz r3, 0x20(r27)
    mr r4, r31
    lwz r3, 0x0(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    b lbl_801A9B04
lbl_801A9AD4:
    mr r4, r31
    addi r3, r27, 0x24
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lhz r4, 0x3c(r27)
    li r0, 0x1
    mr r3, r31
    addi r4, r4, 0x1
    sth r4, 0x3c(r27)
    stw r0, 0xc(r31)
    lhz r0, 0xe8(r31)
    add r0, r0, r30
    sth r0, 0xe8(r31)
lbl_801A9B04:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801A9D00
extern "C" asm void fn_801A9D00() {
    nofralloc
    stwu r1, -0x1050(r1)
    mflr r0
    stw r0, 0x1054(r1)
    addi r11, r1, 0x1050
    bl _savegpr_26
    clrlwi. r0, r4, 31
    mr r30, r3
    beq lbl_801A9D7C
    li r28, 0x0
    b lbl_801A9D60
lbl_801A9D28:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9D60
    lwz r3, 0x24(r3)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_801A9D4C
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_801A9D60
lbl_801A9D4C:
    lwz r12, 0x1c(r28)
    mr r3, r28
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801A9D60:
    mr r4, r28
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_801A9D28
    b lbl_801AA118
lbl_801A9D7C:
    lwz r0, 0x50(r3)
    clrlwi. r0, r0, 31
    bne lbl_801AA118
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_801A9E18
    li r29, 0x0
    li r28, 0x0
    b lbl_801A9E00
lbl_801A9D9C:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9DBC
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x1
    bne lbl_801A9DBC
    stw r28, 0xb4(r3)
lbl_801A9DBC:
    lfs f0, 0x108(r3)
    li r31, 0x0
    stfs f0, 0x114(r3)
    lfs f0, 0x10c(r3)
    stfs f0, 0x118(r3)
    lfs f0, 0x110(r3)
    stfs f0, 0x11c(r3)
    b lbl_801A9DE8
lbl_801A9DDC:
    mr r3, r31
    li r4, 0x0
    bl fn_801B8094
lbl_801A9DE8:
    mr r4, r31
    addi r3, r29, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_801A9DDC
lbl_801A9E00:
    mr r4, r29
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_801A9D9C
lbl_801A9E18:
    lwz r0, 0x50(r30)
    addi r31, r1, 0x38
    li r29, 0x0
    oris r0, r0, 0x1
    stw r0, 0x50(r30)
    b lbl_801AA07C
lbl_801A9E30:
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x50(r30)
lbl_801A9E3C:
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl UtlistToArray__Q24nw4r2efFPCQ34nw4r2ut4ListPPvi
    clrlwi r28, r3, 16
    li r27, 0x0
    b lbl_801A9E74
lbl_801A9E58:
    clrlslwi r0, r27, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    addi r27, r27, 0x1
lbl_801A9E74:
    clrlwi r0, r27, 16
    cmplw r0, r28
    blt lbl_801A9E58
    li r27, 0x0
    b lbl_801A9EC0
lbl_801A9E88:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801A9EC0
    lwz r3, 0x24(r3)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_801A9EAC
    rlwinm. r0, r3, 0, 16, 16
    beq lbl_801A9EC0
lbl_801A9EAC:
    lwz r12, 0x1c(r27)
    mr r3, r27
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
lbl_801A9EC0:
    mr r4, r27
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801A9E88
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl UtlistToArray__Q24nw4r2efFPCQ34nw4r2ut4ListPPvi
    clrlwi r28, r3, 16
    li r27, 0x0
    b lbl_801A9F44
lbl_801A9EF4:
    clrlslwi r0, r27, 16, 2
    lwzx r26, r31, r0
    lwz r0, 0xb4(r26)
    cmpwi r0, 0x0
    bne lbl_801A9F14
    lwz r3, 0xe4(r26)
    addi r0, r3, 0x1
    stw r0, 0xe4(r26)
lbl_801A9F14:
    lwz r12, 0x1c(r26)
    mr r3, r26
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0xb4(r26)
    cmpwi r0, 0x0
    bne lbl_801A9F40
    lwz r3, 0xe4(r26)
    subi r0, r3, 0x1
    stw r0, 0xe4(r26)
lbl_801A9F40:
    addi r27, r27, 0x1
lbl_801A9F44:
    clrlwi r0, r27, 16
    cmplw r0, r28
    blt lbl_801A9EF4
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl UtlistToArray__Q24nw4r2efFPCQ34nw4r2ut4ListPPvi
    clrlwi r28, r3, 16
    li r26, 0x0
    b lbl_801A9F88
lbl_801A9F6C:
    clrlslwi r0, r26, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
lbl_801A9F88:
    clrlwi r0, r26, 16
    cmplw r0, r28
    blt lbl_801A9F6C
    lhz r5, 0x2c(r30)
    addi r3, r30, 0x24
    addi r4, r1, 0x38
    bl UtlistToArray__Q24nw4r2efFPCQ34nw4r2ut4ListPPvi
    clrlwi r28, r3, 16
    li r26, 0x0
    b lbl_801A9FCC
lbl_801A9FB0:
    clrlslwi r0, r26, 16, 2
    lwzx r3, r31, r0
    lwz r12, 0x1c(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addi r26, r26, 0x1
lbl_801A9FCC:
    clrlwi r0, r26, 16
    cmplw r0, r28
    blt lbl_801A9FB0
    lwz r3, 0x20(r30)
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801A9FF0
    bl fn_801BAAEC
    b lbl_801A9E3C
lbl_801A9FF0:
    lwz r0, 0x50(r30)
    rlwinm. r0, r0, 0, 15, 15
    beq lbl_801AA07C
    li r26, 0x0
    b lbl_801AA064
lbl_801AA004:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801AA038
    lhz r4, 0xe8(r3)
    cmpwi r4, 0x0
    beq lbl_801AA038
    beq lbl_801AA028
    subi r0, r4, 0x1
    sth r0, 0xe8(r3)
lbl_801AA028:
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x1
    bne lbl_801AA038
    stw r29, 0xb4(r3)
lbl_801AA038:
    li r27, 0x0
    b lbl_801AA04C
lbl_801AA040:
    mr r3, r27
    li r4, 0x1
    bl fn_801B8094
lbl_801AA04C:
    mr r4, r27
    addi r3, r26, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801AA040
lbl_801AA064:
    mr r4, r26
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_801AA004
lbl_801AA07C:
    lwz r0, 0x50(r30)
    rlwinm. r0, r0, 0, 15, 15
    bne lbl_801A9E30
    li r26, 0x0
    li r31, 0x1
    b lbl_801AA100
lbl_801AA094:
    lwz r4, 0xc(r3)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_801AA0B4
    lwz r0, 0xb4(r3)
    cmpwi r0, 0x3
    bne lbl_801AA0B4
    stw r31, 0xb4(r3)
lbl_801AA0B4:
    li r27, 0x0
    b lbl_801AA0C4
lbl_801AA0BC:
    mr r3, r27
    bl fn_801B8100
lbl_801AA0C4:
    mr r4, r27
    addi r3, r26, 0xc0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_801AA0BC
    mr r3, r26
    addi r4, r1, 0x8
    bl fn_801ACC48
    lfs f0, 0x14(r1)
    stfs f0, 0x108(r26)
    lfs f0, 0x24(r1)
    stfs f0, 0x10c(r26)
    lfs f0, 0x34(r1)
    stfs f0, 0x110(r26)
lbl_801AA100:
    mr r4, r26
    addi r3, r30, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_801AA094
lbl_801AA118:
    addi r11, r1, 0x1050
    bl _restgpr_26
    lwz r0, 0x1054(r1)
    mtlr r0
    addi r1, r1, 0x1050
    blr
}

// asm_to_cpp: fn_801AA168
extern "C" asm void fn_801AA168() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    li r31, 0x0
    li r4, 0x0
    addi r3, r3, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801AA1E4
lbl_801AA1A4:
    mr r4, r30
    addi r3, r25, 0x24
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r28, 0x0
    mr r29, r3
    bne lbl_801AA1C8
    lwz r0, 0xc(r30)
    cmpwi r0, 0x1
    bne lbl_801AA1E0
lbl_801AA1C8:
    mr r12, r26
    mr r3, r30
    mr r4, r27
    mtctr r12
    bctrl
    addi r31, r31, 0x1
lbl_801AA1E0:
    mr r30, r29
lbl_801AA1E4:
    cmpwi r30, 0x0
    bne lbl_801AA1A4
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
