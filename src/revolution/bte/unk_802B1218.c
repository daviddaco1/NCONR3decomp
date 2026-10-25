#include "types.h"

// Translation unit: src/revolution/bte/unk_802B1218.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
extern u8 lbl_80453F78[];

// Forward declarations
extern void btm_acl_init();
extern void btm_dev_init();
extern void btm_inq_db_init();
extern void btm_sco_init();
extern void btm_sec_init();
extern void fn_802B1218();
extern void memset();

// ----------------------------------------------------------------------------
// fn_802B1218
// ----------------------------------------------------------------------------
asm void fn_802B1218() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x27c4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453F78@ha
    addi r3, r31, lbl_80453F78@l
    bl memset
    addi r3, r31, lbl_80453F78@l
    li r0, 0x0
    stb r0, 0x27c0(r3)
    bl btm_inq_db_init
    bl btm_acl_init
    li r3, 0x2
    bl btm_sec_init
    bl btm_sco_init
    bl btm_dev_init
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

