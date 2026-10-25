#include "types.h"

// Translation unit: src/revolution/os/unk_80314804.cpp
// Total functions: 1

// Forward declarations
extern void DLInsert();

// ----------------------------------------------------------------------------
// DLInsert
// ----------------------------------------------------------------------------
asm void DLInsert() {
    nofralloc
    mr r7, r3
    li r6, 0x0
    b lbl_80314820
lbl_80314810:
    cmplw r4, r7
    ble lbl_80314828
    mr r6, r7
    lwz r7, 0x4(r7)
lbl_80314820:
    cmpwi r7, 0x0
    bne lbl_80314810
lbl_80314828:
    cmpwi r7, 0x0
    stw r7, 0x4(r4)
    stw r6, 0x0(r4)
    beq lbl_8031486C
    stw r4, 0x0(r7)
    lwz r5, 0x8(r4)
    add r0, r4, r5
    cmplw r0, r7
    bne lbl_8031486C
    lwz r0, 0x8(r7)
    add r0, r5, r0
    stw r0, 0x8(r4)
    lwz r7, 0x4(r7)
    cmpwi r7, 0x0
    stw r7, 0x4(r4)
    beq lbl_8031486C
    stw r4, 0x0(r7)
lbl_8031486C:
    cmpwi r6, 0x0
    beq lbl_803148A8
    stw r4, 0x4(r6)
    lwz r5, 0x8(r6)
    add r0, r6, r5
    cmplw r0, r4
    bnelr
    lwz r0, 0x8(r4)
    cmpwi r7, 0x0
    add r0, r5, r0
    stw r0, 0x8(r6)
    stw r7, 0x4(r6)
    beqlr
    stw r6, 0x0(r7)
    blr
lbl_803148A8:
    mr r3, r4
    blr
}

