#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/__va_arg.cpp
// Total functions: 1

// Forward declarations
void __va_arg();

// ----------------------------------------------------------------------------
// __va_arg
// ----------------------------------------------------------------------------
asm void __va_arg() {
    nofralloc
    lbz r7, 0x0(r3)
    cmpwi r4, 0x3
    mr r6, r3
    li r0, 0x8
    extsb r7, r7
    li r8, 0x4
    li r9, 0x1
    li r5, 0x0
    li r10, 0x0
    li r11, 0x4
    bne lbl_801935FC
    lbz r7, 0x1(r3)
    addi r6, r3, 0x1
    li r8, 0x8
    li r10, 0x20
    extsb r7, r7
    li r11, 0x8
lbl_801935FC:
    cmpwi r4, 0x2
    bne lbl_8019361C
    clrlwi. r0, r7, 31
    li r8, 0x8
    li r0, 0x7
    beq lbl_80193618
    li r5, 0x1
lbl_80193618:
    li r9, 0x2
lbl_8019361C:
    cmpw r7, r0
    bge lbl_80193644
    add r7, r7, r5
    lwz r0, 0x8(r3)
    mullw r5, r7, r11
    add r3, r0, r10
    add r0, r7, r9
    stb r0, 0x0(r6)
    add r5, r5, r3
    b lbl_8019366C
lbl_80193644:
    li r0, 0x8
    stb r0, 0x0(r6)
    subi r0, r8, 0x1
    lwz r5, 0x4(r3)
    nor r6, r0, r0
    add r5, r8, r5
    subi r0, r5, 0x1
    and r5, r6, r0
    add r0, r5, r8
    stw r0, 0x4(r3)
lbl_8019366C:
    cmpwi r4, 0x0
    bne lbl_80193678
    lwz r5, 0x0(r5)
lbl_80193678:
    mr r3, r5
    blr
}

