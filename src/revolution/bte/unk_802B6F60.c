#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();            /* extern */
extern s16 lbl_80453A50;
extern s16 lbl_80456740;

void fn_802B6F60();
void fn_802B6F8C();
s32 fn_802B6FD8();
void fn_802B70B8();

void fn_802B6F60(s32 arg0) {
    fn_802B1218();
    l2c_init();
    sdp_init();
    btm_discovery_db_init();
}

// fn_802B6F8C: definicion C reemplazada por asm (ver abajo)


// fn_802B6FD8: definicion C reemplazada por asm (ver abajo)


// fn_802B70B8: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void SDP_AddUuidSequence();
void fn_802B6F8C(void);
s32 fn_802B6FD8(void);
void fn_802B70B8(void);
extern void gap_conn_init();

// asm_to_cpp: fn_802B6F8C
asm void fn_802B6F8C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x84
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453A50@ha
    addi r3, r31, lbl_80453A50@l
    bl memset
    addi r3, r31, lbl_80453A50@l
    li r4, 0x2a4
    li r0, 0x1
    sth r4, 0x7e(r3)
    sth r0, 0x80(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802B6FD8
asm s32 fn_802B6FD8(void) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    li r0, 0x1002
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r31, 0x11c(r1)
    li r31, 0x0
    stw r30, 0x118(r1)
    stw r31, 0x10(r1)
    sth r0, 0x8(r1)
    bl SDP_GetLocalDiRecord
    clrlwi. r0, r3, 16
    beq lbl_802B7058
    addi r30, r1, 0x16
    li r4, 0x0
    mr r3, r30
    li r5, 0xfa
    bl memset
    li r0, 0x1
    li r3, 0xf
    sth r3, 0x16(r1)
    mr r3, r30
    addi r4, r1, 0x10
    sth r0, 0x18(r1)
    stb r0, 0x1e(r1)
    bl SDP_SetLocalDiRecord
    clrlwi. r0, r3, 16
    beq lbl_802B7058
    stw r31, 0x10(r1)
    li r3, 0x0
    b lbl_802B70A0
lbl_802B7058:
    lwz r3, 0x10(r1)
    addi r6, r1, 0x8
    li r4, 0x5
    li r5, 0x1
    bl SDP_AddUuidSequence
    li r0, 0x0
    li r4, 0x1
    lis r3, 0x1
    stb r0, 0xc(r1)
    subi r0, r3, 0x7fff
    lwz r3, 0x10(r1)
    stb r4, 0xd(r1)
    clrlwi r4, r0, 16
    addi r7, r1, 0xc
    li r5, 0x1
    li r6, 0x2
    bl SDP_AddAttribute
    li r3, 0x1
lbl_802B70A0:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_802B70B8
asm void fn_802B70B8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x3ac
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456740@ha
    addi r3, r31, lbl_80456740@l
    bl memset
    lis r5, gap_btm_cback0@ha
    lis r3, gap_btm_cback1@ha
    addi r5, r5, gap_btm_cback0@l
    addi r4, r31, lbl_80456740@l
    addi r3, r3, gap_btm_cback1@l
    li r0, 0x5
    stw r5, 0x20(r4)
    stw r3, 0x24(r4)
    stb r0, 0x28(r4)
    bl gap_conn_init
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
