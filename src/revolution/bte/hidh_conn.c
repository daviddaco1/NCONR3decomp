#include "types.h"

// Translation unit: src/revolution/bte/hidh_conn.cpp
// Total functions: 16

// Global data symbols (@ha/@l)
extern u8 lbl_803418A0[];
extern u8 lbl_80375A68[];
extern u8 lbl_80375A88[];
extern u8 lbl_80375AAC[];
extern u8 lbl_80375BCC[];
extern u8 lbl_80375C84[];
extern u8 lbl_80375CB0[];
extern u8 lbl_80375D08[];
extern u8 lbl_80375D34[];
extern u8 lbl_80375D58[];
extern u8 lbl_80375D88[];
extern u8 lbl_80375DB0[];
extern u8 lbl_80375DE8[];
extern u8 lbl_80375E20[];
extern u8 lbl_80456C38[];

// Forward declarations
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void L2CA_ConfigReq();
extern void L2CA_ConfigRsp();
extern void L2CA_ConnectReq();
extern void L2CA_ConnectRsp();
extern void L2CA_DataWrite();
extern void L2CA_Deregister();
extern void L2CA_DisconnectReq();
extern void L2CA_DisconnectRsp();
extern void L2CA_Register();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_17();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_17();
extern void _savegpr_24();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_get_acl_disc_reason_code();
extern void btm_sec_mx_access_request();
extern void hidh_conn_dereg();
extern void hidh_conn_disconnect();
extern void hidh_conn_initiate();
extern void hidh_conn_reg();
extern void hidh_conn_snd_data();
extern void hidh_l2cif_config_cfm();
extern void hidh_l2cif_config_ind();
extern void hidh_l2cif_cong_ind();
extern void hidh_l2cif_connect_cfm();
extern void hidh_l2cif_connect_ind();
extern void hidh_l2cif_data_ind();
extern void hidh_l2cif_disconnect_cfm();
extern void hidh_l2cif_disconnect_ind();
extern void hidh_proc_repage_timeout();
extern void hidh_sec_check_complete_orig();
extern void hidh_sec_check_complete_term();
extern void memcmp();
extern void memcpy();

// ----------------------------------------------------------------------------
// hidh_conn_reg
// ----------------------------------------------------------------------------
asm void hidh_conn_reg() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x1
    li r6, 0x1
    stw r0, 0x14(r1)
    subi r0, r3, 0x1
    li r5, 0x280
    li r3, 0x11
    stw r31, 0xc(r1)
    lis r31, lbl_803418A0@ha
    addi r4, r31, lbl_803418A0@l
    stw r30, 0x8(r1)
    lis r30, lbl_80456C38@ha
    addi r30, r30, lbl_80456C38@l
    stb r6, 0x346(r30)
    sth r5, 0x348(r30)
    stb r6, 0x364(r30)
    sth r0, 0x366(r30)
    bl L2CA_Register
    clrlwi. r0, r3, 24
    bne lbl_802BBCF0
    lbz r0, 0x401(r30)
    cmplwi r0, 0x1
    blt lbl_802BBCE8
    lis r4, lbl_80375A68@ha
    lis r3, 0x1e
    addi r4, r4, lbl_80375A68@l
    bl LogMsg_0
lbl_802BBCE8:
    li r3, 0xe
    b lbl_802BBDB8
lbl_802BBCF0:
    addi r4, r31, lbl_803418A0@l
    li r3, 0x13
    bl L2CA_Register
    clrlwi. r0, r3, 24
    bne lbl_802BBD30
    li r3, 0x11
    bl L2CA_Deregister
    lbz r0, 0x401(r30)
    cmplwi r0, 0x1
    blt lbl_802BBD28
    lis r4, lbl_80375A88@ha
    lis r3, 0x1e
    addi r4, r4, lbl_80375A88@l
    bl LogMsg_0
lbl_802BBD28:
    li r3, 0xe
    b lbl_802BBDB8
lbl_802BBD30:
    li r0, 0x0
    li r3, 0x0
    stb r0, 0x0(r30)
    stb r0, 0x10(r30)
    stb r0, 0x34(r30)
    stb r0, 0x44(r30)
    stb r0, 0x68(r30)
    stb r0, 0x78(r30)
    stb r0, 0x9c(r30)
    stb r0, 0xac(r30)
    stb r0, 0xd0(r30)
    stb r0, 0xe0(r30)
    stb r0, 0x104(r30)
    stb r0, 0x114(r30)
    stb r0, 0x138(r30)
    stb r0, 0x148(r30)
    stb r0, 0x16c(r30)
    stb r0, 0x17c(r30)
    stb r0, 0x1a0(r30)
    stb r0, 0x1b0(r30)
    stb r0, 0x1d4(r30)
    stb r0, 0x1e4(r30)
    stb r0, 0x208(r30)
    stb r0, 0x218(r30)
    stb r0, 0x23c(r30)
    stb r0, 0x24c(r30)
    stb r0, 0x270(r30)
    stb r0, 0x280(r30)
    stb r0, 0x2a4(r30)
    stb r0, 0x2b4(r30)
    stb r0, 0x2d8(r30)
    stb r0, 0x2e8(r30)
    stb r0, 0x30c(r30)
    stb r0, 0x31c(r30)
lbl_802BBDB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hidh_conn_disconnect
// ----------------------------------------------------------------------------
asm void hidh_conn_disconnect() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80456C38@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80456C38@l
    mulli r3, r3, 0x34
    stw r31, 0xc(r1)
    lbz r0, 0x401(r4)
    add r31, r4, r3
    cmplwi r0, 0x4
    blt lbl_802BBE10
    lis r3, 0x1e
    lis r4, lbl_80375AAC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375AAC@l
    bl LogMsg_0
lbl_802BBE10:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_802BBE28
    lhz r0, 0x16(r31)
    cmpwi r0, 0x0
    beq lbl_802BBE54
lbl_802BBE28:
    li r0, 0x5
    stb r0, 0x10(r31)
    lhz r3, 0x16(r31)
    cmpwi r3, 0x0
    beq lbl_802BBE40
    bl L2CA_DisconnectReq
lbl_802BBE40:
    lhz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_802BBE5C
    bl L2CA_DisconnectReq
    b lbl_802BBE5C
lbl_802BBE54:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_802BBE5C:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hidh_sec_check_complete_term
// ----------------------------------------------------------------------------
asm void hidh_sec_check_complete_term() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x4ec5
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    subi r3, r3, 0x13b1
    stw r31, 0xc(r1)
    lis r31, lbl_80456C38@ha
    addi r31, r31, lbl_80456C38@l
    subf r0, r31, r4
    stw r30, 0x8(r1)
    mulhw r0, r3, r0
    mr r30, r4
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r6, r0, 24
    bne lbl_802BBF00
    lbz r0, 0x10(r4)
    cmplwi r0, 0x6
    bne lbl_802BBF00
    li r3, 0x0
    li r0, 0x2
    sth r3, 0x1a(r4)
    addi r3, r4, 0x1
    lhz r5, 0x14(r30)
    li r6, 0x0
    stb r0, 0x10(r4)
    li r7, 0x0
    lbz r4, 0x12(r4)
    bl L2CA_ConnectRsp
    lhz r3, 0x14(r30)
    addi r4, r31, 0x344
    bl L2CA_ConfigReq
    b lbl_802BBF8C
lbl_802BBF00:
    cmpwi r5, 0x0
    beq lbl_802BBF8C
    li r0, 0xf
    lis r3, lbl_80456C38@ha
    sth r0, 0x1a(r4)
    addi r3, r3, lbl_80456C38@l
    mulli r4, r6, 0x34
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    add r31, r3, r4
    blt lbl_802BBF40
    lis r3, 0x1e
    lis r4, lbl_80375AAC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375AAC@l
    bl LogMsg_0
lbl_802BBF40:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_802BBF58
    lhz r0, 0x16(r31)
    cmpwi r0, 0x0
    beq lbl_802BBF84
lbl_802BBF58:
    li r0, 0x5
    stb r0, 0x10(r31)
    lhz r3, 0x16(r31)
    cmpwi r3, 0x0
    beq lbl_802BBF70
    bl L2CA_DisconnectReq
lbl_802BBF70:
    lhz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_802BBF8C
    bl L2CA_DisconnectReq
    b lbl_802BBF8C
lbl_802BBF84:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_802BBF8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_connect_ind
// ----------------------------------------------------------------------------
asm void hidh_l2cif_connect_ind() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80456C38@ha
    lis r31, lbl_80375A68@ha
    addi r7, r7, lbl_80456C38@l
    mr r26, r3
    lbz r0, 0x401(r7)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    cmplwi r0, 0x4
    addi r31, r31, lbl_80375A68@l
    li r25, 0x1
    blt lbl_802BBFFC
    lis r3, 0x1e
    mr r6, r27
    addi r4, r31, 0x58
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802BBFFC:
    lis r30, lbl_80456C38@ha
    li r24, 0x0
    addi r30, r30, lbl_80456C38@l
lbl_802BC008:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_802BC02C
    mr r3, r26
    addi r4, r30, 0x1
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802BC03C
lbl_802BC02C:
    addi r24, r24, 0x1
    addi r30, r30, 0x34
    cmpwi r24, 0x10
    blt lbl_802BC008
lbl_802BC03C:
    cmpwi r24, 0x10
    bne lbl_802BC060
    mr r3, r26
    mr r4, r29
    mr r5, r27
    li r6, 0x3
    li r7, 0x0
    bl L2CA_ConnectRsp
    b lbl_802BC1E4
lbl_802BC060:
    mulli r0, r24, 0x34
    lis r3, lbl_80456C38@ha
    cmplwi r28, 0x13
    addi r3, r3, lbl_80456C38@l
    add r30, r3, r0
    bne lbl_802BC0DC
    lhz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_802BC0A4
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BC0A0
    lis r3, 0x1e
    addi r4, r31, 0x8c
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BC0A0:
    li r25, 0x0
lbl_802BC0A4:
    lbz r5, 0x10(r30)
    cmplwi r5, 0x2
    beq lbl_802BC108
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BC0D4
    lis r3, 0x1e
    addi r4, r31, 0xc0
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802BC0D4:
    li r25, 0x0
    b lbl_802BC108
lbl_802BC0DC:
    lbz r5, 0x10(r30)
    cmpwi r5, 0x0
    beq lbl_802BC108
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BC104
    lis r3, 0x1e
    addi r4, r31, 0xf0
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802BC104:
    li r25, 0x0
lbl_802BC108:
    cmpwi r25, 0x0
    bne lbl_802BC12C
    mr r3, r26
    mr r4, r29
    mr r5, r27
    li r6, 0x4
    li r7, 0x0
    bl L2CA_ConnectRsp
    b lbl_802BC1E4
lbl_802BC12C:
    cmplwi r28, 0x11
    bne lbl_802BC188
    li r0, 0x0
    lis r8, hidh_sec_check_complete_term@ha
    stb r0, 0x11(r30)
    li r7, 0x100
    li r0, 0x6
    mr r9, r30
    sth r27, 0x14(r30)
    addi r3, r30, 0x1
    addi r8, r8, hidh_sec_check_complete_term@l
    li r4, 0x11
    stb r29, 0x12(r30)
    li r5, 0x0
    li r6, 0x6
    sth r7, 0x1a(r30)
    stb r0, 0x10(r30)
    lhz r0, 0x8(r30)
    extrwi r0, r0, 1, 16
    neg r7, r0
    addi r7, r7, 0x2
    bl btm_sec_mx_access_request
    b lbl_802BC1E4
lbl_802BC188:
    li r0, 0x3
    mr r3, r26
    stb r0, 0x10(r30)
    mr r4, r29
    mr r5, r27
    li r6, 0x0
    sth r27, 0x16(r30)
    li r7, 0x0
    bl L2CA_ConnectRsp
    lis r26, lbl_80456C38@ha
    mr r3, r27
    addi r26, r26, lbl_80456C38@l
    addi r4, r26, 0x344
    bl L2CA_ConfigReq
    lbz r0, 0x401(r26)
    cmplwi r0, 0x4
    blt lbl_802BC1E4
    lis r3, 0x1e
    mr r5, r28
    mr r6, r27
    addi r4, r31, 0x120
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802BC1E4:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// hidh_proc_repage_timeout
// ----------------------------------------------------------------------------
asm void hidh_proc_repage_timeout() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80456C38@ha
    addi r29, r29, lbl_80456C38@l
    stw r28, 0x10(r1)
    lwz r0, 0x10(r3)
    clrlwi r0, r0, 24
    mulli r0, r0, 0x34
    add r28, r29, r0
    lbz r0, 0x10(r28)
    cmpwi r0, 0x0
    bne lbl_802BC2E0
    li r5, 0x0
    li r0, 0x100
    sth r5, 0x14(r28)
    li r30, 0x1
    addi r4, r28, 0x1
    li r3, 0x11
    sth r5, 0x16(r28)
    sth r0, 0x1a(r28)
    stb r30, 0x11(r28)
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    sth r3, 0x14(r28)
    bne lbl_802BC2DC
    lbz r0, 0x401(r29)
    cmplwi r0, 0x2
    blt lbl_802BC294
    lis r3, 0x1e
    lis r4, lbl_80375BCC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375BCC@l
    bl LogMsg_0
lbl_802BC294:
    lis r5, lbl_80456C38@ha
    lis r3, 0x4ec5
    addi r5, r5, lbl_80456C38@l
    li r4, 0x1
    subf r0, r5, r28
    subi r7, r3, 0x13b1
    mulhw r0, r7, r0
    lwz r12, 0x340(r5)
    li r5, 0xe
    li r6, 0x0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulhwu r0, r7, r0
    extrwi r3, r0, 8, 20
    mtctr r12
    bctrl
    b lbl_802BC2E0
lbl_802BC2DC:
    stb r30, 0x10(r28)
lbl_802BC2E0:
    lwz r0, 0x10(r31)
    lis r7, lbl_80456C38@ha
    addi r7, r7, lbl_80456C38@l
    li r4, 0x2
    mulli r0, r0, 0x34
    li r6, 0x0
    add r5, r7, r0
    lbz r3, 0xc(r5)
    addi r0, r3, 0x1
    stb r0, 0xc(r5)
    lwz r3, 0x10(r31)
    lwz r12, 0x340(r7)
    mulli r0, r3, 0x34
    clrlwi r3, r3, 24
    add r5, r7, r0
    lbz r5, 0xc(r5)
    mtctr r12
    bctrl
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
// hidh_sec_check_complete_orig
// ----------------------------------------------------------------------------
asm void hidh_sec_check_complete_orig() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80456C38@ha
    lis r3, 0x4ec5
    addi r6, r6, lbl_80456C38@l
    lis r31, lbl_80375A68@ha
    subf r0, r6, r4
    subi r3, r3, 0x13b1
    mulhw r0, r3, r0
    cmpwi r5, 0x0
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_80375A68@l
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r30, r0, 24
    bne lbl_802BC4B0
    lbz r0, 0x10(r4)
    cmplwi r0, 0x6
    bne lbl_802BC4B0
    lbz r0, 0x401(r6)
    cmplwi r0, 0x4
    blt lbl_802BC3C4
    lis r3, 0x1e
    addi r4, r31, 0x180
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802BC3C4:
    mulli r0, r30, 0x34
    lis r27, lbl_80456C38@ha
    li r3, 0x0
    addi r27, r27, lbl_80456C38@l
    sth r3, 0x1a(r28)
    add r26, r27, r0
    addi r4, r26, 0x1
    li r3, 0x13
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    sth r3, 0x16(r28)
    bne lbl_802BC4A8
    lbz r0, 0x401(r27)
    cmplwi r0, 0x2
    blt lbl_802BC410
    lis r3, 0x1e
    addi r4, r31, 0x1a0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BC410:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_802BC434
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802BC434:
    lhz r0, 0x14(r26)
    cmpwi r0, 0x0
    bne lbl_802BC44C
    lhz r0, 0x16(r26)
    cmpwi r0, 0x0
    beq lbl_802BC478
lbl_802BC44C:
    li r0, 0x5
    stb r0, 0x10(r26)
    lhz r3, 0x16(r26)
    cmpwi r3, 0x0
    beq lbl_802BC464
    bl L2CA_DisconnectReq
lbl_802BC464:
    lhz r3, 0x14(r26)
    cmpwi r3, 0x0
    beq lbl_802BC480
    bl L2CA_DisconnectReq
    b lbl_802BC480
lbl_802BC478:
    li r0, 0x0
    stb r0, 0x10(r26)
lbl_802BC480:
    lis r5, lbl_80456C38@ha
    mr r3, r30
    addi r5, r5, lbl_80456C38@l
    li r4, 0x1
    lwz r12, 0x340(r5)
    li r5, 0x200
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_802BC544
lbl_802BC4A8:
    li r0, 0x2
    stb r0, 0x10(r28)
lbl_802BC4B0:
    cmpwi r29, 0x0
    beq lbl_802BC544
    lbz r0, 0x10(r28)
    cmplwi r0, 0x6
    bne lbl_802BC544
    li r0, 0xf
    lis r3, lbl_80456C38@ha
    sth r0, 0x1a(r28)
    addi r3, r3, lbl_80456C38@l
    mulli r4, r30, 0x34
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    add r27, r3, r4
    blt lbl_802BC4F8
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802BC4F8:
    lhz r0, 0x14(r27)
    cmpwi r0, 0x0
    bne lbl_802BC510
    lhz r0, 0x16(r27)
    cmpwi r0, 0x0
    beq lbl_802BC53C
lbl_802BC510:
    li r0, 0x5
    stb r0, 0x10(r27)
    lhz r3, 0x16(r27)
    cmpwi r3, 0x0
    beq lbl_802BC528
    bl L2CA_DisconnectReq
lbl_802BC528:
    lhz r3, 0x14(r27)
    cmpwi r3, 0x0
    beq lbl_802BC544
    bl L2CA_DisconnectReq
    b lbl_802BC544
lbl_802BC53C:
    li r0, 0x0
    stb r0, 0x10(r27)
lbl_802BC544:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_connect_cfm
// ----------------------------------------------------------------------------
asm void hidh_l2cif_connect_cfm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80456C38@ha
    li r5, 0x0
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r6, lbl_80456C38@l
    li r9, 0x0
    stw r31, 0x1c(r1)
    lis r31, lbl_80375A68@ha
    addi r31, r31, lbl_80375A68@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mtctr r0
lbl_802BC5A4:
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BC5E0
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_802BC5E0
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
lbl_802BC5E0:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BC620
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_802BC620
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
lbl_802BC620:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BC660
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_802BC660
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
lbl_802BC660:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r7, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BC6A0
    lbz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_802BC6A0
    lhz r0, 0x14(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
    lhz r0, 0x16(r7)
    cmplw r3, r0
    beq lbl_802BC6A8
lbl_802BC6A0:
    addi r30, r30, 0x1
    bdnz lbl_802BC5A4
lbl_802BC6A8:
    clrlwi r0, r30, 24
    cmplwi r0, 0x10
    beq lbl_802BC6C8
    mulli r0, r0, 0x34
    lis r5, lbl_80456C38@ha
    addi r5, r5, lbl_80456C38@l
    add r9, r5, r0
    addi r5, r9, 0x10
lbl_802BC6C8:
    cmpwi r5, 0x0
    beq lbl_802BC70C
    lbz r0, 0x1(r5)
    clrlwi. r0, r0, 31
    beq lbl_802BC70C
    lhz r6, 0x4(r5)
    cmplw r3, r6
    bne lbl_802BC6F4
    lbz r0, 0x0(r5)
    cmplwi r0, 0x1
    bne lbl_802BC70C
lbl_802BC6F4:
    lhz r0, 0x6(r5)
    cmplw r3, r0
    bne lbl_802BC738
    lbz r0, 0x0(r5)
    cmplwi r0, 0x2
    beq lbl_802BC738
lbl_802BC70C:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BC884
    lis r3, 0x1e
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x1bc
    bl LogMsg_1
    b lbl_802BC884
lbl_802BC738:
    cmpwi r4, 0x0
    beq lbl_802BC800
    cmplw r3, r6
    bne lbl_802BC754
    li r0, 0x0
    sth r0, 0x4(r5)
    b lbl_802BC75C
lbl_802BC754:
    li r0, 0x0
    sth r0, 0x6(r5)
lbl_802BC75C:
    lis r3, lbl_80456C38@ha
    clrlwi r4, r30, 24
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r28, r3, r4
    blt lbl_802BC78C
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802BC78C:
    lhz r0, 0x14(r28)
    cmpwi r0, 0x0
    bne lbl_802BC7A4
    lhz r0, 0x16(r28)
    cmpwi r0, 0x0
    beq lbl_802BC7D0
lbl_802BC7A4:
    li r0, 0x5
    stb r0, 0x10(r28)
    lhz r3, 0x16(r28)
    cmpwi r3, 0x0
    beq lbl_802BC7BC
    bl L2CA_DisconnectReq
lbl_802BC7BC:
    lhz r3, 0x14(r28)
    cmpwi r3, 0x0
    beq lbl_802BC7D8
    bl L2CA_DisconnectReq
    b lbl_802BC7D8
lbl_802BC7D0:
    li r0, 0x0
    stb r0, 0x10(r28)
lbl_802BC7D8:
    lis r4, lbl_80456C38@ha
    clrlwi r3, r30, 24
    addi r4, r4, lbl_80456C38@l
    ori r5, r29, 0x100
    lwz r12, 0x340(r4)
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_802BC884
lbl_802BC800:
    cmplw r3, r6
    bne lbl_802BC848
    li r0, 0x6
    lis r8, hidh_sec_check_complete_orig@ha
    stb r0, 0x0(r5)
    li r0, 0x100
    addi r3, r9, 0x1
    addi r8, r8, hidh_sec_check_complete_orig@l
    sth r0, 0xa(r5)
    li r4, 0x11
    li r5, 0x1
    li r6, 0x6
    lhz r0, 0x8(r9)
    extrwi r0, r0, 1, 16
    neg r7, r0
    addi r7, r7, 0x2
    bl btm_sec_mx_access_request
    b lbl_802BC850
lbl_802BC848:
    li r0, 0x3
    stb r0, 0x0(r5)
lbl_802BC850:
    lis r29, lbl_80456C38@ha
    mr r3, r28
    addi r29, r29, lbl_80456C38@l
    addi r4, r29, 0x344
    bl L2CA_ConfigReq
    lbz r0, 0x401(r29)
    cmplwi r0, 0x4
    blt lbl_802BC884
    lis r3, 0x1e
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r31, 0x1e8
    bl LogMsg_1
lbl_802BC884:
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
// hidh_l2cif_config_ind
// ----------------------------------------------------------------------------
asm void hidh_l2cif_config_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80456C38@ha
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r5, r5, lbl_80456C38@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mtctr r0
lbl_802BC8E0:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BC91C
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BC91C
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
lbl_802BC91C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BC95C
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BC95C
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
lbl_802BC95C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BC99C
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BC99C
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
lbl_802BC99C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r4, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BC9DC
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BC9DC
    lhz r0, 0x14(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
    lhz r0, 0x16(r4)
    cmplw r3, r0
    beq lbl_802BC9E4
lbl_802BC9DC:
    addi r31, r31, 0x1
    bdnz lbl_802BC8E0
lbl_802BC9E4:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_802BCA04
    mulli r0, r0, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_802BCA04:
    cmpwi r30, 0x0
    bne lbl_802BCA3C
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BCB2C
    lis r3, 0x1e
    lis r4, lbl_80375C84@ha
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375C84@l
    bl LogMsg_1
    b lbl_802BCB2C
lbl_802BCA3C:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_802BCA68
    lis r3, 0x1e
    lis r4, lbl_80375CB0@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375CB0@l
    bl LogMsg_1
lbl_802BCA68:
    lbz r0, 0x2(r29)
    cmpwi r0, 0x0
    beq lbl_802BCA80
    lhz r0, 0x4(r29)
    cmplwi r0, 0x280
    ble lbl_802BCA8C
lbl_802BCA80:
    li r0, 0x280
    sth r0, 0x8(r30)
    b lbl_802BCA90
lbl_802BCA8C:
    sth r0, 0x8(r30)
lbl_802BCA90:
    li r0, 0x0
    mr r3, r28
    stb r0, 0x20(r29)
    mr r4, r29
    stb r0, 0x2(r29)
    sth r0, 0x0(r29)
    bl L2CA_ConfigRsp
    lhz r0, 0x4(r30)
    cmplw r28, r0
    bne lbl_802BCAC8
    lbz r0, 0x1(r30)
    ori r0, r0, 0x2
    stb r0, 0x1(r30)
    b lbl_802BCAD4
lbl_802BCAC8:
    lbz r0, 0x1(r30)
    ori r0, r0, 0x8
    stb r0, 0x1(r30)
lbl_802BCAD4:
    lbz r0, 0x1(r30)
    rlwinm r0, r0, 0, 27, 30
    cmpwi r0, 0x1e
    bne lbl_802BCB2C
    lbz r0, 0x0(r30)
    cmplwi r0, 0x3
    bne lbl_802BCB2C
    clrlwi r3, r31, 24
    li r4, 0x4
    mulli r0, r3, 0x34
    lis r6, lbl_80456C38@ha
    stb r4, 0x0(r30)
    li r5, 0x1
    addi r6, r6, lbl_80456C38@l
    add r4, r6, r0
    stb r5, 0xa(r4)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x340(r6)
    li r6, 0x0
    mtctr r12
    bctrl
lbl_802BCB2C:
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
// hidh_l2cif_config_cfm
// ----------------------------------------------------------------------------
asm void hidh_l2cif_config_cfm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80456C38@ha
    lis r31, lbl_80375A68@ha
    addi r5, r5, lbl_80456C38@l
    mr r27, r3
    lbz r0, 0x401(r5)
    mr r28, r4
    addi r31, r31, lbl_80375A68@l
    li r29, 0x0
    cmplwi r0, 0x4
    blt lbl_802BCBA0
    lis r3, 0x1e
    lhz r6, 0x0(r28)
    mr r5, r27
    addi r4, r31, 0x274
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802BCBA0:
    lis r3, lbl_80456C38@ha
    li r0, 0x4
    addi r3, r3, lbl_80456C38@l
    li r30, 0x0
    mtctr r0
lbl_802BCBB4:
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_802BCBF0
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BCBF0
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
lbl_802BCBF0:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_802BCC30
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BCC30
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
lbl_802BCC30:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_802BCC70
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BCC70
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
lbl_802BCC70:
    addi r30, r30, 0x1
    clrlwi r0, r30, 24
    mulli r0, r0, 0x34
    add r4, r3, r0
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_802BCCB0
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802BCCB0
    lhz r0, 0x14(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
    lhz r0, 0x16(r4)
    cmplw r27, r0
    beq lbl_802BCCB8
lbl_802BCCB0:
    addi r30, r30, 0x1
    bdnz lbl_802BCBB4
lbl_802BCCB8:
    clrlwi r0, r30, 24
    cmplwi r0, 0x10
    beq lbl_802BCCD8
    mulli r0, r0, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    add r29, r3, r0
    addi r29, r29, 0x10
lbl_802BCCD8:
    cmpwi r29, 0x0
    bne lbl_802BCD0C
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BCE40
    lis r3, 0x1e
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r31, 0x21c
    bl LogMsg_1
    b lbl_802BCE40
lbl_802BCD0C:
    lhz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802BCDC0
    lis r3, lbl_80456C38@ha
    clrlwi r4, r30, 24
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r27, r3, r4
    blt lbl_802BCD48
    lis r3, 0x1e
    addi r4, r31, 0x44
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802BCD48:
    lhz r0, 0x14(r27)
    cmpwi r0, 0x0
    bne lbl_802BCD60
    lhz r0, 0x16(r27)
    cmpwi r0, 0x0
    beq lbl_802BCD8C
lbl_802BCD60:
    li r0, 0x5
    stb r0, 0x10(r27)
    lhz r3, 0x16(r27)
    cmpwi r3, 0x0
    beq lbl_802BCD78
    bl L2CA_DisconnectReq
lbl_802BCD78:
    lhz r3, 0x14(r27)
    cmpwi r3, 0x0
    beq lbl_802BCD94
    bl L2CA_DisconnectReq
    b lbl_802BCD94
lbl_802BCD8C:
    li r0, 0x0
    stb r0, 0x10(r27)
lbl_802BCD94:
    lis r4, lbl_80456C38@ha
    lhz r0, 0x0(r28)
    addi r4, r4, lbl_80456C38@l
    clrlwi r3, r30, 24
    lwz r12, 0x340(r4)
    ori r5, r0, 0x400
    li r4, 0x1
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_802BCE40
lbl_802BCDC0:
    lhz r0, 0x4(r29)
    cmplw r27, r0
    bne lbl_802BCDDC
    lbz r0, 0x1(r29)
    ori r0, r0, 0x4
    stb r0, 0x1(r29)
    b lbl_802BCDE8
lbl_802BCDDC:
    lbz r0, 0x1(r29)
    ori r0, r0, 0x10
    stb r0, 0x1(r29)
lbl_802BCDE8:
    lbz r0, 0x1(r29)
    rlwinm r0, r0, 0, 27, 30
    cmpwi r0, 0x1e
    bne lbl_802BCE40
    lbz r0, 0x0(r29)
    cmplwi r0, 0x3
    bne lbl_802BCE40
    clrlwi r3, r30, 24
    li r4, 0x4
    mulli r0, r3, 0x34
    lis r6, lbl_80456C38@ha
    stb r4, 0x0(r29)
    li r5, 0x1
    addi r6, r6, lbl_80456C38@l
    add r4, r6, r0
    stb r5, 0xa(r4)
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x340(r6)
    li r6, 0x0
    mtctr r12
    bctrl
lbl_802BCE40:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_disconnect_ind
// ----------------------------------------------------------------------------
asm void hidh_l2cif_disconnect_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80456C38@ha
    li r0, 0x4
    mr r27, r3
    mr r28, r4
    addi r5, r5, lbl_80456C38@l
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    mtctr r0
lbl_802BCE90:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BCECC
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BCECC
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BCF94
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BCF94
lbl_802BCECC:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BCF0C
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BCF0C
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BCF94
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BCF94
lbl_802BCF0C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BCF4C
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BCF4C
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BCF94
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BCF94
lbl_802BCF4C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BCF8C
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BCF8C
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BCF94
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BCF94
lbl_802BCF8C:
    addi r31, r31, 0x1
    bdnz lbl_802BCE90
lbl_802BCF94:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_802BCFB4
    mulli r0, r0, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_802BCFB4:
    cmpwi r30, 0x0
    bne lbl_802BCFEC
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BD104
    lis r3, 0x1e
    lis r4, lbl_80375D08@ha
    mr r5, r27
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375D08@l
    bl LogMsg_1
    b lbl_802BD104
lbl_802BCFEC:
    cmpwi r4, 0x0
    beq lbl_802BCFFC
    mr r3, r27
    bl L2CA_DisconnectRsp
lbl_802BCFFC:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_802BD028
    lis r3, 0x1e
    lis r4, lbl_80375D34@ha
    mr r5, r27
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375D34@l
    bl LogMsg_1
lbl_802BD028:
    li r0, 0x5
    stb r0, 0x0(r30)
    lhz r0, 0x4(r30)
    cmplw r27, r0
    bne lbl_802BD048
    li r0, 0x0
    sth r0, 0x4(r30)
    b lbl_802BD050
lbl_802BD048:
    li r0, 0x0
    sth r0, 0x6(r30)
lbl_802BD050:
    lhz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_802BD104
    lhz r0, 0x6(r30)
    cmpwi r0, 0x0
    bne lbl_802BD104
    clrlwi r0, r31, 24
    lis r3, lbl_80456C38@ha
    mulli r0, r0, 0x34
    li r4, 0x0
    addi r3, r3, lbl_80456C38@l
    cmpwi r28, 0x0
    add r3, r3, r0
    stb r4, 0xa(r3)
    stb r4, 0x0(r30)
    bne lbl_802BD098
    bl btm_get_acl_disc_reason_code
    mr r29, r3
lbl_802BD098:
    clrlwi r0, r29, 16
    lhz r5, 0xa(r30)
    cmplwi r0, 0x5
    beq lbl_802BD0E0
    cmplwi r0, 0x6
    beq lbl_802BD0E0
    cmplwi r0, 0xe
    beq lbl_802BD0E0
    cmplwi r0, 0x18
    beq lbl_802BD0E0
    cmplwi r0, 0x26
    beq lbl_802BD0E0
    cmplwi r0, 0x29
    beq lbl_802BD0E0
    cmplwi r0, 0x25
    beq lbl_802BD0E0
    cmplwi r0, 0x17
    bne lbl_802BD0E4
lbl_802BD0E0:
    li r5, 0xf
lbl_802BD0E4:
    lis r4, lbl_80456C38@ha
    clrlwi r3, r31, 24
    addi r4, r4, lbl_80456C38@l
    li r6, 0x0
    lwz r12, 0x340(r4)
    li r4, 0x1
    mtctr r12
    bctrl
lbl_802BD104:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_disconnect_cfm
// ----------------------------------------------------------------------------
asm void hidh_l2cif_disconnect_cfm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80456C38@ha
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r4, r4, lbl_80456C38@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    mtctr r0
lbl_802BD150:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_802BD18C
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_802BD18C
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_802BD254
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_802BD254
lbl_802BD18C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_802BD1CC
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_802BD1CC
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_802BD254
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_802BD254
lbl_802BD1CC:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_802BD20C
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_802BD20C
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_802BD254
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_802BD254
lbl_802BD20C:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r5, r4, r0
    lbzx r0, r4, r0
    cmpwi r0, 0x0
    beq lbl_802BD24C
    lbz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_802BD24C
    lhz r0, 0x14(r5)
    cmplw r3, r0
    beq lbl_802BD254
    lhz r0, 0x16(r5)
    cmplw r3, r0
    beq lbl_802BD254
lbl_802BD24C:
    addi r31, r31, 0x1
    bdnz lbl_802BD150
lbl_802BD254:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_802BD274
    mulli r0, r0, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    add r30, r3, r0
    addi r30, r30, 0x10
lbl_802BD274:
    cmpwi r30, 0x0
    bne lbl_802BD2AC
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BD348
    lis r3, 0x1e
    lis r4, lbl_80375D58@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375D58@l
    bl LogMsg_1
    b lbl_802BD348
lbl_802BD2AC:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x4
    blt lbl_802BD2D8
    lis r3, 0x1e
    lis r4, lbl_80375D88@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375D88@l
    bl LogMsg_1
lbl_802BD2D8:
    lhz r0, 0x4(r30)
    cmplw r29, r0
    bne lbl_802BD2F0
    li r0, 0x0
    sth r0, 0x4(r30)
    b lbl_802BD2F8
lbl_802BD2F0:
    li r0, 0x0
    sth r0, 0x6(r30)
lbl_802BD2F8:
    lhz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_802BD348
    lhz r0, 0x6(r30)
    cmpwi r0, 0x0
    bne lbl_802BD348
    clrlwi r3, r31, 24
    lis r7, lbl_80456C38@ha
    mulli r0, r3, 0x34
    li r8, 0x0
    addi r7, r7, lbl_80456C38@l
    li r4, 0x1
    add r5, r7, r0
    li r6, 0x0
    stb r8, 0xa(r5)
    stb r8, 0x0(r30)
    lwz r12, 0x340(r7)
    lhz r5, 0xa(r30)
    mtctr r12
    bctrl
lbl_802BD348:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_cong_ind
// ----------------------------------------------------------------------------
asm void hidh_l2cif_cong_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456C38@ha
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r5, r5, lbl_80456C38@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    li r4, 0x0
    mtctr r0
lbl_802BD394:
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BD3D0
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BD3D0
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BD498
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BD498
lbl_802BD3D0:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BD410
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BD410
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BD498
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BD498
lbl_802BD410:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BD450
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BD450
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BD498
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BD498
lbl_802BD450:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    mulli r0, r0, 0x34
    add r6, r5, r0
    lbzx r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_802BD490
    lbz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_802BD490
    lhz r0, 0x14(r6)
    cmplw r3, r0
    beq lbl_802BD498
    lhz r0, 0x16(r6)
    cmplw r3, r0
    beq lbl_802BD498
lbl_802BD490:
    addi r4, r4, 0x1
    bdnz lbl_802BD394
lbl_802BD498:
    clrlwi r0, r4, 24
    cmplwi r0, 0x10
    beq lbl_802BD4B8
    mulli r0, r0, 0x34
    lis r4, lbl_80456C38@ha
    addi r4, r4, lbl_80456C38@l
    add r31, r4, r0
    addi r31, r31, 0x10
lbl_802BD4B8:
    cmpwi r31, 0x0
    bne lbl_802BD4F0
    lis r4, lbl_80456C38@ha
    addi r4, r4, lbl_80456C38@l
    lbz r0, 0x401(r4)
    cmplwi r0, 0x2
    blt lbl_802BD544
    lis r4, lbl_80375DB0@ha
    lis r6, 0x1e
    mr r5, r3
    addi r3, r6, 0x1
    addi r4, r4, lbl_80375DB0@l
    bl LogMsg_1
    b lbl_802BD544
lbl_802BD4F0:
    lis r4, lbl_80456C38@ha
    addi r4, r4, lbl_80456C38@l
    lbz r0, 0x401(r4)
    cmplwi r0, 0x4
    blt lbl_802BD520
    lis r4, lbl_80375DE8@ha
    lis r7, 0x1e
    mr r5, r3
    mr r6, r30
    addi r3, r7, 0x3
    addi r4, r4, lbl_80375DE8@l
    bl LogMsg_2
lbl_802BD520:
    cmpwi r30, 0x0
    beq lbl_802BD538
    lbz r0, 0x1(r31)
    ori r0, r0, 0x20
    stb r0, 0x1(r31)
    b lbl_802BD544
lbl_802BD538:
    lbz r0, 0x1(r31)
    rlwinm r0, r0, 0, 27, 25
    stb r0, 0x1(r31)
lbl_802BD544:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hidh_l2cif_data_ind
// ----------------------------------------------------------------------------
asm void hidh_l2cif_data_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80456C38@ha
    mr r5, r3
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r6, lbl_80456C38@l
    li r9, 0x0
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lhz r7, 0x4(r4)
    add r7, r4, r7
    mtctr r0
lbl_802BD59C:
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BD5D8
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_802BD5D8
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
lbl_802BD5D8:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BD618
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_802BD618
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
lbl_802BD618:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BD658
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_802BD658
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
lbl_802BD658:
    addi r31, r31, 0x1
    clrlwi r0, r31, 24
    mulli r0, r0, 0x34
    add r8, r6, r0
    lbzx r0, r6, r0
    cmpwi r0, 0x0
    beq lbl_802BD698
    lbz r0, 0x10(r8)
    cmpwi r0, 0x0
    beq lbl_802BD698
    lhz r0, 0x14(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
    lhz r0, 0x16(r8)
    cmplw r3, r0
    beq lbl_802BD6A0
lbl_802BD698:
    addi r31, r31, 0x1
    bdnz lbl_802BD59C
lbl_802BD6A0:
    clrlwi r0, r31, 24
    cmplwi r0, 0x10
    beq lbl_802BD6C0
    mulli r0, r0, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    add r9, r3, r0
    addi r9, r9, 0x10
lbl_802BD6C0:
    cmpwi r9, 0x0
    bne lbl_802BD6FC
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x2
    blt lbl_802BD6F0
    lis r3, 0x1e
    lis r4, lbl_80375E20@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375E20@l
    bl LogMsg_1
lbl_802BD6F0:
    mr r3, r30
    bl GKI_freebuf
    b lbl_802BD8D8
lbl_802BD6FC:
    lbz r7, 0x8(r7)
    lhz r6, 0x2(r4)
    lhz r3, 0x4(r4)
    extrwi r0, r7, 4, 24
    subi r6, r6, 0x1
    clrlwi r8, r7, 28
    addi r3, r3, 0x1
    cmpwi r0, 0xa
    sth r6, 0x2(r4)
    clrlwi r7, r7, 30
    sth r3, 0x4(r4)
    beq lbl_802BD840
    bge lbl_802BD748
    cmpwi r0, 0x1
    beq lbl_802BD784
    bge lbl_802BD8D0
    cmpwi r0, 0x0
    bge lbl_802BD754
    b lbl_802BD8D0
lbl_802BD748:
    cmpwi r0, 0xc
    bge lbl_802BD8D0
    b lbl_802BD888
lbl_802BD754:
    lis r4, lbl_80456C38@ha
    mr r5, r8
    addi r4, r4, lbl_80456C38@l
    clrlwi r3, r31, 24
    lwz r12, 0x340(r4)
    li r4, 0x7
    li r6, 0x0
    mtctr r12
    bctrl
    mr r3, r30
    bl GKI_freebuf
    b lbl_802BD8D8
lbl_802BD784:
    cmpwi r8, 0x5
    beq lbl_802BD790
    b lbl_802BD834
lbl_802BD790:
    lis r3, lbl_80456C38@ha
    clrlwi r4, r31, 24
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    mulli r4, r4, 0x34
    cmplwi r0, 0x4
    add r29, r3, r4
    blt lbl_802BD7C4
    lis r3, 0x1e
    lis r4, lbl_80375AAC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375AAC@l
    bl LogMsg_0
lbl_802BD7C4:
    lhz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_802BD7DC
    lhz r0, 0x16(r29)
    cmpwi r0, 0x0
    beq lbl_802BD808
lbl_802BD7DC:
    li r0, 0x5
    stb r0, 0x10(r29)
    lhz r3, 0x16(r29)
    cmpwi r3, 0x0
    beq lbl_802BD7F4
    bl L2CA_DisconnectReq
lbl_802BD7F4:
    lhz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_802BD810
    bl L2CA_DisconnectReq
    b lbl_802BD810
lbl_802BD808:
    li r0, 0x0
    stb r0, 0x10(r29)
lbl_802BD810:
    lis r5, lbl_80456C38@ha
    clrlwi r3, r31, 24
    addi r5, r5, lbl_80456C38@l
    li r4, 0x8
    lwz r12, 0x340(r5)
    li r5, 0x0
    li r6, 0x0
    mtctr r12
    bctrl
lbl_802BD834:
    mr r3, r30
    bl GKI_freebuf
    b lbl_802BD8D8
lbl_802BD840:
    clrlwi r3, r31, 24
    lis r6, lbl_80456C38@ha
    mulli r0, r3, 0x34
    li r4, 0x5
    addi r6, r6, lbl_80456C38@l
    add r6, r6, r0
    lhz r0, 0x16(r6)
    cmplw r5, r0
    bne lbl_802BD868
    li r4, 0x3
lbl_802BD868:
    lis r6, lbl_80456C38@ha
    mr r5, r7
    addi r6, r6, lbl_80456C38@l
    lwz r12, 0x340(r6)
    mr r6, r30
    mtctr r12
    bctrl
    b lbl_802BD8D8
lbl_802BD888:
    clrlwi r3, r31, 24
    lis r6, lbl_80456C38@ha
    mulli r0, r3, 0x34
    li r4, 0x6
    addi r6, r6, lbl_80456C38@l
    add r6, r6, r0
    lhz r0, 0x16(r6)
    cmplw r5, r0
    bne lbl_802BD8B0
    li r4, 0x4
lbl_802BD8B0:
    lis r6, lbl_80456C38@ha
    mr r5, r7
    addi r6, r6, lbl_80456C38@l
    lwz r12, 0x340(r6)
    mr r6, r30
    mtctr r12
    bctrl
    b lbl_802BD8D8
lbl_802BD8D0:
    mr r3, r30
    bl GKI_freebuf
lbl_802BD8D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_conn_snd_data
// ----------------------------------------------------------------------------
asm void hidh_conn_snd_data() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    mulli r0, r3, 0x34
    lis r3, lbl_80456C38@ha
    mr r17, r4
    addi r3, r3, lbl_80456C38@l
    add r27, r3, r0
    mr r18, r7
    lbz r0, 0x11(r27)
    mr r19, r8
    li r21, 0x0
    li r20, 0x0
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_802BD950
    cmpwi r8, 0x0
    beq lbl_802BD948
    mr r3, r19
    bl GKI_freebuf
lbl_802BD948:
    li r3, 0x8
    b lbl_802BDB78
lbl_802BD950:
    cmpwi r4, 0x4
    bge lbl_802BD964
    cmpwi r4, 0x1
    beq lbl_802BD970
    b lbl_802BD988
lbl_802BD964:
    cmpwi r4, 0xa
    beq lbl_802BD97C
    bge lbl_802BD988
lbl_802BD970:
    lhz r23, 0x14(r27)
    li r22, 0x2
    b lbl_802BD990
lbl_802BD97C:
    lhz r23, 0x16(r27)
    li r22, 0x2
    b lbl_802BD990
lbl_802BD988:
    li r3, 0x5
    b lbl_802BDB78
lbl_802BD990:
    cmplwi r4, 0x9
    bne lbl_802BD9A0
    li r21, 0x1
    b lbl_802BD9B4
lbl_802BD9A0:
    cmplwi r4, 0x4
    bne lbl_802BD9B4
    rlwinm. r0, r5, 0, 28, 28
    beq lbl_802BD9B4
    li r21, 0x2
lbl_802BD9B4:
    clrlwi r30, r5, 28
    clrlwi r29, r6, 24
    extrwi r28, r6, 8, 16
    li r31, 0x9
lbl_802BD9C4:
    cmpwi r19, 0x0
    beq lbl_802BD9D4
    cmpwi r20, 0x0
    beq lbl_802BDA08
lbl_802BD9D4:
    mr r3, r22
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802BD9F0
    li r3, 0x3
    b lbl_802BDB78
lbl_802BD9F0:
    sth r31, 0x4(r3)
    li r4, 0x0
    li r24, 0x0
    li r25, 0x0
    li r20, 0x0
    b lbl_802BDA6C
lbl_802BDA08:
    lhz r3, 0x18(r27)
    lhz r24, 0x2(r19)
    subi r0, r3, 0x1
    cmpw r24, r0
    ble lbl_802BDA54
    mr r3, r22
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802BDA38
    li r3, 0x3
    b lbl_802BDB78
lbl_802BDA38:
    sth r31, 0x4(r3)
    li r4, 0x1
    lhz r3, 0x18(r27)
    lhz r24, 0x2(r19)
    subi r0, r3, 0x1
    clrlwi r25, r0, 16
    b lbl_802BDA6C
lbl_802BDA54:
    lhz r3, 0x4(r19)
    mr r26, r19
    mr r25, r24
    li r4, 0x0
    subi r0, r3, 0x1
    sth r0, 0x4(r19)
lbl_802BDA6C:
    lhz r3, 0x4(r26)
    clrlslwi r0, r17, 24, 4
    cmplwi r17, 0x4
    add r3, r26, r3
    or r0, r0, r30
    stb r0, 0x8(r3)
    addi r3, r3, 0x9
    bne lbl_802BDAA0
    cmpwi r18, 0x0
    beq lbl_802BDAA0
    stb r18, 0x0(r3)
    li r25, 0x1
    li r24, 0x1
lbl_802BDAA0:
    cmpwi r4, 0x0
    beq lbl_802BDAD8
    lhz r0, 0x4(r19)
    clrlwi r5, r25, 16
    add r4, r19, r0
    addi r4, r4, 0x8
    bl memcpy
    lhz r3, 0x4(r19)
    lhz r0, 0x2(r19)
    add r3, r3, r25
    subf r0, r25, r0
    sth r3, 0x4(r19)
    sth r0, 0x2(r19)
    b lbl_802BDB00
lbl_802BDAD8:
    cmplwi r21, 0x1
    bne lbl_802BDAEC
    clrlwi r0, r25, 16
    stbx r29, r3, r0
    b lbl_802BDB00
lbl_802BDAEC:
    cmplwi r21, 0x2
    bne lbl_802BDB00
    clrlwi r0, r25, 16
    stbux r29, r3, r0
    stb r28, 0x1(r3)
lbl_802BDB00:
    add r3, r25, r21
    subf r24, r25, r24
    addi r0, r3, 0x1
    sth r0, 0x2(r26)
    lbz r0, 0x11(r27)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_802BDB30
    mr r3, r23
    mr r4, r26
    bl L2CA_DataWrite
    clrlwi. r0, r3, 24
    bne lbl_802BDB38
lbl_802BDB30:
    li r3, 0x8
    b lbl_802BDB78
lbl_802BDB38:
    clrlwi. r0, r24, 16
    beq lbl_802BDB48
    li r17, 0xb
    b lbl_802BDB64
lbl_802BDB48:
    lhz r3, 0x18(r27)
    clrlwi r4, r25, 16
    subi r0, r3, 0x1
    cmpw r4, r0
    bne lbl_802BDB64
    li r17, 0xb
    li r20, 0x1
lbl_802BDB64:
    clrlwi. r0, r24, 16
    bne lbl_802BD9C4
    cmpwi r20, 0x0
    bne lbl_802BD9C4
    li r3, 0x0
lbl_802BDB78:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// hidh_conn_initiate
// ----------------------------------------------------------------------------
asm void hidh_conn_initiate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    mulli r0, r3, 0x34
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80456C38@ha
    addi r30, r30, lbl_80456C38@l
    stw r29, 0x14(r1)
    add r29, r30, r0
    lbz r0, 0x10(r29)
    cmpwi r0, 0x0
    beq lbl_802BDBCC
    li r3, 0x9
    b lbl_802BDC70
lbl_802BDBCC:
    li r5, 0x0
    li r0, 0x100
    sth r5, 0x14(r29)
    li r31, 0x1
    addi r4, r29, 0x1
    li r3, 0x11
    sth r5, 0x16(r29)
    sth r0, 0x1a(r29)
    stb r31, 0x11(r29)
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    sth r3, 0x14(r29)
    bne lbl_802BDC68
    lbz r0, 0x401(r30)
    cmplwi r0, 0x2
    blt lbl_802BDC20
    lis r3, 0x1e
    lis r4, lbl_80375BCC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375BCC@l
    bl LogMsg_0
lbl_802BDC20:
    lis r5, lbl_80456C38@ha
    lis r3, 0x4ec5
    addi r5, r5, lbl_80456C38@l
    li r4, 0x1
    subf r0, r5, r29
    subi r7, r3, 0x13b1
    mulhw r0, r7, r0
    lwz r12, 0x340(r5)
    li r5, 0xe
    li r6, 0x0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r0, r0, r3
    mulhwu r0, r7, r0
    extrwi r3, r0, 8, 20
    mtctr r12
    bctrl
    b lbl_802BDC6C
lbl_802BDC68:
    stb r31, 0x10(r29)
lbl_802BDC6C:
    li r3, 0x0
lbl_802BDC70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hidh_conn_dereg
// ----------------------------------------------------------------------------
asm void hidh_conn_dereg() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x11
    stw r0, 0x14(r1)
    bl L2CA_Deregister
    li r3, 0x13
    bl L2CA_Deregister
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

