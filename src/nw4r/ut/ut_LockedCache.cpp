#include <nw4r/ut.h>

namespace nw4r {
namespace ut {
namespace {

class LCImpl {
public:
    class Lock_ {
    public:
        Lock_(LCImpl& rImpl) : mMutex(rImpl.mMutex) {
            OSLockMutex(&mMutex);
        }
        ~Lock_() {
            OSUnlockMutex(&mMutex);
        }

    private:
        OSMutex& mMutex; // at 0x0
    };

public:
    LCImpl() : mIsEnabled(false) {
        OSInitMutex(&mMutex);
    }

    void Enable() {
        Lock_ lock(*this);

        if (!mIsEnabled) {
            LCEnable();
            mIsEnabled = true;
        }
    }

    void Disable() {
        Lock_ lock(*this);

        if (mIsEnabled) {
            LC::QueueWaitEx(0);
            LCDisable();
            mIsEnabled = false;
        }
    }

    bool Lock() {
        OSLockMutex(&mMutex);

        if (mIsEnabled) {
            LC::QueueWaitEx(0);
            return true;
        }

        OSUnlockMutex(&mMutex);
        return false;
    }

    void Unlock() {
        LC::QueueWaitEx(0);
        OSUnlockMutex(&mMutex);
    }

private:
    bool mIsEnabled;        // at 0x0
    mutable OSMutex mMutex; // at 0x4
};

static LCImpl sLCImpl;

} // namespace

namespace LC {

void Enable() {
    sLCImpl.Enable();
}

void Disable() {
    sLCImpl.Disable();
}

bool Lock() {
    return sLCImpl.Lock();
}

void Unlock() {
    sLCImpl.Unlock();
}

void LoadBlocks(void* pDst, void* pSrc, u32 blocks) {
    LCLoadBlocks(pDst, pSrc, blocks);
}

void StoreBlocks(void* pDst, void* pSrc, u32 blocks) {
    LCStoreBlocks(pDst, pSrc, blocks);
}

void StoreData(void* pDst, void* pSrc, u32 size) {
    LCStoreData(pDst, pSrc, size);
}

} // namespace LC
} // namespace ut
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" u8 lbl_80409180[];
extern "C" void fn_802243EC();

// asm_to_cpp: fn_802243EC
extern "C" asm void fn_802243EC() {
    nofralloc
    lis r4, lbl_80409180@ha
    li r0, 0x0
    addi r3, r4, lbl_80409180@l
    stb r0, lbl_80409180@l(r4)
    addi r3, r3, 0x4
    b OSInitMutex
}
