#include "types.h"

// Translation unit: src/revolution/bte/port_rfc.cpp
// Total functions: 18

// Global data symbols (@ha/@l)
extern u8 lbl_80377470[];
extern u8 lbl_803774A8[];
extern u8 lbl_803774C0[];
extern u8 lbl_803774E0[];
extern u8 lbl_803774F0[];
extern u8 lbl_80377510[];
extern u8 lbl_80377530[];
extern u8 lbl_8037755C[];
extern u8 lbl_80377580[];
extern u8 lbl_803775B0[];
extern u8 lbl_80377610[];
extern u8 lbl_80377620[];
extern u8 lbl_80377660[];
extern u8 lbl_80377670[];
extern u8 lbl_80377684[];
extern u8 lbl_80377698[];
extern u8 lbl_803776A8[];
extern u8 lbl_803776C0[];
extern u8 lbl_803776E4[];
extern u8 lbl_80377718[];
extern u8 lbl_8037772C[];
extern u8 lbl_80377744[];
extern u8 lbl_80377770[];
extern u8 lbl_80457828[];

// Forward declarations
extern void GKI_dequeue();
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void LogMsg_4();
extern void PORT_CloseInd();
extern void PORT_ControlCnf();
extern void PORT_ControlInd();
extern void PORT_DataInd();
extern void PORT_DlcEstablishCnf();
extern void PORT_DlcEstablishInd();
extern void PORT_DlcReleaseInd();
extern void PORT_FlowInd();
extern void PORT_LineStatusInd();
extern void PORT_ParNegCnf();
extern void PORT_ParNegInd();
extern void PORT_PortNegCnf();
extern void PORT_PortNegInd();
extern void PORT_StartCnf();
extern void PORT_StartInd();
extern void Port_TimeOutCloseMux();
extern void RFCOMM_ControlReq();
extern void RFCOMM_DataReq();
extern void RFCOMM_DlcEstablishReq();
extern void RFCOMM_DlcEstablishRsp();
extern void RFCOMM_DlcReleaseReq();
extern void RFCOMM_LineStatusReq();
extern void RFCOMM_ParNegReq();
extern void RFCOMM_ParNegRsp();
extern void RFCOMM_PortNegReq();
extern void RFCOMM_PortNegRsp();
extern void RFCOMM_StartRsp();
extern void _restgpr_20();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_26();
extern void _savegpr_27();
extern void memcpy();
extern void port_find_dlci_port();
extern void port_find_mcb_dlci_port();
extern void port_flow_control_peer();
extern void port_flow_control_user();
extern void port_get_signal_changes();
extern void port_release_port();
extern void port_rfc_closed();
extern void port_rfc_send_tx_data();
extern void port_select_mtu();
extern void rfc_check_mcb_active();
extern void rfc_port_timer_stop();
extern void rfc_release_multiplexer_channel();
extern void rfc_send_dm();
extern void rfc_timer_stop();

// ----------------------------------------------------------------------------
// PORT_StartCnf
// ----------------------------------------------------------------------------
asm void PORT_StartCnf() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r5, lbl_80457828@ha
    mr r29, r3
    addi r5, r5, lbl_80457828@l
    mr r30, r4
    lbz r0, 0x414(r5)
    li r31, 0x1
    cmplwi r0, 0x4
    blt lbl_802C3E7C
    lis r3, 0x9
    lis r4, lbl_803774A8@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_803774A8@l
    bl LogMsg_1
lbl_802C3E7C:
    lis r22, lbl_80457828@ha
    li r20, 0x0
    addi r22, r22, lbl_80457828@l
    lis r23, 0x9
    lis r24, lbl_803774C0@ha
    li r26, 0xc
    addi r21, r22, 0x68
    li r25, 0x18
    lis r28, 0x1
    li r27, 0x0
lbl_802C3EA4:
    lwz r0, 0x6c(r21)
    cmplw r0, r29
    bne lbl_802C3F58
    cmpwi r30, 0x0
    li r31, 0x0
    bne lbl_802C3ED0
    lbz r4, 0xd(r21)
    mr r3, r29
    lhz r5, 0x12(r21)
    bl RFCOMM_ParNegReq
    b lbl_802C3F58
lbl_802C3ED0:
    lbz r0, 0x414(r22)
    cmplwi r0, 0x2
    blt lbl_802C3EEC
    mr r5, r30
    addi r3, r23, 0x1
    addi r4, r24, lbl_803774C0@l
    bl LogMsg_1
lbl_802C3EEC:
    cmplwi r30, 0x4
    bne lbl_802C3EFC
    stb r25, 0xe(r21)
    b lbl_802C3F00
lbl_802C3EFC:
    stb r26, 0xe(r21)
lbl_802C3F00:
    mr r3, r29
    bl rfc_release_multiplexer_channel
    stw r27, 0x6c(r21)
    lwz r12, 0x8c(r21)
    cmpwi r12, 0x0
    beq lbl_802C3F34
    lwz r0, 0x88(r21)
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_802C3F34
    addi r3, r28, -0x8000
    lbz r4, 0x0(r21)
    mtctr r12
    bctrl
lbl_802C3F34:
    lwz r12, 0x90(r21)
    cmpwi r12, 0x0
    beq lbl_802C3F50
    lbz r4, 0x0(r21)
    li r3, 0xc
    mtctr r12
    bctrl
lbl_802C3F50:
    mr r3, r21
    bl port_release_port
lbl_802C3F58:
    addi r20, r20, 0x1
    addi r21, r21, 0xa4
    cmpwi r20, 0x5
    blt lbl_802C3EA4
    cmpwi r31, 0x0
    beq lbl_802C3F78
    mr r3, r29
    bl rfc_check_mcb_active
lbl_802C3F78:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// PORT_StartInd
// ----------------------------------------------------------------------------
asm void PORT_StartInd() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457828@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80457828@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C3FCC
    lis r3, 0x9
    lis r4, lbl_803774E0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803774E0@l
    bl LogMsg_0
lbl_802C3FCC:
    lis r3, lbl_80457828@ha
    li r0, 0x5
    addi r3, r3, lbl_80457828@l
    addi r3, r3, 0x68
    mtctr r0
lbl_802C3FE0:
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_802C3FF4
    cmplw r0, r31
    bne lbl_802C4004
lbl_802C3FF4:
    mr r3, r31
    li r4, 0x0
    bl RFCOMM_StartRsp
    b lbl_802C4018
lbl_802C4004:
    addi r3, r3, 0xa4
    bdnz lbl_802C3FE0
    mr r3, r31
    li r4, 0x1
    bl RFCOMM_StartRsp
lbl_802C4018:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// PORT_ParNegInd
// ----------------------------------------------------------------------------
asm void PORT_ParNegInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r31, r4
    mr r30, r3
    mr r26, r5
    mr r27, r6
    mr r28, r7
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r29, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C408C
    lis r3, 0x9
    lis r4, lbl_803774F0@ha
    mr r5, r31
    mr r6, r26
    addi r3, r3, 0x3
    addi r4, r4, lbl_803774F0@l
    bl LogMsg_2
lbl_802C408C:
    cmpwi r29, 0x0
    bne lbl_802C40F8
    mr r3, r31
    bl port_find_dlci_port
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802C40EC
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    bl rfc_send_dm
    mr r3, r30
    bl rfc_check_mcb_active
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C41C4
    lis r3, 0x9
    lis r4, lbl_80377510@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377510@l
    bl LogMsg_0
    b lbl_802C41C4
lbl_802C40EC:
    lbz r0, 0x0(r3)
    add r3, r30, r31
    stb r0, 0x24(r3)
lbl_802C40F8:
    addi r3, r29, 0x6
    addi r4, r30, 0x62
    li r5, 0x6
    bl memcpy
    mr r3, r29
    bl port_select_mtu
    stw r30, 0x6c(r29)
    lhz r0, 0x12(r29)
    cmplw r0, r26
    bge lbl_802C4124
    mr r26, r0
lbl_802C4124:
    sth r26, 0x12(r29)
    sth r26, 0x14(r29)
    lbz r0, 0x72(r30)
    cmpwi r0, 0x0
    bne lbl_802C4154
    cmpwi r27, 0x0
    bne lbl_802C414C
    li r0, 0x1
    stb r0, 0x72(r30)
    b lbl_802C4154
lbl_802C414C:
    li r0, 0x2
    stb r0, 0x72(r30)
lbl_802C4154:
    cmpwi r27, 0x0
    bne lbl_802C4168
    li r6, 0x0
    li r7, 0x0
    b lbl_802C41B4
lbl_802C4168:
    lbz r0, 0x72(r30)
    cmplwi r0, 0x2
    bne lbl_802C41AC
    cmpwi r28, 0x0
    sth r28, 0x98(r29)
    bne lbl_802C4188
    li r0, 0x1
    stb r0, 0x24(r29)
lbl_802C4188:
    lhz r3, 0x9c(r29)
    li r6, 0xe0
    li r0, 0x7
    cmplwi r3, 0x7
    bge lbl_802C41A0
    mr r0, r3
lbl_802C41A0:
    clrlwi r7, r0, 24
    sth r7, 0x9a(r29)
    b lbl_802C41B4
lbl_802C41AC:
    li r6, 0x0
    li r7, 0x0
lbl_802C41B4:
    lhz r5, 0x12(r29)
    mr r3, r30
    mr r4, r31
    bl RFCOMM_ParNegRsp
lbl_802C41C4:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_ParNegCnf
// ----------------------------------------------------------------------------
asm void PORT_ParNegCnf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r4
    mr r26, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4244
    lis r3, 0x9
    lis r4, lbl_80377530@ha
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377530@l
    bl LogMsg_4
lbl_802C4244:
    cmpwi r31, 0x0
    beq lbl_802C42C8
    lbz r0, 0x72(r26)
    cmpwi r0, 0x0
    bne lbl_802C4274
    cmplwi r29, 0xe0
    bne lbl_802C426C
    li r0, 0x2
    stb r0, 0x72(r26)
    b lbl_802C4274
lbl_802C426C:
    li r0, 0x1
    stb r0, 0x72(r26)
lbl_802C4274:
    lhz r0, 0x12(r31)
    cmplw r0, r28
    bge lbl_802C4284
    mr r28, r0
lbl_802C4284:
    sth r28, 0x12(r31)
    sth r28, 0x14(r31)
    lbz r0, 0x72(r26)
    cmplwi r0, 0x2
    bne lbl_802C42AC
    cmpwi r30, 0x0
    sth r30, 0x98(r31)
    bne lbl_802C42AC
    li r0, 0x1
    stb r0, 0x24(r31)
lbl_802C42AC:
    lbz r0, 0x2(r31)
    cmplwi r0, 0x1
    bne lbl_802C42C8
    lbz r4, 0xd(r31)
    mr r3, r26
    lhz r5, 0x12(r31)
    bl RFCOMM_DlcEstablishReq
lbl_802C42C8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_DlcEstablishInd
// ----------------------------------------------------------------------------
asm void PORT_DlcEstablishInd() {
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
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4340
    lis r3, 0x9
    lis r4, lbl_8037755C@ha
    mr r5, r29
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_8037755C@l
    bl LogMsg_2
lbl_802C4340:
    cmpwi r31, 0x0
    bne lbl_802C4380
    mr r3, r29
    bl port_find_dlci_port
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802C4374
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    li r6, 0x1
    bl RFCOMM_DlcEstablishRsp
    b lbl_802C4400
lbl_802C4374:
    lbz r0, 0x0(r3)
    add r3, r28, r29
    stb r0, 0x24(r3)
lbl_802C4380:
    cmpwi r30, 0x0
    beq lbl_802C4398
    lhz r0, 0x14(r31)
    cmplw r30, r0
    bge lbl_802C4398
    sth r30, 0x14(r31)
lbl_802C4398:
    mr r3, r28
    bl rfc_timer_stop
    lhz r5, 0x12(r31)
    mr r3, r28
    mr r4, r29
    li r6, 0x0
    bl RFCOMM_DlcEstablishRsp
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C43DC
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_802C43DC
    lbz r4, 0x0(r31)
    li r3, 0x200
    mtctr r12
    bctrl
lbl_802C43DC:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_802C43F8
    lbz r4, 0x0(r31)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802C43F8:
    li r0, 0x2
    stb r0, 0x2(r31)
lbl_802C4400:
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
// PORT_DlcEstablishCnf
// ----------------------------------------------------------------------------
asm void PORT_DlcEstablishCnf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r29, r5
    mr r30, r6
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4480
    lis r3, 0x9
    lis r4, lbl_80377580@ha
    mr r5, r28
    mr r6, r29
    mr r7, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377580@l
    bl LogMsg_3
lbl_802C4480:
    cmpwi r31, 0x0
    beq lbl_802C454C
    cmpwi r30, 0x0
    beq lbl_802C44A8
    li r0, 0xc
    mr r3, r31
    stb r0, 0xe(r31)
    li r4, 0xc
    bl port_rfc_closed
    b lbl_802C454C
lbl_802C44A8:
    cmpwi r29, 0x0
    beq lbl_802C44C0
    lhz r0, 0x14(r31)
    cmplw r29, r0
    bge lbl_802C44C0
    sth r29, 0x14(r31)
lbl_802C44C0:
    mr r3, r27
    bl rfc_timer_stop
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C44F0
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 22, 22
    beq lbl_802C44F0
    lbz r4, 0x0(r31)
    li r3, 0x200
    mtctr r12
    bctrl
lbl_802C44F0:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_802C450C
    lbz r4, 0x0(r31)
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802C450C:
    li r0, 0x2
    stb r0, 0x2(r31)
    lhz r0, 0x4(r31)
    cmplwi r0, 0x1103
    beq lbl_802C4528
    cmplwi r0, 0x1111
    bne lbl_802C453C
lbl_802C4528:
    lwz r3, 0x6c(r31)
    li r5, 0x0
    lbz r4, 0xd(r31)
    bl RFCOMM_PortNegReq
    b lbl_802C454C
lbl_802C453C:
    lwz r3, 0x6c(r31)
    addi r5, r31, 0x5a
    lbz r4, 0xd(r31)
    bl RFCOMM_ControlReq
lbl_802C454C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_PortNegInd
// ----------------------------------------------------------------------------
asm void PORT_PortNegInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r4
    mr r30, r3
    mr r31, r5
    mr r28, r6
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r29, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C45B8
    lis r3, 0x9
    lis r4, lbl_803775B0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803775B0@l
    bl LogMsg_0
lbl_802C45B8:
    cmpwi r29, 0x0
    bne lbl_802C4640
    mr r3, r27
    bl port_find_dlci_port
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802C4634
    lbz r7, 0x0(r31)
    mr r4, r27
    lbz r0, 0x1(r31)
    mr r5, r31
    li r6, 0x0
    stb r7, 0x51(r3)
    stb r0, 0x52(r3)
    lbz r7, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0x53(r3)
    stb r0, 0x54(r3)
    lbz r7, 0x4(r31)
    lbz r0, 0x5(r31)
    stb r7, 0x55(r3)
    stb r0, 0x56(r3)
    lbz r7, 0x6(r31)
    lbz r0, 0x7(r31)
    stb r7, 0x57(r3)
    stb r0, 0x58(r3)
    lbz r0, 0x8(r31)
    stb r0, 0x59(r3)
    mr r3, r30
    bl RFCOMM_PortNegRsp
    b lbl_802C469C
lbl_802C4634:
    lbz r0, 0x0(r3)
    add r3, r30, r27
    stb r0, 0x24(r3)
lbl_802C4640:
    lbz r7, 0x0(r31)
    mr r3, r30
    lbz r0, 0x1(r31)
    mr r4, r27
    mr r5, r31
    mr r6, r28
    stb r7, 0x51(r29)
    stb r0, 0x52(r29)
    lbz r7, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0x53(r29)
    stb r0, 0x54(r29)
    lbz r7, 0x4(r31)
    lbz r0, 0x5(r31)
    stb r7, 0x55(r29)
    stb r0, 0x56(r29)
    lbz r7, 0x6(r31)
    lbz r0, 0x7(r31)
    stb r7, 0x57(r29)
    stb r0, 0x58(r29)
    lbz r0, 0x8(r31)
    stb r0, 0x59(r29)
    bl RFCOMM_PortNegRsp
lbl_802C469C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_PortNegCnf
// ----------------------------------------------------------------------------
asm void PORT_PortNegCnf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80377470@ha
    addi r31, r31, lbl_80377470@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r30, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C470C
    lis r3, 0x9
    addi r4, r31, 0x150
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802C470C:
    cmpwi r30, 0x0
    bne lbl_802C473C
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C47AC
    lis r3, 0x9
    addi r4, r31, 0x160
    addi r3, r3, 0x1
    bl LogMsg_0
    b lbl_802C47AC
lbl_802C473C:
    cmpwi r29, 0x0
    beq lbl_802C4768
    li r0, 0xe
    mr r3, r28
    stb r0, 0xe(r30)
    lbz r4, 0xd(r30)
    bl RFCOMM_DlcReleaseReq
    mr r3, r30
    li r4, 0xe
    bl port_rfc_closed
    b lbl_802C47AC
lbl_802C4768:
    lbz r0, 0x64(r30)
    clrlwi. r0, r0, 31
    bne lbl_802C4788
    lwz r3, 0x6c(r30)
    addi r5, r30, 0x5a
    lbz r4, 0xd(r30)
    bl RFCOMM_ControlReq
    b lbl_802C47AC
lbl_802C4788:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x2
    blt lbl_802C47AC
    lis r3, 0x9
    addi r4, r31, 0x178
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802C47AC:
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
// PORT_ControlInd
// ----------------------------------------------------------------------------
asm void PORT_ControlInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4818
    lis r3, 0x9
    lis r4, lbl_80377610@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377610@l
    bl LogMsg_0
lbl_802C4818:
    cmpwi r31, 0x0
    beq lbl_802C4928
    lbz r4, 0x5f(r31)
    mr r3, r31
    lbz r5, 0x0(r30)
    bl port_get_signal_changes
    lbz r0, 0x0(r30)
    mr r29, r3
    stb r0, 0x5f(r31)
    lbz r0, 0x1(r30)
    stb r0, 0x60(r31)
    lbz r0, 0x2(r30)
    stb r0, 0x61(r31)
    lbz r0, 0x3(r30)
    stb r0, 0x62(r31)
    lbz r0, 0x4(r30)
    stb r0, 0x63(r31)
    lbz r4, 0x64(r31)
    clrlwi. r0, r4, 31
    bne lbl_802C487C
    lwz r3, 0x6c(r31)
    addi r5, r31, 0x5a
    lbz r4, 0xd(r31)
    bl RFCOMM_ControlReq
    b lbl_802C48A4
lbl_802C487C:
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_802C4890
    lwz r0, 0x88(r31)
    rlwinm r0, r0, 0, 22, 22
    or r29, r3, r0
lbl_802C4890:
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_802C48A4
    mr r3, r31
    bl port_rfc_send_tx_data
    or r29, r29, r3
lbl_802C48A4:
    lbz r0, 0x64(r31)
    ori r0, r0, 0xc
    stb r0, 0x64(r31)
    lbz r0, 0x1(r30)
    cmpwi r0, 0x0
    beq lbl_802C48C8
    lwz r0, 0x88(r31)
    rlwinm r0, r0, 0, 25, 25
    or r29, r29, r0
lbl_802C48C8:
    cmpwi r29, 0x0
    beq lbl_802C48EC
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C48EC
    mr r3, r29
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C48EC:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C4928
    lbz r0, 0x5f(r31)
    lis r3, 0x9
    lis r4, lbl_80377620@ha
    extrwi r8, r0, 1, 28
    extrwi r7, r0, 1, 29
    extrwi r6, r0, 1, 30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377620@l
    clrlwi r5, r0, 31
    bl LogMsg_4
lbl_802C4928:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_ControlCnf
// ----------------------------------------------------------------------------
asm void PORT_ControlCnf() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C498C
    lis r3, 0x9
    lis r4, lbl_80377660@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377660@l
    bl LogMsg_0
lbl_802C498C:
    cmpwi r31, 0x0
    beq lbl_802C49F0
    lbz r3, 0x64(r31)
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_802C49B8
    ori r3, r3, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x64(r31)
    beq lbl_802C49B8
    lwz r0, 0x88(r31)
    rlwinm r30, r0, 0, 22, 22
lbl_802C49B8:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_802C49CC
    mr r3, r31
    bl port_rfc_send_tx_data
    or r30, r30, r3
lbl_802C49CC:
    cmpwi r30, 0x0
    beq lbl_802C49F0
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C49F0
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C49F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// PORT_LineStatusInd
// ----------------------------------------------------------------------------
asm void PORT_LineStatusInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4A58
    lis r3, 0x9
    lis r4, lbl_80377670@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377670@l
    bl LogMsg_0
lbl_802C4A58:
    cmpwi r31, 0x0
    beq lbl_802C4AB4
    lbz r3, 0xf(r31)
    rlwinm. r0, r29, 0, 30, 30
    or r0, r3, r29
    stb r0, 0xf(r31)
    beq lbl_802C4A78
    ori r30, r30, 0x2000
lbl_802C4A78:
    clrlwi. r0, r29, 31
    beq lbl_802C4A84
    ori r30, r30, 0x40
lbl_802C4A84:
    rlwinm. r0, r29, 0, 24, 29
    beq lbl_802C4A90
    ori r30, r30, 0x80
lbl_802C4A90:
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C4AB4
    lwz r0, 0x88(r31)
    and. r3, r0, r30
    beq lbl_802C4AB4
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C4AB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_DlcReleaseInd
// ----------------------------------------------------------------------------
asm void PORT_DlcReleaseInd() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4B10
    lis r3, 0x9
    lis r4, lbl_80377684@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377684@l
    bl LogMsg_0
lbl_802C4B10:
    cmpwi r31, 0x0
    beq lbl_802C4B24
    mr r3, r31
    li r4, 0x13
    bl port_rfc_closed
lbl_802C4B24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// PORT_CloseInd
// ----------------------------------------------------------------------------
asm void PORT_CloseInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80457828@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4B7C
    lis r3, 0x9
    lis r4, lbl_80377698@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377698@l
    bl LogMsg_0
lbl_802C4B7C:
    lis r3, lbl_80457828@ha
    li r30, 0x0
    addi r3, r3, lbl_80457828@l
    addi r31, r3, 0x68
lbl_802C4B8C:
    lwz r0, 0x6c(r31)
    cmplw r0, r29
    bne lbl_802C4BA4
    mr r3, r31
    li r4, 0x10
    bl port_rfc_closed
lbl_802C4BA4:
    addi r30, r30, 0x1
    addi r31, r31, 0xa4
    cmpwi r30, 0x5
    blt lbl_802C4B8C
    mr r3, r29
    bl rfc_release_multiplexer_channel
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Port_TimeOutCloseMux
// ----------------------------------------------------------------------------
asm void Port_TimeOutCloseMux() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80457828@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4C1C
    lis r3, 0x9
    lis r4, lbl_803776A8@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803776A8@l
    bl LogMsg_0
lbl_802C4C1C:
    lis r3, lbl_80457828@ha
    li r30, 0x0
    addi r3, r3, lbl_80457828@l
    addi r31, r3, 0x68
lbl_802C4C2C:
    lwz r0, 0x6c(r31)
    cmplw r0, r29
    bne lbl_802C4C44
    mr r3, r31
    li r4, 0x12
    bl port_rfc_closed
lbl_802C4C44:
    addi r30, r30, 0x1
    addi r31, r31, 0xa4
    cmpwi r30, 0x5
    blt lbl_802C4C2C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_DataInd
// ----------------------------------------------------------------------------
asm void PORT_DataInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r4
    mr r27, r3
    mr r29, r5
    bl port_find_mcb_dlci_port
    lis r4, lbl_80457828@ha
    mr r31, r3
    addi r4, r4, lbl_80457828@l
    li r30, 0x0
    lbz r0, 0x414(r4)
    cmplwi r0, 0x4
    blt lbl_802C4CC8
    lis r3, 0x9
    lis r4, lbl_803776C0@ha
    lhz r5, 0x2(r29)
    addi r3, r3, 0x3
    addi r4, r4, lbl_803776C0@l
    bl LogMsg_1
lbl_802C4CC8:
    cmpwi r31, 0x0
    bne lbl_802C4CDC
    mr r3, r29
    bl GKI_freebuf
    b lbl_802C4E58
lbl_802C4CDC:
    lwz r0, 0x94(r31)
    cmpwi r0, 0x0
    beq lbl_802C4D24
    mr r3, r31
    li r4, 0x1
    li r5, 0x1
    bl port_flow_control_peer
    lhz r0, 0x4(r29)
    lwz r12, 0x94(r31)
    add r4, r29, r0
    lbz r3, 0x0(r31)
    addi r4, r4, 0x8
    lhz r5, 0x2(r29)
    mtctr r12
    bctrl
    mr r3, r29
    bl GKI_freebuf
    b lbl_802C4E58
lbl_802C4D24:
    lhz r4, 0x2(r29)
    lwz r0, 0x40(r31)
    add r0, r0, r4
    cmplwi r0, 0x2ee0
    bgt lbl_802C4D4C
    lhz r3, 0x38(r31)
    lhz r0, 0xa0(r31)
    addi r3, r3, 0x1
    cmpw r3, r0
    ble lbl_802C4D90
lbl_802C4D4C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C4D74
    lis r3, 0x9
    lis r4, lbl_803776E4@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803776E4@l
    bl LogMsg_0
lbl_802C4D74:
    mr r3, r29
    bl GKI_freebuf
    mr r3, r27
    mr r4, r28
    li r5, 0x2
    bl RFCOMM_LineStatusReq
    b lbl_802C4E58
lbl_802C4D90:
    lbz r5, 0x4e(r31)
    cmpwi r5, 0x0
    beq lbl_802C4DDC
    lwz r0, 0x88(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802C4DDC
    lhz r0, 0x4(r29)
    add r3, r29, r0
    addi r3, r3, 0x8
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_802C4DDC
lbl_802C4DC0:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    cmplw r0, r5
    bne lbl_802C4DD8
    ori r30, r30, 0x2
    b lbl_802C4DDC
lbl_802C4DD8:
    bdnz lbl_802C4DC0
lbl_802C4DDC:
    mr r4, r29
    addi r3, r31, 0x30
    bl GKI_enqueue
    lwz r6, 0x40(r31)
    mr r3, r31
    lhz r0, 0x2(r29)
    li r4, 0x0
    li r5, 0x0
    add r0, r6, r0
    stw r0, 0x40(r31)
    bl port_flow_control_peer
    lbz r0, 0x3d(r31)
    cmpwi r0, 0x0
    beq lbl_802C4E28
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_802C4E58
    li r0, 0x1
    stb r0, 0x65(r31)
    b lbl_802C4E58
lbl_802C4E28:
    lwz r12, 0x8c(r31)
    ori r30, r30, 0x1
    lwz r0, 0x88(r31)
    cmpwi r12, 0x0
    and r30, r30, r0
    beq lbl_802C4E58
    cmpwi r30, 0x0
    beq lbl_802C4E58
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C4E58:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// PORT_FlowInd
// ----------------------------------------------------------------------------
asm void PORT_FlowInd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80457828@ha
    mr r26, r3
    addi r6, r6, lbl_80457828@l
    mr r27, r4
    lbz r0, 0x414(r6)
    mr r28, r5
    li r29, 0x0
    cmplwi r0, 0x4
    blt lbl_802C4EBC
    lis r3, 0x9
    lis r4, lbl_80377718@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377718@l
    bl LogMsg_1
lbl_802C4EBC:
    cmpwi r27, 0x0
    bne lbl_802C4ECC
    stb r28, 0x71(r26)
    b lbl_802C4EF0
lbl_802C4ECC:
    mr r3, r26
    mr r4, r27
    bl port_find_mcb_dlci_port
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802C4F88
    cntlzw r0, r28
    extrwi r0, r0, 8, 19
    stb r0, 0x24(r3)
lbl_802C4EF0:
    lis r3, lbl_80457828@ha
    li r28, 0x0
    addi r3, r3, lbl_80457828@l
    addi r30, r3, 0x68
lbl_802C4F00:
    cmpwi r27, 0x0
    bne lbl_802C4F30
    lbz r0, 0x1(r30)
    mr r29, r30
    cmpwi r0, 0x0
    beq lbl_802C4F78
    lwz r0, 0x6c(r30)
    cmplw r0, r26
    bne lbl_802C4F78
    lbz r0, 0x68(r30)
    cmplwi r0, 0x4
    bne lbl_802C4F78
lbl_802C4F30:
    mr r3, r29
    bl port_flow_control_user
    mr r31, r3
    mr r3, r29
    bl port_rfc_send_tx_data
    lwz r12, 0x8c(r29)
    or r3, r31, r3
    lwz r0, 0x88(r29)
    cmpwi r12, 0x0
    and r3, r3, r0
    beq lbl_802C4F70
    cmpwi r3, 0x0
    beq lbl_802C4F70
    lbz r4, 0x0(r29)
    mtctr r12
    bctrl
lbl_802C4F70:
    cmpwi r27, 0x0
    bne lbl_802C4F88
lbl_802C4F78:
    addi r28, r28, 0x1
    addi r30, r30, 0xa4
    cmpwi r28, 0x5
    blt lbl_802C4F00
lbl_802C4F88:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// port_rfc_send_tx_data
// ----------------------------------------------------------------------------
asm void port_rfc_send_tx_data() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r0, 0x28(r3)
    mr r26, r3
    li r28, 0x0
    cmpwi r0, 0x0
    beq lbl_802C5078
    lis r29, lbl_80457828@ha
    lis r30, 0x9
    addi r29, r29, lbl_80457828@l
    lis r31, lbl_8037772C@ha
    b lbl_802C5048
lbl_802C4FDC:
    addi r3, r26, 0x18
    bl GKI_dequeue
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_802C5040
    lbz r0, 0x414(r29)
    cmplwi r0, 0x4
    blt lbl_802C5008
    addi r3, r30, 0x3
    addi r4, r31, lbl_8037772C@l
    bl LogMsg_0
lbl_802C5008:
    lhz r4, 0x2(r27)
    mr r5, r27
    lwz r0, 0x28(r26)
    lwz r3, 0x6c(r26)
    subf r0, r4, r0
    lbz r4, 0xd(r26)
    stw r0, 0x28(r26)
    bl RFCOMM_DataReq
    lwz r0, 0x28(r26)
    ori r28, r28, 0x4000
    cmpwi r0, 0x0
    bne lbl_802C5048
    ori r28, r28, 0x4
    b lbl_802C506C
lbl_802C5040:
    ori r28, r28, 0x4
    b lbl_802C506C
lbl_802C5048:
    lbz r0, 0x24(r26)
    cmpwi r0, 0x0
    bne lbl_802C506C
    lwz r3, 0x6c(r26)
    cmpwi r3, 0x0
    beq lbl_802C506C
    lbz r0, 0x71(r3)
    cmpwi r0, 0x0
    bne lbl_802C4FDC
lbl_802C506C:
    mr r3, r26
    bl port_flow_control_user
    or r28, r28, r3
lbl_802C5078:
    lwz r0, 0x88(r26)
    addi r11, r1, 0x20
    and r3, r28, r0
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// port_rfc_closed
// ----------------------------------------------------------------------------
asm void port_rfc_closed() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r5, 0x2(r3)
    lwz r29, 0x6c(r3)
    cmplwi r5, 0x1
    bne lbl_802C5144
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_802C5144
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C5104
    lis r3, 0x9
    lis r4, lbl_80377744@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377744@l
    bl LogMsg_0
lbl_802C5104:
    mr r3, r31
    bl rfc_port_timer_stop
    li r30, 0x0
    cmpwi r29, 0x0
    stb r30, 0x68(r31)
    beq lbl_802C5134
    lbz r0, 0xd(r31)
    mr r3, r29
    add r4, r29, r0
    stb r30, 0x24(r4)
    bl rfc_check_mcb_active
    stw r30, 0x6c(r31)
lbl_802C5134:
    lbz r0, 0xd(r31)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0xd(r31)
    b lbl_802C520C
lbl_802C5144:
    cmplwi r5, 0x3
    beq lbl_802C518C
    cmpwi r5, 0x0
    beq lbl_802C518C
    lbz r5, 0xf(r3)
    li r0, -0xc
    lbz r4, 0x5f(r3)
    ori r6, r5, 0x10
    and r5, r4, r0
    stb r6, 0xf(r3)
    stb r5, 0x5f(r3)
    mr r3, r31
    bl port_get_signal_changes
    lwz r0, 0x88(r31)
    mr r30, r3
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_802C518C
    ori r30, r3, 0x8000
lbl_802C518C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C51BC
    lis r3, 0x9
    lis r4, lbl_80377770@ha
    lbz r5, 0x2(r31)
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377770@l
    bl LogMsg_2
lbl_802C51BC:
    lwz r12, 0x8c(r31)
    cmpwi r12, 0x0
    beq lbl_802C51E0
    cmpwi r30, 0x0
    beq lbl_802C51E0
    mr r3, r30
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C51E0:
    lwz r12, 0x90(r31)
    cmpwi r12, 0x0
    beq lbl_802C51FC
    mr r3, r28
    lbz r4, 0x0(r31)
    mtctr r12
    bctrl
lbl_802C51FC:
    li r0, 0x0
    mr r3, r31
    stb r0, 0x68(r31)
    bl port_release_port
lbl_802C520C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

