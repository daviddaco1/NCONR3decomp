#include <revolution/DSP.h>
#include <revolution/OS.h>

const char* __DSPVersion =
    "<< RVL_SDK - DSP \trelease build: Feb 27 2009 10:01:57 (0x4302_145) >>";

static BOOL __DSP_init_flag = FALSE;

BOOL DSPCheckMailToDSP(void) {
    return (DSP_HW_REGS[DSP_DSPMBOX_H] & DSP_DSPMBOX_H_STATUS) != 0;
}

BOOL DSPCheckMailFromDSP(void) {
    return (DSP_HW_REGS[DSP_CPUMBOX_H] & DSP_CPUMBOX_H_STATUS) != 0;
}

//unused
void DSPReadCPUToDSPMbox(){
}

DSPMail DSPReadMailFromDSP(void) {
    return (DSPMail)(DSP_HW_REGS[DSP_CPUMBOX_H] << 16 |
                     DSP_HW_REGS[DSP_CPUMBOX_L]);
}

void DSPSendMailToDSP(DSPMail mail) {
    DSP_HW_REGS[DSP_DSPMBOX_H] = ((uintptr_t)mail) >> 16 & 0xFFFF;
    DSP_HW_REGS[DSP_DSPMBOX_L] = ((uintptr_t)mail) & 0xFFFF;
}

void DSPAssertInt(void) {
    BOOL enabled;

    enabled = OSDisableInterrupts();

    DSP_HW_REGS[DSP_CSR] =
        (DSP_HW_REGS[DSP_CSR] &
         ~(DSP_CSR_AIDINT | DSP_CSR_ARINT | DSP_CSR_DSPINT)) |
        DSP_CSR_PIINT;

    OSRestoreInterrupts(enabled);
}

void DSPInit(void) {
    BOOL enabled;

    __DSP_debug_printf("DSPInit(): Build Date: %s %s\n", "Feb 27 2009",
                       "10:01:57");

    if (__DSP_init_flag == TRUE) {
        return;
    }

    OSRegisterVersion(__DSPVersion);

    enabled = OSDisableInterrupts();

    __OSSetInterruptHandler(OS_INTR_DSP_DSP, __DSPHandler);
    __OSUnmaskInterrupts(OS_INTR_MASK(OS_INTR_DSP_DSP));

    DSP_HW_REGS[DSP_CSR] =
        (DSP_HW_REGS[DSP_CSR] &
         ~(DSP_CSR_AIDINT | DSP_CSR_ARINT | DSP_CSR_DSPINT)) |
        DSP_CSR_RES;

    DSP_HW_REGS[DSP_CSR] = DSP_HW_REGS[DSP_CSR] &
        ~(DSP_CSR_HALT | DSP_CSR_AIDINT | DSP_CSR_ARINT | DSP_CSR_DSPINT);

    __DSP_tmp_task = NULL;
    __DSP_curr_task = NULL;
    __DSP_last_task = NULL;
    __DSP_first_task = NULL;

    __DSP_init_flag = TRUE;

    OSRestoreInterrupts(enabled);
}

BOOL DSPCheckInit(void) {
    return __DSP_init_flag;
}

//unused
void DSPReset(){
}

//unused
void DSPHalt(){
}

//unused
void DSPUnhalt(){
}

//unused
void DSPGetDMAStatus(){
}

// DSPAddTask: definicion C reemplazada por asm (ver abajo)


DSPTask* DSPCancelTask(DSPTask* task){
    BOOL enabled;

    enabled = OSDisableInterrupts();

    task->flags |= DSP_TASK_CANCELED;

    OSRestoreInterrupts(enabled);
    return task;
}

DSPTask* DSPAssertTask(DSPTask* task) {
    BOOL enabled;

    enabled = OSDisableInterrupts();

    if (__DSP_curr_task == task) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = TRUE;
        OSRestoreInterrupts(enabled);
        return task;
    }

    if (task->prio < __DSP_curr_task->prio) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = TRUE;

        if (__DSP_curr_task->state == DSP_TASK_STATE_1) {
            DSPAssertInt();
        }

        OSRestoreInterrupts(enabled);
        return task;
    }

    OSRestoreInterrupts(enabled);
    return NULL;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E028;
extern void __DSP_boot_task();
extern void __DSP_insert_task();

// asm_to_cpp: DSPAddTask
asm DSPTask* DSPAddTask(DSPTask* task) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r3, r30
    bl __DSP_insert_task
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x0(r30)
    mr r3, r31
    stw r0, 0x8(r30)
    bl OSRestoreInterrupts
    lwz r0, lbl_8049E028
    cmplw r30, r0
    bne lbl_802CFB24
    mr r3, r30
    bl __DSP_boot_task
lbl_802CFB24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
