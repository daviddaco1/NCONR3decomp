#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/dolphin_trk.cpp
// Total functions: 8

// Small Data symbols (@sda21)
float lbl_8049D8F8;

// Global data symbols (@ha/@l)
u8 _db_stack_addr[];
u8 gTRKCPUState[];
u8 gTRKInterruptVectorTable[];
u8 gTRKState[];
u8 lbl_80360130[];

// Forward declarations
void EnableMetroTRKInterrupts();
void InitMetroTRK();
void InitMetroTRKCommTable();
void InitMetroTRK_BBA();
void OSResetSystem();
void TRKInitializeTarget();
void TRKSaveExtended1Block();
void TRK_main();
void fn_801A39CC();
void fn_801A3B2C();
void fn_801A3FE0();
void fn_801A4048();
void fn_801A41C4();
void fn_801A4424();
void fn_801A6D50();
void gap_03_801A3F44_text();

// ----------------------------------------------------------------------------
// InitMetroTRK
// ----------------------------------------------------------------------------
asm void InitMetroTRK() {
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    xori r3, r3, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000 /* illegal: lmw r0, 0x0(r3) */
    li r0, 0x0
    mtspr IABR, r0
    mtspr DABR, r0
    lis r1, _db_stack_addr@h
    ori r1, r1, _db_stack_addr@l
    mr r3, r5
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne lbl_801A3F40
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000 /* illegal: lmw r0, 0x0(r3) */
    blr
lbl_801A3F40:
    b TRK_main
}

// ----------------------------------------------------------------------------
// gap_03_801A3F44_text
// ----------------------------------------------------------------------------
asm void gap_03_801A3F44_text() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// InitMetroTRK_BBA
// ----------------------------------------------------------------------------
asm void InitMetroTRK_BBA() {
    nofralloc
    subi r1, r1, 0x4
    stw r3, 0x0(r1)
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    stmw r0, 0x0(r3)
    lwz r4, 0x0(r1)
    addi r1, r1, 0x4
    stw r1, 0x4(r3)
    stw r4, 0xc(r3)
    mflr r4
    stw r4, 0x84(r3)
    stw r4, 0x80(r3)
    mfcr r4
    stw r4, 0x88(r3)
    mfmsr r4
    ori r3, r4, 0x8000
    mtmsr r3
    mtsrr1 r4
    bl TRKSaveExtended1Block
    lis r3, gTRKCPUState@h
    ori r3, r3, gTRKCPUState@l
    opword 0xB8030000 /* illegal: lmw r0, 0x0(r3) */
    li r0, 0x0
    mtspr IABR, r0
    mtspr DABR, r0
    lis r1, _db_stack_addr@h
    ori r1, r1, _db_stack_addr@l
    li r3, 0x2
    bl InitMetroTRKCommTable
    cmpwi r3, 0x1
    bne lbl_801A3FD4
    lwz r4, 0x84(r3)
    mtlr r4
    opword 0xB8030000 /* illegal: lmw r0, 0x0(r3) */
    blr
lbl_801A3FD4:
    b TRK_main
    blr
}

// ----------------------------------------------------------------------------
// EnableMetroTRKInterrupts
// ----------------------------------------------------------------------------
asm void EnableMetroTRKInterrupts() {
    nofralloc
    b fn_801A4424
}

// ----------------------------------------------------------------------------
// fn_801A3FE0
// ----------------------------------------------------------------------------
asm void fn_801A3FE0() {
    nofralloc
    lwz r4, lbl_8049D8F8
    cmplw r3, r4
    blt lbl_801A400C
    addi r0, r4, 0x4000
    cmplw r3, r0
    bge lbl_801A400C
    lis r4, gTRKCPUState@ha
    addi r4, r4, gTRKCPUState@l
    lwz r0, 0x238(r4)
    clrlwi. r0, r0, 30
    bnelr
lbl_801A400C:
    lis r0, 0x300
    cmplw r3, r0
    bge lbl_801A4024
    clrlwi r0, r3, 2
    oris r3, r0, 0x8000
    blr
lbl_801A4024:
    lis r0, 0x1000
    cmplw r3, r0
    bltlr
    lis r0, 0x1c00
    cmplw r3, r0
    bgelr
    clrlwi r0, r3, 2
    oris r3, r0, 0x9000
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4048
// ----------------------------------------------------------------------------
asm void fn_801A4048() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    lwz r3, lbl_8049D8F8
    cmplwi r3, 0x44
    bgt lbl_801A408C
    addi r0, r3, 0x4000
    cmplwi r0, 0x44
    ble lbl_801A408C
    lis r3, gTRKCPUState@ha
    addi r3, r3, gTRKCPUState@l
    lwz r0, 0x238(r3)
    clrlwi. r0, r0, 30
    beq lbl_801A408C
    li r3, 0x44
    b lbl_801A4094
lbl_801A408C:
    lis r3, 0x8000
    addi r3, r3, 0x44
lbl_801A4094:
    lis r31, lbl_80360130@ha
    lis r24, gTRKCPUState@ha
    lis r28, gTRKInterruptVectorTable@ha
    lwz r29, 0x0(r3)
    addi r31, r31, lbl_80360130@l
    addi r24, r24, gTRKCPUState@l
    addi r28, r28, gTRKInterruptVectorTable@l
    li r30, 0x0
    lis r25, 0x300
    lis r27, 0x1c00
    lis r26, 0x1000
    li r23, 0x1
lbl_801A40C4:
    slw r0, r23, r30
    and. r0, r29, r0
    beq lbl_801A4158
    cmpwi r30, 0x4
    beq lbl_801A4158
    lwz r4, 0x0(r31)
    lwz r3, lbl_8049D8F8
    cmplw r4, r3
    blt lbl_801A4108
    addi r0, r3, 0x4000
    cmplw r4, r0
    bge lbl_801A4108
    lwz r0, 0x238(r24)
    clrlwi. r0, r0, 30
    beq lbl_801A4108
    mr r22, r4
    b lbl_801A413C
lbl_801A4108:
    cmplw r4, r25
    bge lbl_801A411C
    clrlwi r0, r4, 2
    oris r22, r0, 0x8000
    b lbl_801A413C
lbl_801A411C:
    cmplw r4, r26
    blt lbl_801A4138
    cmplw r4, r27
    bge lbl_801A4138
    clrlwi r0, r4, 2
    oris r22, r0, 0x9000
    b lbl_801A413C
lbl_801A4138:
    mr r22, r4
lbl_801A413C:
    mr r3, r22
    add r4, r28, r4
    li r5, 0x100
    bl fn_801A3B2C
    mr r3, r22
    li r4, 0x100
    bl fn_801A39CC
lbl_801A4158:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xe
    ble lbl_801A40C4
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// TRKInitializeTarget
// ----------------------------------------------------------------------------
asm void TRKInitializeTarget() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    lis r31, gTRKState@ha
    addi r31, r31, gTRKState@l
    stw r0, 0x98(r31)
    bl fn_801A6D50
    stw r3, 0x8c(r31)
    lis r0, 0xe000
    li r3, 0x0
    stw r0, lbl_8049D8F8
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A41C4
// ----------------------------------------------------------------------------
asm void fn_801A41C4() {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    b OSResetSystem
}

