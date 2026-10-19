#include "types.h"

// Translation unit: src/revolution/bte/rfc_l2cap_if.cpp
// Total functions: 10

// Global data symbols (@ha/@l)
extern u8 lbl_803778E8[];
extern u8 lbl_80457828[];

// Forward declarations
extern void GKI_freebuf();
extern void L2CA_ConnectRsp();
extern void L2CA_DisconnectRsp();
extern void L2CA_Register();
extern void LogMsg_1();
extern void LogMsg_2();
extern void RFCOMM_BufDataInd();
extern void RFCOMM_ConfigCnf();
extern void RFCOMM_ConfigInd();
extern void RFCOMM_CongestionStatusInd();
extern void RFCOMM_ConnectCnf();
extern void RFCOMM_ConnectInd();
extern void RFCOMM_DisconnectInd();
extern void RFCOMM_QoSViolationInd();
extern void _restgpr_27();
extern void _savegpr_27();
extern void port_find_dlci_port();
extern void port_find_mcb_dlci_port();
extern void rfc_alloc_multiplexer_channel();
extern void rfc_inc_credit();
extern void rfc_mx_sm_execute();
extern void rfc_parse_data();
extern void rfc_port_sm_execute();
extern void rfc_process_l2cap_congestion();
extern void rfc_process_mx_message();
extern void rfc_save_lcid_mcb();
extern void rfc_send_dm();
extern void rfcomm_l2cap_if_init();

// ----------------------------------------------------------------------------
// rfcomm_l2cap_if_init
// ----------------------------------------------------------------------------
asm void rfcomm_l2cap_if_init() {
    nofralloc
    lis r3, RFCOMM_ConnectInd@ha
    lis r4, lbl_80457828@ha
    addi r3, r3, RFCOMM_ConnectInd@l
    lis r11, RFCOMM_ConnectCnf@ha
    addi r4, r4, lbl_80457828@l
    lis r10, RFCOMM_ConfigInd@ha
    lis r9, RFCOMM_ConfigCnf@ha
    lis r8, RFCOMM_DisconnectInd@ha
    lis r7, RFCOMM_QoSViolationInd@ha
    lis r6, RFCOMM_BufDataInd@ha
    lis r5, RFCOMM_CongestionStatusInd@ha
    stwu r3, 0x14(r4)
    li r0, 0x0
    addi r11, r11, RFCOMM_ConnectCnf@l
    addi r10, r10, RFCOMM_ConfigInd@l
    addi r9, r9, RFCOMM_ConfigCnf@l
    addi r8, r8, RFCOMM_DisconnectInd@l
    addi r7, r7, RFCOMM_QoSViolationInd@l
    addi r6, r6, RFCOMM_BufDataInd@l
    addi r5, r5, RFCOMM_CongestionStatusInd@l
    stw r11, 0x4(r4)
    li r3, 0x3
    stw r0, 0x8(r4)
    stw r10, 0xc(r4)
    stw r9, 0x10(r4)
    stw r8, 0x14(r4)
    stw r0, 0x18(r4)
    stw r7, 0x1c(r4)
    stw r6, 0x20(r4)
    stw r5, 0x24(r4)
    b L2CA_Register
}

// ----------------------------------------------------------------------------
// RFCOMM_ConnectInd
// ----------------------------------------------------------------------------
asm void RFCOMM_ConnectInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    stb r6, 0x8(r1)
    bl rfc_alloc_multiplexer_channel
    subi r0, r31, 0x40
    lis r4, lbl_80457828@ha
    addi r4, r4, lbl_80457828@l
    cmpwi r3, 0x0
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x3c(r4)
    bne lbl_802C58E4
    lbz r4, 0x8(r1)
    mr r3, r30
    mr r5, r31
    li r6, 0x4
    li r7, 0x0
    bl L2CA_ConnectRsp
    b lbl_802C58F4
lbl_802C58E4:
    sth r31, 0x68(r3)
    addi r5, r1, 0x8
    li r4, 0xa
    bl rfc_mx_sm_execute
lbl_802C58F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_ConnectCnf
// ----------------------------------------------------------------------------
asm void RFCOMM_ConnectCnf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_803778E8@ha
    addi r31, r31, lbl_803778E8@l
    stw r30, 0x18(r1)
    mr r30, r3
    sth r4, 0x8(r1)
    blt lbl_802C5968
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5960
    mr r5, r30
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C5960:
    li r4, 0x0
    b lbl_802C59B4
lbl_802C5968:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_802C59B4
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_802C59B4
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C59B0
    lis r3, 0x9
    mr r5, r30
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C59B0:
    li r4, 0x0
lbl_802C59B4:
    cmpwi r4, 0x0
    bne lbl_802C59E4
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C59F8
    mr r5, r30
    addi r4, r31, 0x54
    lis r3, 0x9
    bl LogMsg_1
    b lbl_802C59F8
lbl_802C59E4:
    sth r30, 0x68(r4)
    mr r3, r4
    addi r5, r1, 0x8
    li r4, 0x9
    bl rfc_mx_sm_execute
lbl_802C59F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_ConfigInd
// ----------------------------------------------------------------------------
asm void RFCOMM_ConfigInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_803778E8@ha
    addi r31, r31, lbl_803778E8@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    blt lbl_802C5A70
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5A68
    mr r5, r29
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C5A68:
    li r4, 0x0
    b lbl_802C5ABC
lbl_802C5A70:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_802C5ABC
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_802C5ABC
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C5AB8
    lis r3, 0x9
    mr r5, r29
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C5AB8:
    li r4, 0x0
lbl_802C5ABC:
    cmpwi r4, 0x0
    bne lbl_802C5AEC
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5AFC
    mr r5, r29
    addi r4, r31, 0x70
    lis r3, 0x9
    bl LogMsg_1
    b lbl_802C5AFC
lbl_802C5AEC:
    mr r3, r4
    mr r5, r30
    li r4, 0xc
    bl rfc_mx_sm_execute
lbl_802C5AFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_ConfigCnf
// ----------------------------------------------------------------------------
asm void RFCOMM_ConfigCnf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_803778E8@ha
    addi r31, r31, lbl_803778E8@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    blt lbl_802C5B78
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5B70
    mr r5, r29
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C5B70:
    li r4, 0x0
    b lbl_802C5BC4
lbl_802C5B78:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r4, 0x3c(r4)
    cmpwi r4, 0x0
    beq lbl_802C5BC4
    lhz r6, 0x68(r4)
    cmplw r6, r3
    beq lbl_802C5BC4
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C5BC0
    lis r3, 0x9
    mr r5, r29
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C5BC0:
    li r4, 0x0
lbl_802C5BC4:
    cmpwi r4, 0x0
    bne lbl_802C5BF4
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5C04
    mr r5, r29
    addi r4, r31, 0x8c
    lis r3, 0x9
    bl LogMsg_1
    b lbl_802C5C04
lbl_802C5BF4:
    mr r3, r4
    mr r5, r30
    li r4, 0xb
    bl rfc_mx_sm_execute
lbl_802C5C04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_QoSViolationInd
// ----------------------------------------------------------------------------
asm void RFCOMM_QoSViolationInd() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_DisconnectInd
// ----------------------------------------------------------------------------
asm void RFCOMM_DisconnectInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_803778E8@ha
    addi r31, r31, lbl_803778E8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    blt lbl_802C5C88
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5C80
    mr r5, r28
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C5C80:
    li r30, 0x0
    b lbl_802C5CD4
lbl_802C5C88:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r30, 0x3c(r4)
    cmpwi r30, 0x0
    beq lbl_802C5CD4
    lhz r6, 0x68(r30)
    cmplw r6, r3
    beq lbl_802C5CD4
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C5CD0
    lis r3, 0x9
    mr r5, r28
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C5CD0:
    li r30, 0x0
lbl_802C5CD4:
    cmpwi r29, 0x0
    beq lbl_802C5CE4
    mr r3, r28
    bl L2CA_DisconnectRsp
lbl_802C5CE4:
    cmpwi r30, 0x0
    bne lbl_802C5D18
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C5D28
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0xa8
    bl LogMsg_1
    b lbl_802C5D28
lbl_802C5D18:
    mr r3, r30
    li r4, 0xe
    li r5, 0x0
    bl rfc_mx_sm_execute
lbl_802C5D28:
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
// RFCOMM_BufDataInd
// ----------------------------------------------------------------------------
asm void RFCOMM_BufDataInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    subi r0, r3, 0x40
    lis r29, lbl_803778E8@ha
    cmpwi r0, 0xa
    mr r27, r3
    mr r31, r4
    addi r29, r29, lbl_803778E8@l
    blt lbl_802C5DA4
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C5D9C
    mr r5, r27
    addi r4, r29, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C5D9C:
    li r28, 0x0
    b lbl_802C5DF0
lbl_802C5DA4:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r28, 0x3c(r4)
    cmpwi r28, 0x0
    beq lbl_802C5DF0
    lhz r6, 0x68(r28)
    cmplw r6, r3
    beq lbl_802C5DF0
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C5DEC
    lis r3, 0x9
    mr r5, r27
    addi r4, r29, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C5DEC:
    li r28, 0x0
lbl_802C5DF0:
    cmpwi r28, 0x0
    bne lbl_802C5E2C
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C5E20
    lis r3, 0x9
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r29, 0xc8
    bl LogMsg_1
lbl_802C5E20:
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C5FD0
lbl_802C5E2C:
    lis r30, lbl_80457828@ha
    mr r3, r28
    mr r5, r31
    addi r4, r30, lbl_80457828@l
    bl rfc_parse_data
    clrlwi r4, r3, 24
    mr r29, r3
    cmplwi r4, 0x32
    bne lbl_802C5E5C
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C5FD0
lbl_802C5E5C:
    lbz r0, lbl_80457828@l(r30)
    cmpwi r0, 0x0
    bne lbl_802C5E98
    cmplwi r4, 0x4
    bne lbl_802C5E80
    mr r3, r28
    mr r4, r31
    bl rfc_process_mx_message
    b lbl_802C5FD0
lbl_802C5E80:
    mr r3, r28
    li r5, 0x0
    bl rfc_mx_sm_execute
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C5FD0
lbl_802C5E98:
    mr r3, r28
    mr r4, r0
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_802C5EBC
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    bne lbl_802C5F6C
lbl_802C5EBC:
    clrlwi. r0, r29, 24
    beq lbl_802C5F24
    lbz r4, 0x6d(r28)
    cmpwi r4, 0x0
    beq lbl_802C5EE4
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_802C5F00
lbl_802C5EE4:
    cmpwi r4, 0x0
    bne lbl_802C5F18
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_802C5F18
lbl_802C5F00:
    lis r4, lbl_80457828@ha
    mr r3, r28
    addi r5, r4, lbl_80457828@l
    lbz r4, lbl_80457828@l(r4)
    lbz r5, 0x4(r5)
    bl rfc_send_dm
lbl_802C5F18:
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C5FD0
lbl_802C5F24:
    lis r30, lbl_80457828@ha
    lbz r3, lbl_80457828@l(r30)
    bl port_find_dlci_port
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802C5F58
    lbz r4, lbl_80457828@l(r30)
    mr r3, r28
    li r5, 0x1
    bl rfc_send_dm
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C5FD0
lbl_802C5F58:
    lbz r0, lbl_80457828@l(r30)
    lbz r5, 0x0(r3)
    add r4, r28, r0
    stb r5, 0x24(r4)
    stw r28, 0x6c(r3)
lbl_802C5F6C:
    clrlwi r4, r29, 24
    cmplwi r4, 0x4
    bne lbl_802C5FBC
    lhz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_802C5F94
    mr r3, r27
    mr r5, r31
    bl rfc_port_sm_execute
    b lbl_802C5F9C
lbl_802C5F94:
    mr r3, r31
    bl GKI_freebuf
lbl_802C5F9C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r4, 0x5(r3)
    cmpwi r4, 0x0
    beq lbl_802C5FD0
    mr r3, r27
    bl rfc_inc_credit
    b lbl_802C5FD0
lbl_802C5FBC:
    mr r3, r27
    li r5, 0x0
    bl rfc_port_sm_execute
    mr r3, r31
    bl GKI_freebuf
lbl_802C5FD0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_CongestionStatusInd
// ----------------------------------------------------------------------------
asm void RFCOMM_CongestionStatusInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    subi r0, r3, 0x40
    cmpwi r0, 0xa
    stw r31, 0x1c(r1)
    lis r31, lbl_803778E8@ha
    addi r31, r31, lbl_803778E8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    blt lbl_802C604C
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C6044
    mr r5, r28
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C6044:
    li r30, 0x0
    b lbl_802C6098
lbl_802C604C:
    lis r5, lbl_80457828@ha
    slwi r0, r0, 2
    addi r5, r5, lbl_80457828@l
    add r4, r5, r0
    lwz r30, 0x3c(r4)
    cmpwi r30, 0x0
    beq lbl_802C6098
    lhz r6, 0x68(r30)
    cmplw r6, r3
    beq lbl_802C6098
    lbz r0, 0x414(r5)
    cmplwi r0, 0x2
    blt lbl_802C6094
    lis r3, 0x9
    mr r5, r28
    addi r4, r31, 0x1c
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C6094:
    li r30, 0x0
lbl_802C6098:
    cmpwi r30, 0x0
    bne lbl_802C60C8
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C60FC
    mr r5, r28
    addi r4, r31, 0xe4
    lis r3, 0x9
    bl LogMsg_1
    b lbl_802C60FC
lbl_802C60C8:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C60F0
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r31, 0x114
    bl LogMsg_1
lbl_802C60F0:
    mr r3, r30
    mr r4, r29
    bl rfc_process_l2cap_congestion
lbl_802C60FC:
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
// rfc_save_lcid_mcb
// ----------------------------------------------------------------------------
asm void rfc_save_lcid_mcb() {
    nofralloc
    subi r0, r4, 0x40
    lis r4, lbl_80457828@ha
    addi r4, r4, lbl_80457828@l
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x3c(r4)
    blr
}

