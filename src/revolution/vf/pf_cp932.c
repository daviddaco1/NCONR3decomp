#include "types.h"

// Translation unit: src/revolution/vf/pf_cp932.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
extern u8 lbl_80342308[];

// Forward declarations
extern void VFiPFCODE_CP932_OEM2Unicode();
extern void VFiPFCODE_CP932_OEMCharWidth();
extern void VFiPFCODE_CP932_Unicode2OEM();
extern void VFiPFCODE_CP932_isOEMMBchar();
extern void VFiPFCODE_CP932_isUnicodeMBchar();
extern void fn_80338648();
extern void fn_80338654();

// ----------------------------------------------------------------------------
// VFiPFCODE_CP932_OEM2Unicode
// ----------------------------------------------------------------------------
asm void VFiPFCODE_CP932_OEM2Unicode() {
    nofralloc
    lbz r5, 0x0(r3)
    lbz r3, 0x1(r3)
    cmplwi r5, 0x80
    bge lbl_8033893C
    sth r5, 0x0(r4)
    li r3, 0x1
    li r4, 0x2
    b fn_80338648
lbl_8033893C:
    cmplwi r5, 0xa1
    blt lbl_80338964
    cmplwi r5, 0xdf
    bgt lbl_80338964
    addis r5, r5, 0x1
    li r3, 0x1
    subi r0, r5, 0x140
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338964:
    cmplwi r5, 0x80
    beq lbl_803389B4
    cmplwi r5, 0x85
    beq lbl_803389B4
    cmplwi r5, 0x86
    beq lbl_803389B4
    cmplwi r5, 0xa0
    beq lbl_803389B4
    cmplwi r5, 0xeb
    beq lbl_803389B4
    cmplwi r5, 0xec
    beq lbl_803389B4
    cmplwi r5, 0xef
    blt lbl_803389A4
    cmplwi r5, 0xf9
    ble lbl_803389B4
lbl_803389A4:
    cmplwi r5, 0xfd
    blt lbl_803389C8
    cmplwi r5, 0xff
    bne lbl_803389C8
lbl_803389B4:
    li r0, 0x5f
    li r3, 0x1
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_803389C8:
    cmplwi r3, 0xfd
    blt lbl_803389E4
    li r0, 0x5f
    li r3, 0x1
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_803389E4:
    cmplwi r5, 0x81
    blt lbl_803389FC
    cmplwi r5, 0x84
    bgt lbl_803389FC
    subi r0, r5, 0x81
    b lbl_80338A70
lbl_803389FC:
    cmplwi r5, 0x87
    blt lbl_80338A14
    cmplwi r5, 0x9f
    bgt lbl_80338A14
    subi r0, r5, 0x83
    b lbl_80338A70
lbl_80338A14:
    cmplwi r5, 0xe0
    blt lbl_80338A2C
    cmplwi r5, 0xea
    bgt lbl_80338A2C
    subi r0, r5, 0xc3
    b lbl_80338A70
lbl_80338A2C:
    cmplwi r5, 0xed
    blt lbl_80338A44
    cmplwi r5, 0xee
    bgt lbl_80338A44
    subi r0, r5, 0xc5
    b lbl_80338A70
lbl_80338A44:
    cmplwi r5, 0xfa
    blt lbl_80338A5C
    cmplwi r5, 0xfc
    bgt lbl_80338A5C
    subi r0, r5, 0xd0
    b lbl_80338A70
lbl_80338A5C:
    li r0, 0x5f
    li r3, 0x1
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338A70:
    subic. r3, r3, 0x40
    blt lbl_80338A80
    cmpwi r3, 0xbd
    blt lbl_80338A94
lbl_80338A80:
    li r0, 0x5f
    li r3, 0x1
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338A94:
    mulli r0, r0, 0x17a
    lis r5, lbl_80342308@ha
    slwi r3, r3, 1
    addi r5, r5, lbl_80342308@l
    add r0, r5, r0
    lhzx r0, r3, r0
    cmpwi r0, 0x0
    sth r0, 0x0(r4)
    bne lbl_80338ACC
    li r0, 0x5f
    li r3, 0x1
    sth r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338ACC:
    li r3, 0x2
    li r4, 0x2
    b fn_80338648
}

// ----------------------------------------------------------------------------
// VFiPFCODE_CP932_Unicode2OEM
// ----------------------------------------------------------------------------
asm void VFiPFCODE_CP932_Unicode2OEM() {
    nofralloc
    lhz r0, 0x0(r3)
    clrlwi r5, r0, 24
    srawi r3, r0, 8
    cmplwi r5, 0x80
    bge lbl_80338B0C
    clrlwi. r0, r3, 24
    bne lbl_80338B0C
    li r0, 0x0
    stb r5, 0x0(r4)
    li r3, 0x1
    stb r0, 0x1(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338B0C:
    clrlslwi r0, r3, 24, 8
    add r0, r0, r5
    clrlwi r9, r0, 16
    cmplwi r9, 0xff61
    blt lbl_80338B48
    cmplwi r9, 0xff9f
    bgt lbl_80338B48
    subis r3, r9, 0x1
    li r0, 0x0
    addi r5, r3, 0x140
    stb r0, 0x1(r4)
    li r3, 0x1
    stb r5, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338B48:
    cmplwi r9, 0x5f
    bne lbl_80338B64
    li r0, 0x5f
    li r3, 0x1
    stb r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338B64:
    lis r5, lbl_80342308@ha
    li r6, 0x0
    addi r5, r5, lbl_80342308@l
    li r0, 0x15
lbl_80338B74:
    mr r8, r5
    li r7, 0x0
    mtctr r0
lbl_80338B80:
    lhz r3, 0x0(r8)
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0x2(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0x4(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0x6(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0x8(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0xa(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0xc(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0xe(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    lhz r3, 0x10(r8)
    addi r7, r7, 0x1
    cmplw r3, r9
    beq lbl_80338C18
    addi r7, r7, 0x1
    addi r8, r8, 0x12
    bdnz lbl_80338B80
lbl_80338C18:
    cmpwi r7, 0xbd
    blt lbl_80338C30
    addi r6, r6, 0x1
    addi r5, r5, 0x17a
    cmpwi r6, 0x2d
    blt lbl_80338B74
lbl_80338C30:
    cmpwi r7, 0xbd
    bne lbl_80338C4C
    li r0, 0x5f
    li r3, 0x1
    stb r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338C4C:
    cmpwi r6, 0x0
    blt lbl_80338C74
    cmpwi r6, 0x3
    bgt lbl_80338C74
    addi r3, r6, 0x81
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    b lbl_80338D28
lbl_80338C74:
    cmpwi r6, 0x4
    blt lbl_80338C9C
    cmpwi r6, 0x1c
    bgt lbl_80338C9C
    addi r3, r6, 0x83
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    b lbl_80338D28
lbl_80338C9C:
    cmpwi r6, 0x1d
    blt lbl_80338CC4
    cmpwi r6, 0x27
    bgt lbl_80338CC4
    addi r3, r6, 0xc3
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    b lbl_80338D28
lbl_80338CC4:
    cmpwi r6, 0x28
    blt lbl_80338CEC
    cmpwi r6, 0x29
    bgt lbl_80338CEC
    addi r3, r6, 0xc5
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    b lbl_80338D28
lbl_80338CEC:
    cmpwi r6, 0x2a
    blt lbl_80338D14
    cmpwi r6, 0x2c
    bgt lbl_80338D14
    addi r3, r6, 0xd0
    addi r0, r7, 0x40
    slwi r3, r3, 8
    or r0, r3, r0
    clrlwi r3, r0, 16
    b lbl_80338D28
lbl_80338D14:
    li r0, 0x5f
    li r3, 0x1
    stb r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
lbl_80338D28:
    extrwi r0, r3, 8, 16
    stb r3, 0x1(r4)
    li r3, 0x2
    stb r0, 0x0(r4)
    li r4, 0x2
    b fn_80338648
}

// ----------------------------------------------------------------------------
// VFiPFCODE_CP932_OEMCharWidth
// ----------------------------------------------------------------------------
asm void VFiPFCODE_CP932_OEMCharWidth() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    bl VFiPFCODE_CP932_OEM2Unicode
    addi r4, r1, 0xa
    addi r5, r1, 0x8
    bl fn_80338654
    lwz r0, 0x14(r1)
    lha r3, 0xa(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// VFiPFCODE_CP932_isOEMMBchar
// ----------------------------------------------------------------------------
asm void VFiPFCODE_CP932_isOEMMBchar() {
    nofralloc
    cmpwi r4, 0x2
    clrlwi r0, r3, 24
    beq lbl_80338DBC
    bge lbl_80338DE8
    cmpwi r4, 0x1
    bge lbl_80338D90
    b lbl_80338DE8
lbl_80338D90:
    cmplwi r0, 0x81
    li r3, 0x0
    blt lbl_80338DA4
    cmplwi r0, 0x9f
    ble lbl_80338DB4
lbl_80338DA4:
    cmplwi r0, 0xe0
    bltlr
    cmplwi r0, 0xfc
    bgtlr
lbl_80338DB4:
    li r3, 0x1
    blr
lbl_80338DBC:
    cmplwi r0, 0x40
    li r3, 0x0
    blt lbl_80338DD0
    cmplwi r0, 0x7e
    ble lbl_80338DE0
lbl_80338DD0:
    cmplwi r0, 0x80
    bltlr
    cmplwi r0, 0xfc
    bgtlr
lbl_80338DE0:
    li r3, 0x1
    blr
lbl_80338DE8:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// VFiPFCODE_CP932_isUnicodeMBchar
// ----------------------------------------------------------------------------
asm void VFiPFCODE_CP932_isUnicodeMBchar() {
    nofralloc
    li r3, 0x2
    blr
}

