#include "types.h"

// Translation unit: src/revolution/bte/btm_dev.cpp
// Total functions: 7

// Global data symbols (@ha/@l)
extern u8 lbl_80453F78[];

// Forward declarations
extern void BTM_DeleteStoredLinkKey();
extern void BTM_GetHCIConnHandle();
extern void BTM_InqDbRead();
extern void BTM_SecAddDevice();
extern void BTM_SecDeleteDevice();
extern void BTM_SecReadDevName();
extern void _restgpr_24();
extern void _savegpr_24();
extern void btm_find_dev();
extern void btm_find_dev_by_handle();
extern void btm_find_oldest_dev();
extern void btm_sec_alloc_dev();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void strncpy();

// ----------------------------------------------------------------------------
// BTM_SecAddDevice
// ----------------------------------------------------------------------------
asm void BTM_SecAddDevice() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r9, lbl_80453F78@ha
    mr r24, r3
    addi r9, r9, lbl_80453F78@l
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    addi r30, r9, 0x1f30
    li r31, 0x0
lbl_802AD634:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802AD65C
    mr r4, r24
    addi r3, r30, 0x1c
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AD65C
    b lbl_802AD670
lbl_802AD65C:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_802AD634
    li r30, 0x0
lbl_802AD670:
    cmpwi r30, 0x0
    bne lbl_802AD694
    mr r3, r24
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802AD6AC
    li r3, 0x0
    b lbl_802AD768
lbl_802AD694:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lwz r3, 0x1974(r4)
    stw r3, 0xc(r30)
    addi r0, r3, 0x1
    stw r0, 0x1974(r4)
lbl_802AD6AC:
    cmpwi r25, 0x0
    beq lbl_802AD6C4
    mr r4, r25
    addi r3, r30, 0x22
    li r5, 0x3
    bl memcpy
lbl_802AD6C4:
    addi r3, r30, 0x35
    li r4, 0x0
    li r5, 0x41
    bl memset
    cmpwi r26, 0x0
    beq lbl_802AD704
    lbz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_802AD704
    lbz r0, 0x76(r30)
    mr r4, r26
    addi r3, r30, 0x35
    li r5, 0x40
    ori r0, r0, 0x8
    stb r0, 0x76(r30)
    bl strncpy
lbl_802AD704:
    cmpwi r27, 0x0
    beq lbl_802AD720
    mr r4, r27
    addi r3, r30, 0x77
    li r5, 0x8
    bl memcpy
    b lbl_802AD730
lbl_802AD720:
    addi r3, r30, 0x77
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_802AD730:
    lwz r0, 0x0(r28)
    cmpwi r29, 0x0
    stw r0, 0x10(r30)
    lwz r0, 0x4(r28)
    stw r0, 0x14(r30)
    beq lbl_802AD764
    lbz r0, 0x76(r30)
    mr r4, r29
    addi r3, r30, 0x25
    li r5, 0x10
    ori r0, r0, 0x10
    stb r0, 0x76(r30)
    bl memcpy
lbl_802AD764:
    li r3, 0x1
lbl_802AD768:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// BTM_SecDeleteDevice
// ----------------------------------------------------------------------------
asm void BTM_SecDeleteDevice() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1f30
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802AD7AC:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802AD7D4
    mr r4, r29
    addi r3, r30, 0x1c
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AD7D4
    b lbl_802AD7E8
lbl_802AD7D4:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_802AD7AC
    li r30, 0x0
lbl_802AD7E8:
    cmpwi r30, 0x0
    bne lbl_802AD7F8
    li r3, 0x0
    b lbl_802AD810
lbl_802AD7F8:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x76(r30)
    li r4, 0x0
    bl BTM_DeleteStoredLinkKey
    li r3, 0x1
lbl_802AD810:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_SecReadDevName
// ----------------------------------------------------------------------------
asm void BTM_SecReadDevName() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1f30
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_802AD860:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802AD888
    mr r4, r28
    addi r3, r30, 0x1c
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AD888
    b lbl_802AD89C
lbl_802AD888:
    addi r31, r31, 0x1
    addi r30, r30, 0x88
    cmpwi r31, 0x10
    blt lbl_802AD860
    li r30, 0x0
lbl_802AD89C:
    cmpwi r30, 0x0
    beq lbl_802AD8A8
    addi r29, r30, 0x35
lbl_802AD8A8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_alloc_dev
// ----------------------------------------------------------------------------
asm void btm_sec_alloc_dev() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x14(r1)
    li r0, 0x10
    addi r4, r4, lbl_80453F78@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x0
    mtctr r0
lbl_802AD8FC:
    lbz r0, 0x1fa6(r4)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_802AD920
    mulli r0, r3, 0x88
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    addi r31, r3, 0x1f30
    b lbl_802AD92C
lbl_802AD920:
    addi r4, r4, 0x88
    addi r3, r3, 0x1
    bdnz lbl_802AD8FC
lbl_802AD92C:
    cmpwi r31, 0x0
    bne lbl_802AD93C
    bl btm_find_oldest_dev
    mr r31, r3
lbl_802AD93C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x88
    bl memset
    li r3, 0x80
    li r0, 0x0
    stb r3, 0x76(r31)
    mr r3, r30
    stb r0, 0x85(r31)
    bl BTM_InqDbRead
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802AD984
    addi r3, r31, 0x22
    addi r4, r4, 0x8
    li r5, 0x3
    bl memcpy
    b lbl_802AD99C
lbl_802AD984:
    lis r4, lbl_80453F78@ha
    addi r3, r31, 0x22
    addi r4, r4, lbl_80453F78@l
    li r5, 0x3
    addi r4, r4, 0x27ba
    bl memcpy
lbl_802AD99C:
    mr r4, r30
    addi r3, r31, 0x1c
    li r5, 0x6
    bl memcpy
    mr r3, r30
    bl BTM_GetHCIConnHandle
    sth r3, 0x18(r31)
    lis r5, lbl_80453F78@ha
    addi r5, r5, lbl_80453F78@l
    mr r3, r31
    lwz r4, 0x1974(r5)
    stw r4, 0xc(r31)
    addi r0, r4, 0x1
    stw r0, 0x1974(r5)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_find_dev_by_handle
// ----------------------------------------------------------------------------
asm void btm_find_dev_by_handle() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r0, 0x4
    addi r4, r4, lbl_80453F78@l
    li r5, 0x0
    addi r4, r4, 0x1f30
    mtctr r0
lbl_802ADA04:
    lbz r0, 0x76(r4)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADA24
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_802ADA24
    mr r3, r4
    blr
lbl_802ADA24:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADA48
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_802ADA48
    mr r3, r4
    blr
lbl_802ADA48:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADA6C
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_802ADA6C
    mr r3, r4
    blr
lbl_802ADA6C:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADA90
    lhz r0, 0x18(r4)
    cmplw r0, r3
    bne lbl_802ADA90
    mr r3, r4
    blr
lbl_802ADA90:
    addi r5, r5, 0x3
    addi r4, r4, 0x88
    bdnz lbl_802ADA04
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// btm_find_dev
// ----------------------------------------------------------------------------
asm void btm_find_dev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x1f30
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802ADAD0:
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADAFC
    mr r4, r29
    addi r3, r31, 0x1c
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ADAFC
    mr r3, r31
    b lbl_802ADB10
lbl_802ADAFC:
    addi r30, r30, 0x1
    addi r31, r31, 0x88
    cmpwi r30, 0x10
    blt lbl_802ADAD0
    li r3, 0x0
lbl_802ADB10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_find_oldest_dev
// ----------------------------------------------------------------------------
asm void btm_find_oldest_dev() {
    nofralloc
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    li r6, -0x1
    addi r5, r3, 0x1f30
    li r7, 0x0
    mr r3, r5
    mtctr r0
lbl_802ADB4C:
    lbz r4, 0x76(r5)
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_802ADB74
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_802ADB74
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_802ADB74
    mr r3, r5
    mr r6, r0
lbl_802ADB74:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_802ADBA0
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_802ADBA0
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_802ADBA0
    mr r3, r5
    mr r6, r0
lbl_802ADBA0:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_802ADBCC
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_802ADBCC
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_802ADBCC
    mr r3, r5
    mr r6, r0
lbl_802ADBCC:
    lbz r4, 0xfe(r5)
    addi r5, r5, 0x88
    rlwinm. r0, r4, 0, 24, 24
    beq lbl_802ADBF8
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_802ADBF8
    lwz r0, 0xc(r5)
    cmplw r0, r6
    bge lbl_802ADBF8
    mr r3, r5
    mr r6, r0
lbl_802ADBF8:
    addi r7, r7, 0x3
    addi r5, r5, 0x88
    bdnz lbl_802ADB4C
    addis r0, r6, 0x1
    cmplwi r0, 0xffff
    bnelr
    lis r4, lbl_80453F78@ha
    li r0, 0x4
    addi r4, r4, lbl_80453F78@l
    li r5, 0x0
    addi r4, r4, 0x1f30
    mtctr r0
lbl_802ADC28:
    lbz r0, 0x76(r4)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADC48
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_802ADC48
    mr r3, r4
    mr r6, r0
lbl_802ADC48:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADC6C
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_802ADC6C
    mr r3, r4
    mr r6, r0
lbl_802ADC6C:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADC90
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_802ADC90
    mr r3, r4
    mr r6, r0
lbl_802ADC90:
    lbz r0, 0xfe(r4)
    addi r4, r4, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802ADCB4
    lwz r0, 0xc(r4)
    cmplw r0, r6
    bge lbl_802ADCB4
    mr r3, r4
    mr r6, r0
lbl_802ADCB4:
    addi r5, r5, 0x3
    addi r4, r4, 0x88
    bdnz lbl_802ADC28
    blr
}

