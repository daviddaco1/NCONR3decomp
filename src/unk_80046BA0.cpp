#include "types.h"

// Translation unit: src/unk_80046BA0.cpp
// Total functions: 12

// Small Data symbols (@sda21)
extern "C" float lbl_8049D66C;
extern "C" float lbl_8049EAB0;
extern "C" float lbl_8049EAB8;
extern "C" float lbl_8049EAC0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80339610[];
extern "C" u8 lbl_80390580[];
extern "C" u8 lbl_80395728[];
extern "C" u8 lbl_803C1A40[];

// Forward declarations
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void fn_800169F4();
extern "C" void fn_80016A44();
extern "C" void fn_80016A94();
extern "C" void fn_80016A98();
extern "C" void fn_80018AF8();
extern "C" void fn_80018B00();
extern "C" void fn_80018B08();
extern "C" void fn_80018B0C();
extern "C" void fn_80019D1C();
extern "C" void fn_80019DAC();
extern "C" void fn_80019E18();
extern "C" void fn_8001A940();
extern "C" void fn_8001B8B8();
extern "C" void fn_8001B8BC();
extern "C" void fn_8001B978();
extern "C" void fn_8001F9C8();
extern "C" void fn_80030E80();
extern "C" void fn_80046BA0();
extern "C" void fn_80046CDC();
extern "C" void fn_80046CEC();
extern "C" void fn_80046FEC();
extern "C" void fn_800470CC();
extern "C" void fn_8004716C();
extern "C" void fn_8004749C();
extern "C" void fn_80047BE4();
extern "C" void fn_80047BE8();
extern "C" void fn_80047BF4();
extern "C" void fn_80047C04();
extern "C" void fn_80047C2C();
extern "C" void fn_8005E5AC();
extern "C" void fn_8005E7D4();
extern "C" void fn_800868F4();
extern "C" void fn_80086904();
extern "C" void fn_8008AE14();
extern "C" void fn_8010E90C();
extern "C" void fn_8010E9A4();
extern "C" void fn_80173750();
extern "C" void fn_80177280();
extern "C" void fn_8017742C();
extern "C" void fn_8017776C();
extern "C" void fn_8017C22C();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXLoadTexObj();
extern "C" void fn_802E432C();
extern "C" void fn_802E4460();
extern "C" void fn_802E44A0();
extern "C" void fn_802E44E0();
extern "C" void fn_802E4538();
extern "C" void fn_802E4654();
extern "C" void fn_802E46B0();
extern "C" void fn_802E4750();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void GXSetBlendMode();
extern "C" void GXSetColorUpdate();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetZMode();
extern "C" void GXSetZCompLoc();
extern "C" void GXLoadTexMtxImm();
extern "C" void memset();

// ----------------------------------------------------------------------------
// fn_80046BA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046BA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r6
    li r3, 0x12
    lis r4, fn_80046CEC@ha
    addi r4, r4, fn_80046CEC@l
    lwz r5, lbl_8049D66C
    bl fn_80177280
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_80046BEC
    li r3, 0x0
    b lbl_80046CC4
lbl_80046BEC:
    li r4, 0x0
    li r5, 0x48
    bl memset
    cmpwi r27, 0x0
    beq lbl_80046C10
    stw r27, 0x14(r30)
    mr r3, r27
    bl fn_80019D1C
    stw r3, 0xc(r30)
lbl_80046C10:
    lwz r3, 0x3780(r27)
    lwz r4, 0x377c(r27)
    li r5, 0x3
    bl fn_80019E18
    stw r3, 0x28(r30)
    stw r31, 0x8(r30)
    stw r29, 0x10(r30)
    lfs f0, lbl_8049EAC0
    stfs f0, 0x44(r30)
    cmpwi r28, 0x0
    beq lbl_80046C74
    addi r3, r30, 0x3c
    lwz r0, 0x10(r28)
    slwi r0, r0, 3
    lis r4, lbl_80339610@ha
    addi r31, r4, lbl_80339610@l
    add r4, r31, r0
    bl fn_80030E80
    addi r3, r30, 0x40
    lwz r0, 0x10(r28)
    slwi r0, r0, 3
    add r4, r31, r0
    addi r4, r4, 0x4
    bl fn_80030E80
    b lbl_80046C94
lbl_80046C74:
    addi r3, r30, 0x3c
    lis r4, lbl_80339610@ha
    addi r31, r4, lbl_80339610@l
    addi r4, r31, 0x20
    bl fn_80030E80
    addi r3, r30, 0x40
    addi r4, r31, 0x24
    bl fn_80030E80
lbl_80046C94:
    li r3, 0x12
    lwz r4, 0x8(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80046CC0
    cmpwi r30, 0x0
    beq lbl_80046CC0
    mr r3, r30
    bl fn_80046CDC
lbl_80046CC0:
    mr r3, r30
lbl_80046CC4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80046CDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046CDC() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    b fn_8017776C
    blr
}

// ----------------------------------------------------------------------------
// fn_80046CEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046CEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80046DC8
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80046DA0
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r6, 0x28(r5)
    cmpwi r6, 0x3e9
    bne lbl_80046D48
    lwz r0, 0x7b4(r5)
    cmpwi r0, 0xff
    bne lbl_80046D48
    li r0, 0xf1
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80046FD8
lbl_80046D48:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_80046D5C
    li r3, 0x1
    b lbl_80046FD8
lbl_80046D5C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0xf1
    beq lbl_80046DA0
    lis r5, lbl_803C1A40@ha
    addi r5, r5, lbl_803C1A40@l
    lwz r5, 0x24(r5)
    lwz r0, 0xc(r3)
    cmpw r5, r0
    bne lbl_80046DA0
    lwz r0, 0x20(r3)
    cmplw r6, r0
    bne lbl_80046DA0
    li r0, 0xef
    stw r0, 0x4(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80046FD8
lbl_80046DA0:
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80046DC0
    mr r3, r31
    bl fn_80046CDC
    bl fn_8017742C
    li r3, 0x1
    b lbl_80046FD8
lbl_80046DC0:
    li r3, 0x0
    b lbl_80046FD8
lbl_80046DC8:
    lwz r3, 0x14(r3)
    mr r4, r31
    lwz r5, 0x4(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80046DEC
    cmpwi r3, 0x2
    beq lbl_80046DF8
    b lbl_80046E00
lbl_80046DEC:
    li r0, 0xef
    stw r0, 0x4(r31)
    b lbl_80046E00
lbl_80046DF8:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80046E00:
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2
    ble lbl_80046E14
    cmpwi r0, 0xf0
    bne lbl_80046EA0
lbl_80046E14:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xc
    bne lbl_80046E48
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80046CDC
    li r3, 0x0
    b lbl_80046FD8
lbl_80046E48:
    bl fn_8008AE14
    cmpwi r3, 0x0
    beq lbl_80046E5C
    li r3, 0x0
    b lbl_80046FD8
lbl_80046E5C:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_80046EA0
    lwz r3, 0x14(r31)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80046E98
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80046CDC
lbl_80046E98:
    li r3, 0x0
    b lbl_80046FD8
lbl_80046EA0:
    lwz r3, 0x4(r31)
    subi r0, r3, 0xef
    cmplwi r0, 0x1
    ble lbl_80046FB8
    cmpwi r3, 0x0
    beq lbl_80046ED4
    cmpwi r3, 0x1
    beq lbl_80046EDC
    cmpwi r3, 0x2
    beq lbl_80046F0C
    cmpwi r3, 0xf1
    beq lbl_80046FC0
    b lbl_80046FD4
lbl_80046ED4:
    li r0, 0x1
    stw r0, 0x4(r31)
lbl_80046EDC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80046EF4
    cmpwi r0, 0x1
    beq lbl_80046F00
    b lbl_80046FD4
lbl_80046EF4:
    mr r3, r31
    bl fn_80046FEC
    b lbl_80046FD4
lbl_80046F00:
    mr r3, r31
    bl fn_800470CC
    b lbl_80046FD4
lbl_80046F0C:
    lwz r3, 0x24(r31)
    subi r0, r3, 0x1
    stw r0, 0x24(r31)
    cmpwi r0, 0x0
    bgt lbl_80046F28
    li r0, 0xf0
    stw r0, 0x4(r31)
lbl_80046F28:
    lwz r0, 0x24(r31)
    lfd f1, lbl_8049EAB0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EAC0
    lfs f0, 0x4(r3)
    fdivs f0, f1, f0
    stfs f0, 0x44(r31)
    lwz r3, 0x14(r31)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80046FD4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    beq lbl_80046FA4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80046FD4
    bl fn_8005E5AC
    cmpwi r3, 0x2
    ble lbl_80046FD4
lbl_80046FA4:
    lfs f0, lbl_8049EAC0
    stfs f0, 0x44(r31)
    li r0, 0x1
    stw r0, 0x4(r31)
    b lbl_80046FD4
lbl_80046FB8:
    li r0, 0xf1
    stw r0, 0x4(r31)
lbl_80046FC0:
    lwz r3, 0x8(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_80046CDC
lbl_80046FD4:
    li r3, 0x0
lbl_80046FD8:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80046FEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80046FEC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r4, 0x14(r3)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8004702C
    li r0, 0x3c
    stw r0, 0x24(r3)
    li r0, 0x2
    stw r0, 0x4(r3)
    b lbl_800470B4
lbl_8004702C:
    lwz r4, 0x3854(r4)
    cmpwi r4, 0x0
    beq lbl_80047080
    lwz r0, 0x18(r3)
    cmplw r4, r0
    beq lbl_80047080
    stw r4, 0x18(r3)
    addi r3, r3, 0x3c
    lwz r0, 0x10(r4)
    slwi r0, r0, 3
    lis r4, lbl_80339610@ha
    addi r30, r4, lbl_80339610@l
    add r4, r30, r0
    bl fn_80030E80
    addi r3, r31, 0x40
    lwz r4, 0x18(r31)
    lwz r0, 0x10(r4)
    slwi r0, r0, 3
    add r4, r30, r0
    addi r4, r4, 0x4
    bl fn_80030E80
lbl_80047080:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_800470B4
    bl fn_8005E5AC
    cmpwi r3, 0x2
    bgt lbl_800470B4
    li r0, 0x1e
    stw r0, 0x24(r31)
    li r0, 0x2
    stw r0, 0x4(r31)
lbl_800470B4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800470CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_800470CC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x14(r3)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80047108
    li r0, 0x3c
    stw r0, 0x24(r3)
    li r0, 0x2
    stw r0, 0x4(r3)
    b lbl_80047158
lbl_80047108:
    lwz r4, 0x3854(r4)
    cmpwi r4, 0x0
    beq lbl_80047124
    lwz r0, 0x18(r3)
    cmplw r4, r0
    beq lbl_80047124
    stw r4, 0x18(r3)
lbl_80047124:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_80047158
    bl fn_8005E5AC
    cmpwi r3, 0x2
    bgt lbl_80047158
    li r0, 0x1e
    stw r0, 0x24(r31)
    li r0, 0x2
    stw r0, 0x4(r31)
lbl_80047158:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004716C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004716C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_80047488
    lwz r3, 0x14(r3)
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bgt lbl_80047488
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80047488
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xd
    bge lbl_80047488
    cmpwi r0, 0x9
    beq lbl_80047488
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80047488
    li r5, 0x0
    lwz r4, 0x14(r31)
    lwz r3, 0x3908(r4)
    lwz r6, 0x8(r3)
    b lbl_80047224
lbl_800471F4:
    lwz r3, 0x0(r6)
    cmpwi r3, 0x0
    beq lbl_80047220
    lwz r3, 0x70(r3)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_80047220
    rlwinm r0, r3, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80047220
    li r5, 0x1
lbl_80047220:
    lwz r6, 0x8(r6)
lbl_80047224:
    cmpwi r6, 0x0
    bne lbl_800471F4
    lwz r0, 0x58(r4)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    beq lbl_80047244
    cmpwi r5, 0x0
    beq lbl_80047488
lbl_80047244:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x3
    bgt lbl_80047488
    li r3, 0x0
    bl fn_800169F4
    li r3, 0x7ff
    bl Invalidate__Q34nw4r3g3d8G3DStateFUl
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x2
    li r9, 0x2
    bl GXSetChanCtrl
    lwz r3, 0x0(r31)
    clrlwi r4, r3, 31
    cmpwi r4, 0x0
    beq lbl_800472C8
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800472C8
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    bl GXSetZMode
    b lbl_80047314
lbl_800472C8:
    cmpwi r4, 0x0
    beq lbl_800472E4
    li r3, 0x1
    li r4, 0x1
    li r5, 0x0
    bl GXSetZMode
    b lbl_80047314
lbl_800472E4:
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80047304
    li r3, 0x0
    li r4, 0x7
    li r5, 0x1
    bl GXSetZMode
    b lbl_80047314
lbl_80047304:
    li r3, 0x0
    li r4, 0x7
    li r5, 0x0
    bl GXSetZMode
lbl_80047314:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8004733C
    li r3, 0x1
    li r4, 0x4
    li r5, 0x1
    li r6, 0x0
    bl GXSetBlendMode
    b lbl_80047398
lbl_8004733C:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80047360
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl GXSetBlendMode
    b lbl_80047398
lbl_80047360:
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80047384
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x6
    bl GXSetBlendMode
    b lbl_80047398
lbl_80047384:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetBlendMode
lbl_80047398:
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800473B4
    li r3, 0x0
    bl GXSetZCompLoc
    b lbl_800473BC
lbl_800473B4:
    li r3, 0x1
    bl GXSetZCompLoc
lbl_800473BC:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x0
    bl GXSetAlphaUpdate
    li r3, 0x0
    bl fn_8017C22C
    li r3, 0x0
    bl GXSetCullMode
    lwz r3, 0x1c(r31)
    li r4, 0x0
    bl GXLoadTexObj
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    mr r3, r31
    bl fn_8004749C
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_80047488:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8004749C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8004749C() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    opword 0xF3E10148
    stfd f30, 0x130(r1)
    opword 0xF3C10138
    stfd f29, 0x120(r1)
    opword 0xF3A10128
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_80047514
    addi r3, r1, 0x58
    lwz r4, 0x28(r30)
    addi r5, r30, 0x30
    bl fn_80018AF8
    addi r3, r1, 0x4c
    lwz r4, 0x18(r30)
    addi r4, r4, 0x84
    bl fn_80019DAC
    bl fn_80086904
    la r3, lbl_8049EAC0
    lfs f0, 0x8(r3)
    fadds f0, f0, f1
    stfs f0, 0x50(r1)
    stfs f0, 0x5c(r1)
    b lbl_80047544
lbl_80047514:
    addi r3, r1, 0x58
    lwz r4, 0x28(r30)
    addi r5, r30, 0x30
    bl fn_80018AF8
    addi r3, r1, 0x4c
    bl fn_800868F4
    bl fn_80086904
    la r3, lbl_8049EAC0
    lfs f0, 0x8(r3)
    fadds f0, f0, f1
    stfs f0, 0x50(r1)
    stfs f0, 0x5c(r1)
lbl_80047544:
    addi r3, r1, 0x10
    addi r4, r1, 0x4c
    addi r5, r1, 0x58
    bl fn_8001B8B8
    addi r3, r1, 0x10
    bl fn_8001B8BC
    fmr f31, f1
    la r3, lbl_8049EAC0
    lfs f0, 0xc(r3)
    fcmpo cr0, f1, f0
    ble lbl_80047574
    fmr f31, f0
lbl_80047574:
    la r3, lbl_8049EAC0
    lfs f0, 0x10(r3)
    fcmpo cr0, f31, f0
    bge lbl_80047588
    fmr f31, f0
lbl_80047588:
    addi r3, r1, 0x10
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x40
    addi r4, r1, 0x10
    bl fn_80019DAC
    addi r3, r1, 0x34
    addi r4, r1, 0x40
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x28
    addi r4, r1, 0x58
    addi r5, r1, 0x34
    bl fn_80018B00
    addi r3, r1, 0x34
    la r31, lbl_8049EAC0
    lfs f1, 0x14(r31)
    lfs f2, lbl_8049EAC0
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x40
    addi r5, r1, 0x34
    bl fn_8001F9C8
    addi r3, r1, 0x40
    addi r4, r1, 0x1c
    lfs f1, 0x18(r31)
    bl fn_80018B08
    addi r3, r1, 0x34
    addi r4, r1, 0x1c
    lfs f1, 0x1c(r31)
    bl fn_80018B08
    addi r3, r1, 0x98
    addi r4, r1, 0x28
    addi r5, r1, 0x34
    bl fn_80018B00
    addi r3, r1, 0xa4
    addi r4, r1, 0x28
    addi r5, r1, 0x40
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x58
    addi r5, r1, 0x40
    bl fn_80018B00
    addi r3, r1, 0xbc
    addi r4, r1, 0x58
    addi r5, r1, 0x34
    bl fn_80018B00
    lbz r0, 0x3f(r30)
    lfd f2, lbl_8049EAB8
    stw r0, 0xcc(r1)
    lis r3, 0x4330
    stw r3, 0xc8(r1)
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f2
    lfs f1, 0x44(r30)
    fmuls f30, f0, f1
    lbz r0, 0x43(r30)
    stw r0, 0xd4(r1)
    stw r3, 0xd0(r1)
    lfd f0, 0xd0(r1)
    fsubs f0, f0, f2
    fmuls f29, f0, f1
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_8001A940
    lwz r0, 0xc(r1)
    stw r0, 0x8(r1)
    li r3, 0x0
    addi r4, r1, 0x8
    bl fn_802E4654
    addi r3, r1, 0x68
    bl fn_80173750
    addi r3, r1, 0x68
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_80047BE8
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xc
    bl fn_802E46B0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    bl fn_80086904
    lfs f0, 0x20(r31)
    fadds f0, f0, f1
    stfs f0, 0xc0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0x9c(r1)
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x98(r1)
    lfs f2, 0x9c(r1)
    lfs f3, 0xa0(r1)
    bl fn_80047C2C
    lbz r3, 0x3c(r30)
    lbz r4, 0x3d(r30)
    lbz r5, 0x3e(r30)
    fctiwz f0, f30
    stfd f0, 0xd8(r1)
    lwz r6, 0xdc(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, 0x14(r31)
    fmr f2, f1
    bl fn_80047BF4
    lfs f1, 0xa4(r1)
    lfs f2, 0xa8(r1)
    lfs f3, 0xac(r1)
    bl fn_80047C2C
    lbz r3, 0x3c(r30)
    lbz r4, 0x3d(r30)
    lbz r5, 0x3e(r30)
    fctiwz f0, f30
    stfd f0, 0xe0(r1)
    lwz r6, 0xe4(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, lbl_8049EAC0
    lfs f2, 0x14(r31)
    bl fn_80047BF4
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_80047C2C
    lbz r3, 0x40(r30)
    lbz r4, 0x41(r30)
    lbz r5, 0x42(r30)
    fctiwz f0, f29
    stfd f0, 0xe8(r1)
    lwz r6, 0xec(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, lbl_8049EAC0
    fmr f2, f1
    bl fn_80047BF4
    lfs f1, 0xbc(r1)
    lfs f2, 0xc0(r1)
    lfs f3, 0xc4(r1)
    bl fn_80047C2C
    lbz r3, 0x40(r30)
    lbz r4, 0x41(r30)
    lbz r5, 0x42(r30)
    fctiwz f0, f29
    stfd f0, 0xf0(r1)
    lwz r6, 0xf4(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, 0x14(r31)
    lfs f2, lbl_8049EAC0
    bl fn_80047BF4
    bl fn_80047BE4
    lfs f0, 0x24(r31)
    fsubs f31, f31, f0
    addi r3, r1, 0x40
    addi r4, r1, 0x10
    bl fn_80019DAC
    addi r3, r1, 0x34
    addi r4, r1, 0x40
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x28
    addi r4, r1, 0x58
    addi r5, r1, 0x34
    bl fn_80018B00
    addi r3, r1, 0x34
    lfs f1, 0x14(r31)
    lfs f2, lbl_8049EAC0
    fmr f3, f1
    bl fn_80018B0C
    addi r3, r1, 0x1c
    addi r4, r1, 0x40
    addi r5, r1, 0x34
    bl fn_8001F9C8
    addi r3, r1, 0x40
    addi r4, r1, 0x1c
    lfs f1, 0x28(r31)
    bl fn_80018B08
    addi r3, r1, 0x34
    addi r4, r1, 0x1c
    lfs f1, 0x2c(r31)
    bl fn_80018B08
    addi r3, r1, 0x98
    addi r4, r1, 0x28
    addi r5, r1, 0x34
    bl fn_80018B00
    addi r3, r1, 0xa4
    addi r4, r1, 0x28
    addi r5, r1, 0x40
    bl fn_80018B00
    addi r3, r1, 0x28
    addi r4, r1, 0x10
    lfs f1, 0x30(r31)
    bl fn_80018B08
    addi r3, r1, 0x1c
    addi r4, r1, 0x28
    addi r5, r1, 0x58
    bl fn_80018B00
    addi r3, r1, 0x1c
    addi r4, r1, 0x28
    addi r5, r1, 0x58
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x1c
    addi r5, r1, 0x40
    bl fn_80018B00
    addi r3, r1, 0xbc
    addi r4, r1, 0x1c
    addi r5, r1, 0x34
    bl fn_80018B00
    addi r3, r1, 0x68
    bl fn_80173750
    addi r3, r1, 0x68
    li r4, 0x1e
    li r5, 0x1
    bl GXLoadTexMtxImm
    li r3, 0x1
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x1e
    bl fn_80047BE8
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    bl fn_80086904
    lfs f0, 0x8(r31)
    fadds f0, f0, f1
    stfs f0, 0xc0(r1)
    stfs f0, 0xb4(r1)
    stfs f0, 0xa8(r1)
    stfs f0, 0x9c(r1)
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f1, 0x98(r1)
    lfs f2, 0x9c(r1)
    lfs f3, 0xa0(r1)
    bl fn_80047C2C
    lbz r3, 0x3c(r30)
    lbz r4, 0x3d(r30)
    lbz r5, 0x3e(r30)
    fctiwz f0, f30
    stfd f0, 0xf8(r1)
    lwz r6, 0xfc(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, 0x14(r31)
    fmr f2, f1
    bl fn_80047BF4
    lfs f1, 0xa4(r1)
    lfs f2, 0xa8(r1)
    lfs f3, 0xac(r1)
    bl fn_80047C2C
    lbz r3, 0x3c(r30)
    lbz r4, 0x3d(r30)
    lbz r5, 0x3e(r30)
    fctiwz f0, f30
    stfd f0, 0x100(r1)
    lwz r6, 0x104(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, lbl_8049EAC0
    lfs f2, 0x14(r31)
    bl fn_80047BF4
    lfs f1, 0xb0(r1)
    lfs f2, 0xb4(r1)
    lfs f3, 0xb8(r1)
    bl fn_80047C2C
    lbz r3, 0x40(r30)
    lbz r4, 0x41(r30)
    lbz r5, 0x42(r30)
    fctiwz f0, f29
    stfd f0, 0x108(r1)
    lwz r6, 0x10c(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, lbl_8049EAC0
    fmr f2, f1
    bl fn_80047BF4
    lfs f1, 0xbc(r1)
    lfs f2, 0xc0(r1)
    lfs f3, 0xc4(r1)
    bl fn_80047C2C
    lbz r3, 0x40(r30)
    lbz r4, 0x41(r30)
    lbz r5, 0x42(r30)
    fctiwz f0, f29
    stfd f0, 0x110(r1)
    lwz r6, 0x114(r1)
    clrlwi r6, r6, 24
    bl fn_80047C04
    lfs f1, 0x14(r31)
    lfs f2, lbl_8049EAC0
    bl fn_80047BF4
    bl fn_80047BE4
    li r0, 0x148
    opword 0x13E1000C
    lfd f31, 0x140(r1)
    li r0, 0x138
    opword 0x13C1000C
    lfd f30, 0x130(r1)
    li r0, 0x128
    opword 0x13A1000C
    lfd f29, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_80047BE4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047BE4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_80047BE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047BE8() {
    nofralloc
    li r7, 0x0
    li r8, 0x7d
    b GXSetTexCoordGen2
}

// ----------------------------------------------------------------------------
// fn_80047BF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047BF4() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80047C04
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047C04() {
    nofralloc
    clrlwi r0, r3, 24
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    clrlwi r0, r4, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r5, 24
    stb r0, -0x8000(r3)
    clrlwi r0, r6, 24
    stb r0, -0x8000(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80047C2C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80047C2C() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}

