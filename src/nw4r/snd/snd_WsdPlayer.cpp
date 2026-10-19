#include "types.h"

// Translation unit: src/nw4r/snd/snd_WsdPlayer.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern "C" float lbl_804A2288;
extern "C" float lbl_804A228C;
extern "C" float lbl_804A2290;
extern "C" float lbl_804A2294;
extern "C" float lbl_804A2298;
extern "C" float lbl_804A22A0;
extern "C" float lbl_804A22A8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362A80[];

// Forward declarations
extern "C" void AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void ChannelCallbackFunc__Q44nw4r3snd6detail9WsdPlayerFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl();
extern "C" void FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel();
extern "C" void GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv();
extern "C" void GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void InitParam__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void Init__Q44nw4r3snd6detail8LfoParamFv();
extern "C" void InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv();
extern "C" void InvalidateWaveData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv();
extern "C" void IsActive__Q44nw4r3snd6detail9WsdPlayerCFv();
extern "C" void IsPause__Q44nw4r3snd6detail9WsdPlayerCFv();
extern "C" void IsStarted__Q44nw4r3snd6detail9WsdPlayerCFv();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void OnShutdownSoundThread__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void OnUpdateFrameSoundThread__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void Pause__Q44nw4r3snd6detail5VoiceFb();
extern "C" void Pause__Q44nw4r3snd6detail9WsdPlayerFb();
extern "C" void Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void Release__Q44nw4r3snd6detail7ChannelFv();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb();
extern "C" void SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam();
extern "C" void StartChannel__Q44nw4r3snd6detail9WsdPlayerFPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl();
extern "C" void Start__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void Stop__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void Update__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void __div2i();
extern "C" void __dt__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_8020C018();
extern "C" void fn_8020C030();
extern "C" void fn_8020C048();
extern "C" void fn_8020C0E8();
extern "C" void fn_8020C0F0();
extern "C" void fn_80222AF0();
extern "C" void fn_80222AF8();
extern "C" void fn_80222B00();
extern "C" void fn_80222B08();
extern "C" void fn_80222B10();
extern "C" void fn_80222B18();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q44nw4r3snd6detail11BasicPlayerFv
    lis r5, lbl_80362A80@ha
    li r6, 0x0
    addi r5, r5, lbl_80362A80@l
    stw r6, 0xd4(r31)
    addi r4, r5, 0x24
    addi r3, r31, 0x118
    addi r0, r5, 0x38
    stw r6, 0xd8(r31)
    stw r6, 0xe0(r31)
    stw r6, 0xe4(r31)
    stw r5, 0x0(r31)
    stw r4, 0xdc(r31)
    stw r0, 0xe8(r31)
    stb r6, 0xec(r31)
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    bl InitParam__Q44nw4r3snd6detail11BasicPlayerFv
    lfs f0, lbl_804A2288
    li r31, 0x0
    li r5, 0x40
    li r4, -0x1
    li r0, 0x7f
    stb r31, 0xed(r27)
    addi r3, r27, 0x118
    stb r31, 0xee(r27)
    stb r31, 0xf0(r27)
    stfs f0, 0xf4(r27)
    stw r28, 0xf8(r27)
    stb r5, 0xfc(r27)
    stw r29, 0x100(r27)
    stw r30, 0x104(r27)
    stw r31, 0x108(r27)
    stw r4, 0x10c(r27)
    stfs f0, 0x128(r27)
    stb r5, 0x12c(r27)
    stb r31, 0x12d(r27)
    stb r31, 0x12e(r27)
    stb r31, 0x12f(r27)
    stb r31, 0x130(r27)
    stb r0, 0x131(r27)
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    stb r31, 0xef(r27)
    addi r11, r1, 0x20
    stw r31, 0x134(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xec(r24)
    cmpwi r0, 0x0
    beq lbl_80221D08
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r24)
    cmpwi r0, 0x0
    beq lbl_80221C64
    cmpwi r24, 0x0
    mr r23, r24
    beq lbl_80221C50
    addi r23, r24, 0xe0
lbl_80221C50:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r23
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r24)
lbl_80221C64:
    lbz r0, 0xec(r24)
    cmpwi r0, 0x0
    beq lbl_80221C94
    cmpwi r24, 0x0
    mr r23, r24
    beq lbl_80221C80
    addi r23, r24, 0xd4
lbl_80221C80:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r23
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r24)
lbl_80221C94:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r4, 0x134(r24)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_80221CC0
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_80221CC0
    li r3, 0x1
lbl_80221CC0:
    cmpwi r3, 0x0
    beq lbl_80221CD8
    mr r3, r24
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    lwz r3, 0x134(r24)
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_80221CD8:
    lwz r3, 0x134(r24)
    cmpwi r3, 0x0
    beq lbl_80221CE8
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_80221CE8:
    li r0, 0x0
    stw r0, 0x134(r24)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80221D08:
    mr r3, r24
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
    cmpwi r24, 0x0
    stw r25, 0x108(r24)
    mr r23, r24
    stw r26, 0x10c(r24)
    stw r27, 0x110(r24)
    stw r28, 0x114(r24)
    beq lbl_80221D3C
    addi r23, r24, 0xd4
lbl_80221D3C:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r23
    bl RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x1
    stb r0, 0xec(r24)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Start__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Start__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_80221DAC
    addi r31, r30, 0xe0
lbl_80221DAC:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r31
    bl RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x1
    stb r0, 0xed(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Stop__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r30)
    cmpwi r0, 0x0
    beq lbl_80221E48
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_80221E34
    addi r31, r30, 0xe0
lbl_80221E34:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r31
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r30)
lbl_80221E48:
    lbz r0, 0xec(r30)
    cmpwi r0, 0x0
    beq lbl_80221E78
    cmpwi r30, 0x0
    mr r31, r30
    beq lbl_80221E64
    addi r31, r30, 0xd4
lbl_80221E64:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r31
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r30)
lbl_80221E78:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r4, 0x134(r30)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_80221EA4
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_80221EA4
    li r3, 0x1
lbl_80221EA4:
    cmpwi r3, 0x0
    beq lbl_80221EBC
    mr r3, r30
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    lwz r3, 0x134(r30)
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_80221EBC:
    lwz r3, 0x134(r30)
    cmpwi r3, 0x0
    beq lbl_80221ECC
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_80221ECC:
    li r0, 0x0
    stw r0, 0x134(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Pause__Q44nw4r3snd6detail9WsdPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void Pause__Q44nw4r3snd6detail9WsdPlayerFb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    clrlwi r3, r31, 24
    lwz r5, 0x134(r30)
    neg r0, r3
    li r4, 0x0
    or r0, r0, r3
    cmpwi r5, 0x0
    srwi r0, r0, 31
    stb r0, 0xee(r30)
    beq lbl_80221F6C
    lbz r0, 0x36(r5)
    cmpwi r0, 0x0
    beq lbl_80221F6C
    li r4, 0x1
lbl_80221F6C:
    cmpwi r4, 0x0
    beq lbl_80221FA0
    lwz r5, 0x134(r30)
    lbz r3, 0x35(r5)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    cmplw r31, r0
    beq lbl_80221FA0
    stb r31, 0x35(r5)
    mr r4, r31
    lwz r3, 0xf0(r5)
    bl Pause__Q44nw4r3snd6detail5VoiceFb
lbl_80221FA0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi() {
    nofralloc
    stb r4, 0xfc(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb() {
    nofralloc
    stb r4, 0xf0(r3)
    blr
}

// ----------------------------------------------------------------------------
// InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv() {
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
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xec(r29)
    cmpwi r0, 0x0
    beq lbl_80222104
    lwz r0, 0x108(r29)
    cmplw r30, r0
    bgt lbl_80222104
    cmplw r0, r31
    bgt lbl_80222104
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r29)
    cmpwi r0, 0x0
    beq lbl_80222060
    cmpwi r29, 0x0
    mr r31, r29
    beq lbl_8022204C
    addi r31, r29, 0xe0
lbl_8022204C:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r31
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r29)
lbl_80222060:
    lbz r0, 0xec(r29)
    cmpwi r0, 0x0
    beq lbl_80222090
    cmpwi r29, 0x0
    mr r31, r29
    beq lbl_8022207C
    addi r31, r29, 0xd4
lbl_8022207C:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r31
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r29)
lbl_80222090:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r4, 0x134(r29)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_802220BC
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_802220BC
    li r3, 0x1
lbl_802220BC:
    cmpwi r3, 0x0
    beq lbl_802220D4
    mr r3, r29
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    lwz r3, 0x134(r29)
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_802220D4:
    lwz r3, 0x134(r29)
    cmpwi r3, 0x0
    beq lbl_802220E4
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_802220E4:
    li r0, 0x0
    stw r0, 0x134(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80222104:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    bne lbl_8022216C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802223C0
lbl_8022216C:
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    bne lbl_80222188
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802223C0
lbl_80222188:
    lbz r0, 0xee(r31)
    cmpwi r0, 0x0
    bne lbl_802223AC
    lbz r3, 0xef(r31)
    cmpwi r3, 0x0
    beq lbl_8022229C
    lwz r0, 0x134(r31)
    cmpwi r0, 0x0
    bne lbl_8022229C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    beq lbl_802221E8
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_802221D4
    addi r30, r31, 0xe0
lbl_802221D4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r30
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r31)
lbl_802221E8:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_80222218
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_80222204
    addi r30, r31, 0xd4
lbl_80222204:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_80222218:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r4, 0x134(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_80222244
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_80222244
    li r3, 0x1
lbl_80222244:
    cmpwi r3, 0x0
    beq lbl_8022225C
    mr r3, r31
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    lwz r3, 0x134(r31)
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_8022225C:
    lwz r3, 0x134(r31)
    cmpwi r3, 0x0
    beq lbl_8022226C
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_8022226C:
    li r0, 0x0
    stw r0, 0x134(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802223C0
lbl_8022229C:
    cmpwi r3, 0x0
    bne lbl_802223AC
    lwz r4, 0x100(r31)
    mr r3, r31
    lwz r5, 0x104(r31)
    bl StartChannel__Q44nw4r3snd6detail9WsdPlayerFPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
    cmpwi r3, 0x0
    bne lbl_802223AC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    beq lbl_802222F8
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_802222E4
    addi r30, r31, 0xe0
lbl_802222E4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r30
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r31)
lbl_802222F8:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_80222328
    cmpwi r31, 0x0
    mr r30, r31
    beq lbl_80222314
    addi r30, r31, 0xd4
lbl_80222314:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_80222328:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r4, 0x134(r31)
    li r3, 0x0
    cmpwi r4, 0x0
    beq lbl_80222354
    lbz r0, 0x36(r4)
    cmpwi r0, 0x0
    beq lbl_80222354
    li r3, 0x1
lbl_80222354:
    cmpwi r3, 0x0
    beq lbl_8022236C
    mr r3, r31
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    lwz r3, 0x134(r31)
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_8022236C:
    lwz r3, 0x134(r31)
    cmpwi r3, 0x0
    beq lbl_8022237C
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_8022237C:
    li r0, 0x0
    stw r0, 0x134(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802223C0
lbl_802223AC:
    mr r3, r31
    bl UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802223C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// StartChannel__Q44nw4r3snd6detail9WsdPlayerFPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
// ----------------------------------------------------------------------------
extern "C" asm void StartChannel__Q44nw4r3snd6detail9WsdPlayerFPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r4
    stw r30, 0xa8(r1)
    mr r30, r5
    stw r29, 0xa4(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r12, 0x0(r31)
    mr r3, r31
    lbz r4, 0xfc(r29)
    mr r10, r30
    lwz r12, 0xc(r12)
    addi r5, r1, 0x8
    addi r31, r4, 0x40
    addi r4, r29, 0x128
    addi r6, r1, 0x20
    lwz r7, 0x108(r29)
    lwz r8, 0x10c(r29)
    li r9, 0x0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8022245C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_80222574
lbl_8022245C:
    lwz r0, 0x110(r29)
    cmpwi r0, 0x0
    bne lbl_80222470
    lwz r30, 0x114(r29)
    b lbl_80222498
lbl_80222470:
    cmpwi r0, 0x1
    bne lbl_80222498
    lwz r3, 0x114(r29)
    li r6, 0x3e8
    lwz r0, 0x2c(r1)
    li r5, 0x0
    mullw r4, r3, r0
    mulhw r3, r3, r0
    bl __div2i
    mr r30, r4
lbl_80222498:
    lwz r0, 0x34(r1)
    cmplw r30, r0
    ble lbl_802224B8
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_80222574
lbl_802224B8:
    lwz r0, 0x28(r1)
    li r3, 0x2
    lwz r4, 0xf8(r29)
    cmpwi r0, 0x2
    bgt lbl_802224D0
    mr r3, r0
lbl_802224D0:
    lis r6, ChannelCallbackFunc__Q44nw4r3snd6detail9WsdPlayerFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl@ha
    mr r5, r31
    mr r7, r29
    addi r6, r6, ChannelCallbackFunc__Q44nw4r3snd6detail9WsdPlayerFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl@l
    bl AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80222504
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_80222574
lbl_80222504:
    lbz r4, 0xc(r1)
    bl fn_8020C018
    lbz r4, 0xd(r1)
    mr r3, r31
    bl fn_8020C030
    lbz r4, 0xe(r1)
    mr r3, r31
    bl fn_8020C048
    lbz r4, 0xf(r1)
    mr r3, r31
    bl fn_8020C0E8
    lbz r4, 0x10(r1)
    mr r3, r31
    bl fn_8020C0F0
    lbz r0, 0xf0(r29)
    mr r3, r31
    mr r6, r30
    addi r4, r1, 0x20
    stb r0, 0x39(r31)
    li r5, -0x1
    bl Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl
    li r0, 0x1
    stw r31, 0x134(r29)
    stb r0, 0xef(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_80222574:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateChannel__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    stfd f27, 0xc0(r1)
    opword 0xF36100C8
    stfd f26, 0xb0(r1)
    opword 0xF34100B8
    stfd f25, 0xa0(r1)
    opword 0xF32100A8
    stfd f24, 0x90(r1)
    opword 0xF3010098
    stfd f23, 0x80(r1)
    opword 0xF2E10088
    stfd f22, 0x70(r1)
    opword 0xF2C10078
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r0, 0x4330
    mr r27, r3
    stw r0, 0x40(r1)
    stw r0, 0x48(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r0, 0x134(r27)
    cmpwi r0, 0x0
    bne lbl_8022262C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802229C4
lbl_8022262C:
    lfs f28, lbl_804A2288
    lfs f0, 0x8(r27)
    lbz r3, 0x12c(r27)
    fmuls f28, f28, f0
    lfs f0, 0x128(r27)
    lfs f29, lbl_804A2288
    cmplwi r3, 0x1
    lfs f1, 0x4(r27)
    fmuls f28, f28, f0
    fmuls f29, f29, f1
    lfs f27, lbl_804A228C
    bgt lbl_80222684
    subi r0, r3, 0x3f
    lfd f2, lbl_804A22A0
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2290
    stw r0, 0x44(r1)
    lfd f1, 0x40(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f27, f27, f0
    b lbl_802226A8
lbl_80222684:
    subi r0, r3, 0x40
    lfd f2, lbl_804A22A0
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2290
    stw r0, 0x4c(r1)
    lfd f1, 0x48(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f27, f27, f0
lbl_802226A8:
    lfs f0, 0xf4(r27)
    lbz r3, 0x12d(r27)
    fmuls f27, f27, f0
    lfs f0, 0xc(r27)
    cmplwi r3, 0x1
    lfs f26, lbl_804A228C
    fadds f27, f27, f0
    bgt lbl_802226F0
    addi r0, r3, 0x1
    lfd f2, lbl_804A22A0
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2290
    stw r0, 0x44(r1)
    lfd f1, 0x40(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f26, f26, f0
    b lbl_8022270C
lbl_802226F0:
    stw r3, 0x4c(r1)
    lfd f2, lbl_804A22A8
    lfd f1, 0x48(r1)
    lfs f0, lbl_804A2290
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f26, f26, f0
lbl_8022270C:
    lbz r0, 0x131(r27)
    addi r30, r1, 0x30
    stw r3, 0x44(r1)
    addi r31, r1, 0x8
    lfs f23, lbl_804A228C
    li r26, 0x0
    stw r0, 0x4c(r1)
    lfd f30, lbl_804A22A8
    fmr f25, f23
    lfd f0, 0x48(r1)
    lfd f1, 0x40(r1)
    fsubs f0, f0, f30
    lfs f31, lbl_804A2298
    fsubs f3, f1, f30
    lfs f2, lbl_804A2294
    lbz r4, 0x12e(r27)
    fdivs f1, f0, f31
    lfs f0, lbl_804A2288
    lbz r3, 0x12f(r27)
    lbz r0, 0x130(r27)
    lfs f4, 0x10(r27)
    lfs f24, 0x18(r27)
    fmuls f2, f3, f2
    lfs f3, 0x28(r27)
    fsubs f0, f1, f0
    lfs f1, 0x14(r27)
    stb r4, 0x8(r1)
    fadds f26, f26, f2
    fadds f23, f23, f0
    lbz r29, 0x1c(r27)
    fadds f25, f25, f1
    stb r3, 0x9(r1)
    fadds f26, f26, f4
    fadds f23, f23, f3
    lbz r28, 0x1d(r27)
    stb r0, 0xa(r1)
    lfs f22, lbl_804A228C
lbl_802227A0:
    lbz r0, 0x0(r31)
    mr r3, r27
    stfs f22, 0x0(r30)
    mr r4, r26
    stw r0, 0x44(r1)
    lfs f0, 0x0(r30)
    lfd f1, 0x40(r1)
    fsubs f1, f1, f30
    fdivs f1, f1, f31
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    bl GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus
    lfs f0, 0x0(r30)
    addi r26, r26, 0x1
    cmpwi r26, 0x3
    addi r31, r31, 0x1
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    addi r30, r30, 0x4
    blt lbl_802227A0
    lfs f30, lbl_804A228C
    addi r30, r1, 0x20
    addi r31, r1, 0x10
    li r26, 0x0
lbl_80222800:
    stfs f30, 0x0(r30)
    mr r3, r27
    mr r4, r26
    bl GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r30)
    mr r3, r27
    stfs f30, 0x0(r31)
    mr r4, r26
    fadds f0, f0, f1
    stfs f0, 0x0(r30)
    bl GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r31)
    addi r26, r26, 0x1
    cmpwi r26, 0x4
    addi r30, r30, 0x4
    fadds f0, f0, f1
    stfs f0, 0x0(r31)
    addi r31, r31, 0x4
    blt lbl_80222800
    lwz r0, 0x2c(r27)
    fmr f1, f24
    lwz r3, 0x134(r27)
    mr r4, r29
    stw r0, 0xd4(r3)
    lwz r0, 0x30(r27)
    lwz r3, 0x134(r27)
    stw r0, 0xd8(r3)
    lwz r3, 0x134(r27)
    stfs f29, 0x40(r3)
    lwz r3, 0x134(r27)
    stfs f28, 0x44(r3)
    lwz r3, 0x134(r27)
    stfs f27, 0x48(r3)
    lwz r3, 0x134(r27)
    stfs f26, 0x4c(r3)
    lwz r3, 0x134(r27)
    stfs f25, 0x50(r3)
    lwz r3, 0x134(r27)
    bl SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif
    lwz r3, 0x134(r27)
    addi r30, r1, 0x20
    lfs f0, 0x30(r1)
    addi r29, r1, 0x10
    stb r28, 0x3c(r3)
    li r28, 0x0
    lfs f3, 0x34(r1)
    li r31, 0x0
    lwz r0, 0x20(r27)
    lwz r3, 0x134(r27)
    lfs f2, 0x38(r1)
    stw r0, 0x58(r3)
    lfs f1, 0x24(r27)
    lwz r3, 0x134(r27)
    stfs f1, 0x5c(r3)
    lwz r3, 0x134(r27)
    stfs f23, 0x60(r3)
    lwz r3, 0x134(r27)
    stfs f0, 0x64(r3)
    lwz r3, 0x134(r27)
    stfs f3, 0x68(r3)
    lwz r3, 0x134(r27)
    stfs f2, 0x6c(r3)
lbl_802228F8:
    mr r3, r27
    mr r4, r28
    bl GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi
    lwz r0, 0x134(r27)
    addi r28, r28, 0x1
    lfs f0, 0x0(r30)
    cmpwi r28, 0x4
    add r3, r0, r31
    lfs f2, 0x0(r29)
    stfs f1, 0x70(r3)
    addi r30, r30, 0x4
    addi r29, r29, 0x4
    lwz r0, 0x134(r27)
    add r3, r0, r31
    stfs f0, 0x80(r3)
    lwz r0, 0x134(r27)
    add r3, r0, r31
    addi r31, r31, 0x4
    stfs f2, 0x90(r3)
    blt lbl_802228F8
    addi r28, r27, 0x70
    li r26, 0x0
    b lbl_80222970
lbl_80222954:
    lwz r3, 0x134(r27)
    mr r4, r26
    mr r5, r28
    lwz r3, 0xf0(r3)
    bl SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam
    addi r28, r28, 0x18
    addi r26, r26, 0x1
lbl_80222970:
    lwz r0, 0xf8(r27)
    cmpw r26, r0
    blt lbl_80222954
    lwz r3, 0x134(r27)
    lfs f0, 0x118(r27)
    stfs f0, 0x1c(r3)
    lfs f0, 0x11c(r27)
    stfs f0, 0x20(r3)
    lwz r0, 0x120(r27)
    stw r0, 0x24(r3)
    lbz r0, 0x124(r27)
    stb r0, 0x28(r3)
    lbz r0, 0x125(r27)
    stb r0, 0x29(r3)
    lbz r0, 0x126(r27)
    stb r0, 0x2a(r3)
    lbz r0, 0x127(r27)
    stb r0, 0x2b(r3)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802229C4:
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    lfd f28, 0xd0(r1)
    opword 0xE36100C8
    lfd f27, 0xc0(r1)
    opword 0xE34100B8
    lfd f26, 0xb0(r1)
    opword 0xE32100A8
    lfd f25, 0xa0(r1)
    opword 0xE3010098
    lfd f24, 0x90(r1)
    opword 0xE2E10088
    lfd f23, 0x80(r1)
    opword 0xE2C10078
    addi r11, r1, 0x70
    lfd f22, 0x70(r1)
    bl _restgpr_26
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// ChannelCallbackFunc__Q44nw4r3snd6detail9WsdPlayerFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl
// ----------------------------------------------------------------------------
extern "C" asm void ChannelCallbackFunc__Q44nw4r3snd6detail9WsdPlayerFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl() {
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
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r30, 0x2
    bne lbl_80222A6C
    mr r3, r29
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_80222A6C:
    li r0, 0x0
    stw r0, 0x134(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OnUpdateFrameSoundThread__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdateFrameSoundThread__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    b Update__Q44nw4r3snd6detail9WsdPlayerFv
}

// ----------------------------------------------------------------------------
// OnShutdownSoundThread__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnShutdownSoundThread__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// InvalidateWaveData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateWaveData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// IsPause__Q44nw4r3snd6detail9WsdPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPause__Q44nw4r3snd6detail9WsdPlayerCFv() {
    nofralloc
    lbz r3, 0xee(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// IsStarted__Q44nw4r3snd6detail9WsdPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsStarted__Q44nw4r3snd6detail9WsdPlayerCFv() {
    nofralloc
    lbz r3, 0xed(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// IsActive__Q44nw4r3snd6detail9WsdPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsActive__Q44nw4r3snd6detail9WsdPlayerCFv() {
    nofralloc
    lbz r3, 0xec(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_80222AF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222AF0() {
    nofralloc
    subi r3, r3, 0xd4
    b InvalidateWaveData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
}

// ----------------------------------------------------------------------------
// fn_80222AF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222AF8() {
    nofralloc
    subi r3, r3, 0xd4
    b InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
}

// ----------------------------------------------------------------------------
// fn_80222B00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222B00() {
    nofralloc
    subi r3, r3, 0xd4
    b __dt__Q44nw4r3snd6detail9WsdPlayerFv
}

// ----------------------------------------------------------------------------
// fn_80222B08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222B08() {
    nofralloc
    subi r3, r3, 0xe0
    b OnShutdownSoundThread__Q44nw4r3snd6detail9WsdPlayerFv
}

// ----------------------------------------------------------------------------
// fn_80222B10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222B10() {
    nofralloc
    subi r3, r3, 0xe0
    b OnUpdateFrameSoundThread__Q44nw4r3snd6detail9WsdPlayerFv
}

// ----------------------------------------------------------------------------
// fn_80222B18
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222B18() {
    nofralloc
    subi r3, r3, 0xe0
    b __dt__Q44nw4r3snd6detail9WsdPlayerFv
}

