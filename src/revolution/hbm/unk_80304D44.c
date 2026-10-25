#include "types.h"

// Translation unit: src/revolution/hbm/unk_80304D44.cpp
// Total functions: 1

// Forward declarations
extern void __HBMSYNSetupAdpcm__FP11HBMSYNVOICE();
extern void __HBMSYNSetupPcm16__FP11HBMSYNVOICE();
extern void __HBMSYNSetupPcm8__FP11HBMSYNVOICE();
extern void fn_80304D44();

// ----------------------------------------------------------------------------
// fn_80304D44
// ----------------------------------------------------------------------------
asm void fn_80304D44() {
    nofralloc
    lwz r4, 0x18(r3)
    lhz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_80304D74
    bge lbl_80304D64
    cmpwi r0, 0x0
    bge lbl_80304D70
    blr
lbl_80304D64:
    cmpwi r0, 0x3
    bgelr
    b lbl_80304D78
lbl_80304D70:
    b __HBMSYNSetupAdpcm__FP11HBMSYNVOICE
lbl_80304D74:
    b __HBMSYNSetupPcm16__FP11HBMSYNVOICE
lbl_80304D78:
    b __HBMSYNSetupPcm8__FP11HBMSYNVOICE
    blr
}

