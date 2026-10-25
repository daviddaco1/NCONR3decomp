#include "types.h"

// Translation unit: src/nw4r/snd/unk_80253BA0.cpp
// Total functions: 4

// Forward declarations
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void fn_80253BA0();
extern "C" void fn_80253D38();
extern "C" void fn_80253DD4();
extern "C" void fn_80253E78();
extern "C" void memmove();

// ----------------------------------------------------------------------------
// fn_80253BA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80253BA0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r28, r3
    mr r29, r4
    mr r30, r5
    li r31, 0x1
    beq lbl_80253BD8
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_80253BE0
lbl_80253BD8:
    li r3, -0x1
    b lbl_80253D20
lbl_80253BE0:
    cmpwi r7, 0x0
    beq lbl_80253C80
    cmpwi r6, 0x0
    blt lbl_80253BF8
    cmpw r6, r5
    blt lbl_80253C00
lbl_80253BF8:
    li r27, 0x0
    b lbl_80253C10
lbl_80253C00:
    lwz r0, 0x8(r3)
    lwz r4, 0x14(r3)
    mullw r0, r0, r6
    add r27, r4, r0
lbl_80253C10:
    subf r4, r6, r5
    lwz r26, 0x8(r3)
    subi r24, r4, 0x1
    li r23, 0x0
    li r31, 0x0
    b lbl_80253C6C
lbl_80253C28:
    add r0, r23, r24
    mr r12, r30
    srawi r25, r0, 1
    mr r4, r29
    mullw r0, r25, r26
    add r3, r27, r0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80253C54
    li r31, 0x1
lbl_80253C54:
    cmpwi r3, 0x0
    bge lbl_80253C60
    addi r23, r25, 0x1
lbl_80253C60:
    cmpwi r3, 0x0
    blt lbl_80253C6C
    subi r24, r25, 0x1
lbl_80253C6C:
    cmpw r23, r24
    ble lbl_80253C28
    mullw r0, r23, r26
    add r4, r27, r0
    b lbl_80253CF8
lbl_80253C80:
    cmpwi r6, 0x0
    blt lbl_80253C90
    cmpw r6, r5
    blt lbl_80253C98
lbl_80253C90:
    li r23, 0x0
    b lbl_80253CA8
lbl_80253C98:
    lwz r0, 0x8(r3)
    lwz r4, 0x14(r3)
    mullw r0, r0, r6
    add r23, r4, r0
lbl_80253CA8:
    lwz r25, 0x8(r3)
    subf r24, r6, r5
    li r26, 0x0
    li r27, 0x0
    b lbl_80253CEC
lbl_80253CBC:
    mr r12, r30
    mr r3, r29
    add r4, r23, r27
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80253CE4
    mullw r0, r25, r26
    add r4, r23, r0
    b lbl_80253CF8
lbl_80253CE4:
    add r27, r27, r25
    addi r26, r26, 0x1
lbl_80253CEC:
    cmpw r26, r24
    blt lbl_80253CBC
    li r4, 0x0
lbl_80253CF8:
    cmpwi r4, 0x0
    beq lbl_80253D1C
    cmpwi r31, 0x0
    beq lbl_80253D1C
    lwz r3, 0x14(r28)
    lwz r0, 0x8(r28)
    subf r3, r3, r4
    divw r3, r3, r0
    b lbl_80253D20
lbl_80253D1C:
    li r3, -0x1
lbl_80253D20:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80253D38
// ----------------------------------------------------------------------------
extern "C" asm void fn_80253D38() {
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
    lwz r6, 0x0(r3)
    subi r31, r6, 0x1
    b lbl_80253DAC
lbl_80253D6C:
    cmpwi r31, 0x0
    blt lbl_80253D80
    lwz r0, 0x0(r28)
    cmpw r31, r0
    blt lbl_80253D88
lbl_80253D80:
    li r3, 0x0
    b lbl_80253D98
lbl_80253D88:
    lwz r0, 0x8(r28)
    lwz r3, 0x14(r28)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_80253D98:
    mr r12, r29
    mr r4, r30
    mtctr r12
    bctrl
    subi r31, r31, 0x1
lbl_80253DAC:
    cmpwi r31, 0x0
    bge lbl_80253D6C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80253DD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80253DD4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x0(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    subi r30, r6, 0x1
    b lbl_80253E54
lbl_80253E00:
    cmpwi r30, 0x0
    blt lbl_80253E14
    lwz r0, 0x0(r27)
    cmpw r30, r0
    blt lbl_80253E1C
lbl_80253E14:
    li r31, 0x0
    b lbl_80253E2C
lbl_80253E1C:
    lwz r0, 0x8(r27)
    lwz r3, 0x14(r27)
    mullw r0, r0, r30
    add r31, r3, r0
lbl_80253E2C:
    mr r12, r28
    mr r3, r31
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80253E50
    mr r3, r31
    b lbl_80253E60
lbl_80253E50:
    subi r30, r30, 0x1
lbl_80253E54:
    cmpwi r30, 0x0
    bge lbl_80253E00
    li r3, 0x0
lbl_80253E60:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80253E78
// ----------------------------------------------------------------------------
extern "C" asm void fn_80253E78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    subi r31, r4, 0x1
    b lbl_80253F5C
lbl_80253E9C:
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_80253EDC
    cmpwi r31, 0x0
    blt lbl_80253EBC
    lwz r0, 0x0(r30)
    cmpw r31, r0
    blt lbl_80253EC4
lbl_80253EBC:
    li r3, 0x0
    b lbl_80253ED4
lbl_80253EC4:
    lwz r0, 0x8(r30)
    lwz r3, 0x14(r30)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_80253ED4:
    mtctr r12
    bctrl
lbl_80253EDC:
    lwz r4, 0x0(r30)
    subi r6, r4, 0x1
    cmpw r31, r6
    bge lbl_80253F4C
    cmpwi r31, 0x0
    blt lbl_80253EFC
    cmpw r31, r4
    blt lbl_80253F04
lbl_80253EFC:
    li r3, 0x0
    b lbl_80253F14
lbl_80253F04:
    lwz r0, 0x8(r30)
    lwz r3, 0x14(r30)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_80253F14:
    addic. r5, r31, 0x1
    blt lbl_80253F24
    cmpw r5, r4
    blt lbl_80253F2C
lbl_80253F24:
    li r4, 0x0
    b lbl_80253F3C
lbl_80253F2C:
    lwz r0, 0x8(r30)
    lwz r4, 0x14(r30)
    mullw r0, r0, r5
    add r4, r4, r0
lbl_80253F3C:
    lwz r5, 0x8(r30)
    subf r0, r31, r6
    mullw r5, r5, r0
    bl memmove
lbl_80253F4C:
    lwz r3, 0x0(r30)
    subi r31, r31, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_80253F5C:
    cmpwi r31, 0x0
    bge lbl_80253E9C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

