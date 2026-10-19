#include <revolution/AI.h>
#include <revolution/AX.h>
#include <revolution/DSP.h>
#include <revolution/OS.h>

// Output uses a ring buffer
#define OUT_RING_MAX 3
// Each remote output buffer contains 10 frames
// TODO(kiwi) Not sure if these instances are actually "frames"
#define RMT_FRAME_MAX 10

// Form DSP mail for command list size
#define DSP_MAIL_CLSIZE(size) (0xBABE << 16 | (size))
// DRAM image in DSP memory
// TODO(kiwi) What does this represent?
#define DRAM_IMAGE_DSP_ADDR 0x0CD2

// Back again by popular demand!
#define FUNNY_COPY(dst, src, type, n)                                          \
    do {                                                                       \
                                                                               \
        type* __dst = (type*)dst;                                              \
        type* __src = (type*)src;                                              \
        int i;                                                                 \
                                                                               \
        for (i = 0; i < n / sizeof(type); i++) {                               \
            *__dst = *__src;                                                   \
            __dst++;                                                           \
            __src++;                                                           \
        }                                                                      \
                                                                               \
    } while (0)

AXPROFILE __AXLocalProfile;

static volatile u32 __AXOutFrame;
static u32 __AXAiDmaFrame;
static u32 __AXOutDspReady;
static AXOutCallback __AXUserFrameCallback;
static volatile BOOL __AXDSPInitFlag;
static volatile BOOL __AXDSPDoneFlag;
static BOOL __AXDebugSteppingMode;
static OSThreadQueue __AXOutThreadQueue ALIGN(8);
static u32 __AXOutputBufferMode;
static s32 __AXRmtBuffLen;
static s32 __AXRmtDspPtr;
static s32 __AXRmtCpuPtr;
static AXExceedCallback __AXExceedCallback;

static s16 __AXRmtOutBuffer[AX_RMT_MAX]
                           [AX_SAMPLES_PER_FRAME_RMT * RMT_FRAME_MAX] ALIGN(32);
// TODO(kiwi) What is this number?
static u8 __AXOutSBuffer[768] ALIGN(32);
static u32 __AXOutBuffer[OUT_RING_MAX][AX_SAMPLES_PER_FRAME] ALIGN(32);

static DSPTask __AXDSPTask ALIGN(32);
static u8 __AXDramImage[64] ALIGN(32);

static void __AXDSPInitCallback(DSPTask* task);
static void __AXDSPResumeCallback(DSPTask* task);
static void __AXDSPDoneCallback(DSPTask* task);
static void __AXDSPRequestCallback(DSPTask* task);

// __AXOutNewFrame: definicion C reemplazada por asm (ver abajo)


void __AXOutAiCallback(void) {
    u32 frame;

    if (__AXDSPDoneFlag == 1) return;

    if (__AXOutDspReady == 1) {
        __AXOutDspReady = 0;
        __AXOutNewFrame();
    } else {
        __AXOutDspReady = 2;
        DSPAssertTask(&__AXDSPTask);
    }

    if (__AXOutputBufferMode == 1) {
        AIInitDMA(__AXOutBuffer[__AXAiDmaFrame], AX_FRAME_SIZE);

        frame = __AXAiDmaFrame + 1;
        frame %= OUT_RING_MAX;

        if (frame != __AXOutFrame) {
            __AXAiDmaFrame = frame;
        }
    }
}

static void __AXDSPInitCallback(DSPTask* task) {
#pragma unused(task)

    __AXDSPInitFlag = TRUE;
}

static void __AXDSPResumeCallback(DSPTask* task) {
#pragma unused(task)

    u32 cycles;

    if (__AXOutDspReady == 2) {
        __AXOutDspReady = 0;

        cycles = __AXOutNewFrame();

        if (__AXExceedCallback != NULL) {
            __AXExceedCallback(cycles);
        }

    } else {
        __AXOutDspReady = 1;
    }
}

// __AXDSPDoneCallback: definicion C reemplazada por asm (ver abajo)


static void __AXDSPRequestCallback(DSPTask* task) {
#pragma unused(task)
}

// __AXOutInitDSP: definicion C reemplazada por asm (ver abajo)


// __AXOutInit: definicion C reemplazada por asm (ver abajo)


// __AXOutQuit: definicion C reemplazada por asm (ver abajo)


AXOutCallback AXRegisterCallback(AXOutCallback callback) {
    AXOutCallback old = __AXUserFrameCallback;
    BOOL enabled = OSDisableInterrupts();

    __AXUserFrameCallback = callback;

    OSRestoreInterrupts(enabled);
    return old;
}

s32 AXRmtGetSamplesLeft(void) {
    s32 samples = __AXRmtDspPtr - (AX_SAMPLES_PER_FRAME_RMT * 2);

    if (samples < 0) {
        samples += __AXRmtBuffLen;
    }

    samples -= __AXRmtCpuPtr;

    if (samples < 0) {
        samples += __AXRmtBuffLen;
    }

    return samples;
}

s32 AXRmtGetSamples(s32 chan, s16* out, s32 num) {
    s32 avail = AXRmtGetSamplesLeft();
    s32 actual = num > avail ? avail : num;
    s32 ptr = __AXRmtCpuPtr;
    int i;

    for (i = 0; i < actual; i++) {
        *out++ = __AXRmtOutBuffer[chan][ptr];

        if (++ptr >= __AXRmtBuffLen) {
            ptr = 0;
        }
    }

    DCInvalidateRange(__AXRmtOutBuffer[chan], __AXRmtBuffLen * sizeof(s16));
    return actual;
}

// AXRmtAdvancePtr: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049CF38;
extern float lbl_8049CF3A;
extern float lbl_8049CF3C;
extern float lbl_8049DF10;
extern float lbl_8049DF14;
extern float lbl_8049DF18;
extern float lbl_8049DF1C;
extern float lbl_8049DF20;
extern float lbl_8049DF28;
extern float lbl_8049DF30;
extern float lbl_8049DF34;
extern float lbl_8049DF38;
extern float lbl_8049DF3C;
extern float lbl_8049DF40;
extern float lbl_8049DF44;
extern float lbl_8049DF48;
extern u8 lbl_80370420[];
extern u8 lbl_80415140[];
extern u8 lbl_80415EA0[];
extern u8 lbl_80415F00[];
extern void AIStartDMA();
extern void AIStopDMA();
extern void DCFlushRange();
extern void DSPInit();
extern void DSPSendMailToDSP();
extern void OSInitThreadQueue();
extern void OSSleepThread();
extern void __AXPrintStudio();
extern void __AXProcessAux();
extern void __AXServiceCallbackStack();
extern void __AXSyncPBs();
extern void fn_8029C960();
extern void fn_8029C990();
extern void fn_8029EE28();
extern void fn_8031D978();

// asm_to_cpp: __AXOutNewFrame
asm u32 __AXOutNewFrame(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80415140@ha
    addi r31, r31, lbl_80415140@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    bl OSGetTime
    addi r5, r31, 0x0
    stw r3, 0x0(r31)
    stw r4, 0x4(r5)
    bl AIGetDMABytesLeft
    srwi r3, r3, 2
    lwz r0, lbl_8049DF20
    subfic r3, r3, 0x60
    cmplwi r0, 0x1
    mulli r30, r3, 0xed5
    bne lbl_8029D450
    li r3, 0x0
    bl __AXSyncPBs
    b lbl_8029D458
lbl_8029D450:
    li r3, 0x5f50
    bl __AXSyncPBs
lbl_8029D458:
    bl __AXPrintStudio
    bl fn_8029C960
    lis r4, 0xbabe
    mr r29, r3
    addi r3, r4, 0x80
    bl DSPSendMailToDSP
lbl_8029D470:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_8029D470
    mr r3, r29
    bl DSPSendMailToDSP
lbl_8029D484:
    bl DSPCheckMailToDSP
    cmpwi r3, 0x0
    bne lbl_8029D484
    bl __AXServiceCallbackStack
    bl OSGetTime
    addi r29, r31, 0x0
    stw r4, 0xc(r29)
    stw r3, 0x8(r29)
    bl __AXProcessAux
    bl OSGetTime
    stw r4, 0x14(r29)
    stw r3, 0x10(r29)
    bl OSGetTime
    lwz r12, lbl_8049DF3C
    stw r4, 0x1c(r29)
    cmpwi r12, 0x0
    stw r3, 0x18(r29)
    beq lbl_8029D4D4
    mtctr r12
    bctrl
lbl_8029D4D4:
    bl OSGetTime
    lwz r7, lbl_8049DF18
    addi r8, r31, 0x0
    addi r5, r31, 0x40
    lwz r0, lbl_8049DF1C
    slwi r6, r7, 1
    addi r7, r7, 0x12
    add r6, r5, r6
    stw r4, 0x24(r8)
    addi r5, r6, 0x168
    cmpw r7, r0
    addi r4, r6, 0x2d0
    addi r0, r6, 0x438
    stw r3, 0x20(r8)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x14(r1)
    blt lbl_8029D524
    li r7, 0x0
lbl_8029D524:
    lwz r4, lbl_8049DF14
    lwz r3, lbl_8049DF18
    cmpw r4, r3
    blt lbl_8029D544
    addi r0, r3, 0x12
    cmpw r4, r0
    bge lbl_8029D544
    stw r7, lbl_8049DF14
lbl_8029D544:
    lwz r0, lbl_8049DF48
    addi r29, r31, 0x8e0
    stw r7, lbl_8049DF18
    addi r3, r31, 0x5e0
    mulli r0, r0, 0x180
    addi r5, r1, 0x8
    add r4, r29, r0
    bl fn_8029C990
    lwz r3, lbl_8049DF48
    lwz r0, lbl_8049DF20
    addi r3, r3, 0x1
    cmplwi r0, 0x1
    stw r3, lbl_8049DF48
    bne lbl_8029D5A0
    lis r3, 0xaaab
    lwz r4, lbl_8049DF48
    subi r0, r3, 0x5555
    mulhwu r0, r0, r4
    srwi r0, r0, 1
    mulli r0, r0, 0x3
    subf r0, r0, r4
    stw r0, lbl_8049DF48
    b lbl_8029D5C0
lbl_8029D5A0:
    lwz r0, lbl_8049DF48
    li r4, 0x180
    clrlwi r0, r0, 31
    stw r0, lbl_8049DF48
    lwz r0, lbl_8049DF48
    mulli r0, r0, 0x180
    add r3, r29, r0
    bl AIInitDMA
lbl_8029D5C0:
    bl OSGetTime
    addi r29, r31, 0x0
    stw r4, 0x2c(r29)
    stw r3, 0x28(r29)
    bl __AXGetNumVoices
    stw r3, 0x30(r29)
    bl fn_8029EE28
    cmpwi r3, 0x0
    beq lbl_8029D638
    li r0, 0x7
    mtctr r0
lbl_8029D5EC:
    lbz r0, 0x0(r29)
    stb r0, 0x0(r3)
    lbz r0, 0x1(r29)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r29)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r29)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r29)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r29)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r29)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r29)
    addi r29, r29, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_8029D5EC
lbl_8029D638:
    mr r3, r30
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __AXDSPDoneCallback
asm static void __AXDSPDoneCallback(DSPTask* task) {
    nofralloc
    li r0, 0x1
    la r3, lbl_8049DF28
    stw r0, lbl_8049DF34
    b fn_8031D978
}

// asm_to_cpp: __AXOutInitDSP
asm void __AXOutInitDSP(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r11, lbl_80415F00@ha
    lis r7, __AXDSPInitCallback@ha
    stw r0, 0x24(r1)
    lis r6, __AXDSPResumeCallback@ha
    lis r5, __AXDSPDoneCallback@ha
    lis r4, __AXDSPRequestCallback@ha
    stw r31, 0x1c(r1)
    li r12, 0x0
    addi r11, r11, lbl_80415F00@l
    addi r7, r7, __AXDSPInitCallback@l
    stw r30, 0x18(r1)
    lis r30, lbl_80415EA0@ha
    addi r30, r30, lbl_80415EA0@l
    addi r6, r6, __AXDSPResumeCallback@l
    stw r29, 0x14(r1)
    lis r29, lbl_80370420@ha
    addi r29, r29, lbl_80370420@l
    addi r5, r5, __AXDSPDoneCallback@l
    lhz r31, lbl_8049CF3C
    addi r4, r4, __AXDSPRequestCallback@l
    lhz r8, lbl_8049CF38
    li r10, 0x40
    lhz r0, lbl_8049CF3A
    li r9, 0xcd2
    stw r12, 0x4(r30)
    la r3, lbl_8049DF28
    stw r12, lbl_8049DF38
    stw r29, 0xc(r30)
    stw r31, 0x10(r30)
    stw r12, 0x14(r30)
    stw r11, 0x18(r30)
    stw r10, 0x1c(r30)
    stw r9, 0x20(r30)
    sth r8, 0x24(r30)
    sth r0, 0x26(r30)
    stw r7, 0x28(r30)
    stw r6, 0x2c(r30)
    stw r5, 0x30(r30)
    stw r4, 0x34(r30)
    stw r12, lbl_8049DF34
    bl OSInitThreadQueue
    bl DSPCheckInit
    cmpwi r3, 0x0
    bne lbl_8029D838
    bl DSPInit
lbl_8029D838:
    lis r3, lbl_80415EA0@ha
    addi r3, r3, lbl_80415EA0@l
    bl DSPAddTask
lbl_8029D844:
    lwz r0, lbl_8049DF38
    cmpwi r0, 0x0
    beq lbl_8029D844
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __AXOutInit
asm void __AXOutInit(u32 mode) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x24(r1)
    li r0, 0x20
    stw r31, 0x1c(r1)
    lis r31, lbl_80415140@ha
    addi r31, r31, lbl_80415140@l
    stw r4, lbl_8049DF48
    addi r5, r31, 0x8e0
    stw r4, lbl_8049DF44
    stw r3, lbl_8049DF20
    stw r4, lbl_8049DF30
    mtctr r0
lbl_8029D8A4:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    stw r4, 0x10(r5)
    stw r4, 0x14(r5)
    stw r4, 0x18(r5)
    stw r4, 0x1c(r5)
    stw r4, 0x20(r5)
    addi r5, r5, 0x24
    bdnz lbl_8029D8A4
    addi r3, r31, 0x8e0
    li r4, 0x480
    bl DCFlushRange
    li r0, 0x18
    addi r4, r31, 0x5e0
    li r3, 0x0
    mtctr r0
lbl_8029D8EC:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_8029D8EC
    addi r3, r31, 0x5e0
    li r4, 0x300
    bl DCFlushRange
    li r0, 0x24
    addi r4, r31, 0x40
    li r3, 0x0
    mtctr r0
lbl_8029D930:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    addi r4, r4, 0x28
    bdnz lbl_8029D930
    addi r3, r31, 0x40
    li r4, 0x5a0
    bl DCFlushRange
    bl __AXOutInitDSP
    lis r3, __AXOutAiCallback@ha
    addi r3, r3, __AXOutAiCallback@l
    bl AIRegisterDMACallback
    lwz r0, lbl_8049DF20
    addi r8, r31, 0x40
    li r4, 0x12
    li r3, 0xb4
    addi r7, r8, 0x168
    addi r6, r8, 0x2d0
    addi r5, r8, 0x438
    cmplwi r0, 0x1
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, lbl_8049DF14
    stw r4, lbl_8049DF18
    stw r3, lbl_8049DF1C
    bne lbl_8029D9D4
    addi r4, r31, 0x8e0
    addi r3, r31, 0x5e0
    addi r4, r4, 0x300
    addi r5, r1, 0x8
    bl fn_8029C990
    b lbl_8029D9E8
lbl_8029D9D4:
    addi r4, r31, 0x8e0
    addi r3, r31, 0x5e0
    addi r4, r4, 0x180
    addi r5, r1, 0x8
    bl fn_8029C990
lbl_8029D9E8:
    lwz r0, lbl_8049DF20
    li r4, 0x1
    li r3, 0x0
    stw r4, lbl_8049DF40
    cmplwi r0, 0x1
    stw r3, lbl_8049DF3C
    bne lbl_8029DA2C
    lwz r3, lbl_8049DF44
    addi r0, r31, 0x8e0
    li r4, 0x180
    mulli r3, r3, 0x180
    add r3, r0, r3
    bl AIInitDMA
    lwz r3, lbl_8049DF44
    addi r0, r3, 0x1
    stw r0, lbl_8049DF44
    b lbl_8029DA44
lbl_8029DA2C:
    lwz r3, lbl_8049DF48
    addi r0, r31, 0x8e0
    li r4, 0x180
    mulli r3, r3, 0x180
    add r3, r0, r3
    bl AIInitDMA
lbl_8029DA44:
    bl AIStartDMA
    li r0, 0x0
    stw r0, lbl_8049DF10
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __AXOutQuit
asm void __AXOutQuit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    li r31, 0x0
    lis r4, lbl_80415EA0@ha
    stw r31, lbl_8049DF3C
    mr r30, r3
    addi r3, r4, lbl_80415EA0@l
    bl DSPCancelTask
    la r3, lbl_8049DF28
    bl OSSleepThread
    li r3, 0x0
    bl AIRegisterDMACallback
    bl AIStopDMA
    stw r31, lbl_8049DF10
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: AXRmtAdvancePtr
asm s32 AXRmtAdvancePtr(s32 num) {
    nofralloc
    lwz r4, lbl_8049DF18
    subic. r4, r4, 0x24
    bge lbl_8029DC14
    lwz r0, lbl_8049DF1C
    add r4, r4, r0
lbl_8029DC14:
    lwz r0, lbl_8049DF14
    subf. r4, r0, r4
    bge lbl_8029DC28
    lwz r0, lbl_8049DF1C
    add r4, r4, r0
lbl_8029DC28:
    cmpw r3, r4
    ble lbl_8029DC34
    mr r3, r4
lbl_8029DC34:
    lwz r0, lbl_8049DF14
    lwz r4, lbl_8049DF1C
    add r0, r0, r3
    cmpw r0, r4
    stw r0, lbl_8049DF14
    bltlr
    subf r0, r4, r0
    stw r0, lbl_8049DF14
    blr
}
