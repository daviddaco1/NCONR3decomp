#include "types.h"

// Translation unit: src/OS/unk_803151D0.cpp
// Total functions: 10

// Global data symbols (@ha/@l)
extern u8 at_878_8037FDC0[];

// Forward declarations
extern void DBPrintf();
extern void DCEnable();
extern void DMAErrorHandler();
extern void ICEnable();
extern void LCDisable();
extern void OSDisableInterrupts();
extern void OSDumpContext();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSetErrorHandler();
extern void PPCHalt();
extern void PPCMfhid0();
extern void PPCMfhid2();
extern void PPCMfl2cr();
extern void PPCMfmsr();
extern void PPCMthid2();
extern void PPCMtl2cr();
extern void PPCMtmsr();
extern void __OSCacheInit();
extern void fn_803151D0();
extern void fn_8031529C();
extern void fn_803152FC();
extern void fn_80315320();
extern void fn_80315344();
extern void fn_803153E4();
extern void fn_803153F0();

// ----------------------------------------------------------------------------
// fn_803151D0
// ----------------------------------------------------------------------------
asm void fn_803151D0() {
    nofralloc
    mfmsr r5
    ori r5, r5, 0x1000
    mtmsr r5
    lis r3, 0x8000
    li r4, 0x400
    mtctr r4
lbl_803151E8:
    dcbt r0, r3
    dcbst r0, r3
    addi r3, r3, 0x20
    bdnz lbl_803151E8
    mfspr r4, 920
    oris r4, r4, 0x100f
    mtspr 920, r4
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lis r3, 0xe000
    ori r3, r3, 0x2
    mtdbatl 3, r3
    ori r3, r3, 0x1fe
    mtdbatu 3, r3
    isync
    lis r3, 0xe000
    li r6, 0x200
    mtctr r6
    li r6, 0x0
lbl_8031525C:
    dcbz_l r6, r3
    addi r3, r3, 0x20
    bdnz lbl_8031525C
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    blr
}

// ----------------------------------------------------------------------------
// fn_8031529C
// ----------------------------------------------------------------------------
asm void fn_8031529C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    mr r31, r3
    bl fn_803151D0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// LCDisable
// ----------------------------------------------------------------------------
asm void LCDisable() {
    nofralloc
    lis r3, 0xe000
    li r4, 0x200
    mtctr r4
lbl_803152E0:
    dcbi r0, r3
    addi r3, r3, 0x20
    bdnz lbl_803152E0
    mfspr r4, 920
    rlwinm r4, r4, 0, 4, 2
    mtspr 920, r4
    blr
}

// ----------------------------------------------------------------------------
// fn_803152FC
// ----------------------------------------------------------------------------
asm void fn_803152FC() {
    nofralloc
    extrwi r6, r5, 5, 25
    clrlwi r4, r4, 3
    or r6, r6, r4
    mtspr DMA_U, r6
    clrlslwi r6, r5, 30, 2
    or r6, r6, r3
    ori r6, r6, 0x12
    mtspr DMA_L, r6
    blr
}

// ----------------------------------------------------------------------------
// fn_80315320
// ----------------------------------------------------------------------------
asm void fn_80315320() {
    nofralloc
    extrwi r6, r5, 5, 25
    clrlwi r3, r3, 3
    or r6, r6, r3
    mtspr DMA_U, r6
    clrlslwi r6, r5, 30, 2
    or r6, r6, r4
    ori r6, r6, 0x2
    mtspr DMA_L, r6
    blr
}

// ----------------------------------------------------------------------------
// fn_80315344
// ----------------------------------------------------------------------------
asm void fn_80315344() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r0, r5, 0x1f
    stw r31, 0x1c(r1)
    srwi r31, r0, 5
    addi r0, r31, 0x7f
    stw r30, 0x18(r1)
    srwi r30, r0, 7
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_803153B8
lbl_8031537C:
    cmplwi r31, 0x80
    bge lbl_8031539C
    mr r3, r28
    mr r4, r29
    mr r5, r31
    bl fn_80315320
    li r31, 0x0
    b lbl_803153B8
lbl_8031539C:
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl fn_80315320
    subi r31, r31, 0x80
    addi r28, r28, 0x1000
    addi r29, r29, 0x1000
lbl_803153B8:
    cmpwi r31, 0x0
    bne lbl_8031537C
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803153E4
// ----------------------------------------------------------------------------
asm void fn_803153E4() {
    nofralloc
    mfspr r4, 920
    extrwi r3, r4, 4, 4
    blr
}

// ----------------------------------------------------------------------------
// fn_803153F0
// ----------------------------------------------------------------------------
asm void fn_803153F0() {
    nofralloc
    mfspr r4, 920
    extrwi r4, r4, 4, 4
    cmpw r4, r3
    bgt fn_803153F0
    blr
}

// ----------------------------------------------------------------------------
// DMAErrorHandler
// ----------------------------------------------------------------------------
asm void DMAErrorHandler() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r4
    bne cr1, lbl_80315444
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80315444:
    lis r31, at_878_8037FDC0@ha
    stw r3, 0x8(r1)
    addi r31, r31, at_878_8037FDC0@l
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl PPCMfhid2
    mr r30, r3
    addi r3, r31, 0x30
    opword 0x4CC63182
    bl OSReport
    lwz r5, 0x19c(r29)
    mr r4, r30
    addi r3, r31, 0x48
    opword 0x4CC63182
    bl OSReport
    rlwinm. r0, r30, 0, 8, 11
    beq lbl_803154A8
    lwz r0, 0x19c(r29)
    rlwinm. r0, r0, 0, 10, 10
    bne lbl_803154C0
lbl_803154A8:
    addi r3, r31, 0x68
    opword 0x4CC63182
    bl OSReport
    mr r3, r29
    bl OSDumpContext
    bl PPCHalt
lbl_803154C0:
    addi r3, r31, 0x98
    opword 0x4CC63182
    bl OSReport
    addi r3, r31, 0xd4
    opword 0x4CC63182
    bl OSReport
    rlwinm. r0, r30, 0, 8, 8
    beq lbl_803154EC
    addi r3, r31, 0x10c
    opword 0x4CC63182
    bl OSReport
lbl_803154EC:
    rlwinm. r0, r30, 0, 9, 9
    beq lbl_80315500
    addi r3, r31, 0x14c
    opword 0x4CC63182
    bl OSReport
lbl_80315500:
    rlwinm. r0, r30, 0, 10, 10
    beq lbl_80315514
    addi r3, r31, 0x178
    opword 0x4CC63182
    bl OSReport
lbl_80315514:
    rlwinm. r0, r30, 0, 11, 11
    beq lbl_80315528
    addi r3, r31, 0x198
    opword 0x4CC63182
    bl OSReport
lbl_80315528:
    mr r3, r30
    bl PPCMthid2
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// __OSCacheInit
// ----------------------------------------------------------------------------
asm void __OSCacheInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, at_878_8037FDC0@ha
    addi r31, r31, at_878_8037FDC0@l
    stw r30, 0x8(r1)
    bl PPCMfhid0
    rlwinm. r0, r3, 0, 16, 16
    bne lbl_80315584
    bl ICEnable
    addi r3, r31, 0x1b4
    opword 0x4CC63182
    bl DBPrintf
lbl_80315584:
    bl PPCMfhid0
    rlwinm. r0, r3, 0, 17, 17
    bne lbl_803155A0
    bl DCEnable
    addi r3, r31, 0x1d0
    opword 0x4CC63182
    bl DBPrintf
lbl_803155A0:
    bl PPCMfl2cr
    clrrwi. r0, r3, 31
    bne lbl_80315650
    bl PPCMfmsr
    mr r30, r3
    sync
    li r3, 0x30
    bl PPCMtmsr
    sync
    sync
    bl PPCMfl2cr
    clrlwi r3, r3, 1
    bl PPCMtl2cr
    sync
    sync
    bl PPCMfl2cr
    clrlwi r3, r3, 1
    bl PPCMtl2cr
    sync
    bl PPCMfl2cr
    oris r3, r3, 0x20
    bl PPCMtl2cr
lbl_803155F8:
    bl PPCMfl2cr
    clrlwi. r0, r3, 31
    bne lbl_803155F8
    bl PPCMfl2cr
    rlwinm r3, r3, 0, 11, 9
    bl PPCMtl2cr
    b lbl_80315620
lbl_80315614:
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl DBPrintf
lbl_80315620:
    bl PPCMfl2cr
    clrlwi. r0, r3, 31
    bne lbl_80315614
    mr r3, r30
    bl PPCMtmsr
    bl PPCMfl2cr
    oris r0, r3, 0x8000
    rlwinm r3, r0, 0, 11, 9
    bl PPCMtl2cr
    addi r3, r31, 0x1ec
    opword 0x4CC63182
    bl DBPrintf
lbl_80315650:
    lis r4, DMAErrorHandler@ha
    li r3, 0x1
    addi r4, r4, DMAErrorHandler@l
    bl OSSetErrorHandler
    addi r3, r31, 0x204
    opword 0x4CC63182
    bl DBPrintf
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

