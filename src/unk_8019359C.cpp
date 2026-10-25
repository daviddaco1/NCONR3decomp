#include "types.h"
#include "m2c_macros.h"


extern "C" {


void strlen(s32 arg0);

// asm_to_cpp: strlen
asm void strlen(s32 arg0) {
    nofralloc
    subi r4, r3, 0x1
    li r3, -0x1
lbl_801935A4:
    lbzu r0, 0x1(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_801935A4
    blr
}

} // extern "C"
