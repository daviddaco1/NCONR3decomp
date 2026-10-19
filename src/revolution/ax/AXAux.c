#include <revolution/AX.h>
#include <revolution/OS.h>
#include <string.h>

/**
 * Ring buffers have three entries:
 * 1. For DSP write
 * 2. For DSP read
 * 3. For CPU read/write
 */
#define AUX_RING_MAX 3

/**
 * 96 samples per frame @ 32-bit depth
 */
#define AUX_CHAN_SIZE (AX_SAMPLE_DEPTH_BYTES * AX_SAMPLES_PER_FRAME)

/**
 * Stereo buffer size: (96 samples/frame, 3 channels)
 * DPL2 buffer size:   (96 samples/frame, 4 channels)
 */
#define STEREO_FRAME_SIZE (AUX_CHAN_SIZE * AX_STEREO_MAX)
#define DPL2_FRAME_SIZE (AUX_CHAN_SIZE * AX_DPL2_MAX)

/**
 * Sample indices for stereo
 */
#define STEREO_SAMPLE_L_BEGIN (AUX_CHAN_SIZE * 0)
#define STEREO_SAMPLE_R_BEGIN (AUX_CHAN_SIZE * 1)
#define STEREO_SAMPLE_S_BEGIN (AUX_CHAN_SIZE * 2)

/**
 * Sample indices for DPL2
 */
#define DPL2_SAMPLE_I_BEGIN (AUX_CHAN_SIZE * 3)
#define DPL2_SAMPLE_L_BEGIN (AUX_CHAN_SIZE * 0)
#define DPL2_SAMPLE_R_BEGIN (AUX_CHAN_SIZE * 1)
#define DPL2_SAMPLE_LS_BEGIN (AUX_CHAN_SIZE * 2)
#define DPL2_SAMPLE_RS_BEGIN (AUX_CHAN_SIZE * 3)

static u8 __AXBufferAuxA[AUX_RING_MAX][DPL2_FRAME_SIZE] ALIGN(32);
static u8 __AXBufferAuxB[AUX_RING_MAX][DPL2_FRAME_SIZE] ALIGN(32);
static u8 __AXBufferAuxC[AUX_RING_MAX][STEREO_FRAME_SIZE] ALIGN(32);

static u8 __clearAuxA[AUX_RING_MAX];
static u8 __clearAuxB[AUX_RING_MAX];
static u8 __clearAuxC[AUX_RING_MAX];

static AXAuxCallback __AXCallbackAuxA;
static AXAuxCallback __AXCallbackAuxB;
static AXAuxCallback __AXCallbackAuxC;

static void* __AXContextAuxA;
static void* __AXContextAuxB;
static void* __AXContextAuxC;

static void* __AXAuxADspWrite;
static void* __AXAuxADspRead;

static void* __AXAuxBDspWrite;
static void* __AXAuxBDspRead;

static void* __AXAuxCDspWrite;
static void* __AXAuxCDspRead;

static u32 __AXAuxDspWritePosition;
static u32 __AXAuxDspReadPosition;
static u32 __AXAuxCpuReadWritePosition;

// __AXAuxInit: definicion C reemplazada por asm (ver abajo)


void __AXAuxQuit(void) {
    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
    __AXCallbackAuxC = NULL;
}

void __AXGetAuxAInput(void** out) {
    if (__AXCallbackAuxA != NULL) {
        *out = __AXBufferAuxA[__AXAuxDspWritePosition];
    } else {
        *out = NULL;
    }
}

void __AXGetAuxAOutput(void** out) {
    *out = __AXBufferAuxA[__AXAuxDspReadPosition];
}

void __AXGetAuxAInputDpl2(void** out) {
    *out = &__AXBufferAuxA[__AXAuxDspWritePosition][DPL2_SAMPLE_I_BEGIN];
}

void __AXGetAuxAOutputDpl2R(void** out) {
    *out = &__AXBufferAuxA[__AXAuxDspReadPosition][DPL2_SAMPLE_R_BEGIN];
}

void __AXGetAuxAOutputDpl2Ls(void** out) {
    *out = &__AXBufferAuxA[__AXAuxDspReadPosition][DPL2_SAMPLE_LS_BEGIN];
}

void __AXGetAuxAOutputDpl2Rs(void** out) {
    *out = &__AXBufferAuxA[__AXAuxDspReadPosition][DPL2_SAMPLE_RS_BEGIN];
}

void __AXGetAuxBInput(void** out) {
    if (__AXCallbackAuxB != NULL) {
        *out = __AXBufferAuxB[__AXAuxDspWritePosition];
    } else {
        *out = NULL;
    }
}

void __AXGetAuxBOutput(void** out) {
    *out = __AXBufferAuxB[__AXAuxDspReadPosition];
}

void __AXGetAuxBInputDpl2(void** out) {
    *out = &__AXBufferAuxB[__AXAuxDspWritePosition][DPL2_SAMPLE_I_BEGIN];
}

void __AXGetAuxBOutputDpl2R(void** out) {
    *out = &__AXBufferAuxB[__AXAuxDspReadPosition][DPL2_SAMPLE_R_BEGIN];
}

void __AXGetAuxBOutputDpl2Ls(void** out) {
    *out = &__AXBufferAuxB[__AXAuxDspReadPosition][DPL2_SAMPLE_LS_BEGIN];
}

void __AXGetAuxBOutputDpl2Rs(void** out) {
    *out = &__AXBufferAuxB[__AXAuxDspReadPosition][DPL2_SAMPLE_RS_BEGIN];
}

void __AXGetAuxCInput(void** out) {
    if (__AXCallbackAuxC != NULL) {
        *out = __AXBufferAuxC[__AXAuxDspWritePosition];
    } else {
        *out = NULL;
    }
}

void __AXGetAuxCOutput(void** out) {
    *out = __AXBufferAuxC[__AXAuxDspReadPosition];
}

// __AXProcessAux: definicion C reemplazada por asm (ver abajo)


void AXRegisterAuxACallback(AXAuxCallback callback, void* context) {
    BOOL enabled = OSDisableInterrupts();

    __AXCallbackAuxA = callback;
    __AXContextAuxA = context;

    if (callback == NULL) {
        memset(&__clearAuxA, TRUE, AX_STEREO_MAX);
    }

    OSRestoreInterrupts(enabled);
}

void AXRegisterAuxBCallback(AXAuxCallback callback, void* context) {
    BOOL enabled = OSDisableInterrupts();

    __AXCallbackAuxB = callback;
    __AXContextAuxB = context;

    if (callback == NULL) {
        memset(&__clearAuxB, TRUE, AX_STEREO_MAX);
    }

    OSRestoreInterrupts(enabled);
}

void AXRegisterAuxCCallback(AXAuxCallback callback, void* context) {
    BOOL enabled = OSDisableInterrupts();

    __AXCallbackAuxC = callback;
    __AXContextAuxC = context;

    if (callback == NULL) {
        memset(&__clearAuxC, TRUE, AX_STEREO_MAX);
    }

    OSRestoreInterrupts(enabled);
}

void AXGetAuxACallback(AXAuxCallback* callback, void** context) {
    *callback = __AXCallbackAuxA;
    *context = __AXContextAuxA;
}

void AXGetAuxBCallback(AXAuxCallback* callback, void** context) {
    *callback = __AXCallbackAuxB;
    *context = __AXContextAuxB;
}

void AXGetAuxCCallback(AXAuxCallback* callback, void** context) {
    *callback = __AXCallbackAuxC;
    *context = __AXContextAuxC;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DEA0;
extern float lbl_8049DEA4;
extern float lbl_8049DEA8;
extern float lbl_8049DEAC;
extern float lbl_8049DEB0;
extern float lbl_8049DEB4;
extern float lbl_8049DEB8;
extern float lbl_8049DEBC;
extern float lbl_8049DEC0;
extern float lbl_8049DEC4;
extern float lbl_8049DEC8;
extern float lbl_8049DECC;
extern float lbl_8049DED0;
extern float lbl_8049DED4;
extern float lbl_8049DED8;
extern float lbl_8049DEDC;
extern float lbl_8049DEE0;
extern float lbl_8049DEE4;
extern float lbl_8049DF00;
extern u8 lbl_80411EC0[];
extern void DCFlushRange();
extern void DCFlushRangeNoSync();
extern void DCInvalidateRange();

// asm_to_cpp: __AXAuxInit
asm void __AXAuxInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80411EC0@ha
    li r5, 0x0
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80411EC0@l
    li r4, 0x1
    li r3, 0x2
    li r0, 0x20
    stw r5, lbl_8049DED8
    addi r7, r6, 0x0
    addi r8, r6, 0x1200
    stw r5, lbl_8049DED4
    addi r6, r6, 0x2400
    stw r5, lbl_8049DED0
    stw r5, lbl_8049DECC
    stw r5, lbl_8049DEC8
    stw r5, lbl_8049DEC4
    stw r5, lbl_8049DEA8
    stw r4, lbl_8049DEA4
    stw r3, lbl_8049DEA0
    mtctr r0
lbl_8029C184:
    stw r5, 0x0(r7)
    stw r5, 0x0(r8)
    stw r5, 0x0(r6)
    stw r5, 0x4(r7)
    stw r5, 0x4(r8)
    stw r5, 0x4(r6)
    stw r5, 0x8(r7)
    stw r5, 0x8(r8)
    stw r5, 0x8(r6)
    stw r5, 0xc(r7)
    stw r5, 0xc(r8)
    stw r5, 0xc(r6)
    stw r5, 0x10(r7)
    stw r5, 0x10(r8)
    stw r5, 0x10(r6)
    stw r5, 0x14(r7)
    stw r5, 0x14(r8)
    stw r5, 0x14(r6)
    stw r5, 0x18(r7)
    stw r5, 0x18(r8)
    stw r5, 0x18(r6)
    stw r5, 0x1c(r7)
    stw r5, 0x1c(r8)
    stw r5, 0x1c(r6)
    stw r5, 0x20(r7)
    addi r7, r7, 0x24
    stw r5, 0x20(r8)
    addi r8, r8, 0x24
    stw r5, 0x20(r6)
    addi r6, r6, 0x24
    bdnz lbl_8029C184
    la r3, lbl_8049DEE4
    li r4, 0x0
    li r5, 0x3
    bl memset
    la r3, lbl_8049DEE0
    li r4, 0x0
    li r5, 0x3
    bl memset
    la r3, lbl_8049DEDC
    li r4, 0x0
    li r5, 0x3
    bl memset
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __AXProcessAux
asm void __AXProcessAux(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_80411EC0@ha
    addi r31, r31, lbl_80411EC0@l
    stw r30, 0x58(r1)
    addi r10, r31, 0x0
    addi r6, r31, 0x1200
    addi r5, r31, 0x2400
    stw r29, 0x54(r1)
    lwz r7, lbl_8049DEA8
    lwz r9, lbl_8049DEA4
    mulli r3, r7, 0x600
    lwz r0, lbl_8049DED8
    cmpwi r0, 0x0
    add r4, r10, r3
    add r3, r6, r3
    stw r4, lbl_8049DEC0
    mulli r8, r9, 0x600
    stw r3, lbl_8049DEB8
    mulli r4, r7, 0x480
    add r7, r10, r8
    add r6, r6, r8
    stw r7, lbl_8049DEBC
    mulli r3, r9, 0x480
    add r4, r5, r4
    stw r6, lbl_8049DEB4
    add r0, r5, r3
    stw r4, lbl_8049DEB0
    stw r0, lbl_8049DEAC
    beq lbl_8029C570
    lwz r0, lbl_8049DF00
    cmplwi r0, 0x2
    bne lbl_8029C524
    lwz r0, lbl_8049DEA0
    li r4, 0x600
    mulli r0, r0, 0x600
    add r3, r10, r0
    addi r6, r3, 0x180
    stw r3, 0x40(r1)
    addi r5, r3, 0x300
    addi r0, r3, 0x480
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r0, 0x4c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8049DED8
    addi r3, r1, 0x40
    lwz r4, lbl_8049DECC
    mtctr r12
    bctrl
    lwz r3, 0x40(r1)
    li r4, 0x600
    bl DCFlushRangeNoSync
    b lbl_8029C5B4
lbl_8029C524:
    lwz r0, lbl_8049DEA0
    li r4, 0x480
    mulli r0, r0, 0x600
    add r3, r10, r0
    addi r5, r3, 0x180
    stw r3, 0x30(r1)
    addi r0, r3, 0x300
    stw r5, 0x34(r1)
    stw r0, 0x38(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8049DED8
    addi r3, r1, 0x30
    lwz r4, lbl_8049DECC
    mtctr r12
    bctrl
    lwz r3, 0x30(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_8029C5B4
lbl_8029C570:
    lwz r3, lbl_8049DEA0
    la r30, lbl_8049DEE4
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_8029C5B4
    mulli r0, r3, 0x600
    li r4, 0x0
    li r5, 0x600
    add r29, r10, r0
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x600
    bl DCFlushRange
    lwz r0, lbl_8049DEA0
    li r3, 0x0
    stbx r3, r30, r0
lbl_8029C5B4:
    lwz r0, lbl_8049DED4
    cmpwi r0, 0x0
    beq lbl_8029C674
    lwz r0, lbl_8049DF00
    cmplwi r0, 0x2
    bne lbl_8029C624
    lwz r3, lbl_8049DEA0
    addi r0, r31, 0x1200
    li r4, 0x600
    mulli r3, r3, 0x600
    add r3, r0, r3
    addi r6, r3, 0x180
    stw r3, 0x20(r1)
    addi r5, r3, 0x300
    addi r0, r3, 0x480
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8049DED4
    addi r3, r1, 0x20
    lwz r4, lbl_8049DEC8
    mtctr r12
    bctrl
    lwz r3, 0x20(r1)
    li r4, 0x600
    bl DCFlushRangeNoSync
    b lbl_8029C6BC
lbl_8029C624:
    lwz r3, lbl_8049DEA0
    addi r0, r31, 0x1200
    li r4, 0x480
    mulli r3, r3, 0x600
    add r3, r0, r3
    addi r5, r3, 0x180
    stw r3, 0x14(r1)
    addi r0, r3, 0x300
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8049DED4
    addi r3, r1, 0x14
    lwz r4, lbl_8049DEC8
    mtctr r12
    bctrl
    lwz r3, 0x14(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_8029C6BC
lbl_8029C674:
    lwz r3, lbl_8049DEA0
    la r30, lbl_8049DEE0
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_8029C6BC
    mulli r3, r3, 0x600
    addi r0, r31, 0x1200
    li r4, 0x0
    li r5, 0x600
    add r29, r0, r3
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x600
    bl DCFlushRange
    lwz r0, lbl_8049DEA0
    li r3, 0x0
    stbx r3, r30, r0
lbl_8029C6BC:
    lwz r0, lbl_8049DED0
    cmpwi r0, 0x0
    beq lbl_8029C724
    lwz r0, lbl_8049DF00
    cmplwi r0, 0x2
    beq lbl_8029C724
    lwz r3, lbl_8049DEA0
    addi r0, r31, 0x2400
    li r4, 0x480
    mulli r3, r3, 0x480
    add r3, r0, r3
    addi r5, r3, 0x180
    stw r3, 0x8(r1)
    addi r0, r3, 0x300
    stw r5, 0xc(r1)
    stw r0, 0x10(r1)
    bl DCInvalidateRange
    lwz r12, lbl_8049DED0
    addi r3, r1, 0x8
    lwz r4, lbl_8049DEC4
    mtctr r12
    bctrl
    lwz r3, 0x8(r1)
    li r4, 0x480
    bl DCFlushRangeNoSync
    b lbl_8029C778
lbl_8029C724:
    lwz r0, lbl_8049DED0
    cmpwi r0, 0x0
    bne lbl_8029C778
    lwz r3, lbl_8049DEA0
    la r30, lbl_8049DEDC
    lbzx r0, r30, r3
    cmpwi r0, 0x0
    beq lbl_8029C778
    mulli r3, r3, 0x480
    addi r0, r31, 0x2400
    li r4, 0x0
    li r5, 0x480
    add r29, r0, r3
    mr r3, r29
    bl memset
    mr r3, r29
    li r4, 0x480
    bl DCFlushRange
    lwz r0, lbl_8049DEA0
    li r3, 0x0
    stbx r3, r30, r0
lbl_8029C778:
    lis r3, 0xaaab
    lwz r5, lbl_8049DEA8
    subi r0, r3, 0x5555
    lwz r3, lbl_8049DEA0
    lwz r4, lbl_8049DEA4
    addi r7, r5, 0x1
    addi r3, r3, 0x1
    addi r5, r4, 0x1
    mulhwu r6, r0, r7
    mulhwu r4, r0, r5
    srwi r6, r6, 1
    mulhwu r0, r0, r3
    srwi r4, r4, 1
    mulli r6, r6, 0x3
    srwi r0, r0, 1
    mulli r4, r4, 0x3
    subf r6, r6, r7
    stw r6, lbl_8049DEA8
    mulli r0, r0, 0x3
    subf r4, r4, r5
    stw r4, lbl_8049DEA4
    subf r0, r0, r3
    stw r0, lbl_8049DEA0
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
