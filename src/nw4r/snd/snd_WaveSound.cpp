#include "types.h"

// Translation unit: src/nw4r/snd/snd_WaveSound.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA30;
extern "C" float lbl_8049DA98;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362A48[];

// Forward declarations
extern "C" void DetachTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundCFv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void GetRuntimeTypeInfo__Q44nw4r3snd6detail9WaveSoundCFv();
extern "C" void GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void IsPrepared__Q44nw4r3snd6detail9WaveSoundCFv();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void OnUpdatePlayerPriority__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi();
extern "C" void SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb();
extern "C" void SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb();
extern "C" void Shutdown__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Shutdown__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void __ct__Q44nw4r3snd6detail10BasicSoundFii();
extern "C" void __ct__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail9WaveSoundFv();
extern "C" void __dt__Q44nw4r3snd6detail9WsdPlayerFv();
extern "C" void _restgpr_25();
extern "C" void _savegpr_25();
extern "C" void dtor_80136CFC();
extern "C" void fn_80221374();
extern "C" void fn_802216C8();
extern "C" void fn_802216D4();

// ----------------------------------------------------------------------------
// fn_80221374
// ----------------------------------------------------------------------------
extern "C" asm void fn_80221374() {
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
    lis r4, lbl_80362A48@ha
    addi r3, r30, 0x10c
    addi r4, r4, lbl_80362A48@l
    stw r4, 0x0(r30)
    bl __ct__Q44nw4r3snd6detail9WsdPlayerFv
    li r0, 0x0
    stw r31, 0x248(r30)
    mr r3, r30
    stw r0, 0x244(r30)
    stb r0, 0x24c(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9WsdPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9WsdPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80221404
    cmpwi r4, 0x0
    ble lbl_80221404
    bl dtor_80136CFC
lbl_80221404:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail9WaveSoundFPCvlQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypelPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r12, 0x0(r3)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    lwz r12, 0x20(r12)
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    mtctr r12
    bctrl
    mr r3, r25
    bl GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv
    mr r8, r3
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r9, r30
    mr r10, r31
    addi r3, r25, 0x10c
    bl Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
    cmpwi r3, 0x0
    bne lbl_80221498
    li r3, 0x0
    b lbl_802214A4
lbl_80221498:
    li r0, 0x1
    li r3, 0x1
    stb r0, 0x24c(r25)
lbl_802214A4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q44nw4r3snd6detail9WaveSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl Shutdown__Q44nw4r3snd6detail10BasicSoundFv
    lwz r30, 0x248(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_80221504
    mr r3, r31
    bl OSUnlockMutex
    b lbl_8022153C
lbl_80221504:
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
lbl_8022153C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9WaveSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80221580
    cmpwi r4, 0x0
    ble lbl_80221580
    bl dtor_80136CFC
lbl_80221580:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi
// ----------------------------------------------------------------------------
extern "C" asm void SetChannelPriority__Q44nw4r3snd6detail9WaveSoundFi() {
    nofralloc
    addi r3, r3, 0x10c
    b SetChannelPriority__Q44nw4r3snd6detail9WsdPlayerFi
}

// ----------------------------------------------------------------------------
// SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb
// ----------------------------------------------------------------------------
extern "C" asm void SetReleasePriorityFix__Q44nw4r3snd6detail9WaveSoundFb() {
    nofralloc
    addi r3, r3, 0x10c
    b SetReleasePriorityFix__Q44nw4r3snd6detail9WsdPlayerFb
}

// ----------------------------------------------------------------------------
// OnUpdatePlayerPriority__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdatePlayerPriority__Q44nw4r3snd6detail9WaveSoundFv() {
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
    ble lbl_802215E4
    li r29, 0x7f
    b lbl_802215EC
lbl_802215E4:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_802215EC:
    lwz r30, 0x248(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    addi r28, r28, 0xec
    addi r3, r30, 0x4
    mr r4, r28
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_80221648
lbl_80221618:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80221634
    li r4, 0x7f
    b lbl_8022163C
lbl_80221634:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_8022163C:
    cmpw r29, r4
    blt lbl_80221650
    lwz r3, 0x0(r3)
lbl_80221648:
    cmplw r3, r0
    bne lbl_80221618
lbl_80221650:
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
// IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv() {
    nofralloc
    lwz r3, 0x244(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// DetachTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachTempSpecialHandle__Q44nw4r3snd6detail9WaveSoundFv() {
    nofralloc
    lwz r3, 0x244(r3)
    b fn_802216D4
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail9WaveSoundCFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// IsPrepared__Q44nw4r3snd6detail9WaveSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPrepared__Q44nw4r3snd6detail9WaveSoundCFv() {
    nofralloc
    lbz r3, 0x24c(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q44nw4r3snd6detail9WaveSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q44nw4r3snd6detail9WaveSoundCFv() {
    nofralloc
    la r3, lbl_8049DA98
    blr
}

// ----------------------------------------------------------------------------
// fn_802216C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_802216C8() {
    nofralloc
    la r0, lbl_8049DA30
    stw r0, lbl_8049DA98
    blr
}

