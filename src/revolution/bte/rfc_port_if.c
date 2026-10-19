#include "types.h"

// Translation unit: src/revolution/bte/rfc_port_if.cpp
// Total functions: 12

// Forward declarations
extern void PORT_DlcEstablishCnf();
extern void PORT_DlcReleaseInd();
extern void PORT_PortNegCnf();
extern void RFCOMM_ControlReq();
extern void RFCOMM_DataReq();
extern void RFCOMM_DlcEstablishReq();
extern void RFCOMM_DlcEstablishRsp();
extern void RFCOMM_DlcReleaseReq();
extern void RFCOMM_FlowReq();
extern void RFCOMM_LineStatusReq();
extern void RFCOMM_ParNegReq();
extern void RFCOMM_ParNegRsp();
extern void RFCOMM_PortNegReq();
extern void RFCOMM_PortNegRsp();
extern void RFCOMM_StartRsp();
extern void port_find_mcb_dlci_port();
extern void rfc_mx_sm_execute();
extern void rfc_port_sm_execute();
extern void rfc_port_timer_start();
extern void rfc_send_msc();
extern void rfc_send_pn();
extern void rfc_send_rls();
extern void rfc_send_rpn();

// ----------------------------------------------------------------------------
// RFCOMM_StartRsp
// ----------------------------------------------------------------------------
asm void RFCOMM_StartRsp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r5, r1, 0x8
    sth r4, 0x8(r1)
    li r4, 0x7
    bl rfc_mx_sm_execute
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_DlcEstablishReq
// ----------------------------------------------------------------------------
asm void RFCOMM_DlcEstablishReq() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x6c(r30)
    cmplwi r0, 0x5
    beq lbl_802C7F8C
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl PORT_DlcEstablishCnf
    b lbl_802C7F98
lbl_802C7F8C:
    li r4, 0x9
    li r5, 0x0
    bl rfc_port_sm_execute
lbl_802C7F98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_DlcEstablishRsp
// ----------------------------------------------------------------------------
asm void RFCOMM_DlcEstablishRsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    sth r6, 0x8(r1)
    bl port_find_mcb_dlci_port
    lbz r0, 0x6c(r30)
    cmplwi r0, 0x5
    beq lbl_802C7FFC
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_802C7FFC
    mr r3, r30
    mr r4, r31
    bl PORT_DlcReleaseInd
    b lbl_802C8008
lbl_802C7FFC:
    addi r5, r1, 0x8
    li r4, 0xb
    bl rfc_port_sm_execute
lbl_802C8008:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_ParNegReq
// ----------------------------------------------------------------------------
asm void RFCOMM_ParNegReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x6c(r28)
    mr r31, r3
    cmplwi r0, 0x5
    beq lbl_802C8068
    li r0, 0xd
    stb r0, 0xe(r3)
    b lbl_802C80E0
lbl_802C8068:
    lbz r4, 0x72(r28)
    li r0, 0x2
    cmpwi r4, 0x0
    beq lbl_802C807C
    mr r0, r4
lbl_802C807C:
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bne lbl_802C80AC
    lhz r4, 0x9c(r3)
    li r7, 0xf0
    li r0, 0x7
    cmplwi r4, 0x7
    bge lbl_802C80A0
    mr r0, r4
lbl_802C80A0:
    clrlwi r8, r0, 24
    sth r8, 0x9a(r3)
    b lbl_802C80B4
lbl_802C80AC:
    li r7, 0x0
    li r8, 0x0
lbl_802C80B4:
    lbz r0, 0x69(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x1
    stb r0, 0x69(r3)
    mr r3, r28
    bl rfc_send_pn
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
lbl_802C80E0:
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
// RFCOMM_ParNegRsp
// ----------------------------------------------------------------------------
asm void RFCOMM_ParNegRsp() {
    nofralloc
    lbz r0, 0x6c(r3)
    mr r9, r6
    mr r8, r7
    cmplwi r0, 0x5
    bnelr
    mr r6, r5
    mr r7, r9
    li r5, 0x0
    b rfc_send_pn
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_PortNegReq
// ----------------------------------------------------------------------------
asm void RFCOMM_PortNegReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x6c(r28)
    mr r31, r3
    cmplwi r0, 0x5
    beq lbl_802C817C
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    li r6, 0x1
    bl PORT_PortNegCnf
    b lbl_802C81C4
lbl_802C817C:
    cmpwi r30, 0x0
    bne lbl_802C8194
    lbz r0, 0x69(r3)
    ori r0, r0, 0x2
    stb r0, 0x69(r3)
    b lbl_802C81A0
lbl_802C8194:
    lbz r0, 0x69(r3)
    ori r0, r0, 0x4
    stb r0, 0x69(r3)
lbl_802C81A0:
    mr r3, r28
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    li r7, 0x3f7f
    bl rfc_send_rpn
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
lbl_802C81C4:
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
// RFCOMM_PortNegRsp
// ----------------------------------------------------------------------------
asm void RFCOMM_PortNegRsp() {
    nofralloc
    lbz r0, 0x6c(r3)
    mr r7, r6
    cmplwi r0, 0x5
    bnelr
    mr r6, r5
    li r5, 0x0
    b rfc_send_rpn
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_ControlReq
// ----------------------------------------------------------------------------
asm void RFCOMM_ControlReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_802C8288
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_802C8250
    b lbl_802C8288
lbl_802C8250:
    lbz r0, 0x64(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x1
    stb r0, 0x64(r3)
    lbz r0, 0x69(r3)
    ori r0, r0, 0x8
    stb r0, 0x69(r3)
    mr r3, r28
    bl rfc_send_msc
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
lbl_802C8288:
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
// RFCOMM_FlowReq
// ----------------------------------------------------------------------------
asm void RFCOMM_FlowReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_802C832C
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_802C82F4
    b lbl_802C832C
lbl_802C82F4:
    cntlzw r0, r30
    mr r4, r29
    extrwi r0, r0, 8, 19
    addi r6, r31, 0x5a
    stb r0, 0x5e(r3)
    li r5, 0x1
    lbz r0, 0x69(r3)
    ori r0, r0, 0x8
    stb r0, 0x69(r3)
    mr r3, r28
    bl rfc_send_msc
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
lbl_802C832C:
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
// RFCOMM_LineStatusReq
// ----------------------------------------------------------------------------
asm void RFCOMM_LineStatusReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lbz r0, 0x2(r3)
    mr r31, r3
    cmplwi r0, 0x2
    bne lbl_802C83C4
    lbz r0, 0x68(r3)
    cmplwi r0, 0x4
    beq lbl_802C8398
    b lbl_802C83C4
lbl_802C8398:
    lbz r0, 0x69(r3)
    mr r4, r29
    mr r6, r30
    li r5, 0x1
    ori r0, r0, 0x10
    stb r0, 0x69(r3)
    mr r3, r28
    bl rfc_send_rls
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
lbl_802C83C4:
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
// RFCOMM_DlcReleaseReq
// ----------------------------------------------------------------------------
asm void RFCOMM_DlcReleaseReq() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl port_find_mcb_dlci_port
    li r4, 0xc
    li r5, 0x0
    bl rfc_port_sm_execute
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// RFCOMM_DataReq
// ----------------------------------------------------------------------------
asm void RFCOMM_DataReq() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bl port_find_mcb_dlci_port
    mr r5, r31
    li r4, 0xe
    bl rfc_port_sm_execute
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

