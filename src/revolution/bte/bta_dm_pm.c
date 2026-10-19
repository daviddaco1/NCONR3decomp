#include "types.h"

// Translation unit: src/revolution/bte/bta_dm_pm.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern float lbl_8049CF60;
extern float lbl_8049CF64;
extern float lbl_8049CF68;
extern float lbl_8049E000;

// Global data symbols (@ha/@l)
extern u8 lbl_80341578[];
extern u8 lbl_803733B8[];
extern u8 lbl_803733E4[];
extern u8 lbl_80453C14[];
extern u8 lbl_80453D18[];

// Forward declarations
extern void BTM_PmRegister();
extern void BTM_ReadLocalVersion();
extern void BTM_ReadPowerMode();
extern void BTM_SetLinkPolicy();
extern void BTM_SetPowerMode();
extern void GKI_getbuf();
extern void LogMsg_0();
extern void _restgpr_20();
extern void _restgpr_23();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_23();
extern void _savegpr_27();
extern void bta_dm_disable_pm();
extern void bta_dm_init_pm();
extern void bta_dm_pm_btm_cback();
extern void bta_dm_pm_btm_status();
extern void bta_dm_pm_cback();
extern void bta_dm_pm_set_mode();
extern void bta_dm_pm_timer();
extern void bta_dm_pm_timer_cback();
extern void bta_sys_pm_register();
extern void bta_sys_sendmsg();
extern void bta_sys_start_timer();
extern void bta_sys_stop_timer();
extern void fn_802A59E8();
extern void fn_802A5A1C();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// bta_dm_init_pm
// ----------------------------------------------------------------------------
asm void bta_dm_init_pm() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80453D18@ha
    li r4, 0x0
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80453D18@l
    li r5, 0x2e
    bl memset
    lwz r3, lbl_8049CF60
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    beq lbl_802A8AD8
    lis r3, bta_dm_pm_cback@ha
    addi r3, r3, bta_dm_pm_cback@l
    bl bta_sys_pm_register
    lis r4, lbl_80453C14@ha
    lis r5, bta_dm_pm_btm_cback@ha
    addi r4, r4, lbl_80453C14@l
    li r3, 0x3
    addi r4, r4, 0x95
    addi r5, r5, bta_dm_pm_btm_cback@l
    bl BTM_PmRegister
lbl_802A8AD8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_disable_pm
// ----------------------------------------------------------------------------
asm void bta_dm_disable_pm() {
    nofralloc
    lis r4, lbl_80453C14@ha
    li r3, 0x4
    addi r4, r4, lbl_80453C14@l
    li r5, 0x0
    addi r4, r4, 0x95
    b BTM_PmRegister
}

// ----------------------------------------------------------------------------
// bta_dm_pm_cback
// ----------------------------------------------------------------------------
asm void bta_dm_pm_cback() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r3, r1, 0xc
    bl BTM_ReadLocalVersion
    clrlwi. r0, r3, 24
    bne lbl_802A8B9C
    lhz r0, 0x12(r1)
    cmplwi r0, 0xf
    bne lbl_802A8B9C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bge lbl_802A8B9C
    cmplwi r25, 0x4
    bne lbl_802A8B78
    lis r5, lbl_80341578@ha
    mr r3, r28
    addi r5, r5, lbl_80341578@l
    addi r4, r1, 0x8
    lhz r0, 0x4(r5)
    andi. r0, r0, 0xb
    sth r0, 0x8(r1)
    bl BTM_SetLinkPolicy
    b lbl_802A8B9C
lbl_802A8B78:
    cmplwi r25, 0x5
    bne lbl_802A8B9C
    lis r5, lbl_80341578@ha
    mr r3, r28
    addi r5, r5, lbl_80341578@l
    addi r4, r1, 0x8
    lhz r0, 0x4(r5)
    sth r0, 0x8(r1)
    bl BTM_SetLinkPolicy
lbl_802A8B9C:
    lwz r5, lbl_8049CF60
    li r30, 0x1
    lbz r4, 0x1(r5)
    b lbl_802A8BE0
lbl_802A8BAC:
    clrlwi r3, r30, 24
    clrlslwi r0, r30, 24, 2
    subf r0, r3, r0
    add r3, r5, r0
    lbzx r0, r5, r0
    cmplw r26, r0
    bne lbl_802A8BDC
    lbz r0, 0x1(r3)
    cmplwi r0, 0xff
    beq lbl_802A8BEC
    cmplw r27, r0
    beq lbl_802A8BEC
lbl_802A8BDC:
    addi r30, r30, 0x1
lbl_802A8BE0:
    clrlwi r0, r30, 24
    cmplw r0, r4
    ble lbl_802A8BAC
lbl_802A8BEC:
    lbz r0, 0x1(r5)
    clrlwi r3, r30, 24
    cmplw r3, r0
    bgt lbl_802A8E68
    lis r23, lbl_80453C14@ha
    li r31, 0x0
    addi r23, r23, lbl_80453C14@l
lbl_802A8C08:
    clrlslwi r29, r31, 24, 5
    add r24, r23, r29
    lbz r0, 0xb6(r24)
    cmpwi r0, 0x0
    beq lbl_802A8C48
    mr r4, r28
    addi r3, r24, 0xb0
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A8C48
    mr r3, r24
    addi r3, r3, 0x98
    bl bta_sys_stop_timer
    li r0, 0x0
    stb r0, 0xb6(r24)
    b lbl_802A8C54
lbl_802A8C48:
    addi r31, r31, 0x1
    cmplwi r31, 0x3
    blt lbl_802A8C08
lbl_802A8C54:
    clrlwi r4, r30, 24
    clrlslwi r3, r30, 24, 2
    subf r30, r4, r3
    lwz r0, lbl_8049CF60
    lwz r4, lbl_8049CF64
    clrlslwi r31, r25, 24, 3
    add r3, r0, r30
    lbz r0, 0x2(r3)
    mulli r0, r0, 0x4a
    add r0, r4, r0
    add r3, r0, r31
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    beq lbl_802A8E68
    lis r23, lbl_80453D18@ha
    li r29, 0x0
    addi r24, r23, lbl_80453D18@l
    b lbl_802A8CDC
lbl_802A8C9C:
    clrlwi r3, r29, 24
    clrlslwi r0, r29, 24, 3
    add r0, r0, r3
    add r3, r24, r0
    lbz r0, 0x7(r3)
    cmplw r26, r0
    bne lbl_802A8CD8
    lbz r0, 0x8(r3)
    cmplw r27, r0
    bne lbl_802A8CD8
    mr r4, r28
    addi r3, r3, 0x1
    bl fn_802A5A1C
    cmpwi r3, 0x0
    beq lbl_802A8CEC
lbl_802A8CD8:
    addi r29, r29, 0x1
lbl_802A8CDC:
    lbz r0, lbl_80453D18@l(r23)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A8C9C
lbl_802A8CEC:
    lwz r0, lbl_8049CF60
    lwz r4, lbl_8049CF64
    add r3, r0, r30
    lbz r0, 0x2(r3)
    mulli r0, r0, 0x4a
    add r0, r4, r0
    add r3, r0, r31
    lbz r0, 0x2(r3)
    cmplwi r0, 0x10
    bne lbl_802A8D80
    lis r27, lbl_80453D18@ha
    clrlwi r3, r29, 24
    lbz r0, lbl_80453D18@l(r27)
    cmplw r3, r0
    beq lbl_802A8DEC
    addi r26, r27, lbl_80453D18@l
    b lbl_802A8D64
lbl_802A8D30:
    clrlwi r6, r29, 24
    clrlslwi r4, r29, 24, 3
    addi r3, r6, 0x1
    li r5, 0x9
    slwi r0, r3, 3
    add r4, r4, r6
    add r0, r0, r3
    add r3, r26, r4
    add r4, r26, r0
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bl memcpy
    addi r29, r29, 0x1
lbl_802A8D64:
    lbz r3, lbl_80453D18@l(r27)
    clrlwi r0, r29, 24
    cmplw r0, r3
    blt lbl_802A8D30
    subi r0, r3, 0x1
    stb r0, lbl_80453D18@l(r27)
    b lbl_802A8DEC
lbl_802A8D80:
    lis r30, lbl_80453D18@ha
    clrlwi r4, r29, 24
    lbz r0, lbl_80453D18@l(r30)
    cmplw r4, r0
    bne lbl_802A8DEC
    cmplwi r0, 0x5
    bne lbl_802A8DBC
    lbz r0, lbl_8049E000
    cmplwi r0, 0x2
    blt lbl_802A8E68
    lis r4, lbl_803733B8@ha
    li r3, 0x501
    addi r4, r4, lbl_803733B8@l
    bl LogMsg_0
    b lbl_802A8E68
lbl_802A8DBC:
    clrlslwi r3, r29, 24, 3
    addi r0, r30, lbl_80453D18@l
    add r3, r3, r4
    mr r4, r28
    add r5, r0, r3
    stb r26, 0x7(r5)
    addi r3, r5, 0x1
    stb r27, 0x8(r5)
    bl fn_802A59E8
    lbz r3, lbl_80453D18@l(r30)
    addi r0, r3, 0x1
    stb r0, lbl_80453D18@l(r30)
lbl_802A8DEC:
    lis r3, lbl_80453C14@ha
    li r24, 0x0
    addi r26, r3, lbl_80453C14@l
    b lbl_802A8E30
lbl_802A8DFC:
    clrlwi r0, r24, 24
    mr r4, r28
    mulli r23, r0, 0xb
    add r3, r26, r23
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A8E2C
    add r3, r26, r23
    li r0, 0x0
    stb r0, 0x9(r3)
    stb r0, 0xa(r3)
    b lbl_802A8E40
lbl_802A8E2C:
    addi r24, r24, 0x1
lbl_802A8E30:
    lbz r0, 0x4d(r26)
    clrlwi r3, r24, 24
    cmplw r3, r0
    blt lbl_802A8DFC
lbl_802A8E40:
    lis r6, lbl_80453D18@ha
    clrlwi r5, r29, 24
    clrlslwi r0, r29, 24, 3
    mr r3, r28
    addi r6, r6, lbl_80453D18@l
    li r4, 0x0
    add r0, r0, r5
    add r5, r6, r0
    stb r25, 0x9(r5)
    bl bta_dm_pm_set_mode
lbl_802A8E68:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_pm_set_mode
// ----------------------------------------------------------------------------
asm void bta_dm_pm_set_mode() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    lis r5, lbl_80453C14@ha
    mr r20, r3
    addi r28, r5, lbl_80453C14@l
    mr r21, r4
    lbz r0, 0x4d(r28)
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    cmpwi r0, 0x0
    li r24, 0x0
    li r23, 0x0
    li r22, 0x0
    beq lbl_802A91E8
    li r30, 0x0
    b lbl_802A8EFC
lbl_802A8ED0:
    clrlwi r0, r30, 24
    mr r4, r20
    mulli r29, r0, 0xb
    add r3, r28, r29
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A8EF8
    add r24, r28, r29
    lbz r25, 0xa(r24)
    b lbl_802A8F0C
lbl_802A8EF8:
    addi r30, r30, 0x1
lbl_802A8EFC:
    lbz r0, 0x4d(r28)
    clrlwi r3, r30, 24
    cmplw r3, r0
    blt lbl_802A8ED0
lbl_802A8F0C:
    cmpwi r24, 0x0
    beq lbl_802A91E8
    lis r30, lbl_80453D18@ha
    li r28, 0x0
    addi r31, r30, lbl_80453D18@l
    b lbl_802A9050
lbl_802A8F24:
    clrlwi r3, r28, 24
    clrlslwi r0, r28, 24, 3
    add r29, r0, r3
    mr r4, r20
    add r3, r31, r29
    addi r3, r3, 0x1
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A904C
    lwz r7, lbl_8049CF60
    add r8, r31, r29
    lbz r3, 0x8(r8)
    li r9, 0x1
    lbz r6, 0x1(r7)
    lbz r4, 0x7(r8)
    b lbl_802A8F98
lbl_802A8F64:
    clrlwi r5, r9, 24
    clrlslwi r0, r9, 24, 2
    subf r0, r5, r0
    add r5, r7, r0
    lbzx r0, r7, r0
    cmplw r0, r4
    bne lbl_802A8F94
    lbz r0, 0x1(r5)
    cmplwi r0, 0xff
    beq lbl_802A8FA4
    cmplw r0, r3
    beq lbl_802A8FA4
lbl_802A8F94:
    addi r9, r9, 0x1
lbl_802A8F98:
    clrlwi r0, r9, 24
    cmplw r0, r6
    ble lbl_802A8F64
lbl_802A8FA4:
    clrlwi r3, r9, 24
    clrlslwi r0, r9, 24, 2
    subf r3, r3, r0
    lbz r0, 0x9(r8)
    add r4, r7, r3
    lwz r3, lbl_8049CF64
    lbz r4, 0x2(r4)
    slwi r0, r0, 3
    mulli r4, r4, 0x4a
    add r5, r3, r4
    add r3, r5, r0
    lbz r0, 0x0(r5)
    lbz r4, 0x2(r3)
    or r23, r23, r0
    and. r0, r25, r4
    bne lbl_802A9014
    add r3, r31, r29
    clrlwi r0, r27, 24
    lbz r3, 0x9(r3)
    slwi r3, r3, 3
    add r5, r5, r3
    lbz r3, 0x2(r5)
    cmplw r3, r0
    or r22, r22, r3
    ble lbl_802A904C
    lhz r26, 0x4(r5)
    mr r27, r4
    b lbl_802A904C
lbl_802A9014:
    lbz r3, 0x6(r3)
    and. r0, r25, r3
    bne lbl_802A904C
    add r4, r31, r29
    clrlwi r0, r27, 24
    lbz r4, 0x9(r4)
    slwi r4, r4, 3
    add r5, r5, r4
    lbz r4, 0x6(r5)
    cmplw r4, r0
    or r22, r22, r4
    ble lbl_802A904C
    mr r27, r3
    lhz r26, 0x8(r5)
lbl_802A904C:
    addi r28, r28, 0x1
lbl_802A9050:
    lbz r0, lbl_80453D18@l(r30)
    clrlwi r3, r28, 24
    cmplw r3, r0
    blt lbl_802A8F24
    clrlwi. r0, r27, 30
    beq lbl_802A9088
    clrlwi r3, r23, 24
    clrlwi r0, r27, 24
    and. r0, r3, r0
    bne lbl_802A9088
    and r0, r23, r22
    clrlwi. r27, r0, 30
    bne lbl_802A9088
    li r26, 0x0
lbl_802A9088:
    cmpwi r21, 0x0
    bne lbl_802A912C
    cmpwi r26, 0x0
    beq lbl_802A912C
    lis r21, lbl_80453C14@ha
    li r0, 0x3
    addi r21, r21, lbl_80453C14@l
    li r4, 0x0
    mtctr r0
lbl_802A90AC:
    clrlslwi r22, r4, 24, 5
    add r3, r21, r22
    lbz r0, 0xb6(r3)
    cmpwi r0, 0x0
    bne lbl_802A90F8
    li r0, 0x1
    mr r4, r20
    stb r0, 0xb6(r3)
    addi r3, r3, 0xb0
    bl fn_802A59E8
    lis r4, bta_dm_pm_timer_cback@ha
    add r3, r21, r22
    addi r4, r4, bta_dm_pm_timer_cback@l
    mr r5, r26
    stw r4, 0xa0(r3)
    addi r3, r3, 0x98
    li r4, 0x0
    bl bta_sys_start_timer
    b lbl_802A91E8
lbl_802A90F8:
    addi r4, r4, 0x1
    clrlwi r0, r4, 24
    bdnz lbl_802A90AC
    cmplwi r0, 0x3
    bne lbl_802A912C
    lbz r0, lbl_8049E000
    cmplwi r0, 0x2
    blt lbl_802A91E8
    lis r4, lbl_803733E4@ha
    li r3, 0x501
    addi r4, r4, lbl_803733E4@l
    bl LogMsg_0
    b lbl_802A91E8
lbl_802A912C:
    clrlwi. r0, r27, 24
    beq lbl_802A91E8
    cmplwi r0, 0x1
    bne lbl_802A917C
    li r0, 0x1
    mr r3, r20
    stb r0, 0x9(r24)
    addi r4, r1, 0x9
    bl BTM_ReadPowerMode
    lbz r0, 0x9(r1)
    cmplwi r0, 0x3
    beq lbl_802A91E8
    lis r3, lbl_80453C14@ha
    lwz r5, lbl_8049CF68
    addi r3, r3, lbl_80453C14@l
    mr r4, r20
    lbz r3, 0x95(r3)
    addi r5, r5, 0xa
    bl BTM_SetPowerMode
    b lbl_802A91E8
lbl_802A917C:
    cmplwi r0, 0x2
    bne lbl_802A91C0
    li r0, 0x2
    mr r3, r20
    stb r0, 0x9(r24)
    addi r4, r1, 0x8
    bl BTM_ReadPowerMode
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    beq lbl_802A91E8
    lis r3, lbl_80453C14@ha
    lwz r5, lbl_8049CF68
    addi r3, r3, lbl_80453C14@l
    mr r4, r20
    lbz r3, 0x95(r3)
    bl BTM_SetPowerMode
    b lbl_802A91E8
lbl_802A91C0:
    cmplwi r0, 0x4
    bne lbl_802A91E8
    lis r3, lbl_80453C14@ha
    li r0, 0x0
    addi r3, r3, lbl_80453C14@l
    stb r0, 0x14(r1)
    lbz r3, 0x95(r3)
    mr r4, r20
    addi r5, r1, 0xc
    bl BTM_SetPowerMode
lbl_802A91E8:
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_pm_btm_cback
// ----------------------------------------------------------------------------
asm void bta_dm_pm_btm_cback() {
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
    li r3, 0x14
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A9260
    li r0, 0x109
    mr r4, r27
    sth r0, 0x0(r3)
    stb r28, 0xe(r3)
    sth r29, 0x10(r3)
    stb r30, 0x12(r3)
    addi r3, r3, 0x8
    bl fn_802A59E8
    mr r3, r31
    bl bta_sys_sendmsg
lbl_802A9260:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_pm_timer_cback
// ----------------------------------------------------------------------------
asm void bta_dm_pm_timer_cback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453C14@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80453C14@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r30, 0x0
    lbz r0, 0xb6(r4)
    cmpwi r0, 0x0
    beq lbl_802A92BC
    addi r0, r4, 0x98
    cmplw r0, r3
    bne lbl_802A92BC
    li r0, 0x0
    stb r0, 0xb6(r4)
    b lbl_802A9310
lbl_802A92BC:
    lbz r0, 0xd6(r4)
    li r30, 0x1
    cmpwi r0, 0x0
    beq lbl_802A92E4
    addi r0, r4, 0xb8
    cmplw r0, r3
    bne lbl_802A92E4
    li r0, 0x0
    stb r0, 0xd6(r4)
    b lbl_802A9310
lbl_802A92E4:
    lbz r0, 0xf6(r4)
    li r30, 0x2
    cmpwi r0, 0x0
    beq lbl_802A930C
    addi r0, r4, 0xd8
    cmplw r0, r3
    bne lbl_802A930C
    li r0, 0x0
    stb r0, 0xf6(r4)
    b lbl_802A9310
lbl_802A930C:
    li r30, 0x3
lbl_802A9310:
    cmplwi r30, 0x3
    beq lbl_802A9358
    li r3, 0xe
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A9358
    lis r4, lbl_80453C14@ha
    li r5, 0x10a
    addi r4, r4, lbl_80453C14@l
    clrlslwi r0, r30, 24, 5
    sth r5, 0x0(r3)
    add r4, r4, r0
    addi r4, r4, 0xb0
    addi r3, r3, 0x8
    bl fn_802A59E8
    mr r3, r31
    bl bta_sys_sendmsg
lbl_802A9358:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_pm_btm_status
// ----------------------------------------------------------------------------
asm void bta_dm_pm_btm_status() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80453C14@ha
    mr r31, r3
    addi r30, r30, lbl_80453C14@l
    li r27, 0x0
lbl_802A9394:
    clrlslwi r28, r27, 24, 5
    add r29, r30, r28
    lbz r0, 0xb6(r29)
    cmpwi r0, 0x0
    beq lbl_802A93D4
    addi r3, r29, 0xb0
    addi r4, r31, 0x8
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A93D4
    mr r3, r29
    addi r3, r3, 0x98
    bl bta_sys_stop_timer
    li r0, 0x0
    stb r0, 0xb6(r29)
    b lbl_802A93E0
lbl_802A93D4:
    addi r27, r27, 0x1
    cmplwi r27, 0x3
    blt lbl_802A9394
lbl_802A93E0:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    beq lbl_802A93F0
    b lbl_802A9478
lbl_802A93F0:
    lbz r0, 0x12(r31)
    cmpwi r0, 0x0
    beq lbl_802A946C
    lis r3, lbl_80453C14@ha
    li r29, 0x0
    addi r30, r3, lbl_80453C14@l
    b lbl_802A9458
lbl_802A940C:
    clrlwi r0, r29, 24
    addi r4, r31, 0x8
    mulli r28, r0, 0xb
    add r3, r30, r28
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A9454
    add r5, r30, r28
    lbz r0, 0x9(r5)
    clrlwi. r6, r0, 30
    beq lbl_802A9478
    lbz r0, 0xa(r5)
    addi r3, r31, 0x8
    li r4, 0x0
    or r0, r0, r6
    stb r0, 0xa(r5)
    bl bta_dm_pm_set_mode
    b lbl_802A9478
lbl_802A9454:
    addi r29, r29, 0x1
lbl_802A9458:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A940C
    b lbl_802A9478
lbl_802A946C:
    addi r3, r31, 0x8
    li r4, 0x0
    bl bta_dm_pm_set_mode
lbl_802A9478:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_dm_pm_timer
// ----------------------------------------------------------------------------
asm void bta_dm_pm_timer() {
    nofralloc
    li r4, 0x1
    addi r3, r3, 0x8
    b bta_dm_pm_set_mode
}

