#include "types.h"

// Translation unit: src/glib_physics.cpp
// Total functions: 19

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803492A0[];
extern "C" u8 lbl_803492C4[];
extern "C" u8 lbl_803492D0[];
extern "C" u8 lbl_803492E8[];
extern "C" u8 lbl_803492FC[];
extern "C" u8 lbl_80349348[];
extern "C" u8 lbl_8034935C[];
extern "C" u8 lbl_80349380[];
extern "C" u8 lbl_80349390[];
extern "C" u8 lbl_803493A8[];
extern "C" u8 lbl_803493BC[];
extern "C" u8 lbl_80349408[];
extern "C" u8 lbl_8034941C[];
extern "C" u8 lbl_80349450[];
extern "C" u8 lbl_80349468[];

// Forward declarations
extern "C" void _restgpr_29();
extern "C" void _savegpr_29();
extern "C" void fn_80018B90();
extern "C" void fn_80018B94();
extern "C" void fn_80028EBC();
extern "C" void fn_8002AE08();
extern "C" void fn_8002AE3C();
extern "C" void fn_8002AF5C();
extern "C" void fn_8003D58C();
extern "C" void fn_8003D594();
extern "C" void fn_8003D598();
extern "C" void fn_80047C40();
extern "C" void fn_80047C8C();
extern "C" void fn_80047CBC();
extern "C" void fn_80047D0C();
extern "C" void fn_80047D80();
extern "C" void fn_80047DF4();
extern "C" void fn_80047E74();
extern "C" void fn_80047F10();
extern "C" void fn_80047F24();
extern "C" void fn_80047FAC();
extern "C" void fn_80048194();
extern "C" void fn_8004837C();
extern "C" void fn_8004838C();
extern "C" void fn_8004839C();
extern "C" void fn_800483EC();
extern "C" void fn_8004841C();
extern "C" void fn_8004846C();
extern "C" void fn_800484BC();
extern "C" void fn_800484FC();
extern "C" void fn_801A9384();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void PSMTXQuat();
extern "C" void C_QUATMtx();

// ----------------------------------------------------------------------------
// fn_80047C40
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047C40() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_8002AF5C
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_80018B94
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80047C8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047C8C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028EBC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80047CBC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047CBC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80047CF4
    lis r3, lbl_803492C4@ha
    addi r3, r3, lbl_803492C4@l
    li r4, 0x233
    lis r5, lbl_803492A0@ha
    addi r5, r5, lbl_803492A0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80047CF4:
    addi r3, r31, 0x34
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80047D0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047D0C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8004837C
    cmpwi r3, 0x0
    beq lbl_80047D4C
    cmpwi r31, 0x0
    beq lbl_80047D4C
    lwz r3, 0x18(r30)
    mr r4, r31
    bl fn_80047FAC
    b lbl_80047D68
lbl_80047D4C:
    lis r3, lbl_80349468@ha
    addi r3, r3, lbl_80349468@l
    li r4, 0xca
    addi r5, r3, 0x74
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047D68:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80047D80
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047D80() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8004838C
    cmpwi r3, 0x0
    beq lbl_80047DC0
    cmpwi r31, 0x0
    beq lbl_80047DC0
    lwz r3, 0x1c(r30)
    mr r4, r31
    bl fn_80048194
    b lbl_80047DDC
lbl_80047DC0:
    lis r3, lbl_80349468@ha
    addi r3, r3, lbl_80349468@l
    li r4, 0xdd
    addi r5, r3, 0x74
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047DDC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80047DF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047DF4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    lwz r3, 0x18(r3)
    addi r4, r1, 0x8
    bl fn_80047F24
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80047E58
    addi r3, r3, 0x94
    mr r4, r30
    bl fn_800484BC
    lfs f0, 0xc(r30)
    stfs f0, 0xa4(r31)
    lfs f0, 0x1c(r30)
    stfs f0, 0xa8(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0xac(r31)
    li r3, 0x1
    b lbl_80047E5C
lbl_80047E58:
    li r3, 0x0
lbl_80047E5C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80047E74
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047E74() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    lwz r3, 0x18(r3)
    addi r4, r1, 0x8
    bl fn_80047F24
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80047EF4
    li r4, 0x2
    bl fn_80047F10
    cmpwi r3, 0x0
    beq lbl_80047ECC
    mr r3, r30
    addi r4, r31, 0x94
    bl fn_800484FC
    b lbl_80047ED4
lbl_80047ECC:
    mr r3, r30
    bl fn_8002AE08
lbl_80047ED4:
    lfs f0, 0xa4(r31)
    stfs f0, 0xc(r30)
    lfs f0, 0xa8(r31)
    stfs f0, 0x1c(r30)
    lfs f0, 0xac(r31)
    stfs f0, 0x2c(r30)
    li r3, 0x1
    b lbl_80047EF8
lbl_80047EF4:
    li r3, 0x0
lbl_80047EF8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80047F10
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047F10() {
    nofralloc
    lwz r0, 0x0(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80047F24
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047F24() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80047F70
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_80047F94
lbl_80047F70:
    lis r3, lbl_80349450@ha
    addi r3, r3, lbl_80349450@l
    li r4, 0x1e1
    lis r5, lbl_8034941C@ha
    addi r5, r5, lbl_8034941C@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80047F94:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80047FAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047FAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8004815C
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8004815C
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_8004803C
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8004803C
    li r10, 0x0
lbl_8004803C:
    cmpwi r10, 0x0
    bne lbl_80048058
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80048058
    li r9, 0x0
lbl_80048058:
    cmpwi r9, 0x0
    bne lbl_80048070
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80048070
    li r8, 0x0
lbl_80048070:
    cmpwi r8, 0x0
    bne lbl_8004808C
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8004808C
    li r7, 0x0
lbl_8004808C:
    cmpwi r7, 0x0
    bne lbl_800480A8
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800480A8
    li r5, 0x0
lbl_800480A8:
    cmpwi r5, 0x0
    bne lbl_800480C4
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800480C4
    li r4, 0x0
lbl_800480C4:
    cmpwi r4, 0x0
    bne lbl_800480E8
    lis r3, lbl_80349408@ha
    addi r3, r3, lbl_80349408@l
    li r4, 0x1c3
    lis r5, lbl_803493BC@ha
    addi r5, r5, lbl_803493BC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800480E8:
    addi r3, r30, 0x18
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8004839C
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_8003D598
    mr r3, r30
    bl fn_8003D58C
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8003D594
    li r4, 0x0
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0xc(r30)
    subi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x1
    b lbl_8004817C
lbl_8004815C:
    lis r3, lbl_803493A8@ha
    addi r3, r3, lbl_803493A8@l
    li r4, 0x1d6
    lis r5, lbl_80349390@ha
    addi r5, r5, lbl_80349390@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8004817C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80048194
// ----------------------------------------------------------------------------
extern "C" asm void fn_80048194() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80048344
    lhz r4, 0x2(r4)
    lwz r12, 0x8(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80048344
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80048224
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80048224
    li r10, 0x0
lbl_80048224:
    cmpwi r10, 0x0
    bne lbl_80048240
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80048240
    li r9, 0x0
lbl_80048240:
    cmpwi r9, 0x0
    bne lbl_80048258
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80048258
    li r8, 0x0
lbl_80048258:
    cmpwi r8, 0x0
    bne lbl_80048274
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80048274
    li r7, 0x0
lbl_80048274:
    cmpwi r7, 0x0
    bne lbl_80048290
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80048290
    li r5, 0x0
lbl_80048290:
    cmpwi r5, 0x0
    bne lbl_800482AC
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800482AC
    li r4, 0x0
lbl_800482AC:
    cmpwi r4, 0x0
    bne lbl_800482D0
    lis r3, lbl_80349348@ha
    addi r3, r3, lbl_80349348@l
    li r4, 0x1c3
    lis r5, lbl_803492FC@ha
    addi r5, r5, lbl_803492FC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_800482D0:
    addi r3, r30, 0x18
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8004846C
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_8003D598
    mr r3, r30
    bl fn_8003D58C
    lwz r4, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_8003D594
    li r4, 0x0
    lwz r3, 0x10(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0xc(r30)
    subi r0, r3, 0x1
    stw r0, 0xc(r30)
    li r3, 0x1
    b lbl_80048364
lbl_80048344:
    lis r3, lbl_803492E8@ha
    addi r3, r3, lbl_803492E8@l
    li r4, 0x1d6
    lis r5, lbl_803492D0@ha
    addi r5, r5, lbl_803492D0@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80048364:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004837C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004837C() {
    nofralloc
    lwz r3, 0x18(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8004838C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004838C() {
    nofralloc
    lwz r3, 0x1c(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8004839C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004839C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8004841C
    mr r4, r3
    mr r3, r31
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_800483EC
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800483EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800483EC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80028EBC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004841C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004841C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80048454
    lis r3, lbl_80349380@ha
    addi r3, r3, lbl_80349380@l
    li r4, 0x233
    lis r5, lbl_8034935C@ha
    addi r5, r5, lbl_8034935C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80048454:
    addi r3, r31, 0xe0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004846C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004846C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80047CBC
    mr r4, r3
    mr r3, r31
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80047C8C
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800484BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800484BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80018B90
    mr r4, r3
    mr r3, r31
    bl C_QUATMtx
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800484FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800484FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8002AE3C
    mr r4, r31
    bl PSMTXQuat
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

