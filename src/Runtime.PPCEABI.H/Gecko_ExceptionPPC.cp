#include "types.h"

// Translation unit: src/Runtime.PPCEABI.H/Gecko_ExceptionPPC.cpp
// Total functions: 14

// Global data symbols (@ha/@l)
extern "C" u8 fragmentinfo_803D7500[];
extern "C" u8 jumptable_8035F6C8[];
extern "C" u8 jumptable_8035F70C[];
extern "C" u8 lbl_8033B2DC[];
extern "C" u8 lbl_8035F750[];
extern "C" u8 lbl_8035F76C[];

// Forward declarations
extern "C" void __register_fragment();
extern "C" void __unregister_fragment();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_801936E8();
extern "C" void fn_801936F4();
extern "C" void fn_80193700();
extern "C" void fn_801943E8();
extern "C" void fn_80194470();
extern "C" void fn_80194620();
extern "C" void fn_801947D0();
extern "C" void fn_80194D24();
extern "C" void fn_80195230();
extern "C" void fn_801953E8();
extern "C" void fn_80195428();
extern "C" void fn_8019552C();
extern "C" void fn_80195934();
extern "C" void fn_80195A78();
extern "C" void fn_80195AA4();

// ----------------------------------------------------------------------------
// __register_fragment
// ----------------------------------------------------------------------------
extern "C" asm void __register_fragment() {
    nofralloc
    lis r5, fragmentinfo_803D7500@ha
    addi r5, r5, fragmentinfo_803D7500@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bne lbl_801943B8
    stw r3, 0x0(r5)
    li r0, 0x1
    li r3, 0x0
    stw r4, 0x4(r5)
    stw r0, 0x8(r5)
    blr
lbl_801943B8:
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// __unregister_fragment
// ----------------------------------------------------------------------------
extern "C" asm void __unregister_fragment() {
    nofralloc
    cmpwi r3, 0x0
    bnelr
    mulli r4, r3, 0xc
    lis r3, fragmentinfo_803D7500@ha
    li r0, 0x0
    addi r3, r3, fragmentinfo_803D7500@l
    stwux r0, r3, r4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801943E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801943E8() {
    nofralloc
    lis r6, fragmentinfo_803D7500@ha
    addi r6, r6, fragmentinfo_803D7500@l
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_80194468
    lwz r7, 0x0(r6)
lbl_80194400:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    beq lbl_80194468
    lwz r5, 0x8(r7)
    cmplw r3, r5
    blt lbl_80194460
    add r0, r5, r0
    cmplw r3, r0
    bge lbl_80194460
    lwz r3, 0x0(r7)
    li r0, 0x0
    stw r3, 0x0(r4)
    li r3, 0x1
    lwz r5, 0x4(r7)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    stw r0, 0xc(r4)
    stw r0, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x4(r6)
    stw r0, 0x18(r4)
    lwz r0, 0x8(r6)
    stw r0, 0x1c(r4)
    blr
lbl_80194460:
    addi r7, r7, 0x10
    b lbl_80194400
lbl_80194468:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80194470
// ----------------------------------------------------------------------------
extern "C" asm void fn_80194470() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r0, 0x0(r4)
    stw r0, 0x8(r4)
    addi r4, r1, 0x8
    bl fn_801943E8
    cmpwi r3, 0x0
    beq lbl_80194608
    lwz r0, 0x10(r1)
    lis r3, 0x2aab
    stw r0, 0xc(r31)
    subi r3, r3, 0x5555
    li r7, 0x0
    lwz r0, 0x18(r1)
    stw r0, 0x10(r31)
    lwz r0, 0x20(r1)
    stw r0, 0x14(r31)
    lwz r5, 0x8(r1)
    lwz r0, 0xc(r1)
    lwz r4, 0x10(r1)
    subf r0, r5, r0
    mulhw r3, r3, r0
    subf r0, r4, r30
    srawi r3, r3, 1
    srwi r4, r3, 31
    add r9, r3, r4
lbl_801944F0:
    cmpw r7, r9
    bgt lbl_80194608
    add r4, r7, r9
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r8, r3, 1
    mulli r3, r8, 0xc
    lwzx r4, r5, r3
    add r6, r5, r3
    cmplw r0, r4
    bge lbl_80194524
    subi r9, r8, 0x1
    b lbl_801944F0
lbl_80194524:
    lwz r3, 0x4(r6)
    clrlwi r3, r3, 1
    add r3, r4, r3
    cmplw r0, r3
    ble lbl_80194540
    addi r7, r8, 0x1
    b lbl_801944F0
lbl_80194540:
    lwz r3, 0x10(r1)
    add r3, r3, r4
    stw r3, 0x4(r31)
    lwz r3, 0x4(r6)
    srwi. r3, r3, 31
    beq lbl_80194560
    addi r5, r6, 0x8
    b lbl_8019456C
lbl_80194560:
    lwz r4, 0x18(r1)
    lwz r3, 0x8(r6)
    add r5, r4, r3
lbl_8019456C:
    stw r5, 0x0(r31)
    lhz r3, 0x0(r5)
    lwz r4, 0x0(r6)
    extrwi. r3, r3, 1, 28
    subf r0, r4, r0
    beq lbl_801945CC
    addi r6, r5, 0x4
    b lbl_801945BC
lbl_8019458C:
    lhz r3, 0x4(r6)
    cmplw r4, r0
    slwi r3, r3, 2
    add r3, r4, r3
    bgt lbl_801945B8
    cmplw r3, r0
    blt lbl_801945B8
    lhz r0, 0x6(r6)
    add r0, r5, r0
    stw r0, 0x8(r31)
    b lbl_80194608
lbl_801945B8:
    addi r6, r6, 0x8
lbl_801945BC:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    bne lbl_8019458C
    b lbl_80194608
lbl_801945CC:
    addi r4, r5, 0x2
    b lbl_801945FC
lbl_801945D4:
    cmplw r3, r0
    bgt lbl_801945F8
    lhz r3, 0x2(r4)
    cmplw r3, r0
    blt lbl_801945F8
    lhz r0, 0x4(r4)
    add r0, r5, r0
    stw r0, 0x8(r31)
    b lbl_80194608
lbl_801945F8:
    addi r4, r4, 0x6
lbl_801945FC:
    lhz r3, 0x0(r4)
    cmpwi r3, 0x0
    bne lbl_801945D4
lbl_80194608:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80194620
// ----------------------------------------------------------------------------
extern "C" asm void fn_80194620() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
lbl_80194638:
    lwz r4, 0x8(r31)
    cmpwi r4, 0x0
    beq lbl_80194650
    lbz r5, 0x0(r4)
    rlwinm. r0, r5, 0, 24, 24
    beq lbl_801946C0
lbl_80194650:
    lwz r3, 0x0(r31)
    lwz r4, 0x18(r31)
    lhz r3, 0x0(r3)
    lwz r30, 0x0(r4)
    srawi. r0, r3, 11
    beq lbl_80194678
    rlwinm r0, r3, 29, 24, 28
    subf r3, r0, r30
    lwz r0, -0x4(r3)
    stw r0, 0x20(r31)
lbl_80194678:
    lwz r3, 0x4(r30)
    mr r4, r31
    bl fn_80194470
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_80194694
    bl fn_801936E8
lbl_80194694:
    stw r30, 0x18(r31)
    lwz r3, 0x0(r31)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_801946AC
    lwz r30, 0x20(r31)
lbl_801946AC:
    lwz r0, 0x8(r31)
    stw r30, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_80194638
    b lbl_8019478C
lbl_801946C0:
    cmplwi r5, 0x10
    bgt lbl_80194788
    lis r3, jumptable_8035F6C8@ha
    slwi r0, r5, 2
    addi r3, r3, jumptable_8035F6C8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x10
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x14
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x8
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x10
    stw r0, 0x8(r31)
    b lbl_8019478C
    addi r0, r4, 0x4
    stw r0, 0x8(r31)
    b lbl_8019478C
    lhz r0, 0x2(r4)
    slwi r0, r0, 2
    add r3, r0, r4
    addi r0, r3, 0xc
    stw r0, 0x8(r31)
    b lbl_8019478C
lbl_80194788:
    bl fn_801936E8
lbl_8019478C:
    lwz r4, 0x8(r31)
    lbz r0, 0x0(r4)
    clrlwi r3, r0, 25
    cmplwi r3, 0x1
    bne lbl_801947B8
    lwz r3, 0x0(r31)
    lhz r0, 0x2(r4)
    add r3, r3, r0
    stw r3, 0x8(r31)
    lbz r0, 0x0(r3)
    clrlwi r3, r0, 25
lbl_801947B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801947D0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801947D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r5, 0x0(r4)
    lwz r6, 0x284(r3)
    lhz r0, 0x0(r5)
    lwz r7, 0x0(r6)
    extrwi. r5, r0, 1, 30
    extrwi r12, r0, 5, 21
    beq lbl_8019480C
    slwi r0, r12, 4
    subf r8, r0, r7
    b lbl_80194814
lbl_8019480C:
    slwi r0, r12, 3
    subf r8, r0, r7
lbl_80194814:
    cmpwi r5, 0x0
    beq lbl_80194A30
    subfic r5, r12, 0x20
    li r6, 0x0
    cmpwi r5, 0x20
    li r9, 0x0
    bge lbl_80194B90
    cmpwi r12, 0x8
    ble lbl_801949E8
    cmpwi r5, 0x21
    li r10, 0x0
    li r11, 0x0
    li r0, 0x0
    bge lbl_80194850
    li r0, 0x1
lbl_80194850:
    cmpwi r0, 0x0
    beq lbl_80194868
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80194868
    li r11, 0x1
lbl_80194868:
    cmpwi r11, 0x0
    beq lbl_80194898
    neg r0, r5
    li r11, 0x1
    clrrwi. r0, r0, 31
    bne lbl_8019488C
    clrrwi. r0, r12, 31
    beq lbl_8019488C
    li r11, 0x0
lbl_8019488C:
    cmpwi r11, 0x0
    beq lbl_80194898
    li r10, 0x1
lbl_80194898:
    cmpwi r10, 0x0
    beq lbl_801949E8
    subfic r0, r5, 0x1f
    slwi r10, r5, 4
    srwi r0, r0, 3
    add r29, r3, r10
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_801949E8
lbl_801948BC:
    add r11, r8, r9
    addi r0, r6, 0x1
    lfs f0, 0x8(r11)
    slwi r10, r0, 4
    stfs f0, 0x8(r29)
    add r28, r8, r10
    addi r0, r6, 0x2
    addi r10, r6, 0x6
    lfs f0, 0xc(r11)
    slwi r31, r0, 4
    stfs f0, 0xc(r29)
    addi r0, r6, 0x3
    slwi r30, r0, 4
    slwi r10, r10, 4
    lfdx f0, r8, r9
    addi r0, r6, 0x4
    stfd f0, 0x0(r29)
    slwi r12, r0, 4
    addi r0, r6, 0x5
    add r31, r8, r31
    lfs f0, 0x8(r28)
    slwi r11, r0, 4
    stfs f0, 0x18(r29)
    addi r0, r6, 0x7
    slwi r0, r0, 4
    add r30, r8, r30
    lfs f0, 0xc(r28)
    add r12, r8, r12
    stfs f0, 0x1c(r29)
    add r11, r8, r11
    add r10, r8, r10
    add r27, r8, r0
    lfd f0, 0x0(r28)
    addi r6, r6, 0x8
    stfd f0, 0x10(r29)
    addi r9, r9, 0x80
    addi r5, r5, 0x8
    lfs f0, 0x8(r31)
    stfs f0, 0x28(r29)
    lfs f0, 0xc(r31)
    stfs f0, 0x2c(r29)
    lfd f0, 0x0(r31)
    stfd f0, 0x20(r29)
    lfs f0, 0x8(r30)
    stfs f0, 0x38(r29)
    lfs f0, 0xc(r30)
    stfs f0, 0x3c(r29)
    lfd f0, 0x0(r30)
    stfd f0, 0x30(r29)
    lfs f0, 0x8(r12)
    stfs f0, 0x48(r29)
    lfs f0, 0xc(r12)
    stfs f0, 0x4c(r29)
    lfd f0, 0x0(r12)
    stfd f0, 0x40(r29)
    lfs f0, 0x8(r11)
    stfs f0, 0x58(r29)
    lfs f0, 0xc(r11)
    stfs f0, 0x5c(r29)
    lfd f0, 0x0(r11)
    stfd f0, 0x50(r29)
    lfs f0, 0x8(r10)
    stfs f0, 0x68(r29)
    lfs f0, 0xc(r10)
    stfs f0, 0x6c(r29)
    lfd f0, 0x0(r10)
    stfd f0, 0x60(r29)
    lfs f0, 0x8(r27)
    stfs f0, 0x78(r29)
    lfs f0, 0xc(r27)
    stfs f0, 0x7c(r29)
    lfdx f0, r8, r0
    stfd f0, 0x70(r29)
    addi r29, r29, 0x80
    bdnz lbl_801948BC
lbl_801949E8:
    slwi r9, r6, 4
    slwi r6, r5, 4
    subfic r0, r5, 0x20
    add r9, r8, r9
    add r6, r3, r6
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_80194B90
lbl_80194A08:
    lfs f0, 0x8(r9)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r9)
    stfs f0, 0xc(r6)
    lfd f0, 0x0(r9)
    addi r9, r9, 0x10
    stfd f0, 0x0(r6)
    addi r6, r6, 0x10
    bdnz lbl_80194A08
    b lbl_80194B90
lbl_80194A30:
    subfic r5, r12, 0x20
    li r6, 0x0
    cmpwi r5, 0x20
    li r9, 0x0
    bge lbl_80194B90
    cmpwi r12, 0x8
    ble lbl_80194B5C
    cmpwi r5, 0x21
    li r10, 0x0
    li r11, 0x0
    li r0, 0x0
    bge lbl_80194A64
    li r0, 0x1
lbl_80194A64:
    cmpwi r0, 0x0
    beq lbl_80194A7C
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80194A7C
    li r11, 0x1
lbl_80194A7C:
    cmpwi r11, 0x0
    beq lbl_80194AAC
    neg r0, r5
    li r11, 0x1
    clrrwi. r0, r0, 31
    bne lbl_80194AA0
    clrrwi. r0, r12, 31
    beq lbl_80194AA0
    li r11, 0x0
lbl_80194AA0:
    cmpwi r11, 0x0
    beq lbl_80194AAC
    li r10, 0x1
lbl_80194AAC:
    cmpwi r10, 0x0
    beq lbl_80194B5C
    subfic r0, r5, 0x1f
    slwi r10, r5, 4
    srwi r0, r0, 3
    add r31, r3, r10
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_80194B5C
lbl_80194AD0:
    lfdx f0, r8, r9
    addi r0, r6, 0x1
    stfd f0, 0x0(r31)
    slwi r10, r0, 3
    addi r0, r6, 0x2
    addi r30, r6, 0x3
    lfdx f0, r8, r10
    addi r12, r6, 0x4
    stfd f0, 0x10(r31)
    slwi r0, r0, 3
    addi r11, r6, 0x5
    addi r10, r6, 0x6
    lfdx f0, r8, r0
    addi r0, r6, 0x7
    stfd f0, 0x20(r31)
    slwi r30, r30, 3
    slwi r12, r12, 3
    slwi r11, r11, 3
    lfdx f0, r8, r30
    slwi r10, r10, 3
    stfd f0, 0x30(r31)
    slwi r0, r0, 3
    addi r6, r6, 0x8
    addi r9, r9, 0x40
    lfdx f0, r8, r12
    addi r5, r5, 0x8
    stfd f0, 0x40(r31)
    lfdx f0, r8, r11
    stfd f0, 0x50(r31)
    lfdx f0, r8, r10
    stfd f0, 0x60(r31)
    lfdx f0, r8, r0
    stfd f0, 0x70(r31)
    addi r31, r31, 0x80
    bdnz lbl_80194AD0
lbl_80194B5C:
    slwi r9, r6, 3
    slwi r6, r5, 4
    subfic r0, r5, 0x20
    add r9, r8, r9
    add r6, r3, r6
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_80194B90
lbl_80194B7C:
    lfd f0, 0x0(r9)
    addi r9, r9, 0x8
    stfd f0, 0x0(r6)
    addi r6, r6, 0x10
    bdnz lbl_80194B7C
lbl_80194B90:
    lwz r4, 0x0(r4)
    li r6, 0x0
    li r9, 0x0
    lhz r0, 0x0(r4)
    srawi r11, r0, 11
    subfic r5, r11, 0x20
    cmpwi r5, 0x20
    slwi r0, r11, 2
    subf r8, r0, r8
    bge lbl_80194D04
    cmpwi r11, 0x8
    ble lbl_80194CD0
    cmpwi r5, 0x21
    li r4, 0x0
    li r10, 0x0
    li r0, 0x0
    bge lbl_80194BD8
    li r0, 0x1
lbl_80194BD8:
    cmpwi r0, 0x0
    beq lbl_80194BF0
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80194BF0
    li r10, 0x1
lbl_80194BF0:
    cmpwi r10, 0x0
    beq lbl_80194C20
    neg r0, r5
    li r10, 0x1
    clrrwi. r0, r0, 31
    bne lbl_80194C14
    clrrwi. r0, r11, 31
    beq lbl_80194C14
    li r10, 0x0
lbl_80194C14:
    cmpwi r10, 0x0
    beq lbl_80194C20
    li r4, 0x1
lbl_80194C20:
    cmpwi r4, 0x0
    beq lbl_80194CD0
    subfic r0, r5, 0x1f
    slwi r4, r5, 2
    srwi r0, r0, 3
    add r4, r3, r4
    mtctr r0
    cmpwi r5, 0x18
    bge lbl_80194CD0
lbl_80194C44:
    lwzx r10, r8, r9
    addi r31, r6, 0x3
    addi r0, r6, 0x1
    stw r10, 0x200(r4)
    slwi r10, r0, 2
    addi r12, r6, 0x4
    lwzx r10, r8, r10
    addi r0, r6, 0x2
    stw r10, 0x204(r4)
    slwi r0, r0, 2
    addi r11, r6, 0x5
    addi r10, r6, 0x6
    lwzx r30, r8, r0
    addi r0, r6, 0x7
    stw r30, 0x208(r4)
    slwi r31, r31, 2
    slwi r12, r12, 2
    slwi r11, r11, 2
    lwzx r31, r8, r31
    slwi r10, r10, 2
    stw r31, 0x20c(r4)
    slwi r0, r0, 2
    addi r6, r6, 0x8
    addi r9, r9, 0x20
    lwzx r12, r8, r12
    addi r5, r5, 0x8
    stw r12, 0x210(r4)
    lwzx r11, r8, r11
    stw r11, 0x214(r4)
    lwzx r10, r8, r10
    stw r10, 0x218(r4)
    lwzx r0, r8, r0
    stw r0, 0x21c(r4)
    addi r4, r4, 0x20
    bdnz lbl_80194C44
lbl_80194CD0:
    slwi r6, r6, 2
    slwi r4, r5, 2
    subfic r0, r5, 0x20
    add r6, r8, r6
    add r4, r3, r4
    mtctr r0
    cmpwi r5, 0x20
    bge lbl_80194D04
lbl_80194CF0:
    lwz r0, 0x0(r6)
    addi r6, r6, 0x4
    stw r0, 0x200(r4)
    addi r4, r4, 0x4
    bdnz lbl_80194CF0
lbl_80194D04:
    stw r7, 0x284(r3)
    addi r11, r1, 0x20
    lwz r3, 0x4(r7)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80194D24
// ----------------------------------------------------------------------------
extern "C" asm void fn_80194D24() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lis r31, jumptable_8035F70C@ha
    li r25, 0x0
lbl_80194D48:
    lwz r30, 0x8(r27)
    cmpwi r30, 0x0
    bne lbl_80194D9C
    mr r3, r26
    mr r4, r27
    bl fn_801947D0
    mr r4, r27
    bl fn_80194470
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_80194D78
    bl fn_801936E8
lbl_80194D78:
    lwz r3, 0x0(r27)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_80194D90
    lwz r0, 0x27c(r26)
    b lbl_80194D94
lbl_80194D90:
    lwz r0, 0x284(r26)
lbl_80194D94:
    stw r0, 0x288(r26)
    b lbl_80194D48
lbl_80194D9C:
    lbz r29, 0x0(r30)
    clrlwi r0, r29, 25
    cmplwi r0, 0x10
    bgt lbl_80195208
    addi r3, r31, jumptable_8035F70C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x0(r27)
    lhz r0, 0x2(r30)
    add r0, r3, r0
    stw r0, 0x8(r27)
    b lbl_8019520C
    lwz r3, 0x288(r26)
    li r4, -0x1
    lha r0, 0x2(r30)
    lwz r12, 0x4(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_80194E24
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x200(r3)
    extsb r0, r0
    b lbl_80194E30
lbl_80194E24:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lbzx r0, r3, r0
lbl_80194E30:
    extsb. r0, r0
    beq lbl_80194E54
    lwz r3, 0x288(r26)
    li r4, -0x1
    lha r0, 0x4(r30)
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
lbl_80194E54:
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_80194E84
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_80194E90
lbl_80194E84:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_80194E90:
    lwz r12, 0x4(r30)
    li r4, -0x1
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_8019520C
    lhz r23, 0x4(r30)
    lhz r24, 0x6(r30)
    lwz r4, 0x288(r26)
    mullw r0, r24, r23
    lha r3, 0x2(r30)
    add r22, r4, r3
    add r22, r22, r0
    b lbl_80194EEC
lbl_80194ED0:
    lwz r12, 0x8(r30)
    subf r22, r24, r22
    mr r3, r22
    li r4, -0x1
    mtctr r12
    bctrl
    subi r23, r23, 0x1
lbl_80194EEC:
    cmpwi r23, 0x0
    bgt lbl_80194ED0
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_80194F24
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_80194F30
lbl_80194F24:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_80194F30:
    lwz r0, 0x4(r30)
    li r4, 0x0
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_80194F78
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_80194F84
lbl_80194F78:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_80194F84:
    lwz r0, 0x4(r30)
    li r4, -0x1
    lwz r12, 0x8(r30)
    add r3, r3, r0
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r4, 0x1(r30)
    extrwi. r0, r4, 1, 25
    beq lbl_80194FCC
    lha r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r5, 0x200(r3)
    b lbl_80194FD8
lbl_80194FCC:
    lwz r3, 0x288(r26)
    lha r0, 0x4(r30)
    lwzx r5, r3, r0
lbl_80194FD8:
    extrwi. r0, r4, 1, 24
    beq lbl_80194FF8
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r0, 0x200(r3)
    extsh r0, r0
    b lbl_80195004
lbl_80194FF8:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lhax r0, r3, r0
lbl_80195004:
    cmpwi r0, 0x0
    beq lbl_80195024
    lwz r0, 0x8(r30)
    li r4, 0x0
    lwz r12, 0xc(r30)
    add r3, r5, r0
    mtctr r12
    bctrl
lbl_80195024:
    lwz r3, 0x8(r27)
    addi r0, r3, 0x10
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_80195054
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r24, 0x200(r3)
    b lbl_80195060
lbl_80195054:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r24, r3, r0
lbl_80195060:
    lwz r23, 0x8(r30)
    lwz r22, 0xc(r30)
    lwz r3, 0x4(r30)
    mullw r0, r22, r23
    add r24, r24, r3
    add r24, r24, r0
    b lbl_80195098
lbl_8019507C:
    lwz r12, 0x10(r30)
    subf r24, r22, r24
    mr r3, r24
    li r4, -0x1
    mtctr r12
    bctrl
    subi r23, r23, 0x1
lbl_80195098:
    cmpwi r23, 0x0
    bgt lbl_8019507C
    lwz r3, 0x8(r27)
    addi r0, r3, 0x14
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r0, 0x1(r30)
    srawi. r0, r0, 7
    beq lbl_801950D0
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_801950DC
lbl_801950D0:
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    lwzx r3, r3, r0
lbl_801950DC:
    lwz r12, 0x4(r30)
    mtctr r12
    bctrl
    lwz r3, 0x8(r27)
    addi r0, r3, 0x8
    stw r0, 0x8(r27)
    b lbl_8019520C
    lbz r4, 0x1(r30)
    extrwi. r0, r4, 1, 25
    beq lbl_80195118
    lha r0, 0x4(r30)
    slwi r0, r0, 2
    add r3, r26, r0
    lwz r3, 0x200(r3)
    b lbl_80195124
lbl_80195118:
    lwz r3, 0x288(r26)
    lha r0, 0x4(r30)
    lwzx r3, r3, r0
lbl_80195124:
    extrwi. r0, r4, 1, 24
    beq lbl_80195144
    lha r0, 0x2(r30)
    slwi r0, r0, 2
    add r4, r26, r0
    lwz r0, 0x200(r4)
    extsb r0, r0
    b lbl_80195150
lbl_80195144:
    lwz r4, 0x288(r26)
    lha r0, 0x2(r30)
    lbzx r0, r4, r0
lbl_80195150:
    extsb. r0, r0
    beq lbl_80195164
    lwz r12, 0x8(r30)
    mtctr r12
    bctrl
lbl_80195164:
    lwz r3, 0x8(r27)
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    cmplw r28, r30
    beq lbl_8019521C
    addi r0, r30, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
    cmplw r28, r30
    beq lbl_8019521C
    addi r0, r30, 0x10
    stw r0, 0x8(r27)
    b lbl_8019520C
    lwz r3, 0x288(r26)
    lha r0, 0x2(r30)
    add r3, r3, r0
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beq lbl_801951D8
    lwz r3, 0x0(r3)
    lwz r0, 0x298(r26)
    cmplw r0, r3
    bne lbl_801951CC
    stw r12, 0x29c(r26)
    b lbl_801951D8
lbl_801951CC:
    li r4, -0x1
    mtctr r12
    bctrl
lbl_801951D8:
    lwz r3, 0x8(r27)
    addi r0, r3, 0x4
    stw r0, 0x8(r27)
    b lbl_8019520C
    cmplw r28, r30
    beq lbl_8019521C
    lhz r0, 0x2(r30)
    slwi r0, r0, 2
    add r3, r0, r30
    addi r0, r3, 0xc
    stw r0, 0x8(r27)
    b lbl_8019520C
lbl_80195208:
    bl fn_801936E8
lbl_8019520C:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_80194D48
    stw r25, 0x8(r27)
    b lbl_80194D48
lbl_8019521C:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80195230
// ----------------------------------------------------------------------------
extern "C" asm void fn_80195230() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r31, r1
    lwz r30, 0x14(r3)
    stw r1, 0x34(r1)
    bl fn_801936F4
    b lbl_801953C8
    lwz r29, 0x24(r31)
    mr r27, r30
    li r28, 0x0
    b lbl_8019528C
lbl_80195264:
    lwz r4, 0xc(r27)
    mr r3, r29
    addi r5, r31, 0x10
    bl fn_80193700
    extsb. r0, r3
    beq lbl_80195284
    li r0, 0x1
    b lbl_8019529C
lbl_80195284:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_8019528C:
    lhz r0, 0x2(r30)
    cmpw r28, r0
    blt lbl_80195264
    li r0, 0x0
lbl_8019529C:
    cmpwi r0, 0x0
    beq lbl_801952B4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80195934
lbl_801952B4:
    lis r28, lbl_8033B2DC@ha
    mr r27, r30
    addi r28, r28, lbl_8033B2DC@l
    li r29, 0x0
    b lbl_801952F0
lbl_801952C8:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0xc
    bl fn_80193700
    extsb. r0, r3
    beq lbl_801952E8
    li r0, 0x1
    b lbl_80195300
lbl_801952E8:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_801952F0:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_801952C8
    li r0, 0x0
lbl_80195300:
    cmpwi r0, 0x0
    beq lbl_80195330
    lis r4, lbl_8035F750@ha
    lis r3, lbl_8033B2DC@ha
    addi r4, r4, lbl_8035F750@l
    lis r5, fn_801953E8@ha
    addi r3, r3, lbl_8033B2DC@l
    stw r4, 0x18(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x18
    addi r5, r5, fn_801953E8@l
    bl fn_80195934
lbl_80195330:
    lis r3, lbl_8033B2DC@ha
    mr r27, r30
    addi r3, r3, lbl_8033B2DC@l
    li r29, 0x0
    addi r28, r3, 0x37
    b lbl_80195370
lbl_80195348:
    lwz r4, 0xc(r27)
    mr r3, r28
    addi r5, r31, 0x8
    bl fn_80193700
    extsb. r0, r3
    beq lbl_80195368
    li r0, 0x1
    b lbl_80195380
lbl_80195368:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_80195370:
    lhz r0, 0x2(r30)
    cmpw r29, r0
    blt lbl_80195348
    li r0, 0x0
lbl_80195380:
    cmpwi r0, 0x0
    beq lbl_801953B0
    lis r4, lbl_8035F750@ha
    lis r3, lbl_8033B2DC@ha
    addi r4, r4, lbl_8035F750@l
    lis r5, fn_801953E8@ha
    addi r3, r3, lbl_8033B2DC@l
    stw r4, 0x14(r31)
    addi r3, r3, 0x11
    addi r4, r31, 0x14
    addi r5, r5, fn_801953E8@l
    bl fn_80195934
lbl_801953B0:
    addi r3, r31, 0x20
    bl fn_80195A78
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x34(r31)
    stw r0, 0x0(r1)
lbl_801953C8:
    bl fn_801936E8
    mr r10, r31
    lmw r27, 0x3c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801953E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801953E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80195410
    cmpwi r4, 0x0
    ble lbl_80195410
    bl dtor_80136CFC
lbl_80195410:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80195428
// ----------------------------------------------------------------------------
extern "C" asm void fn_80195428() {
    nofralloc
    mr r8, r5
    mr r2, r4
    lwz r0, 0x280(r3)
    mtcrf 255, r0
    lmw r13, 0x234(r3)
    addi r7, r3, 0xe8
    opword 0x11C0380C
    lfd f14, 0xe0(r3)
    addi r7, r3, 0xf8
    opword 0x11E0380C
    lfd f15, 0xf0(r3)
    addi r7, r3, 0x108
    opword 0x1200380C
    lfd f16, 0x100(r3)
    addi r7, r3, 0x118
    opword 0x1220380C
    lfd f17, 0x110(r3)
    addi r7, r3, 0x128
    opword 0x1240380C
    lfd f18, 0x120(r3)
    addi r7, r3, 0x138
    opword 0x1260380C
    lfd f19, 0x130(r3)
    addi r7, r3, 0x148
    opword 0x1280380C
    lfd f20, 0x140(r3)
    addi r7, r3, 0x158
    opword 0x12A0380C
    lfd f21, 0x150(r3)
    addi r7, r3, 0x168
    opword 0x12C0380C
    lfd f22, 0x160(r3)
    addi r7, r3, 0x178
    opword 0x12E0380C
    lfd f23, 0x170(r3)
    addi r7, r3, 0x188
    opword 0x1300380C
    lfd f24, 0x180(r3)
    addi r7, r3, 0x198
    opword 0x1320380C
    lfd f25, 0x190(r3)
    addi r7, r3, 0x1a8
    opword 0x1340380C
    lfd f26, 0x1a0(r3)
    addi r7, r3, 0x1b8
    opword 0x1360380C
    lfd f27, 0x1b0(r3)
    addi r7, r3, 0x1c8
    opword 0x1380380C
    lfd f28, 0x1c0(r3)
    addi r7, r3, 0x1d8
    opword 0x13A0380C
    lfd f29, 0x1d0(r3)
    addi r7, r3, 0x1e8
    opword 0x13C0380C
    lfd f30, 0x1e0(r3)
    addi r7, r3, 0x1f8
    opword 0x13E0380C
    lfd f31, 0x1f0(r3)
    mtlr r8
    lwz r1, 0x28c(r3)
    lwz r3, 0x284(r3)
    lwz r3, 0x0(r3)
    stw r3, 0x0(r1)
    blr
}

// ----------------------------------------------------------------------------
// fn_8019552C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8019552C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r4, r1, 0x10
    stmw r27, 0x5c(r1)
    mr r30, r3
    lwz r3, 0x290(r3)
    bl fn_80194470
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_8019555C
    bl fn_801936E8
lbl_8019555C:
    lwz r3, 0x10(r1)
    lhz r0, 0x0(r3)
    extrwi. r0, r0, 1, 27
    beq lbl_80195574
    lwz r8, 0x27c(r30)
    b lbl_80195578
lbl_80195574:
    lwz r8, 0x284(r30)
lbl_80195578:
    lwz r0, 0x294(r30)
    stw r8, 0x288(r30)
    cmpwi r0, 0x0
    bne lbl_80195654
    lwz r5, 0x18(r1)
    lwz r7, 0x10(r1)
    lwz r6, 0x14(r1)
    cmpwi r5, 0x0
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x284(r30)
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    lwz r0, 0x27c(r30)
    stw r0, 0x48(r1)
    bne lbl_801955DC
    li r3, 0x0
    b lbl_801955E4
lbl_801955DC:
    lbz r0, 0x0(r5)
    clrlwi r3, r0, 25
lbl_801955E4:
    clrlwi r3, r3, 24
    subi r0, r3, 0x2
    cmplwi r0, 0xa
    ble lbl_80195618
    subi r0, r3, 0xf
    cmplwi r0, 0x1
    ble lbl_80195618
    cmpwi r3, 0xd
    beq lbl_80195624
    cmpwi r3, 0x0
    beq lbl_80195618
    bl fn_801936E8
    b lbl_80195624
lbl_80195618:
    addi r3, r1, 0x28
    bl fn_80194620
    b lbl_801955E4
lbl_80195624:
    lwz r3, 0x30(r1)
    li r0, 0x0
    lwz r4, 0x44(r1)
    lha r3, 0x2(r3)
    add r4, r4, r3
    lwz r3, 0x4(r4)
    stw r3, 0x294(r30)
    lwz r3, 0x0(r4)
    stw r3, 0x298(r30)
    stw r0, 0x29c(r30)
    stw r4, 0x2a0(r30)
    b lbl_8019565C
lbl_80195654:
    li r0, 0x0
    stw r0, 0x2a0(r30)
lbl_8019565C:
    lwz r5, 0x18(r1)
    lwz r7, 0x10(r1)
    lwz r6, 0x14(r1)
    cmpwi r5, 0x0
    lwz r4, 0x1c(r1)
    lwz r3, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x284(r30)
    stw r0, 0x40(r1)
    lwz r0, 0x288(r30)
    stw r0, 0x44(r1)
    lwz r0, 0x27c(r30)
    stw r0, 0x48(r1)
    bne lbl_801956B4
    li r27, 0x0
    b lbl_801956BC
lbl_801956B4:
    lbz r0, 0x0(r5)
    clrlwi r27, r0, 25
lbl_801956BC:
    clrlwi r3, r27, 24
    subi r0, r3, 0x2
    cmplwi r0, 0x9
    ble lbl_801957E8
    cmpwi r3, 0x10
    beq lbl_801956F8
    cmpwi r3, 0xc
    beq lbl_80195718
    cmpwi r3, 0xf
    beq lbl_80195738
    cmpwi r3, 0x0
    beq lbl_801957E8
    cmpwi r3, 0xd
    beq lbl_801957E8
    b lbl_801957E0
lbl_801956F8:
    lwz r4, 0x30(r1)
    addi r5, r1, 0xc
    lwz r3, 0x294(r30)
    lwz r4, 0x4(r4)
    bl fn_80193700
    extsb. r0, r3
    bne lbl_801957F8
    b lbl_801957E8
lbl_80195718:
    lwz r4, 0x30(r1)
    addi r5, r1, 0xc
    lwz r3, 0x294(r30)
    lwz r4, 0x4(r4)
    bl fn_80193700
    extsb. r0, r3
    bne lbl_801957F8
    b lbl_801957E8
lbl_80195738:
    lwz r29, 0x30(r1)
    li r28, 0x0
    lwz r31, 0x294(r30)
    mr r27, r29
    b lbl_80195774
lbl_8019574C:
    lwz r4, 0xc(r27)
    mr r3, r31
    addi r5, r1, 0x8
    bl fn_80193700
    extsb. r0, r3
    beq lbl_8019576C
    li r0, 0x1
    b lbl_80195784
lbl_8019576C:
    addi r27, r27, 0x4
    addi r28, r28, 0x1
lbl_80195774:
    lhz r0, 0x2(r29)
    cmpw r28, r0
    blt lbl_8019574C
    li r0, 0x0
lbl_80195784:
    cmpwi r0, 0x0
    bne lbl_801957E8
    lwz r28, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r28
    bl fn_80194D24
    lwz r5, 0x288(r30)
    mr r3, r30
    lwz r4, 0x8(r28)
    lwz r0, 0x298(r30)
    stwux r0, r4, r5
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    stw r28, 0x14(r4)
    lwz r5, 0x14(r1)
    lwz r0, 0x4(r28)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_80195428
    b lbl_801957E8
lbl_801957E0:
    bl fn_801936E8
    b lbl_801957F8
lbl_801957E8:
    addi r3, r1, 0x28
    bl fn_80194620
    mr r27, r3
    b lbl_801956BC
lbl_801957F8:
    clrlwi r0, r27, 24
    cmplwi r0, 0x10
    bne lbl_80195894
    lwz r31, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r31
    bl fn_80194D24
    lwz r4, 0x288(r30)
    lwz r3, 0xc(r31)
    lwz r0, 0x298(r30)
    stwux r0, r4, r3
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    lwz r3, 0x294(r30)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2a
    bne lbl_80195868
    addi r0, r4, 0x10
    stw r0, 0xc(r4)
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    lwz r3, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x10(r4)
    b lbl_80195878
lbl_80195868:
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    stw r0, 0xc(r4)
lbl_80195878:
    lwz r5, 0x14(r1)
    mr r3, r30
    lwz r0, 0x8(r31)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_80195428
    b lbl_80195920
lbl_80195894:
    lwz r31, 0x30(r1)
    mr r3, r30
    addi r4, r1, 0x10
    mr r5, r31
    bl fn_80194D24
    lwz r4, 0x288(r30)
    lha r3, 0xa(r31)
    lwz r0, 0x298(r30)
    stwux r0, r4, r3
    lwz r0, 0x294(r30)
    stw r0, 0x4(r4)
    lwz r0, 0x29c(r30)
    stw r0, 0x8(r4)
    lwz r3, 0x294(r30)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2a
    bne lbl_801958F8
    addi r0, r4, 0x10
    stw r0, 0xc(r4)
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    lwz r3, 0x0(r3)
    add r0, r3, r0
    stw r0, 0x10(r4)
    b lbl_80195908
lbl_801958F8:
    lwz r3, 0x298(r30)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    stw r0, 0xc(r4)
lbl_80195908:
    lwz r5, 0x14(r1)
    mr r3, r30
    lhz r0, 0x8(r31)
    lwz r4, 0x24(r1)
    add r5, r5, r0
    bl fn_80195428
lbl_80195920:
    lmw r27, 0x5c(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_80195934
// ----------------------------------------------------------------------------
extern "C" asm void fn_80195934() {
    nofralloc
    stwu r1, -0x2c0(r1)
    mflr r0
    stw r0, 0x2c4(r1)
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stmw r13, 0x24c(r1)
    stfd f14, 0xf8(r1)
    addi r3, r1, 0x100
    opword 0x11C0180E
    stfd f15, 0x108(r1)
    addi r3, r1, 0x110
    opword 0x11E0180E
    stfd f16, 0x118(r1)
    addi r3, r1, 0x120
    opword 0x1200180E
    stfd f17, 0x128(r1)
    addi r3, r1, 0x130
    opword 0x1220180E
    stfd f18, 0x138(r1)
    addi r3, r1, 0x140
    opword 0x1240180E
    stfd f19, 0x148(r1)
    addi r3, r1, 0x150
    opword 0x1260180E
    stfd f20, 0x158(r1)
    addi r3, r1, 0x160
    opword 0x1280180E
    stfd f21, 0x168(r1)
    addi r3, r1, 0x170
    opword 0x12A0180E
    stfd f22, 0x178(r1)
    addi r3, r1, 0x180
    opword 0x12C0180E
    stfd f23, 0x188(r1)
    addi r3, r1, 0x190
    opword 0x12E0180E
    stfd f24, 0x198(r1)
    addi r3, r1, 0x1a0
    opword 0x1300180E
    stfd f25, 0x1a8(r1)
    addi r3, r1, 0x1b0
    opword 0x1320180E
    stfd f26, 0x1b8(r1)
    addi r3, r1, 0x1c0
    opword 0x1340180E
    stfd f27, 0x1c8(r1)
    addi r3, r1, 0x1d0
    opword 0x1360180E
    stfd f28, 0x1d8(r1)
    addi r3, r1, 0x1e0
    opword 0x1380180E
    stfd f29, 0x1e8(r1)
    addi r3, r1, 0x1f0
    opword 0x13A0180E
    stfd f30, 0x1f8(r1)
    addi r3, r1, 0x200
    opword 0x13C0180E
    stfd f31, 0x208(r1)
    addi r3, r1, 0x210
    opword 0x13E0180E
    mfcr r3
    stw r3, 0x298(r1)
    lwz r3, 0x0(r1)
    lwz r4, 0x4(r3)
    stw r3, 0x29c(r1)
    stw r3, 0x2a4(r1)
    stw r4, 0x2a8(r1)
    lwz r3, 0x8(r1)
    stw r3, 0x2ac(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x2b0(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x2b4(r1)
    addi r3, r1, 0x18
    bl fn_8019552C
    nop
    lwz r0, 0x2c4(r1)
    mtlr r0
    addi r1, r1, 0x2c0
    blr
}

// ----------------------------------------------------------------------------
// fn_80195A78
// ----------------------------------------------------------------------------
extern "C" asm void fn_80195A78() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r12, 0x8(r3)
    cmpwi r12, 0x0
    beqlr
    mr r3, r0
    li r4, -0x1
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// fn_80195AA4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80195AA4() {
    nofralloc
    lis r3, lbl_8035F76C@ha
    addi r3, r3, lbl_8035F76C@l
    blr
}

