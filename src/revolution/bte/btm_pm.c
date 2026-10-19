#include "types.h"

// Translation unit: src/revolution/bte/btm_pm.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern float lbl_804A2548;
extern float lbl_804A254C;

// Global data symbols (@ha/@l)
extern u8 lbl_80341870[];
extern u8 lbl_80374760[];
extern u8 lbl_80453F78[];

// Forward declarations
extern void BTM_PmRegister();
extern void BTM_ReadLocalFeatures();
extern void BTM_ReadPowerMode();
extern void BTM_SetPowerMode();
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void LogMsg_2();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _savegpr_24();
extern void _savegpr_26();
extern void btm_find_dev();
extern void btm_handle_to_acl_index();
extern void btm_num_sco_links_active();
extern void btm_pm_compare_modes();
extern void btm_pm_get_set_mode();
extern void btm_pm_proc_cmd_status();
extern void btm_pm_proc_mode_change();
extern void btm_pm_reset();
extern void btm_pm_sm_alloc();
extern void btm_pm_snd_md_req();
extern void btsnd_hcic_change_conn_type();
extern void btsnd_hcic_exit_park_mode();
extern void btsnd_hcic_exit_sniff_mode();
extern void btsnd_hcic_hold_mode();
extern void btsnd_hcic_park_mode();
extern void btsnd_hcic_set_conn_encrypt();
extern void btsnd_hcic_sniff_mode();
extern void btsnd_hcic_switch_role();
extern void memcmp();
extern void memset();

// ----------------------------------------------------------------------------
// BTM_PmRegister
// ----------------------------------------------------------------------------
asm void BTM_PmRegister() {
    nofralloc
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_802B12B0
    lbz r0, 0x0(r4)
    cmplwi r0, 0x2
    blt lbl_802B1290
    li r3, 0x5
    blr
lbl_802B1290:
    lis r3, lbl_80453F78@ha
    clrlslwi r0, r0, 24, 3
    addi r3, r3, lbl_80453F78@l
    li r5, 0x0
    add r4, r3, r0
    stb r5, 0x558(r4)
    li r3, 0x0
    blr
lbl_802B12B0:
    lis r6, lbl_80453F78@ha
    li r0, 0x2
    addi r6, r6, lbl_80453F78@l
    li r7, 0x0
    mtctr r0
lbl_802B12C4:
    lbz r0, 0x558(r6)
    cmpwi r0, 0x0
    bne lbl_802B131C
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_802B12FC
    cmpwi r5, 0x0
    bne lbl_802B12E8
    li r3, 0x5
    blr
lbl_802B12E8:
    lis r6, lbl_80453F78@ha
    slwi r0, r7, 3
    addi r6, r6, lbl_80453F78@l
    add r6, r6, r0
    stw r5, 0x554(r6)
lbl_802B12FC:
    lis r5, lbl_80453F78@ha
    slwi r0, r7, 3
    addi r5, r5, lbl_80453F78@l
    add r5, r5, r0
    stb r3, 0x558(r5)
    li r3, 0x0
    stb r7, 0x0(r4)
    blr
lbl_802B131C:
    addi r6, r6, 0x8
    addi r7, r7, 0x1
    bdnz lbl_802B12C4
    li r3, 0x3
    blr
}

// ----------------------------------------------------------------------------
// BTM_SetPowerMode
// ----------------------------------------------------------------------------
asm void BTM_SetPowerMode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmplwi r3, 0x2
    mr r27, r3
    mr r26, r4
    mr r28, r5
    blt lbl_802B135C
    li r27, 0x80
lbl_802B135C:
    cmpwi r5, 0x0
    bne lbl_802B136C
    li r3, 0x5
    b lbl_802B14E8
lbl_802B136C:
    lbz r0, 0x8(r5)
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    li r29, 0x0
    rlwinm r31, r0, 0, 28, 26
    addi r30, r3, 0x34
lbl_802B1384:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802B13A8
    mr r4, r26
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802B13B8
lbl_802B13A8:
    addi r29, r29, 0x1
    addi r30, r30, 0x11c
    cmplwi r29, 0x4
    blt lbl_802B1384
lbl_802B13B8:
    clrlwi r30, r29, 24
    cmpwi r30, 0x4
    bne lbl_802B13CC
    li r3, 0x7
    b lbl_802B14E8
lbl_802B13CC:
    mulli r0, r30, 0x22
    lis r4, lbl_80453F78@ha
    clrlwi. r3, r31, 24
    addi r4, r4, lbl_80453F78@l
    add r4, r4, r0
    addi r29, r4, 0x4cc
    beq lbl_802B1414
    subi r26, r3, 0x1
    bl BTM_ReadLocalFeatures
    la r4, lbl_804A2548
    la r5, lbl_804A254C
    lbzx r0, r4, r26
    lbzx r4, r5, r26
    lbzx r0, r3, r0
    and. r0, r4, r0
    bne lbl_802B1414
    li r3, 0x4
    b lbl_802B14E8
lbl_802B1414:
    lbz r0, 0x20(r29)
    clrlwi r3, r31, 24
    cmplw r3, r0
    bne lbl_802B1450
    cmpwi r3, 0x0
    beq lbl_802B1448
    lhz r3, 0x1e(r29)
    lhz r0, 0x0(r28)
    cmplw r0, r3
    blt lbl_802B1450
    lhz r0, 0x2(r28)
    cmplw r0, r3
    bgt lbl_802B1450
lbl_802B1448:
    li r3, 0x0
    b lbl_802B14E8
lbl_802B1450:
    cmplwi r27, 0x80
    beq lbl_802B14A8
    lis r3, lbl_80453F78@ha
    clrlslwi r0, r27, 24, 3
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    lbz r0, 0x558(r3)
    clrlwi. r0, r0, 31
    beq lbl_802B14A8
    lhz r4, 0x0(r28)
    mulli r5, r27, 0xa
    lhz r3, 0x2(r28)
    li r0, 0x1
    sthux r4, r5, r29
    sth r3, 0x2(r5)
    lhz r4, 0x4(r28)
    lhz r3, 0x6(r28)
    sth r4, 0x4(r5)
    sth r3, 0x6(r5)
    lhz r3, 0x8(r28)
    sth r3, 0x8(r5)
    stb r0, 0x21(r29)
lbl_802B14A8:
    lbz r0, 0x20(r29)
    cmplwi r0, 0x1
    beq lbl_802B14D0
    cmplwi r0, 0x4
    beq lbl_802B14D0
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x564(r3)
    cmplwi r0, 0x4
    beq lbl_802B14D8
lbl_802B14D0:
    li r3, 0xd
    b lbl_802B14E8
lbl_802B14D8:
    mr r3, r27
    mr r4, r30
    mr r5, r28
    bl btm_pm_snd_md_req
lbl_802B14E8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_ReadPowerMode
// ----------------------------------------------------------------------------
asm void BTM_ReadPowerMode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r5, 0x34
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
lbl_802B1534:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802B1558
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802B1568
lbl_802B1558:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802B1534
lbl_802B1568:
    clrlwi r0, r31, 24
    cmpwi r0, 0x4
    bne lbl_802B157C
    li r3, 0x7
    b lbl_802B1598
lbl_802B157C:
    mulli r0, r0, 0x22
    lis r4, lbl_80453F78@ha
    li r3, 0x0
    addi r4, r4, lbl_80453F78@l
    add r4, r4, r0
    lbz r0, 0x4ec(r4)
    stb r0, 0x0(r29)
lbl_802B1598:
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
// btm_pm_reset
// ----------------------------------------------------------------------------
asm void btm_pm_reset() {
    nofralloc
    lis r3, lbl_80453F78@ha
    li r12, 0x0
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x565(r3)
    cmplwi r0, 0x80
    beq lbl_802B15E8
    clrlslwi r0, r0, 24, 3
    add r3, r3, r0
    lbz r0, 0x558(r3)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B15E8
    lwz r12, 0x554(r3)
lbl_802B15E8:
    lis r3, lbl_80453F78@ha
    cmpwi r12, 0x0
    addi r3, r3, lbl_80453F78@l
    li r0, 0x0
    li r4, 0x4
    stb r0, 0x558(r3)
    stb r4, 0x564(r3)
    stb r0, 0x560(r3)
    beqlr
    mulli r0, r4, 0x11c
    li r4, 0x5
    li r5, 0xc
    li r6, 0x0
    add r3, r3, r0
    addi r3, r3, 0x3c
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_sm_alloc
// ----------------------------------------------------------------------------
asm void btm_pm_sm_alloc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x22
    stw r0, 0x14(r1)
    mulli r0, r3, 0x22
    lis r3, lbl_80453F78@ha
    stw r31, 0xc(r1)
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    addi r31, r3, 0x4cc
    mr r3, r31
    bl memset
    li r0, 0x0
    stb r0, 0x20(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_compare_modes
// ----------------------------------------------------------------------------
asm void btm_pm_compare_modes() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_802B16B8
    lhz r6, 0x0(r4)
    mr r3, r4
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    blr
lbl_802B16B8:
    lbz r9, 0x8(r4)
    cmpwi r9, 0x0
    beq lbl_802B16D0
    lbz r8, 0x8(r3)
    cmpwi r8, 0x0
    bne lbl_802B16D8
lbl_802B16D0:
    li r3, 0x0
    blr
lbl_802B16D8:
    rlwinm. r0, r8, 0, 27, 27
    beq lbl_802B171C
    lhz r4, 0x0(r3)
    lhz r0, 0x2(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r4, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r4, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r3)
    mr r3, r5
    sth r0, 0x8(r5)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x8(r5)
    blr
lbl_802B171C:
    rlwinm. r0, r9, 0, 27, 27
    beq lbl_802B1760
    lhz r6, 0x0(r4)
    mr r3, r5
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x8(r5)
    blr
lbl_802B1760:
    subi r7, r8, 0x1
    lis r6, lbl_80341870@ha
    slwi r0, r7, 2
    subf r0, r7, r0
    addi r6, r6, lbl_80341870@l
    add r7, r9, r0
    subi r0, r7, 0x1
    clrlwi r0, r0, 24
    lbzx r0, r6, r0
    cmpwi r0, 0x2
    beq lbl_802B17D4
    bge lbl_802B179C
    cmpwi r0, 0x1
    bge lbl_802B17A8
    b lbl_802B1894
lbl_802B179C:
    cmpwi r0, 0x4
    bge lbl_802B1894
    b lbl_802B1804
lbl_802B17A8:
    lhz r4, 0x0(r3)
    lhz r0, 0x2(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r4, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r4, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r3)
    sth r0, 0x8(r5)
    blr
lbl_802B17D4:
    lhz r6, 0x0(r4)
    mr r3, r4
    lhz r0, 0x2(r4)
    sth r6, 0x0(r5)
    sth r0, 0x2(r5)
    lhz r6, 0x4(r4)
    lhz r0, 0x6(r4)
    sth r6, 0x4(r5)
    sth r0, 0x6(r5)
    lhz r0, 0x8(r4)
    sth r0, 0x8(r5)
    blr
lbl_802B1804:
    stb r8, 0x8(r5)
    lhz r6, 0x0(r4)
    lhz r0, 0x0(r3)
    cmplw r0, r6
    bge lbl_802B181C
    mr r6, r0
lbl_802B181C:
    sth r6, 0x0(r5)
    lhz r7, 0x2(r4)
    lhz r0, 0x2(r3)
    cmplw r0, r7
    ble lbl_802B1834
    mr r7, r0
lbl_802B1834:
    lhz r6, 0x0(r5)
    clrlwi r0, r7, 16
    sth r7, 0x2(r5)
    cmplw r6, r0
    bge lbl_802B1850
    li r3, 0x0
    blr
lbl_802B1850:
    lbz r0, 0x8(r5)
    cmplwi r0, 0x2
    bne lbl_802B188C
    lhz r6, 0x4(r4)
    lhz r0, 0x4(r3)
    cmplw r0, r6
    ble lbl_802B1870
    mr r6, r0
lbl_802B1870:
    sth r6, 0x4(r5)
    lhz r4, 0x6(r4)
    lhz r0, 0x6(r3)
    cmplw r0, r4
    ble lbl_802B1888
    mr r4, r0
lbl_802B1888:
    sth r4, 0x6(r5)
lbl_802B188C:
    mr r3, r5
    blr
lbl_802B1894:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_get_set_mode
// ----------------------------------------------------------------------------
asm void btm_pm_get_set_mode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x0
    mr r26, r3
    mr r27, r5
    mr r28, r6
    li r7, 0x0
    beq lbl_802B190C
    lbz r0, 0x8(r5)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802B190C
    lhz r3, 0x0(r5)
    lhz r0, 0x2(r5)
    sth r3, 0x0(r6)
    sth r0, 0x2(r6)
    lhz r3, 0x4(r5)
    lhz r0, 0x6(r5)
    sth r3, 0x4(r6)
    sth r0, 0x6(r6)
    lhz r0, 0x8(r5)
    sth r0, 0x8(r6)
    lbz r0, 0x8(r6)
    rlwinm r3, r0, 0, 28, 26
    stb r3, 0x8(r6)
    b lbl_802B19E4
lbl_802B190C:
    lis r31, lbl_80453F78@ha
    mr r30, r4
    addi r31, r31, lbl_80453F78@l
    li r29, 0x0
lbl_802B191C:
    lbz r0, 0x558(r31)
    clrlwi. r0, r0, 31
    beq lbl_802B1960
    lbz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_802B193C
    li r3, 0x0
    b lbl_802B19E4
lbl_802B193C:
    mr r3, r7
    mr r4, r30
    mr r5, r28
    bl btm_pm_compare_modes
    cmpwi r3, 0x0
    bne lbl_802B195C
    li r3, 0x0
    b lbl_802B19E4
lbl_802B195C:
    mr r7, r28
lbl_802B1960:
    addi r29, r29, 0x1
    addi r30, r30, 0xa
    cmpwi r29, 0x2
    addi r31, r31, 0x8
    blt lbl_802B191C
    cmpwi r7, 0x0
    bne lbl_802B19B8
    cmpwi r27, 0x0
    beq lbl_802B19B0
    lhz r3, 0x0(r27)
    lhz r0, 0x2(r27)
    sth r3, 0x0(r28)
    sth r0, 0x2(r28)
    lhz r3, 0x4(r27)
    lhz r0, 0x6(r27)
    sth r3, 0x4(r28)
    sth r0, 0x6(r28)
    lhz r0, 0x8(r27)
    sth r0, 0x8(r28)
    b lbl_802B19E0
lbl_802B19B0:
    li r3, 0x0
    b lbl_802B19E4
lbl_802B19B8:
    cmplwi r26, 0x80
    bne lbl_802B19E0
    mr r3, r27
    mr r4, r7
    mr r5, r28
    bl btm_pm_compare_modes
    cmpwi r3, 0x0
    bne lbl_802B19E0
    li r3, 0x0
    b lbl_802B19E4
lbl_802B19E0:
    lbz r3, 0x8(r28)
lbl_802B19E4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_snd_md_req
// ----------------------------------------------------------------------------
asm void btm_pm_snd_md_req() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r6, lbl_80453F78@ha
    stw r0, 0x34(r1)
    mulli r0, r4, 0x22
    addi r6, r6, lbl_80453F78@l
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    add r3, r6, r0
    addi r6, r1, 0x8
    stw r28, 0x20(r1)
    addi r28, r3, 0x4cc
    mr r3, r29
    mr r4, r28
    bl btm_pm_get_set_mode
    lbz r4, 0x20(r28)
    clrlwi r0, r3, 24
    stb r3, 0x10(r1)
    cmplw r4, r0
    bne lbl_802B1A8C
    cmpwi r0, 0x0
    beq lbl_802B1A80
    lhz r4, 0x1e(r28)
    lhz r0, 0x8(r1)
    cmplw r0, r4
    blt lbl_802B1A88
    lhz r0, 0xa(r1)
    cmplw r0, r4
    bgt lbl_802B1A88
lbl_802B1A80:
    li r3, 0xd
    b lbl_802B1C10
lbl_802B1A88:
    li r31, 0x1
lbl_802B1A8C:
    clrlwi. r0, r3, 24
    stb r31, 0x21(r28)
    beq lbl_802B1AAC
    lbz r0, 0x20(r28)
    cmpwi r0, 0x0
    beq lbl_802B1AAC
    li r0, 0x1
    stb r0, 0x21(r28)
lbl_802B1AAC:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B1AC8
    li r3, 0x3
    b lbl_802B1C10
lbl_802B1AC8:
    lbz r0, 0x21(r28)
    cmplwi r0, 0x1
    bne lbl_802B1ADC
    li r0, 0x0
    stb r0, 0x10(r1)
lbl_802B1ADC:
    lbz r0, 0x10(r1)
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    cmpwi r0, 0x2
    stb r30, 0x564(r4)
    stb r29, 0x565(r4)
    beq lbl_802B1B98
    bge lbl_802B1B0C
    cmpwi r0, 0x0
    beq lbl_802B1B18
    bge lbl_802B1B78
    b lbl_802B1BE0
lbl_802B1B0C:
    cmpwi r0, 0x4
    bge lbl_802B1BE0
    b lbl_802B1BC0
lbl_802B1B18:
    lbz r0, 0x20(r28)
    cmpwi r0, 0x3
    beq lbl_802B1B4C
    bge lbl_802B1B64
    cmpwi r0, 0x2
    bge lbl_802B1B34
    b lbl_802B1B64
lbl_802B1B34:
    mulli r0, r30, 0x11c
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl btsnd_hcic_exit_sniff_mode
    b lbl_802B1BF0
lbl_802B1B4C:
    mulli r0, r30, 0x11c
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl btsnd_hcic_exit_park_mode
    b lbl_802B1BF0
lbl_802B1B64:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x564(r3)
    b lbl_802B1BF0
lbl_802B1B78:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl btsnd_hcic_hold_mode
    b lbl_802B1BF0
lbl_802B1B98:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    lhz r7, 0xc(r1)
    add r4, r4, r0
    lhz r4, 0x34(r4)
    lhz r8, 0xe(r1)
    bl btsnd_hcic_sniff_mode
    b lbl_802B1BF0
lbl_802B1BC0:
    mulli r0, r30, 0x11c
    lhz r5, 0x8(r1)
    lhz r6, 0xa(r1)
    mr r3, r31
    add r4, r4, r0
    lhz r4, 0x34(r4)
    bl btsnd_hcic_park_mode
    b lbl_802B1BF0
lbl_802B1BE0:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x564(r3)
lbl_802B1BF0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x564(r3)
    cmplwi r0, 0x4
    bne lbl_802B1C0C
    mr r3, r31
    bl GKI_freebuf
lbl_802B1C0C:
    li r3, 0x1
lbl_802B1C10:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_proc_cmd_status
// ----------------------------------------------------------------------------
asm void btm_pm_proc_cmd_status() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x564(r4)
    cmplwi r0, 0x4
    bge lbl_802B1CD0
    mulli r0, r0, 0x22
    cmpwi r3, 0x0
    add r5, r4, r0
    bne lbl_802B1C70
    li r0, 0x4
    li r4, 0x4
    stb r0, 0x4ec(r5)
    b lbl_802B1C74
lbl_802B1C70:
    li r4, 0x5
lbl_802B1C74:
    lis r7, lbl_80453F78@ha
    addi r7, r7, lbl_80453F78@l
    lbz r0, 0x565(r7)
    cmplwi r0, 0x80
    beq lbl_802B1CC0
    clrlslwi r0, r0, 24, 3
    add r5, r7, r0
    lbz r0, 0x558(r5)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B1CC0
    lbz r0, 0x564(r7)
    mr r6, r3
    lwz r12, 0x554(r5)
    li r5, 0x0
    mulli r0, r0, 0x11c
    add r3, r7, r0
    addi r3, r3, 0x3c
    mtctr r12
    bctrl
lbl_802B1CC0:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x564(r3)
lbl_802B1CD0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_pm_proc_mode_change
// ----------------------------------------------------------------------------
asm void btm_pm_proc_mode_change() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r26, r4
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r3, r26
    bl btm_handle_to_acl_index
    clrlwi r29, r3, 24
    cmpwi r29, 0x4
    bge lbl_802B1EF0
    mulli r30, r29, 0x11c
    lis r24, lbl_80453F78@ha
    cmpwi r27, 0x0
    addi r24, r24, lbl_80453F78@l
    add r31, r24, r30
    bne lbl_802B1D84
    lhz r0, 0x38(r31)
    cmpwi r0, 0x0
    beq lbl_802B1D84
    bl btm_num_sco_links_active
    clrlwi. r0, r3, 24
    bne lbl_802B1D84
    li r0, 0x0
    sth r0, 0x38(r31)
    lbz r0, 0x27c0(r24)
    cmplwi r0, 0x5
    blt lbl_802B1D78
    lis r3, 0xd
    lis r4, lbl_80374760@ha
    lhz r6, 0x36(r31)
    mr r5, r26
    addi r3, r3, 0x4
    addi r4, r4, lbl_80374760@l
    bl LogMsg_2
lbl_802B1D78:
    lhz r3, 0x34(r31)
    lhz r4, 0x36(r31)
    bl btsnd_hcic_change_conn_type
lbl_802B1D84:
    mulli r0, r29, 0x22
    lis r3, lbl_80453F78@ha
    cmpwi r27, 0x0
    addi r3, r3, lbl_80453F78@l
    add r4, r3, r0
    stb r27, 0x4ec(r4)
    li r0, 0x0
    sth r28, 0x4ea(r4)
    bne lbl_802B1DB8
    lbz r3, 0x4d4(r4)
    cmplwi r3, 0x1
    bne lbl_802B1DB8
    stb r0, 0x4d4(r4)
lbl_802B1DB8:
    cmpwi r27, 0x0
    addi r5, r4, 0x4d6
    bne lbl_802B1DD4
    lbz r3, 0x8(r5)
    cmplwi r3, 0x1
    bne lbl_802B1DD4
    stb r0, 0x8(r5)
lbl_802B1DD4:
    lbz r0, 0x4ed(r4)
    cmplwi r0, 0x1
    bne lbl_802B1DF0
    mr r4, r29
    li r3, 0x80
    li r5, 0x0
    bl btm_pm_snd_md_req
lbl_802B1DF0:
    lis r24, lbl_80453F78@ha
    li r29, 0x0
    addi r24, r24, lbl_80453F78@l
lbl_802B1DFC:
    lbz r0, 0x558(r24)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B1E24
    lwz r12, 0x554(r24)
    mr r4, r27
    mr r5, r28
    mr r6, r25
    addi r3, r31, 0x3c
    mtctr r12
    bctrl
lbl_802B1E24:
    addi r29, r29, 0x1
    addi r24, r24, 0x8
    cmpwi r29, 0x2
    blt lbl_802B1DFC
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    add r28, r3, r30
    lbz r0, 0x14f(r28)
    cmplwi r0, 0x1
    bne lbl_802B1EF0
    addi r24, r28, 0x3c
    mr r3, r24
    bl btm_find_dev
    cmpwi r3, 0x0
    beq lbl_802B1E8C
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_802B1E8C
    mr r3, r26
    li r4, 0x0
    bl btsnd_hcic_set_conn_encrypt
    clrlwi. r0, r3, 24
    beq lbl_802B1EC0
    li r0, 0x2
    stb r0, 0x14f(r28)
    b lbl_802B1EF0
lbl_802B1E8C:
    lis r4, lbl_80453F78@ha
    mr r3, r24
    addi r4, r4, lbl_80453F78@l
    add r4, r4, r30
    lbz r0, 0x14e(r4)
    cntlzw r0, r0
    extrwi r4, r0, 8, 19
    bl btsnd_hcic_switch_role
    clrlwi. r0, r3, 24
    beq lbl_802B1EC0
    li r0, 0x0
    stb r0, 0x14f(r28)
    b lbl_802B1EF0
lbl_802B1EC0:
    li r27, 0x0
    lis r26, lbl_80453F78@ha
    stb r27, 0x14f(r28)
    addi r26, r26, lbl_80453F78@l
    lwz r12, 0x62c(r26)
    cmpwi r12, 0x0
    beq lbl_802B1EF0
    stb r25, 0x624(r26)
    addi r3, r26, 0x624
    mtctr r12
    bctrl
    stw r27, 0x62c(r26)
lbl_802B1EF0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

