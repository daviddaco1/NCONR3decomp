#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/string.cpp
// Total functions: 10

// Small Data symbols (@sda21)
float lbl_8049C410;
float lbl_8049C414;

// Forward declarations
void strncpy();
void strcat();
void strncat();
void strcmp();
void strncmp();
void fn_8019CE08();
void fn_8019CEAC();
void strstr();
void strchr();
void strcpy();

// ----------------------------------------------------------------------------
// strcpy
// ----------------------------------------------------------------------------
asm void strcpy() {
    nofralloc
    clrlwi r0, r3, 30
    clrlwi r5, r4, 30
    cmplw r0, r5
    mr r7, r3
    bne lbl_8019CB9C
    cmpwi r5, 0x0
    beq lbl_8019CB58
    lbz r0, 0x0(r4)
    stb r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    subfic r0, r5, 0x3
    mtctr r0
    cmpwi r0, 0x0
    beq lbl_8019CB50
lbl_8019CB3C:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r7)
    cmpwi r0, 0x0
    beqlr
    bdnz lbl_8019CB3C
lbl_8019CB50:
    addi r7, r7, 0x1
    addi r4, r4, 0x1
lbl_8019CB58:
    lwz r8, 0x0(r4)
    lis r5, 0x8081
    subi r5, r5, 0x7f80
    subis r6, r8, 0x101
    subi r6, r6, 0x101
    andc r6, r6, r8
    and. r0, r6, r5
    bne lbl_8019CB9C
    subi r7, r7, 0x4
lbl_8019CB7C:
    stwu r8, 0x4(r7)
    lwzu r8, 0x4(r4)
    subis r6, r8, 0x101
    subi r6, r6, 0x101
    andc r6, r6, r8
    and. r0, r6, r5
    beq lbl_8019CB7C
    addi r7, r7, 0x4
lbl_8019CB9C:
    lbz r0, 0x0(r4)
    stb r0, 0x0(r7)
    cmpwi r0, 0x0
    beqlr
lbl_8019CBAC:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_8019CBAC
    blr
}

// ----------------------------------------------------------------------------
// strncpy
// ----------------------------------------------------------------------------
asm void strncpy() {
    nofralloc
    subi r4, r4, 0x1
    subi r6, r3, 0x1
    addi r5, r5, 0x1
    b lbl_8019CBF8
lbl_8019CBD0:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_8019CBF8
    li r0, 0x0
    b lbl_8019CBEC
lbl_8019CBE8:
    stbu r0, 0x1(r6)
lbl_8019CBEC:
    subic. r5, r5, 0x1
    bne lbl_8019CBE8
    blr
lbl_8019CBF8:
    subic. r5, r5, 0x1
    bne lbl_8019CBD0
    blr
}

// ----------------------------------------------------------------------------
// strcat
// ----------------------------------------------------------------------------
asm void strcat() {
    nofralloc
    subi r4, r4, 0x1
    subi r5, r3, 0x1
lbl_8019CC0C:
    lbzu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_8019CC0C
    subi r5, r5, 0x1
lbl_8019CC1C:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_8019CC1C
    blr
}

// ----------------------------------------------------------------------------
// strncat
// ----------------------------------------------------------------------------
asm void strncat() {
    nofralloc
    subi r4, r4, 0x1
    subi r6, r3, 0x1
lbl_8019CC38:
    lbzu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_8019CC38
    subi r6, r6, 0x1
    addi r5, r5, 0x1
    b lbl_8019CC68
lbl_8019CC50:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_8019CC68
    subi r6, r6, 0x1
    b lbl_8019CC70
lbl_8019CC68:
    subic. r5, r5, 0x1
    bne lbl_8019CC50
lbl_8019CC70:
    li r0, 0x0
    stb r0, 0x1(r6)
    blr
}

// ----------------------------------------------------------------------------
// strcmp
// ----------------------------------------------------------------------------
asm void strcmp() {
    nofralloc
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    subf. r0, r0, r5
    beq lbl_8019CC94
    mr r3, r0
    blr
lbl_8019CC94:
    clrlwi r0, r4, 30
    clrlwi r6, r3, 30
    cmplw r0, r6
    bne lbl_8019CD60
    cmpwi r6, 0x0
    beq lbl_8019CD00
    cmpwi r5, 0x0
    bne lbl_8019CCBC
    li r3, 0x0
    blr
lbl_8019CCBC:
    subfic r0, r6, 0x3
    mtctr r0
    cmpwi r0, 0x0
    beq lbl_8019CCF8
lbl_8019CCCC:
    lbzu r5, 0x1(r3)
    lbzu r0, 0x1(r4)
    subf. r0, r0, r5
    beq lbl_8019CCE4
    mr r3, r0
    blr
lbl_8019CCE4:
    cmpwi r5, 0x0
    bne lbl_8019CCF4
    li r3, 0x0
    blr
lbl_8019CCF4:
    bdnz lbl_8019CCCC
lbl_8019CCF8:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_8019CD00:
    lwz r7, 0x0(r3)
    lis r5, 0x8081
    subi r6, r5, 0x7f80
    lwz r8, 0x0(r4)
    subis r5, r7, 0x101
    subi r5, r5, 0x101
    andc r5, r5, r7
    and. r0, r5, r6
    bne lbl_8019CD48
    b lbl_8019CD40
lbl_8019CD28:
    lwzu r7, 0x4(r3)
    lwzu r8, 0x4(r4)
    subis r5, r7, 0x101
    subi r0, r5, 0x101
    and. r0, r0, r6
    bne lbl_8019CD48
lbl_8019CD40:
    cmplw r7, r8
    beq lbl_8019CD28
lbl_8019CD48:
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    subf. r0, r0, r5
    beq lbl_8019CD60
    mr r3, r0
    blr
lbl_8019CD60:
    cmpwi r5, 0x0
    bne lbl_8019CD70
    li r3, 0x0
    blr
lbl_8019CD70:
    lbzu r5, 0x1(r3)
    lbzu r0, 0x1(r4)
    subf. r0, r0, r5
    beq lbl_8019CD88
    mr r3, r0
    blr
lbl_8019CD88:
    cmpwi r5, 0x0
    bne lbl_8019CD70
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// strncmp
// ----------------------------------------------------------------------------
asm void strncmp() {
    nofralloc
    subi r3, r3, 0x1
    subi r4, r4, 0x1
    addi r6, r5, 0x1
    b lbl_8019CDC8
lbl_8019CDA8:
    lbzu r0, 0x1(r3)
    lbzu r5, 0x1(r4)
    cmplw r0, r5
    beq lbl_8019CDC0
    subf r3, r5, r0
    blr
lbl_8019CDC0:
    cmpwi r0, 0x0
    beq lbl_8019CDD0
lbl_8019CDC8:
    subic. r6, r6, 0x1
    bne lbl_8019CDA8
lbl_8019CDD0:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// strchr
// ----------------------------------------------------------------------------
asm void strchr() {
    nofralloc
    subi r3, r3, 0x1
    clrlwi r0, r4, 24
    b lbl_8019CDEC
lbl_8019CDE4:
    cmplw r4, r0
    beqlr
lbl_8019CDEC:
    lbzu r4, 0x1(r3)
    cmpwi r4, 0x0
    bne lbl_8019CDE4
    cmpwi r0, 0x0
    beqlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8019CE08
// ----------------------------------------------------------------------------
asm void fn_8019CE08() {
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    subi r8, r4, 0x1
    li r4, 0x1
    stw r0, 0x8(r1)
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    b lbl_8019CE5C
lbl_8019CE40:
    extrwi r7, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r7
    clrlwi r0, r0, 24
    or r0, r5, r0
    stbx r0, r6, r7
lbl_8019CE5C:
    lbzu r0, 0x1(r8)
    cmpwi r0, 0x0
    bne lbl_8019CE40
    subi r7, r3, 0x1
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_8019CE94
lbl_8019CE78:
    extrwi r5, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_8019CEA0
lbl_8019CE94:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_8019CE78
lbl_8019CEA0:
    subf r3, r3, r7
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8019CEAC
// ----------------------------------------------------------------------------
asm void fn_8019CEAC() {
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_8019CEE0
    stw r3, lbl_8049C414
lbl_8019CEE0:
    subi r7, r4, 0x1
    addi r5, r1, 0x8
    li r3, 0x1
    b lbl_8019CF0C
lbl_8019CEF0:
    extrwi r6, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r3, r0
    lbzx r4, r5, r6
    clrlwi r0, r0, 24
    or r0, r4, r0
    stbx r0, r5, r6
lbl_8019CF0C:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_8019CEF0
    lwz r4, lbl_8049C414
    addi r5, r1, 0x8
    li r3, 0x1
    subi r7, r4, 0x1
    b lbl_8019CF48
lbl_8019CF2C:
    extrwi r4, r6, 5, 24
    clrlwi r0, r6, 29
    slw r0, r3, r0
    lbzx r4, r5, r4
    clrlwi r0, r0, 24
    and. r0, r4, r0
    beq lbl_8019CF54
lbl_8019CF48:
    lbzu r6, 0x1(r7)
    cmpwi r6, 0x0
    bne lbl_8019CF2C
lbl_8019CF54:
    cmpwi r6, 0x0
    bne lbl_8019CF6C
    lwz r0, lbl_8049C410
    li r3, 0x0
    stw r0, lbl_8049C414
    b lbl_8019CFC8
lbl_8019CF6C:
    mr r3, r7
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_8019CF98
lbl_8019CF7C:
    extrwi r5, r8, 5, 24
    clrlwi r0, r8, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_8019CFA4
lbl_8019CF98:
    lbzu r8, 0x1(r7)
    cmpwi r8, 0x0
    bne lbl_8019CF7C
lbl_8019CFA4:
    cmpwi r8, 0x0
    bne lbl_8019CFB8
    lwz r0, lbl_8049C410
    stw r0, lbl_8049C414
    b lbl_8019CFC8
lbl_8019CFB8:
    addi r4, r7, 0x1
    li r0, 0x0
    stw r4, lbl_8049C414
    stb r0, 0x0(r7)
lbl_8019CFC8:
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// strstr
// ----------------------------------------------------------------------------
asm void strstr() {
    nofralloc
    cmpwi r4, 0x0
    subi r5, r3, 0x1
    beqlr
    lbz r6, 0x0(r4)
    cmpwi r6, 0x0
    bne lbl_8019D028
    blr
    b lbl_8019D028
lbl_8019CFF0:
    cmplw r0, r6
    bne lbl_8019D028
    subi r7, r5, 0x1
    subi r8, r4, 0x1
lbl_8019D000:
    lbzu r0, 0x1(r7)
    lbzu r3, 0x1(r8)
    cmplw r0, r3
    bne lbl_8019D018
    cmpwi r0, 0x0
    bne lbl_8019D000
lbl_8019D018:
    cmpwi r3, 0x0
    bne lbl_8019D028
    mr r3, r5
    blr
lbl_8019D028:
    lbzu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_8019CFF0
    li r3, 0x0
    blr
}

