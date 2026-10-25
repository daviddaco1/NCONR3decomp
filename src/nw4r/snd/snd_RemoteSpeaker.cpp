#include "types.h"

// Translation unit: src/nw4r/snd/snd_RemoteSpeaker.cpp
// Total functions: 11

// Global data symbols (@ha/@l)

// Forward declarations
extern "C" void ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext();
extern "C" void GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv();
extern "C" void GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi();
extern "C" void IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext();
extern "C" void OSCancelAlarm();
extern "C" void OSCreateAlarm();
extern "C" void OSDisableInterrupts();
extern "C" void OSGetAlarmUserData();
extern "C" void OSGetTime();
extern "C" void OSRestoreInterrupts();
extern "C" void OSSetAlarm();
extern "C" void OSSetAlarmUserData();
extern "C" void SpeakerOffCallback__Q34nw4r3snd13RemoteSpeakerFll();
extern "C" void SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll();
extern "C" void SpeakerPlayCallback__Q34nw4r3snd13RemoteSpeakerFll();
extern "C" void UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs();
extern "C" void __ct__Q34nw4r3snd13RemoteSpeakerFv();
extern "C" void _restgpr_25();
extern "C" void _savegpr_25();
extern "C" void fn_8020FA34();
extern "C" void fn_8020FAF4();
extern "C" void fn_8020FBA0();
extern "C" void fn_8020FBC0();
extern "C" void fn_802873F8();
extern "C" void fn_8028B73C();
extern "C" void fn_8028CF14();
extern "C" void fn_8028CF98();
extern "C" void memset();

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3snd13RemoteSpeakerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3snd13RemoteSpeakerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stb r0, 0x2(r3)
    stb r0, 0x3(r3)
    stb r0, 0x4(r3)
    stb r0, 0x5(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x38(r3)
    addi r3, r3, 0x40
    bl OSCreateAlarm
    mr r4, r31
    addi r3, r31, 0x40
    bl OSSetAlarmUserData
    addi r3, r31, 0x70
    bl OSCreateAlarm
    mr r4, r31
    addi r3, r31, 0x70
    bl OSSetAlarmUserData
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020FA34
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020FA34() {
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
    li r30, 0x0
    mr r31, r3
    stb r30, 0x1(r28)
    addi r3, r28, 0x40
    stb r30, 0x2(r28)
    bl OSCancelAlarm
    stb r30, 0x6(r28)
    addi r3, r28, 0x70
    bl OSCancelAlarm
    lwz r12, 0x38(r28)
    li r0, 0x1
    stb r30, 0x7(r28)
    cmpwi r12, 0x0
    stb r30, 0x6(r28)
    stb r30, 0x1(r28)
    stb r0, 0x2(r28)
    stb r30, 0x7(r28)
    beq lbl_8020FAB8
    lwz r3, 0x34(r28)
    li r4, 0x0
    mtctr r12
    bctrl
    stb r30, 0x4(r28)
lbl_8020FAB8:
    li r0, 0x1
    stw r29, 0x38(r28)
    mr r3, r31
    stw r0, 0xc(r28)
    stb r0, 0x0(r28)
    bl OSRestoreInterrupts
    lwz r31, 0x1c(r1)
    li r3, 0x1
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020FAF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020FAF4() {
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
    li r30, 0x0
    mr r31, r3
    stb r30, 0x1(r28)
    addi r3, r28, 0x40
    stb r30, 0x2(r28)
    bl OSCancelAlarm
    stb r30, 0x6(r28)
    addi r3, r28, 0x70
    bl OSCancelAlarm
    lwz r12, 0x38(r28)
    stb r30, 0x7(r28)
    cmpwi r12, 0x0
    beq lbl_8020FB64
    lwz r3, 0x34(r28)
    li r4, 0x0
    mtctr r12
    bctrl
    stb r30, 0x4(r28)
lbl_8020FB64:
    li r3, 0x3
    li r0, 0x0
    stw r3, 0xc(r28)
    mr r3, r31
    stw r29, 0x38(r28)
    stb r0, 0x0(r28)
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
// fn_8020FBA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020FBA0() {
    nofralloc
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8020FBB4
    li r3, 0x0
    blr
lbl_8020FBB4:
    stb r4, 0x2(r3)
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8020FBC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020FBC0() {
    nofralloc
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bnelr
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_8020FBDC
    b lbl_8020FBE0
lbl_8020FBDC:
    lwz r4, 0x10(r3)
lbl_8020FBE0:
    li r0, 0x0
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    b lbl_8020FBF4
    blr
lbl_8020FBF4:
    cmpwi r4, 0x2
    beq lbl_8020FC40
    bge lbl_8020FC10
    cmpwi r4, 0x0
    beqlr
    bge lbl_8020FC1C
    blr
lbl_8020FC10:
    cmpwi r4, 0x4
    bgelr
    b lbl_8020FC68
lbl_8020FC1C:
    li r0, 0x1
    lis r5, SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll@ha
    stb r0, 0x4(r3)
    addi r5, r5, SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll@l
    li r4, 0x1
    stb r0, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_8028B73C
lbl_8020FC40:
    li r6, 0x1
    li r0, 0x3
    lis r5, SpeakerPlayCallback__Q34nw4r3snd13RemoteSpeakerFll@ha
    stb r6, 0x4(r3)
    addi r5, r5, SpeakerPlayCallback__Q34nw4r3snd13RemoteSpeakerFll@l
    li r4, 0x4
    stb r6, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_8028B73C
lbl_8020FC68:
    li r6, 0x1
    li r0, 0x5
    lis r5, SpeakerOffCallback__Q34nw4r3snd13RemoteSpeakerFll@ha
    stb r6, 0x4(r3)
    addi r5, r5, SpeakerOffCallback__Q34nw4r3snd13RemoteSpeakerFll@l
    li r4, 0x0
    stb r6, 0x5(r3)
    stw r0, 0x8(r3)
    lwz r3, 0x34(r3)
    b fn_8028B73C
    blr
}

// ----------------------------------------------------------------------------
// UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs
// ----------------------------------------------------------------------------
extern "C" asm void UpdateStreamData__Q34nw4r3snd13RemoteSpeakerFPCs() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x8(r3)
    mr r29, r3
    mr r25, r4
    cmpwi r0, 0x4
    bne lbl_8020FF80
    lbz r0, 0x2(r3)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_8020FDB8
    li r0, 0x2
    mr r6, r25
    li r5, 0x1
    li r4, 0x0
    mtctr r0
lbl_8020FCE0:
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_8020FCF4
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FCF4:
    lwz r0, 0x4(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD08
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD08:
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD1C
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD1C:
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD30
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD30:
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD44
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD44:
    lwz r0, 0x14(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD58
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD58:
    lwz r0, 0x18(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD6C
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD6C:
    lwz r0, 0x1c(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD80
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD80:
    lwz r0, 0x20(r6)
    cmpwi r0, 0x0
    beq lbl_8020FD94
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FD94:
    lwz r0, 0x24(r6)
    cmpwi r0, 0x0
    beq lbl_8020FDA8
    li r5, 0x0
    b lbl_8020FDBC
lbl_8020FDA8:
    addi r6, r6, 0x28
    addi r4, r4, 0x9
    bdnz lbl_8020FCE0
    b lbl_8020FDBC
lbl_8020FDB8:
    li r5, 0x1
lbl_8020FDBC:
    cmpwi r5, 0x0
    beq lbl_8020FDC8
    li r30, 0x0
lbl_8020FDC8:
    lbz r0, 0x1(r3)
    li r26, 0x0
    cmpwi r0, 0x0
    bne lbl_8020FDE4
    cmpwi r30, 0x0
    beq lbl_8020FDE4
    li r26, 0x1
lbl_8020FDE4:
    cmpwi r0, 0x0
    li r31, 0x0
    beq lbl_8020FDFC
    cmpwi r30, 0x0
    bne lbl_8020FDFC
    li r31, 0x1
lbl_8020FDFC:
    cmpwi r30, 0x0
    beq lbl_8020FEB8
    bl OSDisableInterrupts
    mr r28, r3
    lwz r3, 0x34(r29)
    bl fn_8028CF14
    cmpwi r3, 0x0
    bne lbl_8020FE28
    mr r3, r28
    bl OSRestoreInterrupts
    b lbl_8020FF80
lbl_8020FE28:
    lbz r0, 0x3(r29)
    li r27, 0x0
    mr r5, r25
    addi r3, r29, 0x14
    cntlzw r0, r0
    stb r27, 0x3(r29)
    srwi r4, r0, 5
    addi r7, r1, 0x8
    li r6, 0x28
    bl fn_802873F8
    lwz r3, 0x34(r29)
    addi r4, r1, 0x8
    li r5, 0x14
    bl fn_8028CF98
    cmpwi r3, 0x0
    beq lbl_8020FEB0
    li r30, 0x1
    stw r27, 0x8(r29)
    addi r3, r29, 0x40
    stw r30, 0x10(r29)
    stb r27, 0x1(r29)
    stb r27, 0x2(r29)
    bl OSCancelAlarm
    stb r27, 0x6(r29)
    addi r3, r29, 0x70
    bl OSCancelAlarm
    stb r27, 0x7(r29)
    mr r3, r28
    stb r27, 0x6(r29)
    stb r27, 0x1(r29)
    stb r30, 0x2(r29)
    stb r27, 0x7(r29)
    bl OSRestoreInterrupts
    b lbl_8020FF80
lbl_8020FEB0:
    mr r3, r28
    bl OSRestoreInterrupts
lbl_8020FEB8:
    cmpwi r26, 0x0
    beq lbl_8020FF34
    bl OSDisableInterrupts
    lbz r0, 0x6(r29)
    mr r28, r3
    cmpwi r0, 0x0
    bne lbl_8020FF1C
    lis r3, 0x8000
    lis r7, ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext@ha
    lwz r0, 0xf8(r3)
    li r4, 0x1e0
    li r5, 0x0
    addi r3, r29, 0x40
    srwi r6, r0, 2
    addi r7, r7, ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext@l
    mulhwu r0, r6, r4
    mullw r4, r5, r4
    mulli r6, r6, 0x1e0
    add r5, r0, r4
    bl OSSetAlarm
    bl OSGetTime
    li r0, 0x1
    stw r4, 0xa4(r29)
    stw r3, 0xa0(r29)
    stb r0, 0x6(r29)
lbl_8020FF1C:
    addi r3, r29, 0x70
    bl OSCancelAlarm
    li r0, 0x0
    mr r3, r28
    stb r0, 0x7(r29)
    bl OSRestoreInterrupts
lbl_8020FF34:
    cmpwi r31, 0x0
    beq lbl_8020FF7C
    bl OSDisableInterrupts
    li r0, 0x1
    mr r28, r3
    stb r0, 0x7(r29)
    addi r3, r29, 0x70
    bl OSCancelAlarm
    lis r3, 0x8000
    lis r7, IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext@ha
    lwz r0, 0xf8(r3)
    addi r3, r29, 0x70
    addi r7, r7, IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext@l
    li r5, 0x0
    srwi r6, r0, 2
    bl OSSetAlarm
    mr r3, r28
    bl OSRestoreInterrupts
lbl_8020FF7C:
    stb r30, 0x1(r29)
lbl_8020FF80:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll
// ----------------------------------------------------------------------------
extern "C" asm void SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
    mr r4, r29
    bl GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
    cmpwi r30, -0x1
    mr r31, r3
    beq lbl_8021002C
    bge lbl_8020FFE4
    cmpwi r30, -0x3
    beq lbl_80210020
    bge lbl_80210014
    b lbl_80210038
lbl_8020FFE4:
    cmpwi r30, 0x1
    bge lbl_80210038
    li r0, 0x1
    li r4, 0x0
    stb r0, 0x3(r3)
    li r5, 0x20
    addi r3, r3, 0x14
    bl memset
    li r0, 0x2
    stw r0, 0x8(r31)
    stw r0, 0x10(r31)
    b lbl_80210040
lbl_80210014:
    li r0, 0x1
    stw r0, 0x10(r3)
    b lbl_80210040
lbl_80210020:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210040
lbl_8021002C:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210040
lbl_80210038:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_80210040:
    cmpwi r30, 0x0
    beq lbl_80210080
    cmpwi r30, -0x2
    beq lbl_80210080
    lbz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_80210080
    lwz r12, 0x38(r31)
    cmpwi r12, 0x0
    beq lbl_80210080
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_80210080:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SpeakerPlayCallback__Q34nw4r3snd13RemoteSpeakerFll
// ----------------------------------------------------------------------------
extern "C" asm void SpeakerPlayCallback__Q34nw4r3snd13RemoteSpeakerFll() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
    mr r4, r29
    bl GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
    cmpwi r30, -0x1
    mr r31, r3
    beq lbl_8021011C
    bge lbl_802100F0
    cmpwi r30, -0x3
    beq lbl_80210110
    bge lbl_80210104
    b lbl_80210128
lbl_802100F0:
    cmpwi r30, 0x1
    bge lbl_80210128
    li r0, 0x4
    stw r0, 0x8(r3)
    b lbl_80210130
lbl_80210104:
    li r0, 0x2
    stw r0, 0x10(r3)
    b lbl_80210130
lbl_80210110:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210130
lbl_8021011C:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210130
lbl_80210128:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_80210130:
    cmpwi r30, -0x2
    beq lbl_80210168
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80210168
    lwz r12, 0x38(r3)
    cmpwi r12, 0x0
    beq lbl_80210168
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_80210168:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SpeakerOffCallback__Q34nw4r3snd13RemoteSpeakerFll
// ----------------------------------------------------------------------------
extern "C" asm void SpeakerOffCallback__Q34nw4r3snd13RemoteSpeakerFll() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
    mr r4, r29
    bl GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
    cmpwi r30, -0x1
    mr r31, r3
    beq lbl_80210204
    bge lbl_802101D8
    cmpwi r30, -0x3
    beq lbl_802101F8
    bge lbl_802101EC
    b lbl_80210210
lbl_802101D8:
    cmpwi r30, 0x1
    bge lbl_80210210
    li r0, 0x6
    stw r0, 0x8(r3)
    b lbl_80210218
lbl_802101EC:
    li r0, 0x3
    stw r0, 0x10(r3)
    b lbl_80210218
lbl_802101F8:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210218
lbl_80210204:
    li r0, 0x0
    stw r0, 0x8(r3)
    b lbl_80210218
lbl_80210210:
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_80210218:
    cmpwi r30, -0x2
    beq lbl_80210250
    lbz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80210250
    lwz r12, 0x38(r3)
    cmpwi r12, 0x0
    beq lbl_80210250
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_80210250:
    li r0, 0x0
    stb r0, 0x5(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext
// ----------------------------------------------------------------------------
extern "C" asm void ContinueAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext() {
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
    bl OSGetAlarmUserData
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
// IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext
// ----------------------------------------------------------------------------
extern "C" asm void IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext() {
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
    bl OSGetAlarmUserData
    lbz r0, 0x7(r3)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_80210304
    addi r3, r3, 0x40
    bl OSCancelAlarm
    li r0, 0x0
    stb r0, 0x6(r30)
lbl_80210304:
    li r0, 0x0
    mr r3, r31
    stb r0, 0x7(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

