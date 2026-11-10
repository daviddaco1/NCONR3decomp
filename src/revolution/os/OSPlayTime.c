#include <revolution/AI.h>
#include <revolution/ESP.h>
#include <revolution/NAND.h>
#include <revolution/OS.h>
#include <revolution/VI.h>
#include <cstring>

typedef struct PlayTimeWork {
    u8 buffer[2][576];          // at 0x0
    u32 bufferIndex;            // at 0x480
    s16* dmaAddr;               // at 0x484
    u32 state;                  // at 0x488
    s16 left;                   // at 0x48C
    s16 right;                  // at 0x48E
    AIDMACallback prevCallback; // at 0x490
} PlayTimeWork;

char __OSExpiredPath[] = "/shared2/expired";

OSAlarm __OSExpireAlarm;

static OSTime __OSExpireTime;
OSThread* __OSExpireThread;
BOOL __OSExpireSetExpiredFlag;
PlayTimeWork* __OSPlayTimeWork;

BOOL OSPlayTimeIsLimited(void) {
    return __OSExpireTime != 0;
}

void* __OSPlayTimeRebootThread(void* arg);

void __OSPlayTimeRebootCallback(OSAlarm* alarm, OSContext* ctx) {
    #pragma unused(alarm)
    #pragma unused(ctx)
    register OSThread* thread;
    void* stack;

    for (thread = OS_THREAD_QUEUE.head; thread; thread = thread->nextActive) {
        OSSuspendThread(thread);
    }

    stack = (u8*)OS_USABLE_MEM2_END - 4896;
    thread = (OSThread*)stack;
    if (!OSCreateThread(thread, __OSPlayTimeRebootThread, NULL, (void*)((u8*)stack + 4896), 4096, 0, 0)) {
        __OSHotResetForError();
    }
    OSResumeThread(thread);
}

void __OSPlayTimeFadeLastAIDCallback(void) {
    u8* dst;
    u8* p;
    u32 length;
    u32 count;

    if (__OSPlayTimeWork->prevCallback) {
        __OSPlayTimeWork->prevCallback();
    }

    if (__OSPlayTimeWork->state == 0) {
        __OSPlayTimeWork->dmaAddr = (void*)OSPhysicalToCached(AIGetDMAStartAddr());
    }

    if (__OSPlayTimeWork->state == 1) {
        DCInvalidateRange(__OSPlayTimeWork->dmaAddr, 4);
        __OSPlayTimeWork->left = *__OSPlayTimeWork->dmaAddr++;
        __OSPlayTimeWork->right = *__OSPlayTimeWork->dmaAddr;
    }

    if (__OSPlayTimeWork->state >= 1) {
        dst = __OSPlayTimeWork->buffer[__OSPlayTimeWork->bufferIndex];
        p = dst;
        length = AIGetDMALength();
        count = length;
        while (count != 0) {
            f32 rate = 0.995f;
            count -= 4;
            *(s16*)p = __OSPlayTimeWork->left;
            *(s16*)(p + 2) = __OSPlayTimeWork->right;
            p += 4;
            __OSPlayTimeWork->left = __OSPlayTimeWork->left * rate;
            __OSPlayTimeWork->right = __OSPlayTimeWork->right * rate;
        }
        DCFlushRange(dst, length);
        AIInitDMA(dst, length);
        __OSPlayTimeWork->bufferIndex++;
        __OSPlayTimeWork->bufferIndex &= 1;
    }

    __OSPlayTimeWork->state++;
}

BOOL __OSWriteExpiredFlag(void) {
    s32 result = NAND_RESULT_OK;
    BOOL open = FALSE;
    u8 attr = 0;
    u8 titleId[32] ALIGN(32);
    NANDFileInfo file;

    result = NANDPrivateCreate(__OSExpiredPath, NAND_PERM_RWALL, attr);
    if (result == NAND_RESULT_OK || result == NAND_RESULT_EXISTS) {
        result = NANDPrivateOpen(__OSExpiredPath, &file, NAND_ACCESS_WRITE);
        if (result == NAND_RESULT_OK) {
            open = TRUE;
            result = ESP_InitLib();
            if (result == 0) {
                memset(titleId, 0, sizeof(titleId));
                result = ESP_GetTitleId((ESTitleId*)titleId);
                if (result == 0) {
                    result = NANDWrite(&file, titleId, sizeof(titleId));
                    if (result >= 0) {
                        if (result != 32) {
                            result = NAND_RESULT_INVALID;
                        } else {
                            result = NAND_RESULT_OK;
                        }
                    }
                }
            }
        }
    }

    if (open) {
        NANDClose(&file);
    }

    if (result == NAND_RESULT_OK) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void* __OSPlayTimeRebootThread(void* arg) {
    #pragma unused(arg)
    PlayTimeWork work ALIGN(32);
    BOOL enabled;
    u32 i;
    u32 dim;

    __OSPlayTimeWork = &work;
    memset(&work, 0, sizeof(work));
    __OSPlayTimeWork->prevCallback = AIRegisterDMACallback(__OSPlayTimeFadeLastAIDCallback);

    for (i = 0; i < 20; i++) {
        dim = i / 5 + 1;
        if (dim > 7) {
            dim = 7;
        }
        VIWaitForRetrace();
        __OSSetVIForceDimming(TRUE, dim, dim);
    }

    AIRegisterDMACallback(NULL);
    VISetBlack(TRUE);
    VIFlush();

    enabled = OSDisableInterrupts();
    if (__OSExpireSetExpiredFlag) {
        __OSWriteExpiredFlag();
    }
    OSRestoreInterrupts(enabled);

    OSReturnToMenu();
    return NULL;
}

// __OSPlayTimeAlarmExpired: definicion C reemplazada por asm (ver abajo)
void __OSPlayTimeAlarmExpired(OSAlarm* alarm, OSContext* ctx);


s32 __OSGetPlayTime(ESTicketView* ticketView, u32* type, register u32* remainingTime) {
    ESTicketView alignedTicketView ALIGN(32);
    ESLpEntry entries[ES_LIMIT_MAX] ALIGN(32);
    register int foundNonZero;
    u32 numEntries;
    s32 result;
    int i;
    u32 code;

    numEntries = 0;
    foundNonZero = 0;

    if ((u32)ticketView & 0x1F) {
        memcpy(&alignedTicketView, ticketView, sizeof(ESTicketView));
        ticketView = &alignedTicketView;
    }

    result = ESP_GetConsumption(ticketView->ticketId, NULL, &numEntries);
    if (result <= 0) {
        switch (result) {
        case 0:
            if (numEntries != 0) {
                switch (result = ESP_GetConsumption(ticketView->ticketId, entries, &numEntries)) {
                case 0:
                    break;
                }
            }
            break;
        }
    }

    if (result == 0) {
        for (i = 0; i < ES_LIMIT_MAX; i++) {
            code = ticketView->limits.data[i].code;
            if (code == 1) {
                *type = 1;
                if (numEntries == 0) {
                    *remainingTime = ticketView->limits.data[i].limit;
                } else if (entries[i].limit >= ticketView->limits.data[i].limit) {
                    *remainingTime = 0;
                } else {
                    *remainingTime = ticketView->limits.data[i].limit - entries[i].limit;
                }
                goto done;
            }

            if (code != 0) {
                foundNonZero = i + 1;
            }
        }

        if (foundNonZero == 0) {
            *type = 0;
            *remainingTime = (u32)-1;
        } else {
            foundNonZero--;
            if (ticketView->limits.data[foundNonZero].code == 4) {
                *type = 4;
                *remainingTime = ticketView->limits.data[foundNonZero].limit;
                if (numEntries != 0) {
                    *remainingTime -= entries[foundNonZero].limit;
                }
            } else {
                *type = 9;
            }
        }
    }

done:
    return result;
}

// __OSInitPlayTime: definicion C reemplazada por asm (ver abajo)
void __OSInitPlayTime(void);


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float __OSExpireCallback;
extern float at_1507_8049D230;
extern u8 at_1506_8038D4B4[];
extern u8 at_1508_8038D4C4[];
extern void OSCreateAlarm();
extern void OSSetAlarm();
void __OSInitPlayTime(void);
void __OSPlayTimeAlarmExpired(OSAlarm* alarm, OSContext* ctx);
extern int __OSWriteExpiredFlagIfSet();
extern void fn_8031B9D4();
extern void fn_8031CDF0();
extern void fn_8031D460();
extern void fn_8031D6F8();

// asm_to_cpp: __OSInitPlayTime
asm void __OSInitPlayTime(void) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x140
    stwux r1, r1, r11
    mflr r0
    li r3, 0x0
    stw r0, 0x4(r12)
    li r0, 0x1
    stw r31, -0x4(r12)
    stw r3, __OSExpireTime+0x4
    stw r3, __OSExpireTime
    stw r3, __OSExpireCallback
    stw r0, __OSExpireSetExpiredFlag
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_8031FDF4
    b lbl_8031FEEC
lbl_8031FDF4:
    addi r4, r1, 0x40
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, -0x3f9
    beq lbl_8031FE24
    cmpwi r3, 0x0
    beq lbl_8031FE14
    b lbl_8031FE24
lbl_8031FE14:
    addi r3, r1, 0x40
    addi r4, r1, 0x20
    addi r5, r1, 0x24
    bl __OSGetPlayTime
lbl_8031FE24:
    cmpwi r3, 0x0
    beq lbl_8031FE38
    cmpwi r3, -0x3f9
    beq lbl_8031FEEC
    b lbl_8031FEEC
lbl_8031FE38:
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    beq lbl_8031FEEC
    cmpwi r0, 0x1
    bne lbl_8031FEEC
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_8031FE70
    lis r3, at_1506_8038D4B4@ha
    li r4, 0x2e1
    addi r3, r3, at_1506_8038D4B4@l
    la r5, at_1507_8049D230
    opword 0x4CC63182
    bl OSPanic
lbl_8031FE70:
    lis r31, __OSExpireAlarm@ha
    addi r3, r31, __OSExpireAlarm@l
    bl OSCreateAlarm
    lis r3, 0x8000
    lis r7, __OSPlayTimeAlarmExpired@ha
    lwz r0, 0xf8(r3)
    li r4, 0x14
    lwz r5, 0x24(r1)
    li r9, 0x0
    srwi r6, r0, 2
    addi r3, r31, __OSExpireAlarm@l
    addc r8, r5, r4
    addi r7, r7, __OSPlayTimeAlarmExpired@l
    adde r0, r9, r9
    mullw r5, r0, r6
    mulhwu r4, r8, r6
    mullw r0, r8, r9
    add r4, r4, r5
    mullw r6, r8, r6
    add r5, r4, r0
    bl OSSetAlarm
    addi r4, r31, __OSExpireAlarm@l
    lis r3, at_1508_8038D4C4@ha
    lwz r0, 0x8(r4)
    addi r3, r3, at_1508_8038D4C4@l
    lwz r5, 0xc(r4)
    stw r0, __OSExpireTime
    lwz r4, 0x24(r1)
    stw r5, __OSExpireTime+0x4
    opword 0x4CC63182
    bl OSReport
lbl_8031FEEC:
    bl ESP_CloseLib
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: __OSPlayTimeAlarmExpired
asm void __OSPlayTimeAlarmExpired(OSAlarm* alarm, OSContext* ctx) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r12, __OSExpireCallback
    cmpwi r12, 0x0
    beq lbl_8031FB70
    mtctr r12
    bctrl
    b lbl_8031FBD4
lbl_8031FB70:
    lis r3, 0x8000
    lwz r31, 0xdc(r3)
    b lbl_8031FB88
lbl_8031FB7C:
    mr r3, r31
    bl fn_8031D6F8
    lwz r31, 0x2fc(r31)
lbl_8031FB88:
    cmpwi r31, 0x0
    bne lbl_8031FB7C
    lis r3, 0x8000
    lis r4, __OSPlayTimeRebootThread@ha
    lwz r3, 0x3128(r3)
    addi r4, r4, __OSPlayTimeRebootThread@l
    li r5, 0x0
    li r7, 0x1000
    subi r31, r3, 0x1320
    li r8, 0x0
    li r9, 0x0
    mr r3, r31
    addi r6, r31, 0x1320
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_8031FBCC
    bl fn_8031B9D4
lbl_8031FBCC:
    mr r3, r31
    bl fn_8031D460
lbl_8031FBD4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __OSWriteExpiredFlagIfSet
asm int __OSWriteExpiredFlagIfSet() {
    nofralloc
    lwz r0, __OSExpireSetExpiredFlag
    cmpwi r0, 0x0
    beq lbl_8031FA54
    b __OSWriteExpiredFlag
lbl_8031FA54:
    li r3, 0x0
    blr
}
