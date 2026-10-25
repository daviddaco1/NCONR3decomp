#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_picture.cpp
// Total functions: 11

// Global data symbols (@ha/@l)
extern "C" u8 __dt__Q36nw4hbm2ut5ColorFv[];
extern "C" u8 lbl_80341E80[];
extern "C" u8 lbl_8037C988[];
extern "C" u8 lbl_80462438[];
extern "C" u8 lbl_80462440[];
extern "C" u8 lbl_80462448[];

// Forward declarations
extern "C" void Append__Q36nw4hbm3lyt7PictureFP10TPLPalette();
extern "C" void Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj();
extern "C" void Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc();
extern "C" void DrawSelf__Q36nw4hbm3lyt7PictureFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void Free__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern "C" void GetRuntimeTypeInfo__Q36nw4hbm3lyt7PictureCFv();
extern "C" void GetVtxColorElement__Q36nw4hbm3lyt7PictureCFUl();
extern "C" void InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl();
extern "C" void IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc();
extern "C" void Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void SetVertexFormat__Q36nw4hbm3lyt6detailFbUc();
extern "C" void SetVtxColorElement__Q36nw4hbm3lyt7PictureFUlUc();
extern "C" void SetVtxColor__Q36nw4hbm3lyt7PictureFUlQ36nw4hbm2ut5Color();
extern "C" void __construct_array();
extern "C" void __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet();
extern "C" void __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern "C" void __destroy_arr();
extern "C" void __dt__Q36nw4hbm3lyt4PaneFv();
extern "C" void __dt__Q36nw4hbm3lyt7PictureFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_802F3984();
extern "C" void fn_802F511C();
extern "C" void fn_802F5128();
extern "C" void fn_802F6BB0();
extern "C" void fn_802F6C28();
extern "C" void fn_802F6CB8();
extern "C" void fn_802F6E90();
extern "C" void fn_802F8124();
extern "C" void fn_802F8234();
extern "C" void fn_802F9090();
extern "C" void fn_802F955C();
extern "C" void fn_802F96CC();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();

// ----------------------------------------------------------------------------
// __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_802F8234
    lis r3, lbl_8037C988@ha
    lis r4, fn_802F511C@ha
    addi r3, r3, lbl_8037C988@l
    lis r5, __dt__Q36nw4hbm2ut5ColorFv@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xd4
    addi r4, r4, fn_802F511C@l
    addi r5, r5, __dt__Q36nw4hbm2ut5ColorFv@l
    li r6, 0x4
    li r7, 0x4
    bl __construct_array
    addi r3, r28, 0xe4
    bl __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
    lbz r0, 0x5e(r29)
    li r31, 0x8
    cmplwi r0, 0x8
    bgt lbl_802F921C
    mr r31, r0
lbl_802F921C:
    clrlwi. r4, r31, 24
    beq lbl_802F922C
    addi r3, r28, 0xe4
    bl Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
lbl_802F922C:
    lwz r6, 0x4c(r29)
    clrlwi. r5, r31, 24
    lwz r4, 0x50(r29)
    lwz r3, 0x54(r29)
    lwz r0, 0x58(r29)
    stw r6, 0xd4(r28)
    stw r4, 0xd8(r28)
    stw r3, 0xdc(r28)
    stw r0, 0xe0(r28)
    beq lbl_802F926C
    lbz r0, 0xe4(r28)
    cmpwi r0, 0x0
    beq lbl_802F926C
    addi r3, r28, 0xe4
    addi r4, r29, 0x60
    bl Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
lbl_802F926C:
    lis r3, lbl_80462438@ha
    li r4, 0x5c
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F92AC
    lhz r0, 0x5c(r29)
    lwz r5, 0x8(r30)
    slwi r0, r0, 2
    add r4, r5, r0
    lwz r0, 0xc(r4)
    add r4, r5, r0
    beq lbl_802F92A8
    mr r5, r30
    bl fn_802F5128
lbl_802F92A8:
    stw r3, 0x28(r28)
lbl_802F92AC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q36nw4hbm3lyt7PictureFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q36nw4hbm3lyt7PictureFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802F9384
    lwz r5, 0x28(r3)
    lis r4, lbl_8037C988@ha
    addi r4, r4, lbl_8037C988@l
    cmpwi r5, 0x0
    stw r4, 0x0(r3)
    beq lbl_802F9348
    lbz r0, 0x54(r5)
    cmpwi r0, 0x0
    bne lbl_802F9348
    lwz r12, 0x0(r5)
    mr r3, r5
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0x28(r30)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_802F9348:
    addi r3, r30, 0xe4
    bl Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    addi r3, r30, 0xd4
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    li r5, 0x4
    li r6, 0x4
    bl __destroy_arr
    mr r3, r30
    li r4, 0x0
    bl __dt__Q36nw4hbm3lyt4PaneFv
    cmpwi r31, 0x0
    ble lbl_802F9384
    mr r3, r30
    bl dtor_80136CFC
lbl_802F9384:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Append__Q36nw4hbm3lyt7PictureFP10TPLPalette
// ----------------------------------------------------------------------------
extern "C" asm void Append__Q36nw4hbm3lyt7PictureFP10TPLPalette() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x8
    lwz r12, 0x68(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj
// ----------------------------------------------------------------------------
extern "C" asm void Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    lwz r5, 0x28(r3)
    lwz r0, 0x50(r5)
    lwz r3, 0x4c(r5)
    srwi r28, r0, 28
    srwi r0, r3, 28
    cmplw r28, r0
    bge lbl_802F953C
    extrwi r0, r3, 4, 8
    cmplw r28, r0
    blt lbl_802F943C
    b lbl_802F953C
lbl_802F943C:
    addi r0, r28, 0x1
    mr r3, r5
    clrlwi r4, r0, 24
    bl fn_802F6C28
    lwz r3, 0x28(r31)
    mr r4, r28
    mr r5, r29
    bl fn_802F6E90
    lwz r3, 0x28(r31)
    lwz r0, 0x50(r3)
    srwi r4, r0, 28
    bl fn_802F6CB8
    li r29, 0x0
    li r30, 0x1
    li r4, 0x4
    li r0, 0x3c
    stb r29, 0xb(r1)
    lwz r3, 0x28(r31)
    stb r30, 0x8(r1)
    stb r4, 0x9(r1)
    stb r0, 0xa(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_802F6BB0
    clrlslwi r0, r28, 24, 2
    lbz r4, 0xc(r1)
    add r5, r3, r0
    lbz r0, 0xd(r1)
    stb r4, 0x0(r5)
    addi r3, r31, 0xe4
    lbz r4, 0xe(r1)
    stb r0, 0x1(r5)
    lbz r0, 0xf(r1)
    stb r4, 0x2(r5)
    stb r0, 0x3(r5)
    lwz r4, 0x28(r31)
    lwz r0, 0x50(r4)
    srwi r4, r0, 28
    bl SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc
    lis r3, lbl_80341E80@ha
    lfs f0, 0x4c(r31)
    lfs f1, lbl_80341E80@l(r3)
    fcmpu cr0, f0, f1
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    bne lbl_802F9504
    lfs f0, 0x50(r31)
    fcmpu cr0, f0, f1
    bne lbl_802F9504
    mr r29, r30
lbl_802F9504:
    cmpwi r29, 0x0
    beq lbl_802F953C
    lwz r4, 0x28(r31)
    lwz r0, 0x50(r4)
    srwi r0, r0, 28
    cmplwi r0, 0x1
    bne lbl_802F953C
    addi r3, r1, 0x10
    li r5, 0x0
    bl fn_802F8124
    lfs f0, 0x10(r1)
    stfs f0, 0x4c(r31)
    lfs f0, 0x14(r1)
    stfs f0, 0x50(r31)
lbl_802F953C:
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
// fn_802F955C
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F955C() {
    nofralloc
    slwi r0, r5, 2
    add r7, r4, r0
    lbz r6, 0xd4(r7)
    lbz r5, 0xd5(r7)
    lbz r4, 0xd6(r7)
    lbz r0, 0xd7(r7)
    stb r6, 0x0(r3)
    stb r5, 0x1(r3)
    stb r4, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColor__Q36nw4hbm3lyt7PictureFUlQ36nw4hbm2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColor__Q36nw4hbm3lyt7PictureFUlQ36nw4hbm2ut5Color() {
    nofralloc
    slwi r0, r4, 2
    lbz r6, 0x0(r5)
    add r4, r3, r0
    lbz r0, 0x1(r5)
    stb r6, 0xd4(r4)
    lbz r3, 0x2(r5)
    stb r0, 0xd5(r4)
    lbz r0, 0x3(r5)
    stb r3, 0xd6(r4)
    stb r0, 0xd7(r4)
    blr
}

// ----------------------------------------------------------------------------
// GetVtxColorElement__Q36nw4hbm3lyt7PictureCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetVtxColorElement__Q36nw4hbm3lyt7PictureCFUl() {
    nofralloc
    clrrwi r5, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xd4(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColorElement__Q36nw4hbm3lyt7PictureFUlUc
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColorElement__Q36nw4hbm3lyt7PictureFUlUc() {
    nofralloc
    clrrwi r6, r4, 2
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xd4(r3)
    blr
}

// ----------------------------------------------------------------------------
// DrawSelf__Q36nw4hbm3lyt7PictureFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void DrawSelf__Q36nw4hbm3lyt7PictureFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_802F96A0
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    lbz r29, 0xce(r28)
    addi r3, r28, 0xd4
    mr r4, r29
    bl IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
    mr r4, r3
    lwz r3, 0x28(r28)
    mr r5, r29
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lbz r4, 0xe5(r28)
    mr r29, r3
    bl SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
    cmpwi r29, 0x0
    beq lbl_802F9668
    addi r30, r28, 0xd4
    b lbl_802F966C
lbl_802F9668:
    li r30, 0x0
lbl_802F966C:
    lwz r29, 0xe8(r28)
    mr r3, r28
    lbz r31, 0xe5(r28)
    bl fn_802F9090
    stw r4, 0xc(r1)
    mr r5, r31
    mr r6, r29
    mr r7, r30
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r28, 0x4c
    lbz r8, 0xce(r28)
    bl fn_802F3984
lbl_802F96A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q36nw4hbm3lyt7PictureCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q36nw4hbm3lyt7PictureCFv() {
    nofralloc
    lis r3, lbl_80462448@ha
    addi r3, r3, lbl_80462448@l
    blr
}

// ----------------------------------------------------------------------------
// fn_802F96CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F96CC() {
    nofralloc
    lis r4, lbl_80462440@ha
    lis r3, lbl_80462448@ha
    addi r4, r4, lbl_80462440@l
    stw r4, lbl_80462448@l(r3)
    blr
}

