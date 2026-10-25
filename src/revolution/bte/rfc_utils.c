#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();               /* extern */
M2C_UNK LogMsg_1();          /* extern */
M2C_UNK memcpy();               /* extern */
M2C_UNK memset();           /* extern */
M2C_UNK rfc_mx_sm_execute(); /* extern */
M2C_UNK rfc_port_sm_execute(); /* extern */
extern M2C_UNK lbl_803418C8;
extern M2C_UNK lbl_803780E0;
extern M2C_UNK lbl_803780F0;
extern M2C_UNK lbl_80378110;
extern M2C_UNK lbl_80378134;
extern M2C_UNK lbl_80378158;
extern M2C_UNK lbl_80457828;

u8 rfc_calc_fcs();
u8 rfc_check_fcs();
s8 * rfc_alloc_multiplexer_channel();
void rfc_release_multiplexer_channel();
void rfc_timer_start();
void rfc_timer_stop();
void rfc_port_timer_start();
void rfc_port_timer_stop();
void rfc_check_mcb_active();
void rfc_sec_check_complete();
void rfc_port_closed();
void rfc_inc_credit();
void rfc_dec_credit();
void rfc_check_send_cmd();




// rfc_release_multiplexer_channel: definicion C reemplazada por asm (ver abajo)



// rfc_timer_stop: definicion C reemplazada por asm (ver abajo)



// rfc_port_timer_stop: definicion C reemplazada por asm (ver abajo)


// rfc_check_mcb_active: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function rfcomm_process_timeout:

Cannot find branch target rfc_port_sm_execute
*/


// rfc_port_closed: definicion C reemplazada por asm (ver abajo)


// rfc_inc_credit: definicion C reemplazada por asm (ver abajo)


void rfc_dec_credit(s8 *arg0) {
    u16 temp_r4;

    if ((u8) M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x6C), u8 *, 0x72) == 2) {
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x98);
        if ((s32) temp_r4 != 0) {
            M2C_FIELD(arg0, u16 *, 0x98) = (u16) (temp_r4 - 1);
        }
        if ((s32) M2C_FIELD(arg0, u16 *, 0x98) == 0) {
            M2C_FIELD(arg0, s8 *, 0x24) = 1;
        }
    }
}

// rfc_check_send_cmd: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void PORT_FlowInd();
extern void _restgpr_27();
extern void _savegpr_27();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void port_rfc_closed();
s8 * rfc_alloc_multiplexer_channel();
u8 rfc_calc_fcs();
u8 rfc_check_fcs();
void rfc_check_mcb_active(s8 *arg0, s32 arg1);
void rfc_check_send_cmd(s8 *arg0, s32 arg1, s32 arg2);
void rfc_inc_credit(s8 *arg0, s32 arg1);
void rfc_port_closed(s8 *arg0);
void rfc_port_timer_start();
void rfc_port_timer_stop(s32 arg0);
void rfc_release_multiplexer_channel(s8 *arg0);
void rfc_sec_check_complete();
void rfc_timer_start();
void rfc_timer_stop(s8 *arg0);
extern int rfcomm_process_timeout();

// asm_to_cpp: rfc_calc_fcs
asm u8 rfc_calc_fcs() {
    nofralloc
    lis r5, lbl_803418C8@ha
    li r6, 0xff
    addi r5, r5, lbl_803418C8@l
    b lbl_802C9AB0
lbl_802C9AA0:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    xor r0, r6, r0
    lbzx r6, r5, r0
lbl_802C9AB0:
    clrlwi. r0, r3, 16
    subi r3, r3, 0x1
    bne lbl_802C9AA0
    subfic r0, r6, 0xff
    clrlwi r3, r0, 24
    blr
}

// asm_to_cpp: rfc_check_fcs
asm u8 rfc_check_fcs() {
    nofralloc
    lis r6, lbl_803418C8@ha
    li r7, 0xff
    addi r6, r6, lbl_803418C8@l
    b lbl_802C9AE8
lbl_802C9AD8:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    xor r0, r7, r0
    lbzx r7, r6, r0
lbl_802C9AE8:
    clrlwi. r0, r3, 16
    subi r3, r3, 0x1
    bne lbl_802C9AD8
    lis r3, lbl_803418C8@ha
    xor r0, r7, r5
    addi r3, r3, lbl_803418C8@l
    lbzx r3, r3, r0
    subi r0, r3, 0xcf
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    blr
}

// asm_to_cpp: rfc_alloc_multiplexer_channel
asm s8 * rfc_alloc_multiplexer_channel() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80457828@ha
    mr r27, r3
    addi r31, r5, lbl_80457828@l
    mr r28, r4
    lbz r0, 0x408(r31)
    addi r3, r31, 0x3fe
    li r30, 0x0
    cmpwi r0, 0x0
    beq lbl_802C9BA4
    mr r4, r27
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802C9BA4
    lbz r0, 0x414(r31)
    cmplwi r0, 0x4
    blt lbl_802C9B80
    lis r3, 0x9
    lis r4, lbl_803780E0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803780E0@l
    bl LogMsg_0
lbl_802C9B80:
    mulli r0, r30, 0x78
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    add r3, r3, r0
    addi r31, r3, 0x39c
    mr r3, r31
    bl btu_stop_timer
    mr r3, r31
    b lbl_802C9C54
lbl_802C9BA4:
    lis r31, lbl_80457828@ha
    addi r31, r31, lbl_80457828@l
    lbz r3, 0x65(r31)
    addi r30, r3, 0x1
    cmpwi r30, 0x1
    blt lbl_802C9BC0
    li r30, 0x0
lbl_802C9BC0:
    mulli r0, r30, 0x78
    add r3, r31, r0
    lbz r0, 0x408(r3)
    addi r29, r3, 0x39c
    cmpwi r0, 0x0
    bne lbl_802C9C50
    mr r3, r29
    li r4, 0x0
    li r5, 0x78
    bl memset
    mr r4, r27
    addi r3, r29, 0x62
    li r5, 0x6
    bl memcpy
    addi r3, r29, 0x18
    bl GKI_init_q
    stb r28, 0x6d(r29)
    lbz r0, 0x414(r31)
    cmplwi r0, 0x4
    blt lbl_802C9C28
    lis r3, 0x9
    lis r4, lbl_803780F0@ha
    addi r3, r3, 0x3
    li r5, 0x3c
    addi r4, r4, lbl_803780F0@l
    bl LogMsg_1
lbl_802C9C28:
    stw r29, 0x10(r29)
    mr r3, r29
    li r4, 0xb
    li r5, 0x3c
    bl btu_start_timer
    lis r4, lbl_80457828@ha
    mr r3, r29
    addi r4, r4, lbl_80457828@l
    stb r30, 0x65(r4)
    b lbl_802C9C54
lbl_802C9C50:
    li r3, 0x0
lbl_802C9C54:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: rfc_release_multiplexer_channel
asm void rfc_release_multiplexer_channel(s8 *arg0) {
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
    blt lbl_802C9CA8
    lis r3, 0x9
    lis r4, lbl_803780E0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803780E0@l
    bl LogMsg_0
lbl_802C9CA8:
    mr r3, r31
    bl btu_stop_timer
    b lbl_802C9CB8
lbl_802C9CB4:
    bl GKI_freebuf
lbl_802C9CB8:
    addi r3, r31, 0x18
    bl GKI_dequeue
    cmpwi r3, 0x0
    bne lbl_802C9CB4
    mr r3, r31
    li r4, 0x0
    li r5, 0x78
    bl memset
    li r0, 0x0
    stb r0, 0x6c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_timer_start
asm void rfc_timer_start() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457828@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80457828@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802C9D3C
    lis r3, 0x9
    lis r4, lbl_803780F0@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_803780F0@l
    bl LogMsg_1
lbl_802C9D3C:
    stw r30, 0x10(r30)
    mr r3, r30
    mr r5, r31
    li r4, 0xb
    bl btu_start_timer
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_timer_stop
asm void rfc_timer_stop(s8 *arg0) {
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
    blt lbl_802C9DA4
    lis r3, 0x9
    lis r4, lbl_803780E0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803780E0@l
    bl LogMsg_0
lbl_802C9DA4:
    mr r3, r31
    bl btu_stop_timer
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_timer_start
asm void rfc_port_timer_start() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80457828@l
    stw r31, 0x1c(r1)
    addi r31, r3, 0x70
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802C9E10
    lis r3, 0x9
    lis r4, lbl_80378110@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80378110@l
    bl LogMsg_1
lbl_802C9E10:
    stw r29, 0x10(r31)
    mr r3, r31
    mr r5, r30
    li r4, 0xc
    bl btu_start_timer
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: rfc_port_timer_stop
asm void rfc_port_timer_stop(s32 arg0) {
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
    blt lbl_802C9E7C
    lis r3, 0x9
    lis r4, lbl_80378134@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80378134@l
    bl LogMsg_0
lbl_802C9E7C:
    addi r3, r31, 0x70
    bl btu_stop_timer
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_check_mcb_active
asm void rfc_check_mcb_active(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    li r0, 0x3d
    stw r31, 0xc(r1)
    mr r31, r3
    mtctr r0
lbl_802C9EB8:
    clrlwi r0, r5, 16
    add r4, r3, r0
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_802C9ED8
    li r0, 0x0
    stb r0, 0x74(r3)
    b lbl_802C9F48
lbl_802C9ED8:
    addi r5, r5, 0x1
    bdnz lbl_802C9EB8
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_802C9F08
    li r0, 0x0
    li r4, 0x8
    stb r0, 0x74(r3)
    mr r3, r31
    li r5, 0x0
    bl rfc_mx_sm_execute
    b lbl_802C9F48
lbl_802C9F08:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C9F34
    lis r3, 0x9
    lis r4, lbl_803780F0@ha
    addi r3, r3, 0x3
    li r5, 0x2
    addi r4, r4, lbl_803780F0@l
    bl LogMsg_1
lbl_802C9F34:
    stw r31, 0x10(r31)
    mr r3, r31
    li r4, 0xb
    li r5, 0x2
    bl btu_start_timer
lbl_802C9F48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfcomm_process_timeout
asm int rfcomm_process_timeout() {
    nofralloc
    lhz r0, 0x14(r3)
    cmpwi r0, 0xc
    beq lbl_802C9F84
    bgelr
    cmpwi r0, 0xb
    bltlr
    lwz r3, 0x10(r3)
    li r4, 0x5
    li r5, 0x0
    b rfc_mx_sm_execute
lbl_802C9F84:
    lwz r3, 0x10(r3)
    li r4, 0x5
    li r5, 0x0
    b rfc_port_sm_execute
    blr
}

// asm_to_cpp: rfc_sec_check_complete
asm void rfc_sec_check_complete() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stb r5, 0x8(r1)
    lbz r0, 0x1(r4)
    cmpwi r0, 0x0
    beq lbl_802C9FDC
    lbz r0, 0x68(r4)
    cmplwi r0, 0x2
    beq lbl_802C9FCC
    cmplwi r0, 0x3
    beq lbl_802C9FCC
    b lbl_802C9FDC
lbl_802C9FCC:
    mr r3, r4
    addi r5, r1, 0x8
    li r4, 0xf
    bl rfc_port_sm_execute
lbl_802C9FDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_port_closed
asm void rfc_port_closed(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80457828@l
    stw r31, 0x1c(r1)
    lis r31, lbl_803780E0@ha
    addi r31, r31, lbl_803780E0@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r4)
    lwz r30, 0x6c(r3)
    cmplwi r0, 0x5
    blt lbl_802CA038
    lis r3, 0x9
    addi r4, r31, 0x68
    addi r3, r3, 0x4
    bl LogMsg_0
lbl_802CA038:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802CA05C
    lis r3, 0x9
    addi r4, r31, 0x54
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802CA05C:
    addi r3, r29, 0x70
    bl btu_stop_timer
    li r4, 0x0
    cmpwi r30, 0x0
    stb r4, 0x68(r29)
    beq lbl_802CA11C
    lbz r3, 0xd(r29)
    li r0, 0x3d
    li r5, 0x0
    add r3, r30, r3
    stb r4, 0x24(r3)
    stb r4, 0xd(r29)
    mtctr r0
lbl_802CA090:
    clrlwi r0, r5, 16
    add r3, r30, r0
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_802CA0B0
    li r0, 0x0
    stb r0, 0x74(r30)
    b lbl_802CA11C
lbl_802CA0B0:
    addi r5, r5, 0x1
    bdnz lbl_802CA090
    lbz r0, 0x74(r30)
    cmpwi r0, 0x0
    beq lbl_802CA0E0
    li r0, 0x0
    mr r3, r30
    stb r0, 0x74(r30)
    li r4, 0x8
    li r5, 0x0
    bl rfc_mx_sm_execute
    b lbl_802CA11C
lbl_802CA0E0:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802CA108
    lis r3, 0x9
    addi r4, r31, 0x10
    addi r3, r3, 0x3
    li r5, 0x2
    bl LogMsg_1
lbl_802CA108:
    stw r30, 0x10(r30)
    mr r3, r30
    li r4, 0xb
    li r5, 0x2
    bl btu_start_timer
lbl_802CA11C:
    mr r3, r29
    li r4, 0x13
    bl port_rfc_closed
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: rfc_inc_credit
asm void rfc_inc_credit(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r5, 0x6c(r3)
    lbz r0, 0x72(r5)
    cmplwi r0, 0x2
    bne lbl_802CA1BC
    lhz r0, 0x98(r3)
    lis r5, lbl_80457828@ha
    addi r5, r5, lbl_80457828@l
    add r6, r0, r4
    sth r6, 0x98(r3)
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802CA1A0
    lis r3, 0x9
    lis r4, lbl_80378158@ha
    addi r3, r3, 0x3
    clrlwi r5, r6, 16
    addi r4, r4, lbl_80378158@l
    bl LogMsg_1
lbl_802CA1A0:
    lbz r0, 0x24(r31)
    cmplwi r0, 0x1
    bne lbl_802CA1BC
    lwz r3, 0x6c(r31)
    li r5, 0x1
    lbz r4, 0xd(r31)
    bl PORT_FlowInd
lbl_802CA1BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: rfc_check_send_cmd
asm void rfc_check_send_cmd(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802CA250
    addi r3, r3, 0x18
    bl GKI_enqueue
    b lbl_802CA250
lbl_802CA234:
    addi r3, r31, 0x18
    bl GKI_dequeue
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802CA25C
    lhz r3, 0x68(r31)
    bl L2CA_DataWrite
lbl_802CA250:
    lbz r0, 0x73(r31)
    cmpwi r0, 0x0
    beq lbl_802CA234
lbl_802CA25C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
