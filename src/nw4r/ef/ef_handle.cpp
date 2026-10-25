#include "types.h"

// Translation unit: src/nw4r/ef/ef_handle.cpp
// Total functions: 5

// Forward declarations
extern "C" void GetPtr__Q34nw4r2ef10HandleBaseCFv();
extern "C" void IsValid__Q34nw4r2ef10HandleBaseCFv();
extern "C" void __as__Q34nw4r2ef10HandleBaseFPQ34nw4r2ef12LinkedObject();
extern "C" void __as__Q34nw4r2ef10HandleBaseFRCQ34nw4r2ef10HandleBase();
extern "C" void __ct__Q34nw4r2ef10HandleBaseFv();

// ----------------------------------------------------------------------------
// __ct__Q34nw4r2ef10HandleBaseFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r2ef10HandleBaseFv() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r2ef10HandleBaseFRCQ34nw4r2ef10HandleBase
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r2ef10HandleBaseFRCQ34nw4r2ef10HandleBase() {
    nofralloc
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// __as__Q34nw4r2ef10HandleBaseFPQ34nw4r2ef12LinkedObject
// ----------------------------------------------------------------------------
extern "C" asm void __as__Q34nw4r2ef10HandleBaseFPQ34nw4r2ef12LinkedObject() {
    nofralloc
    cmpwi r4, 0x0
    bne lbl_801BA1CC
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    blr
lbl_801BA1CC:
    lwz r0, 0x8(r4)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsValid__Q34nw4r2ef10HandleBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsValid__Q34nw4r2ef10HandleBaseCFv() {
    nofralloc
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_801BA1F0
    li r3, 0x0
    blr
lbl_801BA1F0:
    lwz r3, 0x0(r3)
    lwz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// GetPtr__Q34nw4r2ef10HandleBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetPtr__Q34nw4r2ef10HandleBaseCFv() {
    nofralloc
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    bne lbl_801BA21C
    li r0, 0x0
    b lbl_801BA230
lbl_801BA21C:
    lwz r3, 0x0(r3)
    lwz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_801BA230:
    cmpwi r0, 0x0
    beq lbl_801BA240
    mr r3, r4
    blr
lbl_801BA240:
    li r3, 0x0
    blr
}

