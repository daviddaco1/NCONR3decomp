#include <revolution/AX.h>
#include <revolution/OS.h>

#define STACK_MAX (AX_PRIORITY_MAX + 1)

static AXVPB* __AXStackHead[STACK_MAX];
static AXVPB* __AXStackTail[STACK_MAX];
static AXVPB* __AXCallbackStack = NULL;

AXVPB* __AXGetStackHead(u32 prio) {
    return __AXStackHead[prio];
}

void __AXServiceCallbackStack(void) {
    AXVPB* it = __AXPopCallbackStack();

    while (it != NULL) {
        if (it->priority > AX_PRIORITY_FREE) {
            if (it->callback != NULL) {
                it->callback(it);
            }

            __AXRemoveFromStack(it);
            __AXPushFreeStack(it);
        }

        it = __AXPopCallbackStack();
    }
}

void __AXInitVoiceStacks(void) {
    u32 prio;

    __AXCallbackStack = NULL;

    for (prio = 0; prio < STACK_MAX; prio++) {
        __AXStackHead[prio] = __AXStackTail[prio] = NULL;
    }
}

// __AXAllocInit: definicion C reemplazada por asm (ver abajo)
void __AXAllocInit(void);


void __AXPushFreeStack(AXVPB* vpb) {
    vpb->next = __AXStackHead[AX_PRIORITY_FREE];
    __AXStackHead[AX_PRIORITY_FREE] = vpb;
    vpb->priority = AX_PRIORITY_FREE;
}

AXVPB* __AXPopFreeStack(void) {
    AXVPB* head = __AXStackHead[AX_PRIORITY_FREE];

    if (head != NULL) {
        __AXStackHead[AX_PRIORITY_FREE] = head->next;
    }

    return head;
}

void __AXPushCallbackStack(AXVPB* vpb) {
    vpb->next1 = __AXCallbackStack;
    __AXCallbackStack = vpb;
}

AXVPB* __AXPopCallbackStack(void) {
    AXVPB* head = __AXCallbackStack;

    if (head != NULL) {
        __AXCallbackStack = head->next1;
    }

    return head;
}

void __AXRemoveFromStack(AXVPB* vpb) {
    u32 prio = vpb->priority;
    AXVPB* head = __AXStackHead[prio];
    AXVPB* tail = __AXStackTail[prio];

    if (head == tail) {
        __AXStackTail[prio] = NULL;
        __AXStackHead[prio] = NULL;
    } else if (vpb == head) {
        __AXStackHead[prio] = vpb->next;
        __AXStackHead[prio]->prev = NULL;
    } else if (vpb == tail) {
        __AXStackTail[prio] = vpb->prev;
        __AXStackTail[prio]->next = NULL;
    } else {
        head = vpb->prev;
        tail = vpb->next;
        head->next = tail;
        tail->prev = head;
    }
}

void __AXPushStackHead(AXVPB* vpb, u32 prio) {
    vpb->next = __AXStackHead[prio];
    vpb->prev = NULL;

    if (vpb->next != NULL) {
        __AXStackHead[prio]->prev = vpb;
        __AXStackHead[prio] = vpb;
    } else {
        __AXStackTail[prio] = vpb;
        __AXStackHead[prio] = vpb;
    }

    vpb->priority = prio;
}

AXVPB* __AXPopStackFromBottom(u32 prio) {
    AXVPB* vpb = NULL;

    if (__AXStackHead[prio] != NULL) {
        if (__AXStackHead[prio] == __AXStackTail[prio]) {
            vpb = __AXStackHead[prio];
            __AXStackTail[prio] = NULL;
            __AXStackHead[prio] = NULL;
        } else if (__AXStackTail[prio] != NULL) {
            vpb = __AXStackTail[prio];
            __AXStackTail[prio] = vpb->prev;
            __AXStackTail[prio]->next = NULL;
        }
    }

    return vpb;
}

void AXFreeVoice(AXVPB* vpb) {
    BOOL enabled = OSDisableInterrupts();

    __AXRemoveFromStack(vpb);

    if (vpb->pb.state == AX_VOICE_RUN) {
        vpb->depop = TRUE;
    }

    __AXSetPBDefault(vpb);
    __AXPushFreeStack(vpb);

    OSRestoreInterrupts(enabled);
}

AXVPB* AXAcquireVoice(u32 prio, AXVoiceCallback callback, u32 userContext) {
    BOOL enabled = OSDisableInterrupts();
    AXVPB* vpb = __AXPopFreeStack();

    if (vpb == NULL) {
        u32 i;

        for (i = AX_PRIORITY_MIN; i < prio; i++) {
            vpb = __AXPopStackFromBottom(i);

            if (vpb != NULL) {
                if (vpb->pb.state == AX_VOICE_RUN) {
                    vpb->depop = TRUE;
                }

                if (vpb->callback != NULL) {
                    vpb->callback(vpb);
                }

                break;
            }
        }
    }

    if (vpb != NULL) {
        __AXPushStackHead(vpb, prio);
        vpb->callback = callback;
        vpb->userContext = userContext;
        __AXSetPBDefault(vpb);
    }

    OSRestoreInterrupts(enabled);
    return vpb;
}

void AXSetVoicePriority(AXVPB* vpb, u32 prio) {
    BOOL enabled = OSDisableInterrupts();

    __AXRemoveFromStack(vpb);
    __AXPushStackHead(vpb, prio);

    OSRestoreInterrupts(enabled);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DE98;
extern u8 lbl_80411DA8[];
extern u8 lbl_80411E28[];
void __AXAllocInit(void);

// asm_to_cpp: __AXAllocInit
asm void __AXAllocInit(void) {
    nofralloc
    li r3, 0x0
    lis r4, lbl_80411E28@ha
    lis r5, lbl_80411DA8@ha
    li r0, 0x2
    stw r3, lbl_8049DE98
    addi r4, r4, lbl_80411E28@l
    addi r5, r5, lbl_80411DA8@l
    mtctr r0
lbl_8029BD54:
    stw r3, 0x0(r4)
    stw r3, 0x0(r5)
    stw r3, 0x4(r4)
    stw r3, 0x4(r5)
    stw r3, 0x8(r4)
    stw r3, 0x8(r5)
    stw r3, 0xc(r4)
    stw r3, 0xc(r5)
    stw r3, 0x10(r4)
    stw r3, 0x10(r5)
    stw r3, 0x14(r4)
    stw r3, 0x14(r5)
    stw r3, 0x18(r4)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r4)
    stw r3, 0x1c(r5)
    stw r3, 0x20(r4)
    stw r3, 0x20(r5)
    stw r3, 0x24(r4)
    stw r3, 0x24(r5)
    stw r3, 0x28(r4)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r4)
    stw r3, 0x2c(r5)
    stw r3, 0x30(r4)
    stw r3, 0x30(r5)
    stw r3, 0x34(r4)
    stw r3, 0x34(r5)
    stw r3, 0x38(r4)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r4)
    addi r4, r4, 0x40
    stw r3, 0x3c(r5)
    addi r5, r5, 0x40
    bdnz lbl_8029BD54
    blr
}
