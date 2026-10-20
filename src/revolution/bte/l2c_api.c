#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();                  /* extern */
M2C_UNK LogMsg_1();          /* extern */
M2C_UNK LogMsg_2();     /* extern */
M2C_UNK LogMsg_3();                  /* extern */
M2C_UNK LogMsg_6(); /* extern */
M2C_UNK l2c_csm_execute();            /* extern */
extern M2C_UNK lbl_80375E50;
extern M2C_UNK lbl_80375EF8;
extern M2C_UNK lbl_80375F2C;
extern M2C_UNK lbl_803761A8;
extern M2C_UNK lbl_803761C8;
extern M2C_UNK lbl_803761F4;
extern M2C_UNK lbl_80376220;
extern M2C_UNK lbl_8037624C;
extern M2C_UNK lbl_80376270;
extern M2C_UNK lbl_8037629C;
extern M2C_UNK lbl_803762C0;
extern M2C_UNK lbl_80376420;
extern u8 lbl_80457040;
extern M2C_UNK lbl_804A2558;

s32 L2CA_Register();
void L2CA_Deregister();
u16 L2CA_ConnectReq();
s32 L2CA_ConnectRsp();
s32 L2CA_ConfigReq();
s32 L2CA_ConfigRsp();
s32 L2CA_DisconnectReq();
s32 L2CA_DisconnectRsp();
s32 L2CA_DataWrite();
s32 L2CA_SetIdleTimeout();
s32 L2CA_SetIdleTimeoutByBdAddr();
u8 L2CA_SetTraceLevel();
void L2CA_RegisterCompression();













void L2CA_RegisterCompression(s32 arg0, s32 arg1) {

}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GKI_freebuf();
s32 L2CA_ConfigReq();
s32 L2CA_ConfigRsp();
u16 L2CA_ConnectReq();
s32 L2CA_ConnectRsp();
s32 L2CA_DataWrite();
void L2CA_Deregister();
s32 L2CA_DisconnectReq();
s32 L2CA_DisconnectRsp();
s32 L2CA_Register();
s32 L2CA_SetIdleTimeout();
s32 L2CA_SetIdleTimeoutByBdAddr();
u8 L2CA_SetTraceLevel();
extern void _restgpr_26();
extern void _savegpr_26();
extern void l2cu_release_rcb();

// asm_to_cpp: L2CA_Register
asm s32 L2CA_Register() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80457040@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80375E50@ha
    addi r31, r31, lbl_80375E50@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_80457040@l(r5)
    cmplwi r0, 0x3
    blt lbl_802BDD04
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x0
    bl LogMsg_1
lbl_802BDD04:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_802BDD34
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_802BDD34
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_802BDD34
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_802BDD5C
lbl_802BDD34:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802BDD54
    mr r5, r29
    addi r4, r31, 0x30
    lis r3, 0x8
    bl LogMsg_1
lbl_802BDD54:
    li r3, 0x0
    b lbl_802BDE38
lbl_802BDD5C:
    andi. r0, r29, 0x101
    cmpwi r0, 0x1
    beq lbl_802BDD90
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802BDD88
    mr r5, r29
    addi r4, r31, 0x58
    lis r3, 0x8
    bl LogMsg_1
lbl_802BDD88:
    li r3, 0x0
    b lbl_802BDE38
lbl_802BDD90:
    mr r3, r29
    bl l2cu_find_rcb_by_psm
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802BDDE4
    mr r3, r29
    bl l2cu_allocate_rcb
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802BDDE4
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BDDDC
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r31, 0x80
    bl LogMsg_1
lbl_802BDDDC:
    li r3, 0x0
    b lbl_802BDE38
lbl_802BDDE4:
    lwz r4, 0x0(r30)
    li r3, 0x1
    lwz r0, 0x4(r30)
    stw r4, 0x4(r5)
    stw r0, 0x8(r5)
    lwz r4, 0x8(r30)
    lwz r0, 0xc(r30)
    stw r4, 0xc(r5)
    stw r0, 0x10(r5)
    lwz r4, 0x10(r30)
    lwz r0, 0x14(r30)
    stw r4, 0x14(r5)
    stw r0, 0x18(r5)
    lwz r4, 0x18(r30)
    lwz r0, 0x1c(r30)
    stw r4, 0x1c(r5)
    stw r0, 0x20(r5)
    lwz r4, 0x20(r30)
    lwz r0, 0x24(r30)
    stw r4, 0x24(r5)
    stw r0, 0x28(r5)
lbl_802BDE38:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: L2CA_Deregister
asm void L2CA_Deregister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457040@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_80457040@l(r4)
    cmplwi r0, 0x3
    blt lbl_802BDE90
    lis r3, 0x8
    lis r4, lbl_80375EF8@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_80375EF8@l
    bl LogMsg_1
lbl_802BDE90:
    mr r3, r31
    bl l2cu_find_rcb_by_psm
    cmpwi r3, 0x0
    beq lbl_802BDEA8
    bl l2cu_release_rcb
    b lbl_802BDED0
lbl_802BDEA8:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BDED0
    lis r3, 0x8
    lis r4, lbl_80375F2C@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375F2C@l
    bl LogMsg_1
lbl_802BDED0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_ConnectReq
asm u16 L2CA_ConnectReq() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80457040@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80375E50@ha
    addi r31, r31, lbl_80375E50@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, lbl_80457040@l(r5)
    cmplwi r0, 0x3
    blt lbl_802BDF34
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x110
    bl LogMsg_1
lbl_802BDF34:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BDF6C
    lis r3, 0x8
    lbz r5, 0x0(r28)
    lbz r6, 0x1(r28)
    addi r3, r3, 0x2
    lbz r7, 0x2(r28)
    addi r4, r31, 0x130
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl LogMsg_6
lbl_802BDF6C:
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    bne lbl_802BDFA0
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BDF98
    lis r3, 0x8
    addi r4, r31, 0x168
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BDF98:
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BDFA0:
    mr r3, r29
    bl l2cu_find_rcb_by_psm
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802BDFE0
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BDFD8
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r31, 0x18c
    bl LogMsg_1
lbl_802BDFD8:
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BDFE0:
    mr r3, r28
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802BE044
    mr r3, r28
    bl l2cu_allocate_lcb
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802BE030
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE028
    lis r3, 0x8
    addi r4, r31, 0x1bc
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BE028:
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BE030:
    bl l2cu_create_conn
    clrlwi. r0, r3, 24
    bne lbl_802BE044
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BE044:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x5
    bne lbl_802BE078
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BE070
    lis r3, 0x8
    addi r4, r31, 0x1e0
    addi r3, r3, 0x2
    bl LogMsg_0
lbl_802BE070:
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BE078:
    mr r3, r29
    bl l2cu_allocate_ccb
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802BE0B4
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE0AC
    lis r3, 0x8
    addi r4, r31, 0x218
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BE0AC:
    li r3, 0x0
    b lbl_802BE0F8
lbl_802BE0B4:
    stw r30, 0x30(r3)
    lwz r0, 0x4(r29)
    cmpwi r0, 0x4
    bne lbl_802BE0D0
    li r4, 0x14
    li r5, 0x0
    bl l2c_csm_execute
lbl_802BE0D0:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BE0F4
    lis r3, 0x8
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x23c
    bl LogMsg_1
lbl_802BE0F4:
    lhz r3, 0x14(r28)
lbl_802BE0F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: L2CA_ConnectRsp
asm s32 L2CA_ConnectRsp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r8, lbl_80457040@ha
    lis r31, lbl_80375E50@ha
    lbz r0, lbl_80457040@l(r8)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmplwi r0, 0x3
    mr r29, r6
    mr r30, r7
    addi r31, r31, lbl_80375E50@l
    blt lbl_802BE168
    lis r3, 0x8
    addi r4, r31, 0x26c
    addi r3, r3, 0x2
    bl LogMsg_3
lbl_802BE168:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BE1A0
    lis r3, 0x8
    lbz r5, 0x0(r26)
    lbz r6, 0x1(r26)
    addi r3, r3, 0x2
    lbz r7, 0x2(r26)
    addi r4, r31, 0x2a4
    lbz r8, 0x3(r26)
    lbz r9, 0x4(r26)
    lbz r10, 0x5(r26)
    bl LogMsg_6
lbl_802BE1A0:
    mr r3, r26
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    bne lbl_802BE1D8
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE1D0
    lis r3, 0x8
    addi r4, r31, 0x2dc
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BE1D0:
    li r3, 0x0
    b lbl_802BE290
lbl_802BE1D8:
    mr r4, r28
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE210
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE208
    lis r3, 0x8
    addi r4, r31, 0x300
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BE208:
    li r3, 0x0
    b lbl_802BE290
lbl_802BE210:
    lbz r5, 0x36(r3)
    cmplw r5, r27
    beq lbl_802BE248
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE240
    lis r3, 0x8
    mr r6, r27
    addi r4, r31, 0x324
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802BE240:
    li r3, 0x0
    b lbl_802BE290
lbl_802BE248:
    cmpwi r29, 0x0
    bne lbl_802BE260
    li r4, 0x15
    li r5, 0x0
    bl l2c_csm_execute
    b lbl_802BE28C
lbl_802BE260:
    cmplwi r29, 0x1
    sth r29, 0x12(r1)
    sth r30, 0x14(r1)
    bne lbl_802BE280
    addi r5, r1, 0x8
    li r4, 0x15
    bl l2c_csm_execute
    b lbl_802BE28C
lbl_802BE280:
    addi r5, r1, 0x8
    li r4, 0x16
    bl l2c_csm_execute
lbl_802BE28C:
    li r3, 0x1
lbl_802BE290:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: L2CA_ConfigReq
asm s32 L2CA_ConfigReq() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457040@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_80457040@l(r5)
    cmplwi r0, 0x3
    blt lbl_802BE2EC
    lis r3, 0x8
    lis r4, lbl_803761A8@ha
    mr r5, r30
    addi r3, r3, 0x2
    addi r4, r4, lbl_803761A8@l
    bl LogMsg_1
lbl_802BE2EC:
    mr r4, r30
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE330
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE328
    lis r3, 0x8
    lis r4, lbl_803761C8@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_803761C8@l
    bl LogMsg_1
lbl_802BE328:
    li r3, 0x0
    b lbl_802BE348
lbl_802BE330:
    li r0, 0x0
    mr r5, r31
    stb r0, 0x24(r31)
    li r4, 0x17
    bl l2c_csm_execute
    li r3, 0x1
lbl_802BE348:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_ConfigRsp
asm s32 L2CA_ConfigRsp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457040@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_80457040@l(r5)
    cmplwi r0, 0x3
    blt lbl_802BE3A8
    lis r3, 0x8
    lis r4, lbl_803761F4@ha
    lhz r6, 0x0(r31)
    mr r5, r30
    addi r3, r3, 0x2
    addi r4, r4, lbl_803761F4@l
    bl LogMsg_2
lbl_802BE3A8:
    mr r4, r30
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE3EC
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE3E4
    lis r3, 0x8
    lis r4, lbl_80376220@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376220@l
    bl LogMsg_1
lbl_802BE3E4:
    li r3, 0x0
    b lbl_802BE418
lbl_802BE3EC:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_802BE408
    mr r5, r31
    li r4, 0x18
    bl l2c_csm_execute
    b lbl_802BE414
lbl_802BE408:
    mr r5, r31
    li r4, 0x19
    bl l2c_csm_execute
lbl_802BE414:
    li r3, 0x1
lbl_802BE418:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_DisconnectReq
asm s32 L2CA_DisconnectReq() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457040@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_80457040@l(r4)
    cmplwi r0, 0x3
    blt lbl_802BE46C
    lis r3, 0x8
    lis r4, lbl_8037624C@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_8037624C@l
    bl LogMsg_1
lbl_802BE46C:
    mr r4, r31
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE4B0
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE4A8
    lis r3, 0x8
    lis r4, lbl_80376270@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376270@l
    bl LogMsg_1
lbl_802BE4A8:
    li r3, 0x0
    b lbl_802BE4C0
lbl_802BE4B0:
    li r4, 0x1a
    li r5, 0x0
    bl l2c_csm_execute
    li r3, 0x1
lbl_802BE4C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_DisconnectRsp
asm s32 L2CA_DisconnectRsp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457040@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, lbl_80457040@l(r4)
    cmplwi r0, 0x3
    blt lbl_802BE510
    lis r3, 0x8
    lis r4, lbl_8037629C@ha
    mr r5, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_8037629C@l
    bl LogMsg_1
lbl_802BE510:
    mr r4, r31
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE554
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE54C
    lis r3, 0x8
    lis r4, lbl_803762C0@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_803762C0@l
    bl LogMsg_1
lbl_802BE54C:
    li r3, 0x0
    b lbl_802BE564
lbl_802BE554:
    li r4, 0x1b
    li r5, 0x0
    bl l2c_csm_execute
    li r3, 0x1
lbl_802BE564:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_DataWrite
asm s32 L2CA_DataWrite() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80457040@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80375E50@ha
    addi r31, r31, lbl_80375E50@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, lbl_80457040@l(r5)
    cmplwi r0, 0x3
    blt lbl_802BE5CC
    lis r3, 0x8
    lhz r6, 0x2(r29)
    mr r5, r28
    addi r4, r31, 0x49c
    addi r3, r3, 0x2
    bl LogMsg_2
lbl_802BE5CC:
    mr r4, r28
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802BE618
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE608
    lis r3, 0x8
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x4c4
    bl LogMsg_1
lbl_802BE608:
    mr r3, r29
    bl GKI_freebuf
    li r3, 0x0
    b lbl_802BE67C
lbl_802BE618:
    lhz r4, 0x2(r29)
    lhz r0, 0x3a(r3)
    cmplw r4, r0
    bgt lbl_802BE650
    mr r5, r29
    li r4, 0x1d
    bl l2c_csm_execute
    lwz r3, 0x10(r30)
    lbz r3, 0x41(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0x1
    b lbl_802BE67C
lbl_802BE650:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE670
    lis r3, 0x8
    addi r4, r31, 0x4f0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802BE670:
    mr r3, r29
    bl GKI_freebuf
    li r3, 0x0
lbl_802BE67C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: L2CA_SetIdleTimeout
asm s32 L2CA_SetIdleTimeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802BE6D0
    lis r3, lbl_80457040@ha
    addi r3, r3, lbl_80457040@l
    sth r4, 0x7ba(r3)
    b lbl_802BE748
lbl_802BE6D0:
    mr r4, r30
    li r3, 0x0
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802BE714
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BE70C
    lis r3, 0x8
    lis r4, lbl_80376420@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376420@l
    bl LogMsg_1
lbl_802BE70C:
    li r3, 0x0
    b lbl_802BE74C
lbl_802BE714:
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_802BE740
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802BE740
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_802BE740
    sth r31, 0x58(r3)
    b lbl_802BE748
lbl_802BE740:
    li r3, 0x0
    b lbl_802BE74C
lbl_802BE748:
    li r3, 0x1
lbl_802BE74C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_SetIdleTimeoutByBdAddr
asm s32 L2CA_SetIdleTimeoutByBdAddr() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r4, r30
    la r3, lbl_804A2558
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802BE7D0
    mr r3, r30
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    beq lbl_802BE7C8
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802BE7C8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_802BE7C8
    sth r31, 0x58(r3)
    b lbl_802BE848
lbl_802BE7C8:
    li r3, 0x0
    b lbl_802BE84C
lbl_802BE7D0:
    lis r3, lbl_80457040@ha
    addi r3, r3, lbl_80457040@l
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BE7F4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x4
    bne lbl_802BE7F4
    sth r31, 0x60(r3)
lbl_802BE7F4:
    lbzu r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_802BE810
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_802BE810
    sth r31, 0x58(r3)
lbl_802BE810:
    lbz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_802BE82C
    lwz r0, 0x60(r3)
    cmpwi r0, 0x4
    bne lbl_802BE82C
    sth r31, 0xb4(r3)
lbl_802BE82C:
    lbz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_802BE848
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x4
    bne lbl_802BE848
    sth r31, 0x110(r3)
lbl_802BE848:
    li r3, 0x1
lbl_802BE84C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: L2CA_SetTraceLevel
asm u8 L2CA_SetTraceLevel() {
    nofralloc
    cmplwi r3, 0xff
    beq lbl_802BE874
    lis r4, lbl_80457040@ha
    stb r3, lbl_80457040@l(r4)
lbl_802BE874:
    lis r3, lbl_80457040@ha
    lbz r3, lbl_80457040@l(r3)
    blr
}
