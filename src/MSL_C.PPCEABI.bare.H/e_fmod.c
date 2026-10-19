#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/e_fmod.cpp
// Total functions: 1

// Global data symbols (@ha/@l)
u8 lbl_8033C000[];

// Forward declarations
void fn_8019F86C();

// ----------------------------------------------------------------------------
// fn_8019F86C
// ----------------------------------------------------------------------------
asm void fn_8019F86C() {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f2, 0x10(r1)
    stfd f1, 0x8(r1)
    lwz r0, 0x10(r1)
    lwz r7, 0x8(r1)
    lwz r6, 0x14(r1)
    clrlwi r0, r0, 1
    clrrwi r4, r7, 31
    lwz r5, 0xc(r1)
    or. r3, r0, r6
    xor r8, r7, r4
    beq lbl_8019F8C0
    lis r7, 0x7ff0
    cmpw r8, r7
    bge lbl_8019F8C0
    neg r3, r6
    or r3, r6, r3
    srwi r3, r3, 31
    or r3, r0, r3
    cmplw r3, r7
    ble lbl_8019F8CC
lbl_8019F8C0:
    fmul f0, f1, f2
    fdiv f1, f0, f0
    b lbl_8019FBE4
lbl_8019F8CC:
    cmpw r8, r0
    bgt lbl_8019F8FC
    blt lbl_8019FBE4
    cmplw r5, r6
    bge lbl_8019F8E4
    b lbl_8019FBE4
lbl_8019F8E4:
    bne lbl_8019F8FC
    lis r3, lbl_8033C000@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_8033C000@l
    lfdx f1, r3, r0
    b lbl_8019FBE4
lbl_8019F8FC:
    lis r3, 0x10
    cmpw r8, r3
    bge lbl_8019F950
    cmpwi r8, 0x0
    bne lbl_8019F930
    mr r3, r5
    li r11, -0x413
    b lbl_8019F924
lbl_8019F91C:
    slwi r3, r3, 1
    subi r11, r11, 0x1
lbl_8019F924:
    cmpwi r3, 0x0
    bgt lbl_8019F91C
    b lbl_8019F958
lbl_8019F930:
    slwi r3, r8, 11
    li r11, -0x3fe
    b lbl_8019F944
lbl_8019F93C:
    slwi r3, r3, 1
    subi r11, r11, 0x1
lbl_8019F944:
    cmpwi r3, 0x0
    bgt lbl_8019F93C
    b lbl_8019F958
lbl_8019F950:
    srawi r3, r8, 20
    subi r11, r3, 0x3ff
lbl_8019F958:
    lis r3, 0x10
    cmpw r0, r3
    bge lbl_8019F9AC
    cmpwi r0, 0x0
    bne lbl_8019F98C
    mr r7, r6
    li r3, -0x413
    b lbl_8019F980
lbl_8019F978:
    slwi r7, r7, 1
    subi r3, r3, 0x1
lbl_8019F980:
    cmpwi r7, 0x0
    bgt lbl_8019F978
    b lbl_8019F9B4
lbl_8019F98C:
    slwi r7, r0, 11
    li r3, -0x3fe
    b lbl_8019F9A0
lbl_8019F998:
    slwi r7, r7, 1
    subi r3, r3, 0x1
lbl_8019F9A0:
    cmpwi r7, 0x0
    bgt lbl_8019F998
    b lbl_8019F9B4
lbl_8019F9AC:
    srawi r3, r0, 20
    subi r3, r3, 0x3ff
lbl_8019F9B4:
    cmpwi r11, -0x3fe
    blt lbl_8019F9C8
    clrlwi r7, r8, 12
    oris r9, r7, 0x10
    b lbl_8019F9F8
lbl_8019F9C8:
    subfic r9, r11, -0x3fe
    cmpwi r9, 0x1f
    bgt lbl_8019F9EC
    subfic r7, r9, 0x20
    slw r8, r8, r9
    srw r7, r5, r7
    slw r5, r5, r9
    or r9, r8, r7
    b lbl_8019F9F8
lbl_8019F9EC:
    subi r7, r9, 0x20
    slw r9, r5, r7
    li r5, 0x0
lbl_8019F9F8:
    cmpwi r3, -0x3fe
    blt lbl_8019FA0C
    clrlwi r0, r0, 12
    oris r10, r0, 0x10
    b lbl_8019FA3C
lbl_8019FA0C:
    subfic r10, r3, -0x3fe
    cmpwi r10, 0x1f
    bgt lbl_8019FA30
    subfic r7, r10, 0x20
    slw r8, r0, r10
    srw r0, r6, r7
    slw r6, r6, r10
    or r10, r8, r0
    b lbl_8019FA3C
lbl_8019FA30:
    subi r0, r10, 0x20
    slw r10, r6, r0
    li r6, 0x0
lbl_8019FA3C:
    subf. r7, r3, r11
    addi r11, r7, 0x2
    srw r8, r6, r11
    mtctr r7
    beq lbl_8019FAD4
lbl_8019FA50:
    subf. r7, r10, r9
    subf r12, r6, r5
    bne lbl_8019FA7C
    srw r0, r5, r11
    cmplw r0, r8
    bne lbl_8019FA7C
    lis r3, lbl_8033C000@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_8033C000@l
    lfdx f1, r3, r0
    b lbl_8019FBE4
lbl_8019FA7C:
    cmplw r5, r6
    bge lbl_8019FA88
    subi r7, r7, 0x1
lbl_8019FA88:
    cmpwi r7, 0x0
    bge lbl_8019FAA4
    srwi r7, r5, 31
    slwi r0, r9, 1
    add r9, r7, r0
    add r5, r5, r5
    b lbl_8019FAD0
lbl_8019FAA4:
    or. r0, r7, r12
    bne lbl_8019FAC0
    lis r3, lbl_8033C000@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_8033C000@l
    lfdx f1, r3, r0
    b lbl_8019FBE4
lbl_8019FAC0:
    srwi r5, r12, 31
    slwi r0, r7, 1
    add r9, r5, r0
    slwi r5, r12, 1
lbl_8019FAD0:
    bdnz lbl_8019FA50
lbl_8019FAD4:
    subf. r7, r10, r9
    subf r10, r6, r5
    bne lbl_8019FB00
    srw r0, r5, r11
    cmplw r0, r8
    bne lbl_8019FB00
    lis r3, lbl_8033C000@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_8033C000@l
    lfdx f1, r3, r0
    b lbl_8019FBE4
lbl_8019FB00:
    cmplw r5, r6
    bge lbl_8019FB0C
    subi r7, r7, 0x1
lbl_8019FB0C:
    cmpwi r7, 0x0
    blt lbl_8019FB1C
    mr r9, r7
    mr r5, r10
lbl_8019FB1C:
    or. r0, r9, r5
    bne lbl_8019FB38
    lis r3, lbl_8033C000@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_8033C000@l
    lfdx f1, r3, r0
    b lbl_8019FBE4
lbl_8019FB38:
    lis r0, 0x10
    b lbl_8019FB54
lbl_8019FB40:
    srwi r7, r5, 31
    slwi r6, r9, 1
    add r9, r7, r6
    add r5, r5, r5
    subi r3, r3, 0x1
lbl_8019FB54:
    cmpw r9, r0
    blt lbl_8019FB40
    cmpwi r3, -0x3fe
    blt lbl_8019FB84
    addi r0, r3, 0x3ff
    subis r3, r9, 0x10
    slwi r0, r0, 20
    stw r5, 0xc(r1)
    or r0, r3, r0
    or r0, r0, r4
    stw r0, 0x8(r1)
    b lbl_8019FBE0
lbl_8019FB84:
    subfic r6, r3, -0x3fe
    cmpwi r6, 0x14
    bgt lbl_8019FBA8
    subfic r0, r6, 0x20
    srw r3, r5, r6
    slw r0, r9, r0
    sraw r9, r9, r6
    or r3, r3, r0
    b lbl_8019FBD4
lbl_8019FBA8:
    cmpwi r6, 0x1f
    bgt lbl_8019FBC8
    subfic r3, r6, 0x20
    srw r0, r5, r6
    slw r3, r9, r3
    mr r9, r4
    or r3, r3, r0
    b lbl_8019FBD4
lbl_8019FBC8:
    subi r0, r6, 0x20
    sraw r3, r9, r0
    mr r9, r4
lbl_8019FBD4:
    or r0, r9, r4
    stw r0, 0x8(r1)
    stw r3, 0xc(r1)
lbl_8019FBE0:
    lfd f1, 0x8(r1)
lbl_8019FBE4:
    addi r1, r1, 0x20
    blr
}

