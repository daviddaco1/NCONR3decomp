#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK rfc_mx_sm_execute();          /* extern */
M2C_UNK rfc_port_sm_execute();        /* extern */

void RFCOMM_StartRsp();
void RFCOMM_DlcEstablishReq();
void RFCOMM_DlcEstablishRsp();
void RFCOMM_ParNegReq();
void RFCOMM_PortNegReq();
void RFCOMM_ControlReq();
void RFCOMM_FlowReq();
void RFCOMM_LineStatusReq();
void RFCOMM_DlcReleaseReq();
void RFCOMM_DataReq();


// RFCOMM_DlcEstablishReq: definicion C reemplazada por asm (ver abajo)



// RFCOMM_ParNegReq: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function RFCOMM_ParNegRsp:

Cannot find branch target rfc_send_pn
*/

void RFCOMM_PortNegReq(s8 *arg0, s32 arg1, s32 arg2) {
    s8 *temp_r31;
    s8 *temp_r3;

    temp_r3 = port_find_mcb_dlci_port((s32) arg0, (u32) arg1);
    temp_r31 = temp_r3;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x6C) != 5) {
        PORT_PortNegCnf((s32) arg0, arg1, 0, 1);
        return;
    }
    if (arg2 == 0) {
        M2C_FIELD(temp_r3, u8 *, 0x69) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x69) | 2);
    } else {
        M2C_FIELD(temp_r3, u8 *, 0x69) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x69) | 4);
    }
    rfc_send_rpn(arg0, arg1, 1, (s8 *) arg2, 0x3F7FU);
    rfc_port_timer_start((s32) temp_r31, 0x3CU);
}

/*
Decompilation failure in function RFCOMM_PortNegRsp:

Cannot find branch target rfc_send_rpn
*/

// RFCOMM_ControlReq: definicion C reemplazada por asm (ver abajo)


// RFCOMM_FlowReq: definicion C reemplazada por asm (ver abajo)


// RFCOMM_LineStatusReq: definicion C reemplazada por asm (ver abajo)


// RFCOMM_DlcReleaseReq: definicion C reemplazada por asm (ver abajo)


// RFCOMM_DataReq: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void PORT_DlcEstablishCnf();
extern void PORT_DlcReleaseInd();
void RFCOMM_ControlReq(s32 arg0, s32 arg1, s8 *arg2);
void RFCOMM_DataReq(s32 arg0, s32 arg1, u16 *arg2);
void RFCOMM_DlcEstablishReq(s8 *arg0, s32 arg1, s32 arg2);
void RFCOMM_DlcEstablishRsp();
void RFCOMM_DlcReleaseReq(s32 arg0, s32 arg1);
void RFCOMM_FlowReq(s32 arg0, s32 arg1, s32 arg2);
void RFCOMM_LineStatusReq(s32 arg0, s32 arg1, s32 arg2);
void RFCOMM_ParNegReq(s8 *arg0, s32 arg1, s32 arg2);
extern int RFCOMM_ParNegRsp();
extern int RFCOMM_PortNegRsp();
void RFCOMM_StartRsp();
extern void rfc_send_msc();
extern void rfc_send_rls();

// asm_to_cpp: RFCOMM_StartRsp
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

// asm_to_cpp: RFCOMM_DlcEstablishReq
asm void RFCOMM_DlcEstablishReq(s8 *arg0, s32 arg1, s32 arg2) {
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

// asm_to_cpp: RFCOMM_DlcEstablishRsp
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

// asm_to_cpp: RFCOMM_ParNegReq
asm void RFCOMM_ParNegReq(s8 *arg0, s32 arg1, s32 arg2) {
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

// asm_to_cpp: RFCOMM_ParNegRsp
asm int RFCOMM_ParNegRsp() {
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

// asm_to_cpp: RFCOMM_PortNegRsp
asm int RFCOMM_PortNegRsp() {
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

// asm_to_cpp: RFCOMM_ControlReq
asm void RFCOMM_ControlReq(s32 arg0, s32 arg1, s8 *arg2) {
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

// asm_to_cpp: RFCOMM_FlowReq
asm void RFCOMM_FlowReq(s32 arg0, s32 arg1, s32 arg2) {
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

// asm_to_cpp: RFCOMM_LineStatusReq
asm void RFCOMM_LineStatusReq(s32 arg0, s32 arg1, s32 arg2) {
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

// asm_to_cpp: RFCOMM_DlcReleaseReq
asm void RFCOMM_DlcReleaseReq(s32 arg0, s32 arg1) {
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

// asm_to_cpp: RFCOMM_DataReq
asm void RFCOMM_DataReq(s32 arg0, s32 arg1, u16 *arg2) {
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
