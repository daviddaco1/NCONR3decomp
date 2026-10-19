#include <revolution/DVD.h>

typedef struct DVDWaitingQueue {
    struct DVDWaitingQueue* next; // at 0x0
    struct DVDWaitingQueue* prev; // at 0x4
} DVDWaitingQueue;

static DVDWaitingQueue WaitingQueue[DVD_PRIO_MAX];

// __DVDClearWaitingQueue: definicion C reemplazada por asm (ver abajo)


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

// __DVDPopWaitingQueue: definicion C reemplazada por asm (ver abajo)


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


//unused
void __DVDIsBlockInWaitingQueue(){
}

//unused
void DVDDumpWaitingQueue(){
}


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 WaitingQueue_80460F30[];

// asm_to_cpp: __DVDClearWaitingQueue
asm void __DVDClearWaitingQueue(void) {
    nofralloc
    lis r6, WaitingQueue_80460F30@ha
    addi r6, r6, WaitingQueue_80460F30@l
    addi r5, r6, 0x8
    stw r6, 0x0(r6)
    addi r4, r6, 0x10
    addi r3, r6, 0x18
    stw r6, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r4, 0x10(r6)
    stw r4, 0x14(r6)
    stw r3, 0x18(r6)
    stw r3, 0x1c(r6)
    blr
}

// asm_to_cpp: __DVDPopWaitingQueue
asm DVDCommandBlock* __DVDPopWaitingQueue(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, WaitingQueue_80460F30@ha
    li r0, 0x4
    li r31, 0x0
    addi r4, r4, WaitingQueue_80460F30@l
    mtctr r0
lbl_802D5B04:
    lwz r0, 0x0(r4)
    cmplw r0, r4
    beq lbl_802D5B54
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    lis r4, WaitingQueue_80460F30@ha
    slwi r0, r31, 3
    addi r4, r4, WaitingQueue_80460F30@l
    lwzx r31, r4, r0
    add r5, r4, r0
    lwz r0, 0x0(r31)
    stw r0, 0x0(r5)
    lwz r4, 0x0(r31)
    stw r5, 0x4(r4)
    bl OSRestoreInterrupts
    li r0, 0x0
    mr r3, r31
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    b lbl_802D5B68
lbl_802D5B54:
    addi r4, r4, 0x8
    addi r31, r31, 0x1
    bdnz lbl_802D5B04
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_802D5B68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

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
