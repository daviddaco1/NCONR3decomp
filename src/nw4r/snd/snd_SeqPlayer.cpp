#include "types.h"

// Translation unit: src/nw4r/snd/snd_SeqPlayer.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern "C" float lbl_804A2180;
extern "C" float lbl_804A2184;
extern "C" float lbl_804A2188;
extern "C" float lbl_804A2190;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803627C0[];
extern "C" u8 lbl_804043C0[];

// Forward declarations
extern "C" void CallSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFUsPQ44nw4r3snd6detail8SeqTrack();
extern "C" void ChannelCallback__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail7Channel();
extern "C" void Close__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv();
extern "C" void GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void InitParam__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback();
extern "C" void InitSeqPlayer__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv();
extern "C" void NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo();
extern "C" void OSDisableInterrupts();
extern "C" void OSLockMutex();
extern "C" void OSRestoreInterrupts();
extern "C" void OSUnlockMutex();
extern "C" void Open__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb();
extern "C" void ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb();
extern "C" void PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb();
extern "C" void Pause__Q44nw4r3snd6detail9SeqPlayerFb();
extern "C" void RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void SetPlayerTrackNo__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9SeqPlayerFb();
extern "C" void SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl();
extern "C" void SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl();
extern "C" void SetSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv();
extern "C" void Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback();
extern "C" void SkipTick__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void Start__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void Stop__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback();
extern "C" void UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void UpdateTick__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void Update__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void __ct__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_80211B40();
extern "C" void fn_80211B48();

// ----------------------------------------------------------------------------
// InitSeqPlayer__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void InitSeqPlayer__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    li r0, -0x1
    lis r3, lbl_804043C0@ha
    sthu r0, lbl_804043C0@l(r3)
    sth r0, 0x2(r3)
    sth r0, 0x4(r3)
    sth r0, 0x6(r3)
    sth r0, 0x8(r3)
    sth r0, 0xa(r3)
    sth r0, 0xc(r3)
    sth r0, 0xe(r3)
    sth r0, 0x10(r3)
    sth r0, 0x12(r3)
    sth r0, 0x14(r3)
    sth r0, 0x16(r3)
    sth r0, 0x18(r3)
    sth r0, 0x1a(r3)
    sth r0, 0x1c(r3)
    sth r0, 0x1e(r3)
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q44nw4r3snd6detail11BasicPlayerFv
    lis r9, lbl_803627C0@ha
    li r10, 0x0
    addi r9, r9, lbl_803627C0@l
    lfs f1, lbl_804A2180
    lfs f0, lbl_804A2184
    addi r8, r9, 0x24
    addi r7, r9, 0x38
    li r6, 0x78
    li r5, 0x30
    li r4, 0x7f
    li r3, 0x40
    stw r10, 0xd4(r31)
    li r0, -0x1
    stw r10, 0xd8(r31)
    stw r10, 0xe0(r31)
    stw r10, 0xe4(r31)
    stw r9, 0x0(r31)
    stw r8, 0xdc(r31)
    stw r7, 0xe8(r31)
    stb r10, 0xec(r31)
    stb r10, 0xed(r31)
    stb r10, 0xee(r31)
    stb r10, 0xef(r31)
    stfs f1, 0xf4(r31)
    stfs f0, 0xf8(r31)
    stw r10, 0xfc(r31)
    stfs f0, 0x100(r31)
    stfs f1, 0xf0(r31)
    stw r10, 0x180(r31)
    stw r10, 0x104(r31)
    stw r10, 0x118(r31)
    stw r10, 0x11c(r31)
    sth r6, 0x10c(r31)
    stb r5, 0x10a(r31)
    stb r4, 0x108(r31)
    stb r3, 0x109(r31)
    stw r10, 0x110(r31)
    sth r0, 0x160(r31)
    sth r0, 0x162(r31)
    sth r0, 0x164(r31)
    sth r0, 0x166(r31)
    sth r0, 0x168(r31)
    sth r0, 0x16a(r31)
    sth r0, 0x16c(r31)
    sth r0, 0x16e(r31)
    sth r0, 0x170(r31)
    sth r0, 0x172(r31)
    sth r0, 0x174(r31)
    sth r0, 0x176(r31)
    sth r0, 0x178(r31)
    sth r0, 0x17a(r31)
    sth r0, 0x17c(r31)
    sth r0, 0x17e(r31)
    li r0, 0x0
    mr r3, r31
    stw r0, 0x120(r31)
    stw r0, 0x124(r31)
    stw r0, 0x128(r31)
    stw r0, 0x12c(r31)
    stw r0, 0x130(r31)
    stw r0, 0x134(r31)
    stw r0, 0x138(r31)
    stw r0, 0x13c(r31)
    stw r0, 0x140(r31)
    stw r0, 0x144(r31)
    stw r0, 0x148(r31)
    stw r0, 0x14c(r31)
    stw r0, 0x150(r31)
    stw r0, 0x154(r31)
    stw r0, 0x158(r31)
    stw r0, 0x15c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_80210990
    lis r5, lbl_803627C0@ha
    addi r5, r5, lbl_803627C0@l
    addi r4, r5, 0x24
    stw r5, 0x0(r3)
    addi r0, r5, 0x38
    stw r4, 0xdc(r3)
    stw r0, 0xe8(r3)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r27)
    cmpwi r0, 0x0
    beq lbl_802108B8
    cmpwi r27, 0x0
    mr r30, r27
    beq lbl_802108A4
    addi r30, r27, 0xe0
lbl_802108A4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r30
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r27)
lbl_802108B8:
    lbz r0, 0xec(r27)
    cmpwi r0, 0x0
    beq lbl_802108E8
    cmpwi r27, 0x0
    mr r30, r27
    beq lbl_802108D4
    addi r30, r27, 0xd4
lbl_802108D4:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r27)
lbl_802108E8:
    mr r29, r27
    li r30, 0x0
    li r31, 0x0
lbl_802108F4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r30, 0xf
    ble lbl_80210910
    li r3, 0x0
    b lbl_80210914
lbl_80210910:
    lwz r3, 0x120(r29)
lbl_80210914:
    cmpwi r3, 0x0
    bne lbl_8021092C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80210958
lbl_8021092C:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r27)
    lwz r4, 0x120(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r31, 0x120(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80210958:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x10
    blt lbl_802108F4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    cmpwi r28, 0x0
    ble lbl_80210990
    mr r3, r27
    bl dtor_80136CFC
lbl_80210990:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback() {
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
    bl InitParam__Q44nw4r3snd6detail11BasicPlayerFv
    lfs f1, lbl_804A2180
    li r7, 0x0
    lfs f0, lbl_804A2184
    li r6, 0x78
    li r5, 0x30
    li r4, 0x7f
    li r3, 0x40
    stb r7, 0xed(r29)
    li r0, -0x1
    stb r7, 0xee(r29)
    stfs f1, 0xf4(r29)
    stw r7, 0xfc(r29)
    stfs f0, 0x100(r29)
    stfs f1, 0xf0(r29)
    stw r7, 0x180(r29)
    stw r30, 0x104(r29)
    sth r6, 0x10c(r29)
    stb r5, 0x10a(r29)
    stb r4, 0x108(r29)
    stb r3, 0x109(r29)
    stw r31, 0x110(r29)
    stfs f0, 0xf8(r29)
    sth r0, 0x160(r29)
    sth r0, 0x162(r29)
    sth r0, 0x164(r29)
    sth r0, 0x166(r29)
    sth r0, 0x168(r29)
    sth r0, 0x16a(r29)
    sth r0, 0x16c(r29)
    sth r0, 0x16e(r29)
    sth r0, 0x170(r29)
    sth r0, 0x172(r29)
    sth r0, 0x174(r29)
    sth r0, 0x176(r29)
    sth r0, 0x178(r29)
    sth r0, 0x17a(r29)
    sth r0, 0x17c(r29)
    sth r0, 0x17e(r29)
    li r0, 0x0
    stw r0, 0x120(r29)
    stw r0, 0x124(r29)
    stw r0, 0x128(r29)
    stw r0, 0x12c(r29)
    stw r0, 0x130(r29)
    stw r0, 0x134(r29)
    stw r0, 0x138(r29)
    stw r0, 0x13c(r29)
    stw r0, 0x140(r29)
    stw r0, 0x144(r29)
    stw r0, 0x148(r29)
    stw r0, 0x14c(r29)
    stw r0, 0x150(r29)
    stw r0, 0x154(r29)
    stw r0, 0x158(r29)
    stw r0, 0x15c(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r29, r3
    mr r30, r4
    mr r31, r5
    mr r24, r6
    mr r25, r7
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r29)
    cmpwi r0, 0x0
    beq lbl_80210B48
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_80210B34
    addi r27, r29, 0xe0
lbl_80210B34:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r27
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r29)
lbl_80210B48:
    lbz r0, 0xec(r29)
    cmpwi r0, 0x0
    beq lbl_80210B78
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_80210B64
    addi r27, r29, 0xd4
lbl_80210B64:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r27
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r29)
lbl_80210B78:
    mr r26, r29
    li r27, 0x0
    li r28, 0x0
lbl_80210B84:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r27, 0xf
    ble lbl_80210BA0
    li r3, 0x0
    b lbl_80210BA4
lbl_80210BA0:
    lwz r3, 0x120(r26)
lbl_80210BA4:
    cmpwi r3, 0x0
    bne lbl_80210BBC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80210BE8
lbl_80210BBC:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r29)
    lwz r4, 0x120(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r28, 0x120(r26)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80210BE8:
    addi r27, r27, 0x1
    addi r26, r26, 0x4
    cmpwi r27, 0x10
    blt lbl_80210B84
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r29
    mr r4, r24
    mr r5, r25
    bl InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
    bl OSDisableInterrupts
    mr r28, r3
    mr r3, r31
    li r26, 0x0
    b lbl_80210C44
lbl_80210C34:
    clrlwi. r0, r3, 31
    beq lbl_80210C40
    addi r26, r26, 0x1
lbl_80210C40:
    srwi r3, r3, 1
lbl_80210C44:
    cmpwi r3, 0x0
    bne lbl_80210C34
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpw r26, r3
    ble lbl_80210C84
    mr r3, r28
    bl OSRestoreInterrupts
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_80210D48
lbl_80210C84:
    mr r27, r29
    li r26, 0x0
    b lbl_80210D00
lbl_80210C90:
    clrlwi. r0, r31, 31
    beq lbl_80210CF4
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r25, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r26, 0xf
    ble lbl_80210CD8
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80210CF4
lbl_80210CD8:
    stw r25, 0x120(r27)
    mr r3, r25
    mr r4, r26
    bl SetPlayerTrackNo__Q44nw4r3snd6detail8SeqTrackFi
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80210CF4:
    srwi r31, r31, 1
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_80210D00:
    cmpwi r31, 0x0
    bne lbl_80210C90
    mr r3, r28
    bl OSRestoreInterrupts
    cmpwi r29, 0x0
    mr r27, r29
    beq lbl_80210D20
    addi r27, r29, 0xd4
lbl_80210D20:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r27
    bl RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x1
    stw r30, 0x114(r29)
    stb r0, 0xec(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
lbl_80210D48:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl
// ----------------------------------------------------------------------------
extern "C" asm void SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl() {
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
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r29, 0x0
    lwz r31, 0x120(r31)
    beq lbl_80210DB4
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
    mr r3, r31
    bl Open__Q44nw4r3snd6detail8SeqTrackFv
lbl_80210DB4:
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
// Start__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Start__Q44nw4r3snd6detail9SeqPlayerFv() {
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
    beq lbl_80210E10
    addi r31, r30, 0xe0
lbl_80210E10:
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
// Stop__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r28)
    cmpwi r0, 0x0
    beq lbl_80210EB4
    cmpwi r28, 0x0
    mr r30, r28
    beq lbl_80210EA0
    addi r30, r28, 0xe0
lbl_80210EA0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r30
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r28)
lbl_80210EB4:
    lbz r0, 0xec(r28)
    cmpwi r0, 0x0
    beq lbl_80210EE4
    cmpwi r28, 0x0
    mr r30, r28
    beq lbl_80210ED0
    addi r30, r28, 0xd4
lbl_80210ED0:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r30
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r28)
lbl_80210EE4:
    mr r29, r28
    li r30, 0x0
    li r31, 0x0
lbl_80210EF0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r30, 0xf
    ble lbl_80210F0C
    li r3, 0x0
    b lbl_80210F10
lbl_80210F0C:
    lwz r3, 0x120(r29)
lbl_80210F10:
    cmpwi r3, 0x0
    bne lbl_80210F28
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80210F54
lbl_80210F28:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r28)
    lwz r4, 0x120(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r31, 0x120(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80210F54:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x10
    blt lbl_80210EF0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
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
// Pause__Q44nw4r3snd6detail9SeqPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void Pause__Q44nw4r3snd6detail9SeqPlayerFb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    stb r30, 0xee(r29)
    li r31, 0x0
lbl_80210FD0:
    cmpwi r31, 0xf
    ble lbl_80210FE0
    li r3, 0x0
    b lbl_80210FE4
lbl_80210FE0:
    lwz r3, 0x120(r29)
lbl_80210FE4:
    cmpwi r3, 0x0
    beq lbl_80210FF4
    mr r4, r30
    bl PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb
lbl_80210FF4:
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x10
    blt lbl_80210FD0
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
// Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei() {
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
    bne lbl_80211078
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802110D4
lbl_80211078:
    cmpwi r30, 0x1
    beq lbl_802110A0
    bge lbl_802110C8
    cmpwi r30, 0x0
    bge lbl_80211090
    b lbl_802110C8
lbl_80211090:
    lwz r0, 0xfc(r29)
    add r0, r0, r31
    stw r0, 0xfc(r29)
    b lbl_802110C8
lbl_802110A0:
    xoris r3, r31, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_804A2188
    stw r0, 0x8(r1)
    lfs f0, 0x100(r29)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x100(r29)
lbl_802110C8:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802110D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetChannelPriority__Q44nw4r3snd6detail9SeqPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void SetChannelPriority__Q44nw4r3snd6detail9SeqPlayerFi() {
    nofralloc
    stb r4, 0x109(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetReleasePriorityFix__Q44nw4r3snd6detail9SeqPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void SetReleasePriorityFix__Q44nw4r3snd6detail9SeqPlayerFb() {
    nofralloc
    stb r4, 0xef(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void SetSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv() {
    nofralloc
    stw r4, 0x118(r3)
    stw r5, 0x11c(r3)
    blr
}

// ----------------------------------------------------------------------------
// CallSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFUsPQ44nw4r3snd6detail8SeqTrack
// ----------------------------------------------------------------------------
extern "C" asm void CallSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFUsPQ44nw4r3snd6detail8SeqTrack() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x118(r3)
    cmpwi r0, 0x0
    beq lbl_80211188
    lis r5, lbl_804043C0@ha
    addi r0, r3, 0x160
    addi r5, r5, lbl_804043C0@l
    stw r0, 0x8(r1)
    mr r3, r31
    li r4, 0x0
    stw r5, 0xc(r1)
    bl GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi
    stw r3, 0x10(r1)
    mr r3, r30
    addi r4, r1, 0x8
    lbz r0, 0x24(r31)
    stb r0, 0x14(r1)
    lwz r12, 0x118(r29)
    lwz r5, 0x11c(r29)
    mtctr r12
    bctrl
    lbz r0, 0x14(r1)
    stb r0, 0x24(r31)
lbl_80211188:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r5
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_80211344
    li r0, 0x10
    mr r4, r31
    li r5, 0x0
    mtctr r0
lbl_802111F4:
    cmpwi r5, 0xf
    ble lbl_80211204
    li r3, 0x0
    b lbl_80211208
lbl_80211204:
    lwz r3, 0x120(r4)
lbl_80211208:
    cmpwi r3, 0x0
    beq lbl_80211338
    lwz r0, 0x1c(r3)
    cmplw r29, r0
    bgt lbl_80211338
    cmplw r0, r28
    bgt lbl_80211338
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    beq lbl_8021126C
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_80211258
    addi r29, r31, 0xe0
lbl_80211258:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r29
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r31)
lbl_8021126C:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_8021129C
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_80211288
    addi r29, r31, 0xd4
lbl_80211288:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r29
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_8021129C:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_802112A8:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r29, 0xf
    ble lbl_802112C4
    li r3, 0x0
    b lbl_802112C8
lbl_802112C4:
    lwz r3, 0x120(r28)
lbl_802112C8:
    cmpwi r3, 0x0
    bne lbl_802112E0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_8021130C
lbl_802112E0:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r31)
    lwz r4, 0x120(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x120(r28)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_8021130C:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_802112A8
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80211344
lbl_80211338:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_802111F4
lbl_80211344:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
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
// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi() {
    nofralloc
    cmpwi r4, 0xf
    ble lbl_80211380
    li r3, 0x0
    blr
lbl_80211380:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x120(r3)
    blr
}

// ----------------------------------------------------------------------------
// ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb
// ----------------------------------------------------------------------------
extern "C" asm void ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r29, r25
    li r28, 0x0
    li r27, 0x0
    li r31, 0x0
lbl_802113C8:
    cmpwi r27, 0xf
    ble lbl_802113D8
    li r30, 0x0
    b lbl_802113DC
lbl_802113D8:
    lwz r30, 0x120(r29)
lbl_802113DC:
    cmpwi r30, 0x0
    beq lbl_80211474
    mr r3, r30
    bl UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv
    mr r3, r30
    mr r4, r26
    bl ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
    cmpwi r3, 0x0
    bge lbl_80211464
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r27, 0xf
    ble lbl_8021141C
    li r3, 0x0
    b lbl_80211420
lbl_8021141C:
    lwz r3, 0x120(r29)
lbl_80211420:
    cmpwi r3, 0x0
    bne lbl_80211438
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80211464
lbl_80211438:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r25)
    lwz r4, 0x120(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r31, 0x120(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80211464:
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    beq lbl_80211474
    li r28, 0x1
lbl_80211474:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0x10
    blt lbl_802113C8
    cmpwi r28, 0x0
    bne lbl_802114A0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_802114B0
lbl_802114A0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
lbl_802114B0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi() {
    nofralloc
    cmpwi r4, 0x10
    bge lbl_802114E0
    slwi r0, r4, 1
    add r3, r3, r0
    addi r3, r3, 0x160
    blr
lbl_802114E0:
    cmpwi r4, 0x20
    li r3, 0x0
    bgelr
    subi r0, r4, 0x10
    lis r3, lbl_804043C0@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_804043C0@l
    add r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail9SeqPlayerFv() {
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
    lbz r0, 0xec(r30)
    cmpwi r0, 0x0
    bne lbl_80211544
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802115F8
lbl_80211544:
    lbz r0, 0xed(r30)
    cmpwi r0, 0x0
    bne lbl_80211560
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802115F8
lbl_80211560:
    lwz r0, 0xfc(r30)
    cmpwi r0, 0x0
    bne lbl_8021157C
    lfs f1, 0x100(r30)
    lfs f0, lbl_804A2184
    fcmpo cr0, f1, f0
    ble lbl_80211588
lbl_8021157C:
    mr r3, r30
    bl SkipTick__Q44nw4r3snd6detail9SeqPlayerFv
    b lbl_802115A0
lbl_80211588:
    lbz r0, 0xee(r30)
    cmpwi r0, 0x0
    bne lbl_802115A0
    mr r3, r30
    li r4, 0x3
    bl UpdateTick__Q44nw4r3snd6detail9SeqPlayerFi
lbl_802115A0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    li r31, 0x0
lbl_802115B0:
    cmpwi r31, 0xf
    ble lbl_802115C0
    li r3, 0x0
    b lbl_802115C4
lbl_802115C0:
    lwz r3, 0x120(r30)
lbl_802115C4:
    cmpwi r3, 0x0
    beq lbl_802115D0
    bl UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
lbl_802115D0:
    addi r31, r31, 0x1
    addi r30, r30, 0x4
    cmpwi r31, 0x10
    blt lbl_802115B0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802115F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// UpdateTick__Q44nw4r3snd6detail9SeqPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void UpdateTick__Q44nw4r3snd6detail9SeqPlayerFi() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    stfd f27, 0x20(r1)
    opword 0xF3610028
    lfd f28, lbl_804A2188
    stw r31, 0x1c(r1)
    mr r31, r3
    lfs f29, lbl_804A2190
    stw r30, 0x18(r1)
    lis r30, 0x4330
    lfs f30, lbl_804A2184
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r5, 0x10a(r3)
    lhz r0, 0x10c(r3)
    stw r30, 0x8(r1)
    mullw r0, r5, r0
    lfs f0, 0xf4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f28
    fmuls f0, f0, f1
    fdivs f1, f0, f29
    fcmpu cr0, f30, f1
    beq lbl_8021182C
    lfs f0, 0xf8(r3)
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    fdivs f2, f0, f1
    lfs f31, lbl_804A2180
    stw r30, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f27, f0, f28
    b lbl_80211818
lbl_802116C0:
    fsubs f27, f27, f2
    mr r3, r31
    li r4, 0x1
    bl ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb
    cmpwi r3, 0x0
    beq lbl_802117D4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    beq lbl_80211714
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_80211700
    addi r29, r31, 0xe0
lbl_80211700:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r29
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r31)
lbl_80211714:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_80211744
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_80211730
    addi r29, r31, 0xd4
lbl_80211730:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r29
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_80211744:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_80211750:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r29, 0xf
    ble lbl_8021176C
    li r3, 0x0
    b lbl_80211770
lbl_8021176C:
    lwz r3, 0x120(r28)
lbl_80211770:
    cmpwi r3, 0x0
    bne lbl_80211788
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802117B4
lbl_80211788:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r31)
    lwz r4, 0x120(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x120(r28)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802117B4:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_80211750
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_8021182C
lbl_802117D4:
    lbz r3, 0x10a(r31)
    lhz r0, 0x10c(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lwz r4, 0x180(r31)
    lfs f0, 0xf4(r31)
    addi r3, r4, 0x1
    stw r3, 0x180(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f28
    fmuls f0, f0, f1
    fdivs f1, f0, f29
    fcmpu cr0, f30, f1
    beq lbl_8021182C
    fdivs f2, f31, f1
lbl_80211818:
    fcmpo cr0, f2, f27
    blt lbl_802116C0
    fsubs f2, f2, f27
    fmuls f0, f2, f1
    stfs f0, 0xf8(r31)
lbl_8021182C:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    opword 0xE3610028
    lfd f27, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x74(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// SkipTick__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void SkipTick__Q44nw4r3snd6detail9SeqPlayerFv() {
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
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r31
lbl_802118B4:
    cmpwi r29, 0xf
    ble lbl_802118C4
    li r30, 0x0
    b lbl_802118C8
lbl_802118C4:
    lwz r30, 0x120(r28)
lbl_802118C8:
    cmpwi r30, 0x0
    beq lbl_802118E4
    mr r3, r30
    li r4, 0x7f
    bl ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
    mr r3, r30
    bl FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
lbl_802118E4:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_802118B4
    lfd f29, lbl_804A2188
    li r28, 0x0
    lfs f30, lbl_804A2190
    lis r30, 0x4330
    lfs f31, lbl_804A2180
    b lbl_80211A88
lbl_8021190C:
    cmpwi r28, 0x300
    bge lbl_80211ADC
    cmpwi r4, 0x0
    beq lbl_8021192C
    lwz r3, 0xfc(r31)
    subi r0, r3, 0x1
    stw r0, 0xfc(r31)
    b lbl_80211968
lbl_8021192C:
    lbz r3, 0x10a(r31)
    lhz r0, 0x10c(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lfs f1, 0xf4(r31)
    lfs f0, 0x100(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f29
    fmuls f1, f1, f2
    fdivs f1, f1, f30
    fdivs f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x100(r31)
lbl_80211968:
    mr r3, r31
    li r4, 0x0
    bl ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb
    cmpwi r3, 0x0
    beq lbl_80211A78
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0xed(r31)
    cmpwi r0, 0x0
    beq lbl_802119B8
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_802119A4
    addi r29, r31, 0xe0
lbl_802119A4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    mr r4, r29
    bl UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
    li r0, 0x0
    stb r0, 0xed(r31)
lbl_802119B8:
    lbz r0, 0xec(r31)
    cmpwi r0, 0x0
    beq lbl_802119E8
    cmpwi r31, 0x0
    mr r29, r31
    beq lbl_802119D4
    addi r29, r31, 0xd4
lbl_802119D4:
    bl GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
    mr r4, r29
    bl UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
    li r0, 0x0
    stb r0, 0xec(r31)
lbl_802119E8:
    mr r28, r31
    li r29, 0x0
    li r30, 0x0
lbl_802119F4:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r29, 0xf
    ble lbl_80211A10
    li r3, 0x0
    b lbl_80211A14
lbl_80211A10:
    lwz r3, 0x120(r28)
lbl_80211A14:
    cmpwi r3, 0x0
    bne lbl_80211A2C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80211A58
lbl_80211A2C:
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r3, 0x114(r31)
    lwz r4, 0x120(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    stw r30, 0x120(r28)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80211A58:
    addi r29, r29, 0x1
    addi r28, r28, 0x4
    cmpwi r29, 0x10
    blt lbl_802119F4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80211ADC
lbl_80211A78:
    lwz r3, 0x180(r31)
    addi r28, r28, 0x1
    addi r0, r3, 0x1
    stw r0, 0x180(r31)
lbl_80211A88:
    lwz r4, 0xfc(r31)
    cmpwi r4, 0x0
    bne lbl_8021190C
    lbz r3, 0x10a(r31)
    lhz r0, 0x10c(r31)
    stw r30, 0x8(r1)
    mullw r0, r3, r0
    lfs f1, 0xf4(r31)
    lfs f0, 0x100(r31)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f29
    fmuls f1, f1, f2
    fdivs f1, f1, f30
    fmuls f0, f0, f1
    fcmpo cr0, f0, f31
    opword 0x4C411382
    beq lbl_8021190C
    lfs f0, lbl_804A2184
    stfs f0, 0x100(r31)
lbl_80211ADC:
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x54(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
// ----------------------------------------------------------------------------
extern "C" asm void NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo() {
    nofralloc
    mr r7, r3
    lwz r3, 0x110(r3)
    mr r0, r4
    mr r6, r5
    lwz r12, 0x0(r3)
    mr r4, r7
    mr r5, r0
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// ChannelCallback__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail7Channel
// ----------------------------------------------------------------------------
extern "C" asm void ChannelCallback__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail7Channel() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80211B40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80211B40() {
    nofralloc
    subi r3, r3, 0xd4
    b __dt__Q44nw4r3snd6detail9SeqPlayerFv
}

// ----------------------------------------------------------------------------
// fn_80211B48
// ----------------------------------------------------------------------------
extern "C" asm void fn_80211B48() {
    nofralloc
    subi r3, r3, 0xe0
    b __dt__Q44nw4r3snd6detail9SeqPlayerFv
}

