#include <revolution/AI.h>
#include <revolution/DSP.h>
#include <revolution/OS.h>
//#include <revolution/version.h>

//#define BUILD_DATE "Feb 27 2009"
//#define BUILD_TIME "10:01:30"

const char* __AIVersion = "<< RVL_SDK - AI \trelease build: Feb 27 2009 10:01:30 (0x4302_145) >>";

static AIDMACallback __AID_Callback;

static void* __CallbackStack;
static void* __OldStack;

static s64 bound_32KHz;
static s64 bound_48KHz;

static s64 min_wait;
static s64 max_wait;
static s64 buffer;

static BOOL __AID_Active;
static BOOL __AI_init_flag;

static void __AICallbackStackSwitch(AIDMACallback callback);
static void __AI_SRC_INIT(void);

AIDMACallback AIRegisterDMACallback(AIDMACallback callback) {
    BOOL enabled;
    AIDMACallback old;

    old = __AID_Callback;
    enabled = OSDisableInterrupts();

    __AID_Callback = callback;

    OSRestoreInterrupts(enabled);
    return old;
}

void AIInitDMA(void* buffer, u32 length) {
    BOOL enabled;

    enabled = OSDisableInterrupts();

    DSP_HW_REGS[DSP_AI_DMA_START_H] =
        (DSP_HW_REGS[DSP_AI_DMA_START_H] & ~0x1FFF) |
        (((uintptr_t)buffer) >> 16 & 0xFFFF);

    DSP_HW_REGS[DSP_AI_DMA_START_L] =
        (DSP_HW_REGS[DSP_AI_DMA_START_L] & ~0xFFE0) |
        (((uintptr_t)buffer) & 0xFFFF);

    DSP_HW_REGS[DSP_AI_DMA_CSR] =
        (DSP_HW_REGS[DSP_AI_DMA_CSR] & ~0x7FFF) | ((length / 32) & 0xFFFF);

    OSRestoreInterrupts(enabled);
}

//unused
void AIGetDMAEnableFlag(){
}

void AIStartDMA(void) {
    DSP_HW_REGS[DSP_AI_DMA_CSR] |= DSP_AI_DMA_CSR_PLAY;
}

void AIStopDMA(void) {
    DSP_HW_REGS[DSP_AI_DMA_CSR] &= ~DSP_AI_DMA_CSR_PLAY;
}

u32 AIGetDMABytesLeft(void) {
    return (DSP_HW_REGS[DSP_AI_DMA_BYTES_LEFT] & 0x7FFF) * 32;
}

u32 AIGetDMAStartAddr(void) {
    return ((DSP_HW_REGS[DSP_AI_DMA_START_H] & 0x1FFF) << 16) | (DSP_HW_REGS[DSP_AI_DMA_START_L] & 0xFFE0);
}

u32 AIGetDMALength(void) {
    return (DSP_HW_REGS[DSP_AI_DMA_CSR] & 0x7FFF) << 5;
}

BOOL AICheckInit(void) {
    return __AI_init_flag;
}


void AISetDSPSampleRate(u32 rate) {
    BOOL enabled;

    if (rate != AIGetDSPSampleRate()) {
        AI_HW_REGS[AI_AICR] &= ~AI_AICR_SAMPLERATE;

        if (rate == AI_DSP_32KHZ) {
            enabled = OSDisableInterrupts();

            __AI_SRC_INIT();
            AI_HW_REGS[AI_AICR] |= AI_AICR_SAMPLERATE;

            OSRestoreInterrupts(enabled);
        }
    }
}

u32 AIGetDSPSampleRate(void) {
    return ((AI_HW_REGS[AI_AICR] & AI_AICR_SAMPLERATE) >> 6) ^ 1;
}

void AIInit(void* stack) {
    if (__AI_init_flag != TRUE) {
        OSRegisterVersion(__AIVersion);

        bound_32KHz = OS_NSEC_TO_TICKS(31524);
        bound_48KHz = OS_NSEC_TO_TICKS(42024);
        min_wait = OS_NSEC_TO_TICKS(42000);
        max_wait = OS_NSEC_TO_TICKS(63000);
        buffer = OS_NSEC_TO_TICKS(3000);

        AI_HW_REGS[AI_AICR] &=
            ~(AI_AICR_PSTAT | AI_AICR_AIINTMSK | AI_AICR_AIINTVLD);

        AI_HW_REGS[AI_AIVR] = 0;
        AI_HW_REGS[AI_AIIT] = 0;

        AI_HW_REGS[AI_AICR] =
            (AI_HW_REGS[AI_AICR] & ~AI_AICR_SCRESET) | AI_AICR_SCRESET;

        AISetDSPSampleRate(AI_DSP_32KHZ);

        __AID_Callback = NULL;
        __CallbackStack = stack;

        __OSSetInterruptHandler(OS_INTR_DSP_AI, __AIDHandler);
        __OSUnmaskInterrupts(OS_INTR_MASK(OS_INTR_DSP_AI));

        __AI_init_flag = TRUE;
    }
}

//unused
void AIReset(){
}

void __AIDHandler(s32 intr, OSContext* ctx) {
#pragma unused(intr)

    OSContext tempCtx;

    DSP_HW_REGS[DSP_CSR] =
        (DSP_HW_REGS[DSP_CSR] & ~(DSP_CSR_ARINT | DSP_CSR_DSPINT)) |
        DSP_CSR_AIDINT;

    OSClearContext(&tempCtx);
    OSSetCurrentContext(&tempCtx);

    if (__AID_Callback != NULL && !__AID_Active) {
        __AID_Active = TRUE;

        if (__CallbackStack != NULL) {
            __AICallbackStackSwitch(__AID_Callback);
        } else {
            __AID_Callback();
        }

        __AID_Active = FALSE;
    }

    OSClearContext(&tempCtx);
    OSSetCurrentContext(ctx);
}

static asm void __AICallbackStackSwitch(register AIDMACallback callback) {
    // clang-format off

    mr r31, callback

    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    stw r1, 0(r5)

    lis r5, __CallbackStack@ha
    addi r5, r5, __CallbackStack@l
    lwz r1, 0(r5)
        
    subi r1, r1, 0x8
    mtlr r31
    blrl
    
    lis r5, __OldStack@ha
    addi r5, r5, __OldStack@l
    lwz r1, 0(r5)

    frfree
    blr

    // clang-format on
}

// __AI_SRC_INIT: definicion C reemplazada por asm (ver abajo)


//unused
void __ai_src_get_time(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DE50;
extern float lbl_8049DE58;
extern float lbl_8049DE5C;
extern float lbl_8049DE60;
extern float lbl_8049DE64;
extern float lbl_8049DE68;
extern float lbl_8049DE6C;
extern float lbl_8049DE70;
extern float lbl_8049DE74;
extern float lbl_8049DE78;
extern float lbl_8049DE7C;
extern void fn_8029AD3C();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8029AD14();
extern void fn_8029AD2C();

// asm_to_cpp: fn_8029AD14
asm void fn_8029AD14() {
    nofralloc
    lis r3, 0xcc00
    lhz r4, 0x5030(r3)
    lhz r0, 0x5032(r3)
    rlwinm r3, r0, 0, 16, 26
    rlwimi r3, r4, 16, 3, 15
    blr
}

// asm_to_cpp: fn_8029AD2C
asm void fn_8029AD2C() {
    nofralloc
    lis r3, 0xcc00
    lhz r0, 0x5036(r3)
    clrlslwi r3, r0, 17, 5
    blr
}

// asm_to_cpp: fn_8029AD3C
asm void fn_8029AD3C() {
    nofralloc
    lwz r3, lbl_8049DE50
    blr
}

// asm_to_cpp: __AI_SRC_INIT
asm static void __AI_SRC_INIT(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r4, 0x0
    li r3, 0x0
    li r0, 0x0
    li r29, 0x0
    li r30, 0x0
    lis r31, 0xcd00
    b lbl_8029B160
lbl_8029B014:
    lwz r0, 0x6c00(r31)
    rlwinm r0, r0, 0, 27, 25
    ori r0, r0, 0x20
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    ori r0, r0, 0x1
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c08(r31)
    clrlwi r3, r0, 1
lbl_8029B048:
    lwz r0, 0x6c08(r31)
    clrlwi r0, r0, 1
    cmplw r3, r0
    beq lbl_8029B048
    bl OSGetTime
    lwz r0, 0x6c00(r31)
    mr r27, r4
    mr r28, r3
    rlwinm r0, r0, 0, 31, 29
    ori r0, r0, 0x2
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    ori r0, r0, 0x1
    stw r0, 0x6c00(r31)
    lwz r0, 0x6c08(r31)
    clrlwi r3, r0, 1
lbl_8029B08C:
    lwz r0, 0x6c08(r31)
    clrlwi r0, r0, 1
    cmplw r3, r0
    beq lbl_8029B08C
    bl OSGetTime
    lwz r0, 0x6c00(r31)
    subfc r8, r27, r4
    subfe r5, r28, r3
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x6c00(r31)
    xoris r7, r5, 0x8000
    lwz r0, 0x6c00(r31)
    clrrwi r0, r0, 1
    stw r0, 0x6c00(r31)
    lwz r10, lbl_8049DE5C
    lwz r12, lbl_8049DE7C
    lwz r9, lbl_8049DE58
    lwz r11, lbl_8049DE78
    subfc r6, r10, r12
    subfe r0, r9, r11
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    beq lbl_8029B104
    lwz r30, lbl_8049DE68
    li r0, 0x1
    lwz r29, lbl_8049DE6C
    b lbl_8029B160
lbl_8029B104:
    addc r6, r12, r10
    adde r0, r11, r9
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    bne lbl_8029B15C
    lwz r5, lbl_8049DE74
    lwz r0, lbl_8049DE70
    subfc r6, r10, r5
    subfe r0, r9, r0
    xoris r5, r0, 0x8000
    subfc r0, r6, r8
    subfe r5, r5, r7
    subfe r5, r7, r7
    neg. r5, r5
    beq lbl_8029B15C
    lwz r30, lbl_8049DE60
    li r0, 0x1
    lwz r29, lbl_8049DE64
    b lbl_8029B160
lbl_8029B15C:
    li r0, 0x0
lbl_8029B160:
    cmpwi r0, 0x0
    beq lbl_8029B014
    addc r31, r4, r29
    adde r29, r3, r30
lbl_8029B170:
    bl OSGetTime
    xoris r0, r3, 0x8000
    xoris r5, r29, 0x8000
    subfc r3, r31, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_8029B170
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
