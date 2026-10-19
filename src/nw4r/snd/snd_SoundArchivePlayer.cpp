#include "types.h"

// Translation unit: src/nw4r/snd/snd_SoundArchivePlayer.cpp
// Total functions: 35

// Small Data symbols (@sda21)
extern "C" float lbl_804A21C8;
extern "C" float lbl_804A21D0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362778[];
extern "C" u8 lbl_80362798[];
extern "C" u8 lbl_803628A8[];
extern "C" u8 lbl_803628D8[];
extern "C" u8 lbl_803628E8[];

// Forward declarations
extern "C" void AllocImpl__Q44nw4r3snd6detail8PoolImplFv();
extern "C" void AttachSoundActor__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd10SoundActor();
extern "C" void CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl();
extern "C" void CreatePlayerHeap__Q34nw4r3snd18SoundArchivePlayerFPPvPvUl();
extern "C" void Create__Q44nw4r3snd6detail10PlayerHeapFPvUl();
extern "C" void Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl();
extern "C" void DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl();
extern "C" void Destroy__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator();
extern "C" void GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv();
extern "C" void GetFreeSize__Q44nw4r3snd6detail10PlayerHeapCFv();
extern "C" void GetGroupCount__Q34nw4r3snd12SoundArchiveCFv();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv();
extern "C" void GetPlayerCount__Q34nw4r3snd12SoundArchiveCFv();
extern "C" void GetRequiredMemSize__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchive();
extern "C" void GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl();
extern "C" void GetSoundType__Q34nw4r3snd12SoundArchiveCFUl();
extern "C" void GetSoundUserParam__Q34nw4r3snd12SoundArchiveCFUl();
extern "C" void GetWaveSoundData__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackCFPQ44nw4r3snd6detail13WaveSoundInfoPQ44nw4r3snd6detail17WaveSoundNoteInfoPQ44nw4r3snd6detail8WaveInfoPCviiUl();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void InvalidateData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv();
extern "C" void InvalidateWaveData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv();
extern "C" void IsAvailable__Q34nw4r3snd12SoundArchiveCFv();
extern "C" void LoadGroup__Q44nw4r3snd6detail18SoundArchiveLoaderFUlPQ34nw4r3snd22SoundMemoryAllocatablePPvUl();
extern "C" void NoteOn__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFPQ44nw4r3snd6detail9SeqPlayeriRCQ44nw4r3snd6detail10NoteOnInfo();
extern "C" void NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl();
extern "C" void PrepareSeqImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail8SeqSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive12SeqSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypeiPCvPCc();
extern "C" void PrepareStrmImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9StrmSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13StrmSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei();
extern "C" void PrepareWaveSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9WaveSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13WaveSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei();
extern "C" void Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void Prepare__Q44nw4r3snd6detail9StrmSoundFQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypelPQ34nw4r2ut10FileStream();
extern "C" void Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl();
extern "C" void ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo();
extern "C" void ReadSeqSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo();
extern "C" void ReadSoundArchivePlayerInfo__Q34nw4r3snd12SoundArchiveCFPQ44nw4r3snd12SoundArchive22SoundArchivePlayerInfo();
extern "C" void ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo();
extern "C" void ReadWaveInfo__Q44nw4r3snd6detail13WsdFileReaderCFiPQ44nw4r3snd6detail8WaveInfoPCv();
extern "C" void ReadWaveSoundInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail13WaveSoundInfoi();
extern "C" void ReadWaveSoundNoteInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail17WaveSoundNoteInfoii();
extern "C" void RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail8SeqSoundFi();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi();
extern "C" void SetId__Q44nw4r3snd6detail10BasicSoundFUl();
extern "C" void SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf();
extern "C" void SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve();
extern "C" void SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode();
extern "C" void SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi();
extern "C" void SetPlayerPriority__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail8SeqSoundFb();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void SetSeqUserprocCallback__Q44nw4r3snd6detail8SeqSoundFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv();
extern "C" void SetupMram__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUl();
extern "C" void SetupSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePPvPv();
extern "C" void Setup__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUlPvUl();
extern "C" void Setup__Q44nw4r3snd6detail14StrmBufferPoolFPvUli();
extern "C" void Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback();
extern "C" void Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs();
extern "C" void Shutdown__Q34nw4r3snd18SoundArchivePlayerFv();
extern "C" void Shutdown__Q44nw4r3snd6detail14StrmBufferPoolFv();
extern "C" void Stop__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void Update__Q34nw4r3snd11SoundPlayerFv();
extern "C" void Update__Q34nw4r3snd18SoundArchivePlayerFv();
extern "C" void __construct_array();
extern "C" void __ct__Q34nw4r3snd11SoundPlayerFv();
extern "C" void __ct__Q34nw4r3snd18SoundArchivePlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail10PlayerHeapFv();
extern "C" void __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv();
extern "C" void __ct__Q44nw4r3snd6detail13WsdFileReaderFPCv();
extern "C" void __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive();
extern "C" void __ct__Q44nw4r3snd6detail4BankFPCv();
extern "C" void __destroy_arr();
extern "C" void __dt__Q34nw4r3snd11SoundPlayerFv();
extern "C" void __dt__Q34nw4r3snd18SoundArchivePlayerFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackFv();
extern "C" void __dt__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFv();
extern "C" void __dt__Q44nw4r3snd6detail18SoundArchiveLoaderFv();
extern "C" void __dt__Q44nw4r3snd6detail4BankFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void detail_AllocPlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_AppendPlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10PlayerHeap();
extern "C" void detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi();
extern "C" void detail_ConvertLabelStringToSoundId__Q34nw4r3snd18SoundArchivePlayerFPCc();
extern "C" void detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl();
extern "C" void detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv();
extern "C" void detail_GetFileWaveDataAddress__Q34nw4r3snd18SoundArchivePlayerCFUl();
extern "C" void detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi();
extern "C" void detail_ReadFileInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8FileInfo();
extern "C" void detail_ReadGroupInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9GroupInfo();
extern "C" void detail_ReadGroupItemInfo__Q34nw4r3snd12SoundArchiveCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo();
extern "C" void detail_ReadStrmSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo();
extern "C" void detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo();
extern "C" void detail_SetPlayableSoundLimit__Q34nw4r3snd11SoundPlayerFi();
extern "C" void detail_SetupSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlPQ54nw4r3snd6detail10BasicSound11AmbientInfoPQ34nw4r3snd10SoundActorbPCQ44nw4r3snd14SoundStartable9StartInfo();
extern "C" void detail_SetupSound__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlbPCQ44nw4r3snd14SoundStartable9StartInfo();
extern "C" void dtor_80136CFC();
extern "C" void fn_80209F5C();
extern "C" void fn_8020C190();
extern "C" void fn_8020C378();
extern "C" void fn_80211B50();
extern "C" void fn_802154C4();
extern "C" void fn_802154E4();
extern "C" void fn_8021553C();
extern "C" void fn_8021555C();
extern "C" void fn_802155B4();
extern "C" void fn_802155D4();
extern "C" void fn_802156E4();
extern "C" void fn_80215A80();
extern "C" void fn_8021779C();
extern "C" void fn_80217C70();
extern "C" void fn_80217C78();
extern "C" void fn_80217C80();
extern "C" void fn_80217C88();
extern "C" void fn_80217CD4();
extern "C" void fn_80218D4C();
extern "C" void fn_8021C974();
extern "C" void fn_80221374();

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3snd18SoundArchivePlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3snd18SoundArchivePlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_803628A8@ha
    lis r5, lbl_803628E8@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_803628A8@l
    lis r4, lbl_803628D8@ha
    addi r7, r3, 0x4c
    stw r31, 0xc(r1)
    li r31, 0x0
    addi r0, r6, 0x14
    addi r5, r5, lbl_803628E8@l
    stw r30, 0x8(r1)
    addi r4, r4, lbl_803628D8@l
    mr r30, r3
    stw r31, 0x4c(r3)
    stw r31, 0x50(r3)
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    stw r31, 0x10(r3)
    stw r31, 0x14(r3)
    stw r31, 0x18(r3)
    stw r31, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r3, 0x24(r3)
    stw r4, 0x28(r3)
    stw r3, 0x2c(r3)
    stw r31, 0x34(r3)
    stw r31, 0x38(r3)
    stw r31, 0x3c(r3)
    stw r31, 0x40(r3)
    stw r31, 0x44(r3)
    stw r31, 0x48(r3)
    stw r7, 0x4c(r3)
    stw r7, 0x50(r3)
    addi r3, r3, 0x54
    bl OSInitMutex
    stw r31, 0x74(r30)
    addi r4, r30, 0x74
    addi r3, r30, 0x7c
    stw r31, 0x78(r30)
    stw r31, 0x6c(r30)
    stw r31, 0x70(r30)
    stw r4, 0x74(r30)
    stw r4, 0x78(r30)
    bl OSInitMutex
    stw r31, 0x9c(r30)
    addi r4, r30, 0x9c
    addi r3, r30, 0xa4
    stw r31, 0xa0(r30)
    stw r31, 0x94(r30)
    stw r31, 0x98(r30)
    stw r4, 0x9c(r30)
    stw r4, 0xa0(r30)
    bl OSInitMutex
    lis r4, lbl_80362798@ha
    lis r3, lbl_80362778@ha
    addi r4, r4, lbl_80362798@l
    addi r0, r30, 0xe0
    addi r3, r3, lbl_80362778@l
    stw r4, 0xbc(r30)
    stw r0, 0xc0(r30)
    stw r31, 0xc4(r30)
    stw r3, 0xe0(r30)
    stw r31, 0xe4(r30)
    stw r31, 0xe8(r30)
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_8021546C
    cmpwi r4, 0x0
    ble lbl_8021546C
    bl dtor_80136CFC
lbl_8021546C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802154AC
    cmpwi r4, 0x0
    ble lbl_802154AC
    bl dtor_80136CFC
lbl_802154AC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802154C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802154C4() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802154E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802154E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80215520
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r31, 0x0
    ble lbl_80215520
    mr r3, r30
    bl dtor_80136CFC
lbl_80215520:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8021553C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021553C() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8021555C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021555C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80215598
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r31, 0x0
    ble lbl_80215598
    mr r3, r30
    bl dtor_80136CFC
lbl_80215598:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802155B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802155B4() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802155D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802155D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80215610
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r31, 0x0
    ble lbl_80215610
    mr r3, r30
    bl dtor_80136CFC
lbl_80215610:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3snd18SoundArchivePlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3snd18SoundArchivePlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802156C8
    lis r4, lbl_803628A8@ha
    addi r4, r4, lbl_803628A8@l
    addi r0, r4, 0x14
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    addic. r0, r30, 0x94
    beq lbl_80215688
    addic. r3, r30, 0x98
    beq lbl_80215688
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_80215688:
    addic. r0, r30, 0x6c
    beq lbl_802156A0
    addic. r3, r30, 0x70
    beq lbl_802156A0
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_802156A0:
    addic. r0, r30, 0x44
    beq lbl_802156B8
    addic. r3, r30, 0x48
    beq lbl_802156B8
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_802156B8:
    cmpwi r31, 0x0
    ble lbl_802156C8
    mr r3, r30
    bl dtor_80136CFC
lbl_802156C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802156E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802156E4() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_802156F8
    li r3, 0x0
    blr
lbl_802156F8:
    b IsAvailable__Q34nw4r3snd12SoundArchiveCFv
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUlPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUlPvUl() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r31, r6
    mr r29, r7
    mr r30, r8
    bl fn_80218D4C
    cmpwi r3, 0x0
    bne lbl_80215740
    li r3, 0x0
    b lbl_802157EC
lbl_80215740:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r31
    bl SetupMram__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUl
    cmpwi r3, 0x0
    bne lbl_80215764
    li r3, 0x0
    b lbl_802157EC
lbl_80215764:
    mr r3, r27
    addi r4, r1, 0x24
    li r31, 0x0
    bl ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
    cmpwi r3, 0x0
    beq lbl_80215780
    lwz r31, 0x34(r1)
lbl_80215780:
    lis r3, 0x1
    subi r0, r3, 0x6000
    mullw r0, r31, r0
    cmplw r30, r0
    bge lbl_8021579C
    li r0, 0x0
    b lbl_802157D0
lbl_8021579C:
    mr r3, r27
    addi r4, r1, 0x8
    li r31, 0x0
    bl ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
    cmpwi r3, 0x0
    beq lbl_802157B8
    lwz r31, 0x18(r1)
lbl_802157B8:
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r26, 0xc8
    bl Setup__Q44nw4r3snd6detail14StrmBufferPoolFPvUli
    li r0, 0x1
lbl_802157D0:
    cmpwi r0, 0x0
    bne lbl_802157E0
    li r3, 0x0
    b lbl_802157EC
lbl_802157E0:
    addi r0, r26, 0xbc
    li r3, 0x1
    stw r0, 0x30(r26)
lbl_802157EC:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q34nw4r3snd18SoundArchivePlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q34nw4r3snd18SoundArchivePlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r0, 0x0
    mr r27, r3
    stw r0, 0x10(r3)
    li r29, 0x0
    li r28, 0x0
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x30(r3)
    b lbl_80215858
lbl_80215840:
    lwz r0, 0x40(r27)
    li r4, -0x1
    add r3, r0, r28
    bl __dt__Q34nw4r3snd11SoundPlayerFv
    addi r28, r28, 0x64
    addi r29, r29, 0x1
lbl_80215858:
    lwz r0, 0x3c(r27)
    cmplw r29, r0
    blt lbl_80215840
    li r30, 0x0
    addi r3, r27, 0xc8
    stw r30, 0x3c(r27)
    stw r30, 0x40(r27)
    bl Shutdown__Q44nw4r3snd6detail14StrmBufferPoolFv
    lwz r28, 0xe4(r27)
    cmpwi r28, 0x0
    beq lbl_8021591C
    addi r31, r27, 0x54
    lwz r29, 0xe8(r27)
    mr r3, r31
    bl OSLockMutex
    mr r4, r28
    mr r5, r29
    addi r3, r27, 0x44
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    mr r3, r31
    bl OSUnlockMutex
    addi r31, r27, 0x7c
    lwz r28, 0xe8(r27)
    lwz r29, 0xe4(r27)
    mr r3, r31
    bl OSLockMutex
    mr r4, r29
    mr r5, r28
    addi r3, r27, 0x6c
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    mr r3, r31
    bl OSUnlockMutex
    addi r31, r27, 0xa4
    lwz r29, 0xe8(r27)
    lwz r28, 0xe4(r27)
    mr r3, r31
    bl OSLockMutex
    mr r4, r28
    mr r5, r29
    addi r3, r27, 0x94
    bl DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
    mr r3, r31
    bl OSUnlockMutex
    lwz r4, 0xe4(r27)
    addi r3, r27, 0xbc
    lwz r5, 0xe8(r27)
    bl Destroy__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
    stw r30, 0xe4(r27)
    stw r30, 0xe8(r27)
lbl_8021591C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetRequiredMemSize__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchive
// ----------------------------------------------------------------------------
extern "C" asm void GetRequiredMemSize__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchive() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    mr r3, r30
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    bl GetPlayerCount__Q34nw4r3snd12SoundArchiveCFv
    mulli r4, r3, 0x64
    mr r29, r3
    li r28, 0x0
    addi r0, r4, 0x3
    clrrwi r31, r0, 2
    b lbl_802159C4
lbl_80215974:
    mr r3, r30
    mr r4, r28
    addi r5, r1, 0x8
    bl detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
    cmpwi r3, 0x0
    beq lbl_802159C0
    lwz r3, 0xc(r1)
    lwz r5, 0x8(r1)
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_802159C0
lbl_802159A8:
    cmpwi r3, 0x0
    beq lbl_802159BC
    addi r0, r31, 0x3f
    clrrwi r31, r0, 5
    add r31, r31, r4
lbl_802159BC:
    bdnz lbl_802159A8
lbl_802159C0:
    addi r28, r28, 0x1
lbl_802159C4:
    cmplw r28, r29
    blt lbl_80215974
    mr r3, r30
    bl GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
    slwi r4, r3, 3
    mr r3, r30
    addi r0, r4, 0x7
    clrrwi r0, r0, 2
    addi r4, r1, 0x10
    add r31, r31, r0
    bl ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
    cmpwi r3, 0x0
    beq lbl_80215A48
    lwz r0, 0x10(r1)
    lwz r4, 0x18(r1)
    mulli r6, r0, 0x4d0
    lwz r3, 0x24(r1)
    lwz r0, 0x14(r1)
    mulli r5, r4, 0x10d0
    addi r6, r6, 0x3
    mulli r4, r3, 0x250
    clrrwi r3, r6, 2
    addi r5, r5, 0x3
    add r31, r31, r3
    mulli r3, r0, 0xcc
    clrrwi r5, r5, 2
    addi r0, r4, 0x3
    add r31, r31, r5
    clrrwi r4, r0, 2
    addi r0, r3, 0x3
    add r31, r31, r4
    clrrwi r0, r0, 2
    add r31, r31, r0
lbl_80215A48:
    mr r3, r30
    bl detail_ReadGroupItemInfo__Q34nw4r3snd12SoundArchiveCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo
    slwi r3, r3, 3
    addi r0, r3, 0x7
    clrrwi r0, r0, 2
    add r3, r31, r0
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80215A80
// ----------------------------------------------------------------------------
extern "C" asm void fn_80215A80() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x34(r1)
    addi r4, r1, 0x8
    stw r31, 0x2c(r1)
    li r31, 0x0
    bl ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
    cmpwi r3, 0x0
    beq lbl_80215AAC
    lwz r31, 0x18(r1)
lbl_80215AAC:
    lis r3, 0x1
    subi r0, r3, 0x6000
    mullw r3, r31, r0
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetupMram__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUl
// ----------------------------------------------------------------------------
extern "C" asm void SetupMram__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePvUl() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    stw r5, 0x8(r1)
    add r31, r5, r6
    mr r29, r5
    mr r30, r6
    mr r27, r3
    mr r28, r4
    mr r6, r31
    addi r5, r1, 0x8
    bl SetupSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePPvPv
    cmpwi r3, 0x0
    bne lbl_80215B14
    li r3, 0x0
    b lbl_80215DE4
lbl_80215B14:
    mr r3, r28
    bl GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
    slwi r3, r3, 3
    lwz r5, 0x8(r1)
    addi r0, r3, 0x4
    add r3, r0, r5
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    subf. r0, r31, r4
    ble lbl_80215B44
    li r0, 0x0
    b lbl_80215B9C
lbl_80215B44:
    stw r5, 0x14(r27)
    mr r3, r28
    stw r4, 0x8(r1)
    bl GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
    lwz r5, 0x14(r27)
    li r6, 0x0
    li r7, 0x0
    li r4, 0x0
    stw r3, 0x0(r5)
    b lbl_80215B88
lbl_80215B6C:
    add r3, r3, r7
    addi r6, r6, 0x1
    stw r4, 0x4(r3)
    lwz r0, 0x14(r27)
    add r3, r0, r7
    addi r7, r7, 0x8
    stw r4, 0x8(r3)
lbl_80215B88:
    lwz r3, 0x14(r27)
    lwz r0, 0x0(r3)
    cmplw r6, r0
    blt lbl_80215B6C
    li r0, 0x1
lbl_80215B9C:
    cmpwi r0, 0x0
    bne lbl_80215BAC
    li r3, 0x0
    b lbl_80215DE4
lbl_80215BAC:
    mr r3, r28
    bl detail_ReadGroupItemInfo__Q34nw4r3snd12SoundArchiveCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo
    slwi r3, r3, 3
    lwz r5, 0x8(r1)
    addi r0, r3, 0x4
    add r3, r0, r5
    addi r0, r3, 0x3
    clrrwi r4, r0, 2
    subf. r0, r31, r4
    ble lbl_80215BDC
    li r0, 0x0
    b lbl_80215C34
lbl_80215BDC:
    stw r5, 0x18(r27)
    mr r3, r28
    stw r4, 0x8(r1)
    bl detail_ReadGroupItemInfo__Q34nw4r3snd12SoundArchiveCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo
    lwz r5, 0x18(r27)
    li r6, 0x0
    li r7, 0x0
    li r4, 0x0
    stw r3, 0x0(r5)
    b lbl_80215C20
lbl_80215C04:
    add r3, r3, r7
    addi r6, r6, 0x1
    stw r4, 0x4(r3)
    lwz r0, 0x18(r27)
    add r3, r0, r7
    addi r7, r7, 0x8
    stw r4, 0x8(r3)
lbl_80215C20:
    lwz r3, 0x18(r27)
    lwz r0, 0x0(r3)
    cmplw r6, r0
    blt lbl_80215C04
    li r0, 0x1
lbl_80215C34:
    cmpwi r0, 0x0
    bne lbl_80215C44
    li r3, 0x0
    b lbl_80215DE4
lbl_80215C44:
    mr r3, r28
    addi r4, r1, 0xc
    bl ReadPlayerInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
    cmpwi r3, 0x0
    beq lbl_80215DD4
    lwz r0, 0xc(r1)
    lwz r23, 0x8(r1)
    mulli r25, r0, 0x4d0
    add r3, r25, r23
    addi r0, r3, 0x3
    clrrwi r24, r0, 2
    subf. r0, r31, r24
    ble lbl_80215C80
    li r0, 0x0
    b lbl_80215CB0
lbl_80215C80:
    addi r26, r27, 0x54
    mr r3, r26
    bl OSLockMutex
    mr r4, r23
    mr r5, r25
    addi r3, r27, 0x44
    li r6, 0x4d0
    bl CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
    mr r3, r26
    bl OSUnlockMutex
    stw r24, 0x8(r1)
    li r0, 0x1
lbl_80215CB0:
    cmpwi r0, 0x0
    bne lbl_80215CC0
    li r3, 0x0
    b lbl_80215DE4
lbl_80215CC0:
    lwz r0, 0x14(r1)
    lwz r23, 0x8(r1)
    mulli r25, r0, 0x10d0
    add r3, r25, r23
    addi r0, r3, 0x3
    clrrwi r24, r0, 2
    subf. r0, r31, r24
    ble lbl_80215CE8
    li r0, 0x0
    b lbl_80215D18
lbl_80215CE8:
    addi r26, r27, 0x7c
    mr r3, r26
    bl OSLockMutex
    mr r4, r23
    mr r5, r25
    addi r3, r27, 0x6c
    li r6, 0x10d0
    bl CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
    mr r3, r26
    bl OSUnlockMutex
    stw r24, 0x8(r1)
    li r0, 0x1
lbl_80215D18:
    cmpwi r0, 0x0
    bne lbl_80215D28
    li r3, 0x0
    b lbl_80215DE4
lbl_80215D28:
    lwz r0, 0x20(r1)
    lwz r23, 0x8(r1)
    mulli r25, r0, 0x250
    add r3, r25, r23
    addi r0, r3, 0x3
    clrrwi r24, r0, 2
    subf. r0, r31, r24
    ble lbl_80215D50
    li r0, 0x0
    b lbl_80215D80
lbl_80215D50:
    addi r26, r27, 0xa4
    mr r3, r26
    bl OSLockMutex
    mr r4, r23
    mr r5, r25
    addi r3, r27, 0x94
    li r6, 0x250
    bl CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
    mr r3, r26
    bl OSUnlockMutex
    stw r24, 0x8(r1)
    li r0, 0x1
lbl_80215D80:
    cmpwi r0, 0x0
    bne lbl_80215D90
    li r3, 0x0
    b lbl_80215DE4
lbl_80215D90:
    lwz r0, 0x10(r1)
    lwz r4, 0x8(r1)
    mulli r5, r0, 0xcc
    add r3, r5, r4
    addi r0, r3, 0x3
    clrrwi r0, r0, 2
    subf. r0, r31, r0
    ble lbl_80215DB8
    li r0, 0x0
    b lbl_80215DC4
lbl_80215DB8:
    addi r3, r27, 0xbc
    bl Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
    li r0, 0x1
lbl_80215DC4:
    cmpwi r0, 0x0
    bne lbl_80215DD4
    li r3, 0x0
    b lbl_80215DE4
lbl_80215DD4:
    stw r28, 0x10(r27)
    li r3, 0x1
    stw r29, 0xe4(r27)
    stw r30, 0xe8(r27)
lbl_80215DE4:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// CreatePlayerHeap__Q34nw4r3snd18SoundArchivePlayerFPPvPvUl
// ----------------------------------------------------------------------------
extern "C" asm void CreatePlayerHeap__Q34nw4r3snd18SoundArchivePlayerFPPvPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r31, 0x0(r4)
    addi r0, r31, 0x23
    clrrwi r3, r0, 2
    subf. r0, r5, r3
    ble lbl_80215E40
    li r3, 0x0
    b lbl_80215EA8
lbl_80215E40:
    cmpwi r31, 0x0
    stw r3, 0x0(r4)
    beq lbl_80215E58
    mr r3, r31
    bl __ct__Q44nw4r3snd6detail10PlayerHeapFv
    mr r31, r3
lbl_80215E58:
    lwz r3, 0x0(r28)
    addi r0, r3, 0x1f
    clrrwi r4, r0, 5
    add r3, r30, r4
    stw r4, 0x0(r28)
    addi r0, r3, 0x3
    clrrwi r3, r0, 2
    subf. r0, r29, r3
    ble lbl_80215E84
    li r3, 0x0
    b lbl_80215EA8
lbl_80215E84:
    stw r3, 0x0(r28)
    mr r3, r31
    mr r5, r30
    bl Create__Q44nw4r3snd6detail10PlayerHeapFPvUl
    cmpwi r3, 0x0
    beq lbl_80215EA4
    mr r3, r31
    b lbl_80215EA8
lbl_80215EA4:
    li r3, 0x0
lbl_80215EA8:
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
// SetupSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePPvPv
// ----------------------------------------------------------------------------
extern "C" asm void SetupSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFPCQ34nw4r3snd12SoundArchivePPvPv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r24, r4
    mr r23, r3
    mr r25, r5
    mr r26, r6
    mr r3, r24
    bl GetPlayerCount__Q34nw4r3snd12SoundArchiveCFv
    mulli r0, r3, 0x64
    lwz r30, 0x0(r25)
    mr r31, r3
    add r4, r0, r30
    addi r0, r4, 0x3
    clrrwi r4, r0, 2
    subf. r0, r26, r4
    ble lbl_80215F1C
    li r3, 0x0
    b lbl_80215FDC
lbl_80215F1C:
    stw r4, 0x0(r25)
    li r29, 0x0
    stw r30, 0x40(r23)
    stw r3, 0x3c(r23)
    b lbl_80215FD0
lbl_80215F30:
    cmpwi r30, 0x0
    mr r28, r30
    beq lbl_80215F48
    mr r3, r30
    bl __ct__Q34nw4r3snd11SoundPlayerFv
    mr r28, r3
lbl_80215F48:
    mr r3, r24
    mr r4, r29
    addi r5, r1, 0x8
    bl detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
    cmpwi r3, 0x0
    beq lbl_80215FC8
    lwz r4, 0x8(r1)
    mr r3, r28
    bl SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_80215FC8
    li r27, 0x0
    b lbl_80215FB4
lbl_80215F80:
    lwz r6, 0xc(r1)
    mr r3, r23
    mr r4, r25
    mr r5, r26
    bl CreatePlayerHeap__Q34nw4r3snd18SoundArchivePlayerFPPvPvUl
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_80215FA8
    li r3, 0x0
    b lbl_80215FDC
lbl_80215FA8:
    mr r3, r28
    bl detail_AppendPlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10PlayerHeap
    addi r27, r27, 0x1
lbl_80215FB4:
    lwz r4, 0x8(r1)
    cmpw r27, r4
    blt lbl_80215F80
    mr r3, r28
    bl detail_SetPlayableSoundLimit__Q34nw4r3snd11SoundPlayerFi
lbl_80215FC8:
    addi r29, r29, 0x1
    addi r30, r30, 0x64
lbl_80215FD0:
    cmplw r29, r31
    blt lbl_80215F30
    li r3, 0x1
lbl_80215FDC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Update__Q34nw4r3snd18SoundArchivePlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q34nw4r3snd18SoundArchivePlayerFv() {
    nofralloc
    stwu r1, -0x1250(r1)
    mflr r0
    stw r0, 0x1254(r1)
    addi r11, r1, 0x1250
    bl _savegpr_26
    mr r31, r3
    li r26, 0x0
    li r27, 0x0
    b lbl_8021602C
lbl_80216018:
    lwz r0, 0x40(r31)
    add r3, r0, r27
    bl Update__Q34nw4r3snd11SoundPlayerFv
    addi r27, r27, 0x64
    addi r26, r26, 0x1
lbl_8021602C:
    lwz r0, 0x3c(r31)
    cmplw r26, r0
    blt lbl_80216018
    lwz r0, 0x48(r31)
    cmplwi r0, 0x2
    blt lbl_80216158
    addi r29, r31, 0x54
    mr r3, r29
    bl OSLockMutex
    lis r4, fn_802154C4@ha
    lis r5, fn_802154E4@ha
    addi r3, r1, 0xc38
    li r6, 0xc
    addi r4, r4, fn_802154C4@l
    addi r5, r5, fn_802154E4@l
    li r7, 0x80
    bl __construct_array
    b lbl_802160CC
lbl_80216074:
    lwz r27, 0x4c(r31)
    addi r3, r31, 0x48
    addi r4, r1, 0x28
    stw r27, 0x28(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    lbz r3, -0x58(r27)
    lwz r0, -0x9c(r27)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_802160A4
    li r0, 0x7f
    b lbl_802160AC
lbl_802160A4:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_802160AC:
    mulli r0, r0, 0xc
    addi r3, r1, 0xc38
    mr r5, r27
    addi r4, r1, 0x2c
    add r3, r3, r0
    addi r0, r3, 0x4
    stw r0, 0x2c(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_802160CC:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_80216074
    addi r27, r1, 0xc38
    addi r30, r31, 0x4c
    li r28, 0x0
lbl_802160E4:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_80216128
    b lbl_8021611C
lbl_802160F4:
    lwz r26, 0x4(r27)
    mr r3, r27
    addi r4, r1, 0x30
    stw r26, 0x30(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    stw r30, 0x34(r1)
    mr r5, r26
    addi r3, r31, 0x48
    addi r4, r1, 0x34
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8021611C:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_802160F4
lbl_80216128:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x80
    blt lbl_802160E4
    lis r4, fn_802154E4@ha
    addi r3, r1, 0xc38
    addi r4, r4, fn_802154E4@l
    li r5, 0xc
    li r6, 0x80
    bl __destroy_arr
    mr r3, r29
    bl OSUnlockMutex
lbl_80216158:
    lwz r0, 0x70(r31)
    cmplwi r0, 0x2
    blt lbl_80216278
    addi r29, r31, 0x7c
    mr r3, r29
    bl OSLockMutex
    lis r4, fn_8021553C@ha
    lis r5, fn_8021555C@ha
    addi r3, r1, 0x638
    li r6, 0xc
    addi r4, r4, fn_8021553C@l
    addi r5, r5, fn_8021555C@l
    li r7, 0x80
    bl __construct_array
    b lbl_802161EC
lbl_80216194:
    lwz r26, 0x74(r31)
    addi r3, r31, 0x70
    addi r4, r1, 0x18
    stw r26, 0x18(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    lbz r3, -0x58(r26)
    lwz r0, -0x9c(r26)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_802161C4
    li r0, 0x7f
    b lbl_802161CC
lbl_802161C4:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_802161CC:
    mulli r0, r0, 0xc
    addi r3, r1, 0x638
    mr r5, r26
    addi r4, r1, 0x1c
    add r3, r3, r0
    addi r0, r3, 0x4
    stw r0, 0x1c(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_802161EC:
    lwz r0, 0x70(r31)
    cmpwi r0, 0x0
    bne lbl_80216194
    addi r27, r1, 0x638
    addi r30, r31, 0x74
    li r28, 0x0
lbl_80216204:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_80216248
    b lbl_8021623C
lbl_80216214:
    lwz r26, 0x4(r27)
    mr r3, r27
    addi r4, r1, 0x20
    stw r26, 0x20(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    stw r30, 0x24(r1)
    mr r5, r26
    addi r3, r31, 0x70
    addi r4, r1, 0x24
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8021623C:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_80216214
lbl_80216248:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x80
    blt lbl_80216204
    lis r4, fn_8021555C@ha
    addi r3, r1, 0x638
    addi r4, r4, fn_8021555C@l
    li r5, 0xc
    li r6, 0x80
    bl __destroy_arr
    mr r3, r29
    bl OSUnlockMutex
lbl_80216278:
    lwz r0, 0x98(r31)
    cmplwi r0, 0x2
    blt lbl_80216398
    addi r29, r31, 0xa4
    mr r3, r29
    bl OSLockMutex
    lis r4, fn_802155B4@ha
    lis r5, fn_802155D4@ha
    addi r3, r1, 0x38
    li r6, 0xc
    addi r4, r4, fn_802155B4@l
    addi r5, r5, fn_802155D4@l
    li r7, 0x80
    bl __construct_array
    b lbl_8021630C
lbl_802162B4:
    lwz r26, 0x9c(r31)
    addi r3, r31, 0x98
    addi r4, r1, 0x8
    stw r26, 0x8(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    lbz r3, -0x58(r26)
    lwz r0, -0x9c(r26)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_802162E4
    li r0, 0x7f
    b lbl_802162EC
lbl_802162E4:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_802162EC:
    mulli r0, r0, 0xc
    addi r3, r1, 0x38
    mr r5, r26
    addi r4, r1, 0xc
    add r3, r3, r0
    addi r0, r3, 0x4
    stw r0, 0xc(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8021630C:
    lwz r0, 0x98(r31)
    cmpwi r0, 0x0
    bne lbl_802162B4
    addi r27, r1, 0x38
    addi r30, r31, 0x9c
    li r28, 0x0
lbl_80216324:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    beq lbl_80216368
    b lbl_8021635C
lbl_80216334:
    lwz r26, 0x4(r27)
    mr r3, r27
    addi r4, r1, 0x10
    stw r26, 0x10(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    stw r30, 0x14(r1)
    mr r5, r26
    addi r3, r31, 0x98
    addi r4, r1, 0x14
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8021635C:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_80216334
lbl_80216368:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x80
    blt lbl_80216324
    lis r4, fn_802155D4@ha
    addi r3, r1, 0x38
    addi r4, r4, fn_802155D4@l
    li r5, 0xc
    li r6, 0x80
    bl __destroy_arr
    mr r3, r29
    bl OSUnlockMutex
lbl_80216398:
    addi r11, r1, 0x1250
    bl _restgpr_26
    lwz r0, 0x1254(r1)
    mtlr r0
    addi r1, r1, 0x1250
    blr
}

// ----------------------------------------------------------------------------
// GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetSoundPlayer__Q34nw4r3snd18SoundArchivePlayerFUl() {
    nofralloc
    mulli r0, r4, 0x64
    lwz r3, 0x40(r3)
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
// ----------------------------------------------------------------------------
extern "C" asm void detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x1c(r3)
    stw r31, 0x4c(r1)
    cmpwi r0, 0x0
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    beq lbl_80216410
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80216410
    b lbl_80216530
lbl_80216410:
    lwz r3, 0x10(r28)
    mr r4, r29
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80216434
    b lbl_80216530
lbl_80216434:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    bne lbl_80216448
    li r3, 0x0
    b lbl_80216468
lbl_80216448:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_8021645C
    li r3, 0x0
    b lbl_80216468
lbl_8021645C:
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r3, 0x4(r3)
lbl_80216468:
    cmpwi r3, 0x0
    beq lbl_80216474
    b lbl_80216530
lbl_80216474:
    lwz r3, 0x10(r28)
    mr r4, r29
    addi r5, r1, 0x10
    bl detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv
    cmpwi r3, 0x0
    bne lbl_80216494
    li r3, 0x0
    b lbl_80216530
lbl_80216494:
    li r30, 0x0
    b lbl_80216520
lbl_8021649C:
    lwz r3, 0x10(r28)
    mr r4, r29
    mr r5, r30
    addi r6, r1, 0x8
    bl detail_ReadFileInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8FileInfo
    cmpwi r3, 0x0
    beq lbl_8021651C
    lwz r3, 0x14(r28)
    lwz r4, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_802164D0
    li r31, 0x0
    b lbl_802164F0
lbl_802164D0:
    lwz r0, 0x0(r3)
    cmplw r4, r0
    blt lbl_802164E4
    li r31, 0x0
    b lbl_802164F0
lbl_802164E4:
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r31, 0x4(r3)
lbl_802164F0:
    cmpwi r31, 0x0
    beq lbl_8021651C
    lwz r3, 0x10(r28)
    addi r6, r1, 0x20
    lwz r5, 0xc(r1)
    bl detail_ReadGroupInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
    cmpwi r3, 0x0
    beq lbl_8021651C
    lwz r0, 0x24(r1)
    add r3, r31, r0
    b lbl_80216530
lbl_8021651C:
    addi r30, r30, 0x1
lbl_80216520:
    lwz r0, 0x1c(r1)
    cmplw r30, r0
    blt lbl_8021649C
    li r3, 0x0
lbl_80216530:
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
// detail_GetFileWaveDataAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
// ----------------------------------------------------------------------------
extern "C" asm void detail_GetFileWaveDataAddress__Q34nw4r3snd18SoundArchivePlayerCFUl() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lwz r0, 0x1c(r3)
    stw r31, 0x4c(r1)
    cmpwi r0, 0x0
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    beq lbl_802165A0
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802165A0
    b lbl_802166C0
lbl_802165A0:
    lwz r3, 0x10(r28)
    mr r4, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802165C4
    b lbl_802166C0
lbl_802165C4:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    bne lbl_802165D8
    li r3, 0x0
    b lbl_802165F8
lbl_802165D8:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_802165EC
    li r3, 0x0
    b lbl_802165F8
lbl_802165EC:
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r3, 0x8(r3)
lbl_802165F8:
    cmpwi r3, 0x0
    beq lbl_80216604
    b lbl_802166C0
lbl_80216604:
    lwz r3, 0x10(r28)
    mr r4, r29
    addi r5, r1, 0x10
    bl detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv
    cmpwi r3, 0x0
    bne lbl_80216624
    li r3, 0x0
    b lbl_802166C0
lbl_80216624:
    li r30, 0x0
    b lbl_802166B0
lbl_8021662C:
    lwz r3, 0x10(r28)
    mr r4, r29
    mr r5, r30
    addi r6, r1, 0x8
    bl detail_ReadFileInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8FileInfo
    cmpwi r3, 0x0
    beq lbl_802166AC
    lwz r3, 0x14(r28)
    lwz r4, 0x8(r1)
    cmpwi r3, 0x0
    bne lbl_80216660
    li r31, 0x0
    b lbl_80216680
lbl_80216660:
    lwz r0, 0x0(r3)
    cmplw r4, r0
    blt lbl_80216674
    li r31, 0x0
    b lbl_80216680
lbl_80216674:
    slwi r0, r4, 3
    add r3, r3, r0
    lwz r31, 0x8(r3)
lbl_80216680:
    cmpwi r31, 0x0
    beq lbl_802166AC
    lwz r3, 0x10(r28)
    addi r6, r1, 0x20
    lwz r5, 0xc(r1)
    bl detail_ReadGroupInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
    cmpwi r3, 0x0
    beq lbl_802166AC
    lwz r0, 0x2c(r1)
    add r3, r31, r0
    b lbl_802166C0
lbl_802166AC:
    addi r30, r30, 0x1
lbl_802166B0:
    lwz r0, 0x1c(r1)
    cmplw r30, r0
    blt lbl_8021662C
    li r3, 0x0
lbl_802166C0:
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
// detail_SetupSound__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlbPCQ44nw4r3snd14SoundStartable9StartInfo
// ----------------------------------------------------------------------------
extern "C" asm void detail_SetupSound__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlbPCQ44nw4r3snd14SoundStartable9StartInfo() {
    nofralloc
    mr r8, r6
    mr r9, r7
    li r6, 0x0
    li r7, 0x0
    b detail_SetupSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlPQ54nw4r3snd6detail10BasicSound11AmbientInfoPQ34nw4r3snd10SoundActorbPCQ44nw4r3snd14SoundStartable9StartInfo
}

// ----------------------------------------------------------------------------
// detail_SetupSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlPQ54nw4r3snd6detail10BasicSound11AmbientInfoPQ34nw4r3snd10SoundActorbPCQ44nw4r3snd14SoundStartable9StartInfo
// ----------------------------------------------------------------------------
extern "C" asm void detail_SetupSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlPQ54nw4r3snd6detail10BasicSound11AmbientInfoPQ34nw4r3snd10SoundActorbPCQ44nw4r3snd14SoundStartable9StartInfo() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_14
    lwz r0, 0x10(r3)
    mr r18, r3
    stb r8, 0x8(r1)
    mr r19, r4
    cmpwi r0, 0x0
    mr r20, r5
    mr r21, r6
    mr r22, r7
    mr r15, r9
    bne lbl_80216738
    li r3, 0x0
    b lbl_80216740
lbl_80216738:
    mr r3, r0
    bl IsAvailable__Q34nw4r3snd12SoundArchiveCFv
lbl_80216740:
    cmpwi r3, 0x0
    bne lbl_80216750
    li r3, 0x7
    b lbl_8021711C
lbl_80216750:
    lwz r0, 0x0(r19)
    cmpwi r0, 0x0
    beq lbl_80216764
    mr r3, r19
    bl fn_80217CD4
lbl_80216764:
    lwz r3, 0x10(r18)
    mr r4, r20
    addi r5, r1, 0x40
    bl GetSoundType__Q34nw4r3snd12SoundArchiveCFUl
    cmpwi r3, 0x0
    bne lbl_80216784
    li r3, 0x3
    b lbl_8021711C
lbl_80216784:
    li r0, 0x0
    cmpwi r15, 0x0
    stw r0, 0x64(r1)
    li r0, 0x0
    lwz r29, 0x4c(r1)
    li r31, 0x0
    lwz r14, 0x44(r1)
    li r30, 0x0
    lwz r17, 0x48(r1)
    stw r0, 0x60(r1)
    beq lbl_80216800
    lwz r3, 0x0(r15)
    clrlwi. r0, r3, 31
    beq lbl_802167C4
    lwz r31, 0x4(r15)
    lwz r30, 0x8(r15)
lbl_802167C4:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_802167D0
    lwz r29, 0x10(r15)
lbl_802167D0:
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_802167DC
    lwz r14, 0xc(r15)
lbl_802167DC:
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_802167E8
    lwz r17, 0x14(r15)
lbl_802167E8:
    rlwinm. r0, r3, 0, 27, 27
    beq lbl_80216800
    lwz r0, 0x18(r15)
    stw r0, 0x64(r1)
    lwz r0, 0x1c(r15)
    stw r0, 0x60(r1)
lbl_80216800:
    lbz r0, 0x8(r1)
    mr r28, r29
    cmpwi r0, 0x0
    beq lbl_80216814
    subi r28, r29, 0x1
lbl_80216814:
    cmpwi r21, 0x0
    li r27, 0x0
    beq lbl_80216830
    mr r3, r21
    mr r4, r20
    bl fn_80209F5C
    mr r27, r3
lbl_80216830:
    add r16, r28, r27
    cmpwi r16, 0x7f
    ble lbl_80216844
    li r15, 0x7f
    b lbl_8021684C
lbl_80216844:
    srawi r0, r16, 31
    andc r15, r16, r0
lbl_8021684C:
    cmpwi r22, 0x0
    li r26, 0x0
    beq lbl_8021688C
    cmpwi r17, 0x0
    blt lbl_80216868
    cmpwi r17, 0x4
    blt lbl_80216870
lbl_80216868:
    li r26, 0x0
    b lbl_8021687C
lbl_80216870:
    slwi r0, r17, 4
    add r3, r22, r0
    addi r26, r3, 0x8
lbl_8021687C:
    cmpwi r26, 0x0
    bne lbl_8021688C
    li r3, 0xa
    b lbl_8021711C
lbl_8021688C:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mulli r0, r14, 0x64
    lwz r3, 0x40(r18)
    mr r4, r15
    add r14, r3, r0
    mr r3, r14
    bl detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi
    cmpwi r3, 0x0
    bne lbl_802168CC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_8021711C
lbl_802168CC:
    cmpwi r26, 0x0
    beq lbl_802168FC
    mr r3, r26
    mr r4, r15
    bl fn_8020C378
    cmpwi r3, 0x0
    bne lbl_802168FC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_8021711C
lbl_802168FC:
    lwz r3, 0x10(r18)
    mr r4, r20
    li r25, 0x0
    li r24, 0x0
    li r23, 0x0
    bl GetSoundUserParam__Q34nw4r3snd12SoundArchiveCFUl
    cmpwi r3, 0x2
    beq lbl_80216ADC
    bge lbl_8021692C
    cmpwi r3, 0x1
    bge lbl_80216938
    b lbl_80216E24
lbl_8021692C:
    cmpwi r3, 0x4
    bge lbl_80216E24
    b lbl_80216C80
lbl_80216938:
    cmpwi r16, 0x7f
    ble lbl_80216948
    li r16, 0x7f
    b lbl_80216950
lbl_80216948:
    srawi r0, r16, 31
    andc r16, r16, r0
lbl_80216950:
    addi r17, r18, 0x54
    mr r3, r17
    bl OSLockMutex
    li r25, 0x0
    b lbl_80216A20
lbl_80216964:
    addi r3, r18, 0x44
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    beq lbl_80216994
    mr r25, r3
    beq lbl_80216A20
    mr r5, r28
    mr r6, r27
    addi r4, r18, 0x44
    bl fn_80211B50
    mr r25, r3
    b lbl_80216A20
lbl_80216994:
    lwz r0, 0x48(r18)
    cmpwi r0, 0x0
    bne lbl_802169A8
    li r15, 0x0
    b lbl_802169B0
lbl_802169A8:
    lwz r3, 0x4c(r18)
    subi r15, r3, 0xec
lbl_802169B0:
    cmpwi r15, 0x0
    bne lbl_802169C8
    mr r3, r17
    bl OSUnlockMutex
    li r25, 0x0
    b lbl_80216A88
lbl_802169C8:
    lbz r3, 0x94(r15)
    lwz r0, 0x50(r15)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_802169E4
    li r0, 0x7f
    b lbl_802169EC
lbl_802169E4:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_802169EC:
    cmpw r16, r0
    bge lbl_80216A04
    mr r3, r17
    bl OSUnlockMutex
    li r25, 0x0
    b lbl_80216A88
lbl_80216A04:
    addi r3, r18, 0x54
    bl OSUnlockMutex
    mr r3, r15
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    addi r3, r18, 0x54
    bl OSLockMutex
lbl_80216A20:
    cmpwi r25, 0x0
    beq lbl_80216964
    lwz r3, 0x4c(r18)
    addi r0, r18, 0x4c
    b lbl_80216A64
lbl_80216A34:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80216A50
    li r4, 0x7f
    b lbl_80216A58
lbl_80216A50:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_80216A58:
    cmpw r16, r4
    blt lbl_80216A6C
    lwz r3, 0x0(r3)
lbl_80216A64:
    cmplw r3, r0
    bne lbl_80216A34
lbl_80216A6C:
    stw r3, 0x14(r1)
    addi r3, r18, 0x48
    addi r4, r1, 0x14
    addi r5, r25, 0xec
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r17
    bl OSUnlockMutex
lbl_80216A88:
    cmpwi r25, 0x0
    bne lbl_80216A98
    li r25, 0x0
    b lbl_80216AB8
lbl_80216A98:
    mr r3, r25
    mr r4, r20
    bl SetId__Q44nw4r3snd6detail10BasicSoundFUl
    cmpwi r21, 0x0
    beq lbl_80216AB8
    mr r3, r25
    mr r4, r21
    bl SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo
lbl_80216AB8:
    cmpwi r25, 0x0
    bne lbl_80216AD4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x9
    b lbl_8021711C
lbl_80216AD4:
    mr r15, r25
    b lbl_80216E38
lbl_80216ADC:
    cmpwi r16, 0x7f
    ble lbl_80216AEC
    li r15, 0x7f
    b lbl_80216AF4
lbl_80216AEC:
    srawi r0, r16, 31
    andc r15, r16, r0
lbl_80216AF4:
    addi r17, r18, 0x7c
    mr r3, r17
    bl OSLockMutex
    li r24, 0x0
    b lbl_80216BC4
lbl_80216B08:
    addi r3, r18, 0x6c
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    beq lbl_80216B38
    mr r24, r3
    beq lbl_80216BC4
    mr r5, r28
    mr r6, r27
    addi r4, r18, 0x6c
    bl fn_8021C974
    mr r24, r3
    b lbl_80216BC4
lbl_80216B38:
    lwz r0, 0x70(r18)
    cmpwi r0, 0x0
    bne lbl_80216B4C
    li r16, 0x0
    b lbl_80216B54
lbl_80216B4C:
    lwz r3, 0x74(r18)
    subi r16, r3, 0xec
lbl_80216B54:
    cmpwi r16, 0x0
    bne lbl_80216B6C
    mr r3, r17
    bl OSUnlockMutex
    li r24, 0x0
    b lbl_80216C2C
lbl_80216B6C:
    lbz r3, 0x94(r16)
    lwz r0, 0x50(r16)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_80216B88
    li r0, 0x7f
    b lbl_80216B90
lbl_80216B88:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_80216B90:
    cmpw r15, r0
    bge lbl_80216BA8
    mr r3, r17
    bl OSUnlockMutex
    li r24, 0x0
    b lbl_80216C2C
lbl_80216BA8:
    addi r3, r18, 0x7c
    bl OSUnlockMutex
    mr r3, r16
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    addi r3, r18, 0x7c
    bl OSLockMutex
lbl_80216BC4:
    cmpwi r24, 0x0
    beq lbl_80216B08
    lwz r3, 0x74(r18)
    addi r0, r18, 0x74
    b lbl_80216C08
lbl_80216BD8:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80216BF4
    li r4, 0x7f
    b lbl_80216BFC
lbl_80216BF4:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_80216BFC:
    cmpw r15, r4
    blt lbl_80216C10
    lwz r3, 0x0(r3)
lbl_80216C08:
    cmplw r3, r0
    bne lbl_80216BD8
lbl_80216C10:
    stw r3, 0x10(r1)
    addi r3, r18, 0x70
    addi r4, r1, 0x10
    addi r5, r24, 0xec
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r17
    bl OSUnlockMutex
lbl_80216C2C:
    cmpwi r24, 0x0
    bne lbl_80216C3C
    li r24, 0x0
    b lbl_80216C5C
lbl_80216C3C:
    mr r3, r24
    mr r4, r20
    bl SetId__Q44nw4r3snd6detail10BasicSoundFUl
    cmpwi r21, 0x0
    beq lbl_80216C5C
    mr r3, r24
    mr r4, r21
    bl SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo
lbl_80216C5C:
    cmpwi r24, 0x0
    bne lbl_80216C78
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x9
    b lbl_8021711C
lbl_80216C78:
    mr r15, r24
    b lbl_80216E38
lbl_80216C80:
    cmpwi r16, 0x7f
    ble lbl_80216C90
    li r15, 0x7f
    b lbl_80216C98
lbl_80216C90:
    srawi r0, r16, 31
    andc r15, r16, r0
lbl_80216C98:
    addi r17, r18, 0xa4
    mr r3, r17
    bl OSLockMutex
    li r23, 0x0
    b lbl_80216D68
lbl_80216CAC:
    addi r3, r18, 0x94
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    beq lbl_80216CDC
    mr r23, r3
    beq lbl_80216D68
    mr r5, r28
    mr r6, r27
    addi r4, r18, 0x94
    bl fn_80221374
    mr r23, r3
    b lbl_80216D68
lbl_80216CDC:
    lwz r0, 0x98(r18)
    cmpwi r0, 0x0
    bne lbl_80216CF0
    li r16, 0x0
    b lbl_80216CF8
lbl_80216CF0:
    lwz r3, 0x9c(r18)
    subi r16, r3, 0xec
lbl_80216CF8:
    cmpwi r16, 0x0
    bne lbl_80216D10
    mr r3, r17
    bl OSUnlockMutex
    li r23, 0x0
    b lbl_80216DD0
lbl_80216D10:
    lbz r3, 0x94(r16)
    lwz r0, 0x50(r16)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_80216D2C
    li r0, 0x7f
    b lbl_80216D34
lbl_80216D2C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_80216D34:
    cmpw r15, r0
    bge lbl_80216D4C
    mr r3, r17
    bl OSUnlockMutex
    li r23, 0x0
    b lbl_80216DD0
lbl_80216D4C:
    addi r3, r18, 0xa4
    bl OSUnlockMutex
    mr r3, r16
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    addi r3, r18, 0xa4
    bl OSLockMutex
lbl_80216D68:
    cmpwi r23, 0x0
    beq lbl_80216CAC
    lwz r3, 0x9c(r18)
    addi r0, r18, 0x9c
    b lbl_80216DAC
lbl_80216D7C:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80216D98
    li r4, 0x7f
    b lbl_80216DA0
lbl_80216D98:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_80216DA0:
    cmpw r15, r4
    blt lbl_80216DB4
    lwz r3, 0x0(r3)
lbl_80216DAC:
    cmplw r3, r0
    bne lbl_80216D7C
lbl_80216DB4:
    stw r3, 0xc(r1)
    addi r3, r18, 0x98
    addi r4, r1, 0xc
    addi r5, r23, 0xec
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r17
    bl OSUnlockMutex
lbl_80216DD0:
    cmpwi r23, 0x0
    bne lbl_80216DE0
    li r23, 0x0
    b lbl_80216E00
lbl_80216DE0:
    mr r3, r23
    mr r4, r20
    bl SetId__Q44nw4r3snd6detail10BasicSoundFUl
    cmpwi r21, 0x0
    beq lbl_80216E00
    mr r3, r23
    mr r4, r21
    bl SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo
lbl_80216E00:
    cmpwi r23, 0x0
    bne lbl_80216E1C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x9
    b lbl_8021711C
lbl_80216E1C:
    mr r15, r23
    b lbl_80216E38
lbl_80216E24:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x3
    b lbl_8021711C
lbl_80216E38:
    mr r3, r14
    mr r4, r15
    bl detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
    cmpwi r3, 0x0
    bne lbl_80216E74
    lwz r12, 0x0(r15)
    mr r3, r15
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0xff
    b lbl_8021711C
lbl_80216E74:
    lwz r3, 0x10(r18)
    mr r4, r20
    bl GetSoundUserParam__Q34nw4r3snd12SoundArchiveCFUl
    cmpwi r3, 0x2
    beq lbl_80216F48
    bge lbl_80216E98
    cmpwi r3, 0x1
    bge lbl_80216EA4
    b lbl_80217068
lbl_80216E98:
    cmpwi r3, 0x4
    bge lbl_80217068
    b lbl_80216FD8
lbl_80216EA4:
    mr r3, r14
    mr r4, r25
    bl detail_AllocPlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
    lwz r3, 0x10(r18)
    mr r4, r20
    addi r5, r1, 0x2c
    bl ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo
    cmpwi r3, 0x0
    bne lbl_80216EF0
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x3
    b lbl_8021711C
lbl_80216EF0:
    lwz r9, 0x64(r1)
    mr r3, r18
    lwz r10, 0x60(r1)
    mr r4, r25
    mr r7, r31
    mr r8, r30
    addi r5, r1, 0x40
    addi r6, r1, 0x2c
    bl PrepareSeqImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail8SeqSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive12SeqSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypeiPCvPCc
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_80217090
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r14
    b lbl_8021711C
lbl_80216F48:
    lwz r3, 0x10(r18)
    mr r4, r20
    addi r5, r1, 0x18
    bl ReadSeqSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo
    cmpwi r3, 0x0
    bne lbl_80216F88
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x3
    b lbl_8021711C
lbl_80216F88:
    mr r3, r18
    mr r4, r24
    mr r7, r31
    mr r8, r30
    addi r5, r1, 0x40
    addi r6, r1, 0x18
    bl PrepareStrmImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9StrmSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13StrmSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_80217090
    lwz r12, 0x0(r24)
    mr r3, r24
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r14
    b lbl_8021711C
lbl_80216FD8:
    lwz r3, 0x10(r18)
    mr r4, r20
    addi r5, r1, 0x20
    bl detail_ReadStrmSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo
    cmpwi r3, 0x0
    bne lbl_80217018
    lwz r12, 0x0(r23)
    mr r3, r23
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x3
    b lbl_8021711C
lbl_80217018:
    mr r3, r18
    mr r4, r23
    mr r7, r31
    mr r8, r30
    addi r5, r1, 0x40
    addi r6, r1, 0x20
    bl PrepareWaveSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9WaveSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13WaveSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_80217090
    lwz r12, 0x0(r23)
    mr r3, r23
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r14
    b lbl_8021711C
lbl_80217068:
    lwz r12, 0x0(r15)
    mr r3, r15
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x3
    b lbl_8021711C
lbl_80217090:
    cmpwi r26, 0x0
    beq lbl_802170D4
    mr r3, r26
    mr r4, r15
    bl fn_8020C190
    cmpwi r3, 0x0
    bne lbl_802170D4
    lwz r12, 0x0(r15)
    mr r3, r15
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0xff
    b lbl_8021711C
lbl_802170D4:
    cmpwi r22, 0x0
    beq lbl_802170E8
    mr r3, r15
    mr r4, r22
    bl AttachSoundActor__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd10SoundActor
lbl_802170E8:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_80217100
    mr r3, r15
    mr r4, r29
    bl SetPlayerPriority__Q44nw4r3snd6detail10BasicSoundFi
lbl_80217100:
    mr r3, r19
    mr r4, r15
    bl fn_80217C88
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
lbl_8021711C:
    addi r11, r1, 0xb0
    bl _restgpr_14
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// PrepareSeqImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail8SeqSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive12SeqSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypeiPCvPCc
// ----------------------------------------------------------------------------
extern "C" asm void PrepareSeqImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail8SeqSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive12SeqSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypeiPCvPCc() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_22
    lwz r0, 0x8(r6)
    li r23, 0x0
    cmpwi r9, 0x0
    stw r23, 0xc(r1)
    mr r26, r3
    mr r27, r4
    stw r0, 0x8(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    mr r24, r10
    li r22, 0x0
    beq lbl_802171D8
    li r0, 0x0
    mr r23, r9
    stw r0, 0xc(r1)
    mr r4, r23
    addi r3, r1, 0x20
    bl __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
    cmpwi r24, 0x0
    beq lbl_802171C0
    mr r4, r24
    addi r3, r1, 0x20
    addi r5, r1, 0xc
    bl ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl
    cmpwi r3, 0x0
    bne lbl_802171C0
    li r3, 0xb
    b lbl_8021748C
lbl_802171C0:
    addi r3, r1, 0x20
    bl GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv
    lwz r4, 0xc(r1)
    addi r5, r1, 0x8
    bl ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl
    stw r3, 0xc(r1)
lbl_802171D8:
    cmpwi r23, 0x0
    bne lbl_8021722C
    lwz r4, 0x0(r28)
    mr r3, r26
    bl detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
    lwz r0, 0x0(r29)
    cmpwi r24, 0x0
    mr r23, r3
    stw r0, 0xc(r1)
    beq lbl_8021722C
    mr r4, r23
    addi r3, r1, 0x18
    bl __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
    mr r4, r24
    addi r3, r1, 0x18
    addi r5, r1, 0xc
    bl ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl
    cmpwi r3, 0x0
    bne lbl_8021722C
    li r3, 0xb
    b lbl_8021748C
lbl_8021722C:
    cmpwi r23, 0x0
    bne lbl_802172B0
    lwz r24, 0x4(r27)
    cmpwi r24, 0x0
    bne lbl_80217248
    li r3, 0x4
    b lbl_8021748C
lbl_80217248:
    lwz r3, 0x10(r26)
    addi r5, r27, 0x2ac
    lwz r4, 0x0(r28)
    li r6, 0x200
    bl detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_80217270
    li r3, 0x6
    b lbl_8021748C
lbl_80217270:
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r25, r3
    mr r3, r24
    bl GetFreeSize__Q44nw4r3snd6detail10PlayerHeapCFv
    cmplw r3, r25
    bge lbl_802172B0
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r3, 0x5
    b lbl_8021748C
lbl_802172B0:
    lwz r4, 0x30(r26)
    mr r3, r27
    lwz r5, 0x8(r1)
    addi r6, r26, 0x20
    bl Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback
    b lbl_8021736C
lbl_802172C8:
    cmpwi r3, 0x1
    bne lbl_80217364
    lwz r0, 0x48(r26)
    cmplwi r0, 0x1
    bne lbl_80217300
    cmpwi r22, 0x0
    beq lbl_802172F8
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_802172F8:
    li r3, 0x9
    b lbl_8021748C
lbl_80217300:
    cmpwi r0, 0x0
    bne lbl_80217310
    li r3, 0x0
    b lbl_80217318
lbl_80217310:
    lwz r3, 0x4c(r26)
    subi r3, r3, 0xec
lbl_80217318:
    cmplw r27, r3
    bne lbl_80217344
    cmpwi r22, 0x0
    beq lbl_8021733C
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_8021733C:
    li r3, 0x9
    b lbl_8021748C
lbl_80217344:
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    lwz r4, 0x30(r26)
    mr r3, r27
    lwz r5, 0x8(r1)
    addi r6, r26, 0x20
    bl Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback
    b lbl_8021736C
lbl_80217364:
    li r3, 0xff
    b lbl_8021748C
lbl_8021736C:
    cmpwi r3, 0x0
    bne lbl_802172C8
    lwz r4, 0x10(r28)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    mr r3, r27
    xoris r0, r4, 0x8000
    lfd f2, lbl_804A21D0
    stw r0, 0x2c(r1)
    lfs f0, lbl_804A21C8
    lfd f1, 0x28(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf
    lwz r4, 0x14(r28)
    mr r3, r27
    bl SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi
    lwz r4, 0x18(r28)
    mr r3, r27
    bl SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode
    lwz r4, 0x1c(r28)
    mr r3, r27
    bl SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve
    lwz r4, 0xc(r29)
    mr r3, r27
    bl SetChannelPriority__Q44nw4r3snd6detail8SeqSoundFi
    lbz r4, 0x10(r29)
    mr r3, r27
    bl SetReleasePriorityFix__Q44nw4r3snd6detail8SeqSoundFb
    lwz r4, 0x34(r26)
    mr r3, r27
    lwz r5, 0x38(r26)
    bl SetSeqUserprocCallback__Q44nw4r3snd6detail8SeqSoundFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv
    cmpwi r30, 0x1
    beq lbl_8021741C
    bge lbl_80217408
    cmpwi r30, 0x0
    bge lbl_80217414
    b lbl_80217430
lbl_80217408:
    cmpwi r30, 0x3
    bge lbl_80217430
    b lbl_80217424
lbl_80217414:
    li r24, 0x1
    b lbl_80217438
lbl_8021741C:
    li r24, 0x0
    b lbl_80217438
lbl_80217424:
    li r24, 0x0
    li r31, 0x0
    b lbl_80217438
lbl_80217430:
    li r24, 0x0
    li r31, 0x0
lbl_80217438:
    cmpwi r23, 0x0
    beq lbl_80217470
    mr r4, r23
    addi r3, r1, 0x10
    bl __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
    addi r3, r1, 0x10
    bl GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv
    lwz r5, 0xc(r1)
    mr r4, r3
    mr r3, r27
    mr r6, r24
    mr r7, r31
    bl Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
    b lbl_80217488
lbl_80217470:
    lwz r5, 0xc(r1)
    mr r3, r27
    mr r4, r22
    mr r6, r24
    mr r7, r31
    bl Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
lbl_80217488:
    li r3, 0x0
lbl_8021748C:
    addi r11, r1, 0x60
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// PrepareStrmImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9StrmSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13StrmSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void PrepareStrmImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9StrmSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13StrmSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r28, r5
    mr r26, r3
    mr r27, r4
    mr r29, r6
    lhz r5, 0x4(r6)
    mr r31, r7
    lhz r6, 0x6(r6)
    mr r30, r8
    mr r3, r27
    addi r4, r26, 0xc8
    bl Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs
    b lbl_80217554
lbl_802174E8:
    cmpwi r3, 0x1
    bne lbl_8021754C
    lwz r0, 0x70(r26)
    cmplwi r0, 0x1
    bne lbl_80217504
    li r3, 0x9
    b lbl_80217644
lbl_80217504:
    cmpwi r0, 0x0
    bne lbl_80217514
    li r3, 0x0
    b lbl_8021751C
lbl_80217514:
    lwz r3, 0x74(r26)
    subi r3, r3, 0xec
lbl_8021751C:
    cmplw r27, r3
    bne lbl_8021752C
    li r3, 0x9
    b lbl_80217644
lbl_8021752C:
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    lhz r5, 0x4(r29)
    mr r3, r27
    lhz r6, 0x6(r29)
    addi r4, r26, 0xc8
    bl Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs
    b lbl_80217554
lbl_8021754C:
    li r3, 0xff
    b lbl_80217644
lbl_80217554:
    cmpwi r3, 0x0
    bne lbl_802174E8
    cmpwi r31, 0x1
    beq lbl_80217588
    bge lbl_80217574
    cmpwi r31, 0x0
    bge lbl_80217580
    b lbl_8021759C
lbl_80217574:
    cmpwi r31, 0x3
    bge lbl_8021759C
    b lbl_80217594
lbl_80217580:
    li r31, 0x1
    b lbl_802175A4
lbl_80217588:
    li r31, 0x0
    li r30, 0x0
    b lbl_802175A4
lbl_80217594:
    li r31, 0x0
    b lbl_802175A4
lbl_8021759C:
    li r31, 0x0
    li r30, 0x0
lbl_802175A4:
    lwz r3, 0x10(r26)
    addi r5, r27, 0xed0
    lwz r4, 0x0(r28)
    li r6, 0x200
    bl detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi
    cmpwi r3, 0x0
    mr r6, r3
    bne lbl_802175CC
    li r3, 0x6
    b lbl_80217644
lbl_802175CC:
    mr r3, r27
    mr r4, r31
    mr r5, r30
    bl Prepare__Q44nw4r3snd6detail9StrmSoundFQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypelPQ34nw4r2ut10FileStream
    cmpwi r3, 0x0
    bne lbl_802175EC
    li r3, 0xff
    b lbl_80217644
lbl_802175EC:
    lwz r4, 0x10(r28)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r3, r27
    xoris r0, r4, 0x8000
    lfd f2, lbl_804A21D0
    stw r0, 0xc(r1)
    lfs f0, lbl_804A21C8
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf
    lwz r4, 0x14(r28)
    mr r3, r27
    bl SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi
    lwz r4, 0x18(r28)
    mr r3, r27
    bl SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode
    lwz r4, 0x1c(r28)
    mr r3, r27
    bl SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve
    li r3, 0x0
lbl_80217644:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// PrepareWaveSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9WaveSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13WaveSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void PrepareWaveSoundImpl__Q34nw4r3snd18SoundArchivePlayerFPQ44nw4r3snd6detail9WaveSoundPCQ44nw4r3snd12SoundArchive9SoundInfoPCQ44nw4r3snd12SoundArchive13WaveSoundInfoQ54nw4r3snd14SoundStartable9StartInfo15StartOffsetTypei() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r27, r4
    lwz r4, 0x0(r5)
    mr r26, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_802176A4
    li r3, 0x4
    b lbl_80217784
lbl_802176A4:
    cmpwi r30, 0x1
    beq lbl_802176D0
    bge lbl_802176BC
    cmpwi r30, 0x0
    bge lbl_802176C8
    b lbl_802176E4
lbl_802176BC:
    cmpwi r30, 0x3
    bge lbl_802176E4
    b lbl_802176DC
lbl_802176C8:
    li r6, 0x1
    b lbl_802176EC
lbl_802176D0:
    li r6, 0x0
    li r31, 0x0
    b lbl_802176EC
lbl_802176DC:
    li r6, 0x0
    b lbl_802176EC
lbl_802176E4:
    li r6, 0x0
    li r31, 0x0
lbl_802176EC:
    lwz r5, 0x0(r29)
    mr r3, r27
    lwz r9, 0x0(r28)
    mr r7, r31
    addi r8, r26, 0x28
    bl Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
    cmpwi r3, 0x0
    bne lbl_80217714
    li r3, 0xff
    b lbl_80217784
lbl_80217714:
    lwz r4, 0x10(r28)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    mr r3, r27
    xoris r0, r4, 0x8000
    lfd f2, lbl_804A21D0
    stw r0, 0xc(r1)
    lfs f0, lbl_804A21C8
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f1, f0
    bl SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf
    lwz r4, 0x14(r28)
    mr r3, r27
    bl SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi
    lwz r4, 0x18(r28)
    mr r3, r27
    bl SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode
    lwz r4, 0x1c(r28)
    mr r3, r27
    bl SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve
    lwz r4, 0x4(r29)
    mr r3, r27
    bl SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi
    lbz r4, 0x8(r29)
    mr r3, r27
    bl SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb
    li r3, 0x0
lbl_80217784:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8021779C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021779C() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    stw r31, 0x23c(r1)
    mr r31, r6
    stw r30, 0x238(r1)
    mr r30, r5
    stw r29, 0x234(r1)
    mr r29, r4
    stw r28, 0x230(r1)
    mr r28, r3
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_802177DC
    li r3, 0x0
    b lbl_802177E4
lbl_802177DC:
    mr r3, r0
    bl IsAvailable__Q34nw4r3snd12SoundArchiveCFv
lbl_802177E4:
    cmpwi r3, 0x0
    bne lbl_802177F4
    li r3, 0x0
    b lbl_802178E4
lbl_802177F4:
    lwz r3, 0x10(r28)
    bl GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
    cmplw r29, r3
    blt lbl_8021780C
    li r3, 0x0
    b lbl_802178E4
lbl_8021780C:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    bne lbl_80217820
    li r0, 0x0
    b lbl_80217840
lbl_80217820:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_80217834
    li r0, 0x0
    b lbl_80217840
lbl_80217834:
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r0, 0x4(r3)
lbl_80217840:
    cmpwi r0, 0x0
    beq lbl_80217850
    li r3, 0x1
    b lbl_802178E4
lbl_80217850:
    cmpwi r30, 0x0
    bne lbl_80217860
    li r3, 0x0
    b lbl_802178E4
lbl_80217860:
    lwz r4, 0x10(r28)
    addi r3, r1, 0x10
    bl __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive
    mr r4, r29
    mr r5, r30
    mr r7, r31
    addi r3, r1, 0x10
    addi r6, r1, 0x8
    bl LoadGroup__Q44nw4r3snd6detail18SoundArchiveLoaderFUlPQ34nw4r3snd22SoundMemoryAllocatablePPvUl
    cmpwi r3, 0x0
    bne lbl_802178A0
    addi r3, r1, 0x10
    li r4, -0x1
    bl __dt__Q44nw4r3snd6detail18SoundArchiveLoaderFv
    li r3, 0x0
    b lbl_802178E4
lbl_802178A0:
    lwz r4, 0x14(r28)
    cmpwi r4, 0x0
    beq lbl_802178B8
    slwi r0, r29, 3
    add r4, r4, r0
    stw r3, 0x4(r4)
lbl_802178B8:
    lwz r3, 0x14(r28)
    lwz r4, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_802178D4
    slwi r0, r29, 3
    add r3, r3, r0
    stw r4, 0x8(r3)
lbl_802178D4:
    addi r3, r1, 0x10
    li r4, -0x1
    bl __dt__Q44nw4r3snd6detail18SoundArchiveLoaderFv
    li r3, 0x1
lbl_802178E4:
    lwz r0, 0x244(r1)
    lwz r31, 0x23c(r1)
    lwz r30, 0x238(r1)
    lwz r29, 0x234(r1)
    lwz r28, 0x230(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// ----------------------------------------------------------------------------
// InvalidateData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv() {
    nofralloc
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_80217954
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_80217944
lbl_80217920:
    add r8, r8, r7
    lwz r0, 0x4(r8)
    cmplw r4, r0
    bgt lbl_8021793C
    cmplw r0, r5
    bgt lbl_8021793C
    stw r6, 0x4(r8)
lbl_8021793C:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_80217944:
    lwz r8, 0x18(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_80217920
lbl_80217954:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beqlr
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_80217994
lbl_80217970:
    add r8, r8, r7
    lwz r0, 0x4(r8)
    cmplw r4, r0
    bgt lbl_8021798C
    cmplw r0, r5
    bgt lbl_8021798C
    stw r6, 0x4(r8)
lbl_8021798C:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_80217994:
    lwz r8, 0x14(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_80217970
    blr
}

// ----------------------------------------------------------------------------
// InvalidateWaveData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateWaveData__Q34nw4r3snd18SoundArchivePlayerFPCvPCv() {
    nofralloc
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_802179F8
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_802179E8
lbl_802179C4:
    add r8, r8, r7
    lwz r0, 0x8(r8)
    cmplw r4, r0
    bgt lbl_802179E0
    cmplw r0, r5
    bgt lbl_802179E0
    stw r6, 0x8(r8)
lbl_802179E0:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_802179E8:
    lwz r8, 0x18(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_802179C4
lbl_802179F8:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beqlr
    li r9, 0x0
    li r7, 0x0
    li r6, 0x0
    b lbl_80217A38
lbl_80217A14:
    add r8, r8, r7
    lwz r0, 0x8(r8)
    cmplw r4, r0
    bgt lbl_80217A30
    cmplw r0, r5
    bgt lbl_80217A30
    stw r6, 0x8(r8)
lbl_80217A30:
    addi r7, r7, 0x8
    addi r9, r9, 0x1
lbl_80217A38:
    lwz r8, 0x14(r3)
    lwz r0, 0x0(r8)
    cmplw r9, r0
    blt lbl_80217A14
    blr
}

// ----------------------------------------------------------------------------
// NoteOn__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFPQ44nw4r3snd6detail9SeqPlayeriRCQ44nw4r3snd6detail10NoteOnInfo
// ----------------------------------------------------------------------------
extern "C" asm void NoteOn__Q44nw4r3snd18SoundArchivePlayer17SeqNoteOnCallbackFPQ44nw4r3snd6detail9SeqPlayeriRCQ44nw4r3snd6detail10NoteOnInfo() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r6
    stw r29, 0x44(r1)
    mr r29, r3
    lwz r5, 0x4(r3)
    lwz r3, 0x10(r5)
    cmpwi r3, 0x0
    bne lbl_80217A88
    li r3, 0x0
    b lbl_80217A8C
lbl_80217A88:
    bl IsAvailable__Q34nw4r3snd12SoundArchiveCFv
lbl_80217A8C:
    cmpwi r3, 0x0
    bne lbl_80217A9C
    li r3, 0x0
    b lbl_80217B58
lbl_80217A9C:
    lwz r3, 0x4(r29)
    addi r5, r1, 0x20
    lwz r4, 0xd0(r31)
    lwz r31, 0x10(r3)
    mr r3, r31
    bl ReadSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9SoundInfo
    cmpwi r3, 0x0
    bne lbl_80217AC4
    li r3, 0x0
    b lbl_80217B58
lbl_80217AC4:
    lwz r4, 0x24(r1)
    mr r3, r31
    addi r5, r1, 0x8
    bl ReadSoundArchivePlayerInfo__Q34nw4r3snd12SoundArchiveCFPQ44nw4r3snd12SoundArchive22SoundArchivePlayerInfo
    cmpwi r3, 0x0
    bne lbl_80217AE4
    li r3, 0x0
    b lbl_80217B58
lbl_80217AE4:
    lwz r3, 0x4(r29)
    lwz r4, 0x8(r1)
    bl detail_GetFileAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
    cmpwi r3, 0x0
    bne lbl_80217B00
    li r3, 0x0
    b lbl_80217B58
lbl_80217B00:
    mr r4, r3
    addi r3, r1, 0x10
    bl __ct__Q44nw4r3snd6detail4BankFPCv
    lwz r3, 0x4(r29)
    lwz r4, 0x8(r1)
    bl detail_GetFileWaveDataAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
    cmpwi r3, 0x0
    bne lbl_80217B34
    addi r3, r1, 0x10
    li r4, -0x1
    bl __dt__Q44nw4r3snd6detail4BankFv
    li r3, 0x0
    b lbl_80217B58
lbl_80217B34:
    stw r3, 0x1c(r1)
    mr r4, r30
    addi r3, r1, 0x10
    bl NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo
    mr r31, r3
    addi r3, r1, 0x10
    li r4, -0x1
    bl __dt__Q44nw4r3snd6detail4BankFv
    mr r3, r31
lbl_80217B58:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// GetWaveSoundData__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackCFPQ44nw4r3snd6detail13WaveSoundInfoPQ44nw4r3snd6detail17WaveSoundNoteInfoPQ44nw4r3snd6detail8WaveInfoPCviiUl
// ----------------------------------------------------------------------------
extern "C" asm void GetWaveSoundData__Q44nw4r3snd18SoundArchivePlayer11WsdCallbackCFPQ44nw4r3snd6detail13WaveSoundInfoPQ44nw4r3snd6detail17WaveSoundNoteInfoPQ44nw4r3snd6detail8WaveInfoPCviiUl() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lwz r11, 0x4(r3)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    lwz r3, 0x10(r11)
    mr r27, r6
    mr r28, r7
    mr r29, r8
    cmpwi r3, 0x0
    mr r30, r9
    mr r31, r10
    bne lbl_80217BC0
    li r3, 0x0
    b lbl_80217BC4
lbl_80217BC0:
    bl IsAvailable__Q34nw4r3snd12SoundArchiveCFv
lbl_80217BC4:
    cmpwi r3, 0x0
    bne lbl_80217BD4
    li r3, 0x0
    b lbl_80217C58
lbl_80217BD4:
    lwz r3, 0x4(r24)
    mr r4, r31
    bl detail_GetFileWaveDataAddress__Q34nw4r3snd18SoundArchivePlayerCFUl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80217BF4
    li r3, 0x0
    b lbl_80217C58
lbl_80217BF4:
    mr r4, r28
    addi r3, r1, 0x8
    bl __ct__Q44nw4r3snd6detail13WsdFileReaderFPCv
    mr r4, r25
    mr r5, r29
    addi r3, r1, 0x8
    bl ReadWaveSoundInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail13WaveSoundInfoi
    cmpwi r3, 0x0
    bne lbl_80217C20
    li r3, 0x0
    b lbl_80217C58
lbl_80217C20:
    mr r4, r26
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0x8
    bl ReadWaveSoundNoteInfo__Q44nw4r3snd6detail13WsdFileReaderCFPQ44nw4r3snd6detail17WaveSoundNoteInfoii
    cmpwi r3, 0x0
    bne lbl_80217C44
    li r3, 0x0
    b lbl_80217C58
lbl_80217C44:
    lwz r4, 0x0(r26)
    mr r5, r27
    mr r6, r31
    addi r3, r1, 0x8
    bl ReadWaveInfo__Q44nw4r3snd6detail13WsdFileReaderCFiPQ44nw4r3snd6detail8WaveInfoPCv
lbl_80217C58:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80217C70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80217C70() {
    nofralloc
    subi r3, r3, 0xc
    b detail_ConvertLabelStringToSoundId__Q34nw4r3snd18SoundArchivePlayerFPCc
}

// ----------------------------------------------------------------------------
// fn_80217C78
// ----------------------------------------------------------------------------
extern "C" asm void fn_80217C78() {
    nofralloc
    subi r3, r3, 0xc
    b detail_SetupSound__Q34nw4r3snd18SoundArchivePlayerFPQ34nw4r3snd11SoundHandleUlbPCQ44nw4r3snd14SoundStartable9StartInfo
}

// ----------------------------------------------------------------------------
// fn_80217C80
// ----------------------------------------------------------------------------
extern "C" asm void fn_80217C80() {
    nofralloc
    subi r3, r3, 0xc
    b __dt__Q34nw4r3snd18SoundArchivePlayerFv
}

