#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_arcResourceAccessor.cpp
// Total functions: 6

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8037C688[];
extern "C" u8 lbl_8037C68C[];
extern "C" u8 lbl_8037C690[];

// Forward declarations
extern "C" void ARCChangeDir();
extern "C" void ARCCloseDir();
extern "C" void ARCConvertPathToEntrynum();
extern "C" void ARCGetLength();
extern "C" void ARCGetStartOffset();
extern "C" void ARCInitHandle();
extern "C" void ARCOpenDir();
extern "C" void ARCReadDir();
extern "C" void Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc();
extern "C" void GetFont__Q36nw4hbm3lyt19ArcResourceAccessorFPCc();
extern "C" void GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl();
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void fn_8029B4EC();
extern "C" void fn_8029B968();
extern "C" void fn_802F2A68();
extern "C" void fn_802F2B44();
extern "C" void fn_802F2C8C();
extern "C" void fn_802F9720();
extern "C" void strcmp();
extern "C" void stricmp();
extern "C" void strncpy();

// ----------------------------------------------------------------------------
// fn_802F2A68
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F2A68() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r6, lbl_8037C688@ha
    stw r0, 0x44(r1)
    addi r5, r1, 0x18
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, -0x1
    stw r29, 0x34(r1)
    mr r29, r4
    addi r4, r6, lbl_8037C688@l
    stw r28, 0x30(r1)
    mr r28, r3
    bl ARCOpenDir
    lis r31, lbl_8037C68C@ha
    b lbl_802F2B04
lbl_802F2AA8:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_802F2AE8
    lwz r4, 0x14(r1)
    mr r3, r28
    bl ARCChangeDir
    mr r3, r28
    mr r4, r29
    bl fn_802F2A68
    mr r30, r3
    mr r3, r28
    addi r4, r31, lbl_8037C68C@l
    bl ARCChangeDir
    cmpwi r30, -0x1
    bne lbl_802F2B18
    b lbl_802F2B04
lbl_802F2AE8:
    lwz r4, 0x14(r1)
    mr r3, r29
    bl stricmp
    cmpwi r3, 0x0
    bne lbl_802F2B04
    lwz r30, 0xc(r1)
    b lbl_802F2B18
lbl_802F2B04:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl ARCReadDir
    cmpwi r3, 0x0
    bne lbl_802F2AA8
lbl_802F2B18:
    addi r3, r1, 0x18
    bl ARCCloseDir
    mr r3, r30
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802F2B44
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F2B44() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, -0x1
    bl ARCConvertPathToEntrynum
    cmpwi r3, -0x1
    beq lbl_802F2C28
    mr r3, r26
    mr r4, r27
    bl ARCChangeDir
    cmpwi r3, 0x0
    beq lbl_802F2C28
    cmpwi r28, 0x0
    bne lbl_802F2BAC
    mr r3, r26
    mr r4, r29
    bl fn_802F2A68
    mr r31, r3
    b lbl_802F2C18
lbl_802F2BAC:
    srwi r3, r28, 24
    srwi r6, r28, 16
    srwi r5, r28, 8
    li r0, 0x0
    stb r3, 0x8(r1)
    mr r3, r26
    addi r4, r1, 0x8
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r28, 0xb(r1)
    stb r0, 0xc(r1)
    bl ARCConvertPathToEntrynum
    cmpwi r3, -0x1
    beq lbl_802F2C18
    mr r3, r26
    addi r4, r1, 0x8
    bl ARCChangeDir
    cmpwi r3, 0x0
    beq lbl_802F2C18
    mr r3, r26
    mr r4, r29
    bl ARCConvertPathToEntrynum
    lis r4, lbl_8037C68C@ha
    mr r31, r3
    mr r3, r26
    addi r4, r4, lbl_8037C68C@l
    bl ARCChangeDir
lbl_802F2C18:
    lis r4, lbl_8037C68C@ha
    mr r3, r26
    addi r4, r4, lbl_8037C68C@l
    bl ARCChangeDir
lbl_802F2C28:
    cmpwi r31, -0x1
    beq lbl_802F2C70
    mr r3, r26
    mr r4, r31
    addi r5, r1, 0x10
    bl fn_8029B4EC
    addi r3, r1, 0x10
    bl fn_8029B968
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_802F2C60
    addi r3, r1, 0x10
    bl ARCGetStartOffset
    stw r3, 0x0(r30)
lbl_802F2C60:
    addi r3, r1, 0x10
    bl ARCGetLength
    mr r3, r31
    b lbl_802F2C74
lbl_802F2C70:
    li r3, 0x0
lbl_802F2C74:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802F2C8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F2C8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_802F9720
    li r0, 0x0
    lis r4, lbl_8037C690@ha
    stw r0, 0x28(r31)
    addi r5, r31, 0x28
    addi r4, r4, lbl_8037C690@l
    mr r3, r31
    stw r0, 0x2c(r31)
    stw r4, 0x0(r31)
    stw r0, 0x20(r31)
    stw r0, 0x24(r31)
    stw r5, 0x28(r31)
    stw r5, 0x2c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc
// ----------------------------------------------------------------------------
extern "C" asm void Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r30
    addi r4, r29, 0x4
    bl ARCInitHandle
    cmpwi r3, 0x0
    bne lbl_802F2D28
    li r3, 0x0
    b lbl_802F2D48
lbl_802F2D28:
    stw r30, 0x20(r29)
    mr r4, r31
    addi r3, r29, 0x30
    li r5, 0x7f
    bl strncpy
    li r0, 0x0
    li r3, 0x1
    stb r0, 0xaf(r29)
lbl_802F2D48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl
// ----------------------------------------------------------------------------
extern "C" asm void GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl() {
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    addi r4, r3, 0x30
    mr r5, r8
    mr r6, r0
    addi r3, r3, 0x4
    b fn_802F2B44
}

// ----------------------------------------------------------------------------
// GetFont__Q36nw4hbm3lyt19ArcResourceAccessorFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetFont__Q36nw4hbm3lyt19ArcResourceAccessorFPCc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x28
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r31, 0x28(r3)
    b lbl_802F2DCC
lbl_802F2DAC:
    mr r3, r29
    addi r4, r31, 0x8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802F2DC8
    lwz r3, 0x88(r31)
    b lbl_802F2DD8
lbl_802F2DC8:
    lwz r31, 0x0(r31)
lbl_802F2DCC:
    cmplw r31, r30
    bne lbl_802F2DAC
    li r3, 0x0
lbl_802F2DD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

