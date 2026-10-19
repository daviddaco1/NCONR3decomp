#include "types.h"

// Translation unit: src/nw4r/snd/snd_StrmPlayer.cpp
// Total functions: 45

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA78;
extern "C" float lbl_8049DAB0;
extern "C" float lbl_804A21E0;
extern "C" float lbl_804A21E8;
extern "C" float lbl_804A21F0;
extern "C" float lbl_804A21F8;
extern "C" float lbl_804A21FC;
extern "C" float lbl_804A2200;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362950[];
extern "C" u8 lbl_80362998[];
extern "C" u8 lbl_803629B0[];
extern "C" u8 lbl_804050E0[];
extern "C" u8 lbl_804090E0[];

// Forward declarations
extern "C" void AllocImpl__Q44nw4r3snd6detail8PoolImplFv();
extern "C" void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void AllocVoices__Q44nw4r3snd6detail10StrmPlayerFi();
extern "C" void Alloc__Q44nw4r3snd6detail14StrmBufferPoolFv();
extern "C" void AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority();
extern "C" void CalcStartOffset__Q44nw4r3snd6detail10StrmPlayerFPlPUlPl();
extern "C" void CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task();
extern "C" void Cancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv();
extern "C" void Cancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv();
extern "C" void CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl();
extern "C" void DCFlushRange();
extern "C" void DCInvalidateRange();
extern "C" void DVDGetDriveStatus();
extern "C" void DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void Execute__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv();
extern "C" void Execute__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void Free__Q44nw4r3snd6detail14StrmBufferPoolFPv();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetChannelCount__Q44nw4r3snd6detail14StrmFileLoaderCFv();
extern "C" void GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv();
extern "C" void GetFormat__Q44nw4r3snd6detail5VoiceCFv();
extern "C" void GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetInstance__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi();
extern "C" void GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void InitParam__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void InitParam__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void IsActive__Q44nw4r3snd6detail10StrmPlayerCFv();
extern "C" void IsPause__Q44nw4r3snd6detail10StrmPlayerCFv();
extern "C" void IsStarted__Q44nw4r3snd6detail10StrmPlayerCFv();
extern "C" void LoadFileHeader__Q44nw4r3snd6detail14StrmFileLoaderFPvUl();
extern "C" void LoadHeader__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei();
extern "C" void LoadStreamData__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamiUlUlib();
extern "C" void OSDisableInterrupts();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSRestoreInterrupts();
extern "C" void OSUnlockMutex();
extern "C" void OnCancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv();
extern "C" void OnCancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv();
extern "C" void OnShutdownSoundThread__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void OnUpdateFrameSoundThread__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void OnUpdateVoiceSoundThread__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Pause__Q44nw4r3snd6detail10StrmPlayerFb();
extern "C" void Pause__Q44nw4r3snd6detail5VoiceFb();
extern "C" void Prepare__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei();
extern "C" void ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii();
extern "C" void ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami();
extern "C" void ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo();
extern "C" void ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi();
extern "C" void RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf();
extern "C" void SetLoopEndToZeroBuffer__Q44nw4r3snd6detail10StrmPlayerFi();
extern "C" void SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void SetLoopFlag__Q44nw4r3snd6detail5VoiceFb();
extern "C" void SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void SetLpfFreq__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainSend__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetOutputLine__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPitch__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetSurroundPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetTrackVolume__Q44nw4r3snd6detail10StrmPlayerFUlf();
extern "C" void SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam();
extern "C" void SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType();
extern "C" void SetVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetupPlayer__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Setup__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail14StrmBufferPooliUsi();
extern "C" void Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl();
extern "C" void Shutdown__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Start__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Start__Q44nw4r3snd6detail5VoiceFv();
extern "C" void StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl();
extern "C" void Stop__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void UpdateBuffer__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl();
extern "C" void UpdateLoadingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl();
extern "C" void UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void UpdatePlayingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void UpdateVoiceParams__Q44nw4r3snd6detail10StrmPlayerFPQ54nw4r3snd6detail10StrmPlayer9StrmTrack();
extern "C" void Update__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv();
extern "C" void __construct_array();
extern "C" void __ct__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail14StrmFileReaderFv();
extern "C" void __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv();
extern "C" void __destroy_arr();
extern "C" void __div2i();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv();
extern "C" void __dt__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv();
extern "C" void _restgpr_15();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_15();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_8021C954();
extern "C" void fn_8021C95C();
extern "C" void fn_8021C964();
extern "C" void fn_8021C96C();
extern "C" void fn_8021D13C();
extern "C" void memcpy();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl __ct__Q44nw4r3snd6detail11BasicPlayerFv
    li r31, 0x0
    lis r6, lbl_80362950@ha
    addi r6, r6, lbl_80362950@l
    lis r8, lbl_803629B0@ha
    addi r0, r6, 0x24
    stw r31, 0x198(r30)
    addi r9, r30, 0x198
    addi r8, r8, lbl_803629B0@l
    stw r31, 0x19c(r30)
    lis r4, __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@ha
    lis r5, __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@ha
    addi r3, r30, 0x1a4
    stw r6, 0x0(r30)
    addi r4, r4, __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@l
    addi r5, r5, __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@l
    li r6, 0x34
    stw r31, 0xd4(r30)
    li r7, 0x20
    stw r31, 0xd8(r30)
    stw r0, 0xdc(r30)
    stb r31, 0x120(r30)
    stb r31, 0x121(r30)
    stw r31, 0x178(r30)
    stw r31, 0x17c(r30)
    stb r31, 0x180(r30)
    stw r8, 0x174(r30)
    stw r31, 0x184(r30)
    stw r31, 0x188(r30)
    stw r31, 0x190(r30)
    stw r31, 0x194(r30)
    stw r9, 0x198(r30)
    stw r9, 0x19c(r30)
    stw r31, 0x1a0(r30)
    bl __construct_array
    stw r31, 0x828(r30)
    lbz r0, lbl_8049DA78
    cmpwi r0, 0x0
    bne lbl_8021A018
    lis r3, lbl_804090E0@ha
    addi r3, r3, lbl_804090E0@l
    bl OSInitMutex
    li r0, 0x1
    stb r0, lbl_8049DA78
lbl_8021A018:
    addi r3, r30, 0x1a0
    addi r4, r30, 0x1a4
    li r5, 0x680
    li r6, 0x34
    bl CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8021A084
    li r4, 0x0
    bl fn_8021D13C
    cmpwi r31, 0x0
    ble lbl_8021A084
    mr r3, r30
    bl dtor_80136CFC
lbl_8021A084:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8021A0DC
    li r4, 0x0
    bl fn_8021D13C
    cmpwi r31, 0x0
    ble lbl_8021A0DC
    mr r3, r30
    bl dtor_80136CFC
lbl_8021A0DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_8021A1D8
    lis r12, lbl_80362950@ha
    addi r12, r12, lbl_80362950@l
    addi r0, r12, 0x24
    stw r12, 0x0(r3)
    stw r0, 0xdc(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x120(r29)
    cmpwi r0, 0x0
    bne lbl_8021A168
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_8021A190
lbl_8021A168:
    li r31, 0x0
    addi r3, r29, 0x1a0
    stw r31, 0x824(r29)
    addi r4, r29, 0x1a4
    li r5, 0x680
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    stb r31, 0x120(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_8021A190:
    lis r4, __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@ha
    addi r3, r29, 0x1a4
    addi r4, r4, __dt__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv@l
    li r5, 0x34
    li r6, 0x20
    bl __destroy_arr
    addic. r3, r29, 0x194
    beq lbl_8021A1B8
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8021A1B8:
    addic. r3, r29, 0x174
    beq lbl_8021A1C8
    li r4, 0x0
    bl fn_8021D13C
lbl_8021A1C8:
    cmpwi r30, 0x0
    ble lbl_8021A1D8
    mr r3, r29
    bl dtor_80136CFC
lbl_8021A1D8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail14StrmBufferPooliUsi
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail14StrmBufferPooliUsi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r3
    mr r30, r4
    mr r28, r5
    mr r27, r6
    mr r26, r7
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x120(r31)
    cmpwi r0, 0x0
    beq lbl_8021A29C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x120(r31)
    cmpwi r0, 0x0
    bne lbl_8021A274
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_8021A29C
lbl_8021A274:
    li r29, 0x0
    addi r3, r31, 0x1a0
    stw r29, 0x824(r31)
    addi r4, r31, 0x1a4
    li r5, 0x680
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    stb r29, 0x120(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_8021A29C:
    mr r3, r31
    bl InitParam__Q44nw4r3snd6detail10StrmPlayerFv
    cmpwi r28, 0x10
    li r0, 0x10
    bgt lbl_8021A2B4
    mr r0, r28
lbl_8021A2B4:
    stw r0, 0x830(r31)
    mr r4, r31
    li r5, 0x0
    li r0, 0x1
    b lbl_8021A2E8
lbl_8021A2C8:
    clrlwi. r3, r27, 31
    beq lbl_8021A2DC
    cmpwi r5, 0x8
    bge lbl_8021A2F0
    stb r0, 0xb78(r4)
lbl_8021A2DC:
    srwi r27, r27, 1
    addi r4, r4, 0x38
    addi r5, r5, 0x1
lbl_8021A2E8:
    cmpwi r27, 0x0
    bne lbl_8021A2C8
lbl_8021A2F0:
    cmpwi r5, 0x8
    li r0, 0x8
    bgt lbl_8021A300
    mr r0, r5
lbl_8021A300:
    cmpwi r0, 0x0
    stw r0, 0x82c(r31)
    bne lbl_8021A320
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x2
    b lbl_8021A3F8
lbl_8021A320:
    stw r26, 0x834(r31)
    stw r30, 0x824(r31)
    bl OSDisableInterrupts
    lwz r0, 0x830(r31)
    mr r30, r3
    cmpwi r0, 0x0
    ble lbl_8021A3D8
    mr r28, r31
    li r27, 0x0
    b lbl_8021A39C
lbl_8021A348:
    lwz r3, 0x824(r31)
    bl Alloc__Q44nw4r3snd6detail14StrmBufferPoolFv
    cmpwi r3, 0x0
    bne lbl_8021A390
    mr r26, r31
    li r28, 0x0
    li r29, 0x0
    b lbl_8021A380
lbl_8021A368:
    lwz r3, 0x824(r31)
    lwz r4, 0x838(r26)
    bl Free__Q44nw4r3snd6detail14StrmBufferPoolFPv
    stw r29, 0x838(r26)
    addi r26, r26, 0x34
    addi r28, r28, 0x1
lbl_8021A380:
    cmpw r28, r27
    blt lbl_8021A368
    li r0, 0x0
    b lbl_8021A3AC
lbl_8021A390:
    stw r3, 0x838(r28)
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_8021A39C:
    lwz r0, 0x830(r31)
    cmpw r27, r0
    blt lbl_8021A348
    li r0, 0x1
lbl_8021A3AC:
    cmpwi r0, 0x0
    bne lbl_8021A3D0
    mr r3, r30
    bl OSRestoreInterrupts
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_8021A3F8
lbl_8021A3D0:
    li r0, 0x1
    stb r0, 0x12f(r31)
lbl_8021A3D8:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
    stb r0, 0x120(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
lbl_8021A3F8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x120(r30)
    cmpwi r0, 0x0
    bne lbl_8021A460
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_8021A488
lbl_8021A460:
    li r31, 0x0
    addi r3, r30, 0x1a0
    stw r31, 0x824(r30)
    addi r4, r30, 0x1a4
    li r5, 0x680
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    stb r31, 0x120(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_8021A488:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Prepare__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei() {
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
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    li r3, 0x0
    li r0, 0x1
    stw r31, 0x828(r28)
    cmpwi r28, 0x0
    mr r31, r28
    stw r29, 0x16c(r28)
    stw r30, 0x170(r28)
    stb r3, 0x124(r28)
    stb r3, 0x125(r28)
    stb r3, 0x126(r28)
    stb r0, 0x121(r28)
    beq lbl_8021A50C
    addi r31, r28, 0xd4
lbl_8021A50C:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r31
    bl RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    lwz r4, 0x828(r28)
    addi r31, r28, 0x174
    lwz r3, 0x16c(r28)
    lwz r0, 0x170(r28)
    stw r28, 0x184(r28)
    stw r4, 0x188(r28)
    stw r3, 0x18c(r28)
    stw r0, 0x190(r28)
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    mr r4, r31
    li r5, 0x1
    bl AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
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
// Start__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Start__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_25
    mr r26, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x123(r26)
    cmpwi r0, 0x0
    bne lbl_8021A5BC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021A8F8
lbl_8021A5BC:
    lbz r0, 0x122(r26)
    cmpwi r0, 0x0
    bne lbl_8021A8E8
    lwz r4, 0x834(r26)
    mr r3, r26
    bl AllocVoices__Q44nw4r3snd6detail10StrmPlayerFi
    cmpwi r3, 0x0
    bne lbl_8021A62C
    mr r28, r26
    li r27, 0x0
    li r25, 0x0
    b lbl_8021A60C
lbl_8021A5EC:
    lwz r4, 0x838(r28)
    cmpwi r4, 0x0
    beq lbl_8021A604
    lwz r3, 0x824(r26)
    bl Free__Q44nw4r3snd6detail14StrmBufferPoolFPv
    stw r25, 0x838(r28)
lbl_8021A604:
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_8021A60C:
    lwz r0, 0x830(r26)
    cmpw r27, r0
    blt lbl_8021A5EC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021A8F8
lbl_8021A62C:
    li r0, 0x0
    mr r3, r26
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl CalcStartOffset__Q44nw4r3snd6detail10StrmPlayerFPlPUlPl
    cmpwi r3, 0x0
    bne lbl_8021A66C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021A8F8
lbl_8021A66C:
    lwz r3, 0x13c(r26)
    li r29, 0x0
    lwz r0, 0x154(r26)
    lwz r4, 0xe0(r26)
    mullw r5, r3, r0
    lwz r3, 0x130(r26)
    lwz r0, 0x8(r1)
    cmpwi r4, 0x2
    add r0, r3, r0
    stw r0, 0x130(r26)
    beq lbl_8021A6D0
    bge lbl_8021A6A8
    cmpwi r4, 0x1
    bge lbl_8021A6D8
    b lbl_8021A6DC
lbl_8021A6A8:
    cmpwi r4, 0x4
    bge lbl_8021A6DC
    srwi r0, r5, 3
    clrlwi. r3, r5, 29
    mulli r29, r0, 0xe
    beq lbl_8021A6DC
    subi r0, r3, 0x1
    slwi r0, r0, 1
    add r29, r29, r0
    b lbl_8021A6DC
lbl_8021A6D0:
    mr r29, r5
    b lbl_8021A6DC
lbl_8021A6D8:
    srwi r29, r5, 1
lbl_8021A6DC:
    addi r28, r26, 0xb78
    li r27, 0x0
    li r30, 0x1
    li r31, 0x0
    b lbl_8021A890
lbl_8021A6F0:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8021A888
    lwz r0, 0xe0(r26)
    addi r4, r1, 0x30
    li r5, 0x0
    stw r0, 0x18(r1)
    stb r30, 0x1c(r1)
    lwz r0, 0xc(r28)
    stw r0, 0x20(r1)
    lwz r0, 0xec(r26)
    stw r0, 0x24(r1)
    stw r31, 0x28(r1)
    stw r29, 0x2c(r1)
    b lbl_8021A83C
lbl_8021A72C:
    cmpwi r5, 0x2
    blt lbl_8021A73C
    li r3, 0x0
    b lbl_8021A760
lbl_8021A73C:
    add r3, r28, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_8021A754
    li r3, 0x0
    b lbl_8021A760
lbl_8021A754:
    mulli r0, r0, 0x34
    add r3, r26, r0
    addi r3, r3, 0x838
lbl_8021A760:
    cmpwi r3, 0x0
    beq lbl_8021A834
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    lhz r6, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r6, 0x4(r4)
    sth r0, 0x6(r4)
    lhz r6, 0x8(r3)
    lhz r0, 0xa(r3)
    sth r6, 0x8(r4)
    sth r0, 0xa(r4)
    lhz r6, 0xc(r3)
    lhz r0, 0xe(r3)
    sth r6, 0xc(r4)
    sth r0, 0xe(r4)
    lhz r6, 0x10(r3)
    lhz r0, 0x12(r3)
    sth r6, 0x10(r4)
    sth r0, 0x12(r4)
    lhz r6, 0x14(r3)
    lhz r0, 0x16(r3)
    sth r6, 0x14(r4)
    sth r0, 0x16(r4)
    lhz r6, 0x18(r3)
    lhz r0, 0x1a(r3)
    sth r6, 0x18(r4)
    sth r0, 0x1a(r4)
    lhz r6, 0x1c(r3)
    lhz r0, 0x1e(r3)
    sth r6, 0x1c(r4)
    sth r0, 0x1e(r4)
    lhz r6, 0x20(r3)
    lhz r0, 0x22(r3)
    sth r6, 0x20(r4)
    sth r0, 0x22(r4)
    lhz r0, 0x24(r3)
    sth r0, 0x24(r4)
    lhz r0, 0x26(r3)
    sth r0, 0x26(r4)
    lhz r0, 0x28(r3)
    sth r0, 0x28(r4)
    lhz r0, 0x2a(r3)
    sth r0, 0x2a(r4)
    lhz r0, 0x2c(r3)
    sth r0, 0x2c(r4)
    lhz r0, 0x2e(r3)
    sth r0, 0x2e(r4)
    lhz r0, 0x30(r3)
    sth r0, 0x30(r4)
    lwz r3, 0x0(r3)
    lbz r0, 0x0(r3)
    sth r0, 0x26(r4)
lbl_8021A834:
    addi r4, r4, 0x34
    addi r5, r5, 0x1
lbl_8021A83C:
    lwz r0, 0xc(r28)
    cmpw r5, r0
    blt lbl_8021A72C
    bl OSDisableInterrupts
    lwz r0, 0x4(r28)
    mr r25, r3
    cmpwi r0, 0x0
    beq lbl_8021A880
    lwz r5, 0xc(r1)
    mr r3, r0
    addi r4, r1, 0x18
    bl Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl
    lwz r3, 0x4(r28)
    li r4, 0x1
    bl SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
    lwz r3, 0x4(r28)
    bl Start__Q44nw4r3snd6detail5VoiceFv
lbl_8021A880:
    mr r3, r25
    bl OSRestoreInterrupts
lbl_8021A888:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_8021A890:
    lwz r0, 0x82c(r26)
    cmpw r27, r0
    blt lbl_8021A6F0
    lwz r3, 0x100(r26)
    lwz r4, 0x10(r1)
    subi r0, r3, 0x2
    cmplw r4, r0
    bne lbl_8021A8C0
    mr r3, r26
    li r4, 0x1
    bl UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl
    b lbl_8021A8D8
lbl_8021A8C0:
    subi r0, r3, 0x1
    cmplw r4, r0
    bne lbl_8021A8D8
    mr r3, r26
    li r4, 0x0
    bl UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl
lbl_8021A8D8:
    mr r3, r26
    bl UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
    li r0, 0x1
    stb r0, 0x122(r26)
lbl_8021A8E8:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_8021A8F8:
    addi r11, r1, 0xc0
    bl _restgpr_25
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// Stop__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r27, r31
    li r28, 0x0
lbl_8021A93C:
    lbz r0, 0xb78(r27)
    cmpwi r0, 0x0
    beq lbl_8021A958
    lwz r3, 0xb7c(r27)
    cmpwi r3, 0x0
    beq lbl_8021A958
    bl Stop__Q44nw4r3snd6detail5VoiceFv
lbl_8021A958:
    addi r28, r28, 0x1
    addi r27, r27, 0x38
    cmpwi r28, 0x8
    blt lbl_8021A93C
    lbz r0, 0x121(r31)
    cmpwi r0, 0x0
    beq lbl_8021A990
    cmpwi r31, 0x0
    mr r28, r31
    beq lbl_8021A984
    addi r28, r31, 0xd4
lbl_8021A984:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r28
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
lbl_8021A990:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    addi r4, r31, 0x174
    bl CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task
    bl OSDisableInterrupts
    lwz r0, 0x194(r31)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_8021A9DC
    b lbl_8021A9D0
lbl_8021A9C0:
    lwz r29, 0x19c(r31)
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    subi r4, r29, 0x2c
    bl CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task
lbl_8021A9D0:
    lwz r0, 0x194(r31)
    cmpwi r0, 0x0
    bne lbl_8021A9C0
lbl_8021A9DC:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r27, r31
    li r30, 0x0
    li r29, 0x0
    b lbl_8021AA14
lbl_8021A9F4:
    lwz r4, 0x838(r27)
    cmpwi r4, 0x0
    beq lbl_8021AA0C
    lwz r3, 0x824(r31)
    bl Free__Q44nw4r3snd6detail14StrmBufferPoolFPv
    stw r29, 0x838(r27)
lbl_8021AA0C:
    addi r27, r27, 0x34
    addi r30, r30, 0x1
lbl_8021AA14:
    lwz r0, 0x830(r31)
    cmpw r30, r0
    blt lbl_8021A9F4
    bl OSDisableInterrupts
    mr r29, r3
    addi r27, r31, 0xb78
    li r28, 0x0
    li r30, 0x0
    b lbl_8021AA60
lbl_8021AA38:
    lbz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_8021AA58
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_8021AA58
    bl Free__Q44nw4r3snd6detail5VoiceFv
    stw r30, 0x4(r27)
lbl_8021AA58:
    addi r27, r27, 0x38
    addi r28, r28, 0x1
lbl_8021AA60:
    lwz r0, 0x82c(r31)
    cmpw r28, r0
    blt lbl_8021AA38
    mr r3, r29
    bl OSRestoreInterrupts
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r3, 0x828(r31)
    cmpwi r3, 0x0
    beq lbl_8021AAA4
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x828(r31)
lbl_8021AAA4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r0, 0x0
    addi r11, r1, 0x20
    stb r0, 0x122(r31)
    stb r0, 0x123(r31)
    stb r0, 0x121(r31)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Pause__Q44nw4r3snd6detail10StrmPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void Pause__Q44nw4r3snd6detail10StrmPlayerFb() {
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
    cmpwi r31, 0x0
    stb r31, 0x127(r30)
    beq lbl_8021AB14
    li r0, 0x1
    stb r0, 0x129(r30)
lbl_8021AB14:
    mr r3, r30
    bl UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
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
// InitParam__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl InitParam__Q44nw4r3snd6detail11BasicPlayerFv
    lfs f1, lbl_804A21F8
    li r3, 0x0
    lfs f0, lbl_804A21E0
    li r0, 0x1
    stb r3, 0x122(r31)
    stb r3, 0x123(r31)
    stb r3, 0x12e(r31)
    stb r3, 0x127(r31)
    stb r3, 0x128(r31)
    stb r3, 0x129(r31)
    stb r3, 0x12a(r31)
    stb r3, 0x12d(r31)
    stb r3, 0x12b(r31)
    stb r3, 0x12c(r31)
    stb r3, 0x12f(r31)
    stw r3, 0x130(r31)
    stw r0, 0x834(r31)
    stw r3, 0x168(r31)
    stb r3, 0xb78(r31)
    stfs f1, 0xba8(r31)
    stfs f0, 0xbac(r31)
    stw r3, 0xb7c(r31)
    stb r3, 0xbb0(r31)
    stfs f1, 0xbe0(r31)
    stfs f0, 0xbe4(r31)
    stw r3, 0xbb4(r31)
    stb r3, 0xbe8(r31)
    stfs f1, 0xc18(r31)
    stfs f0, 0xc1c(r31)
    stw r3, 0xbec(r31)
    stb r3, 0xc20(r31)
    stfs f1, 0xc50(r31)
    stfs f0, 0xc54(r31)
    stw r3, 0xc24(r31)
    stb r3, 0xc58(r31)
    stfs f1, 0xc88(r31)
    stfs f0, 0xc8c(r31)
    stw r3, 0xc5c(r31)
    stb r3, 0xc90(r31)
    stfs f1, 0xcc0(r31)
    stfs f0, 0xcc4(r31)
    stw r3, 0xc94(r31)
    stb r3, 0xcc8(r31)
    stfs f1, 0xcf8(r31)
    stfs f0, 0xcfc(r31)
    stw r3, 0xccc(r31)
    stb r3, 0xd00(r31)
    stfs f1, 0xd30(r31)
    stfs f0, 0xd34(r31)
    stw r3, 0xd04(r31)
    stw r3, 0x838(r31)
    stw r3, 0x86c(r31)
    stw r3, 0x8a0(r31)
    stw r3, 0x8d4(r31)
    stw r3, 0x908(r31)
    stw r3, 0x93c(r31)
    stw r3, 0x970(r31)
    stw r3, 0x9a4(r31)
    stw r3, 0x9d8(r31)
    stw r3, 0xa0c(r31)
    stw r3, 0xa40(r31)
    stw r3, 0xa74(r31)
    stw r3, 0xaa8(r31)
    stw r3, 0xadc(r31)
    stw r3, 0xb10(r31)
    stw r3, 0xb44(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// LoadHeader__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void LoadHeader__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    lis r31, lbl_804090E0@ha
    mr r29, r3
    addi r31, r31, lbl_804090E0@l
    mr r27, r4
    mr r26, r5
    mr r30, r6
    mr r3, r31
    bl OSLockMutex
    stw r27, 0x8(r1)
    addi r3, r1, 0xc
    bl __ct__Q44nw4r3snd6detail14StrmFileReaderFv
    lis r4, lbl_804050E0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_804050E0@l
    li r5, 0x4000
    bl LoadFileHeader__Q44nw4r3snd6detail14StrmFileLoaderFPvUl
    cmpwi r3, 0x0
    bne lbl_8021ACE0
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021ACE0:
    addi r3, r1, 0x8
    addi r4, r29, 0xe0
    bl ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo
    cmpwi r3, 0x0
    bne lbl_8021AD04
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021AD04:
    lwz r0, 0x830(r29)
    cmpwi r0, 0x0
    bne lbl_8021AD28
    addi r3, r1, 0x8
    bl GetChannelCount__Q44nw4r3snd6detail14StrmFileLoaderCFv
    cmpwi r3, 0x10
    ble lbl_8021AD24
    li r3, 0x10
lbl_8021AD24:
    stw r3, 0x830(r29)
lbl_8021AD28:
    li r27, 0x0
    li r28, 0x0
    b lbl_8021AD68
lbl_8021AD34:
    add r4, r29, r28
    mr r5, r27
    addi r3, r1, 0x8
    addi r4, r4, 0xb80
    bl ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi
    cmpwi r3, 0x0
    bne lbl_8021AD60
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021AD60:
    addi r27, r27, 0x1
    addi r28, r28, 0x38
lbl_8021AD68:
    lwz r0, 0x82c(r29)
    cmpw r27, r0
    blt lbl_8021AD34
    lwz r3, 0xe0(r29)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_8021AE8C
    li r27, 0x0
    li r28, 0x0
    b lbl_8021ADCC
lbl_8021AD94:
    add r5, r29, r28
    mr r6, r27
    addi r4, r5, 0x83c
    addi r3, r1, 0x8
    addi r5, r5, 0x864
    bl ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami
    cmpwi r3, 0x0
    bne lbl_8021ADC4
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021ADC4:
    addi r27, r27, 0x1
    addi r28, r28, 0x34
lbl_8021ADCC:
    lwz r0, 0x830(r29)
    cmpw r27, r0
    blt lbl_8021AD94
    cmpwi r30, 0x0
    beq lbl_8021AE8C
    cmpwi r26, 0x0
    bne lbl_8021ADEC
    b lbl_8021AE14
lbl_8021ADEC:
    cmpwi r26, 0x1
    bne lbl_8021AE14
    lwz r0, 0xec(r29)
    lis r3, 0x1062
    addi r3, r3, 0x4dd3
    mullw r0, r30, r0
    mulhw r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r30, r0, r3
lbl_8021AE14:
    lwz r0, 0x108(r29)
    addi r3, r1, 0x8
    lwz r7, 0xe8(r29)
    addi r4, r1, 0x38
    divw r6, r30, r0
    addi r5, r1, 0x18
    bl ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii
    cmpwi r3, 0x0
    bne lbl_8021AE48
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021AE48:
    addi r7, r1, 0x38
    addi r5, r1, 0x18
    li r8, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_8021AE80
lbl_8021AE60:
    lhzx r0, r7, r4
    add r6, r29, r3
    addi r8, r8, 0x1
    addi r3, r3, 0x34
    sth r0, 0x860(r6)
    lhzx r0, r5, r4
    addi r4, r4, 0x2
    sth r0, 0x862(r6)
lbl_8021AE80:
    lwz r0, 0xe8(r29)
    cmpw r8, r0
    blt lbl_8021AE60
lbl_8021AE8C:
    mr r3, r29
    bl SetupPlayer__Q44nw4r3snd6detail10StrmPlayerFv
    cmpwi r3, 0x0
    bne lbl_8021AEAC
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021AF1C
lbl_8021AEAC:
    li r0, 0x0
    li r27, 0x0
    stw r0, 0x134(r29)
    b lbl_8021AEE0
lbl_8021AEBC:
    mr r3, r29
    bl UpdateLoadingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv
    lwz r3, 0x134(r29)
    lbz r0, 0x12e(r29)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    stw r3, 0x134(r29)
    bne lbl_8021AEEC
    addi r27, r27, 0x1
lbl_8021AEE0:
    lwz r0, 0x144(r29)
    cmpw r27, r0
    blt lbl_8021AEBC
lbl_8021AEEC:
    lwz r4, 0x100(r29)
    cmplwi r4, 0x2
    bgt lbl_8021AF10
    lbz r0, 0xe4(r29)
    cmpwi r0, 0x0
    bne lbl_8021AF10
    mr r3, r29
    subi r4, r4, 0x1
    bl SetLoopEndToZeroBuffer__Q44nw4r3snd6detail10StrmPlayerFi
lbl_8021AF10:
    mr r3, r31
    bl OSUnlockMutex
    li r3, 0x1
lbl_8021AF1C:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// LoadStreamData__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamiUlUlib
// ----------------------------------------------------------------------------
extern "C" asm void LoadStreamData__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamiUlUlib() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_15
    cmpwi r4, 0x0
    mr r18, r3
    mr r19, r4
    mr r15, r5
    mr r20, r7
    mr r21, r8
    mr r22, r9
    la r16, lbl_8049DAB0
    beq lbl_8021AFB4
    lwz r12, 0x0(r19)
    mr r3, r19
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_8021AF98
lbl_8021AF84:
    cmplw r3, r16
    bne lbl_8021AF94
    li r0, 0x1
    b lbl_8021AFA4
lbl_8021AF94:
    lwz r3, 0x0(r3)
lbl_8021AF98:
    cmpwi r3, 0x0
    bne lbl_8021AF84
    li r0, 0x0
lbl_8021AFA4:
    cmpwi r0, 0x0
    beq lbl_8021AFB4
    mr r3, r19
    b lbl_8021AFB8
lbl_8021AFB4:
    li r3, 0x0
lbl_8021AFB8:
    cmpwi r3, 0x0
    beq lbl_8021AFC8
    li r0, 0x1
    stw r0, 0x68(r3)
lbl_8021AFC8:
    lis r28, lbl_804090E0@ha
    addi r28, r28, lbl_804090E0@l
    mr r3, r28
    bl OSLockMutex
    lis r29, lbl_804050E0@ha
    li r4, 0x4000
    addi r3, r29, lbl_804050E0@l
    bl DCInvalidateRange
    lhz r0, 0xf0(r18)
    addi r30, r29, lbl_804050E0@l
    addi r31, r1, 0x8
    li r26, 0x0
    add r27, r15, r0
    b lbl_8021B0E0
lbl_8021B000:
    lwz r0, 0x830(r18)
    addi r3, r26, 0x2
    li r25, 0x2
    cmpw r3, r0
    ble lbl_8021B018
    subf r25, r26, r0
lbl_8021B018:
    lwz r12, 0x0(r19)
    mullw r24, r20, r25
    mr r3, r19
    lwz r12, 0x44(r12)
    mr r4, r27
    li r5, 0x0
    mtctr r12
    bctrl
    lwz r12, 0x0(r19)
    mr r3, r19
    mr r5, r24
    addi r4, r29, lbl_804050E0@l
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r3, r24
    beq lbl_8021B06C
    mr r3, r28
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8021B17C
lbl_8021B06C:
    mulli r17, r26, 0x34
    slwi r16, r26, 1
    li r23, 0x0
    b lbl_8021B0D4
lbl_8021B07C:
    cmpwi r22, 0x0
    beq lbl_8021B090
    mullw r0, r20, r23
    lbzx r0, r30, r0
    sthx r0, r31, r16
lbl_8021B090:
    lwz r0, 0x13c(r18)
    mullw r4, r20, r23
    add r3, r18, r17
    lwz r3, 0x838(r3)
    mr r5, r20
    mullw r0, r0, r21
    add r4, r4, r30
    add r15, r0, r3
    mr r3, r15
    bl memcpy
    mr r3, r15
    mr r4, r20
    bl DCFlushRange
    addi r26, r26, 0x1
    addi r17, r17, 0x34
    addi r16, r16, 0x2
    addi r23, r23, 0x1
lbl_8021B0D4:
    cmpw r23, r25
    blt lbl_8021B07C
    add r27, r27, r24
lbl_8021B0E0:
    lwz r7, 0x830(r18)
    cmpw r26, r7
    blt lbl_8021B000
    cmpwi r22, 0x0
    beq lbl_8021B14C
    lwz r3, 0xe0(r18)
    subi r0, r3, 0x3
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_8021B14C
    addi r6, r1, 0x8
    li r8, 0x0
    li r3, 0x0
    li r4, 0x0
    b lbl_8021B134
lbl_8021B11C:
    lhzx r0, r6, r4
    add r5, r18, r3
    addi r4, r4, 0x2
    addi r8, r8, 0x1
    sth r0, 0x86a(r5)
    addi r3, r3, 0x34
lbl_8021B134:
    cmpw r8, r7
    bge lbl_8021B144
    cmpwi r8, 0x10
    blt lbl_8021B11C
lbl_8021B144:
    li r0, 0x1
    stb r0, 0x12c(r18)
lbl_8021B14C:
    lbz r0, 0x123(r18)
    cmpwi r0, 0x0
    bne lbl_8021B170
    lwz r0, 0x134(r18)
    subic. r0, r0, 0x1
    stw r0, 0x134(r18)
    bne lbl_8021B170
    li r0, 0x1
    stb r0, 0x123(r18)
lbl_8021B170:
    mr r3, r28
    bl OSUnlockMutex
    li r3, 0x1
lbl_8021B17C:
    addi r11, r1, 0x70
    bl _restgpr_15
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// SetupPlayer__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void SetupPlayer__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r5, 0x824(r3)
    li r0, 0x0
    mr r31, r3
    addi r4, r1, 0x10
    lwz r27, 0x8(r5)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl CalcStartOffset__Q44nw4r3snd6detail10StrmPlayerFPlPUlPl
    cmpwi r3, 0x0
    bne lbl_8021B1E4
    li r3, 0x0
    b lbl_8021B374
lbl_8021B1E4:
    lwz r4, 0xf4(r31)
    lwz r3, 0x108(r31)
    lwz r0, 0x104(r31)
    divwu r4, r4, r3
    lwz r3, 0x100(r31)
    cmpwi r0, 0x2000
    stw r0, 0x13c(r31)
    subi r3, r3, 0x1
    stw r3, 0x164(r31)
    stw r4, 0x160(r31)
    ble lbl_8021B218
    li r3, 0x0
    b lbl_8021B374
lbl_8021B218:
    divwu r0, r27, r0
    cmpwi r0, 0x4
    stw r0, 0x140(r31)
    bge lbl_8021B230
    li r3, 0x0
    b lbl_8021B374
lbl_8021B230:
    cmpwi r0, 0x20
    ble lbl_8021B240
    li r0, 0x20
    stw r0, 0x140(r31)
lbl_8021B240:
    lwz r4, 0x140(r31)
    li r3, 0x0
    lbz r0, 0x12a(r31)
    subi r5, r4, 0x1
    stw r5, 0x144(r31)
    cmpwi r0, 0x0
    stw r5, 0x138(r31)
    lwz r0, 0x10(r1)
    stw r0, 0x15c(r31)
    lwz r4, 0x10(r1)
    stw r4, 0x150(r31)
    stw r3, 0x14c(r31)
    stw r3, 0x158(r31)
    beq lbl_8021B284
    lwz r0, 0x100(r31)
    stw r0, 0x148(r31)
    b lbl_8021B2BC
lbl_8021B284:
    lwz r6, 0x164(r31)
    addi r7, r5, 0x1
    lwz r0, 0x160(r31)
    subf r3, r4, r6
    addi r4, r3, 0x1
    subf r3, r0, r6
    subf r4, r4, r7
    addi r3, r3, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_8021B2B8
    mr r5, r7
lbl_8021B2B8:
    stw r5, 0x148(r31)
lbl_8021B2BC:
    lwz r0, 0x148(r31)
    stw r0, 0x154(r31)
    bl OSDisableInterrupts
    lbz r0, 0x12f(r31)
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_8021B368
    mr r28, r31
    li r27, 0x0
    b lbl_8021B338
lbl_8021B2E4:
    lwz r3, 0x824(r31)
    bl Alloc__Q44nw4r3snd6detail14StrmBufferPoolFv
    cmpwi r3, 0x0
    bne lbl_8021B32C
    mr r26, r31
    li r28, 0x0
    li r29, 0x0
    b lbl_8021B31C
lbl_8021B304:
    lwz r3, 0x824(r31)
    lwz r4, 0x838(r26)
    bl Free__Q44nw4r3snd6detail14StrmBufferPoolFPv
    stw r29, 0x838(r26)
    addi r26, r26, 0x34
    addi r28, r28, 0x1
lbl_8021B31C:
    cmpw r28, r27
    blt lbl_8021B304
    li r0, 0x0
    b lbl_8021B348
lbl_8021B32C:
    stw r3, 0x838(r28)
    addi r28, r28, 0x34
    addi r27, r27, 0x1
lbl_8021B338:
    lwz r0, 0x830(r31)
    cmpw r27, r0
    blt lbl_8021B2E4
    li r0, 0x1
lbl_8021B348:
    cmpwi r0, 0x0
    bne lbl_8021B360
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8021B374
lbl_8021B360:
    li r0, 0x1
    stb r0, 0x12f(r31)
lbl_8021B368:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8021B374:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// AllocVoices__Q44nw4r3snd6detail10StrmPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void AllocVoices__Q44nw4r3snd6detail10StrmPlayerFi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    bl OSDisableInterrupts
    addi r27, r24, 0xb78
    mr r31, r3
    mr r28, r27
    li r26, 0x0
    lis r29, VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv@ha
    li r30, 0x1
    b lbl_8021B448
lbl_8021B3C8:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8021B440
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    lwz r4, 0xc(r28)
    mr r5, r25
    mr r8, r28
    addi r7, r29, VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv@l
    li r6, 0xff
    bl AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
    cmpwi r3, 0x0
    bne lbl_8021B438
    li r28, 0x0
    li r30, 0x0
    b lbl_8021B420
lbl_8021B404:
    lwz r3, 0x4(r27)
    cmpwi r3, 0x0
    beq lbl_8021B418
    bl Free__Q44nw4r3snd6detail5VoiceFv
    stw r30, 0x4(r27)
lbl_8021B418:
    addi r27, r27, 0x38
    addi r28, r28, 0x1
lbl_8021B420:
    cmpw r28, r26
    blt lbl_8021B404
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8021B460
lbl_8021B438:
    stw r3, 0x4(r28)
    stb r30, 0xa1(r3)
lbl_8021B440:
    addi r28, r28, 0x38
    addi r26, r26, 0x1
lbl_8021B448:
    lwz r0, 0x82c(r24)
    cmpw r26, r0
    blt lbl_8021B3C8
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_8021B460:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x121(r3)
    cmpwi r0, 0x0
    beq lbl_8021B610
    lbz r0, 0x124(r3)
    cmpwi r0, 0x0
    beq lbl_8021B4CC
    lbz r0, 0x125(r3)
    cmpwi r0, 0x0
    bne lbl_8021B4CC
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_8021B610
lbl_8021B4CC:
    lbz r0, 0x122(r3)
    cmpwi r0, 0x0
    beq lbl_8021B524
    lwz r0, 0x82c(r3)
    addi r4, r3, 0xb78
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_8021B524
lbl_8021B4EC:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_8021B51C
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_8021B51C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_8021B610
lbl_8021B51C:
    addi r4, r4, 0x38
    bdnz lbl_8021B4EC
lbl_8021B524:
    lbz r0, 0x129(r3)
    cmpwi r0, 0x0
    beq lbl_8021B5D0
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    bne lbl_8021B5D0
    lwz r29, 0x828(r3)
    la r30, lbl_8049DAB0
    cmpwi r29, 0x0
    beq lbl_8021B590
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_8021B578
lbl_8021B564:
    cmplw r3, r30
    bne lbl_8021B574
    li r0, 0x1
    b lbl_8021B584
lbl_8021B574:
    lwz r3, 0x0(r3)
lbl_8021B578:
    cmpwi r3, 0x0
    bne lbl_8021B564
    li r0, 0x0
lbl_8021B584:
    cmpwi r0, 0x0
    beq lbl_8021B590
    b lbl_8021B594
lbl_8021B590:
    li r29, 0x0
lbl_8021B594:
    cmpwi r29, 0x0
    bne lbl_8021B5A4
    li r0, 0x0
    b lbl_8021B5B8
lbl_8021B5A4:
    bl DVDGetDriveStatus
    xori r0, r3, 0x1
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_8021B5B8:
    cmpwi r0, 0x0
    bne lbl_8021B5D0
    li r0, 0x0
    mr r3, r31
    stb r0, 0x129(r31)
    bl UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
lbl_8021B5D0:
    lbz r0, 0x126(r31)
    cmpwi r0, 0x0
    beq lbl_8021B5E4
    li r0, 0x0
    stb r0, 0x126(r31)
lbl_8021B5E4:
    addi r29, r31, 0xb78
    li r30, 0x0
    b lbl_8021B604
lbl_8021B5F0:
    mr r3, r31
    mr r4, r29
    bl UpdateVoiceParams__Q44nw4r3snd6detail10StrmPlayerFPQ54nw4r3snd6detail10StrmPlayer9StrmTrack
    addi r29, r29, 0x38
    addi r30, r30, 0x1
lbl_8021B604:
    lwz r0, 0x82c(r31)
    cmpw r30, r0
    blt lbl_8021B5F0
lbl_8021B610:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UpdateVoiceParams__Q44nw4r3snd6detail10StrmPlayerFPQ54nw4r3snd6detail10StrmPlayer9StrmTrack
// ----------------------------------------------------------------------------
extern "C" asm void UpdateVoiceParams__Q44nw4r3snd6detail10StrmPlayerFPQ54nw4r3snd6detail10StrmPlayer9StrmTrack() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    stfd f28, 0xb0(r1)
    opword 0xF38100B8
    stfd f27, 0xa0(r1)
    opword 0xF36100A8
    stfd f26, 0x90(r1)
    opword 0xF3410098
    stfd f25, 0x80(r1)
    opword 0xF3210088
    stfd f24, 0x70(r1)
    opword 0xF3010078
    addi r11, r1, 0x70
    bl _savegpr_24
    lbz r0, 0x0(r4)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_8021B974
    lbz r0, 0x8(r4)
    lis r5, 0x4330
    lbz r6, 0x9(r4)
    stw r0, 0x4c(r1)
    lfd f2, lbl_804A21F0
    cmplwi r6, 0x1
    stw r5, 0x48(r1)
    lfs f1, lbl_804A21FC
    lfd f0, 0x48(r1)
    lfs f31, lbl_804A21F8
    fsubs f2, f0, f2
    lfs f3, 0x4(r3)
    lfs f0, 0x30(r4)
    fmuls f31, f31, f3
    lfs f30, lbl_804A21F8
    fdivs f1, f2, f1
    lfs f2, 0x8(r3)
    lfs f29, lbl_804A21E0
    lfs f3, 0xc(r3)
    fmuls f31, f31, f1
    fmuls f30, f30, f2
    fadds f29, f29, f3
    fmuls f31, f31, f0
    bgt lbl_8021B720
    subi r0, r6, 0x3f
    stw r5, 0x48(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_804A21E8
    stw r0, 0x4c(r1)
    lfs f0, lbl_804A2200
    lfd f1, 0x48(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f29, f29, f0
    b lbl_8021B748
lbl_8021B720:
    subi r0, r6, 0x40
    stw r5, 0x48(r1)
    xoris r0, r0, 0x8000
    lfd f2, lbl_804A21E8
    stw r0, 0x4c(r1)
    lfs f0, lbl_804A2200
    lfd f1, 0x48(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f29, f29, f0
lbl_8021B748:
    lfs f0, 0x34(r4)
    addi r26, r1, 0x38
    lfs f27, lbl_804A21E0
    li r27, 0x0
    fadds f29, f29, f0
    lfs f0, 0x10(r3)
    lfs f26, lbl_804A21F8
    lfs f1, 0x14(r3)
    fadds f27, f27, f0
    lfs f24, lbl_804A21E0
    lfs f0, 0x28(r3)
    fadds f26, f26, f1
    lfs f25, 0x18(r3)
    fadds f24, f24, f0
    lbz r25, 0x1d(r3)
    lbz r29, 0x1c(r3)
    lfs f28, lbl_804A21E0
lbl_8021B78C:
    stfs f28, 0x0(r26)
    mr r3, r30
    mr r4, r27
    bl GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus
    lfs f0, 0x0(r26)
    addi r27, r27, 0x1
    cmpwi r27, 0x3
    fadds f0, f0, f1
    stfs f0, 0x0(r26)
    addi r26, r26, 0x4
    blt lbl_8021B78C
    lfs f28, lbl_804A21E0
    addi r27, r1, 0x28
    addi r28, r1, 0x18
    addi r26, r1, 0x8
    li r24, 0x0
lbl_8021B7CC:
    mr r3, r30
    mr r4, r24
    bl GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi
    stfs f1, 0x0(r27)
    mr r3, r30
    mr r4, r24
    stfs f28, 0x0(r28)
    bl GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r28)
    mr r3, r30
    stfs f28, 0x0(r26)
    mr r4, r24
    fadds f0, f0, f1
    stfs f0, 0x0(r28)
    bl GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r26)
    addi r24, r24, 0x1
    cmpwi r24, 0x4
    addi r27, r27, 0x4
    fadds f0, f0, f1
    addi r28, r28, 0x4
    stfs f0, 0x0(r26)
    addi r26, r26, 0x4
    blt lbl_8021B7CC
    bl OSDisableInterrupts
    lwz r24, 0x4(r31)
    mr r31, r3
    cmpwi r24, 0x0
    beq lbl_8021B96C
    fmr f1, f31
    mr r3, r24
    bl SetVolume__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f30
    mr r3, r24
    bl SetPitch__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f29
    mr r3, r24
    bl SetPan__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f27
    mr r3, r24
    bl SetSurroundPan__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f26
    mr r3, r24
    bl SetLpfFreq__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f25
    mr r3, r24
    mr r4, r29
    bl SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif
    mr r3, r24
    mr r4, r25
    bl SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi
    lwz r4, 0x20(r30)
    mr r3, r24
    bl SetOutputLine__Q44nw4r3snd6detail5VoiceFi
    lfs f1, 0x24(r30)
    mr r3, r24
    bl SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f24
    mr r3, r24
    bl SetMainSend__Q44nw4r3snd6detail5VoiceFf
    addi r27, r1, 0x38
    li r25, 0x0
lbl_8021B8C4:
    lfs f1, 0x0(r27)
    mr r3, r24
    mr r4, r25
    bl SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x3
    blt lbl_8021B8C4
    addi r29, r1, 0x28
    addi r28, r1, 0x18
    addi r27, r1, 0x8
    li r25, 0x0
lbl_8021B8F4:
    lfs f1, 0x0(r29)
    mr r3, r24
    mr r4, r25
    bl SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif
    lfs f1, 0x0(r28)
    mr r3, r24
    mr r4, r25
    bl SetRemoteSend__Q44nw4r3snd6detail5VoiceFif
    lfs f1, 0x0(r27)
    mr r3, r24
    mr r4, r25
    bl SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif
    addi r25, r25, 0x1
    addi r28, r28, 0x4
    cmpwi r25, 0x4
    addi r27, r27, 0x4
    addi r29, r29, 0x4
    blt lbl_8021B8F4
    addi r29, r30, 0x70
    li r25, 0x0
    b lbl_8021B960
lbl_8021B948:
    mr r3, r24
    mr r4, r25
    mr r5, r29
    bl SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam
    addi r29, r29, 0x18
    addi r25, r25, 0x1
lbl_8021B960:
    lwz r0, 0x834(r30)
    cmpw r25, r0
    blt lbl_8021B948
lbl_8021B96C:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8021B974:
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    lfd f29, 0xc0(r1)
    opword 0xE38100B8
    lfd f28, 0xb0(r1)
    opword 0xE36100A8
    lfd f27, 0xa0(r1)
    opword 0xE3410098
    lfd f26, 0x90(r1)
    opword 0xE3210088
    lfd f25, 0x80(r1)
    opword 0xE3010078
    addi r11, r1, 0x70
    lfd f24, 0x70(r1)
    bl _restgpr_24
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// UpdateBuffer__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateBuffer__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x0
    beq lbl_8021BB3C
    lbz r0, 0xb78(r3)
    cmpwi r0, 0x0
    beq lbl_8021BB3C
    lwz r28, 0xb7c(r3)
    cmpwi r28, 0x0
    beq lbl_8021BB3C
    lwz r29, 0x828(r3)
    la r30, lbl_8049DAB0
    cmpwi r29, 0x0
    beq lbl_8021BA64
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_8021BA4C
lbl_8021BA38:
    cmplw r3, r30
    bne lbl_8021BA48
    li r0, 0x1
    b lbl_8021BA58
lbl_8021BA48:
    lwz r3, 0x0(r3)
lbl_8021BA4C:
    cmpwi r3, 0x0
    bne lbl_8021BA38
    li r0, 0x0
lbl_8021BA58:
    cmpwi r0, 0x0
    beq lbl_8021BA64
    b lbl_8021BA68
lbl_8021BA64:
    li r29, 0x0
lbl_8021BA68:
    cmpwi r29, 0x0
    bne lbl_8021BA78
    li r0, 0x0
    b lbl_8021BA8C
lbl_8021BA78:
    bl DVDGetDriveStatus
    xori r0, r3, 0x1
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r0, r0, 31
lbl_8021BA8C:
    cmpwi r0, 0x0
    beq lbl_8021BAA4
    li r0, 0x1
    mr r3, r31
    stb r0, 0x129(r31)
    bl UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
lbl_8021BAA4:
    lbz r0, 0x12d(r31)
    cmpwi r0, 0x0
    bne lbl_8021BB3C
    lbz r0, 0x12a(r31)
    cmpwi r0, 0x0
    bne lbl_8021BB3C
    lbz r0, 0x129(r31)
    cmpwi r0, 0x0
    bne lbl_8021BB3C
    mr r3, r28
    bl GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv
    lwz r0, 0x108(r31)
    divwu r28, r3, r0
    b lbl_8021BB30
lbl_8021BADC:
    lbz r0, 0x129(r31)
    cmpwi r0, 0x0
    bne lbl_8021BB20
    lwz r0, 0x194(r31)
    cmpwi r0, 0x0
    beq lbl_8021BB20
    lwz r3, 0x144(r31)
    lwz r4, 0x168(r31)
    subi r0, r3, 0x2
    cmpw r4, r0
    blt lbl_8021BB20
    li r0, 0x1
    mr r3, r31
    stb r0, 0x126(r31)
    stb r0, 0x129(r31)
    bl UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
    b lbl_8021BB3C
lbl_8021BB20:
    mr r3, r31
    bl UpdatePlayingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv
    mr r3, r31
    bl UpdateLoadingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv
lbl_8021BB30:
    lwz r0, 0x158(r31)
    cmpw r0, r28
    bne lbl_8021BADC
lbl_8021BB3C:
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
// UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl
// ----------------------------------------------------------------------------
extern "C" asm void UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    mr r24, r5
    bl OSDisableInterrupts
    mr r31, r3
    mr r28, r22
    addi r29, r22, 0xb78
    li r27, 0x0
    b lbl_8021BC38
lbl_8021BB94:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_8021BC2C
    lwz r26, 0x4(r29)
    cmpwi r26, 0x0
    beq lbl_8021BC2C
    li r25, 0x0
    b lbl_8021BC14
lbl_8021BBB4:
    cmpwi r25, 0x2
    blt lbl_8021BBC4
    li r30, 0x0
    b lbl_8021BBE8
lbl_8021BBC4:
    add r3, r28, r25
    lbz r0, 0xb88(r3)
    cmpwi r0, 0x10
    blt lbl_8021BBDC
    li r30, 0x0
    b lbl_8021BBE8
lbl_8021BBDC:
    mulli r0, r0, 0x34
    add r3, r22, r0
    addi r30, r3, 0x838
lbl_8021BBE8:
    lwz r5, 0x0(r30)
    mr r3, r26
    mr r4, r25
    mr r6, r23
    bl SetLoopStart__Q44nw4r3snd6detail5VoiceFiPCvUl
    lwz r5, 0x0(r30)
    mr r3, r26
    mr r4, r25
    mr r6, r24
    bl SetLoopEnd__Q44nw4r3snd6detail5VoiceFiPCvUl
    addi r25, r25, 0x1
lbl_8021BC14:
    lwz r0, 0xc(r29)
    cmpw r25, r0
    blt lbl_8021BBB4
    mr r3, r26
    li r4, 0x1
    bl SetLoopFlag__Q44nw4r3snd6detail5VoiceFb
lbl_8021BC2C:
    addi r29, r29, 0x38
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_8021BC38:
    lwz r0, 0x82c(r22)
    cmpw r27, r0
    blt lbl_8021BB94
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// UpdatePlayingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdatePlayingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r4, 0x15c(r3)
    mr r31, r3
    lwz r0, 0x164(r3)
    addi r4, r4, 0x1
    cmpw r4, r0
    stw r4, 0x15c(r3)
    ble lbl_8021BCDC
    lbz r0, 0xe4(r3)
    cmpwi r0, 0x0
    beq lbl_8021BCDC
    lis r4, 0x8000
    lwz r5, 0x130(r3)
    subi r0, r4, 0x1
    lwz r4, 0x160(r3)
    cmpw r5, r0
    stw r4, 0x15c(r3)
    bge lbl_8021BCC4
    addi r0, r5, 0x1
    stw r0, 0x130(r3)
lbl_8021BCC4:
    lwz r5, 0x154(r31)
    mr r3, r31
    lwz r0, 0x108(r31)
    li r4, 0x0
    mullw r5, r5, r0
    bl UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl
lbl_8021BCDC:
    lwz r3, 0x158(r31)
    lwz r0, 0x154(r31)
    addi r3, r3, 0x1
    cmpw r3, r0
    stw r3, 0x158(r31)
    blt lbl_8021BD18
    lwz r6, 0x148(r31)
    li r4, 0x0
    lwz r0, 0x108(r31)
    mr r3, r31
    stw r4, 0x158(r31)
    li r4, 0x0
    mullw r5, r6, r0
    stw r6, 0x154(r31)
    bl UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl
lbl_8021BD18:
    lwz r3, 0x154(r31)
    lwz r4, 0x158(r31)
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_8021BE24
    lbz r0, 0x12b(r31)
    cmpwi r0, 0x0
    bne lbl_8021BE18
    lbz r0, 0x12c(r31)
    cmpwi r0, 0x0
    beq lbl_8021BE18
    addi r28, r31, 0xb78
    li r27, 0x0
    li r29, 0x0
    b lbl_8021BE0C
lbl_8021BD54:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8021BE04
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_8021BE04
    mr r3, r26
    bl GetFormat__Q44nw4r3snd6detail5VoiceCFv
    cmpwi r3, 0x3
    bne lbl_8021BE04
    bl OSDisableInterrupts
    mr r30, r3
    li r25, 0x0
    b lbl_8021BDE4
lbl_8021BD8C:
    cmpwi r25, 0x2
    blt lbl_8021BD9C
    li r3, 0x0
    b lbl_8021BDC0
lbl_8021BD9C:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_8021BDB4
    li r3, 0x0
    b lbl_8021BDC0
lbl_8021BDB4:
    mulli r0, r0, 0x34
    add r3, r31, r0
    addi r3, r3, 0x838
lbl_8021BDC0:
    lhz r0, 0x32(r3)
    mr r3, r26
    mr r4, r25
    addi r5, r1, 0x8
    sth r0, 0x8(r1)
    sth r29, 0xa(r1)
    sth r29, 0xc(r1)
    bl SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam
    addi r25, r25, 0x1
lbl_8021BDE4:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_8021BD8C
    mr r3, r26
    li r4, 0x1
    bl SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
    mr r3, r30
    bl OSRestoreInterrupts
lbl_8021BE04:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_8021BE0C:
    lwz r0, 0x82c(r31)
    cmpw r27, r0
    blt lbl_8021BD54
lbl_8021BE18:
    li r0, 0x0
    stb r0, 0x12c(r31)
    stb r0, 0x12b(r31)
lbl_8021BE24:
    lwz r3, 0x164(r31)
    lwz r4, 0x15c(r31)
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_8021BE48
    lwz r4, 0x158(r31)
    mr r3, r31
    addi r4, r4, 0x1
    bl UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl
lbl_8021BE48:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl
// ----------------------------------------------------------------------------
extern "C" asm void UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, 0xe4(r3)
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    beq lbl_8021BFA0
    lwz r0, 0x154(r3)
    addi r28, r4, 0x1
    cmpw r28, r0
    blt lbl_8021BE9C
    subf r28, r0, r28
lbl_8021BE9C:
    bl OSDisableInterrupts
    lwz r4, 0x108(r30)
    mr r29, r3
    lwz r5, 0x110(r30)
    mr r3, r30
    mullw r0, r31, r4
    mullw r4, r28, r4
    add r5, r5, r0
    bl UpdateLoopAddress__Q44nw4r3snd6detail10StrmPlayerFUlUl
    lwz r0, 0xe0(r30)
    cmpwi r0, 0x3
    bne lbl_8021BF94
    addi r28, r30, 0xb78
    li r27, 0x0
    b lbl_8021BF70
lbl_8021BED8:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8021BF68
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_8021BF68
    mr r3, r26
    bl GetFormat__Q44nw4r3snd6detail5VoiceCFv
    cmpwi r3, 0x3
    bne lbl_8021BF68
    mr r3, r26
    li r4, 0x0
    bl SetVoiceType__Q44nw4r3snd6detail5VoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
    li r25, 0x0
    b lbl_8021BF5C
lbl_8021BF14:
    cmpwi r25, 0x2
    blt lbl_8021BF24
    li r5, 0x0
    b lbl_8021BF48
lbl_8021BF24:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_8021BF3C
    li r5, 0x0
    b lbl_8021BF48
lbl_8021BF3C:
    mulli r0, r0, 0x34
    add r3, r30, r0
    addi r5, r3, 0x838
lbl_8021BF48:
    mr r3, r26
    mr r4, r25
    addi r5, r5, 0x2c
    bl SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam
    addi r25, r25, 0x1
lbl_8021BF5C:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_8021BF14
lbl_8021BF68:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_8021BF70:
    lwz r0, 0x82c(r30)
    cmpw r27, r0
    blt lbl_8021BED8
    lwz r3, 0x154(r30)
    subi r0, r3, 0x1
    cmpw r31, r0
    bne lbl_8021BF94
    li r0, 0x1
    stb r0, 0x12b(r30)
lbl_8021BF94:
    mr r3, r29
    bl OSRestoreInterrupts
    b lbl_8021BFA4
lbl_8021BFA0:
    bl SetLoopEndToZeroBuffer__Q44nw4r3snd6detail10StrmPlayerFi
lbl_8021BFA4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetLoopEndToZeroBuffer__Q44nw4r3snd6detail10StrmPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void SetLoopEndToZeroBuffer__Q44nw4r3snd6detail10StrmPlayerFi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r3
    mr r31, r4
    bl OSDisableInterrupts
    mr r29, r3
    addi r28, r30, 0xb78
    li r27, 0x0
    b lbl_8021C078
lbl_8021BFEC:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8021C070
    lwz r26, 0x4(r28)
    cmpwi r26, 0x0
    beq lbl_8021C070
    li r25, 0x0
    b lbl_8021C064
lbl_8021C00C:
    cmpwi r25, 0x2
    blt lbl_8021C01C
    li r5, 0x0
    b lbl_8021C040
lbl_8021C01C:
    add r3, r28, r25
    lbz r0, 0x10(r3)
    cmpwi r0, 0x10
    blt lbl_8021C034
    li r5, 0x0
    b lbl_8021C040
lbl_8021C034:
    mulli r0, r0, 0x34
    add r3, r30, r0
    addi r5, r3, 0x838
lbl_8021C040:
    lwz r0, 0x108(r30)
    mr r3, r26
    lwz r6, 0x110(r30)
    mr r4, r25
    mullw r0, r31, r0
    lwz r5, 0x0(r5)
    add r6, r6, r0
    bl StopAtPoint__Q44nw4r3snd6detail5VoiceFiPCvUl
    addi r25, r25, 0x1
lbl_8021C064:
    lwz r0, 0xc(r28)
    cmpw r25, r0
    blt lbl_8021C00C
lbl_8021C070:
    addi r28, r28, 0x38
    addi r27, r27, 0x1
lbl_8021C078:
    lwz r0, 0x82c(r30)
    cmpw r27, r0
    blt lbl_8021BFEC
    mr r3, r29
    bl OSRestoreInterrupts
    li r0, 0x1
    addi r11, r1, 0x30
    stb r0, 0x12d(r30)
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// UpdateLoadingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateLoadingBlockIndex__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r4, 0x168(r3)
    mr r29, r3
    lbz r0, 0x12e(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    stw r4, 0x168(r3)
    bne lbl_8021C2C0
    lwz r4, 0x100(r3)
    lwz r8, 0x150(r3)
    subi r0, r4, 0x1
    cmpw r8, r0
    bge lbl_8021C0F8
    lwz r31, 0x104(r3)
    b lbl_8021C0FC
lbl_8021C0F8:
    lwz r31, 0x114(r3)
lbl_8021C0FC:
    lwz r4, 0x104(r3)
    li r30, 0x0
    lwz r0, 0xe8(r3)
    lhz r7, 0xf0(r3)
    mullw r4, r4, r0
    lwz r0, 0x14c(r3)
    lwz r6, 0x830(r3)
    cmpwi r0, 0x0
    lwz r5, 0xfc(r3)
    add r0, r7, r4
    mullw r4, r31, r6
    mullw r0, r8, r0
    add r27, r7, r4
    add r26, r5, r0
    bne lbl_8021C148
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x3
    bne lbl_8021C148
    li r30, 0x1
lbl_8021C148:
    addi r3, r3, 0x1a0
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    bne lbl_8021C160
    li r28, 0x0
    b lbl_8021C1AC
lbl_8021C160:
    mr r28, r3
    beq lbl_8021C1AC
    li r5, 0x0
    lis r4, lbl_80362998@ha
    stw r5, 0x4(r3)
    addi r4, r4, lbl_80362998@l
    li r0, -0x1
    stw r5, 0x8(r3)
    stb r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    stb r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r5, 0x30(r3)
lbl_8021C1AC:
    stw r29, 0x10(r28)
    lwz r0, 0x828(r29)
    stw r0, 0x14(r28)
    stw r27, 0x18(r28)
    stw r26, 0x1c(r28)
    stw r31, 0x20(r28)
    lwz r0, 0x14c(r29)
    stw r0, 0x24(r28)
    stb r30, 0x28(r28)
    bl OSDisableInterrupts
    addi r0, r29, 0x198
    mr r30, r3
    stw r0, 0x8(r1)
    addi r3, r29, 0x194
    addi r4, r1, 0x8
    addi r5, r28, 0x2c
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    lbz r0, 0x122(r29)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_8021C204
    li r31, 0x2
lbl_8021C204:
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    mr r4, r28
    mr r5, r31
    bl AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority
    lwz r3, 0x150(r29)
    lwz r0, 0x164(r29)
    addi r3, r3, 0x1
    cmpw r3, r0
    stw r3, 0x150(r29)
    ble lbl_8021C258
    lbz r0, 0xe4(r29)
    cmpwi r0, 0x0
    beq lbl_8021C244
    lwz r0, 0x160(r29)
    stw r0, 0x150(r29)
    b lbl_8021C258
lbl_8021C244:
    li r0, 0x1
    mr r3, r30
    stb r0, 0x12e(r29)
    bl OSRestoreInterrupts
    b lbl_8021C2C0
lbl_8021C258:
    lwz r3, 0x14c(r29)
    lwz r0, 0x148(r29)
    addi r3, r3, 0x1
    cmpw r3, r0
    stw r3, 0x14c(r29)
    blt lbl_8021C2B8
    lwz r5, 0x164(r29)
    li r4, 0x0
    lwz r3, 0x150(r29)
    lwz r6, 0x144(r29)
    lwz r0, 0x160(r29)
    subf r3, r3, r5
    stw r4, 0x14c(r29)
    addi r4, r3, 0x1
    addi r7, r6, 0x1
    subf r3, r0, r5
    subf r4, r4, r7
    addi r3, r3, 0x1
    divw r0, r4, r3
    mullw r0, r0, r3
    subf. r0, r0, r4
    bne lbl_8021C2B4
    mr r6, r7
lbl_8021C2B4:
    stw r6, 0x148(r29)
lbl_8021C2B8:
    mr r3, r30
    bl OSRestoreInterrupts
lbl_8021C2C0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdatePauseStatus__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    bl OSDisableInterrupts
    lbz r0, 0x127(r27)
    mr r31, r3
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_8021C30C
    li r29, 0x1
lbl_8021C30C:
    lbz r0, 0x129(r27)
    cmpwi r0, 0x0
    beq lbl_8021C31C
    li r29, 0x1
lbl_8021C31C:
    lbz r0, 0x128(r27)
    cmplw r29, r0
    beq lbl_8021C36C
    mr r30, r27
    li r28, 0x0
    b lbl_8021C35C
lbl_8021C334:
    lbz r0, 0xb78(r30)
    cmpwi r0, 0x0
    beq lbl_8021C354
    lwz r3, 0xb7c(r30)
    cmpwi r3, 0x0
    beq lbl_8021C354
    mr r4, r29
    bl Pause__Q44nw4r3snd6detail5VoiceFb
lbl_8021C354:
    addi r30, r30, 0x38
    addi r28, r28, 0x1
lbl_8021C35C:
    lwz r0, 0x82c(r27)
    cmpw r28, r0
    blt lbl_8021C334
    stb r29, 0x128(r27)
lbl_8021C36C:
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// CalcStartOffset__Q44nw4r3snd6detail10StrmPlayerFPlPUlPl
// ----------------------------------------------------------------------------
extern "C" asm void CalcStartOffset__Q44nw4r3snd6detail10StrmPlayerFPlPUlPl() {
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
    stw r28, 0x10(r1)
    mr r28, r6
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    bne lbl_8021C3CC
    li r3, 0x0
    b lbl_8021C478
lbl_8021C3CC:
    lwz r0, 0x16c(r3)
    cmpwi r0, 0x0
    bne lbl_8021C3E0
    lwz r4, 0x170(r3)
    b lbl_8021C404
lbl_8021C3E0:
    cmpwi r0, 0x1
    bne lbl_8021C404
    lwz r7, 0x170(r3)
    li r6, 0x3e8
    lwz r0, 0xec(r3)
    li r5, 0x0
    mullw r4, r7, r0
    mulhw r3, r7, r0
    bl __div2i
lbl_8021C404:
    li r0, 0x0
    stw r0, 0x0(r28)
    lwz r3, 0xf8(r29)
    cmplw r4, r3
    blt lbl_8021C454
    lbz r0, 0xe4(r29)
    cmpwi r0, 0x0
    beq lbl_8021C44C
    lwz r5, 0xf4(r29)
    subf r4, r3, r4
    subf r0, r5, r3
    divw r3, r4, r0
    mullw r0, r3, r0
    addi r3, r3, 0x1
    stw r3, 0x0(r28)
    subf r0, r0, r4
    add r4, r5, r0
    b lbl_8021C454
lbl_8021C44C:
    li r3, 0x0
    b lbl_8021C478
lbl_8021C454:
    lwz r0, 0x108(r29)
    li r3, 0x1
    divw r0, r4, r0
    stw r0, 0x0(r30)
    lwz r5, 0x108(r29)
    divwu r0, r4, r5
    mullw r0, r0, r5
    subf r0, r0, r4
    stw r0, 0x0(r31)
lbl_8021C478:
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
// VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv
// ----------------------------------------------------------------------------
extern "C" asm void VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    cmpwi r29, 0x2
    mr r31, r3
    bge lbl_8021C4DC
    cmpwi r29, 0x0
    bge lbl_8021C4E8
    b lbl_8021C508
lbl_8021C4DC:
    cmpwi r29, 0x4
    bge lbl_8021C508
    b lbl_8021C4FC
lbl_8021C4E8:
    mr r3, r28
    bl Free__Q44nw4r3snd6detail5VoiceFv
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_8021C514
lbl_8021C4FC:
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_8021C514
lbl_8021C508:
    mr r3, r31
    bl OSRestoreInterrupts
    b lbl_8021C51C
lbl_8021C514:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_8021C51C:
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
// SetTrackVolume__Q44nw4r3snd6detail10StrmPlayerFUlf
// ----------------------------------------------------------------------------
extern "C" asm void SetTrackVolume__Q44nw4r3snd6detail10StrmPlayerFUlf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r4
    stw r30, 0x10(r1)
    mr r30, r3
    bl OSDisableInterrupts
    mr r4, r30
    li r5, 0x0
    b lbl_8021C588
lbl_8021C570:
    clrlwi. r0, r31, 31
    beq lbl_8021C57C
    stfs f31, 0xba8(r4)
lbl_8021C57C:
    srwi r31, r31, 1
    addi r4, r4, 0x38
    addi r5, r5, 0x1
lbl_8021C588:
    lwz r0, 0x82c(r30)
    cmpw r5, r0
    bge lbl_8021C59C
    cmpwi r31, 0x0
    bne lbl_8021C570
lbl_8021C59C:
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi() {
    nofralloc
    cmpwi r4, 0x7
    ble lbl_8021C5CC
    li r3, 0x0
    blr
lbl_8021C5CC:
    mulli r0, r4, 0x38
    add r3, r3, r0
    addi r3, r3, 0xb78
    blr
}

// ----------------------------------------------------------------------------
// Execute__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Execute__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x10(r3)
    lwz r4, 0x14(r31)
    lwz r5, 0x18(r31)
    lwz r6, 0x1c(r31)
    bl LoadHeader__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei
    cmpwi r3, 0x0
    bne lbl_8021C618
    lwz r3, 0x10(r31)
    li r0, 0x1
    stb r0, 0x124(r3)
lbl_8021C618:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Cancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Cancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// OnCancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void OnCancel__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x10(r3)
    stb r0, 0x125(r4)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_8021C6C4
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8021C6C4
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8021C6B0
    lwz r3, 0x14(r31)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    b lbl_8021C6C4
lbl_8021C6B0:
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
lbl_8021C6C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv() {
    nofralloc
    lis r4, lbl_80362998@ha
    li r5, 0x0
    addi r4, r4, lbl_80362998@l
    li r0, -0x1
    stw r5, 0x4(r3)
    stw r5, 0x8(r3)
    stb r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r5, 0x10(r3)
    stw r5, 0x14(r3)
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    stb r5, 0x28(r3)
    stw r5, 0x2c(r3)
    stw r5, 0x30(r3)
    blr
}

// ----------------------------------------------------------------------------
// Execute__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Execute__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x10(r3)
    lwz r4, 0x14(r29)
    lwz r5, 0x1c(r29)
    lwz r6, 0x18(r29)
    lwz r7, 0x20(r29)
    lwz r8, 0x24(r29)
    lbz r9, 0x28(r29)
    bl LoadStreamData__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamiUlUlib
    cmpwi r3, 0x0
    bne lbl_8021C770
    lwz r3, 0x10(r29)
    li r0, 0x1
    stb r0, 0x124(r3)
lbl_8021C770:
    bl OSDisableInterrupts
    lwz r5, 0x10(r29)
    mr r31, r3
    addi r4, r29, 0x2c
    addi r3, r5, 0x194
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r3, 0x10(r29)
    cmpwi r29, 0x0
    addi r30, r3, 0x1a0
    beq lbl_8021C7BC
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8021C7BC:
    lwz r5, 0x10(r29)
    mr r3, r31
    lwz r4, 0x168(r5)
    subi r0, r4, 0x1
    stw r0, 0x168(r5)
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
// Cancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Cancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r5, 0x10(r29)
    mr r31, r3
    addi r4, r29, 0x2c
    addi r3, r5, 0x194
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r3, 0x10(r29)
    cmpwi r29, 0x0
    addi r30, r3, 0x1a0
    beq lbl_8021C858
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8021C858:
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
// OnCancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void OnCancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x10(r3)
    stb r0, 0x125(r4)
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_8021C910
    lwz r12, 0x0(r3)
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8021C910
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8021C8FC
    lwz r3, 0x14(r31)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    b lbl_8021C910
lbl_8021C8FC:
    lwz r3, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
lbl_8021C910:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OnUpdateFrameSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdateFrameSoundThread__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    b Update__Q44nw4r3snd6detail10StrmPlayerFv
}

// ----------------------------------------------------------------------------
// OnUpdateVoiceSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdateVoiceSoundThread__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    b UpdateBuffer__Q44nw4r3snd6detail10StrmPlayerFv
}

// ----------------------------------------------------------------------------
// OnShutdownSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnShutdownSoundThread__Q44nw4r3snd6detail10StrmPlayerFv() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// IsPause__Q44nw4r3snd6detail10StrmPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPause__Q44nw4r3snd6detail10StrmPlayerCFv() {
    nofralloc
    lbz r3, 0x127(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsStarted__Q44nw4r3snd6detail10StrmPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsStarted__Q44nw4r3snd6detail10StrmPlayerCFv() {
    nofralloc
    lbz r3, 0x122(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsActive__Q44nw4r3snd6detail10StrmPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsActive__Q44nw4r3snd6detail10StrmPlayerCFv() {
    nofralloc
    lbz r3, 0x121(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8021C954
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021C954() {
    nofralloc
    subi r3, r3, 0xd4
    b OnShutdownSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
}

// ----------------------------------------------------------------------------
// fn_8021C95C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021C95C() {
    nofralloc
    subi r3, r3, 0xd4
    b OnUpdateVoiceSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
}

// ----------------------------------------------------------------------------
// fn_8021C964
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021C964() {
    nofralloc
    subi r3, r3, 0xd4
    b OnUpdateFrameSoundThread__Q44nw4r3snd6detail10StrmPlayerFv
}

// ----------------------------------------------------------------------------
// fn_8021C96C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021C96C() {
    nofralloc
    subi r3, r3, 0xd4
    b __dt__Q44nw4r3snd6detail10StrmPlayerFv
}

