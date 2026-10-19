#include "types.h"

// Translation unit: src/revolution/bte/unk_802A3610.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
extern u8 lbl_803731B8[];
extern u8 lbl_804276C0[];

// Forward declarations
extern void GKI_delete_pool();
extern void GKI_disable();
extern void GKI_enable();
extern void GKI_exception();
extern void GKI_os_free();
extern void _restgpr_26();
extern void _savegpr_26();

// ----------------------------------------------------------------------------
// GKI_delete_pool
// ----------------------------------------------------------------------------
asm void GKI_delete_pool() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r27, lbl_804276C0@ha
    cmplwi r3, 0x9
    addi r27, r27, lbl_804276C0@l
    mr r30, r3
    addi r31, r27, 0x54
    bge lbl_802A3758
    clrlslwi r26, r3, 24, 2
    addis r0, r31, 0x3
    add r3, r0, r26
    lwz r0, -0x75e4(r3)
    cmpwi r0, 0x0
    bne lbl_802A3658
    b lbl_802A3758
lbl_802A3658:
    bl GKI_disable
    addis r4, r31, 0x3
    clrlslwi r0, r30, 24, 4
    add r3, r4, r0
    lhz r0, -0x7668(r3)
    cmpwi r0, 0x0
    bne lbl_802A373C
    li r28, 0x0
    add r29, r4, r26
    sth r28, -0x766c(r3)
    sth r28, -0x766a(r3)
    sth r28, -0x7668(r3)
    sth r28, -0x7666(r3)
    stw r28, -0x7674(r3)
    stw r28, -0x7670(r3)
    lwz r3, -0x75e4(r29)
    bl GKI_os_free
    addis r4, r31, 0x3
    stw r28, -0x75e4(r29)
    add r3, r4, r26
    clrlslwi r0, r30, 24, 1
    stw r28, -0x75c0(r3)
    add r3, r4, r0
    mr r7, r31
    li r6, 0x0
    sth r28, -0x759c(r3)
    lbz r4, -0x7579(r4)
    b lbl_802A36E4
lbl_802A36C8:
    clrlwi r3, r6, 24
    addis r3, r3, 0x3
    subi r0, r3, 0x7582
    lbzx r0, r7, r0
    cmplw r30, r0
    beq lbl_802A36F0
    addi r6, r6, 0x1
lbl_802A36E4:
    clrlwi r0, r6, 24
    cmplw r0, r4
    blt lbl_802A36C8
lbl_802A36F0:
    addis r4, r7, 0x3
    b lbl_802A3714
lbl_802A36F8:
    clrlwi r3, r6, 24
    addi r6, r6, 0x1
    addis r3, r3, 0x3
    subi r3, r3, 0x7582
    add r3, r7, r3
    lbz r0, 0x1(r3)
    stb r0, 0x0(r3)
lbl_802A3714:
    lbz r3, -0x7579(r4)
    clrlwi r5, r6, 24
    subi r0, r3, 0x1
    cmpw r5, r0
    blt lbl_802A36F8
    addis r4, r31, 0x3
    lbz r3, -0x7579(r4)
    subi r0, r3, 0x1
    stb r0, -0x7579(r4)
    b lbl_802A3754
lbl_802A373C:
    lis r3, 0x1
    lis r4, lbl_803731B8@ha
    subi r0, r3, 0x8
    clrlwi r3, r0, 16
    addi r4, r4, lbl_803731B8@l
    bl GKI_exception
lbl_802A3754:
    bl GKI_enable
lbl_802A3758:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

