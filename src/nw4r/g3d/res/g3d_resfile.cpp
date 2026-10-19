#include "types.h"

// Translation unit: src/nw4r/g3d/res/g3d_resfile.cpp
// Total functions: 31

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80360B00[];
extern "C" u8 lbl_80360B20[];
extern "C" u8 lbl_80360B40[];
extern "C" u8 lbl_80360B60[];
extern "C" u8 lbl_80360B80[];
extern "C" u8 lbl_80360BA0[];
extern "C" u8 lbl_80360BC0[];
extern "C" u8 lbl_80360BE0[];
extern "C" u8 lbl_80360C00[];
extern "C" u8 lbl_80360C20[];
extern "C" u8 lbl_80360C40[];

// Forward declarations
extern "C" void Bind__Q34nw4r3g3d6ResMdlFQ34nw4r3g3d7ResFile();
extern "C" void Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile();
extern "C" void CheckRevision__Q34nw4r3g3d6ResTexCFv();
extern "C" void CheckRevision__Q34nw4r3g3d7ResFileCFv();
extern "C" void CheckRevision__Q34nw4r3g3d7ResPlttCFv();
extern "C" void DCStore__Q34nw4r3g3d7ResPlttFb();
extern "C" void GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv();
extern "C" void GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmChr__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmClr__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmScnNumEntries__Q34nw4r3g3d7ResFileCFv();
extern "C" void GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmShp__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmTexPat__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmVis__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv();
extern "C" void GetResMdl__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResPltt__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResPltt__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName();
extern "C" void GetResPltt__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResTex__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResTex__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName();
extern "C" void GetResTex__Q34nw4r3g3d7ResFileCFi();
extern "C" void Init__Q34nw4r3g3d6ResMdlFv();
extern "C" void Init__Q34nw4r3g3d6ResTexFv();
extern "C" void Init__Q34nw4r3g3d7ResFileFv();
extern "C" void Release__Q34nw4r3g3d6ResMdlFv();
extern "C" void Release__Q34nw4r3g3d7ResFileFv();
extern "C" void Terminate__Q34nw4r3g3d6ResMdlFv();
extern "C" void Terminate__Q34nw4r3g3d7ResFileFv();
extern "C" void __vc__Q34nw4r3g3d6ResDicCFPCc();
extern "C" void __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void fn_801CF410();
extern "C" void fn_801CF514();
extern "C" void fn_801CF618();
extern "C" void fn_801CF9BC();
extern "C" void fn_801D5228();
extern "C" void fn_801D5398();

// ----------------------------------------------------------------------------
// GetResMdl__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResMdl__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B00@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B00@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CEE28
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CEE20
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CEE18
    add r3, r3, r0
    b lbl_801CEE2C
lbl_801CEE18:
    li r3, 0x0
    b lbl_801CEE2C
lbl_801CEE20:
    li r3, 0x0
    b lbl_801CEE2C
lbl_801CEE28:
    li r3, 0x0
lbl_801CEE2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B00@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360B00@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CEE98
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CEE90
    lwz r3, 0x4(r3)
    b lbl_801CEE9C
lbl_801CEE90:
    li r3, 0x0
    b lbl_801CEE9C
lbl_801CEE98:
    li r3, 0x0
lbl_801CEE9C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResPltt__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResPltt__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CEF00
    stw r3, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFPCc
    b lbl_801CEF04
lbl_801CEF00:
    li r3, 0x0
lbl_801CEF04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResPltt__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName
// ----------------------------------------------------------------------------
extern "C" asm void GetResPltt__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x10
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CEF74
    lwz r0, 0x0(r31)
    addi r4, r1, 0x8
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    b lbl_801CEF78
lbl_801CEF74:
    li r3, 0x0
lbl_801CEF78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResPltt__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResPltt__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF00C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF004
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CEFFC
    add r3, r3, r0
    b lbl_801CF010
lbl_801CEFFC:
    li r3, 0x0
    b lbl_801CF010
lbl_801CF004:
    li r3, 0x0
    b lbl_801CF010
lbl_801CF00C:
    li r3, 0x0
lbl_801CF010:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResTex__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResTex__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B40@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B40@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF078
    stw r3, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFPCc
    b lbl_801CF07C
lbl_801CF078:
    li r3, 0x0
lbl_801CF07C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResTex__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName
// ----------------------------------------------------------------------------
extern "C" asm void GetResTex__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B40@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B40@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x10
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF0EC
    lwz r0, 0x0(r31)
    addi r4, r1, 0x8
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    b lbl_801CF0F0
lbl_801CF0EC:
    li r3, 0x0
lbl_801CF0F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResTex__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResTex__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B40@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B40@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF184
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF17C
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF174
    add r3, r3, r0
    b lbl_801CF188
lbl_801CF174:
    li r3, 0x0
    b lbl_801CF188
lbl_801CF17C:
    li r3, 0x0
    b lbl_801CF188
lbl_801CF184:
    li r3, 0x0
lbl_801CF188:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmChr__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B40@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360B40@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF1F4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF1EC
    lwz r3, 0x4(r3)
    b lbl_801CF1F8
lbl_801CF1EC:
    li r3, 0x0
    b lbl_801CF1F8
lbl_801CF1F4:
    li r3, 0x0
lbl_801CF1F8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmChr__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmChr__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B60@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B60@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF288
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF280
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF278
    add r3, r3, r0
    b lbl_801CF28C
lbl_801CF278:
    li r3, 0x0
    b lbl_801CF28C
lbl_801CF280:
    li r3, 0x0
    b lbl_801CF28C
lbl_801CF288:
    li r3, 0x0
lbl_801CF28C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B60@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360B60@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF2F8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF2F0
    lwz r3, 0x4(r3)
    b lbl_801CF2FC
lbl_801CF2F0:
    li r3, 0x0
    b lbl_801CF2FC
lbl_801CF2F8:
    li r3, 0x0
lbl_801CF2FC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmClr__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmClr__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B80@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360B80@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF38C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF384
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF37C
    add r3, r3, r0
    b lbl_801CF390
lbl_801CF37C:
    li r3, 0x0
    b lbl_801CF390
lbl_801CF384:
    li r3, 0x0
    b lbl_801CF390
lbl_801CF38C:
    li r3, 0x0
lbl_801CF390:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360B80@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360B80@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF3FC
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF3F4
    lwz r3, 0x4(r3)
    b lbl_801CF400
lbl_801CF3F4:
    li r3, 0x0
    b lbl_801CF400
lbl_801CF3FC:
    li r3, 0x0
lbl_801CF400:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CF410
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CF410() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BA0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360BA0@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF490
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF488
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF480
    add r3, r3, r0
    b lbl_801CF494
lbl_801CF480:
    li r3, 0x0
    b lbl_801CF494
lbl_801CF488:
    li r3, 0x0
    b lbl_801CF494
lbl_801CF490:
    li r3, 0x0
lbl_801CF494:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BA0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360BA0@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF500
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF4F8
    lwz r3, 0x4(r3)
    b lbl_801CF504
lbl_801CF4F8:
    li r3, 0x0
    b lbl_801CF504
lbl_801CF500:
    li r3, 0x0
lbl_801CF504:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CF514
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CF514() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BC0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360BC0@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF594
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF58C
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF584
    add r3, r3, r0
    b lbl_801CF598
lbl_801CF584:
    li r3, 0x0
    b lbl_801CF598
lbl_801CF58C:
    li r3, 0x0
    b lbl_801CF598
lbl_801CF594:
    li r3, 0x0
lbl_801CF598:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BC0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360BC0@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF604
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF5FC
    lwz r3, 0x4(r3)
    b lbl_801CF608
lbl_801CF5FC:
    li r3, 0x0
    b lbl_801CF608
lbl_801CF604:
    li r3, 0x0
lbl_801CF608:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CF618
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CF618() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BE0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360BE0@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF698
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF690
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF688
    add r3, r3, r0
    b lbl_801CF69C
lbl_801CF688:
    li r3, 0x0
    b lbl_801CF69C
lbl_801CF690:
    li r3, 0x0
    b lbl_801CF69C
lbl_801CF698:
    li r3, 0x0
lbl_801CF69C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360BE0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360BE0@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF708
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF700
    lwz r3, 0x4(r3)
    b lbl_801CF70C
lbl_801CF700:
    li r3, 0x0
    b lbl_801CF70C
lbl_801CF708:
    li r3, 0x0
lbl_801CF70C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmShp__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmShp__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C00@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360C00@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF79C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF794
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF78C
    add r3, r3, r0
    b lbl_801CF7A0
lbl_801CF78C:
    li r3, 0x0
    b lbl_801CF7A0
lbl_801CF794:
    li r3, 0x0
    b lbl_801CF7A0
lbl_801CF79C:
    li r3, 0x0
lbl_801CF7A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C00@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360C00@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF80C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF804
    lwz r3, 0x4(r3)
    b lbl_801CF810
lbl_801CF804:
    li r3, 0x0
    b lbl_801CF810
lbl_801CF80C:
    li r3, 0x0
lbl_801CF810:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmVis__Q34nw4r3g3d7ResFileCFPCc
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmVis__Q34nw4r3g3d7ResFileCFPCc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360C20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF874
    stw r3, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFPCc
    b lbl_801CF878
lbl_801CF874:
    li r3, 0x0
lbl_801CF878:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmTexPat__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmTexPat__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360C20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF90C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF904
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF8FC
    add r3, r3, r0
    b lbl_801CF910
lbl_801CF8FC:
    li r3, 0x0
    b lbl_801CF910
lbl_801CF904:
    li r3, 0x0
    b lbl_801CF910
lbl_801CF90C:
    li r3, 0x0
lbl_801CF910:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C20@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360C20@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CF9A4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CF99C
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CF994
    add r3, r3, r0
    b lbl_801CF9A8
lbl_801CF994:
    li r3, 0x0
    b lbl_801CF9A8
lbl_801CF99C:
    li r3, 0x0
    b lbl_801CF9A8
lbl_801CF9A4:
    li r3, 0x0
lbl_801CF9A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801CF9BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CF9BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C20@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80360C20@l
    addi r0, r5, 0x18
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFA14
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFA0C
    lwz r3, 0x4(r3)
    b lbl_801CFA18
lbl_801CFA0C:
    li r3, 0x0
    b lbl_801CFA18
lbl_801CFA14:
    li r3, 0x0
lbl_801CFA18:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetResAnmScnNumEntries__Q34nw4r3g3d7ResFileCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetResAnmScnNumEntries__Q34nw4r3g3d7ResFileCFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    lis r3, lbl_80360C40@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80360C40@l
    addi r0, r5, 0x18
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFA7C
    stw r3, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFPCc
    b lbl_801CFA80
lbl_801CFA7C:
    li r3, 0x0
lbl_801CFA80:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile
// ----------------------------------------------------------------------------
extern "C" asm void Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_25
    lis r5, lbl_80360B00@ha
    mr r29, r4
    addi r5, r5, lbl_80360B00@l
    mr r28, r3
    stw r5, 0x24(r1)
    addi r4, r1, 0x24
    li r30, 0x1
    lwz r5, 0x0(r3)
    addi r3, r1, 0x20
    addi r0, r5, 0x18
    stw r0, 0x20(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFB00
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFAF8
    lwz r26, 0x4(r3)
    b lbl_801CFB04
lbl_801CFAF8:
    li r26, 0x0
    b lbl_801CFB04
lbl_801CFB00:
    li r26, 0x0
lbl_801CFB04:
    lis r27, lbl_80360B00@ha
    li r31, 0x0
    addi r27, r27, lbl_80360B00@l
    b lbl_801CFBB4
lbl_801CFB14:
    stw r27, 0x18(r1)
    addi r4, r1, 0x18
    addi r3, r1, 0x1c
    lwz r5, 0x0(r28)
    addi r0, r5, 0x18
    stw r0, 0x1c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFB78
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFB70
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CFB68
    add r3, r3, r0
    b lbl_801CFB7C
lbl_801CFB68:
    li r3, 0x0
    b lbl_801CFB7C
lbl_801CFB70:
    li r3, 0x0
    b lbl_801CFB7C
lbl_801CFB78:
    li r3, 0x0
lbl_801CFB7C:
    lwz r0, 0x0(r29)
    addi r4, r1, 0x30
    stw r3, 0x34(r1)
    addi r3, r1, 0x34
    li r25, 0x0
    stw r0, 0x30(r1)
    bl Bind__Q34nw4r3g3d6ResMdlFQ34nw4r3g3d7ResFile
    cmpwi r3, 0x0
    beq lbl_801CFBAC
    cmpwi r30, 0x0
    beq lbl_801CFBAC
    li r25, 0x1
lbl_801CFBAC:
    mr r30, r25
    addi r31, r31, 0x1
lbl_801CFBB4:
    cmplw r31, r26
    blt lbl_801CFB14
    lis r5, lbl_80360BC0@ha
    addi r4, r1, 0x14
    addi r5, r5, lbl_80360BC0@l
    addi r3, r1, 0x10
    stw r5, 0x14(r1)
    lwz r5, 0x0(r28)
    addi r0, r5, 0x18
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFC08
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFC00
    lwz r26, 0x4(r3)
    b lbl_801CFC0C
lbl_801CFC00:
    li r26, 0x0
    b lbl_801CFC0C
lbl_801CFC08:
    li r26, 0x0
lbl_801CFC0C:
    lis r27, lbl_80360BC0@ha
    li r31, 0x0
    addi r27, r27, lbl_80360BC0@l
    b lbl_801CFCA4
lbl_801CFC1C:
    stw r27, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r1, 0xc
    lwz r5, 0x0(r28)
    addi r0, r5, 0x18
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFC80
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFC78
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CFC70
    add r3, r3, r0
    b lbl_801CFC84
lbl_801CFC70:
    li r3, 0x0
    b lbl_801CFC84
lbl_801CFC78:
    li r3, 0x0
    b lbl_801CFC84
lbl_801CFC80:
    li r3, 0x0
lbl_801CFC84:
    lwz r0, 0x0(r29)
    addi r4, r1, 0x28
    stw r3, 0x2c(r1)
    addi r3, r1, 0x2c
    stw r0, 0x28(r1)
    bl fn_801D5228
    mr r30, r3
    addi r31, r31, 0x1
lbl_801CFCA4:
    cmplw r31, r26
    blt lbl_801CFC1C
    addi r11, r1, 0x60
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// Release__Q34nw4r3g3d7ResFileFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q34nw4r3g3d7ResFileFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80360B00@ha
    stw r0, 0x44(r1)
    addi r5, r5, lbl_80360B00@l
    addi r4, r1, 0x24
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    stw r5, 0x24(r1)
    lwz r5, 0x0(r3)
    addi r3, r1, 0x20
    addi r0, r5, 0x18
    stw r0, 0x20(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFD34
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFD2C
    lwz r28, 0x4(r3)
    b lbl_801CFD38
lbl_801CFD2C:
    li r28, 0x0
    b lbl_801CFD38
lbl_801CFD34:
    li r28, 0x0
lbl_801CFD38:
    lis r29, lbl_80360B00@ha
    li r31, 0x0
    addi r29, r29, lbl_80360B00@l
    b lbl_801CFDC0
lbl_801CFD48:
    stw r29, 0x18(r1)
    addi r4, r1, 0x18
    addi r3, r1, 0x1c
    lwz r5, 0x0(r30)
    addi r0, r5, 0x18
    stw r0, 0x1c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFDAC
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFDA4
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CFD9C
    add r0, r3, r0
    b lbl_801CFDB0
lbl_801CFD9C:
    li r0, 0x0
    b lbl_801CFDB0
lbl_801CFDA4:
    li r0, 0x0
    b lbl_801CFDB0
lbl_801CFDAC:
    li r0, 0x0
lbl_801CFDB0:
    stw r0, 0x2c(r1)
    addi r3, r1, 0x2c
    bl Release__Q34nw4r3g3d6ResMdlFv
    addi r31, r31, 0x1
lbl_801CFDC0:
    cmplw r31, r28
    blt lbl_801CFD48
    lis r5, lbl_80360BC0@ha
    addi r4, r1, 0x14
    addi r5, r5, lbl_80360BC0@l
    addi r3, r1, 0x10
    stw r5, 0x14(r1)
    lwz r5, 0x0(r30)
    addi r0, r5, 0x18
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFE14
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFE0C
    lwz r28, 0x4(r3)
    b lbl_801CFE18
lbl_801CFE0C:
    li r28, 0x0
    b lbl_801CFE18
lbl_801CFE14:
    li r28, 0x0
lbl_801CFE18:
    lis r29, lbl_80360BC0@ha
    li r31, 0x0
    addi r29, r29, lbl_80360BC0@l
    b lbl_801CFEA0
lbl_801CFE28:
    stw r29, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r1, 0xc
    lwz r5, 0x0(r30)
    addi r0, r5, 0x18
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFE8C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFE84
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CFE7C
    add r0, r3, r0
    b lbl_801CFE90
lbl_801CFE7C:
    li r0, 0x0
    b lbl_801CFE90
lbl_801CFE84:
    li r0, 0x0
    b lbl_801CFE90
lbl_801CFE8C:
    li r0, 0x0
lbl_801CFE90:
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    bl fn_801D5398
    addi r31, r31, 0x1
lbl_801CFEA0:
    cmplw r31, r28
    blt lbl_801CFE28
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Init__Q34nw4r3g3d7ResFileFv
// ----------------------------------------------------------------------------
extern "C" asm void Init__Q34nw4r3g3d7ResFileFv() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lis r31, lbl_80360B00@ha
    mr r29, r3
    addi r31, r31, lbl_80360B00@l
    addi r4, r1, 0x34
    addi r0, r31, 0x0
    stw r0, 0x34(r1)
    lwz r5, 0x0(r3)
    addi r3, r1, 0x30
    addi r0, r5, 0x18
    stw r0, 0x30(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFF30
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFF28
    lwz r27, 0x4(r3)
    b lbl_801CFF34
lbl_801CFF28:
    li r27, 0x0
    b lbl_801CFF34
lbl_801CFF30:
    li r27, 0x0
lbl_801CFF34:
    addi r28, r31, 0x0
    li r30, 0x0
    b lbl_801CFFB8
lbl_801CFF40:
    stw r28, 0x28(r1)
    addi r4, r1, 0x28
    addi r3, r1, 0x2c
    lwz r5, 0x0(r29)
    addi r0, r5, 0x18
    stw r0, 0x2c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801CFFA4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801CFF9C
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801CFF94
    add r0, r3, r0
    b lbl_801CFFA8
lbl_801CFF94:
    li r0, 0x0
    b lbl_801CFFA8
lbl_801CFF9C:
    li r0, 0x0
    b lbl_801CFFA8
lbl_801CFFA4:
    li r0, 0x0
lbl_801CFFA8:
    stw r0, 0x40(r1)
    addi r3, r1, 0x40
    bl Init__Q34nw4r3g3d6ResMdlFv
    addi r30, r30, 0x1
lbl_801CFFB8:
    cmplw r30, r27
    blt lbl_801CFF40
    addi r0, r31, 0x40
    addi r4, r1, 0x24
    stw r0, 0x24(r1)
    addi r3, r1, 0x20
    lwz r5, 0x0(r29)
    addi r0, r5, 0x18
    stw r0, 0x20(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0008
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0000
    lwz r27, 0x4(r3)
    b lbl_801D000C
lbl_801D0000:
    li r27, 0x0
    b lbl_801D000C
lbl_801D0008:
    li r27, 0x0
lbl_801D000C:
    addi r28, r31, 0x40
    li r30, 0x0
    b lbl_801D0090
lbl_801D0018:
    stw r28, 0x18(r1)
    addi r4, r1, 0x18
    addi r3, r1, 0x1c
    lwz r5, 0x0(r29)
    addi r0, r5, 0x18
    stw r0, 0x1c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D007C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0074
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D006C
    add r0, r3, r0
    b lbl_801D0080
lbl_801D006C:
    li r0, 0x0
    b lbl_801D0080
lbl_801D0074:
    li r0, 0x0
    b lbl_801D0080
lbl_801D007C:
    li r0, 0x0
lbl_801D0080:
    stw r0, 0x3c(r1)
    addi r3, r1, 0x3c
    bl Init__Q34nw4r3g3d6ResTexFv
    addi r30, r30, 0x1
lbl_801D0090:
    cmplw r30, r27
    blt lbl_801D0018
    addi r0, r31, 0x20
    addi r4, r1, 0x14
    stw r0, 0x14(r1)
    addi r3, r1, 0x10
    lwz r5, 0x0(r29)
    addi r0, r5, 0x18
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D00E0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D00D8
    lwz r27, 0x4(r3)
    b lbl_801D00E4
lbl_801D00D8:
    li r27, 0x0
    b lbl_801D00E4
lbl_801D00E0:
    li r27, 0x0
lbl_801D00E4:
    addi r31, r31, 0x20
    li r30, 0x0
    b lbl_801D016C
lbl_801D00F0:
    stw r31, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r1, 0xc
    lwz r5, 0x0(r29)
    addi r0, r5, 0x18
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0154
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D014C
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0144
    add r0, r3, r0
    b lbl_801D0158
lbl_801D0144:
    li r0, 0x0
    b lbl_801D0158
lbl_801D014C:
    li r0, 0x0
    b lbl_801D0158
lbl_801D0154:
    li r0, 0x0
lbl_801D0158:
    stw r0, 0x38(r1)
    addi r3, r1, 0x38
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d7ResPlttFb
    addi r30, r30, 0x1
lbl_801D016C:
    cmplw r30, r27
    blt lbl_801D00F0
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// Terminate__Q34nw4r3g3d7ResFileFv
// ----------------------------------------------------------------------------
extern "C" asm void Terminate__Q34nw4r3g3d7ResFileFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_80360B00@ha
    stw r0, 0x34(r1)
    addi r5, r5, lbl_80360B00@l
    addi r4, r1, 0x14
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    stw r5, 0x14(r1)
    lwz r5, 0x0(r3)
    addi r3, r1, 0x10
    addi r0, r5, 0x18
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D01F8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D01F0
    lwz r29, 0x4(r3)
    b lbl_801D01FC
lbl_801D01F0:
    li r29, 0x0
    b lbl_801D01FC
lbl_801D01F8:
    li r29, 0x0
lbl_801D01FC:
    lis r30, lbl_80360B00@ha
    li r28, 0x0
    addi r30, r30, lbl_80360B00@l
    b lbl_801D0284
lbl_801D020C:
    stw r30, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r1, 0xc
    lwz r5, 0x0(r31)
    addi r0, r5, 0x18
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0270
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0268
    addi r0, r28, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0260
    add r0, r3, r0
    b lbl_801D0274
lbl_801D0260:
    li r0, 0x0
    b lbl_801D0274
lbl_801D0268:
    li r0, 0x0
    b lbl_801D0274
lbl_801D0270:
    li r0, 0x0
lbl_801D0274:
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    bl Terminate__Q34nw4r3g3d6ResMdlFv
    addi r28, r28, 0x1
lbl_801D0284:
    cmplw r28, r29
    blt lbl_801D020C
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// CheckRevision__Q34nw4r3g3d7ResFileCFv
// ----------------------------------------------------------------------------
extern "C" asm void CheckRevision__Q34nw4r3g3d7ResFileCFv() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_27
    lwz r4, 0x0(r3)
    lis r31, lbl_80360B00@ha
    addi r31, r31, lbl_80360B00@l
    mr r29, r3
    addi r5, r4, 0x18
    addi r4, r1, 0xa4
    addi r0, r31, 0x0
    stw r5, 0xa0(r1)
    addi r3, r1, 0xa0
    stw r0, 0xa4(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0314
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D030C
    lwz r27, 0x4(r3)
    b lbl_801D0318
lbl_801D030C:
    li r27, 0x0
    b lbl_801D0318
lbl_801D0314:
    li r27, 0x0
lbl_801D0318:
    addi r28, r31, 0x0
    li r30, 0x0
    b lbl_801D03AC
lbl_801D0324:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x98
    stw r28, 0x98(r1)
    addi r3, r1, 0x9c
    addi r0, r5, 0x18
    stw r0, 0x9c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0388
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0380
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0378
    add r3, r3, r0
    b lbl_801D038C
lbl_801D0378:
    li r3, 0x0
    b lbl_801D038C
lbl_801D0380:
    li r3, 0x0
    b lbl_801D038C
lbl_801D0388:
    li r3, 0x0
lbl_801D038C:
    lwz r3, 0x8(r3)
    subi r0, r3, 0xb
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D03A8
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D03A8:
    addi r30, r30, 0x1
lbl_801D03AC:
    cmplw r30, r27
    blt lbl_801D0324
    lwz r3, 0x0(r29)
    addi r0, r31, 0x40
    stw r0, 0x94(r1)
    addi r4, r1, 0x94
    addi r0, r3, 0x18
    addi r3, r1, 0x90
    stw r0, 0x90(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D03FC
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D03F4
    lwz r27, 0x4(r3)
    b lbl_801D0400
lbl_801D03F4:
    li r27, 0x0
    b lbl_801D0400
lbl_801D03FC:
    li r27, 0x0
lbl_801D0400:
    addi r28, r31, 0x40
    li r30, 0x0
    b lbl_801D0494
lbl_801D040C:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x88
    stw r28, 0x88(r1)
    addi r3, r1, 0x8c
    addi r0, r5, 0x18
    stw r0, 0x8c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0470
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0468
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0460
    add r0, r3, r0
    b lbl_801D0474
lbl_801D0460:
    li r0, 0x0
    b lbl_801D0474
lbl_801D0468:
    li r0, 0x0
    b lbl_801D0474
lbl_801D0470:
    li r0, 0x0
lbl_801D0474:
    stw r0, 0xac(r1)
    addi r3, r1, 0xac
    bl CheckRevision__Q34nw4r3g3d6ResTexCFv
    cmpwi r3, 0x0
    bne lbl_801D0490
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0490:
    addi r30, r30, 0x1
lbl_801D0494:
    cmplw r30, r27
    blt lbl_801D040C
    lwz r3, 0x0(r29)
    addi r0, r31, 0x20
    stw r0, 0x84(r1)
    addi r4, r1, 0x84
    addi r0, r3, 0x18
    addi r3, r1, 0x80
    stw r0, 0x80(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D04E4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D04DC
    lwz r27, 0x4(r3)
    b lbl_801D04E8
lbl_801D04DC:
    li r27, 0x0
    b lbl_801D04E8
lbl_801D04E4:
    li r27, 0x0
lbl_801D04E8:
    addi r28, r31, 0x20
    li r30, 0x0
    b lbl_801D057C
lbl_801D04F4:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x78
    stw r28, 0x78(r1)
    addi r3, r1, 0x7c
    addi r0, r5, 0x18
    stw r0, 0x7c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0558
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0550
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0548
    add r0, r3, r0
    b lbl_801D055C
lbl_801D0548:
    li r0, 0x0
    b lbl_801D055C
lbl_801D0550:
    li r0, 0x0
    b lbl_801D055C
lbl_801D0558:
    li r0, 0x0
lbl_801D055C:
    stw r0, 0xa8(r1)
    addi r3, r1, 0xa8
    bl CheckRevision__Q34nw4r3g3d7ResPlttCFv
    cmpwi r3, 0x0
    bne lbl_801D0578
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0578:
    addi r30, r30, 0x1
lbl_801D057C:
    cmplw r30, r27
    blt lbl_801D04F4
    lwz r3, 0x0(r29)
    addi r0, r31, 0x60
    stw r0, 0x74(r1)
    addi r4, r1, 0x74
    addi r0, r3, 0x18
    addi r3, r1, 0x70
    stw r0, 0x70(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D05CC
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D05C4
    lwz r27, 0x4(r3)
    b lbl_801D05D0
lbl_801D05C4:
    li r27, 0x0
    b lbl_801D05D0
lbl_801D05CC:
    li r27, 0x0
lbl_801D05D0:
    addi r28, r31, 0x60
    li r30, 0x0
    b lbl_801D0664
lbl_801D05DC:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x68
    stw r28, 0x68(r1)
    addi r3, r1, 0x6c
    addi r0, r5, 0x18
    stw r0, 0x6c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0640
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0638
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0630
    add r3, r3, r0
    b lbl_801D0644
lbl_801D0630:
    li r3, 0x0
    b lbl_801D0644
lbl_801D0638:
    li r3, 0x0
    b lbl_801D0644
lbl_801D0640:
    li r3, 0x0
lbl_801D0644:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0660
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0660:
    addi r30, r30, 0x1
lbl_801D0664:
    cmplw r30, r27
    blt lbl_801D05DC
    lwz r3, 0x0(r29)
    addi r0, r31, 0x80
    stw r0, 0x64(r1)
    addi r4, r1, 0x64
    addi r0, r3, 0x18
    addi r3, r1, 0x60
    stw r0, 0x60(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D06B4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D06AC
    lwz r27, 0x4(r3)
    b lbl_801D06B8
lbl_801D06AC:
    li r27, 0x0
    b lbl_801D06B8
lbl_801D06B4:
    li r27, 0x0
lbl_801D06B8:
    addi r28, r31, 0x80
    li r30, 0x0
    b lbl_801D074C
lbl_801D06C4:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x58
    stw r28, 0x58(r1)
    addi r3, r1, 0x5c
    addi r0, r5, 0x18
    stw r0, 0x5c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0728
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0720
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0718
    add r3, r3, r0
    b lbl_801D072C
lbl_801D0718:
    li r3, 0x0
    b lbl_801D072C
lbl_801D0720:
    li r3, 0x0
    b lbl_801D072C
lbl_801D0728:
    li r3, 0x0
lbl_801D072C:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0748
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0748:
    addi r30, r30, 0x1
lbl_801D074C:
    cmplw r30, r27
    blt lbl_801D06C4
    lwz r3, 0x0(r29)
    addi r0, r31, 0xa0
    stw r0, 0x54(r1)
    addi r4, r1, 0x54
    addi r0, r3, 0x18
    addi r3, r1, 0x50
    stw r0, 0x50(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D079C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0794
    lwz r27, 0x4(r3)
    b lbl_801D07A0
lbl_801D0794:
    li r27, 0x0
    b lbl_801D07A0
lbl_801D079C:
    li r27, 0x0
lbl_801D07A0:
    addi r28, r31, 0xa0
    li r30, 0x0
    b lbl_801D0834
lbl_801D07AC:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x48
    stw r28, 0x48(r1)
    addi r3, r1, 0x4c
    addi r0, r5, 0x18
    stw r0, 0x4c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0810
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0808
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0800
    add r3, r3, r0
    b lbl_801D0814
lbl_801D0800:
    li r3, 0x0
    b lbl_801D0814
lbl_801D0808:
    li r3, 0x0
    b lbl_801D0814
lbl_801D0810:
    li r3, 0x0
lbl_801D0814:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0830
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0830:
    addi r30, r30, 0x1
lbl_801D0834:
    cmplw r30, r27
    blt lbl_801D07AC
    lwz r3, 0x0(r29)
    addi r0, r31, 0xc0
    stw r0, 0x44(r1)
    addi r4, r1, 0x44
    addi r0, r3, 0x18
    addi r3, r1, 0x40
    stw r0, 0x40(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0884
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D087C
    lwz r27, 0x4(r3)
    b lbl_801D0888
lbl_801D087C:
    li r27, 0x0
    b lbl_801D0888
lbl_801D0884:
    li r27, 0x0
lbl_801D0888:
    addi r28, r31, 0xc0
    li r30, 0x0
    b lbl_801D091C
lbl_801D0894:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x38
    stw r28, 0x38(r1)
    addi r3, r1, 0x3c
    addi r0, r5, 0x18
    stw r0, 0x3c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D08F8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D08F0
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D08E8
    add r3, r3, r0
    b lbl_801D08FC
lbl_801D08E8:
    li r3, 0x0
    b lbl_801D08FC
lbl_801D08F0:
    li r3, 0x0
    b lbl_801D08FC
lbl_801D08F8:
    li r3, 0x0
lbl_801D08FC:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0918
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0918:
    addi r30, r30, 0x1
lbl_801D091C:
    cmplw r30, r27
    blt lbl_801D0894
    lwz r3, 0x0(r29)
    addi r0, r31, 0xe0
    stw r0, 0x34(r1)
    addi r4, r1, 0x34
    addi r0, r3, 0x18
    addi r3, r1, 0x30
    stw r0, 0x30(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D096C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0964
    lwz r27, 0x4(r3)
    b lbl_801D0970
lbl_801D0964:
    li r27, 0x0
    b lbl_801D0970
lbl_801D096C:
    li r27, 0x0
lbl_801D0970:
    addi r28, r31, 0xe0
    li r30, 0x0
    b lbl_801D0A04
lbl_801D097C:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x28
    stw r28, 0x28(r1)
    addi r3, r1, 0x2c
    addi r0, r5, 0x18
    stw r0, 0x2c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D09E0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D09D8
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D09D0
    add r3, r3, r0
    b lbl_801D09E4
lbl_801D09D0:
    li r3, 0x0
    b lbl_801D09E4
lbl_801D09D8:
    li r3, 0x0
    b lbl_801D09E4
lbl_801D09E0:
    li r3, 0x0
lbl_801D09E4:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0A00
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0A00:
    addi r30, r30, 0x1
lbl_801D0A04:
    cmplw r30, r27
    blt lbl_801D097C
    lwz r3, 0x0(r29)
    addi r0, r31, 0x100
    stw r0, 0x24(r1)
    addi r4, r1, 0x24
    addi r0, r3, 0x18
    addi r3, r1, 0x20
    stw r0, 0x20(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0A54
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0A4C
    lwz r27, 0x4(r3)
    b lbl_801D0A58
lbl_801D0A4C:
    li r27, 0x0
    b lbl_801D0A58
lbl_801D0A54:
    li r27, 0x0
lbl_801D0A58:
    addi r28, r31, 0x100
    li r30, 0x0
    b lbl_801D0AEC
lbl_801D0A64:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x18
    stw r28, 0x18(r1)
    addi r3, r1, 0x1c
    addi r0, r5, 0x18
    stw r0, 0x1c(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0AC8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0AC0
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0AB8
    add r3, r3, r0
    b lbl_801D0ACC
lbl_801D0AB8:
    li r3, 0x0
    b lbl_801D0ACC
lbl_801D0AC0:
    li r3, 0x0
    b lbl_801D0ACC
lbl_801D0AC8:
    li r3, 0x0
lbl_801D0ACC:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x4
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0AE8
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0AE8:
    addi r30, r30, 0x1
lbl_801D0AEC:
    cmplw r30, r27
    blt lbl_801D0A64
    lwz r3, 0x0(r29)
    addi r0, r31, 0x120
    stw r0, 0x14(r1)
    addi r4, r1, 0x14
    addi r0, r3, 0x18
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0B3C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0B34
    lwz r27, 0x4(r3)
    b lbl_801D0B40
lbl_801D0B34:
    li r27, 0x0
    b lbl_801D0B40
lbl_801D0B3C:
    li r27, 0x0
lbl_801D0B40:
    addi r31, r31, 0x120
    li r30, 0x0
    b lbl_801D0BD4
lbl_801D0B4C:
    lwz r5, 0x0(r29)
    addi r4, r1, 0x8
    stw r31, 0x8(r1)
    addi r3, r1, 0xc
    addi r0, r5, 0x18
    stw r0, 0xc(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D0BB0
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D0BA8
    addi r0, r30, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D0BA0
    add r3, r3, r0
    b lbl_801D0BB4
lbl_801D0BA0:
    li r3, 0x0
    b lbl_801D0BB4
lbl_801D0BA8:
    li r3, 0x0
    b lbl_801D0BB4
lbl_801D0BB0:
    li r3, 0x0
lbl_801D0BB4:
    lwz r3, 0x8(r3)
    subi r0, r3, 0x5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_801D0BD0
    li r3, 0x0
    b lbl_801D0BE0
lbl_801D0BD0:
    addi r30, r30, 0x1
lbl_801D0BD4:
    cmplw r30, r27
    blt lbl_801D0B4C
    li r3, 0x1
lbl_801D0BE0:
    addi r11, r1, 0xd0
    bl _restgpr_27
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

