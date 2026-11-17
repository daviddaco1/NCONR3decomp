#include "ncon_locked_stream_compat.h"
#include <nw4r/ut.h>

#include <revolution/OS.h>

extern "C" OSMutex lbl_80409168;
extern "C" bool lbl_8049DAC8;
extern "C" OSThreadQueue lbl_8049DAC0;
extern "C" void fn_8031D978(OSThreadQueue*);

namespace nw4r {
namespace ut {

NW4R_UT_RTTI_DEF_DERIVED(DvdLockedFileStream, DvdFileStream);

bool DvdLockedFileStream::sInitialized = false;
OSMutex DvdLockedFileStream::sMutex;

void DvdLockedFileStream::InitMutex_() {
    BOOL enabled = OSDisableInterrupts();

    if (!lbl_8049DAC8) {
        OSInitMutex(&lbl_80409168);
        OSInitThreadQueue(&lbl_8049DAC0);
        lbl_8049DAC8 = true;
    }

    OSRestoreInterrupts(enabled);
}

DvdLockedFileStream::DvdLockedFileStream(s32 entrynum)
    : DvdFileStream(entrynum), mCancelFlag(false) {
    InitMutex_();
}

DvdLockedFileStream::DvdLockedFileStream(const DVDFileInfo* pInfo, bool close)
    : DvdFileStream(pInfo, close), mCancelFlag(false) {
    InitMutex_();
}

DvdLockedFileStream::~DvdLockedFileStream() {}

bool DvdLockedFileStream::LockMutex_() {
    BOOL enabled = OSDisableInterrupts();
    while (!OSTryLockMutex(&lbl_80409168)) {
        OSSleepThread(&lbl_8049DAC0);
        if (mCancelFlag) { OSRestoreInterrupts(enabled); return false; }
    }
    OSRestoreInterrupts(enabled);
    return true;
}
void DvdLockedFileStream::UnlockMutex_() {
    BOOL enabled = OSDisableInterrupts();
    OSUnlockMutex(&lbl_80409168);
    fn_8031D978(&lbl_8049DAC0);
    OSRestoreInterrupts(enabled);
}
void DvdLockedFileStream::Close() {
    DvdFileStream::Close();
    mCancelFlag = false;
}
void DvdLockedFileStream::Cancel() {
    BOOL enabled = OSDisableInterrupts();
    mCancelFlag = true;
    fn_8031D978(&lbl_8049DAC0);
    OSRestoreInterrupts(enabled);
    DvdFileStream::Cancel();
}

s32 DvdLockedFileStream::Read(void* pDst, u32 size) {
    if (!LockMutex_()) return -3;
    s32 result = DvdFileStream::Read(pDst, size);
    UnlockMutex_();
    return result;
}

s32 DvdLockedFileStream::Peek(void* pDst, u32 size) {
    if (!LockMutex_()) return -3;
    s32 result = DvdFileStream::Peek(pDst, size);
    UnlockMutex_();
    return result;
}

} // namespace ut
} // namespace nw4r

