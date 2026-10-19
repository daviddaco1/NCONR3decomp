#include "types.h"

// Translation unit: src/revolution/bte/bte_hcisu.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049DFE8;
extern float lbl_8049DFEC;

// Forward declarations
extern void GKI_freebuf();
extern void GKI_send_msg();
extern void bta_ci_hci_msg_handler();
extern void bte_hcisu_close();
extern void bte_hcisu_send();
extern void bte_hcisu_task();

// ----------------------------------------------------------------------------
// bte_hcisu_send
// ----------------------------------------------------------------------------
asm void bte_hcisu_send() {
    nofralloc
    sth r4, 0x0(r3)
    lwz r4, lbl_8049DFE8
    cmpwi r4, 0x0
    beq lbl_802A5214
    lwz r12, 0xc(r4)
    mtctr r12
    bctr
lbl_802A5214:
    b GKI_freebuf
}

// ----------------------------------------------------------------------------
// bte_hcisu_task
// ----------------------------------------------------------------------------
asm void bte_hcisu_task() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049DFE8
    cmpwi r3, 0x0
    beq lbl_802A526C
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_802A5250
    li r3, 0x2
    li r4, 0x1
    li r5, 0x800
    mtctr r12
    bctrl
lbl_802A5250:
    lwz r3, lbl_8049DFE8
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_802A526C
    lwz r3, lbl_8049DFEC
    mtctr r12
    bctrl
lbl_802A526C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bte_hcisu_close
// ----------------------------------------------------------------------------
asm void bte_hcisu_close() {
    nofralloc
    lwz r3, lbl_8049DFE8
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// bta_ci_hci_msg_handler
// ----------------------------------------------------------------------------
asm void bta_ci_hci_msg_handler() {
    nofralloc
    mr r5, r3
    li r3, 0x2
    li r4, 0x0
    b GKI_send_msg
}

