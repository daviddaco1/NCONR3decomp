#include "types.h"

// Translation unit: src/revolution/homebuttonlib/nw4hbm/ut/ut_list.cpp
// Total functions: 5

// Forward declarations
extern "C" void List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv();
extern "C" void List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv();
extern "C" void List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs();
extern "C" void List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs();
extern "C" void List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv();

// ----------------------------------------------------------------------------
// List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs
// ----------------------------------------------------------------------------
extern "C" asm void List_Init__Q26nw4hbm2utFPQ36nw4hbm2ut4ListUs() {
    nofralloc
    li r0, 0x0
    sth r4, 0xa(r3)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
// ----------------------------------------------------------------------------
extern "C" asm void List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802FF364
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
lbl_802FF364:
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
// List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
// ----------------------------------------------------------------------------
extern "C" asm void List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv() {
    nofralloc
    lhz r5, 0xa(r3)
    add r6, r4, r5
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    bne lbl_802FF3BC
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_802FF3C8
lbl_802FF3BC:
    lwz r0, 0x4(r6)
    add r4, r4, r5
    stw r0, 0x4(r4)
lbl_802FF3C8:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_802FF3E0
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_802FF3EC
lbl_802FF3E0:
    lwz r4, 0x0(r6)
    lhz r0, 0xa(r3)
    stwx r4, r5, r0
lbl_802FF3EC:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
// ----------------------------------------------------------------------------
extern "C" asm void List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv() {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_802FF418
    lwz r3, 0x0(r3)
    blr
lbl_802FF418:
    lhz r0, 0xa(r3)
    add r3, r4, r0
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
// ----------------------------------------------------------------------------
extern "C" asm void List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs() {
    nofralloc
    li r6, 0x0
    li r5, 0x0
    b lbl_802FF448
lbl_802FF434:
    cmpw r4, r6
    bne lbl_802FF444
    mr r3, r5
    blr
lbl_802FF444:
    addi r6, r6, 0x1
lbl_802FF448:
    cmpwi r5, 0x0
    beq lbl_802FF460
    lhz r0, 0xa(r3)
    add r5, r5, r0
    lwz r5, 0x4(r5)
    b lbl_802FF464
lbl_802FF460:
    lwz r5, 0x0(r3)
lbl_802FF464:
    cmpwi r5, 0x0
    bne lbl_802FF434
    li r3, 0x0
    blr
}

