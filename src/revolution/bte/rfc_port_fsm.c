#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();               /* extern */
M2C_UNK memset();             /* extern */
extern M2C_UNK lbl_80377FE0;
extern M2C_UNK lbl_80457828;

/*
Decompilation failure in function rfc_port_sm_execute:

Cannot find branch target rfc_port_sm_term_wait_sec_check
*/

/*
Decompilation failure in function rfc_port_sm_state_closed:

Found bctr instruction at rfc_port_fsm.s line 72, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function rfc_port_sm_sabme_wait_ua:

Found bctr instruction at rfc_port_fsm.s line 171, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function rfc_port_sm_term_wait_sec_check:

Found bctr instruction at rfc_port_fsm.s line 282, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function rfc_port_sm_orig_wait_sec_check:

Found bctr instruction at rfc_port_fsm.s line 402, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function rfc_port_sm_opened:

Found bctr instruction at rfc_port_fsm.s line 492, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function rfc_port_sm_disc_wait_ua:

Found bctr instruction at rfc_port_fsm.s line 622, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void rfc_process_pn();
void rfc_process_rpn();
void rfc_process_msc();
void rfc_process_rls();
void rfc_process_nsc();
void rfc_process_test_rsp();
void rfc_process_fcon();
void rfc_process_fcoff();
void rfc_process_l2cap_congestion();
void rfc_set_port_state();

// rfc_process_pn: definicion C reemplazada por asm (ver abajo)



// rfc_process_msc: definicion C reemplazada por asm (ver abajo)


// rfc_process_rls: definicion C reemplazada por asm (ver abajo)


void rfc_process_nsc(s32 arg0, s32 arg1) {

}

void rfc_process_test_rsp(s32 arg0, s32 arg1) {
    GKI_freebuf(arg1);
}

// rfc_process_fcon: definicion C reemplazada por asm (ver abajo)


// rfc_process_fcoff: definicion C reemplazada por asm (ver abajo)



void rfc_set_port_state(u8 *arg0, s8 *arg1, s32 arg2) {
    if (M2C_FIELD(arg1, u16 *, 0x12) & 1) {
        M2C_FIELD(arg0, u8 *, 0) = M2C_FIELD(arg1, u8 *, 0xA);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 2) {
        M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0xB);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 4) {
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0xC);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 8) {
        M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0xD);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 0x10) {
        M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 0xE);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 0x3F00) {
        M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 0xF);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 0x20) {
        M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    }
    if (M2C_FIELD(arg1, u16 *, 0x12) & 0x40) {
        M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_80377D38[];
extern u8 jumptable_80377DA0[];
extern u8 jumptable_80377E38[];
extern u8 jumptable_80377ED8[];
extern u8 jumptable_80377F3C[];
extern u8 jumptable_80377FA4[];
extern u8 lbl_80377CE0[];
extern u8 lbl_80377CF4[];
extern u8 lbl_80377D14[];
extern u8 lbl_80377D74[];
extern u8 lbl_80377F18[];
extern u8 lbl_80377F78[];
extern void LogMsg_1();
extern void LogMsg_2();
extern void PORT_ControlCnf();
extern void PORT_ControlInd();
extern void PORT_DataInd();
extern void PORT_DlcEstablishCnf();
extern void PORT_DlcEstablishInd();
extern void PORT_DlcReleaseInd();
extern void PORT_FlowInd();
extern void PORT_ParNegCnf();
extern void PORT_ParNegInd();
extern void PORT_PortNegCnf();
extern void PORT_PortNegInd();
extern void Port_TimeOutCloseMux();
extern void _restgpr_27();
extern void _savegpr_27();
extern void btm_sec_abort_access_req();
extern void btm_sec_mx_access_request();
extern void port_rfc_closed();
extern void rfc_check_send_cmd();
extern void rfc_dec_credit();
extern void rfc_port_closed();
extern int rfc_port_sm_disc_wait_ua();
extern int rfc_port_sm_execute();
extern int rfc_port_sm_opened();
extern int rfc_port_sm_orig_wait_sec_check();
extern int rfc_port_sm_sabme_wait_ua();
extern int rfc_port_sm_state_closed();
extern int rfc_port_sm_term_wait_sec_check();
extern void rfc_port_timer_start();
extern void rfc_port_timer_stop();
void rfc_process_fcoff(s8 *arg0, s32 arg1);
void rfc_process_fcon(s8 *arg0, s32 arg1);
void rfc_process_l2cap_congestion();
void rfc_process_msc(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0);
void rfc_process_pn(s8 *arg0, s32 arg1, s8 *arg2);
void rfc_process_rls(s32 arg0, s32 arg1, s8 *arg2);
void rfc_process_rpn();
extern void rfc_send_buf_uih();
extern void rfc_send_disc();
extern void rfc_send_dm();
extern void rfc_send_fcoff();
extern void rfc_send_fcon();
extern void rfc_send_msc();
extern void rfc_send_rls();
extern void rfc_send_rpn();
extern void rfc_send_sabme();
extern void rfc_send_ua();

// asm_to_cpp: rfc_port_sm_execute
asm int rfc_port_sm_execute() {
    nofralloc
    cmpwi r3, 0x0
    mr r6, r4
    bne lbl_802C6DB8
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    bltlr
    lis r3, 0x9
    lis r4, lbl_80377CE0@ha
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377CE0@l
    b LogMsg_1
    blr
lbl_802C6DB8:
    lbz r0, 0x68(r3)
    cmpwi r0, 0x3
    beq lbl_802C6DFC
    bge lbl_802C6DE0
    cmpwi r0, 0x1
    beq lbl_802C6DF4
    bge lbl_802C6DF8
    cmpwi r0, 0x0
    bge lbl_802C6DF0
    blr
lbl_802C6DE0:
    cmpwi r0, 0x5
    beq lbl_802C6E04
    bgelr
    b lbl_802C6E00
lbl_802C6DF0:
    b rfc_port_sm_state_closed
lbl_802C6DF4:
    b rfc_port_sm_sabme_wait_ua
lbl_802C6DF8:
    b rfc_port_sm_orig_wait_sec_check
lbl_802C6DFC:
    b rfc_port_sm_term_wait_sec_check
lbl_802C6E00:
    b rfc_port_sm_opened
lbl_802C6E04:
    b rfc_port_sm_disc_wait_ua
    blr
}

// asm_to_cpp: rfc_port_sm_state_closed
asm int rfc_port_sm_state_closed() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_802C6F3C
    lis r6, jumptable_80377D38@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80377D38@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0xd(r30)
    li r5, 0x2
    lis r8, rfc_sec_check_complete@ha
    stb r5, 0x68(r3)
    lwz r4, 0x6c(r3)
    mr r9, r30
    srwi r7, r0, 1
    addi r8, r8, rfc_sec_check_complete@l
    addi r3, r4, 0x62
    li r4, 0x3
    li r5, 0x1
    li r6, 0x3
    bl btm_sec_mx_access_request
    b lbl_802C6F68
    b lbl_802C6F68
    mr r3, r5
    bl GKI_freebuf
    b lbl_802C6F3C
    lbz r0, 0xd(r30)
    li r5, 0x3
    lis r8, rfc_sec_check_complete@ha
    stb r5, 0x68(r3)
    lwz r4, 0x6c(r3)
    mr r9, r30
    srwi r7, r0, 1
    addi r8, r8, rfc_sec_check_complete@l
    addi r3, r4, 0x62
    li r4, 0x3
    li r5, 0x0
    li r6, 0x3
    bl btm_sec_mx_access_request
    b lbl_802C6F68
    b lbl_802C6F68
    bl rfc_port_closed
    b lbl_802C6F68
    mr r3, r5
    bl GKI_freebuf
    lwz r3, 0x6c(r30)
    li r5, 0x0
    lbz r4, 0xd(r30)
    bl rfc_send_dm
    b lbl_802C6F68
    lwz r3, 0x6c(r3)
    li r5, 0x0
    lbz r4, 0xd(r30)
    bl rfc_send_dm
    b lbl_802C6F68
    lwz r3, 0x6c(r3)
    bl Port_TimeOutCloseMux
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C6F68
    lis r4, lbl_80377CF4@ha
    lbz r5, 0x68(r30)
    mr r6, r31
    lis r3, 0x9
    addi r4, r4, lbl_80377CF4@l
    bl LogMsg_2
    b lbl_802C6F68
lbl_802C6F3C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C6F68
    lis r3, 0x9
    lis r4, lbl_80377D14@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377D14@l
    bl LogMsg_1
lbl_802C6F68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_sm_sabme_wait_ua
asm int rfc_port_sm_sabme_wait_ua() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_802C70D8
    lis r6, jumptable_80377DA0@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80377DA0@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C7104
    lis r4, lbl_80377CF4@ha
    lbz r5, 0x68(r30)
    mr r6, r31
    lis r3, 0x9
    addi r4, r4, lbl_80377CF4@l
    bl LogMsg_2
    b lbl_802C7104
    li r4, 0x3
    bl rfc_port_timer_start
    lwz r3, 0x6c(r30)
    lbz r4, 0xd(r30)
    bl rfc_send_disc
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x69(r30)
    stb r0, 0x68(r30)
    b lbl_802C7104
    bl rfc_port_closed
    b lbl_802C7104
    mr r3, r5
    bl GKI_freebuf
    b lbl_802C70D8
    bl rfc_port_timer_stop
    li r0, 0x4
    lwz r3, 0x6c(r30)
    stb r0, 0x68(r30)
    li r6, 0x0
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl PORT_DlcEstablishCnf
    b lbl_802C7104
    lwz r3, 0x6c(r3)
    li r6, 0x1
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl PORT_DlcEstablishCnf
    mr r3, r30
    bl rfc_port_closed
    b lbl_802C7104
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl rfc_send_ua
    lwz r3, 0x6c(r30)
    li r6, 0x1
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl PORT_DlcEstablishCnf
    mr r3, r30
    bl rfc_port_closed
    b lbl_802C7104
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl rfc_send_ua
    b lbl_802C7104
    mr r3, r5
    bl GKI_freebuf
    b lbl_802C7104
    li r0, 0x0
    lwz r5, 0x6c(r3)
    stb r0, 0x68(r3)
    li r6, 0x1
    mr r3, r5
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r5)
    bl PORT_DlcEstablishCnf
    b lbl_802C7104
lbl_802C70D8:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C7104
    lis r3, 0x9
    lis r4, lbl_80377D74@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377D74@l
    bl LogMsg_1
lbl_802C7104:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_sm_term_wait_sec_check
asm int rfc_port_sm_term_wait_sec_check() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80377CE0@ha
    cmplwi r4, 0xf
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80377CE0@l
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_802C7298
    lis r6, jumptable_80377E38@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80377E38@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_802C7194
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_802C72C0
    lbz r4, 0xd(r30)
    li r5, 0x1
    bl rfc_send_dm
    mr r3, r30
    li r4, 0xf
    bl port_rfc_closed
    b lbl_802C72C0
lbl_802C7194:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    lhz r5, 0x6a(r3)
    bl PORT_DlcEstablishInd
    b lbl_802C72C0
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C72C0
    lbz r5, 0x68(r30)
    mr r6, r4
    addi r4, r7, 0x14
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C72C0
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl btm_sec_abort_access_req
    mr r3, r30
    bl rfc_port_closed
    b lbl_802C72C0
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C720C
    addi r4, r7, 0xfc
    lis r3, 0x9
    bl LogMsg_0
lbl_802C720C:
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C72C0
    b lbl_802C72C0
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl btm_sec_abort_access_req
    li r0, 0x0
    lwz r3, 0x6c(r30)
    stb r0, 0x68(r30)
    lbz r4, 0xd(r30)
    bl rfc_send_ua
    lwz r3, 0x6c(r30)
    lbz r4, 0xd(r30)
    bl PORT_DlcReleaseInd
    b lbl_802C72C0
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C72C0
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_802C7280
    lwz r3, 0x6c(r3)
    cmpwi r3, 0x0
    beq lbl_802C72C0
    lbz r4, 0xd(r30)
    li r5, 0x1
    bl rfc_send_dm
    b lbl_802C72C0
lbl_802C7280:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl rfc_send_ua
    li r0, 0x4
    stb r0, 0x68(r30)
    b lbl_802C72C0
lbl_802C7298:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C72C0
    lis r3, 0x9
    mr r5, r4
    addi r3, r3, 0x1
    addi r4, r7, 0x128
    bl LogMsg_1
lbl_802C72C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_sm_orig_wait_sec_check
asm int rfc_port_sm_orig_wait_sec_check() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80377CE0@ha
    cmplwi r4, 0xf
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80377CE0@l
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    bgt lbl_802C73E8
    lis r6, jumptable_80377ED8@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80377ED8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_802C7348
    lwz r3, 0x6c(r3)
    li r5, 0x0
    lbz r4, 0xd(r30)
    li r6, 0x70
    bl PORT_DlcEstablishCnf
    mr r3, r30
    bl rfc_port_closed
    b lbl_802C7410
lbl_802C7348:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r30)
    bl rfc_send_sabme
    mr r3, r30
    li r4, 0x3c
    bl rfc_port_timer_start
    li r0, 0x1
    stb r0, 0x68(r30)
    b lbl_802C7410
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C7410
    lbz r5, 0x68(r30)
    mr r6, r4
    addi r4, r7, 0x14
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C7410
    lwz r3, 0x6c(r3)
    addi r3, r3, 0x62
    bl btm_sec_abort_access_req
    mr r3, r30
    bl rfc_port_closed
    b lbl_802C7410
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C73D0
    addi r4, r7, 0x198
    lis r3, 0x9
    bl LogMsg_0
lbl_802C73D0:
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C7410
    mr r3, r31
    bl GKI_freebuf
    b lbl_802C7410
lbl_802C73E8:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C7410
    lis r3, 0x9
    mr r5, r4
    addi r3, r3, 0x1
    addi r4, r7, 0x1c8
    bl LogMsg_1
lbl_802C7410:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_sm_opened
asm int rfc_port_sm_opened() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bgt lbl_802C75D0
    lis r6, jumptable_80377F3C@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80377F3C@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C75FC
    lis r4, lbl_80377CF4@ha
    lbz r5, 0x68(r31)
    mr r6, r30
    lis r3, 0x9
    addi r4, r4, lbl_80377CF4@l
    bl LogMsg_2
    b lbl_802C75FC
    li r4, 0x3
    bl rfc_port_timer_start
    lwz r3, 0x6c(r31)
    lbz r4, 0xd(r31)
    bl rfc_send_disc
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x69(r31)
    stb r0, 0x68(r31)
    b lbl_802C75FC
    bl rfc_port_closed
    b lbl_802C75FC
    lwz r4, 0x6c(r3)
    lbz r0, 0x72(r4)
    cmplwi r0, 0x2
    bne lbl_802C7518
    lhz r4, 0x2(r5)
    lhz r0, 0x14(r3)
    cmplw r4, r0
    bge lbl_802C7518
    lbz r0, 0x3d(r3)
    cmpwi r0, 0x0
    bne lbl_802C7518
    lhz r0, 0x9a(r3)
    lhz r4, 0x9c(r3)
    cmplw r4, r0
    ble lbl_802C7518
    subf r0, r0, r4
    clrlwi r0, r0, 24
    sth r0, 0x6(r5)
    lhz r0, 0x9c(r3)
    sth r0, 0x9a(r3)
    b lbl_802C7520
lbl_802C7518:
    li r0, 0x0
    sth r0, 0x6(r5)
lbl_802C7520:
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl rfc_send_buf_uih
    mr r3, r31
    bl rfc_dec_credit
    b lbl_802C75FC
    b lbl_802C75FC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl rfc_send_ua
    b lbl_802C75FC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl PORT_DlcReleaseInd
    mr r3, r31
    bl rfc_port_closed
    b lbl_802C75FC
    li r0, 0x0
    lbz r4, 0xd(r31)
    stb r0, 0x68(r3)
    lwz r3, 0x6c(r3)
    bl rfc_send_ua
    lwz r3, 0x6c(r31)
    lbz r4, 0xd(r31)
    bl PORT_DlcReleaseInd
    b lbl_802C75FC
    lwz r3, 0x6c(r3)
    lbz r4, 0xd(r31)
    bl PORT_DataInd
    b lbl_802C75FC
    lwz r3, 0x6c(r3)
    bl Port_TimeOutCloseMux
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C75FC
    lis r4, lbl_80377CF4@ha
    lbz r5, 0x68(r31)
    mr r6, r30
    lis r3, 0x9
    addi r4, r4, lbl_80377CF4@l
    bl LogMsg_2
    b lbl_802C75FC
lbl_802C75D0:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C75FC
    lis r3, 0x9
    lis r4, lbl_80377F18@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377F18@l
    bl LogMsg_1
lbl_802C75FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_sm_disc_wait_ua
asm int rfc_port_sm_disc_wait_ua() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0xe
    mr r6, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bgt lbl_802C76F0
    lis r7, jumptable_80377FA4@ha
    slwi r0, r4, 2
    addi r7, r7, jumptable_80377FA4@l
    lwzx r7, r7, r0
    mtctr r7
    bctr
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C771C
    lis r4, lbl_80377CF4@ha
    lbz r5, 0x68(r31)
    lis r3, 0x9
    addi r4, r4, lbl_80377CF4@l
    bl LogMsg_2
    b lbl_802C771C
    bl rfc_port_closed
    b lbl_802C771C
    mr r3, r5
    bl GKI_freebuf
    b lbl_802C771C
    lwz r3, 0x6c(r3)
    li r0, 0x1
    stb r0, 0x74(r3)
    mr r3, r31
    bl rfc_port_closed
    b lbl_802C771C
    lwz r3, 0x6c(r3)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl rfc_send_dm
    b lbl_802C771C
    lwz r3, 0x6c(r3)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl rfc_send_dm
    b lbl_802C771C
    mr r3, r5
    bl GKI_freebuf
    lwz r3, 0x6c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl rfc_send_dm
    b lbl_802C771C
    bl rfc_port_closed
    b lbl_802C771C
lbl_802C76F0:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C771C
    lis r3, 0x9
    lis r4, lbl_80377F78@ha
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377F78@l
    bl LogMsg_1
lbl_802C771C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_process_pn
asm void rfc_process_pn(s8 *arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r31, 0x0(r5)
    beq lbl_802C77B8
    lbz r0, 0x6c(r3)
    cmplwi r0, 0x6
    beq lbl_802C7780
    lhz r5, 0xe(r5)
    mr r4, r31
    lbz r6, 0xa(r30)
    lbz r7, 0x11(r30)
    bl PORT_ParNegInd
    b lbl_802C77FC
lbl_802C7780:
    mr r4, r31
    li r5, 0x0
    bl rfc_send_dm
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C77FC
    lis r3, 0x9
    lis r4, lbl_80377FE0@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377FE0@l
    bl LogMsg_0
    b lbl_802C77FC
lbl_802C77B8:
    mr r4, r31
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    beq lbl_802C77FC
    lbz r4, 0x69(r3)
    clrlwi. r0, r4, 31
    bne lbl_802C77D8
    b lbl_802C77FC
lbl_802C77D8:
    rlwinm r0, r4, 0, 24, 30
    stb r0, 0x69(r3)
    bl rfc_port_timer_stop
    lhz r5, 0xe(r30)
    mr r3, r29
    lbz r6, 0xa(r30)
    mr r4, r31
    lbz r7, 0x11(r30)
    bl PORT_ParNegCnf
lbl_802C77FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: rfc_process_rpn
asm void rfc_process_rpn() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    mr r28, r4
    lbz r4, 0x0(r6)
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    bne lbl_802C7890
    cmpwi r28, 0x0
    beq lbl_802C7B04
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x9
    bl memset
    mr r4, r30
    addi r3, r1, 0x8
    bl rfc_set_port_state
    lbz r4, 0x0(r30)
    mr r3, r29
    lhz r6, 0x12(r30)
    addi r5, r1, 0x8
    bl PORT_PortNegInd
    b lbl_802C7B04
lbl_802C7890:
    cmpwi r28, 0x0
    beq lbl_802C7904
    cmpwi r31, 0x0
    beq lbl_802C7904
    lbz r4, 0x51(r3)
    addi r6, r3, 0x51
    lbz r0, 0x52(r3)
    li r5, 0x0
    li r7, 0x0
    stb r4, 0x8(r1)
    stb r0, 0x9(r1)
    lbz r4, 0x53(r3)
    lbz r0, 0x54(r3)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lbz r4, 0x55(r3)
    lbz r0, 0x56(r3)
    stb r4, 0xc(r1)
    stb r0, 0xd(r1)
    lbz r4, 0x57(r3)
    lbz r0, 0x58(r3)
    stb r4, 0xe(r1)
    stb r0, 0xf(r1)
    lbz r0, 0x59(r3)
    mr r3, r29
    stb r0, 0x10(r1)
    lbz r4, 0x0(r30)
    bl rfc_send_rpn
    b lbl_802C7B04
lbl_802C7904:
    lbz r5, 0x51(r3)
    mr r4, r30
    lbz r0, 0x52(r3)
    stb r5, 0x8(r1)
    stb r0, 0x9(r1)
    lbz r5, 0x53(r3)
    lbz r0, 0x54(r3)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lbz r5, 0x55(r3)
    lbz r0, 0x56(r3)
    stb r5, 0xc(r1)
    stb r0, 0xd(r1)
    lbz r5, 0x57(r3)
    lbz r0, 0x58(r3)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lbz r0, 0x59(r3)
    addi r3, r1, 0x8
    stb r0, 0x10(r1)
    bl rfc_set_port_state
    cmpwi r28, 0x0
    beq lbl_802C7978
    lbz r4, 0x0(r30)
    mr r3, r29
    lhz r6, 0x12(r30)
    addi r5, r1, 0x8
    bl PORT_PortNegInd
    b lbl_802C7B04
lbl_802C7978:
    lbz r4, 0x0(r30)
    mr r3, r29
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802C7B04
    lbz r0, 0x69(r3)
    rlwinm. r0, r0, 0, 29, 30
    bne lbl_802C79A0
    b lbl_802C7B04
lbl_802C79A0:
    bl rfc_port_timer_stop
    lbz r3, 0x69(r31)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_802C7A5C
    rlwinm r0, r3, 0, 31, 29
    stb r0, 0x69(r31)
    lbz r3, 0x8(r1)
    lbz r0, 0x9(r1)
    stb r3, 0x51(r31)
    stb r0, 0x52(r31)
    lbz r3, 0xa(r1)
    lbz r0, 0xb(r1)
    stb r3, 0x53(r31)
    stb r0, 0x54(r31)
    lbz r3, 0xc(r1)
    lbz r0, 0xd(r1)
    stb r3, 0x55(r31)
    stb r0, 0x56(r31)
    lbz r3, 0xe(r1)
    lbz r0, 0xf(r1)
    stb r3, 0x57(r31)
    stb r0, 0x58(r31)
    lbz r0, 0x10(r1)
    stb r0, 0x59(r31)
    lbz r0, 0xd(r1)
    cmplwi r0, 0xc
    beq lbl_802C7A14
    cmplwi r0, 0x30
    bne lbl_802C7A20
lbl_802C7A14:
    li r0, 0x3f7f
    sth r0, 0x12(r30)
    b lbl_802C7A64
lbl_802C7A20:
    li r0, 0xc
    mr r3, r29
    stb r0, 0x56(r31)
    addi r6, r31, 0x51
    li r5, 0x1
    li r7, 0xc00
    lbz r0, 0x69(r31)
    ori r0, r0, 0x4
    stb r0, 0x69(r31)
    lbz r4, 0x0(r30)
    bl rfc_send_rpn
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
    b lbl_802C7B04
lbl_802C7A5C:
    rlwinm r0, r3, 0, 30, 28
    stb r0, 0x69(r31)
lbl_802C7A64:
    lhz r3, 0x12(r30)
    rlwinm r0, r3, 0, 20, 21
    cmpwi r0, 0xc00
    beq lbl_802C7A80
    rlwinm r0, r3, 0, 18, 19
    cmpwi r0, 0x3000
    bne lbl_802C7A98
lbl_802C7A80:
    lbz r4, 0xd(r31)
    mr r3, r29
    addi r5, r1, 0x8
    li r6, 0x0
    bl PORT_PortNegCnf
    b lbl_802C7B04
lbl_802C7A98:
    lbz r0, 0x56(r31)
    cmplwi r0, 0xc
    bne lbl_802C7AE0
    li r0, 0x30
    mr r3, r29
    stb r0, 0x56(r31)
    addi r6, r31, 0x51
    li r5, 0x1
    li r7, 0x3000
    lbz r0, 0x69(r31)
    ori r0, r0, 0x4
    stb r0, 0x69(r31)
    lbz r4, 0x0(r30)
    bl rfc_send_rpn
    mr r3, r31
    li r4, 0x3c
    bl rfc_port_timer_start
    b lbl_802C7B04
lbl_802C7AE0:
    cmplwi r0, 0x30
    bne lbl_802C7B04
    li r0, 0x0
    mr r3, r29
    stb r0, 0x56(r31)
    addi r5, r1, 0x8
    li r6, 0x0
    lbz r4, 0xd(r31)
    bl PORT_PortNegCnf
lbl_802C7B04:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: rfc_process_msc
asm void rfc_process_msc(s8 *arg0, s32 arg1, s8 *arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r29, r4
    lbz r27, 0x9(r5)
    lbz r4, 0x0(r5)
    mr r28, r3
    mr r30, r5
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802C7C78
    rlwinm. r0, r27, 0, 29, 29
    li r0, 0x0
    stb r0, 0x8(r1)
    beq lbl_802C7B74
    ori r0, r0, 0x1
    stb r0, 0x8(r1)
lbl_802C7B74:
    rlwinm. r0, r27, 0, 28, 28
    beq lbl_802C7B88
    lbz r0, 0x8(r1)
    ori r0, r0, 0x2
    stb r0, 0x8(r1)
lbl_802C7B88:
    rlwinm. r0, r27, 0, 25, 25
    beq lbl_802C7B9C
    lbz r0, 0x8(r1)
    ori r0, r0, 0x4
    stb r0, 0x8(r1)
lbl_802C7B9C:
    rlwinm. r0, r27, 0, 24, 24
    beq lbl_802C7BB0
    lbz r0, 0x8(r1)
    ori r0, r0, 0x8
    stb r0, 0x8(r1)
lbl_802C7BB0:
    extrwi r0, r27, 1, 30
    stb r0, 0xc(r1)
    lbz r0, 0xa(r30)
    cmpwi r0, 0x0
    beq lbl_802C7BCC
    lbz r5, 0xb(r30)
    b lbl_802C7BD0
lbl_802C7BCC:
    li r5, 0x0
lbl_802C7BD0:
    li r4, 0x0
    li r0, 0x1
    cmpwi r29, 0x0
    stb r5, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    beq lbl_802C7C4C
    lbz r4, 0x0(r30)
    mr r3, r28
    addi r6, r1, 0x8
    li r5, 0x0
    bl rfc_send_msc
    lwz r3, 0x6c(r31)
    lbz r0, 0x72(r3)
    cmplwi r0, 0x2
    beq lbl_802C7C38
    lbz r3, 0xc(r1)
    stb r3, 0x63(r31)
    lbz r0, 0x24(r31)
    cmplw r3, r0
    beq lbl_802C7C38
    cntlzw r0, r3
    lbz r4, 0x0(r30)
    mr r3, r28
    extrwi r5, r0, 8, 19
    bl PORT_FlowInd
lbl_802C7C38:
    lbz r4, 0x0(r30)
    mr r3, r28
    addi r5, r1, 0x8
    bl PORT_ControlInd
    b lbl_802C7C78
lbl_802C7C4C:
    lbz r4, 0x69(r3)
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_802C7C78
    rlwinm r0, r4, 0, 29, 27
    stb r0, 0x69(r3)
    mr r3, r31
    bl rfc_port_timer_stop
    lwz r3, 0x6c(r31)
    addi r5, r1, 0x8
    lbz r4, 0xd(r31)
    bl PORT_ControlCnf
lbl_802C7C78:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: rfc_process_rls
asm void rfc_process_rls(s32 arg0, s32 arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802C7CD8
    lbz r4, 0x0(r5)
    lbz r5, 0x9(r5)
    bl PORT_LineStatusInd
    lbz r4, 0x0(r31)
    mr r3, r30
    lbz r6, 0x9(r31)
    li r5, 0x0
    bl rfc_send_rls
    b lbl_802C7D04
lbl_802C7CD8:
    lbz r4, 0x0(r5)
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    beq lbl_802C7D04
    lbz r4, 0x69(r3)
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_802C7CF8
    b lbl_802C7D04
lbl_802C7CF8:
    rlwinm r0, r4, 0, 28, 26
    stb r0, 0x69(r3)
    bl rfc_port_timer_stop
lbl_802C7D04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_process_fcon
asm void rfc_process_fcon(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802C7D78
    lis r5, lbl_80457828@ha
    li r0, 0x0
    addi r5, r5, lbl_80457828@l
    li r4, 0x0
    stb r0, 0x64(r5)
    bl rfc_send_fcon
    lbz r0, 0x73(r31)
    cmpwi r0, 0x0
    bne lbl_802C7D78
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl PORT_FlowInd
lbl_802C7D78:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_process_fcoff
asm void rfc_process_fcoff(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802C7DDC
    lis r4, lbl_80457828@ha
    li r0, 0x1
    addi r4, r4, lbl_80457828@l
    stb r0, 0x64(r4)
    lbz r0, 0x73(r3)
    cmpwi r0, 0x0
    bne lbl_802C7DD0
    li r4, 0x0
    li r5, 0x0
    bl PORT_FlowInd
lbl_802C7DD0:
    mr r3, r31
    li r4, 0x0
    bl rfc_send_fcoff
lbl_802C7DDC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_process_l2cap_congestion
asm void rfc_process_l2cap_congestion() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stb r4, 0x73(r3)
    bne lbl_802C7E20
    li r4, 0x0
    bl rfc_check_send_cmd
lbl_802C7E20:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_802C7E60
    cmpwi r31, 0x0
    bne lbl_802C7E50
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl PORT_FlowInd
    b lbl_802C7E60
lbl_802C7E50:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl PORT_FlowInd
lbl_802C7E60:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
