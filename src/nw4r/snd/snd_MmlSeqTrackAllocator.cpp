#include "types.h"

// Translation unit: src/nw4r/snd/snd_MmlSeqTrackAllocator.cpp
// Total functions: 6

// Forward declarations
extern "C" void AllocImpl__Q44nw4r3snd6detail8PoolImplFv();
extern "C" void AllocTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail9SeqPlayer();
extern "C" void CountImpl__Q44nw4r3snd6detail8PoolImplCFv();
extern "C" void CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl();
extern "C" void Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl();
extern "C" void DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl();
extern "C" void Destroy__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void FreeTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail8SeqTrack();
extern "C" void GetAllocatableTrackCount__Q44nw4r3snd6detail20MmlSeqTrackAllocatorCFv();
extern "C" void __ct__Q44nw4r3snd6detail11MmlSeqTrackFv();
extern "C" void __dt__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFv();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// AllocTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail9SeqPlayer
// ----------------------------------------------------------------------------
extern "C" asm void AllocTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail9SeqPlayer() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x8
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    bne lbl_8020F6BC
    li r3, 0x0
    b lbl_8020F6C4
lbl_8020F6BC:
    beq lbl_8020F6C4
    bl __ct__Q44nw4r3snd6detail11MmlSeqTrackFv
lbl_8020F6C4:
    cmpwi r3, 0x0
    beq lbl_8020F6D8
    stw r31, 0xc0(r3)
    lwz r0, 0x4(r30)
    stw r0, 0xc8(r3)
lbl_8020F6D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// FreeTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail8SeqTrack
// ----------------------------------------------------------------------------
extern "C" asm void FreeTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail8SeqTrack() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0xc0(r4)
    beq lbl_8020F740
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    mr r4, r31
    addi r3, r30, 0x8
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8020F740:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl() {
    nofralloc
    li r6, 0xcc
    addi r3, r3, 0x8
    b CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
}

// ----------------------------------------------------------------------------
// Destroy__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Destroy__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl() {
    nofralloc
    addi r3, r3, 0x8
    b DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
}

// ----------------------------------------------------------------------------
// GetAllocatableTrackCount__Q44nw4r3snd6detail20MmlSeqTrackAllocatorCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetAllocatableTrackCount__Q44nw4r3snd6detail20MmlSeqTrackAllocatorCFv() {
    nofralloc
    addi r3, r3, 0x8
    b CountImpl__Q44nw4r3snd6detail8PoolImplCFv
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_8020F79C
    cmpwi r4, 0x0
    ble lbl_8020F79C
    bl dtor_80136CFC
lbl_8020F79C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

