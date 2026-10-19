#include "types.h"

// Translation unit: src/nw4r/lyt/unk_80201418.cpp
// Total functions: 2

// Forward declarations
extern "C" void DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color();
extern "C" void DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc();
extern "C" void MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc();
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void fn_80201510();

// ----------------------------------------------------------------------------
// DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc
// ----------------------------------------------------------------------------
extern "C" asm void DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5ColorUc() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    li r0, -0x1
    cmpwi r7, 0x0
    stw r0, 0x10(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    stw r0, 0x14(r1)
    mr r29, r6
    mr r30, r7
    mr r31, r8
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_802014D0
    mr r24, r30
    addi r23, r1, 0x10
    li r25, 0x0
lbl_8020146C:
    lbz r0, 0x0(r24)
    mr r5, r31
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stb r0, 0x8(r1)
    lbz r0, 0x1(r24)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r24)
    stb r0, 0xa(r1)
    lbz r0, 0x3(r24)
    stb r0, 0xb(r1)
    bl MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
    lbz r3, 0xc(r1)
    addi r25, r25, 0x1
    lbz r0, 0xd(r1)
    cmpwi r25, 0x4
    stb r3, 0x0(r23)
    addi r24, r24, 0x4
    lbz r3, 0xe(r1)
    stb r0, 0x1(r23)
    lbz r0, 0xf(r1)
    stb r3, 0x2(r23)
    stb r0, 0x3(r23)
    addi r23, r23, 0x4
    blt lbl_8020146C
lbl_802014D0:
    neg r3, r30
    addi r0, r1, 0x10
    or r4, r3, r30
    mr r5, r28
    srawi r7, r4, 31
    mr r3, r26
    mr r4, r27
    mr r6, r29
    and r7, r0, r7
    bl DrawQuad__Q34nw4r3lyt6detailFRCQ34nw4r4math4VEC2RCQ34nw4r3lyt4SizeUcPA4_CQ34nw4r4math4VEC2PCQ34nw4r2ut5Color
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80201510
// ----------------------------------------------------------------------------
extern "C" asm void fn_80201510() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r31, 0x10(r3)
    mr r27, r4
    mr r28, r5
    mr r29, r6
    addi r30, r3, 0x10
    b lbl_80201560
lbl_8020153C:
    lwz r3, 0x8(r31)
    mr r4, r27
    mr r5, r28
    mr r6, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    lwz r31, 0x0(r31)
lbl_80201560:
    cmplw r31, r30
    bne lbl_8020153C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

