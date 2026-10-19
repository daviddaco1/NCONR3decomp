#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_layout.cpp
// Total functions: 13

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80341E28[];
extern "C" u8 lbl_80341E2C[];
extern "C" u8 lbl_8037C848[];
extern "C" u8 lbl_80462438[];
extern "C" u8 lbl_80462450[];

// Forward declarations
extern "C" void Animate__Q36nw4hbm3lyt6LayoutFUl();
extern "C" void AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane();
extern "C" void BindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform();
extern "C" void Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor();
extern "C" void CalculateMtx__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void Draw__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv();
extern "C" void SetAnimationEnable__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransformb();
extern "C" void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader();
extern "C" void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl();
extern "C" void UnbindAllAnimation__Q36nw4hbm3lyt6LayoutFv();
extern "C" void UnbindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform();
extern "C" void __dt__Q36nw4hbm3lyt6LayoutFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _savegpr_14();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void dtor_80136CFC();
extern "C" void fn_802F218C();
extern "C" void fn_802F3E28();
extern "C" void fn_802F3FDC();
extern "C" void fn_802F40A4();
extern "C" void fn_802F4154();
extern "C" void fn_802F42F4();
extern "C" void fn_802F4768();
extern "C" void fn_802F4BE0();
extern "C" void fn_802FF21C();
extern "C" void fn_802FF2A0();
extern "C" void fn_802FF2E8();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();

// ----------------------------------------------------------------------------
// fn_802F4154
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F4154() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r12, 0x0(r3)
    lis r26, lbl_80462450@ha
    mr r27, r3
    mr r24, r4
    lwz r12, 0xc(r12)
    addi r26, r26, lbl_80462450@l
    mtctr r12
    bctrl
    b lbl_802F41A0
lbl_802F418C:
    cmplw r3, r26
    bne lbl_802F419C
    li r0, 0x1
    b lbl_802F41AC
lbl_802F419C:
    lwz r3, 0x0(r3)
lbl_802F41A0:
    cmpwi r3, 0x0
    bne lbl_802F418C
    li r0, 0x0
lbl_802F41AC:
    cmpwi r0, 0x0
    beq lbl_802F41BC
    mr r3, r27
    b lbl_802F41C0
lbl_802F41BC:
    li r3, 0x0
lbl_802F41C0:
    cmpwi r3, 0x0
    beq lbl_802F41CC
    stw r24, 0xf4(r3)
lbl_802F41CC:
    lis r25, lbl_80462450@ha
    lwz r31, 0x14(r27)
    addi r28, r27, 0x14
    addi r25, r25, lbl_80462450@l
    b lbl_802F42D4
lbl_802F41E0:
    subi r26, r31, 0x4
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802F4210
lbl_802F41FC:
    cmplw r3, r25
    bne lbl_802F420C
    li r0, 0x1
    b lbl_802F421C
lbl_802F420C:
    lwz r3, 0x0(r3)
lbl_802F4210:
    cmpwi r3, 0x0
    bne lbl_802F41FC
    li r0, 0x0
lbl_802F421C:
    cmpwi r0, 0x0
    beq lbl_802F422C
    mr r3, r26
    b lbl_802F4230
lbl_802F422C:
    li r3, 0x0
lbl_802F4230:
    cmpwi r3, 0x0
    beq lbl_802F423C
    stw r24, 0xf4(r3)
lbl_802F423C:
    lwz r30, 0x14(r26)
    addi r27, r26, 0x14
    b lbl_802F42C8
lbl_802F4248:
    subi r26, r30, 0x4
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802F4278
lbl_802F4264:
    cmplw r3, r25
    bne lbl_802F4274
    li r0, 0x1
    b lbl_802F4284
lbl_802F4274:
    lwz r3, 0x0(r3)
lbl_802F4278:
    cmpwi r3, 0x0
    bne lbl_802F4264
    li r0, 0x0
lbl_802F4284:
    cmpwi r0, 0x0
    beq lbl_802F4294
    mr r3, r26
    b lbl_802F4298
lbl_802F4294:
    li r3, 0x0
lbl_802F4298:
    cmpwi r3, 0x0
    beq lbl_802F42A4
    stw r24, 0xf4(r3)
lbl_802F42A4:
    lwzu r29, 0x14(r26)
    b lbl_802F42BC
lbl_802F42AC:
    mr r4, r24
    subi r3, r29, 0x4
    bl fn_802F4154
    lwz r29, 0x0(r29)
lbl_802F42BC:
    cmplw r29, r26
    bne lbl_802F42AC
    lwz r30, 0x0(r30)
lbl_802F42C8:
    cmplw r30, r27
    bne lbl_802F4248
    lwz r31, 0x0(r31)
lbl_802F42D4:
    cmplw r31, r28
    bne lbl_802F41E0
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802F42F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F42F4() {
    nofralloc
    li r0, 0x0
    lis r4, lbl_80341E28@ha
    lfs f0, lbl_80341E28@l(r4)
    lis r4, lbl_8037C848@ha
    addi r4, r4, lbl_8037C848@l
    stw r0, 0x8(r3)
    addi r5, r3, 0x8
    stw r0, 0xc(r3)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    stb r0, 0x20(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q36nw4hbm3lyt6LayoutFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q36nw4hbm3lyt6LayoutFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    beq lbl_802F4448
    lwz r0, 0x14(r3)
    lis r4, lbl_8037C848@ha
    addi r4, r4, lbl_8037C848@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beq lbl_802F4394
    mr r3, r0
    li r4, -0x1
    bl fn_802F3FDC
    lis r3, lbl_80462438@ha
    lwz r4, 0x14(r26)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802F4394:
    lwz r3, 0x10(r26)
    cmpwi r3, 0x0
    beq lbl_802F43D0
    lbz r0, 0xd0(r3)
    cmpwi r0, 0x0
    bne lbl_802F43D0
    lwz r12, 0x0(r3)
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_80462438@ha
    lwz r4, 0x10(r26)
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
lbl_802F43D0:
    lwz r31, 0x8(r26)
    addi r30, r26, 0x8
    lis r29, lbl_80462438@ha
    b lbl_802F4420
lbl_802F43E0:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0x4
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_802FF2A0
    subi r28, r28, 0x4
    li r4, -0x1
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_80462438@l(r29)
    mr r4, r28
    bl fn_8030CB00
lbl_802F4420:
    cmplw r31, r30
    bne lbl_802F43E0
    addic. r3, r26, 0x4
    beq lbl_802F4438
    li r4, 0x0
    bl fn_802FF21C
lbl_802F4438:
    cmpwi r27, 0x0
    ble lbl_802F4448
    mr r3, r26
    bl dtor_80136CFC
lbl_802F4448:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
// ----------------------------------------------------------------------------
extern "C" asm void Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    mr r31, r4
    lis r4, 0x524c
    mr r30, r3
    mr r14, r5
    addi r4, r4, 0x5954
    mr r3, r31
    bl TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
    cmpwi r3, 0x0
    bne lbl_802F44A4
    li r3, 0x0
    b lbl_802F4750
lbl_802F44A4:
    li r22, 0x0
    lhz r0, 0xc(r31)
    lis r27, 0x7061
    stw r14, 0x14(r1)
    add r16, r31, r0
    li r20, 0x0
    stw r22, 0x8(r1)
    addi r23, r27, 0x6531
    li r19, 0x0
    li r18, 0x0
    stw r22, 0xc(r1)
    li r17, 0x0
    li r15, 0x0
    lis r28, 0x7478
    stw r22, 0x10(r1)
    lis r25, 0x626e
    lis r29, lbl_80462438@ha
    lis r14, 0x6c79
    lis r26, 0x6772
    lis r24, 0x666e
    b lbl_802F4740
lbl_802F44F8:
    lwz r3, 0x0(r16)
    cmpw r3, r23
    beq lbl_802F4670
    bge lbl_802F457C
    addi r0, r26, 0x7031
    cmpw r3, r0
    beq lbl_802F467C
    bge lbl_802F4548
    addi r0, r24, 0x6c31
    cmpw r3, r0
    beq lbl_802F4614
    bge lbl_802F4538
    addi r0, r25, 0x6431
    cmpw r3, r0
    beq lbl_802F4624
    b lbl_802F4734
lbl_802F4538:
    addi r0, r26, 0x6531
    cmpw r3, r0
    beq lbl_802F4730
    b lbl_802F4734
lbl_802F4548:
    addi r0, r14, 0x7431
    cmpw r3, r0
    beq lbl_802F45E4
    bge lbl_802F4568
    addi r0, r26, 0x7331
    cmpw r3, r0
    beq lbl_802F4728
    b lbl_802F4734
lbl_802F4568:
    lis r4, 0x6d61
    addi r0, r4, 0x7431
    cmpw r3, r0
    beq lbl_802F461C
    b lbl_802F4734
lbl_802F457C:
    addi r0, r28, 0x6c31
    cmpw r3, r0
    beq lbl_802F460C
    bge lbl_802F45C0
    addi r0, r27, 0x7331
    cmpw r3, r0
    beq lbl_802F4668
    bge lbl_802F45AC
    addi r0, r27, 0x6e31
    cmpw r3, r0
    beq lbl_802F4624
    b lbl_802F4734
lbl_802F45AC:
    lis r4, 0x7069
    addi r0, r4, 0x6331
    cmpw r3, r0
    beq lbl_802F4624
    b lbl_802F4734
lbl_802F45C0:
    lis r4, 0x776e
    addi r0, r4, 0x6431
    cmpw r3, r0
    beq lbl_802F4624
    bge lbl_802F4734
    addi r0, r28, 0x7431
    cmpw r3, r0
    beq lbl_802F4624
    b lbl_802F4734
lbl_802F45E4:
    lbz r3, 0x8(r16)
    lfs f1, 0xc(r16)
    neg r0, r3
    lfs f0, 0x10(r16)
    or r0, r0, r3
    stfs f1, 0x18(r30)
    srwi r0, r0, 31
    stb r0, 0x20(r30)
    stfs f0, 0x1c(r30)
    b lbl_802F4734
lbl_802F460C:
    stw r16, 0x8(r1)
    b lbl_802F4734
lbl_802F4614:
    stw r16, 0xc(r1)
    b lbl_802F4734
lbl_802F461C:
    stw r16, 0x10(r1)
    b lbl_802F4734
lbl_802F4624:
    mr r4, r16
    addi r5, r1, 0x8
    bl fn_802F4BE0
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_802F4734
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_802F464C
    stw r3, 0x10(r30)
lbl_802F464C:
    cmpwi r20, 0x0
    beq lbl_802F4660
    mr r3, r20
    mr r4, r21
    bl AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane
lbl_802F4660:
    mr r19, r21
    b lbl_802F4734
lbl_802F4668:
    mr r20, r19
    b lbl_802F4734
lbl_802F4670:
    mr r19, r20
    lwz r20, 0xc(r20)
    b lbl_802F4734
lbl_802F467C:
    cmpwi r18, 0x0
    bne lbl_802F46C8
    lwz r3, lbl_80462438@l(r29)
    li r18, 0x1
    li r4, 0xc
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F46BC
    beq lbl_802F46C0
    stw r22, 0x4(r3)
    addi r4, r3, 0x4
    stw r22, 0x8(r3)
    stw r22, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    b lbl_802F46C0
lbl_802F46BC:
    li r3, 0x0
lbl_802F46C0:
    stw r3, 0x14(r30)
    b lbl_802F4734
lbl_802F46C8:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_802F4734
    cmpwi r17, 0x1
    bne lbl_802F4734
    lwz r21, 0x10(r30)
    li r4, 0x2c
    lwz r3, lbl_80462438@l(r29)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4710
    mr r4, r3
    beq lbl_802F4714
    mr r4, r16
    mr r5, r21
    bl fn_802F3E28
    mr r4, r3
    b lbl_802F4714
lbl_802F4710:
    li r4, 0x0
lbl_802F4714:
    cmpwi r4, 0x0
    beq lbl_802F4734
    lwz r3, 0x14(r30)
    bl fn_802F40A4
    b lbl_802F4734
lbl_802F4728:
    addi r17, r17, 0x1
    b lbl_802F4734
lbl_802F4730:
    subi r17, r17, 0x1
lbl_802F4734:
    lwz r0, 0x4(r16)
    addi r15, r15, 0x1
    add r16, r16, r0
lbl_802F4740:
    lhz r0, 0xe(r31)
    cmpw r15, r0
    blt lbl_802F44F8
    li r3, 0x1
lbl_802F4750:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_802F4768
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F4768() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r30, r4
    mr r25, r3
    mr r26, r5
    mr r3, r30
    bl TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
    cmpwi r3, 0x0
    bne lbl_802F47A0
    li r3, 0x0
    b lbl_802F48D8
lbl_802F47A0:
    lhz r0, 0xc(r30)
    lis r3, 0x7061
    addi r31, r3, 0x6931
    li r28, 0x0
    add r29, r30, r0
    li r27, 0x0
    lis r23, 0x524c
    lis r24, lbl_80462438@ha
    b lbl_802F48C8
lbl_802F47C4:
    lwz r0, 0x0(r29)
    cmpw r0, r31
    beq lbl_802F47D4
    b lbl_802F48BC
lbl_802F47D4:
    lwz r3, 0x0(r30)
    addi r0, r23, 0x5450
    cmpw r3, r0
    beq lbl_802F4848
    bge lbl_802F4818
    addi r0, r23, 0x4d43
    cmpw r3, r0
    beq lbl_802F4848
    bge lbl_802F4808
    addi r0, r23, 0x414e
    cmpw r3, r0
    beq lbl_802F4848
    b lbl_802F489C
lbl_802F4808:
    addi r0, r23, 0x5041
    cmpw r3, r0
    beq lbl_802F4848
    b lbl_802F489C
lbl_802F4818:
    addi r0, r23, 0x5643
    cmpw r3, r0
    beq lbl_802F4848
    bge lbl_802F4838
    addi r0, r23, 0x5453
    cmpw r3, r0
    beq lbl_802F4848
    b lbl_802F489C
lbl_802F4838:
    addi r0, r23, 0x5649
    cmpw r3, r0
    beq lbl_802F4848
    b lbl_802F489C
lbl_802F4848:
    lwz r3, lbl_80462438@l(r24)
    li r4, 0x20
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4870
    mr r22, r3
    beq lbl_802F4874
    bl fn_802F218C
    mr r22, r3
    b lbl_802F4874
lbl_802F4870:
    li r22, 0x0
lbl_802F4874:
    cmpwi r22, 0x0
    beq lbl_802F489C
    lwz r12, 0x0(r22)
    mr r3, r22
    mr r4, r29
    mr r5, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r28, r22
lbl_802F489C:
    cmpwi r28, 0x0
    beq lbl_802F48BC
    addi r0, r25, 0x8
    addi r3, r25, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r28, 0x4
    bl fn_802FF2E8
lbl_802F48BC:
    lwz r0, 0x4(r29)
    addi r27, r27, 0x1
    add r29, r29, r0
lbl_802F48C8:
    lhz r0, 0xe(r30)
    cmpw r27, r0
    blt lbl_802F47C4
    mr r3, r28
lbl_802F48D8:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// BindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void BindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r5, 0x1
    lwz r12, 0x44(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// UnbindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAnimation__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransform() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r5, 0x1
    lwz r12, 0x48(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// UnbindAllAnimation__Q36nw4hbm3lyt6LayoutFv
// ----------------------------------------------------------------------------
extern "C" asm void UnbindAllAnimation__Q36nw4hbm3lyt6LayoutFv() {
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x18(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// SetAnimationEnable__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransformb
// ----------------------------------------------------------------------------
extern "C" asm void SetAnimationEnable__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm3lyt13AnimTransformb() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    li r6, 0x1
    lwz r12, 0x58(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// CalculateMtx__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void CalculateMtx__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// Draw__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void Draw__Q36nw4hbm3lyt6LayoutFRCQ36nw4hbm3lyt8DrawInfo() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// Animate__Q36nw4hbm3lyt6LayoutFUl
// ----------------------------------------------------------------------------
extern "C" asm void Animate__Q36nw4hbm3lyt6LayoutFUl() {
    nofralloc
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beqlr
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv() {
    nofralloc
    lbz r0, 0x20(r4)
    cmplwi r0, 0x1
    bne lbl_802F4A18
    lfs f4, 0x1c(r4)
    lis r5, lbl_80341E2C@ha
    lfs f1, 0x18(r4)
    fneg f3, f4
    lfs f2, lbl_80341E2C@l(r5)
    fneg f0, f1
    fmuls f5, f1, f2
    fmuls f3, f3, f2
    fmuls f1, f4, f2
    fmuls f0, f0, f2
    stfs f5, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x0(r3)
    stfs f3, 0xc(r3)
    blr
lbl_802F4A18:
    lis r5, lbl_80341E28@ha
    lfs f2, 0x1c(r4)
    lfs f0, lbl_80341E28@l(r5)
    lfs f1, 0x18(r4)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f2, 0xc(r3)
    blr
}

