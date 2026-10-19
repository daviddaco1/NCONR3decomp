#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/ansi_files.cpp
// Total functions: 3

// Global data symbols (@ha/@l)
u8 __files[];

// Forward declarations
void __close_all();
void free();
void fn_80196260();
void __flush_all();
void fclose();
void fflush();

// ----------------------------------------------------------------------------
// __close_all
// ----------------------------------------------------------------------------
asm void __close_all() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x3
    stw r29, 0x14(r1)
    lis r29, __files@ha
    addi r29, r29, __files@l
    b lbl_8019623C
lbl_801961E8:
    lwz r0, 0x4(r29)
    extrwi. r0, r0, 3, 7
    beq lbl_801961FC
    mr r3, r29
    bl fclose
lbl_801961FC:
    mr r3, r29
    lwz r29, 0x4c(r29)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80196218
    bl free
    b lbl_8019623C
lbl_80196218:
    lwz r0, 0x4(r3)
    cmpwi r29, 0x0
    rlwimi r0, r30, 22, 7, 9
    stw r0, 0x4(r3)
    beq lbl_8019623C
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_8019623C
    stw r31, 0x4c(r3)
lbl_8019623C:
    cmpwi r29, 0x0
    bne lbl_801961E8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80196260
// ----------------------------------------------------------------------------
asm void fn_80196260() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, __files@ha
    addi r30, r30, __files@l
    b lbl_801962C0
lbl_80196284:
    lwz r3, 0x4(r30)
    extrwi. r0, r3, 3, 7
    beq lbl_801962BC
    extrwi. r0, r3, 1, 6
    beq lbl_801962BC
    lwz r0, 0x8(r30)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    bne lbl_801962BC
    mr r3, r30
    bl fflush
    cmpwi r3, 0x0
    beq lbl_801962BC
    li r31, -0x1
lbl_801962BC:
    lwz r30, 0x4c(r30)
lbl_801962C0:
    cmpwi r30, 0x0
    bne lbl_80196284
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __flush_all
// ----------------------------------------------------------------------------
asm void __flush_all() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, __files@ha
    addi r30, r30, __files@l
    b lbl_8019632C
lbl_80196308:
    lwz r0, 0x4(r30)
    extrwi. r0, r0, 3, 7
    beq lbl_80196328
    mr r3, r30
    bl fflush
    cmpwi r3, 0x0
    beq lbl_80196328
    li r31, -0x1
lbl_80196328:
    lwz r30, 0x4c(r30)
lbl_8019632C:
    cmpwi r30, 0x0
    bne lbl_80196308
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

