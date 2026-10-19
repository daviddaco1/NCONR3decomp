#include "types.h"

// Translation unit: src/nw4r/snd/snd_MmlSeqTrack.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362788[];

// Forward declarations
extern "C" void Parse__Q44nw4r3snd6detail11MmlSeqTrackFb();
extern "C" void Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb();
extern "C" void __ct__Q44nw4r3snd6detail11MmlSeqTrackFv();
extern "C" void __ct__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void __dt__Q44nw4r3snd6detail11MmlSeqTrackFv();
extern "C" void __dt__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail11MmlSeqTrackFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail11MmlSeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q44nw4r3snd6detail8SeqTrackFv
    lis r4, lbl_80362788@ha
    mr r3, r31
    addi r4, r4, lbl_80362788@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Parse__Q44nw4r3snd6detail11MmlSeqTrackFb
// ----------------------------------------------------------------------------
extern "C" asm void Parse__Q44nw4r3snd6detail11MmlSeqTrackFb() {
    nofralloc
    mr r0, r3
    lwz r3, 0xc8(r3)
    mr r5, r4
    mr r4, r0
    b Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail11MmlSeqTrackFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail11MmlSeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8020F66C
    li r4, 0x0
    bl __dt__Q44nw4r3snd6detail8SeqTrackFv
    cmpwi r31, 0x0
    ble lbl_8020F66C
    mr r3, r30
    bl dtor_80136CFC
lbl_8020F66C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

