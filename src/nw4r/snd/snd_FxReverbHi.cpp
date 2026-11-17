#define AXFXReverbHiShutdown fn_802A044C
#define AXFXReverbHiInit fn_8029FF04
#define AXFXReverbHiGetMemSize fn_8029FEDC
#include "ncon_reverbhi_compat.h"
#include <nw4r/snd.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {

u32 FxReverbHi::GetRequiredMemSize() {
    u32 memSize = AXFXReverbHiGetMemSize(&mAxfxParam);
    return ut::RoundUp(memSize + detail::AxfxImpl::HEAP_SIZE_MIN, 32);
}

bool FxReverbHi::AssignWorkBuffer(void* pBuffer, u32 size) {
    return mImpl.CreateHeap(pBuffer, size);
}

void FxReverbHi::ReleaseWorkBuffer() {
    mImpl.DestroyHeap();
}

bool FxReverbHi::StartUp() {
    u32 memSize = GetRequiredMemSize();
    if (memSize > mImpl.GetHeapTotalSize()) {
        return false;
    }

    AXFXAllocHook allocHook;
    AXFXFreeHook freeHook;
    mImpl.HookAlloc(&allocHook, &freeHook);

    BOOL success = AXFXReverbHiInit(&mAxfxParam);

    mImpl.RestoreAlloc(allocHook, freeHook);

    (void)AXFXReverbHiGetMemSize(&mAxfxParam); // debug leftover
    mIsActive = true;

    return success;
}

void FxReverbHi::Shutdown() {
    if (!mIsActive) {
        return;
    }

    mIsActive = false;

    AXFXAllocHook allocHook;
    AXFXFreeHook freeHook;
    mImpl.HookAlloc(&allocHook, &freeHook);

    AXFXReverbHiShutdown(&mAxfxParam);

    mImpl.RestoreAlloc(allocHook, freeHook);
}

void FxReverbHi::UpdateBuffer(int channels, void** ppBuffer, u32 size,
                              SampleFormat format, f32 sampleRate,
                              OutputMode mode) {
#pragma unused(channels)
#pragma unused(size)
#pragma unused(format)
#pragma unused(sampleRate)
#pragma unused(mode)

    void* chans[AX_STEREO_MAX];
    chans[AX_STEREO_L] = ppBuffer[AX_STEREO_L];
    chans[AX_STEREO_R] = ppBuffer[AX_STEREO_R];
    chans[AX_STEREO_S] = ppBuffer[AX_STEREO_S];

    AXFXReverbHiCallback(chans, &mAxfxParam);
}

} // namespace snd
} // namespace nw4r

extern "C" void SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam();
extern "C" void __ct__Q34nw4r3snd10FxReverbHiFv();
