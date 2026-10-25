#include <revolution/IPC.h>
#include <revolution/OS.h>
#include <revolution/VI.h>

typedef enum {
    STM_IOCTL_REG_STM_EVENT = 0x1000,
    STM_IOCTL_HOT_RESET = 0x2001,
    STM_IOCTL_SHUTDOWN_TO_SBY = 0x2003,
    STM_IOCTL_UNREG_STM_EVENT = 0x3002,
    STM_IOCTL_SET_VI_DIM = 0x5001,
    STM_IOCTL_SET_IDLE_LED_MODE = 0x6002,
} OSStateTMIoctl;

static u8 StmEhInBuf[32] ALIGN(32);
static u8 StmEhOutBuf[32] ALIGN(32);

static u8 StmImInBuf[32] ALIGN(32);
static u8 StmImOutBuf[32] ALIGN(32);

static u8 StmVdInBuf[32] ALIGN(32);
static u8 StmVdOutBuf[32] ALIGN(32);

static OSStateCallback ResetCallback;
static OSStateCallback PowerCallback;

static BOOL StmVdInUse;

static BOOL StmEhRegistered;
static BOOL StmEhDesc;

static BOOL StmImDesc;

static BOOL StmReady;
static BOOL ResetDown;

static s32 AccessVIDimRegs(void);
static s32 __OSVIDimReplyHandler(s32 result, void* arg);
static void __OSRegisterStateEvent(void);
static void __OSDefaultResetCallback(void);
static void __OSDefaultPowerCallback(void);
static s32 __OSStateEventHandler(s32 result, void* arg);
static void LockUp(void);

OSStateCallback OSSetResetCallback(OSStateCallback callback) {
    BOOL enabled;
    OSStateCallback old;

    enabled = OSDisableInterrupts();

    old = ResetCallback;

    if(callback != NULL){
        ResetCallback = callback;
    }else{
        ResetCallback = __OSDefaultResetCallback;
    }

    if (!StmEhRegistered) {
        __OSRegisterStateEvent();
    }

    OSRestoreInterrupts(enabled);

    if(old == __OSDefaultResetCallback) return NULL;
    else return old;
}

OSStateCallback OSSetPowerCallback(OSStateCallback callback) {
    BOOL enabled;
    OSStateCallback old;

    enabled = OSDisableInterrupts();

    old = PowerCallback;
    
     if(callback != NULL){
        PowerCallback = callback;
    }else{
        PowerCallback = __OSDefaultPowerCallback;
    }


    if (!StmEhRegistered) {
        __OSRegisterStateEvent();
    }

    OSRestoreInterrupts(enabled);
    
    if(old == __OSDefaultPowerCallback) return NULL;
    else return old;
}

//unused
void OSGetResetButtonState(){
}

//unused
void OSGetResetSwitchState(){
}

// __OSInitSTM: definicion C reemplazada por asm (ver abajo)


//unused
void __OSFinalizeSTM(){
}

// __OSShutdownToSBY: definicion C reemplazada por asm (ver abajo)


//unused
void __OSShutdownToIDL(){
}

// __OSHotReset: definicion C reemplazada por asm (ver abajo)


//unused
void __OSHotResetForPDN(){
}

BOOL __OSGetResetButtonStateRaw(void) {
    return (!(PI_HW_REGS[PI_INTSR] & PI_INTSR_RSWST)) ? TRUE : FALSE;
}

//unused
void __OSIsSTMReady(){
}

//unused
void __OSSetVIAutoDimming(){
}

// __OSSetVIForceDimming: definicion C reemplazada por asm (ver abajo)


//unused
void __OSSetRFIdleForAutoDimming(){
}

//unused
s32 __OSSetIdleLEDMode(u32 mode) {
#define in_args ((u32*)StmImInBuf)

    if (!StmReady) {
        return -6;
    }

    in_args[0] = mode;

    return IOS_Ioctl(StmImDesc, STM_IOCTL_SET_IDLE_LED_MODE, StmImInBuf,
                     sizeof(StmImInBuf), StmImOutBuf, sizeof(StmImOutBuf));

#undef in_args
}

s32 __OSUnRegisterStateEvent(void) {
    IPCResult result;

    if (!StmEhRegistered) {
        return 0;
    }

    if (!StmReady) {
        return -6;
    }

    result = IOS_Ioctl(StmImDesc, STM_IOCTL_UNREG_STM_EVENT, StmImInBuf,
                       sizeof(StmImInBuf), StmImOutBuf, sizeof(StmImOutBuf));
    if (result == IPC_RESULT_OK) {
        StmEhRegistered = FALSE;
    }

    return result;
}

//unused
void __OSSetSlotLED(){
}

static s32 AccessVIDimRegs(void) {
    IPCResult result = IOS_IoctlAsync(
        StmImDesc, STM_IOCTL_SET_VI_DIM, StmVdInBuf, sizeof(StmVdInBuf),
        StmVdOutBuf, sizeof(StmVdOutBuf), __OSVIDimReplyHandler, NULL);
    return result != IPC_RESULT_OK ? result : 1;
}

// __OSVIDimReplyHandler: definicion C reemplazada por asm (ver abajo)


static void __OSRegisterStateEvent(void) {
    BOOL enabled = OSDisableInterrupts();

    if (IOS_IoctlAsync(StmEhDesc, STM_IOCTL_REG_STM_EVENT, StmEhInBuf,
                       sizeof(StmEhInBuf), StmEhOutBuf, sizeof(StmEhOutBuf),
                       __OSStateEventHandler, NULL) == IPC_RESULT_OK) {
        StmEhRegistered = TRUE;
    } else {
        StmEhRegistered = FALSE;
    }

    OSRestoreInterrupts(enabled);
}

static void __OSDefaultResetCallback(void) {}

static void __OSDefaultPowerCallback(void) {}

// __OSStateEventHandler: definicion C reemplazada por asm (ver abajo)


static void LockUp(void) {
    OSDisableInterrupts();
    ICFlashInvalidate();

    while (TRUE) {
        ;
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float PowerCallback_8049E368;
extern float ResetCallback_8049E36C;
extern float ResetDown_8049E350;
extern float StmEhDesc_8049E35C;
extern float StmEhRegistered_8049E360;
extern float StmImDesc_8049E358;
extern float StmReady_8049E354;
extern float StmVdInUse_8049E364;
extern u8 StmEhInBuf_80465A60[];
extern u8 StmEhOutBuf_80465A80[];
extern u8 at_955_8038D1E0[];
extern u8 at_956_8038D1F4[];
extern u8 lbl_8038D208[];
extern u8 lbl_8038D214[];
extern u8 lbl_8038D24C[];
extern u8 lbl_8038D284[];
extern u8 lbl_80465AA0[];
extern u8 lbl_80465AC0[];
extern u8 lbl_80465AE0[];
extern u8 lbl_80465B00[];

// asm_to_cpp: __OSInitSTM
asm BOOL __OSInitSTM(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, __OSDefaultPowerCallback@ha
    lis r3, __OSDefaultResetCallback@ha
    stw r0, 0x14(r1)
    addi r4, r4, __OSDefaultPowerCallback@l
    addi r3, r3, __OSDefaultResetCallback@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r0, StmReady_8049E354
    stw r4, PowerCallback_8049E368
    cmpwi r0, 0x0
    stw r3, ResetCallback_8049E36C
    stw r31, ResetDown_8049E350
    beq lbl_8031E6C8
    li r3, 0x1
    b lbl_8031E780
lbl_8031E6C8:
    lis r3, at_955_8038D1E0@ha
    stw r31, StmVdInUse_8049E364
    li r4, 0x0
    addi r3, r3, at_955_8038D1E0@l
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, StmImDesc_8049E358
    bge lbl_8031E6F4
    stw r31, StmReady_8049E354
    li r3, 0x0
    b lbl_8031E780
lbl_8031E6F4:
    lis r3, at_956_8038D1F4@ha
    li r4, 0x0
    addi r3, r3, at_956_8038D1F4@l
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, StmEhDesc_8049E35C
    bge lbl_8031E71C
    stw r31, StmReady_8049E354
    li r3, 0x0
    b lbl_8031E780
lbl_8031E71C:
    bl OSDisableInterrupts
    mr r30, r3
    lis r5, StmEhInBuf_80465A60@ha
    lis r7, StmEhOutBuf_80465A80@ha
    lis r9, __OSStateEventHandler@ha
    lwz r3, StmEhDesc_8049E35C
    addi r5, r5, StmEhInBuf_80465A60@l
    addi r7, r7, StmEhOutBuf_80465A80@l
    addi r9, r9, __OSStateEventHandler@l
    li r4, 0x1000
    li r6, 0x20
    li r8, 0x20
    li r10, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bne lbl_8031E768
    li r0, 0x1
    stw r0, StmEhRegistered_8049E360
    b lbl_8031E76C
lbl_8031E768:
    stw r31, StmEhRegistered_8049E360
lbl_8031E76C:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
    li r3, 0x1
    stw r0, StmReady_8049E354
lbl_8031E780:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __OSShutdownToSBY
asm void __OSShutdownToSBY(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x14(r1)
    li r0, 0x0
    sth r0, 0x2002(r3)
    lwz r0, StmReady_8049E354
    cmpwi r0, 0x0
    bne lbl_8031E7D8
    lis r3, lbl_8038D208@ha
    lis r5, lbl_8038D214@ha
    addi r3, r3, lbl_8038D208@l
    li r4, 0x15c
    addi r5, r5, lbl_8038D214@l
    opword 0x4CC63182
    bl OSPanic
lbl_8031E7D8:
    lis r4, lbl_80465AA0@ha
    li r0, 0x0
    lis r7, lbl_80465AC0@ha
    stw r0, lbl_80465AA0@l(r4)
    addi r5, r4, lbl_80465AA0@l
    lwz r3, StmImDesc_8049E358
    addi r7, r7, lbl_80465AC0@l
    li r4, 0x2003
    li r6, 0x20
    li r8, 0x20
    bl IOS_Ioctl
    bl OSDisableInterrupts
    bl ICFlashInvalidate
lbl_8031E80C:
    b lbl_8031E80C
}

// asm_to_cpp: __OSHotReset
asm void __OSHotReset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x14(r1)
    li r0, 0x0
    sth r0, 0x2002(r3)
    lwz r0, StmReady_8049E354
    cmpwi r0, 0x0
    bne lbl_8031E850
    lis r3, lbl_8038D208@ha
    lis r5, lbl_8038D24C@ha
    addi r3, r3, lbl_8038D208@l
    li r4, 0x19c
    addi r5, r5, lbl_8038D24C@l
    opword 0x4CC63182
    bl OSPanic
lbl_8031E850:
    lis r5, lbl_80465AA0@ha
    lis r7, lbl_80465AC0@ha
    lwz r3, StmImDesc_8049E358
    addi r5, r5, lbl_80465AA0@l
    addi r7, r7, lbl_80465AC0@l
    li r4, 0x2001
    li r6, 0x20
    li r8, 0x20
    bl IOS_Ioctl
    bl OSDisableInterrupts
    bl ICFlashInvalidate
lbl_8031E87C:
    b lbl_8031E87C
}

// asm_to_cpp: __OSSetVIForceDimming
asm s32 __OSSetVIForceDimming(u32 arg0, u32 arg1, u32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, StmReady_8049E354
    cmpwi r0, 0x0
    bne lbl_8031E8B8
    li r3, -0xa
    b lbl_8031E95C
lbl_8031E8B8:
    bl OSDisableInterrupts
    lwz r0, StmVdInUse_8049E364
    cmpwi r0, 0x0
    beq lbl_8031E8D4
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8031E95C
lbl_8031E8D4:
    li r0, 0x1
    stw r0, StmVdInUse_8049E364
    bl OSRestoreInterrupts
    slwi r0, r29, 7
    lis r3, lbl_80465AE0@ha
    or r4, r0, r31
    lis r7, lbl_80465B00@ha
    slwi r0, r30, 3
    addi r5, r3, lbl_80465AE0@l
    li r12, 0x0
    li r11, -0x1
    or r4, r4, r0
    lis r0, 0xffff
    stw r4, lbl_80465AE0@l(r3)
    lis r9, __OSVIDimReplyHandler@ha
    lwz r3, StmImDesc_8049E358
    addi r7, r7, lbl_80465B00@l
    stw r12, 0x4(r5)
    addi r9, r9, __OSVIDimReplyHandler@l
    li r4, 0x5001
    li r6, 0x20
    stw r12, 0x8(r5)
    li r8, 0x20
    li r10, 0x0
    stw r12, 0xc(r5)
    stw r12, 0x10(r5)
    stw r11, 0x14(r5)
    stw r0, 0x18(r5)
    stw r12, 0x1c(r5)
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    beq lbl_8031E958
    b lbl_8031E95C
lbl_8031E958:
    li r3, 0x1
lbl_8031E95C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __OSVIDimReplyHandler
asm static s32 __OSVIDimReplyHandler(s32 result, void* arg) {
    nofralloc
    li r0, 0x0
    li r3, 0x0
    stw r0, StmVdInUse_8049E364
    blr
}

// asm_to_cpp: __OSStateEventHandler
asm static s32 __OSStateEventHandler(s32 result, void* arg) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    beq lbl_8031EA7C
    lis r3, lbl_8038D208@ha
    lis r5, lbl_8038D284@ha
    addi r3, r3, lbl_8038D208@l
    li r4, 0x334
    addi r5, r5, lbl_8038D284@l
    opword 0x4CC63182
    bl OSPanic
lbl_8031EA7C:
    lis r3, StmEhOutBuf_80465A80@ha
    li r0, 0x0
    lwz r3, StmEhOutBuf_80465A80@l(r3)
    stw r0, StmEhRegistered_8049E360
    subis r0, r3, 0x2
    cmplwi r0, 0x0
    bne lbl_8031EB4C
    lis r3, 0xcc00
    lwz r0, 0x3000(r3)
    rlwinm. r0, r0, 0, 15, 15
    bne lbl_8031EAB0
    li r0, 0x1
    b lbl_8031EAB4
lbl_8031EAB0:
    li r0, 0x0
lbl_8031EAB4:
    cmpwi r0, 0x0
    beq lbl_8031EAF0
    bl OSDisableInterrupts
    lis r4, __OSDefaultResetCallback@ha
    lwz r12, ResetCallback_8049E36C
    addi r4, r4, __OSDefaultResetCallback@l
    li r0, 0x1
    mr r31, r3
    stw r0, ResetDown_8049E350
    stw r4, ResetCallback_8049E36C
    mtctr r12
    bctrl
    mr r3, r31
    bl OSRestoreInterrupts
    bl VIResetDimmingCount
lbl_8031EAF0:
    bl OSDisableInterrupts
    mr r31, r3
    lis r5, StmEhInBuf_80465A60@ha
    lis r7, StmEhOutBuf_80465A80@ha
    lis r9, __OSStateEventHandler@ha
    lwz r3, StmEhDesc_8049E35C
    addi r5, r5, StmEhInBuf_80465A60@l
    addi r7, r7, StmEhOutBuf_80465A80@l
    addi r9, r9, __OSStateEventHandler@l
    li r4, 0x1000
    li r6, 0x20
    li r8, 0x20
    li r10, 0x0
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bne lbl_8031EB3C
    li r0, 0x1
    stw r0, StmEhRegistered_8049E360
    b lbl_8031EB44
lbl_8031EB3C:
    li r0, 0x0
    stw r0, StmEhRegistered_8049E360
lbl_8031EB44:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8031EB4C:
    lis r3, StmEhOutBuf_80465A80@ha
    lwz r0, StmEhOutBuf_80465A80@l(r3)
    cmplwi r0, 0x800
    bne lbl_8031EB84
    bl OSDisableInterrupts
    lis r4, __OSDefaultPowerCallback@ha
    lwz r12, PowerCallback_8049E368
    addi r4, r4, __OSDefaultPowerCallback@l
    mr r31, r3
    stw r4, PowerCallback_8049E368
    mtctr r12
    bctrl
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8031EB84:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
