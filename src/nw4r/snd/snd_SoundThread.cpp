#include <nw4r/snd.h>
#include <nw4r/ut.h>

#include <revolution/OS.h>

namespace nw4r {
namespace snd {
namespace detail {

SoundThread::SoundThread() : mStackEnd(NULL), mCreateFlag(false) {
    OSInitMessageQueue(&mMsgQueue, mMsgBuffer, MSG_QUEUE_CAPACITY);
    OSInitThreadQueue(&mThreadQueue);
    OSInitMutex(&mMutex);
}

SoundThread& SoundThread::GetInstance() {
    static SoundThread instance;
    return instance;
}

bool SoundThread::Create(s32 priority, void* pStack, u32 stackSize) {
    if (mCreateFlag) {
        return true;
    }

    mCreateFlag = true;
    mStackEnd = pStack;

    BOOL success = OSCreateThread(&mThread, SoundThreadFunc, &GetInstance(),
                                  static_cast<u8*>(pStack) + stackSize,
                                  stackSize, priority, 0);

    if (success) {
        OSResumeThread(&mThread);
    }

    return success;
}

void SoundThread::Shutdown() {
    if (!mCreateFlag) {
        return;
    }

    OSJamMessage(&GetInstance().mMsgQueue,
                 reinterpret_cast<OSMessage>(MSG_SHUTDOWN), OS_MSG_BLOCKING);

    OSJoinThread(&mThread, NULL);
    mCreateFlag = false;
}

void SoundThread::AxCallbackFunc() {
    GetInstance().AxCallbackProc();
}

void SoundThread::AxCallbackProc() {
    OSSendMessage(&mMsgQueue, reinterpret_cast<OSMessage>(MSG_AX_CALLBACK), 0);

    NW4R_UT_LINKLIST_FOREACH_SAFE (it, mPlayerCallbackList,
                                   { it->OnUpdateVoiceSoundThread(); })

    VoiceManager::GetInstance().NotifyVoiceUpdate();
}

void* SoundThread::SoundThreadFunc(void* pArg) {
    SoundThread* p = static_cast<SoundThread*>(pArg);

    AxManager::GetInstance().RegisterCallback(&p->mAxCallbackNode,
                                              AxCallbackFunc);

    p->SoundThreadProc();

    AxManager::GetInstance().UnregisterCallback(&p->mAxCallbackNode);

    return NULL;
}

void SoundThread::RegisterPlayerCallback(PlayerCallback* pCallback) {
    ut::detail::AutoLock<OSMutex> lock(mMutex);
    mPlayerCallbackList.PushBack(pCallback);
}

void SoundThread::UnregisterPlayerCallback(PlayerCallback* pCallback) {
    ut::detail::AutoLock<OSMutex> lock(mMutex);
    mPlayerCallbackList.Erase(pCallback);
}

void SoundThread::SoundThreadProc() {
    OSMessage msg;

    while (true) {
        OSReceiveMessage(&mMsgQueue, &msg, OS_MSG_BLOCKING);

        if (reinterpret_cast<u32>(msg) == MSG_AX_CALLBACK) {
            ut::detail::AutoLock<OSMutex> lock(mMutex);

            NW4R_UT_LINKLIST_FOREACH_SAFE (it, mSoundFrameCallbackList,
                                           { it->OnBeginSoundFrame(); })

            u32 start = OSGetTick();
            {
                AxVoiceManager::GetInstance().FreeAllReservedAxVoice();
                AxManager::GetInstance().Update();

                if (!AxManager::GetInstance().IsDiskError()) {
                    NW4R_UT_LINKLIST_FOREACH_SAFE (it, mPlayerCallbackList,
                                                   { it->OnUpdateFrameSoundThread(); })

                    ChannelManager::GetInstance().UpdateAllChannel();
                }

                (void)Util::CalcRandom();
                VoiceManager::GetInstance().UpdateAllVoices();
            }
            mProcessTick = OSGetTick() - start;

            NW4R_UT_LINKLIST_FOREACH_SAFE (it, mSoundFrameCallbackList,
                                           { it->OnEndSoundFrame(); })

        } else if (reinterpret_cast<u32>(msg) == MSG_SHUTDOWN) {
            NW4R_UT_LINKLIST_FOREACH_SAFE (it, mPlayerCallbackList,
                                           { it->OnShutdownSoundThread(); })

            break;
        }
    }
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void CalcRandom__Q44nw4r3snd6detail4UtilFv();
extern "C" void FrameProcess__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void FreeAllReservedAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void Update__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();

// asm_to_cpp: FrameProcess__Q44nw4r3snd6detail11SoundThreadFv
extern "C" asm void FrameProcess__Q44nw4r3snd6detail11SoundThreadFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
lbl_80219244:
    addi r3, r27, 0x320
    addi r4, r1, 0x8
    li r5, 0x1
    bl OSReceiveMessage
    lwz r0, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_80219334
    addi r28, r27, 0x354
    mr r3, r28
    bl OSLockMutex
    lwz r31, 0x37c(r27)
    addi r30, r27, 0x37c
    b lbl_80219290
lbl_80219278:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_80219290:
    cmplw r31, r30
    bne lbl_80219278
    bl OSGetTick
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    bl FreeAllReservedAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFv
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl Update__Q44nw4r3snd6detail9AxManagerFv
    lwz r30, 0x388(r27)
    addi r31, r27, 0x388
    b lbl_802192D4
lbl_802192BC:
    mr r3, r30
    lwz r30, 0x0(r30)
    lwz r12, 0x8(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_802192D4:
    cmplw r30, r31
    bne lbl_802192BC
    bl GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
    bl UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv
    bl CalcRandom__Q44nw4r3snd6detail4UtilFv
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    bl UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv
    bl OSGetTick
    subf r0, r29, r3
    lwz r30, 0x37c(r27)
    stw r0, 0x390(r27)
    addi r31, r27, 0x37c
    b lbl_80219320
lbl_80219308:
    mr r3, r30
    lwz r30, 0x0(r30)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_80219320:
    cmplw r30, r31
    bne lbl_80219308
    mr r3, r28
    bl OSUnlockMutex
    b lbl_80219244
lbl_80219334:
    cmplwi r0, 0x2
    bne lbl_80219244
    lwz r30, 0x388(r27)
    addi r31, r27, 0x388
    b lbl_80219360
lbl_80219348:
    mr r3, r30
    lwz r30, 0x0(r30)
    lwz r12, 0x8(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_80219360:
    cmplw r30, r31
    bne lbl_80219348
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
