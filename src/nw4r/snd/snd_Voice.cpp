#include "types.h"

// Translation unit: src/nw4r/snd/snd_Voice.cpp
// Total functions: 48

// Small Data symbols (@sda21)
extern "C" float lbl_804A2218;
extern "C" float lbl_804A221C;
extern "C" float lbl_804A2220;
extern "C" float lbl_804A2224;
extern "C" float lbl_804A2228;
extern "C" float lbl_804A222C;
extern "C" float lbl_804A2230;
extern "C" float lbl_804A2234;
extern "C" float lbl_804A2238;
extern "C" float lbl_804A223C;
extern "C" float lbl_804A2240;
extern "C" float lbl_804A2244;
extern "C" float lbl_804A2248;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_80362A00[];
extern "C" u8 lbl_80362A24[];

// Forward declarations
extern "C" void AXSetVoiceState();
extern "C" void AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv();
extern "C" void Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv();
extern "C" void CalcAxMix__Q44nw4r3snd6detail5VoiceFv();
extern "C" void CalcAxVe__Q44nw4r3snd6detail5VoiceFv();
extern "C" void CalcLpfFreq__Q44nw4r3snd6detail4UtilFf();
extern "C" void CalcMixParam__Q44nw4r3snd6detail5VoiceFiiPQ54nw4r3snd6detail7AxVoice8MixParamPQ54nw4r3snd6detail7AxVoice14RemoteMixParam();
extern "C" void CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam();
extern "C" void CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo();
extern "C" void CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo();
extern "C" void CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf();
extern "C" void Calc__Q44nw4r3snd6detail5VoiceFv();
extern "C" void ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void EnableRemote__Q44nw4r3snd6detail7AxVoiceFb();
extern "C" void FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice();
extern "C" void FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv();
extern "C" void GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv();
extern "C" void GetFormat__Q44nw4r3snd6detail5VoiceCFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetOutputMode__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv();
extern "C" void InitParam__Q44nw4r3snd6detail5VoiceFiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void InvalidateData__Q44nw4r3snd6detail5VoiceFPCvPCv();
extern "C" void InvalidateWaveData__Q44nw4r3snd6detail5VoiceFPCvPCv();
extern "C" void IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv();
extern "C" void IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void Pause__Q44nw4r3snd6detail5VoiceFb();
extern "C" void ResetDelta__Q44nw4r3snd6detail5VoiceFv();
extern "C" void ResetDelta__Q44nw4r3snd6detail7AxVoiceFv();
extern "C" void SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl();
extern "C" void SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam();
extern "C" void SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam();
extern "C" void SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf();
extern "C" void SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf();
extern "C" void SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void SetLoopFlag__Q44nw4r3snd6detail5VoiceFb();
extern "C" void SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb();
extern "C" void SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void SetLpfFreq__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetLpf__Q44nw4r3snd6detail7AxVoiceFUs();
extern "C" void SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainSend__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam();
extern "C" void SetOutputLine__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve();
extern "C" void SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode();
extern "C" void SetPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPitch__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPriority__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetPriority__Q44nw4r3snd6detail7AxVoiceFUl();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc();
extern "C" void SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam();
extern "C" void SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef();
extern "C" void SetSrc__Q44nw4r3snd6detail7AxVoiceFfb();
extern "C" void SetSurroundPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetVeVolume__Q44nw4r3snd6detail5VoiceFff();
extern "C" void SetVe__Q44nw4r3snd6detail7AxVoiceFff();
extern "C" void SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam();
extern "C" void SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType();
extern "C" void SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType();
extern "C" void SetVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl();
extern "C" void Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ34nw4r3snd12SampleFormati();
extern "C" void Start__Q44nw4r3snd6detail5VoiceFv();
extern "C" void StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl();
extern "C" void StopFinished__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv();
extern "C" void TransformDpl2Pan__Q44nw4r3snd6detail5VoiceFPfPfff();
extern "C" void UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Update__Q44nw4r3snd6detail5VoiceFv();
extern "C" void __ct__Q44nw4r3snd6detail5VoiceFv();
extern "C" void __cvt_fp2unsigned();
extern "C" void __dt__Q44nw4r3snd6detail5VoiceFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_19();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_19();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    lfs f0, lbl_804A221C
    lis r4, lbl_80362A24@ha
    lfs f1, lbl_804A2218
    li r0, 0x0
    addi r4, r4, lbl_80362A24@l
    addi r6, r3, 0x44
    addi r5, r3, 0x8c
    stw r0, 0x0(r3)
    cmplw r6, r5
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stfs f1, 0x2c(r3)
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    bge lbl_8021DBE4
    addi r8, r3, 0x44
    lis r4, 0x2aab
    subf r9, r8, r5
    subi r7, r3, 0x34
    addi r10, r9, 0x17
    subi r0, r4, 0x5555
    mulhw r0, r0, r10
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r11, r0, r4
    addi r12, r11, 0x1
    cmpwi r12, 0x8
    ble lbl_8021DB9C
    cmplw r8, r5
    li r4, 0x0
    li r5, 0x0
    bgt lbl_8021DA78
    clrrwi. r0, r9, 31
    li r8, 0x1
    bne lbl_8021DA6C
    clrrwi. r0, r10, 31
    beq lbl_8021DA6C
    li r8, 0x0
lbl_8021DA6C:
    cmpwi r8, 0x0
    beq lbl_8021DA78
    li r5, 0x1
lbl_8021DA78:
    cmpwi r5, 0x0
    beq lbl_8021DAA8
    clrrwi. r8, r11, 31
    li r5, 0x1
    bne lbl_8021DA9C
    clrrwi r0, r12, 31
    cmpw r8, r0
    beq lbl_8021DA9C
    li r5, 0x0
lbl_8021DA9C:
    cmpwi r5, 0x0
    beq lbl_8021DAA8
    li r4, 0x1
lbl_8021DAA8:
    cmpwi r4, 0x0
    beq lbl_8021DB9C
    addi r4, r7, 0xbf
    li r0, 0xc0
    subf r4, r6, r4
    lfs f1, lbl_804A2218
    divwu r4, r4, r0
    lfs f0, lbl_804A221C
    mtctr r4
    cmplw r6, r7
    bge lbl_8021DB9C
lbl_8021DAD4:
    stfs f1, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    stfs f1, 0x18(r6)
    stfs f1, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f0, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f0, 0x2c(r6)
    stfs f1, 0x30(r6)
    stfs f1, 0x34(r6)
    stfs f0, 0x38(r6)
    stfs f0, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f1, 0x48(r6)
    stfs f1, 0x4c(r6)
    stfs f0, 0x50(r6)
    stfs f0, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    stfs f1, 0x64(r6)
    stfs f0, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f0, 0x74(r6)
    stfs f1, 0x78(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f0, 0x8c(r6)
    stfs f1, 0x90(r6)
    stfs f1, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f0, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f0, 0xa4(r6)
    stfs f1, 0xa8(r6)
    stfs f1, 0xac(r6)
    stfs f0, 0xb0(r6)
    stfs f0, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f0, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_8021DAD4
lbl_8021DB9C:
    addi r5, r3, 0x8c
    li r0, 0x18
    addi r4, r5, 0x17
    lfs f1, lbl_804A2218
    subf r4, r6, r4
    lfs f0, lbl_804A221C
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    bge lbl_8021DBE4
lbl_8021DBC4:
    stfs f1, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_8021DBC4
lbl_8021DBE4:
    li r0, 0x0
    stw r0, 0x94(r3)
    stb r0, 0x9c(r3)
    stb r0, 0x9d(r3)
    stb r0, 0x9e(r3)
    stb r0, 0x9f(r3)
    sth r0, 0xa2(r3)
    stw r0, 0x11c(r3)
    stw r0, 0x120(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    beq lbl_8021DCB4
    lis r4, lbl_80362A24@ha
    mr r31, r25
    addi r4, r4, lbl_80362A24@l
    li r29, 0x0
    stw r4, 0x8(r3)
lbl_8021DC64:
    mr r30, r31
    li r28, 0x0
lbl_8021DC6C:
    lwz r27, 0xc(r30)
    cmpwi r27, 0x0
    beq lbl_8021DC84
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r27
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
lbl_8021DC84:
    addi r28, r28, 0x1
    addi r30, r30, 0x4
    cmpwi r28, 0x4
    blt lbl_8021DC6C
    addi r29, r29, 0x1
    addi r31, r31, 0x10
    cmpwi r29, 0x2
    blt lbl_8021DC64
    cmpwi r26, 0x0
    ble lbl_8021DCB4
    mr r3, r25
    bl dtor_80136CFC
lbl_8021DCB4:
    addi r11, r1, 0x30
    mr r3, r25
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail5VoiceFiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail5VoiceFiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv() {
    nofralloc
    lfs f1, lbl_804A2218
    li r8, 0x0
    lfs f0, lbl_804A221C
    li r0, 0x1
    stw r4, 0x8c(r3)
    stw r5, 0x90(r3)
    stw r6, 0x94(r3)
    stw r7, 0x98(r3)
    sth r8, 0xa2(r3)
    stb r8, 0x9f(r3)
    stb r8, 0xa0(r3)
    stb r8, 0x9e(r3)
    stb r8, 0xa1(r3)
    stfs f1, 0x108(r3)
    stfs f0, 0x10c(r3)
    stfs f1, 0x110(r3)
    stfs f1, 0xb4(r3)
    stb r8, 0xa5(r3)
    stfs f0, 0xb8(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xb0(r3)
    stw r0, 0xbc(r3)
    stfs f1, 0xc0(r3)
    stfs f1, 0xc4(r3)
    stfs f0, 0xc8(r3)
    stfs f0, 0xcc(r3)
    stfs f0, 0xd0(r3)
    stfs f1, 0xd4(r3)
    stfs f1, 0xe4(r3)
    stfs f0, 0xf4(r3)
    stfs f1, 0xd8(r3)
    stfs f1, 0xe8(r3)
    stfs f0, 0xf8(r3)
    stfs f1, 0xdc(r3)
    stfs f1, 0xec(r3)
    stfs f0, 0xfc(r3)
    stfs f1, 0xe0(r3)
    stfs f1, 0xf0(r3)
    stfs f0, 0x100(r3)
    stfs f1, 0x104(r3)
    stb r8, 0xa4(r3)
    stw r8, 0x114(r3)
    stw r8, 0x118(r3)
    blr
}

// ----------------------------------------------------------------------------
// StopFinished__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void StopFinished__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x9c(r3)
    cmpwi r0, 0x0
    beq lbl_8021DE04
    lbz r0, 0x9e(r3)
    cmpwi r0, 0x0
    beq lbl_8021DE04
    lwz r3, 0xc(r3)
    li r31, 0x0
    cmpwi r3, 0x0
    beq lbl_8021DDD0
    bl IsPlayFinished__Q44nw4r3snd6detail7AxVoiceCFv
    cmpwi r3, 0x0
    beq lbl_8021DDD0
    li r31, 0x1
lbl_8021DDD0:
    cmpwi r31, 0x0
    beq lbl_8021DE04
    lwz r12, 0x94(r30)
    cmpwi r12, 0x0
    beq lbl_8021DDF8
    mr r3, r30
    lwz r5, 0x98(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_8021DDF8:
    li r0, 0x0
    stb r0, 0x9e(r30)
    stb r0, 0x9d(r30)
lbl_8021DE04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Calc__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void Calc__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, 0x9d(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_8021E084
    lhz r0, 0xa2(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8021DED8
    mr r25, r31
    li r29, 0x0
    li r26, 0x0
    b lbl_8021DEC0
lbl_8021DE64:
    lbz r0, 0xa1(r31)
    lfs f31, 0x104(r31)
    cmpwi r0, 0x0
    bne lbl_8021DE7C
    lfs f0, 0x30(r25)
    fmuls f31, f31, f0
lbl_8021DE7C:
    add r27, r31, r26
    li r30, 0x0
    b lbl_8021DEA8
lbl_8021DE88:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_8021DEA0
    fmr f1, f31
    li r4, 0x0
    bl SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
lbl_8021DEA0:
    addi r27, r27, 0x10
    addi r30, r30, 0x1
lbl_8021DEA8:
    lwz r0, 0x8c(r31)
    cmpw r30, r0
    blt lbl_8021DE88
    addi r25, r25, 0x18
    addi r26, r26, 0x4
    addi r29, r29, 0x1
lbl_8021DEC0:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_8021DE64
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0xa2(r31)
lbl_8021DED8:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_8021DEF8
    mr r3, r31
    bl CalcAxVe__Q44nw4r3snd6detail5VoiceFv
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 29, 27
    sth r0, 0xa2(r31)
lbl_8021DEF8:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_8021DF20
    mr r3, r31
    bl CalcAxMix__Q44nw4r3snd6detail5VoiceFv
    cmpwi r3, 0x0
    bne lbl_8021DF20
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 28, 26
    sth r0, 0xa2(r31)
lbl_8021DF20:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_8021DFA8
    mr r27, r31
    li r28, 0x0
    li r26, 0x0
    b lbl_8021DF90
lbl_8021DF3C:
    lfs f1, 0xb4(r31)
    lfs f0, 0x40(r27)
    fadds f1, f1, f0
    bl CalcLpfFreq__Q44nw4r3snd6detail4UtilFf
    mr r30, r3
    add r25, r31, r26
    li r29, 0x0
    b lbl_8021DF78
lbl_8021DF5C:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_8021DF70
    clrlwi r4, r30, 16
    bl SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
lbl_8021DF70:
    addi r25, r25, 0x10
    addi r29, r29, 0x1
lbl_8021DF78:
    lwz r0, 0x8c(r31)
    cmpw r29, r0
    blt lbl_8021DF5C
    addi r27, r27, 0x18
    addi r26, r26, 0x4
    addi r28, r28, 0x1
lbl_8021DF90:
    lwz r0, 0x90(r31)
    cmpw r28, r0
    blt lbl_8021DF3C
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 27, 25
    sth r0, 0xa2(r31)
lbl_8021DFA8:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 23, 23
    beq lbl_8021E018
    li r29, 0x0
    li r27, 0x0
    b lbl_8021E000
lbl_8021DFC0:
    add r30, r31, r27
    li r28, 0x0
    b lbl_8021DFEC
lbl_8021DFCC:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021DFE4
    lbz r4, 0xa5(r31)
    lfs f1, 0xb8(r31)
    bl SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf
lbl_8021DFE4:
    addi r30, r30, 0x10
    addi r28, r28, 0x1
lbl_8021DFEC:
    lwz r0, 0x8c(r31)
    cmpw r28, r0
    blt lbl_8021DFCC
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_8021E000:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_8021DFC0
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 24, 22
    sth r0, 0xa2(r31)
lbl_8021E018:
    lhz r0, 0xa2(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_8021E084
    li r29, 0x0
    li r30, 0x0
    b lbl_8021E06C
lbl_8021E030:
    add r27, r31, r30
    li r28, 0x0
    b lbl_8021E058
lbl_8021E03C:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_8021E050
    lbz r4, 0xa4(r31)
    bl SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
lbl_8021E050:
    addi r27, r27, 0x10
    addi r28, r28, 0x1
lbl_8021E058:
    lwz r0, 0x8c(r31)
    cmpw r28, r0
    blt lbl_8021E03C
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_8021E06C:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_8021E030
    lhz r0, 0xa2(r31)
    rlwinm r0, r0, 0, 25, 23
    sth r0, 0xa2(r31)
lbl_8021E084:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r3
    bl OSDisableInterrupts
    lbz r0, 0x9c(r30)
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_8021E0E0
    bl OSRestoreInterrupts
    b lbl_8021E344
lbl_8021E0E0:
    lhz r0, 0xa2(r30)
    li r31, 0x0
    clrlwi. r0, r0, 31
    beq lbl_8021E198
    lbz r0, 0x9d(r30)
    cmpwi r0, 0x0
    beq lbl_8021E198
    lbz r0, 0x9e(r30)
    cmpwi r0, 0x0
    bne lbl_8021E198
    mr r25, r30
    li r28, 0x0
    li r26, 0x0
    b lbl_8021E174
lbl_8021E118:
    lbz r0, 0xa1(r30)
    lfs f31, 0x104(r30)
    cmpwi r0, 0x0
    bne lbl_8021E130
    lfs f0, 0x30(r25)
    fmuls f31, f31, f0
lbl_8021E130:
    add r27, r30, r26
    li r31, 0x0
    b lbl_8021E15C
lbl_8021E13C:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_8021E154
    fmr f1, f31
    li r4, 0x1
    bl SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
lbl_8021E154:
    addi r27, r27, 0x10
    addi r31, r31, 0x1
lbl_8021E15C:
    lwz r0, 0x8c(r30)
    cmpw r31, r0
    blt lbl_8021E13C
    addi r25, r25, 0x18
    addi r26, r26, 0x4
    addi r28, r28, 0x1
lbl_8021E174:
    lwz r0, 0x90(r30)
    cmpw r28, r0
    blt lbl_8021E118
    lhz r0, 0xa2(r30)
    li r31, 0x1
    stb r31, 0x9e(r30)
    rlwinm r0, r0, 0, 16, 30
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0xa2(r30)
lbl_8021E198:
    lbz r0, 0x9e(r30)
    cmpwi r0, 0x0
    beq lbl_8021E240
    lhz r0, 0xa2(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_8021E1F0
    lbz r0, 0x9d(r30)
    cmpwi r0, 0x0
    beq lbl_8021E1F0
    lbz r0, 0x9f(r30)
    cmpwi r0, 0x0
    beq lbl_8021E1D8
    li r0, 0x1
    li r31, 0x2
    stb r0, 0xa0(r30)
    b lbl_8021E1E4
lbl_8021E1D8:
    li r0, 0x0
    li r31, 0x1
    stb r0, 0xa0(r30)
lbl_8021E1E4:
    lhz r0, 0xa2(r30)
    rlwinm r0, r0, 0, 31, 29
    sth r0, 0xa2(r30)
lbl_8021E1F0:
    mr r26, r30
    li r27, 0x0
    b lbl_8021E234
lbl_8021E1FC:
    mr r25, r26
    li r28, 0x0
    b lbl_8021E220
lbl_8021E208:
    lwz r3, 0xc(r25)
    cmpwi r3, 0x0
    beq lbl_8021E218
    bl Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
lbl_8021E218:
    addi r25, r25, 0x4
    addi r28, r28, 0x1
lbl_8021E220:
    lwz r0, 0x90(r30)
    cmpw r28, r0
    blt lbl_8021E208
    addi r26, r26, 0x10
    addi r27, r27, 0x1
lbl_8021E234:
    lwz r0, 0x8c(r30)
    cmpw r27, r0
    blt lbl_8021E1FC
lbl_8021E240:
    cmpwi r31, 0x1
    beq lbl_8021E25C
    bge lbl_8021E250
    b lbl_8021E33C
lbl_8021E250:
    cmpwi r31, 0x3
    bge lbl_8021E33C
    b lbl_8021E2C0
lbl_8021E25C:
    mr r26, r30
    li r28, 0x0
    b lbl_8021E2B0
lbl_8021E268:
    mr r31, r26
    li r27, 0x0
    b lbl_8021E29C
lbl_8021E274:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8021E294
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_8021E294
    li r4, 0x1
    bl AXSetVoiceState
lbl_8021E294:
    addi r31, r31, 0x4
    addi r27, r27, 0x1
lbl_8021E29C:
    lwz r0, 0x90(r30)
    cmpw r27, r0
    blt lbl_8021E274
    addi r26, r26, 0x10
    addi r28, r28, 0x1
lbl_8021E2B0:
    lwz r0, 0x8c(r30)
    cmpw r28, r0
    blt lbl_8021E268
    b lbl_8021E33C
lbl_8021E2C0:
    mr r31, r30
    li r28, 0x0
    b lbl_8021E330
lbl_8021E2CC:
    mr r26, r31
    li r27, 0x0
    b lbl_8021E31C
lbl_8021E2D8:
    lwz r3, 0xc(r26)
    cmpwi r3, 0x0
    beq lbl_8021E314
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_8021E304
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_8021E304
    li r4, 0x1
lbl_8021E304:
    cmpwi r4, 0x0
    beq lbl_8021E314
    li r4, 0x0
    bl AXSetVoiceState
lbl_8021E314:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_8021E31C:
    lwz r0, 0x90(r30)
    cmpw r27, r0
    blt lbl_8021E2D8
    addi r31, r31, 0x10
    addi r28, r28, 0x1
lbl_8021E330:
    lwz r0, 0x8c(r30)
    cmpw r28, r0
    blt lbl_8021E2CC
lbl_8021E33C:
    mr r3, r29
    bl OSRestoreInterrupts
lbl_8021E344:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    cmpwi r4, 0x2
    mr r20, r3
    mr r21, r6
    mr r22, r7
    mr r23, r8
    ble lbl_8021E398
    li r30, 0x2
    b lbl_8021E3A8
lbl_8021E398:
    cmpwi r4, 0x1
    li r30, 0x1
    blt lbl_8021E3A8
    mr r30, r4
lbl_8021E3A8:
    cmpwi r5, 0x4
    ble lbl_8021E3B8
    li r29, 0x4
    b lbl_8021E3C8
lbl_8021E3B8:
    cmpwi r5, 0x1
    li r29, 0x1
    blt lbl_8021E3C8
    mr r29, r5
lbl_8021E3C8:
    bl OSDisableInterrupts
    cmpwi r21, 0xff
    mr r19, r3
    li r27, 0x10
    bne lbl_8021E3E0
    li r27, 0x1f
lbl_8021E3E0:
    mullw r26, r30, r29
    addi r28, r1, 0x8
    li r25, 0x0
    lis r31, AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv@ha
    b lbl_8021E500
lbl_8021E3F4:
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r27
    mr r6, r20
    addi r5, r31, AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv@l
    bl AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv
    cmpwi r3, 0x0
    bne lbl_8021E4B4
    subf r24, r25, r26
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    addi r5, r3, 0x8
    lwz r3, 0x8(r3)
    b lbl_8021E448
lbl_8021E424:
    lwz r0, -0x74(r3)
    cmpw r21, r0
    blt lbl_8021E450
    lwz r4, -0x90(r3)
    lwz r0, -0x8c(r3)
    mullw r0, r4, r0
    subf. r24, r0, r24
    ble lbl_8021E450
    lwz r3, 0x0(r3)
lbl_8021E448:
    cmplw r3, r5
    bne lbl_8021E424
lbl_8021E450:
    cmpwi r24, 0x0
    ble lbl_8021E490
    addi r20, r1, 0x8
    li r21, 0x0
    b lbl_8021E478
lbl_8021E464:
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    lwz r4, 0x0(r20)
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
    addi r20, r20, 0x4
    addi r21, r21, 0x1
lbl_8021E478:
    cmpw r21, r25
    blt lbl_8021E464
    mr r3, r19
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8021E588
lbl_8021E490:
    cmplwi r27, 0x1f
    li r24, 0x11
    bne lbl_8021E4A0
    li r24, 0x1f
lbl_8021E4A0:
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r24
    mr r6, r20
    addi r5, r31, AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv@l
    bl AcquireAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFUlPFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv_vPv
lbl_8021E4B4:
    cmpwi r3, 0x0
    bne lbl_8021E4F4
    addi r20, r1, 0x8
    li r21, 0x0
    b lbl_8021E4DC
lbl_8021E4C8:
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    lwz r4, 0x0(r20)
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
    addi r20, r20, 0x4
    addi r21, r21, 0x1
lbl_8021E4DC:
    cmpw r21, r25
    blt lbl_8021E4C8
    mr r3, r19
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8021E588
lbl_8021E4F4:
    stw r3, 0x0(r28)
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_8021E500:
    cmpw r25, r26
    blt lbl_8021E3F4
    mr r24, r20
    addi r21, r1, 0x8
    li r26, 0x0
    b lbl_8021E554
lbl_8021E518:
    mr r25, r24
    li r28, 0x0
    b lbl_8021E544
lbl_8021E524:
    lwz r3, 0x0(r21)
    mr r4, r27
    bl SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
    lwz r0, 0x0(r21)
    addi r21, r21, 0x4
    addi r28, r28, 0x1
    stw r0, 0xc(r25)
    addi r25, r25, 0x4
lbl_8021E544:
    cmpw r28, r29
    blt lbl_8021E524
    addi r24, r24, 0x10
    addi r26, r26, 0x1
lbl_8021E554:
    cmpw r26, r30
    blt lbl_8021E518
    mr r3, r20
    mr r4, r30
    mr r5, r29
    mr r6, r22
    mr r7, r23
    bl InitParam__Q44nw4r3snd6detail5VoiceFiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
    li r0, 0x1
    mr r3, r19
    stb r0, 0x9c(r20)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8021E588:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// Free__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void Free__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    bl OSDisableInterrupts
    lbz r0, 0x9c(r24)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8021E5D4
    bl OSRestoreInterrupts
    b lbl_8021E654
lbl_8021E5D4:
    mr r29, r24
    li r27, 0x0
    li r30, 0x0
    b lbl_8021E628
lbl_8021E5E4:
    mr r28, r29
    li r26, 0x0
    b lbl_8021E614
lbl_8021E5F0:
    lwz r25, 0xc(r28)
    cmpwi r25, 0x0
    beq lbl_8021E60C
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r25
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
    stw r30, 0xc(r28)
lbl_8021E60C:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_8021E614:
    lwz r0, 0x90(r24)
    cmpw r26, r0
    blt lbl_8021E5F0
    addi r29, r29, 0x10
    addi r27, r27, 0x1
lbl_8021E628:
    lwz r0, 0x8c(r24)
    cmpw r27, r0
    blt lbl_8021E5E4
    li r30, 0x0
    stw r30, 0x8c(r24)
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    mr r4, r24
    bl FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
    stb r30, 0x9c(r24)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8021E654:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    mr r23, r3
    mr r24, r4
    lwz r28, 0xc(r4)
    mr r25, r5
    mr r31, r23
    mr r30, r24
    addi r29, r4, 0x44
    li r27, 0x0
    b lbl_8021E860
lbl_8021E6A4:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8021E850
    lwz r0, 0x0(r24)
    lwz r26, 0x18(r30)
    cmpwi r0, 0x3
    bne lbl_8021E7B4
    lhz r15, 0x36(r30)
    mr r6, r25
    lhz r0, 0x32(r30)
    mr r7, r26
    stw r15, 0x48(r1)
    addi r3, r1, 0x2a
    lhz r15, 0x38(r30)
    addi r4, r1, 0x2c
    sth r0, 0x1e(r1)
    addi r5, r1, 0x2e
    lwz r0, 0x48(r1)
    addi r8, r1, 0x8
    stw r15, 0x30(r1)
    lhz r15, 0x3a(r30)
    sth r0, 0x22(r1)
    lwz r0, 0x30(r1)
    stw r15, 0x34(r1)
    lhz r15, 0x3c(r30)
    sth r0, 0x24(r1)
    lwz r0, 0x34(r1)
    stw r15, 0x38(r1)
    lhz r15, 0x3e(r30)
    sth r0, 0x26(r1)
    lwz r0, 0x38(r1)
    stw r15, 0x3c(r1)
    lhz r15, 0x40(r30)
    sth r0, 0x28(r1)
    lwz r0, 0x3c(r1)
    stw r15, 0x40(r1)
    lhz r15, 0x42(r30)
    sth r0, 0x2a(r1)
    lwz r0, 0x40(r1)
    lhz r16, 0x1c(r30)
    lhz r17, 0x1e(r30)
    lhz r18, 0x20(r30)
    lhz r19, 0x22(r30)
    lhz r20, 0x24(r30)
    lhz r21, 0x26(r30)
    lhz r22, 0x28(r30)
    lhz r12, 0x2a(r30)
    lhz r11, 0x2c(r30)
    lhz r10, 0x2e(r30)
    lhz r9, 0x30(r30)
    lhz r14, 0x34(r30)
    sth r0, 0x2c(r1)
    mr r0, r15
    stw r15, 0x44(r1)
    sth r16, 0x8(r1)
    sth r17, 0xa(r1)
    sth r18, 0xc(r1)
    sth r19, 0xe(r1)
    sth r20, 0x10(r1)
    sth r21, 0x12(r1)
    sth r22, 0x14(r1)
    sth r12, 0x16(r1)
    sth r11, 0x18(r1)
    sth r10, 0x1a(r1)
    sth r9, 0x1c(r1)
    sth r14, 0x20(r1)
    sth r0, 0x2e(r1)
    bl CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ34nw4r3snd10AdpcmParam
lbl_8021E7B4:
    mr r14, r31
    li r15, 0x0
    b lbl_8021E844
lbl_8021E7C0:
    lwz r16, 0xc(r14)
    cmpwi r16, 0x0
    beq lbl_8021E83C
    lwz r4, 0x18(r30)
    mr r3, r16
    lwz r5, 0x0(r24)
    mr r6, r28
    bl Setup__Q44nw4r3snd6detail7AxVoiceFPCvQ34nw4r3snd12SampleFormati
    lbz r4, 0x4(r24)
    mr r3, r16
    lwz r7, 0x10(r24)
    mr r5, r26
    lwz r8, 0x14(r24)
    mr r6, r25
    bl SetAddr__Q44nw4r3snd6detail7AxVoiceFbPCvUlUlUl
    lwz r0, 0x0(r24)
    cmpwi r0, 0x3
    bne lbl_8021E820
    mr r3, r16
    addi r4, r1, 0x8
    bl SetAdpcm__Q44nw4r3snd6detail7AxVoiceFPCQ34nw4r3snd10AdpcmParam
    mr r3, r16
    mr r4, r29
    bl SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
lbl_8021E820:
    lfs f1, 0x104(r23)
    mr r3, r16
    li r4, 0x5
    bl SetSrcType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice7SrcTypef
    mr r3, r16
    li r4, 0x0
    bl SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
lbl_8021E83C:
    addi r14, r14, 0x4
    addi r15, r15, 0x1
lbl_8021E844:
    lwz r0, 0x90(r23)
    cmpw r15, r0
    blt lbl_8021E7C0
lbl_8021E850:
    addi r31, r31, 0x10
    addi r30, r30, 0x34
    addi r29, r29, 0x34
    addi r27, r27, 0x1
lbl_8021E860:
    lwz r0, 0x8c(r23)
    cmpw r27, r0
    blt lbl_8021E6A4
    lfs f1, lbl_804A2218
    mr r3, r23
    lfs f0, lbl_804A221C
    li r4, 0x0
    b lbl_8021E8A0
lbl_8021E880:
    stfs f1, 0x2c(r3)
    addi r4, r4, 0x1
    stfs f1, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    addi r3, r3, 0x18
lbl_8021E8A0:
    lwz r0, 0x90(r23)
    cmpw r4, r0
    blt lbl_8021E880
    lhz r0, 0xa2(r23)
    li r3, 0x0
    stb r3, 0x9f(r23)
    addi r11, r1, 0xa0
    ori r0, r0, 0x38
    stb r3, 0xa0(r23)
    stb r3, 0x9d(r23)
    stb r3, 0x9e(r23)
    sth r0, 0xa2(r23)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// Start__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void Start__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    lhz r0, 0xa2(r3)
    li r5, 0x1
    li r4, 0x0
    stb r5, 0x9d(r3)
    ori r0, r0, 0x1
    stb r4, 0x9f(r3)
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// Stop__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x9e(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_8021E9AC
    mr r29, r27
    li r30, 0x0
    b lbl_8021E998
lbl_8021E934:
    mr r28, r29
    li r31, 0x0
    b lbl_8021E984
lbl_8021E940:
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    beq lbl_8021E97C
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_8021E96C
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_8021E96C
    li r4, 0x1
lbl_8021E96C:
    cmpwi r4, 0x0
    beq lbl_8021E97C
    li r4, 0x0
    bl AXSetVoiceState
lbl_8021E97C:
    addi r28, r28, 0x4
    addi r31, r31, 0x1
lbl_8021E984:
    lwz r0, 0x90(r27)
    cmpw r31, r0
    blt lbl_8021E940
    addi r29, r29, 0x10
    addi r30, r30, 0x1
lbl_8021E998:
    lwz r0, 0x8c(r27)
    cmpw r30, r0
    blt lbl_8021E934
    li r0, 0x0
    stb r0, 0x9e(r27)
lbl_8021E9AC:
    li r0, 0x0
    addi r11, r1, 0x20
    stb r0, 0xa0(r27)
    stb r0, 0x9f(r27)
    stb r0, 0x9d(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Pause__Q44nw4r3snd6detail5VoiceFb
// ----------------------------------------------------------------------------
extern "C" asm void Pause__Q44nw4r3snd6detail5VoiceFb() {
    nofralloc
    lbz r0, 0x9f(r3)
    cmplw r0, r4
    beqlr
    lhz r0, 0xa2(r3)
    stb r4, 0x9f(r3)
    ori r0, r0, 0x2
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetFormat__Q44nw4r3snd6detail5VoiceCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetFormat__Q44nw4r3snd6detail5VoiceCFv() {
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8021EA08
    lwz r3, 0x14(r3)
    blr
lbl_8021EA08:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// SetVolume__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetVolume__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021EA20
    b lbl_8021EA34
lbl_8021EA20:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021EA30
    b lbl_8021EA34
lbl_8021EA30:
    fmr f2, f1
lbl_8021EA34:
    lfs f0, 0x108(r3)
    fcmpu cr0, f2, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f2, 0x108(r3)
    ori r0, r0, 0x8
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVeVolume__Q44nw4r3snd6detail5VoiceFff
// ----------------------------------------------------------------------------
extern "C" asm void SetVeVolume__Q44nw4r3snd6detail5VoiceFff() {
    nofralloc
    lfs f3, lbl_804A2218
    fcmpo cr0, f1, f3
    ble lbl_8021EA64
    b lbl_8021EA78
lbl_8021EA64:
    lfs f3, lbl_804A221C
    fcmpo cr0, f1, f3
    bge lbl_8021EA74
    b lbl_8021EA78
lbl_8021EA74:
    fmr f3, f1
lbl_8021EA78:
    lfs f1, lbl_804A2218
    fcmpo cr0, f2, f1
    ble lbl_8021EA88
    b lbl_8021EA9C
lbl_8021EA88:
    lfs f1, lbl_804A221C
    fcmpo cr0, f2, f1
    bge lbl_8021EA98
    b lbl_8021EA9C
lbl_8021EA98:
    fmr f1, f2
lbl_8021EA9C:
    lfs f0, lbl_804A221C
    fcmpo cr0, f1, f0
    bge lbl_8021EAC8
    lfs f0, 0x110(r3)
    fcmpu cr0, f3, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f3, 0x110(r3)
    ori r0, r0, 0x8
    sth r0, 0xa2(r3)
    blr
lbl_8021EAC8:
    lfs f0, 0x10c(r3)
    fcmpu cr0, f1, f0
    bne lbl_8021EAE0
    lfs f0, 0x110(r3)
    fcmpu cr0, f3, f0
    beqlr
lbl_8021EAE0:
    lhz r0, 0xa2(r3)
    stfs f1, 0x10c(r3)
    ori r0, r0, 0x8
    stfs f3, 0x110(r3)
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPitch__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetPitch__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f0, 0x104(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0x104(r3)
    ori r0, r0, 0x4
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode
// ----------------------------------------------------------------------------
extern "C" asm void SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode() {
    nofralloc
    lwz r0, 0x114(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0x114(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve
// ----------------------------------------------------------------------------
extern "C" asm void SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve() {
    nofralloc
    lwz r0, 0x118(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0x118(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPan__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetPan__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f0, 0xac(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xac(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetSurroundPan__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetSurroundPan__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f0, 0xb0(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xb0(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetLpfFreq__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetLpfFreq__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f0, 0xb4(r3)
    fcmpu cr0, f1, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f1, 0xb4(r3)
    ori r0, r0, 0x20
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif
// ----------------------------------------------------------------------------
extern "C" asm void SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021EBC8
    b lbl_8021EBDC
lbl_8021EBC8:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021EBD8
    b lbl_8021EBDC
lbl_8021EBD8:
    fmr f2, f1
lbl_8021EBDC:
    lbz r0, 0xa5(r3)
    li r5, 0x0
    cmpw r4, r0
    beq lbl_8021EBF4
    stb r4, 0xa5(r3)
    li r5, 0x1
lbl_8021EBF4:
    lfs f0, 0xb8(r3)
    fcmpu cr0, f2, f0
    beq lbl_8021EC08
    stfs f2, 0xb8(r3)
    li r5, 0x1
lbl_8021EC08:
    cmpwi r5, 0x0
    beqlr
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x100
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi() {
    nofralloc
    cmpwi r4, 0x7f
    ble lbl_8021EC30
    li r4, 0x7f
    b lbl_8021EC38
lbl_8021EC30:
    srawi r0, r4, 31
    andc r4, r4, r0
lbl_8021EC38:
    lbz r0, 0xa4(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stb r4, 0xa4(r3)
    ori r0, r0, 0x80
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetOutputLine__Q44nw4r3snd6detail5VoiceFi
// ----------------------------------------------------------------------------
extern "C" asm void SetOutputLine__Q44nw4r3snd6detail5VoiceFi() {
    nofralloc
    lwz r0, 0xbc(r3)
    cmpw r4, r0
    beqlr
    lhz r0, 0xa2(r3)
    stw r4, 0xbc(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021EC88
    b lbl_8021EC9C
lbl_8021EC88:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021EC98
    b lbl_8021EC9C
lbl_8021EC98:
    fmr f2, f1
lbl_8021EC9C:
    lfs f0, 0xc0(r3)
    fcmpu cr0, f2, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f2, 0xc0(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetMainSend__Q44nw4r3snd6detail5VoiceFf
// ----------------------------------------------------------------------------
extern "C" asm void SetMainSend__Q44nw4r3snd6detail5VoiceFf() {
    nofralloc
    lfs f2, lbl_804A2218
    fadds f0, f1, f2
    fcmpo cr0, f0, f2
    ble lbl_8021ECD0
    b lbl_8021ECE4
lbl_8021ECD0:
    lfs f2, lbl_804A221C
    fcmpo cr0, f0, f2
    bge lbl_8021ECE0
    b lbl_8021ECE4
lbl_8021ECE0:
    fmr f2, f0
lbl_8021ECE4:
    lfs f0, 0xc4(r3)
    fcmpu cr0, f2, f0
    beqlr
    lhz r0, 0xa2(r3)
    stfs f2, 0xc4(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf
// ----------------------------------------------------------------------------
extern "C" asm void SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021ED14
    b lbl_8021ED28
lbl_8021ED14:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021ED24
    b lbl_8021ED28
lbl_8021ED24:
    fmr f2, f1
lbl_8021ED28:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xc8(r4)
    fcmpu cr0, f2, f0
    beqlr
    stfs f2, 0xc8(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021ED60
    b lbl_8021ED74
lbl_8021ED60:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021ED70
    b lbl_8021ED74
lbl_8021ED70:
    fmr f2, f1
lbl_8021ED74:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xd4(r4)
    fcmpu cr0, f2, f0
    beqlr
    stfs f2, 0xd4(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteSend__Q44nw4r3snd6detail5VoiceFif
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteSend__Q44nw4r3snd6detail5VoiceFif() {
    nofralloc
    lfs f2, lbl_804A2218
    fadds f0, f1, f2
    fcmpo cr0, f0, f2
    ble lbl_8021EDB0
    b lbl_8021EDC4
lbl_8021EDB0:
    lfs f2, lbl_804A221C
    fcmpo cr0, f0, f2
    bge lbl_8021EDC0
    b lbl_8021EDC4
lbl_8021EDC0:
    fmr f2, f0
lbl_8021EDC4:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xe4(r4)
    fcmpu cr0, f2, f0
    beqlr
    stfs f2, 0xe4(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif() {
    nofralloc
    lfs f2, lbl_804A2218
    fcmpo cr0, f1, f2
    ble lbl_8021EDFC
    b lbl_8021EE10
lbl_8021EDFC:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    bge lbl_8021EE0C
    b lbl_8021EE10
lbl_8021EE0C:
    fmr f2, f1
lbl_8021EE10:
    slwi r0, r4, 2
    add r4, r3, r0
    lfs f0, 0xf4(r4)
    fcmpu cr0, f2, f0
    beqlr
    stfs f2, 0xf4(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x10
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam() {
    nofralloc
    mulli r0, r4, 0x18
    lfs f1, 0x0(r5)
    lfs f0, 0x4(r5)
    lfs f3, 0x8(r5)
    add r4, r3, r0
    lfs f2, 0xc(r5)
    stfs f1, 0x2c(r4)
    lfs f1, 0x10(r5)
    stfs f0, 0x30(r4)
    lfs f0, 0x14(r5)
    stfs f3, 0x34(r4)
    stfs f2, 0x38(r4)
    stfs f1, 0x3c(r4)
    stfs f0, 0x40(r4)
    lhz r0, 0xa2(r3)
    ori r0, r0, 0x3c
    sth r0, 0xa2(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPriority__Q44nw4r3snd6detail5VoiceFi
// ----------------------------------------------------------------------------
extern "C" asm void SetPriority__Q44nw4r3snd6detail5VoiceFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    stw r4, 0xa8(r3)
    mr r27, r3
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    mr r4, r27
    bl ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
    lwz r0, 0xa8(r27)
    cmpwi r0, 0x1
    bne lbl_8021EF08
    mr r31, r27
    li r29, 0x0
    b lbl_8021EEFC
lbl_8021EEC0:
    mr r30, r31
    li r28, 0x0
    b lbl_8021EEE8
lbl_8021EECC:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021EEE0
    li r4, 0xf
    bl SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
lbl_8021EEE0:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_8021EEE8:
    lwz r0, 0x90(r27)
    cmpw r28, r0
    blt lbl_8021EECC
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_8021EEFC:
    lwz r0, 0x8c(r27)
    cmpw r29, r0
    blt lbl_8021EEC0
lbl_8021EF08:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0xa8(r3)
    mr r27, r3
    cmpwi r0, 0x1
    beq lbl_8021EF98
    mr r31, r27
    li r29, 0x0
    b lbl_8021EF8C
lbl_8021EF50:
    mr r30, r31
    li r28, 0x0
    b lbl_8021EF78
lbl_8021EF5C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021EF70
    li r4, 0x10
    bl SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
lbl_8021EF70:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_8021EF78:
    lwz r0, 0x90(r27)
    cmpw r28, r0
    blt lbl_8021EF5C
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_8021EF8C:
    lwz r0, 0x8c(r27)
    cmpw r29, r0
    blt lbl_8021EF50
lbl_8021EF98:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam
// ----------------------------------------------------------------------------
extern "C" asm void SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    slwi r0, r4, 4
    stw r31, 0x1c(r1)
    add r31, r3, r0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_8021F000
lbl_8021EFE4:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8021EFF8
    mr r4, r29
    bl SetAdpcmLoop__Q44nw4r3snd6detail7AxVoiceFPCQ44nw4r3snd6detail14AdpcmLoopParam
lbl_8021EFF8:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_8021F000:
    lwz r0, 0x90(r28)
    cmpw r30, r0
    blt lbl_8021EFE4
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
// GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv() {
    nofralloc
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_8021F03C
    b GetCurrentPlayingSample__Q44nw4r3snd6detail7AxVoiceCFv
lbl_8021F03C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_8021F094
lbl_8021F074:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8021F08C
    mr r4, r28
    mr r5, r29
    bl SetLoopStart__Q44nw4r3snd6detail7AxVoiceFPCvUl
lbl_8021F08C:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_8021F094:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_8021F074
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_8021F108
lbl_8021F0E8:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8021F100
    mr r4, r28
    mr r5, r29
    bl SetLoopEnd__Q44nw4r3snd6detail7AxVoiceFPCvUl
lbl_8021F100:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_8021F108:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_8021F0E8
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetLoopFlag__Q44nw4r3snd6detail5VoiceFb
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopFlag__Q44nw4r3snd6detail5VoiceFb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r31, r26
    li r29, 0x0
    b lbl_8021F190
lbl_8021F154:
    mr r30, r31
    li r28, 0x0
    b lbl_8021F17C
lbl_8021F160:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021F174
    mr r4, r27
    bl SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
lbl_8021F174:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_8021F17C:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_8021F160
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_8021F190:
    lwz r0, 0x8c(r26)
    cmpw r29, r0
    blt lbl_8021F154
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl
// ----------------------------------------------------------------------------
extern "C" asm void StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    slwi r0, r4, 4
    mr r27, r3
    mr r28, r5
    mr r29, r6
    add r31, r3, r0
    li r30, 0x0
    b lbl_8021F204
lbl_8021F1E4:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    beq lbl_8021F1FC
    mr r4, r28
    mr r5, r29
    bl StopAtPoint__Q44nw4r3snd6detail7AxVoiceFPCvUl
lbl_8021F1FC:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_8021F204:
    lwz r0, 0x90(r27)
    cmpw r30, r0
    blt lbl_8021F1E4
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
// ----------------------------------------------------------------------------
extern "C" asm void SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r31, r26
    li r29, 0x0
    b lbl_8021F28C
lbl_8021F250:
    mr r30, r31
    li r28, 0x0
    b lbl_8021F278
lbl_8021F25C:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021F270
    mr r4, r27
    bl SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
lbl_8021F270:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_8021F278:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_8021F25C
    addi r31, r31, 0x10
    addi r29, r29, 0x1
lbl_8021F28C:
    lwz r0, 0x8c(r26)
    cmpw r29, r0
    blt lbl_8021F250
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// CalcAxVe__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcAxVe__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    addi r11, r1, 0x20
    bl _savegpr_26
    lfs f31, lbl_804A2218
    mr r26, r3
    lfs f0, 0x108(r3)
    fmuls f31, f31, f0
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv
    fmuls f31, f31, f1
    mr r31, r26
    li r28, 0x0
    li r30, 0x0
    b lbl_8021F364
lbl_8021F308:
    lfs f0, 0x2c(r31)
    add r29, r26, r30
    lfs f1, 0x110(r26)
    li r27, 0x0
    fmuls f2, f31, f0
    lfs f0, 0x10c(r26)
    fmuls f30, f2, f1
    fmuls f29, f2, f0
    b lbl_8021F34C
lbl_8021F32C:
    lwz r3, 0xc(r29)
    cmpwi r3, 0x0
    beq lbl_8021F344
    fmr f1, f30
    fmr f2, f29
    bl SetVe__Q44nw4r3snd6detail7AxVoiceFff
lbl_8021F344:
    addi r29, r29, 0x10
    addi r27, r27, 0x1
lbl_8021F34C:
    lwz r0, 0x8c(r26)
    cmpw r27, r0
    blt lbl_8021F32C
    addi r31, r31, 0x18
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_8021F364:
    lwz r0, 0x90(r26)
    cmpw r28, r0
    blt lbl_8021F308
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    addi r11, r1, 0x20
    lfd f29, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// CalcAxMix__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void CalcAxMix__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r25, r3
    li r29, 0x0
    mr r31, r25
    li r28, 0x0
    b lbl_8021F464
lbl_8021F3C8:
    mr r30, r31
    li r27, 0x0
    b lbl_8021F450
lbl_8021F3D4:
    lwz r26, 0xc(r30)
    cmpwi r26, 0x0
    beq lbl_8021F448
    mr r3, r25
    mr r4, r28
    mr r5, r27
    addi r6, r1, 0x18
    addi r7, r1, 0x8
    bl CalcMixParam__Q44nw4r3snd6detail5VoiceFiiPQ54nw4r3snd6detail7AxVoice8MixParamPQ54nw4r3snd6detail7AxVoice14RemoteMixParam
    mr r3, r26
    addi r4, r1, 0x18
    bl SetMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice8MixParam
    lwz r4, 0xbc(r25)
    or r3, r29, r3
    neg r0, r3
    cmplwi r4, 0x1
    or r0, r0, r3
    srwi r29, r0, 31
    bgt lbl_8021F430
    mr r3, r26
    li r4, 0x0
    bl EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
    b lbl_8021F448
lbl_8021F430:
    mr r3, r26
    li r4, 0x1
    bl EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
    mr r3, r26
    addi r4, r1, 0x8
    bl SetRmtMix__Q44nw4r3snd6detail7AxVoiceFRCQ54nw4r3snd6detail7AxVoice14RemoteMixParam
lbl_8021F448:
    addi r30, r30, 0x4
    addi r27, r27, 0x1
lbl_8021F450:
    lwz r0, 0x90(r25)
    cmpw r27, r0
    blt lbl_8021F3D4
    addi r31, r31, 0x10
    addi r28, r28, 0x1
lbl_8021F464:
    lwz r0, 0x8c(r25)
    cmpw r28, r0
    blt lbl_8021F3C8
    addi r11, r1, 0x50
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// ResetDelta__Q44nw4r3snd6detail5VoiceFv
// ----------------------------------------------------------------------------
extern "C" asm void ResetDelta__Q44nw4r3snd6detail5VoiceFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    li r29, 0x0
    li r31, 0x0
    b lbl_8021F4E8
lbl_8021F4B0:
    add r30, r27, r31
    li r28, 0x0
    b lbl_8021F4D4
lbl_8021F4BC:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_8021F4CC
    bl ResetDelta__Q44nw4r3snd6detail7AxVoiceFv
lbl_8021F4CC:
    addi r30, r30, 0x10
    addi r28, r28, 0x1
lbl_8021F4D4:
    lwz r0, 0x8c(r27)
    cmpw r28, r0
    blt lbl_8021F4BC
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_8021F4E8:
    lwz r0, 0x90(r27)
    cmpw r29, r0
    blt lbl_8021F4B0
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv
// ----------------------------------------------------------------------------
extern "C" asm void AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    cmpwi r4, 0x1
    mr r22, r3
    mr r28, r5
    li r26, 0x0
    beq lbl_8021F54C
    bge lbl_8021F554
    cmpwi r4, 0x0
    bge lbl_8021F544
    b lbl_8021F554
lbl_8021F544:
    li r27, 0x1
    b lbl_8021F554
lbl_8021F54C:
    li r27, 0x3
    li r26, 0x1
lbl_8021F554:
    mr r30, r28
    li r25, 0x0
    li r31, 0x0
    b lbl_8021F5F8
lbl_8021F564:
    mr r29, r30
    li r24, 0x0
    b lbl_8021F5E4
lbl_8021F570:
    lwz r23, 0xc(r29)
    cmpwi r23, 0x0
    beq lbl_8021F5DC
    cmplw r23, r22
    bne lbl_8021F59C
    cmpwi r26, 0x0
    bne lbl_8021F5D8
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r23
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
    b lbl_8021F5D8
lbl_8021F59C:
    lwz r3, 0x0(r23)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_8021F5BC
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_8021F5BC
    li r4, 0x1
lbl_8021F5BC:
    cmpwi r4, 0x0
    beq lbl_8021F5CC
    li r4, 0x0
    bl AXSetVoiceState
lbl_8021F5CC:
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r23
    bl FreeAxVoice__Q44nw4r3snd6detail14AxVoiceManagerFPQ44nw4r3snd6detail7AxVoice
lbl_8021F5D8:
    stw r31, 0xc(r29)
lbl_8021F5DC:
    addi r29, r29, 0x4
    addi r24, r24, 0x1
lbl_8021F5E4:
    lwz r0, 0x90(r28)
    cmpw r24, r0
    blt lbl_8021F570
    addi r30, r30, 0x10
    addi r25, r25, 0x1
lbl_8021F5F8:
    lwz r0, 0x8c(r28)
    cmpw r25, r0
    blt lbl_8021F564
    li r0, 0x0
    cmpwi r26, 0x0
    stb r0, 0x9f(r28)
    stb r0, 0x9d(r28)
    stw r0, 0x8c(r28)
    beq lbl_8021F624
    mr r3, r28
    bl Free__Q44nw4r3snd6detail5VoiceFv
lbl_8021F624:
    lwz r12, 0x94(r28)
    cmpwi r12, 0x0
    beq lbl_8021F644
    mr r3, r28
    mr r4, r27
    lwz r5, 0x98(r28)
    mtctr r12
    bctrl
lbl_8021F644:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// TransformDpl2Pan__Q44nw4r3snd6detail5VoiceFPfPfff
// ----------------------------------------------------------------------------
extern "C" asm void TransformDpl2Pan__Q44nw4r3snd6detail5VoiceFPfPfff() {
    nofralloc
    lfs f3, lbl_804A2218
    fabs f0, f1
    fsubs f4, f2, f3
    fabs f2, f4
    fcmpo cr0, f0, f2
    opword 0x4C401382
    bne lbl_8021F6C8
    lfs f0, lbl_804A221C
    fcmpo cr0, f4, f0
    opword 0x4C401382
    bne lbl_8021F6A4
    lfs f2, lbl_804A2224
    lfs f0, lbl_804A2220
    fmuls f2, f2, f4
    stfs f1, 0x0(r4)
    fadds f0, f0, f2
    stfs f0, 0x0(r5)
    b lbl_8021F7E8
lbl_8021F6A4:
    lfs f0, lbl_804A222C
    lfs f3, lbl_804A2228
    fmuls f2, f0, f4
    lfs f0, lbl_804A2220
    fmuls f1, f3, f1
    fadds f0, f0, f2
    stfs f1, 0x0(r4)
    stfs f0, 0x0(r5)
    b lbl_8021F7E8
lbl_8021F6C8:
    lfs f2, lbl_804A221C
    fcmpo cr0, f1, f2
    opword 0x4C411382
    bne lbl_8021F760
    fcmpo cr0, f4, f2
    opword 0x4C401382
    bne lbl_8021F728
    fneg f5, f4
    lfs f2, lbl_804A2238
    lfs f6, lbl_804A2234
    fmuls f4, f2, f4
    lfs f3, lbl_804A2224
    fdivs f7, f5, f1
    lfs f5, lbl_804A2230
    lfs f2, lbl_804A2220
    fmuls f6, f6, f7
    fmuls f1, f3, f1
    fadds f3, f5, f6
    fadds f1, f4, f1
    fmuls f3, f3, f0
    fadds f0, f2, f1
    stfs f3, 0x0(r4)
    stfs f0, 0x0(r5)
    b lbl_8021F7E8
lbl_8021F728:
    fneg f5, f4
    lfs f2, lbl_804A222C
    lfs f4, lbl_804A223C
    fmuls f2, f2, f1
    lfs f3, lbl_804A2230
    fdivs f5, f5, f1
    lfs f1, lbl_804A2220
    fmuls f4, f4, f5
    fadds f1, f1, f2
    fadds f2, f3, f4
    fmuls f0, f2, f0
    stfs f0, 0x0(r4)
    stfs f1, 0x0(r5)
    b lbl_8021F7E8
lbl_8021F760:
    fcmpo cr0, f4, f2
    opword 0x4C401382
    bne lbl_8021F7B0
    fneg f5, f4
    lfs f2, lbl_804A2238
    lfs f6, lbl_804A2234
    fmuls f4, f2, f4
    lfs f3, lbl_804A222C
    fdivs f7, f5, f1
    lfs f5, lbl_804A2230
    lfs f2, lbl_804A2220
    fmuls f6, f6, f7
    fmuls f1, f3, f1
    fsubs f3, f6, f5
    fsubs f1, f4, f1
    fmuls f3, f3, f0
    fadds f0, f2, f1
    stfs f3, 0x0(r4)
    stfs f0, 0x0(r5)
    b lbl_8021F7E8
lbl_8021F7B0:
    fneg f6, f4
    lfs f5, lbl_804A223C
    fneg f3, f1
    lfs f2, lbl_804A222C
    lfs f4, lbl_804A2230
    fdivs f6, f6, f1
    lfs f1, lbl_804A2220
    fmuls f5, f5, f6
    fmuls f2, f2, f3
    fsubs f3, f5, f4
    fadds f1, f1, f2
    fmuls f0, f3, f0
    stfs f0, 0x0(r4)
    stfs f1, 0x0(r5)
lbl_8021F7E8:
    lfs f1, 0x0(r5)
    lfs f0, lbl_804A2218
    fadds f0, f1, f0
    stfs f0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// CalcMixParam__Q44nw4r3snd6detail5VoiceFiiPQ54nw4r3snd6detail7AxVoice8MixParamPQ54nw4r3snd6detail7AxVoice14RemoteMixParam
// ----------------------------------------------------------------------------
extern "C" asm void CalcMixParam__Q44nw4r3snd6detail5VoiceFiiPQ54nw4r3snd6detail7AxVoice8MixParamPQ54nw4r3snd6detail7AxVoice14RemoteMixParam() {
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    opword 0xF3E101A8
    stfd f30, 0x190(r1)
    opword 0xF3C10198
    stfd f29, 0x180(r1)
    opword 0xF3A10188
    stfd f28, 0x170(r1)
    opword 0xF3810178
    stfd f27, 0x160(r1)
    opword 0xF3610168
    stfd f26, 0x150(r1)
    opword 0xF3410158
    stfd f25, 0x140(r1)
    opword 0xF3210148
    stfd f24, 0x130(r1)
    opword 0xF3010138
    stfd f23, 0x120(r1)
    opword 0xF2E10128
    stfd f22, 0x110(r1)
    opword 0xF2C10118
    stfd f21, 0x100(r1)
    opword 0xF2A10108
    stfd f20, 0xf0(r1)
    opword 0xF28100F8
    stfd f19, 0xe0(r1)
    opword 0xF26100E8
    stfd f18, 0xd0(r1)
    opword 0xF24100D8
    stfd f17, 0xc0(r1)
    opword 0xF22100C8
    stfd f16, 0xb0(r1)
    opword 0xF20100B8
    lfs f2, lbl_804A221C
    stw r31, 0xac(r1)
    mr r31, r7
    fmr f3, f2
    stw r30, 0xa8(r1)
    fmr f4, f2
    fmr f0, f2
    mr r30, r6
    stw r29, 0xa4(r1)
    fmr f5, f2
    mr r29, r5
    stw r28, 0xa0(r1)
    mr r28, r3
    lwz r10, 0xbc(r3)
    clrlwi. r0, r10, 31
    beq lbl_8021F910
    mulli r0, r5, 0x18
    lfs f1, 0xc8(r3)
    lfs f4, lbl_804A2218
    lfs f2, 0xc0(r3)
    add r6, r3, r0
    lfs f3, 0xc4(r3)
    lfs f0, 0x3c(r6)
    fadds f0, f1, f0
    fcmpo cr0, f0, f4
    ble lbl_8021F8F4
    b lbl_8021F908
lbl_8021F8F4:
    fcmpo cr0, f0, f5
    bge lbl_8021F900
    b lbl_8021F904
lbl_8021F900:
    fmr f5, f0
lbl_8021F904:
    fmr f4, f5
lbl_8021F908:
    lfs f0, 0xcc(r3)
    lfs f5, 0xd0(r3)
lbl_8021F910:
    li r6, 0x2
    fmuls f31, f2, f3
    fmuls f30, f2, f4
    mr r7, r28
    fmuls f29, f2, f0
    addi r8, r1, 0x90
    fmuls f28, f2, f5
    addi r9, r1, 0x80
    li r11, 0x0
    mtctr r6
lbl_8021F938:
    lfs f2, lbl_804A221C
    slw r0, r6, r11
    and. r0, r10, r0
    fmr f3, f2
    fmr f4, f2
    beq lbl_8021F95C
    lfs f2, 0xd4(r7)
    lfs f3, 0xe4(r7)
    lfs f4, 0xf4(r7)
lbl_8021F95C:
    fmuls f1, f2, f3
    addi r11, r11, 0x1
    fmuls f0, f2, f4
    lfs f2, lbl_804A221C
    slw r0, r6, r11
    and. r0, r10, r0
    fmr f3, f2
    stfs f1, 0x0(r8)
    fmr f4, f2
    stfs f0, 0x0(r9)
    beq lbl_8021F994
    lfs f2, 0xd8(r7)
    lfs f3, 0xe8(r7)
    lfs f4, 0xf8(r7)
lbl_8021F994:
    fmuls f1, f2, f3
    addi r7, r7, 0x8
    fmuls f0, f2, f4
    addi r11, r11, 0x1
    stfs f1, 0x4(r8)
    addi r8, r8, 0x8
    stfs f0, 0x4(r9)
    addi r9, r9, 0x8
    bdnz lbl_8021F938
    li r7, 0x0
    stw r7, 0x28(r1)
    stb r7, 0x2c(r1)
    stb r7, 0x2d(r1)
    lwz r0, 0x118(r3)
    cmplwi r0, 0x8
    bgt lbl_8021FA80
    lis r6, jumptable_80362A00@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_80362A00@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    stw r7, 0x28(r1)
    b lbl_8021FA88
    li r0, 0x1
    stw r7, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_8021FA88
    li r0, 0x1
    stw r7, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_8021FA88
    li r0, 0x1
    stw r0, 0x28(r1)
    b lbl_8021FA88
    li r0, 0x1
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_8021FA88
    li r0, 0x1
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_8021FA88
    li r0, 0x2
    stw r0, 0x28(r1)
    b lbl_8021FA88
    li r6, 0x2
    li r0, 0x1
    stw r6, 0x28(r1)
    stb r0, 0x2c(r1)
    b lbl_8021FA88
    li r0, 0x1
    li r6, 0x2
    stw r6, 0x28(r1)
    stb r0, 0x2c(r1)
    stb r0, 0x2d(r1)
    b lbl_8021FA88
lbl_8021FA80:
    li r0, 0x0
    stw r0, 0x28(r1)
lbl_8021FA88:
    lwz r6, 0x8c(r3)
    cmpwi r6, 0x1
    ble lbl_8021FB20
    lwz r0, 0x114(r3)
    cmpwi r0, 0x1
    bne lbl_8021FB20
    mulli r0, r5, 0x18
    lfs f3, 0xac(r3)
    lfs f2, 0xb0(r3)
    cmpwi r4, 0x0
    add r3, r3, r0
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fadds f1, f3, f1
    fadds f16, f2, f0
    bne lbl_8021FADC
    addi r3, r1, 0x28
    bl CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    fmr f27, f1
    lfs f26, lbl_804A221C
    b lbl_8021FAF8
lbl_8021FADC:
    cmpwi r4, 0x1
    bne lbl_8021FAF8
    fneg f1, f1
    lfs f27, lbl_804A221C
    addi r3, r1, 0x28
    bl CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    fmr f26, f1
lbl_8021FAF8:
    fmr f1, f16
    addi r3, r1, 0x28
    bl CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    lfs f0, lbl_804A2238
    fmr f24, f1
    addi r3, r1, 0x28
    fsubs f1, f0, f16
    bl CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    fmr f16, f1
    b lbl_8021FC10
lbl_8021FB20:
    cmpwi r6, 0x2
    lfs f16, lbl_804A221C
    bne lbl_8021FB44
    cmpwi r4, 0x0
    bne lbl_8021FB38
    lfs f16, lbl_804A2240
lbl_8021FB38:
    cmpwi r4, 0x1
    bne lbl_8021FB44
    lfs f16, lbl_804A2218
lbl_8021FB44:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x2
    beq lbl_8021FB60
    bge lbl_8021FB98
    b lbl_8021FB98
    b lbl_8021FB98
lbl_8021FB60:
    mulli r0, r29, 0x18
    lfs f0, 0xac(r28)
    lfs f2, 0xb0(r28)
    mr r3, r28
    fadds f3, f0, f16
    addi r4, r1, 0x24
    add r6, r28, r0
    addi r5, r1, 0x20
    lfs f1, 0x34(r6)
    lfs f0, 0x38(r6)
    fadds f1, f3, f1
    fadds f2, f2, f0
    bl TransformDpl2Pan__Q44nw4r3snd6detail5VoiceFPfPfff
    b lbl_8021FBC4
lbl_8021FB98:
    mulli r0, r29, 0x18
    lfs f0, 0xac(r28)
    fadds f1, f0, f16
    add r3, r28, r0
    lfs f0, 0x34(r3)
    fadds f0, f1, f0
    stfs f0, 0x24(r1)
    lfs f1, 0xb0(r28)
    lfs f0, 0x38(r3)
    fadds f0, f1, f0
    stfs f0, 0x20(r1)
lbl_8021FBC4:
    lfs f1, 0x24(r1)
    addi r3, r1, 0x28
    bl CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    lfs f0, 0x24(r1)
    fmr f27, f1
    addi r3, r1, 0x28
    fneg f1, f0
    bl CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    fmr f26, f1
    lfs f1, 0x20(r1)
    addi r3, r1, 0x28
    bl CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    lfs f2, lbl_804A2238
    fmr f24, f1
    lfs f0, 0x20(r1)
    addi r3, r1, 0x28
    fsubs f1, f2, f0
    bl CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
    fmr f16, f1
lbl_8021FC10:
    lfs f1, lbl_804A2244
    bl CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
    fadds f2, f27, f26
    lfs f0, lbl_804A2228
    fmr f17, f1
    fmuls f25, f0, f2
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
    cmpwi r3, 0x2
    beq lbl_8021FD2C
    bge lbl_8021FC4C
    cmpwi r3, 0x0
    beq lbl_8021FC58
    bge lbl_8021FCD4
    b lbl_8021FD84
lbl_8021FC4C:
    cmpwi r3, 0x4
    bge lbl_8021FD84
    b lbl_8021FC98
lbl_8021FC58:
    fmuls f1, f28, f27
    lfs f2, lbl_804A221C
    fmuls f0, f28, f26
    fmuls f23, f31, f27
    stfs f2, 0x1c(r1)
    fmuls f22, f31, f26
    fmuls f21, f30, f27
    stfs f2, 0x18(r1)
    fmuls f20, f30, f26
    fmuls f19, f29, f27
    stfs f2, 0x14(r1)
    fmuls f18, f29, f26
    stfs f1, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f2, 0x8(r1)
    b lbl_8021FD84
lbl_8021FC98:
    fmuls f23, f31, f25
    lfs f1, lbl_804A221C
    fmuls f0, f28, f25
    fmuls f21, f30, f25
    stfs f1, 0x1c(r1)
    fmuls f19, f29, f25
    fmr f22, f23
    stfs f1, 0x18(r1)
    fmr f20, f21
    fmr f18, f19
    stfs f1, 0x14(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x8(r1)
    b lbl_8021FD84
lbl_8021FCD4:
    fmuls f5, f27, f24
    fmuls f6, f26, f24
    fmuls f7, f17, f16
    fmuls f0, f28, f5
    fmuls f1, f28, f6
    fmuls f4, f31, f7
    fmuls f3, f30, f7
    stfs f0, 0x10(r1)
    fmuls f2, f29, f7
    fmuls f0, f28, f7
    stfs f4, 0x1c(r1)
    fmuls f23, f31, f5
    fmuls f22, f31, f6
    stfs f3, 0x18(r1)
    fmuls f21, f30, f5
    fmuls f20, f30, f6
    stfs f2, 0x14(r1)
    fmuls f19, f29, f5
    fmuls f18, f29, f6
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    b lbl_8021FD84
lbl_8021FD2C:
    fmuls f1, f27, f16
    fmuls f5, f27, f24
    fmuls f6, f26, f24
    fmuls f7, f26, f16
    fmuls f0, f31, f1
    fmuls f3, f30, f1
    fmuls f4, f31, f7
    fmuls f2, f30, f7
    stfs f0, 0x1c(r1)
    fmuls f1, f29, f1
    fmuls f0, f29, f7
    stfs f4, 0x10(r1)
    fmuls f23, f31, f5
    fmuls f22, f31, f6
    stfs f3, 0x18(r1)
    fmuls f21, f30, f5
    fmuls f20, f30, f6
    stfs f2, 0xc(r1)
    fmuls f19, f29, f5
    fmuls f18, f29, f6
    stfs f1, 0x14(r1)
    stfs f0, 0x8(r1)
lbl_8021FD84:
    lfs f1, 0x90(r1)
    lfs f0, 0x80(r1)
    fmuls f8, f25, f1
    lfs f2, 0x94(r1)
    fmuls f7, f25, f0
    lfs f1, 0x84(r1)
    fmuls f6, f25, f2
    lfs f0, 0x98(r1)
    fmuls f5, f25, f1
    lfs f3, 0x88(r1)
    fmuls f4, f25, f0
    lfs f2, 0x9c(r1)
    lfs f1, 0x8c(r1)
    fmuls f3, f25, f3
    lfs f0, lbl_804A221C
    fmuls f2, f25, f2
    fmuls f1, f25, f1
    stfs f8, 0x70(r1)
    fcmpo cr0, f23, f0
    stfs f7, 0x60(r1)
    stfs f6, 0x74(r1)
    stfs f5, 0x34(r1)
    stfs f4, 0x78(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x7c(r1)
    stfs f1, 0x5c(r1)
    opword 0x4C401382
    bne lbl_8021FDFC
    li r0, 0x0
    b lbl_8021FE2C
lbl_8021FDFC:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f23
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FE20
    lfs f0, lbl_804A2248
    fmuls f1, f0, f23
    bl __cvt_fp2unsigned
    b lbl_8021FE28
lbl_8021FE20:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FE28:
    clrlwi r0, r3, 16
lbl_8021FE2C:
    lfs f0, lbl_804A221C
    sth r0, 0x0(r30)
    fcmpo cr0, f22, f0
    opword 0x4C401382
    bne lbl_8021FE48
    li r0, 0x0
    b lbl_8021FE78
lbl_8021FE48:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f22
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FE6C
    lfs f0, lbl_804A2248
    fmuls f1, f0, f22
    bl __cvt_fp2unsigned
    b lbl_8021FE74
lbl_8021FE6C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FE74:
    clrlwi r0, r3, 16
lbl_8021FE78:
    lfs f17, 0x1c(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x2(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_8021FE98
    li r0, 0x0
    b lbl_8021FEC8
lbl_8021FE98:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FEBC
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_8021FEC4
lbl_8021FEBC:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FEC4:
    clrlwi r0, r3, 16
lbl_8021FEC8:
    lfs f0, lbl_804A221C
    sth r0, 0x4(r30)
    fcmpo cr0, f21, f0
    opword 0x4C401382
    bne lbl_8021FEE4
    li r0, 0x0
    b lbl_8021FF14
lbl_8021FEE4:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f21
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FF08
    lfs f0, lbl_804A2248
    fmuls f1, f0, f21
    bl __cvt_fp2unsigned
    b lbl_8021FF10
lbl_8021FF08:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FF10:
    clrlwi r0, r3, 16
lbl_8021FF14:
    lfs f0, lbl_804A221C
    sth r0, 0x6(r30)
    fcmpo cr0, f20, f0
    opword 0x4C401382
    bne lbl_8021FF30
    li r0, 0x0
    b lbl_8021FF60
lbl_8021FF30:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f20
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FF54
    lfs f0, lbl_804A2248
    fmuls f1, f0, f20
    bl __cvt_fp2unsigned
    b lbl_8021FF5C
lbl_8021FF54:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FF5C:
    clrlwi r0, r3, 16
lbl_8021FF60:
    lfs f17, 0x18(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x8(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_8021FF80
    li r0, 0x0
    b lbl_8021FFB0
lbl_8021FF80:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FFA4
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_8021FFAC
lbl_8021FFA4:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FFAC:
    clrlwi r0, r3, 16
lbl_8021FFB0:
    lfs f0, lbl_804A221C
    sth r0, 0xa(r30)
    fcmpo cr0, f19, f0
    opword 0x4C401382
    bne lbl_8021FFCC
    li r0, 0x0
    b lbl_8021FFFC
lbl_8021FFCC:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f19
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8021FFF0
    lfs f0, lbl_804A2248
    fmuls f1, f0, f19
    bl __cvt_fp2unsigned
    b lbl_8021FFF8
lbl_8021FFF0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8021FFF8:
    clrlwi r0, r3, 16
lbl_8021FFFC:
    lfs f0, lbl_804A221C
    sth r0, 0xc(r30)
    fcmpo cr0, f18, f0
    opword 0x4C401382
    bne lbl_80220018
    li r0, 0x0
    b lbl_80220048
lbl_80220018:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f18
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8022003C
    lfs f0, lbl_804A2248
    fmuls f1, f0, f18
    bl __cvt_fp2unsigned
    b lbl_80220044
lbl_8022003C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_80220044:
    clrlwi r0, r3, 16
lbl_80220048:
    lfs f17, 0x14(r1)
    lfs f0, lbl_804A221C
    sth r0, 0xe(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_80220068
    li r0, 0x0
    b lbl_80220098
lbl_80220068:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8022008C
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_80220094
lbl_8022008C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_80220094:
    clrlwi r0, r3, 16
lbl_80220098:
    lfs f17, 0x10(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x10(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_802200B8
    li r0, 0x0
    b lbl_802200E8
lbl_802200B8:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_802200DC
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_802200E4
lbl_802200DC:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802200E4:
    clrlwi r0, r3, 16
lbl_802200E8:
    lfs f17, 0xc(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x12(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_80220108
    li r0, 0x0
    b lbl_80220138
lbl_80220108:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8022012C
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_80220134
lbl_8022012C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_80220134:
    clrlwi r0, r3, 16
lbl_80220138:
    lfs f17, 0x8(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x14(r30)
    fcmpo cr0, f17, f0
    opword 0x4C401382
    bne lbl_80220158
    li r0, 0x0
    b lbl_80220188
lbl_80220158:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_8022017C
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_80220184
lbl_8022017C:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_80220184:
    clrlwi r0, r3, 16
lbl_80220188:
    lfs f1, 0x70(r1)
    lfs f0, lbl_804A221C
    sth r0, 0x16(r30)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_802201A8
    li r0, 0x0
    b lbl_802201DC
lbl_802201A8:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_802201D0
    lfs f1, lbl_804A2248
    lfs f0, 0x70(r1)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    b lbl_802201D8
lbl_802201D0:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802201D8:
    clrlwi r0, r3, 16
lbl_802201DC:
    lfs f17, 0x74(r1)
    li r3, 0x0
    lfs f0, lbl_804A221C
    sth r0, 0x0(r31)
    fcmpo cr0, f17, f0
    sth r3, 0x2(r31)
    opword 0x4C401382
    bne lbl_80220200
    b lbl_80220230
lbl_80220200:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_80220224
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_8022022C
lbl_80220224:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_8022022C:
    clrlwi r3, r3, 16
lbl_80220230:
    lfs f17, 0x78(r1)
    li r0, 0x0
    lfs f0, lbl_804A221C
    sth r3, 0x4(r31)
    fcmpo cr0, f17, f0
    sth r0, 0x6(r31)
    opword 0x4C401382
    bne lbl_80220254
    b lbl_80220284
lbl_80220254:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_80220278
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_80220280
lbl_80220278:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_80220280:
    clrlwi r0, r3, 16
lbl_80220284:
    lfs f17, 0x7c(r1)
    li r3, 0x0
    lfs f0, lbl_804A221C
    sth r0, 0x8(r31)
    fcmpo cr0, f17, f0
    sth r3, 0xa(r31)
    opword 0x4C401382
    bne lbl_802202A8
    b lbl_802202D8
lbl_802202A8:
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    cmplwi r3, 0xffff
    bge lbl_802202CC
    lfs f0, lbl_804A2248
    fmuls f1, f0, f17
    bl __cvt_fp2unsigned
    b lbl_802202D4
lbl_802202CC:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802202D4:
    clrlwi r3, r3, 16
lbl_802202D8:
    li r0, 0x0
    sth r3, 0xc(r31)
    sth r0, 0xe(r31)
    opword 0xE3E101A8
    lfd f31, 0x1a0(r1)
    opword 0xE3C10198
    lfd f30, 0x190(r1)
    opword 0xE3A10188
    lfd f29, 0x180(r1)
    opword 0xE3810178
    lfd f28, 0x170(r1)
    opword 0xE3610168
    lfd f27, 0x160(r1)
    opword 0xE3410158
    lfd f26, 0x150(r1)
    opword 0xE3210148
    lfd f25, 0x140(r1)
    opword 0xE3010138
    lfd f24, 0x130(r1)
    opword 0xE2E10128
    lfd f23, 0x120(r1)
    opword 0xE2C10118
    lfd f22, 0x110(r1)
    opword 0xE2A10108
    lfd f21, 0x100(r1)
    opword 0xE28100F8
    lfd f20, 0xf0(r1)
    opword 0xE26100E8
    lfd f19, 0xe0(r1)
    opword 0xE24100D8
    lfd f18, 0xd0(r1)
    opword 0xE22100C8
    lfd f17, 0xc0(r1)
    opword 0xE20100B8
    lfd f16, 0xb0(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

// ----------------------------------------------------------------------------
// InvalidateWaveData__Q44nw4r3snd6detail5VoiceFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateWaveData__Q44nw4r3snd6detail5VoiceFPCvPCv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    mr r30, r5
    li r28, 0x0
    mr r27, r31
    li r29, 0x0
    b lbl_802203E4
lbl_802203B4:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_802203DC
    mr r4, r26
    mr r5, r30
    bl IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
    cmpwi r3, 0x0
    beq lbl_802203DC
    li r28, 0x1
    b lbl_802203F0
lbl_802203DC:
    addi r27, r27, 0x10
    addi r29, r29, 0x1
lbl_802203E4:
    lwz r0, 0x8c(r31)
    cmpw r29, r0
    blt lbl_802203B4
lbl_802203F0:
    cmpwi r28, 0x0
    beq lbl_802204B8
    lbz r0, 0x9e(r31)
    cmpwi r0, 0x0
    beq lbl_80220488
    mr r28, r31
    li r30, 0x0
    b lbl_80220474
lbl_80220410:
    mr r27, r28
    li r29, 0x0
    b lbl_80220460
lbl_8022041C:
    lwz r3, 0xc(r27)
    cmpwi r3, 0x0
    beq lbl_80220458
    lwz r3, 0x0(r3)
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_80220448
    lhz r0, 0x38(r3)
    cmplwi r0, 0x1
    bne lbl_80220448
    li r4, 0x1
lbl_80220448:
    cmpwi r4, 0x0
    beq lbl_80220458
    li r4, 0x0
    bl AXSetVoiceState
lbl_80220458:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_80220460:
    lwz r0, 0x90(r31)
    cmpw r29, r0
    blt lbl_8022041C
    addi r28, r28, 0x10
    addi r30, r30, 0x1
lbl_80220474:
    lwz r0, 0x8c(r31)
    cmpw r30, r0
    blt lbl_80220410
    li r0, 0x0
    stb r0, 0x9e(r31)
lbl_80220488:
    lwz r12, 0x94(r31)
    li r0, 0x0
    stb r0, 0xa0(r31)
    cmpwi r12, 0x0
    stb r0, 0x9f(r31)
    stb r0, 0x9d(r31)
    beq lbl_802204B8
    mr r3, r31
    lwz r5, 0x98(r31)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_802204B8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// InvalidateData__Q44nw4r3snd6detail5VoiceFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateData__Q44nw4r3snd6detail5VoiceFPCvPCv() {
    nofralloc
    blr
}

