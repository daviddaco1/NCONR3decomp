#include "types.h"

// Translation unit: src/revolution/bte/bta_sys_conn.cpp
// Total functions: 8

// Global data symbols (@ha/@l)
extern u8 lbl_80453AD8[];

// Forward declarations
extern void bta_sys_busy();
extern void bta_sys_compress_register();
extern void bta_sys_conn_close();
extern void bta_sys_conn_open();
extern void bta_sys_idle();
extern void bta_sys_pm_register();
extern void bta_sys_rm_register();
extern void bta_sys_sco_close();

// ----------------------------------------------------------------------------
// bta_sys_rm_register
// ----------------------------------------------------------------------------
asm void bta_sys_rm_register() {
    nofralloc
    lis r4, lbl_80453AD8@ha
    addi r4, r4, lbl_80453AD8@l
    stw r3, 0x80(r4)
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_compress_register
// ----------------------------------------------------------------------------
asm void bta_sys_compress_register() {
    nofralloc
    lis r4, lbl_80453AD8@ha
    addi r4, r4, lbl_80453AD8@l
    stw r3, 0x88(r4)
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_pm_register
// ----------------------------------------------------------------------------
asm void bta_sys_pm_register() {
    nofralloc
    lis r4, lbl_80453AD8@ha
    addi r4, r4, lbl_80453AD8@l
    stw r3, 0x84(r4)
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_conn_open
// ----------------------------------------------------------------------------
asm void bta_sys_conn_open() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80453AD8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80453AD8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x80(r6)
    cmpwi r12, 0x0
    beq lbl_802A5B3C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802A5B3C:
    lis r3, lbl_80453AD8@ha
    addi r3, r3, lbl_80453AD8@l
    lwz r12, 0x84(r3)
    cmpwi r12, 0x0
    beq lbl_802A5B68
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802A5B68:
    lis r3, lbl_80453AD8@ha
    addi r3, r3, lbl_80453AD8@l
    lwz r12, 0x88(r3)
    cmpwi r12, 0x0
    beq lbl_802A5B94
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x0
    mtctr r12
    bctrl
lbl_802A5B94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_conn_close
// ----------------------------------------------------------------------------
asm void bta_sys_conn_close() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80453AD8@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80453AD8@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r12, 0x80(r6)
    cmpwi r12, 0x0
    beq lbl_802A5C00
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_802A5C00:
    lis r3, lbl_80453AD8@ha
    addi r3, r3, lbl_80453AD8@l
    lwz r12, 0x84(r3)
    cmpwi r12, 0x0
    beq lbl_802A5C2C
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_802A5C2C:
    lis r3, lbl_80453AD8@ha
    addi r3, r3, lbl_80453AD8@l
    lwz r12, 0x88(r3)
    cmpwi r12, 0x0
    beq lbl_802A5C58
    mr r4, r29
    mr r5, r30
    mr r6, r31
    li r3, 0x1
    mtctr r12
    bctrl
lbl_802A5C58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_sco_close
// ----------------------------------------------------------------------------
asm void bta_sys_sco_close() {
    nofralloc
    lis r6, lbl_80453AD8@ha
    mr r0, r4
    addi r6, r6, lbl_80453AD8@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x5
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_idle
// ----------------------------------------------------------------------------
asm void bta_sys_idle() {
    nofralloc
    lis r6, lbl_80453AD8@ha
    mr r0, r4
    addi r6, r6, lbl_80453AD8@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x6
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_busy
// ----------------------------------------------------------------------------
asm void bta_sys_busy() {
    nofralloc
    lis r6, lbl_80453AD8@ha
    mr r0, r4
    addi r6, r6, lbl_80453AD8@l
    lwz r12, 0x84(r6)
    mr r6, r5
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    mr r5, r0
    li r3, 0x7
    mtctr r12
    bctr
    blr
}

