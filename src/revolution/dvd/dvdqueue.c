#include <revolution/DVD.h>

typedef struct DVDWaitingQueue {
    struct DVDWaitingQueue* next; // at 0x0
    struct DVDWaitingQueue* prev; // at 0x4
} DVDWaitingQueue;

extern DVDWaitingQueue WaitingQueue_80460F30[DVD_PRIO_MAX];

void __DVDClearWaitingQueue(void) {
    u32 i;

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[i];
        head->next = head;
        head->prev = head;
    }
}

BOOL __DVDPushWaitingQueue(s32 prio, DVDCommandBlock* block) {
    BOOL enabled = OSDisableInterrupts();
    DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[prio];

    head->prev->next = block;
    block->prev = head->prev;
    block->next = head;
    head->prev = block;

    OSRestoreInterrupts(enabled);
    return TRUE;
}

static DVDCommandBlock* PopWaitingQueuePrio(s32 prio) {
    BOOL enabled = OSDisableInterrupts();

    DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[prio];
    DVDCommandBlock* block = head->next;

    head->next = block->next;
    block->next->prev = head;

    OSRestoreInterrupts(enabled);

    block->next = NULL;
    block->prev = NULL;
    return block;
}

DVDCommandBlock* __DVDPopWaitingQueue(void) {
    u32 i;
    BOOL enabled = OSDisableInterrupts();

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[i];

        if (head->next != head) {
            OSRestoreInterrupts(enabled);
            return PopWaitingQueuePrio(i);
        }
    }

    OSRestoreInterrupts(enabled);
    return NULL;
}

BOOL __DVDCheckWaitingQueue(void) {
    u32 i;
    BOOL enabled = OSDisableInterrupts();

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[i];

        if (head->next != head) {
            OSRestoreInterrupts(enabled);
            return TRUE;
        }
    }

    OSRestoreInterrupts(enabled);
    return FALSE;
}

DVDCommandBlock* __DVDGetNextWaitingQueue(void) {
    u32 i;
    BOOL enabled = OSDisableInterrupts();

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[i];
        DVDCommandBlock* block = head->next;

        if (block != head) {
            OSRestoreInterrupts(enabled);
            return block;
        }
    }

    OSRestoreInterrupts(enabled);
    return NULL;
}

// __DVDDequeueWaitingQueue: consulta equivalente al DOL al final del archivo.

// El nombre heredado sugiere dequeue; el DOL solo consulta la primera entrada.
BOOL __DVDDequeueWaitingQueue(const DVDCommandBlock* unusedBlock) {
    u32 i;
    BOOL enabled = OSDisableInterrupts();

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue_80460F30[i];
        DVDCommandBlock* block = head->next;

        if (block != head) {
            OSRestoreInterrupts(enabled);
            return (BOOL)block;
        }
    }

    OSRestoreInterrupts(enabled);
    return 0;
}
