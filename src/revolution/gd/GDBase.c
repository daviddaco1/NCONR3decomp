#include "types.h"

// Translation unit: src/revolution/gd/GDBase.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049E180;
extern float lbl_8049E184;

// Forward declarations
extern void DCFlushRange();
extern void GDFlushCurrToMem();
extern void GDInitGDLObj();
extern void GDOverflowed();
extern void GDPadCurr32();

// ----------------------------------------------------------------------------
// GDInitGDLObj
// ----------------------------------------------------------------------------
asm void GDInitGDLObj() {
    nofralloc
    add r0, r4, r5
    stw r4, 0x0(r3)
    stw r4, 0x8(r3)
    stw r0, 0xc(r3)
    stw r5, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// GDFlushCurrToMem
// ----------------------------------------------------------------------------
asm void GDFlushCurrToMem() {
    nofralloc
    lwz r4, lbl_8049E180
    lwz r3, 0x0(r4)
    lwz r4, 0x4(r4)
    b DCFlushRange
}

// ----------------------------------------------------------------------------
// GDPadCurr32
// ----------------------------------------------------------------------------
asm void GDPadCurr32() {
    nofralloc
    lwz r3, lbl_8049E180
    lwz r0, 0x8(r3)
    clrlwi. r3, r0, 27
    beqlr
    cmplwi cr1, r3, 0x20
    bgelr cr1
    subfic r0, r3, 0x20
    cmplwi r0, 0x8
    ble lbl_802DD1E0
    bgt cr1, lbl_802DD1E0
    subfic r0, r3, 0x1f
    li r6, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x18
    bge lbl_802DD1E0
lbl_802DD138:
    lwz r5, lbl_8049E180
    addi r3, r3, 0x8
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    lwz r5, lbl_8049E180
    lwz r4, 0x8(r5)
    stb r6, 0x0(r4)
    addi r0, r4, 0x1
    stw r0, 0x8(r5)
    bdnz lbl_802DD138
lbl_802DD1E0:
    subfic r0, r3, 0x20
    li r5, 0x0
    mtctr r0
    cmplwi r3, 0x20
    bgelr
lbl_802DD1F4:
    lwz r4, lbl_8049E180
    lwz r3, 0x8(r4)
    stb r5, 0x0(r3)
    addi r0, r3, 0x1
    stw r0, 0x8(r4)
    bdnz lbl_802DD1F4
    blr
}

// ----------------------------------------------------------------------------
// GDOverflowed
// ----------------------------------------------------------------------------
asm void GDOverflowed() {
    nofralloc
    lwz r12, lbl_8049E184
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

