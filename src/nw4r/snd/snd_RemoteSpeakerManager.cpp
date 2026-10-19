#include "types.h"

// Translation unit: src/nw4r/snd/snd_RemoteSpeakerManager.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA50;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_804040E8[];

// Forward declarations
extern "C" void AXRmtAdvancePtr();
extern "C" void AXRmtGetSamples();
extern "C" void AXRmtGetSamplesLeft();
extern "C" void GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv();
extern "C" void GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi();
extern "C" void OSCreateAlarm();
extern "C" void OSGetTime();
extern "C" void OSSetPeriodicAlarm();
extern "C" void RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext();
extern "C" void Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv();
extern "C" void UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs();
extern "C" void __ct__Q34nw4r3snd13RemoteSpeakerFv();
extern "C" void fn_8020FBC0();

// ----------------------------------------------------------------------------
// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, lbl_8049DA50
    extsb. r0, r0
    bne lbl_802103A0
    lis r3, lbl_804040E8@ha
    li r0, 0x0
    addi r30, r3, lbl_804040E8@l
    stb r0, lbl_804040E8@l(r3)
    addi r29, r30, 0x38
    addi r31, r30, 0x2d8
lbl_80210368:
    mr r3, r29
    bl __ct__Q34nw4r3snd13RemoteSpeakerFv
    addi r29, r29, 0xa8
    cmplw r29, r31
    blt lbl_80210368
    li r4, 0x1
    li r5, 0x0
    li r3, 0x2
    li r0, 0x3
    stw r5, 0x6c(r30)
    stw r4, 0x114(r30)
    stw r3, 0x1bc(r30)
    stw r0, 0x264(r30)
    stb r4, lbl_8049DA50
lbl_802103A0:
    lwz r31, 0x1c(r1)
    lis r3, lbl_804040E8@ha
    lwz r30, 0x18(r1)
    addi r3, r3, lbl_804040E8@l
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi() {
    nofralloc
    mulli r0, r4, 0xa8
    add r3, r3, r0
    addi r3, r3, 0x38
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8021045C
    addi r3, r3, 0x8
    bl OSCreateAlarm
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x431c
    lwz r0, 0xf8(r6)
    lis r6, 0x1062
    addi r10, r6, 0x4dd3
    lis r9, RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext@ha
    srwi r0, r0, 2
    subi r5, r5, 0x217d
    mulhwu r8, r5, r0
    lis r7, 0x66
    mr r6, r4
    subi r0, r7, 0x4655
    mr r5, r3
    addi r3, r31, 0x8
    srwi r4, r8, 15
    addi r9, r9, RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext@l
    mullw r0, r4, r0
    li r7, 0x0
    mulhwu r0, r10, r0
    srwi r8, r0, 9
    bl OSSetPeriodicAlarm
    li r0, 0x1
    stb r0, 0x0(r31)
lbl_8021045C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext
// ----------------------------------------------------------------------------
extern "C" asm void RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lbz r0, lbl_8049DA50
    extsb. r0, r0
    bne lbl_802104E4
    lis r3, lbl_804040E8@ha
    li r0, 0x0
    addi r30, r3, lbl_804040E8@l
    stb r0, lbl_804040E8@l(r3)
    addi r29, r30, 0x38
    addi r31, r30, 0x2d8
lbl_802104AC:
    mr r3, r29
    bl __ct__Q34nw4r3snd13RemoteSpeakerFv
    addi r29, r29, 0xa8
    cmplw r29, r31
    blt lbl_802104AC
    li r4, 0x1
    li r5, 0x0
    li r3, 0x2
    li r0, 0x3
    stw r5, 0x6c(r30)
    stw r4, 0x114(r30)
    stw r3, 0x1bc(r30)
    stw r0, 0x264(r30)
    stb r4, lbl_8049DA50
lbl_802104E4:
    lis r30, lbl_804040E8@ha
    addi r30, r30, lbl_804040E8@l
    bl AXRmtGetSamplesLeft
    cmpwi r3, 0x28
    blt lbl_8021054C
    addi r29, r30, 0x38
    li r31, 0x0
lbl_80210500:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x4
    bne lbl_80210528
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x28
    bl AXRmtGetSamples
    mr r3, r29
    addi r4, r1, 0x8
    bl UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs
lbl_80210528:
    mr r3, r29
    bl fn_8020FBC0
    addi r31, r31, 0x1
    addi r29, r29, 0xa8
    cmpwi r31, 0x4
    addi r30, r30, 0xa8
    blt lbl_80210500
    li r3, 0x28
    bl AXRmtAdvancePtr
lbl_8021054C:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

