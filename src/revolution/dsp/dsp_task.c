#include <revolution/DSP.h>
#include <revolution/OS.h>

/**
 * Commands to the DSP sent via the mailbox.
 */
typedef enum {
    MAIL_SET_IRAM_MMEM_ADDR = 0x80F3A001,
    MAIL_SET_IRAM_DSP_ADDR = 0x80F3C002,
    MAIL_SET_IRAM_LENGTH = 0x80F3A002,
    MAIL_SET_ARAM_MMEM_ADDR = 0x80F3B002,
    MAIL_SET_START_VECTOR = 0x80F3D001
} DSPMailCmd;

/**
 * DSP microcodes (from Dolphin Emulator)
 */
typedef enum {
    TASK_MAIL_MASK = 0xFFFF0000,
    TASK_MAIL_TO_CPU = 0xDCD10000,
    TASK_MAIL_TO_DSP = 0xCDD10000,

    DSP_INIT = (TASK_MAIL_TO_CPU | 0x0000),
    DSP_RESUME = (TASK_MAIL_TO_CPU | 0x0001),
    DSP_YIELD = (TASK_MAIL_TO_CPU | 0x0002),
    DSP_DONE = (TASK_MAIL_TO_CPU | 0x0003),
    DSP_SYNC = (TASK_MAIL_TO_CPU | 0x0004),
    DSP_FRAME_END = (TASK_MAIL_TO_CPU | 0x0005),

    MAIL_RESUME = (TASK_MAIL_TO_DSP | 0x0000),
    MAIL_NEW_UCODE = (TASK_MAIL_TO_DSP | 0x0001),
    MAIL_RESET = (TASK_MAIL_TO_DSP | 0x0002),
    MAIL_CONTINUE = (TASK_MAIL_TO_DSP | 0x0003)
} DSPUCode;

DSPTask* __DSP_curr_task;
DSPTask* __DSP_first_task;
DSPTask* __DSP_last_task;
DSPTask* __DSP_tmp_task;
DSPTask* __DSP_rude_task;
BOOL __DSP_rude_task_pending;

void __DSPHandler(s32 intr, OSContext* ctx) {
#pragma unused(intr)

    OSContext tmpCtx;
    u32 ucode;

    DSP_HW_REGS[DSP_CSR] =
        (DSP_HW_REGS[DSP_CSR] & ~(DSP_CSR_AIDINT | DSP_CSR_ARINT)) |
        DSP_CSR_DSPINT;

    OSClearContext(&tmpCtx);
    OSSetCurrentContext(&tmpCtx);

    while (!DSPCheckMailFromDSP()) {
        ;
    }
    ucode = (u32)DSPReadMailFromDSP();

    if ((__DSP_curr_task->flags & DSP_TASK_CANCELED) && ucode == DSP_YIELD) {
        ucode = DSP_DONE;
    }

    switch (ucode) {
    case DSP_INIT:
        __DSP_curr_task->state = DSP_TASK_STATE_1;
        if (__DSP_curr_task->initCallback != NULL) {
            __DSP_curr_task->initCallback(__DSP_curr_task);
        }
        break;
    case DSP_RESUME:
        __DSP_curr_task->state = DSP_TASK_STATE_1;
        if (__DSP_curr_task->resumeCallback != NULL) {
            __DSP_curr_task->resumeCallback(__DSP_curr_task);
        }
        break;
    case DSP_YIELD:
        if (__DSP_rude_task_pending) {
            if (__DSP_curr_task == __DSP_rude_task) {
                DSP_SEND_MAIL_SYNC(MAIL_CONTINUE);

                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = FALSE;

                if (__DSP_curr_task->resumeCallback != NULL) {
                    __DSP_curr_task->resumeCallback(__DSP_curr_task);
                }
            } else {
                DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

                __DSP_exec_task(__DSP_curr_task, __DSP_rude_task);

                __DSP_curr_task->state = DSP_TASK_STATE_2;
                __DSP_curr_task = __DSP_rude_task;

                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = FALSE;
            }
        } else if (__DSP_curr_task->next == NULL) {
            if (__DSP_curr_task == __DSP_first_task) {
                DSP_SEND_MAIL_SYNC(MAIL_CONTINUE);

                if (__DSP_curr_task->resumeCallback != NULL) {
                    __DSP_curr_task->resumeCallback(__DSP_curr_task);
                }
            } else {
                DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

                __DSP_exec_task(__DSP_curr_task, __DSP_first_task);

                __DSP_curr_task->state = DSP_TASK_STATE_2;
                __DSP_curr_task = __DSP_first_task;
            }
        } else {
            DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

            __DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);

            __DSP_curr_task->state = DSP_TASK_STATE_2;
            __DSP_curr_task = __DSP_curr_task->next;
        }
        break;
    case DSP_DONE:
        if (__DSP_rude_task_pending) {
            if (__DSP_curr_task != __DSP_rude_task) {
                if (__DSP_curr_task->doneCallback != NULL) {
                    __DSP_curr_task->doneCallback(__DSP_curr_task);
                }

                DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

                __DSP_exec_task(NULL, __DSP_rude_task);
                __DSP_remove_task(__DSP_curr_task);

                __DSP_curr_task = __DSP_rude_task;
                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = FALSE;
                break;
            }

            __DSP_rude_task = NULL;
            __DSP_rude_task_pending = FALSE;
        }

        if (__DSP_curr_task->next == NULL) {
            if (__DSP_curr_task == __DSP_first_task) {
                if (__DSP_curr_task->doneCallback != NULL) {
                    __DSP_curr_task->doneCallback(__DSP_curr_task);
                }

                DSP_SEND_MAIL_SYNC(MAIL_RESET);

                __DSP_curr_task->state = DSP_TASK_STATE_3;
                __DSP_remove_task(__DSP_curr_task);

            } else {
                if (__DSP_curr_task->doneCallback != NULL) {
                    __DSP_curr_task->doneCallback(__DSP_curr_task);
                }

                DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

                __DSP_curr_task->state = DSP_TASK_STATE_3;
                __DSP_exec_task(NULL, __DSP_first_task);
                __DSP_curr_task = __DSP_first_task;
                __DSP_remove_task(__DSP_last_task);
            }
        } else {
            if (__DSP_curr_task->doneCallback != NULL) {
                __DSP_curr_task->doneCallback(__DSP_curr_task);
            }

            DSP_SEND_MAIL_SYNC(MAIL_NEW_UCODE);

            __DSP_curr_task->state = DSP_TASK_STATE_3;
            __DSP_exec_task(NULL, __DSP_curr_task->next);
            __DSP_curr_task = __DSP_curr_task->next;
            __DSP_remove_task(__DSP_curr_task->prev);
        }
        break;
    case DSP_SYNC:
        if (__DSP_curr_task->requestCallback != NULL) {
            __DSP_curr_task->requestCallback(__DSP_curr_task);
        }
        break;
    }

    OSClearContext(&tmpCtx);
    OSSetCurrentContext(ctx);
}

void __DSP_exec_task(DSPTask* task1, DSPTask* task2) {
    if (task1 != NULL) {
        DSP_SEND_MAIL_SYNC(task1->dramMmemAddr);
        DSP_SEND_MAIL_SYNC(task1->dramMmemLen);
        DSP_SEND_MAIL_SYNC(task1->dramDspAddr);
    } else {
        DSP_SEND_MAIL_SYNC(0);
        DSP_SEND_MAIL_SYNC(0);
        DSP_SEND_MAIL_SYNC(0);
    }

    DSP_SEND_MAIL_SYNC(task2->iramMmemAddr);
    DSP_SEND_MAIL_SYNC(task2->iramMmemLen);
    DSP_SEND_MAIL_SYNC(task2->iramDspAddr);

    if (task2->state == DSP_TASK_STATE_0) {
        DSP_SEND_MAIL_SYNC(task2->startVector);
        DSP_SEND_MAIL_SYNC(0);
        DSP_SEND_MAIL_SYNC(0);
        DSP_SEND_MAIL_SYNC(0);
    } else {
        DSP_SEND_MAIL_SYNC(task2->resumeVector);
        DSP_SEND_MAIL_SYNC(task2->dramMmemAddr);
        DSP_SEND_MAIL_SYNC(task2->dramMmemLen);
        DSP_SEND_MAIL_SYNC(task2->dramDspAddr);
    }
}

void __DSP_boot_task(DSPTask* task) {
    volatile DSPMail mail;

    // Sync with DSP
    while (!DSPCheckMailFromDSP()) {
        ;
    }
    mail = DSPReadMailFromDSP();

    // Send IRAM MMEM address
    DSP_SEND_MAIL_SYNC(MAIL_SET_IRAM_MMEM_ADDR);
    DSP_SEND_MAIL_SYNC(task->iramMmemAddr);

    // Send IRAM DSP address
    DSP_SEND_MAIL_SYNC(MAIL_SET_IRAM_DSP_ADDR);
    DSP_SEND_MAIL_SYNC(task->iramDspAddr & 0xFFFF);

    // Send IRAM length
    DSP_SEND_MAIL_SYNC(MAIL_SET_IRAM_LENGTH);
    DSP_SEND_MAIL_SYNC(task->iramMmemLen);

    // Send ARAM MMEM address(?)
    DSP_SEND_MAIL_SYNC(MAIL_SET_ARAM_MMEM_ADDR);
    DSP_SEND_MAIL_SYNC(NULL);

    // Send start vector
    DSP_SEND_MAIL_SYNC(MAIL_SET_START_VECTOR);
    DSP_SEND_MAIL_SYNC(task->startVector);

    __DSP_debug_printf("DSP is booting task: 0x%08X\n", task);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n",
                       task->iramMmemAddr);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n",
                       task->iramDspAddr);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n",
                       task->iramMmemLen);
    __DSP_debug_printf("__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n",
                       task->dramMmemLen);
    __DSP_debug_printf("__DSP_boot_task()  : Start Vector  : 0x%08X\n",
                       task->startVector);
}

// __DSP_insert_task: definicion C reemplazada por asm (ver abajo)


//unused
void __DSP_add_task(DSPTask* task){
}

// __DSP_remove_task: definicion C reemplazada por asm (ver abajo)


DECOMP_FORCEACTIVE(dsp_task_c,
                   "__DSP_add_task() : Added task    : 0x%08X\n");

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E018;
extern float lbl_8049E01C;
extern float lbl_8049E024;
extern float lbl_8049E028;
extern float lbl_8049E02C;
extern void DSPSendMailToDSP();
extern void fn_802CFC8C();

// asm_to_cpp: fn_802CFC8C
asm void fn_802CFC8C() {
    nofralloc
    stwu r1, -0x2e0(r1)
    mflr r0
    lis r6, 0xcc00
    stw r0, 0x2e4(r1)
    li r0, -0x29
    addi r3, r1, 0x8
    stw r31, 0x2dc(r1)
    mr r31, r4
    lhz r5, 0x500a(r6)
    and r0, r5, r0
    ori r0, r0, 0x80
    sth r0, 0x500a(r6)
    bl OSClearContext
    addi r3, r1, 0x8
    bl OSSetCurrentContext
lbl_802CFCC8:
    bl DSPCheckMailFromDSP
    cmpwi r3, 0x0
    beq lbl_802CFCC8
    bl DSPReadMailFromDSP
    lwz r5, lbl_8049E02C
    lwz r0, 0x8(r5)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802CFCFC
    addis r0, r3, 0x232f
    cmplwi r0, 0x2
    bne lbl_802CFCFC
    lis r3, 0xdcd1
    addi r3, r3, 0x3
lbl_802CFCFC:
    lis r4, 0xdcd1
    addi r0, r4, 0x2
    cmpw r3, r0
    beq lbl_802CFD7C
    bge lbl_802CFD20
    cmpw r3, r4
    beq lbl_802CFD34
    bge lbl_802CFD58
    b lbl_802D009C
lbl_802CFD20:
    addi r0, r4, 0x4
    cmpw r3, r0
    beq lbl_802D0084
    bge lbl_802D009C
    b lbl_802CFEE4
lbl_802CFD34:
    li r0, 0x1
    stw r0, 0x0(r5)
    lwz r3, lbl_8049E02C
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_802D009C
    mtctr r12
    bctrl
    b lbl_802D009C
lbl_802CFD58:
    li r0, 0x1
    stw r0, 0x0(r5)
    lwz r3, lbl_8049E02C
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_802D009C
    mtctr r12
    bctrl
    b lbl_802D009C
lbl_802CFD7C:
    lwz r0, lbl_8049E018
    cmpwi r0, 0x0
    beq lbl_802CFE1C
    lwz r0, lbl_8049E01C
    cmplw r5, r0
    bne lbl_802CFDD4
    lis r3, 0xcdd1
    addi r3, r3, 0x3
    bl DSPSendMailToDSP
lbl_802CFDA0:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFDA0
    li r0, 0x0
    lwz r3, lbl_8049E02C
    stw r0, lbl_8049E01C
    stw r0, lbl_8049E018
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_802D009C
    mtctr r12
    bctrl
    b lbl_802D009C
lbl_802CFDD4:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802CFDE0:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFDE0
    lwz r3, lbl_8049E02C
    lwz r4, lbl_8049E01C
    bl __DSP_exec_task
    lwz r3, lbl_8049E02C
    li r4, 0x2
    li r0, 0x0
    stw r4, 0x0(r3)
    lwz r3, lbl_8049E01C
    stw r0, lbl_8049E018
    stw r3, lbl_8049E02C
    stw r0, lbl_8049E01C
    b lbl_802D009C
lbl_802CFE1C:
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    bne lbl_802CFEA4
    lwz r0, lbl_8049E028
    cmplw r5, r0
    bne lbl_802CFE68
    lis r3, 0xcdd1
    addi r3, r3, 0x3
    bl DSPSendMailToDSP
lbl_802CFE40:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFE40
    lwz r3, lbl_8049E02C
    lwz r12, 0x2c(r3)
    cmpwi r12, 0x0
    beq lbl_802D009C
    mtctr r12
    bctrl
    b lbl_802D009C
lbl_802CFE68:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802CFE74:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFE74
    lwz r3, lbl_8049E02C
    lwz r4, lbl_8049E028
    bl __DSP_exec_task
    lwz r3, lbl_8049E02C
    li r0, 0x2
    stw r0, 0x0(r3)
    lwz r0, lbl_8049E028
    stw r0, lbl_8049E02C
    b lbl_802D009C
lbl_802CFEA4:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802CFEB0:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFEB0
    lwz r3, lbl_8049E02C
    lwz r4, 0x38(r3)
    bl __DSP_exec_task
    lwz r3, lbl_8049E02C
    li r0, 0x2
    stw r0, 0x0(r3)
    lwz r3, lbl_8049E02C
    lwz r0, 0x38(r3)
    stw r0, lbl_8049E02C
    b lbl_802D009C
lbl_802CFEE4:
    lwz r0, lbl_8049E018
    cmpwi r0, 0x0
    beq lbl_802CFF64
    lwz r0, lbl_8049E01C
    cmplw r5, r0
    beq lbl_802CFF58
    lwz r12, 0x30(r5)
    cmpwi r12, 0x0
    beq lbl_802CFF14
    mr r3, r5
    mtctr r12
    bctrl
lbl_802CFF14:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802CFF20:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFF20
    lwz r4, lbl_8049E01C
    li r3, 0x0
    bl __DSP_exec_task
    lwz r3, lbl_8049E02C
    bl __DSP_remove_task
    lwz r3, lbl_8049E01C
    li r0, 0x0
    stw r0, lbl_8049E018
    stw r3, lbl_8049E02C
    stw r0, lbl_8049E01C
    b lbl_802D009C
lbl_802CFF58:
    li r0, 0x0
    stw r0, lbl_8049E01C
    stw r0, lbl_8049E018
lbl_802CFF64:
    lwz r0, 0x38(r5)
    cmpwi r0, 0x0
    bne lbl_802D0020
    lwz r0, lbl_8049E028
    cmplw r5, r0
    bne lbl_802CFFC4
    lwz r12, 0x30(r5)
    cmpwi r12, 0x0
    beq lbl_802CFF94
    mr r3, r5
    mtctr r12
    bctrl
lbl_802CFF94:
    lis r3, 0xcdd1
    addi r3, r3, 0x2
    bl DSPSendMailToDSP
lbl_802CFFA0:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFFA0
    lwz r3, lbl_8049E02C
    li r0, 0x3
    stw r0, 0x0(r3)
    lwz r3, lbl_8049E02C
    bl __DSP_remove_task
    b lbl_802D009C
lbl_802CFFC4:
    lwz r12, 0x30(r5)
    cmpwi r12, 0x0
    beq lbl_802CFFDC
    mr r3, r5
    mtctr r12
    bctrl
lbl_802CFFDC:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802CFFE8:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802CFFE8
    lwz r4, lbl_8049E02C
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x0(r4)
    lwz r4, lbl_8049E028
    bl __DSP_exec_task
    lwz r0, lbl_8049E028
    lwz r3, lbl_8049E024
    stw r0, lbl_8049E02C
    bl __DSP_remove_task
    b lbl_802D009C
lbl_802D0020:
    lwz r12, 0x30(r5)
    cmpwi r12, 0x0
    beq lbl_802D0038
    mr r3, r5
    mtctr r12
    bctrl
lbl_802D0038:
    lis r3, 0xcdd1
    addi r3, r3, 0x1
    bl DSPSendMailToDSP
lbl_802D0044:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_802D0044
    lwz r4, lbl_8049E02C
    li r0, 0x3
    li r3, 0x0
    stw r0, 0x0(r4)
    lwz r4, lbl_8049E02C
    lwz r4, 0x38(r4)
    bl __DSP_exec_task
    lwz r3, lbl_8049E02C
    lwz r3, 0x38(r3)
    stw r3, lbl_8049E02C
    lwz r3, 0x3c(r3)
    bl __DSP_remove_task
    b lbl_802D009C
lbl_802D0084:
    lwz r12, 0x34(r5)
    cmpwi r12, 0x0
    beq lbl_802D009C
    mr r3, r5
    mtctr r12
    bctrl
lbl_802D009C:
    addi r3, r1, 0x8
    bl OSClearContext
    mr r3, r31
    bl OSSetCurrentContext
    lwz r0, 0x2e4(r1)
    lwz r31, 0x2dc(r1)
    mtlr r0
    addi r1, r1, 0x2e0
    blr
}

// asm_to_cpp: __DSP_insert_task
asm void __DSP_insert_task(DSPTask* task) {
    nofralloc
    lwz r5, lbl_8049E028
    cmpwi r5, 0x0
    bne lbl_802D045C
    stw r3, lbl_8049E02C
    li r0, 0x0
    stw r3, lbl_8049E024
    stw r3, lbl_8049E028
    stw r0, 0x3c(r3)
    stw r0, 0x38(r3)
    blr
    b lbl_802D045C
lbl_802D041C:
    lwz r4, 0x4(r3)
    lwz r0, 0x4(r5)
    cmplw r4, r0
    bge lbl_802D0458
    lwz r0, 0x3c(r5)
    stw r0, 0x3c(r3)
    stw r3, 0x3c(r5)
    lwz r4, 0x3c(r3)
    stw r5, 0x38(r3)
    cmpwi r4, 0x0
    bne lbl_802D0450
    stw r3, lbl_8049E028
    b lbl_802D0464
lbl_802D0450:
    stw r3, 0x38(r4)
    b lbl_802D0464
lbl_802D0458:
    lwz r5, 0x38(r5)
lbl_802D045C:
    cmpwi r5, 0x0
    bne lbl_802D041C
lbl_802D0464:
    cmpwi r5, 0x0
    bnelr
    lwz r4, lbl_8049E024
    li r0, 0x0
    stw r3, 0x38(r4)
    stw r0, 0x38(r3)
    lwz r0, lbl_8049E024
    stw r0, 0x3c(r3)
    stw r3, lbl_8049E024
    blr
}

// asm_to_cpp: __DSP_remove_task
asm void __DSP_remove_task(DSPTask* task) {
    nofralloc
    li r4, 0x0
    li r0, 0x3
    stw r4, 0x8(r3)
    stw r0, 0x0(r3)
    lwz r0, lbl_8049E028
    cmplw r0, r3
    bne lbl_802D04D4
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_802D04C4
    stw r0, lbl_8049E028
    lwz r3, 0x38(r3)
    stw r4, 0x3c(r3)
    blr
lbl_802D04C4:
    stw r4, lbl_8049E02C
    stw r4, lbl_8049E024
    stw r4, lbl_8049E028
    blr
lbl_802D04D4:
    lwz r0, lbl_8049E024
    cmplw r0, r3
    bne lbl_802D04FC
    lwz r0, 0x3c(r3)
    stw r0, lbl_8049E024
    lwz r3, 0x3c(r3)
    stw r4, 0x38(r3)
    lwz r0, lbl_8049E028
    stw r0, lbl_8049E02C
    blr
lbl_802D04FC:
    lwz r0, 0x38(r3)
    stw r0, lbl_8049E02C
    lwz r0, 0x38(r3)
    lwz r4, 0x3c(r3)
    stw r0, 0x38(r4)
    lwz r0, 0x3c(r3)
    lwz r3, 0x38(r3)
    stw r0, 0x3c(r3)
    blr
}
