#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

#define OSPhysicalToCached(paddr) ((void*)((u32)(paddr) + 0x80000000))
#define PI_HW_REGS ((volatile u32*)0xCC003000)
#define PI_RESET 9

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif
typedef int BOOL;

typedef BOOL (*OSShutdownFunction)(u32 pass, u32 event);

typedef struct OSShutdownFunctionInfo OSShutdownFunctionInfo;
struct OSShutdownFunctionInfo {
    OSShutdownFunction func;
    u32 prio;
    OSShutdownFunctionInfo* next;
    OSShutdownFunctionInfo* prev;
};

typedef struct OSShutdownFunctionQueue {
    OSShutdownFunctionInfo* head;
    OSShutdownFunctionInfo* tail;
} OSShutdownFunctionQueue;

static OSShutdownFunctionQueue ShutdownFunctionQueue;

typedef struct OSRebootParams {
    u32 WORD_0x0;
    u32 WORD_0x4;
    u8 pad[20];
} OSRebootParams;

extern OSRebootParams __OSRebootParams;
extern void* __OSNextPartitionType;
extern void __OSBootDol(u32 r3, u32 r4, void* r5);

M2C_UNK __OSWriteExpiredFlagIfSet();                /* extern */
M2C_UNK memset();             /* extern */
extern s32 lbl_8049E320;
extern s32 lbl_8049E324;

void fn_8031AFC0();
void fn_8031AFC4();
void __OSReboot(u32 r3, u32 r4);
void fn_8031B034();
void OSRegisterShutdownFunction(OSShutdownFunctionInfo* info);
BOOL __OSCallShutdownFunctions(u32 pass, u32 event);
void __OSShutdownDevices();
s32 fn_8031B310();
void fn_8031B37C();
void fn_8031B498();
void __OSReturnToMenu();
void OSReturnToMenu();
void fn_8031B834();
void fn_8031B930();
void fn_8031B9D4();
u32 OSGetResetCode();

void fn_8031AFC0(s32 arg0) {
    OSInitThreadQueue((s8 *) arg0);
}

void fn_8031AFC4(s32 arg0) {
    fn_8031D978((s8 *) arg0);
}

void __OSReboot(u32 r3, u32 r4) {
    BOOL enabled;
    u32 r1_8[2];

    enabled = OSDisableInterrupts();
    OSSetArenaLo((void*)0x81280000);
    OSSetArenaHi((void*)0x812F0000);
    r1_8[0] = 0;
    __OSNextPartitionType = *(void**)OSPhysicalToCached(0x3194);
    __OSBootDol(r4, r3 | 0x80000000, r1_8);
}

void fn_8031B034(s32 *arg0, s32 *arg1) {
    *arg0 = lbl_8049E320;
    *arg1 = lbl_8049E324;
}

void OSRegisterShutdownFunction(OSShutdownFunctionInfo* info) {
    OSShutdownFunctionInfo* it;
    OSShutdownFunctionInfo* prev;
    OSShutdownFunctionInfo* tail;

    for (it = ShutdownFunctionQueue.head; it != NULL && it->prio <= info->prio;
         it = it->next) {
        ;
    }

    if (it == NULL) {
        tail = ShutdownFunctionQueue.tail;
        if (tail == NULL) {
            ShutdownFunctionQueue.head = info;
        } else {
            ShutdownFunctionQueue.tail->next = info;
        }
        info->prev = tail;
        info->next = NULL;
        it = ShutdownFunctionQueue.head;
        ShutdownFunctionQueue.tail = info;
    } else {
        info->next = it;
        prev = it->prev;
        it->prev = info;
        info->prev = prev;

        if (prev == NULL) {
            ShutdownFunctionQueue.head = info;
        } else {
            prev->next = info;
        }
    }
}

BOOL __OSCallShutdownFunctions(u32 pass, u32 event) {
    OSShutdownFunctionInfo* iter;
    BOOL failure;
    u32 prio;

    prio = 0;
    failure = FALSE;

    for (iter = ShutdownFunctionQueue.head; iter != NULL; iter = iter->next) {
        if (failure && prio != iter->prio) {
            break;
        }

        failure |= !iter->func(pass, event);
        prio = iter->prio;
    }

    failure |= !__OSSyncSram();

    return !failure;
}

void __OSShutdownDevices(s32 arg0, M2C_UNK arg_sp0);

s32 fn_8031B310(u32 arg0) {
    s32 sp8;

    if (__DVDGetCoverStatus() != 2U) {
        return 3;
    }
    if ((arg0 == 1) && (__OSGetRTCFlags(&sp8) != 0) && (sp8 == 0)) {
        return 1;
    }
    return 2;
}

void fn_8031B37C(void);

void fn_8031B498(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void OSReturnToMenu(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_8031B834(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

/*
Decompilation failure in function fn_8031B874:

Found bctr instruction at unk_8031AFC0.s line 689, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_8031B930(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_8031B9D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

u32 OSGetResetCode(void) {
    if (__OSRebootParams.WORD_0x0 != 0) {
        return __OSRebootParams.WORD_0x4 | 0x80000000;
    }

    return PI_HW_REGS[PI_RESET] >> 3;
}

void OSReturnToMenu();
extern void OSSetArenaHi();
extern void OSSetArenaLo();
void __OSReturnToMenu();
void __OSShutdownDevices();

void fn_8031B37C();
void fn_8031B498();
void fn_8031B834();
extern int fn_8031B874();
void fn_8031B930();
void fn_8031B9D4();

