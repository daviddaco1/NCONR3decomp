#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

u8 HID_HostOpenDev();                             /* extern */
M2C_UNK LogMsg_0();               /* extern */
M2C_UNK LogMsg_1();           /* extern */
M2C_UNK LogMsg_3(); /* extern */
M2C_UNK bta_sys_busy();          /* extern */
M2C_UNK bta_sys_idle();          /* extern */
M2C_UNK bta_sys_sco_close();     /* extern */
M2C_UNK fn_8029AB68();   /* extern */
M2C_UNK memset();             /* extern */
M2C_UNK bta_hh_cback();                             /* static */
extern M2C_UNK lbl_80373408;
extern M2C_UNK lbl_80373460;
extern M2C_UNK lbl_80373490;
extern M2C_UNK lbl_803734E0;
extern M2C_UNK lbl_80373500;
extern M2C_UNK lbl_8037354C;
extern M2C_UNK lbl_80373760;
extern M2C_UNK lbl_80373770;
extern M2C_UNK lbl_8037378C;
extern s8 lbl_80453D48;
extern M2C_UNK lbl_80456C38;
extern M2C_UNK lbl_80457040;
extern s8 *lbl_8049CF78;
extern M2C_UNK lbl_8049CFA0;
extern u8 lbl_8049E000;

void bta_hh_api_enable();
void bta_hh_api_disable();
void bta_hh_disc_cmpl();
void bta_hh_sdp_cback();
void bta_hh_start_sdp();
void bta_hh_sdp_cmpl();
void bta_hh_api_disc_act();
void bta_hh_open_cmpl_act();
void bta_hh_open_act();
void bta_hh_data_act();
void bta_hh_close_act();
void bta_hh_maint_dev_act();
void bta_hh_get_acl_q_info();
void bta_hh_write_dev_act();

// bta_hh_api_enable: definicion C reemplazada por asm (ver abajo)


// bta_hh_api_disable: definicion C reemplazada por asm (ver abajo)


// bta_hh_disc_cmpl: definicion C reemplazada por asm (ver abajo)



// bta_hh_start_sdp: definicion C reemplazada por asm (ver abajo)


// bta_hh_sdp_cmpl: definicion C reemplazada por asm (ver abajo)


// bta_hh_api_disc_act: definicion C reemplazada por asm (ver abajo)


// bta_hh_open_cmpl_act: definicion C reemplazada por asm (ver abajo)


// bta_hh_open_act: definicion C reemplazada por asm (ver abajo)


void bta_hh_data_act(s8 *arg0, s8 *arg1) {
    s8 *sp8;
    s8 *temp_r5;

    temp_r5 = M2C_FIELD(arg1, s8 **, 0xC);
    sp8 = temp_r5;
    fn_8029AB68((u8) M2C_FIELD(arg1, u16 *, 6), temp_r5 + M2C_FIELD(temp_r5, u16 *, 4) + 8, M2C_FIELD(temp_r5, u16 *, 2), M2C_FIELD(arg0, u8 *, 0x1B), M2C_FIELD(arg0, u8 *, 0x13), M2C_FIELD(arg0, u8 *, 0x15));
    fn_802A6134((s32 *) &sp8);
}

/*
Decompilation failure in function bta_hh_handsk_act:

Found bctr instruction at bta_hh_act.s line 779, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function bta_hh_ctrl_dat_act:

Found bctr instruction at bta_hh_act.s line 989, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void bta_hh_close_act(s8 *arg0, s8 *arg1);

/*
Decompilation failure in function bta_hh_get_dscp_act:

Found bctr instruction at bta_hh_act.s line 1188, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// bta_hh_maint_dev_act: definicion C reemplazada por asm (ver abajo)


// bta_hh_get_acl_q_info: definicion C reemplazada por asm (ver abajo)


void bta_hh_write_dev_act(s8 *arg0, s8 *arg1);

/*
Decompilation failure in function bta_hh_cback:

Found bctr instruction at bta_hh_act.s line 1555, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_80373660[];
extern u8 jumptable_80373688[];
extern u8 jumptable_8037370C[];
extern u8 jumptable_80373734[];
extern u8 jumptable_803738B8[];
extern u8 jumptable_803738DC[];
extern void HID_HostInit();
extern void LogMsg_2();
extern void _restgpr_27();
extern void _savegpr_27();
extern void bta_hh_add_device_to_list();
void bta_hh_api_disable(void);
void bta_hh_api_disc_act(s8 *arg0, s8 *arg1);
void bta_hh_api_enable(s8 *arg0);
M2C_UNK bta_hh_cback();
extern void bta_hh_clean_up_kdev();
void bta_hh_close_act();
extern int bta_hh_ctrl_dat_act();
void bta_hh_disc_cmpl(void);
void bta_hh_get_acl_q_info(M2C_UNK arg_sp0);
extern int bta_hh_get_dscp_act();
extern int bta_hh_handsk_act();
void bta_hh_maint_dev_act(s8 *arg0, s8 *arg1);
void bta_hh_open_act(s8 *arg0, u8 *arg1);
void bta_hh_open_cmpl_act(s8 *arg0, s8 *arg1);
void bta_hh_sdp_cback();
void bta_hh_sdp_cmpl(s8 *arg0, u8 *arg1);
extern void bta_hh_sm_execute();
void bta_hh_start_sdp(s8 *arg0, s8 *arg1);
extern void bta_hh_trace_dev_db();
void bta_hh_write_dev_act();
extern void bta_sys_conn_close();
extern void bta_sys_conn_open();
extern void bta_sys_sendmsg();
extern void fn_8029ABA4();
extern void fn_8029ABB4();
extern void fn_802A59E8();
extern void memcpy();

// asm_to_cpp: bta_hh_api_enable
asm void bta_hh_api_enable(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x6
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stb r0, 0x8(r1)
    bl HID_HostInit
    lis r31, lbl_80453D48@ha
    li r4, 0x0
    addi r3, r31, lbl_80453D48@l
    li r5, 0x230
    bl memset
    lbz r4, 0x8(r29)
    la r3, lbl_8049CFA0
    bl HID_HostSetSecurityLevel
    lis r3, bta_hh_cback@ha
    addi r3, r3, bta_hh_cback@l
    bl HID_HostRegister
    clrlwi. r0, r3, 24
    bne lbl_802A95D8
    lwz r4, 0x30(r29)
    addi r12, r31, lbl_80453D48@l
    li r3, 0x0
    li r0, 0x2
    stw r4, 0x224(r12)
    li r29, 0x0
    li r11, 0x1
    li r10, 0xff
    stb r3, 0x8(r1)
    li r9, 0x10
    mtctr r0
lbl_802A9524:
    clrlslwi r3, r29, 24, 5
    clrlwi r0, r29, 24
    add r31, r12, r3
    addi r8, r29, 0x1
    stb r11, 0x2c(r31)
    add r30, r12, r0
    addi r7, r29, 0x2
    addi r6, r29, 0x3
    stb r10, 0x26(r31)
    addi r5, r29, 0x4
    addi r4, r29, 0x5
    addi r3, r29, 0x6
    stb r29, 0x22(r31)
    addi r0, r29, 0x7
    addi r29, r29, 0x8
    stb r9, 0x214(r30)
    stb r11, 0x4c(r31)
    stb r10, 0x46(r31)
    stb r8, 0x42(r31)
    stb r9, 0x215(r30)
    stb r11, 0x6c(r31)
    stb r10, 0x66(r31)
    stb r7, 0x62(r31)
    stb r9, 0x216(r30)
    stb r11, 0x8c(r31)
    stb r10, 0x86(r31)
    stb r6, 0x82(r31)
    stb r9, 0x217(r30)
    stb r11, 0xac(r31)
    stb r10, 0xa6(r31)
    stb r5, 0xa2(r31)
    stb r9, 0x218(r30)
    stb r11, 0xcc(r31)
    stb r10, 0xc6(r31)
    stb r4, 0xc2(r31)
    stb r9, 0x219(r30)
    stb r11, 0xec(r31)
    stb r10, 0xe6(r31)
    stb r3, 0xe2(r31)
    stb r9, 0x21a(r30)
    stb r11, 0x10c(r31)
    stb r10, 0x106(r31)
    stb r0, 0x102(r31)
    stb r9, 0x21b(r30)
    bdnz lbl_802A9524
lbl_802A95D8:
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453D48@l
    li r3, 0x0
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_api_disable
asm void bta_hh_api_disable(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80453D48@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_80453D48@l
    stw r30, 0x18(r1)
    lwz r0, 0x224(r31)
    cmpwi r0, 0x0
    beq lbl_802A96FC
    lbz r0, 0x22d(r31)
    cmpwi r0, 0x0
    bne lbl_802A96C0
    li r0, 0x0
    stb r0, 0x8(r1)
    bl HID_HostDeregister
    clrlwi. r0, r3, 24
    beq lbl_802A9660
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_802A9660:
    lis r31, lbl_80453D48@ha
    li r30, 0x0
    addi r31, r31, lbl_80453D48@l
lbl_802A966C:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_802A6134
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_802A966C
    lis r31, lbl_80453D48@ha
    addi r31, r31, lbl_80453D48@l
    addi r3, r31, 0x228
    bl fn_802A6134
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
    b lbl_802A96FC
lbl_802A96C0:
    li r0, 0x1
    li r30, 0x0
    stb r0, 0x22e(r31)
lbl_802A96CC:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    lbz r0, 0x2c(r3)
    cmplwi r0, 0x3
    bne lbl_802A96F0
    addi r3, r3, 0x10
    li r4, 0x1701
    li r5, 0x0
    bl bta_hh_sm_execute
lbl_802A96F0:
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_802A96CC
lbl_802A96FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_disc_cmpl
asm void bta_hh_disc_cmpl(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stb r0, 0x8(r1)
    bl HID_HostDeregister
    clrlwi. r0, r3, 24
    beq lbl_802A9744
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_802A9744:
    lis r31, lbl_80453D48@ha
    li r30, 0x0
    addi r31, r31, lbl_80453D48@l
lbl_802A9750:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_802A6134
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_802A9750
    lis r31, lbl_80453D48@ha
    addi r31, r31, lbl_80453D48@l
    addi r3, r31, 0x228
    bl fn_802A6134
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_sdp_cback
asm void bta_hh_sdp_cback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80453D48@ha
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    li r0, 0x10
    addi r6, r6, lbl_80453D48@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stb r0, 0x8(r1)
    lwz r31, 0x210(r6)
    bne lbl_802A98B0
    lbz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_802A9804
    ori r29, r4, 0x8000
lbl_802A9804:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A982C
    lis r4, lbl_80373408@ha
    mr r6, r3
    mr r5, r31
    clrlwi r7, r29, 16
    addi r4, r4, lbl_80373408@l
    li r3, 0x503
    bl LogMsg_3
lbl_802A982C:
    lbz r4, 0x64(r30)
    mr r3, r31
    bl bta_hh_tod_spt
    clrlwi. r0, r3, 24
    beq lbl_802A98A8
    lbz r0, 0x16(r31)
    cmplwi r0, 0xff
    bne lbl_802A98B0
    addi r3, r31, 0x8
    clrlwi r4, r29, 16
    addi r5, r1, 0x9
    bl HID_HostAddDev
    clrlwi. r0, r3, 24
    stb r3, 0x8(r1)
    bne lbl_802A989C
    lis r3, lbl_80453D48@ha
    lbz r4, 0x9(r1)
    addi r3, r3, lbl_80453D48@l
    lbz r0, 0x12(r31)
    add r5, r3, r4
    addi r6, r30, 0x68
    stb r0, 0x214(r5)
    mr r3, r31
    clrlwi r5, r29, 16
    lbz r7, 0x64(r30)
    lbz r8, 0x15(r31)
    bl bta_hh_add_device_to_list
    b lbl_802A98B0
lbl_802A989C:
    li r0, 0x0
    stb r0, 0x15(r31)
    b lbl_802A98B0
lbl_802A98A8:
    li r0, 0xff
    stb r0, 0x8(r1)
lbl_802A98B0:
    lis r3, lbl_80453D48@ha
    addi r3, r3, lbl_80453D48@l
    addi r3, r3, 0x228
    bl fn_802A6134
    mr r3, r31
    addi r5, r1, 0x8
    li r4, 0x1707
    bl bta_hh_sm_execute
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_start_sdp
asm void bta_hh_start_sdp(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x10
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stb r0, 0x9(r1)
    lbz r5, 0xe(r4)
    lbz r0, 0x15(r3)
    stb r5, 0x14(r3)
    cmpwi r0, 0x0
    lbz r0, 0xf(r4)
    stb r0, 0x1b(r3)
    beq lbl_802A99C4
    lbz r0, lbl_8049E000
    li r3, 0x0
    stb r3, 0x9(r1)
    cmplwi r0, 0x5
    blt lbl_802A9954
    lis r4, lbl_80373460@ha
    li r3, 0x504
    addi r4, r4, lbl_80373460@l
    bl LogMsg_0
lbl_802A9954:
    lbz r0, 0x16(r31)
    cmplwi r0, 0xff
    bne lbl_802A99B0
    lhz r4, 0xe(r31)
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    bl HID_HostAddDev
    clrlwi. r0, r3, 24
    stb r3, 0x9(r1)
    bne lbl_802A99B0
    lbz r4, 0x8(r1)
    mr r3, r31
    lhz r5, 0xe(r31)
    li r6, 0x0
    lbz r7, 0x13(r31)
    lbz r8, 0x15(r31)
    bl bta_hh_add_device_to_list
    lis r3, lbl_80453D48@ha
    lbz r0, 0x8(r1)
    addi r3, r3, lbl_80453D48@l
    lbz r4, 0x12(r31)
    add r3, r3, r0
    stb r4, 0x214(r3)
lbl_802A99B0:
    mr r3, r31
    addi r5, r1, 0x9
    li r4, 0x1707
    bl bta_hh_sm_execute
    b lbl_802A9A64
lbl_802A99C4:
    lis r30, lbl_80453D48@ha
    addi r30, r30, lbl_80453D48@l
    lwz r0, 0x228(r30)
    cmpwi r0, 0x0
    bne lbl_802A9A48
    lwz r3, lbl_8049CF78
    lhz r3, 0x8(r3)
    bl GKI_getbuf
    stw r3, 0x228(r30)
    lis r6, bta_hh_sdp_cback@ha
    lwz r5, lbl_8049CF78
    mr r4, r3
    stw r31, 0x210(r30)
    addi r3, r29, 0x8
    addi r6, r6, bta_hh_sdp_cback@l
    lhz r5, 0x8(r5)
    bl HID_HostGetSDPRecord
    clrlwi. r5, r3, 24
    stb r3, 0x9(r1)
    beq lbl_802A9A48
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802A9A30
    lis r4, lbl_80373490@ha
    li r3, 0x504
    addi r4, r4, lbl_80373490@l
    bl LogMsg_1
lbl_802A9A30:
    li r0, 0x7
    lis r3, lbl_80453D48@ha
    addi r3, r3, lbl_80453D48@l
    stb r0, 0x9(r1)
    addi r3, r3, 0x228
    bl fn_802A6134
lbl_802A9A48:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_802A9A64
    mr r3, r31
    addi r5, r1, 0x9
    li r4, 0x1707
    bl bta_hh_sm_execute
lbl_802A9A64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_sdp_cmpl
asm void bta_hh_sdp_cmpl(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802A9AC0
    lis r4, lbl_803734E0@ha
    lbz r5, 0x0(r30)
    addi r4, r4, lbl_803734E0@l
    li r3, 0x504
    bl LogMsg_1
lbl_802A9AC0:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    lbz r0, 0x16(r29)
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    stb r0, 0xf(r1)
    bl fn_802A59E8
    lbz r31, 0x0(r30)
    cmpwi r31, 0x0
    bne lbl_802A9B54
    lbz r0, 0x19(r29)
    cmpwi r0, 0x0
    bne lbl_802A9B44
    lbz r4, 0x14(r29)
    la r3, lbl_8049CFA0
    bl HID_HostSetSecurityLevel
    lbz r3, 0x16(r29)
    bl HID_HostOpenDev
    clrlwi. r5, r3, 24
    mr r31, r3
    beq lbl_802A9B54
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802A9B38
    lis r4, lbl_80373500@ha
    li r3, 0x504
    addi r4, r4, lbl_80373500@l
    bl LogMsg_1
lbl_802A9B38:
    lbz r3, 0x16(r29)
    bl HID_HostRemoveDev
    b lbl_802A9B54
lbl_802A9B44:
    mr r3, r29
    li r4, 0x170b
    li r5, 0x0
    bl bta_hh_sm_execute
lbl_802A9B54:
    clrlwi. r0, r31, 24
    beq lbl_802A9BCC
    lbz r0, 0x0(r30)
    cmplwi r0, 0xff
    bne lbl_802A9B74
    li r0, 0xa
    stb r0, 0xe(r1)
    b lbl_802A9B7C
lbl_802A9B74:
    li r0, 0x7
    stb r0, 0xe(r1)
lbl_802A9B7C:
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453D48@l
    li r3, 0x2
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    mr r3, r29
    li r4, 0x1701
    li r5, 0x0
    bl bta_hh_sm_execute
    lbz r0, 0x15(r29)
    cmpwi r0, 0x0
    bne lbl_802A9BC8
    lbz r0, 0x19(r29)
    cmpwi r0, 0x0
    bne lbl_802A9BC8
    mr r3, r29
    bl bta_hh_clean_up_kdev
lbl_802A9BC8:
    bl bta_hh_trace_dev_db
lbl_802A9BCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_api_disc_act
asm void bta_hh_api_disc_act(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    beq lbl_802A9C08
    lhz r0, 0x6(r4)
    clrlwi r3, r0, 24
    b lbl_802A9C0C
lbl_802A9C08:
    lbz r3, 0x16(r3)
lbl_802A9C0C:
    li r0, 0x6
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    bl HID_HostCloseDev
    clrlwi. r0, r3, 24
    beq lbl_802A9C40
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453D48@l
    li r3, 0x3
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
lbl_802A9C40:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_hh_open_cmpl_act
asm void bta_hh_open_cmpl_act(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802A9C80
    lhz r0, 0x6(r4)
    clrlwi r30, r0, 24
    b lbl_802A9C84
lbl_802A9C80:
    lbz r30, 0x16(r3)
lbl_802A9C84:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    stb r30, 0xf(r1)
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    bl fn_802A59E8
    lis r31, lbl_80453D48@ha
    addi r31, r31, lbl_80453D48@l
    lbz r3, 0x22d(r31)
    addi r0, r3, 0x1
    stb r0, 0x22d(r31)
    lbz r3, 0x16(r29)
    lbz r4, 0x13(r29)
    lhz r5, 0xe(r29)
    lbz r6, 0x15(r29)
    bl fn_8029ABA4
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl bta_sys_conn_open
    lbz r5, 0x1b(r29)
    cmpwi r5, 0x0
    beq lbl_802A9D38
    mr r3, r30
    li r4, 0x7
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl HID_HostWriteDev
    clrlwi. r0, r3, 24
    stb r3, 0xe(r1)
    beq lbl_802A9D2C
    lwz r12, 0x224(r31)
    li r0, 0x8
    stb r0, 0xe(r1)
    addi r4, r1, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    b lbl_802A9D54
lbl_802A9D2C:
    li r0, 0x2
    sth r0, 0x10(r29)
    b lbl_802A9D54
lbl_802A9D38:
    li r0, 0x1
    addi r4, r1, 0x8
    stb r0, 0x1a(r29)
    li r3, 0x2
    lwz r12, 0x224(r31)
    mtctr r12
    bctrl
lbl_802A9D54:
    li r0, 0x0
    stb r0, 0x19(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_open_act
asm void bta_hh_open_act(s8 *arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_802A9DA8
    lhz r0, 0x6(r4)
    clrlwi r5, r0, 24
    b lbl_802A9DAC
lbl_802A9DA8:
    lbz r5, 0x16(r3)
lbl_802A9DAC:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A9DC8
    lis r4, lbl_8037354C@ha
    li r3, 0x503
    addi r4, r4, lbl_8037354C@l
    bl LogMsg_1
lbl_802A9DC8:
    lbz r0, 0x15(r30)
    cmpwi r0, 0x0
    beq lbl_802A9DE8
    mr r3, r30
    mr r5, r31
    li r4, 0x170b
    bl bta_hh_sm_execute
    b lbl_802A9E18
lbl_802A9DE8:
    li r0, 0x1
    addi r3, r1, 0x8
    stb r0, 0x19(r30)
    li r4, 0x0
    li r5, 0x10
    bl memset
    addi r3, r1, 0x10
    addi r4, r30, 0x8
    bl fn_802A59E8
    mr r3, r30
    addi r4, r1, 0x8
    bl bta_hh_start_sdp
lbl_802A9E18:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_handsk_act
asm int bta_hh_handsk_act() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    lis r30, lbl_80373408@ha
    addi r30, r30, lbl_80373408@l
    stw r29, 0x34(r1)
    mr r29, r4
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802A9F2C
    lhz r0, 0x10(r3)
    cmplwi r0, 0x9
    bgt lbl_802A9F18
    lis r3, jumptable_80373688@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80373688@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r30, 0x16c
    b lbl_802A9F1C
    addi r5, r30, 0x180
    b lbl_802A9F1C
    addi r5, r30, 0x194
    b lbl_802A9F1C
    addi r5, r30, 0x1ac
    b lbl_802A9F1C
    addi r5, r30, 0x1c4
    b lbl_802A9F1C
    addi r5, r30, 0x1d8
    b lbl_802A9F1C
    addi r5, r30, 0x1f0
    b lbl_802A9F1C
lbl_802A9F18:
    addi r5, r30, 0x200
lbl_802A9F1C:
    lwz r6, 0x8(r29)
    addi r4, r30, 0x210
    li r3, 0x504
    bl LogMsg_2
lbl_802A9F2C:
    lhz r0, 0x10(r31)
    cmplwi r0, 0x9
    bgt lbl_802AA0AC
    lis r3, jumptable_80373660@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80373660@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0xa
    bl memset
    lbz r0, 0x16(r31)
    stb r0, 0x19(r1)
    lwz r0, 0x8(r29)
    cmpwi r0, 0x5
    bge lbl_802A9F84
    cmpwi r0, 0x0
    beq lbl_802A9F90
    bge lbl_802A9F98
    b lbl_802A9FA0
lbl_802A9F84:
    cmpwi r0, 0x10
    bge lbl_802A9FA0
    b lbl_802A9FA0
lbl_802A9F90:
    li r0, 0x0
    b lbl_802A9FA4
lbl_802A9F98:
    clrlwi r0, r0, 24
    b lbl_802A9FA4
lbl_802A9FA0:
    li r0, 0x5
lbl_802A9FA4:
    lis r3, lbl_80453D48@ha
    stb r0, 0x18(r1)
    addi r3, r3, lbl_80453D48@l
    addi r4, r1, 0x18
    lwz r12, 0x224(r3)
    lhz r3, 0x10(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    sth r0, 0x10(r31)
    b lbl_802AA0C4
    lbz r0, 0x16(r31)
    stb r0, 0x9(r1)
    lwz r0, 0x8(r29)
    cmpwi r0, 0x5
    bge lbl_802A9FF4
    cmpwi r0, 0x0
    beq lbl_802AA000
    bge lbl_802AA008
    b lbl_802AA010
lbl_802A9FF4:
    cmpwi r0, 0x10
    bge lbl_802AA010
    b lbl_802AA010
lbl_802AA000:
    li r0, 0x0
    b lbl_802AA014
lbl_802AA008:
    clrlwi r0, r0, 24
    b lbl_802AA014
lbl_802AA010:
    li r0, 0x5
lbl_802AA014:
    lis r3, lbl_80453D48@ha
    stb r0, 0x8(r1)
    addi r3, r3, lbl_80453D48@l
    addi r4, r1, 0x8
    lwz r12, 0x224(r3)
    lhz r3, 0x10(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    sth r0, 0x10(r31)
    b lbl_802AA0C4
    lwz r0, 0x8(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    beq lbl_802AA054
    li r3, 0x8
lbl_802AA054:
    stb r3, 0x16(r1)
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    lbz r0, 0x16(r31)
    stb r0, 0x17(r1)
    bl fn_802A59E8
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_80453D48@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    bl bta_hh_trace_dev_db
    li r0, 0x0
    sth r0, 0x10(r31)
    lbz r0, 0x16(r1)
    cmpwi r0, 0x0
    bne lbl_802AA0C4
    li r0, 0x1
    stb r0, 0x1a(r31)
    b lbl_802AA0C4
lbl_802AA0AC:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AA0C4
    addi r4, r30, 0x23c
    li r3, 0x504
    bl LogMsg_0
lbl_802AA0C4:
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl bta_sys_idle
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: bta_hh_ctrl_dat_act
asm int bta_hh_ctrl_dat_act() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lis r29, lbl_80373408@ha
    addi r29, r29, lbl_80373408@l
    lwz r4, 0xc(r4)
    lbz r0, lbl_8049E000
    stw r4, 0x8(r1)
    cmplwi r0, 0x5
    lhz r0, 0x4(r4)
    add r30, r4, r0
    blt lbl_802AA19C
    lhz r0, 0x10(r3)
    cmplwi r0, 0x9
    bgt lbl_802AA18C
    lis r3, jumptable_80373734@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80373734@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r29, 0x16c
    b lbl_802AA190
    addi r5, r29, 0x180
    b lbl_802AA190
    addi r5, r29, 0x194
    b lbl_802AA190
    addi r5, r29, 0x1ac
    b lbl_802AA190
    addi r5, r29, 0x1c4
    b lbl_802AA190
    addi r5, r29, 0x1d8
    b lbl_802AA190
    addi r5, r29, 0x1f0
    b lbl_802AA190
lbl_802AA18C:
    addi r5, r29, 0x200
lbl_802AA190:
    addi r4, r29, 0x2a8
    li r3, 0x504
    bl LogMsg_1
lbl_802AA19C:
    li r0, 0x0
    stb r0, 0xc(r1)
    lbz r0, 0x16(r31)
    stb r0, 0xd(r1)
    lhz r4, 0x10(r31)
    cmpwi r4, 0x7
    beq lbl_802AA20C
    bge lbl_802AA1D4
    cmpwi r4, 0x5
    beq lbl_802AA20C
    bge lbl_802AA200
    cmpwi r4, 0x4
    bge lbl_802AA1EC
    b lbl_802AA20C
lbl_802AA1D4:
    cmpwi r4, 0x9
    beq lbl_802AA20C
    bge lbl_802AA20C
    lbz r0, 0x8(r30)
    stb r0, 0xe(r1)
    b lbl_802AA280
lbl_802AA1EC:
    lwz r4, 0x8(r1)
    addi r3, r1, 0xe
    li r5, 0x8
    bl memcpy
    b lbl_802AA280
lbl_802AA200:
    lbz r0, 0x8(r30)
    stb r0, 0xe(r1)
    b lbl_802AA280
lbl_802AA20C:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AA280
    cmplwi r4, 0x9
    bgt lbl_802AA270
    lis r3, jumptable_8037370C@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_8037370C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r29, 0x16c
    b lbl_802AA274
    addi r5, r29, 0x180
    b lbl_802AA274
    addi r5, r29, 0x194
    b lbl_802AA274
    addi r5, r29, 0x1ac
    b lbl_802AA274
    addi r5, r29, 0x1c4
    b lbl_802AA274
    addi r5, r29, 0x1d8
    b lbl_802AA274
    addi r5, r29, 0x1f0
    b lbl_802AA274
lbl_802AA270:
    addi r5, r29, 0x200
lbl_802AA274:
    addi r4, r29, 0x2cc
    li r3, 0x504
    bl LogMsg_1
lbl_802AA280:
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl bta_sys_busy
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl bta_sys_idle
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0xc
    addi r5, r5, lbl_80453D48@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    li r0, 0x0
    addi r3, r1, 0x8
    sth r0, 0x10(r31)
    bl fn_802A6134
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: bta_hh_close_act
asm void bta_hh_close_act() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x3
    sth r0, 0xc(r1)
    lbz r0, 0x17(r3)
    lwz r6, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_802AA320
    li r30, 0xd
lbl_802AA320:
    lbz r5, 0x16(r3)
    rlwinm. r0, r6, 0, 21, 23
    stb r5, 0xd(r1)
    lwz r0, 0x8(r4)
    stb r0, 0xc(r1)
    bne lbl_802AA354
    cmplwi r6, 0xf
    beq lbl_802AA354
    cmplwi r6, 0xe
    beq lbl_802AA354
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    bne lbl_802AA3A8
lbl_802AA354:
    lbz r3, 0x16(r3)
    cmplwi r6, 0xf
    li r0, 0x6
    stb r3, 0x17(r1)
    bne lbl_802AA36C
    li r0, 0xc
lbl_802AA36C:
    stb r0, 0x16(r1)
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    bl fn_802A59E8
    lbz r3, 0x16(r31)
    bl HID_HostCloseDev
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_80453D48@l
    li r3, 0x2
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    bl bta_hh_trace_dev_db
    b lbl_802AA4D0
lbl_802AA3A8:
    lbz r3, 0x16(r3)
    lbz r4, 0x15(r31)
    bl fn_8029ABB4
    lbz r4, 0x15(r31)
    addi r5, r31, 0x8
    li r3, 0x17
    bl bta_sys_conn_close
    lis r4, lbl_80453D48@ha
    li r0, 0x0
    addi r4, r4, lbl_80453D48@l
    lbz r3, 0x22d(r4)
    subi r3, r3, 0x1
    stb r3, 0x22d(r4)
    stb r0, 0x1a(r31)
    lbz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_802AA3F4
    li r0, 0x6
    stb r0, 0xc(r1)
lbl_802AA3F4:
    lis r5, lbl_80453D48@ha
    mr r3, r30
    addi r5, r5, lbl_80453D48@l
    addi r4, r1, 0xc
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lbz r0, 0x17(r31)
    cmpwi r0, 0x0
    beq lbl_802AA42C
    lbz r3, 0x16(r31)
    bl HID_HostRemoveDev
    mr r3, r31
    bl bta_hh_clean_up_kdev
lbl_802AA42C:
    bl bta_hh_trace_dev_db
    li r4, 0x0
    lis r3, lbl_80453D48@ha
    stb r4, 0x17(r31)
    addi r3, r3, lbl_80453D48@l
    sth r4, 0x10(r31)
    lbz r0, 0x22d(r3)
    cmpwi r0, 0x0
    bne lbl_802AA4D0
    lbz r0, 0x22e(r3)
    cmpwi r0, 0x0
    beq lbl_802AA4D0
    stb r4, 0x8(r1)
    bl HID_HostDeregister
    clrlwi. r0, r3, 24
    beq lbl_802AA474
    li r0, 0x6
    stb r0, 0x8(r1)
lbl_802AA474:
    lis r31, lbl_80453D48@ha
    li r30, 0x0
    addi r31, r31, lbl_80453D48@l
lbl_802AA480:
    clrlslwi r0, r30, 24, 5
    add r3, r31, r0
    addi r3, r3, 0x14
    bl fn_802A6134
    addi r30, r30, 0x1
    cmplwi r30, 0x10
    blt lbl_802AA480
    lis r31, lbl_80453D48@ha
    addi r31, r31, lbl_80453D48@l
    addi r3, r31, 0x228
    bl fn_802A6134
    lwz r12, 0x224(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    mtctr r12
    bctrl
    mr r3, r31
    li r4, 0x0
    li r5, 0x230
    bl memset
lbl_802AA4D0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_get_dscp_act
asm int bta_hh_get_dscp_act() {
    nofralloc
    lis r5, lbl_80453D48@ha
    mr r4, r3
    addi r5, r5, lbl_80453D48@l
    li r3, 0xa
    lwz r12, 0x224(r5)
    mtctr r12
    bctr
}

// asm_to_cpp: bta_hh_maint_dev_act
asm void bta_hh_maint_dev_act(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x24(r1)
    li r0, 0xff
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stb r5, 0x16(r1)
    stb r0, 0x17(r1)
    lhz r0, 0x10(r4)
    cmpwi r0, 0xc
    beq lbl_802AA5D4
    bge lbl_802AA618
    cmpwi r0, 0xb
    bge lbl_802AA54C
    b lbl_802AA618
lbl_802AA54C:
    addi r3, r1, 0x10
    addi r4, r4, 0x8
    bl fn_802A59E8
    lbz r3, 0x16(r30)
    cmplwi r3, 0xff
    bne lbl_802AA5C0
    lhz r4, 0xe(r31)
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    bl HID_HostAddDev
    clrlwi. r0, r3, 24
    bne lbl_802AA5CC
    lbz r4, 0x8(r1)
    li r0, 0x0
    stb r0, 0x16(r1)
    mr r3, r30
    li r6, 0x0
    stb r4, 0x17(r1)
    lhz r5, 0xe(r31)
    lbz r7, 0x12(r31)
    lbz r8, 0x13(r31)
    bl bta_hh_add_device_to_list
    lis r3, lbl_80453D48@ha
    lbz r0, 0x8(r1)
    addi r3, r3, lbl_80453D48@l
    lbz r4, 0x12(r30)
    add r3, r3, r0
    stb r4, 0x214(r3)
    b lbl_802AA5CC
lbl_802AA5C0:
    li r0, 0x0
    stb r3, 0x17(r1)
    stb r0, 0x16(r1)
lbl_802AA5CC:
    bl bta_hh_trace_dev_db
    b lbl_802AA634
lbl_802AA5D4:
    lhz r0, 0x6(r4)
    addi r3, r1, 0x10
    addi r4, r30, 0x8
    stb r0, 0x17(r1)
    bl fn_802A59E8
    lbz r0, 0x1c(r30)
    cmplwi r0, 0x3
    beq lbl_802AA634
    lbz r3, 0x17(r1)
    bl HID_HostRemoveDev
    clrlwi. r0, r3, 24
    bne lbl_802AA634
    li r0, 0x0
    mr r3, r30
    stb r0, 0x16(r1)
    bl bta_hh_clean_up_kdev
    b lbl_802AA634
lbl_802AA618:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AA634
    lis r4, lbl_80373760@ha
    li r3, 0x504
    addi r4, r4, lbl_80373760@l
    bl LogMsg_0
lbl_802AA634:
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x10
    addi r5, r5, lbl_80453D48@l
    lhz r3, 0x10(r31)
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_get_acl_q_info
asm void bta_hh_get_acl_q_info(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    addi r3, r1, 0x8
    li r31, 0x0
    li r4, 0x0
    li r5, 0x1e
    bl memset
    lis r30, lbl_80456C38@ha
    lis r29, lbl_80453D48@ha
    addi r30, r30, lbl_80456C38@l
    li r27, 0x0
    addi r29, r29, lbl_80453D48@l
lbl_802AA6A4:
    clrlslwi r0, r27, 24, 5
    add r3, r29, r0
    lbz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_802AA724
    lbz r0, 0x2c(r3)
    cmplwi r0, 0x3
    bne lbl_802AA724
    lbz r4, 0x26(r3)
    clrlwi r0, r31, 24
    mulli r5, r0, 0x6
    addi r28, r1, 0x8
    li r3, 0x0
    add r28, r28, r5
    mulli r0, r4, 0x34
    stb r4, 0x6(r28)
    add r4, r30, r0
    lhz r4, 0x16(r4)
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802AA720
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_802AA720
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802AA720
    lhz r0, 0x4c(r3)
    sth r0, 0x8(r28)
    lhz r0, 0x38(r3)
    sth r0, 0xa(r28)
lbl_802AA720:
    addi r31, r31, 0x1
lbl_802AA724:
    addi r27, r27, 0x1
    cmplwi r27, 0x10
    blt lbl_802AA6A4
    lis r4, lbl_80457040@ha
    lis r3, lbl_80453D48@ha
    addi r4, r4, lbl_80457040@l
    clrlwi r0, r31, 24
    addi r3, r3, lbl_80453D48@l
    lhz r6, 0x4(r4)
    lhz r5, 0x2(r4)
    addi r4, r1, 0x8
    lwz r12, 0x224(r3)
    li r3, 0xf
    sth r6, 0x8(r1)
    sth r5, 0xa(r1)
    sth r0, 0xc(r1)
    mtctr r12
    bctrl
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: bta_hh_write_dev_act
asm void bta_hh_write_dev_act() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    sth r0, 0x8(r1)
    lbz r31, 0x8(r4)
    lbz r0, 0x16(r3)
    stb r0, 0x9(r1)
    lbz r3, 0x16(r3)
    lbz r4, 0x8(r4)
    lbz r5, 0x9(r30)
    lhz r6, 0xc(r30)
    lbz r7, 0xa(r30)
    lwz r8, 0x10(r30)
    bl HID_HostWriteDev
    clrlwi. r5, r3, 24
    beq lbl_802AA860
    lbz r0, lbl_8049E000
    cmplwi r0, 0x1
    blt lbl_802AA7F8
    lis r4, lbl_80373770@ha
    li r3, 0x500
    addi r4, r4, lbl_80373770@l
    bl LogMsg_1
lbl_802AA7F8:
    li r0, 0x6
    stb r0, 0x8(r1)
    lbz r0, 0x8(r30)
    cmplwi r0, 0x1
    beq lbl_802AA834
    cmplwi r0, 0xa
    beq lbl_802AA834
    lis r5, lbl_80453D48@ha
    mr r3, r31
    addi r5, r5, lbl_80453D48@l
    addi r4, r1, 0x8
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_802AA930
lbl_802AA834:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x5
    bne lbl_802AA930
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453D48@l
    li r3, 0xd
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_802AA930
lbl_802AA860:
    lbz r5, 0x8(r30)
    cmpwi r5, 0xa
    beq lbl_802AA894
    bge lbl_802AA8AC
    cmpwi r5, 0x1
    beq lbl_802AA894
    blt lbl_802AA8AC
    cmpwi r5, 0x4
    bge lbl_802AA88C
    b lbl_802AA8AC
    b lbl_802AA8AC
lbl_802AA88C:
    sth r31, 0x10(r29)
    b lbl_802AA8C8
lbl_802AA894:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x5
    bne lbl_802AA8C8
    li r0, 0x1
    stb r0, 0x17(r29)
    b lbl_802AA8C8
lbl_802AA8AC:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AA8C8
    lis r4, lbl_8037378C@ha
    li r3, 0x504
    addi r4, r4, lbl_8037378C@l
    bl LogMsg_1
lbl_802AA8C8:
    lbz r0, 0x8(r30)
    cmplwi r0, 0x1
    beq lbl_802AA8F8
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl bta_sys_busy
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl bta_sys_idle
    b lbl_802AA930
lbl_802AA8F8:
    lbz r0, 0x9(r30)
    cmplwi r0, 0x3
    bne lbl_802AA918
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl bta_sys_sco_close
    b lbl_802AA930
lbl_802AA918:
    cmplwi r0, 0x4
    bne lbl_802AA930
    lbz r4, 0x15(r29)
    addi r5, r29, 0x8
    li r3, 0x17
    bl bta_sys_busy
lbl_802AA930:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_hh_cback
asm M2C_UNK bta_hh_cback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80373408@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80373408@l
    stw r31, 0x1c(r1)
    li r31, 0x1710
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, lbl_8049E000
    stw r6, 0x8(r1)
    cmplwi r0, 0x5
    blt lbl_802AAA08
    cmplwi r4, 0x8
    bgt lbl_802AA9F8
    lis r3, jumptable_803738DC@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_803738DC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r5, r7, 0x3ac
    b lbl_802AA9FC
    addi r5, r7, 0x3c0
    b lbl_802AA9FC
    addi r5, r7, 0x3d4
    b lbl_802AA9FC
    addi r5, r7, 0x3ec
    b lbl_802AA9FC
    addi r5, r7, 0x404
    b lbl_802AA9FC
    addi r5, r7, 0x41c
    b lbl_802AA9FC
    addi r5, r7, 0x434
    b lbl_802AA9FC
    addi r5, r7, 0x44c
    b lbl_802AA9FC
    addi r5, r7, 0x464
    b lbl_802AA9FC
lbl_802AA9F8:
    addi r5, r7, 0x47c
lbl_802AA9FC:
    addi r4, r7, 0x490
    li r3, 0x504
    bl LogMsg_1
lbl_802AAA08:
    cmplwi r29, 0x8
    bgt lbl_802AAB94
    lis r3, jumptable_803738B8@ha
    slwi r0, r29, 2
    addi r3, r3, jumptable_803738B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r31, 0x1702
    b lbl_802AAB94
    li r31, 0x1703
    b lbl_802AAB94
    li r31, 0x1704
    b lbl_802AAB94
    li r31, 0x1706
    b lbl_802AAB94
    li r31, 0x1705
    b lbl_802AAB94
    addi r3, r1, 0x8
    bl fn_802A6134
    b lbl_802AAB94
    lis r4, lbl_80453D48@ha
    li r0, 0x2
    addi r4, r4, lbl_80453D48@l
    li r5, 0x0
    mtctr r0
lbl_802AAA70:
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAA90
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAA90:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAAB4
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAAB4:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAAD8
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAAD8:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAAFC
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAAFC:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAB20
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAB20:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAB44
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAB44:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAB68
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAB68:
    addi r5, r5, 0x1
    clrlslwi r0, r5, 24, 5
    add r3, r4, r0
    lbz r0, 0x26(r3)
    cmplw r28, r0
    bne lbl_802AAB8C
    li r0, 0x1
    stb r0, 0x27(r3)
    b lbl_802AAB94
lbl_802AAB8C:
    addi r5, r5, 0x1
    bdnz lbl_802AAA70
lbl_802AAB94:
    cmplwi r31, 0x1710
    beq lbl_802AABC4
    li r3, 0x18
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802AABC4
    sth r31, 0x0(r3)
    sth r28, 0x6(r3)
    stw r30, 0x8(r3)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r3)
    bl bta_sys_sendmsg
lbl_802AABC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
