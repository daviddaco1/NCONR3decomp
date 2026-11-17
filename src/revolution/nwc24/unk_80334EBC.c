int fn_80334F7C(int final, unsigned long event);
#include "revolution/nwc24.h"
#include "revolution/nwc24/NWC24Internal.h"
#include "revolution/os.h"
#include "revolution/sc.h"

#define SHUTDOWN_RETRY_MAX 5

enum {
    NWC24_IOCTL_SHUTDOWN = 40,
};

static s32 nwc24ShtFd = -1;
static s32 nwc24ShtRetryRest = 0;

static OSShutdownFunctionInfo ShutdownFuncInfo;

NWC24Err NWC24EnableLedNotification(BOOL enable) {
    SCIdleModeInfo idleMode;
    u32 status;
    u32 led = 0;

    if (enable) {
        do {
            status = SCCheckStatus();

            if (status == SC_STATUS_FATAL) {
                return NWC24_ERR_FATAL;
            }
        } while (status == SC_STATUS_BUSY);

        SCGetIdleMode(&idleMode);
        led = idleMode.led;
    }

    __OSSetIdleLEDMode(led);
    return NWC24_OK;
}

NWC24Err NWC24iPrepareShutdown(void) {
    NWC24Err result = NWC24_OK;

    NWC24iRegister();

    ShutdownFuncInfo.func = fn_80334F7C;
    ShutdownFuncInfo.priority = 110;
    OSRegisterShutdownFunction(&ShutdownFuncInfo);

    if (nwc24ShtFd < 0) {
        result = NWC24_OPEN_DEVICE(NWC24i_SCHEDULER_DEVICE, &nwc24ShtFd, 1);
    }

    nwc24ShtRetryRest = SHUTDOWN_RETRY_MAX;
    NWC24EnableLedNotification(TRUE);

    if (OSGetAppType() == 0x40) {
        NWC24iSetScriptMode(1);
    }

    return result;
}

NWC24Err NWC24iRequestShutdown(u32 event, NWC24Err* pResult) {
    static u8 shtBuffer[32] ATTRIBUTE_ALIGN(32);
    static u8 shtResult[32] ATTRIBUTE_ALIGN(32);

    *(u32*)shtBuffer = event;
    return NWC24_IOCTL_DEVICE_ASYNC(nwc24ShtFd, NWC24_IOCTL_SHUTDOWN, shtBuffer, sizeof(shtBuffer), shtResult, sizeof(shtResult), pResult);
}

BOOL fn_80334F7C(BOOL final, u32 event) {
    static BOOL shuttingdown = FALSE;
    static NWC24Err result = NWC24_OK;

    if (final) {
        return TRUE;
    }

    if (shuttingdown) {
        if (NWC24iIsAsyncRequestPending()) {
            return FALSE;
        }

        if (result >= 0) {
            return TRUE;
        }

        if (nwc24ShtRetryRest > 0) {
            shuttingdown = FALSE;
            nwc24ShtRetryRest--;
        } else {
            return TRUE;
        }
    } else if (NWC24iRequestShutdown(event, &result) >= 0) {
        shuttingdown = TRUE;
    }

    return FALSE;
}

typedef void* (*SOAllocFunc)(u32 id, u32 size);
typedef void (*SOFreeFunc)(u32 id, void* ptr, u32 size);

typedef struct SOInitInfo {
    SOAllocFunc alloc;
    SOFreeFunc free;
} SOInitInfo;

typedef struct SOContext {
    SOAllocFunc alloc;
    SOFreeFunc free;
    s32 field_0x8;
    s32 field_0xc;
    void* buffer;
    u32 allocCount;
} SOContext;

extern const char* lbl_8049D470;
extern u32 lbl_8049D474;
extern u32 lbl_8049E5B8;
extern u8 lbl_8049E5B0;
extern s32 lbl_8049E5B4;
extern SOContext lbl_80470360;

s32 fn_8033504C(SOInitInfo* info) {
    s32 ret = 0;
    BOOL enabled = OSDisableInterrupts();
    void* ptr;

    if (!(lbl_8049E5B8 & 1)) {
        OSRegisterVersion(lbl_8049D470);
        lbl_8049E5B8 |= 1;
    }

    if (lbl_8049E5B0 == 0 || (int)lbl_8049E5B0 < 0 || (int)lbl_8049E5B0 >= 3) {
    } else {
        ret = -7;
        goto done;
    }

    if (info == NULL || info->alloc == NULL || info->free == NULL) {
        ret = -28;
        goto done;
    }

    memset(&lbl_80470360, 0, sizeof(SOContext));
    SOAllocFunc alloc = info->alloc;
    lbl_80470360.alloc = alloc;
    lbl_80470360.free = info->free;
    lbl_80470360.allocCount = 0;
    lbl_80470360.field_0x8 = -2;
    lbl_80470360.field_0xc = -1;

    if (alloc != NULL) {
        ptr = alloc(11, 0x460);
        if (ptr != NULL) {
            lbl_80470360.allocCount++;
            if (lbl_8049D474 != 0) {
                u32 p = ((u32)ptr) & 0x1FFFFFFF;
                if (p < 0x10000000 || p >= 0x18000000) {
                    if (ptr != NULL && lbl_80470360.free != NULL) {
                        lbl_80470360.allocCount--;
                        lbl_80470360.free(11, ptr, 0x460);
                    }
                    ptr = NULL;
                }
            }
        }
    } else {
        ptr = NULL;
    }

    lbl_80470360.buffer = ptr;
    if (ptr == NULL) {
        ret = -49;
    } else {
        lbl_8049E5B0 = 1;
    }

done:
    OSThread* thread = OSGetCurrentThread();
    if (thread != NULL) {
        thread->error = ret;
    } else {
        lbl_8049E5B4 = ret;
    }

    OSRestoreInterrupts(enabled);
    return ret;
}
