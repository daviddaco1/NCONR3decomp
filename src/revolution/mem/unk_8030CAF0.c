#include "types.h"

// Translation unit: src/revolution/mem/unk_8030CAF0.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float lbl_804A26F8;

// Forward declarations
extern void fn_8030CAF0();
extern void fn_8030CB00();
extern void fn_8030CB10();
extern void fn_8030CB2C();
extern void fn_8030CB44();
extern void fn_8030CBB4();
extern void fn_8030CC20();

// ----------------------------------------------------------------------------
// fn_8030CAF0
// ----------------------------------------------------------------------------
asm void fn_8030CAF0() {
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x0(r5)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8030CB00
// ----------------------------------------------------------------------------
asm void fn_8030CB00() {
    nofralloc
    lwz r5, 0x0(r3)
    lwz r12, 0x4(r5)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8030CB10
// ----------------------------------------------------------------------------
asm void fn_8030CB10() {
    nofralloc
    la r6, lbl_804A26F8
    li r0, 0x0
    stw r6, 0x0(r3)
    stw r4, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030CB2C
// ----------------------------------------------------------------------------
asm void fn_8030CB2C() {
    nofralloc
    li r0, 0x0
    sth r4, 0xa(r3)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030CB44
// ----------------------------------------------------------------------------
asm void fn_8030CB44() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8030CB7C
    lhz r5, 0xa(r3)
    li r0, 0x0
    add r5, r4, r5
    stw r0, 0x4(r5)
    stw r0, 0x0(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x0(r3)
    addi r0, r5, 0x1
    stw r4, 0x4(r3)
    sth r0, 0x8(r3)
    blr
lbl_8030CB7C:
    lhz r6, 0xa(r3)
    li r0, 0x0
    lwz r5, 0x4(r3)
    stwux r5, r6, r4
    stw r0, 0x4(r6)
    lwz r5, 0x4(r3)
    lhz r0, 0xa(r3)
    add r5, r5, r0
    stw r4, 0x4(r5)
    lhz r5, 0x8(r3)
    stw r4, 0x4(r3)
    addi r0, r5, 0x1
    sth r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030CBB4
// ----------------------------------------------------------------------------
asm void fn_8030CBB4() {
    nofralloc
    lhz r5, 0xa(r3)
    add r6, r4, r5
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    bne lbl_8030CBD4
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_8030CBE0
lbl_8030CBD4:
    lwz r0, 0x4(r6)
    add r4, r4, r5
    stw r0, 0x4(r4)
lbl_8030CBE0:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_8030CBF8
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_8030CC04
lbl_8030CBF8:
    lwz r4, 0x0(r6)
    lhz r0, 0xa(r3)
    stwx r4, r5, r0
lbl_8030CC04:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030CC20
// ----------------------------------------------------------------------------
asm void fn_8030CC20() {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_8030CC30
    lwz r3, 0x0(r3)
    blr
lbl_8030CC30:
    lhz r0, 0xa(r3)
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
}

