#include "types.h"

// Translation unit: src/revolution/si/SISamplingRate.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern float SamplingRate_8049E418;

// Global data symbols (@ha/@l)
extern u8 XYNTSC_8038DB30[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void SISetSamplingRate();
extern void SISetXY();
extern void VIGetTvFormat();
extern void fn_803260C4();

// ----------------------------------------------------------------------------
// SISetSamplingRate
// ----------------------------------------------------------------------------
asm void SISetSamplingRate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r3, 0xb
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, XYNTSC_8038DB30@ha
    addi r31, r31, XYNTSC_8038DB30@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    ble lbl_8032601C
    li r29, 0xb
lbl_8032601C:
    bl OSDisableInterrupts
    stw r29, SamplingRate_8049E418
    mr r30, r3
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl_80326054
    bge lbl_80326048
    cmpwi r3, 0x0
    beq lbl_80326054
    bge lbl_8032605C
    b lbl_80326064
lbl_80326048:
    cmpwi r3, 0x5
    beq lbl_80326054
    b lbl_80326064
lbl_80326054:
    addi r5, r31, 0x0
    b lbl_80326078
lbl_8032605C:
    addi r5, r31, 0x30
    b lbl_80326078
lbl_80326064:
    addi r3, r31, 0x60
    opword 0x4CC63182
    bl OSReport
    li r29, 0x0
    addi r5, r31, 0x0
lbl_80326078:
    lis r3, 0xcc00
    slwi r0, r29, 2
    lhz r4, 0x206c(r3)
    add r3, r5, r0
    lhzx r0, r5, r0
    clrlwi r5, r4, 31
    lbz r4, 0x2(r3)
    addi r3, r5, 0x1
    mullw r3, r3, r0
    bl SISetXY
    mr r3, r30
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
// fn_803260C4
// ----------------------------------------------------------------------------
asm void fn_803260C4() {
    nofralloc
    lwz r3, SamplingRate_8049E418
    b SISetSamplingRate
}

