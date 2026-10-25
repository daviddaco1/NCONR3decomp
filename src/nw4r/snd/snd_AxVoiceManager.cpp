#include <nw4r/snd.h>

#include <revolution/AX.h>

namespace nw4r {
namespace snd {
namespace detail {

AxVoiceManager& AxVoiceManager::GetInstance() {
    static AxVoiceManager instance;
    return instance;
}

AxVoiceManager::AxVoiceManager() : mInitialized(false) {}

// GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi: definicion C reemplazada por asm (ver abajo)


// Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl: definicion C reemplazada por asm (ver abajo)


void AxVoiceManager::Shutdown() {
    if (!mInitialized) {
        return;
    }

    while (!mActiveVoiceList.IsEmpty()) {
        AxVoice& rVoice = mActiveVoiceList.GetFront();
        mActiveVoiceList.PopFront();

        if (!rVoice.mVpb.IsAvailable()) {
            continue;
        }

        rVoice.Stop();

        if (rVoice.mCallback != NULL) {
            rVoice.mCallback(&rVoice, AxVoice::CALLBACK_STATUS_CANCEL,
                             rVoice.mCallbackData);
        }

        FreeAxVoice(&rVoice);
    }

    while (!mFreeReservedVoiceList.IsEmpty()) {
        AxVoice& rVoice = mFreeReservedVoiceList.GetFront();
        // @bug Pop from wrong list
        mActiveVoiceList.PopFront();

        if (!rVoice.mVpb.IsAvailable()) {
            continue;
        }

        rVoice.Stop();

        if (rVoice.mCallback != NULL) {
            rVoice.mCallback(&rVoice, AxVoice::CALLBACK_STATUS_CANCEL,
                             rVoice.mCallbackData);
        }

        FreeAxVoice(&rVoice);
    }

    while (!mFreeVoiceList.IsEmpty()) {
        AxVoice& rVoice = mFreeVoiceList.GetFront();
        mFreeVoiceList.PopFront();
        rVoice.~AxVoice();
    }

    mInitialized = false;
}

AxVoice* AxVoiceManager::Alloc() {
    ut::AutoInterruptLock lock;

    FreeAllReservedAxVoice();
    if (mFreeVoiceList.IsEmpty()) {
        return NULL;
    }

    AxVoice& rWork = mFreeVoiceList.GetFront();
    mFreeVoiceList.PopFront();

    AxVoice* pVoice = new (&rWork) AxVoice();
    mActiveVoiceList.PushBack(&rWork);

    return pVoice;
}

void AxVoiceManager::Free(AxVoice* pVoice) {
    pVoice->~AxVoice();

    ut::AutoInterruptLock lock;

    if (pVoice->mReserveForFreeFlag) {
        mFreeReservedVoiceList.Erase(pVoice);
    } else {
        mActiveVoiceList.Erase(pVoice);
    }

    mFreeVoiceList.PushBack(pVoice);
}

void AxVoiceManager::ReserveForFree(AxVoice* pVoice) {
    ut::AutoInterruptLock lock;

    mActiveVoiceList.Erase(pVoice);
    mFreeReservedVoiceList.PushBack(pVoice);
}

AxVoice* AxVoiceManager::AcquireAxVoice(u32 priority,
                                        AxVoice::AxVoiceCallback pCallback,
                                        void* pArg) {
    ut::AutoInterruptLock lock;

    AxVoice* pVoice = Alloc();
    if (pVoice == NULL) {
        return NULL;
    }

    AXVPB* pVpb = AXAcquireVoice(priority, AxVoice::VoiceCallback,
                                 reinterpret_cast<u32>(pVoice));
    if (pVpb == NULL) {
        Free(pVoice);
        return NULL;
    }

    pVoice->mVpb.Set(pVpb);
    pVoice->mCallback = pCallback;
    pVoice->mCallbackData = pArg;

    return pVoice;
}

void AxVoiceManager::FreeAxVoice(AxVoice* pVoice) {
    ut::AutoInterruptLock lock;

    if (pVoice->mVpb.IsAvailable()) {
        AXFreeVoice(pVoice->mVpb);
    }

    Free(pVoice);
}

void AxVoiceManager::ReserveForFreeAxVoice(AxVoice* pVoice) {
    ut::AutoInterruptLock lock;

    pVoice->mReserveForFreeFlag = true;
    ReserveForFree(pVoice);
}

void AxVoiceManager::FreeAllReservedAxVoice() {
    while (!mFreeReservedVoiceList.IsEmpty()) {
        AxVoice& rVoice = mFreeReservedVoiceList.GetFront();

        if (rVoice.mCallback != NULL) {
            rVoice.mCallback(&rVoice, AxVoice::CALLBACK_STATUS_DROP_DSP,
                             rVoice.mCallbackData);
        }

        // @bug GetInstance call from non-static function
        GetInstance().FreeAxVoice(&rVoice);
    }
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" u32 GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi(void* self, int voiceCount);
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl();
extern "C" void __ct__Q44nw4r3snd6detail7AxVoiceFv();

extern "C" u32 GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi(void* self, int voiceCount) {
    return (voiceCount + 0x10) * 0x48;
}

// asm_to_cpp: Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl
extern "C" asm void Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_802073EC
    lis r6, 0x38e4
    mr r30, r4
    subi r0, r6, 0x71c7
    li r29, 0x0
    mulhwu r0, r0, r5
    srwi. r0, r0, 4
    stw r0, 0x28(r3)
    beq lbl_802073E4
    addi r31, r3, 0x10
    b lbl_802073D8
lbl_802073A4:
    cmpwi r30, 0x0
    mr r5, r30
    beq lbl_802073BC
    mr r3, r30
    bl __ct__Q44nw4r3snd6detail7AxVoiceFv
    mr r5, r3
lbl_802073BC:
    stw r31, 0x8(r1)
    addi r3, r28, 0xc
    addi r4, r1, 0x8
    addi r5, r5, 0x40
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    addi r30, r30, 0x48
    addi r29, r29, 0x1
lbl_802073D8:
    lwz r0, 0x28(r28)
    cmplw r29, r0
    blt lbl_802073A4
lbl_802073E4:
    li r0, 0x1
    stb r0, 0x24(r28)
lbl_802073EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
