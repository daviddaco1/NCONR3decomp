#include "types.h"

// Translation unit: src/g_cam_ctrl.cpp
// Total functions: 37

// Small Data symbols (@sda21)
extern "C" float lbl_8049C300;
extern "C" float lbl_8049D5B0;
extern "C" float lbl_8049F4C8;
extern "C" float lbl_8049F4D0;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_8034C028[];
extern "C" u8 jumptable_8034C0F4[];
extern "C" u8 jumptable_8034C240[];
extern "C" u8 jumptable_8034C30C[];
extern "C" u8 lbl_8034C3F8[];
extern "C" u8 lbl_8034C420[];
extern "C" u8 lbl_8034C448[];
extern "C" u8 lbl_8034C470[];
extern "C" u8 lbl_8034C588[];
extern "C" u8 lbl_8034C5B0[];
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_80395728[];
extern "C" u8 lbl_8039A000[];
extern "C" u8 lbl_8039A0D0[];

// Forward declarations
extern "C" void _restgpr_14();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void _savegpr_14();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void fn_8009161C();
extern "C" void fn_80091698();
extern "C" void fn_80091708();
extern "C" void fn_80091778();
extern "C" void fn_8009177C();
extern "C" void fn_800917B4();
extern "C" void fn_800917D8();
extern "C" void fn_8009185C();
extern "C" void fn_80091884();
extern "C" void fn_800918E4();
extern "C" void fn_80091940();
extern "C" void fn_8009199C();
extern "C" void fn_800919FC();
extern "C" void fn_80091A58();
extern "C" void fn_80091AC8();
extern "C" void fn_80091AF0();
extern "C" void fn_80091B50();
extern "C" void fn_80091BAC();
extern "C" void fn_80091C08();
extern "C" void fn_80091C30();
extern "C" void fn_80091C90();
extern "C" void fn_80091CEC();
extern "C" void fn_80091D48();
extern "C" void fn_80091D70();
extern "C" void fn_80091DD0();
extern "C" void fn_80091E2C();
extern "C" void fn_80091E88();
extern "C" void fn_80091F14();
extern "C" void fn_80091FAC();
extern "C" void fn_80092080();
extern "C" void fn_80092378();
extern "C" void fn_80092618();
extern "C" void fn_80092724();
extern "C" void fn_800927DC();
extern "C" void fn_80092FFC();
extern "C" void fn_80094228();
extern "C" void fn_80094700();
extern "C" void fn_800961EC();
extern "C" void fn_80096228();
extern "C" void fn_80096328();
extern "C" void fn_800A0BF0();
extern "C" void memcpy();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_8009161C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009161C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_800961EC
    mr r31, r3
    mr r3, r29
    bl fn_80096228
    addi r3, r29, 0x350
    li r4, 0x0
    li r5, 0x1de0
    bl memset
    mr r3, r29
    li r4, 0x20
    li r5, 0xf
    bl memset
    li r0, -0x1
    stw r0, 0x21b8(r29)
    mr r3, r30
    bl fn_80096328
    mr r3, r31
    bl fn_80096228
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80091698
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091698() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_8039A0D0@ha
    addi r30, r3, lbl_8039A0D0@l
    addi r3, r30, 0x4c
    lis r4, lbl_80395728@ha
    addi r31, r4, lbl_80395728@l
    addi r4, r31, 0xc98
    li r5, 0x340
    bl memcpy
    addi r3, r30, 0x38c
    addi r4, r31, 0xfd8
    li r5, 0x173c
    bl memcpy
    addi r3, r30, 0x1ad0
    lwz r4, lbl_8049C300
    addi r4, r4, 0x2718
    li r5, 0x21bc
    bl memcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091708
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091708() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
    addi r3, r30, 0xc98
    lis r4, lbl_8039A0D0@ha
    addi r31, r4, lbl_8039A0D0@l
    addi r4, r31, 0x4c
    li r5, 0x340
    bl memcpy
    addi r3, r30, 0xfd8
    addi r4, r31, 0x38c
    li r5, 0x173c
    bl memcpy
    lwz r3, lbl_8049C300
    addi r3, r3, 0x2718
    addi r4, r31, 0x1ad0
    li r5, 0x21bc
    bl memcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091778
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091778() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8009177C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009177C() {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_80395728@ha
    addi r6, r5, lbl_80395728@l
    li r0, 0x19
    mtctr r0
lbl_80091794:
    add r5, r6, r4
    lwz r0, 0x28(r5)
    cmpwi r0, 0x0
    beq lbl_800917A8
    addi r3, r3, 0x1
lbl_800917A8:
    addi r4, r4, 0x78
    bdnz lbl_80091794
    blr
}

// ----------------------------------------------------------------------------
// fn_800917B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800917B4() {
    nofralloc
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    mulli r0, r3, 0x78
    add r3, r4, r0
    lwz r3, 0x28(r3)
    subfic r0, r3, 0x0
    subfe r0, r0, r0
    and r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_800917D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800917D8() {
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    li r3, 0x0
    lis r4, lbl_80395728@ha
    addi r12, r4, lbl_80395728@l
    mr r11, r3
    mr r10, r3
    mr r9, r3
    li r8, 0x64
    mr r7, r3
    mr r6, r3
    mr r5, r3
    mr r4, r3
    li r0, 0x19
    mtctr r0
lbl_80091814:
    add r31, r12, r3
    stw r11, 0x28(r31)
    stw r10, 0x28(r31)
    stw r9, 0x2c(r31)
    stw r8, 0x30(r31)
    stw r7, 0x18(r31)
    stw r6, 0x34(r31)
    stw r5, 0x38(r31)
    stw r8, 0x40(r31)
    stw r8, 0x44(r31)
    stw r8, 0x48(r31)
    stw r8, 0x4c(r31)
    stw r4, 0x80(r31)
    addi r3, r3, 0x78
    bdnz lbl_80091814
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8009185C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009185C() {
    nofralloc
    cmplwi r3, 0xd0
    ble lbl_8009186C
    li r3, 0x1
    blr
lbl_8009186C:
    srwi r0, r3, 3
    stw r0, 0x0(r4)
    clrlwi r0, r3, 29
    stw r0, 0x0(r5)
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80091884
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091884() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    beq lbl_800918AC
    li r3, 0x0
    b lbl_800918D4
lbl_800918AC:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xdc8(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_800918D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800918E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800918E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091930
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xdc8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xdc8(r5)
lbl_80091930:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091940
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091940() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_8009198C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xdc8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xdc8(r5)
lbl_8009198C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8009199C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8009199C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    beq lbl_800919C4
    li r3, 0x0
    b lbl_800919EC
lbl_800919C4:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xcf8(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_800919EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800919FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800919FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091A48
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xcf8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xcf8(r5)
lbl_80091A48:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091A58
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091A58() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091AB4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xcf8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xcf8(r5)
    mr r3, r31
    bl fn_80091940
lbl_80091AB4:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80091AC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091AC8() {
    nofralloc
    cmplwi r3, 0x90
    ble lbl_80091AD8
    li r3, 0x1
    blr
lbl_80091AD8:
    srwi r0, r3, 3
    stw r0, 0x0(r4)
    clrlwi r0, r3, 29
    stw r0, 0x0(r5)
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80091AF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091AF0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    beq lbl_80091B18
    li r3, 0x0
    b lbl_80091B40
lbl_80091B18:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xe98(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091B40:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091B50
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091B50() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    bne lbl_80091B9C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xe98(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xe98(r5)
lbl_80091B9C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091BAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091BAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    bne lbl_80091BF8
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xe98(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xe98(r5)
lbl_80091BF8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091C08
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091C08() {
    nofralloc
    cmplwi r3, 0x57
    ble lbl_80091C18
    li r3, 0x1
    blr
lbl_80091C18:
    srwi r0, r3, 3
    stw r0, 0x0(r4)
    clrlwi r0, r3, 29
    stw r0, 0x0(r5)
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80091C30
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091C30() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    beq lbl_80091C58
    li r3, 0x0
    b lbl_80091C80
lbl_80091C58:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xf28(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091C80:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091C90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091C90() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    bne lbl_80091CDC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf28(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xf28(r5)
lbl_80091CDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091CEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091CEC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    bne lbl_80091D38
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf28(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xf28(r5)
lbl_80091D38:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091D48
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091D48() {
    nofralloc
    cmplwi r3, 0x57
    ble lbl_80091D58
    li r3, 0x1
    blr
lbl_80091D58:
    srwi r0, r3, 3
    stw r0, 0x0(r4)
    clrlwi r0, r3, 29
    stw r0, 0x0(r5)
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80091D70
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091D70() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    beq lbl_80091D98
    li r3, 0x0
    b lbl_80091DC0
lbl_80091D98:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xf80(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091DC0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091DD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091DD0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    bne lbl_80091E1C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf80(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xf80(r5)
lbl_80091E1C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091E2C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091E2C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    bne lbl_80091E78
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf80(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xf80(r5)
lbl_80091E78:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80091E88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091E88() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    li r31, 0x0
lbl_80091EA4:
    mr r3, r31
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80091EB8
    addi r30, r30, 0x1
lbl_80091EB8:
    addi r31, r31, 0x1
    cmpwi r31, 0xd0
    blt lbl_80091EA4
    cmpwi r30, 0x0
    beq lbl_80091EF4
    lfd f1, lbl_8049F4C8
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F4D0
    fdivs f1, f1, f0
    b lbl_80091EFC
lbl_80091EF4:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80091EFC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80091F14
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091F14() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    li r31, 0x0
lbl_80091F30:
    mr r3, r31
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80091F44
    addi r30, r30, 0x1
lbl_80091F44:
    addi r31, r31, 0x1
    cmpwi r31, 0x4c
    blt lbl_80091F30
    cmpwi r30, 0x0
    beq lbl_80091F8C
    lfd f1, lbl_8049F4C8
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049F4D0
    lfs f0, 0x8(r3)
    fsubs f1, f1, f0
    lfs f0, 0xc(r3)
    fdivs f1, f1, f0
    b lbl_80091F94
lbl_80091F8C:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80091F94:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80091FAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80091FAC() {
    nofralloc
    stwu r1, -0x10(r1)
    li r6, 0x0
    li r4, 0x0
    slwi r5, r3, 6
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r5, r0, r5
    li r0, 0xa
    mtctr r0
lbl_80091FD0:
    add r3, r5, r4
    lwz r0, 0x11c8(r3)
    cmpwi r0, 0x6
    bne lbl_80091FE4
    addi r6, r6, 0x1
lbl_80091FE4:
    cmpwi r0, 0x5
    bne lbl_80091FF0
    addi r6, r6, 0x2
lbl_80091FF0:
    cmpwi r0, 0x4
    bne lbl_80091FFC
    addi r6, r6, 0x3
lbl_80091FFC:
    cmpwi r0, 0x3
    bne lbl_80092008
    addi r6, r6, 0x4
lbl_80092008:
    cmpwi r0, 0x2
    bne lbl_80092014
    addi r6, r6, 0x5
lbl_80092014:
    cmpwi r0, 0x1
    bne lbl_80092020
    addi r6, r6, 0x6
lbl_80092020:
    cmpwi r0, 0x0
    bne lbl_8009202C
    addi r6, r6, 0x7
lbl_8009202C:
    addi r4, r4, 0x4
    bdnz lbl_80091FD0
    cmpwi r6, 0x0
    beq lbl_80092070
    la r3, lbl_8049F4D0
    lfd f1, lbl_8049F4C8
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r3)
    fdivs f1, f1, f0
    lfs f0, 0x10(r3)
    fmuls f1, f0, f1
    b lbl_80092078
lbl_80092070:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80092078:
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80092080
// ----------------------------------------------------------------------------
extern "C" asm void fn_80092080() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    li r25, 0x0
    li r24, 0x0
    li r26, 0x1
    li r30, 0x40
    li r29, 0x4
    lis r27, jumptable_8034C028@ha
    lis r3, lbl_80395728@ha
    addi r28, r3, lbl_80395728@l
    li r31, 0xa
lbl_800920B8:
    li r3, -0x1
    cmplwi r26, 0x32
    bgt lbl_80092260
    addi r4, r27, jumptable_8034C028@l
    lwzx r4, r4, r29
    mtctr r4
    bctr
    li r3, 0x37
    b lbl_80092260
    li r3, 0x38
    b lbl_80092260
    li r3, 0x39
    b lbl_80092260
    li r3, 0x3a
    b lbl_80092260
    li r3, 0x3b
    b lbl_80092260
    li r3, 0x3c
    b lbl_80092260
    li r3, 0x3d
    b lbl_80092260
    li r3, 0x3e
    b lbl_80092260
    li r3, 0x3f
    b lbl_80092260
    li r3, 0x40
    b lbl_80092260
    li r3, 0x41
    b lbl_80092260
    li r3, 0x42
    b lbl_80092260
    li r3, 0x43
    b lbl_80092260
    li r3, 0x44
    b lbl_80092260
    li r3, 0x45
    b lbl_80092260
    li r3, 0x46
    b lbl_80092260
    li r3, 0x47
    b lbl_80092260
    li r3, 0x48
    b lbl_80092260
    li r3, 0x49
    b lbl_80092260
    li r3, 0x4a
    b lbl_80092260
    li r3, 0x4b
    b lbl_80092260
    li r3, 0x4c
    b lbl_80092260
    li r3, 0x4d
    b lbl_80092260
    li r3, 0x4e
    b lbl_80092260
    li r3, 0x4f
    b lbl_80092260
    li r3, 0x50
    b lbl_80092260
    li r3, 0x51
    b lbl_80092260
    li r3, 0x52
    b lbl_80092260
    li r3, 0x53
    b lbl_80092260
    li r3, 0x54
    b lbl_80092260
    li r3, 0x55
    b lbl_80092260
    li r3, 0x56
    b lbl_80092260
    li r3, 0x57
    b lbl_80092260
    li r3, 0x58
    b lbl_80092260
    li r3, 0x59
    b lbl_80092260
    li r3, 0x5a
    b lbl_80092260
    li r3, 0x5b
    b lbl_80092260
    li r3, 0x5c
    b lbl_80092260
    li r3, 0x5d
    b lbl_80092260
    li r3, 0x5e
    b lbl_80092260
    li r3, 0x5f
    b lbl_80092260
    li r3, 0x60
    b lbl_80092260
    li r3, 0x61
    b lbl_80092260
    li r3, 0x62
    b lbl_80092260
    li r3, 0x63
    b lbl_80092260
    li r3, 0x64
    b lbl_80092260
    li r3, 0x65
    b lbl_80092260
    li r3, 0x66
    b lbl_80092260
    li r3, 0x67
    b lbl_80092260
    li r3, 0x68
lbl_80092260:
    cmpwi r3, -0x1
    beq lbl_80092274
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800922F0
lbl_80092274:
    addi r25, r25, 0x1
    li r5, 0x0
    li r3, 0x0
    add r0, r28, r30
    mtctr r31
lbl_80092288:
    add r4, r0, r3
    lwz r4, 0x11c8(r4)
    cmpwi r4, 0x0
    bne lbl_8009229C
    addi r5, r5, 0x7
lbl_8009229C:
    cmpwi r4, 0x1
    bne lbl_800922A8
    addi r5, r5, 0x6
lbl_800922A8:
    cmpwi r4, 0x2
    bne lbl_800922B4
    addi r5, r5, 0x5
lbl_800922B4:
    cmpwi r4, 0x3
    bne lbl_800922C0
    addi r5, r5, 0x4
lbl_800922C0:
    cmpwi r4, 0x4
    bne lbl_800922CC
    addi r5, r5, 0x3
lbl_800922CC:
    cmpwi r4, 0x5
    bne lbl_800922D8
    addi r5, r5, 0x2
lbl_800922D8:
    cmpwi r4, 0x6
    bne lbl_800922E4
    addi r5, r5, 0x1
lbl_800922E4:
    addi r3, r3, 0x4
    bdnz lbl_80092288
    add r24, r24, r5
lbl_800922F0:
    addi r26, r26, 0x1
    addi r30, r30, 0x40
    addi r29, r29, 0x4
    cmpwi r26, 0x33
    blt lbl_800920B8
    cmpwi r24, 0x0
    bne lbl_80092318
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
    b lbl_80092360
lbl_80092318:
    la r4, lbl_8049F4D0
    lfd f1, lbl_8049F4C8
    xoris r0, r24, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r4)
    fmuls f0, f0, f1
    fdivs f1, f2, f0
    lfs f0, 0x10(r4)
    fmuls f1, f0, f1
lbl_80092360:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80092378
// ----------------------------------------------------------------------------
extern "C" asm void fn_80092378() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r28, 0x0
    li r27, 0x0
    li r29, 0x0
    li r31, 0x0
    lis r30, jumptable_8034C0F4@ha
lbl_800923A0:
    li r3, -0x1
    cmplwi r29, 0x52
    bgt lbl_80092580
    addi r4, r30, jumptable_8034C0F4@l
    lwzx r4, r4, r31
    mtctr r4
    bctr
    li r3, 0x4
    b lbl_80092580
    li r3, 0x5
    b lbl_80092580
    li r3, 0x6
    b lbl_80092580
    li r3, 0x7
    b lbl_80092580
    li r3, 0xb
    b lbl_80092580
    li r3, 0xc
    b lbl_80092580
    li r3, 0x3f
    b lbl_80092580
    li r3, 0x41
    b lbl_80092580
    li r3, 0x44
    b lbl_80092580
    li r3, 0x45
    b lbl_80092580
    li r3, 0x47
    b lbl_80092580
    li r3, 0x48
    b lbl_80092580
    li r3, 0x49
    b lbl_80092580
    li r3, 0x4b
    b lbl_80092580
    li r3, 0x4c
    b lbl_80092580
    li r3, 0x4d
    b lbl_80092580
    li r3, 0x4e
    b lbl_80092580
    li r3, 0x4f
    b lbl_80092580
    li r3, 0x50
    b lbl_80092580
    li r3, 0x51
    b lbl_80092580
    li r3, 0x52
    b lbl_80092580
    li r3, 0x53
    b lbl_80092580
    li r3, 0x55
    b lbl_80092580
    li r3, 0x56
    b lbl_80092580
    li r3, 0x57
    b lbl_80092580
    li r3, 0x58
    b lbl_80092580
    li r3, 0x59
    b lbl_80092580
    li r3, 0x5a
    b lbl_80092580
    li r3, 0x5b
    b lbl_80092580
    li r3, 0x5c
    b lbl_80092580
    li r3, 0x5d
    b lbl_80092580
    li r3, 0x5e
    b lbl_80092580
    li r3, 0x5f
    b lbl_80092580
    li r3, 0x60
    b lbl_80092580
    li r3, 0x62
    b lbl_80092580
    li r3, 0x65
    b lbl_80092580
    li r3, 0x66
    b lbl_80092580
    li r3, 0x67
    b lbl_80092580
    li r3, 0x6c
    b lbl_80092580
    li r3, 0x6d
    b lbl_80092580
    li r3, 0x6e
    b lbl_80092580
    li r3, 0x70
    b lbl_80092580
    li r3, 0x72
    b lbl_80092580
    li r3, 0x73
    b lbl_80092580
    li r3, 0x74
    b lbl_80092580
    li r3, 0x75
    b lbl_80092580
    li r3, 0x76
    b lbl_80092580
    li r3, 0x77
    b lbl_80092580
    li r3, 0x78
    b lbl_80092580
    li r3, 0x79
    b lbl_80092580
    li r3, 0x7a
    b lbl_80092580
    li r3, 0x7c
    b lbl_80092580
    li r3, 0x7d
    b lbl_80092580
    li r3, 0x7e
    b lbl_80092580
    li r3, 0x7f
    b lbl_80092580
    li r3, 0x81
    b lbl_80092580
    li r3, 0x82
lbl_80092580:
    cmpwi r3, -0x1
    beq lbl_8009259C
    addi r27, r27, 0x1
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009259C
    addi r28, r28, 0x1
lbl_8009259C:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x57
    blt lbl_800923A0
    cmpwi r28, 0x0
    bne lbl_800925C0
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
    b lbl_80092600
lbl_800925C0:
    la r4, lbl_8049F4D0
    lfd f2, lbl_8049F4C8
    xoris r0, r28, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    lfs f0, 0x10(r4)
    fmuls f1, f0, f1
lbl_80092600:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80092618
// ----------------------------------------------------------------------------
extern "C" asm void fn_80092618() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r0, 0x0
    stw r0, lbl_8049D5B0
    lis r31, lbl_8039A000@ha
    addi r3, r31, lbl_8039A000@l
    li r4, 0x0
    li r5, 0xd0
    bl memset
    li r0, 0x1
    addi r3, r31, lbl_8039A000@l
    stb r0, 0x5(r3)
    stb r0, 0xc(r3)
    stb r0, 0x10(r3)
    stb r0, 0x93(r3)
    stb r0, 0xc9(r3)
    stb r0, 0xc8(r3)
    stb r0, 0x96(r3)
    stb r0, 0xac(r3)
    stb r0, 0x97(r3)
    stb r0, 0x99(r3)
    stb r0, 0xa8(r3)
    stb r0, 0x9d(r3)
    stb r0, 0x9e(r3)
    stb r0, 0xa0(r3)
    stb r0, 0x98(r3)
    stb r0, 0x9c(r3)
    stb r0, 0xb2(r3)
    stb r0, 0xb4(r3)
    stb r0, 0xb5(r3)
    stb r0, 0xad(r3)
    stb r0, 0x9a(r3)
    stb r0, 0x9b(r3)
    stb r0, 0xa6(r3)
    stb r0, 0xa9(r3)
    stb r0, 0xae(r3)
    stb r0, 0xa3(r3)
    stb r0, 0xce(r3)
    stb r0, 0xcf(r3)
    stb r0, 0x82(r3)
    stb r0, 0x81(r3)
    stb r0, 0x6c(r3)
    stb r0, 0x6f(r3)
    stb r0, 0x70(r3)
    stb r0, 0x3c(r3)
    stb r0, 0x3d(r3)
    stb r0, 0x47(r3)
    stb r0, 0x44(r3)
    stb r0, 0x4a(r3)
    stb r0, 0x3e(r3)
    stb r0, 0x41(r3)
    stb r0, 0x3f(r3)
    stb r0, 0x56(r3)
    stb r0, 0x55(r3)
    stb r0, 0x4e(r3)
    stb r0, 0x4f(r3)
    stb r0, 0x14(r3)
    lwz r3, lbl_8049D5B0
    addi r0, r3, 0x2e
    stw r0, lbl_8049D5B0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80092724
// ----------------------------------------------------------------------------
extern "C" asm void fn_80092724() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    li r29, 0x0
    li r30, 0x0
    lis r3, lbl_8039A000@ha
    addi r31, r3, lbl_8039A000@l
lbl_80092748:
    mr r3, r30
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80092768
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_80092768
    addi r29, r29, 0x1
lbl_80092768:
    addi r30, r30, 0x1
    addi r31, r31, 0x1
    cmpwi r30, 0xd0
    blt lbl_80092748
    cmpwi r29, 0x0
    beq lbl_800927BC
    lfd f2, lbl_8049F4C8
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, lbl_8049D5B0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    b lbl_800927C4
lbl_800927BC:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_800927C4:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800927DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800927DC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r3, 0x0
    bl fn_800919FC
    li r3, 0x0
    bl fn_800918E4
    li r3, 0x1
    bl fn_800919FC
    li r3, 0x1
    bl fn_800918E4
    li r3, 0x2
    bl fn_800919FC
    li r3, 0x2
    bl fn_800918E4
    li r3, 0x3
    bl fn_800919FC
    li r3, 0x3
    bl fn_800918E4
    li r3, 0x8
    bl fn_800919FC
    li r3, 0x8
    bl fn_800918E4
    li r3, 0x9
    bl fn_800919FC
    li r3, 0x9
    bl fn_800918E4
    li r3, 0xa
    bl fn_800919FC
    li r3, 0xa
    bl fn_800918E4
    li r3, 0xd
    bl fn_800919FC
    li r3, 0xd
    bl fn_800918E4
    li r3, 0xf
    bl fn_800919FC
    li r3, 0xf
    bl fn_800918E4
    li r3, 0x10
    bl fn_800919FC
    li r3, 0x10
    bl fn_800918E4
    li r3, 0x11
    bl fn_800919FC
    li r3, 0x11
    bl fn_800918E4
    li r3, 0x12
    bl fn_800919FC
    li r3, 0x12
    bl fn_800918E4
    li r3, 0x37
    bl fn_800919FC
    li r3, 0x37
    bl fn_800918E4
    li r3, 0x38
    bl fn_800919FC
    li r3, 0x38
    bl fn_800918E4
    li r3, 0x39
    bl fn_800919FC
    li r3, 0x39
    bl fn_800918E4
    li r3, 0x3a
    bl fn_800919FC
    li r3, 0x3a
    bl fn_800918E4
    li r3, 0x3b
    bl fn_800919FC
    li r3, 0x3b
    bl fn_800918E4
    li r3, 0x3c
    bl fn_800919FC
    li r3, 0x3c
    bl fn_800918E4
    li r3, 0x3d
    bl fn_800919FC
    li r3, 0x3d
    bl fn_800918E4
    li r3, 0x3e
    bl fn_800919FC
    li r3, 0x3e
    bl fn_800918E4
    li r3, 0x71
    bl fn_800919FC
    li r3, 0x71
    bl fn_800918E4
    li r3, 0x7b
    bl fn_800919FC
    li r3, 0x7b
    bl fn_800918E4
    li r3, 0x80
    bl fn_800919FC
    li r3, 0x80
    bl fn_800918E4
    li r3, 0x85
    bl fn_800919FC
    li r3, 0x85
    bl fn_800918E4
    li r3, 0x86
    bl fn_800919FC
    li r3, 0x86
    bl fn_800918E4
    li r3, 0x87
    bl fn_800919FC
    li r3, 0x87
    bl fn_800918E4
    li r3, 0x88
    bl fn_800919FC
    li r3, 0x88
    bl fn_800918E4
    li r3, 0x89
    bl fn_800919FC
    li r3, 0x89
    bl fn_800918E4
    li r3, 0x8a
    bl fn_800919FC
    li r3, 0x8a
    bl fn_800918E4
    li r3, 0x8b
    bl fn_800919FC
    li r3, 0x8b
    bl fn_800918E4
    li r3, 0x8c
    bl fn_800919FC
    li r3, 0x8c
    bl fn_800918E4
    li r3, 0x8d
    bl fn_800919FC
    li r3, 0x8d
    bl fn_800918E4
    li r3, 0x8e
    bl fn_800919FC
    li r3, 0x8e
    bl fn_800918E4
    li r3, 0x8f
    bl fn_800919FC
    li r3, 0x8f
    bl fn_800918E4
    li r3, 0x90
    bl fn_800919FC
    li r3, 0x90
    bl fn_800918E4
    li r3, 0x91
    bl fn_800919FC
    li r3, 0x91
    bl fn_800918E4
    li r3, 0x92
    bl fn_800919FC
    li r3, 0x92
    bl fn_800918E4
    li r3, 0x93
    bl fn_800919FC
    li r3, 0x93
    bl fn_800918E4
    li r3, 0x95
    bl fn_800919FC
    li r3, 0x95
    bl fn_800918E4
    li r3, 0xc8
    bl fn_800919FC
    li r3, 0xc8
    bl fn_800918E4
    li r3, 0xcc
    bl fn_800919FC
    li r3, 0xcc
    bl fn_800918E4
    li r3, 0xcd
    bl fn_800919FC
    li r3, 0xcd
    bl fn_800918E4
    li r3, 0xce
    bl fn_800919FC
    li r3, 0xce
    bl fn_800918E4
    li r3, 0x0
    bl fn_80091B50
    li r3, 0x1
    bl fn_80091B50
    li r3, 0x2
    bl fn_80091B50
    li r3, 0x3
    bl fn_80091B50
    li r3, 0x0
    bl fn_80091C90
    li r3, 0x1
    bl fn_80091C90
    li r3, 0x2
    bl fn_80091C90
    li r3, 0x4
    bl fn_80091C90
    li r3, 0x5
    bl fn_80091C90
    li r3, 0x7
    bl fn_80091C90
    li r3, 0x8
    bl fn_80091C90
    li r3, 0x9
    bl fn_80091C90
    li r3, 0xa
    bl fn_80091C90
    li r3, 0xb
    bl fn_80091C90
    li r3, 0xc
    bl fn_80091C90
    li r3, 0xd
    bl fn_80091C90
    li r3, 0xe
    bl fn_80091C90
    li r3, 0xf
    bl fn_80091C90
    li r3, 0x11
    bl fn_80091C90
    li r3, 0x1e
    bl fn_80091C90
    li r3, 0x1f
    bl fn_80091C90
    li r3, 0x23
    bl fn_80091C90
    li r3, 0x25
    bl fn_80091C90
    li r3, 0x28
    bl fn_80091C90
    li r3, 0x29
    bl fn_80091C90
    li r3, 0x2a
    bl fn_80091C90
    li r3, 0x2b
    bl fn_80091C90
    li r3, 0x2c
    bl fn_80091C90
    li r3, 0x3c
    bl fn_80091C90
    li r3, 0x3d
    bl fn_80091C90
    li r3, 0x3e
    bl fn_80091C90
    li r3, 0x40
    bl fn_80091C90
    li r3, 0x41
    bl fn_80091C90
    li r3, 0x42
    bl fn_80091C90
    li r3, 0x43
    bl fn_80091C90
    li r3, 0x4b
    bl fn_80091C90
    li r3, 0x50
    bl fn_80091C90
    li r3, 0x51
    bl fn_80091C90
    li r3, 0x52
    bl fn_80091C90
    li r3, 0x0
    bl fn_80091DD0
    li r3, 0x1
    bl fn_80091DD0
    li r3, 0x2
    bl fn_80091DD0
    li r3, 0x3
    bl fn_80091DD0
    li r3, 0x4
    bl fn_80091DD0
    li r3, 0x5
    bl fn_80091DD0
    li r3, 0x7
    bl fn_80091DD0
    li r3, 0x8
    bl fn_80091DD0
    li r3, 0x9
    bl fn_80091DD0
    li r3, 0xa
    bl fn_80091DD0
    li r3, 0xb
    bl fn_80091DD0
    li r3, 0xc
    bl fn_80091DD0
    li r3, 0xd
    bl fn_80091DD0
    li r3, 0xe
    bl fn_80091DD0
    li r3, 0xf
    bl fn_80091DD0
    li r3, 0x11
    bl fn_80091DD0
    li r3, 0x14
    bl fn_80091DD0
    li r3, 0x15
    bl fn_80091DD0
    li r3, 0x17
    bl fn_80091DD0
    li r3, 0x18
    bl fn_80091DD0
    li r3, 0x19
    bl fn_80091DD0
    li r3, 0x1e
    bl fn_80091DD0
    li r3, 0x1f
    bl fn_80091DD0
    li r3, 0x20
    bl fn_80091DD0
    li r3, 0x21
    bl fn_80091DD0
    li r3, 0x22
    bl fn_80091DD0
    li r3, 0x23
    bl fn_80091DD0
    li r3, 0x25
    bl fn_80091DD0
    li r3, 0x28
    bl fn_80091DD0
    li r3, 0x29
    bl fn_80091DD0
    li r3, 0x2a
    bl fn_80091DD0
    li r3, 0x2b
    bl fn_80091DD0
    li r3, 0x2c
    bl fn_80091DD0
    li r3, 0x2d
    bl fn_80091DD0
    li r3, 0x2e
    bl fn_80091DD0
    li r3, 0x2f
    bl fn_80091DD0
    li r3, 0x30
    bl fn_80091DD0
    li r3, 0x32
    bl fn_80091DD0
    li r3, 0x37
    bl fn_80091DD0
    li r3, 0x3c
    bl fn_80091DD0
    li r3, 0x3d
    bl fn_80091DD0
    li r3, 0x3e
    bl fn_80091DD0
    li r3, 0x40
    bl fn_80091DD0
    li r3, 0x41
    bl fn_80091DD0
    li r3, 0x42
    bl fn_80091DD0
    li r3, 0x43
    bl fn_80091DD0
    li r3, 0x44
    bl fn_80091DD0
    li r3, 0x45
    bl fn_80091DD0
    li r3, 0x46
    bl fn_80091DD0
    li r3, 0x47
    bl fn_80091DD0
    li r3, 0x4b
    bl fn_80091DD0
    li r3, 0x4c
    bl fn_80091DD0
    li r3, 0x4d
    bl fn_80091DD0
    li r3, 0x4f
    bl fn_80091DD0
    li r3, 0x50
    bl fn_80091DD0
    li r3, 0x51
    bl fn_80091DD0
    li r3, 0x52
    bl fn_80091DD0
    li r3, 0x40
    bl fn_80091A58
    li r3, 0x40
    bl fn_80091940
    li r3, 0x42
    bl fn_80091A58
    li r3, 0x42
    bl fn_80091940
    li r3, 0x43
    bl fn_80091A58
    li r3, 0x43
    bl fn_80091940
    li r3, 0x54
    bl fn_80091A58
    li r3, 0x54
    bl fn_80091940
    li r3, 0x61
    bl fn_80091A58
    li r3, 0x61
    bl fn_80091940
    li r3, 0x46
    bl fn_80091A58
    li r3, 0x46
    bl fn_80091940
    li r3, 0x4a
    bl fn_80091A58
    li r3, 0x4a
    bl fn_80091940
    li r3, 0x63
    bl fn_80091A58
    li r3, 0x63
    bl fn_80091940
    li r3, 0x64
    bl fn_80091A58
    li r3, 0x64
    bl fn_80091940
    li r3, 0x68
    bl fn_80091A58
    li r3, 0x68
    bl fn_80091940
    li r3, 0x69
    bl fn_80091A58
    li r3, 0x69
    bl fn_80091940
    li r3, 0x6a
    bl fn_80091A58
    li r3, 0x6a
    bl fn_80091940
    li r3, 0x6b
    bl fn_80091A58
    li r3, 0x6b
    bl fn_80091940
    li r3, 0x6f
    bl fn_80091A58
    li r3, 0x6f
    bl fn_80091940
    li r3, 0x9f
    bl fn_80091A58
    li r3, 0x9f
    bl fn_80091940
    li r3, 0xa1
    bl fn_80091A58
    li r3, 0xa1
    bl fn_80091940
    li r3, 0xa2
    bl fn_80091A58
    li r3, 0xa2
    bl fn_80091940
    li r3, 0xb3
    bl fn_80091A58
    li r3, 0xb3
    bl fn_80091940
    li r3, 0xc0
    bl fn_80091A58
    li r3, 0xc0
    bl fn_80091940
    li r3, 0xa5
    bl fn_80091A58
    li r3, 0xa5
    bl fn_80091940
    li r3, 0xa9
    bl fn_80091A58
    li r3, 0xa9
    bl fn_80091940
    li r3, 0xc1
    bl fn_80091A58
    li r3, 0xc1
    bl fn_80091940
    li r3, 0xc2
    bl fn_80091A58
    li r3, 0xc2
    bl fn_80091940
    li r3, 0xc3
    bl fn_80091A58
    li r3, 0xc3
    bl fn_80091940
    li r3, 0xc4
    bl fn_80091A58
    li r3, 0xc4
    bl fn_80091940
    li r3, 0xc5
    bl fn_80091A58
    li r3, 0xc5
    bl fn_80091940
    li r3, 0xc6
    bl fn_80091A58
    li r3, 0xc6
    bl fn_80091940
    li r3, 0xc7
    bl fn_80091A58
    li r3, 0xc7
    bl fn_80091940
    li r3, 0x59
    bl fn_80091BAC
    li r3, 0x5b
    bl fn_80091BAC
    li r3, 0x5c
    bl fn_80091BAC
    li r3, 0x6d
    bl fn_80091BAC
    li r3, 0x7a
    bl fn_80091BAC
    li r3, 0x5f
    bl fn_80091BAC
    li r3, 0x63
    bl fn_80091BAC
    li r3, 0x7b
    bl fn_80091BAC
    li r3, 0x7c
    bl fn_80091BAC
    li r3, 0x7d
    bl fn_80091BAC
    li r3, 0x7e
    bl fn_80091BAC
    li r3, 0x7f
    bl fn_80091BAC
    li r3, 0x80
    bl fn_80091BAC
    li r3, 0x81
    bl fn_80091BAC
    li r3, 0x53
    bl fn_80091CEC
    li r3, 0x54
    bl fn_80091CEC
    li r3, 0x53
    bl fn_80091E2C
    li r3, 0x54
    bl fn_80091E2C
    bl fn_80092618
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80092FFC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80092FFC() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    stfd f28, 0x50(r1)
    opword 0xF3810058
    addi r11, r1, 0x50
    bl _savegpr_14
    li r28, 0x0
    la r4, lbl_8049F4D0
    lfs f30, 0x10(r4)
    lfs f28, 0x18(r4)
    lis r3, lbl_80395728@ha
    addi r14, r3, lbl_80395728@l
    lfs f31, 0x1c(r4)
lbl_8009304C:
    li r3, 0x48
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x49
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x4a
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x4b
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80093090
lbl_8009308C:
    li r28, 0x1
lbl_80093090:
    li r22, 0x0
    li r23, 0x0
    li r24, 0x0
    li r25, 0x0
    li r26, 0x0
    li r27, 0x0
    li r17, 0x0
    li r18, 0x0
    li r19, 0x0
    li r20, 0x0
    li r21, 0x0
    li r3, 0x58
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x59
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5b
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x53
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x55
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x3f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x41
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r27, 0x1
lbl_80093170:
    li r3, 0x5e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r3, 0x60
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r3, 0x5f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r26, 0x1
lbl_800931A4:
    li r3, 0x49
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x48
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x47
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x45
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x44
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x62
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r25, 0x1
lbl_80093238:
    li r3, 0x4b
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x4c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x4d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x56
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x57
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r24, 0x1
lbl_8009328C:
    li r3, 0x66
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932B0
    li r3, 0x65
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932B0
    li r23, 0x1
lbl_800932B0:
    li r3, 0x5d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932C4
    li r22, 0x1
lbl_800932C4:
    li r3, 0x6c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x6d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x6e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x70
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x72
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x73
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r21, 0x1
lbl_80093328:
    li r3, 0x74
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x75
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x76
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x77
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r20, 0x1
lbl_8009336C:
    li r3, 0x7c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r3, 0x7d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r3, 0x7f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r19, 0x1
lbl_800933A0:
    li r3, 0x78
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r3, 0x79
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r3, 0x7a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r18, 0x1
lbl_800933D4:
    li r3, 0x7e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933E8
    li r17, 0x1
lbl_800933E8:
    li r30, 0x0
    li r3, 0x3
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093420
    cmpwi r28, 0x0
    beq lbl_80093420
    li r3, 0x3
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093420:
    li r3, 0x14
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8009347C
    li r3, 0x0
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x1
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x2
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x3
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_8009347C
lbl_80093470:
    li r3, 0x14
    bl fn_800919FC
    li r30, 0x1
lbl_8009347C:
    li r16, 0x0
lbl_80093480:
    li r29, 0x0
    li r15, 0x0
    li r31, 0x0
lbl_8009348C:
    add r3, r16, r31
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_800934A0
    li r29, 0x1
lbl_800934A0:
    addi r15, r15, 0x1
    addi r31, r31, 0x4
    cmpwi r15, 0x12
    blt lbl_8009348C
    cmpwi r29, 0x0
    bne lbl_800934D4
    addi r3, r16, 0x48
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_800934D4
    addi r3, r16, 0x48
    bl fn_80091B50
    li r30, 0x1
lbl_800934D4:
    addi r16, r16, 0x1
    cmpwi r16, 0x4
    blt lbl_80093480
    li r16, 0x0
    li r15, 0x0
lbl_800934E8:
    addi r3, r16, 0x15
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935C4
    mr r3, r15
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x1
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x2
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x3
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_800935C4
lbl_80093538:
    addi r3, r16, 0x15
    bl fn_800919FC
    li r30, 0x1
    li r3, 0x15
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093570
    li r3, 0x34
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_80093570
    li r3, 0x34
    bl fn_800919FC
    b lbl_800935C4
lbl_80093570:
    li r3, 0x1a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009359C
    li r3, 0x35
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8009359C
    li r3, 0x35
    bl fn_800919FC
    b lbl_800935C4
lbl_8009359C:
    li r3, 0x1f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800935C4
    li r3, 0x36
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935C4
    li r3, 0x36
    bl fn_800919FC
lbl_800935C4:
    addi r16, r16, 0x1
    addi r15, r15, 0x4
    cmpwi r16, 0x13
    blt lbl_800934E8
    li r3, 0x94
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935F8
    cmpwi r28, 0x0
    beq lbl_800935F8
    li r3, 0x94
    bl fn_800919FC
    li r30, 0x1
lbl_800935F8:
    li r3, 0x2e
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093628
    li r3, 0x30
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093628
    li r3, 0x2f
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_8009365C
lbl_80093628:
    cmpwi r27, 0x0
    beq lbl_8009365C
    li r3, 0x2e
    bl fn_80091C90
    li r3, 0x30
    bl fn_80091C90
    li r3, 0x2f
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_8009365C:
    li r3, 0x19
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x18
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x17
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x15
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x14
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x21
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x22
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x20
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x32
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_8009377C
lbl_800936EC:
    li r0, 0x0
    cmpwi r27, 0x0
    beq lbl_8009370C
    cmpwi r26, 0x0
    beq lbl_8009370C
    cmpwi r21, 0x0
    beq lbl_8009370C
    li r0, 0x1
lbl_8009370C:
    cmpwi r28, 0x0
    beq lbl_80093718
    li r0, 0x1
lbl_80093718:
    cmpwi r0, 0x0
    beq lbl_8009377C
    li r3, 0x19
    bl fn_80091C90
    li r3, 0x18
    bl fn_80091C90
    li r3, 0x17
    bl fn_80091C90
    li r3, 0x15
    bl fn_80091C90
    li r3, 0x14
    bl fn_80091C90
    li r3, 0x21
    bl fn_80091C90
    li r3, 0x22
    bl fn_80091C90
    li r3, 0x20
    bl fn_80091C90
    li r3, 0x32
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_8009377C:
    li r3, 0x1b
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x1c
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x1d
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x26
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x27
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093820
lbl_800937CC:
    cmpwi r27, 0x0
    beq lbl_80093820
    cmpwi r26, 0x0
    beq lbl_80093820
    cmpwi r25, 0x0
    beq lbl_80093820
    li r3, 0x1b
    bl fn_80091C90
    li r3, 0x1c
    bl fn_80091C90
    li r3, 0x1d
    bl fn_80091C90
    li r3, 0x26
    bl fn_80091C90
    li r3, 0x27
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093820:
    li r3, 0x36
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093840
    li r3, 0x35
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093A14
lbl_80093840:
    li r15, 0x0
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x18
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x19
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1b
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1c
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1a
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x19
    bl fn_80091FAC
    fmr f29, f1
    li r3, 0x18
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1b
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1c
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1a
    bl fn_80091FAC
    fadds f0, f1, f29
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_80093944
    li r15, 0x1
lbl_80093944:
    cmpwi r27, 0x0
    beq lbl_800939E8
    cmpwi r26, 0x0
    beq lbl_800939E8
    cmpwi r25, 0x0
    beq lbl_800939E8
    cmpwi r24, 0x0
    beq lbl_800939E8
    cmpwi r18, 0x0
    beq lbl_800939E8
    cmpwi r17, 0x0
    beq lbl_800939E8
    li r3, 0x4
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x5
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x6
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0xb
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0xc
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x81
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x82
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r15, 0x1
lbl_800939E8:
    cmpwi r15, 0x0
    beq lbl_80093A14
    li r3, 0x36
    bl fn_80091C90
    li r3, 0x35
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093A14:
    li r3, 0x2d
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093AEC
    cmpwi r24, 0x0
    beq lbl_80093AEC
    cmpwi r23, 0x0
    beq lbl_80093AEC
    cmpwi r17, 0x0
    beq lbl_80093AEC
    li r3, 0x4
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x5
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x6
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0xb
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0xc
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x81
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x82
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x7
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    lwz r4, 0x1ec8(r14)
    lis r3, 0x1
    addi r0, r3, 0x1170
    cmpw r4, r0
    blt lbl_80093AEC
    li r3, 0x2d
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093AEC:
    li r3, 0x8b
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093E28
    cmpwi r22, 0x0
    beq lbl_80093E28
    li r3, 0x1
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x3
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x4
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x5
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x6
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x7
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x8
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x9
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xb
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xe
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xf
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x11
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x12
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x13
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x15
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x16
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x17
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x18
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x19
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1a
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1b
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1c
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1d
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1f
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x20
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x21
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x22
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x23
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x24
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x25
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x26
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x27
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x28
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x29
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2a
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2c
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2f
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x30
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    lwz r0, 0x12ac(r14)
    cmplwi r0, 0x5
    bgt lbl_80093E28
    li r3, 0x8b
    bl fn_80091B50
    li r30, 0x1
lbl_80093E28:
    li r3, 0x37
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093E64
    li r3, 0x8c
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80093E64
    li r3, 0x37
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093E64:
    li r3, 0x1b
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x1c
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x1d
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x26
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x27
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_80093EF8
lbl_80093EB4:
    cmpwi r27, 0x0
    bne lbl_80093ECC
    cmpwi r26, 0x0
    bne lbl_80093ECC
    cmpwi r25, 0x0
    beq lbl_80093EF8
lbl_80093ECC:
    li r3, 0x1b
    bl fn_80091DD0
    li r3, 0x1c
    bl fn_80091DD0
    li r3, 0x1d
    bl fn_80091DD0
    li r3, 0x26
    bl fn_80091DD0
    li r3, 0x27
    bl fn_80091DD0
    li r30, 0x1
lbl_80093EF8:
    li r3, 0x36
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093F18
    li r3, 0x35
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_80093F7C
lbl_80093F18:
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x36
    bl fn_80091DD0
    li r3, 0x35
    bl fn_80091DD0
    li r30, 0x1
lbl_80093F7C:
    li r3, 0x44
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x45
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x46
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x47
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093FF8
lbl_80093FBC:
    cmpwi r21, 0x0
    beq lbl_80093FF8
    li r3, 0x44
    bl fn_80091C90
    li r3, 0x45
    bl fn_80091C90
    li r3, 0x46
    bl fn_80091C90
    li r3, 0x47
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093FF8:
    li r3, 0x4c
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80094028
    li r3, 0x4d
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80094028
    li r3, 0x4f
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80094080
lbl_80094028:
    li r0, 0x0
    cmpwi r21, 0x0
    beq lbl_80094040
    cmpwi r20, 0x0
    beq lbl_80094040
    li r0, 0x1
lbl_80094040:
    cmpwi r28, 0x0
    beq lbl_8009404C
    li r0, 0x1
lbl_8009404C:
    cmpwi r0, 0x0
    beq lbl_80094080
    li r3, 0x4c
    bl fn_80091C90
    li r3, 0x4d
    bl fn_80091C90
    li r3, 0x4f
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80094080:
    li r3, 0x48
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800940B0
    li r3, 0x49
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800940B0
    li r3, 0x4a
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_800940F4
lbl_800940B0:
    cmpwi r21, 0x0
    beq lbl_800940F4
    cmpwi r20, 0x0
    beq lbl_800940F4
    cmpwi r19, 0x0
    beq lbl_800940F4
    li r3, 0x48
    bl fn_80091C90
    li r3, 0x49
    bl fn_80091C90
    li r3, 0x4a
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_800940F4:
    li r3, 0x4e
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80094140
    cmpwi r21, 0x0
    beq lbl_80094140
    cmpwi r20, 0x0
    beq lbl_80094140
    cmpwi r19, 0x0
    beq lbl_80094140
    cmpwi r18, 0x0
    beq lbl_80094140
    li r3, 0x4e
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80094140:
    li r3, 0x48
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80094170
    li r3, 0x49
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80094170
    li r3, 0x4a
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_800941A4
lbl_80094170:
    cmpwi r21, 0x0
    bne lbl_80094188
    cmpwi r20, 0x0
    bne lbl_80094188
    cmpwi r19, 0x0
    beq lbl_800941A4
lbl_80094188:
    li r3, 0x48
    bl fn_80091DD0
    li r3, 0x49
    bl fn_80091DD0
    li r3, 0x4a
    bl fn_80091DD0
    li r30, 0x1
lbl_800941A4:
    li r3, 0x4e
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_800941D8
    cmpwi r21, 0x0
    beq lbl_800941D8
    cmpwi r20, 0x0
    beq lbl_800941D8
    cmpwi r19, 0x0
    beq lbl_800941D8
    li r3, 0x4e
    bl fn_80091DD0
    li r30, 0x1
lbl_800941D8:
    cmpwi r30, 0x0
    bne lbl_8009304C
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    li r0, 0x58
    opword 0x1381000C
    lfd f28, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80094228
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094228() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    subi r0, r3, 0x3
    cmplwi r0, 0xf
    bgt lbl_800946EC
    lis r3, jumptable_8034C30C@ha
    addi r3, r3, jumptable_8034C30C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_800946EC
    li r3, 0x4c
    bl fn_80091B50
    lwz r4, 0xc10(r31)
    lis r3, lbl_8034C3F8@ha
    lwz r0, lbl_8034C3F8@l(r3)
    cmpw r4, r0
    ble lbl_80094294
    li r3, 0x4d
    bl fn_80091B50
lbl_80094294:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x28(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r3, 0x10c4(r4)
    addi r0, r3, 0x1
    stw r0, 0x10c4(r4)
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_800946EC
    li r3, 0x4e
    bl fn_80091B50
    lwz r4, 0xc14(r31)
    lis r3, lbl_8034C420@ha
    lwz r0, lbl_8034C420@l(r3)
    cmpw r4, r0
    bge lbl_800942F0
    li r3, 0x82
    bl fn_80091B50
lbl_800942F0:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0xc14(r3)
    lis r3, 0x1
    subi r0, r3, 0x7360
    cmpw r4, r0
    bgt lbl_80094314
    li r3, 0x4f
    bl fn_80091B50
lbl_80094314:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc14(r3)
    cmpwi r0, 0x7080
    bgt lbl_800946EC
    lwz r0, 0x28(r3)
    cmplwi r0, 0x32
    bgt lbl_800946EC
    lis r3, jumptable_8034C240@ha
    addi r3, r3, jumptable_8034C240@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x50
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x51
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x52
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x53
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x54
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x55
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x56
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x57
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x58
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x59
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x60
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x61
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x62
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x63
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x64
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x65
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x66
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x67
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x68
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x69
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x70
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x71
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x72
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x73
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x74
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x75
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x76
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x77
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x78
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x79
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x80
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x81
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0xc18(r3)
    lis r3, lbl_8034C448@ha
    lwz r0, lbl_8034C448@l(r3)
    cmpw r4, r0
    ble lbl_800945C8
    li r3, 0x83
    bl fn_80091B50
lbl_800945C8:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xcb0(r3)
    cmpwi r0, 0x2
    bne lbl_800946EC
    lwz r0, 0xc18(r3)
    cmpwi r0, 0x1e
    blt lbl_800946EC
    li r3, 0x84
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc18(r3)
    cmpwi r0, 0xa
    blt lbl_800946EC
    lwz r4, 0xc10(r3)
    lis r3, lbl_8034C588@ha
    lwz r0, lbl_8034C588@l(r3)
    cmpw r4, r0
    ble lbl_800946EC
    li r3, 0x86
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc18(r3)
    cmpwi r0, 0xa
    blt lbl_800946EC
    lwz r4, 0xc14(r3)
    lis r3, lbl_8034C5B0@ha
    lwz r0, lbl_8034C5B0@l(r3)
    cmpw r4, r0
    bge lbl_800946EC
    li r3, 0x87
    bl fn_80091B50
    b lbl_800946EC
    bl fn_800A0BF0
    lwz r4, 0x24(r3)
    lis r3, lbl_8034C470@ha
    lwz r0, lbl_8034C470@l(r3)
    cmpw r4, r0
    ble lbl_800946EC
    li r3, 0x85
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0x2c(r3)
    cmpwi r4, 0x0
    beq lbl_800946EC
    lwz r3, 0x30(r3)
    cmpwi r3, 0x0
    bne lbl_800946A4
    li r3, 0x1
lbl_800946A4:
    subi r0, r4, 0x1
    mulli r0, r0, 0x3
    add r3, r3, r0
    subi r3, r3, 0x1
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0x2c(r3)
    cmpwi r4, 0x0
    beq lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0xcac(r3)
    subi r0, r4, 0x1
    slwi r0, r0, 2
    add r3, r3, r0
    bl fn_80091B50
lbl_800946EC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80094700
// ----------------------------------------------------------------------------
extern "C" asm void fn_80094700() {
    nofralloc
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    addi r6, r3, 0xfd8
    li r3, 0x0
    li r4, 0x0
    li r0, 0x33
    mtctr r0
lbl_8009471C:
    add r5, r6, r4
    lwz r0, 0x20(r5)
    add r3, r3, r0
    addi r4, r4, 0x4
    bdnz lbl_8009471C
    blr
}

