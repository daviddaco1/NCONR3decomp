#include "types.h"

// Translation unit: src/revolution/bte/unk_802A3F58.cpp
// Total functions: 1

// Forward declarations
extern void bta_usb_close_evt();
extern void hcisu_h2_usb_cback();

// ----------------------------------------------------------------------------
// hcisu_h2_usb_cback
// ----------------------------------------------------------------------------
asm void hcisu_h2_usb_cback() {
    nofralloc
    cmpwi r3, 0x4
    beq lbl_802A3F70
    bgelr
    cmpwi r3, 0x0
    beqlr
    blr
lbl_802A3F70:
    extsb r3, r4
    b bta_usb_close_evt
    blr
}

