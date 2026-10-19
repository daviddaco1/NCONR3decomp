#include "types.h"

// Translation unit: src/glib_scene.cpp
// Total functions: 66

// Small Data symbols (@sda21)
extern "C" float lbl_8049E8A0;
extern "C" float lbl_8049E8A8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80348138[];
extern "C" u8 lbl_80348178[];
extern "C" u8 lbl_803481C0[];
extern "C" u8 lbl_803481FC[];
extern "C" u8 lbl_80348210[];
extern "C" u8 lbl_8034825C[];
extern "C" u8 lbl_80348270[];
extern "C" u8 lbl_803482A8[];
extern "C" u8 lbl_803482C0[];
extern "C" u8 lbl_803482D8[];
extern "C" u8 lbl_803482EC[];
extern "C" u8 lbl_80348320[];
extern "C" u8 lbl_80348334[];
extern "C" u8 lbl_80348360[];
extern "C" u8 lbl_80348374[];
extern "C" u8 lbl_803483A0[];
extern "C" u8 lbl_803483B0[];

// Forward declarations
extern "C" void DCInvalidateRange();
extern "C" void _restgpr_20();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void _savegpr_20();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void dtor_80027B08();
extern "C" void dtor_8003868C();
extern "C" void fn_80018B24();
extern "C" void fn_80027AF8();
extern "C" void fn_80027AFC();
extern "C" void fn_80027B04();
extern "C" void fn_80027B74();
extern "C" void fn_80027B7C();
extern "C" void fn_80027B84();
extern "C" void fn_80027CAC();
extern "C" void fn_80027CCC();
extern "C" void fn_8002AB78();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002AFB4();
extern "C" void fn_8002B764();
extern "C" void fn_8002B7E8();
extern "C" void fn_8002B99C();
extern "C" void fn_8002B9A4();
extern "C" void fn_8002BA18();
extern "C" void fn_8002BCD0();
extern "C" void fn_8002BD2C();
extern "C" void fn_8002D80C();
extern "C" void fn_80032A1C();
extern "C" void fn_80032A24();
extern "C" void fn_80032A68();
extern "C" void fn_80032AD8();
extern "C" void fn_8003531C();
extern "C" void fn_800358B8();
extern "C" void fn_80035A30();
extern "C" void fn_80035A58();
extern "C" void fn_80035A80();
extern "C" void fn_80035AC0();
extern "C" void fn_80035E70();
extern "C" void fn_8003625C();
extern "C" void fn_800364C8();
extern "C" void fn_800364E0();
extern "C" void fn_80036620();
extern "C" void fn_80036774();
extern "C" void fn_80036828();
extern "C" void fn_80036878();
extern "C" void fn_800368C8();
extern "C" void fn_80036918();
extern "C" void fn_80036AD8();
extern "C" void fn_80036C7C();
extern "C" void fn_80036E30();
extern "C" void fn_80036E80();
extern "C" void fn_80036ED0();
extern "C" void fn_80036F20();
extern "C" void fn_80036F88();
extern "C" void fn_80036FD8();
extern "C" void fn_800370C4();
extern "C" void fn_8003738C();
extern "C" void fn_80037400();
extern "C" void fn_80037520();
extern "C" void fn_80037584();
extern "C" void fn_800377A8();
extern "C" void fn_800378E4();
extern "C" void fn_80037948();
extern "C" void fn_800379D4();
extern "C" void fn_80037A60();
extern "C" void fn_80037B00();
extern "C" void fn_80037B4C();
extern "C" void fn_80037BB0();
extern "C" void fn_80037BFC();
extern "C" void fn_80037DB4();
extern "C" void fn_80037E44();
extern "C" void fn_80037F7C();
extern "C" void fn_80038068();
extern "C" void fn_8003807C();
extern "C" void fn_80038084();
extern "C" void fn_800380BC();
extern "C" void fn_80038124();
extern "C" void fn_80038160();
extern "C" void fn_800381B8();
extern "C" void fn_800381CC();
extern "C" void fn_800381E0();
extern "C" void fn_800381F0();
extern "C" void fn_80038200();
extern "C" void fn_80038210();
extern "C" void fn_80038220();
extern "C" void fn_80038228();
extern "C" void fn_80038240();
extern "C" void fn_800382C8();
extern "C" void fn_80038428();
extern "C" void fn_800384F4();
extern "C" void fn_80038740();
extern "C" void fn_800388B4();
extern "C" void fn_800388B8();
extern "C" void fn_800388C4();
extern "C" void fn_800388DC();
extern "C" void fn_800388EC();
extern "C" void fn_800388F4();
extern "C" void fn_800388FC();
extern "C" void fn_80038934();
extern "C" void fn_8003899C();
extern "C" void fn_800389D8();
extern "C" void fn_800389EC();
extern "C" void fn_800389F4();
extern "C" void fn_800389F8();
extern "C" void fn_8003A194();
extern "C" void fn_8003AEBC();
extern "C" void fn_8003B0AC();
extern "C" void fn_8003B2B4();
extern "C" void fn_8003D62C();
extern "C" void fn_800425FC();
extern "C" void fn_8004267C();
extern "C" void fn_80042A14();
extern "C" void fn_80042B3C();
extern "C" void fn_80042BF0();
extern "C" void fn_8004875C();
extern "C" void fn_80048908();
extern "C" void __throw();
extern "C" void fn_801A331C();
extern "C" void fn_801A3344();
extern "C" void fn_801A9384();
extern "C" void Destroy__Q34nw4r3g3d6G3dObjFv();
extern "C" void GetRenderModeObj__Q34nw4r3g3d8G3DStateFv();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34();
extern "C" void Construct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPUlUl();
extern "C" void Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl();
extern "C" void GetCamera__Q34nw4r3g3d7ScnRootFi();
extern "C" void GetCurrentCamera__Q34nw4r3g3d7ScnRootFv();
extern "C" void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi();
extern "C" void UpdateFrame__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcWorld__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcMaterial__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcVtx__Q34nw4r3g3d7ScnRootFv();
extern "C" void CalcView__Q34nw4r3g3d7ScnRootFv();
extern "C" void GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv();
extern "C" void ZSort__Q34nw4r3g3d7ScnRootFv();
extern "C" void DrawOpa__Q34nw4r3g3d7ScnRootFv();
extern "C" void DrawXlu__Q34nw4r3g3d7ScnRootFv();
extern "C" void fn_801EE4A4();
extern "C" void fn_801F41E8();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void fn_802E151C();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXGetCullMode();
extern "C" void GXSetNumChans();
extern "C" void GXGetTexObjWidth();
extern "C" void GXGetTexObjHeight();
extern "C" void GXLoadTexObj();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void GXSetBlendMode();
extern "C" void GXSetColorUpdate();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetZMode();
extern "C" void GXSetDither();
extern "C" void GXSetDstAlpha();

// ----------------------------------------------------------------------------
// fn_8003625C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003625C() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    mr r31, r1
    mr r20, r3
    mr r21, r4
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    li r28, 0x0
    li r3, 0x0
    addi r4, r31, 0x8
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r26
    bl Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl
    li r3, 0x40
    bl fn_80027CCC
    mr r29, r3
    slwi r0, r22, 2
    add r3, r3, r0
    bl fn_80027CCC
    mr r30, r3
    slwi r0, r22, 4
    add r3, r3, r0
    bl fn_80027CCC
    mr r27, r3
    cmpwi r21, 0x0
    beq lbl_800363D8
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r21, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80036320
    clrrwi r3, r21, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80036320
    li r9, 0x0
lbl_80036320:
    cmpwi r9, 0x0
    bne lbl_8003633C
    clrrwi r3, r21, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8003633C
    li r8, 0x0
lbl_8003633C:
    cmpwi r8, 0x0
    bne lbl_80036354
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80036354
    li r7, 0x0
lbl_80036354:
    cmpwi r7, 0x0
    bne lbl_80036370
    clrrwi r3, r21, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80036370
    li r6, 0x0
lbl_80036370:
    cmpwi r6, 0x0
    bne lbl_8003638C
    clrrwi r3, r21, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_8003638C
    li r5, 0x0
lbl_8003638C:
    cmpwi r5, 0x0
    bne lbl_800363A8
    clrrwi r3, r21, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800363A8
    li r4, 0x0
lbl_800363A8:
    cmpwi r4, 0x0
    bne lbl_800363CC
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x3a
    addi r5, r3, 0xf
    mr r6, r21
    opword 0x4CC63182
    bl fn_801A9384
lbl_800363CC:
    lwz r0, 0x8(r31)
    add r0, r27, r0
    stw r0, 0x0(r21)
lbl_800363D8:
    cmpwi r20, 0x0
    beq lbl_800364A4
    mr r3, r20
    mr r4, r27
    bl fn_80027B04
    mr r21, r3
    clrlwi r0, r21, 30
    cmpwi r0, 0x0
    beq lbl_80036414
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x45
    addi r5, r3, 0x43
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036414:
    cmpwi r21, 0x0
    bne lbl_80036424
    li r3, 0x0
    b lbl_800364A8
lbl_80036424:
    mr r3, r20
    li r4, 0x0
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r26
    bl Construct__Q34nw4r3g3d7ScnRootFP12MEMAllocatorPUlUlUlUlUl
    mr r24, r3
    add r25, r21, r29
    add r26, r21, r30
    li r3, 0x40
    mr r4, r21
    bl fn_80027AFC
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_800364A4
    stw r1, 0x24(r31)
    mr r4, r20
    mr r5, r24
    mr r6, r25
    mr r7, r26
    mr r8, r22
    mr r9, r23
    bl fn_80037BFC
    b lbl_800364A4
    mr r3, r28
    mr r4, r21
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_800364A4:
    mr r3, r28
lbl_800364A8:
    mr r10, r31
    addi r11, r10, 0x60
    bl _restgpr_20
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_800364C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800364C8() {
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800364E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800364E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    mr r30, r4
    lwz r3, 0x18(r3)
    bl fn_80032A24
    li r31, 0x0
    b lbl_80036598
lbl_8003650C:
    clrlwi r0, r31, 16
    slwi r28, r0, 2
    lwz r3, 0xc(r29)
    lwzx r3, r3, r28
    cmpwi r3, 0x0
    beq lbl_80036594
    bl fn_80032AD8
    cmpwi r3, 0x0
    beq lbl_80036594
    cmpwi r30, 0x0
    beq lbl_80036584
    lwz r5, 0x1c(r29)
    clrlwi r0, r31, 16
    slwi r0, r0, 4
    add r3, r5, r0
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80036594
    lwz r4, 0x4(r3)
    lhz r0, 0x20(r29)
    slwi r0, r0, 4
    add r3, r5, r0
    lwz r0, 0x4(r3)
    cmpw r4, r0
    bne lbl_80036594
    lwz r3, 0x18(r29)
    lwz r4, 0xc(r29)
    lwzx r4, r4, r28
    bl fn_80038228
    b lbl_80036594
lbl_80036584:
    lwz r3, 0x18(r29)
    lwz r4, 0xc(r29)
    lwzx r4, r4, r28
    bl fn_80038228
lbl_80036594:
    addi r31, r31, 0x1
lbl_80036598:
    clrlwi r3, r31, 16
    lwz r0, 0x10(r29)
    cmplw r3, r0
    blt lbl_8003650C
    cmpwi r30, 0x0
    beq lbl_80036608
    mr r3, r29
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_80036608
    lwz r3, 0x30(r29)
    li r4, 0x1
    bl fn_80038068
    cmpwi r3, 0x0
    beq lbl_80036608
    lwz r3, 0xc(r29)
    lhz r0, 0x34(r29)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl fn_80032AD8
    cmpwi r3, 0x0
    beq lbl_80036608
    lwz r3, 0x18(r29)
    lwz r4, 0xc(r29)
    lhz r0, 0x34(r29)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_80038228
lbl_80036608:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80036620
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036620() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r6, 0x18(r3)
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80036674
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80036674
    li r10, 0x0
lbl_80036674:
    cmpwi r10, 0x0
    bne lbl_80036690
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80036690
    li r9, 0x0
lbl_80036690:
    cmpwi r9, 0x0
    bne lbl_800366A8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800366A8
    li r8, 0x0
lbl_800366A8:
    cmpwi r8, 0x0
    bne lbl_800366C4
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800366C4
    li r7, 0x0
lbl_800366C4:
    cmpwi r7, 0x0
    bne lbl_800366E0
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800366E0
    li r5, 0x0
lbl_800366E0:
    cmpwi r5, 0x0
    bne lbl_800366FC
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800366FC
    li r4, 0x0
lbl_800366FC:
    cmpwi r4, 0x0
    bne lbl_8003671C
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x95
    addi r5, r3, 0x71
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003671C:
    mr r3, r31
    li r4, 0x0
    bl fn_800364E0
    bl fn_801F41E8
    mr r3, r31
    li r4, 0x1
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80036760
    lwz r3, 0x18(r31)
    bl UpdateFrame__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl CalcVtx__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl CalcWorld__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl CalcMaterial__Q34nw4r3g3d7ScnRootFv
lbl_80036760:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036774
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036774() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r4, 0x2
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80036814
    mr r3, r31
    li r4, 0x1
    bl fn_800364E0
    lwz r3, 0x18(r31)
    lwz r4, 0x1c(r31)
    lhz r0, 0x20(r31)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r4, 0x4(r4)
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    lwz r3, 0x18(r31)
    bl CalcView__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl ZSort__Q34nw4r3g3d7ScnRootFv
    li r3, 0x1
    bl GXSetDither
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x1
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x18(r31)
    bl DrawOpa__Q34nw4r3g3d7ScnRootFv
    mr r3, r31
    bl fn_80036828
    li r3, 0x0
    bl GXSetAlphaUpdate
    lwz r3, 0x18(r31)
    bl DrawXlu__Q34nw4r3g3d7ScnRootFv
lbl_80036814:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036828
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036828() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800381E0
    cmpwi r3, 0x0
    beq lbl_80036864
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80036864
    lwz r3, 0x28(r31)
    bl fn_800425FC
lbl_80036864:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036878
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036878() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002D80C
    cmpwi r3, 0x0
    beq lbl_800368B4
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_800368B4
    lwz r3, 0x2c(r31)
    bl fn_8002BCD0
lbl_800368B4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800368C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800368C8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002BA18
    cmpwi r3, 0x0
    beq lbl_80036904
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80036904
    lwz r3, 0x3c(r31)
    bl fn_8002B764
lbl_80036904:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036918
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036918() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80038428
    mr r31, r3
    stw r3, 0x10(r1)
    cmpwi r3, 0x0
    bne lbl_80036960
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x14b
    addi r5, r3, 0xa7
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036960:
    mr r3, r29
    bl fn_80027B7C
    addi r4, r1, 0xc
    mr r5, r30
    bl Construct__Q34nw4r3g3d8ScnGroupFP12MEMAllocatorPUlUl
    mr r30, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800369B4
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800369B4
    li r10, 0x0
lbl_800369B4:
    cmpwi r10, 0x0
    bne lbl_800369D0
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_800369D0
    li r9, 0x0
lbl_800369D0:
    cmpwi r9, 0x0
    bne lbl_800369E8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800369E8
    li r8, 0x0
lbl_800369E8:
    cmpwi r8, 0x0
    bne lbl_80036A04
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80036A04
    li r7, 0x0
lbl_80036A04:
    cmpwi r7, 0x0
    bne lbl_80036A20
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80036A20
    li r6, 0x0
lbl_80036A20:
    cmpwi r6, 0x0
    bne lbl_80036A3C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80036A3C
    li r5, 0x0
lbl_80036A3C:
    cmpwi r5, 0x0
    bne lbl_80036A60
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x14e
    addi r5, r3, 0xcc
    mr r6, r30
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036A60:
    stw r31, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    mr r5, r30
    bl fn_800382C8
    cmpwi r3, 0x0
    beq lbl_80036AA4
    lhz r0, 0x10(r1)
    slwi r30, r0, 4
    lwz r0, 0x1c(r29)
    add r3, r0, r30
    bl fn_800364C8
    li r0, 0x1
    lwz r3, 0x1c(r29)
    stbx r0, r3, r30
    mr r3, r31
    b lbl_80036AC0
lbl_80036AA4:
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x155
    addi r5, r3, 0x104
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80036AC0:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80036AD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036AD8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r30, r3
    mr r24, r4
    mr r31, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    bl fn_80035E70
    cmplwi r3, 0x1
    beq lbl_80036C60
    mr r3, r30
    bl fn_80027B7C
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r28, 0xc(r1)
    stw r29, 0x10(r1)
    stw r0, 0x14(r1)
    addi r4, r1, 0x18
    mr r5, r24
    mr r6, r31
    clrlwi r7, r25, 16
    clrlwi r8, r26, 16
    mr r9, r27
    li r10, 0x0
    bl fn_8003531C
    stw r3, 0x24(r30)
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_80036B98
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80036B98
    li r11, 0x0
lbl_80036B98:
    cmpwi r11, 0x0
    bne lbl_80036BB4
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80036BB4
    li r10, 0x0
lbl_80036BB4:
    cmpwi r10, 0x0
    bne lbl_80036BCC
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_80036BCC
    li r9, 0x0
lbl_80036BCC:
    cmpwi r9, 0x0
    bne lbl_80036BE8
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80036BE8
    li r8, 0x0
lbl_80036BE8:
    cmpwi r8, 0x0
    bne lbl_80036C04
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80036C04
    li r7, 0x0
lbl_80036C04:
    cmpwi r7, 0x0
    bne lbl_80036C20
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80036C20
    li r5, 0x0
lbl_80036C20:
    cmpwi r5, 0x0
    bne lbl_80036C40
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x179
    addi r5, r3, 0x11c
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036C40:
    cmpwi r31, 0x0
    beq lbl_80036C58
    lwz r3, 0x24(r30)
    li r4, 0x0
    subi r5, r31, 0x1
    bl fn_80035A80
lbl_80036C58:
    li r3, 0x1
    b lbl_80036C64
lbl_80036C60:
    li r3, 0x0
lbl_80036C64:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80036C7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036C7C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r30, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r31, r10
    bl fn_80038160
    cmplwi r3, 0x1
    beq lbl_80036E14
    lwz r3, 0x18(r30)
    mr r4, r27
    bl GetCamera__Q34nw4r3g3d7ScnRootFi
    stw r3, 0x14(r1)
    addi r3, r1, 0x1c
    addi r4, r1, 0x14
    bl fn_8002AFB4
    mr r3, r30
    bl fn_80027B7C
    stw r29, 0x8(r1)
    addi r4, r1, 0x18
    mr r5, r24
    clrlwi r6, r25, 16
    clrlwi r7, r26, 16
    addi r8, r1, 0x1c
    mr r9, r27
    mr r10, r28
    bl fn_8003A194
    stw r3, 0x30(r30)
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_80036D48
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80036D48
    li r11, 0x0
lbl_80036D48:
    cmpwi r11, 0x0
    bne lbl_80036D64
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80036D64
    li r10, 0x0
lbl_80036D64:
    cmpwi r10, 0x0
    bne lbl_80036D7C
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_80036D7C
    li r9, 0x0
lbl_80036D7C:
    cmpwi r9, 0x0
    bne lbl_80036D98
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80036D98
    li r8, 0x0
lbl_80036D98:
    cmpwi r8, 0x0
    bne lbl_80036DB4
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80036DB4
    li r7, 0x0
lbl_80036DB4:
    cmpwi r7, 0x0
    bne lbl_80036DD0
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80036DD0
    li r5, 0x0
lbl_80036DD0:
    cmpwi r5, 0x0
    bne lbl_80036DF0
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x1c7
    addi r5, r3, 0x1c1
    opword 0x4CC63182
    bl fn_801A9384
lbl_80036DF0:
    mr r3, r30
    mr r4, r31
    bl fn_80036918
    stw r3, 0x10(r1)
    addi r3, r30, 0x34
    addi r4, r1, 0x10
    bl fn_8002AB78
    li r3, 0x1
    b lbl_80036E18
lbl_80036E14:
    li r3, 0x0
lbl_80036E18:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80036E30
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036E30() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80035E70
    cmpwi r3, 0x0
    beq lbl_80036E68
    lwz r3, 0x24(r31)
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x24(r31)
    li r3, 0x1
    b lbl_80036E6C
lbl_80036E68:
    li r3, 0x0
lbl_80036E6C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036E80
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036E80() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800381E0
    cmpwi r3, 0x0
    beq lbl_80036EB8
    lwz r3, 0x28(r31)
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x28(r31)
    li r3, 0x1
    b lbl_80036EBC
lbl_80036EB8:
    li r3, 0x0
lbl_80036EBC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036ED0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036ED0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002D80C
    cmpwi r3, 0x0
    beq lbl_80036F08
    lwz r3, 0x2c(r31)
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x2c(r31)
    li r3, 0x1
    b lbl_80036F0C
lbl_80036F08:
    li r3, 0x0
lbl_80036F0C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036F20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036F20() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_80036F70
    mr r3, r31
    addi r4, r31, 0x34
    lwz r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x30(r31)
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x30(r31)
    li r3, 0x1
    b lbl_80036F74
lbl_80036F70:
    li r3, 0x0
lbl_80036F74:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036F88
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036F88() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002BA18
    cmpwi r3, 0x0
    beq lbl_80036FC0
    lwz r3, 0x3c(r31)
    bl fn_80027CAC
    li r0, 0x0
    stw r0, 0x3c(r31)
    li r3, 0x1
    b lbl_80036FC4
lbl_80036FC0:
    li r3, 0x0
lbl_80036FC4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80036FD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80036FD8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl fn_80035E70
    cmpwi r3, 0x0
    beq lbl_800370A8
    mr r3, r29
    li r4, 0x18
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_800370A8
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x24(r29)
    li r4, 0x0
    bl fn_80035AC0
    mr r30, r3
    bl fn_8002B99C
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    slwi r31, r0, 2
    mr r3, r30
    bl fn_8002B99C
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    mullw r31, r0, r31
    mr r3, r30
    bl fn_8002B9A4
    mr r4, r31
    bl DCInvalidateRange
    lwz r3, 0x24(r29)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_800358B8
    bl fn_802E151C
    lwz r3, 0x24(r29)
    li r4, 0x0
    bl fn_80035A30
    mr r3, r29
    li r4, 0x10
    bl fn_80038200
    li r3, 0x1
    b lbl_800370AC
lbl_800370A8:
    li r3, 0x0
lbl_800370AC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800370C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800370C4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80035E70
    cmpwi r3, 0x0
    beq lbl_8003735C
    mr r3, r31
    li r4, 0x10
    bl fn_800381CC
    cmpwi r3, 0x0
    beq lbl_8003735C
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x0
    bl fn_8003D62C
    lwz r3, 0x24(r31)
    li r4, 0x0
    bl fn_80035AC0
    bl fn_8002B99C
    li r4, 0x0
    bl GXLoadTexObj
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    bl fn_800388B8
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl GXSetZMode
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3
    bl GXSetBlendMode
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
    bl GXSetVtxAttrFmt
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    lhz r0, 0xe(r3)
    lfd f1, lbl_8049E8A0
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f31, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f30, f0, f1
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, lbl_8049E8A8
    fmr f2, f1
    bl fn_800388DC
    li r3, 0x0
    li r4, 0x0
    bl fn_800388C4
    fmr f1, f31
    lfs f2, lbl_8049E8A8
    bl fn_800388DC
    li r3, 0x1
    li r4, 0x0
    bl fn_800388C4
    fmr f1, f31
    fmr f2, f30
    bl fn_800388DC
    li r3, 0x1
    li r4, 0x1
    bl fn_800388C4
    lfs f1, lbl_8049E8A8
    fmr f2, f30
    bl fn_800388DC
    li r3, 0x0
    li r4, 0x1
    bl fn_800388C4
    bl fn_800388B4
    mr r3, r31
    li r4, 0x8
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80037354
    lwz r3, 0x24(r31)
    li r4, 0x0
    bl fn_80035A58
    mr r3, r31
    li r4, 0x10
    bl fn_80038210
lbl_80037354:
    li r3, 0x1
    b lbl_80037360
lbl_8003735C:
    li r3, 0x0
lbl_80037360:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8003738C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003738C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80035E70
    cmpwi r3, 0x0
    beq lbl_800373E8
    mr r3, r31
    li r4, 0x4
    bl fn_800381CC
    cmpwi r3, 0x0
    beq lbl_800373E8
    mr r3, r31
    bl fn_80036FD8
    mr r3, r31
    li r4, 0x4
    bl fn_80038210
    mr r3, r31
    li r4, 0x8
    bl fn_80038200
    li r3, 0x1
    b lbl_800373EC
lbl_800373E8:
    li r3, 0x0
lbl_800373EC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80037400
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037400() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_800381E0
    cmpwi r3, 0x0
    beq lbl_80037508
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80037508
    lwz r3, 0x28(r31)
    bl fn_8004267C
    cmpwi r3, 0x0
    beq lbl_800374FC
    lwz r3, 0x18(r31)
    bl fn_80032A24
    lwz r0, 0x20(r31)
    stw r0, 0x10(r1)
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_80038240
    mr r4, r3
    lwz r3, 0x18(r31)
    bl fn_80038228
    lwz r3, 0x18(r31)
    lwz r4, 0x1c(r31)
    lhz r0, 0x20(r31)
    slwi r0, r0, 4
    add r4, r4, r0
    lwz r4, 0x4(r4)
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    lwz r3, 0x18(r31)
    bl GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
    stw r3, 0xc(r1)
    lwz r3, 0x28(r31)
    addi r4, r1, 0xc
    bl fn_80042B3C
    lwz r3, 0x18(r31)
    bl CalcView__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl ZSort__Q34nw4r3g3d7ScnRootFv
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x1
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x18(r31)
    bl DrawOpa__Q34nw4r3g3d7ScnRootFv
    li r3, 0x0
    bl GXSetAlphaUpdate
    lwz r3, 0x18(r31)
    bl DrawXlu__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r31)
    bl GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
    stw r3, 0x8(r1)
    lwz r3, 0x28(r31)
    addi r4, r1, 0x8
    bl fn_80042BF0
lbl_800374FC:
    lwz r3, 0x28(r31)
    bl fn_80042A14
    b lbl_8003750C
lbl_80037508:
    li r3, 0x0
lbl_8003750C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80037520
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037520() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002D80C
    cmpwi r3, 0x0
    beq lbl_8003756C
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_8003756C
    mr r3, r31
    bl fn_80037BB0
    mr r4, r3
    lwz r3, 0x2c(r31)
    bl fn_8002BD2C
    b lbl_80037570
lbl_8003756C:
    li r3, 0x0
lbl_80037570:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80037584
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037584() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_8003778C
    mr r3, r29
    li r4, 0x2
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_8003778C
    lwz r3, 0x30(r29)
    li r4, 0x1
    bl fn_80038068
    cmpwi r3, 0x0
    beq lbl_8003778C
    lwz r3, 0x30(r29)
    mr r4, r30
    li r5, 0x1
    bl fn_80038124
    cmpwi r3, 0x0
    beq lbl_8003778C
    lwz r3, 0x30(r29)
    mr r4, r30
    bl fn_80038084
    lwz r3, 0x30(r29)
    bl fn_8003807C
    mr r4, r3
    lwz r3, 0x18(r29)
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    lwz r3, 0x30(r29)
    mr r4, r30
    li r5, 0x4
    bl fn_80038124
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    clrlwi r3, r0, 24
    bl GXSetColorUpdate
    lwz r3, 0x18(r29)
    bl fn_80032A24
    lwz r0, 0x20(r29)
    stw r0, 0xc(r1)
    mr r3, r29
    addi r4, r1, 0xc
    bl fn_80038240
    mr r4, r3
    lwz r3, 0x18(r29)
    bl fn_80038228
    lwz r3, 0x18(r29)
    bl CalcView__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl ZSort__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    li r4, 0x1
    li r5, 0x4
    bl fn_801EE4A4
    addi r3, r1, 0x10
    bl GXGetCullMode
    li r3, 0x1
    bl GXSetCullMode
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x0
    bl GXSetDither
    lwz r3, 0x18(r29)
    bl DrawOpa__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl DrawXlu__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    li r4, 0x0
    li r5, 0x2
    bl fn_801EE4A4
    lwz r0, 0x34(r29)
    stw r0, 0x8(r1)
    mr r3, r29
    addi r4, r1, 0x8
    bl fn_80038240
    mr r31, r3
    bl fn_80032A68
    cmplwi r3, 0x1
    beq lbl_8003773C
    lwz r3, 0x18(r29)
    bl fn_80032A24
    lwz r3, 0x18(r29)
    mr r4, r31
    bl fn_80038228
    lwz r3, 0x18(r29)
    bl CalcView__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl ZSort__Q34nw4r3g3d7ScnRootFv
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x18(r29)
    bl DrawOpa__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r29)
    bl DrawXlu__Q34nw4r3g3d7ScnRootFv
lbl_8003773C:
    lwz r3, 0x30(r29)
    mr r4, r30
    bl fn_8003B0AC
    cmpwi r3, 0x0
    beq lbl_8003775C
    lwz r3, 0x30(r29)
    mr r4, r30
    bl fn_8003B2B4
lbl_8003775C:
    lwz r3, 0x30(r29)
    mr r4, r30
    li r5, 0x4
    bl fn_80038124
    cmplwi r3, 0x1
    beq lbl_8003777C
    li r3, 0x1
    bl GXSetColorUpdate
lbl_8003777C:
    lwz r3, 0x10(r1)
    bl GXSetCullMode
    li r3, 0x1
    b lbl_80037790
lbl_8003778C:
    li r3, 0x0
lbl_80037790:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_800377A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800377A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_800381F0
    cmpwi r3, 0x0
    beq lbl_800378C8
    mr r3, r30
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_800378C8
    lwz r3, 0x38(r30)
    li r4, 0x1
    bl fn_800389D8
    cmpwi r3, 0x0
    beq lbl_800378C8
    li r31, 0x0
    b lbl_800378B0
lbl_800377FC:
    lwz r3, 0x38(r30)
    mr r4, r31
    li r5, 0x1
    bl fn_8003899C
    cmpwi r3, 0x0
    beq lbl_800378AC
    lwz r3, 0x38(r30)
    mr r4, r31
    bl fn_800388FC
    lwz r3, 0x38(r30)
    bl fn_800388F4
    mr r4, r3
    lwz r3, 0x18(r30)
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    lwz r3, 0x18(r30)
    bl fn_80032A24
    lwz r0, 0x20(r30)
    stw r0, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_80038240
    mr r4, r3
    lwz r3, 0x18(r30)
    bl fn_80038228
    lwz r3, 0x18(r30)
    bl CalcView__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r30)
    bl GatherDrawScnObj__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x18(r30)
    bl ZSort__Q34nw4r3g3d7ScnRootFv
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x1
    li r4, 0x0
    bl GXSetDstAlpha
    lwz r3, 0x18(r30)
    bl DrawOpa__Q34nw4r3g3d7ScnRootFv
    li r3, 0x0
    bl GXSetAlphaUpdate
    lwz r3, 0x18(r30)
    bl DrawXlu__Q34nw4r3g3d7ScnRootFv
    lwz r3, 0x38(r30)
    mr r4, r31
    bl fn_80048908
lbl_800378AC:
    addi r31, r31, 0x1
lbl_800378B0:
    lwz r3, 0x38(r30)
    bl fn_800388EC
    cmplw r31, r3
    blt lbl_800377FC
    li r3, 0x1
    b lbl_800378CC
lbl_800378C8:
    li r3, 0x0
lbl_800378CC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800378E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800378E4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002BA18
    cmpwi r3, 0x0
    beq lbl_80037930
    mr r3, r31
    li r4, 0xa
    bl fn_800381CC
    cmplwi r3, 0x1
    beq lbl_80037930
    mr r3, r31
    bl fn_80037BB0
    mr r4, r3
    lwz r3, 0x3c(r31)
    bl fn_8002B7E8
    b lbl_80037934
lbl_80037930:
    li r3, 0x0
lbl_80037934:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80037948
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037948() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    lwz r0, 0x20(r3)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80038240
    mr r30, r3
    bl fn_80032A1C
    mr r31, r3
    mr r3, r30
    bl fn_80032AD8
    addi r0, r3, 0x1
    cmplw r0, r31
    bgt lbl_800379A0
    mr r3, r30
    mr r4, r29
    bl fn_80038228
    b lbl_800379BC
lbl_800379A0:
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x40a
    addi r5, r3, 0x104
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800379BC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800379D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800379D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r5
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80038240
    mr r30, r3
    bl fn_80032A1C
    mr r31, r3
    mr r3, r30
    bl fn_80032AD8
    addi r0, r3, 0x1
    cmplw r0, r31
    bgt lbl_80037A2C
    mr r3, r30
    mr r4, r29
    bl fn_80038228
    b lbl_80037A48
lbl_80037A2C:
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x41e
    addi r5, r3, 0x104
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_80037A48:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80037A60
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037A60() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_80037AE4
    lwz r0, 0x34(r30)
    stw r0, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_80038240
    mr r30, r3
    bl fn_80032A1C
    mr r31, r3
    mr r3, r30
    bl fn_80032AD8
    addi r0, r3, 0x1
    cmplw r0, r31
    bgt lbl_80037ACC
    mr r3, r30
    mr r4, r29
    bl fn_80038228
    b lbl_80037AE8
lbl_80037ACC:
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x434
    addi r5, r3, 0x104
    opword 0x4CC63182
    bl fn_801A9384
lbl_80037AE4:
    li r3, 0x0
lbl_80037AE8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80037B00
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037B00() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_80038240
    mr r4, r31
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80037B4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037B4C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x20(r3)
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bl fn_80038240
    bl fn_80032A24
    mr r3, r31
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_80037B9C
    lwz r0, 0x34(r31)
    stw r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_80038240
    bl fn_80032A24
lbl_80037B9C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80037BB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037BB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80035E70
    cmpwi r3, 0x0
    beq lbl_80037BE4
    lwz r3, 0x24(r31)
    li r4, 0x0
    bl fn_80035AC0
    bl fn_8002B99C
    b lbl_80037BE8
lbl_80037BE4:
    li r3, 0x0
lbl_80037BE8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80037BFC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037BFC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r27, r3
    mr r28, r5
    mr r29, r7
    mr r30, r8
    mr r31, r9
    mr r5, r6
    mr r6, r30
    bl fn_80038740
    lis r3, lbl_80348138@ha
    addi r0, r3, lbl_80348138@l
    stw r0, 0x4(r27)
    li r0, 0x0
    stw r0, 0x14(r27)
    stw r28, 0x18(r27)
    stw r29, 0x1c(r27)
    stw r0, 0x24(r27)
    stw r0, 0x28(r27)
    stw r0, 0x2c(r27)
    stw r0, 0x30(r27)
    stw r0, 0x38(r27)
    stw r0, 0x3c(r27)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r28, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80037CA0
    clrrwi r3, r28, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80037CA0
    li r9, 0x0
lbl_80037CA0:
    cmpwi r9, 0x0
    bne lbl_80037CBC
    clrrwi r3, r28, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80037CBC
    li r8, 0x0
lbl_80037CBC:
    cmpwi r8, 0x0
    bne lbl_80037CD4
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80037CD4
    li r7, 0x0
lbl_80037CD4:
    cmpwi r7, 0x0
    bne lbl_80037CF0
    clrrwi r3, r28, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80037CF0
    li r6, 0x0
lbl_80037CF0:
    cmpwi r6, 0x0
    bne lbl_80037D0C
    clrrwi r3, r28, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80037D0C
    li r5, 0x0
lbl_80037D0C:
    cmpwi r5, 0x0
    bne lbl_80037D28
    clrrwi r3, r28, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80037D28
    li r4, 0x0
lbl_80037D28:
    cmpwi r4, 0x0
    bne lbl_80037D4C
    lis r3, lbl_803483B0@ha
    addi r3, r3, lbl_803483B0@l
    li r4, 0x4da
    addi r5, r3, 0x71
    mr r6, r28
    opword 0x4CC63182
    bl fn_801A9384
lbl_80037D4C:
    li r26, 0x0
    li r28, 0x0
    b lbl_80037D68
lbl_80037D58:
    add r3, r29, r28
    bl fn_800364C8
    addi r26, r26, 0x1
    addi r28, r28, 0x10
lbl_80037D68:
    cmplw r26, r30
    blt lbl_80037D58
    li r0, 0x0
    stw r0, 0x20(r27)
    stw r0, 0x34(r27)
    mr r3, r27
    mr r4, r31
    bl fn_80036918
    stw r3, 0x8(r1)
    addi r3, r27, 0x20
    addi r4, r1, 0x8
    bl fn_8002AB78
    mr r3, r27
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80037DB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037DB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80037E28
    lis r4, lbl_80348138@ha
    addi r0, r4, lbl_80348138@l
    stw r0, 0x4(r3)
    bl fn_80036E30
    mr r3, r30
    bl fn_80036E80
    mr r3, r30
    bl fn_80036ED0
    mr r3, r30
    bl fn_80036F20
    mr r3, r30
    bl fn_80036F88
    mr r3, r30
    li r4, 0x0
    bl dtor_8003868C
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80037E28
    mr r3, r30
    bl fn_80027B74
lbl_80037E28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80037E44
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037E44() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    fmr f31, f1
    addi r3, r1, 0x8
    bl fn_8002AF5C
    addi r3, r1, 0x8
    mr r4, r30
    mr r5, r31
    bl fn_80018B24
    la r3, lbl_8049E8A8
    lfs f0, 0x4(r3)
    fmuls f31, f31, f0
    lfs f6, 0x10(r1)
    fneg f1, f6
    lfs f0, 0x30(r30)
    fsubs f0, f0, f31
    fcmpo cr0, f1, f0
    bge lbl_80037EB0
    li r3, 0x0
    b lbl_80037F58
lbl_80037EB0:
    lfs f0, 0x34(r30)
    fadds f0, f0, f31
    fcmpo cr0, f1, f0
    ble lbl_80037EC8
    li r3, 0x0
    b lbl_80037F58
lbl_80037EC8:
    lfs f4, 0x38(r30)
    lfs f3, 0x8(r1)
    fmuls f2, f4, f3
    lfs f0, 0x3c(r30)
    fmuls f1, f0, f6
    fsubs f0, f2, f1
    fneg f5, f31
    fcmpo cr0, f0, f5
    bge lbl_80037EF4
    li r3, 0x0
    b lbl_80037F58
lbl_80037EF4:
    fneg f0, f4
    fmuls f0, f0, f3
    fsubs f0, f0, f1
    fcmpo cr0, f0, f5
    bge lbl_80037F10
    li r3, 0x0
    b lbl_80037F58
lbl_80037F10:
    lfs f4, 0x40(r30)
    fneg f0, f4
    lfs f3, 0xc(r1)
    fmuls f2, f0, f3
    lfs f0, 0x44(r30)
    fmuls f1, f0, f6
    fsubs f0, f2, f1
    fcmpo cr0, f0, f5
    bge lbl_80037F3C
    li r3, 0x0
    b lbl_80037F58
lbl_80037F3C:
    fmuls f0, f4, f3
    fsubs f0, f0, f1
    fcmpo cr0, f0, f5
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_80037F58:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80037F7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80037F7C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_8002AE40
    mr r3, r30
    mr r4, r29
    bl GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
    mr r3, r30
    bl fn_800389EC
    mr r30, r3
    lfs f0, 0xb4(r3)
    stfs f0, 0x30(r29)
    lfs f0, 0xb8(r3)
    stfs f0, 0x34(r29)
    la r31, lbl_8049E8A8
    lfs f1, 0x10(r31)
    lfs f0, 0xac(r3)
    fmuls f1, f1, f0
    lfs f0, 0xc(r31)
    fmuls f1, f0, f1
    bl fn_801A3344
    lfs f0, 0x8(r31)
    fdivs f31, f0, f1
    fmuls f1, f31, f31
    lfs f0, 0xb0(r30)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_801A331C
    lfs f2, 0x8(r31)
    fdivs f1, f2, f1
    fmuls f0, f31, f1
    stfs f0, 0x38(r29)
    lfs f0, 0xb0(r30)
    fmuls f0, f0, f1
    stfs f0, 0x3c(r29)
    fmuls f0, f31, f31
    fadds f1, f2, f0
    bl fn_801A331C
    lfs f0, 0x8(r31)
    fdivs f1, f0, f1
    fmuls f0, f31, f1
    stfs f0, 0x40(r29)
    stfs f1, 0x44(r29)
    mr r3, r29
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80038068
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038068() {
    nofralloc
    lwz r0, 0x20(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8003807C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003807C() {
    nofralloc
    lwz r3, 0xa4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80038084
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038084() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800380BC
    mr r4, r3
    mr r3, r31
    bl fn_8003AEBC
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800380BC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800380BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x10(r3)
    cmplw r4, r0
    blt lbl_80038100
    lis r3, lbl_803483A0@ha
    addi r3, r3, lbl_803483A0@l
    li r4, 0xa5
    lis r5, lbl_80348374@ha
    addi r5, r5, lbl_80348374@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80038100:
    lwz r3, 0xc(r30)
    mulli r0, r31, 0x48
    add r3, r3, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80038124
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038124() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bl fn_800380BC
    lwz r0, 0x0(r3)
    and r3, r31, r0
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80038160
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038160() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_800381A0
    lhz r4, 0x36(r3)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_800381A0
    li r31, 0x1
lbl_800381A0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800381B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800381B8() {
    nofralloc
    clrlwi r3, r4, 16
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_800381CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800381CC() {
    nofralloc
    lwz r0, 0x14(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800381E0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800381E0() {
    nofralloc
    lwz r3, 0x28(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800381F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_800381F0() {
    nofralloc
    lwz r3, 0x38(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80038200
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038200() {
    nofralloc
    lwz r0, 0x14(r3)
    or r0, r0, r4
    stw r0, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80038210
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038210() {
    nofralloc
    lwz r0, 0x14(r3)
    andc r0, r0, r4
    stw r0, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80038220
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038220() {
    nofralloc
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_80038228
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038228() {
    nofralloc
    mr r5, r4
    lwz r4, 0xe4(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_80038240
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038240() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lhz r4, 0x2(r4)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8003828C
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_800382B0
lbl_8003828C:
    lis r3, lbl_80348320@ha
    addi r3, r3, lbl_80348320@l
    li r4, 0x98
    lis r5, lbl_803482EC@ha
    addi r5, r5, lbl_803482EC@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800382B0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800382C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800382C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r5, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80038324
    clrrwi r3, r5, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80038324
    li r10, 0x0
lbl_80038324:
    cmpwi r10, 0x0
    bne lbl_80038340
    clrrwi r3, r5, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80038340
    li r9, 0x0
lbl_80038340:
    cmpwi r9, 0x0
    bne lbl_80038358
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80038358
    li r8, 0x0
lbl_80038358:
    cmpwi r8, 0x0
    bne lbl_80038374
    clrrwi r3, r5, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80038374
    li r7, 0x0
lbl_80038374:
    cmpwi r7, 0x0
    bne lbl_80038390
    clrrwi r3, r5, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80038390
    li r6, 0x0
lbl_80038390:
    cmpwi r6, 0x0
    bne lbl_800383AC
    clrrwi r3, r5, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800383AC
    li r4, 0x0
lbl_800383AC:
    cmpwi r4, 0x0
    bne lbl_800383D4
    lis r3, lbl_803482A8@ha
    addi r3, r3, lbl_803482A8@l
    li r4, 0x6e
    lis r5, lbl_80348270@ha
    addi r5, r5, lbl_80348270@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_800383D4:
    mr r3, r29
    lhz r4, 0x2(r30)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8003840C
    lwz r3, 0xc(r29)
    lhz r0, 0x0(r30)
    slwi r0, r0, 2
    stwx r31, r3, r0
    li r3, 0x1
    b lbl_80038410
lbl_8003840C:
    li r3, 0x0
lbl_80038410:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80038428
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038428() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r5, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r0, r5
    bge lbl_800384BC
    li r31, 0x0
    li r4, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_800384BC
lbl_8003846C:
    lwz r5, 0xc(r3)
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    bne lbl_800384B0
    mr r3, r30
    lwz r12, 0x4(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    sth r3, 0xa(r1)
    clrlwi r0, r31, 16
    sth r0, 0x8(r1)
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x8(r1)
    b lbl_800384DC
lbl_800384B0:
    addi r31, r31, 0x1
    addi r4, r4, 0x4
    bdnz lbl_8003846C
lbl_800384BC:
    lis r3, lbl_803482D8@ha
    addi r3, r3, lbl_803482D8@l
    li r4, 0x67
    lis r5, lbl_803482C0@ha
    addi r5, r5, lbl_803482C0@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800384DC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800384F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800384F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80038670
    lhz r4, 0x2(r4)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038670
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80038584
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80038584
    li r10, 0x0
lbl_80038584:
    cmpwi r10, 0x0
    bne lbl_800385A0
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800385A0
    li r9, 0x0
lbl_800385A0:
    cmpwi r9, 0x0
    bne lbl_800385B8
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800385B8
    li r8, 0x0
lbl_800385B8:
    cmpwi r8, 0x0
    bne lbl_800385D4
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800385D4
    li r7, 0x0
lbl_800385D4:
    cmpwi r7, 0x0
    bne lbl_800385F0
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800385F0
    li r5, 0x0
lbl_800385F0:
    cmpwi r5, 0x0
    bne lbl_8003860C
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8003860C
    li r4, 0x0
lbl_8003860C:
    cmpwi r4, 0x0
    bne lbl_80038630
    lis r3, lbl_8034825C@ha
    addi r3, r3, lbl_8034825C@l
    li r4, 0x7d
    lis r5, lbl_80348210@ha
    addi r5, r5, lbl_80348210@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80038630:
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl Destroy__Q34nw4r3g3d6G3dObjFv
    li r4, 0x0
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    stw r0, 0x8(r30)
    li r3, 0x1
    b lbl_80038674
lbl_80038670:
    li r3, 0x0
lbl_80038674:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// dtor_8003868C
// ----------------------------------------------------------------------------
extern "C" asm void dtor_8003868C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    cmpwi r3, 0x0
    beq lbl_80038724
    lis r4, lbl_80348178@ha
    addi r0, r4, lbl_80348178@l
    stw r0, 0x4(r3)
    li r29, 0x0
    li r31, 0x0
    mr r30, r31
    b lbl_800386F0
lbl_800386CC:
    lwz r3, 0xc(r27)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_800386E8
    bl Destroy__Q34nw4r3g3d6G3dObjFv
    lwz r3, 0xc(r27)
    stwx r30, r3, r31
lbl_800386E8:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_800386F0:
    lwz r0, 0x10(r27)
    cmplw r29, r0
    blt lbl_800386CC
    li r0, 0x0
    stw r0, 0x8(r27)
    mr r3, r27
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r28
    cmpwi r0, 0x0
    ble lbl_80038724
    mr r3, r27
    bl fn_80027B74
lbl_80038724:
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80038740
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038740() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    mr r31, r5
    mr r29, r6
    bl fn_80027B84
    lis r3, lbl_80348178@ha
    addi r0, r3, lbl_80348178@l
    stw r0, 0x4(r30)
    li r0, 0x0
    stw r0, 0x8(r30)
    stw r31, 0xc(r30)
    stw r29, 0x10(r30)
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r31, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_800387BC
    clrrwi r3, r31, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800387BC
    li r9, 0x0
lbl_800387BC:
    cmpwi r9, 0x0
    bne lbl_800387D8
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800387D8
    li r8, 0x0
lbl_800387D8:
    cmpwi r8, 0x0
    bne lbl_800387F0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_800387F0
    li r7, 0x0
lbl_800387F0:
    cmpwi r7, 0x0
    bne lbl_8003880C
    clrrwi r3, r31, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003880C
    li r6, 0x0
lbl_8003880C:
    cmpwi r6, 0x0
    bne lbl_80038828
    clrrwi r3, r31, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80038828
    li r5, 0x0
lbl_80038828:
    cmpwi r5, 0x0
    bne lbl_80038844
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80038844
    li r4, 0x0
lbl_80038844:
    cmpwi r4, 0x0
    bne lbl_8003886C
    lis r3, lbl_803481FC@ha
    addi r3, r3, lbl_803481FC@l
    li r4, 0xc5
    lis r5, lbl_803481C0@ha
    addi r5, r5, lbl_803481C0@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003886C:
    li r6, 0x0
    li r3, 0x0
    mr r5, r3
    b lbl_8003888C
lbl_8003887C:
    lwz r4, 0xc(r30)
    stwx r5, r4, r3
    addi r6, r6, 0x1
    addi r3, r3, 0x4
lbl_8003888C:
    lwz r0, 0x10(r30)
    cmplw r6, r0
    blt lbl_8003887C
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_800388B4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388B4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_800388B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388B8() {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b GXSetTexCoordGen2
}

// ----------------------------------------------------------------------------
// fn_800388C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388C4() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800388DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388DC() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800388EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388EC() {
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800388F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388F4() {
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800388FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800388FC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80038934
    mr r4, r3
    mr r3, r31
    bl fn_8004875C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80038934
// ----------------------------------------------------------------------------
extern "C" asm void fn_80038934() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0xc(r3)
    cmplw r4, r0
    blt lbl_80038978
    lis r3, lbl_80348360@ha
    addi r3, r3, lbl_80348360@l
    li r4, 0x6c
    lis r5, lbl_80348334@ha
    addi r5, r5, lbl_80348334@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80038978:
    lwz r3, 0x8(r30)
    mulli r0, r31, 0x54
    add r3, r3, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8003899C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8003899C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bl fn_80038934
    lwz r0, 0x0(r3)
    and r3, r31, r0
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800389D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_800389D8() {
    nofralloc
    lwz r0, 0x10(r3)
    and r3, r0, r4
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_800389EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800389EC() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_800389F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800389F4() {
    nofralloc
    b fn_800389F8
}

