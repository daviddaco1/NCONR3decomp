#include "types.h"

// Translation unit: src/revolution/gx/unk_802E101C.cpp
// Total functions: 5

// Small Data symbols (@sda21)
extern float __GXData;
extern float __memReg;

// Forward declarations
extern void GXSetMisc();
extern void OSGetTime();
extern void PPCMfwpar();
extern void PPCMtwpar();
extern void PPCSync();
extern void __GXCleanGPFifo();
extern void __GXInitRevisionBits();
extern void __GXIsGPFifoReady();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_802E10A8();
extern void fn_802E1104();
extern void fn_802E1138();
extern void fn_802E129C();
extern void fn_802E1844();

// ----------------------------------------------------------------------------
// GXSetMisc
// ----------------------------------------------------------------------------
asm void GXSetMisc() {
    nofralloc
    cmpwi r3, 0x2
    beq lbl_802E1078
    bge lbl_802E1038
    cmpwi r3, 0x0
    beqlr
    bge lbl_802E1044
    blr
lbl_802E1038:
    cmpwi r3, 0x4
    bgelr
    b lbl_802E1090
lbl_802E1044:
    clrlwi. r0, r4, 16
    lwz r5, __GXData
    sth r4, 0x4(r5)
    cntlzw r3, r0
    li r0, 0x1
    extrwi r3, r3, 16, 11
    sth r3, 0x0(r5)
    sth r0, 0x2(r5)
    beqlr
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r5)
    blr
lbl_802E1078:
    neg r0, r4
    lwz r3, __GXData
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x5f9(r3)
    blr
lbl_802E1090:
    neg r0, r4
    lwz r3, __GXData
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x5fa(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E10A8
// ----------------------------------------------------------------------------
asm void fn_802E10A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, __GXData
    stw r0, 0x14(r1)
    lwz r0, 0x5fc(r3)
    cmpwi r0, 0x0
    beq lbl_802E10C8
    bl fn_802E1844
lbl_802E10C8:
    li r0, 0x0
    lis r3, 0xcc01
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    bl PPCSync
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1104
// ----------------------------------------------------------------------------
asm void fn_802E1104() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
lbl_802E1110:
    bl PPCMfwpar
    clrlwi. r0, r3, 31
    bne lbl_802E1110
    lis r3, 0xc01
    addi r3, r3, -0x8000
    bl PPCMtwpar
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802E1138
// ----------------------------------------------------------------------------
asm void fn_802E1138() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r3, __GXData
    lbz r0, 0x5fa(r3)
    cmpwi r0, 0x0
    beq lbl_802E11F8
    bl __GXIsGPFifoReady
    clrlwi. r0, r3, 24
    beq lbl_802E11F8
    lwz r5, __memReg
    lhz r0, 0x4e(r5)
lbl_802E1170:
    mr r3, r0
    lhz r4, 0x50(r5)
    lhz r0, 0x4e(r5)
    cmplw r0, r3
    bne lbl_802E1170
    slwi r3, r0, 16
    li r0, 0x0
    or r27, r3, r4
    li r29, 0x8
    xoris r28, r0, 0x8000
lbl_802E1198:
    bl OSGetTime
    mr r31, r4
    mr r30, r3
lbl_802E11A4:
    bl OSGetTime
    subfc r4, r31, r4
    subfe r0, r30, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_802E11A4
    lwz r5, __memReg
    lhz r0, 0x4e(r5)
lbl_802E11D0:
    mr r3, r0
    lhz r4, 0x50(r5)
    lhz r0, 0x4e(r5)
    cmplw r0, r3
    bne lbl_802E11D0
    slwi r0, r0, 16
    or r0, r0, r4
    cmplw r0, r27
    mr r27, r0
    bne lbl_802E1198
lbl_802E11F8:
    li r0, 0x1
    lis r3, 0xcc00
    stw r0, 0x3018(r3)
    bl OSGetTime
    li r0, 0x0
    mr r31, r4
    mr r30, r3
    li r29, 0x32
    xoris r28, r0, 0x8000
lbl_802E121C:
    bl OSGetTime
    subfc r4, r31, r4
    subfe r0, r30, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r28
    subfe r3, r28, r28
    neg. r3, r3
    beq lbl_802E121C
    li r30, 0x0
    lis r3, 0xcc00
    stw r30, 0x3018(r3)
    bl OSGetTime
    xoris r31, r30, 0x8000
    mr r28, r4
    mr r29, r3
    li r30, 0x5
lbl_802E1260:
    bl OSGetTime
    subfc r4, r28, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r30
    subfe r3, r3, r31
    subfe r3, r31, r31
    neg. r3, r3
    beq lbl_802E1260
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802E129C
// ----------------------------------------------------------------------------
asm void fn_802E129C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r31, __GXData
    lbz r0, 0x5fa(r31)
    cmpwi r0, 0x0
    beq lbl_802E135C
    bl __GXIsGPFifoReady
    clrlwi. r0, r3, 24
    beq lbl_802E135C
    lwz r5, __memReg
    lhz r3, 0x4e(r5)
lbl_802E12D4:
    mr r0, r3
    lhz r4, 0x50(r5)
    lhz r3, 0x4e(r5)
    cmplw r3, r0
    bne lbl_802E12D4
    slwi r3, r3, 16
    li r0, 0x0
    or r26, r3, r4
    li r28, 0x8
    xoris r27, r0, 0x8000
lbl_802E12FC:
    bl OSGetTime
    mr r30, r4
    mr r29, r3
lbl_802E1308:
    bl OSGetTime
    subfc r4, r30, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r28
    subfe r3, r3, r27
    subfe r3, r27, r27
    neg. r3, r3
    beq lbl_802E1308
    lwz r5, __memReg
    lhz r4, 0x4e(r5)
lbl_802E1334:
    mr r0, r4
    lhz r3, 0x50(r5)
    lhz r4, 0x4e(r5)
    cmplw r4, r0
    bne lbl_802E1334
    slwi r0, r4, 16
    or r0, r0, r3
    cmplw r0, r26
    mr r26, r0
    bne lbl_802E12FC
lbl_802E135C:
    li r0, 0x1
    lis r3, 0xcc00
    stw r0, 0x3018(r3)
    bl OSGetTime
    li r0, 0x0
    mr r30, r4
    mr r29, r3
    li r28, 0x32
    xoris r27, r0, 0x8000
lbl_802E1380:
    bl OSGetTime
    subfc r4, r30, r4
    subfe r0, r29, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r28
    subfe r3, r3, r27
    subfe r3, r27, r27
    neg. r3, r3
    beq lbl_802E1380
    li r29, 0x0
    lis r3, 0xcc00
    stw r29, 0x3018(r3)
    bl OSGetTime
    xoris r30, r29, 0x8000
    mr r27, r4
    mr r28, r3
    li r29, 0x5
lbl_802E13C4:
    bl OSGetTime
    subfc r4, r27, r4
    subfe r0, r28, r3
    xoris r3, r0, 0x8000
    subfc r0, r4, r29
    subfe r3, r3, r30
    subfe r3, r30, r30
    neg. r3, r3
    beq lbl_802E13C4
    bl __GXIsGPFifoReady
    clrlwi. r0, r3, 24
    beq lbl_802E1438
    bl __GXCleanGPFifo
    bl __GXInitRevisionBits
    li r0, 0x0
    stw r0, 0x5fc(r31)
    b lbl_802E140C
    bl fn_802E1844
lbl_802E140C:
    li r0, 0x0
    lis r3, 0xcc01
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    stw r0, -0x8000(r3)
    bl PPCSync
lbl_802E1438:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

