#include "types.h"

// Translation unit: src/nw4r/g3d/platform/unk_801DF830.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern "C" float lbl_804A1D50;

// Forward declarations
extern "C" void fn_801DF830();
extern "C" void fn_801DF90C();

// ----------------------------------------------------------------------------
// fn_801DF830
// ----------------------------------------------------------------------------
extern "C" asm void fn_801DF830() {
    nofralloc
    srwi. r5, r5, 5
    beqlr
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_801DF8D8
lbl_801DF844:
    lfd f0, 0x0(r4)
    lfd f1, 0x8(r4)
    stfd f0, 0x0(r3)
    lfd f0, 0x10(r4)
    stfd f1, 0x8(r3)
    lfd f1, 0x18(r4)
    stfd f0, 0x10(r3)
    lfd f0, 0x20(r4)
    stfd f1, 0x18(r3)
    lfd f1, 0x28(r4)
    stfd f0, 0x20(r3)
    lfd f0, 0x30(r4)
    stfd f1, 0x28(r3)
    lfd f1, 0x38(r4)
    stfd f0, 0x30(r3)
    lfd f0, 0x40(r4)
    stfd f1, 0x38(r3)
    lfd f1, 0x48(r4)
    stfd f0, 0x40(r3)
    lfd f0, 0x50(r4)
    stfd f1, 0x48(r3)
    lfd f1, 0x58(r4)
    stfd f0, 0x50(r3)
    lfd f0, 0x60(r4)
    stfd f1, 0x58(r3)
    lfd f1, 0x68(r4)
    stfd f0, 0x60(r3)
    lfd f0, 0x70(r4)
    stfd f1, 0x68(r3)
    lfd f1, 0x78(r4)
    addi r4, r4, 0x80
    stfd f0, 0x70(r3)
    stfd f1, 0x78(r3)
    addi r3, r3, 0x80
    bdnz lbl_801DF844
    andi. r5, r5, 0x3
    beqlr
lbl_801DF8D8:
    mtctr r5
lbl_801DF8DC:
    lfd f0, 0x0(r4)
    lfd f1, 0x8(r4)
    stfd f0, 0x0(r3)
    lfd f0, 0x10(r4)
    stfd f1, 0x8(r3)
    lfd f1, 0x18(r4)
    addi r4, r4, 0x20
    stfd f0, 0x10(r3)
    stfd f1, 0x18(r3)
    addi r3, r3, 0x20
    bdnz lbl_801DF8DC
    blr
}

// ----------------------------------------------------------------------------
// fn_801DF90C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801DF90C() {
    nofralloc
    srwi. r4, r4, 5
    lfs f0, lbl_804A1D50
    beqlr
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_801DF9B4
lbl_801DF924:
    opword 0xF0030000
    opword 0xF0030008
    opword 0xF0030010
    opword 0xF0030018
    opword 0xF0030020
    opword 0xF0030028
    opword 0xF0030030
    opword 0xF0030038
    opword 0xF0030040
    opword 0xF0030048
    opword 0xF0030050
    opword 0xF0030058
    opword 0xF0030060
    opword 0xF0030068
    opword 0xF0030070
    opword 0xF0030078
    opword 0xF0030080
    opword 0xF0030088
    opword 0xF0030090
    opword 0xF0030098
    opword 0xF00300A0
    opword 0xF00300A8
    opword 0xF00300B0
    opword 0xF00300B8
    opword 0xF00300C0
    opword 0xF00300C8
    opword 0xF00300D0
    opword 0xF00300D8
    opword 0xF00300E0
    opword 0xF00300E8
    opword 0xF00300F0
    opword 0xF00300F8
    addi r3, r3, 0x100
    bdnz lbl_801DF924
    andi. r4, r4, 0x7
    beqlr
lbl_801DF9B4:
    mtctr r4
lbl_801DF9B8:
    opword 0xF0030000
    opword 0xF0030008
    opword 0xF0030010
    opword 0xF0030018
    addi r3, r3, 0x20
    bdnz lbl_801DF9B8
    blr
}

