#include "types.h"

// Translation unit: src/nw4r/snd/unk_80222B20.cpp
// Total functions: 1

// Forward declarations
extern "C" void fn_80222B20();

// ----------------------------------------------------------------------------
// fn_80222B20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80222B20() {
    nofralloc
    lhz r7, 0x22(r3)
    clrlslwi r0, r4, 24, 12
    lhz r9, 0x24(r3)
    li r5, 0x1
    srawi r6, r7, 4
    clrlwi r4, r7, 28
    slwi r7, r6, 2
    extsh r0, r0
    add r6, r3, r7
    slw r4, r5, r4
    lhax r8, r3, r7
    extsh r7, r9
    lha r6, 0x2(r6)
    extsh r4, r4
    lha r5, 0x26(r3)
    srawi r0, r0, 1
    mullw r7, r7, r8
    mullw r5, r5, r6
    mullw r0, r0, r4
    add r7, r7, r5
    add r7, r7, r0
    srawi r7, r7, 10
    addi r7, r7, 0x1
    srawi r7, r7, 1
    cmpwi r7, 0x7fff
    ble lbl_80222B90
    li r7, 0x7fff
    b lbl_80222B9C
lbl_80222B90:
    cmpwi r7, -0x8000
    bge lbl_80222B9C
    li r7, -0x8000
lbl_80222B9C:
    sth r9, 0x26(r3)
    sth r7, 0x24(r3)
    mr r3, r7
    blr
}

