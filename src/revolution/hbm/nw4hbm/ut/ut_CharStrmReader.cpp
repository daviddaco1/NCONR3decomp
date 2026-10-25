#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/ut/ut_CharStrmReader.cpp
// Total functions: 4

// Forward declarations
extern "C" void ReadNextCharCP1252__Q36nw4hbm2ut14CharStrmReaderFv();
extern "C" void ReadNextCharSJIS__Q36nw4hbm2ut14CharStrmReaderFv();
extern "C" void ReadNextCharUTF16__Q36nw4hbm2ut14CharStrmReaderFv();
extern "C" void ReadNextCharUTF8__Q36nw4hbm2ut14CharStrmReaderFv();

// ----------------------------------------------------------------------------
// ReadNextCharUTF8__Q36nw4hbm2ut14CharStrmReaderFv
// ----------------------------------------------------------------------------
extern "C" asm void ReadNextCharUTF8__Q36nw4hbm2ut14CharStrmReaderFv() {
    nofralloc
    lwz r7, 0x0(r3)
    lbz r6, 0x0(r7)
    rlwinm. r0, r6, 0, 24, 24
    bne lbl_802FD594
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    b lbl_802FD5E4
lbl_802FD594:
    rlwinm r0, r6, 0, 24, 26
    cmpwi r0, 0xc0
    bne lbl_802FD5C0
    lwz r4, 0x0(r3)
    lbz r5, 0x1(r7)
    addi r0, r4, 0x2
    clrlwi r4, r5, 26
    stw r0, 0x0(r3)
    rlwimi r4, r6, 6, 21, 25
    mr r6, r4
    b lbl_802FD5E4
lbl_802FD5C0:
    lwz r4, 0x0(r3)
    clrlslwi r5, r6, 27, 12
    lbz r6, 0x1(r7)
    lbz r7, 0x2(r7)
    addi r0, r4, 0x3
    rlwimi r5, r6, 6, 20, 25
    rlwimi r5, r7, 0, 26, 31
    stw r0, 0x0(r3)
    clrlwi r6, r5, 16
lbl_802FD5E4:
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// ReadNextCharUTF16__Q36nw4hbm2ut14CharStrmReaderFv
// ----------------------------------------------------------------------------
extern "C" asm void ReadNextCharUTF16__Q36nw4hbm2ut14CharStrmReaderFv() {
    nofralloc
    mr r5, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r5)
    lhz r3, 0x0(r3)
    addi r0, r4, 0x2
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// ReadNextCharCP1252__Q36nw4hbm2ut14CharStrmReaderFv
// ----------------------------------------------------------------------------
extern "C" asm void ReadNextCharCP1252__Q36nw4hbm2ut14CharStrmReaderFv() {
    nofralloc
    mr r5, r3
    lwz r3, 0x0(r3)
    lwz r4, 0x0(r5)
    lbz r3, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r5)
    blr
}

// ----------------------------------------------------------------------------
// ReadNextCharSJIS__Q36nw4hbm2ut14CharStrmReaderFv
// ----------------------------------------------------------------------------
extern "C" asm void ReadNextCharSJIS__Q36nw4hbm2ut14CharStrmReaderFv() {
    nofralloc
    lwz r6, 0x0(r3)
    li r0, 0x0
    lbz r5, 0x0(r6)
    cmplwi r5, 0x81
    blt lbl_802FD640
    cmplwi r5, 0xa0
    blt lbl_802FD648
lbl_802FD640:
    cmplwi r5, 0xe0
    blt lbl_802FD64C
lbl_802FD648:
    li r0, 0x1
lbl_802FD64C:
    cmpwi r0, 0x0
    beq lbl_802FD66C
    lwz r4, 0x0(r3)
    lbz r6, 0x1(r6)
    rlwimi r6, r5, 8, 16, 23
    addi r0, r4, 0x2
    stw r0, 0x0(r3)
    b lbl_802FD67C
lbl_802FD66C:
    lwz r4, 0x0(r3)
    mr r6, r5
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_802FD67C:
    mr r3, r6
    blr
}

