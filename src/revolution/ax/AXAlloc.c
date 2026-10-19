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


void __AXAllocQuit(void) {
    __AXInitVoiceStacks();
}

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

// AXAcquireVoice: definicion C reemplazada por asm (ver abajo)


// AXSetVoicePriority: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DE98;
extern u8 lbl_80411DA8[];
extern u8 lbl_80411E28[];
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8029BC84();

// asm_to_cpp: fn_8029BC84
asm void fn_8029BC84() {
    nofralloc
    li r3, 0x0
    lis r4, lbl_80411E28@ha
    lis r5, lbl_80411DA8@ha
    li r0, 0x2
    stw r3, lbl_8049DE98
    addi r4, r4, lbl_80411E28@l
    addi r5, r5, lbl_80411DA8@l
    mtctr r0
lbl_8029BCA4:
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
    bdnz lbl_8029BCA4
    blr
}

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

// asm_to_cpp: AXAcquireVoice
asm AXVPB* AXAcquireVoice(u32 prio, AXVoiceCallback callback, u32 userContext) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    lis r4, lbl_80411DA8@ha
    mr r31, r3
    lwz r30, lbl_80411DA8@l(r4)
    cmpwi r30, 0x0
    beq lbl_8029BF50
    lwz r0, 0x0(r30)
    stw r0, lbl_80411DA8@l(r4)
lbl_8029BF50:
    cmpwi r30, 0x0
    bne lbl_8029C00C
    lis r3, lbl_80411DA8@ha
    lis r4, lbl_80411E28@ha
    addi r3, r3, lbl_80411DA8@l
    subi r0, r27, 0x1
    addi r4, r4, lbl_80411E28@l
    addi r5, r3, 0x4
    li r3, 0x0
    addi r6, r4, 0x4
    mtctr r0
    cmplwi r27, 0x1
    ble lbl_8029C00C
lbl_8029BF84:
    lwz r0, 0x0(r5)
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_8029BFC8
    lwz r7, 0x0(r6)
    cmplw r0, r7
    bne lbl_8029BFB0
    stw r3, 0x0(r6)
    mr r30, r0
    stw r3, 0x0(r5)
    b lbl_8029BFC8
lbl_8029BFB0:
    cmpwi r7, 0x0
    beq lbl_8029BFC8
    lwz r4, 0x4(r7)
    mr r30, r7
    stw r4, 0x0(r6)
    stw r3, 0x0(r4)
lbl_8029BFC8:
    cmpwi r30, 0x0
    beq lbl_8029C000
    lhz r0, 0x38(r30)
    cmplwi r0, 0x1
    bne lbl_8029BFE4
    li r0, 0x1
    stw r0, 0x20(r30)
lbl_8029BFE4:
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8029C00C
    mr r3, r30
    mtctr r12
    bctrl
    b lbl_8029C00C
lbl_8029C000:
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    bdnz lbl_8029BF84
lbl_8029C00C:
    cmpwi r30, 0x0
    beq lbl_8029C06C
    lis r4, lbl_80411DA8@ha
    slwi r5, r27, 2
    addi r4, r4, lbl_80411DA8@l
    li r0, 0x0
    lwzx r3, r4, r5
    stw r3, 0x0(r30)
    cmpwi r3, 0x0
    stw r0, 0x4(r30)
    beq lbl_8029C048
    lwzx r3, r4, r5
    stw r30, 0x4(r3)
    stwx r30, r4, r5
    b lbl_8029C058
lbl_8029C048:
    lis r3, lbl_80411E28@ha
    stwx r30, r4, r5
    addi r3, r3, lbl_80411E28@l
    stwx r30, r3, r5
lbl_8029C058:
    stw r27, 0xc(r30)
    mr r3, r30
    stw r28, 0x10(r30)
    stw r29, 0x14(r30)
    bl __AXSetPBDefault
lbl_8029C06C:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: AXSetVoicePriority
asm void AXSetVoicePriority(AXVPB* vpb, u32 prio) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r29
    bl __AXRemoveFromStack
    lis r4, lbl_80411DA8@ha
    slwi r5, r30, 2
    addi r4, r4, lbl_80411DA8@l
    li r0, 0x0
    lwzx r3, r4, r5
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    stw r0, 0x4(r29)
    beq lbl_8029C0F4
    lwzx r3, r4, r5
    stw r29, 0x4(r3)
    stwx r29, r4, r5
    b lbl_8029C104
lbl_8029C0F4:
    lis r3, lbl_80411E28@ha
    stwx r29, r4, r5
    addi r3, r3, lbl_80411E28@l
    stwx r29, r3, r5
lbl_8029C104:
    stw r30, 0xc(r29)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
