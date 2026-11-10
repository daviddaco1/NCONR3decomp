#include <revolution/DVD.h>

typedef struct DVDWaitingQueue {
    struct DVDWaitingQueue* next; // at 0x0
    struct DVDWaitingQueue* prev; // at 0x4
} DVDWaitingQueue;

static DVDWaitingQueue WaitingQueue[DVD_PRIO_MAX];

void __DVDClearWaitingQueue(void) {
    u32 i;

    for (i = 0; i < DVD_PRIO_MAX; i++) {
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[i];
        head->next = head;
        head->prev = head;
    }
}

BOOL __DVDPushWaitingQueue(s32 prio, DVDCommandBlock* block) {
    BOOL enabled = OSDisableInterrupts();
    DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[prio];

    head->prev->next = block;
    block->prev = head->prev;
    block->next = head;
    head->prev = block;

    OSRestoreInterrupts(enabled);
    return TRUE;
}

static DVDCommandBlock* PopWaitingQueuePrio(s32 prio) {
    BOOL enabled = OSDisableInterrupts();

    DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[prio];
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
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[i];

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
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[i];

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
        DVDCommandBlock* head = (DVDCommandBlock*)&WaitingQueue[i];
        DVDCommandBlock* block = head->next;

        if (block != head) {
            OSRestoreInterrupts(enabled);
            return block;
        }
    }

    OSRestoreInterrupts(enabled);
    return NULL;
}

// __DVDDequeueWaitingQueue: definicion C reemplazada por asm (ver abajo)
BOOL __DVDDequeueWaitingQueue(const DVDCommandBlock* block);


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 WaitingQueue_80460F30[];
BOOL __DVDDequeueWaitingQueue(const DVDCommandBlock* block);

// asm_to_cpp: __DVDDequeueWaitingQueue
asm BOOL __DVDDequeueWaitingQueue(const DVDCommandBlock* block) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, WaitingQueue_80460F30@ha
    li r0, 0x4
    addi r4, r4, WaitingQueue_80460F30@l
    mtctr r0
lbl_802D5BF8:
    lwz r31, 0x0(r4)
    cmplw r31, r4
    beq lbl_802D5C10
    bl OSRestoreInterrupts
    mr r3, r31
    b lbl_802D5C20
lbl_802D5C10:
    addi r4, r4, 0x8
    bdnz lbl_802D5BF8
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_802D5C20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
