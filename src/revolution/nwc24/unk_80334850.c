#include "types.h"

// Translation unit: src/revolution/nwc24/unk_80334850.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049E590;

// Global data symbols (@ha/@l)
extern u8 lbl_803422F8[];
extern u8 lbl_8038EDE8[];
extern u8 lbl_8038EDFC[];
extern u8 lbl_80470220[];

// Forward declarations
extern void NWC24iCloseResourceManager();
extern void NWC24iIoctlResourceManager();
extern void NWC24iOpenResourceManager();
extern void NWC24iSynchronizeRtcCounter();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSInitMutex();
extern void OSLockMutex();
extern void OSRestoreInterrupts();
extern void OSUnlockMutex();
extern void SCCheckStatus();
extern void SCGetCounterBias();
extern void __div2i();
extern void __shl2i();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_80194250();
extern void fn_8031C81C();
extern void fn_80334850();
extern void fn_803348E8();
extern void fn_80334B6C();
extern void memset();

// ----------------------------------------------------------------------------
// fn_80334850
// ----------------------------------------------------------------------------
asm void fn_80334850() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_803348E8
    mr r30, r4
    mr r31, r3
    li r29, 0x0
lbl_80334878:
    addi r0, r29, 0x1
    mr r3, r31
    mr r4, r30
    subfic r5, r0, 0x35
    bl fn_80194250
    clrlwi. r0, r4, 31
    beq lbl_803348AC
    subfic r5, r29, 0x2a
    li r4, 0x635
    li r3, 0x0
    bl __shl2i
    xor r30, r30, r4
    xor r31, r31, r3
lbl_803348AC:
    addi r29, r29, 0x1
    cmpwi r29, 0x2b
    blt lbl_80334878
    or. r0, r30, r31
    beq lbl_803348C8
    li r3, -0x25
    b lbl_803348CC
lbl_803348C8:
    li r3, 0x0
lbl_803348CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803348E8
// ----------------------------------------------------------------------------
asm void fn_803348E8() {
    nofralloc
    li r9, -0x1
    lis r7, 0x20
    lis r6, 0x5e5e
    stwu r1, -0x20(r1)
    subi r7, r7, 0x1
    and r8, r4, r9
    addi r0, r6, 0x5e5e
    stw r31, 0x1c(r1)
    and r3, r3, r7
    lis r5, 0xffff
    xor r8, r8, r0
    stw r30, 0x18(r1)
    and r8, r8, r9
    xori r3, r3, 0x5e5e
    clrlslwi r0, r8, 31, 21
    li r6, -0x100
    and r3, r3, r7
    rotrwi r8, r8, 1
    or r3, r3, r0
    stw r29, 0x14(r1)
    rlwimi r8, r3, 31, 0, 0
    lis r4, 0xff01
    srwi r7, r3, 1
    addi r5, r5, 0xff
    rotrwi r30, r8, 8
    extrwi r29, r3, 8, 15
    and r12, r7, r9
    li r0, 0x0
    rlwimi r30, r3, 23, 0, 7
    and r31, r8, r6
    rlwimi r31, r30, 0, 24, 31
    rlwinm r11, r3, 31, 16, 23
    and r30, r31, r5
    and r12, r12, r9
    rlwimi r0, r29, 8, 24, 31
    subi r4, r4, 0x1
    or r12, r12, r0
    or r11, r30, r11
    and r30, r11, r4
    clrlwi r31, r8, 24
    li r0, 0x0
    clrlslwi r11, r8, 24, 16
    lis r10, 0x100
    and r12, r12, r9
    rlwimi r0, r31, 16, 16, 31
    or r30, r30, r11
    or r29, r12, r0
    extrwi r12, r3, 8, 23
    subi r0, r10, 0x1
    li r10, 0x0
    rlwimi r10, r12, 24, 8, 31
    and r11, r29, r9
    and r12, r30, r0
    extlwi r3, r3, 8, 23
    or r3, r12, r3
    or r12, r11, r10
    and r10, r3, r9
    lis r3, lbl_803422F8@ha
    and r31, r10, r9
    rotlwi r30, r8, 16
    extrwi r11, r31, 4, 24
    addi r3, r3, lbl_803422F8@l
    rlwimi r30, r7, 16, 0, 15
    clrlwi r10, r31, 28
    and r29, r12, r6
    rotlwi r12, r8, 8
    lbzx r11, r3, r11
    rlwimi r12, r7, 8, 0, 23
    lbzx r7, r3, r10
    rlwimi r29, r30, 0, 24, 31
    slwi r8, r11, 4
    clrlslwi r10, r12, 24, 8
    and r11, r29, r5
    or r10, r11, r10
    or r7, r8, r7
    and r11, r31, r6
    li r8, 0x0
    rlwimi r11, r7, 0, 24, 31
    and r12, r10, r9
    rotrwi r10, r11, 8
    li r7, 0x0
    rlwimi r10, r12, 24, 0, 7
    and r31, r11, r5
    extrwi r11, r10, 4, 24
    and r12, r12, r9
    clrlwi r10, r10, 28
    lbzx r11, r3, r11
    lbzx r10, r3, r10
    slwi r11, r11, 4
    or r10, r11, r10
    clrlwi r11, r10, 24
    clrlslwi r10, r10, 24, 8
    rlwimi r8, r11, 8, 24, 31
    or r10, r31, r10
    or r8, r12, r8
    rotlwi r12, r10, 16
    and r11, r10, r4
    rlwimi r12, r8, 16, 0, 15
    and r10, r8, r9
    extrwi r8, r12, 4, 24
    clrlwi r4, r12, 28
    lbzx r8, r3, r8
    lbzx r4, r3, r4
    slwi r8, r8, 4
    or r4, r8, r4
    clrlwi r8, r4, 24
    clrlslwi r4, r4, 24, 16
    or r29, r11, r4
    rlwimi r7, r8, 16, 16, 31
    or r11, r10, r7
    lis r4, 0x1
    rotlwi r8, r29, 8
    and r31, r29, r0
    rlwimi r8, r11, 8, 0, 23
    and r12, r11, r9
    extrwi r10, r8, 4, 24
    subi r0, r4, 0x4c4d
    lbzx r11, r3, r10
    clrlwi r8, r8, 28
    lbzx r10, r3, r8
    li r8, 0x0
    slwi r11, r11, 4
    lis r7, 0xb3b4
    or r11, r11, r10
    clrlwi r10, r11, 24
    subi r7, r7, 0x4c4d
    rlwimi r8, r10, 24, 8, 31
    slwi r4, r11, 24
    or r10, r12, r8
    extrwi r8, r10, 4, 24
    or r12, r31, r4
    clrlwi r4, r10, 28
    lbzx r8, r3, r8
    and r11, r10, r6
    lbzx r4, r3, r4
    slwi r6, r8, 4
    and r8, r12, r9
    or r4, r6, r4
    rlwimi r11, r4, 0, 24, 31
    and r10, r8, r9
    extrwi r6, r11, 4, 16
    extrwi r4, r11, 4, 20
    lbzx r6, r3, r6
    lbzx r3, r3, r4
    and r8, r11, r5
    slwi r5, r6, 4
    and r4, r10, r9
    or r3, r5, r3
    clrlslwi r3, r3, 24, 8
    or r3, r8, r3
    clrlslwi r5, r3, 21, 10
    extrwi r3, r3, 10, 11
    rlwimi r5, r4, 10, 22, 31
    rlwimi r3, r4, 10, 0, 21
    xor r4, r3, r7
    xor r3, r5, r0
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80334B6C
// ----------------------------------------------------------------------------
asm void fn_80334B6C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r30, lbl_80470220@ha
    mr r27, r3
    mr r28, r4
    addi r30, r30, lbl_80470220@l
    bl fn_8031C81C
    cmpwi r3, 0x0
    bne lbl_80334BA4
    li r3, -0x1
    b lbl_80334BA8
lbl_80334BA4:
    li r3, 0x0
lbl_80334BA8:
    cmpwi r3, 0x0
    bge lbl_80334BB4
    b lbl_80334C9C
lbl_80334BB4:
    lwz r0, lbl_8049E590
    cmpwi r0, 0x0
    bne lbl_80334C0C
    bl OSDisableInterrupts
    lwz r0, lbl_8049E590
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80334C04
    addi r3, r30, 0x80
    bl OSInitMutex
    addi r3, r30, 0xa0
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r3, r30, 0xc0
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r0, 0x1
    stw r0, lbl_8049E590
lbl_80334C04:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80334C0C:
    addi r3, r30, 0x80
    bl OSLockMutex
    lis r31, lbl_8038EDFC@ha
    lis r4, lbl_8038EDE8@ha
    addi r3, r31, lbl_8038EDFC@l
    addi r5, r1, 0x8
    addi r4, r4, lbl_8038EDE8@l
    li r6, 0x0
    bl NWC24iOpenResourceManager
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_80334C90
    addi r6, r30, 0xa0
    stw r27, 0xa0(r30)
    lwz r4, 0x8(r1)
    addi r3, r31, lbl_8038EDFC@l
    stw r28, 0x4(r6)
    addi r8, r30, 0xc0
    li r5, 0x17
    li r7, 0x20
    li r9, 0x20
    bl NWC24iIoctlResourceManager
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_80334C74
    lwz r29, 0xc0(r30)
lbl_80334C74:
    lis r3, lbl_8038EDFC@ha
    lwz r4, 0x8(r1)
    addi r3, r3, lbl_8038EDFC@l
    bl NWC24iCloseResourceManager
    cmpwi r29, 0x0
    blt lbl_80334C90
    mr r29, r3
lbl_80334C90:
    addi r3, r30, 0x80
    bl OSUnlockMutex
    mr r3, r29
lbl_80334C9C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// NWC24iSynchronizeRtcCounter
// ----------------------------------------------------------------------------
asm void NWC24iSynchronizeRtcCounter() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
lbl_80334CCC:
    bl SCCheckStatus
    cmplwi r3, 0x2
    bne lbl_80334CE0
    li r3, -0x1
    b lbl_80334D10
lbl_80334CE0:
    cmpwi r3, 0x0
    bne lbl_80334CCC
    bl SCGetCounterBias
    mr r31, r3
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl __div2i
    subfc r31, r31, r4
    li r3, 0x0
lbl_80334D10:
    cmpwi r3, 0x0
    beq lbl_80334D1C
    b lbl_80334D30
lbl_80334D1C:
    neg r0, r30
    mr r3, r31
    or r0, r0, r30
    srwi r4, r0, 31
    bl fn_80334B6C
lbl_80334D30:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

