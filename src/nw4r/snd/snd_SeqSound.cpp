#include "types.h"

// Translation unit: src/nw4r/snd/snd_SeqSound.cpp
// Total functions: 23

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA30;
extern "C" float lbl_8049DA58;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362828[];
extern "C" u8 lbl_80362860[];

// Forward declarations
extern "C" void AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority();
extern "C" void CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task();
extern "C" void Cancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv();
extern "C" void DetachTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void Execute__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundCFv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void GetInstance__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void GetRuntimeTypeInfo__Q44nw4r3snd6detail8SeqSoundCFv();
extern "C" void GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv();
extern "C" void InitParam__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void InitParam__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void IsPrepared__Q44nw4r3snd6detail8SeqSoundCFv();
extern "C" void NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void OnCancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv();
extern "C" void OnUpdatePlayerPriority__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail8SeqSoundFi();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail8SeqSoundFb();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9SeqPlayerFb();
extern "C" void SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl();
extern "C" void SetSeqUserprocCallback__Q44nw4r3snd6detail8SeqSoundFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv();
extern "C" void SetSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv();
extern "C" void Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback();
extern "C" void Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback();
extern "C" void Shutdown__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Shutdown__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei();
extern "C" void Stop__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void __ct__Q44nw4r3snd6detail10BasicSoundFii();
extern "C" void __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv();
extern "C" void __ct__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail8SeqSoundFv();
extern "C" void __dt__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void __dt__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_80211B50();
extern "C" void fn_8021228C();
extern "C" void fn_80212298();
extern "C" void fn_8021D13C();

// ----------------------------------------------------------------------------
// fn_80211B50
// ----------------------------------------------------------------------------
extern "C" asm void fn_80211B50() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    mr r4, r5
    mr r5, r6
    stw r30, 0x8(r1)
    mr r30, r3
    bl __ct__Q44nw4r3snd6detail10BasicSoundFii
    lis r4, lbl_80362828@ha
    addi r3, r30, 0x10c
    addi r4, r4, lbl_80362828@l
    stw r4, 0x0(r30)
    bl __ct__Q44nw4r3snd6detail9SeqPlayerFv
    lis r4, lbl_80362860@ha
    li r0, 0x0
    addi r4, r4, lbl_80362860@l
    stb r0, 0x2a4(r30)
    mr r3, r30
    stb r0, 0x2a5(r30)
    stw r0, 0x290(r30)
    stw r31, 0x294(r30)
    stw r0, 0x2a0(r30)
    stw r0, 0x2a8(r30)
    stw r0, 0x4b0(r30)
    stw r0, 0x4b4(r30)
    stb r0, 0x4b8(r30)
    stw r4, 0x4ac(r30)
    stw r0, 0x4bc(r30)
    stw r0, 0x4c0(r30)
    stw r0, 0x4c8(r30)
    stw r0, 0x4cc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80211C28
    li r4, 0x0
    bl fn_8021D13C
    cmpwi r31, 0x0
    ble lbl_80211C28
    mr r3, r30
    bl dtor_80136CFC
lbl_80211C28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl InitParam__Q44nw4r3snd6detail10BasicSoundFv
    li r0, 0x0
    stw r0, 0x2a0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail8SeqSoundFPQ44nw4r3snd6detail17SeqTrackAllocatorUlPQ44nw4r3snd6detail14NoteOnCallback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv
    mr r6, r3
    mr r4, r29
    mr r5, r30
    mr r7, r31
    addi r3, r28, 0x10c
    bl Setup__Q44nw4r3snd6detail9SeqPlayerFPQ44nw4r3snd6detail17SeqTrackAllocatorUliPQ44nw4r3snd6detail14NoteOnCallback
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
// Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x10c
    bl SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl
    cmpwi r31, 0x0
    ble lbl_80211D38
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x10c
    bl Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
lbl_80211D38:
    li r0, 0x1
    stb r0, 0x2a5(r29)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r30, 0x4(r3)
    stw r4, 0x2a8(r3)
    cmpwi r30, 0x0
    stw r5, 0x298(r3)
    stw r6, 0x29c(r3)
    stw r7, 0x2a0(r3)
    stb r0, 0x2a4(r3)
    bne lbl_80211DA4
    li r0, 0x0
    b lbl_80211E18
lbl_80211DA4:
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r31, r3
    mr r3, r30
    lwz r12, 0xc(r12)
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80211DE4
    li r0, 0x0
    b lbl_80211E18
lbl_80211DE4:
    lwz r0, 0x2a8(r29)
    lis r4, NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv@ha
    addi r4, r4, NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv@l
    stw r3, 0x4c0(r29)
    stw r0, 0x4bc(r29)
    stw r31, 0x4c4(r29)
    stw r4, 0x4c8(r29)
    stw r29, 0x4cc(r29)
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    addi r4, r29, 0x4ac
    li r5, 0x1
    bl AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority
    li r0, 0x1
lbl_80211E18:
    cmpwi r0, 0x0
    bne lbl_80211E34
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_80211E34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv
// ----------------------------------------------------------------------------
extern "C" asm void NotifyLoadAsyncEndSeqData__Q44nw4r3snd6detail8SeqSoundFbPCvPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stb r0, 0x2a4(r5)
    bne lbl_80211E84
    mr r3, r31
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
    b lbl_80211EB0
lbl_80211E84:
    addi r3, r5, 0x10c
    lwz r5, 0x298(r5)
    bl SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl
    lwz r5, 0x2a0(r31)
    cmpwi r5, 0x0
    ble lbl_80211EA8
    lwz r4, 0x29c(r31)
    addi r3, r31, 0x10c
    bl Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
lbl_80211EA8:
    li r0, 0x1
    stb r0, 0x2a5(r31)
lbl_80211EB0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x2a4(r3)
    cmpwi r0, 0x0
    beq lbl_80211EF8
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    addi r4, r29, 0x4ac
    bl CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task
lbl_80211EF8:
    lwz r3, 0x2a8(r29)
    cmpwi r3, 0x0
    beq lbl_80211F1C
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x2a8(r29)
lbl_80211F1C:
    mr r3, r29
    bl Shutdown__Q44nw4r3snd6detail10BasicSoundFv
    lwz r30, 0x294(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_80211F4C
    mr r3, r31
    bl OSUnlockMutex
    b lbl_80211F84
lbl_80211F4C:
    addi r3, r30, 0x4
    addi r4, r29, 0xec
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
    mr r3, r31
    bl OSUnlockMutex
lbl_80211F84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80211FF0
    addic. r3, r3, 0x4ac
    beq lbl_80211FD4
    li r4, 0x0
    bl fn_8021D13C
lbl_80211FD4:
    addi r3, r30, 0x10c
    li r4, -0x1
    bl __dt__Q44nw4r3snd6detail9SeqPlayerFv
    cmpwi r31, 0x0
    ble lbl_80211FF0
    mr r3, r30
    bl dtor_80136CFC
lbl_80211FF0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetChannelPriority__Q44nw4r3snd6detail8SeqSoundFi
// ----------------------------------------------------------------------------
extern "C" asm void SetChannelPriority__Q44nw4r3snd6detail8SeqSoundFi() {
    nofralloc
    addi r3, r3, 0x10c
    b SetChannelPriority__Q44nw4r3snd6detail9SeqPlayerFi
}

// ----------------------------------------------------------------------------
// SetReleasePriorityFix__Q44nw4r3snd6detail8SeqSoundFb
// ----------------------------------------------------------------------------
extern "C" asm void SetReleasePriorityFix__Q44nw4r3snd6detail8SeqSoundFb() {
    nofralloc
    addi r3, r3, 0x10c
    b SetReleasePriorityFix__Q44nw4r3snd6detail9SeqPlayerFb
}

// ----------------------------------------------------------------------------
// SetSeqUserprocCallback__Q44nw4r3snd6detail8SeqSoundFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv
// ----------------------------------------------------------------------------
extern "C" asm void SetSeqUserprocCallback__Q44nw4r3snd6detail8SeqSoundFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv() {
    nofralloc
    addi r3, r3, 0x10c
    b SetSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFPFUsPQ34nw4r3snd24SeqUserprocCallbackParamPv_vPv
}

// ----------------------------------------------------------------------------
// OnUpdatePlayerPriority__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdatePlayerPriority__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r4, 0x94(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_80212060
    li r29, 0x7f
    b lbl_80212068
lbl_80212060:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_80212068:
    lwz r30, 0x294(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    addi r28, r28, 0xec
    addi r3, r30, 0x4
    mr r4, r28
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_802120C4
lbl_80212094:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_802120B0
    li r4, 0x7f
    b lbl_802120B8
lbl_802120B0:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_802120B8:
    cmpw r29, r4
    blt lbl_802120CC
    lwz r3, 0x0(r3)
lbl_802120C4:
    cmplw r3, r0
    bne lbl_80212094
lbl_802120CC:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r30, 0x4
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r31
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
// IsAttachedTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    lwz r3, 0x290(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// DetachTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachTempSpecialHandle__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    lwz r3, 0x290(r3)
    b fn_80212298
}

// ----------------------------------------------------------------------------
// Execute__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Execute__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r3, 0x10(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r3, 0x10(r31)
    lwz r4, 0x14(r31)
    lwz r12, 0x0(r3)
    lwz r5, 0x18(r31)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    cmpwi r3, -0x3
    stw r0, 0x10(r31)
    bne lbl_802121A4
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_80212208
    lwz r5, 0x20(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_80212208
lbl_802121A4:
    lwz r0, 0x18(r31)
    cmpw r3, r0
    beq lbl_802121D4
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_80212208
    lwz r5, 0x20(r31)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_80212208
lbl_802121D4:
    lwz r4, 0x14(r31)
    addi r3, r1, 0x8
    bl __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
    addi r3, r1, 0x8
    bl GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv
    lwz r12, 0x1c(r31)
    cmpwi r12, 0x0
    beq lbl_80212208
    mr r4, r3
    lwz r5, 0x20(r31)
    li r3, 0x1
    mtctr r12
    bctrl
lbl_80212208:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Cancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void Cancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv() {
    nofralloc
    lwz r12, 0x1c(r3)
    cmpwi r12, 0x0
    beqlr
    lwz r5, 0x20(r3)
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// OnCancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
// ----------------------------------------------------------------------------
extern "C" asm void OnCancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv() {
    nofralloc
    lwz r4, 0x10(r3)
    li r0, 0x0
    stw r0, 0x1c(r3)
    cmpwi r4, 0x0
    beqlr
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail8SeqSoundCFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// IsPrepared__Q44nw4r3snd6detail8SeqSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPrepared__Q44nw4r3snd6detail8SeqSoundCFv() {
    nofralloc
    lbz r3, 0x2a5(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q44nw4r3snd6detail8SeqSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q44nw4r3snd6detail8SeqSoundCFv() {
    nofralloc
    la r3, lbl_8049DA58
    blr
}

// ----------------------------------------------------------------------------
// fn_8021228C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021228C() {
    nofralloc
    la r0, lbl_8049DA30
    stw r0, lbl_8049DA58
    blr
}

