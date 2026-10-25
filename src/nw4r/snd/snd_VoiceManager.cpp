#include "types.h"

// Translation unit: src/nw4r/snd/snd_VoiceManager.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA90;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80409140[];
extern "C" u8 lbl_8040914C[];

// Forward declarations
extern "C" void Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void Calc__Q44nw4r3snd6detail5VoiceFv();
extern "C" void ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void NotifyVoiceUpdate__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void ResetDelta__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl();
extern "C" void StopFinished__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl();
extern "C" void UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Update__Q44nw4r3snd6detail5VoiceFv();
extern "C" void __ct__Q44nw4r3snd6detail5VoiceFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049DA90
    extsb. r0, r0
    bne lbl_80220548
    lis r6, lbl_8040914C@ha
    li r0, 0x0
    addi r3, r6, lbl_8040914C@l
    lis r4, __dt__Q44nw4r3snd6detail12VoiceManagerFv@ha
    stw r0, 0x8(r3)
    addi r8, r3, 0x8
    addi r7, r3, 0x14
    lis r5, lbl_80409140@ha
    stw r0, 0xc(r3)
    addi r4, r4, __dt__Q44nw4r3snd6detail12VoiceManagerFv@l
    addi r5, r5, lbl_80409140@l
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stb r0, lbl_8040914C@l(r6)
    stw r0, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stw r0, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA90
lbl_80220548:
    lwz r0, 0x14(r1)
    lis r3, lbl_8040914C@ha
    addi r3, r3, lbl_8040914C@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail12VoiceManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail12VoiceManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802205B4
    addic. r3, r3, 0x10
    beq lbl_80220594
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_80220594:
    addic. r3, r30, 0x4
    beq lbl_802205A4
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_802205A4:
    cmpwi r31, 0x0
    ble lbl_802205B4
    mr r3, r30
    bl dtor_80136CFC
lbl_802205B4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi() {
    nofralloc
    mulli r3, r4, 0x124
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lbz r0, 0x0(r3)
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_80220670
    lis r6, 0xc0e0
    mr r29, r4
    addi r0, r6, 0x7039
    li r28, 0x0
    mulhwu r4, r0, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi. r30, r0, 8
    beq lbl_80220668
    addi r31, r3, 0x14
    b lbl_80220660
lbl_8022062C:
    cmpwi r29, 0x0
    mr r5, r29
    beq lbl_80220644
    mr r3, r29
    bl __ct__Q44nw4r3snd6detail5VoiceFv
    mr r5, r3
lbl_80220644:
    stw r31, 0x8(r1)
    addi r3, r27, 0x10
    addi r4, r1, 0x8
    addi r5, r5, 0x11c
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    addi r29, r29, 0x124
    addi r28, r28, 0x1
lbl_80220660:
    cmplw r28, r30
    blt lbl_8022062C
lbl_80220668:
    li r0, 0x1
    stb r0, 0x0(r27)
lbl_80220670:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r31, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    bl OSDisableInterrupts
    lwz r0, 0x10(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_80220740
    li r29, 0x0
    bne lbl_80220728
    lwz r3, 0x8(r31)
    lwz r0, -0x74(r3)
    subi r28, r3, 0x11c
    cmpw r0, r25
    ble lbl_802206EC
    li r29, 0x0
    b lbl_80220728
lbl_802206EC:
    lwz r4, 0x8c(r28)
    mr r3, r28
    lwz r0, 0x90(r28)
    mullw r29, r4, r0
    bl Stop__Q44nw4r3snd6detail5VoiceFv
    mr r3, r28
    bl Free__Q44nw4r3snd6detail5VoiceFv
    lwz r12, 0x94(r28)
    cmpwi r12, 0x0
    beq lbl_80220728
    mr r3, r28
    lwz r5, 0x98(r28)
    li r4, 0x2
    mtctr r12
    bctrl
lbl_80220728:
    cmpwi r29, 0x0
    bne lbl_80220740
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8022082C
lbl_80220740:
    lwz r3, 0x14(r31)
    mr r4, r23
    mr r5, r24
    mr r6, r25
    subi r28, r3, 0x11c
    mr r7, r26
    mr r3, r28
    mr r8, r27
    bl Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
    cmpwi r3, 0x0
    bne lbl_8022077C
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8022082C
lbl_8022077C:
    clrlwi r0, r25, 24
    stw r0, 0xa8(r28)
    bl OSDisableInterrupts
    addi r27, r28, 0x11c
    mr r29, r3
    mr r4, r27
    addi r3, r31, 0x10
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r5, 0x8(r31)
    addi r3, r31, 0x8
    b lbl_802207C0
lbl_802207A8:
    lwz r6, 0x4(r3)
    lwz r0, 0xa8(r28)
    lwz r4, -0x74(r6)
    cmpw r4, r0
    ble lbl_802207C8
    mr r3, r6
lbl_802207C0:
    cmplw r3, r5
    bne lbl_802207A8
lbl_802207C8:
    stw r3, 0x8(r1)
    mr r5, r27
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r29
    bl OSRestoreInterrupts
    addi r29, r31, 0x8
    b lbl_8022080C
lbl_802207EC:
    lwz r0, -0x74(r27)
    subi r3, r27, 0x11c
    cmpwi r0, 0x1
    ble lbl_80220814
    cmpwi r0, 0xff
    beq lbl_80220808
    bl UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv
lbl_80220808:
    lwz r27, 0x0(r27)
lbl_8022080C:
    cmplw r27, r29
    bne lbl_802207EC
lbl_80220814:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r28
    bl RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r28
lbl_8022082C:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
// ----------------------------------------------------------------------------
extern "C" asm void FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r29
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    bl OSDisableInterrupts
    addi r29, r29, 0x11c
    mr r30, r3
    mr r4, r29
    addi r3, r28, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    addi r0, r28, 0x14
    mr r5, r29
    stw r0, 0x8(r1)
    addi r3, r28, 0x10
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
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
// UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x8(r3)
    b lbl_80220914
lbl_80220904:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0x11c
    bl StopFinished__Q44nw4r3snd6detail5VoiceFv
lbl_80220914:
    cmplw r31, r30
    bne lbl_80220904
    lwz r30, 0x8(r29)
    addi r31, r29, 0x8
    b lbl_80220938
lbl_80220928:
    mr r3, r30
    lwz r30, 0x0(r30)
    subi r3, r3, 0x11c
    bl Calc__Q44nw4r3snd6detail5VoiceFv
lbl_80220938:
    cmplw r30, r31
    bne lbl_80220928
    bl OSDisableInterrupts
    lwzu r31, 0x8(r29)
    mr r30, r3
    b lbl_80220960
lbl_80220950:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0x11c
    bl Update__Q44nw4r3snd6detail5VoiceFv
lbl_80220960:
    cmplw r31, r29
    bne lbl_80220950
    mr r3, r30
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NotifyVoiceUpdate__Q44nw4r3snd6detail12VoiceManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void NotifyVoiceUpdate__Q44nw4r3snd6detail12VoiceManagerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwzu r30, 0x8(r29)
    mr r31, r3
    b lbl_802209C8
lbl_802209B8:
    mr r3, r30
    lwz r30, 0x0(r30)
    subi r3, r3, 0x11c
    bl ResetDelta__Q44nw4r3snd6detail5VoiceFv
lbl_802209C8:
    cmplw r30, r29
    bne lbl_802209B8
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

// ----------------------------------------------------------------------------
// ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
// ----------------------------------------------------------------------------
extern "C" asm void ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    bl OSDisableInterrupts
    mr r31, r3
    bl OSDisableInterrupts
    addi r29, r28, 0x11c
    mr r30, r3
    mr r4, r29
    addi r3, r27, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    addi r0, r27, 0x14
    mr r5, r29
    stw r0, 0xc(r1)
    addi r3, r27, 0x10
    addi r4, r1, 0xc
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r30
    bl OSRestoreInterrupts
    bl OSDisableInterrupts
    mr r30, r3
    mr r4, r29
    addi r3, r27, 0x10
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r5, 0x8(r27)
    addi r3, r27, 0x8
    b lbl_80220A88
lbl_80220A70:
    lwz r6, 0x4(r3)
    lwz r0, 0xa8(r28)
    lwz r4, -0x74(r6)
    cmpw r4, r0
    ble lbl_80220A90
    mr r3, r6
lbl_80220A88:
    cmplw r3, r5
    bne lbl_80220A70
lbl_80220A90:
    stw r3, 0x8(r1)
    mr r5, r29
    addi r3, r27, 0x4
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r30
    bl OSRestoreInterrupts
    addi r30, r27, 0x8
    b lbl_80220AD4
lbl_80220AB4:
    lwz r0, -0x74(r29)
    subi r3, r29, 0x11c
    cmpwi r0, 0x1
    ble lbl_80220ADC
    cmpwi r0, 0xff
    beq lbl_80220AD0
    bl UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv
lbl_80220AD0:
    lwz r29, 0x0(r29)
lbl_80220AD4:
    cmplw r29, r30
    bne lbl_80220AB4
lbl_80220ADC:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl
// ----------------------------------------------------------------------------
extern "C" asm void UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r4, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_80220B48
lbl_80220B28:
    mr r6, r4
    lwz r4, 0x0(r4)
    lbz r5, -0x80(r6)
    cmpwi r5, 0x0
    beq lbl_80220B48
    lhz r5, -0x7a(r6)
    or r5, r5, r31
    sth r5, -0x7a(r6)
lbl_80220B48:
    cmplw r4, r0
    bne lbl_80220B28
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

