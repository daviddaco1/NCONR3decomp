#include "types.h"

// Translation unit: src/revolution/os/unk_8031C584.cpp
// Total functions: 38

// Small Data symbols (@sda21)
extern float IpcBufferHi_8049E348;
extern float IpcBufferLo_8049D220;
extern float Reschedule_8049E338;
extern float RunQueueBits_8049E340;
extern float RunQueueHint_8049E33C;
extern float SwitchThreadCallback_8049D218;
extern float lbl_8049D1E8;

// Global data symbols (@ha/@l)
extern u8 DefaultThread_80465058[];
extern u8 __OSErrorTable[];
extern u8 _stack_addr[];
extern u8 _stack_end[];
extern u8 lbl_80381340[];
extern u8 lbl_80381370[];
extern u8 lbl_803813A0[];
extern u8 lbl_8038CDE0[];
extern u8 lbl_80465370[];
extern u8 lbl_80465470[];

// Forward declarations
extern void OSCancelAlarm();
extern void OSCancelThread();
extern void OSClearContext();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSEnableInterrupts();
extern void OSEnableScheduler();
extern void OSGetAlarmUserData();
extern void OSGetCurrentContext();
extern void OSGetStackPointer();
extern void OSGetTick();
extern void OSGetTime();
extern void OSInitContext();
extern void OSInitThreadQueue();
extern void OSLoadContext();
extern void OSRestoreInterrupts();
extern void OSSaveContext();
extern void OSSetAlarm();
extern void OSSetCurrentContext();
extern void OSSleepThread();
extern void SelectThread();
extern void __OSCancelInternalAlarms();
extern void __OSGetSystemTime();
extern void __OSInitIPCBuffer();
extern void __OSReschedule();
extern void __OSThreadInit();
extern void __OSUnlockAllMutex();
extern void __div2i();
extern void __mod2i();
extern void _restgpr_20();
extern void _restgpr_26();
extern void _savegpr_20();
extern void _savegpr_26();
extern void fn_8031474C();
extern void fn_8031C584();
extern void fn_8031C81C();
extern void fn_8031C828();
extern void fn_8031C8CC();
extern void fn_8031C934();
extern void fn_8031C970();
extern void fn_8031CB24();
extern void fn_8031CDB4();
extern void fn_8031CDF0();
extern void fn_8031D05C();
extern void fn_8031D320();
extern void fn_8031D460();
extern void fn_8031D6F8();
extern void fn_8031D978();
extern void fn_8031DA6C();
extern void fn_8031DAEC();
extern void fn_8031DC18();
extern void fn_8031DC70();
extern void fn_8031DDE0();
extern void fn_8031DFA8();
extern void fn_8031E248();
extern void fn_8031E358();
extern void fn_8031E3C8();
extern void fn_8031E440();
extern void fn_8031E480();
extern void fn_8031E488();

// ----------------------------------------------------------------------------
// fn_8031C584
// ----------------------------------------------------------------------------
asm void fn_8031C584() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __OSThreadInit
// ----------------------------------------------------------------------------
asm void __OSThreadInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x2
    li r6, 0x1
    stw r0, 0x24(r1)
    li r4, 0x0
    li r5, 0x10
    li r0, -0x1
    stw r31, 0x1c(r1)
    lis r31, DefaultThread_80465058@ha
    addi r31, r31, DefaultThread_80465058@l
    stw r30, 0x18(r1)
    addi r30, r31, 0x0
    stw r29, 0x14(r1)
    lis r29, 0x8000
    sth r3, 0x2c8(r30)
    mr r3, r30
    sth r6, 0x2ca(r30)
    stw r5, 0x2d4(r30)
    stw r5, 0x2d0(r30)
    stw r4, 0x2cc(r30)
    stw r0, 0x2d8(r30)
    stw r4, 0x2f0(r30)
    stw r4, 0x2ec(r30)
    stw r4, 0x2e8(r30)
    stw r4, 0x2f8(r30)
    stw r4, 0x2f4(r30)
    stw r30, 0xd8(r29)
    bl OSClearContext
    mr r3, r30
    bl OSSetCurrentContext
    lis r4, _stack_addr@ha
    lis r5, _stack_end@ha
    addi r4, r4, _stack_addr@l
    lis r3, 0xdeae
    addi r5, r5, _stack_end@l
    stw r4, 0x304(r30)
    subi r0, r3, 0x4542
    mr r4, r30
    stw r5, 0x308(r30)
    stw r0, 0x0(r5)
    lwz r12, SwitchThreadCallback_8049D218
    lwz r3, 0xe4(r29)
    mtctr r12
    bctrl
    stw r30, 0xe4(r29)
    bl OSGetStackPointer
    lwz r4, 0xe4(r29)
    lwz r4, 0x308(r4)
    addi r8, r4, 0x4
    cmplw cr1, r8, r3
    bge cr1, lbl_8031C714
    subf r5, r8, r3
    subi r6, r3, 0x20
    addi r4, r5, 0x3
    srawi r0, r4, 2
    addze r0, r0
    cmpwi r0, 0x8
    ble lbl_8031C6EC
    li r7, 0x0
    bgt cr1, lbl_8031C6A0
    clrrwi. r0, r5, 31
    li r5, 0x1
    bne lbl_8031C694
    clrrwi. r0, r4, 31
    beq lbl_8031C694
    li r5, 0x0
lbl_8031C694:
    cmpwi r5, 0x0
    beq lbl_8031C6A0
    li r7, 0x1
lbl_8031C6A0:
    cmpwi r7, 0x0
    beq lbl_8031C6EC
    addi r0, r6, 0x1f
    li r4, 0x0
    subf r0, r8, r0
    srwi r0, r0, 5
    mtctr r0
    cmplw r8, r6
    bge lbl_8031C6EC
lbl_8031C6C4:
    stw r4, 0x0(r8)
    stw r4, 0x4(r8)
    stw r4, 0x8(r8)
    stw r4, 0xc(r8)
    stw r4, 0x10(r8)
    stw r4, 0x14(r8)
    stw r4, 0x18(r8)
    stw r4, 0x1c(r8)
    addi r8, r8, 0x20
    bdnz lbl_8031C6C4
lbl_8031C6EC:
    addi r0, r3, 0x3
    li r4, 0x0
    subf r0, r8, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r8, r3
    bge lbl_8031C714
lbl_8031C708:
    stw r4, 0x0(r8)
    addi r8, r8, 0x4
    bdnz lbl_8031C708
lbl_8031C714:
    li r3, 0x0
    li r0, 0x2
    stw r3, RunQueueBits_8049E340
    addi r4, r31, 0x318
    stw r3, RunQueueHint_8049E33C
    mtctr r0
lbl_8031C72C:
    stw r3, 0x4(r4)
    stw r3, 0x0(r4)
    stw r3, 0xc(r4)
    stw r3, 0x8(r4)
    stw r3, 0x14(r4)
    stw r3, 0x10(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x18(r4)
    stw r3, 0x24(r4)
    stw r3, 0x20(r4)
    stw r3, 0x2c(r4)
    stw r3, 0x28(r4)
    stw r3, 0x34(r4)
    stw r3, 0x30(r4)
    stw r3, 0x3c(r4)
    stw r3, 0x38(r4)
    stw r3, 0x44(r4)
    stw r3, 0x40(r4)
    stw r3, 0x4c(r4)
    stw r3, 0x48(r4)
    stw r3, 0x54(r4)
    stw r3, 0x50(r4)
    stw r3, 0x5c(r4)
    stw r3, 0x58(r4)
    stw r3, 0x64(r4)
    stw r3, 0x60(r4)
    stw r3, 0x6c(r4)
    stw r3, 0x68(r4)
    stw r3, 0x74(r4)
    stw r3, 0x70(r4)
    stw r3, 0x7c(r4)
    stw r3, 0x78(r4)
    addi r4, r4, 0x80
    bdnz lbl_8031C72C
    li r4, 0x0
    lis r3, 0x8000
    stw r4, 0xe0(r3)
    stw r4, 0xdc(r3)
    stw r30, 0xdc(r3)
    b lbl_8031C7D0
    stw r30, 0x2fc(r4)
lbl_8031C7D0:
    li r29, 0x0
    stw r4, 0x300(r30)
    lis r4, 0x8000
    addi r3, r31, 0x418
    stw r29, 0x2fc(r30)
    stw r30, 0xe0(r4)
    bl OSClearContext
    stw r29, Reschedule_8049E338
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSInitThreadQueue
// ----------------------------------------------------------------------------
asm void OSInitThreadQueue() {
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031C81C
// ----------------------------------------------------------------------------
asm void fn_8031C81C() {
    nofralloc
    lis r3, 0x8000
    lwz r3, 0xe4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031C828
// ----------------------------------------------------------------------------
asm void fn_8031C828() {
    nofralloc
    lhz r0, 0x2c8(r3)
    li r3, 0x1
    cmplwi r0, 0x8
    beq lbl_8031C844
    cmpwi r0, 0x0
    beq lbl_8031C844
    li r3, 0x0
lbl_8031C844:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// OSDisableScheduler
// ----------------------------------------------------------------------------
asm void OSDisableScheduler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, Reschedule_8049E338
    addi r0, r31, 0x1
    stw r0, Reschedule_8049E338
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSEnableScheduler
// ----------------------------------------------------------------------------
asm void OSEnableScheduler() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, Reschedule_8049E338
    subi r0, r31, 0x1
    stw r0, Reschedule_8049E338
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031C8CC
// ----------------------------------------------------------------------------
asm void fn_8031C8CC() {
    nofralloc
    lwz r5, 0x2e0(r3)
    lwz r4, 0x2dc(r3)
    cmpwi r5, 0x0
    lwz r6, 0x2e4(r3)
    bne lbl_8031C8E8
    stw r6, 0x4(r4)
    b lbl_8031C8EC
lbl_8031C8E8:
    stw r6, 0x2e4(r5)
lbl_8031C8EC:
    cmpwi r6, 0x0
    bne lbl_8031C8FC
    stw r5, 0x0(r4)
    b lbl_8031C900
lbl_8031C8FC:
    stw r5, 0x2e0(r6)
lbl_8031C900:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8031C928
    lwz r0, 0x2d0(r3)
    li r4, 0x1
    lwz r5, RunQueueBits_8049E340
    subfic r0, r0, 0x1f
    slw r0, r4, r0
    andc r0, r5, r0
    stw r0, RunQueueBits_8049E340
lbl_8031C928:
    li r0, 0x0
    stw r0, 0x2dc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031C934
// ----------------------------------------------------------------------------
asm void fn_8031C934() {
    nofralloc
    lwz r4, 0x2d4(r3)
    lwz r3, 0x2f4(r3)
    b lbl_8031C960
lbl_8031C940:
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8031C95C
    lwz r0, 0x2d0(r5)
    cmpw r0, r4
    bge lbl_8031C95C
    mr r4, r0
lbl_8031C95C:
    lwz r3, 0x10(r3)
lbl_8031C960:
    cmpwi r3, 0x0
    bne lbl_8031C940
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_8031C970
// ----------------------------------------------------------------------------
asm void fn_8031C970() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0x2c8(r3)
    cmpwi r0, 0x3
    beq lbl_8031CB08
    bge lbl_8031C9AC
    cmpwi r0, 0x1
    beq lbl_8031C9B8
    bge lbl_8031CAFC
    b lbl_8031CB08
lbl_8031C9AC:
    cmpwi r0, 0x5
    bge lbl_8031CB08
    b lbl_8031CA24
lbl_8031C9B8:
    bl fn_8031C8CC
    lis r3, lbl_80465370@ha
    slwi r0, r31, 3
    addi r3, r3, lbl_80465370@l
    stw r31, 0x2d0(r30)
    add r3, r3, r0
    stw r3, 0x2dc(r30)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_8031C9E8
    stw r30, 0x0(r3)
    b lbl_8031C9EC
lbl_8031C9E8:
    stw r30, 0x2e0(r4)
lbl_8031C9EC:
    li r0, 0x0
    stw r4, 0x2e4(r30)
    lwz r4, 0x2dc(r30)
    li r3, 0x1
    stw r0, 0x2e0(r30)
    stw r30, 0x4(r4)
    lwz r0, 0x2d0(r30)
    lwz r4, RunQueueBits_8049E340
    subfic r0, r0, 0x1f
    slw r0, r3, r0
    or r0, r4, r0
    stw r0, RunQueueBits_8049E340
    stw r3, RunQueueHint_8049E33C
    b lbl_8031CB08
lbl_8031CA24:
    lwz r6, 0x2e0(r3)
    lwz r7, 0x2e4(r3)
    cmpwi r6, 0x0
    bne lbl_8031CA40
    lwz r5, 0x2dc(r3)
    stw r7, 0x4(r5)
    b lbl_8031CA44
lbl_8031CA40:
    stw r7, 0x2e4(r6)
lbl_8031CA44:
    cmpwi r7, 0x0
    bne lbl_8031CA58
    lwz r5, 0x2dc(r3)
    stw r6, 0x0(r5)
    b lbl_8031CA5C
lbl_8031CA58:
    stw r6, 0x2e0(r7)
lbl_8031CA5C:
    stw r4, 0x2d0(r3)
    lwz r5, 0x2dc(r3)
    lwz r6, 0x0(r5)
    b lbl_8031CA70
lbl_8031CA6C:
    lwz r6, 0x2e0(r6)
lbl_8031CA70:
    cmpwi r6, 0x0
    beq lbl_8031CA88
    lwz r4, 0x2d0(r6)
    lwz r0, 0x2d0(r3)
    cmpw r4, r0
    ble lbl_8031CA6C
lbl_8031CA88:
    cmpwi r6, 0x0
    bne lbl_8031CAC0
    lwz r4, 0x4(r5)
    cmpwi r4, 0x0
    bne lbl_8031CAA4
    stw r3, 0x0(r5)
    b lbl_8031CAA8
lbl_8031CAA4:
    stw r3, 0x2e0(r4)
lbl_8031CAA8:
    li r0, 0x0
    stw r4, 0x2e4(r3)
    lwz r4, 0x2dc(r3)
    stw r0, 0x2e0(r3)
    stw r3, 0x4(r4)
    b lbl_8031CAE8
lbl_8031CAC0:
    stw r6, 0x2e0(r3)
    lwz r4, 0x2e4(r6)
    stw r3, 0x2e4(r6)
    cmpwi r4, 0x0
    stw r4, 0x2e4(r3)
    bne lbl_8031CAE4
    lwz r4, 0x2dc(r3)
    stw r3, 0x0(r4)
    b lbl_8031CAE8
lbl_8031CAE4:
    stw r3, 0x2e0(r4)
lbl_8031CAE8:
    lwz r3, 0x2f0(r3)
    cmpwi r3, 0x0
    beq lbl_8031CB08
    lwz r3, 0x8(r3)
    b lbl_8031CB0C
lbl_8031CAFC:
    li r0, 0x1
    stw r0, RunQueueHint_8049E33C
    stw r4, 0x2d0(r3)
lbl_8031CB08:
    li r3, 0x0
lbl_8031CB0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031CB24
// ----------------------------------------------------------------------------
asm void fn_8031CB24() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
lbl_8031CB38:
    lwz r0, 0x2cc(r3)
    cmpwi r0, 0x0
    bgt lbl_8031CB60
    lwz r0, 0x2d0(r3)
    cmpw r0, r31
    ble lbl_8031CB60
    mr r4, r31
    bl fn_8031C970
    cmpwi r3, 0x0
    bne lbl_8031CB38
lbl_8031CB60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SelectThread
// ----------------------------------------------------------------------------
asm void SelectThread() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, Reschedule_8049E338
    cmpwi r0, 0x0
    ble lbl_8031CBA0
    li r3, 0x0
    b lbl_8031CD84
lbl_8031CBA0:
    bl OSGetCurrentContext
    lis r4, 0x8000
    lwz r5, 0xe4(r4)
    cmplw r3, r5
    beq lbl_8031CBBC
    li r3, 0x0
    b lbl_8031CD84
lbl_8031CBBC:
    cmpwi r5, 0x0
    beq lbl_8031CC84
    lhz r0, 0x2c8(r5)
    cmplwi r0, 0x2
    bne lbl_8031CC60
    cmpwi r30, 0x0
    bne lbl_8031CBF4
    lwz r3, RunQueueBits_8049E340
    lwz r0, 0x2d0(r5)
    cntlzw r3, r3
    cmpw r0, r3
    bgt lbl_8031CBF4
    li r3, 0x0
    b lbl_8031CD84
lbl_8031CBF4:
    li r0, 0x1
    lis r3, lbl_80465370@ha
    sth r0, 0x2c8(r5)
    addi r3, r3, lbl_80465370@l
    lwz r0, 0x2d0(r5)
    slwi r0, r0, 3
    add r3, r3, r0
    stw r3, 0x2dc(r5)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_8031CC28
    stw r5, 0x0(r3)
    b lbl_8031CC2C
lbl_8031CC28:
    stw r5, 0x2e0(r4)
lbl_8031CC2C:
    stw r4, 0x2e4(r5)
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x2e0(r5)
    lwz r4, 0x2dc(r5)
    stw r5, 0x4(r4)
    lwz r0, 0x2d0(r5)
    lwz r4, RunQueueBits_8049E340
    subfic r0, r0, 0x1f
    slw r0, r3, r0
    or r0, r4, r0
    stw r0, RunQueueBits_8049E340
    stw r3, RunQueueHint_8049E33C
lbl_8031CC60:
    lhz r0, 0x1a2(r5)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_8031CC84
    mr r3, r5
    bl OSSaveContext
    cmpwi r3, 0x0
    beq lbl_8031CC84
    li r3, 0x0
    b lbl_8031CD84
lbl_8031CC84:
    lwz r0, RunQueueBits_8049E340
    cmpwi r0, 0x0
    bne lbl_8031CCE8
    lwz r12, SwitchThreadCallback_8049D218
    lis r31, 0x8000
    lwz r3, 0xe4(r31)
    li r4, 0x0
    mtctr r12
    bctrl
    li r0, 0x0
    lis r3, lbl_80465470@ha
    stw r0, 0xe4(r31)
    addi r3, r3, lbl_80465470@l
    bl OSSetCurrentContext
lbl_8031CCBC:
    bl OSEnableInterrupts
lbl_8031CCC0:
    lwz r0, RunQueueBits_8049E340
    cmpwi r0, 0x0
    beq lbl_8031CCC0
    bl OSDisableInterrupts
    lwz r0, RunQueueBits_8049E340
    cmpwi r0, 0x0
    beq lbl_8031CCBC
    lis r3, lbl_80465470@ha
    addi r3, r3, lbl_80465470@l
    bl OSClearContext
lbl_8031CCE8:
    li r4, 0x0
    lis r3, lbl_80465370@ha
    stw r4, RunQueueHint_8049E33C
    addi r3, r3, lbl_80465370@l
    lwz r0, RunQueueBits_8049E340
    cntlzw r5, r0
    slwi r0, r5, 3
    lwzux r30, r3, r0
    lwz r6, 0x2e0(r30)
    cmpwi r6, 0x0
    bne lbl_8031CD1C
    stw r4, 0x4(r3)
    b lbl_8031CD20
lbl_8031CD1C:
    stw r4, 0x2e4(r6)
lbl_8031CD20:
    cmpwi r6, 0x0
    stw r6, 0x0(r3)
    bne lbl_8031CD44
    subfic r0, r5, 0x1f
    li r3, 0x1
    lwz r4, RunQueueBits_8049E340
    slw r0, r3, r0
    andc r0, r4, r0
    stw r0, RunQueueBits_8049E340
lbl_8031CD44:
    li r3, 0x0
    li r0, 0x2
    stw r3, 0x2dc(r30)
    lis r31, 0x8000
    mr r4, r30
    sth r0, 0x2c8(r30)
    lwz r12, SwitchThreadCallback_8049D218
    lwz r3, 0xe4(r31)
    mtctr r12
    bctrl
    stw r30, 0xe4(r31)
    mr r3, r30
    bl OSSetCurrentContext
    mr r3, r30
    bl OSLoadContext
    mr r3, r30
lbl_8031CD84:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __OSReschedule
// ----------------------------------------------------------------------------
asm void __OSReschedule() {
    nofralloc
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beqlr
    li r3, 0x0
    b SelectThread
    blr
}

// ----------------------------------------------------------------------------
// fn_8031CDB4
// ----------------------------------------------------------------------------
asm void fn_8031CDB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    mr r31, r3
    li r3, 0x1
    bl SelectThread
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031CDF0
// ----------------------------------------------------------------------------
asm void fn_8031CDF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r8, 0x0
    mr r31, r3
    mr r26, r5
    mr r27, r6
    mr r28, r7
    blt lbl_8031CE24
    cmpwi r8, 0x1f
    ble lbl_8031CE2C
lbl_8031CE24:
    li r3, 0x0
    b lbl_8031D044
lbl_8031CE2C:
    li r30, 0x0
    li r7, 0x1
    clrlwi r0, r9, 31
    li r29, -0x1
    clrrwi r6, r6, 3
    sth r7, 0x2c8(r3)
    subi r5, r6, 0x8
    sth r0, 0x2ca(r3)
    stw r8, 0x2d4(r3)
    stw r8, 0x2d0(r3)
    stw r7, 0x2cc(r3)
    stw r29, 0x2d8(r3)
    stw r30, 0x2f0(r3)
    stw r30, 0x2ec(r3)
    stw r30, 0x2e8(r3)
    stw r30, 0x2f8(r3)
    stw r30, 0x2f4(r3)
    stw r30, -0x8(r6)
    stw r30, -0x4(r6)
    bl OSInitContext
    lis r5, fn_8031D05C@ha
    subf r4, r28, r27
    addi r5, r5, fn_8031D05C@l
    lis r3, 0xdeae
    stw r5, 0x84(r31)
    subi r0, r3, 0x4542
    stw r26, 0xc(r31)
    stw r27, 0x304(r31)
    stw r4, 0x308(r31)
    stw r0, 0x0(r4)
    stw r30, 0x30c(r31)
    stw r30, 0x310(r31)
    stw r30, 0x314(r31)
    bl OSDisableInterrupts
    lis r4, __OSErrorTable@ha
    addi r4, r4, __OSErrorTable@l
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    beq lbl_8031D00C
    lwz r5, 0x19c(r31)
    li r0, 0x2
    lhz r4, 0x1a2(r31)
    addi r6, r31, 0x90
    ori r5, r5, 0x900
    addi r7, r31, 0x1c8
    ori r4, r4, 0x1
    stw r5, 0x19c(r31)
    sth r4, 0x1a2(r31)
    lwz r4, lbl_8049D1E8
    rlwinm r4, r4, 0, 24, 28
    ori r4, r4, 0x4
    stw r4, 0x194(r31)
    mtctr r0
lbl_8031CF00:
    stw r29, 0x4(r6)
    stw r29, 0x0(r6)
    stw r29, 0x4(r7)
    stw r29, 0x0(r7)
    stw r29, 0xc(r6)
    stw r29, 0x8(r6)
    stw r29, 0xc(r7)
    stw r29, 0x8(r7)
    stw r29, 0x14(r6)
    stw r29, 0x10(r6)
    stw r29, 0x14(r7)
    stw r29, 0x10(r7)
    stw r29, 0x1c(r6)
    stw r29, 0x18(r6)
    stw r29, 0x1c(r7)
    stw r29, 0x18(r7)
    stw r29, 0x24(r6)
    stw r29, 0x20(r6)
    stw r29, 0x24(r7)
    stw r29, 0x20(r7)
    stw r29, 0x2c(r6)
    stw r29, 0x28(r6)
    stw r29, 0x2c(r7)
    stw r29, 0x28(r7)
    stw r29, 0x34(r6)
    stw r29, 0x30(r6)
    stw r29, 0x34(r7)
    stw r29, 0x30(r7)
    stw r29, 0x3c(r6)
    stw r29, 0x38(r6)
    stw r29, 0x3c(r7)
    stw r29, 0x38(r7)
    stw r29, 0x44(r6)
    stw r29, 0x40(r6)
    stw r29, 0x44(r7)
    stw r29, 0x40(r7)
    stw r29, 0x4c(r6)
    stw r29, 0x48(r6)
    stw r29, 0x4c(r7)
    stw r29, 0x48(r7)
    stw r29, 0x54(r6)
    stw r29, 0x50(r6)
    stw r29, 0x54(r7)
    stw r29, 0x50(r7)
    stw r29, 0x5c(r6)
    stw r29, 0x58(r6)
    stw r29, 0x5c(r7)
    stw r29, 0x58(r7)
    stw r29, 0x64(r6)
    stw r29, 0x60(r6)
    stw r29, 0x64(r7)
    stw r29, 0x60(r7)
    stw r29, 0x6c(r6)
    stw r29, 0x68(r6)
    stw r29, 0x6c(r7)
    stw r29, 0x68(r7)
    stw r29, 0x74(r6)
    stw r29, 0x70(r6)
    stw r29, 0x74(r7)
    stw r29, 0x70(r7)
    stw r29, 0x7c(r6)
    stw r29, 0x78(r6)
    addi r6, r6, 0x80
    stw r29, 0x7c(r7)
    stw r29, 0x78(r7)
    addi r7, r7, 0x80
    bdnz lbl_8031CF00
lbl_8031D00C:
    lis r4, 0x8000
    lwz r5, 0xe0(r4)
    cmpwi r5, 0x0
    bne lbl_8031D024
    stw r31, 0xdc(r4)
    b lbl_8031D028
lbl_8031D024:
    stw r31, 0x2fc(r5)
lbl_8031D028:
    li r0, 0x0
    stw r5, 0x300(r31)
    lis r4, 0x8000
    stw r0, 0x2fc(r31)
    stw r31, 0xe0(r4)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8031D044:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031D05C
// ----------------------------------------------------------------------------
asm void fn_8031D05C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lis r31, 0x8000
    mr r29, r3
    lwz r30, 0xe4(r31)
    mr r3, r30
    bl OSClearContext
    lhz r0, 0x2ca(r30)
    clrlwi. r0, r0, 31
    beq lbl_8031D0E0
    lwz r4, 0x2fc(r30)
    lwz r3, 0x300(r30)
    cmpwi r4, 0x0
    bne lbl_8031D0B8
    stw r3, 0xe0(r31)
    b lbl_8031D0BC
lbl_8031D0B8:
    stw r3, 0x300(r4)
lbl_8031D0BC:
    cmpwi r3, 0x0
    bne lbl_8031D0D0
    lis r3, 0x8000
    stw r4, 0xdc(r3)
    b lbl_8031D0D4
lbl_8031D0D0:
    stw r4, 0x2fc(r3)
lbl_8031D0D4:
    li r0, 0x0
    sth r0, 0x2c8(r30)
    b lbl_8031D0EC
lbl_8031D0E0:
    li r0, 0x8
    sth r0, 0x2c8(r30)
    stw r28, 0x2d8(r30)
lbl_8031D0EC:
    mr r3, r30
    bl __OSUnlockAllMutex
    addi r3, r30, 0x2e8
    bl fn_8031D978
    li r0, 0x1
    stw r0, RunQueueHint_8049E33C
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031D118
    li r3, 0x0
    bl SelectThread
lbl_8031D118:
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSCancelThread
// ----------------------------------------------------------------------------
asm void OSCancelThread() {
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
    bl __OSCancelInternalAlarms
    lhz r0, 0x2c8(r30)
    cmpwi r0, 0x3
    beq lbl_8031D270
    bge lbl_8031D188
    cmpwi r0, 0x1
    beq lbl_8031D194
    bge lbl_8031D1AC
    b lbl_8031D270
lbl_8031D188:
    cmpwi r0, 0x5
    bge lbl_8031D270
    b lbl_8031D1B8
lbl_8031D194:
    lwz r0, 0x2cc(r30)
    cmpwi r0, 0x0
    bgt lbl_8031D27C
    mr r3, r30
    bl fn_8031C8CC
    b lbl_8031D27C
lbl_8031D1AC:
    li r0, 0x1
    stw r0, RunQueueHint_8049E33C
    b lbl_8031D27C
lbl_8031D1B8:
    lwz r4, 0x2e0(r30)
    lwz r5, 0x2e4(r30)
    cmpwi r4, 0x0
    bne lbl_8031D1D4
    lwz r3, 0x2dc(r30)
    stw r5, 0x4(r3)
    b lbl_8031D1D8
lbl_8031D1D4:
    stw r5, 0x2e4(r4)
lbl_8031D1D8:
    cmpwi r5, 0x0
    bne lbl_8031D1EC
    lwz r3, 0x2dc(r30)
    stw r4, 0x0(r3)
    b lbl_8031D1F0
lbl_8031D1EC:
    stw r4, 0x2e0(r5)
lbl_8031D1F0:
    lwz r0, 0x2cc(r30)
    li r3, 0x0
    stw r3, 0x2dc(r30)
    cmpwi r0, 0x0
    bgt lbl_8031D27C
    lwz r3, 0x2f0(r30)
    cmpwi r3, 0x0
    beq lbl_8031D27C
    lwz r3, 0x8(r3)
lbl_8031D214:
    lwz r0, 0x2cc(r3)
    cmpwi r0, 0x0
    bgt lbl_8031D27C
    lwz r4, 0x2d4(r3)
    lwz r5, 0x2f4(r3)
    b lbl_8031D24C
lbl_8031D22C:
    lwz r6, 0x0(r5)
    cmpwi r6, 0x0
    beq lbl_8031D248
    lwz r0, 0x2d0(r6)
    cmpw r0, r4
    bge lbl_8031D248
    mr r4, r0
lbl_8031D248:
    lwz r5, 0x10(r5)
lbl_8031D24C:
    cmpwi r5, 0x0
    bne lbl_8031D22C
    lwz r0, 0x2d0(r3)
    cmpw r0, r4
    beq lbl_8031D27C
    bl fn_8031C970
    cmpwi r3, 0x0
    bne lbl_8031D214
    b lbl_8031D27C
lbl_8031D270:
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8031D308
lbl_8031D27C:
    mr r3, r30
    bl OSClearContext
    lhz r0, 0x2ca(r30)
    clrlwi. r0, r0, 31
    beq lbl_8031D2D4
    lwz r4, 0x2fc(r30)
    lwz r5, 0x300(r30)
    cmpwi r4, 0x0
    bne lbl_8031D2AC
    lis r3, 0x8000
    stw r5, 0xe0(r3)
    b lbl_8031D2B0
lbl_8031D2AC:
    stw r5, 0x300(r4)
lbl_8031D2B0:
    cmpwi r5, 0x0
    bne lbl_8031D2C4
    lis r3, 0x8000
    stw r4, 0xdc(r3)
    b lbl_8031D2C8
lbl_8031D2C4:
    stw r4, 0x2fc(r5)
lbl_8031D2C8:
    li r0, 0x0
    sth r0, 0x2c8(r30)
    b lbl_8031D2DC
lbl_8031D2D4:
    li r0, 0x8
    sth r0, 0x2c8(r30)
lbl_8031D2DC:
    mr r3, r30
    bl __OSUnlockAllMutex
    addi r3, r30, 0x2e8
    bl fn_8031D978
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031D300
    li r3, 0x0
    bl SelectThread
lbl_8031D300:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8031D308:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031D320
// ----------------------------------------------------------------------------
asm void fn_8031D320() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bl OSDisableInterrupts
    lhz r0, 0x2ca(r31)
    mr r30, r3
    clrlwi. r0, r0, 31
    bne lbl_8031D3CC
    lhz r0, 0x2c8(r31)
    cmplwi r0, 0x8
    beq lbl_8031D3CC
    lwz r0, 0x2e8(r31)
    cmpwi r0, 0x0
    bne lbl_8031D3CC
    addi r3, r31, 0x2e8
    bl OSSleepThread
    lhz r0, 0x2c8(r31)
    cmpwi r0, 0x0
    bne lbl_8031D388
    li r0, 0x0
    b lbl_8031D3B4
lbl_8031D388:
    lis r3, 0x8000
    lwz r3, 0xdc(r3)
    b lbl_8031D3A8
lbl_8031D394:
    cmplw r31, r3
    bne lbl_8031D3A4
    li r0, 0x1
    b lbl_8031D3B4
lbl_8031D3A4:
    lwz r3, 0x2fc(r3)
lbl_8031D3A8:
    cmpwi r3, 0x0
    bne lbl_8031D394
    li r0, 0x0
lbl_8031D3B4:
    cmpwi r0, 0x0
    bne lbl_8031D3CC
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8031D444
lbl_8031D3CC:
    lhz r0, 0x2c8(r31)
    cmplwi r0, 0x8
    bne lbl_8031D438
    cmpwi r29, 0x0
    beq lbl_8031D3E8
    lwz r0, 0x2d8(r31)
    stw r0, 0x0(r29)
lbl_8031D3E8:
    lwz r4, 0x2fc(r31)
    lwz r5, 0x300(r31)
    cmpwi r4, 0x0
    bne lbl_8031D404
    lis r3, 0x8000
    stw r5, 0xe0(r3)
    b lbl_8031D408
lbl_8031D404:
    stw r5, 0x300(r4)
lbl_8031D408:
    cmpwi r5, 0x0
    bne lbl_8031D41C
    lis r3, 0x8000
    stw r4, 0xdc(r3)
    b lbl_8031D420
lbl_8031D41C:
    stw r4, 0x2fc(r5)
lbl_8031D420:
    li r0, 0x0
    mr r3, r30
    sth r0, 0x2c8(r31)
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_8031D444
lbl_8031D438:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_8031D444:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031D460
// ----------------------------------------------------------------------------
asm void fn_8031D460() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r30, 0x2cc(r29)
    mr r31, r3
    subic. r0, r30, 0x1
    stw r0, 0x2cc(r29)
    bge lbl_8031D4A0
    li r0, 0x0
    stw r0, 0x2cc(r29)
    b lbl_8031D6D0
lbl_8031D4A0:
    bne lbl_8031D6D0
    lhz r0, 0x2c8(r29)
    cmpwi r0, 0x4
    beq lbl_8031D55C
    bge lbl_8031D6BC
    cmpwi r0, 0x1
    beq lbl_8031D4C0
    b lbl_8031D6BC
lbl_8031D4C0:
    lwz r5, 0x2d4(r29)
    lwz r4, 0x2f4(r29)
    b lbl_8031D4EC
lbl_8031D4CC:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_8031D4E8
    lwz r0, 0x2d0(r3)
    cmpw r0, r5
    bge lbl_8031D4E8
    mr r5, r0
lbl_8031D4E8:
    lwz r4, 0x10(r4)
lbl_8031D4EC:
    cmpwi r4, 0x0
    bne lbl_8031D4CC
    lis r3, lbl_80465370@ha
    slwi r0, r5, 3
    addi r3, r3, lbl_80465370@l
    stw r5, 0x2d0(r29)
    add r3, r3, r0
    stw r3, 0x2dc(r29)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_8031D520
    stw r29, 0x0(r3)
    b lbl_8031D524
lbl_8031D520:
    stw r29, 0x2e0(r4)
lbl_8031D524:
    li r0, 0x0
    stw r4, 0x2e4(r29)
    lwz r4, 0x2dc(r29)
    li r3, 0x1
    stw r0, 0x2e0(r29)
    stw r29, 0x4(r4)
    lwz r0, 0x2d0(r29)
    lwz r4, RunQueueBits_8049E340
    subfic r0, r0, 0x1f
    slw r0, r3, r0
    or r0, r4, r0
    stw r0, RunQueueBits_8049E340
    stw r3, RunQueueHint_8049E33C
    b lbl_8031D6BC
lbl_8031D55C:
    lwz r4, 0x2e0(r29)
    lwz r5, 0x2e4(r29)
    cmpwi r4, 0x0
    bne lbl_8031D578
    lwz r3, 0x2dc(r29)
    stw r5, 0x4(r3)
    b lbl_8031D57C
lbl_8031D578:
    stw r5, 0x2e4(r4)
lbl_8031D57C:
    cmpwi r5, 0x0
    bne lbl_8031D590
    lwz r3, 0x2dc(r29)
    stw r4, 0x0(r3)
    b lbl_8031D594
lbl_8031D590:
    stw r4, 0x2e0(r5)
lbl_8031D594:
    lwz r0, 0x2d4(r29)
    lwz r4, 0x2f4(r29)
    b lbl_8031D5C0
lbl_8031D5A0:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_8031D5BC
    lwz r3, 0x2d0(r3)
    cmpw r3, r0
    bge lbl_8031D5BC
    mr r0, r3
lbl_8031D5BC:
    lwz r4, 0x10(r4)
lbl_8031D5C0:
    cmpwi r4, 0x0
    bne lbl_8031D5A0
    stw r0, 0x2d0(r29)
    lwz r4, 0x2dc(r29)
    lwz r5, 0x0(r4)
    b lbl_8031D5DC
lbl_8031D5D8:
    lwz r5, 0x2e0(r5)
lbl_8031D5DC:
    cmpwi r5, 0x0
    beq lbl_8031D5F4
    lwz r3, 0x2d0(r5)
    lwz r0, 0x2d0(r29)
    cmpw r3, r0
    ble lbl_8031D5D8
lbl_8031D5F4:
    cmpwi r5, 0x0
    bne lbl_8031D62C
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    bne lbl_8031D610
    stw r29, 0x0(r4)
    b lbl_8031D614
lbl_8031D610:
    stw r29, 0x2e0(r3)
lbl_8031D614:
    li r0, 0x0
    stw r3, 0x2e4(r29)
    lwz r3, 0x2dc(r29)
    stw r0, 0x2e0(r29)
    stw r29, 0x4(r3)
    b lbl_8031D654
lbl_8031D62C:
    stw r5, 0x2e0(r29)
    lwz r3, 0x2e4(r5)
    stw r29, 0x2e4(r5)
    cmpwi r3, 0x0
    stw r3, 0x2e4(r29)
    bne lbl_8031D650
    lwz r3, 0x2dc(r29)
    stw r29, 0x0(r3)
    b lbl_8031D654
lbl_8031D650:
    stw r29, 0x2e0(r3)
lbl_8031D654:
    lwz r3, 0x2f0(r29)
    cmpwi r3, 0x0
    beq lbl_8031D6BC
    lwz r3, 0x8(r3)
lbl_8031D664:
    lwz r0, 0x2cc(r3)
    cmpwi r0, 0x0
    bgt lbl_8031D6BC
    lwz r4, 0x2d4(r3)
    lwz r5, 0x2f4(r3)
    b lbl_8031D69C
lbl_8031D67C:
    lwz r6, 0x0(r5)
    cmpwi r6, 0x0
    beq lbl_8031D698
    lwz r0, 0x2d0(r6)
    cmpw r0, r4
    bge lbl_8031D698
    mr r4, r0
lbl_8031D698:
    lwz r5, 0x10(r5)
lbl_8031D69C:
    cmpwi r5, 0x0
    bne lbl_8031D67C
    lwz r0, 0x2d0(r3)
    cmpw r0, r4
    beq lbl_8031D6BC
    bl fn_8031C970
    cmpwi r3, 0x0
    bne lbl_8031D664
lbl_8031D6BC:
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031D6D0
    li r3, 0x0
    bl SelectThread
lbl_8031D6D0:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031D6F8
// ----------------------------------------------------------------------------
asm void fn_8031D6F8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r30, 0x2cc(r29)
    mr r31, r3
    addi r0, r30, 0x1
    cmpwi r30, 0x0
    stw r0, 0x2cc(r29)
    bne lbl_8031D864
    lhz r0, 0x2c8(r29)
    cmpwi r0, 0x3
    beq lbl_8031D850
    bge lbl_8031D750
    cmpwi r0, 0x1
    beq lbl_8031D76C
    bge lbl_8031D75C
    b lbl_8031D850
lbl_8031D750:
    cmpwi r0, 0x5
    bge lbl_8031D850
    b lbl_8031D778
lbl_8031D75C:
    li r0, 0x1
    stw r0, RunQueueHint_8049E33C
    sth r0, 0x2c8(r29)
    b lbl_8031D850
lbl_8031D76C:
    mr r3, r29
    bl fn_8031C8CC
    b lbl_8031D850
lbl_8031D778:
    lwz r4, 0x2e0(r29)
    lwz r5, 0x2e4(r29)
    cmpwi r4, 0x0
    bne lbl_8031D794
    lwz r3, 0x2dc(r29)
    stw r5, 0x4(r3)
    b lbl_8031D798
lbl_8031D794:
    stw r5, 0x2e4(r4)
lbl_8031D798:
    cmpwi r5, 0x0
    bne lbl_8031D7AC
    lwz r3, 0x2dc(r29)
    stw r4, 0x0(r3)
    b lbl_8031D7B0
lbl_8031D7AC:
    stw r4, 0x2e0(r5)
lbl_8031D7B0:
    li r0, 0x20
    lwz r3, 0x2dc(r29)
    stw r0, 0x2d0(r29)
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_8031D7D0
    stw r29, 0x0(r3)
    b lbl_8031D7D4
lbl_8031D7D0:
    stw r29, 0x2e0(r4)
lbl_8031D7D4:
    li r0, 0x0
    stw r4, 0x2e4(r29)
    lwz r3, 0x2dc(r29)
    stw r0, 0x2e0(r29)
    stw r29, 0x4(r3)
    lwz r3, 0x2f0(r29)
    cmpwi r3, 0x0
    beq lbl_8031D850
    lwz r3, 0x8(r3)
lbl_8031D7F8:
    lwz r0, 0x2cc(r3)
    cmpwi r0, 0x0
    bgt lbl_8031D850
    lwz r4, 0x2d4(r3)
    lwz r5, 0x2f4(r3)
    b lbl_8031D830
lbl_8031D810:
    lwz r6, 0x0(r5)
    cmpwi r6, 0x0
    beq lbl_8031D82C
    lwz r0, 0x2d0(r6)
    cmpw r0, r4
    bge lbl_8031D82C
    mr r4, r0
lbl_8031D82C:
    lwz r5, 0x10(r5)
lbl_8031D830:
    cmpwi r5, 0x0
    bne lbl_8031D810
    lwz r0, 0x2d0(r3)
    cmpw r0, r4
    beq lbl_8031D850
    bl fn_8031C970
    cmpwi r3, 0x0
    bne lbl_8031D7F8
lbl_8031D850:
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031D864
    li r3, 0x0
    bl SelectThread
lbl_8031D864:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSSleepThread
// ----------------------------------------------------------------------------
asm void OSSleepThread() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, 0x8000
    li r0, 0x4
    lwz r4, 0xe4(r4)
    mr r31, r3
    sth r0, 0x2c8(r4)
    stw r30, 0x2dc(r4)
    lwz r5, 0x0(r30)
    b lbl_8031D8CC
lbl_8031D8C8:
    lwz r5, 0x2e0(r5)
lbl_8031D8CC:
    cmpwi r5, 0x0
    beq lbl_8031D8E4
    lwz r3, 0x2d0(r5)
    lwz r0, 0x2d0(r4)
    cmpw r3, r0
    ble lbl_8031D8C8
lbl_8031D8E4:
    cmpwi r5, 0x0
    bne lbl_8031D918
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    bne lbl_8031D900
    stw r4, 0x0(r30)
    b lbl_8031D904
lbl_8031D900:
    stw r4, 0x2e0(r3)
lbl_8031D904:
    stw r3, 0x2e4(r4)
    li r0, 0x0
    stw r0, 0x2e0(r4)
    stw r4, 0x4(r30)
    b lbl_8031D93C
lbl_8031D918:
    stw r5, 0x2e0(r4)
    lwz r3, 0x2e4(r5)
    stw r4, 0x2e4(r5)
    cmpwi r3, 0x0
    stw r3, 0x2e4(r4)
    bne lbl_8031D938
    stw r4, 0x0(r30)
    b lbl_8031D93C
lbl_8031D938:
    stw r4, 0x2e0(r3)
lbl_8031D93C:
    li r0, 0x1
    stw r0, RunQueueHint_8049E33C
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031D958
    li r3, 0x0
    bl SelectThread
lbl_8031D958:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031D978
// ----------------------------------------------------------------------------
asm void fn_8031D978() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r5, lbl_80465370@ha
    mr r31, r3
    addi r5, r5, lbl_80465370@l
    li r6, 0x0
    li r3, 0x1
    b lbl_8031DA2C
lbl_8031D9AC:
    lwz r4, 0x2e0(r8)
    cmpwi r4, 0x0
    bne lbl_8031D9C0
    stw r6, 0x4(r30)
    b lbl_8031D9C4
lbl_8031D9C0:
    stw r6, 0x2e4(r4)
lbl_8031D9C4:
    stw r4, 0x0(r30)
    sth r3, 0x2c8(r8)
    lwz r0, 0x2cc(r8)
    cmpwi r0, 0x0
    bgt lbl_8031DA2C
    lwz r0, 0x2d0(r8)
    slwi r0, r0, 3
    add r4, r5, r0
    stw r4, 0x2dc(r8)
    lwz r7, 0x4(r4)
    cmpwi r7, 0x0
    bne lbl_8031D9FC
    stw r8, 0x0(r4)
    b lbl_8031DA00
lbl_8031D9FC:
    stw r8, 0x2e0(r7)
lbl_8031DA00:
    stw r7, 0x2e4(r8)
    stw r6, 0x2e0(r8)
    lwz r4, 0x2dc(r8)
    stw r8, 0x4(r4)
    lwz r0, 0x2d0(r8)
    lwz r4, RunQueueBits_8049E340
    subfic r0, r0, 0x1f
    slw r0, r3, r0
    or r0, r4, r0
    stw r0, RunQueueBits_8049E340
    stw r3, RunQueueHint_8049E33C
lbl_8031DA2C:
    lwz r8, 0x0(r30)
    cmpwi r8, 0x0
    bne lbl_8031D9AC
    lwz r0, RunQueueHint_8049E33C
    cmpwi r0, 0x0
    beq lbl_8031DA4C
    li r3, 0x0
    bl SelectThread
lbl_8031DA4C:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DA6C
// ----------------------------------------------------------------------------
asm void fn_8031DA6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetAlarmUserData
    lhz r0, 0x2c8(r3)
    cmpwi r0, 0x0
    bne lbl_8031DA98
    li r0, 0x0
    b lbl_8031DAC4
lbl_8031DA98:
    lis r4, 0x8000
    lwz r4, 0xdc(r4)
    b lbl_8031DAB8
lbl_8031DAA4:
    cmplw r3, r4
    bne lbl_8031DAB4
    li r0, 0x1
    b lbl_8031DAC4
lbl_8031DAB4:
    lwz r4, 0x2fc(r4)
lbl_8031DAB8:
    cmpwi r4, 0x0
    bne lbl_8031DAA4
    li r0, 0x0
lbl_8031DAC4:
    cmpwi r0, 0x0
    beq lbl_8031DAD8
    mr r3, r31
    bl OSGetAlarmUserData
    bl fn_8031D460
lbl_8031DAD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DAEC
// ----------------------------------------------------------------------------
asm void fn_8031DAEC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lis r4, 0x8000
    mr r30, r3
    lwz r31, 0xe4(r4)
    cmpwi r31, 0x0
    bne lbl_8031DB30
    bl OSRestoreInterrupts
    b lbl_8031DB74
lbl_8031DB30:
    addi r3, r1, 0x8
    bl OSCreateAlarm
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8031474C
    lis r7, fn_8031DA6C@ha
    mr r6, r28
    mr r5, r29
    addi r3, r1, 0x8
    addi r7, r7, fn_8031DA6C@l
    bl OSSetAlarm
    mr r3, r31
    bl fn_8031D6F8
    addi r3, r1, 0x8
    bl OSCancelAlarm
    mr r3, r30
    bl OSRestoreInterrupts
lbl_8031DB74:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// OSGetTime
// ----------------------------------------------------------------------------
asm void OSGetTime() {
    nofralloc
    mftb r3, 269
    mftb r4, 268
    mftb r5, 269
    cmpw r3, r5
    bne OSGetTime
    blr
}

// ----------------------------------------------------------------------------
// OSGetTick
// ----------------------------------------------------------------------------
asm void OSGetTick() {
    nofralloc
    mftb r3, 268
    blr
}

// ----------------------------------------------------------------------------
// __OSGetSystemTime
// ----------------------------------------------------------------------------
asm void __OSGetSystemTime() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl OSGetTime
    lis r6, 0x8000
    lwz r5, 0x30dc(r6)
    lwz r0, 0x30d8(r6)
    addc r29, r5, r4
    adde r30, r0, r3
    mr r3, r31
    bl OSRestoreInterrupts
    mr r4, r29
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DC18
// ----------------------------------------------------------------------------
asm void fn_8031DC18() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    lis r5, 0x8000
    lwz r4, 0x30dc(r5)
    lwz r0, 0x30d8(r5)
    addc r30, r4, r30
    adde r31, r0, r31
    bl OSRestoreInterrupts
    mr r3, r31
    mr r4, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DC70
// ----------------------------------------------------------------------------
asm void fn_8031DC70() {
    nofralloc
    lis r7, 0x9249
    lis r6, 0xb38d
    addi r8, r3, 0x6
    lis r5, 0x51ec
    subi r0, r6, 0x64f
    addi r7, r7, 0x2493
    mulhw r6, r7, r8
    subi r10, r5, 0x7ae1
    mulhw r0, r0, r3
    add r5, r6, r8
    srawi r5, r5, 2
    srwi r6, r5, 31
    add r5, r5, r6
    add r0, r0, r3
    mulli r6, r5, 0x7
    srawi r0, r0, 8
    srwi r5, r0, 31
    add r5, r0, r5
    subf r0, r6, r8
    mulli r11, r5, 0x16d
    stw r0, 0x18(r4)
    b lbl_8031DCD0
lbl_8031DCC8:
    subi r11, r11, 0x16d
    subi r5, r5, 0x1
lbl_8031DCD0:
    cmpwi r5, 0x1
    blt lbl_8031DD10
    subi r6, r5, 0x1
    addi r0, r5, 0x3
    mulhw r6, r10, r6
    srawi r8, r6, 7
    srawi r6, r6, 5
    srwi r7, r6, 31
    srawi r0, r0, 2
    srwi r9, r8, 31
    add r6, r6, r7
    addze r0, r0
    add r7, r8, r9
    subf r0, r6, r0
    add r0, r7, r0
    b lbl_8031DD14
lbl_8031DD10:
    li r0, 0x0
lbl_8031DD14:
    add r8, r11, r0
    cmpw r3, r8
    blt lbl_8031DCC8
    slwi r0, r5, 30
    srwi r7, r5, 31
    subf r6, r7, r0
    stw r5, 0x14(r4)
    subf r0, r8, r3
    rotlwi r3, r6, 2
    stw r0, 0x1c(r4)
    add. r3, r3, r7
    li r7, 0x0
    bne lbl_8031DD6C
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    mulhw r3, r3, r5
    srawi r3, r3, 5
    srwi r6, r3, 31
    add r3, r3, r6
    mulli r3, r3, 0x64
    subf. r3, r3, r5
    bne lbl_8031DD90
lbl_8031DD6C:
    lis r3, 0x51ec
    subi r3, r3, 0x7ae1
    mulhw r3, r3, r5
    srawi r3, r3, 7
    srwi r6, r3, 31
    add r3, r3, r6
    mulli r3, r3, 0x190
    subf. r3, r3, r5
    bne lbl_8031DD94
lbl_8031DD90:
    li r7, 0x1
lbl_8031DD94:
    cmpwi r7, 0x0
    lis r6, lbl_80381340@ha
    addi r6, r6, lbl_80381340@l
    beq lbl_8031DDAC
    lis r6, lbl_80381370@ha
    addi r6, r6, lbl_80381370@l
lbl_8031DDAC:
    li r7, 0xc
    li r3, 0x30
lbl_8031DDB4:
    subi r3, r3, 0x4
    subi r7, r7, 0x1
    lwzx r5, r6, r3
    cmpw r0, r5
    blt lbl_8031DDB4
    stw r7, 0x10(r4)
    lwzx r3, r6, r3
    subf r3, r3, r0
    addi r0, r3, 0x1
    stw r0, 0xc(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DDE0
// ----------------------------------------------------------------------------
asm void fn_8031DDE0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, 0x8000
    mr r29, r5
    lwz r0, 0xf8(r6)
    mr r28, r3
    mr r27, r4
    li r5, 0x0
    srwi r26, r0, 2
    mr r6, r26
    bl __mod2i
    li r7, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r7, 0x8000
    mr r30, r4
    subfc r5, r7, r4
    mr r31, r3
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_8031DE48
    addc r30, r4, r26
    adde r31, r3, r7
lbl_8031DE48:
    lis r4, 0x431c
    slwi r3, r31, 3
    subi r0, r4, 0x217d
    li r5, 0x0
    mulhwu r0, r0, r26
    slwi r4, r30, 3
    rlwimi r3, r30, 3, 29, 31
    srwi r6, r0, 15
    bl __div2i
    li r6, 0x3e8
    li r5, 0x0
    bl __mod2i
    stw r4, 0x24(r29)
    lis r26, 0x8000
    lis r4, 0x1062
    mr r3, r31
    lwz r0, 0xf8(r26)
    addi r6, r4, 0x4dd3
    mr r4, r30
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    li r6, 0x3e8
    li r5, 0x0
    bl __mod2i
    stw r4, 0x20(r29)
    subfc r4, r30, r27
    subfe r3, r31, r28
    li r5, 0x0
    lwz r0, 0xf8(r26)
    srwi r6, r0, 2
    bl __div2i
    lis r27, 0x1
    mr r28, r4
    mr r26, r3
    li r5, 0x0
    addi r6, r27, 0x5180
    bl __div2i
    lis r3, 0xb
    addi r6, r27, 0x5180
    addi r0, r3, 0x2575
    li r5, 0x0
    mr r3, r26
    addc r26, r4, r0
    mr r4, r28
    bl __mod2i
    cmpwi r4, 0x0
    mr r31, r4
    bge lbl_8031DF20
    addis r31, r4, 0x1
    subi r26, r26, 0x1
    addi r31, r31, 0x5180
lbl_8031DF20:
    mr r3, r26
    mr r4, r29
    bl fn_8031DC70
    lis r3, 0x8889
    addi r11, r1, 0x20
    subi r5, r3, 0x7777
    mulhw r0, r5, r31
    add r3, r0, r31
    srawi r0, r3, 5
    srwi r4, r0, 31
    add r8, r0, r4
    mulhw r0, r5, r8
    add r0, r0, r8
    srawi r6, r0, 5
    srawi r4, r0, 5
    srawi r0, r3, 5
    srwi r7, r6, 31
    srwi r5, r4, 31
    srwi r3, r0, 31
    add r6, r6, r7
    add r0, r0, r3
    add r4, r4, r5
    mulli r3, r4, 0x3c
    stw r6, 0x8(r29)
    mulli r0, r0, 0x3c
    subf r3, r3, r8
    stw r3, 0x4(r29)
    subf r0, r0, r31
    stw r0, 0x0(r29)
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8031DFA8
// ----------------------------------------------------------------------------
asm void fn_8031DFA8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r4, 0x2aab
    lwz r5, 0x10(r3)
    subi r0, r4, 0x5555
    mulhw r0, r0, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r6, r0, r4
    mulli r0, r6, 0xc
    subf. r4, r0, r5
    bge lbl_8031DFEC
    addi r4, r4, 0xc
    subi r6, r6, 0x1
lbl_8031DFEC:
    lwz r0, 0x14(r3)
    add r9, r0, r6
    cmpwi r9, 0x1
    bge lbl_8031E004
    li r7, 0x0
    b lbl_8031E040
lbl_8031E004:
    lis r5, 0x51ec
    subi r6, r9, 0x1
    subi r5, r5, 0x7ae1
    addi r0, r9, 0x3
    mulhw r5, r5, r6
    srawi r7, r5, 7
    srawi r5, r5, 5
    srwi r6, r5, 31
    srawi r0, r0, 2
    srwi r8, r7, 31
    add r5, r5, r6
    addze r0, r0
    add r6, r7, r8
    subf r0, r5, r0
    add r7, r6, r0
lbl_8031E040:
    slwi r0, r9, 30
    srwi r5, r9, 31
    subf r0, r5, r0
    li r6, 0x0
    rotlwi r0, r0, 2
    add. r0, r0, r5
    bne lbl_8031E080
    lis r5, 0x51ec
    subi r0, r5, 0x7ae1
    mulhw r0, r0, r9
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    subf. r0, r0, r9
    bne lbl_8031E0A4
lbl_8031E080:
    lis r5, 0x51ec
    subi r0, r5, 0x7ae1
    mulhw r0, r0, r9
    srawi r0, r0, 7
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x190
    subf. r0, r0, r9
    bne lbl_8031E0A8
lbl_8031E0A4:
    li r6, 0x1
lbl_8031E0A8:
    cmpwi r6, 0x0
    lis r22, lbl_80381340@ha
    addi r22, r22, lbl_80381340@l
    beq lbl_8031E0C0
    lis r22, lbl_80381370@ha
    addi r22, r22, lbl_80381370@l
lbl_8031E0C0:
    lis r5, 0x8000
    lwz r6, 0x24(r3)
    lwz r0, 0xf8(r5)
    slwi r12, r4, 2
    lis r10, 0x431c
    li r5, 0x0
    srwi r8, r0, 2
    srawi r20, r6, 31
    subi r0, r10, 0x217d
    lwz r23, 0xc(r3)
    mulhwu r0, r0, r8
    lwzx r22, r22, r12
    add r12, r23, r7
    lwz r27, 0x4(r3)
    lis r10, 0x1
    lwz r29, 0x8(r3)
    srwi r4, r0, 15
    lis r7, 0x1062
    mulhwu r21, r4, r6
    lis r11, 0x1e1
    addi r7, r7, 0x4dd3
    lwz r26, 0x0(r3)
    addi r0, r11, 0x3380
    lwz r11, 0x20(r3)
    mullw r24, r5, r6
    addi r23, r10, 0x5180
    add r3, r22, r12
    li r28, 0x3c
    subi r22, r3, 0x1
    lis r3, 0x4e1e
    mullw r25, r4, r6
    add r10, r21, r24
    addi r31, r3, 0x4080
    li r30, 0xe10
    li r12, -0xf
    mullw r6, r4, r20
    rotrwi r4, r25, 3
    add r10, r10, r6
    mulhwu r6, r7, r8
    mr r3, r10
    rlwimi r4, r10, 29, 0, 2
    rlwimi r3, r25, 0, 29, 31
    srawi r3, r3, 3
    srwi r10, r6, 6
    addze r4, r4
    addze r3, r3
    srawi r24, r9, 31
    mulhwu r7, r0, r9
    srawi r25, r22, 31
    mullw r21, r5, r9
    add r20, r7, r21
    mullw r21, r0, r24
    mulhwu r6, r23, r22
    add r20, r20, r21
    mullw r7, r5, r22
    add r24, r6, r7
    mullw r7, r0, r9
    mullw r6, r23, r25
    mullw r0, r23, r22
    add r24, r24, r6
    addc r25, r7, r0
    mulhw r7, r27, r28
    adde r28, r20, r24
    mulhw r0, r29, r30
    mulli r9, r27, 0x3c
    mulli r6, r29, 0xe10
    addc r6, r9, r6
    adde r7, r7, r0
    srawi r0, r26, 31
    addc r6, r6, r26
    adde r0, r7, r0
    addc r6, r6, r31
    adde r0, r0, r12
    addc r12, r25, r6
    adde r6, r28, r0
    mullw r9, r6, r8
    srawi r0, r11, 31
    mulhwu r7, r12, r8
    mulhwu r6, r10, r11
    add r9, r7, r9
    mullw r7, r5, r11
    mullw r5, r12, r5
    add r6, r6, r7
    mullw r0, r10, r0
    add r7, r9, r5
    add r6, r6, r0
    mullw r0, r10, r11
    addi r11, r1, 0x40
    mullw r5, r12, r8
    addc r5, r5, r0
    adde r0, r7, r6
    addc r4, r4, r5
    adde r3, r3, r0
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E248
// ----------------------------------------------------------------------------
asm void fn_8031E248() {
    nofralloc
    lbz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_8031E258
    addi r3, r3, 0x1
lbl_8031E258:
    rlwinm. r0, r6, 0, 24, 24
    bne lbl_8031E268
    li r7, 0x0
    b lbl_8031E2B8
lbl_8031E268:
    rlwinm r0, r6, 0, 24, 26
    cmplwi r0, 0xc0
    bne lbl_8031E280
    clrlwi r6, r6, 27
    li r7, 0x1
    b lbl_8031E2B8
lbl_8031E280:
    rlwinm r0, r6, 0, 24, 27
    cmplwi r0, 0xe0
    bne lbl_8031E298
    clrlwi r6, r6, 28
    li r7, 0x2
    b lbl_8031E2B8
lbl_8031E298:
    rlwinm r0, r6, 0, 24, 28
    cmplwi r0, 0xf0
    bne lbl_8031E2B0
    clrlwi r6, r6, 29
    li r7, 0x3
    b lbl_8031E2B8
lbl_8031E2B0:
    li r3, 0x0
    blr
lbl_8031E2B8:
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_8031E2F0
lbl_8031E2C4:
    lbz r5, 0x0(r3)
    slwi r6, r6, 6
    addi r3, r3, 0x1
    rlwinm r0, r5, 0, 24, 25
    cmplwi r0, 0x80
    beq lbl_8031E2E4
    li r3, 0x0
    blr
lbl_8031E2E4:
    clrlwi r0, r5, 26
    or r6, r6, r0
    bdnz lbl_8031E2C4
lbl_8031E2F0:
    cmplwi r6, 0x7f
    bgt lbl_8031E308
    cmpwi r7, 0x0
    beq lbl_8031E338
    li r3, 0x0
    blr
lbl_8031E308:
    cmplwi r6, 0x7ff
    bgt lbl_8031E320
    cmplwi r7, 0x1
    beq lbl_8031E338
    li r3, 0x0
    blr
lbl_8031E320:
    cmplwi r6, 0xffff
    bgt lbl_8031E338
    cmplwi r7, 0x2
    beq lbl_8031E338
    li r3, 0x0
    blr
lbl_8031E338:
    cmplwi r6, 0xd800
    blt lbl_8031E350
    cmplwi r6, 0xdfff
    bgt lbl_8031E350
    li r3, 0x0
    blr
lbl_8031E350:
    stw r6, 0x0(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E358
// ----------------------------------------------------------------------------
asm void fn_8031E358() {
    nofralloc
    lhz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_8031E368
    addi r3, r3, 0x2
lbl_8031E368:
    cmplwi r5, 0xd800
    blt lbl_8031E378
    cmplwi r5, 0xdfff
    ble lbl_8031E380
lbl_8031E378:
    mr r6, r5
    b lbl_8031E3C0
lbl_8031E380:
    cmplwi r5, 0xdbff
    bgt lbl_8031E3B8
    lhz r0, 0x0(r3)
    addi r3, r3, 0x2
    cmplwi r0, 0xdc00
    blt lbl_8031E3B0
    cmplwi r0, 0xdfff
    bgt lbl_8031E3B0
    clrlwi r6, r0, 22
    rlwimi r6, r5, 10, 12, 21
    addis r6, r6, 0x1
    b lbl_8031E3C0
lbl_8031E3B0:
    li r3, 0x0
    blr
lbl_8031E3B8:
    li r3, 0x0
    blr
lbl_8031E3C0:
    stw r6, 0x0(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E3C8
// ----------------------------------------------------------------------------
asm void fn_8031E3C8() {
    nofralloc
    cmplwi r3, 0xff
    ble lbl_8031E3D8
    li r3, 0x0
    blr
lbl_8031E3D8:
    cmplwi r3, 0x80
    blt lbl_8031E3E8
    cmplwi r3, 0x9f
    ble lbl_8031E3F0
lbl_8031E3E8:
    clrlwi r3, r3, 24
    blr
lbl_8031E3F0:
    cmplwi r3, 0x152
    blt lbl_8031E438
    cmplwi r3, 0x2122
    bgt lbl_8031E438
    lis r4, lbl_803813A0@ha
    li r0, 0x20
    addi r4, r4, lbl_803813A0@l
    li r5, 0x0
    mtctr r0
lbl_8031E414:
    lhz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_8031E42C
    addi r0, r5, 0x80
    clrlwi r3, r0, 24
    blr
lbl_8031E42C:
    addi r4, r4, 0x2
    addi r5, r5, 0x1
    bdnz lbl_8031E414
lbl_8031E438:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E440
// ----------------------------------------------------------------------------
asm void fn_8031E440() {
    nofralloc
    lis r0, 0x1
    cmplw r3, r0
    blt lbl_8031E454
    li r3, 0x0
    blr
lbl_8031E454:
    lis r4, lbl_8038CDE0@ha
    rlwinm r0, r3, 26, 22, 29
    addi r4, r4, lbl_8038CDE0@l
    lwzx r4, r4, r0
    cmpwi r4, 0x0
    beq lbl_8031E478
    clrlslwi r0, r3, 24, 1
    lhzx r3, r4, r0
    blr
lbl_8031E478:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E480
// ----------------------------------------------------------------------------
asm void fn_8031E480() {
    nofralloc
    lwz r3, IpcBufferHi_8049E348
    blr
}

// ----------------------------------------------------------------------------
// fn_8031E488
// ----------------------------------------------------------------------------
asm void fn_8031E488() {
    nofralloc
    lwz r3, IpcBufferLo_8049D220
    blr
}

// ----------------------------------------------------------------------------
// __OSInitIPCBuffer
// ----------------------------------------------------------------------------
asm void __OSInitIPCBuffer() {
    nofralloc
    lis r3, 0x8000
    lwz r0, 0x3130(r3)
    stw r0, IpcBufferLo_8049D220
    lwz r0, 0x3134(r3)
    stw r0, IpcBufferHi_8049E348
    blr
}

