#include <revolution/NWC24.h>
#include <revolution/NWC24/NWC24Internal.h>
#include <revolution/SC.h>

#include <cstring>

#define CHECK_CALLING_STATUS() CheckCallingStatus(__FUNCTION__)

#define NWC24_TIME_DEVICE "/dev/net/kd/time"

enum {
    NWC24_IOCTL_SET_RTC_COUNTER = 23,
    NWC24_IOCTL_GET_TIME_DIFFERENCE = 24,
};

#pragma pack(push, 1)
typedef struct CommonBuffer {
    u32 rtc;   // at 0x0
    u32 flags; // at 0x4
    u8 padding[32 - 0x8];
} CommonBuffer;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct CommonResult {
    s32 result; // at 0x0
    s64 diff;   // at 0x4
    u8 padding[32 - 0xC];
} CommonResult;
#pragma pack(pop)

static BOOL nwc24TimeInitialized = FALSE;
static u32 nwc24TimeRtc = 0;
static s64 nwc24TimeDifference = 0;

static CommonResult nwc24TimeCommonResult ALIGN(32);
static CommonBuffer nwc24TimeCommonBuffer ALIGN(32);
static OSMutex nwc24TimeCommandMutex ALIGN(32);

// Unused from NWC24iStrTime, but pooled in
static u8 buf[128];
DECOMP_FORCEACTIVE(NWC24Time_c, buf);

// Forward declarations
static NWC24Err GetRTC(u32* pRTC);
static NWC24Err CheckCallingStatus(const char* pUser);
static void InitMutex(void);
static void LockRight(void);
static void UnlockRight(void);

NWC24Err NWC24iGetUniversalTime(s64* pTime) {
    static s64 whenCached = 0;
    NWC24Err result;

    if (pTime == NULL) {
        nwc24TimeDifference = 0;
        return NWC24_ERR_INVALID_VALUE;
    }

    if (whenCached == 0 ||
        whenCached + OS_SEC_TO_TICKS(1) <= __OSGetSystemTime() ||
        nwc24TimeRtc == 0) {

        result = NWC24iGetTimeDifference(&nwc24TimeDifference);
        if (result < 0) {
            return result;
        }

        result = GetRTC(&nwc24TimeRtc);
        if (result != NWC24_OK) {
            return result;
        }

        whenCached = __OSGetSystemTime();
    }

    *pTime = nwc24TimeDifference + nwc24TimeRtc;
    return NWC24_OK;
}

NWC24Err NWC24iGetTimeDifference(s64* pTimeDiff) {
    s32 fd;
    NWC24Err result;
    NWC24Err close;

    result = CHECK_CALLING_STATUS();
    if (result < 0) {
        return result;
    }

    LockRight();
    {
        result = NWC24_OPEN_DEVICE(NWC24_TIME_DEVICE, &fd, IPC_OPEN_NONE);

        if (result >= 0) {
            result = NWC24_IOCTL_DEVICE(             //
                fd, NWC24_IOCTL_GET_TIME_DIFFERENCE, //
                NULL, 0,                             //
                &nwc24TimeCommonResult, sizeof(CommonResult));

            if (result >= 0) {
                result = nwc24TimeCommonResult.result;

                // Cast is necessary
                if (result == 0 && pTimeDiff != (void*)NULL) {
                    *pTimeDiff = nwc24TimeCommonResult.diff;
                }
            }

            close = NWC24_CLOSE_DEVICE(fd);
            if (result >= 0) {
                result = close;
            }
        }
    }
    UnlockRight();

    return result;
}

NWC24Err NWC24iSetRtcCounter(u32 rtc, u32 flags) {
    s32 fd;
    NWC24Err result;
    NWC24Err close;

    result = CHECK_CALLING_STATUS();
    if (result < 0) {
        return result;
    }

    LockRight();
    {
        result = NWC24_OPEN_DEVICE(NWC24_TIME_DEVICE, &fd, IPC_OPEN_NONE);

        if (result >= 0) {
            nwc24TimeCommonBuffer.rtc = rtc;
            nwc24TimeCommonBuffer.flags = flags;

            result = NWC24_IOCTL_DEVICE(                      //
                fd, NWC24_IOCTL_SET_RTC_COUNTER,              //
                &nwc24TimeCommonBuffer, sizeof(CommonBuffer), //
                &nwc24TimeCommonResult, sizeof(CommonResult));

            if (result >= 0) {
                result = nwc24TimeCommonResult.result;
            }

            close = NWC24_CLOSE_DEVICE(fd);
            if (result >= 0) {
                result = close;
            }
        }
    }
    UnlockRight();

    return result;
}

NWC24Err NWC24iSynchronizeRtcCounter(BOOL forceSave) {
    u32 rtc;
    NWC24Err result;

    result = GetRTC(&rtc);
    if (result != NWC24_OK) {
        return result;
    }

    return NWC24iSetRtcCounter(rtc, forceSave ? 1 : 0);
}

static NWC24Err GetRTC(u32* pRTC) {
    u32 status;

    do {
        status = SCCheckStatus();

        if (status == SC_STATUS_FATAL) {
            return NWC24_ERR_FATAL;
        }
    } while (status != SC_STATUS_OK);

    *pRTC = OS_TICKS_TO_SEC(OSGetTime()) - SCGetCounterBias();
    return NWC24_OK;
}

static NWC24Err CheckCallingStatus(const char* pUser) {
#pragma unused(pUser)

    if (OSGetCurrentThread() == NULL) {
        return NWC24_ERR_FATAL;
    }

    return NWC24_OK;
}

static void InitMutex(void) {
    BOOL enabled = OSDisableInterrupts();

    if (!nwc24TimeInitialized) {
        OSInitMutex(&nwc24TimeCommandMutex);

        memset(&nwc24TimeCommonBuffer, 0, sizeof(CommonBuffer));
        memset(&nwc24TimeCommonResult, 0, sizeof(CommonResult));

        nwc24TimeInitialized = TRUE;
    }

    OSRestoreInterrupts(enabled);
}

static void LockRight(void) {
    if (!nwc24TimeInitialized) {
        InitMutex();
    }

    OSLockMutex(&nwc24TimeCommandMutex);
}

static void UnlockRight(void) {
    OSUnlockMutex(&nwc24TimeCommandMutex);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_803422F8[];
extern void __shl2i();
extern void __shr2u();
extern int fn_80334850();
extern int fn_803348E8();

// asm_to_cpp: fn_80334850
asm int fn_80334850() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_803348E8
    mr r30, r4
    mr r31, r3
    li r29, 0x0
lbl_80334878:
    addi r0, r29, 0x1
    mr r3, r31
    mr r4, r30
    subfic r5, r0, 0x35
    bl __shr2u
    clrlwi. r0, r4, 31
    beq lbl_803348AC
    subfic r5, r29, 0x2a
    li r4, 0x635
    li r3, 0x0
    bl __shl2i
    xor r30, r30, r4
    xor r31, r31, r3
lbl_803348AC:
    addi r29, r29, 0x1
    cmpwi r29, 0x2b
    blt lbl_80334878
    or. r0, r30, r31
    beq lbl_803348C8
    li r3, -0x25
    b lbl_803348CC
lbl_803348C8:
    li r3, 0x0
lbl_803348CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_803348E8
asm int fn_803348E8() {
    nofralloc
    li r9, -0x1
    lis r7, 0x20
    lis r6, 0x5e5e
    stwu r1, -0x20(r1)
    subi r7, r7, 0x1
    and r8, r4, r9
    addi r0, r6, 0x5e5e
    stw r31, 0x1c(r1)
    and r3, r3, r7
    lis r5, 0xffff
    xor r8, r8, r0
    stw r30, 0x18(r1)
    and r8, r8, r9
    xori r3, r3, 0x5e5e
    clrlslwi r0, r8, 31, 21
    li r6, -0x100
    and r3, r3, r7
    rotrwi r8, r8, 1
    or r3, r3, r0
    stw r29, 0x14(r1)
    rlwimi r8, r3, 31, 0, 0
    lis r4, 0xff01
    srwi r7, r3, 1
    addi r5, r5, 0xff
    rotrwi r30, r8, 8
    extrwi r29, r3, 8, 15
    and r12, r7, r9
    li r0, 0x0
    rlwimi r30, r3, 23, 0, 7
    and r31, r8, r6
    rlwimi r31, r30, 0, 24, 31
    rlwinm r11, r3, 31, 16, 23
    and r30, r31, r5
    and r12, r12, r9
    rlwimi r0, r29, 8, 24, 31
    subi r4, r4, 0x1
    or r12, r12, r0
    or r11, r30, r11
    and r30, r11, r4
    clrlwi r31, r8, 24
    li r0, 0x0
    clrlslwi r11, r8, 24, 16
    lis r10, 0x100
    and r12, r12, r9
    rlwimi r0, r31, 16, 16, 31
    or r30, r30, r11
    or r29, r12, r0
    extrwi r12, r3, 8, 23
    subi r0, r10, 0x1
    li r10, 0x0
    rlwimi r10, r12, 24, 8, 31
    and r11, r29, r9
    and r12, r30, r0
    extlwi r3, r3, 8, 23
    or r3, r12, r3
    or r12, r11, r10
    and r10, r3, r9
    lis r3, lbl_803422F8@ha
    and r31, r10, r9
    rotlwi r30, r8, 16
    extrwi r11, r31, 4, 24
    addi r3, r3, lbl_803422F8@l
    rlwimi r30, r7, 16, 0, 15
    clrlwi r10, r31, 28
    and r29, r12, r6
    rotlwi r12, r8, 8
    lbzx r11, r3, r11
    rlwimi r12, r7, 8, 0, 23
    lbzx r7, r3, r10
    rlwimi r29, r30, 0, 24, 31
    slwi r8, r11, 4
    clrlslwi r10, r12, 24, 8
    and r11, r29, r5
    or r10, r11, r10
    or r7, r8, r7
    and r11, r31, r6
    li r8, 0x0
    rlwimi r11, r7, 0, 24, 31
    and r12, r10, r9
    rotrwi r10, r11, 8
    li r7, 0x0
    rlwimi r10, r12, 24, 0, 7
    and r31, r11, r5
    extrwi r11, r10, 4, 24
    and r12, r12, r9
    clrlwi r10, r10, 28
    lbzx r11, r3, r11
    lbzx r10, r3, r10
    slwi r11, r11, 4
    or r10, r11, r10
    clrlwi r11, r10, 24
    clrlslwi r10, r10, 24, 8
    rlwimi r8, r11, 8, 24, 31
    or r10, r31, r10
    or r8, r12, r8
    rotlwi r12, r10, 16
    and r11, r10, r4
    rlwimi r12, r8, 16, 0, 15
    and r10, r8, r9
    extrwi r8, r12, 4, 24
    clrlwi r4, r12, 28
    lbzx r8, r3, r8
    lbzx r4, r3, r4
    slwi r8, r8, 4
    or r4, r8, r4
    clrlwi r8, r4, 24
    clrlslwi r4, r4, 24, 16
    or r29, r11, r4
    rlwimi r7, r8, 16, 16, 31
    or r11, r10, r7
    lis r4, 0x1
    rotlwi r8, r29, 8
    and r31, r29, r0
    rlwimi r8, r11, 8, 0, 23
    and r12, r11, r9
    extrwi r10, r8, 4, 24
    subi r0, r4, 0x4c4d
    lbzx r11, r3, r10
    clrlwi r8, r8, 28
    lbzx r10, r3, r8
    li r8, 0x0
    slwi r11, r11, 4
    lis r7, 0xb3b4
    or r11, r11, r10
    clrlwi r10, r11, 24
    subi r7, r7, 0x4c4d
    rlwimi r8, r10, 24, 8, 31
    slwi r4, r11, 24
    or r10, r12, r8
    extrwi r8, r10, 4, 24
    or r12, r31, r4
    clrlwi r4, r10, 28
    lbzx r8, r3, r8
    and r11, r10, r6
    lbzx r4, r3, r4
    slwi r6, r8, 4
    and r8, r12, r9
    or r4, r6, r4
    rlwimi r11, r4, 0, 24, 31
    and r10, r8, r9
    extrwi r6, r11, 4, 16
    extrwi r4, r11, 4, 20
    lbzx r6, r3, r6
    lbzx r3, r3, r4
    and r8, r11, r5
    slwi r5, r6, 4
    and r4, r10, r9
    or r3, r5, r3
    clrlslwi r3, r3, 24, 8
    or r3, r8, r3
    clrlslwi r5, r3, 21, 10
    extrwi r3, r3, 10, 11
    rlwimi r5, r4, 10, 22, 31
    rlwimi r3, r4, 10, 0, 21
    xor r4, r3, r7
    xor r3, r5, r0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}
