#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memcpy();                    /* extern */
M2C_UNK memset();        /* extern */
extern M2C_UNK lbl_80341648;
extern M2C_UNK lbl_80453C14;
extern M2C_UNK lbl_804A2528;
extern M2C_UNK lbl_804A2530;

s32 BTA_EnableBluetooth();
void BTA_DisableBluetooth();
s32 BTA_DmIsDeviceUp();
void BTA_DmSetDeviceName();
void BTA_DmSetVisibility();
void BTA_DmSearch();
void BTA_DmSearchCancel();
void BTA_DmPinReply();
u8 BTA_DmAddDevice();
u8 BTA_DmRemoveDevice();
void BTA_DmSendHciReset();

// BTA_EnableBluetooth: definicion C reemplazada por asm (ver abajo)


void BTA_DisableBluetooth(void) {
    s16 *temp_r3;

    temp_r3 = GKI_getbuf(8);
    if (temp_r3 != NULL) {
        *temp_r3 = 0x101;
        bta_sys_sendmsg((s32) temp_r3);
    }
}

// BTA_DmIsDeviceUp: definicion C reemplazada por asm (ver abajo)


// BTA_DmSetDeviceName: definicion C reemplazada por asm (ver abajo)



// BTA_DmSearch: definicion C reemplazada por asm (ver abajo)


void BTA_DmSearchCancel(void) {
    s16 *temp_r3;

    temp_r3 = GKI_getbuf(8);
    if (temp_r3 != NULL) {
        *temp_r3 = 0x201;
        bta_sys_sendmsg((s32) temp_r3);
    }
}


// BTA_DmAddDevice: definicion C reemplazada por asm (ver abajo)


u8 BTA_DmRemoveDevice(s32 arg0) {
    s32 temp_r31;

    GKI_sched_lock();
    temp_r31 = BTM_SecDeleteDevice((s8 *) arg0);
    GKI_sched_unlock();
    return (u8) ((u8) temp_r31 == 0);
}

void BTA_DmSendHciReset(void) {
    s16 *temp_r3;

    temp_r3 = GKI_getbuf(8);
    if (temp_r3 != NULL) {
        *temp_r3 = 0x10C;
        bta_sys_sendmsg((s32) temp_r3);
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
u8 BTA_DmAddDevice(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 BTA_DmIsDeviceUp(void);
void BTA_DmPinReply();
void BTA_DmSearch(s32 arg0, s32 arg1, s32 arg2);
void BTA_DmSetDeviceName(s32 arg0);
void BTA_DmSetVisibility();
s32 BTA_EnableBluetooth(s32 arg0);
extern void _restgpr_27();
extern void _savegpr_27();
extern void bta_sys_register();
extern void fn_802A59E8();
extern void strncpy();

// asm_to_cpp: BTA_EnableBluetooth
asm s32 BTA_EnableBluetooth(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453C14@ha
    li r5, 0x104
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, lbl_80453C14@l
    li r4, 0x0
    bl memset
    bl GKI_sched_lock
    li r3, 0x1
    la r4, lbl_804A2528
    bl bta_sys_register
    li r3, 0x2
    la r4, lbl_804A2530
    bl bta_sys_register
    bl GKI_sched_unlock
    li r3, 0xc
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A8524
    li r0, 0x100
    sth r0, 0x0(r3)
    stw r31, 0x8(r3)
    bl bta_sys_sendmsg
    li r3, 0x0
    b lbl_802A8528
lbl_802A8524:
    li r3, 0x1
lbl_802A8528:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_DmIsDeviceUp
asm s32 BTA_DmIsDeviceUp(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl GKI_sched_lock
    bl BTM_IsDeviceUp
    mr r31, r3
    bl GKI_sched_unlock
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_DmSetDeviceName
asm void BTA_DmSetDeviceName(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x28
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A85F8
    li r0, 0x102
    mr r4, r30
    sth r0, 0x0(r3)
    li r5, 0x20
    addi r3, r3, 0x8
    bl strncpy
    mr r3, r31
    bl bta_sys_sendmsg
lbl_802A85F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_DmSetVisibility
asm void BTA_DmSetVisibility() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A8650
    li r0, 0x103
    sth r0, 0x0(r3)
    stb r30, 0x8(r3)
    stb r31, 0x9(r3)
    bl bta_sys_sendmsg
lbl_802A8650:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_DmSearch
asm void BTA_DmSearch(s32 arg0, s32 arg1, s32 arg2) {
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
    li r3, 0x1c
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A86CC
    li r0, 0x200
    mr r4, r28
    sth r0, 0x0(r3)
    li r5, 0xa
    addi r3, r3, 0x8
    bl memcpy
    stw r29, 0x14(r31)
    mr r3, r31
    stw r30, 0x18(r31)
    bl bta_sys_sendmsg
lbl_802A86CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_DmPinReply
asm void BTA_DmPinReply() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    li r3, 0x20
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A8798
    li r0, 0x107
    mr r4, r27
    sth r0, 0x0(r3)
    addi r3, r3, 0x8
    bl fn_802A59E8
    cmpwi r28, 0x0
    stb r28, 0xe(r31)
    beq lbl_802A8790
    stb r29, 0xf(r31)
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x10
    bl memcpy
lbl_802A8790:
    mr r3, r31
    bl bta_sys_sendmsg
lbl_802A8798:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_DmAddDevice
asm u8 BTA_DmAddDevice(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r27, r6
    addi r3, r1, 0x8
    li r31, 0x0
    li r4, 0x0
    li r5, 0x8
    bl memset
    cmpwi r27, 0x0
    beq lbl_802A8854
    lis r7, lbl_80341648@ha
    addi r5, r1, 0x8
    addi r7, r7, lbl_80341648@l
    li r3, 0x1
    b lbl_802A8840
lbl_802A8804:
    clrlwi r0, r31, 24
    slw r4, r3, r0
    and. r0, r30, r4
    beq lbl_802A883C
    clrlslwi r0, r31, 24, 2
    andc r30, r30, r4
    lwzx r4, r7, r0
    rlwinm r0, r4, 0, 19, 26
    rlwinm r6, r4, 29, 22, 29
    subf r0, r0, r4
    lwzx r4, r5, r6
    slw r0, r3, r0
    or r0, r4, r0
    stwx r0, r5, r6
lbl_802A883C:
    addi r31, r31, 0x1
lbl_802A8840:
    cmpwi r30, 0x0
    beq lbl_802A8854
    clrlwi r0, r31, 24
    cmplwi r0, 0x17
    blt lbl_802A8804
lbl_802A8854:
    bl GKI_sched_lock
    mr r3, r28
    mr r8, r29
    addi r7, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl BTM_SecAddDevice
    mr r28, r3
    bl GKI_sched_unlock
    clrlwi r0, r28, 24
    addi r11, r1, 0x30
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
