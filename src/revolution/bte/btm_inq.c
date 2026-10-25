#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();               /* extern */
M2C_UNK LogMsg_1();               /* extern */
M2C_UNK LogMsg_2();       /* extern */
M2C_UNK LogMsg_3(); /* extern */
M2C_UNK LogMsg_4(); /* extern */
M2C_UNK LogMsg_6(); /* extern */
M2C_UNK memcpy();                /* extern */
M2C_UNK memset();           /* extern */
extern M2C_UNK lbl_80374550;
extern M2C_UNK lbl_803745AC;
extern M2C_UNK lbl_80374600;
extern M2C_UNK lbl_8037461C;
extern M2C_UNK lbl_80374654;
extern M2C_UNK lbl_80374694;
extern M2C_UNK lbl_803746B4;
extern M2C_UNK lbl_803746E8;
extern M2C_UNK lbl_80374724;
extern u8 lbl_80453F78[];
extern u8 lbl_804A2540;
extern u8 lbl_804A2544;

s32 BTM_SetDiscoverability();
s32 BTM_SetInquiryScanType();
s32 BTM_SetPageScanType();
s32 BTM_SetInquiryMode();
s32 BTM_SetConnectability();
u8 BTM_IsInquiryActive();
s32 BTM_CancelInquiry();
u8 BTM_StartInquiry();
s32 BTM_ReadRemoteDeviceName();
s32 BTM_CancelRemoteDeviceName();
s8 * BTM_InqDbRead();
s8 * BTM_InqDbFirst();
s8 * BTM_InqDbNext();
s32 BTM_ClearInqDb();
void btm_inq_db_reset();
void btm_inq_db_init();
u8 btm_inq_find_bdaddr();
s8 * btm_inq_db_new();
u8 btm_set_inq_event_filter();
void btm_event_filter_complete();
void btm_process_inq_results();
void btm_process_inq_complete();
s32 btm_initiate_rem_name();
void btm_process_remote_name();
void btm_inq_rmt_name_failed();


// BTM_SetInquiryScanType: definicion C reemplazada por asm (ver abajo)


// BTM_SetPageScanType: definicion C reemplazada por asm (ver abajo)


// BTM_SetInquiryMode: definicion C reemplazada por asm (ver abajo)



// BTM_IsInquiryActive: definicion C reemplazada por asm (ver abajo)


// BTM_CancelInquiry: definicion C reemplazada por asm (ver abajo)


// BTM_StartInquiry: definicion C reemplazada por asm (ver abajo)


// BTM_ReadRemoteDeviceName: definicion C reemplazada por asm (ver abajo)


// BTM_CancelRemoteDeviceName: definicion C reemplazada por asm (ver abajo)


// BTM_InqDbRead: definicion C reemplazada por asm (ver abajo)


// BTM_InqDbFirst: definicion C reemplazada por asm (ver abajo)


s8 *BTM_InqDbNext(s32 arg0);

// BTM_ClearInqDb: definicion C reemplazada por asm (ver abajo)


// btm_inq_db_reset: definicion C reemplazada por asm (ver abajo)


void btm_inq_db_init(s32 arg0) {

}

// btm_inq_find_bdaddr: definicion C reemplazada por asm (ver abajo)


// btm_inq_db_new: definicion C reemplazada por asm (ver abajo)


// btm_set_inq_event_filter: definicion C reemplazada por asm (ver abajo)


void btm_event_filter_complete(u8 *arg0);

void btm_process_inq_results(u8 *arg0, s32 arg1, M2C_UNK arg_sp0);

// btm_process_inq_complete: definicion C reemplazada por asm (ver abajo)


// btm_initiate_rem_name: definicion C reemplazada por asm (ver abajo)



void btm_inq_rmt_name_failed(void) {
    btm_process_remote_name(0, NULL, 0U, 0x1F);
    btm_sec_rmt_name_request_complete(0, NULL, 0x1F);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
s32 BTM_CancelInquiry(void);
s32 BTM_CancelRemoteDeviceName(void);
s32 BTM_ClearInqDb(u8 *arg0, M2C_UNK arg_sp0);
s8 *BTM_InqDbFirst(void);
s8 * BTM_InqDbNext();
s8 *BTM_InqDbRead(u8 *arg0);
u8 BTM_IsInquiryActive(void);
s32 BTM_ReadRemoteDeviceName(u8 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 BTM_SetConnectability();
s32 BTM_SetDiscoverability();
s32 BTM_SetInquiryMode(s32 arg0);
s32 BTM_SetInquiryScanType(s32 arg0);
s32 BTM_SetPageScanType(s32 arg0);
u8 BTM_StartInquiry(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void GKI_freebuf();
extern void _restgpr_16();
extern void _restgpr_23();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_16();
extern void _savegpr_23();
extern void _savegpr_26();
extern void _savegpr_27();
void btm_event_filter_complete();
s32 btm_initiate_rem_name(u8 *arg0, s8 *arg1, u32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);
s8 *btm_inq_db_new(u8 *arg0);
void btm_inq_db_reset(M2C_UNK arg_sp0);
u8 btm_inq_find_bdaddr(u8 *arg0, M2C_UNK arg_sp0);
void btm_process_inq_complete(s32 arg0);
void btm_process_inq_results();
void btm_process_remote_name();
u8 btm_set_inq_event_filter(s32 arg0, u8 *arg1, M2C_UNK arg_sp0);
extern void btsnd_hcic_set_event_filter();
extern void btsnd_hcic_write_cur_iac_lap();
extern void btsnd_hcic_write_inqscan_cfg();
extern void btsnd_hcic_write_inqscan_type();
extern void btsnd_hcic_write_inquiry_mode();
extern void btsnd_hcic_write_pagescan_cfg();
extern void btsnd_hcic_write_pagescan_type();
extern void btsnd_hcic_write_scan_enable();
extern void btu_start_timer();
extern void btu_stop_timer();

// asm_to_cpp: BTM_SetDiscoverability
asm s32 BTM_SetDiscoverability() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r31, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    beq lbl_802AF7C4
    cmplwi r3, 0x1
    beq lbl_802AF7C4
    cmplwi r3, 0x2
    beq lbl_802AF7C4
    li r3, 0x5
    b lbl_802AF9EC
lbl_802AF7C4:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x64e(r3)
    cmplwi r0, 0x3
    bge lbl_802AF7E0
    li r3, 0xc
    b lbl_802AF9EC
lbl_802AF7E0:
    cmpwi r4, 0x0
    bne lbl_802AF7EC
    li r27, 0x12
lbl_802AF7EC:
    cmpwi r5, 0x0
    bne lbl_802AF7F8
    li r28, 0x800
lbl_802AF7F8:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AF82C
    lis r3, 0xd
    lis r4, lbl_80374550@ha
    mr r5, r31
    mr r6, r27
    mr r7, r28
    addi r3, r3, 0x2
    addi r4, r4, lbl_80374550@l
    bl LogMsg_3
lbl_802AF82C:
    cmpwi r31, 0x0
    beq lbl_802AF864
    cmplwi r27, 0x12
    blt lbl_802AF85C
    cmplwi r27, 0x1000
    bgt lbl_802AF85C
    cmplwi r28, 0x12
    blt lbl_802AF85C
    cmplwi r28, 0x1000
    bgt lbl_802AF85C
    cmplw r27, r28
    ble lbl_802AF864
lbl_802AF85C:
    li r3, 0x5
    b lbl_802AF9EC
lbl_802AF864:
    cmpwi r31, 0x0
    beq lbl_802AF8D8
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802AF8D0
    clrlwi. r0, r31, 31
    beq lbl_802AF8BC
    addi r3, r1, 0xc
    la r4, lbl_804A2544
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0xf
    la r4, lbl_804A2540
    li r5, 0x3
    bl memcpy
    mr r3, r29
    addi r5, r1, 0xc
    li r4, 0x2
    bl btsnd_hcic_write_cur_iac_lap
    b lbl_802AF8C8
lbl_802AF8BC:
    li r4, 0x1
    la r5, lbl_804A2540
    bl btsnd_hcic_write_cur_iac_lap
lbl_802AF8C8:
    ori r30, r30, 0x1
    b lbl_802AF8D8
lbl_802AF8D0:
    li r3, 0x3
    b lbl_802AF9EC
lbl_802AF8D8:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lhz r0, 0x16a0(r3)
    cmplw r27, r0
    bne lbl_802AF8F8
    lhz r0, 0x16a2(r3)
    cmplw r28, r0
    beq lbl_802AF930
lbl_802AF8F8:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AF928
    lis r6, lbl_80453F78@ha
    mr r4, r28
    addi r6, r6, lbl_80453F78@l
    mr r5, r27
    sth r27, 0x16a0(r6)
    sth r28, 0x16a2(r6)
    bl btsnd_hcic_write_inqscan_cfg
    b lbl_802AF930
lbl_802AF928:
    li r3, 0x3
    b lbl_802AF9EC
lbl_802AF930:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AF974
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lhz r0, 0x169a(r4)
    cmpwi r0, 0x0
    beq lbl_802AF95C
    ori r0, r30, 0x2
    clrlwi r30, r0, 24
lbl_802AF95C:
    lis r5, lbl_80453F78@ha
    clrlwi r4, r30, 24
    addi r5, r5, lbl_80453F78@l
    sth r31, 0x1698(r5)
    bl btsnd_hcic_write_scan_enable
    b lbl_802AF97C
lbl_802AF974:
    li r3, 0x3
    b lbl_802AF9EC
lbl_802AF97C:
    bl BTM_ReadDeviceClass
    lbz r4, 0x0(r3)
    clrlwi r6, r31, 31
    lbz r5, 0x1(r3)
    clrlslwi r4, r4, 24, 8
    rlwinm r0, r5, 0, 24, 26
    add r4, r4, r0
    extrwi r0, r4, 1, 26
    xor. r0, r6, r0
    clrlwi r4, r4, 16
    beq lbl_802AF9E8
    lbz r3, 0x2(r3)
    cmpwi r6, 0x0
    rlwinm r0, r4, 0, 27, 25
    clrlwi r5, r5, 27
    rlwinm r6, r3, 0, 24, 29
    clrlwi r0, r0, 16
    beq lbl_802AF9C8
    ori r0, r4, 0x20
lbl_802AF9C8:
    rlwinm r3, r0, 0, 24, 26
    extrwi r0, r0, 8, 16
    add r4, r5, r3
    stb r6, 0xa(r1)
    addi r3, r1, 0x8
    stb r4, 0x9(r1)
    stb r0, 0x8(r1)
    bl BTM_SetDeviceClass
lbl_802AF9E8:
    li r3, 0x0
lbl_802AF9EC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: BTM_SetInquiryScanType
asm s32 BTM_SetInquiryScanType(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802AFA34
    cmplwi r3, 0x1
    beq lbl_802AFA34
    li r3, 0x5
    b lbl_802AFA9C
lbl_802AFA34:
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_802AFA50
    li r3, 0x4
    b lbl_802AFA9C
lbl_802AFA50:
    lhz r0, 0x16a4(r31)
    cmplw r3, r0
    beq lbl_802AFA98
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    beq lbl_802AFA90
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AFA88
    clrlwi r4, r30, 24
    bl btsnd_hcic_write_inqscan_type
    sth r30, 0x16a4(r31)
    b lbl_802AFA98
lbl_802AFA88:
    li r3, 0x3
    b lbl_802AFA9C
lbl_802AFA90:
    li r3, 0x6
    b lbl_802AFA9C
lbl_802AFA98:
    li r3, 0x0
lbl_802AFA9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTM_SetPageScanType
asm s32 BTM_SetPageScanType(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802AFAE4
    cmplwi r3, 0x1
    beq lbl_802AFAE4
    li r3, 0x5
    b lbl_802AFB4C
lbl_802AFAE4:
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_802AFB00
    li r3, 0x4
    b lbl_802AFB4C
lbl_802AFB00:
    lhz r0, 0x16a6(r31)
    cmplw r3, r0
    beq lbl_802AFB48
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    beq lbl_802AFB40
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AFB38
    clrlwi r4, r30, 24
    bl btsnd_hcic_write_pagescan_type
    sth r30, 0x16a6(r31)
    b lbl_802AFB48
lbl_802AFB38:
    li r3, 0x3
    b lbl_802AFB4C
lbl_802AFB40:
    li r3, 0x6
    b lbl_802AFB4C
lbl_802AFB48:
    li r3, 0x0
lbl_802AFB4C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTM_SetInquiryMode
asm s32 BTM_SetInquiryMode(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802AFB90
    cmplwi r3, 0x1
    beq lbl_802AFB90
    li r3, 0x5
    b lbl_802AFBE8
lbl_802AFB90:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x643(r3)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_802AFBAC
    li r3, 0x4
    b lbl_802AFBE8
lbl_802AFBAC:
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    bne lbl_802AFBC0
    li r3, 0x6
    b lbl_802AFBE8
lbl_802AFBC0:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AFBDC
    mr r4, r31
    bl btsnd_hcic_write_inquiry_mode
    b lbl_802AFBE4
lbl_802AFBDC:
    li r3, 0x3
    b lbl_802AFBE8
lbl_802AFBE4:
    li r3, 0x0
lbl_802AFBE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTM_SetConnectability
asm s32 BTM_SetConnectability() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    lis r31, lbl_80453F78@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_80453F78@l
    li r30, 0x0
    beq lbl_802AFC40
    cmplwi r3, 0x1
    beq lbl_802AFC40
    li r3, 0x5
    b lbl_802AFD6C
lbl_802AFC40:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x64e(r3)
    cmplwi r0, 0x3
    bge lbl_802AFC5C
    li r3, 0xc
    b lbl_802AFD6C
lbl_802AFC5C:
    cmpwi r4, 0x0
    bne lbl_802AFC68
    li r28, 0x12
lbl_802AFC68:
    cmpwi r5, 0x0
    bne lbl_802AFC74
    li r29, 0x800
lbl_802AFC74:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AFCA8
    lis r3, 0xd
    lis r4, lbl_803745AC@ha
    mr r5, r27
    mr r6, r28
    mr r7, r29
    addi r3, r3, 0x2
    addi r4, r4, lbl_803745AC@l
    bl LogMsg_3
lbl_802AFCA8:
    cmplwi r27, 0x1
    bne lbl_802AFCE4
    cmplwi r28, 0x12
    blt lbl_802AFCD8
    cmplwi r28, 0x1000
    bgt lbl_802AFCD8
    cmplwi r29, 0x12
    blt lbl_802AFCD8
    cmplwi r29, 0x1000
    bgt lbl_802AFCD8
    cmplw r28, r29
    ble lbl_802AFCE0
lbl_802AFCD8:
    li r3, 0x5
    b lbl_802AFD6C
lbl_802AFCE0:
    ori r30, r30, 0x2
lbl_802AFCE4:
    lhz r0, 0x169c(r31)
    cmplw r28, r0
    bne lbl_802AFCFC
    lhz r0, 0x169e(r31)
    cmplw r29, r0
    beq lbl_802AFD2C
lbl_802AFCFC:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AFD24
    sth r28, 0x169c(r31)
    mr r4, r29
    mr r5, r28
    sth r29, 0x169e(r31)
    bl btsnd_hcic_write_pagescan_cfg
    b lbl_802AFD2C
lbl_802AFD24:
    li r3, 0x3
    b lbl_802AFD6C
lbl_802AFD2C:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802AFD60
    lhz r0, 0x1698(r31)
    cmpwi r0, 0x0
    beq lbl_802AFD50
    ori r0, r30, 0x1
    clrlwi r30, r0, 24
lbl_802AFD50:
    sth r27, 0x169a(r31)
    clrlwi r4, r30, 24
    bl btsnd_hcic_write_scan_enable
    b lbl_802AFD68
lbl_802AFD60:
    li r3, 0x3
    b lbl_802AFD6C
lbl_802AFD68:
    li r3, 0x0
lbl_802AFD6C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

u8 BTM_IsInquiryActive(void) {
    return lbl_80453F78[0x1848];
}

// asm_to_cpp: BTM_CancelInquiry
asm s32 BTM_CancelInquiry(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80453F78@ha
    addi r30, r30, lbl_80453F78@l
    stw r29, 0x14(r1)
    li r29, 0x0
    lbz r0, 0x27c0(r30)
    cmplwi r0, 0x3
    blt lbl_802AFDD8
    lis r3, 0xd
    lis r4, lbl_80374600@ha
    addi r3, r3, 0x2
    addi r4, r4, lbl_80374600@l
    bl LogMsg_0
lbl_802AFDD8:
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    bne lbl_802AFDEC
    li r3, 0x6
    b lbl_802AFE80
lbl_802AFDEC:
    lbz r0, 0x1848(r30)
    cmpwi r0, 0x0
    beq lbl_802AFE7C
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802AFE7C
    lbz r0, 0x1844(r30)
    li r4, 0x0
    stb r4, 0x1848(r30)
    cmpwi r0, 0x0
    stb r4, 0x1847(r30)
    stw r4, 0x16b4(r30)
    stw r4, 0x16b0(r30)
    beq lbl_802AFE34
    lbz r3, 0x1845(r30)
    stb r4, 0x1844(r30)
    addi r0, r3, 0x1
    stb r0, 0x1845(r30)
    b lbl_802AFE44
lbl_802AFE34:
    bl btsnd_hcic_inq_cancel
    clrlwi. r0, r3, 24
    bne lbl_802AFE44
    li r29, 0x3
lbl_802AFE44:
    lis r31, lbl_80453F78@ha
    lwz r4, 0x16c0(r30)
    addi r31, r31, lbl_80453F78@l
    lwz r3, 0x16dc(r31)
    addi r0, r4, 0x1
    stw r0, 0x16c0(r30)
    cmpwi r3, 0x0
    beq lbl_802AFE70
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x16dc(r31)
lbl_802AFE70:
    li r0, 0x0
    sth r0, 0x16e0(r31)
    sth r0, 0x16e2(r31)
lbl_802AFE7C:
    mr r3, r29
lbl_802AFE80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTM_StartInquiry
asm u8 BTM_StartInquiry(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x3
    blt lbl_802AFEFC
    lis r3, 0xd
    lis r4, lbl_8037461C@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_8037461C@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    bl LogMsg_4
lbl_802AFEFC:
    lbz r0, 0x1848(r31)
    cmpwi r0, 0x0
    bne lbl_802AFF14
    lbz r0, 0x1844(r31)
    cmpwi r0, 0x0
    beq lbl_802AFF1C
lbl_802AFF14:
    li r3, 0x2
    b lbl_802B0030
lbl_802AFF1C:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802AFF38
    cmplwi r0, 0x1
    beq lbl_802AFF38
    li r3, 0x5
    b lbl_802B0030
lbl_802AFF38:
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    bne lbl_802AFF4C
    li r3, 0x6
    b lbl_802B0030
lbl_802AFF4C:
    lbz r5, 0x0(r28)
    li r0, 0x3
    lbz r3, 0x1(r28)
    li r6, 0x0
    li r4, 0x1
    stb r5, 0x1834(r31)
    stb r3, 0x1835(r31)
    lbz r5, 0x2(r28)
    lbz r3, 0x3(r28)
    stb r5, 0x1836(r31)
    stb r3, 0x1837(r31)
    lbz r5, 0x4(r28)
    lbz r3, 0x5(r28)
    stb r5, 0x1838(r31)
    stb r3, 0x1839(r31)
    lbz r5, 0x6(r28)
    lbz r3, 0x7(r28)
    stb r5, 0x183a(r31)
    stb r3, 0x183b(r31)
    lbz r3, 0x8(r28)
    stb r3, 0x183c(r31)
    lbz r3, 0x9(r28)
    stb r3, 0x183d(r31)
    stb r0, 0x1847(r31)
    stw r30, 0x16b0(r31)
    stw r29, 0x16b4(r31)
    stb r6, 0x183f(r31)
    lbz r5, 0x0(r28)
    subi r3, r5, 0x1
    subfic r0, r5, 0x1
    nor r0, r3, r0
    srawi r3, r0, 31
    addi r0, r3, 0x2
    stb r0, 0x1848(r31)
    lbz r0, 0x3(r28)
    cmpwi r0, 0x0
    beq lbl_802AFFF0
    blt lbl_802B0008
    cmpwi r0, 0x3
    bge lbl_802B0008
    b lbl_802AFFFC
lbl_802AFFF0:
    li r0, 0x2
    stb r0, 0x1847(r31)
    b lbl_802B0010
lbl_802AFFFC:
    stb r4, 0x1847(r31)
    stb r6, 0x3(r28)
    b lbl_802B0010
lbl_802B0008:
    li r3, 0x5
    b lbl_802B0030
lbl_802B0010:
    lbz r3, 0x3(r28)
    addi r4, r28, 0x4
    bl btm_set_inq_event_filter
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B0030
    li r0, 0x0
    stb r0, 0x1847(r31)
lbl_802B0030:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTM_ReadRemoteDeviceName
asm s32 BTM_ReadRemoteDeviceName(u8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r5, lbl_80453F78@ha
    mr r27, r3
    addi r5, r5, lbl_80453F78@l
    mr r28, r4
    lbz r0, 0x27c0(r5)
    li r29, 0x0
    cmplwi r0, 0x3
    blt lbl_802B00B0
    lis r3, 0xd
    lis r4, lbl_80374654@ha
    lbz r5, 0x0(r27)
    addi r3, r3, 0x2
    lbz r6, 0x1(r27)
    addi r4, r4, lbl_80374654@l
    lbz r7, 0x2(r27)
    lbz r8, 0x3(r27)
    lbz r9, 0x4(r27)
    lbz r10, 0x5(r27)
    bl LogMsg_6
lbl_802B00B0:
    lis r3, lbl_80453F78@ha
    li r30, 0x0
    addi r3, r3, lbl_80453F78@l
    addi r31, r3, 0x16e4
lbl_802B00C0:
    lbz r0, 0x1a(r31)
    cmpwi r0, 0x0
    beq lbl_802B00E8
    mr r4, r27
    addi r3, r31, 0xa
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B00E8
    b lbl_802B00FC
lbl_802B00E8:
    addi r30, r30, 0x1
    addi r31, r31, 0x1c
    cmplwi r30, 0xc
    blt lbl_802B00C0
    li r31, 0x0
lbl_802B00FC:
    cmpwi r31, 0x0
    beq lbl_802B0108
    addi r29, r31, 0x8
lbl_802B0108:
    mr r3, r27
    mr r4, r29
    mr r7, r28
    li r5, 0x1
    li r6, 0x28
    bl btm_initiate_rem_name
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTM_CancelRemoteDeviceName
asm s32 BTM_CancelRemoteDeviceName(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x3
    blt lbl_802B0170
    lis r3, 0xd
    lis r4, lbl_80374694@ha
    addi r3, r3, 0x2
    addi r4, r4, lbl_80374694@l
    bl LogMsg_0
lbl_802B0170:
    lbz r0, 0x16ae(r31)
    clrlwi. r0, r0, 31
    beq lbl_802B0198
    addi r3, r31, 0x16a8
    bl btsnd_hcic_rmt_name_req_cancel
    clrlwi. r0, r3, 24
    li r3, 0x3
    beq lbl_802B019C
    li r3, 0x1
    b lbl_802B019C
lbl_802B0198:
    li r3, 0x6
lbl_802B019C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTM_InqDbRead
asm s8 *BTM_InqDbRead(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r4, 0x16e4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x3
    blt lbl_802B0210
    lis r3, 0xd
    lis r4, lbl_803746B4@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x2
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_803746B4@l
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    bl LogMsg_6
lbl_802B0210:
    li r31, 0x0
lbl_802B0214:
    lbz r0, 0x1a(r30)
    cmpwi r0, 0x0
    beq lbl_802B0240
    mr r4, r29
    addi r3, r30, 0xa
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B0240
    addi r3, r30, 0x8
    b lbl_802B0254
lbl_802B0240:
    addi r31, r31, 0x1
    addi r30, r30, 0x1c
    cmplwi r31, 0xc
    blt lbl_802B0214
    li r3, 0x0
lbl_802B0254:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTM_InqDbFirst
asm s8 *BTM_InqDbFirst(void) {
    nofralloc
    lis r3, lbl_80453F78@ha
    li r0, 0x2
    addi r3, r3, lbl_80453F78@l
    li r4, 0x0
    addi r3, r3, 0x16e4
    mtctr r0
lbl_802B0288:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_802B029C
    addi r3, r3, 0x8
    blr
lbl_802B029C:
    lbz r0, 0x36(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B02B4
    addi r3, r3, 0x24
    blr
lbl_802B02B4:
    lbz r0, 0x52(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B02CC
    addi r3, r3, 0x40
    blr
lbl_802B02CC:
    lbz r0, 0x6e(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B02E4
    addi r3, r3, 0x5c
    blr
lbl_802B02E4:
    lbz r0, 0x8a(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B02FC
    addi r3, r3, 0x78
    blr
lbl_802B02FC:
    lbz r0, 0xa6(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B0314
    addi r3, r3, 0x94
    blr
lbl_802B0314:
    addi r4, r4, 0x1
    addi r3, r3, 0xa8
    bdnz lbl_802B0288
    li r3, 0x0
    blr
}

// asm_to_cpp: BTM_InqDbNext
asm s8 * BTM_InqDbNext() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_802B03AC
    lis r5, lbl_80453F78@ha
    lis r4, 0x9249
    addi r5, r5, lbl_80453F78@l
    subi r0, r3, 0x8
    addi r3, r5, 0x16e4
    addi r4, r4, 0x2493
    subf r0, r3, r0
    mulhw r3, r4, r0
    add r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r3, r0, r3
    addi r0, r3, 0x1
    clrlwi r4, r0, 16
    mulli r3, r4, 0x1c
    subfic r0, r4, 0xc
    add r3, r5, r3
    addi r3, r3, 0x16e4
    mtctr r0
    cmplwi r4, 0xc
    bge lbl_802B03A4
lbl_802B0384:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_802B0398
    addi r3, r3, 0x8
    blr
lbl_802B0398:
    addi r4, r4, 0x1
    addi r3, r3, 0x1c
    bdnz lbl_802B0384
lbl_802B03A4:
    li r3, 0x0
    blr
lbl_802B03AC:
    lis r3, lbl_80453F78@ha
    li r0, 0x2
    addi r3, r3, lbl_80453F78@l
    li r4, 0x0
    addi r3, r3, 0x16e4
    mtctr r0
lbl_802B03C4:
    lbz r0, 0x1a(r3)
    cmpwi r0, 0x0
    beq lbl_802B03D8
    addi r3, r3, 0x8
    blr
lbl_802B03D8:
    lbz r0, 0x36(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B03F0
    addi r3, r3, 0x24
    blr
lbl_802B03F0:
    lbz r0, 0x52(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B0408
    addi r3, r3, 0x40
    blr
lbl_802B0408:
    lbz r0, 0x6e(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B0420
    addi r3, r3, 0x5c
    blr
lbl_802B0420:
    lbz r0, 0x8a(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B0438
    addi r3, r3, 0x78
    blr
lbl_802B0438:
    lbz r0, 0xa6(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B0450
    addi r3, r3, 0x94
    blr
lbl_802B0450:
    addi r4, r4, 0x1
    addi r3, r3, 0xa8
    bdnz lbl_802B03C4
    li r3, 0x0
    blr
}

// asm_to_cpp: BTM_ClearInqDb
asm s32 BTM_ClearInqDb(u8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_80453F78@ha
    mr r27, r3
    addi r30, r4, lbl_80453F78@l
    lbz r0, 0x1848(r30)
    cmpwi r0, 0x0
    bne lbl_802B04A8
    lbz r0, 0x16ae(r30)
    cmpwi r0, 0x0
    bne lbl_802B04A8
    lbz r0, 0x1844(r30)
    cmpwi r0, 0x0
    beq lbl_802B04B0
lbl_802B04A8:
    li r3, 0x2
    b lbl_802B051C
lbl_802B04B0:
    addi r28, r30, 0x16e4
    li r29, 0x0
    li r31, 0x0
lbl_802B04BC:
    lbz r0, 0x1a(r28)
    cmpwi r0, 0x0
    beq lbl_802B0508
    cmpwi r27, 0x0
    beq lbl_802B04E8
    mr r4, r27
    addi r3, r28, 0xa
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B0508
lbl_802B04E8:
    stb r31, 0x1a(r28)
    lwz r12, 0x16bc(r30)
    cmpwi r12, 0x0
    beq lbl_802B0508
    addi r3, r28, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802B0508:
    addi r29, r29, 0x1
    addi r28, r28, 0x1c
    cmplwi r29, 0xc
    blt lbl_802B04BC
    li r3, 0x0
lbl_802B051C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: btm_inq_db_reset
asm void btm_inq_db_reset(M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_27
    lis r29, lbl_80453F78@ha
    addi r29, r29, lbl_80453F78@l
    addi r3, r29, 0x16c4
    bl btu_stop_timer
    lbz r3, 0x1848(r29)
    cmpwi r3, 0x0
    beq lbl_802B0598
    addi r0, r3, 0xff
    li r3, 0x0
    clrlwi r0, r0, 24
    stb r3, 0x1848(r29)
    cmplwi r0, 0x1
    bgt lbl_802B0598
    lwz r12, 0x16b0(r29)
    cmpwi r12, 0x0
    beq lbl_802B0598
    stb r3, 0x9(r1)
    addi r3, r1, 0x9
    mtctr r12
    bctrl
lbl_802B0598:
    lbz r0, 0x16ae(r29)
    clrlwi. r0, r0, 31
    beq lbl_802B05E8
    addi r3, r29, 0x1680
    bl btu_stop_timer
    li r30, 0x0
    addi r3, r29, 0x16a8
    stb r30, 0x16ae(r29)
    li r4, 0x0
    li r5, 0x6
    bl memset
    lwz r12, 0x167c(r29)
    cmpwi r12, 0x0
    beq lbl_802B05E8
    li r0, 0xc
    addi r3, r1, 0xc
    sth r0, 0xc(r1)
    mtctr r12
    bctrl
    stw r30, 0x167c(r29)
lbl_802B05E8:
    lbz r0, 0x1844(r29)
    cmpwi r0, 0x0
    beq lbl_802B061C
    lwz r12, 0x16b8(r29)
    li r0, 0x0
    stb r0, 0x1844(r29)
    cmpwi r12, 0x0
    beq lbl_802B061C
    li r0, 0xc
    addi r3, r1, 0x8
    stb r0, 0x8(r1)
    mtctr r12
    bctrl
lbl_802B061C:
    li r30, 0x0
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stb r30, 0x1847(r29)
    li r28, 0x0
    stb r30, 0x1845(r29)
    addi r27, r31, 0x16e4
    stw r30, 0x16b4(r29)
lbl_802B063C:
    lbz r0, 0x1a(r27)
    cmpwi r0, 0x0
    beq lbl_802B0668
    stb r30, 0x1a(r27)
    lwz r12, 0x16bc(r31)
    cmpwi r12, 0x0
    beq lbl_802B0668
    addi r3, r27, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802B0668:
    addi r28, r28, 0x1
    addi r27, r27, 0x1c
    cmplwi r28, 0xc
    blt lbl_802B063C
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lwz r3, 0x16dc(r31)
    cmpwi r3, 0x0
    beq lbl_802B0698
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x16dc(r31)
lbl_802B0698:
    li r0, 0x0
    addi r11, r1, 0x120
    sth r0, 0x16e0(r31)
    sth r0, 0x16e2(r31)
    sth r0, 0x1698(r29)
    sth r0, 0x169a(r29)
    sth r0, 0x16a6(r29)
    sth r0, 0x16a4(r29)
    bl _restgpr_27
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: btm_inq_find_bdaddr
asm u8 btm_inq_find_bdaddr(u8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80453F78@ha
    mr r27, r3
    addi r31, r31, lbl_80453F78@l
    lbz r0, 0x1848(r31)
    lwz r29, 0x16dc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802B0708
    cmpwi r29, 0x0
    bne lbl_802B0710
lbl_802B0708:
    li r3, 0x0
    b lbl_802B0794
lbl_802B0710:
    lhz r30, 0x16e0(r31)
    li r28, 0x0
    b lbl_802B0754
lbl_802B071C:
    mr r4, r27
    addi r3, r29, 0x4
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B074C
    lwz r3, 0x0(r29)
    lwz r0, 0x16c0(r31)
    cmplw r3, r0
    bne lbl_802B074C
    li r3, 0x1
    b lbl_802B0794
lbl_802B074C:
    addi r28, r28, 0x1
    addi r29, r29, 0xc
lbl_802B0754:
    clrlwi r3, r28, 16
    cmplw r3, r30
    blt lbl_802B071C
    lhz r0, 0x16e2(r31)
    cmplw r3, r0
    bge lbl_802B0790
    lwz r0, 0x16c0(r31)
    mr r4, r27
    addi r3, r29, 0x4
    li r5, 0x6
    stw r0, 0x0(r29)
    bl memcpy
    lhz r3, 0x16e0(r31)
    addi r0, r3, 0x1
    sth r0, 0x16e0(r31)
lbl_802B0790:
    li r3, 0x0
lbl_802B0794:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: btm_inq_db_new
asm s8 *btm_inq_db_new(u8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    li r0, 0xc
    stw r31, 0x1c(r1)
    addi r31, r4, 0x16e4
    li r4, -0x1
    stw r30, 0x18(r1)
    mr r30, r31
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    mtctr r0
lbl_802B07E8:
    lbz r0, 0x1a(r31)
    cmpwi r0, 0x0
    bne lbl_802B0824
    mr r3, r31
    li r4, 0x0
    li r5, 0x1c
    bl memset
    mr r4, r29
    addi r3, r31, 0xa
    li r5, 0x6
    bl memcpy
    li r0, 0x1
    mr r3, r31
    stb r0, 0x1a(r31)
    b lbl_802B0894
lbl_802B0824:
    lwz r0, 0x0(r31)
    cmplw r0, r4
    bge lbl_802B0838
    mr r30, r31
    mr r4, r0
lbl_802B0838:
    addi r3, r3, 0x1
    addi r31, r31, 0x1c
    bdnz lbl_802B07E8
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x16bc(r3)
    cmpwi r12, 0x0
    beq lbl_802B0868
    addi r3, r30, 0x8
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802B0868:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1c
    bl memset
    mr r4, r29
    addi r3, r30, 0xa
    li r5, 0x6
    bl memcpy
    li r0, 0x1
    mr r3, r30
    stb r0, 0x1a(r30)
lbl_802B0894:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: btm_set_inq_event_filter
asm u8 btm_set_inq_event_filter(s32 arg0, u8 *arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r29, r1, 0x8
    li r30, 0x6
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802B0978
    cmpwi r27, 0x1
    beq lbl_802B090C
    bge lbl_802B0900
    cmpwi r27, 0x0
    bge lbl_802B0938
    b lbl_802B0940
lbl_802B0900:
    cmpwi r27, 0x3
    bge lbl_802B0940
    b lbl_802B0930
lbl_802B090C:
    mr r3, r29
    mr r4, r28
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0xb
    addi r4, r28, 0x3
    li r5, 0x3
    bl memcpy
    b lbl_802B0948
lbl_802B0930:
    mr r29, r28
    b lbl_802B0948
lbl_802B0938:
    li r30, 0x0
    b lbl_802B0948
lbl_802B0940:
    li r3, 0x5
    b lbl_802B097C
lbl_802B0948:
    lis r4, lbl_80453F78@ha
    li r0, 0x1
    addi r4, r4, lbl_80453F78@l
    mr r3, r31
    stb r0, 0x1844(r4)
    mr r5, r27
    mr r6, r29
    mr r7, r30
    li r4, 0x1
    bl btsnd_hcic_set_event_filter
    li r3, 0x1
    b lbl_802B097C
lbl_802B0978:
    li r3, 0x3
lbl_802B097C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: btm_event_filter_complete
asm void btm_event_filter_complete() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r4, 0x1845(r31)
    lwz r29, 0x16b8(r31)
    cmpwi r4, 0x0
    beq lbl_802B09D0
    subi r0, r4, 0x1
    stb r0, 0x1845(r31)
    b lbl_802B0B98
lbl_802B09D0:
    lbz r0, 0x1844(r31)
    cmplwi r0, 0x1
    bne lbl_802B0B98
    lbz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_802B0A14
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x2
    blt lbl_802B0A08
    lis r3, 0xd
    lis r4, lbl_803746E8@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803746E8@l
    bl LogMsg_1
lbl_802B0A08:
    li r0, 0xa
    stb r0, 0x8(r1)
    b lbl_802B0A1C
lbl_802B0A14:
    li r0, 0x0
    stb r0, 0x8(r1)
lbl_802B0A1C:
    lbz r3, 0x1847(r31)
    cmpwi r3, 0x0
    bne lbl_802B0A4C
    li r0, 0x0
    cmpwi r29, 0x0
    stb r0, 0x1844(r31)
    beq lbl_802B0B98
    mr r12, r29
    addi r3, r1, 0x8
    mtctr r12
    bctrl
    b lbl_802B0B98
lbl_802B0A4C:
    cmpwi r0, 0x0
    beq lbl_802B0A70
    li r3, 0xa
    bl btm_process_inq_complete
    li r0, 0x0
    stb r0, 0x1844(r31)
    stb r0, 0x1848(r31)
    stb r0, 0x1847(r31)
    b lbl_802B0B98
lbl_802B0A70:
    cmplwi r3, 0x1
    bne lbl_802B0AB4
    lbz r3, 0x1837(r31)
    addi r4, r31, 0x1838
    bl btm_set_inq_event_filter
    clrlwi r0, r3, 24
    stb r3, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_802B0AA0
    li r0, 0x2
    stb r0, 0x1847(r31)
    b lbl_802B0B98
lbl_802B0AA0:
    li r0, 0x0
    li r3, 0xa
    stb r0, 0x1844(r31)
    bl btm_process_inq_complete
    b lbl_802B0B98
lbl_802B0AB4:
    lbz r4, 0x1836(r31)
    li r0, 0x3
    li r3, 0x0
    stb r0, 0x1847(r31)
    cmplwi r4, 0xc
    li r0, 0xc
    stb r3, 0x1844(r31)
    bgt lbl_802B0AD8
    mr r0, r4
lbl_802B0AD8:
    lbz r3, 0x1848(r31)
    la r29, lbl_804A2540
    stb r0, 0x1836(r31)
    clrlwi. r0, r3, 31
    beq lbl_802B0AF0
    la r29, lbl_804A2544
lbl_802B0AF0:
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_802B0B24
    lhz r3, 0x1842(r31)
    mr r5, r29
    lhz r4, 0x1840(r31)
    lbz r6, 0x1835(r31)
    lbz r7, 0x1836(r31)
    bl btsnd_hcic_per_inq_mode
    clrlwi. r0, r3, 24
    bne lbl_802B0B98
    li r3, 0x3
    bl btm_process_inq_complete
    b lbl_802B0B98
lbl_802B0B24:
    lis r30, lbl_80453F78@ha
    addi r30, r30, lbl_80453F78@l
    lwz r3, 0x16dc(r30)
    cmpwi r3, 0x0
    beq lbl_802B0B44
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x16dc(r30)
lbl_802B0B44:
    li r0, 0x0
    li r3, 0x708
    sth r0, 0x16e0(r30)
    sth r0, 0x16e2(r30)
    bl GKI_getbuf
    cmpwi r3, 0x0
    stw r3, 0x16dc(r31)
    beq lbl_802B0B78
    li r0, 0x96
    li r4, 0x0
    sth r0, 0x16e2(r31)
    li r5, 0x708
    bl memset
lbl_802B0B78:
    lbz r4, 0x1835(r31)
    mr r3, r29
    li r5, 0x0
    bl btsnd_hcic_inquiry
    clrlwi. r0, r3, 24
    bne lbl_802B0B98
    li r3, 0x3
    bl btm_process_inq_complete
lbl_802B0B98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: btm_process_inq_results
asm void btm_process_inq_results() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_16
    lis r5, lbl_80453F78@ha
    mr r18, r4
    addi r27, r5, lbl_80453F78@l
    li r23, 0x1
    lbz r0, 0x1848(r27)
    li r21, 0x0
    lwz r22, 0x16b4(r27)
    li r20, 0x0
    cmpwi r0, 0x0
    beq lbl_802B0E14
    lbz r28, 0x0(r3)
    addi r17, r3, 0x1
    li r26, 0x0
    li r31, 0x7f
    li r16, 0x0
    b lbl_802B0E08
lbl_802B0C08:
    lbz r0, 0x0(r17)
    cmpwi r18, 0x0
    stb r0, 0x11(r1)
    lbz r0, 0x1(r17)
    stb r0, 0x10(r1)
    lbz r0, 0x2(r17)
    stb r0, 0xf(r1)
    lbz r0, 0x3(r17)
    stb r0, 0xe(r1)
    lbz r0, 0x4(r17)
    stb r0, 0xd(r1)
    lbz r0, 0x5(r17)
    stb r0, 0xc(r1)
    lbz r29, 0x6(r17)
    lbz r30, 0x7(r17)
    addi r17, r17, 0x8
    bne lbl_802B0C54
    lbz r21, 0x0(r17)
    addi r17, r17, 0x1
lbl_802B0C54:
    lbz r0, 0x0(r17)
    cmpwi r18, 0x0
    stb r0, 0xa(r1)
    lbz r0, 0x1(r17)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r17)
    stb r0, 0x8(r1)
    lbz r0, 0x4(r17)
    lbz r3, 0x3(r17)
    addi r17, r17, 0x5
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r19, r0, 16
    beq lbl_802B0C94
    lbz r20, 0x0(r17)
    addi r17, r17, 0x1
lbl_802B0C94:
    addi r3, r1, 0xc
    bl btm_inq_find_bdaddr
    clrlwi. r0, r3, 24
    bne lbl_802B0E04
    lwz r12, 0x184c(r27)
    cmpwi r12, 0x0
    beq lbl_802B0CC8
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    clrlwi. r0, r3, 24
    beq lbl_802B0E04
lbl_802B0CC8:
    addi r25, r27, 0x16e4
    li r24, 0x0
lbl_802B0CD0:
    lbz r0, 0x1a(r25)
    cmpwi r0, 0x0
    beq lbl_802B0CF8
    addi r3, r25, 0xa
    addi r4, r1, 0xc
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B0CF8
    b lbl_802B0D0C
lbl_802B0CF8:
    addi r24, r24, 0x1
    addi r25, r25, 0x1c
    cmplwi r24, 0xc
    blt lbl_802B0CD0
    li r25, 0x0
lbl_802B0D0C:
    cmpwi r25, 0x0
    bne lbl_802B0D28
    addi r3, r1, 0xc
    bl btm_inq_db_new
    mr r25, r3
    li r23, 0x1
    b lbl_802B0D3C
lbl_802B0D28:
    lwz r3, 0x4(r25)
    lwz r0, 0x16c0(r27)
    cmplw r3, r0
    bne lbl_802B0D3C
    li r23, 0x0
lbl_802B0D3C:
    cmplwi r23, 0x1
    bne lbl_802B0E04
    stb r29, 0x13(r25)
    cmpwi r18, 0x0
    lbz r5, 0x8(r1)
    ori r0, r19, 0x8000
    stb r30, 0x14(r25)
    addi r24, r25, 0x8
    lbz r4, 0x9(r1)
    stb r21, 0x15(r25)
    lbz r3, 0xa(r1)
    stb r5, 0x10(r25)
    stb r4, 0x11(r25)
    stb r3, 0x12(r25)
    sth r0, 0x8(r25)
    beq lbl_802B0D84
    stb r20, 0xe(r24)
    b lbl_802B0D88
lbl_802B0D84:
    stb r31, 0xe(r24)
lbl_802B0D88:
    bl GKI_get_tick_count
    stw r3, 0x0(r25)
    lwz r0, 0x16c0(r27)
    stw r0, 0x4(r25)
    lbz r0, 0x1848(r27)
    lbz r3, 0x183f(r27)
    rlwinm. r0, r0, 0, 29, 29
    addi r0, r3, 0x1
    stb r0, 0x183f(r27)
    bne lbl_802B0DCC
    lbz r3, 0x1836(r27)
    cmpwi r3, 0x0
    beq lbl_802B0DCC
    clrlwi r0, r0, 24
    cmplw r0, r3
    bne lbl_802B0DCC
    bl btsnd_hcic_inq_cancel
lbl_802B0DCC:
    cmpwi r22, 0x0
    stb r16, 0x18(r25)
    beq lbl_802B0DE8
    mr r12, r22
    mr r3, r24
    mtctr r12
    bctrl
lbl_802B0DE8:
    lwz r12, 0x16bc(r27)
    cmpwi r12, 0x0
    beq lbl_802B0E04
    addi r3, r25, 0x8
    li r4, 0x1
    mtctr r12
    bctrl
lbl_802B0E04:
    addi r26, r26, 0x1
lbl_802B0E08:
    clrlwi r0, r26, 24
    cmplw r0, r28
    blt lbl_802B0C08
lbl_802B0E14:
    addi r11, r1, 0x60
    bl _restgpr_16
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: btm_process_inq_complete
asm void btm_process_inq_complete(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lis r29, lbl_80453F78@ha
    addi r29, r29, lbl_80453F78@l
    stw r28, 0x10(r1)
    lbz r0, 0x1848(r29)
    lwz r28, 0x16b0(r29)
    cmpwi r0, 0x0
    beq lbl_802B0F10
    lwz r4, 0x16c0(r29)
    cmpwi r3, 0x0
    li r3, 0xa
    addi r0, r4, 0x1
    stw r0, 0x16c0(r29)
    bne lbl_802B0E7C
    li r3, 0x0
lbl_802B0E7C:
    lbz r0, 0x1848(r29)
    stb r3, 0x183e(r29)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_802B0F10
    lis r31, lbl_80453F78@ha
    li r30, 0x0
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x16b4(r29)
    lwz r3, 0x16dc(r31)
    stb r30, 0x1848(r29)
    cmpwi r3, 0x0
    stb r30, 0x1847(r29)
    stw r30, 0x16b0(r29)
    beq lbl_802B0EBC
    bl GKI_freebuf
    stw r30, 0x16dc(r31)
lbl_802B0EBC:
    lis r3, lbl_80453F78@ha
    li r4, 0x0
    addi r3, r3, lbl_80453F78@l
    sth r4, 0x16e0(r31)
    lbz r0, 0x27c0(r3)
    sth r4, 0x16e2(r31)
    cmplwi r0, 0x5
    blt lbl_802B0EF8
    lis r3, 0xd
    lis r4, lbl_80374724@ha
    lbz r5, 0x183e(r29)
    addi r3, r3, 0x4
    lbz r6, 0x183f(r29)
    addi r4, r4, lbl_80374724@l
    bl LogMsg_2
lbl_802B0EF8:
    cmpwi r28, 0x0
    beq lbl_802B0F10
    mr r12, r28
    addi r3, r29, 0x183e
    mtctr r12
    bctrl
lbl_802B0F10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: btm_initiate_rem_name
asm s32 btm_initiate_rem_name(u8 *arg0, s8 *arg1, u32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r31, lbl_80453F78@ha
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    addi r31, r31, lbl_80453F78@l
    li r30, 0x1
    li r29, 0x1
    li r28, 0x1
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    bne lbl_802B0F80
    li r3, 0x6
    b lbl_802B1068
lbl_802B0F80:
    lbz r3, 0x16ae(r31)
    and. r0, r3, r25
    bne lbl_802B1060
    cmplwi r25, 0x1
    bne lbl_802B0FCC
    cmpwi r3, 0x0
    beq lbl_802B0FC4
    mr r3, r23
    addi r4, r31, 0x16a8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B0FBC
    li r30, 0x0
    b lbl_802B0FC4
lbl_802B0FBC:
    li r3, 0x2
    b lbl_802B1068
lbl_802B0FC4:
    stw r27, 0x167c(r31)
    b lbl_802B0FDC
lbl_802B0FCC:
    cmpwi r3, 0x0
    beq lbl_802B0FDC
    li r3, 0x2
    b lbl_802B1068
lbl_802B0FDC:
    cmpwi r30, 0x0
    beq lbl_802B1040
    mr r4, r23
    addi r3, r31, 0x16a8
    li r5, 0x6
    bl memcpy
    mr r5, r26
    addi r3, r31, 0x1680
    li r4, 0xa
    bl btu_start_timer
    cmpwi r24, 0x0
    beq lbl_802B1028
    lhz r0, 0x0(r24)
    mr r3, r23
    lbz r4, 0xb(r24)
    lbz r5, 0xd(r24)
    ori r6, r0, 0x8000
    bl btsnd_hcic_rmt_name_req
    b lbl_802B103C
lbl_802B1028:
    mr r3, r23
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl btsnd_hcic_rmt_name_req
lbl_802B103C:
    mr r29, r3
lbl_802B1040:
    clrlwi. r0, r29, 24
    beq lbl_802B1058
    lbz r0, 0x16ae(r31)
    or r0, r0, r25
    stb r0, 0x16ae(r31)
    b lbl_802B1064
lbl_802B1058:
    li r28, 0x3
    b lbl_802B1064
lbl_802B1060:
    li r28, 0x2
lbl_802B1064:
    mr r3, r28
lbl_802B1068:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: btm_process_remote_name
asm void btm_process_remote_name() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    addi r11, r1, 0x120
    bl _savegpr_26
    lis r31, lbl_80453F78@ha
    mr r26, r4
    addi r31, r31, lbl_80453F78@l
    mr r27, r5
    lwz r30, 0x167c(r31)
    mr r28, r6
    lbz r29, 0x16ae(r31)
    addi r3, r31, 0x1680
    bl btu_stop_timer
    li r3, 0x0
    cmpwi r28, 0x0
    stb r3, 0x16ae(r31)
    bne lbl_802B1178
    cmplwi r27, 0xf8
    addi r4, r1, 0xc
    li r3, 0xf8
    bge lbl_802B10DC
    mr r3, r27
lbl_802B10DC:
    clrlwi. r5, r3, 16
    li r0, 0x0
    sth r3, 0xa(r1)
    sth r0, 0x8(r1)
    mr r3, r5
    beq lbl_802B1188
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_802B1158
lbl_802B1100:
    lbz r0, 0x0(r26)
    subi r5, r5, 0x8
    stb r0, 0x0(r4)
    lbz r0, 0x1(r26)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r26)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r26)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r26)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r26)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r26)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r26)
    addi r26, r26, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_802B1100
    andi. r3, r3, 0x7
    beq lbl_802B1188
lbl_802B1158:
    mtctr r3
lbl_802B115C:
    lbz r0, 0x0(r26)
    subi r5, r5, 0x1
    addi r26, r26, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_802B115C
    b lbl_802B1188
lbl_802B1178:
    li r0, 0x9
    sth r3, 0xa(r1)
    sth r0, 0x8(r1)
    stb r3, 0xc(r1)
lbl_802B1188:
    addi r3, r31, 0x16a8
    li r4, 0x0
    li r5, 0x6
    bl memset
    clrlwi. r0, r29, 31
    beq lbl_802B11C0
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x167c(r31)
    beq lbl_802B11C0
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802B11C0:
    addi r11, r1, 0x120
    bl _restgpr_26
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
