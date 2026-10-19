#include "types.h"

// Translation unit: src/nw4r/snd/snd_AxVoice.cpp
// Total functions: 35

// Small Data symbols (@sda21)
extern "C" float lbl_804A1FF0;
extern "C" float lbl_804A1FF4;
extern "C" float lbl_804A1FF8;
extern "C" float lbl_804A2000;
extern "C" float lbl_804A2008;
extern "C" float lbl_804A200C;
extern "C" float lbl_804A2010;
extern "C" float lbl_804A2014;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80403D20[];

// Forward declarations
extern "C" void AXGetLpfCoefs();
extern "C" void AXSetVoiceAddr();
extern "C" void AXSetVoicePriority();
extern "C" void CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam();
extern "C" void EnableRemote__Q44nw4r3snd6detail7AxVoiceFb();
extern "C" void GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs();
extern "C" void GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat();
extern "C" void GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv();
extern "C" void IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam();
extern "C" void IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void ReserveForFreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice();
extern "C" void ResetDelta__Q44nw4r3snd6detail7AxVoiceFv();
extern "C" void SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl();
extern "C" void SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam();
extern "C" void SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam();
extern "C" void SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf();
extern "C" void SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb();
extern "C" void SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void SetLpf__Q44nw4r3snd6detail7AxVoiceFUs();
extern "C" void SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam();
extern "C" void SetPriority__Q44nw4r3snd6detail7AxVoiceFUl();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc();
extern "C" void SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam();
extern "C" void SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef();
extern "C" void SetSrc__Q44nw4r3snd6detail7AxVoiceFfb();
extern "C" void SetVe__Q44nw4r3snd6detail7AxVoiceFff();
extern "C" void SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb();
extern "C" void SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse();
extern "C" void SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX();
extern "C" void SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl();
extern "C" void SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType();
extern "C" void Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB();
extern "C" void Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ34nw4r3snd12SampleFormati();
extern "C" void StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv();
extern "C" void VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv();
extern "C" void __ct__Q44nw4r3snd6detail7AxVoiceFv();
extern "C" void __cvt_fp2unsigned();
extern "C" void __dt__Q44nw4r3snd6detail7AxVoiceFv();
extern "C" void __va_arg();
extern "C" void _restgpr_16();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_16();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_80222B20();
extern "C" void memcpy();
extern "C" void memset();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail7AxVoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail7AxVoiceFv() {
    nofralloc
    lis r4, 0x1
    li r5, 0x0
    addi r0, r4, -0x8000
    stw r5, 0x0(r3)
    sth r0, 0x8(r3)
    stw r5, 0x4(r3)
    stb r5, 0xc(r3)
    sth r0, 0xe(r3)
    sth r5, 0xa(r3)
    stw r5, 0x10(r3)
    stb r5, 0x1c(r3)
    stb r5, 0x1d(r3)
    stw r5, 0x38(r3)
    stw r5, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r5, 0x44(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail7AxVoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail7AxVoiceFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802045C8
    cmpwi r4, 0x0
    ble lbl_802045C8
    bl dtor_80136CFC
lbl_802045C8:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ34nw4r3snd12SampleFormati
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ34nw4r3snd12SampleFormati() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    stw r31, 0x10(r28)
    mr r31, r3
    addi r3, r28, 0x1e
    li r4, 0x0
    stw r29, 0x14(r28)
    li r5, 0x18
    stw r30, 0x18(r28)
    bl memset
    li r0, 0x1
    mr r3, r31
    stb r0, 0x1c(r28)
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
// IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x10(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8020469C
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8020478C
lbl_8020469C:
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_802046BC
    lhz r3, 0xa2(r4)
    lhz r0, 0xa4(r4)
    slwi r3, r3, 16
    add r30, r3, r0
    b lbl_802046C0
lbl_802046BC:
    li r30, 0x0
lbl_802046C0:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x0
    lwz r0, 0x14(r29)
    beq lbl_802046D8
    addis r3, r3, 0x8000
lbl_802046D8:
    cmpwi r0, 0x2
    li r4, 0x0
    beq lbl_80204708
    bge lbl_802046F4
    cmpwi r0, 0x1
    bge lbl_80204710
    b lbl_80204714
lbl_802046F4:
    cmpwi r0, 0x4
    bge lbl_80204714
    slwi r3, r3, 1
    addi r4, r3, 0x2
    b lbl_80204714
lbl_80204708:
    mr r4, r3
    b lbl_80204714
lbl_80204710:
    srwi r4, r3, 1
lbl_80204714:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x2
    beq lbl_80204740
    bge lbl_80204730
    cmpwi r0, 0x1
    bge lbl_80204748
    b lbl_80204750
lbl_80204730:
    cmpwi r0, 0x4
    bge lbl_80204750
    addi r0, r4, 0x200
    b lbl_80204760
lbl_80204740:
    addi r0, r4, 0x100
    b lbl_80204760
lbl_80204748:
    addi r0, r4, 0x80
    b lbl_80204760
lbl_80204750:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8020478C
lbl_80204760:
    cmplw r4, r30
    bgt lbl_80204780
    cmplw r30, r0
    bge lbl_80204780
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
    b lbl_8020478C
lbl_80204780:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_8020478C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_802047E4
    bl OSRestoreInterrupts
    b lbl_802048B0
lbl_802047E4:
    cmpwi r27, 0x0
    lwz r0, 0x14(r31)
    beq lbl_802047F4
    addis r27, r27, 0x8000
lbl_802047F4:
    cmpwi r0, 0x2
    li r29, 0x0
    beq lbl_80204854
    bge lbl_80204810
    cmpwi r0, 0x1
    bge lbl_8020485C
    b lbl_80204864
lbl_80204810:
    cmpwi r0, 0x4
    bge lbl_80204864
    lis r3, 0x2492
    slwi r0, r27, 1
    addi r3, r3, 0x4925
    mulhwu r4, r3, r28
    subf r3, r4, r28
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r28
    add r0, r4, r0
    add r29, r0, r3
    addi r29, r29, 0x2
    b lbl_80204864
lbl_80204854:
    add r29, r27, r28
    b lbl_80204864
lbl_8020485C:
    srwi r0, r27, 1
    add r29, r0, r28
lbl_80204864:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_8020487C
    bl OSRestoreInterrupts
    b lbl_802048A8
lbl_8020487C:
    srwi r0, r29, 16
    sth r0, 0x9a(r4)
    lwz r4, 0x0(r31)
    sth r29, 0x9c(r4)
    lwz r5, 0x0(r31)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_802048A4
    ori r0, r4, 0x1000
    stw r0, 0x1c(r5)
lbl_802048A4:
    bl OSRestoreInterrupts
lbl_802048A8:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_802048B0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    mr r27, r4
    mr r28, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_80204904
    bl OSRestoreInterrupts
    b lbl_802049DC
lbl_80204904:
    cmpwi r27, 0x0
    lwz r0, 0x14(r31)
    beq lbl_80204914
    addis r27, r27, 0x8000
lbl_80204914:
    cmpwi r0, 0x2
    li r29, 0x0
    beq lbl_80204978
    bge lbl_80204930
    cmpwi r0, 0x1
    bge lbl_80204984
    b lbl_80204990
lbl_80204930:
    cmpwi r0, 0x4
    bge lbl_80204990
    lis r3, 0x2492
    subi r6, r28, 0x1
    addi r3, r3, 0x4925
    slwi r0, r27, 1
    mulhwu r4, r3, r6
    subf r3, r4, r6
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r6
    add r0, r4, r0
    add r29, r0, r3
    addi r29, r29, 0x2
    b lbl_80204990
lbl_80204978:
    add r29, r27, r28
    subi r29, r29, 0x1
    b lbl_80204990
lbl_80204984:
    srwi r0, r27, 1
    add r3, r28, r0
    subi r29, r3, 0x1
lbl_80204990:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_802049A8
    bl OSRestoreInterrupts
    b lbl_802049D4
lbl_802049A8:
    srwi r0, r29, 16
    sth r0, 0x9e(r4)
    lwz r4, 0x0(r31)
    sth r29, 0xa0(r4)
    lwz r5, 0x0(r31)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_802049D0
    ori r0, r4, 0x2000
    stw r0, 0x1c(r5)
lbl_802049D0:
    bl OSRestoreInterrupts
lbl_802049D4:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_802049DC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80204A30
    bl OSRestoreInterrupts
    b lbl_80204A70
lbl_80204A30:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    bne lbl_80204A48
    bl OSRestoreInterrupts
    b lbl_80204A68
lbl_80204A48:
    sth r30, 0x96(r4)
    lwz r5, 0x0(r29)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_80204A64
    ori r0, r4, 0x800
    stw r0, 0x1c(r5)
lbl_80204A64:
    bl OSRestoreInterrupts
lbl_80204A68:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80204A70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r30, r3
    mr r26, r4
    mr r27, r5
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_80204AC8
    bl OSRestoreInterrupts
    b lbl_80204C70
lbl_80204AC8:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x0
    lwz r0, 0x14(r30)
    beq lbl_80204AE0
    addis r3, r3, 0x8000
lbl_80204AE0:
    cmpwi r0, 0x2
    li r31, 0x0
    beq lbl_80204B10
    bge lbl_80204AFC
    cmpwi r0, 0x1
    bge lbl_80204B18
    b lbl_80204B1C
lbl_80204AFC:
    cmpwi r0, 0x4
    bge lbl_80204B1C
    slwi r3, r3, 1
    addi r31, r3, 0x2
    b lbl_80204B1C
lbl_80204B10:
    mr r31, r3
    b lbl_80204B1C
lbl_80204B18:
    srwi r31, r3, 1
lbl_80204B1C:
    cmpwi r26, 0x0
    beq lbl_80204B28
    addis r26, r26, 0x8000
lbl_80204B28:
    cmpwi r0, 0x2
    li r28, 0x0
    beq lbl_80204B8C
    bge lbl_80204B44
    cmpwi r0, 0x1
    bge lbl_80204B98
    b lbl_80204BA4
lbl_80204B44:
    cmpwi r0, 0x4
    bge lbl_80204BA4
    lis r3, 0x2492
    subi r6, r27, 0x1
    addi r3, r3, 0x4925
    slwi r0, r26, 1
    mulhwu r4, r3, r6
    subf r3, r4, r6
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r6
    add r0, r4, r0
    add r28, r0, r3
    addi r28, r28, 0x2
    b lbl_80204BA4
lbl_80204B8C:
    add r28, r26, r27
    subi r28, r28, 0x1
    b lbl_80204BA4
lbl_80204B98:
    srwi r0, r26, 1
    add r3, r27, r0
    subi r28, r3, 0x1
lbl_80204BA4:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_80204BBC
    bl OSRestoreInterrupts
    b lbl_80204BE8
lbl_80204BBC:
    srwi r0, r31, 16
    sth r0, 0x9a(r4)
    lwz r4, 0x0(r30)
    sth r31, 0x9c(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_80204BE4
    ori r0, r4, 0x1000
    stw r0, 0x1c(r5)
lbl_80204BE4:
    bl OSRestoreInterrupts
lbl_80204BE8:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_80204C00
    bl OSRestoreInterrupts
    b lbl_80204C2C
lbl_80204C00:
    srwi r0, r28, 16
    sth r0, 0x9e(r4)
    lwz r4, 0x0(r30)
    sth r28, 0xa0(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_80204C28
    ori r0, r4, 0x2000
    stw r0, 0x1c(r5)
lbl_80204C28:
    bl OSRestoreInterrupts
lbl_80204C2C:
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_80204C44
    bl OSRestoreInterrupts
    b lbl_80204C68
lbl_80204C44:
    li r0, 0x0
    sth r0, 0x96(r4)
    lwz r5, 0x0(r30)
    lwz r4, 0x1c(r5)
    rlwinm. r0, r4, 0, 21, 21
    bne lbl_80204C64
    ori r0, r4, 0x800
    stw r0, 0x1c(r5)
lbl_80204C64:
    bl OSRestoreInterrupts
lbl_80204C68:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_80204C70:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_80204CC8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80204D04
lbl_80204CC8:
    lwz r4, 0x10(r31)
    li r31, 0x0
    cmpwi r4, 0x0
    beq lbl_80204CFC
    cmplw r29, r4
    li r0, 0x0
    bgt lbl_80204CF0
    cmplw r4, r30
    bgt lbl_80204CF0
    li r0, 0x1
lbl_80204CF0:
    cmpwi r0, 0x0
    beq lbl_80204CFC
    li r31, 0x1
lbl_80204CFC:
    bl OSRestoreInterrupts
    mr r3, r31
lbl_80204D04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80204D58
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80204EB4
lbl_80204D58:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_80204D70
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80204EB4
lbl_80204D70:
    mr r3, r30
    bl IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
    cmpwi r3, 0x0
    beq lbl_80204E1C
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_80204DA0
    lhz r3, 0x9e(r4)
    lhz r0, 0xa0(r4)
    slwi r3, r3, 16
    add r3, r3, r0
    b lbl_80204DA4
lbl_80204DA0:
    li r3, 0x0
lbl_80204DA4:
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_80204DB8
    addis r4, r4, 0x8000
lbl_80204DB8:
    cmpwi r0, 0x2
    li r30, 0x0
    beq lbl_80204DFC
    bge lbl_80204DD4
    cmpwi r0, 0x1
    bge lbl_80204E04
    b lbl_80204E0C
lbl_80204DD4:
    cmpwi r0, 0x4
    bge lbl_80204E0C
    slwi r0, r4, 1
    subf r4, r0, r3
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r30, r3, 0x2
    b lbl_80204E0C
lbl_80204DFC:
    subf r30, r4, r3
    b lbl_80204E0C
lbl_80204E04:
    srwi r0, r4, 1
    subf r30, r0, r3
lbl_80204E0C:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r3, r30, 0x1
    b lbl_80204EB4
lbl_80204E1C:
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_80204E3C
    lhz r3, 0xa2(r4)
    lhz r0, 0xa4(r4)
    slwi r3, r3, 16
    add r3, r3, r0
    b lbl_80204E40
lbl_80204E3C:
    li r3, 0x0
lbl_80204E40:
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_80204E54
    addis r4, r4, 0x8000
lbl_80204E54:
    cmpwi r0, 0x2
    li r30, 0x0
    beq lbl_80204E98
    bge lbl_80204E70
    cmpwi r0, 0x1
    bge lbl_80204EA0
    b lbl_80204EA8
lbl_80204E70:
    cmpwi r0, 0x4
    bge lbl_80204EA8
    slwi r0, r4, 1
    subf r4, r0, r3
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r30, r3, 0x2
    b lbl_80204EA8
lbl_80204E98:
    subf r30, r4, r3
    b lbl_80204EA8
lbl_80204EA0:
    srwi r0, r4, 1
    subf r30, r0, r3
lbl_80204EA8:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
lbl_80204EB4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv
// ----------------------------------------------------------------------------
extern "C" asm void VoiceCallback__Q44nw4r3snd6detail7AxVoiceFPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r30, 0x14(r30)
    li r0, 0x0
    mr r31, r3
    stw r0, 0x0(r30)
    stw r0, 0x4(r30)
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r30
    bl ReserveForFreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
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
// GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
// ----------------------------------------------------------------------------
extern "C" asm void GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_80204F34
    addis r3, r3, 0x8000
lbl_80204F34:
    cmpwi r5, 0x2
    li r0, 0x0
    beq lbl_80204F78
    bge lbl_80204F50
    cmpwi r5, 0x1
    bge lbl_80204F80
    b lbl_80204F88
lbl_80204F50:
    cmpwi r5, 0x4
    bge lbl_80204F88
    slwi r0, r3, 1
    subf r4, r0, r4
    srwi r0, r4, 4
    mulli r3, r0, 0xe
    clrlwi r0, r4, 28
    add r3, r0, r3
    subi r0, r3, 0x2
    b lbl_80204F88
lbl_80204F78:
    subf r0, r3, r4
    b lbl_80204F88
lbl_80204F80:
    srwi r0, r3, 1
    subf r0, r0, r4
lbl_80204F88:
    mr r3, r0
    blr
}

// ----------------------------------------------------------------------------
// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
// ----------------------------------------------------------------------------
extern "C" asm void SetPriority__Q44nw4r3snd6detail7AxVoiceFUl() {
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    b AXSetVoicePriority
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_80204FD8
    bl OSRestoreInterrupts
    b lbl_80204FEC
lbl_80204FD8:
    sth r31, 0x3a(r4)
    lwz r0, 0x4(r30)
    ori r0, r0, 0x8
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_80204FEC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
// ----------------------------------------------------------------------------
extern "C" asm void EnableRemote__Q44nw4r3snd6detail7AxVoiceFb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    bne lbl_80205038
    bl OSRestoreInterrupts
    b lbl_8020504C
lbl_80205038:
    sth r31, 0xfe(r4)
    lwz r0, 0x4(r30)
    oris r0, r0, 0x80
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_8020504C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ResetDelta__Q44nw4r3snd6detail7AxVoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void ResetDelta__Q44nw4r3snd6detail7AxVoiceFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_80205098
    bl OSRestoreInterrupts
    b lbl_8020519C
lbl_80205098:
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_802050B0
    bl OSRestoreInterrupts
    b lbl_802050F0
lbl_802050B0:
    lha r4, 0x94(r4)
    li r0, 0x0
    lhz r6, 0x8(r31)
    mulli r5, r4, 0x60
    lwz r4, 0x0(r31)
    add r5, r6, r5
    sth r5, 0x8(r31)
    lhz r5, 0x8(r31)
    sth r5, 0x92(r4)
    lwz r4, 0x0(r31)
    sth r0, 0x94(r4)
    lwz r4, 0x0(r31)
    lwz r0, 0x1c(r4)
    ori r0, r0, 0x100
    stw r0, 0x1c(r4)
    bl OSRestoreInterrupts
lbl_802050F0:
    lhz r0, 0x1e(r31)
    li r6, 0x0
    mr r3, r31
    addi r4, r1, 0x8
    sth r0, 0x8(r1)
    li r5, 0x1
    sth r6, 0xa(r1)
    lhz r0, 0x20(r31)
    sth r0, 0xc(r1)
    sth r6, 0xe(r1)
    lhz r0, 0x24(r31)
    sth r0, 0x10(r1)
    sth r6, 0x12(r1)
    lhz r0, 0x26(r31)
    sth r0, 0x14(r1)
    sth r6, 0x16(r1)
    lhz r0, 0x2a(r31)
    sth r0, 0x18(r1)
    sth r6, 0x1a(r1)
    lhz r0, 0x2c(r31)
    sth r0, 0x1c(r1)
    sth r6, 0x1e(r1)
    lhz r0, 0x30(r31)
    sth r0, 0x20(r1)
    sth r6, 0x22(r1)
    lhz r0, 0x32(r31)
    sth r0, 0x24(r1)
    sth r6, 0x26(r1)
    lhz r0, 0x22(r31)
    sth r0, 0x28(r1)
    sth r6, 0x2a(r1)
    lhz r0, 0x28(r31)
    sth r0, 0x2c(r1)
    sth r6, 0x2e(r1)
    lhz r0, 0x2e(r31)
    sth r0, 0x30(r1)
    sth r6, 0x32(r1)
    lhz r0, 0x34(r31)
    sth r0, 0x34(r1)
    sth r6, 0x36(r1)
    bl SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
    mr r3, r30
    bl OSRestoreInterrupts
lbl_8020519C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl
// ----------------------------------------------------------------------------
extern "C" asm void SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl OSDisableInterrupts
    lwz r0, 0x0(r26)
    mr r25, r3
    cmpwi r0, 0x0
    bne lbl_802051FC
    bl OSRestoreInterrupts
    b lbl_80205570
lbl_802051FC:
    cmplw r29, r31
    ble lbl_802052FC
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x0
    lwz r6, 0x14(r26)
    mr r0, r3
    li r27, 0x0
    beq lbl_80205224
    addis r0, r3, 0x8000
lbl_80205224:
    cmpwi r6, 0x2
    li r4, 0x0
    beq lbl_80205254
    bge lbl_80205240
    cmpwi r6, 0x1
    bge lbl_8020525C
    b lbl_80205260
lbl_80205240:
    cmpwi r6, 0x4
    bge lbl_80205260
    slwi r4, r0, 1
    addi r4, r4, 0x2
    b lbl_80205260
lbl_80205254:
    mr r4, r0
    b lbl_80205260
lbl_8020525C:
    srwi r4, r0, 1
lbl_80205260:
    cmpwi r3, 0x0
    mr r0, r3
    beq lbl_80205270
    addis r0, r3, 0x8000
lbl_80205270:
    cmpwi r6, 0x2
    li r5, 0x0
    beq lbl_802052A0
    bge lbl_8020528C
    cmpwi r6, 0x1
    bge lbl_802052A8
    b lbl_802052AC
lbl_8020528C:
    cmpwi r6, 0x4
    bge lbl_802052AC
    slwi r5, r0, 1
    addi r5, r5, 0x2
    b lbl_802052AC
lbl_802052A0:
    mr r5, r0
    b lbl_802052AC
lbl_802052A8:
    srwi r5, r0, 1
lbl_802052AC:
    cmpwi r3, 0x0
    beq lbl_802052B8
    addis r3, r3, 0x8000
lbl_802052B8:
    cmpwi r6, 0x2
    li r8, 0x0
    beq lbl_802052E8
    bge lbl_802052D4
    cmpwi r6, 0x1
    bge lbl_802052F0
    b lbl_802054E8
lbl_802052D4:
    cmpwi r6, 0x4
    bge lbl_802054E8
    slwi r3, r3, 1
    addi r8, r3, 0x3
    b lbl_802054E8
lbl_802052E8:
    addi r8, r3, 0x1
    b lbl_802054E8
lbl_802052F0:
    srwi r3, r3, 1
    addi r8, r3, 0x1
    b lbl_802054E8
lbl_802052FC:
    cmpwi r27, 0x0
    beq lbl_8020538C
    cmpwi r28, 0x0
    lwz r0, 0x14(r26)
    mr r3, r28
    beq lbl_80205318
    addis r3, r28, 0x8000
lbl_80205318:
    cmpwi r0, 0x2
    li r5, 0x0
    beq lbl_80205378
    bge lbl_80205334
    cmpwi r0, 0x1
    bge lbl_80205380
    b lbl_802053E0
lbl_80205334:
    cmpwi r0, 0x4
    bge lbl_802053E0
    lis r4, 0x2492
    slwi r3, r3, 1
    addi r4, r4, 0x4925
    mulhwu r5, r4, r30
    subf r4, r5, r30
    srwi r4, r4, 1
    add r5, r4, r5
    srwi r4, r5, 3
    mulli r6, r4, 0xe
    extlwi r4, r5, 28, 1
    subf r5, r6, r30
    add r3, r5, r3
    add r5, r3, r4
    addi r5, r5, 0x2
    b lbl_802053E0
lbl_80205378:
    add r5, r3, r30
    b lbl_802053E0
lbl_80205380:
    srwi r3, r3, 1
    add r5, r3, r30
    b lbl_802053E0
lbl_8020538C:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x0
    lwz r0, 0x14(r26)
    beq lbl_802053A4
    addis r3, r3, 0x8000
lbl_802053A4:
    cmpwi r0, 0x2
    li r5, 0x0
    beq lbl_802053D4
    bge lbl_802053C0
    cmpwi r0, 0x1
    bge lbl_802053DC
    b lbl_802053E0
lbl_802053C0:
    cmpwi r0, 0x4
    bge lbl_802053E0
    slwi r3, r3, 1
    addi r5, r3, 0x2
    b lbl_802053E0
lbl_802053D4:
    mr r5, r3
    b lbl_802053E0
lbl_802053DC:
    srwi r5, r3, 1
lbl_802053E0:
    cmpwi r28, 0x0
    mr r3, r28
    beq lbl_802053F0
    addis r3, r28, 0x8000
lbl_802053F0:
    cmpwi r0, 0x2
    li r4, 0x0
    beq lbl_80205450
    bge lbl_8020540C
    cmpwi r0, 0x1
    bge lbl_80205458
    b lbl_80205460
lbl_8020540C:
    cmpwi r0, 0x4
    bge lbl_80205460
    lis r4, 0x2492
    slwi r3, r3, 1
    addi r4, r4, 0x4925
    mulhwu r6, r4, r29
    subf r4, r6, r29
    srwi r4, r4, 1
    add r6, r4, r6
    srwi r4, r6, 3
    mulli r7, r4, 0xe
    extlwi r4, r6, 28, 1
    subf r6, r7, r29
    add r3, r6, r3
    add r4, r3, r4
    addi r4, r4, 0x2
    b lbl_80205460
lbl_80205450:
    add r4, r3, r29
    b lbl_80205460
lbl_80205458:
    srwi r3, r3, 1
    add r4, r3, r29
lbl_80205460:
    cmpwi r28, 0x0
    beq lbl_8020546C
    addis r28, r28, 0x8000
lbl_8020546C:
    cmpwi r0, 0x2
    li r8, 0x0
    beq lbl_802054D0
    bge lbl_80205488
    cmpwi r0, 0x1
    bge lbl_802054DC
    b lbl_802054E8
lbl_80205488:
    cmpwi r0, 0x4
    bge lbl_802054E8
    lis r3, 0x2492
    subi r8, r31, 0x1
    addi r3, r3, 0x4925
    slwi r0, r28, 1
    mulhwu r6, r3, r8
    subf r3, r6, r8
    srwi r3, r3, 1
    add r6, r3, r6
    srwi r3, r6, 3
    mulli r7, r3, 0xe
    extlwi r3, r6, 28, 1
    subf r6, r7, r8
    add r0, r6, r0
    add r8, r0, r3
    addi r8, r8, 0x2
    b lbl_802054E8
lbl_802054D0:
    add r8, r28, r31
    subi r8, r8, 0x1
    b lbl_802054E8
lbl_802054DC:
    srwi r0, r28, 1
    add r3, r31, r0
    subi r8, r3, 0x1
lbl_802054E8:
    sth r27, 0x8(r1)
    lwz r0, 0x14(r26)
    cmpwi r0, 0x2
    beq lbl_80205518
    bge lbl_80205508
    cmpwi r0, 0x1
    bge lbl_80205520
    b lbl_80205528
lbl_80205508:
    cmpwi r0, 0x4
    bge lbl_80205528
    li r7, 0x0
    b lbl_8020552C
lbl_80205518:
    li r7, 0x19
    b lbl_8020552C
lbl_80205520:
    li r7, 0xa
    b lbl_8020552C
lbl_80205528:
    li r7, 0x0
lbl_8020552C:
    srwi r6, r5, 16
    srwi r3, r8, 16
    srwi r0, r4, 16
    sth r7, 0xa(r1)
    sth r6, 0xc(r1)
    sth r5, 0xe(r1)
    sth r3, 0x10(r1)
    sth r8, 0x12(r1)
    sth r0, 0x14(r1)
    sth r4, 0x16(r1)
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    beq lbl_80205568
    addi r4, r1, 0x8
    bl AXSetVoiceAddr
lbl_80205568:
    mr r3, r25
    bl OSRestoreInterrupts
lbl_80205570:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef
// ----------------------------------------------------------------------------
extern "C" asm void SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_802055D0
    bl OSRestoreInterrupts
    b lbl_80205644
lbl_802055D0:
    cmpwi r30, 0x5
    bne lbl_80205630
    lwz r3, 0x18(r29)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    xoris r0, r3, 0x8000
    lfd f3, lbl_804A2000
    stw r0, 0xc(r1)
    lfs f1, lbl_804A1FF0
    lfd f2, 0x8(r1)
    lfs f0, lbl_804A1FF4
    fsubs f2, f2, f3
    fmuls f2, f31, f2
    fdivs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_80205618
    li r30, 0x2
    b lbl_80205630
lbl_80205618:
    lfs f0, lbl_804A1FF8
    fcmpo cr0, f1, f0
    ble lbl_8020562C
    li r30, 0x3
    b lbl_80205630
lbl_8020562C:
    li r30, 0x4
lbl_80205630:
    mr r3, r29
    mr r4, r30
    bl SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80205644:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam
// ----------------------------------------------------------------------------
extern "C" asm void SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_802056A4
    bl OSRestoreInterrupts
    b lbl_80205798
lbl_802056A4:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x2
    beq lbl_80205728
    bge lbl_802056C0
    cmpwi r0, 0x1
    bge lbl_802056FC
    b lbl_80205750
lbl_802056C0:
    cmpwi r0, 0x4
    bge lbl_80205750
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x20
    bl memcpy
    lhz r5, 0x20(r30)
    lhz r4, 0x22(r30)
    lhz r3, 0x24(r30)
    lhz r0, 0x26(r30)
    sth r5, 0x28(r1)
    sth r4, 0x2a(r1)
    sth r3, 0x2c(r1)
    sth r0, 0x2e(r1)
    b lbl_80205750
lbl_802056FC:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x0
    li r3, 0x800
    sth r3, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
    b lbl_80205750
lbl_80205728:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x0
    li r3, 0x100
    sth r3, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
lbl_80205750:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_8020576C
    bl OSRestoreInterrupts
    b lbl_80205790
lbl_8020576C:
    addi r3, r4, 0xa6
    addi r4, r1, 0x8
    li r5, 0x28
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    ori r0, r0, 0x8000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_80205790:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80205798:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam
// ----------------------------------------------------------------------------
extern "C" asm void IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam() {
    nofralloc
    lhz r5, 0x1e(r3)
    lhz r0, 0x0(r4)
    cmplw r5, r0
    beq lbl_802057CC
    li r3, 0x1
    blr
lbl_802057CC:
    lhz r5, 0x20(r3)
    lhz r0, 0x2(r4)
    cmplw r5, r0
    beq lbl_802057E4
    li r3, 0x1
    blr
lbl_802057E4:
    lhz r5, 0x22(r3)
    lhz r0, 0x4(r4)
    cmplw r5, r0
    beq lbl_802057FC
    li r3, 0x1
    blr
lbl_802057FC:
    lhz r5, 0x24(r3)
    lhz r0, 0x6(r4)
    cmplw r5, r0
    beq lbl_80205814
    li r3, 0x1
    blr
lbl_80205814:
    lhz r5, 0x26(r3)
    lhz r0, 0x8(r4)
    cmplw r5, r0
    beq lbl_8020582C
    li r3, 0x1
    blr
lbl_8020582C:
    lhz r5, 0x28(r3)
    lhz r0, 0xa(r4)
    cmplw r5, r0
    beq lbl_80205844
    li r3, 0x1
    blr
lbl_80205844:
    lhz r5, 0x2a(r3)
    lhz r0, 0xc(r4)
    cmplw r5, r0
    beq lbl_8020585C
    li r3, 0x1
    blr
lbl_8020585C:
    lhz r5, 0x2c(r3)
    lhz r0, 0xe(r4)
    cmplw r5, r0
    beq lbl_80205874
    li r3, 0x1
    blr
lbl_80205874:
    lhz r5, 0x2e(r3)
    lhz r0, 0x10(r4)
    cmplw r5, r0
    beq lbl_8020588C
    li r3, 0x1
    blr
lbl_8020588C:
    lhz r5, 0x30(r3)
    lhz r0, 0x12(r4)
    cmplw r5, r0
    beq lbl_802058A4
    li r3, 0x1
    blr
lbl_802058A4:
    lhz r5, 0x32(r3)
    lhz r0, 0x14(r4)
    cmplw r5, r0
    beq lbl_802058BC
    li r3, 0x1
    blr
lbl_802058BC:
    lhz r5, 0x34(r3)
    lhz r0, 0x16(r4)
    subf r3, r5, r0
    subf r0, r0, r5
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
// ----------------------------------------------------------------------------
extern "C" asm void SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r29)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80205914
    bl OSRestoreInterrupts
    b lbl_80205994
lbl_80205914:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x3
    bne lbl_8020593C
    lhz r4, 0x0(r30)
    lhz r3, 0x2(r30)
    lhz r0, 0x4(r30)
    sth r4, 0x8(r1)
    sth r3, 0xa(r1)
    sth r0, 0xc(r1)
    b lbl_8020594C
lbl_8020593C:
    li r0, 0x0
    sth r0, 0x8(r1)
    sth r0, 0xa(r1)
    sth r0, 0xc(r1)
lbl_8020594C:
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_80205968
    bl OSRestoreInterrupts
    b lbl_8020598C
lbl_80205968:
    addi r3, r4, 0xdc
    addi r4, r1, 0x8
    li r5, 0x6
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x4
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_8020598C:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80205994:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam
// ----------------------------------------------------------------------------
extern "C" asm void SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_16
    mr r17, r3
    mr r18, r4
    bl OSDisableInterrupts
    lwz r4, 0x0(r17)
    mr r16, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_802059EC
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_80205FBC
lbl_802059EC:
    lbz r0, 0x1c(r17)
    cmpwi r0, 0x0
    bne lbl_80205A18
    li r3, 0x0
    beq cr1, lbl_80205A10
    lhz r0, 0x38(r4)
    cmplwi r0, 0x1
    bne lbl_80205A10
    li r3, 0x1
lbl_80205A10:
    cmpwi r3, 0x0
    bne lbl_80205A80
lbl_80205A18:
    lhz r20, 0x0(r18)
    li r0, 0x0
    lhz r19, 0x2(r18)
    lhz r12, 0x4(r18)
    lhz r11, 0x6(r18)
    lhz r10, 0x8(r18)
    lhz r9, 0xa(r18)
    lhz r8, 0xc(r18)
    lhz r7, 0xe(r18)
    lhz r6, 0x10(r18)
    lhz r5, 0x12(r18)
    lhz r4, 0x14(r18)
    lhz r3, 0x16(r18)
    sth r20, 0x1e(r17)
    sth r19, 0x20(r17)
    sth r12, 0x22(r17)
    sth r11, 0x24(r17)
    sth r10, 0x26(r17)
    sth r9, 0x28(r17)
    sth r8, 0x2a(r17)
    sth r7, 0x2c(r17)
    sth r6, 0x2e(r17)
    sth r5, 0x30(r17)
    sth r4, 0x32(r17)
    sth r3, 0x34(r17)
    stb r0, 0x1c(r17)
lbl_80205A80:
    mr r3, r17
    mr r4, r18
    bl IsNeedNextUpdate__Q44nw4r3snd6detail7AxVoiceCFRCQ54nw4r3snd6detail7AxVoice8MixParam
    lhz r0, 0x1e(r17)
    mr r19, r3
    lhz r4, 0x0(r18)
    sth r0, 0x8(r1)
    lhz r0, 0x20(r17)
    sth r0, 0xc(r1)
    lhz r0, 0x22(r17)
    sth r0, 0x28(r1)
    lhz r0, 0x24(r17)
    sth r0, 0x10(r1)
    lhz r0, 0x26(r17)
    sth r0, 0x14(r1)
    lhz r0, 0x28(r17)
    sth r0, 0x2c(r1)
    lhz r0, 0x2a(r17)
    sth r0, 0x18(r1)
    lhz r0, 0x2c(r17)
    sth r0, 0x1c(r1)
    lhz r0, 0x2e(r17)
    sth r0, 0x30(r1)
    lhz r0, 0x30(r17)
    sth r0, 0x20(r1)
    lhz r0, 0x32(r17)
    sth r0, 0x24(r1)
    lhz r0, 0x34(r17)
    sth r0, 0x34(r1)
    lhz r0, 0x1e(r17)
    cmplw r0, r4
    bne lbl_80205B08
    li r31, 0x0
    b lbl_80205B24
lbl_80205B08:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r31, r0, r3
lbl_80205B24:
    lhz r4, 0x2(r18)
    lhz r0, 0x20(r17)
    cmplw r0, r4
    bne lbl_80205B3C
    li r30, 0x0
    b lbl_80205B58
lbl_80205B3C:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r30, r0, r3
lbl_80205B58:
    lhz r4, 0x4(r18)
    lhz r0, 0x22(r17)
    cmplw r0, r4
    bne lbl_80205B70
    li r29, 0x0
    b lbl_80205B8C
lbl_80205B70:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r29, r0, r3
lbl_80205B8C:
    lhz r4, 0x6(r18)
    lhz r0, 0x24(r17)
    cmplw r0, r4
    bne lbl_80205BA4
    li r28, 0x0
    b lbl_80205BC0
lbl_80205BA4:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r28, r0, r3
lbl_80205BC0:
    lhz r4, 0x8(r18)
    lhz r0, 0x26(r17)
    cmplw r0, r4
    bne lbl_80205BD8
    li r27, 0x0
    b lbl_80205BF4
lbl_80205BD8:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r27, r0, r3
lbl_80205BF4:
    lhz r4, 0xa(r18)
    lhz r0, 0x28(r17)
    cmplw r0, r4
    bne lbl_80205C0C
    li r26, 0x0
    b lbl_80205C28
lbl_80205C0C:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r26, r0, r3
lbl_80205C28:
    lhz r4, 0xc(r18)
    lhz r0, 0x2a(r17)
    cmplw r0, r4
    bne lbl_80205C40
    li r25, 0x0
    b lbl_80205C5C
lbl_80205C40:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r25, r0, r3
lbl_80205C5C:
    lhz r4, 0xe(r18)
    lhz r0, 0x2c(r17)
    cmplw r0, r4
    bne lbl_80205C74
    li r24, 0x0
    b lbl_80205C90
lbl_80205C74:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r24, r0, r3
lbl_80205C90:
    lhz r4, 0x10(r18)
    lhz r0, 0x2e(r17)
    cmplw r0, r4
    bne lbl_80205CA8
    li r23, 0x0
    b lbl_80205CC4
lbl_80205CA8:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r23, r0, r3
lbl_80205CC4:
    lhz r4, 0x12(r18)
    lhz r0, 0x30(r17)
    cmplw r0, r4
    bne lbl_80205CDC
    li r22, 0x0
    b lbl_80205CF8
lbl_80205CDC:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r22, r0, r3
lbl_80205CF8:
    lhz r4, 0x14(r18)
    lhz r0, 0x32(r17)
    cmplw r0, r4
    bne lbl_80205D10
    li r21, 0x0
    b lbl_80205D2C
lbl_80205D10:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r21, r0, r3
lbl_80205D2C:
    lhz r4, 0x16(r18)
    lhz r0, 0x34(r17)
    cmplw r0, r4
    bne lbl_80205D44
    li r20, 0x0
    b lbl_80205D60
lbl_80205D44:
    lis r3, 0x2aab
    subf r0, r0, r4
    subi r3, r3, 0x5555
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r20, r0, r3
lbl_80205D60:
    sth r31, 0xa(r1)
    mr r3, r17
    addi r4, r1, 0x8
    li r5, 0x0
    sth r30, 0xe(r1)
    sth r29, 0x2a(r1)
    sth r28, 0x12(r1)
    sth r27, 0x16(r1)
    sth r26, 0x2e(r1)
    sth r25, 0x1a(r1)
    sth r24, 0x1e(r1)
    sth r23, 0x32(r1)
    sth r22, 0x22(r1)
    sth r21, 0x26(r1)
    sth r20, 0x36(r1)
    bl SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
    lhz r0, 0x0(r18)
    cmpwi r0, 0x0
    beq lbl_80205DB4
    cmpwi r31, 0x0
    bne lbl_80205DBC
lbl_80205DB4:
    sth r0, 0x1e(r17)
    b lbl_80205DCC
lbl_80205DBC:
    mulli r0, r31, 0x60
    lhz r3, 0x1e(r17)
    add r0, r3, r0
    sth r0, 0x1e(r17)
lbl_80205DCC:
    lhz r0, 0x2(r18)
    cmpwi r0, 0x0
    beq lbl_80205DE0
    cmpwi r30, 0x0
    bne lbl_80205DE8
lbl_80205DE0:
    sth r0, 0x20(r17)
    b lbl_80205DF8
lbl_80205DE8:
    mulli r0, r30, 0x60
    lhz r3, 0x20(r17)
    add r0, r3, r0
    sth r0, 0x20(r17)
lbl_80205DF8:
    lhz r0, 0x4(r18)
    cmpwi r0, 0x0
    beq lbl_80205E0C
    cmpwi r29, 0x0
    bne lbl_80205E14
lbl_80205E0C:
    sth r0, 0x22(r17)
    b lbl_80205E24
lbl_80205E14:
    mulli r0, r29, 0x60
    lhz r3, 0x22(r17)
    add r0, r3, r0
    sth r0, 0x22(r17)
lbl_80205E24:
    lhz r0, 0x6(r18)
    cmpwi r0, 0x0
    beq lbl_80205E38
    cmpwi r28, 0x0
    bne lbl_80205E40
lbl_80205E38:
    sth r0, 0x24(r17)
    b lbl_80205E50
lbl_80205E40:
    mulli r0, r28, 0x60
    lhz r3, 0x24(r17)
    add r0, r3, r0
    sth r0, 0x24(r17)
lbl_80205E50:
    lhz r0, 0x8(r18)
    cmpwi r0, 0x0
    beq lbl_80205E64
    cmpwi r27, 0x0
    bne lbl_80205E6C
lbl_80205E64:
    sth r0, 0x26(r17)
    b lbl_80205E7C
lbl_80205E6C:
    mulli r0, r27, 0x60
    lhz r3, 0x26(r17)
    add r0, r3, r0
    sth r0, 0x26(r17)
lbl_80205E7C:
    lhz r0, 0xa(r18)
    cmpwi r0, 0x0
    beq lbl_80205E90
    cmpwi r26, 0x0
    bne lbl_80205E98
lbl_80205E90:
    sth r0, 0x28(r17)
    b lbl_80205EA8
lbl_80205E98:
    mulli r0, r26, 0x60
    lhz r3, 0x28(r17)
    add r0, r3, r0
    sth r0, 0x28(r17)
lbl_80205EA8:
    lhz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_80205EBC
    cmpwi r25, 0x0
    bne lbl_80205EC4
lbl_80205EBC:
    sth r0, 0x2a(r17)
    b lbl_80205ED4
lbl_80205EC4:
    mulli r0, r25, 0x60
    lhz r3, 0x2a(r17)
    add r0, r3, r0
    sth r0, 0x2a(r17)
lbl_80205ED4:
    lhz r0, 0xe(r18)
    cmpwi r0, 0x0
    beq lbl_80205EE8
    cmpwi r24, 0x0
    bne lbl_80205EF0
lbl_80205EE8:
    sth r0, 0x2c(r17)
    b lbl_80205F00
lbl_80205EF0:
    mulli r0, r24, 0x60
    lhz r3, 0x2c(r17)
    add r0, r3, r0
    sth r0, 0x2c(r17)
lbl_80205F00:
    lhz r0, 0x10(r18)
    cmpwi r0, 0x0
    beq lbl_80205F14
    cmpwi r23, 0x0
    bne lbl_80205F1C
lbl_80205F14:
    sth r0, 0x2e(r17)
    b lbl_80205F2C
lbl_80205F1C:
    mulli r0, r23, 0x60
    lhz r3, 0x2e(r17)
    add r0, r3, r0
    sth r0, 0x2e(r17)
lbl_80205F2C:
    lhz r0, 0x12(r18)
    cmpwi r0, 0x0
    beq lbl_80205F40
    cmpwi r22, 0x0
    bne lbl_80205F48
lbl_80205F40:
    sth r0, 0x30(r17)
    b lbl_80205F58
lbl_80205F48:
    mulli r0, r22, 0x60
    lhz r3, 0x30(r17)
    add r0, r3, r0
    sth r0, 0x30(r17)
lbl_80205F58:
    lhz r0, 0x14(r18)
    cmpwi r0, 0x0
    beq lbl_80205F6C
    cmpwi r21, 0x0
    bne lbl_80205F74
lbl_80205F6C:
    sth r0, 0x32(r17)
    b lbl_80205F84
lbl_80205F74:
    mulli r0, r21, 0x60
    lhz r3, 0x32(r17)
    add r0, r3, r0
    sth r0, 0x32(r17)
lbl_80205F84:
    lhz r0, 0x16(r18)
    cmpwi r0, 0x0
    beq lbl_80205F98
    cmpwi r20, 0x0
    bne lbl_80205FA0
lbl_80205F98:
    sth r0, 0x34(r17)
    b lbl_80205FB0
lbl_80205FA0:
    mulli r0, r20, 0x60
    lhz r3, 0x34(r17)
    add r0, r3, r0
    sth r0, 0x34(r17)
lbl_80205FB0:
    mr r3, r16
    bl OSRestoreInterrupts
    mr r3, r19
lbl_80205FBC:
    addi r11, r1, 0x80
    bl _restgpr_16
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
// ----------------------------------------------------------------------------
extern "C" asm void SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lhz r12, 0x0(r4)
    li r11, 0x0
    stw r0, 0x34(r1)
    lhz r10, 0x2(r4)
    lhz r9, 0x4(r4)
    lhz r8, 0x6(r4)
    lhz r7, 0x8(r4)
    lhz r6, 0xa(r4)
    lhz r5, 0xc(r4)
    lhz r0, 0xe(r4)
    addi r4, r1, 0x8
    sth r12, 0x8(r1)
    sth r11, 0xa(r1)
    sth r10, 0xc(r1)
    sth r11, 0xe(r1)
    sth r9, 0x10(r1)
    sth r11, 0x12(r1)
    sth r8, 0x14(r1)
    sth r11, 0x16(r1)
    sth r7, 0x18(r1)
    sth r11, 0x1a(r1)
    sth r6, 0x1c(r1)
    sth r11, 0x1e(r1)
    sth r5, 0x20(r1)
    sth r11, 0x22(r1)
    sth r0, 0x24(r1)
    sth r11, 0x26(r1)
    bl SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
// ----------------------------------------------------------------------------
extern "C" asm void SetSrc__Q44nw4r3snd6detail7AxVoiceFfb() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_802060A8
    bl OSRestoreInterrupts
    b lbl_80206200
lbl_802060A8:
    cmpwi r28, 0x0
    beq lbl_80206178
    lwz r3, 0x18(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    xoris r0, r3, 0x8000
    lfd f2, lbl_804A2000
    stw r0, 0x1c(r1)
    lfs f0, lbl_804A1FF0
    lfd f1, 0x18(r1)
    lfs f3, lbl_804A2008
    fsubs f1, f1, f2
    fmuls f1, f31, f1
    fdivs f0, f1, f0
    fcmpo cr0, f0, f3
    ble lbl_802060EC
    b lbl_80206100
lbl_802060EC:
    lfs f3, lbl_804A200C
    fcmpo cr0, f0, f3
    bge lbl_802060FC
    b lbl_80206100
lbl_802060FC:
    fmr f3, f0
lbl_80206100:
    lfs f0, lbl_804A2010
    fmuls f1, f0, f3
    bl __cvt_fp2unsigned
    li r0, 0x0
    srwi r4, r3, 16
    sth r4, 0x8(r1)
    sth r3, 0xa(r1)
    sth r0, 0xc(r1)
    sth r0, 0xe(r1)
    sth r0, 0x10(r1)
    sth r0, 0x12(r1)
    sth r0, 0x14(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_8020614C
    bl OSRestoreInterrupts
    b lbl_802061F8
lbl_8020614C:
    addi r3, r4, 0xce
    addi r4, r1, 0x8
    li r5, 0xe
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    rlwinm r0, r0, 0, 15, 13
    oris r0, r0, 0x1
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_802061F8
lbl_80206178:
    lwz r3, 0x18(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    xoris r0, r3, 0x8000
    lfd f2, lbl_804A2000
    stw r0, 0x1c(r1)
    lfs f0, lbl_804A1FF0
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fmuls f1, f31, f1
    fdivs f31, f1, f0
    bl OSDisableInterrupts
    lwz r28, 0x0(r31)
    mr r29, r3
    cmpwi r28, 0x0
    bne lbl_802061C0
    bl OSRestoreInterrupts
    b lbl_802061F8
lbl_802061C0:
    lfs f0, lbl_804A2010
    fmuls f1, f0, f31
    bl __cvt_fp2unsigned
    srwi r0, r3, 16
    sth r0, 0xce(r28)
    lwz r4, 0x0(r31)
    sth r3, 0xd0(r4)
    lwz r3, 0x4(r31)
    rlwinm. r0, r3, 0, 15, 15
    bne lbl_802061F0
    oris r0, r3, 0x2
    stw r0, 0x4(r31)
lbl_802061F0:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_802061F8:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_80206200:
    opword 0xE3E10038
    lwz r0, 0x44(r1)
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetVe__Q44nw4r3snd6detail7AxVoiceFff
// ----------------------------------------------------------------------------
extern "C" asm void SetVe__Q44nw4r3snd6detail7AxVoiceFff() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    fmr f30, f1
    fmr f31, f2
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80206274
    bl OSRestoreInterrupts
    b lbl_802062DC
lbl_80206274:
    bl OSDisableInterrupts
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_8020628C
    bl OSRestoreInterrupts
    b lbl_802062D4
lbl_8020628C:
    lbz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_802062B8
    lfs f0, lbl_804A2014
    li r0, 0x0
    stb r0, 0xc(r30)
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    sth r0, 0x8(r30)
lbl_802062B8:
    lfs f0, lbl_804A2014
    fmuls f0, f0, f30
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    sth r0, 0xe(r30)
    bl OSRestoreInterrupts
lbl_802062D4:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802062DC:
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
// ----------------------------------------------------------------------------
extern "C" asm void SetLpf__Q44nw4r3snd6detail7AxVoiceFUs() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r30, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_80206344
    bl OSRestoreInterrupts
    b lbl_80206474
lbl_80206344:
    cmplwi r28, 0x3e80
    blt lbl_8020639C
    li r0, 0x0
    sth r0, 0x18(r1)
    sth r0, 0x1a(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_80206374
    bl OSRestoreInterrupts
    b lbl_8020646C
lbl_80206374:
    addi r3, r4, 0xe2
    addi r4, r1, 0x18
    li r5, 0x8
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x8
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_8020646C
lbl_8020639C:
    li r3, 0x0
    beq cr1, lbl_802063B4
    lhz r0, 0xe2(r4)
    cmplwi r0, 0x1
    bne lbl_802063B4
    li r3, 0x1
lbl_802063B4:
    cmpwi r3, 0x0
    beq lbl_8020640C
    mr r3, r28
    addi r4, r1, 0xa
    addi r5, r1, 0x8
    bl AXGetLpfCoefs
    lhz r28, 0x8(r1)
    lhz r29, 0xa(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_802063EC
    bl OSRestoreInterrupts
    b lbl_8020646C
lbl_802063EC:
    sth r29, 0xe6(r4)
    lwz r4, 0x0(r31)
    sth r28, 0xe8(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x10
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_8020646C
lbl_8020640C:
    li r3, 0x1
    li r0, 0x0
    sth r3, 0x10(r1)
    mr r3, r28
    addi r4, r1, 0x14
    addi r5, r1, 0x16
    sth r0, 0x12(r1)
    bl AXGetLpfCoefs
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_80206448
    bl OSRestoreInterrupts
    b lbl_8020646C
lbl_80206448:
    addi r3, r4, 0xe2
    addi r4, r1, 0x10
    li r5, 0x8
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x8
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_8020646C:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_80206474:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf
// ----------------------------------------------------------------------------
extern "C" asm void SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x68
    stfd f31, 0x68(r1)
    bl _savegpr_25
    fmr f31, f1
    mr r31, r3
    mr r25, r4
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_802064D4
    bl OSRestoreInterrupts
    b lbl_8020669C
lbl_802064D4:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    lis r3, lbl_80403D20@ha
    cmpwi r25, 0x0
    clrlslwi r0, r25, 24, 2
    li r4, 0x1
    addi r3, r3, lbl_80403D20@l
    lwzx r3, r3, r0
    bne lbl_802064F8
    li r4, 0x0
lbl_802064F8:
    cmpwi r3, 0x0
    bne lbl_80206504
    li r4, 0x0
lbl_80206504:
    cmpwi r4, 0x0
    bne lbl_80206568
    li r0, 0x0
    sth r0, 0x28(r1)
    sth r0, 0x2a(r1)
    sth r0, 0x2c(r1)
    sth r0, 0x2e(r1)
    sth r0, 0x30(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_80206540
    bl OSRestoreInterrupts
    b lbl_80206694
lbl_80206540:
    addi r3, r4, 0xea
    addi r4, r1, 0x28
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x20
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_80206694
lbl_80206568:
    lwz r12, 0x0(r3)
    fmr f1, f31
    mr r4, r25
    addi r5, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_802065A4
    lhz r0, 0xea(r4)
    cmplwi r0, 0x2
    bne lbl_802065A4
    li r3, 0x1
lbl_802065A4:
    cmpwi r3, 0x0
    beq lbl_80206610
    lhz r25, 0x10(r1)
    lhz r26, 0xe(r1)
    lhz r27, 0xc(r1)
    lhz r28, 0xa(r1)
    lhz r29, 0x8(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    bne lbl_802065D8
    bl OSRestoreInterrupts
    b lbl_80206694
lbl_802065D8:
    sth r29, 0xf4(r4)
    lwz r4, 0x0(r31)
    sth r28, 0xf6(r4)
    lwz r4, 0x0(r31)
    sth r27, 0xf8(r4)
    lwz r4, 0x0(r31)
    sth r26, 0xfa(r4)
    lwz r4, 0x0(r31)
    sth r25, 0xfc(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x40
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
    b lbl_80206694
lbl_80206610:
    lhz r6, 0x8(r1)
    li r7, 0x0
    lhz r5, 0xa(r1)
    li r8, 0x2
    lhz r4, 0xc(r1)
    lhz r3, 0xe(r1)
    lhz r0, 0x10(r1)
    sth r8, 0x14(r1)
    sth r7, 0x16(r1)
    sth r7, 0x18(r1)
    sth r7, 0x1a(r1)
    sth r7, 0x1c(r1)
    sth r6, 0x1e(r1)
    sth r5, 0x20(r1)
    sth r4, 0x22(r1)
    sth r3, 0x24(r1)
    sth r0, 0x26(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r31)
    mr r29, r3
    cmpwi r4, 0x0
    bne lbl_80206670
    bl OSRestoreInterrupts
    b lbl_80206694
lbl_80206670:
    addi r3, r4, 0xea
    addi r4, r1, 0x14
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r31)
    mr r3, r29
    oris r0, r0, 0x20
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_80206694:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_8020669C:
    addi r11, r1, 0x68
    lfd f31, 0x68(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r31, r3
    cmpwi cr1, r4, 0x0
    bne cr1, lbl_802066F4
    bl OSRestoreInterrupts
    b lbl_8020682C
lbl_802066F4:
    cmpwi r30, 0x0
    bne lbl_80206748
    li r0, 0x0
    sth r0, 0x28(r1)
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_80206720
    bl OSRestoreInterrupts
    b lbl_80206824
lbl_80206720:
    addi r3, r4, 0x13c
    addi r4, r1, 0x28
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x1000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
    b lbl_80206824
lbl_80206748:
    li r3, 0x0
    beq cr1, lbl_80206760
    lhz r0, 0x13c(r4)
    cmplwi r0, 0x2
    bne lbl_80206760
    li r3, 0x1
lbl_80206760:
    cmpwi r3, 0x0
    beq lbl_802067AC
    mr r3, r30
    addi r4, r1, 0x10
    addi r5, r1, 0xe
    addi r6, r1, 0xc
    addi r7, r1, 0xa
    addi r8, r1, 0x8
    bl GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs
    lhz r5, 0x10(r1)
    mr r3, r29
    lhz r6, 0xe(r1)
    li r4, 0x2
    lhz r7, 0xc(r1)
    lhz r8, 0xa(r1)
    lhz r9, 0x8(r1)
    opword 0x4CC63182
    bl SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
    b lbl_80206824
lbl_802067AC:
    li r0, 0x0
    li r3, 0x2
    sth r3, 0x14(r1)
    mr r3, r30
    addi r4, r1, 0x1e
    addi r5, r1, 0x20
    sth r0, 0x16(r1)
    addi r6, r1, 0x22
    addi r7, r1, 0x24
    addi r8, r1, 0x26
    sth r0, 0x18(r1)
    sth r0, 0x1a(r1)
    sth r0, 0x1c(r1)
    bl GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs
    bl OSDisableInterrupts
    lwz r4, 0x0(r29)
    mr r30, r3
    cmpwi r4, 0x0
    bne lbl_80206800
    bl OSRestoreInterrupts
    b lbl_80206824
lbl_80206800:
    addi r3, r4, 0x13c
    addi r4, r1, 0x14
    li r5, 0x14
    bl memcpy
    lwz r0, 0x4(r29)
    mr r3, r30
    oris r0, r0, 0x1000
    stw r0, 0x4(r29)
    bl OSRestoreInterrupts
lbl_80206824:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8020682C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam
// ----------------------------------------------------------------------------
extern "C" asm void CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    mr r31, r8
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r26, r7
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x20
    bl memcpy
    lhz r5, 0x20(r31)
    cmpwi r26, 0x0
    lhz r4, 0x22(r31)
    mr r6, r26
    lhz r3, 0x24(r31)
    lhz r0, 0x26(r31)
    sth r5, 0x28(r1)
    sth r4, 0x2a(r1)
    sth r3, 0x2c(r1)
    sth r0, 0x2e(r1)
    beq lbl_802068B4
    addis r6, r26, 0x8000
lbl_802068B4:
    cmpwi r26, 0x0
    slwi r3, r6, 1
    addi r31, r3, 0x2
    beq lbl_802068C8
    addis r26, r26, 0x8000
lbl_802068C8:
    lis r3, 0x2492
    slwi r0, r26, 1
    addi r3, r3, 0x4925
    mulhwu r4, r3, r30
    subf r3, r4, r30
    srwi r3, r3, 1
    add r4, r3, r4
    srwi r3, r4, 3
    mulli r5, r3, 0xe
    extlwi r3, r4, 28, 1
    subf r4, r5, r30
    add r0, r4, r0
    add r30, r0, r3
    addi r30, r30, 0x2
    b lbl_8020694C
lbl_80206904:
    clrlwi. r0, r31, 28
    bne lbl_80206920
    srwi r3, r31, 1
    addi r31, r31, 0x2
    addis r3, r3, 0x8000
    lbz r0, 0x0(r3)
    sth r0, 0x2a(r1)
lbl_80206920:
    srwi r3, r31, 1
    clrlwi. r0, r31, 31
    addis r4, r3, 0x8000
    lbz r4, 0x0(r4)
    addi r3, r1, 0x8
    srawi r0, r4, 4
    beq lbl_80206940
    clrlwi r0, r4, 28
lbl_80206940:
    clrlwi r4, r0, 24
    bl fn_80222B20
    addi r31, r31, 0x1
lbl_8020694C:
    cmplw r31, r30
    blt lbl_80206904
    lhz r0, 0x2a(r1)
    addi r11, r1, 0x50
    sth r0, 0x0(r27)
    lhz r0, 0x2c(r1)
    sth r0, 0x0(r28)
    lhz r0, 0x2e(r1)
    sth r0, 0x0(r29)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
// ----------------------------------------------------------------------------
extern "C" asm void Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    bne lbl_802069B0
    bl OSRestoreInterrupts
    b lbl_80206B14
lbl_802069B0:
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    subi r4, r4, 0x5555
    li r6, -0x1
    sth r0, 0x92(r5)
    lhz r7, 0xe(r31)
    lhz r0, 0x8(r31)
    subf r0, r0, r7
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    extsh r8, r0
    neg r0, r8
    andc r0, r0, r8
    srwi r0, r0, 31
    add. r0, r8, r0
    beq lbl_802069FC
    li r6, 0x1
lbl_802069FC:
    mulli r0, r6, 0x60
    lhz r5, 0x8(r31)
    lhz r4, 0x8(r31)
    add r0, r4, r0
    subf. r4, r0, r7
    mulli r0, r8, 0x60
    add r0, r5, r0
    bge lbl_80206A20
    neg r4, r4
lbl_80206A20:
    subf. r0, r0, r7
    bge lbl_80206A2C
    neg r0, r0
lbl_80206A2C:
    cmpw r0, r4
    bge lbl_80206A40
    lwz r4, 0x0(r31)
    sth r8, 0x94(r4)
    b lbl_80206A48
lbl_80206A40:
    lwz r4, 0x0(r31)
    sth r6, 0x94(r4)
lbl_80206A48:
    lwz r5, 0x0(r31)
    lhz r4, 0x8(r31)
    lha r0, 0x94(r5)
    mulli r0, r0, 0x60
    add. r0, r4, r0
    bge lbl_80206A88
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    subi r4, r4, 0x5555
    neg r0, r0
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    sth r0, 0x94(r5)
    b lbl_80206AB4
lbl_80206A88:
    cmpwi r0, 0x7fff
    ble lbl_80206AB4
    lhz r0, 0x8(r31)
    lis r4, 0x2aab
    subi r4, r4, 0x5555
    subfic r0, r0, 0x7fff
    mulhw r0, r4, r0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    sth r0, 0x94(r5)
lbl_80206AB4:
    lwz r4, 0x0(r31)
    lha r0, 0x94(r4)
    cmpwi r0, 0x0
    bne lbl_80206AD8
    lha r0, 0xa(r31)
    cmpwi r0, 0x0
    bne lbl_80206AD8
    lhz r0, 0xe(r31)
    sth r0, 0x92(r4)
lbl_80206AD8:
    lwz r4, 0x4(r31)
    li r0, 0x0
    lwz r5, 0x0(r31)
    rlwinm r4, r4, 0, 23, 21
    ori r6, r4, 0x100
    stw r6, 0x4(r31)
    lhz r4, 0x92(r5)
    sth r4, 0x8(r31)
    lha r4, 0x94(r5)
    sth r4, 0xa(r31)
    lwz r4, 0x1c(r5)
    or r4, r4, r6
    stw r4, 0x1c(r5)
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_80206B14:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
// ----------------------------------------------------------------------------
extern "C" asm void Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB() {
    nofralloc
    lis r5, 0x1
    li r6, 0x0
    addi r0, r5, -0x8000
    stw r4, 0x0(r3)
    li r5, 0x1
    sth r0, 0x8(r3)
    stw r6, 0x4(r3)
    stb r5, 0xc(r3)
    sth r0, 0xe(r3)
    sth r6, 0xa(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bl OSDisableInterrupts
    lwz r6, 0x0(r30)
    cmpwi r6, 0x0
    bne lbl_80206B90
    bl OSRestoreInterrupts
    b lbl_80206DB0
lbl_80206B90:
    lhz r4, 0x0(r29)
    addi r5, r6, 0x3e
    li r0, 0x0
    cmpwi r4, 0x0
    sth r4, 0x3c(r6)
    beq lbl_80206BAC
    ori r0, r0, 0x1
lbl_80206BAC:
    lhz r6, 0x2(r29)
    addi r4, r29, 0x4
    cmpwi r6, 0x0
    sth r6, 0x0(r5)
    beq lbl_80206BC4
    ori r0, r0, 0x5
lbl_80206BC4:
    lhz r6, 0x0(r4)
    cmpwi r6, 0x0
    sth r6, 0x2(r5)
    beq lbl_80206BD8
    ori r0, r0, 0x2
lbl_80206BD8:
    lhz r6, 0x2(r4)
    cmpwi r6, 0x0
    sth r6, 0x4(r5)
    beq lbl_80206BEC
    ori r0, r0, 0x6
lbl_80206BEC:
    lhz r6, 0x4(r4)
    cmpwi r6, 0x0
    sth r6, 0x6(r5)
    beq lbl_80206C00
    oris r0, r0, 0x1
lbl_80206C00:
    lhz r6, 0x6(r4)
    cmpwi r6, 0x0
    sth r6, 0x8(r5)
    beq lbl_80206C14
    oris r0, r0, 0x5
lbl_80206C14:
    lhz r6, 0x8(r4)
    cmpwi r6, 0x0
    sth r6, 0xa(r5)
    beq lbl_80206C28
    oris r0, r0, 0x2
lbl_80206C28:
    lhz r6, 0xa(r4)
    cmpwi r6, 0x0
    sth r6, 0xc(r5)
    beq lbl_80206C3C
    oris r0, r0, 0x6
lbl_80206C3C:
    lhz r6, 0xc(r4)
    cmpwi r6, 0x0
    sth r6, 0xe(r5)
    beq lbl_80206C50
    oris r0, r0, 0x20
lbl_80206C50:
    lhz r6, 0xe(r4)
    cmpwi r6, 0x0
    sth r6, 0x10(r5)
    beq lbl_80206C64
    oris r0, r0, 0xa0
lbl_80206C64:
    lhz r6, 0x10(r4)
    cmpwi r6, 0x0
    sth r6, 0x12(r5)
    beq lbl_80206C78
    oris r0, r0, 0x40
lbl_80206C78:
    lhz r6, 0x12(r4)
    cmpwi r6, 0x0
    sth r6, 0x14(r5)
    beq lbl_80206C8C
    oris r0, r0, 0xc0
lbl_80206C8C:
    lhz r6, 0x14(r4)
    cmpwi r6, 0x0
    sth r6, 0x16(r5)
    beq lbl_80206CA0
    oris r0, r0, 0x400
lbl_80206CA0:
    lhz r6, 0x16(r4)
    cmpwi r6, 0x0
    sth r6, 0x18(r5)
    beq lbl_80206CB4
    oris r0, r0, 0x1400
lbl_80206CB4:
    lhz r6, 0x18(r4)
    cmpwi r6, 0x0
    sth r6, 0x1a(r5)
    beq lbl_80206CC8
    oris r0, r0, 0x800
lbl_80206CC8:
    lhz r6, 0x1a(r4)
    cmpwi r6, 0x0
    sth r6, 0x1c(r5)
    beq lbl_80206CDC
    oris r0, r0, 0x1800
lbl_80206CDC:
    lhz r6, 0x1c(r4)
    cmpwi r6, 0x0
    sth r6, 0x1e(r5)
    beq lbl_80206CF0
    ori r0, r0, 0x8
lbl_80206CF0:
    lhz r6, 0x1e(r4)
    cmpwi r6, 0x0
    sth r6, 0x20(r5)
    beq lbl_80206D04
    ori r0, r0, 0x18
lbl_80206D04:
    lhz r6, 0x20(r4)
    cmpwi r6, 0x0
    sth r6, 0x22(r5)
    beq lbl_80206D18
    oris r0, r0, 0x8
lbl_80206D18:
    lhz r6, 0x22(r4)
    cmpwi r6, 0x0
    sth r6, 0x24(r5)
    beq lbl_80206D2C
    oris r0, r0, 0x18
lbl_80206D2C:
    lhz r6, 0x24(r4)
    cmpwi r6, 0x0
    sth r6, 0x26(r5)
    beq lbl_80206D40
    oris r0, r0, 0x100
lbl_80206D40:
    lhz r6, 0x26(r4)
    cmpwi r6, 0x0
    sth r6, 0x28(r5)
    beq lbl_80206D54
    oris r0, r0, 0x300
lbl_80206D54:
    lhz r6, 0x28(r4)
    cmpwi r6, 0x0
    sth r6, 0x2a(r5)
    beq lbl_80206D68
    oris r0, r0, 0x2000
lbl_80206D68:
    lhz r4, 0x2a(r4)
    cmpwi r4, 0x0
    sth r4, 0x2c(r5)
    beq lbl_80206D7C
    oris r0, r0, 0x6000
lbl_80206D7C:
    lwz r4, 0x0(r30)
    cmpwi r31, 0x0
    stw r0, 0x34(r4)
    beq lbl_80206DA0
    lwz r4, 0x0(r30)
    lwz r0, 0x1c(r4)
    ori r0, r0, 0x12
    stw r0, 0x1c(r4)
    b lbl_80206DAC
lbl_80206DA0:
    lwz r0, 0x4(r30)
    ori r0, r0, 0x12
    stw r0, 0x4(r30)
lbl_80206DAC:
    bl OSRestoreInterrupts
lbl_80206DB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r5, 0x0(r30)
    cmpwi r5, 0x0
    bne lbl_80206E00
    bl OSRestoreInterrupts
    b lbl_80206E94
lbl_80206E00:
    cmpwi r31, 0x2
    beq lbl_80206E44
    bge lbl_80206E1C
    cmpwi r31, 0x0
    beq lbl_80206E2C
    bge lbl_80206E38
    b lbl_80206E84
lbl_80206E1C:
    cmpwi r31, 0x4
    beq lbl_80206E70
    bge lbl_80206E84
    b lbl_80206E58
lbl_80206E2C:
    li r0, 0x2
    sth r0, 0x30(r5)
    b lbl_80206E84
lbl_80206E38:
    li r0, 0x1
    sth r0, 0x30(r5)
    b lbl_80206E84
lbl_80206E44:
    li r0, 0x0
    sth r0, 0x30(r5)
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
    b lbl_80206E84
lbl_80206E58:
    li r4, 0x0
    li r0, 0x1
    sth r4, 0x30(r5)
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
    b lbl_80206E84
lbl_80206E70:
    li r4, 0x0
    li r0, 0x2
    sth r4, 0x30(r5)
    lwz r4, 0x0(r30)
    sth r0, 0x32(r4)
lbl_80206E84:
    lwz r0, 0x4(r30)
    ori r0, r0, 0x1
    stw r0, 0x4(r30)
    bl OSRestoreInterrupts
lbl_80206E94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    lwz r5, 0x0(r31)
    cmpwi r5, 0x0
    bne lbl_80206EE0
    bl OSRestoreInterrupts
    b lbl_80207080
lbl_80206EE0:
    lhz r0, 0x0(r30)
    addi r4, r5, 0x104
    li r6, 0x0
    cmpwi r0, 0x0
    sth r0, 0x102(r5)
    beq lbl_80206EFC
    ori r6, r6, 0x1
lbl_80206EFC:
    lhz r0, 0x2(r30)
    addi r5, r30, 0x4
    cmpwi r0, 0x0
    sth r0, 0x0(r4)
    beq lbl_80206F18
    ori r0, r6, 0x2
    clrlwi r6, r0, 16
lbl_80206F18:
    lhz r0, 0x0(r5)
    cmpwi r0, 0x0
    sth r0, 0x2(r4)
    beq lbl_80206F30
    ori r0, r6, 0x4
    clrlwi r6, r0, 16
lbl_80206F30:
    lhz r0, 0x2(r5)
    cmpwi r0, 0x0
    sth r0, 0x4(r4)
    beq lbl_80206F48
    ori r0, r6, 0x8
    clrlwi r6, r0, 16
lbl_80206F48:
    lhz r0, 0x4(r5)
    cmpwi r0, 0x0
    sth r0, 0x6(r4)
    beq lbl_80206F60
    ori r0, r6, 0x10
    clrlwi r6, r0, 16
lbl_80206F60:
    lhz r0, 0x6(r5)
    cmpwi r0, 0x0
    sth r0, 0x8(r4)
    beq lbl_80206F78
    ori r0, r6, 0x20
    clrlwi r6, r0, 16
lbl_80206F78:
    lhz r0, 0x8(r5)
    cmpwi r0, 0x0
    sth r0, 0xa(r4)
    beq lbl_80206F90
    ori r0, r6, 0x40
    clrlwi r6, r0, 16
lbl_80206F90:
    lhz r0, 0xa(r5)
    cmpwi r0, 0x0
    sth r0, 0xc(r4)
    beq lbl_80206FA8
    ori r0, r6, 0x80
    clrlwi r6, r0, 16
lbl_80206FA8:
    lhz r0, 0xc(r5)
    cmpwi r0, 0x0
    sth r0, 0xe(r4)
    beq lbl_80206FC0
    ori r0, r6, 0x100
    clrlwi r6, r0, 16
lbl_80206FC0:
    lhz r0, 0xe(r5)
    cmpwi r0, 0x0
    sth r0, 0x10(r4)
    beq lbl_80206FD8
    ori r0, r6, 0x200
    clrlwi r6, r0, 16
lbl_80206FD8:
    lhz r0, 0x10(r5)
    cmpwi r0, 0x0
    sth r0, 0x12(r4)
    beq lbl_80206FF0
    ori r0, r6, 0x400
    clrlwi r6, r0, 16
lbl_80206FF0:
    lhz r0, 0x12(r5)
    cmpwi r0, 0x0
    sth r0, 0x14(r4)
    beq lbl_80207008
    ori r0, r6, 0x800
    clrlwi r6, r0, 16
lbl_80207008:
    lhz r0, 0x14(r5)
    cmpwi r0, 0x0
    sth r0, 0x16(r4)
    beq lbl_80207020
    ori r0, r6, 0x1000
    clrlwi r6, r0, 16
lbl_80207020:
    lhz r0, 0x16(r5)
    cmpwi r0, 0x0
    sth r0, 0x18(r4)
    beq lbl_80207038
    ori r0, r6, 0x2000
    clrlwi r6, r0, 16
lbl_80207038:
    lhz r0, 0x18(r5)
    cmpwi r0, 0x0
    sth r0, 0x1a(r4)
    beq lbl_80207050
    ori r0, r6, 0x4000
    clrlwi r6, r0, 16
lbl_80207050:
    lhz r0, 0x1a(r5)
    cmpwi r0, 0x0
    sth r0, 0x1c(r4)
    beq lbl_80207068
    ori r0, r6, 0x8000
    clrlwi r6, r0, 16
lbl_80207068:
    lwz r4, 0x0(r31)
    sth r6, 0x100(r4)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x300
    stw r0, 0x4(r31)
    bl OSRestoreInterrupts
lbl_80207080:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    bne cr1, lbl_802070D8
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_802070D8:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_80207114
    bl OSRestoreInterrupts
    b lbl_80207204
lbl_80207114:
    cmplwi r26, 0x1
    bne lbl_80207124
    li r27, 0x2
    b lbl_8020713C
lbl_80207124:
    cmplwi r26, 0x2
    bne lbl_80207134
    li r27, 0x5
    b lbl_8020713C
lbl_80207134:
    bl OSRestoreInterrupts
    b lbl_80207204
lbl_8020713C:
    addi r3, r1, 0xa8
    addi r0, r1, 0x8
    lis r4, 0x200
    stw r3, 0x78(r1)
    addi r29, r1, 0x68
    li r28, 0x0
    stw r4, 0x74(r1)
    stw r0, 0x7c(r1)
    b lbl_8020717C
lbl_80207160:
    addi r3, r1, 0x74
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    addi r28, r28, 0x1
    sth r0, 0x0(r29)
    addi r29, r29, 0x2
lbl_8020717C:
    cmpw r28, r27
    blt lbl_80207160
    cmplwi r26, 0x1
    bne lbl_802071B4
    lhz r4, 0x68(r1)
    lwz r3, 0x0(r31)
    lhz r0, 0x6a(r1)
    sth r4, 0x140(r3)
    lwz r3, 0x0(r31)
    sth r0, 0x142(r3)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x2000
    stw r0, 0x4(r31)
    b lbl_802071FC
lbl_802071B4:
    lhz r4, 0x68(r1)
    lwz r3, 0x0(r31)
    lhz r0, 0x6a(r1)
    sth r4, 0x146(r3)
    lhz r5, 0x6c(r1)
    lwz r3, 0x0(r31)
    lhz r4, 0x6e(r1)
    sth r0, 0x148(r3)
    lhz r0, 0x70(r1)
    lwz r3, 0x0(r31)
    sth r5, 0x14a(r3)
    lwz r3, 0x0(r31)
    sth r4, 0x14c(r3)
    lwz r3, 0x0(r31)
    sth r0, 0x14e(r3)
    lwz r0, 0x4(r31)
    oris r0, r0, 0x4000
    stw r0, 0x4(r31)
lbl_802071FC:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_80207204:
    addi r11, r1, 0xa0
    bl _restgpr_26
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

