// Vista aislada de la revision RNEPDA; basada en cabeceras CC0 de Xenoblade.
#ifndef NW4R_SND_AXFX_IMPL_H
#define NW4R_SND_AXFX_IMPL_H
#include <nw4r/types_nw4r.h>

#include <revolution/AXFX.h>
#include <revolution/MEM.h>

namespace nw4r {
namespace snd {
namespace detail {

struct AxfxImpl {
    MEMiHeapHead* mHeap; // at 0x0
    u32 mAllocCount;     // at 0x4

    static const u32 HEAP_SIZE_MIN = MEM_FRM_HEAP_MIN_SIZE + 32;

    AxfxImpl() : mHeap(NULL), mAllocCount(0) {}

    bool CreateHeap(void* pBuffer, u32 size);
    void DestroyHeap();

    u32 GetHeapTotalSize() {
        if (mHeap == NULL) {
            return 0;
        }

        return MEMGetHeapTotalSize(mHeap);
    }

    void HookAlloc(AXFXAllocHook* pAllocHook, AXFXFreeHook* pFreeHook);
    void RestoreAlloc(AXFXAllocHook allocHook, AXFXFreeHook freeHook);

    static void* Alloc(u32 size);
    static void Free(void* pBlock);

    static AxfxImpl* mCurrentFx;
    static u32 mAllocatedSize;
};

} // namespace detail
} // namespace snd
} // namespace nw4r

#endif
#ifndef NW4R_SND_FX_REVERB_HI_H
#define NW4R_SND_FX_REVERB_HI_H
#include <nw4r/types_nw4r.h>

#include <nw4r/snd/snd_AxfxImpl.h>
#include <nw4r/snd/snd_FxBase.h>

#include <revolution/AXFX.h>

namespace nw4r {
namespace snd {

class FxReverbHi : public FxBase {
public:
    struct ReverbHiParam {
        f32 preDelayTime; // at 0x0
        f32 fusedTime;    // at 0x4
        f32 coloration;   // at 0x8
        f32 damping;      // at 0xC
        f32 crossTalk;    // at 0x10
    };

public:
    FxReverbHi();

    virtual ~FxReverbHi() {
        Shutdown();
        ReleaseWorkBuffer();
    } // at 0x8

    virtual bool StartUp();  // at 0xC
    virtual void Shutdown(); // at 0x10

    virtual void UpdateBuffer(int channels, void** ppBuffer, u32 size,
                              SampleFormat format, f32 sampleRate,
                              OutputMode mode); // at 0x14

    virtual bool AssignWorkBuffer(void* pBuffer, u32 size); // at 0x18
    virtual void ReleaseWorkBuffer();                       // at 0x1C

    u32 GetRequiredMemSize();
    bool SetParam(const ReverbHiParam& rParam);

private:
    bool mIsActive;          // at 0xC
    detail::AxfxImpl mImpl;   // at 0x10
    ReverbHiParam mParam;     // at 0x18
    AXFX_REVERBHI mAxfxParam; // at 0x2C
};

} // namespace snd
} // namespace nw4r

#endif
