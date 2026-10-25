#include "types.h"

// Translation unit: src/revolution/bte/bta_hh_main.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern float lbl_8049E000;

// Global data symbols (@ha/@l)
extern u8 jumptable_80373BD0[];
extern u8 lbl_803417E8[];
extern u8 lbl_80341860[];
extern u8 lbl_80373930[];
extern u8 lbl_80373A0C[];
extern u8 lbl_80453D48[];

// Forward declarations
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void _restgpr_26();
extern void _savegpr_26();
extern void bta_hh_api_disable();
extern void bta_hh_api_enable();
extern void bta_hh_disc_cmpl();
extern void bta_hh_evt_code();
extern void bta_hh_find_cb();
extern void bta_hh_get_acl_q_info();
extern void bta_hh_hdl_event();
extern void bta_hh_sm_execute();
extern void fn_802A59E8();
extern void memset();

// ----------------------------------------------------------------------------
// bta_hh_sm_execute
// ----------------------------------------------------------------------------
asm void bta_hh_sm_execute() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    lis r31, lbl_80373930@ha
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r31, lbl_80373930@l
    addi r3, r1, 0x8
    li r30, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r27, 0x0
    bne lbl_802AB14C
    lis r3, lbl_80453D48@ha
    addi r3, r3, lbl_80453D48@l
    lwz r0, 0x224(r3)
    cmpwi r0, 0x0
    beq lbl_802AB2F0
    cmpwi r28, 0x1708
    beq lbl_802AB0A0
    bge lbl_802AB030
    cmpwi r28, 0x1701
    beq lbl_802AB0F4
    bge lbl_802AB10C
    cmpwi r28, 0x1700
    bge lbl_802AB03C
    b lbl_802AB10C
lbl_802AB030:
    cmpwi r28, 0x170a
    beq lbl_802AB060
    b lbl_802AB10C
lbl_802AB03C:
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    li r30, 0x2
    bl fn_802A59E8
    li r3, 0x9
    li r0, 0xff
    stb r3, 0xe(r1)
    stb r0, 0xf(r1)
    b lbl_802AB128
lbl_802AB060:
    lhz r30, 0x10(r29)
    cmplwi r30, 0xb
    bne lbl_802AB08C
    addi r3, r1, 0x8
    addi r4, r29, 0x8
    bl fn_802A59E8
    li r3, 0x9
    li r0, 0xff
    stb r3, 0xe(r1)
    stb r0, 0xf(r1)
    b lbl_802AB128
lbl_802AB08C:
    li r0, 0xd
    stb r0, 0xe(r1)
    lhz r0, 0x6(r29)
    stb r0, 0xf(r1)
    b lbl_802AB128
lbl_802AB0A0:
    lbz r30, 0x8(r29)
    cmplwi r30, 0x7
    beq lbl_802AB0BC
    cmplwi r30, 0x5
    beq lbl_802AB0BC
    cmplwi r30, 0x9
    bne lbl_802AB0D0
lbl_802AB0BC:
    li r0, 0xd
    stb r0, 0x8(r1)
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    b lbl_802AB128
lbl_802AB0D0:
    cmplwi r30, 0xa
    beq lbl_802AB128
    cmplwi r30, 0x1
    beq lbl_802AB128
    lhz r3, 0x6(r29)
    li r0, 0xd
    stb r3, 0x9(r1)
    stb r0, 0x8(r1)
    b lbl_802AB128
lbl_802AB0F4:
    li r0, 0xd
    li r30, 0x3
    stb r0, 0x8(r1)
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    b lbl_802AB128
lbl_802AB10C:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x1
    blt lbl_802AB128
    lhz r5, 0x6(r29)
    addi r4, r31, 0x0
    li r3, 0x500
    bl LogMsg_1
lbl_802AB128:
    clrlwi. r3, r30, 16
    beq lbl_802AB2F0
    lis r5, lbl_80453D48@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453D48@l
    lwz r12, 0x224(r5)
    mtctr r12
    bctrl
    b lbl_802AB2F0
lbl_802AB14C:
    lbz r0, lbl_8049E000
    lbz r30, 0x1c(r27)
    cmplwi r0, 0x4
    blt lbl_802AB1C8
    cmpwi r30, 0x2
    beq lbl_802AB194
    bge lbl_802AB178
    cmpwi r30, 0x0
    beq lbl_802AB184
    bge lbl_802AB18C
    b lbl_802AB1A4
lbl_802AB178:
    cmpwi r30, 0x4
    bge lbl_802AB1A4
    b lbl_802AB19C
lbl_802AB184:
    addi r26, r31, 0x1c
    b lbl_802AB1A8
lbl_802AB18C:
    addi r26, r31, 0x2c
    b lbl_802AB1A8
lbl_802AB194:
    addi r26, r31, 0x3c
    b lbl_802AB1A8
lbl_802AB19C:
    addi r26, r31, 0x50
    b lbl_802AB1A8
lbl_802AB1A4:
    addi r26, r31, 0x60
lbl_802AB1A8:
    mr r3, r28
    bl bta_hh_evt_code
    mr r7, r3
    mr r5, r30
    mr r6, r26
    addi r4, r31, 0x78
    li r3, 0x503
    bl LogMsg_3
lbl_802AB1C8:
    lbz r4, 0x1c(r27)
    lis r3, lbl_80341860@ha
    addi r3, r3, lbl_80341860@l
    clrlwi r28, r28, 24
    subi r0, r4, 0x1
    slwi r0, r0, 2
    slwi r4, r28, 1
    lwzx r5, r3, r0
    add r3, r5, r4
    lbz r0, 0x1(r3)
    stb r0, 0x1c(r27)
    lbzx r0, r5, r4
    cmplwi r0, 0xc
    beq lbl_802AB220
    lis r4, lbl_803417E8@ha
    clrlslwi r0, r0, 24, 2
    addi r4, r4, lbl_803417E8@l
    mr r3, r27
    lwzx r12, r4, r0
    mr r4, r29
    mtctr r12
    bctrl
lbl_802AB220:
    lbz r3, 0x1c(r27)
    cmplw r30, r3
    beq lbl_802AB2F0
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB2F0
    cmpwi r30, 0x2
    beq lbl_802AB270
    bge lbl_802AB254
    cmpwi r30, 0x0
    beq lbl_802AB260
    bge lbl_802AB268
    b lbl_802AB280
lbl_802AB254:
    cmpwi r30, 0x4
    bge lbl_802AB280
    b lbl_802AB278
lbl_802AB260:
    addi r26, r31, 0x1c
    b lbl_802AB284
lbl_802AB268:
    addi r26, r31, 0x2c
    b lbl_802AB284
lbl_802AB270:
    addi r26, r31, 0x3c
    b lbl_802AB284
lbl_802AB278:
    addi r26, r31, 0x50
    b lbl_802AB284
lbl_802AB280:
    addi r26, r31, 0x60
lbl_802AB284:
    cmpwi r3, 0x2
    beq lbl_802AB2BC
    bge lbl_802AB2A0
    cmpwi r3, 0x0
    beq lbl_802AB2AC
    bge lbl_802AB2B4
    b lbl_802AB2CC
lbl_802AB2A0:
    cmpwi r3, 0x4
    bge lbl_802AB2CC
    b lbl_802AB2C4
lbl_802AB2AC:
    addi r27, r31, 0x1c
    b lbl_802AB2D0
lbl_802AB2B4:
    addi r27, r31, 0x2c
    b lbl_802AB2D0
lbl_802AB2BC:
    addi r27, r31, 0x3c
    b lbl_802AB2D0
lbl_802AB2C4:
    addi r27, r31, 0x50
    b lbl_802AB2D0
lbl_802AB2CC:
    addi r27, r31, 0x60
lbl_802AB2D0:
    mr r3, r28
    bl bta_hh_evt_code
    mr r7, r3
    mr r5, r26
    mr r6, r27
    addi r4, r31, 0xac
    li r3, 0x504
    bl LogMsg_3
lbl_802AB2F0:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_hdl_event
// ----------------------------------------------------------------------------
asm void bta_hh_hdl_event() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x10
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0x0(r3)
    cmpwi r0, 0x170e
    beq lbl_802AB36C
    bge lbl_802AB348
    cmpwi r0, 0x170c
    beq lbl_802AB354
    bge lbl_802AB35C
    b lbl_802AB374
lbl_802AB348:
    cmpwi r0, 0x1710
    bge lbl_802AB374
    b lbl_802AB364
lbl_802AB354:
    bl bta_hh_api_enable
    b lbl_802AB438
lbl_802AB35C:
    bl bta_hh_api_disable
    b lbl_802AB438
lbl_802AB364:
    bl bta_hh_disc_cmpl
    b lbl_802AB438
lbl_802AB36C:
    bl bta_hh_get_acl_q_info
    b lbl_802AB438
lbl_802AB374:
    cmplwi r0, 0x1700
    bne lbl_802AB38C
    addi r3, r3, 0x8
    bl bta_hh_find_cb
    mr r6, r3
    b lbl_802AB3E4
lbl_802AB38C:
    cmplwi r0, 0x170a
    bne lbl_802AB3C8
    lhz r0, 0x10(r3)
    cmplwi r0, 0xb
    bne lbl_802AB3B0
    addi r3, r3, 0x8
    bl bta_hh_find_cb
    mr r6, r3
    b lbl_802AB3E4
lbl_802AB3B0:
    lis r4, lbl_80453D48@ha
    lhz r0, 0x6(r3)
    addi r4, r4, lbl_80453D48@l
    add r3, r4, r0
    lbz r6, 0x214(r3)
    b lbl_802AB3E4
lbl_802AB3C8:
    lhz r0, 0x6(r3)
    cmplwi r0, 0x10
    bge lbl_802AB3E4
    lis r3, lbl_80453D48@ha
    addi r3, r3, lbl_80453D48@l
    add r3, r3, r0
    lbz r6, 0x214(r3)
lbl_802AB3E4:
    clrlwi r0, r6, 24
    cmplwi r0, 0x10
    beq lbl_802AB404
    lis r3, lbl_80453D48@ha
    clrlslwi r0, r6, 24, 5
    addi r3, r3, lbl_80453D48@l
    add r3, r3, r0
    addi r31, r3, 0x10
lbl_802AB404:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB428
    lis r4, lbl_80373A0C@ha
    lhz r5, 0x6(r30)
    addi r4, r4, lbl_80373A0C@l
    clrlwi r6, r6, 24
    li r3, 0x504
    bl LogMsg_2
lbl_802AB428:
    lhz r4, 0x0(r30)
    mr r3, r31
    mr r5, r30
    bl bta_hh_sm_execute
lbl_802AB438:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_evt_code
// ----------------------------------------------------------------------------
asm void bta_hh_evt_code() {
    nofralloc
    subi r0, r3, 0x1700
    lis r4, lbl_80373930@ha
    cmplwi r0, 0xf
    addi r4, r4, lbl_80373930@l
    bgt lbl_802AB500
    lis r3, jumptable_80373BD0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80373BD0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r3, r4, 0x108
    blr
    addi r3, r4, 0x120
    blr
    addi r3, r4, 0x138
    blr
    addi r3, r4, 0x14c
    blr
    addi r3, r4, 0x164
    blr
    addi r3, r4, 0x178
    blr
    addi r3, r4, 0x190
    blr
    addi r3, r4, 0x1a8
    blr
    addi r3, r4, 0x1bc
    blr
    addi r3, r4, 0x1d4
    blr
    addi r3, r4, 0x1f0
    blr
    addi r3, r4, 0x204
    blr
    addi r3, r4, 0x21c
    blr
    addi r3, r4, 0x238
    blr
    addi r3, r4, 0x250
    blr
    addi r3, r4, 0x268
    blr
lbl_802AB500:
    addi r3, r4, 0x284
    blr
}

