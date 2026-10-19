#include "types.h"

// Translation unit: src/revolution/os/unk_80315054.cpp
// Total functions: 6

// Forward declarations
extern void DCEnable();
extern void DCFlushRange();
extern void DCFlushRangeNoSync();
extern void DCInvalidateRange();
extern void fn_803150C4();
extern void fn_80315120();

// ----------------------------------------------------------------------------
// DCEnable
// ----------------------------------------------------------------------------
asm void DCEnable() {
    nofralloc
    sync
    mfspr r3, HID0
    ori r3, r3, 0x4000
    mtspr HID0, r3
    blr
}

// ----------------------------------------------------------------------------
// DCInvalidateRange
// ----------------------------------------------------------------------------
asm void DCInvalidateRange() {
    nofralloc
    cmplwi r4, 0x0
    blelr
    clrlwi r5, r3, 27
    add r4, r4, r5
    addi r4, r4, 0x1f
    srwi r4, r4, 5
    mtctr r4
lbl_80315084:
    dcbi r0, r3
    addi r3, r3, 0x20
    bdnz lbl_80315084
    blr
}

// ----------------------------------------------------------------------------
// DCFlushRange
// ----------------------------------------------------------------------------
asm void DCFlushRange() {
    nofralloc
    cmplwi r4, 0x0
    blelr
    clrlwi r5, r3, 27
    add r4, r4, r5
    addi r4, r4, 0x1f
    srwi r4, r4, 5
    mtctr r4
lbl_803150B0:
    dcbf r0, r3
    addi r3, r3, 0x20
    bdnz lbl_803150B0
    sc
    blr
}

// ----------------------------------------------------------------------------
// fn_803150C4
// ----------------------------------------------------------------------------
asm void fn_803150C4() {
    nofralloc
    cmplwi r4, 0x0
    blelr
    clrlwi r5, r3, 27
    add r4, r4, r5
    addi r4, r4, 0x1f
    srwi r4, r4, 5
    mtctr r4
lbl_803150E0:
    dcbst r0, r3
    addi r3, r3, 0x20
    bdnz lbl_803150E0
    sc
    blr
}

// ----------------------------------------------------------------------------
// DCFlushRangeNoSync
// ----------------------------------------------------------------------------
asm void DCFlushRangeNoSync() {
    nofralloc
    cmplwi r4, 0x0
    blelr
    clrlwi r5, r3, 27
    add r4, r4, r5
    addi r4, r4, 0x1f
    srwi r4, r4, 5
    mtctr r4
lbl_80315110:
    dcbf r0, r3
    addi r3, r3, 0x20
    bdnz lbl_80315110
    blr
}

// ----------------------------------------------------------------------------
// fn_80315120
// ----------------------------------------------------------------------------
asm void fn_80315120() {
    nofralloc
    cmplwi r4, 0x0
    blelr
    clrlwi r5, r3, 27
    add r4, r4, r5
    addi r4, r4, 0x1f
    srwi r4, r4, 5
    mtctr r4
lbl_8031513C:
    dcbst r0, r3
    addi r3, r3, 0x20
    bdnz lbl_8031513C
    blr
}

