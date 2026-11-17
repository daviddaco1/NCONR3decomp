// Referencia CC0: doldecomp/brawl, commit 70744045 (OSThread.c).
// Adaptaciones RNEPDA y C previo conservado; cabeceras locales de Xenoblade.
#include "types.h"
#include "m2c_macros.h"
extern s32 IpcBufferHi_8049E348;
extern s32 IpcBufferLo_8049D220;
extern s32 RunQueueBits_8049E340;
#include <revolution/OS.h>
void __OSThreadInit(void);
s32 fn_8031C934(OSThread* thread);
static OSThread* fn_8031C970(OSThread* thread, s32 prio);
void fn_8031CB24(OSThread* thread, s32 prio);
static OSThread* SelectThread(BOOL b);
void __OSReschedule(void);
BOOL OSCreateThread(OSThread* thread, OSThreadFunc func, void* funcArg,
                    void* stackBegin, u32 stackSize, s32 prio, u16 flags);
void fn_8031D05C(OSThread* thread);
BOOL fn_8031D320(OSThread* thread, void* val);
s32 fn_8031D460(OSThread* thread);
s32 OSSuspendThread(OSThread* thread);
void OSSleepThread(OSThreadQueue* queue);
void fn_8031D978(OSThreadQueue* queue);

static void DefaultSwitchThreadCallback(OSThread* currThread,
                                        OSThread* newThread);

static OSSwitchThreadCallback SwitchThreadCallback =
    DefaultSwitchThreadCallback;

static OSThread DefaultThread;
static OSThreadQueue RunQueue[32];
static OSContext IdleContext;
static OSThread IdleThread;

volatile static s32 Reschedule = 0;
volatile static BOOL RunQueueHint = FALSE;
volatile static u32 RunQueueBits = 0;

static void DefaultSwitchThreadCallback(OSThread* currThread,
                                        OSThread* newThread){
#pragma unused(currThread)
#pragma unused(newThread)
}

OSSwitchThreadCallback OSSetSwitchThreadCallback(OSSwitchThreadCallback newCb) {
    OSSwitchThreadCallback oldCb;
    BOOL enabled = OSDisableInterrupts();

    oldCb = SwitchThreadCallback;
    SwitchThreadCallback =
        (newCb != NULL) ? newCb : DefaultSwitchThreadCallback;

    OSRestoreInterrupts(enabled);
    return (oldCb == DefaultSwitchThreadCallback) ? NULL : oldCb;
}

void __OSThreadInit(void) {
    int i;
    OSThread* thread = &DefaultThread;
    OSThread* tail;

    thread->state = OS_THREAD_STATE_RUNNING;
    thread->flags = OS_THREAD_DETACHED;
    thread->base = 16;
    thread->priority = 16;
    thread->suspend = 0;
    thread->val = 0xFFFFFFFF;
    thread->mutex = NULL;

    OSInitThreadQueue(&thread->joinQueue);
    OSInitMutexQueue(&thread->mutexQueue);

    OS_CURRENT_FPU_CONTEXT = &thread->context;
    OSClearContext(&thread->context);
    OSSetCurrentContext(&thread->context);

    thread->stackBegin = (u32*)_stack_addr;
    thread->stackEnd = (u32*)_stack_end;
    *thread->stackEnd = OS_THREAD_STACK_MAGIC;

    OSSetCurrentThread(thread);
    OSClearStack(0x00);

    RunQueueBits = 0;
    RunQueueHint = FALSE;
    for (i = 0; i < 32; i++) {
        OSInitThreadQueue(&RunQueue[i]);
    }

    OSInitThreadQueue(&OS_THREAD_QUEUE);

    tail = OS_THREAD_QUEUE.tail;
    if (tail == NULL) {
        OS_THREAD_QUEUE.head = thread;
    } else {
        tail->nextActive = thread;
    }

    thread->prevActive = tail;
    thread->nextActive = NULL;
    OS_THREAD_QUEUE.tail = thread;

    OSClearContext(&IdleContext);
    Reschedule = 0;
}

void OSSetCurrentThread(OSThread* thread) {
    SwitchThreadCallback(OSGetCurrentThread(), thread);
    OS_CURRENT_THREAD = thread;
}

void OSInitMutexQueue(OSMutexQueue* queue) {
    queue->tail = NULL;
    queue->head = NULL;
}

void OSInitThreadQueue(OSThreadQueue* queue) {
    queue->tail = NULL;
    queue->head = NULL;
}

OSThread* OSGetCurrentThread(void) {
    return OS_CURRENT_THREAD;
}

static void __OSSwitchThread(OSThread* thread) {
    OSSetCurrentThread(thread);
    OSSetCurrentContext(&thread->context);
    OSLoadContext(&thread->context);
}

BOOL OSIsThreadSuspended(OSThread* thread) {
    return thread->suspend > 0 ? TRUE : FALSE;
}

BOOL OSIsThreadTerminated(OSThread* thread) {
    return thread->state == OS_THREAD_STATE_MORIBUND ||
                   thread->state == OS_THREAD_STATE_EXITED
               ? TRUE
               : FALSE;
}

static BOOL __OSIsThreadActive(OSThread* thread) {
    OSThread* iter;

    if (thread->state == OS_THREAD_STATE_EXITED) {
        return FALSE;
    }

    for (iter = OS_THREAD_QUEUE.head; iter != NULL; iter = iter->nextActive) {
        if (thread == iter) {
            return TRUE;
        }
    }

    return FALSE;
}

s32 OSDisableScheduler(void) {
    s32 old;
    BOOL enabled = OSDisableInterrupts();

    old = Reschedule++;

    OSRestoreInterrupts(enabled);

    return old;
}

s32 OSEnableScheduler(void) {
    s32 old;
    BOOL enabled = OSDisableInterrupts();

    old = Reschedule--;

    OSRestoreInterrupts(enabled);

    return old;
}

void OSClearStack(u8 val) {
    u32* end;
    u32* begin;
    u32 longVal;

    longVal = val << 24 | val << 16 | val << 8 | val;

    begin = (u32*)OSGetStackPointer();
    end = OSGetCurrentThread()->stackEnd + 1;

    for (; end < (u32*)begin; end++) {
        *end = longVal;
    }
}

static void SetRun(OSThread* thread) {
    OSThreadQueue* queue;
    OSThread* tail;

    queue = &RunQueue[thread->priority];
    thread->queue = queue;
    tail = thread->queue->tail;

    if (tail == NULL) {
        thread->queue->head = thread;
    } else {
        tail->next = thread;
    }

    thread->prev = tail;
    thread->next = NULL;
    thread->queue->tail = thread;

    RunQueueBits |= (1 << OS_PRIORITY_MAX - thread->priority);
    RunQueueHint = TRUE;
}

static void UnsetRun(OSThread* thread) DECOMP_DONT_INLINE {
    OSThreadQueue* queue;
    OSThread* next;
    OSThread* prev;

    next = thread->next;
    queue = thread->queue;
    prev = thread->prev;

    if (next == NULL) {
        queue->tail = prev;
    } else {
        next->prev = prev;
    }

    if (prev == NULL) {
        queue->head = next;
    } else {
        prev->next = next;
    }

    if (queue->head == NULL) {
        RunQueueBits &= ~(1 << OS_PRIORITY_MAX - thread->priority);
    }

    thread->queue = NULL;
}

s32 fn_8031C934(OSThread* thread) {
    s32 prio = thread->base;

    OSMutex* mutex;
    for (mutex = thread->mutexQueue.head; mutex != NULL; mutex = mutex->next) {
        OSThread* mutexThread = mutex->queue.head;
        if (mutexThread != NULL && mutexThread->priority < prio) {
            prio = mutexThread->priority;
        }
    }

    return prio;
}

static OSThread* fn_8031C970(OSThread* thread, s32 prio) {
    OSThread* iter;
    OSThread* iterPrev;
    OSThread* next;
    OSThread* prev;

    switch (thread->state) {
    case OS_THREAD_STATE_READY:
        UnsetRun(thread);
        thread->priority = prio;
        thread->queue = &RunQueue[prio];
        SetRun(thread);
        break;
    case OS_THREAD_STATE_SLEEPING:
        next = thread->next;
        prev = thread->prev;
        if (next == NULL) {
            thread->queue->tail = prev;
        } else {
            next->prev = prev;
        }

        if (prev == NULL) {
            thread->queue->head = next;
        } else {
            prev->next = next;
        }

        thread->priority = prio;

        for (iter = thread->queue->head;
             iter != NULL && iter->priority <= thread->priority;
             iter = iter->next) {
        }

        if (iter == NULL) {
            iter = thread->queue->tail;
            if (iter == NULL) {
                thread->queue->head = thread;
            } else {
                iter->next = thread;
            }
            thread->prev = iter;
            thread->next = NULL;
            thread->queue->tail = thread;
        } else {
            thread->next = iter;
            iterPrev = iter->prev;
            iter->prev = thread;
            thread->prev = iterPrev;

            if (iterPrev == NULL) {
                thread->queue->head = thread;
            } else {
                iterPrev->next = thread;
            }
        }

        if (thread->mutex != NULL) {
            return thread->mutex->thread;
        }
        break;
    case OS_THREAD_STATE_RUNNING:
        RunQueueHint = TRUE;
        thread->priority = prio;
        break;
    default:
        break;
    }

    return NULL;
}

static void UpdatePriority(OSThread* thread) {
    s32 prio = 0;

    while (TRUE) {
        if (thread->suspend > 0) {
            return;
        }

        prio = fn_8031C934(thread);
        if (thread->priority == prio) {
            return;
        }

        thread = fn_8031C970(thread, prio);
        if (thread == NULL) {
            return;
        }
    }
}

void fn_8031CB24(OSThread* thread, s32 prio) {
    while (TRUE) {
        if (thread->suspend > 0) {
            return;
        }

        if (thread->priority <= prio) {
            return;
        }

        thread = fn_8031C970(thread, prio);
        if (thread == NULL) {
            return;
        }
    }
}

static OSThread* SelectThread(BOOL b) {
    OSThreadQueue* queue;
    OSThread* currThread;
    OSThread* head;
    OSThread* next;
    OSContext* currCtx;
    s32 prio;

    if (Reschedule > 0) {
        return NULL;
    }

    currCtx = OSGetCurrentContext();
    currThread = OSGetCurrentThread();

    if (currCtx != &currThread->context) {
        return NULL;
    }

    if (currThread != NULL) {
        if (currThread->state == OS_THREAD_STATE_RUNNING) {
            if (!b) {
                prio = __cntlzw(RunQueueBits);
                if (currThread->priority <= prio) {
                    return NULL;
                }
            }

            currThread->state = OS_THREAD_STATE_READY;
            SetRun(currThread);
        }

        if (!(currThread->context.state & 0x2)) {
            if (OSSaveContext(&currThread->context)) {
                return NULL;
            }
        }
    }

    if (RunQueueBits == 0) {
        OSSetCurrentThread(NULL);
        OSSetCurrentContext(&IdleContext);

        do {
            OSEnableInterrupts();

            while (RunQueueBits == 0) {
            }
            OSDisableInterrupts();

        } while (RunQueueBits == 0);

        OSClearContext(&IdleContext);
    }

    RunQueueHint = FALSE;

    prio = __cntlzw(RunQueueBits);
    queue = &RunQueue[prio];
    head = queue->head;
    next = head->next;

    if (next == NULL) {
        queue->tail = NULL;
    } else {
        next->prev = NULL;
    }

    queue->head = next;
    if (next == NULL) {
        RunQueueBits &= ~(1 << OS_PRIORITY_MAX - prio);
    }

    head->queue = NULL;
    head->state = OS_THREAD_STATE_RUNNING;
    __OSSwitchThread(head);
    return head;
}

void __OSReschedule(void) {
    if (RunQueueHint) {
        SelectThread(FALSE);
    }
}

void OSYieldThread(void) {
    BOOL enabled = OSDisableInterrupts();
    SelectThread(TRUE);
    OSRestoreInterrupts(enabled);
}

BOOL OSCreateThread(OSThread* thread, OSThreadFunc func, void* funcArg,
                    void* stackBegin, u32 stackSize, s32 prio, u16 flags) {
    BOOL enabled;
    int i;
    OSThread* tail;
    void* sp;

    if (prio < OS_PRIORITY_MIN || prio > OS_PRIORITY_MAX) {
        return FALSE;
    }

    thread->state = OS_THREAD_STATE_READY;
    thread->flags = flags & OS_THREAD_DETACHED;
    thread->base = prio;
    thread->priority = prio;
    thread->suspend = 1;
    thread->val = 0xFFFFFFFF;
    thread->mutex = NULL;
    OSInitThreadQueue(&thread->joinQueue);
    OSInitMutexQueue(&thread->mutexQueue);

    sp = ROUND_DOWN_PTR(stackBegin, 8);
    *((u32*)sp - 2) = 0x00000000;
    *((u32*)sp - 1) = 0x00000000;

    OSInitContext(&thread->context, func, (char*)sp - 8);
    thread->context.lr = (u32)fn_8031D05C;
    thread->context.gprs[3] = (u32)funcArg;

    thread->stackBegin = (u32*)stackBegin;
    thread->stackEnd = (u32*)((char*)stackBegin - stackSize);
    *thread->stackEnd = OS_THREAD_STACK_MAGIC;

    thread->error = 0;
    for (i = 0; i < 2; i++) {
        thread->specific[i] = NULL;
    }

    enabled = OSDisableInterrupts();
    if (__OSErrorTable[OS_ERR_FP_EXCEPTION] != NULL) {
        thread->context.srr1 |= 0x900;
        thread->context.state |= 0x1;
        thread->context.fpscr = __OSFpscrEnableBits & 0xF8;
        thread->context.fpscr |= 0x4;

        for (i = 0; i < 32; i++) {
            *(u64*)&thread->context.fprs[i] = 0xFFFFFFFFFFFFFFFF;
            *(u64*)&thread->context.psfs[i] = 0xFFFFFFFFFFFFFFFF;
        }
    }

    tail = OS_THREAD_QUEUE.tail;
    if (tail == NULL) {
        OS_THREAD_QUEUE.head = thread;
    } else {
        tail->nextActive = thread;
    }

    thread->prevActive = tail;
    thread->nextActive = NULL;
    OS_THREAD_QUEUE.tail = thread;
    tail = thread;

    OSRestoreInterrupts(enabled);
    return TRUE;
}

void fn_8031D05C(OSThread* thread) {
    BOOL enabled;
    OSThread* currThread;
    OSThread* next;
    OSThread* prev;

    enabled = OSDisableInterrupts();
    currThread = OSGetCurrentThread();
    OSClearContext(&currThread->context);

    if ((currThread->flags & OS_THREAD_DETACHED)) {
        next = currThread->nextActive;
        prev = currThread->prevActive;

        if (next == NULL) {
            OS_THREAD_QUEUE.tail = prev;
        } else {
            next->prevActive = prev;
        }

        if (prev == NULL) {
            OS_THREAD_QUEUE.head = next;
        } else {
            prev->nextActive = next;
        }

        currThread->state = OS_THREAD_STATE_EXITED;
    } else {
        currThread->state = OS_THREAD_STATE_MORIBUND;
        currThread->val = (u32)thread;
    }

    __OSUnlockAllMutex(currThread);
    fn_8031D978(&currThread->joinQueue);
    RunQueueHint = TRUE;
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

void OSCancelThread(OSThread* thread);

BOOL fn_8031D320(OSThread* thread, void* val) {
    BOOL enabled;
    OSThread* next;
    OSThread* prev;

    enabled = OSDisableInterrupts();

    if (!(thread->flags & OS_THREAD_DETACHED) &&
        thread->state != OS_THREAD_STATE_MORIBUND &&
        thread->joinQueue.head == NULL) {
        OSSleepThread(&thread->joinQueue);
        if (!__OSIsThreadActive(thread)) {
            OSRestoreInterrupts(enabled);
            return FALSE;
        }
    }

    if (thread->state == OS_THREAD_STATE_MORIBUND) {
        if (val != NULL) {
            *(u32*)val = thread->val;
        }

        next = thread->nextActive;
        prev = thread->prevActive;

        if (next == NULL) {
            OS_THREAD_QUEUE.tail = prev;
        } else {
            next->prevActive = prev;
        }

        if (prev == NULL) {
            OS_THREAD_QUEUE.head = next;
        } else {
            prev->nextActive = next;
        }

        thread->state = OS_THREAD_STATE_EXITED;

        OSRestoreInterrupts(enabled);
        return TRUE;
    }

    OSRestoreInterrupts(enabled);
    return FALSE;
}

void OSDetachThread(OSThread* thread) {
    BOOL enabled;
    OSThread* next;
    OSThread* prev;

    enabled = OSDisableInterrupts();
    thread->flags |= OS_THREAD_DETACHED;

    if (thread->state == OS_THREAD_STATE_MORIBUND) {
        next = thread->nextActive;
        prev = thread->prevActive;

        if (next == NULL) {
            OS_THREAD_QUEUE.tail = prev;
        } else {
            next->prevActive = prev;
        }

        if (prev == NULL) {
            OS_THREAD_QUEUE.head = next;
        } else {
            prev->nextActive = next;
        }

        thread->state = OS_THREAD_STATE_EXITED;
    }

    fn_8031D978(&thread->joinQueue);
    OSRestoreInterrupts(enabled);
}

s32 fn_8031D460(OSThread* thread) {
    BOOL enabled;
    s32 suspend;
    OSThread* iter;
    OSThread* iterPrev;
    OSThread* next;
    OSThread* prev;

    enabled = OSDisableInterrupts();
    suspend = thread->suspend--;

    if (thread->suspend < 0) {
        thread->suspend = 0;
    } else if (thread->suspend == 0) {
        switch (thread->state) {
        case OS_THREAD_STATE_READY:
            thread->priority = fn_8031C934(thread);
            SetRun(thread);
            break;
        case OS_THREAD_STATE_SLEEPING:
            next = thread->next;
            prev = thread->prev;
            if (next == NULL) {
                thread->queue->tail = prev;
            } else {
                next->prev = prev;
            }

            if (prev == NULL) {
                thread->queue->head = next;
            } else {
                prev->next = next;
            }

            thread->priority = fn_8031C934(thread);

            for (iter = thread->queue->head;
                 iter != NULL && iter->priority <= thread->priority;
                 iter = iter->next) {
            }

            if (iter == NULL) {
                iter = thread->queue->tail;
                if (iter == NULL) {
                    thread->queue->head = thread;
                } else {
                    iter->next = thread;
                }
                thread->prev = iter;
                thread->next = NULL;
                thread->queue->tail = thread;
            } else {
                thread->next = iter;
                iterPrev = iter->prev;
                iter->prev = thread;
                thread->prev = iterPrev;

                if (iterPrev == NULL) {
                    thread->queue->head = thread;
                } else {
                    iterPrev->next = thread;
                }
            }

            if (thread->mutex != NULL) {
                UpdatePriority(thread->mutex->thread);
            }
            break;
        default:
            break;
        }

        __OSReschedule();
    }

    OSRestoreInterrupts(enabled);
    return suspend;
}

s32 OSSuspendThread(OSThread* thread) {
    BOOL enabled;
    s32 suspend;
    OSThread* next;
    OSThread* prev;
    OSThread* tail;

    enabled = OSDisableInterrupts();
    suspend = thread->suspend++;

    if (suspend == 0) {
        switch (thread->state) {
        case OS_THREAD_STATE_RUNNING:
            RunQueueHint = TRUE;
            thread->state = OS_THREAD_STATE_READY;
            break;
        case OS_THREAD_STATE_READY:
            UnsetRun(thread);
            break;
        case OS_THREAD_STATE_SLEEPING:
            next = thread->next;
            prev = thread->prev;
            if (next == NULL) {
                thread->queue->tail = prev;
            } else {
                next->prev = prev;
            }

            if (prev == NULL) {
                thread->queue->head = next;
            } else {
                prev->next = next;
            }

            thread->priority = OS_PRIORITY_MAX + 1;

            tail = thread->queue->tail;
            if (tail == NULL) {
                thread->queue->head = thread;
            } else {
                tail->next = thread;
            }

            thread->prev = tail;
            thread->next = NULL;
            thread->queue->tail = thread;
            tail = thread;

            if (thread->mutex != NULL) {
                UpdatePriority(thread->mutex->thread);
            }
            break;
        default:
            break;
        }

        __OSReschedule();
    }

    OSRestoreInterrupts(enabled);
    return suspend;
}

void OSSleepThread(OSThreadQueue* queue) {
    BOOL enabled;
    OSThread* currThread;
    OSThread* iter;
    OSThread* iterPrev;

    enabled = OSDisableInterrupts();
    currThread = OSGetCurrentThread();

    currThread->state = OS_THREAD_STATE_SLEEPING;
    currThread->queue = queue;

    for (iter = queue->head;
         iter != NULL && iter->priority <= currThread->priority;
         iter = iter->next) {
    }

    if (iter == NULL) {
        iter = queue->tail;
        if (iter == NULL) {
            queue->head = currThread;
        } else {
            iter->next = currThread;
        }
        currThread->prev = iter;
        currThread->next = NULL;
        queue->tail = currThread;
    } else {
        currThread->next = iter;
        iterPrev = iter->prev;
        iter->prev = currThread;
        currThread->prev = iterPrev;

        if (iterPrev == NULL) {
            queue->head = currThread;
        } else {
            iterPrev->next = currThread;
        }
    }

    RunQueueHint = TRUE;
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

void fn_8031D978(OSThreadQueue* queue) {
    BOOL enabled;
    OSThread* head;
    OSThread* next;

    enabled = OSDisableInterrupts();

    while (queue->head != NULL) {
        head = queue->head;
        next = head->next;

        if (next == NULL) {
            queue->tail = NULL;
        } else {
            next->prev = NULL;
        }

        queue->head = next;

        head->state = OS_THREAD_STATE_READY;
        if (head->suspend <= 0) {
            SetRun(head);
        }
    }

    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

BOOL OSSetThreadPriority(OSThread* thread, s32 prio) {
    BOOL enabled;

    if (prio < OS_PRIORITY_MIN || prio > OS_PRIORITY_MAX) {
        return FALSE;
    }

    enabled = OSDisableInterrupts();

    if (thread->base != prio) {
        thread->base = prio;
        UpdatePriority(thread);
        __OSReschedule();
    }

    OSRestoreInterrupts(enabled);
    return TRUE;
}

static void SleepAlarmHandler(OSAlarm* alarm, OSContext* ctx) {
#pragma unused(ctx)

    fn_8031D460((OSThread*)OSGetAlarmUserData(alarm));
}

void OSSleepTicks(s64 ticks) {
    BOOL enabled;
    OSAlarm alarm;
    OSThread* thread;

    enabled = OSDisableInterrupts();

    thread = OS_CURRENT_THREAD;
    if (thread == NULL) {
        OSRestoreInterrupts(enabled);
        return;
    }

    OSCreateAlarm(&alarm);
    OSSetAlarmTag(&alarm, (u32)thread);
    OSSetAlarmUserData(&alarm, thread);
    OSSetAlarm(&alarm, ticks, SleepAlarmHandler);

    OSSuspendThread(thread);
    OSCancelAlarm(&alarm);
    OSRestoreInterrupts(enabled);
}

DECOMP_FORCEACTIVE(OSThread_c, IdleThread);

// C conservado de RNEPDA.
void fn_8031C584(void) {

}

s32 fn_8031C81C(void) {
    return *(s32 *)0x800000E4;
}

s32 fn_8031C828(s8 *arg0) {
    s32 var_r3;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2C8);
    var_r3 = 1;
    if ((temp_r0 != 8) && ((s32) temp_r0 != 0)) {
        var_r3 = 0;
    }
    return var_r3 != 0;
}

void fn_8031C8CC(s32 *arg0) {
    s8 *temp_r4;
    s8 *temp_r5;
    s8 *temp_r6;

    temp_r5 = M2C_FIELD(arg0, s8 **, 0x2E0);
    temp_r4 = M2C_FIELD(arg0, s8 **, 0x2DC);
    temp_r6 = M2C_FIELD(arg0, s8 **, 0x2E4);
    if (temp_r5 == NULL) {
        M2C_FIELD(temp_r4, s8 **, 4) = temp_r6;
    } else {
        M2C_FIELD(temp_r5, s8 **, 0x2E4) = temp_r6;
    }
    if (temp_r6 == NULL) {
        M2C_FIELD(temp_r4, s8 **, 0) = temp_r5;
    } else {
        M2C_FIELD(temp_r6, s8 **, 0x2E0) = temp_r5;
    }
    if ((s8 *) M2C_FIELD(temp_r4, s8 **, 0) == NULL) {
        RunQueueBits_8049E340 &= ~(1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0)));
    }
    M2C_FIELD(arg0, s8 **, 0x2DC) = NULL;
}

/*
Decompilation failure in function __OSReschedule:

Cannot find branch target SelectThread
*/

void fn_8031CDB4(void) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    SelectThread(1);
    OSRestoreInterrupts(temp_r31);
}

s32 fn_8031E480(void) {
    return IpcBufferHi_8049E348;
}

s32 fn_8031E488(void) {
    return IpcBufferLo_8049D220;
}

void __OSInitIPCBuffer(void) {
    IpcBufferLo_8049D220 = *(s32 *)0x80003130;
    IpcBufferHi_8049E348 = *(s32 *)0x80003134;
}

// Adaptado de Xenoblade RVL_SDK/src/revolution/os/OSTime.c.
// GetDates conserva su llamada fuera de linea, segun el codigo original.
#include <revolution/OS.h>

#define USEC_MAX 1000
#define MSEC_MAX 1000
#define MONTH_MAX 12
#define WEEK_DAY_MAX 7
#define YEAR_DAY_MAX 365

#define SECS_IN_MIN 60
#define SECS_IN_HOUR (SECS_IN_MIN * 60)
#define SECS_IN_DAY (SECS_IN_HOUR * 24)
#define SECS_IN_YEAR (SECS_IN_DAY * 365)

#define BIAS 0xB2575

// End of each month in standard year
static s32 YearDays[MONTH_MAX] = {0,   31,  59,  90,  120, 151,
                                  181, 212, 243, 273, 304, 334};
// End of each month in leap year
static s32 LeapYearDays[MONTH_MAX] = {0,   31,  60,  91,  121, 152,
                                      182, 213, 244, 274, 305, 335};

//unused

//unused

s64 __OSGetSystemTime(void) {
    BOOL enabled = OSDisableInterrupts();
    s64 time = OSGetTime() + OS_SYSTEM_TIME;
    OSRestoreInterrupts(enabled);
    return time;
}

s64 __OSTimeToSystemTime(s64 time) {
    BOOL enabled = OSDisableInterrupts();
    s64 sysTime = OS_SYSTEM_TIME + time;
    OSRestoreInterrupts(enabled);
    return sysTime;
}

//unused

static BOOL IsLeapYear(s32 year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

static s32 GetYearDays(s32 year, s32 mon) {
    return (IsLeapYear(year) ? LeapYearDays : YearDays)[mon];
}

static s32 GetLeapDays(s32 year) {
    if (year < 1) {
        return 0;
    }
    return (year + 3) / 4 - (year - 1) / 100 + (year - 1) / 400;
}

static void GetDates(s32 days, OSCalendarTime* cal) DECOMP_DONT_INLINE {
    s32 year;
    s32 totalDays;
    s32* p_days;
    s32 month;

    cal->wday = (days + 6) % WEEK_DAY_MAX;

    // WTF??
    for (year = days / YEAR_DAY_MAX;
         days < (totalDays = year * YEAR_DAY_MAX + GetLeapDays(year)); year--) {
        ;
    }
    days -= totalDays;
    cal->year = year;
    cal->yday = days;

    p_days = IsLeapYear(year) ? LeapYearDays : YearDays;
    for (month = MONTH_MAX; days < p_days[--month];) {
        ;
    }
    cal->month = month;
    cal->mday = days - p_days[month] + 1;
}

void OSTicksToCalendarTime(s64 ticks, OSCalendarTime* cal) {
    s32 days, secs;
    s64 d;

    d = ticks % OS_SEC_TO_TICKS(1);
    if (d < 0) {
        d += OS_SEC_TO_TICKS(1);
    }

    cal->usec = OS_TICKS_TO_USEC(d) % USEC_MAX;
    cal->msec = OS_TICKS_TO_MSEC(d) % MSEC_MAX;
    ticks -= d;

    days = (OS_TICKS_TO_SEC(ticks) / SECS_IN_DAY) + BIAS;
    secs = OS_TICKS_TO_SEC(ticks) % SECS_IN_DAY;
    if (secs < 0) {
        days -= 1;
        secs += SECS_IN_DAY;
    }

    GetDates(days, cal);
    cal->hour = secs / 60 / 60;
    cal->min = secs / 60 % 60;
    cal->sec = secs % 60;
}

//unused
s64 OSCalendarTimeToTicks(const OSCalendarTime* cal) {
    s64 seconds;
    s32 month;
    s32 ovMon;
    s32 year;

    ovMon = cal->month / MONTH_MAX;
    month = cal->month - (ovMon * MONTH_MAX);

    if (month < 0) {
        month += MONTH_MAX;
        ovMon--;
    }

    year = cal->year + ovMon;

    // clang-format off
    seconds = (s64)SECS_IN_YEAR * year +
              (s64)SECS_IN_DAY * (cal->mday + GetLeapDays(year) + GetYearDays(year, month) - 1) +
              (s64)SECS_IN_HOUR * cal->hour +
              (s64)SECS_IN_MIN * cal->min +
              cal->sec -
              (s64)0xEB1E1BF80ULL;
    // clang-format on

    return OS_SEC_TO_TICKS(seconds) + OS_MSEC_TO_TICKS((s64)cal->msec) +
           OS_USEC_TO_TICKS((s64)cal->usec);
}

const u8* OSUTF8to32(const u8* utf8, u32* utf32) {
    u32 code;
    u32 full;
    u32 size;
    int i;

    code = *utf8;
    full = 0;
    if (code != 0) {
        utf8++;
    }

    if (!(code & 0x80)) {
        full = code;
        size = 0;
    } else if ((code & 0xE0) == 0xC0) {
        full = code & 0x1F;
        size = 1;
    } else if ((code & 0xF0) == 0xE0) {
        full = code & 0xF;
        size = 2;
    } else if ((code & 0xF8) == 0xF0) {
        full = code & 0x7;
        size = 3;
    } else {
        return NULL;
    }

    for (i = 0; i < size; i++) {
        code = *utf8++;
        full <<= 6;

        if ((code & 0xC0) != 0x80) {
            return NULL;
        }

        full |= code & 0x3F;
    }

    if (full <= 0x7F) {
        if (size != 0) {
            return NULL;
        }
    } else if (full <= 0x7FF) {
        if (size != 1) {
            return NULL;
        }
    } else if (full <= 0xFFFF) {
        if (size != 2) {
            return NULL;
        }
    }

    if (full >= 0xD800 && full <= 0xDFFF) {
        return NULL;
    }

    *utf32 = full;
    return utf8;
}

const wchar_t* OSUTF16to32(const wchar_t* utf16, u32* utf32) {
    wchar_t hi, lo;
    u32 full;

    hi = *utf16;
    if (hi != 0) {
        utf16++;
    }

    if (hi < 0xD800 || hi > 0xDFFF) {
        full = hi;
    } else if (hi <= 0xDBFF) {
        lo = *utf16++;

        if (lo >= 0xDC00 && lo <= 0xDFFF) {
            full = (hi & 0x3FF) << 10 | lo & 0x3FF;
            full += 0x10000;
        } else {
            return NULL;
        }
    } else {
        return NULL;
    }

    *utf32 = full;
    return utf16;
}

extern u16 lbl_803813A0[];
extern u16* lbl_8038CDE0[];

u8 OSUTF32toANSI(u32 utf32) {
    int i;

    if (utf32 > 0xFF) {
        return 0;
    }

    if (utf32 < 0x80 || utf32 > 0x9F) {
        return (u8)utf32;
    }

    if (utf32 >= 0x152 && utf32 <= 0x2122) {
        for (i = 0; i < 32; i++) {
            if (lbl_803813A0[i] == utf32) {
                return (u8)(i + 0x80);
            }
        }
    }

    return 0;
}

wchar_t OSUTF32toSJIS(u32 utf32) {
    if (utf32 >= 0x10000) {
        return 0;
    }

    if (lbl_8038CDE0[(utf32 >> 8) & 0xFF] != NULL) {
        return lbl_8038CDE0[(utf32 >> 8) & 0xFF][utf32 & 0xFF];
    }

    return 0;
}

void OSCancelThread(OSThread* thread);
s64 OSGetTime(void);
s64 __OSGetSystemTime(void);

