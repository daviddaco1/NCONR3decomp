#include "types.h"

// Translation unit: src/revolution/bte/port_utils.cpp
// Total functions: 7

// Global data symbols (@ha/@l)
extern u8 lbl_803777A0[];
extern u8 lbl_803778A0[];
extern u8 lbl_803778B8[];
extern u8 lbl_80457828[];

// Forward declarations
extern void GKI_dequeue();
extern void GKI_freebuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_3();
extern void RFCOMM_FlowReq();
extern void btm_get_max_packet_size();
extern void memset();
extern void port_find_dlci_port();
extern void port_find_mcb_dlci_port();
extern void port_flow_control_peer();
extern void port_flow_control_user();
extern void port_get_signal_changes();
extern void port_release_port();
extern void port_select_mtu();
extern void rfc_check_mcb_active();
extern void rfc_port_timer_stop();
extern void rfc_send_credit();

// ----------------------------------------------------------------------------
// port_select_mtu
// ----------------------------------------------------------------------------
asm void port_select_mtu() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_803777A0@ha
    addi r31, r31, lbl_803777A0@l
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r5, 0x12(r3)
    cmpwi r5, 0x0
    bne lbl_802C5314
    addi r3, r3, 0x6
    bl btm_get_max_packet_size
    clrlwi. r5, r3, 16
    bne lbl_802C5298
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C528C
    lis r3, 0x9
    addi r4, r31, 0x0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802C528C:
    li r0, 0x7f
    sth r0, 0x12(r30)
    b lbl_802C5338
lbl_802C5298:
    cmplwi r5, 0x69f
    bgt lbl_802C52E0
    li r0, 0x69f
    lis r4, lbl_80457828@ha
    divw r0, r0, r5
    addi r4, r4, lbl_80457828@l
    mullw r3, r0, r3
    subi r5, r3, 0xa
    sth r5, 0x12(r30)
    lbz r0, 0x414(r4)
    cmplwi r0, 0x5
    blt lbl_802C5338
    lis r3, 0x9
    addi r4, r31, 0x20
    addi r3, r3, 0x4
    clrlwi r5, r5, 16
    bl LogMsg_1
    b lbl_802C5338
lbl_802C52E0:
    li r0, 0x695
    lis r3, lbl_80457828@ha
    sth r0, 0x12(r30)
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_802C5338
    lis r3, 0x9
    addi r4, r31, 0x58
    addi r3, r3, 0x4
    li r5, 0x695
    bl LogMsg_1
    b lbl_802C5338
lbl_802C5314:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_802C5338
    lis r3, 0x9
    addi r4, r31, 0x90
    addi r3, r3, 0x4
    bl LogMsg_1
lbl_802C5338:
    lhz r7, 0x12(r30)
    li r3, 0x1f40
    li r4, 0x1388
    li r0, 0x2ee0
    divw r5, r3, r7
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    divw r6, r4, r7
    sth r5, 0x9c(r30)
    divw r7, r0, r7
    sth r6, 0x9e(r30)
    sth r7, 0xa0(r30)
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_802C5390
    lis r3, 0x9
    addi r4, r31, 0xb8
    addi r3, r3, 0x4
    clrlwi r5, r5, 16
    clrlwi r6, r6, 16
    clrlwi r7, r7, 16
    bl LogMsg_3
lbl_802C5390:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// port_release_port
// ----------------------------------------------------------------------------
asm void port_release_port() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_802C53C4
lbl_802C53C0:
    bl GKI_freebuf
lbl_802C53C4:
    addi r3, r31, 0x30
    bl GKI_dequeue
    cmpwi r3, 0x0
    bne lbl_802C53C0
    li r0, 0x0
    stw r0, 0x40(r31)
    b lbl_802C53E4
lbl_802C53E0:
    bl GKI_freebuf
lbl_802C53E4:
    addi r3, r31, 0x18
    bl GKI_dequeue
    cmpwi r3, 0x0
    bne lbl_802C53E0
    lbz r0, 0x68(r31)
    li r3, 0x0
    stw r3, 0x28(r31)
    cmpwi r0, 0x0
    stb r3, 0x2(r31)
    bne lbl_802C5470
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x5
    blt lbl_802C5434
    lis r3, 0x9
    lis r4, lbl_803778A0@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_803778A0@l
    bl LogMsg_0
lbl_802C5434:
    lwz r3, 0x6c(r31)
    cmpwi r3, 0x0
    beq lbl_802C5458
    lbz r0, 0xd(r31)
    li r4, 0x0
    add r3, r3, r0
    stb r4, 0x24(r3)
    lwz r3, 0x6c(r31)
    bl rfc_check_mcb_active
lbl_802C5458:
    mr r3, r31
    bl rfc_port_timer_stop
    mr r3, r31
    li r4, 0x0
    li r5, 0xa4
    bl memset
lbl_802C5470:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// port_find_mcb_dlci_port
// ----------------------------------------------------------------------------
asm void port_find_mcb_dlci_port() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_802C5494
    li r3, 0x0
    blr
lbl_802C5494:
    cmplwi r4, 0x3d
    ble lbl_802C54A4
    li r3, 0x0
    blr
lbl_802C54A4:
    add r3, r3, r4
    lbz r3, 0x24(r3)
    cmpwi r3, 0x0
    bne lbl_802C54BC
    li r3, 0x0
    blr
lbl_802C54BC:
    subi r0, r3, 0x1
    lis r3, lbl_80457828@ha
    mulli r0, r0, 0xa4
    addi r3, r3, lbl_80457828@l
    add r3, r3, r0
    addi r3, r3, 0x68
    blr
}

// ----------------------------------------------------------------------------
// port_find_dlci_port
// ----------------------------------------------------------------------------
asm void port_find_dlci_port() {
    nofralloc
    lis r5, lbl_80457828@ha
    li r0, 0x5
    clrlwi r6, r3, 31
    subi r7, r3, 0x1
    addi r5, r5, lbl_80457828@l
    li r8, 0x0
    mtctr r0
lbl_802C54F4:
    clrlwi r0, r8, 16
    mulli r0, r0, 0xa4
    add r4, r5, r0
    lbz r0, 0x69(r4)
    addi r9, r4, 0x68
    cmpwi r0, 0x0
    beq lbl_802C5550
    lwz r0, 0x6c(r9)
    cmpwi r0, 0x0
    bne lbl_802C5550
    lbz r4, 0xd(r9)
    cmplw r4, r3
    bne lbl_802C5530
    mr r3, r9
    blr
lbl_802C5530:
    cmpwi r6, 0x0
    beq lbl_802C5550
    cmpw r4, r7
    bne lbl_802C5550
    addi r0, r4, 0x1
    mr r3, r9
    stb r0, 0xd(r9)
    blr
lbl_802C5550:
    addi r8, r8, 0x1
    bdnz lbl_802C54F4
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// port_flow_control_user
// ----------------------------------------------------------------------------
asm void port_flow_control_user() {
    nofralloc
    lbz r0, 0x24(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_802C55A0
    lwz r4, 0x6c(r3)
    cmpwi r4, 0x0
    beq lbl_802C55A0
    lbz r0, 0x71(r4)
    cmpwi r0, 0x0
    beq lbl_802C55A0
    lwz r0, 0x28(r3)
    cmplwi r0, 0x1f40
    bgt lbl_802C55A0
    lhz r0, 0x20(r3)
    cmplwi r0, 0x10
    ble lbl_802C55A4
lbl_802C55A0:
    li r5, 0x1
lbl_802C55A4:
    lbz r0, 0x25(r3)
    cmplw r0, r5
    bne lbl_802C55B8
    li r3, 0x0
    blr
lbl_802C55B8:
    cmpwi r5, 0x0
    stb r5, 0x25(r3)
    lis r3, 0x3
    beqlr
    lis r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// port_get_signal_changes
// ----------------------------------------------------------------------------
asm void port_get_signal_changes() {
    nofralloc
    xor r4, r5, r4
    li r6, 0x0
    clrlwi. r0, r4, 31
    beq lbl_802C55F0
    clrlwi. r0, r5, 31
    ori r6, r6, 0x10
    beq lbl_802C55F0
    ori r6, r6, 0x800
lbl_802C55F0:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_802C5608
    rlwinm. r0, r5, 0, 30, 30
    ori r6, r6, 0x8
    beq lbl_802C5608
    ori r6, r6, 0x400
lbl_802C5608:
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_802C5614
    ori r6, r6, 0x100
lbl_802C5614:
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_802C562C
    rlwinm. r0, r5, 0, 28, 28
    ori r6, r6, 0x20
    beq lbl_802C562C
    ori r6, r6, 0x1000
lbl_802C562C:
    lwz r0, 0x88(r3)
    and r3, r0, r6
    blr
}

// ----------------------------------------------------------------------------
// port_flow_control_peer
// ----------------------------------------------------------------------------
asm void port_flow_control_peer() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x6c(r3)
    cmpwi r6, 0x0
    beq lbl_802C57F0
    lbz r0, 0x72(r6)
    cmplwi r0, 0x2
    bne lbl_802C5710
    cmpwi r4, 0x0
    beq lbl_802C56DC
    lhz r0, 0x9a(r3)
    cmplw r5, r0
    ble lbl_802C5684
    li r0, 0x0
    sth r0, 0x9a(r3)
    b lbl_802C568C
lbl_802C5684:
    subf r0, r5, r0
    sth r0, 0x9a(r3)
lbl_802C568C:
    lhz r4, 0x9a(r3)
    lhz r0, 0x9e(r3)
    cmplw r4, r0
    bgt lbl_802C57F0
    lbz r0, 0x3d(r3)
    cmpwi r0, 0x0
    bne lbl_802C57F0
    lhz r0, 0x9c(r3)
    cmplw r0, r4
    ble lbl_802C57F0
    subf r0, r4, r0
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    clrlwi r5, r0, 24
    bl rfc_send_credit
    lhz r3, 0x9c(r31)
    li r0, 0x0
    stb r0, 0x3c(r31)
    sth r3, 0x9a(r31)
    b lbl_802C57F0
lbl_802C56DC:
    lwz r0, 0x94(r3)
    cmpwi r0, 0x0
    beq lbl_802C56F4
    li r0, 0x1
    stb r0, 0x3c(r3)
    b lbl_802C57F0
lbl_802C56F4:
    lhz r4, 0x38(r3)
    lhz r0, 0x9c(r3)
    cmplw r4, r0
    blt lbl_802C57F0
    li r0, 0x1
    stb r0, 0x3c(r3)
    b lbl_802C57F0
lbl_802C5710:
    cmpwi r4, 0x0
    beq lbl_802C5764
    lbz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_802C57F0
    lwz r0, 0x40(r3)
    cmplwi r0, 0x1388
    bge lbl_802C57F0
    lhz r0, 0x38(r3)
    cmplwi r0, 0x8
    bge lbl_802C57F0
    lbz r0, 0x3d(r3)
    li r4, 0x0
    stb r4, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_802C57F0
    lbz r4, 0xd(r31)
    mr r3, r6
    li r5, 0x1
    bl RFCOMM_FlowReq
    b lbl_802C57F0
lbl_802C5764:
    lwz r0, 0x94(r3)
    cmpwi r0, 0x0
    beq lbl_802C578C
    li r0, 0x1
    lbz r4, 0xd(r31)
    stb r0, 0x3c(r3)
    mr r3, r6
    li r5, 0x0
    bl RFCOMM_FlowReq
    b lbl_802C57F0
lbl_802C578C:
    lwz r0, 0x40(r3)
    cmplwi r0, 0x1f40
    bgt lbl_802C57A4
    lhz r0, 0x38(r3)
    cmplwi r0, 0x10
    ble lbl_802C57F0
lbl_802C57A4:
    lbz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_802C57F0
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C57D8
    lis r3, 0x9
    lis r4, lbl_803778B8@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803778B8@l
    bl LogMsg_0
lbl_802C57D8:
    li r0, 0x1
    lwz r3, 0x6c(r31)
    stb r0, 0x3c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl RFCOMM_FlowReq
lbl_802C57F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

