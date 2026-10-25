#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();               /* extern */
M2C_UNK memcpy();               /* extern */
M2C_UNK memset();                   /* extern */
extern M2C_UNK lbl_80373900;
extern u8 lbl_8049E000;
extern M2C_UNK lbl_804A2538;

void BTA_HhEnable();
void BTA_HhDisable();
void BTA_HhClose();
void BTA_HhOpen();
void BTA_HhSendData();
void BTA_HhAddDev();
void BTA_HhRemoveDev();
void BTA_HhGetAclQueueInfo();


void BTA_HhDisable(void) {
    s16 *temp_r3;

    temp_r3 = GKI_getbuf(8);
    if (temp_r3 != NULL) {
        *temp_r3 = 0x170D;
        bta_sys_sendmsg((s32) temp_r3);
    }
}






// BTA_HhGetAclQueueInfo: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
void BTA_HhAddDev();
void BTA_HhClose();
void BTA_HhEnable();
void BTA_HhGetAclQueueInfo(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void BTA_HhOpen();
void BTA_HhRemoveDev();
void BTA_HhSendData();
extern void GKI_sched_lock();
extern void GKI_sched_unlock();
extern void _restgpr_26();
extern void _savegpr_26();
extern void bta_sys_register();
extern void fn_802A59E8();

// asm_to_cpp: BTA_HhEnable
asm void BTA_HhEnable() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GKI_sched_lock
    li r3, 0x17
    la r4, lbl_804A2538
    bl bta_sys_register
    bl GKI_sched_unlock
    li r3, 0x34
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAC50
    li r4, 0x0
    li r5, 0x34
    bl memset
    li r0, 0x170c
    mr r3, r31
    sth r0, 0x0(r31)
    stw r30, 0x30(r31)
    stb r29, 0x8(r31)
    bl bta_sys_sendmsg
lbl_802AAC50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_HhClose
asm void BTA_HhClose() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x8
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AACF0
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x1701
    mr r3, r31
    sth r0, 0x0(r31)
    sth r30, 0x6(r31)
    bl bta_sys_sendmsg
lbl_802AACF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_HhOpen
asm void BTA_HhOpen() {
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
    li r3, 0x10
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAD80
    li r4, 0x0
    li r5, 0x10
    bl memset
    li r3, 0x1700
    li r0, 0xff
    sth r3, 0x0(r31)
    mr r4, r28
    addi r3, r31, 0x8
    sth r0, 0x6(r31)
    stb r30, 0xe(r31)
    stb r29, 0xf(r31)
    bl fn_802A59E8
    mr r3, r31
    bl bta_sys_sendmsg
    b lbl_802AAD9C
lbl_802AAD80:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x1
    blt lbl_802AAD9C
    lis r4, lbl_80373900@ha
    li r3, 0x500
    addi r4, r4, lbl_80373900@l
    bl LogMsg_0
lbl_802AAD9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_HhSendData
asm void BTA_HhSendData() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x14
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAE30
    li r4, 0x0
    li r5, 0x14
    bl memset
    li r0, 0x1708
    li r5, 0xa
    sth r0, 0x0(r31)
    li r4, 0x0
    li r0, 0x2
    mr r3, r31
    sth r29, 0x6(r31)
    stb r5, 0x8(r31)
    sth r4, 0xc(r31)
    stb r0, 0x9(r31)
    stw r30, 0x10(r31)
    stb r4, 0xa(r31)
    bl bta_sys_sendmsg
lbl_802AAE30:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_HhAddDev
asm void BTA_HhAddDev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r3, 0x1c
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAEDC
    li r4, 0x0
    li r5, 0x1c
    bl memset
    li r0, 0x170a
    li r5, 0xb
    sth r0, 0x0(r31)
    li r0, 0xff
    mr r4, r30
    addi r3, r31, 0x14
    sth r5, 0x10(r31)
    li r5, 0x8
    sth r0, 0x6(r31)
    sth r27, 0xe(r31)
    stb r28, 0x12(r31)
    stb r29, 0x13(r31)
    bl memcpy
    mr r4, r26
    addi r3, r31, 0x8
    bl fn_802A59E8
    mr r3, r31
    bl bta_sys_sendmsg
lbl_802AAEDC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BTA_HhRemoveDev
asm void BTA_HhRemoveDev() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x1c
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAF48
    li r4, 0x0
    li r5, 0x1c
    bl memset
    li r3, 0x170a
    li r0, 0xc
    sth r3, 0x0(r31)
    mr r3, r31
    sth r0, 0x10(r31)
    sth r30, 0x6(r31)
    bl bta_sys_sendmsg
lbl_802AAF48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BTA_HhGetAclQueueInfo
asm void BTA_HhGetAclQueueInfo(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802AAFA0
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x170e
    mr r3, r31
    sth r0, 0x0(r31)
    bl bta_sys_sendmsg
lbl_802AAFA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
