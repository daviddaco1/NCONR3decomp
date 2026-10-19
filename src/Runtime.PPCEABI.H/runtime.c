#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/runtime.cpp
// Total functions: 12

// Global data symbols (@ha/@l)
u8 lbl_8033B2B0[];

// Forward declarations
void __div2u();
void __mod2u();
void __restore_fpr();
void __restore_gpr();
void __save_fpr();
void __save_gpr();
void fn_80193C8C();
void fn_80193F04();
void fn_80194120();
void fn_8019422C();
void fn_80194250();
void fn_80194274();

// ----------------------------------------------------------------------------
// fn_80193C8C
// ----------------------------------------------------------------------------
asm void fn_80193C8C() {
    nofralloc
    stwu r1, -0x10(r1)
    lis r4, lbl_8033B2B0@ha
    addi r4, r4, lbl_8033B2B0@l
    li r3, 0x0
    lfd f0, 0x0(r4)
    lfd f3, 0x8(r4)
    lfd f4, 0x10(r4)
    fcmpu cr0, f1, f0
    fcmpu cr6, f1, f3
    blt lbl_80193CE0
    subi r3, r3, 0x1
    bge cr6, lbl_80193CE0
    fcmpu cr7, f1, f4
    fmr f2, f1
    blt cr7, lbl_80193CCC
    fsub f2, f1, f4
lbl_80193CCC:
    fctiwz f2, f2
    stfd f2, 0x8(r1)
    lwz r3, 0xc(r1)
    blt cr7, lbl_80193CE0
    addis r3, r3, 0x8000
lbl_80193CE0:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __save_fpr
// ----------------------------------------------------------------------------
asm void __save_fpr() {
    nofralloc
    stfd f14, -0x90(r11)
    stfd f15, -0x88(r11)
    stfd f16, -0x80(r11)
    stfd f17, -0x78(r11)
    stfd f18, -0x70(r11)
    stfd f19, -0x68(r11)
    stfd f20, -0x60(r11)
    stfd f21, -0x58(r11)
    stfd f22, -0x50(r11)
    stfd f23, -0x48(r11)
    stfd f24, -0x40(r11)
    stfd f25, -0x38(r11)
    stfd f26, -0x30(r11)
    stfd f27, -0x28(r11)
    stfd f28, -0x20(r11)
    stfd f29, -0x18(r11)
    stfd f30, -0x10(r11)
    stfd f31, -0x8(r11)
    blr
}

// ----------------------------------------------------------------------------
// __restore_fpr
// ----------------------------------------------------------------------------
asm void __restore_fpr() {
    nofralloc
    lfd f14, -0x90(r11)
    lfd f15, -0x88(r11)
    lfd f16, -0x80(r11)
    lfd f17, -0x78(r11)
    lfd f18, -0x70(r11)
    lfd f19, -0x68(r11)
    lfd f20, -0x60(r11)
    lfd f21, -0x58(r11)
    lfd f22, -0x50(r11)
    lfd f23, -0x48(r11)
    lfd f24, -0x40(r11)
    lfd f25, -0x38(r11)
    lfd f26, -0x30(r11)
    lfd f27, -0x28(r11)
    lfd f28, -0x20(r11)
    lfd f29, -0x18(r11)
    lfd f30, -0x10(r11)
    lfd f31, -0x8(r11)
    blr
}

// ----------------------------------------------------------------------------
// __save_gpr
// ----------------------------------------------------------------------------
asm void __save_gpr() {
    nofralloc
    stw r14, -0x48(r11)
    stw r15, -0x44(r11)
    stw r16, -0x40(r11)
    stw r17, -0x3c(r11)
    stw r18, -0x38(r11)
    stw r19, -0x34(r11)
    stw r20, -0x30(r11)
    stw r21, -0x2c(r11)
    stw r22, -0x28(r11)
    stw r23, -0x24(r11)
    stw r24, -0x20(r11)
    stw r25, -0x1c(r11)
    stw r26, -0x18(r11)
    stw r27, -0x14(r11)
    stw r28, -0x10(r11)
    stw r29, -0xc(r11)
    stw r30, -0x8(r11)
    stw r31, -0x4(r11)
    blr
}

// ----------------------------------------------------------------------------
// __restore_gpr
// ----------------------------------------------------------------------------
asm void __restore_gpr() {
    nofralloc
    lwz r14, -0x48(r11)
    lwz r15, -0x44(r11)
    lwz r16, -0x40(r11)
    lwz r17, -0x3c(r11)
    lwz r18, -0x38(r11)
    lwz r19, -0x34(r11)
    lwz r20, -0x30(r11)
    lwz r21, -0x2c(r11)
    lwz r22, -0x28(r11)
    lwz r23, -0x24(r11)
    lwz r24, -0x20(r11)
    lwz r25, -0x1c(r11)
    lwz r26, -0x18(r11)
    lwz r27, -0x14(r11)
    lwz r28, -0x10(r11)
    lwz r29, -0xc(r11)
    lwz r30, -0x8(r11)
    lwz r31, -0x4(r11)
    blr
}

// ----------------------------------------------------------------------------
// __div2u
// ----------------------------------------------------------------------------
asm void __div2u() {
    nofralloc
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl_80193E2C
    addi r0, r9, 0x20
lbl_80193E2C:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl_80193E40
    addi r9, r10, 0x20
lbl_80193E40:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl_80193EF8
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl_80193E78
    srw r8, r3, r7
    li r7, 0x0
    b lbl_80193E8C
lbl_80193E78:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl_80193E8C:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl_80193EA4
    slw r3, r4, r9
    li r4, 0x0
    b lbl_80193EB8
lbl_80193EA4:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl_80193EB8:
    li r10, -0x1
    addic r7, r7, 0x0
lbl_80193EC0:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl_80193EE8
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl_80193EE8:
    bdnz lbl_80193EC0
    adde r4, r4, r4
    adde r3, r3, r3
    blr
lbl_80193EF8:
    li r4, 0x0
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80193F04
// ----------------------------------------------------------------------------
asm void fn_80193F04() {
    nofralloc
    stwu r1, -0x10(r1)
    clrrwi. r9, r3, 31
    beq lbl_80193F18
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_80193F18:
    stw r9, 0x8(r1)
    clrrwi. r10, r5, 31
    beq lbl_80193F2C
    subfic r6, r6, 0x0
    subfze r5, r5
lbl_80193F2C:
    stw r10, 0xc(r1)
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl_80193F44
    addi r0, r9, 0x20
lbl_80193F44:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl_80193F58
    addi r9, r10, 0x20
lbl_80193F58:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl_8019402C
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl_80193F90
    srw r8, r3, r7
    li r7, 0x0
    b lbl_80193FA4
lbl_80193F90:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl_80193FA4:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl_80193FBC
    slw r3, r4, r9
    li r4, 0x0
    b lbl_80193FD0
lbl_80193FBC:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl_80193FD0:
    li r10, -0x1
    addic r7, r7, 0x0
lbl_80193FD8:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl_80194000
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl_80194000:
    bdnz lbl_80193FD8
    adde r4, r4, r4
    adde r3, r3, r3
    lwz r9, 0x8(r1)
    lwz r10, 0xc(r1)
    xor. r7, r9, r10
    beq lbl_80194028
    cmpwi r9, 0x0
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_80194028:
    b lbl_80194034
lbl_8019402C:
    li r4, 0x0
    li r3, 0x0
lbl_80194034:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __mod2u
// ----------------------------------------------------------------------------
asm void __mod2u() {
    nofralloc
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl_80194050
    addi r0, r9, 0x20
lbl_80194050:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl_80194064
    addi r9, r10, 0x20
lbl_80194064:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl_8019411C
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl_8019409C
    srw r8, r3, r7
    li r7, 0x0
    b lbl_801940B0
lbl_8019409C:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl_801940B0:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl_801940C8
    slw r3, r4, r9
    li r4, 0x0
    b lbl_801940DC
lbl_801940C8:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl_801940DC:
    li r10, -0x1
    addic r7, r7, 0x0
lbl_801940E4:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl_8019410C
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl_8019410C:
    bdnz lbl_801940E4
    mr r4, r8
    mr r3, r7
    blr
lbl_8019411C:
    blr
}

// ----------------------------------------------------------------------------
// fn_80194120
// ----------------------------------------------------------------------------
asm void fn_80194120() {
    nofralloc
    cmpwi cr7, r3, 0x0
    bge cr7, lbl_80194130
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_80194130:
    cmpwi r5, 0x0
    bge lbl_80194140
    subfic r6, r6, 0x0
    subfze r5, r5
lbl_80194140:
    cmpwi r3, 0x0
    cntlzw r0, r3
    cntlzw r9, r4
    bne lbl_80194154
    addi r0, r9, 0x20
lbl_80194154:
    cmpwi r5, 0x0
    cntlzw r9, r5
    cntlzw r10, r6
    bne lbl_80194168
    addi r9, r10, 0x20
lbl_80194168:
    cmpw r0, r9
    subfic r10, r0, 0x40
    bgt lbl_8019421C
    addi r9, r9, 0x1
    subfic r9, r9, 0x40
    add r0, r0, r9
    subf r9, r9, r10
    mtctr r9
    cmpwi r9, 0x20
    subi r7, r9, 0x20
    blt lbl_801941A0
    srw r8, r3, r7
    li r7, 0x0
    b lbl_801941B4
lbl_801941A0:
    srw r8, r4, r9
    subfic r7, r9, 0x20
    slw r7, r3, r7
    or r8, r8, r7
    srw r7, r3, r9
lbl_801941B4:
    cmpwi r0, 0x20
    subic r9, r0, 0x20
    blt lbl_801941CC
    slw r3, r4, r9
    li r4, 0x0
    b lbl_801941E0
lbl_801941CC:
    slw r3, r3, r0
    subfic r9, r0, 0x20
    srw r9, r4, r9
    or r3, r3, r9
    slw r4, r4, r0
lbl_801941E0:
    li r10, -0x1
    addic r7, r7, 0x0
lbl_801941E8:
    adde r4, r4, r4
    adde r3, r3, r3
    adde r8, r8, r8
    adde r7, r7, r7
    subfc r0, r6, r8
    subfe. r9, r5, r7
    blt lbl_80194210
    mr r8, r0
    mr r7, r9
    addic r0, r10, 0x1
lbl_80194210:
    bdnz lbl_801941E8
    mr r4, r8
    mr r3, r7
lbl_8019421C:
    bge cr7, lbl_80194228
    subfic r4, r4, 0x0
    subfze r3, r3
lbl_80194228:
    blr
}

// ----------------------------------------------------------------------------
// fn_8019422C
// ----------------------------------------------------------------------------
asm void fn_8019422C() {
    nofralloc
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    slw r3, r3, r5
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_80194250
// ----------------------------------------------------------------------------
asm void fn_80194250() {
    nofralloc
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    srw r4, r4, r5
    slw r10, r3, r8
    or r4, r4, r10
    srw r10, r3, r9
    or r4, r4, r10
    srw r3, r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_80194274
// ----------------------------------------------------------------------------
asm void fn_80194274() {
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    extrwi r5, r3, 11, 1
    cmplwi r5, 0x3ff
    bge lbl_8019429C
lbl_80194290:
    li r3, 0x0
    li r4, 0x0
    b lbl_80194314
lbl_8019429C:
    clrrwi. r6, r3, 31
    bne lbl_80194290
    clrlwi r3, r3, 12
    oris r3, r3, 0x10
    subi r5, r5, 0x433
    cmpwi r5, 0x0
    bge lbl_801942E0
    neg r5, r5
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    srw r4, r4, r5
    slw r10, r3, r8
    or r4, r4, r10
    srw r10, r3, r9
    or r4, r4, r10
    srw r3, r3, r5
    b lbl_80194314
lbl_801942E0:
    cmpwi r5, 0xb
    ble+ lbl_801942F4
    li r3, -0x1
    li r4, -0x1
    b lbl_80194314
lbl_801942F4:
    subfic r8, r5, 0x20
    subic r9, r5, 0x20
    slw r3, r3, r5
    srw r10, r4, r8
    or r3, r3, r10
    slw r10, r4, r9
    or r3, r3, r10
    slw r4, r4, r5
lbl_80194314:
    addi r1, r1, 0x10
    blr
}

