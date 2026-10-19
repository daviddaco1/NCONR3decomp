#include "types.h"

// Translation unit: src/revolution/gx/unk_802E4808.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float __GXData;

// Global data symbols (@ha/@l)
extern u8 lbl_8037B130[];

// Forward declarations
extern void fn_802E4808();
extern void fn_802E4840();
extern void fn_802E48CC();
extern void fn_802E4A28();

// ----------------------------------------------------------------------------
// fn_802E4808
// ----------------------------------------------------------------------------
asm void fn_802E4808() {
    nofralloc
    lis r8, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r8)
    lis r9, 0xf300
    rlwimi r9, r4, 0, 24, 31
    lwz r4, __GXData
    rlwimi r9, r7, 8, 16, 23
    li r0, 0x0
    rlwimi r9, r3, 16, 13, 15
    rlwimi r9, r6, 19, 10, 12
    rlwimi r9, r5, 22, 8, 9
    stw r9, -0x8000(r8)
    sth r0, 0x2(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E4840
// ----------------------------------------------------------------------------
asm void fn_802E4840() {
    nofralloc
    cmpwi r4, 0x13
    li r7, 0x0
    li r0, 0xf4
    rlwimi r7, r5, 0, 8, 31
    rlwimi r7, r0, 24, 0, 7
    beq lbl_802E487C
    bge lbl_802E4868
    cmpwi r4, 0x11
    beq lbl_802E4874
    b lbl_802E488C
lbl_802E4868:
    cmpwi r4, 0x16
    beq lbl_802E4884
    b lbl_802E488C
lbl_802E4874:
    li r5, 0x0
    b lbl_802E4890
lbl_802E487C:
    li r5, 0x1
    b lbl_802E4890
lbl_802E4884:
    li r5, 0x2
    b lbl_802E4890
lbl_802E488C:
    li r5, 0x2
lbl_802E4890:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r6, 0x0
    rlwimi r6, r5, 0, 30, 31
    li r5, 0xf5
    stw r7, -0x8000(r4)
    rlwimi r6, r3, 2, 28, 29
    rlwimi r6, r5, 24, 0, 7
    lwz r3, __GXData
    stb r0, -0x8000(r4)
    li r0, 0x0
    stw r6, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E48CC
// ----------------------------------------------------------------------------
asm void fn_802E48CC() {
    nofralloc
    rlwinm r11, r5, 0, 24, 22
    li r7, 0x8
    srwi r9, r3, 31
    lwz r10, __GXData
    subfc r0, r7, r11
    slwi r8, r3, 2
    addze r0, r7
    add r9, r9, r3
    add r7, r10, r8
    cmpwi r4, 0x8
    extlwi r8, r9, 30, 1
    subfic r0, r0, 0x8
    stw r5, 0x5a4(r7)
    add r7, r10, r8
    andc r9, r11, r0
    blt lbl_802E4928
    li r0, 0x1
    lwz r8, 0x5e8(r10)
    slw r0, r0, r3
    li r4, 0x0
    andc r0, r8, r0
    stw r0, 0x5e8(r10)
    b lbl_802E493C
lbl_802E4928:
    li r0, 0x1
    lwz r8, 0x5e8(r10)
    slw r0, r0, r3
    or r0, r8, r0
    stw r0, 0x5e8(r10)
lbl_802E493C:
    clrlwi. r0, r3, 31
    beq lbl_802E49A0
    lwz r8, 0x150(r7)
    rlwimi r8, r9, 12, 17, 19
    rlwimi r8, r4, 15, 14, 16
    cmpwi r6, 0xff
    stw r8, 0x150(r7)
    bne lbl_802E4964
    li r0, 0x7
    b lbl_802E4974
lbl_802E4964:
    lis r3, lbl_8037B130@ha
    slwi r0, r6, 2
    addi r3, r3, lbl_8037B130@l
    lwzx r0, r3, r0
lbl_802E4974:
    rlwimi r8, r0, 19, 10, 12
    cmpwi r5, 0xff
    stw r8, 0x150(r7)
    li r3, 0x0
    beq lbl_802E4994
    rlwinm. r0, r5, 0, 23, 23
    bne lbl_802E4994
    li r3, 0x1
lbl_802E4994:
    rlwimi r8, r3, 18, 13, 13
    stw r8, 0x150(r7)
    b lbl_802E49F8
lbl_802E49A0:
    lwz r8, 0x150(r7)
    rlwimi r8, r9, 0, 29, 31
    rlwimi r8, r4, 3, 26, 28
    cmpwi r6, 0xff
    stw r8, 0x150(r7)
    bne lbl_802E49C0
    li r0, 0x7
    b lbl_802E49D0
lbl_802E49C0:
    lis r3, lbl_8037B130@ha
    slwi r0, r6, 2
    addi r3, r3, lbl_8037B130@l
    lwzx r0, r3, r0
lbl_802E49D0:
    rlwimi r8, r0, 7, 22, 24
    cmpwi r5, 0xff
    stw r8, 0x150(r7)
    li r3, 0x0
    beq lbl_802E49F0
    rlwinm. r0, r5, 0, 23, 23
    bne lbl_802E49F0
    li r3, 0x1
lbl_802E49F0:
    rlwimi r8, r3, 6, 25, 25
    stw r8, 0x150(r7)
lbl_802E49F8:
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x150(r7)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x1
    stw r0, 0x5fc(r5)
    blr
}

// ----------------------------------------------------------------------------
// fn_802E4A28
// ----------------------------------------------------------------------------
asm void fn_802E4A28() {
    nofralloc
    lwz r4, __GXData
    subi r0, r3, 0x1
    lwz r3, 0x254(r4)
    rlwimi r3, r0, 10, 18, 21
    stw r3, 0x254(r4)
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x4
    stw r0, 0x5fc(r4)
    blr
}

