#include "types.h"

// Translation unit: src/glib_anim_access.cpp
// Total functions: 62

// Small Data symbols (@sda21)
extern "C" float lbl_8049C1A0;
extern "C" float lbl_8049D4A8;
extern "C" float lbl_8049D4AC;
extern "C" float lbl_8049E7C0;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80346C10[];
extern "C" u8 lbl_80346C44[];
extern "C" u8 lbl_80346C58[];
extern "C" u8 lbl_80346C8C[];
extern "C" u8 lbl_80346CA0[];
extern "C" u8 lbl_80346CD8[];
extern "C" u8 lbl_80346CF0[];
extern "C" u8 lbl_80346D30[];
extern "C" u8 lbl_80346D40[];
extern "C" u8 lbl_80346D68[];
extern "C" u8 lbl_80346D78[];
extern "C" u8 lbl_803C22B0[];

// Forward declarations
extern "C" void GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv();
extern "C" void GetResAnmChr__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmClr__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmShp__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc();
extern "C" void GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFi();
extern "C" void GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv();
extern "C" void GetResMdl__Q34nw4r3g3d7ResFileCFi();
extern "C" void PSMTXIdentity();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void fn_80016E44();
extern "C" void fn_800264D0();
extern "C" void fn_80026B44();
extern "C" void fn_80026D3C();
extern "C" void fn_80026DC8();
extern "C" void fn_80026E54();
extern "C" void fn_8002701C();
extern "C" void fn_800271DC();
extern "C" void fn_800273A4();
extern "C" void fn_8002756C();
extern "C" void fn_80027734();
extern "C" void fn_800278FC();
extern "C" void fn_80027CAC();
extern "C" void fn_80027CD8();
extern "C" void fn_80027D18();
extern "C" void fn_80027E3C();
extern "C" void fn_80027E60();
extern "C" void fn_80028004();
extern "C" void fn_800281AC();
extern "C" void fn_800282FC();
extern "C" void fn_80028380();
extern "C" void fn_80028404();
extern "C" void fn_80028480();
extern "C" void fn_800284FC();
extern "C" void fn_80028578();
extern "C" void fn_800286C4();
extern "C" void fn_80028808();
extern "C" void fn_8002894C();
extern "C" void fn_80028A90();
extern "C" void fn_80028BD4();
extern "C" void fn_80028D18();
extern "C" void fn_80029934();
extern "C" void fn_800299F4();
extern "C" void fn_80029A20();
extern "C" void fn_80029A90();
extern "C" void fn_80029AC0();
extern "C" void fn_80029ACC();
extern "C" void fn_8002A0DC();
extern "C" void fn_8002A17C();
extern "C" void fn_8002A2D0();
extern "C" void fn_8002A30C();
extern "C" void fn_8002A45C();
extern "C" void fn_8002A53C();
extern "C" void fn_8002A57C();
extern "C" void fn_8002A610();
extern "C" void fn_8002A660();
extern "C" void fn_8002A6B0();
extern "C" void fn_8002A940();
extern "C" void fn_8002A980();
extern "C" void fn_8002AACC();
extern "C" void fn_8002AB0C();
extern "C" void fn_8002AB30();
extern "C" void fn_8002AB54();
extern "C" void fn_8002AB60();
extern "C" void fn_8002AB70();
extern "C" void fn_8002AB78();
extern "C" void fn_8002AB84();
extern "C" void fn_8002AC0C();
extern "C" void fn_8002AC94();
extern "C" void fn_8002ACAC();
extern "C" void fn_8002ACC4();
extern "C" void fn_8002ACDC();
extern "C" void fn_8002ACF4();
extern "C" void fn_8002AD0C();
extern "C" void fn_8002AD20();
extern "C" void fn_8002AD34();
extern "C" void fn_8002AD48();
extern "C" void fn_8002AD5C();
extern "C" void fn_8002AD70();
extern "C" void fn_8002AD78();
extern "C" void fn_8002AD80();
extern "C" void fn_8002AD88();
extern "C" void fn_8002AD90();
extern "C" void fn_8002AD98();
extern "C" void fn_8002ADA0();
extern "C" void fn_8002ADA8();
extern "C" void fn_8002ADB0();
extern "C" void fn_8002ADB8();
extern "C" void fn_8002ADC0();
extern "C" void fn_8002ADC8();
extern "C" void fn_8002ADD0();
extern "C" void fn_8002ADD8();
extern "C" void fn_8002ADE0();
extern "C" void fn_8002ADE8();
extern "C" void fn_8002ADF0();
extern "C" void fn_8002ADF8();
extern "C" void fn_8002AE00();
extern "C" void fn_8002AE08();
extern "C" void fn_8002AE3C();
extern "C" void fn_8002AE40();
extern "C" void fn_8002AE44();
extern "C" void fn_8002AE6C();
extern "C" void fn_8002AEE0();
extern "C" void fn_8002EB6C();
extern "C" void fn_8002EC5C();
extern "C" void fn_80033A08();
extern "C" void fn_801A9384();
extern "C" void fn_801CF410();
extern "C" void fn_801CF514();
extern "C" void fn_801CF618();
extern "C" void fn_801CF9BC();

// ----------------------------------------------------------------------------
// fn_80029934
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029934() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4A8
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_800299B0
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800299B0
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800299B0
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_800299B0
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800299B0
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800299B0
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_800299B4
lbl_800299B0:
    li r6, 0x1
lbl_800299B4:
    cmpwi r6, 0x0
    bne lbl_800299DC
    lis r3, lbl_80346CD8@ha
    addi r3, r3, lbl_80346CD8@l
    li r4, 0x2f
    lis r5, lbl_80346CA0@ha
    addi r5, r5, lbl_80346CA0@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_800299DC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_800299F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_800299F4() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    lfs f0, lbl_8049E7C0
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    la r4, lbl_8049E7C0
    lfs f0, 0x4(r4)
    stfs f0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80029A20
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029A20() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r0, r3
    mr r31, r4
    addi r3, r1, 0xc
    mr r4, r0
    bl fn_80016E44
    addi r3, r1, 0xc
    bl GetResMdlNumEntries__Q34nw4r3g3d7ResFileCFv
    cmplw r31, r3
    bge lbl_80029A78
    addi r3, r1, 0xc
    mr r4, r31
    bl GetResMdl__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x8(r1)
    la r3, lbl_8049D4AC
    addi r4, r1, 0x8
    bl fn_80029A90
    li r3, 0x1
    b lbl_80029A7C
lbl_80029A78:
    li r3, 0x0
lbl_80029A7C:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80029A90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029A90() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80029AC0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80029AC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029AC0() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80029ACC
// ----------------------------------------------------------------------------
extern "C" asm void fn_80029ACC() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_27
    mr r28, r3
    mr r30, r4
    mr r27, r5
    bl fn_80029934
    mr r31, r3
    addi r3, r1, 0x90
    mr r4, r28
    bl fn_80016E44
    cmplwi r27, 0x1
    beq lbl_80029B3C
    cmplwi r27, 0x2
    beq lbl_80029C0C
    cmplwi r27, 0x3
    beq lbl_80029CD8
    cmplwi r27, 0x4
    beq lbl_80029DA8
    cmplwi r27, 0x5
    beq lbl_80029E78
    cmplwi r27, 0x6
    beq lbl_80029F48
    cmplwi r27, 0x7
    beq lbl_8002A018
    b lbl_8002A0B8
lbl_80029B3C:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029B64
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x106
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029B64:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_80029BF8
lbl_80029B74:
    addi r3, r1, 0x90
    mr r4, r27
    bl GetResAnmChr__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x70(r1)
    addi r3, r1, 0x8c
    addi r4, r1, 0x70
    bl fn_80028D18
    lwz r0, lbl_8049D4AC
    stw r0, 0x64(r1)
    lwz r0, 0x8c(r1)
    stw r0, 0x68(r1)
    mr r3, r31
    addi r4, r1, 0x68
    addi r5, r1, 0x64
    li r6, 0x1
    bl fn_80026E54
    stw r3, 0x6c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x6c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029BE4
    addi r3, r28, lbl_80346D78@l
    li r4, 0x10c
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029BE4:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80029BF8:
    addi r3, r1, 0x90
    bl GetResAnmChrNumEntries__Q34nw4r3g3d7ResFileCFv
    cmplw r27, r3
    blt lbl_80029B74
    b lbl_8002A0C0
lbl_80029C0C:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029C34
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x111
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029C34:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_80029CC4
lbl_80029C44:
    addi r3, r1, 0x90
    mr r4, r27
    bl GetResAnmClr__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x60(r1)
    addi r3, r1, 0x88
    addi r4, r1, 0x60
    bl fn_80028BD4
    lwz r0, lbl_8049D4AC
    stw r0, 0x54(r1)
    lwz r0, 0x88(r1)
    stw r0, 0x58(r1)
    mr r3, r31
    addi r4, r1, 0x58
    addi r5, r1, 0x54
    bl fn_8002701C
    stw r3, 0x5c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x5c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029CB0
    addi r3, r28, lbl_80346D78@l
    li r4, 0x117
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029CB0:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80029CC4:
    addi r3, r1, 0x90
    bl GetResAnmClr__Q34nw4r3g3d7ResFileCFPCc
    cmplw r27, r3
    blt lbl_80029C44
    b lbl_8002A0C0
lbl_80029CD8:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029D00
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x11c
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029D00:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_80029D94
lbl_80029D10:
    addi r3, r1, 0x90
    mr r4, r27
    bl fn_801CF514
    stw r3, 0x50(r1)
    addi r3, r1, 0x84
    addi r4, r1, 0x50
    bl fn_80028A90
    lwz r0, lbl_8049D4AC
    stw r0, 0x44(r1)
    lwz r0, 0x84(r1)
    stw r0, 0x48(r1)
    mr r3, r31
    addi r4, r1, 0x48
    addi r5, r1, 0x44
    li r6, 0x1
    bl fn_800271DC
    stw r3, 0x4c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x4c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029D80
    addi r3, r28, lbl_80346D78@l
    li r4, 0x122
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029D80:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80029D94:
    addi r3, r1, 0x90
    bl GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFPCc
    cmplw r27, r3
    blt lbl_80029D10
    b lbl_8002A0C0
lbl_80029DA8:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029DD0
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x127
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029DD0:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_80029E64
lbl_80029DE0:
    addi r3, r1, 0x90
    mr r4, r27
    bl fn_801CF618
    stw r3, 0x40(r1)
    addi r3, r1, 0x80
    addi r4, r1, 0x40
    bl fn_8002894C
    lwz r0, lbl_8049D4AC
    stw r0, 0x34(r1)
    lwz r0, 0x80(r1)
    stw r0, 0x38(r1)
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x34
    li r6, 0x1
    bl fn_800273A4
    stw r3, 0x3c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x3c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029E50
    addi r3, r28, lbl_80346D78@l
    li r4, 0x12d
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029E50:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80029E64:
    addi r3, r1, 0x90
    bl GetResAnmShp__Q34nw4r3g3d7ResFileCFPCc
    cmplw r27, r3
    blt lbl_80029DE0
    b lbl_8002A0C0
lbl_80029E78:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029EA0
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x132
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029EA0:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_80029F34
lbl_80029EB0:
    addi r3, r1, 0x90
    mr r4, r27
    bl fn_801CF410
    stw r3, 0x30(r1)
    addi r3, r1, 0x7c
    addi r4, r1, 0x30
    bl fn_80028808
    lwz r0, lbl_8049D4AC
    stw r0, 0x24(r1)
    lwz r0, 0x7c(r1)
    stw r0, 0x28(r1)
    mr r3, r31
    addi r4, r1, 0x28
    addi r5, r1, 0x24
    li r6, 0x1
    bl fn_8002756C
    stw r3, 0x2c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x2c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029F20
    addi r3, r28, lbl_80346D78@l
    li r4, 0x138
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029F20:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_80029F34:
    addi r3, r1, 0x90
    bl GetResAnmTexPat__Q34nw4r3g3d7ResFileCFPCc
    cmplw r27, r3
    blt lbl_80029EB0
    b lbl_8002A0C0
lbl_80029F48:
    la r3, lbl_8049D4AC
    bl fn_8002AB60
    cmpwi r3, 0x0
    bne lbl_80029F70
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x13d
    addi r5, r3, 0x15
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029F70:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_8002A004
lbl_80029F80:
    addi r3, r1, 0x90
    mr r4, r27
    bl GetResAnmShp__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x20(r1)
    addi r3, r1, 0x78
    addi r4, r1, 0x20
    bl fn_800286C4
    lwz r0, lbl_8049D4AC
    stw r0, 0x14(r1)
    lwz r0, 0x78(r1)
    stw r0, 0x18(r1)
    mr r3, r31
    addi r4, r1, 0x18
    addi r5, r1, 0x14
    li r6, 0x1
    bl fn_80027734
    stw r3, 0x1c(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0x1c
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_80029FF0
    addi r3, r28, lbl_80346D78@l
    li r4, 0x143
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_80029FF0:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_8002A004:
    addi r3, r1, 0x90
    bl GetResAnmScn__Q34nw4r3g3d7ResFileCFPCc
    cmplw r27, r3
    blt lbl_80029F80
    b lbl_8002A0C0
lbl_8002A018:
    li r27, 0x0
    li r29, 0x0
    lis r28, lbl_80346D78@ha
    b lbl_8002A0A4
lbl_8002A028:
    addi r3, r1, 0x90
    mr r4, r27
    bl GetResAnmTexSrt__Q34nw4r3g3d7ResFileCFi
    stw r3, 0x10(r1)
    addi r3, r1, 0x74
    addi r4, r1, 0x10
    bl fn_80028004
    lwz r0, 0x74(r1)
    stw r0, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800278FC
    stw r3, 0xc(r1)
    addi r3, r1, 0x94
    addi r4, r1, 0xc
    bl fn_8002AB78
    lwz r0, 0x94(r1)
    cmpwi r0, 0x0
    bne lbl_8002A090
    addi r3, r28, lbl_80346D78@l
    li r4, 0x14d
    addi r5, r3, 0x3e
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002A090:
    add r3, r30, r29
    addi r4, r1, 0x94
    bl fn_8002AB78
    addi r27, r27, 0x1
    addi r29, r29, 0x4
lbl_8002A0A4:
    addi r3, r1, 0x90
    bl fn_801CF9BC
    cmplw r27, r3
    blt lbl_8002A028
    b lbl_8002A0C0
lbl_8002A0B8:
    li r3, 0x0
    b lbl_8002A0C4
lbl_8002A0C0:
    li r3, 0x1
lbl_8002A0C4:
    addi r11, r1, 0xb0
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A0DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A0DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    bl fn_80029934
    mr r29, r3
    li r28, 0x0
    li r31, 0x0
    lis r30, lbl_80346D78@ha
    b lbl_8002A158
lbl_8002A110:
    add r4, r26, r31
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_8002A150
    mr r3, r29
    lwz r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8002A150
    addi r3, r30, lbl_80346D78@l
    li r4, 0x181
    addi r5, r3, 0x63
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002A150:
    addi r28, r28, 0x1
    addi r31, r31, 0x4
lbl_8002A158:
    cmplw r28, r27
    blt lbl_8002A110
    li r3, 0x1
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A17C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A17C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bl fn_8002AC0C
    mr r31, r3
    li r4, 0x1
    bl fn_80027E60
    lwz r0, 0x0(r29)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_8002A2D0
    mr r30, r3
    mr r3, r31
    bl fn_8002ADB0
    cmplwi r3, 0x1
    beq lbl_8002A208
    cmplwi r3, 0x2
    beq lbl_8002A228
    cmplwi r3, 0x3
    beq lbl_8002A244
    cmplwi r3, 0x4
    beq lbl_8002A260
    cmplwi r3, 0x5
    beq lbl_8002A27C
    cmplwi r3, 0x6
    beq lbl_8002A298
    b lbl_8002A2B4
lbl_8002A208:
    mr r3, r31
    bl fn_8002ADA8
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl fn_8002EB6C
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A228:
    mr r3, r31
    bl fn_8002ADA0
    mr r4, r3
    mr r3, r30
    bl fn_8002ACF4
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A244:
    mr r3, r31
    bl fn_8002AD98
    mr r4, r3
    mr r3, r30
    bl fn_8002ACDC
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A260:
    mr r3, r31
    bl fn_8002AD90
    mr r4, r3
    mr r3, r30
    bl fn_8002ACC4
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A27C:
    mr r3, r31
    bl fn_8002AD88
    mr r4, r3
    mr r3, r30
    bl fn_8002ACAC
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A298:
    mr r3, r31
    bl fn_8002AD80
    mr r4, r3
    mr r3, r30
    bl fn_8002AC94
    li r3, 0x1
    b lbl_8002A2B8
lbl_8002A2B4:
    li r3, 0x0
lbl_8002A2B8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A2D0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A2D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80033A08
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AB84
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A30C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A30C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bl fn_8002AC0C
    mr r31, r3
    li r4, 0x1
    bl fn_80027E3C
    lwz r0, 0x0(r29)
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_8002A2D0
    mr r30, r3
    mr r3, r31
    bl fn_8002ADB0
    cmplwi r3, 0x1
    beq lbl_8002A398
    cmplwi r3, 0x2
    beq lbl_8002A3B4
    cmplwi r3, 0x3
    beq lbl_8002A3D0
    cmplwi r3, 0x4
    beq lbl_8002A3EC
    cmplwi r3, 0x5
    beq lbl_8002A408
    cmplwi r3, 0x6
    beq lbl_8002A424
    b lbl_8002A440
lbl_8002A398:
    mr r3, r31
    bl fn_8002ADA8
    mr r4, r3
    mr r3, r30
    bl fn_8002EC5C
    li r3, 0x1
    b lbl_8002A444
lbl_8002A3B4:
    mr r3, r31
    bl fn_8002ADA0
    mr r4, r3
    mr r3, r30
    bl fn_8002AD5C
    li r3, 0x1
    b lbl_8002A444
lbl_8002A3D0:
    mr r3, r31
    bl fn_8002AD98
    mr r4, r3
    mr r3, r30
    bl fn_8002AD48
    li r3, 0x1
    b lbl_8002A444
lbl_8002A3EC:
    mr r3, r31
    bl fn_8002AD90
    mr r4, r3
    mr r3, r30
    bl fn_8002AD34
    li r3, 0x1
    b lbl_8002A444
lbl_8002A408:
    mr r3, r31
    bl fn_8002AD88
    mr r4, r3
    mr r3, r30
    bl fn_8002AD20
    li r3, 0x1
    b lbl_8002A444
lbl_8002A424:
    mr r3, r31
    bl fn_8002AD80
    mr r4, r3
    mr r3, r30
    bl fn_8002AD0C
    li r3, 0x1
    b lbl_8002A444
lbl_8002A440:
    li r3, 0x0
lbl_8002A444:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A45C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A45C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r30, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0x10(r1)
    addi r4, r1, 0x10
    bl fn_8002AC0C
    mr r31, r3
    lwz r0, 0x0(r26)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_8002A2D0
    mr r30, r3
    mr r3, r31
    bl fn_8002ADB0
    cmplwi r3, 0x1
    bne lbl_8002A520
    mr r3, r31
    bl fn_8002ADA8
    mr r31, r3
    cmpwi r29, 0x0
    beq lbl_8002A4E4
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
lbl_8002A4E4:
    subic r0, r28, 0x1
    subfe r29, r0, r28
    mr r3, r30
    bl fn_8002AD70
    bl fn_8002AE00
    stw r3, 0x8(r1)
    mr r3, r31
    addi r4, r1, 0x8
    mr r5, r27
    mr r6, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x50(r12)
    mtctr r12
    bctrl
    b lbl_8002A524
lbl_8002A520:
    li r3, 0x0
lbl_8002A524:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A53C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A53C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80029934
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    bl fn_800264D0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A57C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A57C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    mr r31, r3
    fmr f31, f1
    bl fn_80029934
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    mr r31, r3
    li r4, 0x10
    bl fn_80027E60
    mr r3, r31
    li r4, 0x2
    bl fn_80027E3C
    mr r3, r31
    bl fn_8002ADC0
    mr r31, r3
    lfs f0, 0x10(r3)
    fsubs f31, f31, f0
    fmr f1, f31
    fneg f2, f0
    lfs f3, 0xc(r3)
    bl fn_8002AE44
    stfs f1, 0x8(r31)
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A610
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A610() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    mr r4, r31
    bl fn_80027E60
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A660
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A660() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    mr r4, r31
    bl fn_80027E3C
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A6B0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A6B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_80029934
    lwz r0, 0x0(r30)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    mr r30, r3
    cmpwi r31, 0x0
    beq lbl_8002A80C
    bl fn_8002ADB0
    cmplwi r3, 0x1
    beq lbl_8002A72C
    cmplwi r3, 0x2
    beq lbl_8002A74C
    cmplwi r3, 0x3
    beq lbl_8002A76C
    cmplwi r3, 0x4
    beq lbl_8002A78C
    cmplwi r3, 0x5
    beq lbl_8002A7AC
    cmplwi r3, 0x6
    beq lbl_8002A7CC
    cmplwi r3, 0x7
    beq lbl_8002A7EC
    b lbl_8002A928
lbl_8002A72C:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADA8
    mr r4, r31
    bl fn_8002ADF0
    b lbl_8002A928
lbl_8002A74C:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADA0
    mr r4, r31
    bl fn_8002ADE8
    b lbl_8002A928
lbl_8002A76C:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD98
    mr r4, r31
    bl fn_8002ADE0
    b lbl_8002A928
lbl_8002A78C:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD90
    mr r4, r31
    bl fn_8002ADD8
    b lbl_8002A928
lbl_8002A7AC:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD88
    mr r4, r31
    bl fn_8002ADD0
    b lbl_8002A928
lbl_8002A7CC:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD80
    mr r4, r31
    bl fn_8002ADC8
    b lbl_8002A928
lbl_8002A7EC:
    li r3, 0x1
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADB8
    mr r4, r31
    bl fn_80027CD8
    b lbl_8002A928
lbl_8002A80C:
    bl fn_8002ADB0
    cmplwi r3, 0x1
    beq lbl_8002A84C
    cmplwi r3, 0x2
    beq lbl_8002A86C
    cmplwi r3, 0x3
    beq lbl_8002A88C
    cmplwi r3, 0x4
    beq lbl_8002A8AC
    cmplwi r3, 0x5
    beq lbl_8002A8CC
    cmplwi r3, 0x6
    beq lbl_8002A8EC
    cmplwi r3, 0x7
    beq lbl_8002A90C
    b lbl_8002A928
lbl_8002A84C:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADA8
    mr r4, r31
    bl fn_8002ADF0
    b lbl_8002A928
lbl_8002A86C:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADA0
    mr r4, r31
    bl fn_8002ADE8
    b lbl_8002A928
lbl_8002A88C:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD98
    mr r4, r31
    bl fn_8002ADE0
    b lbl_8002A928
lbl_8002A8AC:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD90
    mr r4, r31
    bl fn_8002ADD8
    b lbl_8002A928
lbl_8002A8CC:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD88
    mr r4, r31
    bl fn_8002ADD0
    b lbl_8002A928
lbl_8002A8EC:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002AD80
    mr r4, r31
    bl fn_8002ADC8
    b lbl_8002A928
lbl_8002A90C:
    li r3, 0x0
    bl fn_8002AE6C
    mr r31, r3
    mr r3, r30
    bl fn_8002ADB8
    mr r4, r31
    bl fn_80027CD8
lbl_8002A928:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A940
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A940() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_80029934
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_8002AC0C
    bl fn_8002ADC0
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002A980
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002A980() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D4A8
    cmpwi r0, 0x0
    bne lbl_8002AAB4
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r31, r3, 0x60
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x708
    bl fn_80026B44
    stw r3, lbl_8049D4A8
    cmpwi r31, 0x0
    beq lbl_8002AAAC
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
    beq lbl_8002AA04
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8002AA04
    li r11, 0x0
lbl_8002AA04:
    cmpwi r11, 0x0
    bne lbl_8002AA20
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_8002AA20
    li r10, 0x0
lbl_8002AA20:
    cmpwi r10, 0x0
    bne lbl_8002AA38
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_8002AA38
    li r9, 0x0
lbl_8002AA38:
    cmpwi r9, 0x0
    bne lbl_8002AA54
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8002AA54
    li r8, 0x0
lbl_8002AA54:
    cmpwi r8, 0x0
    bne lbl_8002AA70
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_8002AA70
    li r7, 0x0
lbl_8002AA70:
    cmpwi r7, 0x0
    bne lbl_8002AA8C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8002AA8C
    li r5, 0x0
lbl_8002AA8C:
    cmpwi r5, 0x0
    bne lbl_8002AAAC
    lis r3, lbl_80346D78@ha
    addi r3, r3, lbl_80346D78@l
    li r4, 0x34f
    addi r5, r3, 0x8a
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002AAAC:
    li r3, 0x1
    b lbl_8002AAB8
lbl_8002AAB4:
    li r3, 0x0
lbl_8002AAB8:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AACC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AACC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049D4A8
    cmpwi r3, 0x0
    beq lbl_8002AAF8
    bl fn_80027CAC
    li r0, 0x0
    stw r0, lbl_8049D4A8
    li r3, 0x1
    b lbl_8002AAFC
lbl_8002AAF8:
    li r3, 0x0
lbl_8002AAFC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB0C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029934
    bl fn_80026D3C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB30
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB30() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029934
    bl fn_80026DC8
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB54
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB54() {
    nofralloc
    la r3, lbl_8049D4AC
    li r4, 0x0
    b fn_8002AEE0
}

// ----------------------------------------------------------------------------
// fn_8002AB60
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB60() {
    nofralloc
    lwz r3, 0x0(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB70
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB70() {
    nofralloc
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB78
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB78() {
    nofralloc
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AB84
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AB84() {
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
    beq lbl_8002ABD0
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_8002ABF4
lbl_8002ABD0:
    lis r3, lbl_80346C8C@ha
    addi r3, r3, lbl_80346C8C@l
    li r4, 0x127
    lis r5, lbl_80346C58@ha
    addi r5, r5, lbl_80346C58@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8002ABF4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AC0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AC0C() {
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
    beq lbl_8002AC58
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    b lbl_8002AC7C
lbl_8002AC58:
    lis r3, lbl_80346C44@ha
    addi r3, r3, lbl_80346C44@l
    li r4, 0x127
    lis r5, lbl_80346C10@ha
    addi r5, r5, lbl_80346C10@l
    li r6, 0x0
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8002AC7C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AC94
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AC94() {
    nofralloc
    lwz r3, 0x8(r3)
    li r5, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002ACAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ACAC() {
    nofralloc
    lwz r3, 0x8(r3)
    li r5, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002ACC4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ACC4() {
    nofralloc
    lwz r3, 0x8(r3)
    li r5, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002ACDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ACDC() {
    nofralloc
    lwz r3, 0x8(r3)
    li r5, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002ACF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ACF4() {
    nofralloc
    lwz r3, 0x8(r3)
    li r5, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD0C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD0C() {
    nofralloc
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD20
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD20() {
    nofralloc
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD34
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD34() {
    nofralloc
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD48
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD48() {
    nofralloc
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD5C() {
    nofralloc
    lwz r3, 0x8(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_8002AD70
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD70() {
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AD78
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD78() {
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AD80
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD80() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_800282FC
}

// ----------------------------------------------------------------------------
// fn_8002AD88
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD88() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80028380
}

// ----------------------------------------------------------------------------
// fn_8002AD90
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD90() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80028404
}

// ----------------------------------------------------------------------------
// fn_8002AD98
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AD98() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80028480
}

// ----------------------------------------------------------------------------
// fn_8002ADA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADA0() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_800284FC
}

// ----------------------------------------------------------------------------
// fn_8002ADA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADA8() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80028578
}

// ----------------------------------------------------------------------------
// fn_8002ADB0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADB0() {
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002ADB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADB8() {
    nofralloc
    lwz r3, 0xc(r3)
    b fn_800281AC
}

// ----------------------------------------------------------------------------
// fn_8002ADC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADC0() {
    nofralloc
    addi r3, r3, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002ADC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADC8() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADD0() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADD8() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADE0() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADE8() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADF0() {
    nofralloc
    addi r3, r3, 0x18
    b fn_80027D18
}

// ----------------------------------------------------------------------------
// fn_8002ADF8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002ADF8() {
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE00
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE00() {
    nofralloc
    lwz r3, 0xe8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE08
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE08() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8002AE3C
    bl PSMTXIdentity
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE3C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE40
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE40() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE44
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE44() {
    nofralloc
    fcmpo cr0, f1, f3
    ble lbl_8002AE50
    b lbl_8002AE64
lbl_8002AE50:
    fcmpo cr0, f1, f2
    bge lbl_8002AE5C
    b lbl_8002AE60
lbl_8002AE5C:
    fmr f2, f1
lbl_8002AE60:
    fmr f3, f2
lbl_8002AE64:
    fmr f1, f3
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AE6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AE6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r0, 0x0
    cmplwi r3, 0x1
    bgt lbl_8002AE90
    li r0, 0x1
lbl_8002AE90:
    cmpwi r0, 0x0
    bne lbl_8002AEC0
    lis r3, lbl_80346D30@ha
    addi r3, r3, lbl_80346D30@l
    li r4, 0x3c
    lis r5, lbl_80346CF0@ha
    addi r5, r5, lbl_80346CF0@l
    mr r6, r31
    li r7, 0x0
    li r8, 0x1
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002AEC0:
    slwi r0, r31, 2
    la r3, lbl_8049C1A0
    lwzx r3, r3, r0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8002AEE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8002AEE0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8002AB70
    clrlwi r0, r31, 27
    cmpwi r0, 0x0
    beq lbl_8002AF28
    lis r3, lbl_80346D68@ha
    addi r3, r3, lbl_80346D68@l
    li r4, 0x78
    lis r5, lbl_80346D40@ha
    addi r5, r5, lbl_80346D40@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8002AF28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

